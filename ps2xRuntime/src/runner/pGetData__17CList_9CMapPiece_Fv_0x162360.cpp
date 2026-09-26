#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: pGetData__17CList<9CMapPiece>Fv
// Address: 0x162360 - 0x162368
void pGetData__17CList_9CMapPiece_Fv_0x162360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pGetData__17CList_9CMapPiece_Fv_0x162360");
#endif

    ctx->pc = 0x162360u;

    // 0x162360: 0x3e00008  jr          $ra
    ctx->pc = 0x162360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162360u;
            // 0x162364: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162368u;
}
