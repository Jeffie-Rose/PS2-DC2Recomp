#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Set__9mgRect<i>Fiiii
// Address: 0x13e390 - 0x13e3a8
void Set__9mgRect_i_Fiiii_0x13e390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set__9mgRect_i_Fiiii_0x13e390");
#endif

    ctx->pc = 0x13e390u;

    // 0x13e390: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x13e390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x13e394: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x13e394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x13e398: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x13e398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x13e39c: 0xac88000c  sw          $t0, 0xC($a0)
    ctx->pc = 0x13e39cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
    // 0x13e3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x13E3A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E3A8u;
}
