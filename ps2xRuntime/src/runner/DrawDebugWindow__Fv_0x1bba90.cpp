#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawDebugWindow__Fv
// Address: 0x1bba90 - 0x1bbadc
void DrawDebugWindow__Fv_0x1bba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawDebugWindow__Fv_0x1bba90");
#endif

    switch (ctx->pc) {
        case 0x1bbab4u: goto label_1bbab4;
        case 0x1bbad0u: goto label_1bbad0;
        default: break;
    }

    ctx->pc = 0x1bba90u;

    // 0x1bba90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bba94: 0x3c010034  lui         $at, 0x34
    ctx->pc = 0x1bba94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52 << 16));
    // 0x1bba98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bba98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bba9c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bbaa0: 0x8c248c20  lw          $a0, -0x73E0($at)
    ctx->pc = 0x1bbaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937632)));
    // 0x1bbaa4: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BBAA4u;
    {
        const bool branch_taken_0x1bbaa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bbaa4) {
            ctx->pc = 0x1BBAB4u;
            goto label_1bbab4;
        }
    }
    ctx->pc = 0x1BBAACu;
    // 0x1bbaac: 0xc06ed54  jal         func_1BB550
    ctx->pc = 0x1BBAACu;
    SET_GPR_U32(ctx, 31, 0x1BBAB4u);
    ctx->pc = 0x1BB550u;
    if (runtime->hasFunction(0x1BB550u)) {
        auto targetFn = runtime->lookupFunction(0x1BB550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBAB4u; }
        if (ctx->pc != 0x1BBAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSystemParamInfo__Fv_0x1bb550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBAB4u; }
        if (ctx->pc != 0x1BBAB4u) { return; }
    }
    ctx->pc = 0x1BBAB4u;
label_1bbab4:
    // 0x1bbab4: 0x3c010034  lui         $at, 0x34
    ctx->pc = 0x1bbab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52 << 16));
    // 0x1bbab8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bbab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bbabc: 0x8c248c20  lw          $a0, -0x73E0($at)
    ctx->pc = 0x1bbabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937632)));
    // 0x1bbac0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BBAC0u;
    {
        const bool branch_taken_0x1bbac0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bbac0) {
            ctx->pc = 0x1BBAD0u;
            goto label_1bbad0;
        }
    }
    ctx->pc = 0x1BBAC8u;
    // 0x1bbac8: 0xc06ede0  jal         func_1BB780
    ctx->pc = 0x1BBAC8u;
    SET_GPR_U32(ctx, 31, 0x1BBAD0u);
    ctx->pc = 0x1BB780u;
    if (runtime->hasFunction(0x1BB780u)) {
        auto targetFn = runtime->lookupFunction(0x1BB780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBAD0u; }
        if (ctx->pc != 0x1BBAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSystemParamInfo2__Fv_0x1bb780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBAD0u; }
        if (ctx->pc != 0x1BBAD0u) { return; }
    }
    ctx->pc = 0x1BBAD0u;
label_1bbad0:
    // 0x1bbad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbad4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBAD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBAD4u;
            // 0x1bbad8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBADCu;
}
