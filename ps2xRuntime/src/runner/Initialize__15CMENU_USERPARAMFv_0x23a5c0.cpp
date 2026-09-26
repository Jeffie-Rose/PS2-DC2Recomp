#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__15CMENU_USERPARAMFv
// Address: 0x23a5c0 - 0x23a5dc
void Initialize__15CMENU_USERPARAMFv_0x23a5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__15CMENU_USERPARAMFv_0x23a5c0");
#endif

    ctx->pc = 0x23a5c0u;

    // 0x23a5c0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x23a5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x23a5c4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x23a5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x23a5c8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x23a5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x23a5cc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x23a5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x23a5d0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x23a5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x23a5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x23A5D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A5D4u;
            // 0x23a5d8: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23A5DCu;
}
