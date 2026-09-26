#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetColor__12CEventSpriteFiiii
// Address: 0x290300 - 0x290314
void SetColor__12CEventSpriteFiiii_0x290300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetColor__12CEventSpriteFiiii_0x290300");
#endif

    ctx->pc = 0x290300u;

    // 0x290300: 0xac850048  sw          $a1, 0x48($a0)
    ctx->pc = 0x290300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
    // 0x290304: 0xac86004c  sw          $a2, 0x4C($a0)
    ctx->pc = 0x290304u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 6));
    // 0x290308: 0xac870050  sw          $a3, 0x50($a0)
    ctx->pc = 0x290308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 7));
    // 0x29030c: 0x3e00008  jr          $ra
    ctx->pc = 0x29030Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29030Cu;
            // 0x290310: 0xac880054  sw          $t0, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290314u;
}
