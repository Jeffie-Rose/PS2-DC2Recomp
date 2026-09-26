#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_NOW_LOOP_NO__FP12RS_STACKDATAi
// Address: 0x27af70 - 0x27afa4
void ps2__GET_NOW_LOOP_NO__FP12RS_STACKDATAi_0x27af70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_NOW_LOOP_NO__FP12RS_STACKDATAi_0x27af70");
#endif

    switch (ctx->pc) {
        case 0x27af84u: goto label_27af84;
        case 0x27af90u: goto label_27af90;
        default: break;
    }

    ctx->pc = 0x27af70u;

    // 0x27af70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27af70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27af74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27af74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27af78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27af78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27af7c: 0xc064268  jal         func_1909A0
    ctx->pc = 0x27AF7Cu;
    SET_GPR_U32(ctx, 31, 0x27AF84u);
    ctx->pc = 0x27AF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AF7Cu;
            // 0x27af80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1909A0u;
    if (runtime->hasFunction(0x1909A0u)) {
        auto targetFn = runtime->lookupFunction(0x1909A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AF84u; }
        if (ctx->pc != 0x27AF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowLoopNo__Fv_0x1909a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AF84u; }
        if (ctx->pc != 0x27AF84u) { return; }
    }
    ctx->pc = 0x27AF84u;
label_27af84:
    // 0x27af84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27af84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27af88: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27AF88u;
    SET_GPR_U32(ctx, 31, 0x27AF90u);
    ctx->pc = 0x27AF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AF88u;
            // 0x27af8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AF90u; }
        if (ctx->pc != 0x27AF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AF90u; }
        if (ctx->pc != 0x27AF90u) { return; }
    }
    ctx->pc = 0x27AF90u;
label_27af90:
    // 0x27af90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27af90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27af94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27af94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27af98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27af98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27af9c: 0x3e00008  jr          $ra
    ctx->pc = 0x27AF9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AF9Cu;
            // 0x27afa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27AFA4u;
}
