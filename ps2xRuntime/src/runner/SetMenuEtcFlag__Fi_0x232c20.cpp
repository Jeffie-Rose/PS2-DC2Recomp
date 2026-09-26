#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMenuEtcFlag__Fi
// Address: 0x232c20 - 0x232c34
void SetMenuEtcFlag__Fi_0x232c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMenuEtcFlag__Fi_0x232c20");
#endif

    ctx->pc = 0x232c20u;

    // 0x232c20: 0x8f829500  lw          $v0, -0x6B00($gp)
    ctx->pc = 0x232c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939904)));
    // 0x232c24: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x232c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x232c28: 0xaf829500  sw          $v0, -0x6B00($gp)
    ctx->pc = 0x232c28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939904), GPR_U32(ctx, 2));
    // 0x232c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x232C2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232C2Cu;
            // 0x232c30: 0x8f829500  lw          $v0, -0x6B00($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939904)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x232C34u;
}
