#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GOTO_SELECT_PARTY__FP12RS_STACKDATAi
// Address: 0x264200 - 0x264220
void ps2__GOTO_SELECT_PARTY__FP12RS_STACKDATAi_0x264200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GOTO_SELECT_PARTY__FP12RS_STACKDATAi_0x264200");
#endif

    ctx->pc = 0x264200u;

    // 0x264200: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x264200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x264204: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x264204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x264208: 0xac22d618  sw          $v0, -0x29E8($at)
    ctx->pc = 0x264208u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956568), GPR_U32(ctx, 2));
    // 0x26420c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26420cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x264210: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x264210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x264214: 0xac22e500  sw          $v0, -0x1B00($at)
    ctx->pc = 0x264214u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960384), GPR_U32(ctx, 2));
    // 0x264218: 0x3e00008  jr          $ra
    ctx->pc = 0x264218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26421Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264218u;
            // 0x26421c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x264220u;
}
