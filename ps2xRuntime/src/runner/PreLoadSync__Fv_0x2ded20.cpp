#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PreLoadSync__Fv
// Address: 0x2ded20 - 0x2ded44
void PreLoadSync__Fv_0x2ded20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PreLoadSync__Fv_0x2ded20");
#endif

    switch (ctx->pc) {
        case 0x2ded30u: goto label_2ded30;
        case 0x2ded38u: goto label_2ded38;
        default: break;
    }

    ctx->pc = 0x2ded20u;

    // 0x2ded20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ded20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ded24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ded24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ded28: 0xc052334  jal         func_148CD0
    ctx->pc = 0x2DED28u;
    SET_GPR_U32(ctx, 31, 0x2DED30u);
    ctx->pc = 0x148CD0u;
    if (runtime->hasFunction(0x148CD0u)) {
        auto targetFn = runtime->lookupFunction(0x148CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DED30u; }
        if (ctx->pc != 0x2DED30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBG__Fv_0x148cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DED30u; }
        if (ctx->pc != 0x2DED30u) { return; }
    }
    ctx->pc = 0x2DED30u;
label_2ded30:
    // 0x2ded30: 0xc05239c  jal         func_148E70
    ctx->pc = 0x2DED30u;
    SET_GPR_U32(ctx, 31, 0x2DED38u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DED38u; }
        if (ctx->pc != 0x2DED38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DED38u; }
        if (ctx->pc != 0x2DED38u) { return; }
    }
    ctx->pc = 0x2DED38u;
label_2ded38:
    // 0x2ded38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ded38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ded3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DED3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DED40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DED3Cu;
            // 0x2ded40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DED44u;
}
