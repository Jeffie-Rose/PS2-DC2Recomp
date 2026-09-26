#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__16CDngFloorManagerFv
// Address: 0x2f8cc0 - 0x2f8cd8
void Initialize__16CDngFloorManagerFv_0x2f8cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__16CDngFloorManagerFv_0x2f8cc0");
#endif

    ctx->pc = 0x2f8cc0u;

    // 0x2f8cc0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2f8cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8cc4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2f8cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2f8cc8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2f8cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2f8ccc: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x2f8cccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f8cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8CD0u;
            // 0x2f8cd4: 0xa480000e  sh          $zero, 0xE($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F8CD8u;
}
