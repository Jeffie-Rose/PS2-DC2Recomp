#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetSpectolInfo__FP13CGameDataUsedP13CGameDataUsed
// Address: 0x23a7c0 - 0x23a7cc
void SetSpectolInfo__FP13CGameDataUsedP13CGameDataUsed_0x23a7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSpectolInfo__FP13CGameDataUsedP13CGameDataUsed_0x23a7c0");
#endif

    ctx->pc = 0x23a7c0u;

    // 0x23a7c0: 0xaf8495d8  sw          $a0, -0x6A28($gp)
    ctx->pc = 0x23a7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940120), GPR_U32(ctx, 4));
    // 0x23a7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x23A7C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A7C4u;
            // 0x23a7c8: 0xaf8595dc  sw          $a1, -0x6A24($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940124), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23A7CCu;
}
