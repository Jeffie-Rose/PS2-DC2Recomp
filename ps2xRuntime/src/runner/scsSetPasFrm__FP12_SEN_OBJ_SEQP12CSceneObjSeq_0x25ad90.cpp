#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsSetPasFrm__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25ad90 - 0x25adb8
void scsSetPasFrm__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25ad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsSetPasFrm__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25ad90");
#endif

    switch (ctx->pc) {
        case 0x25ada8u: goto label_25ada8;
        default: break;
    }

    ctx->pc = 0x25ad90u;

    // 0x25ad90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25ad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25ad94: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25ad94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ad98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ad98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25ad9c: 0x24a40140  addiu       $a0, $a1, 0x140
    ctx->pc = 0x25ad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x25ada0: 0xc095c54  jal         func_257150
    ctx->pc = 0x25ADA0u;
    SET_GPR_U32(ctx, 31, 0x25ADA8u);
    ctx->pc = 0x25ADA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25ADA0u;
            // 0x25ada4: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x257150u;
    if (runtime->hasFunction(0x257150u)) {
        auto targetFn = runtime->lookupFunction(0x257150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ADA8u; }
        if (ctx->pc != 0x25ADA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFrame__9CCharaPasFi_0x257150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ADA8u; }
        if (ctx->pc != 0x25ADA8u) { return; }
    }
    ctx->pc = 0x25ADA8u;
label_25ada8:
    // 0x25ada8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25ada8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25adac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25adacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25adb0: 0x3e00008  jr          $ra
    ctx->pc = 0x25ADB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25ADB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ADB0u;
            // 0x25adb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25ADB8u;
}
