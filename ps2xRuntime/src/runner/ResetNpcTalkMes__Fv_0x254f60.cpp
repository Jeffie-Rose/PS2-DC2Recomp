#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetNpcTalkMes__Fv
// Address: 0x254f60 - 0x254f74
void ResetNpcTalkMes__Fv_0x254f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetNpcTalkMes__Fv_0x254f60");
#endif

    ctx->pc = 0x254f60u;

    // 0x254f60: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x254f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x254f64: 0xac20e858  sw          $zero, -0x17A8($at)
    ctx->pc = 0x254f64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961240), GPR_U32(ctx, 0));
    // 0x254f68: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x254f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x254f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x254F6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254F6Cu;
            // 0x254f70: 0xac20e85c  sw          $zero, -0x17A4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294961244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254F74u;
}
