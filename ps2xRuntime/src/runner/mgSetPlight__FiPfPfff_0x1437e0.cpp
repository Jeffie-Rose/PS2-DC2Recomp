#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetPlight__FiPfPfff
// Address: 0x1437e0 - 0x143804
void mgSetPlight__FiPfPfff_0x1437e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetPlight__FiPfPfff_0x1437e0");
#endif

    ctx->pc = 0x1437e0u;

    // 0x1437e0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1437e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437e4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1437e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1437e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1437ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1437f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1437f4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1437f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1437f8: 0x24840ec0  addiu       $a0, $a0, 0xEC0
    ctx->pc = 0x1437f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3776));
    // 0x1437fc: 0x804e544  j           func_139510
    ctx->pc = 0x1437FCu;
    ctx->pc = 0x143800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1437FCu;
            // 0x143800: 0xaf828820  sw          $v0, -0x77E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139510u;
    if (runtime->hasFunction(0x139510u)) {
        auto targetFn = runtime->lookupFunction(0x139510u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SetPlight__13mgRENDER_INFOFiPfPfff_0x139510(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x143804u;
}
