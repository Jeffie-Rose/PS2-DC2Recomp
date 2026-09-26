#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: iSyncDCache
// Address: 0x110a58 - 0x110a6c
void iSyncDCache_0x110a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iSyncDCache_0x110a58");
#endif

    ctx->pc = 0x110a58u;

    // 0x110a58: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x110a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x110a5c: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x110a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x110a60: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x110a60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x110a64: 0x804424c  j           func_110930
    ctx->pc = 0x110A64u;
    ctx->pc = 0x110A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110A64u;
            // 0x110a68: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110930u;
    if (runtime->hasFunction(0x110930u)) {
        auto targetFn = runtime->lookupFunction(0x110930u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _sceSDC_0x110930(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x110A6Cu;
}
