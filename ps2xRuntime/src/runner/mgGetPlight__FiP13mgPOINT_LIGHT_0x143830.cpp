#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgGetPlight__FiP13mgPOINT_LIGHT
// Address: 0x143830 - 0x143848
void mgGetPlight__FiP13mgPOINT_LIGHT_0x143830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgGetPlight__FiP13mgPOINT_LIGHT_0x143830");
#endif

    ctx->pc = 0x143830u;

    // 0x143830: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x143830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143834: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x143834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143838: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x143838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x14383c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14383cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143840: 0x804e5c0  j           func_139700
    ctx->pc = 0x143840u;
    ctx->pc = 0x143844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143840u;
            // 0x143844: 0x24840ec0  addiu       $a0, $a0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139700u;
    if (runtime->hasFunction(0x139700u)) {
        auto targetFn = runtime->lookupFunction(0x139700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetPlight__13mgRENDER_INFOFiP13mgPOINT_LIGHT_0x139700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x143848u;
}
