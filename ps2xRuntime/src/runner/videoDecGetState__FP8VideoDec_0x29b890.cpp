#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: videoDecGetState__FP8VideoDec
// Address: 0x29b890 - 0x29b898
void videoDecGetState__FP8VideoDec_0x29b890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("videoDecGetState__FP8VideoDec_0x29b890");
#endif

    ctx->pc = 0x29b890u;

    // 0x29b890: 0x3e00008  jr          $ra
    ctx->pc = 0x29B890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B890u;
            // 0x29b894: 0x8c8200a8  lw          $v0, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B898u;
}
