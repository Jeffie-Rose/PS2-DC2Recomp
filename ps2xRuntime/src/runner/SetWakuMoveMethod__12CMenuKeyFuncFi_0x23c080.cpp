#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetWakuMoveMethod__12CMenuKeyFuncFi
// Address: 0x23c080 - 0x23c08c
void SetWakuMoveMethod__12CMenuKeyFuncFi_0x23c080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetWakuMoveMethod__12CMenuKeyFuncFi_0x23c080");
#endif

    ctx->pc = 0x23c080u;

    // 0x23c080: 0x8c83013c  lw          $v1, 0x13C($a0)
    ctx->pc = 0x23c080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x23c084: 0x3e00008  jr          $ra
    ctx->pc = 0x23C084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C084u;
            // 0x23c088: 0xa0650020  sb          $a1, 0x20($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23C08Cu;
}
