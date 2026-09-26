#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetLight__FPA4_fPA4_f
// Address: 0x143740 - 0x14375c
void mgSetLight__FPA4_fPA4_f_0x143740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetLight__FPA4_fPA4_f_0x143740");
#endif

    ctx->pc = 0x143740u;

    // 0x143740: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x143740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143748: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x143748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14374c: 0xaf828820  sw          $v0, -0x77E0($gp)
    ctx->pc = 0x14374cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936608), GPR_U32(ctx, 2));
    // 0x143750: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x143750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x143754: 0x804e4c8  j           func_139320
    ctx->pc = 0x143754u;
    ctx->pc = 0x143758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143754u;
            // 0x143758: 0x24840ec0  addiu       $a0, $a0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139320u;
    if (runtime->hasFunction(0x139320u)) {
        auto targetFn = runtime->lookupFunction(0x139320u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SetLight__13mgRENDER_INFOFPA4_fPA4_f_0x139320(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x14375Cu;
}
