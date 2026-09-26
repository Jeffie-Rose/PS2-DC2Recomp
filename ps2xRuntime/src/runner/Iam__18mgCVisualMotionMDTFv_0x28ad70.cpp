#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Iam__18mgCVisualMotionMDTFv
// Address: 0x28ad70 - 0x28ad78
void Iam__18mgCVisualMotionMDTFv_0x28ad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Iam__18mgCVisualMotionMDTFv_0x28ad70");
#endif

    ctx->pc = 0x28ad70u;

    // 0x28ad70: 0x3e00008  jr          $ra
    ctx->pc = 0x28AD70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AD70u;
            // 0x28ad74: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28AD78u;
}
