#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NormalDraw__13CEventSprite2Fv
// Address: 0x290c60 - 0x290c8c
void NormalDraw__13CEventSprite2Fv_0x290c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NormalDraw__13CEventSprite2Fv_0x290c60");
#endif

    switch (ctx->pc) {
        case 0x290c80u: goto label_290c80;
        default: break;
    }

    ctx->pc = 0x290c60u;

    // 0x290c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x290c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x290c64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x290c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290c6c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x290c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x290c70: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x290C70u;
    {
        const bool branch_taken_0x290c70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x290c70) {
            ctx->pc = 0x290C80u;
            goto label_290c80;
        }
    }
    ctx->pc = 0x290C78u;
    // 0x290c78: 0xc0a4330  jal         func_290CC0
    ctx->pc = 0x290C78u;
    SET_GPR_U32(ctx, 31, 0x290C80u);
    ctx->pc = 0x290CC0u;
    if (runtime->hasFunction(0x290CC0u)) {
        auto targetFn = runtime->lookupFunction(0x290CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290C80u; }
        if (ctx->pc != 0x290C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__13CEventSprite2Fv_0x290cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290C80u; }
        if (ctx->pc != 0x290C80u) { return; }
    }
    ctx->pc = 0x290C80u;
label_290c80:
    // 0x290c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290c84: 0x3e00008  jr          $ra
    ctx->pc = 0x290C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290C84u;
            // 0x290c88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290C8Cu;
}
