#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgGetAmbient__FPf
// Address: 0x1437d0 - 0x1437e0
void mgGetAmbient__FPf_0x1437d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgGetAmbient__FPf_0x1437d0");
#endif

    ctx->pc = 0x1437d0u;

    // 0x1437d0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1437d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437d4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1437d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1437d8: 0x804e538  j           func_1394E0
    ctx->pc = 0x1437D8u;
    ctx->pc = 0x1437DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1437D8u;
            // 0x1437dc: 0x24840ec0  addiu       $a0, $a0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1394E0u;
    if (runtime->hasFunction(0x1394E0u)) {
        auto targetFn = runtime->lookupFunction(0x1394E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetAmbient__13mgRENDER_INFOFPf_0x1394e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1437E0u;
}
