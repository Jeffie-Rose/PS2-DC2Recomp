#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CAMERA_SPEED__FP12RS_STACKDATAi
// Address: 0x26e690 - 0x26e6e8
void ps2__SET_CAMERA_SPEED__FP12RS_STACKDATAi_0x26e690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CAMERA_SPEED__FP12RS_STACKDATAi_0x26e690");
#endif

    switch (ctx->pc) {
        case 0x26e6a4u: goto label_26e6a4;
        case 0x26e6c0u: goto label_26e6c0;
        case 0x26e6d4u: goto label_26e6d4;
        default: break;
    }

    ctx->pc = 0x26e690u;

    // 0x26e690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26e690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26e694: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26e694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26e698: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26e698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26e69c: 0xc09b8c8  jal         func_26E320
    ctx->pc = 0x26E69Cu;
    SET_GPR_U32(ctx, 31, 0x26E6A4u);
    ctx->pc = 0x26E6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E69Cu;
            // 0x26e6a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26E320u;
    if (runtime->hasFunction(0x26E320u)) {
        auto targetFn = runtime->lookupFunction(0x26E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E6A4u; }
        if (ctx->pc != 0x26E6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__Fv_0x26e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E6A4u; }
        if (ctx->pc != 0x26E6A4u) { return; }
    }
    ctx->pc = 0x26E6A4u;
label_26e6a4:
    // 0x26e6a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26e6a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e6a8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E6A8u;
    {
        const bool branch_taken_0x26e6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E6A8u;
            // 0x26e6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e6a8) {
            ctx->pc = 0x26E6B8u;
            goto label_26e6b8;
        }
    }
    ctx->pc = 0x26E6B0u;
    // 0x26e6b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26E6B0u;
    {
        const bool branch_taken_0x26e6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E6B0u;
            // 0x26e6b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e6b0) {
            ctx->pc = 0x26E6D8u;
            goto label_26e6d8;
        }
    }
    ctx->pc = 0x26E6B8u;
label_26e6b8:
    // 0x26e6b8: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26E6B8u;
    SET_GPR_U32(ctx, 31, 0x26E6C0u);
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E6C0u; }
        if (ctx->pc != 0x26E6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E6C0u; }
        if (ctx->pc != 0x26E6C0u) { return; }
    }
    ctx->pc = 0x26E6C0u;
label_26e6c0:
    // 0x26e6c0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x26e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x26e6c4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x26e6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e6c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26e6c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26e6cc: 0xc04c564  jal         func_131590
    ctx->pc = 0x26E6CCu;
    SET_GPR_U32(ctx, 31, 0x26E6D4u);
    ctx->pc = 0x26E6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E6CCu;
            // 0x26e6d0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131590u;
    if (runtime->hasFunction(0x131590u)) {
        auto targetFn = runtime->lookupFunction(0x131590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E6D4u; }
        if (ctx->pc != 0x26E6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpeed__9mgCCameraFff_0x131590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E6D4u; }
        if (ctx->pc != 0x26E6D4u) { return; }
    }
    ctx->pc = 0x26E6D4u;
label_26e6d4:
    // 0x26e6d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26e6d8:
    // 0x26e6d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26e6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e6dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26e6dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x26E6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E6E0u;
            // 0x26e6e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26E6E8u;
}
