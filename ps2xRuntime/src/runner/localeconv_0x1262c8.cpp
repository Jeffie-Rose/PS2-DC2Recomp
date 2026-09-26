#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: localeconv
// Address: 0x1262c8 - 0x1262ec
void localeconv_0x1262c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("localeconv_0x1262c8");
#endif

    switch (ctx->pc) {
        case 0x1262e0u: goto label_1262e0;
        default: break;
    }

    ctx->pc = 0x1262c8u;

    // 0x1262c8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1262c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1262cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1262ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1262d0: 0x8c443b84  lw          $a0, 0x3B84($v0)
    ctx->pc = 0x1262d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15236)));
    // 0x1262d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1262d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1262d8: 0xc0498a2  jal         func_126288
    ctx->pc = 0x1262D8u;
    SET_GPR_U32(ctx, 31, 0x1262E0u);
    ctx->pc = 0x126288u;
    if (runtime->hasFunction(0x126288u)) {
        auto targetFn = runtime->lookupFunction(0x126288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1262E0u; }
        if (ctx->pc != 0x1262E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _localeconv_r_0x126288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1262E0u; }
        if (ctx->pc != 0x1262E0u) { return; }
    }
    ctx->pc = 0x1262E0u;
label_1262e0:
    // 0x1262e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1262e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1262e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1262E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1262E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1262E4u;
            // 0x1262e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1262ECu;
}
