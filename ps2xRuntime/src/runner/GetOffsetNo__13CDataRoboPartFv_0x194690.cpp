#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetOffsetNo__13CDataRoboPartFv
// Address: 0x194690 - 0x194698
void GetOffsetNo__13CDataRoboPartFv_0x194690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOffsetNo__13CDataRoboPartFv_0x194690");
#endif

    ctx->pc = 0x194690u;

    // 0x194690: 0x3e00008  jr          $ra
    ctx->pc = 0x194690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194690u;
            // 0x194694: 0x90820022  lbu         $v0, 0x22($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194698u;
}
