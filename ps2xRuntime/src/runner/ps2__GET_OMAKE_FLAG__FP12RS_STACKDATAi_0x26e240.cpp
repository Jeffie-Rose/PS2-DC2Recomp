#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_OMAKE_FLAG__FP12RS_STACKDATAi
// Address: 0x26e240 - 0x26e260
void ps2__GET_OMAKE_FLAG__FP12RS_STACKDATAi_0x26e240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_OMAKE_FLAG__FP12RS_STACKDATAi_0x26e240");
#endif

    switch (ctx->pc) {
        case 0x26e250u: goto label_26e250;
        default: break;
    }

    ctx->pc = 0x26e240u;

    // 0x26e240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26e240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26e244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26e244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26e248: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26E248u;
    SET_GPR_U32(ctx, 31, 0x26E250u);
    ctx->pc = 0x26E24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E248u;
            // 0x26e24c: 0x8f858ad4  lw          $a1, -0x752C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E250u; }
        if (ctx->pc != 0x26E250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E250u; }
        if (ctx->pc != 0x26E250u) { return; }
    }
    ctx->pc = 0x26E250u;
label_26e250:
    // 0x26e250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26e250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e258: 0x3e00008  jr          $ra
    ctx->pc = 0x26E258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E258u;
            // 0x26e25c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26E260u;
}
