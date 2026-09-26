#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteLoadThread__Fv
// Address: 0x2fd080 - 0x2fd0d8
void DeleteLoadThread__Fv_0x2fd080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteLoadThread__Fv_0x2fd080");
#endif

    switch (ctx->pc) {
        case 0x2fd094u: goto label_2fd094;
        case 0x2fd09cu: goto label_2fd09c;
        case 0x2fd0c0u: goto label_2fd0c0;
        case 0x2fd0c8u: goto label_2fd0c8;
        default: break;
    }

    ctx->pc = 0x2fd080u;

    // 0x2fd080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fd080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fd084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fd084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fd088: 0x8f83a080  lw          $v1, -0x5F80($gp)
    ctx->pc = 0x2fd088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942848)));
    // 0x2fd08c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2FD08Cu;
    {
        const bool branch_taken_0x2fd08c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd08c) {
            ctx->pc = 0x2FD0CCu;
            goto label_2fd0cc;
        }
    }
    ctx->pc = 0x2FD094u;
label_2fd094:
    // 0x2fd094: 0xc0bf410  jal         func_2FD040
    ctx->pc = 0x2FD094u;
    SET_GPR_U32(ctx, 31, 0x2FD09Cu);
    ctx->pc = 0x2FD040u;
    if (runtime->hasFunction(0x2FD040u)) {
        auto targetFn = runtime->lookupFunction(0x2FD040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD09Cu; }
        if (ctx->pc != 0x2FD09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepLoadThread__Fv_0x2fd040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD09Cu; }
        if (ctx->pc != 0x2FD09Cu) { return; }
    }
    ctx->pc = 0x2FD09Cu;
label_2fd09c:
    // 0x2fd09c: 0x0  nop
    ctx->pc = 0x2fd09cu;
    // NOP
    // 0x2fd0a0: 0x0  nop
    ctx->pc = 0x2fd0a0u;
    // NOP
    // 0x2fd0a4: 0x0  nop
    ctx->pc = 0x2fd0a4u;
    // NOP
    // 0x2fd0a8: 0x0  nop
    ctx->pc = 0x2fd0a8u;
    // NOP
    // 0x2fd0ac: 0x0  nop
    ctx->pc = 0x2fd0acu;
    // NOP
    // 0x2fd0b0: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2FD0B0u;
    {
        const bool branch_taken_0x2fd0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd0b0) {
            ctx->pc = 0x2FD094u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fd094;
        }
    }
    ctx->pc = 0x2FD0B8u;
    // 0x2fd0b8: 0xc043fcc  jal         func_10FF30
    ctx->pc = 0x2FD0B8u;
    SET_GPR_U32(ctx, 31, 0x2FD0C0u);
    ctx->pc = 0x2FD0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD0B8u;
            // 0x2fd0bc: 0x8f84a07c  lw          $a0, -0x5F84($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942844)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF30u;
    if (runtime->hasFunction(0x10FF30u)) {
        auto targetFn = runtime->lookupFunction(0x10FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD0C0u; }
        if (ctx->pc != 0x2FD0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TerminateThread_0x10ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD0C0u; }
        if (ctx->pc != 0x2FD0C0u) { return; }
    }
    ctx->pc = 0x2FD0C0u;
label_2fd0c0:
    // 0x2fd0c0: 0xc043fbc  jal         func_10FEF0
    ctx->pc = 0x2FD0C0u;
    SET_GPR_U32(ctx, 31, 0x2FD0C8u);
    ctx->pc = 0x2FD0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD0C0u;
            // 0x2fd0c4: 0x8f84a07c  lw          $a0, -0x5F84($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942844)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FEF0u;
    if (runtime->hasFunction(0x10FEF0u)) {
        auto targetFn = runtime->lookupFunction(0x10FEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD0C8u; }
        if (ctx->pc != 0x2FD0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteThread_0x10fef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD0C8u; }
        if (ctx->pc != 0x2FD0C8u) { return; }
    }
    ctx->pc = 0x2FD0C8u;
label_2fd0c8:
    // 0x2fd0c8: 0xaf80a080  sw          $zero, -0x5F80($gp)
    ctx->pc = 0x2fd0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942848), GPR_U32(ctx, 0));
label_2fd0cc:
    // 0x2fd0cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fd0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD0D0u;
            // 0x2fd0d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD0D8u;
}
