#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGyoRaceRanking__Fv
// Address: 0x219970 - 0x219978
void GetGyoRaceRanking__Fv_0x219970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGyoRaceRanking__Fv_0x219970");
#endif

    ctx->pc = 0x219970u;

    // 0x219970: 0x3e00008  jr          $ra
    ctx->pc = 0x219970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219970u;
            // 0x219974: 0x83829258  lb          $v0, -0x6DA8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939224)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219978u;
}
