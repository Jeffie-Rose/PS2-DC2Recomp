#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPieceLoadSkip__4CMapFi
// Address: 0x164510 - 0x164518
void SetPieceLoadSkip__4CMapFi_0x164510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPieceLoadSkip__4CMapFi_0x164510");
#endif

    ctx->pc = 0x164510u;

    // 0x164510: 0x3e00008  jr          $ra
    ctx->pc = 0x164510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164510u;
            // 0x164514: 0xac850ca8  sw          $a1, 0xCA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3240), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164518u;
}
