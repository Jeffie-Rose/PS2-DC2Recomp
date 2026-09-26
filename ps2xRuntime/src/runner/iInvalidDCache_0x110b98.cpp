#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: iInvalidDCache
// Address: 0x110b98 - 0x110bac
void iInvalidDCache_0x110b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iInvalidDCache_0x110b98");
#endif

    ctx->pc = 0x110b98u;

    // 0x110b98: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x110b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x110b9c: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x110b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x110ba0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x110ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x110ba4: 0x804429c  j           func_110A70
    ctx->pc = 0x110BA4u;
    ctx->pc = 0x110BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110BA4u;
            // 0x110ba8: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110A70u;
    if (runtime->hasFunction(0x110A70u)) {
        auto targetFn = runtime->lookupFunction(0x110A70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _sceIDC_0x110a70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x110BACu;
}
