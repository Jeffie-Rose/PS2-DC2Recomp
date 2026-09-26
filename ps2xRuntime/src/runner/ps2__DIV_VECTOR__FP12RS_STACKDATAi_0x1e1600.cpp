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
// Address: 0x1e1600 - 0x1e16a4
void ps2__DIV_VECTOR__FP12RS_STACKDATAi_0x1e1600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DIV_VECTOR__FP12RS_STACKDATAi_0x1e1600");
#endif

    switch (ctx->pc) {
        case 0x1e1614u: goto label_1e1614;
        case 0x1e1654u: goto label_1e1654;
        case 0x1e1674u: goto label_1e1674;
        case 0x1e1694u: goto label_1e1694;
        default: break;
    }

    ctx->pc = 0x1e1600u;

    // 0x1e1600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1604: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1e1604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e160c: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E160Cu;
    SET_GPR_U32(ctx, 31, 0x1E1614u);
    ctx->pc = 0x1E1610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E160Cu;
            // 0x1e1610: 0x24c40018  addiu       $a0, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1614u; }
        if (ctx->pc != 0x1E1614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1614u; }
        if (ctx->pc != 0x1E1614u) { return; }
    }
    ctx->pc = 0x1E1614u;
label_1e1614:
    // 0x1e1614: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e1614u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e1618: 0x0  nop
    ctx->pc = 0x1e1618u;
    // NOP
    // 0x1e161c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1e161cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1620: 0x0  nop
    ctx->pc = 0x1e1620u;
    // NOP
    // 0x1e1624: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1624u;
    {
        const bool branch_taken_0x1e1624 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1624u;
            // 0x1e1628: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1624) {
            ctx->pc = 0x1E1634u;
            goto label_1e1634;
        }
    }
    ctx->pc = 0x1E162Cu;
    // 0x1e162c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1E162Cu;
    {
        const bool branch_taken_0x1e162c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E162Cu;
            // 0x1e1630: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e162c) {
            ctx->pc = 0x1E169Cu;
            goto label_1e169c;
        }
    }
    ctx->pc = 0x1E1634u;
label_1e1634:
    // 0x1e1634: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1e1634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1e1638: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1e1638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e163c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1e163cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1640: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1e1640u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e1644: 0x0  nop
    ctx->pc = 0x1e1644u;
    // NOP
    // 0x1e1648: 0x0  nop
    ctx->pc = 0x1e1648u;
    // NOP
    // 0x1e164c: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E164Cu;
    SET_GPR_U32(ctx, 31, 0x1E1654u);
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1654u; }
        if (ctx->pc != 0x1E1654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1654u; }
        if (ctx->pc != 0x1E1654u) { return; }
    }
    ctx->pc = 0x1E1654u;
label_1e1654:
    // 0x1e1654: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1e1654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1e1658: 0x24c40008  addiu       $a0, $a2, 0x8
    ctx->pc = 0x1e1658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1e165c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1e165cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1660: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1e1660u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e1664: 0x0  nop
    ctx->pc = 0x1e1664u;
    // NOP
    // 0x1e1668: 0x0  nop
    ctx->pc = 0x1e1668u;
    // NOP
    // 0x1e166c: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E166Cu;
    SET_GPR_U32(ctx, 31, 0x1E1674u);
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1674u; }
        if (ctx->pc != 0x1E1674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1674u; }
        if (ctx->pc != 0x1E1674u) { return; }
    }
    ctx->pc = 0x1E1674u;
label_1e1674:
    // 0x1e1674: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x1e1674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1e1678: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x1e1678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1e167c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1e167cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1680: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1e1680u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e1684: 0x0  nop
    ctx->pc = 0x1e1684u;
    // NOP
    // 0x1e1688: 0x0  nop
    ctx->pc = 0x1e1688u;
    // NOP
    // 0x1e168c: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E168Cu;
    SET_GPR_U32(ctx, 31, 0x1E1694u);
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1694u; }
        if (ctx->pc != 0x1E1694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1694u; }
        if (ctx->pc != 0x1E1694u) { return; }
    }
    ctx->pc = 0x1E1694u;
label_1e1694:
    // 0x1e1694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e169c:
    // 0x1e169c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E169Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E16A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E169Cu;
            // 0x1e16a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E16A4u;
}
