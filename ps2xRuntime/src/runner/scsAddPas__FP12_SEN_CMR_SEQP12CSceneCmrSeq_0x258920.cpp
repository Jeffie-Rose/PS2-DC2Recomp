#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsAddPas__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x258920 - 0x25894c
void scsAddPas__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x258920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsAddPas__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x258920");
#endif

    switch (ctx->pc) {
        case 0x25893cu: goto label_25893c;
        default: break;
    }

    ctx->pc = 0x258920u;

    // 0x258920: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x258920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258924: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x258924u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x258928: 0x24a401c0  addiu       $a0, $a1, 0x1C0
    ctx->pc = 0x258928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 448));
    // 0x25892c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25892cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258930: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x258930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x258934: 0xc0958f0  jal         func_2563C0
    ctx->pc = 0x258934u;
    SET_GPR_U32(ctx, 31, 0x25893Cu);
    ctx->pc = 0x258938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258934u;
            // 0x258938: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2563C0u;
    if (runtime->hasFunction(0x2563C0u)) {
        auto targetFn = runtime->lookupFunction(0x2563C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25893Cu; }
        if (ctx->pc != 0x25893Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddCameraPas__10CCameraPasFPfPf_0x2563c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25893Cu; }
        if (ctx->pc != 0x25893Cu) { return; }
    }
    ctx->pc = 0x25893Cu;
label_25893c:
    // 0x25893c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25893cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258940: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x258940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258944: 0x3e00008  jr          $ra
    ctx->pc = 0x258944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258944u;
            // 0x258948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25894Cu;
}
