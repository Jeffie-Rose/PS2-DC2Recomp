#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCurrentDir__FPc
// Address: 0x1487c0 - 0x1487cc
void GetCurrentDir__FPc_0x1487c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCurrentDir__FPc_0x1487c0");
#endif

    ctx->pc = 0x1487c0u;

    // 0x1487c0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1487c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1487c4: 0x804a3dc  j           func_128F70
    ctx->pc = 0x1487C4u;
    ctx->pc = 0x1487C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1487C4u;
            // 0x1487c8: 0x24a54390  addiu       $a1, $a1, 0x4390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        strcpy_0x128f70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1487CCu;
}
