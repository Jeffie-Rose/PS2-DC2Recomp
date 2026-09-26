#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TextureCrd__11mgCDrawPrimFii
// Address: 0x134d70 - 0x134d7c
void TextureCrd__11mgCDrawPrimFii_0x134d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TextureCrd__11mgCDrawPrimFii_0x134d70");
#endif

    ctx->pc = 0x134d70u;

    // 0x134d70: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x134d70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x134d74: 0x804d34c  j           func_134D30
    ctx->pc = 0x134D74u;
    ctx->pc = 0x134D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134D74u;
            // 0x134d78: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D30u;
    if (runtime->hasFunction(0x134D30u)) {
        auto targetFn = runtime->lookupFunction(0x134D30u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        TextureCrd4__11mgCDrawPrimFii_0x134d30(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x134D7Cu;
}
