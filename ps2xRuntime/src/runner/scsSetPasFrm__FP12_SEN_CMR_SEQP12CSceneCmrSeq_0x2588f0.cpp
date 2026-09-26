#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsSetPasFrm__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x2588f0 - 0x258918
void scsSetPasFrm__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x2588f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsSetPasFrm__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x2588f0");
#endif

    switch (ctx->pc) {
        case 0x258908u: goto label_258908;
        default: break;
    }

    ctx->pc = 0x2588f0u;

    // 0x2588f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2588f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2588f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2588f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2588f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2588f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2588fc: 0x24a401c0  addiu       $a0, $a1, 0x1C0
    ctx->pc = 0x2588fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 448));
    // 0x258900: 0xc0959bc  jal         func_2566F0
    ctx->pc = 0x258900u;
    SET_GPR_U32(ctx, 31, 0x258908u);
    ctx->pc = 0x258904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258900u;
            // 0x258904: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2566F0u;
    if (runtime->hasFunction(0x2566F0u)) {
        auto targetFn = runtime->lookupFunction(0x2566F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258908u; }
        if (ctx->pc != 0x258908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFrame__10CCameraPasFi_0x2566f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258908u; }
        if (ctx->pc != 0x258908u) { return; }
    }
    ctx->pc = 0x258908u;
label_258908:
    // 0x258908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25890c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25890cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258910: 0x3e00008  jr          $ra
    ctx->pc = 0x258910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258910u;
            // 0x258914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x258918u;
}
