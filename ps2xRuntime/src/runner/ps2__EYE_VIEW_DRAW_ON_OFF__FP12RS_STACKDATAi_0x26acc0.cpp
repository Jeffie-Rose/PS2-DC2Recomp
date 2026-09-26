#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EYE_VIEW_DRAW_ON_OFF__FP12RS_STACKDATAi
// Address: 0x26acc0 - 0x26acec
void ps2__EYE_VIEW_DRAW_ON_OFF__FP12RS_STACKDATAi_0x26acc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EYE_VIEW_DRAW_ON_OFF__FP12RS_STACKDATAi_0x26acc0");
#endif

    switch (ctx->pc) {
        case 0x26acd0u: goto label_26acd0;
        case 0x26acdcu: goto label_26acdc;
        default: break;
    }

    ctx->pc = 0x26acc0u;

    // 0x26acc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26acc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26acc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26acc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26acc8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26ACC8u;
    SET_GPR_U32(ctx, 31, 0x26ACD0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ACD0u; }
        if (ctx->pc != 0x26ACD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ACD0u; }
        if (ctx->pc != 0x26ACD0u) { return; }
    }
    ctx->pc = 0x26ACD0u;
label_26acd0:
    // 0x26acd0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x26acd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x26acd4: 0xc0b2068  jal         func_2C81A0
    ctx->pc = 0x26ACD4u;
    SET_GPR_U32(ctx, 31, 0x26ACDCu);
    ctx->pc = 0x26ACD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ACD4u;
            // 0x26acd8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C81A0u;
    if (runtime->hasFunction(0x2C81A0u)) {
        auto targetFn = runtime->lookupFunction(0x2C81A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ACDCu; }
        if (ctx->pc != 0x26ACDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EyeViewDrawOnOff__6CSceneFi_0x2c81a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ACDCu; }
        if (ctx->pc != 0x26ACDCu) { return; }
    }
    ctx->pc = 0x26ACDCu;
label_26acdc:
    // 0x26acdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26acdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ace0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ace4: 0x3e00008  jr          $ra
    ctx->pc = 0x26ACE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26ACE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ACE4u;
            // 0x26ace8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26ACECu;
}
