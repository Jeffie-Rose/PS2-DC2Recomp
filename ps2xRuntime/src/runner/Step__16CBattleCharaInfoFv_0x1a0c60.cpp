#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__16CBattleCharaInfoFv
// Address: 0x1a0c60 - 0x1a0e98
void Step__16CBattleCharaInfoFv_0x1a0c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__16CBattleCharaInfoFv_0x1a0c60");
#endif

    switch (ctx->pc) {
        case 0x1a0ce0u: goto label_1a0ce0;
        case 0x1a0cf4u: goto label_1a0cf4;
        case 0x1a0d04u: goto label_1a0d04;
        case 0x1a0ddcu: goto label_1a0ddc;
        case 0x1a0e80u: goto label_1a0e80;
        default: break;
    }

    ctx->pc = 0x1a0c60u;

    // 0x1a0c60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a0c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a0c64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a0c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a0c68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a0c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a0c6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a0c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a0c70: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1a0c70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a0c74: 0x8c870074  lw          $a3, 0x74($a0)
    ctx->pc = 0x1a0c74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1a0c78: 0x10e00081  beqz        $a3, . + 4 + (0x81 << 2)
    ctx->pc = 0x1A0C78u;
    {
        const bool branch_taken_0x1a0c78 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0C78u;
            // 0x1a0c7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0c78) {
            ctx->pc = 0x1A0E80u;
            goto label_1a0e80;
        }
    }
    ctx->pc = 0x1A0C80u;
    // 0x1a0c80: 0xc6000084  lwc1        $f0, 0x84($s0)
    ctx->pc = 0x1a0c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0c84: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1a0c84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a0c88: 0x0  nop
    ctx->pc = 0x1a0c88u;
    // NOP
    // 0x1a0c8c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1a0c8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0c90: 0x0  nop
    ctx->pc = 0x1a0c90u;
    // NOP
    // 0x1a0c94: 0x4501007a  bc1t        . + 4 + (0x7A << 2)
    ctx->pc = 0x1A0C94u;
    {
        const bool branch_taken_0x1a0c94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a0c94) {
            ctx->pc = 0x1A0E80u;
            goto label_1a0e80;
        }
    }
    ctx->pc = 0x1A0C9Cu;
    // 0x1a0c9c: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x1a0c9cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a0ca0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a0ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0ca4: 0x10c3002a  beq         $a2, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1A0CA4u;
    {
        const bool branch_taken_0x1a0ca4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A0CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0CA4u;
            // 0x1a0ca8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ca4) {
            ctx->pc = 0x1A0D50u;
            goto label_1a0d50;
        }
    }
    ctx->pc = 0x1A0CACu;
    // 0x1a0cac: 0x10c30017  beq         $a2, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A0CACu;
    {
        const bool branch_taken_0x1a0cac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A0CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0CACu;
            // 0x1a0cb0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0cac) {
            ctx->pc = 0x1A0D0Cu;
            goto label_1a0d0c;
        }
    }
    ctx->pc = 0x1A0CB4u;
    // 0x1a0cb4: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0CB4u;
    {
        const bool branch_taken_0x1a0cb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a0cb4) {
            ctx->pc = 0x1A0CC4u;
            goto label_1a0cc4;
        }
    }
    ctx->pc = 0x1A0CBCu;
    // 0x1a0cbc: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1A0CBCu;
    {
        const bool branch_taken_0x1a0cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0CBCu;
            // 0x1a0cc0: 0x8e030074  lw          $v1, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0cbc) {
            ctx->pc = 0x1A0D84u;
            goto label_1a0d84;
        }
    }
    ctx->pc = 0x1A0CC4u;
label_1a0cc4:
    // 0x1a0cc4: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x1a0cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a0cc8: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x1a0cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1a0ccc: 0x84c60002  lh          $a2, 0x2($a2)
    ctx->pc = 0x1a0cccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x1a0cd0: 0x14c3002b  bne         $a2, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1A0CD0u;
    {
        const bool branch_taken_0x1a0cd0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a0cd0) {
            ctx->pc = 0x1A0D80u;
            goto label_1a0d80;
        }
    }
    ctx->pc = 0x1A0CD8u;
    // 0x1a0cd8: 0xc06421c  jal         func_190870
    ctx->pc = 0x1A0CD8u;
    SET_GPR_U32(ctx, 31, 0x1A0CE0u);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0CE0u; }
        if (ctx->pc != 0x1A0CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0CE0u; }
        if (ctx->pc != 0x1A0CE0u) { return; }
    }
    ctx->pc = 0x1A0CE0u;
label_1a0ce0:
    // 0x1a0ce0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A0CE0u;
    {
        const bool branch_taken_0x1a0ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0ce0) {
            ctx->pc = 0x1A0D80u;
            goto label_1a0d80;
        }
    }
    ctx->pc = 0x1A0CE8u;
    // 0x1a0ce8: 0x8f918b84  lw          $s1, -0x747C($gp)
    ctx->pc = 0x1a0ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937476)));
    // 0x1a0cec: 0xc05831c  jal         func_160C70
    ctx->pc = 0x1A0CECu;
    SET_GPR_U32(ctx, 31, 0x1A0CF4u);
    ctx->pc = 0x1A0CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0CECu;
            // 0x1a0cf0: 0xc44c2f6c  lwc1        $f12, 0x2F6C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C70u;
    if (runtime->hasFunction(0x160C70u)) {
        auto targetFn = runtime->lookupFunction(0x160C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0CF4u; }
        if (ctx->pc != 0x1A0CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTimeBand__Ff_0x160c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0CF4u; }
        if (ctx->pc != 0x1A0CF4u) { return; }
    }
    ctx->pc = 0x1A0CF4u;
label_1a0cf4:
    // 0x1a0cf4: 0x12220022  beq         $s1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A0CF4u;
    {
        const bool branch_taken_0x1a0cf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a0cf4) {
            ctx->pc = 0x1A0D80u;
            goto label_1a0d80;
        }
    }
    ctx->pc = 0x1A0CFCu;
    // 0x1a0cfc: 0xc067d48  jal         func_19F520
    ctx->pc = 0x1A0CFCu;
    SET_GPR_U32(ctx, 31, 0x1A0D04u);
    ctx->pc = 0x1A0D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0CFCu;
            // 0x1a0d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F520u;
    if (runtime->hasFunction(0x19F520u)) {
        auto targetFn = runtime->lookupFunction(0x19F520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D04u; }
        if (ctx->pc != 0x1A0D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RefreshParamater__16CBattleCharaInfoFv_0x19f520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D04u; }
        if (ctx->pc != 0x1A0D04u) { return; }
    }
    ctx->pc = 0x1A0D04u;
label_1a0d04:
    // 0x1a0d04: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1A0D04u;
    {
        const bool branch_taken_0x1a0d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0d04) {
            ctx->pc = 0x1A0D80u;
            goto label_1a0d80;
        }
    }
    ctx->pc = 0x1A0D0Cu;
label_1a0d0c:
    // 0x1a0d0c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x1a0d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0d10: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1a0d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0d14: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a0d14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1a0d18: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x1a0d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1a0d1c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x1a0d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0d20: 0xc6000084  lwc1        $f0, 0x84($s0)
    ctx->pc = 0x1a0d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0d24: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a0d24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1a0d28: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x1a0d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x1a0d2c: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x1a0d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1a0d30: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1a0d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0d34: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1a0d34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0d38: 0x0  nop
    ctx->pc = 0x1a0d38u;
    // NOP
    // 0x1a0d3c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1A0D3Cu;
    {
        const bool branch_taken_0x1a0d3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0D3Cu;
            // 0x1a0d40: 0x24660004  addiu       $a2, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d3c) {
            ctx->pc = 0x1A0D80u;
            goto label_1a0d80;
        }
    }
    ctx->pc = 0x1A0D44u;
    // 0x1a0d44: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x1a0d44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1a0d48: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A0D48u;
    {
        const bool branch_taken_0x1a0d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0D48u;
            // 0x1a0d4c: 0xe6020084  swc1        $f2, 0x84($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d48) {
            ctx->pc = 0x1A0D80u;
            goto label_1a0d80;
        }
    }
    ctx->pc = 0x1A0D50u;
label_1a0d50:
    // 0x1a0d50: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a0d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a0d54: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1a0d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0d58: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1a0d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0d5c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a0d5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1a0d60: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x1a0d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1a0d64: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a0d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a0d68: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1a0d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0d6c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1a0d6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0d70: 0x0  nop
    ctx->pc = 0x1a0d70u;
    // NOP
    // 0x1a0d74: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0D74u;
    {
        const bool branch_taken_0x1a0d74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0D74u;
            // 0x1a0d78: 0x24660010  addiu       $a2, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d74) {
            ctx->pc = 0x1A0D80u;
            goto label_1a0d80;
        }
    }
    ctx->pc = 0x1A0D7Cu;
    // 0x1a0d7c: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x1a0d7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_1a0d80:
    // 0x1a0d80: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x1a0d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1a0d84:
    // 0x1a0d84: 0xc6000084  lwc1        $f0, 0x84($s0)
    ctx->pc = 0x1a0d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0d88: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1a0d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0d8c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1a0d8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0d90: 0x0  nop
    ctx->pc = 0x1a0d90u;
    // NOP
    // 0x1a0d94: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0D94u;
    {
        const bool branch_taken_0x1a0d94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a0d94) {
            ctx->pc = 0x1A0DB0u;
            goto label_1a0db0;
        }
    }
    ctx->pc = 0x1A0D9Cu;
    // 0x1a0d9c: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x1a0d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x1a0da0: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x1a0da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1a0da4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1a0da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0da8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1A0DA8u;
    {
        const bool branch_taken_0x1a0da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0DA8u;
            // 0x1a0dac: 0xe600008c  swc1        $f0, 0x8C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0da8) {
            ctx->pc = 0x1A0E58u;
            goto label_1a0e58;
        }
    }
    ctx->pc = 0x1A0DB0u;
label_1a0db0:
    // 0x1a0db0: 0xc614007c  lwc1        $f20, 0x7C($s0)
    ctx->pc = 0x1a0db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a0db4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a0db4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0db8: 0x0  nop
    ctx->pc = 0x1a0db8u;
    // NOP
    // 0x1a0dbc: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1a0dbcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0dc0: 0x0  nop
    ctx->pc = 0x1a0dc0u;
    // NOP
    // 0x1a0dc4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0DC4u;
    {
        const bool branch_taken_0x1a0dc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0DC4u;
            // 0x1a0dc8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0dc4) {
            ctx->pc = 0x1A0DD4u;
            goto label_1a0dd4;
        }
    }
    ctx->pc = 0x1A0DCCu;
    // 0x1a0dcc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1A0DCCu;
    {
        const bool branch_taken_0x1a0dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0DCCu;
            // 0x1a0dd0: 0xe6010084  swc1        $f1, 0x84($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0dcc) {
            ctx->pc = 0x1A0E58u;
            goto label_1a0e58;
        }
    }
    ctx->pc = 0x1A0DD4u;
label_1a0dd4:
    // 0x1a0dd4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1A0DD4u;
    SET_GPR_U32(ctx, 31, 0x1A0DDCu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0DDCu; }
        if (ctx->pc != 0x1A0DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0DDCu; }
        if (ctx->pc != 0x1A0DDCu) { return; }
    }
    ctx->pc = 0x1A0DDCu;
label_1a0ddc:
    // 0x1a0ddc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a0ddcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0de0: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A0DE0u;
    {
        const bool branch_taken_0x1a0de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0de0) {
            ctx->pc = 0x1A0E0Cu;
            goto label_1a0e0c;
        }
    }
    ctx->pc = 0x1A0DE8u;
    // 0x1a0de8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a0de8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0dec: 0x0  nop
    ctx->pc = 0x1a0decu;
    // NOP
    // 0x1a0df0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a0df0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0df4: 0x0  nop
    ctx->pc = 0x1a0df4u;
    // NOP
    // 0x1a0df8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0DF8u;
    {
        const bool branch_taken_0x1a0df8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a0df8) {
            ctx->pc = 0x1A0E08u;
            goto label_1a0e08;
        }
    }
    ctx->pc = 0x1A0E00u;
    // 0x1a0e00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0E00u;
    {
        const bool branch_taken_0x1a0e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0E00u;
            // 0x1a0e04: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e00) {
            ctx->pc = 0x1A0E0Cu;
            goto label_1a0e0c;
        }
    }
    ctx->pc = 0x1A0E08u;
label_1a0e08:
    // 0x1a0e08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a0e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a0e0c:
    // 0x1a0e0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a0e0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a0e10: 0xc6020084  lwc1        $f2, 0x84($s0)
    ctx->pc = 0x1a0e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a0e14: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a0e14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a0e18: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1a0e18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1a0e1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a0e1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0e20: 0x0  nop
    ctx->pc = 0x1a0e20u;
    // NOP
    // 0x1a0e24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a0e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0e28: 0x0  nop
    ctx->pc = 0x1a0e28u;
    // NOP
    // 0x1a0e2c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0E2Cu;
    {
        const bool branch_taken_0x1a0e2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0E2Cu;
            // 0x1a0e30: 0xe6010084  swc1        $f1, 0x84($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e2c) {
            ctx->pc = 0x1A0E3Cu;
            goto label_1a0e3c;
        }
    }
    ctx->pc = 0x1A0E34u;
    // 0x1a0e34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A0E34u;
    {
        const bool branch_taken_0x1a0e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0E34u;
            // 0x1a0e38: 0xe6000084  swc1        $f0, 0x84($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e34) {
            ctx->pc = 0x1A0E58u;
            goto label_1a0e58;
        }
    }
    ctx->pc = 0x1A0E3Cu;
label_1a0e3c:
    // 0x1a0e3c: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x1a0e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1a0e40: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1a0e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0e44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a0e44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0e48: 0x0  nop
    ctx->pc = 0x1a0e48u;
    // NOP
    // 0x1a0e4c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0E4Cu;
    {
        const bool branch_taken_0x1a0e4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a0e4c) {
            ctx->pc = 0x1A0E58u;
            goto label_1a0e58;
        }
    }
    ctx->pc = 0x1A0E54u;
    // 0x1a0e54: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x1a0e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_1a0e58:
    // 0x1a0e58: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x1a0e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1a0e5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a0e5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0e60: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1a0e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0e64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a0e64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0e68: 0x0  nop
    ctx->pc = 0x1a0e68u;
    // NOP
    // 0x1a0e6c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0E6Cu;
    {
        const bool branch_taken_0x1a0e6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0E6Cu;
            // 0x1a0e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e6c) {
            ctx->pc = 0x1A0E80u;
            goto label_1a0e80;
        }
    }
    ctx->pc = 0x1A0E74u;
    // 0x1a0e74: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x1a0e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1a0e78: 0xc068108  jal         func_1A0420
    ctx->pc = 0x1A0E78u;
    SET_GPR_U32(ctx, 31, 0x1A0E80u);
    ctx->pc = 0x1A0E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0E78u;
            // 0x1a0e7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0420u;
    if (runtime->hasFunction(0x1A0420u)) {
        auto targetFn = runtime->lookupFunction(0x1A0420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0E80u; }
        if (ctx->pc != 0x1A0E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttr__16CBattleCharaInfoFii_0x1a0420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0E80u; }
        if (ctx->pc != 0x1A0E80u) { return; }
    }
    ctx->pc = 0x1A0E80u;
label_1a0e80:
    // 0x1a0e80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a0e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0e84: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a0e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a0e88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a0e88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0e8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a0e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0e90: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0E90u;
            // 0x1a0e94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0E98u;
}
