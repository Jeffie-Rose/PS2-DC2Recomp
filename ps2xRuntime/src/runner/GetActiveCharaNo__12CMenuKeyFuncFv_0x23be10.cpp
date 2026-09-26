#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetActiveCharaNo__12CMenuKeyFuncFv
// Address: 0x23be10 - 0x23be1c
void GetActiveCharaNo__12CMenuKeyFuncFv_0x23be10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetActiveCharaNo__12CMenuKeyFuncFv_0x23be10");
#endif

    ctx->pc = 0x23be10u;

    // 0x23be10: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23be10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23be14: 0x3e00008  jr          $ra
    ctx->pc = 0x23BE14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BE14u;
            // 0x23be18: 0x8c22d628  lw          $v0, -0x29D8($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956584)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23BE1Cu;
}
