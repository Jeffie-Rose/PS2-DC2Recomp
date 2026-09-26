#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__18MessageTaskManagerFv
// Address: 0x28b600 - 0x28b628
void Draw__18MessageTaskManagerFv_0x28b600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__18MessageTaskManagerFv_0x28b600");
#endif

    switch (ctx->pc) {
        case 0x28b61cu: goto label_28b61c;
        default: break;
    }

    ctx->pc = 0x28b600u;

    // 0x28b600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28b600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28b604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28b604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28b608: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x28b608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28b60c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B60Cu;
    {
        const bool branch_taken_0x28b60c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b60c) {
            ctx->pc = 0x28B61Cu;
            goto label_28b61c;
        }
    }
    ctx->pc = 0x28B614u;
    // 0x28b614: 0xc056cb0  jal         func_15B2C0
    ctx->pc = 0x28B614u;
    SET_GPR_U32(ctx, 31, 0x28B61Cu);
    ctx->pc = 0x15B2C0u;
    if (runtime->hasFunction(0x15B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B61Cu; }
        if (ctx->pc != 0x28B61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMesWin__6ClsMesFv_0x15b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B61Cu; }
        if (ctx->pc != 0x28B61Cu) { return; }
    }
    ctx->pc = 0x28B61Cu;
label_28b61c:
    // 0x28b61c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28b61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b620: 0x3e00008  jr          $ra
    ctx->pc = 0x28B620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B620u;
            // 0x28b624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B628u;
}
