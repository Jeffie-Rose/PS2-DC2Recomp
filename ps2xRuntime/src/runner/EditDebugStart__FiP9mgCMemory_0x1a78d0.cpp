#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditDebugStart__FiP9mgCMemory
// Address: 0x1a78d0 - 0x1a78e8
void EditDebugStart__FiP9mgCMemory_0x1a78d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditDebugStart__FiP9mgCMemory_0x1a78d0");
#endif

    ctx->pc = 0x1a78d0u;

    // 0x1a78d0: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x1a78d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x1a78d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a78d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a78d8: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x1a78d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x1a78dc: 0xaf838c10  sw          $v1, -0x73F0($gp)
    ctx->pc = 0x1a78dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937616), GPR_U32(ctx, 3));
    // 0x1a78e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A78E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A78E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A78E0u;
            // 0x1a78e4: 0xaf848c14  sw          $a0, -0x73EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A78E8u;
}
