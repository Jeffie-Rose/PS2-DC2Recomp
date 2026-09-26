#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadSMF__13sndCSeSeqDataFPciP9mgCMemory
// Address: 0x18b530 - 0x18b880
void LoadSMF__13sndCSeSeqDataFPciP9mgCMemory_0x18b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadSMF__13sndCSeSeqDataFPciP9mgCMemory_0x18b530");
#endif

    switch (ctx->pc) {
        case 0x18b570u: goto label_18b570;
        case 0x18b584u: goto label_18b584;
        case 0x18b5a0u: goto label_18b5a0;
        case 0x18b5b4u: goto label_18b5b4;
        case 0x18b5c0u: goto label_18b5c0;
        case 0x18b5d4u: goto label_18b5d4;
        case 0x18b5e8u: goto label_18b5e8;
        case 0x18b5fcu: goto label_18b5fc;
        case 0x18b614u: goto label_18b614;
        case 0x18b620u: goto label_18b620;
        case 0x18b6dcu: goto label_18b6dc;
        case 0x18b70cu: goto label_18b70c;
        case 0x18b774u: goto label_18b774;
        case 0x18b820u: goto label_18b820;
        default: break;
    }

    ctx->pc = 0x18b530u;

    // 0x18b530: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x18b530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18b534: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x18b534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b538: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x18b538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x18b53c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18b53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18b540: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18b540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18b544: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18b544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18b548: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18b548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18b54c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18b550: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18b550u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b554: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18b558: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x18b558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b55c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18b55cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b560: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x18b560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x18b564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18b564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b568: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x18B568u;
    SET_GPR_U32(ctx, 31, 0x18B570u);
    ctx->pc = 0x18B56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B568u;
            // 0x18b56c: 0x24a54a38  addiu       $a1, $a1, 0x4A38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B570u; }
        if (ctx->pc != 0x18B570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B570u; }
        if (ctx->pc != 0x18B570u) { return; }
    }
    ctx->pc = 0x18B570u;
label_18b570:
    // 0x18b570: 0x144000ba  bnez        $v0, . + 4 + (0xBA << 2)
    ctx->pc = 0x18B570u;
    {
        const bool branch_taken_0x18b570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B570u;
            // 0x18b574: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b570) {
            ctx->pc = 0x18B85Cu;
            goto label_18b85c;
        }
    }
    ctx->pc = 0x18B578u;
    // 0x18b578: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x18b578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x18b57c: 0xc062cf0  jal         func_18B3C0
    ctx->pc = 0x18B57Cu;
    SET_GPR_U32(ctx, 31, 0x18B584u);
    ctx->pc = 0x18B580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B57Cu;
            // 0x18b580: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B3C0u;
    if (runtime->hasFunction(0x18B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x18B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B584u; }
        if (ctx->pc != 0x18B584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BigToLittle__FPvPvi_0x18b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B584u; }
        if (ctx->pc != 0x18B584u) { return; }
    }
    ctx->pc = 0x18B584u;
label_18b584:
    // 0x18b584: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x18b584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x18b588: 0x27a4008a  addiu       $a0, $sp, 0x8A
    ctx->pc = 0x18b588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 138));
    // 0x18b58c: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x18b58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x18b590: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18b590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18b594: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x18b594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18b598: 0xc062cf0  jal         func_18B3C0
    ctx->pc = 0x18B598u;
    SET_GPR_U32(ctx, 31, 0x18B5A0u);
    ctx->pc = 0x18B59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B598u;
            // 0x18b59c: 0x24730008  addiu       $s3, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B3C0u;
    if (runtime->hasFunction(0x18B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x18B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B5A0u; }
        if (ctx->pc != 0x18B5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BigToLittle__FPvPvi_0x18b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B5A0u; }
        if (ctx->pc != 0x18B5A0u) { return; }
    }
    ctx->pc = 0x18B5A0u;
label_18b5a0:
    // 0x18b5a0: 0x87a3008a  lh          $v1, 0x8A($sp)
    ctx->pc = 0x18b5a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 138)));
    // 0x18b5a4: 0x146000ad  bnez        $v1, . + 4 + (0xAD << 2)
    ctx->pc = 0x18B5A4u;
    {
        const bool branch_taken_0x18b5a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B5A4u;
            // 0x18b5a8: 0x27a4008c  addiu       $a0, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b5a4) {
            ctx->pc = 0x18B85Cu;
            goto label_18b85c;
        }
    }
    ctx->pc = 0x18B5ACu;
    // 0x18b5ac: 0xc062cf0  jal         func_18B3C0
    ctx->pc = 0x18B5ACu;
    SET_GPR_U32(ctx, 31, 0x18B5B4u);
    ctx->pc = 0x18B5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B5ACu;
            // 0x18b5b0: 0x2605000a  addiu       $a1, $s0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B3C0u;
    if (runtime->hasFunction(0x18B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x18B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B5B4u; }
        if (ctx->pc != 0x18B5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BigToLittle__FPvPvi_0x18b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B5B4u; }
        if (ctx->pc != 0x18B5B4u) { return; }
    }
    ctx->pc = 0x18B5B4u;
label_18b5b4:
    // 0x18b5b4: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x18b5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x18b5b8: 0xc062cf0  jal         func_18B3C0
    ctx->pc = 0x18B5B8u;
    SET_GPR_U32(ctx, 31, 0x18B5C0u);
    ctx->pc = 0x18B5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B5B8u;
            // 0x18b5bc: 0x27a4008e  addiu       $a0, $sp, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 142));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B3C0u;
    if (runtime->hasFunction(0x18B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x18B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B5C0u; }
        if (ctx->pc != 0x18B5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BigToLittle__FPvPvi_0x18b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B5C0u; }
        if (ctx->pc != 0x18B5C0u) { return; }
    }
    ctx->pc = 0x18B5C0u;
label_18b5c0:
    // 0x18b5c0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x18b5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x18b5c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18b5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b5c8: 0x24a54a40  addiu       $a1, $a1, 0x4A40
    ctx->pc = 0x18b5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19008));
    // 0x18b5cc: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x18B5CCu;
    SET_GPR_U32(ctx, 31, 0x18B5D4u);
    ctx->pc = 0x18B5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B5CCu;
            // 0x18b5d0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B5D4u; }
        if (ctx->pc != 0x18B5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B5D4u; }
        if (ctx->pc != 0x18B5D4u) { return; }
    }
    ctx->pc = 0x18B5D4u;
label_18b5d4:
    // 0x18b5d4: 0x144000a1  bnez        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x18B5D4u;
    {
        const bool branch_taken_0x18b5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B5D4u;
            // 0x18b5d8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b5d4) {
            ctx->pc = 0x18B85Cu;
            goto label_18b85c;
        }
    }
    ctx->pc = 0x18B5DCu;
    // 0x18b5dc: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x18b5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x18b5e0: 0xc062cf0  jal         func_18B3C0
    ctx->pc = 0x18B5E0u;
    SET_GPR_U32(ctx, 31, 0x18B5E8u);
    ctx->pc = 0x18B5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B5E0u;
            // 0x18b5e4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B3C0u;
    if (runtime->hasFunction(0x18B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x18B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B5E8u; }
        if (ctx->pc != 0x18B5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BigToLittle__FPvPvi_0x18b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B5E8u; }
        if (ctx->pc != 0x18B5E8u) { return; }
    }
    ctx->pc = 0x18B5E8u;
label_18b5e8:
    // 0x18b5e8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x18b5e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x18b5ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18b5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b5f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18b5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b5f4: 0xc04e714  jal         func_139C50
    ctx->pc = 0x18B5F4u;
    SET_GPR_U32(ctx, 31, 0x18B5FCu);
    ctx->pc = 0x18B5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B5F4u;
            // 0x18b5f8: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (runtime->hasFunction(0x139C50u)) {
        auto targetFn = runtime->lookupFunction(0x139C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B5FCu; }
        if (ctx->pc != 0x18B5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAllocTest__9mgCMemoryFi_0x139c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B5FCu; }
        if (ctx->pc != 0x18B5FCu) { return; }
    }
    ctx->pc = 0x18B5FCu;
label_18b5fc:
    // 0x18b5fc: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x18b5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x18b600: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x18b600u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x18b604: 0x12000095  beqz        $s0, . + 4 + (0x95 << 2)
    ctx->pc = 0x18B604u;
    {
        const bool branch_taken_0x18b604 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b604) {
            ctx->pc = 0x18B85Cu;
            goto label_18b85c;
        }
    }
    ctx->pc = 0x18B60Cu;
    // 0x18b60c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x18b60cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x18b610: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x18b610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18b614:
    // 0x18b614: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18b614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b618: 0xc062d1c  jal         func_18B470
    ctx->pc = 0x18B618u;
    SET_GPR_U32(ctx, 31, 0x18B620u);
    ctx->pc = 0x18B61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B618u;
            // 0x18b61c: 0x27a50084  addiu       $a1, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B470u;
    if (runtime->hasFunction(0x18B470u)) {
        auto targetFn = runtime->lookupFunction(0x18B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B620u; }
        if (ctx->pc != 0x18B620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDeltaTime__FPcPi_0x18b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B620u; }
        if (ctx->pc != 0x18B620u) { return; }
    }
    ctx->pc = 0x18B620u;
label_18b620:
    // 0x18b620: 0x90550000  lbu         $s5, 0x0($v0)
    ctx->pc = 0x18b620u;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b624: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x18b624u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b628: 0x32a20080  andi        $v0, $s5, 0x80
    ctx->pc = 0x18b628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
    // 0x18b62c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B62Cu;
    {
        const bool branch_taken_0x18b62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B62Cu;
            // 0x18b630: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b62c) {
            ctx->pc = 0x18B63Cu;
            goto label_18b63c;
        }
    }
    ctx->pc = 0x18B634u;
    // 0x18b634: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x18b634u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b638: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x18b638u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_18b63c:
    // 0x18b63c: 0x0  nop
    ctx->pc = 0x18b63cu;
    // NOP
    // 0x18b640: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18b640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18b644: 0x16a20009  bne         $s5, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18B644u;
    {
        const bool branch_taken_0x18b644 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x18b644) {
            ctx->pc = 0x18B66Cu;
            goto label_18b66c;
        }
    }
    ctx->pc = 0x18B64Cu;
    // 0x18b64c: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x18b64cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18b650: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x18b650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x18b654: 0x10620059  beq         $v1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x18B654u;
    {
        const bool branch_taken_0x18b654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18b654) {
            ctx->pc = 0x18B7BCu;
            goto label_18b7bc;
        }
    }
    ctx->pc = 0x18B65Cu;
    // 0x18b65c: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x18b65cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x18b660: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x18b660u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x18b664: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x18B664u;
    {
        const bool branch_taken_0x18b664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B664u;
            // 0x18b668: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b664) {
            ctx->pc = 0x18B7A8u;
            goto label_18b7a8;
        }
    }
    ctx->pc = 0x18B66Cu;
label_18b66c:
    // 0x18b66c: 0x0  nop
    ctx->pc = 0x18b66cu;
    // NOP
    // 0x18b670: 0x32a400f0  andi        $a0, $s5, 0xF0
    ctx->pc = 0x18b670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)240);
    // 0x18b674: 0x240300d0  addiu       $v1, $zero, 0xD0
    ctx->pc = 0x18b674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x18b678: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x18B678u;
    {
        const bool branch_taken_0x18b678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18B67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B678u;
            // 0x18b67c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b678) {
            ctx->pc = 0x18B6C0u;
            goto label_18b6c0;
        }
    }
    ctx->pc = 0x18B680u;
    // 0x18b680: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x18b680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x18b684: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x18B684u;
    {
        const bool branch_taken_0x18b684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18B688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B684u;
            // 0x18b688: 0x240300e0  addiu       $v1, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b684) {
            ctx->pc = 0x18B6C0u;
            goto label_18b6c0;
        }
    }
    ctx->pc = 0x18B68Cu;
    // 0x18b68c: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18B68Cu;
    {
        const bool branch_taken_0x18b68c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18B690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B68Cu;
            // 0x18b690: 0x240300b0  addiu       $v1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b68c) {
            ctx->pc = 0x18B6B4u;
            goto label_18b6b4;
        }
    }
    ctx->pc = 0x18B694u;
    // 0x18b694: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18B694u;
    {
        const bool branch_taken_0x18b694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18B698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B694u;
            // 0x18b698: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b694) {
            ctx->pc = 0x18B6B4u;
            goto label_18b6b4;
        }
    }
    ctx->pc = 0x18B69Cu;
    // 0x18b69c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B69Cu;
    {
        const bool branch_taken_0x18b69c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18B6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B69Cu;
            // 0x18b6a0: 0x24030090  addiu       $v1, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b69c) {
            ctx->pc = 0x18B6B4u;
            goto label_18b6b4;
        }
    }
    ctx->pc = 0x18B6A4u;
    // 0x18b6a4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B6A4u;
    {
        const bool branch_taken_0x18b6a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18b6a4) {
            ctx->pc = 0x18B6B4u;
            goto label_18b6b4;
        }
    }
    ctx->pc = 0x18B6ACu;
    // 0x18b6ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18B6ACu;
    {
        const bool branch_taken_0x18b6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b6ac) {
            ctx->pc = 0x18B6C4u;
            goto label_18b6c4;
        }
    }
    ctx->pc = 0x18B6B4u;
label_18b6b4:
    // 0x18b6b4: 0x0  nop
    ctx->pc = 0x18b6b4u;
    // NOP
    // 0x18b6b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18B6B8u;
    {
        const bool branch_taken_0x18b6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B6B8u;
            // 0x18b6bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6b8) {
            ctx->pc = 0x18B6C4u;
            goto label_18b6c4;
        }
    }
    ctx->pc = 0x18B6C0u;
label_18b6c0:
    // 0x18b6c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b6c4:
    // 0x18b6c4: 0x0  nop
    ctx->pc = 0x18b6c4u;
    // NOP
    // 0x18b6c8: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18B6C8u;
    {
        const bool branch_taken_0x18b6c8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18B6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B6C8u;
            // 0x18b6cc: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6c8) {
            ctx->pc = 0x18B6E4u;
            goto label_18b6e4;
        }
    }
    ctx->pc = 0x18B6D0u;
    // 0x18b6d0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x18b6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b6d4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x18B6D4u;
    SET_GPR_U32(ctx, 31, 0x18B6DCu);
    ctx->pc = 0x18B6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B6D4u;
            // 0x18b6d8: 0x24844a50  addiu       $a0, $a0, 0x4A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B6DCu; }
        if (ctx->pc != 0x18B6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B6DCu; }
        if (ctx->pc != 0x18B6DCu) { return; }
    }
    ctx->pc = 0x18B6DCu;
label_18b6dc:
    // 0x18b6dc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x18B6DCu;
    {
        const bool branch_taken_0x18b6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b6dc) {
            ctx->pc = 0x18B7A8u;
            goto label_18b7a8;
        }
    }
    ctx->pc = 0x18B6E4u;
label_18b6e4:
    // 0x18b6e4: 0x0  nop
    ctx->pc = 0x18b6e4u;
    // NOP
    // 0x18b6e8: 0x87a30084  lh          $v1, 0x84($sp)
    ctx->pc = 0x18b6e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x18b6ec: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x18b6ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18b6f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18b6f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b6f4: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x18b6f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x18b6f8: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x18B6F8u;
    {
        const bool branch_taken_0x18b6f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B6F8u;
            // 0x18b6fc: 0xa2150002  sb          $s5, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6f8) {
            ctx->pc = 0x18B794u;
            goto label_18b794;
        }
    }
    ctx->pc = 0x18B700u;
    // 0x18b700: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x18b700u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x18b704: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x18B704u;
    {
        const bool branch_taken_0x18b704 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B704u;
            // 0x18b708: 0x2447fff8  addiu       $a3, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b704) {
            ctx->pc = 0x18B764u;
            goto label_18b764;
        }
    }
    ctx->pc = 0x18B70Cu;
label_18b70c:
    // 0x18b70c: 0x0  nop
    ctx->pc = 0x18b70cu;
    // NOP
    // 0x18b710: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x18b710u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18b714: 0x2062821  addu        $a1, $s0, $a2
    ctx->pc = 0x18b714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x18b718: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x18b718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x18b71c: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x18b71cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x18b720: 0xa0a40004  sb          $a0, 0x4($a1)
    ctx->pc = 0x18b720u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b724: 0x82640001  lb          $a0, 0x1($s3)
    ctx->pc = 0x18b724u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x18b728: 0xa0a40005  sb          $a0, 0x5($a1)
    ctx->pc = 0x18b728u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b72c: 0x82640002  lb          $a0, 0x2($s3)
    ctx->pc = 0x18b72cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x18b730: 0xa0a40006  sb          $a0, 0x6($a1)
    ctx->pc = 0x18b730u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b734: 0x82640003  lb          $a0, 0x3($s3)
    ctx->pc = 0x18b734u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x18b738: 0xa0a40007  sb          $a0, 0x7($a1)
    ctx->pc = 0x18b738u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b73c: 0x82640004  lb          $a0, 0x4($s3)
    ctx->pc = 0x18b73cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18b740: 0xa0a40008  sb          $a0, 0x8($a1)
    ctx->pc = 0x18b740u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b744: 0x82640005  lb          $a0, 0x5($s3)
    ctx->pc = 0x18b744u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x18b748: 0xa0a40009  sb          $a0, 0x9($a1)
    ctx->pc = 0x18b748u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b74c: 0x82640006  lb          $a0, 0x6($s3)
    ctx->pc = 0x18b74cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x18b750: 0xa0a4000a  sb          $a0, 0xA($a1)
    ctx->pc = 0x18b750u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b754: 0x82640007  lb          $a0, 0x7($s3)
    ctx->pc = 0x18b754u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
    // 0x18b758: 0xa0a4000b  sb          $a0, 0xB($a1)
    ctx->pc = 0x18b758u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 11), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b75c: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18B75Cu;
    {
        const bool branch_taken_0x18b75c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B75Cu;
            // 0x18b760: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b75c) {
            ctx->pc = 0x18B70Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18b70c;
        }
    }
    ctx->pc = 0x18B764u;
label_18b764:
    // 0x18b764: 0x0  nop
    ctx->pc = 0x18b764u;
    // NOP
    // 0x18b768: 0xc2082a  slt         $at, $a2, $v0
    ctx->pc = 0x18b768u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18b76c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x18B76Cu;
    {
        const bool branch_taken_0x18b76c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b76c) {
            ctx->pc = 0x18B794u;
            goto label_18b794;
        }
    }
    ctx->pc = 0x18B774u;
label_18b774:
    // 0x18b774: 0x0  nop
    ctx->pc = 0x18b774u;
    // NOP
    // 0x18b778: 0x82650000  lb          $a1, 0x0($s3)
    ctx->pc = 0x18b778u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18b77c: 0x2062021  addu        $a0, $s0, $a2
    ctx->pc = 0x18b77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x18b780: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18b780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x18b784: 0xc2182a  slt         $v1, $a2, $v0
    ctx->pc = 0x18b784u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18b788: 0xa0850004  sb          $a1, 0x4($a0)
    ctx->pc = 0x18b788u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x18b78c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18B78Cu;
    {
        const bool branch_taken_0x18b78c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B78Cu;
            // 0x18b790: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b78c) {
            ctx->pc = 0x18B774u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18b774;
        }
    }
    ctx->pc = 0x18B794u;
label_18b794:
    // 0x18b794: 0x0  nop
    ctx->pc = 0x18b794u;
    // NOP
    // 0x18b798: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x18b798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x18b79c: 0x26100006  addiu       $s0, $s0, 0x6
    ctx->pc = 0x18b79cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x18b7a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b7a4: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x18b7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_18b7a8:
    // 0x18b7a8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x18b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18b7ac: 0x2741823  subu        $v1, $s3, $s4
    ctx->pc = 0x18b7acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x18b7b0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x18b7b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18b7b4: 0x1020ff97  beqz        $at, . + 4 + (-0x69 << 2)
    ctx->pc = 0x18B7B4u;
    {
        const bool branch_taken_0x18b7b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B7B4u;
            // 0x18b7b8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b7b4) {
            ctx->pc = 0x18B614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18b614;
        }
    }
    ctx->pc = 0x18B7BCu;
label_18b7bc:
    // 0x18b7bc: 0x0  nop
    ctx->pc = 0x18b7bcu;
    // NOP
    // 0x18b7c0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x18b7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x18b7c4: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x18b7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x18b7c8: 0x26040006  addiu       $a0, $s0, 0x6
    ctx->pc = 0x18b7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x18b7cc: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x18b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x18b7d0: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x18b7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x18b7d4: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x18b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18b7d8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x18b7d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x18b7dc: 0x0  nop
    ctx->pc = 0x18b7dcu;
    // NOP
    // 0x18b7e0: 0x0  nop
    ctx->pc = 0x18b7e0u;
    // NOP
    // 0x18b7e4: 0x1010  mfhi        $v0
    ctx->pc = 0x18b7e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18b7e8: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x18b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x18b7ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b7f0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x18b7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x18b7f4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x18b7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x18b7f8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x18b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18b7fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b800: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x18b800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18b804: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x18b804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x18b808: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B808u;
    {
        const bool branch_taken_0x18b808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B808u;
            // 0x18b80c: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b808) {
            ctx->pc = 0x18B818u;
            goto label_18b818;
        }
    }
    ctx->pc = 0x18B810u;
    // 0x18b810: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x18b810u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x18b814: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x18b814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18b818:
    // 0x18b818: 0xc04e748  jal         func_139D20
    ctx->pc = 0x18B818u;
    SET_GPR_U32(ctx, 31, 0x18B820u);
    ctx->pc = 0x18B81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B818u;
            // 0x18b81c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B820u; }
        if (ctx->pc != 0x18B820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B820u; }
        if (ctx->pc != 0x18B820u) { return; }
    }
    ctx->pc = 0x18B820u;
label_18b820:
    // 0x18b820: 0x87a5008e  lh          $a1, 0x8E($sp)
    ctx->pc = 0x18b820u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 142)));
    // 0x18b824: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x18b824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x18b828: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x18b828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x18b82c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x18b82cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x18b830: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x18b830u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18b834: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x18b834u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x18b838: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x18b838u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18b83c: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x18b83cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x18b840: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x18b840u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x18b844: 0x0  nop
    ctx->pc = 0x18b844u;
    // NOP
    // 0x18b848: 0x1810  mfhi        $v1
    ctx->pc = 0x18b848u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x18b84c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18b850: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x18b850u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x18b854: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18b854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18b858: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x18b858u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_18b85c:
    // 0x18b85c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x18b85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b860: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18b860u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18b864: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18b864u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b868: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18b868u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b86c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b86cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b870: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b874: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b878: 0x3e00008  jr          $ra
    ctx->pc = 0x18B878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B878u;
            // 0x18b87c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B880u;
}
