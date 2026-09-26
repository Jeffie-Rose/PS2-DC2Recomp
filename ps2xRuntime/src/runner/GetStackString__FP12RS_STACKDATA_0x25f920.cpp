#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetStackString__FP12RS_STACKDATA
// Address: 0x25f920 - 0x25f928
void GetStackString__FP12RS_STACKDATA_0x25f920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetStackString__FP12RS_STACKDATA_0x25f920");
#endif

    ctx->pc = 0x25f920u;

    // 0x25f920: 0x3e00008  jr          $ra
    ctx->pc = 0x25F920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F920u;
            // 0x25f924: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25F928u;
}
