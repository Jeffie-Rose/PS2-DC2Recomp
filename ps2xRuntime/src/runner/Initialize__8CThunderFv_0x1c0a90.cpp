#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__8CThunderFv
// Address: 0x1c0a90 - 0x1c0aa4
void Initialize__8CThunderFv_0x1c0a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__8CThunderFv_0x1c0a90");
#endif

    ctx->pc = 0x1c0a90u;

    // 0x1c0a90: 0xa0800db0  sb          $zero, 0xDB0($a0)
    ctx->pc = 0x1c0a90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3504), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0a94: 0x24830110  addiu       $v1, $a0, 0x110
    ctx->pc = 0x1c0a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x1c0a98: 0xa0800db1  sb          $zero, 0xDB1($a0)
    ctx->pc = 0x1c0a98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3505), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0A9Cu;
            // 0x1c0aa0: 0xac8300f4  sw          $v1, 0xF4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0AA4u;
}
