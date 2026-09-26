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
// Address: 0x2e3670 - 0x2e3724
void ps2__DIV_VECTOR__FP12RS_STACKDATAi_0x2e3670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DIV_VECTOR__FP12RS_STACKDATAi_0x2e3670");
#endif

    switch (ctx->pc) {
        case 0x2e3694u: goto label_2e3694;
        case 0x2e36d4u: goto label_2e36d4;
        case 0x2e36f4u: goto label_2e36f4;
        case 0x2e3714u: goto label_2e3714;
        default: break;
    }

    ctx->pc = 0x2e3670u;

    // 0x2e3670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e3670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e3674: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e3674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e3678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e367c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E367Cu;
    {
        const bool branch_taken_0x2e367c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E367Cu;
            // 0x2e3680: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e367c) {
            ctx->pc = 0x2E368Cu;
            goto label_2e368c;
        }
    }
    ctx->pc = 0x2E3684u;
    // 0x2e3684: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2E3684u;
    {
        const bool branch_taken_0x2e3684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3684u;
            // 0x2e3688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3684) {
            ctx->pc = 0x2E3718u;
            goto label_2e3718;
        }
    }
    ctx->pc = 0x2E368Cu;
label_2e368c:
    // 0x2e368c: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E368Cu;
    SET_GPR_U32(ctx, 31, 0x2E3694u);
    ctx->pc = 0x2E3690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E368Cu;
            // 0x2e3690: 0x24c40018  addiu       $a0, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3694u; }
        if (ctx->pc != 0x2E3694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3694u; }
        if (ctx->pc != 0x2E3694u) { return; }
    }
    ctx->pc = 0x2E3694u;
label_2e3694:
    // 0x2e3694: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e3694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e3698: 0x0  nop
    ctx->pc = 0x2e3698u;
    // NOP
    // 0x2e369c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2e369cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e36a0: 0x0  nop
    ctx->pc = 0x2e36a0u;
    // NOP
    // 0x2e36a4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E36A4u;
    {
        const bool branch_taken_0x2e36a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E36A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E36A4u;
            // 0x2e36a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e36a4) {
            ctx->pc = 0x2E36B4u;
            goto label_2e36b4;
        }
    }
    ctx->pc = 0x2E36ACu;
    // 0x2e36ac: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2E36ACu;
    {
        const bool branch_taken_0x2e36ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E36B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E36ACu;
            // 0x2e36b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e36ac) {
            ctx->pc = 0x2E371Cu;
            goto label_2e371c;
        }
    }
    ctx->pc = 0x2E36B4u;
label_2e36b4:
    // 0x2e36b4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2e36b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2e36b8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2e36b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e36bc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e36bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e36c0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2e36c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e36c4: 0x0  nop
    ctx->pc = 0x2e36c4u;
    // NOP
    // 0x2e36c8: 0x0  nop
    ctx->pc = 0x2e36c8u;
    // NOP
    // 0x2e36cc: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E36CCu;
    SET_GPR_U32(ctx, 31, 0x2E36D4u);
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E36D4u; }
        if (ctx->pc != 0x2E36D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E36D4u; }
        if (ctx->pc != 0x2E36D4u) { return; }
    }
    ctx->pc = 0x2E36D4u;
label_2e36d4:
    // 0x2e36d4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2e36d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2e36d8: 0x24c40008  addiu       $a0, $a2, 0x8
    ctx->pc = 0x2e36d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2e36dc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e36dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e36e0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2e36e0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e36e4: 0x0  nop
    ctx->pc = 0x2e36e4u;
    // NOP
    // 0x2e36e8: 0x0  nop
    ctx->pc = 0x2e36e8u;
    // NOP
    // 0x2e36ec: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E36ECu;
    SET_GPR_U32(ctx, 31, 0x2E36F4u);
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E36F4u; }
        if (ctx->pc != 0x2E36F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E36F4u; }
        if (ctx->pc != 0x2E36F4u) { return; }
    }
    ctx->pc = 0x2E36F4u;
label_2e36f4:
    // 0x2e36f4: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x2e36f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2e36f8: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x2e36f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2e36fc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e36fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3700: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2e3700u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e3704: 0x0  nop
    ctx->pc = 0x2e3704u;
    // NOP
    // 0x2e3708: 0x0  nop
    ctx->pc = 0x2e3708u;
    // NOP
    // 0x2e370c: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E370Cu;
    SET_GPR_U32(ctx, 31, 0x2E3714u);
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3714u; }
        if (ctx->pc != 0x2E3714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3714u; }
        if (ctx->pc != 0x2E3714u) { return; }
    }
    ctx->pc = 0x2E3714u;
label_2e3714:
    // 0x2e3714: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3718:
    // 0x2e3718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e371c:
    // 0x2e371c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E371Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E371Cu;
            // 0x2e3720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3724u;
}
