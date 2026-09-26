#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGyoRaceNo__Fv
// Address: 0x219830 - 0x219838
void GetGyoRaceNo__Fv_0x219830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGyoRaceNo__Fv_0x219830");
#endif

    ctx->pc = 0x219830u;

    // 0x219830: 0x3e00008  jr          $ra
    ctx->pc = 0x219830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219830u;
            // 0x219834: 0x83829254  lb          $v0, -0x6DAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939220)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219838u;
}
