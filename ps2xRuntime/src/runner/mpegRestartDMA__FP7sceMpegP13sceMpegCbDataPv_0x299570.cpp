#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mpegRestartDMA__FP7sceMpegP13sceMpegCbDataPv
// Address: 0x299570 - 0x299594
void mpegRestartDMA__FP7sceMpegP13sceMpegCbDataPv_0x299570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mpegRestartDMA__FP7sceMpegP13sceMpegCbDataPv_0x299570");
#endif

    switch (ctx->pc) {
        case 0x299584u: goto label_299584;
        default: break;
    }

    ctx->pc = 0x299570u;

    // 0x299570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x299570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x299574: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x299574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x299578: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29957c: 0xc0a68c4  jal         func_29A310
    ctx->pc = 0x29957Cu;
    SET_GPR_U32(ctx, 31, 0x299584u);
    ctx->pc = 0x299580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29957Cu;
            // 0x299580: 0x24845398  addiu       $a0, $a0, 0x5398 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A310u;
    if (runtime->hasFunction(0x29A310u)) {
        auto targetFn = runtime->lookupFunction(0x29A310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299584u; }
        if (ctx->pc != 0x299584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufRestartDMA__FP5ViBuf_0x29a310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299584u; }
        if (ctx->pc != 0x299584u) { return; }
    }
    ctx->pc = 0x299584u;
label_299584:
    // 0x299584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29958c: 0x3e00008  jr          $ra
    ctx->pc = 0x29958Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29958Cu;
            // 0x299590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299594u;
}
