#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditPreMenuAnime__Fi
// Address: 0x2d8bd0 - 0x2d8bdc
void EditPreMenuAnime__Fi_0x2d8bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditPreMenuAnime__Fi_0x2d8bd0");
#endif

    ctx->pc = 0x2d8bd0u;

    // 0x2d8bd0: 0xaf849e58  sw          $a0, -0x61A8($gp)
    ctx->pc = 0x2d8bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942296), GPR_U32(ctx, 4));
    // 0x2d8bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8BD4u;
            // 0x2d8bd8: 0xaf809e54  sw          $zero, -0x61AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8BDCu;
}
