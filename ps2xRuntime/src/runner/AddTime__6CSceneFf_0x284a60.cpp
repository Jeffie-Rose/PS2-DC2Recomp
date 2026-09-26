#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddTime__6CSceneFf
// Address: 0x284a60 - 0x284a6c
void AddTime__6CSceneFf_0x284a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddTime__6CSceneFf_0x284a60");
#endif

    ctx->pc = 0x284a60u;

    // 0x284a60: 0xc4802f6c  lwc1        $f0, 0x2F6C($a0)
    ctx->pc = 0x284a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284a64: 0x80a1270  j           func_2849C0
    ctx->pc = 0x284A64u;
    ctx->pc = 0x284A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284A64u;
            // 0x284a68: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849C0u;
    if (runtime->hasFunction(0x2849C0u)) {
        auto targetFn = runtime->lookupFunction(0x2849C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SetTime__6CSceneFf_0x2849c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x284A6Cu;
}
