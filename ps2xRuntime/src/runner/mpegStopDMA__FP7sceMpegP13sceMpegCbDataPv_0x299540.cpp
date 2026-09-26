#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mpegStopDMA__FP7sceMpegP13sceMpegCbDataPv
// Address: 0x299540 - 0x299564
void mpegStopDMA__FP7sceMpegP13sceMpegCbDataPv_0x299540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mpegStopDMA__FP7sceMpegP13sceMpegCbDataPv_0x299540");
#endif

    switch (ctx->pc) {
        case 0x299554u: goto label_299554;
        default: break;
    }

    ctx->pc = 0x299540u;

    // 0x299540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x299540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x299544: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x299544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x299548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29954c: 0xc0a688c  jal         func_29A230
    ctx->pc = 0x29954Cu;
    SET_GPR_U32(ctx, 31, 0x299554u);
    ctx->pc = 0x299550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29954Cu;
            // 0x299550: 0x24845398  addiu       $a0, $a0, 0x5398 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A230u;
    if (runtime->hasFunction(0x29A230u)) {
        auto targetFn = runtime->lookupFunction(0x29A230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299554u; }
        if (ctx->pc != 0x299554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufStopDMA__FP5ViBuf_0x29a230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299554u; }
        if (ctx->pc != 0x299554u) { return; }
    }
    ctx->pc = 0x299554u;
label_299554:
    // 0x299554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29955c: 0x3e00008  jr          $ra
    ctx->pc = 0x29955Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29955Cu;
            // 0x299560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299564u;
}
