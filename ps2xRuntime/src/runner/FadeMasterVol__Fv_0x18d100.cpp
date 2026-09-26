#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FadeMasterVol__Fv
// Address: 0x18d100 - 0x18d1dc
void FadeMasterVol__Fv_0x18d100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FadeMasterVol__Fv_0x18d100");
#endif

    switch (ctx->pc) {
        case 0x18d118u: goto label_18d118;
        case 0x18d1b4u: goto label_18d1b4;
        default: break;
    }

    ctx->pc = 0x18d100u;

    // 0x18d100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18d100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18d104: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18d104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18d108: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18d108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18d10c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18d10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18d110: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18d110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d114: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18d114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d118:
    // 0x18d118: 0x27838048  addiu       $v1, $gp, -0x7FB8
    ctx->pc = 0x18d118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934600));
    // 0x18d11c: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x18d11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x18d120: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18d120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18d124: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x18D124u;
    {
        const bool branch_taken_0x18d124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D124u;
            // 0x18d128: 0x27838ab8  addiu       $v1, $gp, -0x7548 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d124) {
            ctx->pc = 0x18D1B4u;
            goto label_18d1b4;
        }
    }
    ctx->pc = 0x18D12Cu;
    // 0x18d12c: 0x27828ab0  addiu       $v0, $gp, -0x7550
    ctx->pc = 0x18d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937264));
    // 0x18d130: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x18d130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x18d134: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x18d134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18d138: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x18d138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18d13c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18d13cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d140: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x18d140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d144: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x18d144u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d148: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x18d148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x18d14c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x18D14Cu;
    {
        const bool branch_taken_0x18d14c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D14Cu;
            // 0x18d150: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d14c) {
            ctx->pc = 0x18D180u;
            goto label_18d180;
        }
    }
    ctx->pc = 0x18D154u;
    // 0x18d154: 0x27828aa8  addiu       $v0, $gp, -0x7558
    ctx->pc = 0x18d154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937256));
    // 0x18d158: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18d158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18d15c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x18d15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d160: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x18d160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d164: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18d164u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d168: 0x0  nop
    ctx->pc = 0x18d168u;
    // NOP
    // 0x18d16c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x18D16Cu;
    {
        const bool branch_taken_0x18d16c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d16c) {
            ctx->pc = 0x18D1A8u;
            goto label_18d1a8;
        }
    }
    ctx->pc = 0x18D174u;
    // 0x18d174: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x18d174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x18d178: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18D178u;
    {
        const bool branch_taken_0x18d178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D178u;
            // 0x18d17c: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d178) {
            ctx->pc = 0x18D1A8u;
            goto label_18d1a8;
        }
    }
    ctx->pc = 0x18D180u;
label_18d180:
    // 0x18d180: 0x27828aa8  addiu       $v0, $gp, -0x7558
    ctx->pc = 0x18d180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937256));
    // 0x18d184: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18d184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18d188: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x18d188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d18c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x18d18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d190: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18d190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d194: 0x0  nop
    ctx->pc = 0x18d194u;
    // NOP
    // 0x18d198: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x18D198u;
    {
        const bool branch_taken_0x18d198 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d198) {
            ctx->pc = 0x18D1A8u;
            goto label_18d1a8;
        }
    }
    ctx->pc = 0x18D1A0u;
    // 0x18d1a0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x18d1a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x18d1a4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x18d1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_18d1a8:
    // 0x18d1a8: 0xc48c0000  lwc1        $f12, 0x0($a0)
    ctx->pc = 0x18d1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18d1ac: 0xc063410  jal         func_18D040
    ctx->pc = 0x18D1ACu;
    SET_GPR_U32(ctx, 31, 0x18D1B4u);
    ctx->pc = 0x18D1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D1ACu;
            // 0x18d1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D040u;
    if (runtime->hasFunction(0x18D040u)) {
        auto targetFn = runtime->lookupFunction(0x18D040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D1B4u; }
        if (ctx->pc != 0x18D1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMasterVol__Fif_0x18d040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D1B4u; }
        if (ctx->pc != 0x18D1B4u) { return; }
    }
    ctx->pc = 0x18D1B4u;
label_18d1b4:
    // 0x18d1b4: 0x0  nop
    ctx->pc = 0x18d1b4u;
    // NOP
    // 0x18d1b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18d1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18d1bc: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x18d1bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18d1c0: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x18D1C0u;
    {
        const bool branch_taken_0x18d1c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D1C0u;
            // 0x18d1c4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1c0) {
            ctx->pc = 0x18D118u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18d118;
        }
    }
    ctx->pc = 0x18D1C8u;
    // 0x18d1c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18d1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d1cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18d1ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d1d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18d1d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x18D1D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D1D4u;
            // 0x18d1d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D1DCu;
}
