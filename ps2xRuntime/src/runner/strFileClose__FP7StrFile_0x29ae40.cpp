#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: strFileClose__FP7StrFile
// Address: 0x29ae40 - 0x29ae7c
void strFileClose__FP7StrFile_0x29ae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("strFileClose__FP7StrFile_0x29ae40");
#endif

    switch (ctx->pc) {
        case 0x29ae5cu: goto label_29ae5c;
        case 0x29ae6cu: goto label_29ae6c;
        default: break;
    }

    ctx->pc = 0x29ae40u;

    // 0x29ae40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29ae40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29ae44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29ae44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29ae48: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x29ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x29ae4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29AE4Cu;
    {
        const bool branch_taken_0x29ae4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ae4c) {
            ctx->pc = 0x29AE64u;
            goto label_29ae64;
        }
    }
    ctx->pc = 0x29AE54u;
    // 0x29ae54: 0xc0482fe  jal         func_120BF8
    ctx->pc = 0x29AE54u;
    SET_GPR_U32(ctx, 31, 0x29AE5Cu);
    ctx->pc = 0x120BF8u;
    if (runtime->hasFunction(0x120BF8u)) {
        auto targetFn = runtime->lookupFunction(0x120BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE5Cu; }
        if (ctx->pc != 0x29AE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdStStop_0x120bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE5Cu; }
        if (ctx->pc != 0x29AE5Cu) { return; }
    }
    ctx->pc = 0x29AE5Cu;
label_29ae5c:
    // 0x29ae5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29AE5Cu;
    {
        const bool branch_taken_0x29ae5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE5Cu;
            // 0x29ae60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ae5c) {
            ctx->pc = 0x29AE70u;
            goto label_29ae70;
        }
    }
    ctx->pc = 0x29AE64u;
label_29ae64:
    // 0x29ae64: 0xc045148  jal         func_114520
    ctx->pc = 0x29AE64u;
    SET_GPR_U32(ctx, 31, 0x29AE6Cu);
    ctx->pc = 0x29AE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE64u;
            // 0x29ae68: 0x8c840024  lw          $a0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114520u;
    if (runtime->hasFunction(0x114520u)) {
        auto targetFn = runtime->lookupFunction(0x114520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE6Cu; }
        if (ctx->pc != 0x29AE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE6Cu; }
        if (ctx->pc != 0x29AE6Cu) { return; }
    }
    ctx->pc = 0x29AE6Cu;
label_29ae6c:
    // 0x29ae6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ae6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29ae70:
    // 0x29ae70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ae74: 0x3e00008  jr          $ra
    ctx->pc = 0x29AE74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE74u;
            // 0x29ae78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29AE7Cu;
}
