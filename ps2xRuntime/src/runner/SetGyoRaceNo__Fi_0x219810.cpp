#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetGyoRaceNo__Fi
// Address: 0x219810 - 0x21982c
void SetGyoRaceNo__Fi_0x219810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetGyoRaceNo__Fi_0x219810");
#endif

    ctx->pc = 0x219810u;

    // 0x219810: 0xa3849254  sb          $a0, -0x6DAC($gp)
    ctx->pc = 0x219810u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939220), (uint8_t)GPR_U32(ctx, 4));
    // 0x219814: 0x83839254  lb          $v1, -0x6DAC($gp)
    ctx->pc = 0x219814u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939220)));
    // 0x219818: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x219818u;
    {
        const bool branch_taken_0x219818 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x219818) {
            ctx->pc = 0x219824u;
            goto label_219824;
        }
    }
    ctx->pc = 0x219820u;
    // 0x219820: 0xa3809254  sb          $zero, -0x6DAC($gp)
    ctx->pc = 0x219820u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939220), (uint8_t)GPR_U32(ctx, 0));
label_219824:
    // 0x219824: 0x3e00008  jr          $ra
    ctx->pc = 0x219824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21982Cu;
}
