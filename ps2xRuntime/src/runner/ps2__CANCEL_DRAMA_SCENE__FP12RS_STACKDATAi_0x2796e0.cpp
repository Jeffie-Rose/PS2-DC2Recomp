#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CANCEL_DRAMA_SCENE__FP12RS_STACKDATAi
// Address: 0x2796e0 - 0x279700
void ps2__CANCEL_DRAMA_SCENE__FP12RS_STACKDATAi_0x2796e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CANCEL_DRAMA_SCENE__FP12RS_STACKDATAi_0x2796e0");
#endif

    switch (ctx->pc) {
        case 0x2796f0u: goto label_2796f0;
        default: break;
    }

    ctx->pc = 0x2796e0u;

    // 0x2796e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2796e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2796e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2796e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2796e8: 0xc098924  jal         func_262490
    ctx->pc = 0x2796E8u;
    SET_GPR_U32(ctx, 31, 0x2796F0u);
    ctx->pc = 0x262490u;
    if (runtime->hasFunction(0x262490u)) {
        auto targetFn = runtime->lookupFunction(0x262490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2796F0u; }
        if (ctx->pc != 0x2796F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CancelDramaScene__Fv_0x262490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2796F0u; }
        if (ctx->pc != 0x2796F0u) { return; }
    }
    ctx->pc = 0x2796F0u;
label_2796f0:
    // 0x2796f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2796f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2796f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2796f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2796f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2796F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2796FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2796F8u;
            // 0x2796fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279700u;
}
