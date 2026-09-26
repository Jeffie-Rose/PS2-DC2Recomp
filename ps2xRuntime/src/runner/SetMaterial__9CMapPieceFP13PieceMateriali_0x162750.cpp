#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMaterial__9CMapPieceFP13PieceMateriali
// Address: 0x162750 - 0x16275c
void SetMaterial__9CMapPieceFP13PieceMateriali_0x162750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMaterial__9CMapPieceFP13PieceMateriali_0x162750");
#endif

    ctx->pc = 0x162750u;

    // 0x162750: 0xac850090  sw          $a1, 0x90($a0)
    ctx->pc = 0x162750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 5));
    // 0x162754: 0x3e00008  jr          $ra
    ctx->pc = 0x162754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162754u;
            // 0x162758: 0xac86008c  sw          $a2, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16275Cu;
}
