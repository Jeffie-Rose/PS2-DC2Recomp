#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetAmbient__FPf
// Address: 0x1437b0 - 0x1437c8
void mgSetAmbient__FPf_0x1437b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetAmbient__FPf_0x1437b0");
#endif

    ctx->pc = 0x1437b0u;

    // 0x1437b0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1437b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1437b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1437b8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1437b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1437bc: 0xaf828820  sw          $v0, -0x77E0($gp)
    ctx->pc = 0x1437bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936608), GPR_U32(ctx, 2));
    // 0x1437c0: 0x804e52c  j           func_1394B0
    ctx->pc = 0x1437C0u;
    ctx->pc = 0x1437C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1437C0u;
            // 0x1437c4: 0x24840ec0  addiu       $a0, $a0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1394B0u;
    if (runtime->hasFunction(0x1394B0u)) {
        auto targetFn = runtime->lookupFunction(0x1394B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SetAmbient__13mgRENDER_INFOFPf_0x1394b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1437C8u;
}
