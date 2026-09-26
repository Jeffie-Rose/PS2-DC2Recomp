#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgGetLight__FPA4_fPA4_f
// Address: 0x143760 - 0x143778
void mgGetLight__FPA4_fPA4_f_0x143760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgGetLight__FPA4_fPA4_f_0x143760");
#endif

    ctx->pc = 0x143760u;

    // 0x143760: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x143760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143764: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x143764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143768: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x143768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x14376c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14376cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143770: 0x804e4e8  j           func_1393A0
    ctx->pc = 0x143770u;
    ctx->pc = 0x143774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143770u;
            // 0x143774: 0x24840ec0  addiu       $a0, $a0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1393A0u;
    if (runtime->hasFunction(0x1393A0u)) {
        auto targetFn = runtime->lookupFunction(0x1393A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetLight__13mgRENDER_INFOFPA4_fPA4_f_0x1393a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x143778u;
}
