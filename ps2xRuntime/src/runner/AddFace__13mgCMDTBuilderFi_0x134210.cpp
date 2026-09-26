#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddFace__13mgCMDTBuilderFi
// Address: 0x134210 - 0x134234
void AddFace__13mgCMDTBuilderFi_0x134210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddFace__13mgCMDTBuilderFi_0x134210");
#endif

    ctx->pc = 0x134210u;

    // 0x134210: 0x8c860024  lw          $a2, 0x24($a0)
    ctx->pc = 0x134210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x134214: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x134214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x134218: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x134218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x13421c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x13421cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x134220: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x134220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x134224: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x134224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x134228: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x134228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x13422c: 0x3e00008  jr          $ra
    ctx->pc = 0x13422Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134234u;
}
