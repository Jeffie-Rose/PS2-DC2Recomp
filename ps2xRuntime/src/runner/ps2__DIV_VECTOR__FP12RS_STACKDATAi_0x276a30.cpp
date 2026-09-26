#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DIV_VECTOR__FP12RS_STACKDATAi
// Address: 0x276a30 - 0x276ad4
void ps2__DIV_VECTOR__FP12RS_STACKDATAi_0x276a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DIV_VECTOR__FP12RS_STACKDATAi_0x276a30");
#endif

    switch (ctx->pc) {
        case 0x276a44u: goto label_276a44;
        case 0x276a84u: goto label_276a84;
        case 0x276aa4u: goto label_276aa4;
        case 0x276ac4u: goto label_276ac4;
        default: break;
    }

    ctx->pc = 0x276a30u;

    // 0x276a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276a34: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x276a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276a3c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x276A3Cu;
    SET_GPR_U32(ctx, 31, 0x276A44u);
    ctx->pc = 0x276A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276A3Cu;
            // 0x276a40: 0x24c40018  addiu       $a0, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276A44u; }
        if (ctx->pc != 0x276A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276A44u; }
        if (ctx->pc != 0x276A44u) { return; }
    }
    ctx->pc = 0x276A44u;
label_276a44:
    // 0x276a44: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x276a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276a48: 0x0  nop
    ctx->pc = 0x276a48u;
    // NOP
    // 0x276a4c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x276a4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276a50: 0x0  nop
    ctx->pc = 0x276a50u;
    // NOP
    // 0x276a54: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x276A54u;
    {
        const bool branch_taken_0x276a54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x276A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276A54u;
            // 0x276a58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276a54) {
            ctx->pc = 0x276A64u;
            goto label_276a64;
        }
    }
    ctx->pc = 0x276A5Cu;
    // 0x276a5c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x276A5Cu;
    {
        const bool branch_taken_0x276a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276A5Cu;
            // 0x276a60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276a5c) {
            ctx->pc = 0x276ACCu;
            goto label_276acc;
        }
    }
    ctx->pc = 0x276A64u;
label_276a64:
    // 0x276a64: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x276a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x276a68: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x276a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276a6c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x276a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276a70: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x276a70u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x276a74: 0x0  nop
    ctx->pc = 0x276a74u;
    // NOP
    // 0x276a78: 0x0  nop
    ctx->pc = 0x276a78u;
    // NOP
    // 0x276a7c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x276A7Cu;
    SET_GPR_U32(ctx, 31, 0x276A84u);
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276A84u; }
        if (ctx->pc != 0x276A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276A84u; }
        if (ctx->pc != 0x276A84u) { return; }
    }
    ctx->pc = 0x276A84u;
label_276a84:
    // 0x276a84: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x276a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x276a88: 0x24c40008  addiu       $a0, $a2, 0x8
    ctx->pc = 0x276a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x276a8c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x276a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276a90: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x276a90u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x276a94: 0x0  nop
    ctx->pc = 0x276a94u;
    // NOP
    // 0x276a98: 0x0  nop
    ctx->pc = 0x276a98u;
    // NOP
    // 0x276a9c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x276A9Cu;
    SET_GPR_U32(ctx, 31, 0x276AA4u);
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276AA4u; }
        if (ctx->pc != 0x276AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276AA4u; }
        if (ctx->pc != 0x276AA4u) { return; }
    }
    ctx->pc = 0x276AA4u;
label_276aa4:
    // 0x276aa4: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x276aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x276aa8: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x276aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x276aac: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x276aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276ab0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x276ab0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x276ab4: 0x0  nop
    ctx->pc = 0x276ab4u;
    // NOP
    // 0x276ab8: 0x0  nop
    ctx->pc = 0x276ab8u;
    // NOP
    // 0x276abc: 0xc097e54  jal         func_25F950
    ctx->pc = 0x276ABCu;
    SET_GPR_U32(ctx, 31, 0x276AC4u);
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276AC4u; }
        if (ctx->pc != 0x276AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276AC4u; }
        if (ctx->pc != 0x276AC4u) { return; }
    }
    ctx->pc = 0x276AC4u;
label_276ac4:
    // 0x276ac4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276ac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_276acc:
    // 0x276acc: 0x3e00008  jr          $ra
    ctx->pc = 0x276ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276ACCu;
            // 0x276ad0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276AD4u;
}
