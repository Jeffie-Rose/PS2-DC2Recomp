#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsAddPas__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25adc0 - 0x25ade8
void scsAddPas__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25adc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsAddPas__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25adc0");
#endif

    switch (ctx->pc) {
        case 0x25add8u: goto label_25add8;
        default: break;
    }

    ctx->pc = 0x25adc0u;

    // 0x25adc0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25adc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25adc4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25adc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25adc8: 0x24a40140  addiu       $a0, $a1, 0x140
    ctx->pc = 0x25adc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x25adcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25adccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25add0: 0xc095af0  jal         func_256BC0
    ctx->pc = 0x25ADD0u;
    SET_GPR_U32(ctx, 31, 0x25ADD8u);
    ctx->pc = 0x25ADD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25ADD0u;
            // 0x25add4: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256BC0u;
    if (runtime->hasFunction(0x256BC0u)) {
        auto targetFn = runtime->lookupFunction(0x256BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ADD8u; }
        if (ctx->pc != 0x25ADD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddCharaPas__9CCharaPasFPf_0x256bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ADD8u; }
        if (ctx->pc != 0x25ADD8u) { return; }
    }
    ctx->pc = 0x25ADD8u;
label_25add8:
    // 0x25add8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25add8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25addc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25addcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ade0: 0x3e00008  jr          $ra
    ctx->pc = 0x25ADE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25ADE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ADE0u;
            // 0x25ade4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25ADE8u;
}
