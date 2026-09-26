#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTourCountEtc__9CSaveDataFv
// Address: 0x2f6b60 - 0x2f6b70
void GetTourCountEtc__9CSaveDataFv_0x2f6b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTourCountEtc__9CSaveDataFv_0x2f6b60");
#endif

    ctx->pc = 0x2f6b60u;

    // 0x2f6b60: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6b64: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2f6b64u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2f6b68: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6B68u;
            // 0x2f6b6c: 0x802243db  lb          $v0, 0x43DB($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 17371)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6B70u;
}
