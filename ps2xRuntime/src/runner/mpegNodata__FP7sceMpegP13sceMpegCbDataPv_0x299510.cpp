#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mpegNodata__FP7sceMpegP13sceMpegCbDataPv
// Address: 0x299510 - 0x29953c
void mpegNodata__FP7sceMpegP13sceMpegCbDataPv_0x299510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mpegNodata__FP7sceMpegP13sceMpegCbDataPv_0x299510");
#endif

    switch (ctx->pc) {
        case 0x299520u: goto label_299520;
        case 0x29952cu: goto label_29952c;
        default: break;
    }

    ctx->pc = 0x299510u;

    // 0x299510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x299510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x299514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x299518: 0xc0a6e1c  jal         func_29B870
    ctx->pc = 0x299518u;
    SET_GPR_U32(ctx, 31, 0x299520u);
    ctx->pc = 0x29B870u;
    if (runtime->hasFunction(0x29B870u)) {
        auto targetFn = runtime->lookupFunction(0x29B870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299520u; }
        if (ctx->pc != 0x299520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        switchThread__Fv_0x29b870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299520u; }
        if (ctx->pc != 0x299520u) { return; }
    }
    ctx->pc = 0x299520u;
label_299520:
    // 0x299520: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x299520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x299524: 0xc0a6808  jal         func_29A020
    ctx->pc = 0x299524u;
    SET_GPR_U32(ctx, 31, 0x29952Cu);
    ctx->pc = 0x299528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299524u;
            // 0x299528: 0x24845398  addiu       $a0, $a0, 0x5398 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A020u;
    if (runtime->hasFunction(0x29A020u)) {
        auto targetFn = runtime->lookupFunction(0x29A020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29952Cu; }
        if (ctx->pc != 0x29952Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufAddDMA__FP5ViBuf_0x29a020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29952Cu; }
        if (ctx->pc != 0x29952Cu) { return; }
    }
    ctx->pc = 0x29952Cu;
label_29952c:
    // 0x29952c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29952cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299530: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299534: 0x3e00008  jr          $ra
    ctx->pc = 0x299534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299534u;
            // 0x299538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29953Cu;
}
