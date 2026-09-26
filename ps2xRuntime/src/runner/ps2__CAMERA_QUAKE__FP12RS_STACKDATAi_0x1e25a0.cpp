#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CAMERA_QUAKE__FP12RS_STACKDATAi
// Address: 0x1e25a0 - 0x1e2610
void ps2__CAMERA_QUAKE__FP12RS_STACKDATAi_0x1e25a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CAMERA_QUAKE__FP12RS_STACKDATAi_0x1e25a0");
#endif

    switch (ctx->pc) {
        case 0x1e25d0u: goto label_1e25d0;
        case 0x1e25dcu: goto label_1e25dc;
        default: break;
    }

    ctx->pc = 0x1e25a0u;

    // 0x1e25a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e25a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e25a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e25a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e25a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e25a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e25ac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e25acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e25b0: 0x8f828e6c  lw          $v0, -0x7194($gp)
    ctx->pc = 0x1e25b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
    // 0x1e25b4: 0x24502f90  addiu       $s0, $v0, 0x2F90
    ctx->pc = 0x1e25b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x1e25b8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E25B8u;
    {
        const bool branch_taken_0x1e25b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E25BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E25B8u;
            // 0x1e25bc: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e25b8) {
            ctx->pc = 0x1E25C8u;
            goto label_1e25c8;
        }
    }
    ctx->pc = 0x1E25C0u;
    // 0x1e25c0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E25C0u;
    {
        const bool branch_taken_0x1e25c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E25C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E25C0u;
            // 0x1e25c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e25c0) {
            ctx->pc = 0x1E25FCu;
            goto label_1e25fc;
        }
    }
    ctx->pc = 0x1E25C8u;
label_1e25c8:
    // 0x1e25c8: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E25C8u;
    SET_GPR_U32(ctx, 31, 0x1E25D0u);
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E25D0u; }
        if (ctx->pc != 0x1E25D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E25D0u; }
        if (ctx->pc != 0x1E25D0u) { return; }
    }
    ctx->pc = 0x1E25D0u;
label_1e25d0:
    // 0x1e25d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e25d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1e25d4: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E25D4u;
    SET_GPR_U32(ctx, 31, 0x1E25DCu);
    ctx->pc = 0x1E25D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E25D4u;
            // 0x1e25d8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E25DCu; }
        if (ctx->pc != 0x1E25DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E25DCu; }
        if (ctx->pc != 0x1E25DCu) { return; }
    }
    ctx->pc = 0x1E25DCu;
label_1e25dc:
    // 0x1e25dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e25dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e25e0: 0xe6140070  swc1        $f20, 0x70($s0)
    ctx->pc = 0x1e25e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1e25e4: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x1e25e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e25e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e25e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e25ec: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e25ecu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e25f0: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1e25f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1e25f4: 0xa6020078  sh          $v0, 0x78($s0)
    ctx->pc = 0x1e25f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 120), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e25f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e25f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e25fc:
    // 0x1e25fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e25fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2600: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e2600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e2604: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e2604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2608: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E260Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2608u;
            // 0x1e260c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2610u;
}
