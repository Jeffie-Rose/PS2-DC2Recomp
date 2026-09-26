#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMsgItemNo__7CDC2MesFi
// Address: 0x21da50 - 0x21da60
void GetMsgItemNo__7CDC2MesFi_0x21da50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMsgItemNo__7CDC2MesFi_0x21da50");
#endif

    ctx->pc = 0x21da50u;

    // 0x21da50: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x21da50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21da54: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21da54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21da58: 0x3e00008  jr          $ra
    ctx->pc = 0x21DA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DA58u;
            // 0x21da5c: 0x8c421a04  lw          $v0, 0x1A04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6660)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21DA60u;
}
