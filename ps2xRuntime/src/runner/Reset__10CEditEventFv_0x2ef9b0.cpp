#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Reset__10CEditEventFv
// Address: 0x2ef9b0 - 0x2ef9dc
void Reset__10CEditEventFv_0x2ef9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Reset__10CEditEventFv_0x2ef9b0");
#endif

    ctx->pc = 0x2ef9b0u;

    // 0x2ef9b0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2ef9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2ef9b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ef9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ef9b8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2ef9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2ef9bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ef9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef9c0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2ef9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2ef9c4: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x2ef9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x2ef9c8: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2ef9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x2ef9cc: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x2ef9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x2ef9d0: 0xa0800128  sb          $zero, 0x128($a0)
    ctx->pc = 0x2ef9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 296), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef9d4: 0x8049c86  j           func_127218
    ctx->pc = 0x2EF9D4u;
    ctx->pc = 0x2EF9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF9D4u;
            // 0x2ef9d8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        memset_0x127218(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2EF9DCu;
}
