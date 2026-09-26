#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Intersection__10CCollisionFPfPfPf
// Address: 0x147ab0 - 0x147ab8
void Intersection__10CCollisionFPfPfPf_0x147ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Intersection__10CCollisionFPfPfPf_0x147ab0");
#endif

    ctx->pc = 0x147ab0u;

    // 0x147ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x147AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147AB0u;
            // 0x147ab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x147AB8u;
}
