#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__9CLaserGunFv
// Address: 0x1b7d20 - 0x1b7d40
void Initialize__9CLaserGunFv_0x1b7d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__9CLaserGunFv_0x1b7d20");
#endif

    ctx->pc = 0x1b7d20u;

    // 0x1b7d20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b7d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b7d24: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b7d24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b7d28: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x1b7d28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
    // 0x1b7d2c: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x1b7d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
    // 0x1b7d30: 0xac800120  sw          $zero, 0x120($a0)
    ctx->pc = 0x1b7d30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 288), GPR_U32(ctx, 0));
    // 0x1b7d34: 0xac8300e8  sw          $v1, 0xE8($a0)
    ctx->pc = 0x1b7d34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 3));
    // 0x1b7d38: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7D38u;
            // 0x1b7d3c: 0xac8000ec  sw          $zero, 0xEC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7D40u;
}
