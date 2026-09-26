#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UndoEnable__Fv
// Address: 0x2d9720 - 0x2d9748
void UndoEnable__Fv_0x2d9720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UndoEnable__Fv_0x2d9720");
#endif

    switch (ctx->pc) {
        case 0x2d9730u: goto label_2d9730;
        default: break;
    }

    ctx->pc = 0x2d9720u;

    // 0x2d9720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9728: 0xc0b65c4  jal         func_2D9710
    ctx->pc = 0x2D9728u;
    SET_GPR_U32(ctx, 31, 0x2D9730u);
    ctx->pc = 0x2D9710u;
    if (runtime->hasFunction(0x2D9710u)) {
        auto targetFn = runtime->lookupFunction(0x2D9710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9730u; }
        if (ctx->pc != 0x2D9730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUndoData__Fv_0x2d9710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9730u; }
        if (ctx->pc != 0x2D9730u) { return; }
    }
    ctx->pc = 0x2D9730u;
label_2d9730:
    // 0x2d9730: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d9730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d9734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9738: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x2d9738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2d973c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d973cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2d9740: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9740u;
            // 0x2d9744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D9748u;
}
