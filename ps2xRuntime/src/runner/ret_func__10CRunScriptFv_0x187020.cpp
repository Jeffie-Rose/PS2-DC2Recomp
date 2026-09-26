#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ret_func__10CRunScriptFv
// Address: 0x187020 - 0x187050
void ret_func__10CRunScriptFv_0x187020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ret_func__10CRunScriptFv_0x187020");
#endif

    ctx->pc = 0x187020u;

    // 0x187020: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x187020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x187024: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x187024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x187028: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x187028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x18702c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x18702cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x187030: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x187030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x187034: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x187034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x187038: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x187038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x18703c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x18703cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x187040: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x187040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    // 0x187044: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x187044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x187048: 0x3e00008  jr          $ra
    ctx->pc = 0x187048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18704Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187048u;
            // 0x18704c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187050u;
}
