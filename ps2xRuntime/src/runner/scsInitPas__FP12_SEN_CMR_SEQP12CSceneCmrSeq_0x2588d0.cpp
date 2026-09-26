#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsInitPas__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x2588d0 - 0x2588f0
void scsInitPas__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x2588d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsInitPas__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x2588d0");
#endif

    switch (ctx->pc) {
        case 0x2588e0u: goto label_2588e0;
        default: break;
    }

    ctx->pc = 0x2588d0u;

    // 0x2588d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2588d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2588d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2588d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2588d8: 0xc0959c4  jal         func_256710
    ctx->pc = 0x2588D8u;
    SET_GPR_U32(ctx, 31, 0x2588E0u);
    ctx->pc = 0x2588DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2588D8u;
            // 0x2588dc: 0x24a401c0  addiu       $a0, $a1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256710u;
    if (runtime->hasFunction(0x256710u)) {
        auto targetFn = runtime->lookupFunction(0x256710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2588E0u; }
        if (ctx->pc != 0x2588E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CCameraPasFv_0x256710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2588E0u; }
        if (ctx->pc != 0x2588E0u) { return; }
    }
    ctx->pc = 0x2588E0u;
label_2588e0:
    // 0x2588e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2588e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2588e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2588e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2588e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2588E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2588ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2588E8u;
            // 0x2588ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2588F0u;
}
