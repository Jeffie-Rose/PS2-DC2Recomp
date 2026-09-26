#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitError__18CMemoryCardManagerFv
// Address: 0x2f1930 - 0x2f1940
void InitError__18CMemoryCardManagerFv_0x2f1930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitError__18CMemoryCardManagerFv_0x2f1930");
#endif

    ctx->pc = 0x2f1930u;

    // 0x2f1930: 0x248404d0  addiu       $a0, $a0, 0x4D0
    ctx->pc = 0x2f1930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1232));
    // 0x2f1934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1938: 0x8049c86  j           func_127218
    ctx->pc = 0x2F1938u;
    ctx->pc = 0x2F193Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1938u;
            // 0x2f193c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        memset_0x127218(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2F1940u;
}
