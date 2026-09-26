#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetName__9CMapPieceFPc
// Address: 0x162350 - 0x162358
void SetName__9CMapPieceFPc_0x162350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetName__9CMapPieceFPc_0x162350");
#endif

    ctx->pc = 0x162350u;

    // 0x162350: 0x3e00008  jr          $ra
    ctx->pc = 0x162350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162350u;
            // 0x162354: 0xac850080  sw          $a1, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162358u;
}
