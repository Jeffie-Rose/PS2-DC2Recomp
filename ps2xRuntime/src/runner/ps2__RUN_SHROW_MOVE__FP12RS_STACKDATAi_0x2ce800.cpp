#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _RUN_SHROW_MOVE__FP12RS_STACKDATAi
// Address: 0x2ce800 - 0x2ce824
void ps2__RUN_SHROW_MOVE__FP12RS_STACKDATAi_0x2ce800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RUN_SHROW_MOVE__FP12RS_STACKDATAi_0x2ce800");
#endif

    switch (ctx->pc) {
        case 0x2ce814u: goto label_2ce814;
        default: break;
    }

    ctx->pc = 0x2ce800u;

    // 0x2ce800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ce800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ce804: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2ce804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2ce808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ce808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ce80c: 0xc05b558  jal         func_16D560
    ctx->pc = 0x2CE80Cu;
    SET_GPR_U32(ctx, 31, 0x2CE814u);
    ctx->pc = 0x2CE810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE80Cu;
            // 0x2ce810: 0x8c24d430  lw          $a0, -0x2BD0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16D560u;
    if (runtime->hasFunction(0x16D560u)) {
        auto targetFn = runtime->lookupFunction(0x16D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE814u; }
        if (ctx->pc != 0x2CE814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HumanShrowMoveIF__12CActionCharaFv_0x16d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE814u; }
        if (ctx->pc != 0x2CE814u) { return; }
    }
    ctx->pc = 0x2CE814u;
label_2ce814:
    // 0x2ce814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ce814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce81c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE81Cu;
            // 0x2ce820: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE824u;
}
