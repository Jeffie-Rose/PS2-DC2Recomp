#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetAccele__12CActionCharaFv
// Address: 0x16a140 - 0x16a154
void ResetAccele__12CActionCharaFv_0x16a140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetAccele__12CActionCharaFv_0x16a140");
#endif

    ctx->pc = 0x16a140u;

    // 0x16a140: 0xac800788  sw          $zero, 0x788($a0)
    ctx->pc = 0x16a140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1928), GPR_U32(ctx, 0));
    // 0x16a144: 0xac800784  sw          $zero, 0x784($a0)
    ctx->pc = 0x16a144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1924), GPR_U32(ctx, 0));
    // 0x16a148: 0xac800780  sw          $zero, 0x780($a0)
    ctx->pc = 0x16a148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1920), GPR_U32(ctx, 0));
    // 0x16a14c: 0x3e00008  jr          $ra
    ctx->pc = 0x16A14Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A14Cu;
            // 0x16a150: 0xac800790  sw          $zero, 0x790($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1936), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A154u;
}
