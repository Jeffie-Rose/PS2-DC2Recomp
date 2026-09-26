#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_WIND__FP12RS_STACKDATAi
// Address: 0x26e260 - 0x26e2e8
void ps2__SET_WIND__FP12RS_STACKDATAi_0x26e260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_WIND__FP12RS_STACKDATAi_0x26e260");
#endif

    switch (ctx->pc) {
        case 0x26e270u: goto label_26e270;
        case 0x26e294u: goto label_26e294;
        case 0x26e2a4u: goto label_26e2a4;
        case 0x26e2b4u: goto label_26e2b4;
        case 0x26e2c0u: goto label_26e2c0;
        case 0x26e2d8u: goto label_26e2d8;
        default: break;
    }

    ctx->pc = 0x26e260u;

    // 0x26e260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26e260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26e264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26e264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26e268: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26E268u;
    SET_GPR_U32(ctx, 31, 0x26E270u);
    ctx->pc = 0x26E26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E268u;
            // 0x26e26c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E270u; }
        if (ctx->pc != 0x26E270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E270u; }
        if (ctx->pc != 0x26E270u) { return; }
    }
    ctx->pc = 0x26E270u;
label_26e270:
    // 0x26e270: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26e270u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x26e274: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26e274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e278: 0x0  nop
    ctx->pc = 0x26e278u;
    // NOP
    // 0x26e27c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x26e27cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e280: 0x0  nop
    ctx->pc = 0x26e280u;
    // NOP
    // 0x26e284: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x26E284u;
    {
        const bool branch_taken_0x26e284 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E284u;
            // 0x26e288: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e284) {
            ctx->pc = 0x26E29Cu;
            goto label_26e29c;
        }
    }
    ctx->pc = 0x26E28Cu;
    // 0x26e28c: 0xc0a12d0  jal         func_284B40
    ctx->pc = 0x26E28Cu;
    SET_GPR_U32(ctx, 31, 0x26E294u);
    ctx->pc = 0x26E290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E28Cu;
            // 0x26e290: 0x8f8497dc  lw          $a0, -0x6824($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284B40u;
    if (runtime->hasFunction(0x284B40u)) {
        auto targetFn = runtime->lookupFunction(0x284B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E294u; }
        if (ctx->pc != 0x26E294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetWind__6CSceneFv_0x284b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E294u; }
        if (ctx->pc != 0x26E294u) { return; }
    }
    ctx->pc = 0x26E294u;
label_26e294:
    // 0x26e294: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26E294u;
    {
        const bool branch_taken_0x26e294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E294u;
            // 0x26e298: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e294) {
            ctx->pc = 0x26E2DCu;
            goto label_26e2dc;
        }
    }
    ctx->pc = 0x26E29Cu;
label_26e29c:
    // 0x26e29c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26E29Cu;
    SET_GPR_U32(ctx, 31, 0x26E2A4u);
    ctx->pc = 0x26E2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E29Cu;
            // 0x26e2a0: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E2A4u; }
        if (ctx->pc != 0x26E2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E2A4u; }
        if (ctx->pc != 0x26E2A4u) { return; }
    }
    ctx->pc = 0x26E2A4u;
label_26e2a4:
    // 0x26e2a4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x26e2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e2a8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x26e2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x26e2ac: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26E2ACu;
    SET_GPR_U32(ctx, 31, 0x26E2B4u);
    ctx->pc = 0x26E2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E2ACu;
            // 0x26e2b0: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E2B4u; }
        if (ctx->pc != 0x26E2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E2B4u; }
        if (ctx->pc != 0x26E2B4u) { return; }
    }
    ctx->pc = 0x26E2B4u;
label_26e2b4:
    // 0x26e2b4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x26e2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e2b8: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26E2B8u;
    SET_GPR_U32(ctx, 31, 0x26E2C0u);
    ctx->pc = 0x26E2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E2B8u;
            // 0x26e2bc: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E2C0u; }
        if (ctx->pc != 0x26E2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E2C0u; }
        if (ctx->pc != 0x26E2C0u) { return; }
    }
    ctx->pc = 0x26E2C0u;
label_26e2c0:
    // 0x26e2c0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x26e2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x26e2c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26e2c8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x26e2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26e2cc: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x26e2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x26e2d0: 0xc0a12cc  jal         func_284B30
    ctx->pc = 0x26E2D0u;
    SET_GPR_U32(ctx, 31, 0x26E2D8u);
    ctx->pc = 0x26E2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E2D0u;
            // 0x26e2d4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284B30u;
    if (runtime->hasFunction(0x284B30u)) {
        auto targetFn = runtime->lookupFunction(0x284B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E2D8u; }
        if (ctx->pc != 0x26E2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWind__6CSceneFfPf_0x284b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E2D8u; }
        if (ctx->pc != 0x26E2D8u) { return; }
    }
    ctx->pc = 0x26E2D8u;
label_26e2d8:
    // 0x26e2d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26e2dc:
    // 0x26e2dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26e2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x26E2E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E2E0u;
            // 0x26e2e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26E2E8u;
}
