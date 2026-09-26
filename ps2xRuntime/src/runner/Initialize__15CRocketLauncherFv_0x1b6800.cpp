#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__15CRocketLauncherFv
// Address: 0x1b6800 - 0x1b6820
void Initialize__15CRocketLauncherFv_0x1b6800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__15CRocketLauncherFv_0x1b6800");
#endif

    ctx->pc = 0x1b6800u;

    // 0x1b6800: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b6800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b6804: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b6804u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b6808: 0xac800150  sw          $zero, 0x150($a0)
    ctx->pc = 0x1b6808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
    // 0x1b680c: 0xac800154  sw          $zero, 0x154($a0)
    ctx->pc = 0x1b680cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 0));
    // 0x1b6810: 0xac800174  sw          $zero, 0x174($a0)
    ctx->pc = 0x1b6810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 0));
    // 0x1b6814: 0xac830160  sw          $v1, 0x160($a0)
    ctx->pc = 0x1b6814u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 352), GPR_U32(ctx, 3));
    // 0x1b6818: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B681Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6818u;
            // 0x1b681c: 0xac800164  sw          $zero, 0x164($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 356), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6820u;
}
