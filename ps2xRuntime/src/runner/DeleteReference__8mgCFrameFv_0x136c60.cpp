#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteReference__8mgCFrameFv
// Address: 0x136c60 - 0x136c74
void DeleteReference__8mgCFrameFv_0x136c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteReference__8mgCFrameFv_0x136c60");
#endif

    ctx->pc = 0x136c60u;

    // 0x136c60: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x136c60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x136c64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136c68: 0xac8000fc  sw          $zero, 0xFC($a0)
    ctx->pc = 0x136c68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 0));
    // 0x136c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x136C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136C6Cu;
            // 0x136c70: 0xac830040  sw          $v1, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x136C74u;
}
