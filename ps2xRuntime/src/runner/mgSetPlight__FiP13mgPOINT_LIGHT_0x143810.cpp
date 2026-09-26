#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetPlight__FiP13mgPOINT_LIGHT
// Address: 0x143810 - 0x14382c
void mgSetPlight__FiP13mgPOINT_LIGHT_0x143810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetPlight__FiP13mgPOINT_LIGHT_0x143810");
#endif

    ctx->pc = 0x143810u;

    // 0x143810: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x143810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143814: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143818: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x143818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14381c: 0xaf828820  sw          $v0, -0x77E0($gp)
    ctx->pc = 0x14381cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936608), GPR_U32(ctx, 2));
    // 0x143820: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x143820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x143824: 0x804e564  j           func_139590
    ctx->pc = 0x143824u;
    ctx->pc = 0x143828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143824u;
            // 0x143828: 0x24840ec0  addiu       $a0, $a0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139590u;
    if (runtime->hasFunction(0x139590u)) {
        auto targetFn = runtime->lookupFunction(0x139590u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SetPlight__13mgRENDER_INFOFiP13mgPOINT_LIGHT_0x139590(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x14382Cu;
}
