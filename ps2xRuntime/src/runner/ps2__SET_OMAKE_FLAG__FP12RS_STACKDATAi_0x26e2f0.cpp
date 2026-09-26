#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_OMAKE_FLAG__FP12RS_STACKDATAi
// Address: 0x26e2f0 - 0x26e314
void ps2__SET_OMAKE_FLAG__FP12RS_STACKDATAi_0x26e2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_OMAKE_FLAG__FP12RS_STACKDATAi_0x26e2f0");
#endif

    switch (ctx->pc) {
        case 0x26e300u: goto label_26e300;
        default: break;
    }

    ctx->pc = 0x26e2f0u;

    // 0x26e2f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26e2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26e2f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26e2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26e2f8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26E2F8u;
    SET_GPR_U32(ctx, 31, 0x26E300u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E300u; }
        if (ctx->pc != 0x26E300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E300u; }
        if (ctx->pc != 0x26E300u) { return; }
    }
    ctx->pc = 0x26E300u;
label_26e300:
    // 0x26e300: 0xaf828ad4  sw          $v0, -0x752C($gp)
    ctx->pc = 0x26e300u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937300), GPR_U32(ctx, 2));
    // 0x26e304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26e304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e30c: 0x3e00008  jr          $ra
    ctx->pc = 0x26E30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E30Cu;
            // 0x26e310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26E314u;
}
