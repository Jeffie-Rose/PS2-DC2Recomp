#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgPreEndDraw__FP14mgCDrawManager
// Address: 0x142540 - 0x142558
void mgPreEndDraw__FP14mgCDrawManager_0x142540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgPreEndDraw__FP14mgCDrawManager_0x142540");
#endif

    ctx->pc = 0x142540u;

    // 0x142540: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x142540u;
    {
        const bool branch_taken_0x142540 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x142540) {
            ctx->pc = 0x142550u;
            goto label_142550;
        }
    }
    ctx->pc = 0x142548u;
    // 0x142548: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x142548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x14254c: 0x248420e0  addiu       $a0, $a0, 0x20E0
    ctx->pc = 0x14254cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8416));
label_142550:
    // 0x142550: 0x804d53c  j           func_1354F0
    ctx->pc = 0x142550u;
    ctx->pc = 0x1354F0u;
    if (runtime->hasFunction(0x1354F0u)) {
        auto targetFn = runtime->lookupFunction(0x1354F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        PreEndDraw__14mgCDrawManagerFv_0x1354f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x142558u;
}
