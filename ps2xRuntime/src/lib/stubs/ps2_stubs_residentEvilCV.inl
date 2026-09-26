// ===== G657 P1: 45 duplicate definitions removed ==========================
// Each collided with an identical symbol in another TU and was ALREADY discarded
// by the linker ("second definition ignored", LNK4006), so removal is
// behaviour-neutral by construction. Removed because under /GL /LTCG the same
// collision is fatal (LNK1179), which is what blocked the PGO pipeline (G652).
// Regenerate with tools/g657_dup_audit.py.
void syRtcInit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    static int logCount = 0;
    if (logCount < 8)
    {
        std::cout << "ps2_stub syRtcInit" << std::endl;
        ++logCount;
    }
    setReturnS32(ctx, 0);
}

namespace
{
    constexpr uint32_t kCvSyMallocAddr = 0x002D9A70u;

    constexpr uint32_t kCvMallocMaxSizeAddr = 0x01140B60u;
    constexpr uint32_t kCvMallocFreeSizeAddr = 0x01140B68u;
    constexpr uint32_t kCvMallocHeadPtrAddr = 0x01140B70u;
    constexpr uint32_t kCvMallocPoolAddr = 0x01140B80u;
    constexpr uint32_t kCvMallocPoolSize = 0x00CCD000u;

    constexpr uint32_t kCvMallocUseSizeOff = 0x00u;
    constexpr uint32_t kCvMallocTotalSizeOff = 0x04u;
    constexpr uint32_t kCvMallocNextOff = 0x0Cu;
    constexpr uint32_t kCvMallocHeaderSize = 0x40u;
    constexpr uint32_t kCvMallocInitialFreeSize = kCvMallocPoolSize - kCvMallocHeaderSize;

    uint32_t cvReadU32(const uint8_t *rdram, uint32_t addr)
    {
        if (!rdram)
        {
            return 0u;
        }

        const uint32_t offset = addr & PS2_RAM_MASK;
        if (offset + sizeof(uint32_t) > PS2_RAM_SIZE)
        {
            return 0u;
        }

        uint32_t value = 0u;
        std::memcpy(&value, rdram + offset, sizeof(value));
        return value;
    }

    void cvWriteU32(uint8_t *rdram, uint32_t addr, uint32_t value)
    {
        if (!rdram)
        {
            return;
        }

        const uint32_t offset = addr & PS2_RAM_MASK;
        if (offset + sizeof(uint32_t) > PS2_RAM_SIZE)
        {
            return;
        }

        std::memcpy(rdram + offset, &value, sizeof(value));
    }
}

void syFree(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    static int logCount = 0;
    if (logCount < 8)
    {
        std::cout << "ps2_stub syFree" << std::endl;
        ++logCount;
    }

    const uint32_t guestAddr = getRegU32(ctx, 4); // $a0
    bool released = false;

    if (rdram && guestAddr != 0u)
    {
        uint32_t search = cvReadU32(rdram, kCvMallocHeadPtrAddr);
        if (search < PS2_RAM_SIZE)
        {
            for (uint32_t guard = 0; guard < 0x100000u; ++guard)
            {
                const uint32_t next = cvReadU32(rdram, search + kCvMallocNextOff);
                if (next == 0u)
                {
                    break;
                }

                if (guestAddr == (next + kCvMallocHeaderSize))
                {
                    const uint32_t searchTotal = cvReadU32(rdram, search + kCvMallocTotalSizeOff);
                    const uint32_t nextTotal = cvReadU32(rdram, next + kCvMallocTotalSizeOff);
                    const uint32_t nextUsed = cvReadU32(rdram, next + kCvMallocUseSizeOff);
                    const uint32_t nextNext = cvReadU32(rdram, next + kCvMallocNextOff);
                    const uint32_t freeSize = cvReadU32(rdram, kCvMallocFreeSizeAddr);

                    cvWriteU32(rdram, search + kCvMallocTotalSizeOff, searchTotal + nextTotal + kCvMallocHeaderSize);
                    cvWriteU32(rdram, search + kCvMallocNextOff, nextNext);
                    cvWriteU32(rdram, kCvMallocFreeSizeAddr, freeSize + nextUsed + kCvMallocHeaderSize);

                    released = true;
                    break;
                }

                search = next;
                if (search >= PS2_RAM_SIZE)
                {
                    break;
                }
            }
        }
    }

    if (!released && runtime && guestAddr != 0u)
    {
        runtime->guestFree(guestAddr);
    }

    setReturnS32(ctx, 0);
}

void syMalloc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    const uint32_t requestedSize = getRegU32(ctx, 4); // $a0
    uint32_t resultAddr = 0u;

    if (runtime && requestedSize != 0u && runtime->hasFunction(kCvSyMallocAddr) && ctx->pc != kCvSyMallocAddr)
    {
        const uint32_t returnPc = getRegU32(ctx, 31);
        PS2Runtime::RecompiledFunction syMallocFn = runtime->lookupFunction(kCvSyMallocAddr);
        ctx->pc = kCvSyMallocAddr;
        {
            PS2Runtime::GuestExecutionScope guestExecution(runtime);
            syMallocFn(rdram, ctx, runtime);
        }

        if (ctx->pc == kCvSyMallocAddr || ctx->pc == 0u)
        {
            ctx->pc = returnPc;
        }

        resultAddr = getRegU32(ctx, 2);
    }
    else if (runtime && requestedSize != 0u)
    {
        // Match game expectation for allocator alignment while keeping pointers in EE RAM.
        resultAddr = runtime->guestMalloc(requestedSize, 64u);
    }

    static int logCount = 0;
    if (logCount < 16)
    {
        std::cout << "ps2_stub syMalloc"
                  << " size=0x" << std::hex << requestedSize
                  << " -> 0x" << resultAddr
                  << std::dec << std::endl;
        ++logCount;
    }

    setReturnU32(ctx, resultAddr);
}

void InitSdcParameter(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    static int logCount = 0;
    if (logCount < 8)
    {
        std::cout << "ps2_stub InitSdcParameter" << std::endl;
        ++logCount;
    }
    setReturnS32(ctx, 0);
}

void Ps2_pad_actuater(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    static int logCount = 0;
    if (logCount < 8)
    {
        std::cout << "ps2_stub Ps2_pad_actuater" << std::endl;
        ++logCount;
    }
    setReturnS32(ctx, 0);
}

void syMallocInit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    const uint32_t heapBase = getRegU32(ctx, 4); // $a0 (ignored by original CV allocator)
    const uint32_t heapSize = getRegU32(ctx, 5); // $a1 (ignored by original CV allocator)
 
    cvWriteU32(rdram, kCvMallocMaxSizeAddr, 0u);
    cvWriteU32(rdram, kCvMallocFreeSizeAddr, kCvMallocInitialFreeSize);
    cvWriteU32(rdram, kCvMallocHeadPtrAddr, kCvMallocPoolAddr);

    cvWriteU32(rdram, kCvMallocPoolAddr + kCvMallocUseSizeOff, 0u);
    cvWriteU32(rdram, kCvMallocPoolAddr + kCvMallocTotalSizeOff, kCvMallocInitialFreeSize);
    cvWriteU32(rdram, kCvMallocPoolAddr + kCvMallocNextOff, 0u); 

    static int logCount = 0;
    if (logCount < 8)
    {
        std::cout << "ps2_stub syMallocInit"
                  << " reqBase=0x" << std::hex << heapBase
                  << " reqSize=0x" << heapSize
                  << " pool=0x" << kCvMallocPoolAddr
                  << " free=0x" << kCvMallocInitialFreeSize
                  << std::dec << std::endl;
        ++logCount;
    }

    setReturnS32(ctx, 0);
}

void syHwInit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    static int logCount = 0;
    if (logCount < 8)
    {
        std::cout << "ps2_stub syHwInit" << std::endl;
        ++logCount;
    }
    setReturnS32(ctx, 0);
}

void syHwInit2(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    static int logCount = 0;
    if (logCount < 8)
    {
        std::cout << "ps2_stub syHwInit2" << std::endl;
        ++logCount;
    }
    setReturnS32(ctx, 0);
}

void InitGdSystemEx(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    static int logCount = 0;
    if (logCount < 8)
    {
        std::cout << "ps2_stub InitGdSystemEx" << std::endl;
        ++logCount;
    }
    setReturnS32(ctx, 0);
}

void pdInitPeripheral(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    static int logCount = 0;
    if (logCount < 8)
    {
        std::cout << "ps2_stub pdInitPeripheral" << std::endl;
        ++logCount;
    }
    setReturnS32(ctx, 0);
}

void pdGetPeripheral(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    static int logCount = 0;
    if (logCount < 8)
    {
        std::cout << "ps2_stub pdGetPeripheral" << std::endl;
        ++logCount;
    }
    setReturnS32(ctx, 0);
}


void InitReadKeyEx(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    static int logCount = 0;
    if (logCount < 8)
    {
        std::cout << "ps2_stub InitReadKeyEx" << std::endl;
        ++logCount;
    }
    setReturnS32(ctx, 0);
}

void SetRepeatKeyTimer(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    static int logCount = 0;
    if (logCount < 8)
    {
        std::cout << "ps2_stub SetRepeatKeyTimer" << std::endl;
        ++logCount;
    }
    setReturnS32(ctx, 0);
}

void StopFxProgram(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    static int logCount = 0;
    if (logCount < 8)
    {
        std::cout << "ps2_stub StopFxProgram" << std::endl;
        ++logCount;
    }
    setReturnS32(ctx, 0);
}

void sndr_trans_func(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    static int logCount = 0;
    if (logCount < 8)
    {
        std::cout << "ps2_stub sndr_trans_func (noop)" << std::endl;
        ++logCount;
    }

    // small hack for code veronica
    constexpr uint32_t kSndBusyAddrCv = 0x01E1E190;
    constexpr uint32_t kSndBusyAddrLegacy = 0x01E0E170;
    if (rdram)
    {
        uint32_t offset = kSndBusyAddrCv & PS2_RAM_MASK;
        if (offset + sizeof(uint32_t) <= PS2_RAM_SIZE)
        {
            *reinterpret_cast<uint32_t *>(rdram + offset) = 0;
        }

        offset = kSndBusyAddrLegacy & PS2_RAM_MASK;
        if (offset + sizeof(uint32_t) <= PS2_RAM_SIZE)
        {
            *reinterpret_cast<uint32_t *>(rdram + offset) = 0;
        }
    }

    setReturnS32(ctx, 0);
}

void sdDrvInit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    constexpr uint32_t kSdrInitAddr = 0x2E9A20u;

    static int logCount = 0;
    if (logCount < 8)
    {
        std::cout << "ps2_stub sdDrvInit -> SdrInit_0x2e9a20" << std::endl;
        ++logCount;
    }

    if (!runtime || !ctx || !rdram || !runtime->hasFunction(kSdrInitAddr))
    {
        setReturnS32(ctx, 0);
        return;
    }

    const uint32_t returnPc = getRegU32(ctx, 31);
    PS2Runtime::RecompiledFunction sdrInit = runtime->lookupFunction(kSdrInitAddr);
    ctx->pc = kSdrInitAddr;
    {
        PS2Runtime::GuestExecutionScope guestExecution(runtime);
        sdrInit(rdram, ctx, runtime);
    }

    if (ctx->pc == kSdrInitAddr || ctx->pc == 0u)
    {
        ctx->pc = returnPc;
    }
}

void ADXF_LoadPartitionNw(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    static int logCount = 0;
    if (logCount < 8)
    {
        std::cout << "ps2_stub ADXF_LoadPartitionNw (noop)" << std::endl;
        ++logCount;
    }
    // Return success to keep the ADX partition setup moving.
    setReturnS32(ctx, 0);
}

void sdSndStopAll(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    static int logCount = 0;
    if (logCount < 8)
    {
        std::cout << "ps2_stub sdSndStopAll" << std::endl;
        ++logCount;
    }
    setReturnS32(ctx, 0);
}

void sdSysFinish(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    static int logCount = 0;
    if (logCount < 8)
    {
        std::cout << "ps2_stub sdSysFinish" << std::endl;
        ++logCount;
    }
    setReturnS32(ctx, 0);
}

void ADXT_Init(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    static int logCount = 0;
    if (logCount < 8)
    {
        std::cout << "ps2_stub ADXT_Init" << std::endl;
        ++logCount;
    }
    setReturnS32(ctx, 0);
}

void ADXT_SetNumRetry(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    static int logCount = 0;
    if (logCount < 8)
    {
        std::cout << "ps2_stub ADXT_SetNumRetry" << std::endl;
        ++logCount;
    }
    setReturnS32(ctx, 0);
}


namespace
{
    int32_t g_cvMcFileCursor = 0;
    constexpr int32_t kCvMcFreeCapacityBytes = 0x01000000;
    constexpr int32_t kCvMcSaveCapacityBytes = 0x00080000;
    constexpr int32_t kCvMcConfigCapacityBytes = 0x00008000;
    constexpr int32_t kCvMcIconCapacityBytes = 0x00004000;
}











































