#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__8CMdsInfoFv
// Address: 0x168b60 - 0x168b80
void Initialize__8CMdsInfoFv_0x168b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__8CMdsInfoFv_0x168b60");
#endif

    ctx->pc = 0x168b60u;

    // 0x168b60: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x168b60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x168b64: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x168b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x168b68: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x168b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x168b6c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x168b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x168b70: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x168b70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x168b74: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x168b74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x168b78: 0x3e00008  jr          $ra
    ctx->pc = 0x168B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168B78u;
            // 0x168b7c: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168B80u;
}
