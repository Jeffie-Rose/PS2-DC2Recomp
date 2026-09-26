#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetViBufDataSize__6CMovieFv
// Address: 0x298f90 - 0x298f98
void GetViBufDataSize__6CMovieFv_0x298f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetViBufDataSize__6CMovieFv_0x298f90");
#endif

    ctx->pc = 0x298f90u;

    // 0x298f90: 0x3e00008  jr          $ra
    ctx->pc = 0x298F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298F90u;
            // 0x298f94: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x298F98u;
}
