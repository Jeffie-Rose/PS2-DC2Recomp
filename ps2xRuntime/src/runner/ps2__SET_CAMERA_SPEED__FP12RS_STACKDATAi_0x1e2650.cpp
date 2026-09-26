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
// Address: 0x1e2650 - 0x1e26b0
void ps2__SET_CAMERA_SPEED__FP12RS_STACKDATAi_0x1e2650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CAMERA_SPEED__FP12RS_STACKDATAi_0x1e2650");
#endif

    switch (ctx->pc) {
        case 0x1e266cu: goto label_1e266c;
        case 0x1e2688u: goto label_1e2688;
        case 0x1e269cu: goto label_1e269c;
        default: break;
    }

    ctx->pc = 0x1e2650u;

    // 0x1e2650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2654: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e2658: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e265c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e265cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2660: 0x8f848e6c  lw          $a0, -0x7194($gp)
    ctx->pc = 0x1e2660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
    // 0x1e2664: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x1E2664u;
    SET_GPR_U32(ctx, 31, 0x1E266Cu);
    ctx->pc = 0x1E2668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2664u;
            // 0x1e2668: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E266Cu; }
        if (ctx->pc != 0x1E266Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E266Cu; }
        if (ctx->pc != 0x1E266Cu) { return; }
    }
    ctx->pc = 0x1E266Cu;
label_1e266c:
    // 0x1e266c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e266cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2670: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2670u;
    {
        const bool branch_taken_0x1e2670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2670u;
            // 0x1e2674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2670) {
            ctx->pc = 0x1E2680u;
            goto label_1e2680;
        }
    }
    ctx->pc = 0x1E2678u;
    // 0x1e2678: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2678u;
    {
        const bool branch_taken_0x1e2678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E267Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2678u;
            // 0x1e267c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2678) {
            ctx->pc = 0x1E26A0u;
            goto label_1e26a0;
        }
    }
    ctx->pc = 0x1E2680u;
label_1e2680:
    // 0x1e2680: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E2680u;
    SET_GPR_U32(ctx, 31, 0x1E2688u);
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2688u; }
        if (ctx->pc != 0x1E2688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2688u; }
        if (ctx->pc != 0x1E2688u) { return; }
    }
    ctx->pc = 0x1E2688u;
label_1e2688:
    // 0x1e2688: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1e2688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1e268c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e268cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2690: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e2690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e2694: 0xc04c564  jal         func_131590
    ctx->pc = 0x1E2694u;
    SET_GPR_U32(ctx, 31, 0x1E269Cu);
    ctx->pc = 0x1E2698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2694u;
            // 0x1e2698: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131590u;
    if (runtime->hasFunction(0x131590u)) {
        auto targetFn = runtime->lookupFunction(0x131590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E269Cu; }
        if (ctx->pc != 0x1E269Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpeed__9mgCCameraFff_0x131590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E269Cu; }
        if (ctx->pc != 0x1E269Cu) { return; }
    }
    ctx->pc = 0x1E269Cu;
label_1e269c:
    // 0x1e269c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e269cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e26a0:
    // 0x1e26a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e26a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e26a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e26a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e26a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E26A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E26ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E26A8u;
            // 0x1e26ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E26B0u;
}
