#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StartEvent__10CEditEventFP15CSceneEventData
// Address: 0x2ef9e0 - 0x2efbd4
void StartEvent__10CEditEventFP15CSceneEventData_0x2ef9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StartEvent__10CEditEventFP15CSceneEventData_0x2ef9e0");
#endif

    switch (ctx->pc) {
        case 0x2efa20u: goto label_2efa20;
        case 0x2efbbcu: goto label_2efbbc;
        default: break;
    }

    ctx->pc = 0x2ef9e0u;

    // 0x2ef9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ef9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ef9e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ef9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ef9e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ef9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ef9ec: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF9ECu;
    {
        const bool branch_taken_0x2ef9ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF9ECu;
            // 0x2ef9f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef9ec) {
            ctx->pc = 0x2EF9FCu;
            goto label_2ef9fc;
        }
    }
    ctx->pc = 0x2EF9F4u;
    // 0x2ef9f4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2EF9F4u;
    {
        const bool branch_taken_0x2ef9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF9F4u;
            // 0x2ef9f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef9f4) {
            ctx->pc = 0x2EFBC4u;
            goto label_2efbc4;
        }
    }
    ctx->pc = 0x2EF9FCu;
label_2ef9fc:
    // 0x2ef9fc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2ef9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2efa00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2efa00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efa04: 0x10670004  beq         $v1, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFA04u;
    {
        const bool branch_taken_0x2efa04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x2EFA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFA04u;
            // 0x2efa08: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa04) {
            ctx->pc = 0x2EFA18u;
            goto label_2efa18;
        }
    }
    ctx->pc = 0x2EFA0Cu;
    // 0x2efa0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2efa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2efa10: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EFA10u;
    {
        const bool branch_taken_0x2efa10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2efa10) {
            ctx->pc = 0x2EFA28u;
            goto label_2efa28;
        }
    }
    ctx->pc = 0x2EFA18u;
label_2efa18:
    // 0x2efa18: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2EFA18u;
    SET_GPR_U32(ctx, 31, 0x2EFA20u);
    ctx->pc = 0x2EFA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFA18u;
            // 0x2efa1c: 0x24841558  addiu       $a0, $a0, 0x1558 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFA20u; }
        if (ctx->pc != 0x2EFA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFA20u; }
        if (ctx->pc != 0x2EFA20u) { return; }
    }
    ctx->pc = 0x2EFA20u;
label_2efa20:
    // 0x2efa20: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2EFA20u;
    {
        const bool branch_taken_0x2efa20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFA20u;
            // 0x2efa24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa20) {
            ctx->pc = 0x2EFBC4u;
            goto label_2efbc4;
        }
    }
    ctx->pc = 0x2EFA28u;
label_2efa28:
    // 0x2efa28: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x2efa28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x2efa2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2efa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2efa30: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2efa30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2efa34: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2efa34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2efa38: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2efa38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2efa3c: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2efa3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2efa40: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2efa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2efa44: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2efa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2efa48: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2efa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2efa4c: 0xe6030020  swc1        $f3, 0x20($s0)
    ctx->pc = 0x2efa4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2efa50: 0xe6020024  swc1        $f2, 0x24($s0)
    ctx->pc = 0x2efa50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2efa54: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x2efa54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2efa58: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x2efa58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x2efa5c: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x2efa5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2efa60: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x2efa60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2efa64: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x2efa64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2efa68: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x2efa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2efa6c: 0xe6030030  swc1        $f3, 0x30($s0)
    ctx->pc = 0x2efa6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2efa70: 0xe6020034  swc1        $f2, 0x34($s0)
    ctx->pc = 0x2efa70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2efa74: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x2efa74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2efa78: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x2efa78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x2efa7c: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x2efa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2efa80: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x2efa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2efa84: 0xe6010040  swc1        $f1, 0x40($s0)
    ctx->pc = 0x2efa84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2efa88: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x2efa88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2efa8c: 0xc4a30030  lwc1        $f3, 0x30($a1)
    ctx->pc = 0x2efa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2efa90: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x2efa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2efa94: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x2efa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2efa98: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x2efa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2efa9c: 0xe6030050  swc1        $f3, 0x50($s0)
    ctx->pc = 0x2efa9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2efaa0: 0xe6020054  swc1        $f2, 0x54($s0)
    ctx->pc = 0x2efaa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2efaa4: 0xe6010058  swc1        $f1, 0x58($s0)
    ctx->pc = 0x2efaa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2efaa8: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x2efaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x2efaac: 0xc4a30040  lwc1        $f3, 0x40($a1)
    ctx->pc = 0x2efaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2efab0: 0xc4a20044  lwc1        $f2, 0x44($a1)
    ctx->pc = 0x2efab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2efab4: 0xc4a10048  lwc1        $f1, 0x48($a1)
    ctx->pc = 0x2efab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2efab8: 0xc4a0004c  lwc1        $f0, 0x4C($a1)
    ctx->pc = 0x2efab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2efabc: 0xe6030060  swc1        $f3, 0x60($s0)
    ctx->pc = 0x2efabcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2efac0: 0xe6020064  swc1        $f2, 0x64($s0)
    ctx->pc = 0x2efac0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2efac4: 0xe6010068  swc1        $f1, 0x68($s0)
    ctx->pc = 0x2efac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2efac8: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x2efac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x2efacc: 0xc4a30050  lwc1        $f3, 0x50($a1)
    ctx->pc = 0x2efaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2efad0: 0xc4a20054  lwc1        $f2, 0x54($a1)
    ctx->pc = 0x2efad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2efad4: 0xc4a10058  lwc1        $f1, 0x58($a1)
    ctx->pc = 0x2efad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2efad8: 0xc4a0005c  lwc1        $f0, 0x5C($a1)
    ctx->pc = 0x2efad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2efadc: 0xe6030070  swc1        $f3, 0x70($s0)
    ctx->pc = 0x2efadcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2efae0: 0xe6020074  swc1        $f2, 0x74($s0)
    ctx->pc = 0x2efae0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2efae4: 0xe6010078  swc1        $f1, 0x78($s0)
    ctx->pc = 0x2efae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2efae8: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x2efae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x2efaec: 0x78a60060  lq          $a2, 0x60($a1)
    ctx->pc = 0x2efaecu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x2efaf0: 0x78a40070  lq          $a0, 0x70($a1)
    ctx->pc = 0x2efaf0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x2efaf4: 0x78a30080  lq          $v1, 0x80($a1)
    ctx->pc = 0x2efaf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x2efaf8: 0x78a20090  lq          $v0, 0x90($a1)
    ctx->pc = 0x2efaf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x2efafc: 0x7e060080  sq          $a2, 0x80($s0)
    ctx->pc = 0x2efafcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 6));
    // 0x2efb00: 0x7e040090  sq          $a0, 0x90($s0)
    ctx->pc = 0x2efb00u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 4));
    // 0x2efb04: 0x7e0300a0  sq          $v1, 0xA0($s0)
    ctx->pc = 0x2efb04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 3));
    // 0x2efb08: 0x7e0200b0  sq          $v0, 0xB0($s0)
    ctx->pc = 0x2efb08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 2));
    // 0x2efb0c: 0x78a300a0  lq          $v1, 0xA0($a1)
    ctx->pc = 0x2efb0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x2efb10: 0x78a200b0  lq          $v0, 0xB0($a1)
    ctx->pc = 0x2efb10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x2efb14: 0x7e0300c0  sq          $v1, 0xC0($s0)
    ctx->pc = 0x2efb14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 3));
    // 0x2efb18: 0x7e0200d0  sq          $v0, 0xD0($s0)
    ctx->pc = 0x2efb18u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), GPR_VEC(ctx, 2));
    // 0x2efb1c: 0x8ca200c0  lw          $v0, 0xC0($a1)
    ctx->pc = 0x2efb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x2efb20: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x2efb20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x2efb24: 0x8ca200c4  lw          $v0, 0xC4($a1)
    ctx->pc = 0x2efb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x2efb28: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x2efb28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x2efb2c: 0x8ca200c8  lw          $v0, 0xC8($a1)
    ctx->pc = 0x2efb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
    // 0x2efb30: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x2efb30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x2efb34: 0x8ca200cc  lw          $v0, 0xCC($a1)
    ctx->pc = 0x2efb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
    // 0x2efb38: 0xae0200ec  sw          $v0, 0xEC($s0)
    ctx->pc = 0x2efb38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
    // 0x2efb3c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2efb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2efb40: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2efb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2efb44: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EFB44u;
    {
        const bool branch_taken_0x2efb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFB44u;
            // 0x2efb48: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb44) {
            ctx->pc = 0x2EFB74u;
            goto label_2efb74;
        }
    }
    ctx->pc = 0x2EFB4Cu;
    // 0x2efb4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EFB4Cu;
    {
        const bool branch_taken_0x2efb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efb4c) {
            ctx->pc = 0x2EFB5Cu;
            goto label_2efb5c;
        }
    }
    ctx->pc = 0x2EFB54u;
    // 0x2efb54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EFB54u;
    {
        const bool branch_taken_0x2efb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFB54u;
            // 0x2efb58: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb54) {
            ctx->pc = 0x2EFB60u;
            goto label_2efb60;
        }
    }
    ctx->pc = 0x2EFB5Cu;
label_2efb5c:
    // 0x2efb5c: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x2efb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
label_2efb60:
    // 0x2efb60: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2efb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2efb64: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2efb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2efb68: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EFB68u;
    {
        const bool branch_taken_0x2efb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFB68u;
            // 0x2efb6c: 0x240200f9  addiu       $v0, $zero, 0xF9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb68) {
            ctx->pc = 0x2EFB74u;
            goto label_2efb74;
        }
    }
    ctx->pc = 0x2EFB70u;
    // 0x2efb70: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x2efb70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_2efb74:
    // 0x2efb74: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2efb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2efb78: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2efb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2efb7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EFB7Cu;
    {
        const bool branch_taken_0x2efb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFB7Cu;
            // 0x2efb80: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb7c) {
            ctx->pc = 0x2EFB88u;
            goto label_2efb88;
        }
    }
    ctx->pc = 0x2EFB84u;
    // 0x2efb84: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2efb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2efb88:
    // 0x2efb88: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2efb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2efb8c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2efb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x2efb90: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EFB90u;
    {
        const bool branch_taken_0x2efb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFB90u;
            // 0x2efb94: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb90) {
            ctx->pc = 0x2EFB9Cu;
            goto label_2efb9c;
        }
    }
    ctx->pc = 0x2EFB98u;
    // 0x2efb98: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2efb98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2efb9c:
    // 0x2efb9c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2efb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2efba0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2efba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2efba4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EFBA4u;
    {
        const bool branch_taken_0x2efba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EFBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFBA4u;
            // 0x2efba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efba4) {
            ctx->pc = 0x2EFBB4u;
            goto label_2efbb4;
        }
    }
    ctx->pc = 0x2EFBACu;
    // 0x2efbac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EFBACu;
    {
        const bool branch_taken_0x2efbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFBACu;
            // 0x2efbb0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efbac) {
            ctx->pc = 0x2EFBC8u;
            goto label_2efbc8;
        }
    }
    ctx->pc = 0x2EFBB4u;
label_2efbb4:
    // 0x2efbb4: 0xc050d98  jal         func_143660
    ctx->pc = 0x2EFBB4u;
    SET_GPR_U32(ctx, 31, 0x2EFBBCu);
    ctx->pc = 0x143660u;
    if (runtime->hasFunction(0x143660u)) {
        auto targetFn = runtime->lookupFunction(0x143660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFBBCu; }
        if (ctx->pc != 0x2EFBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetProjection__Fv_0x143660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFBBCu; }
        if (ctx->pc != 0x2EFBBCu) { return; }
    }
    ctx->pc = 0x2EFBBCu;
label_2efbbc:
    // 0x2efbbc: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x2efbbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x2efbc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2efbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2efbc4:
    // 0x2efbc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2efbc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2efbc8:
    // 0x2efbc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2efbc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2efbcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFBCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFBCCu;
            // 0x2efbd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EFBD4u;
}
