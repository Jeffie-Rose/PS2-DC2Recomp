#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetLight__FiPfPf
// Address: 0x143780 - 0x1437a4
void mgSetLight__FiPfPf_0x143780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetLight__FiPfPf_0x143780");
#endif

    ctx->pc = 0x143780u;

    // 0x143780: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x143780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143784: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x143784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143788: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x143788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14378c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14378cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143790: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143794: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x143794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x143798: 0x24840ec0  addiu       $a0, $a0, 0xEC0
    ctx->pc = 0x143798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3776));
    // 0x14379c: 0x804e500  j           func_139400
    ctx->pc = 0x14379Cu;
    ctx->pc = 0x1437A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14379Cu;
            // 0x1437a0: 0xaf828820  sw          $v0, -0x77E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139400u;
    if (runtime->hasFunction(0x139400u)) {
        auto targetFn = runtime->lookupFunction(0x139400u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SetLight__13mgRENDER_INFOFiPfPf_0x139400(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1437A4u;
}
