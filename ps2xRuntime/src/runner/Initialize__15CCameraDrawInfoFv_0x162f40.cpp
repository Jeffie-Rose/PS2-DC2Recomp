#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__15CCameraDrawInfoFv
// Address: 0x162f40 - 0x162f50
void Initialize__15CCameraDrawInfoFv_0x162f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__15CCameraDrawInfoFv_0x162f40");
#endif

    ctx->pc = 0x162f40u;

    // 0x162f40: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x162f40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x162f44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x162f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x162f48: 0x3e00008  jr          $ra
    ctx->pc = 0x162F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162F48u;
            // 0x162f4c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162F50u;
}
