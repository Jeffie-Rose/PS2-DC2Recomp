#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FirstDraw__13CEventSprite2Fv
// Address: 0x290c90 - 0x290cbc
void FirstDraw__13CEventSprite2Fv_0x290c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FirstDraw__13CEventSprite2Fv_0x290c90");
#endif

    switch (ctx->pc) {
        case 0x290cb0u: goto label_290cb0;
        default: break;
    }

    ctx->pc = 0x290c90u;

    // 0x290c90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x290c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x290c94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x290c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x290c98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290c9c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x290c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x290ca0: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x290CA0u;
    {
        const bool branch_taken_0x290ca0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x290ca0) {
            ctx->pc = 0x290CB0u;
            goto label_290cb0;
        }
    }
    ctx->pc = 0x290CA8u;
    // 0x290ca8: 0xc0a4330  jal         func_290CC0
    ctx->pc = 0x290CA8u;
    SET_GPR_U32(ctx, 31, 0x290CB0u);
    ctx->pc = 0x290CC0u;
    if (runtime->hasFunction(0x290CC0u)) {
        auto targetFn = runtime->lookupFunction(0x290CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290CB0u; }
        if (ctx->pc != 0x290CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__13CEventSprite2Fv_0x290cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290CB0u; }
        if (ctx->pc != 0x290CB0u) { return; }
    }
    ctx->pc = 0x290CB0u;
label_290cb0:
    // 0x290cb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x290CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290CB4u;
            // 0x290cb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290CBCu;
}
