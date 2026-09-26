#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgGetDirFromCamera__FPfPf
// Address: 0x145b30 - 0x145b3c
void mgGetDirFromCamera__FPfPf_0x145b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgGetDirFromCamera__FPfPf_0x145b30");
#endif

    ctx->pc = 0x145b30u;

    // 0x145b30: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x145b30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x145b34: 0x8041c3e  j           func_1070F8
    ctx->pc = 0x145B34u;
    ctx->pc = 0x145B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145B34u;
            // 0x145b38: 0x24c61260  addiu       $a2, $a2, 0x1260 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x145B3Cu;
}
