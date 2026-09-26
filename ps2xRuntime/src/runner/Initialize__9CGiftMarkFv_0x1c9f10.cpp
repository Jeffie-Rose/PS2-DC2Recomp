#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__9CGiftMarkFv
// Address: 0x1c9f10 - 0x1c9f24
void Initialize__9CGiftMarkFv_0x1c9f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__9CGiftMarkFv_0x1c9f10");
#endif

    ctx->pc = 0x1c9f10u;

    // 0x1c9f10: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1c9f10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1c9f14: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1c9f14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1c9f18: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1c9f18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1c9f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9F1Cu;
            // 0x1c9f20: 0xa4800010  sh          $zero, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9F24u;
}
