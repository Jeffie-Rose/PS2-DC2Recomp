#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsInitPas__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25ad70 - 0x25ad90
void scsInitPas__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25ad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsInitPas__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25ad70");
#endif

    switch (ctx->pc) {
        case 0x25ad80u: goto label_25ad80;
        default: break;
    }

    ctx->pc = 0x25ad70u;

    // 0x25ad70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25ad70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25ad74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ad74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25ad78: 0xc095ad4  jal         func_256B50
    ctx->pc = 0x25AD78u;
    SET_GPR_U32(ctx, 31, 0x25AD80u);
    ctx->pc = 0x25AD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AD78u;
            // 0x25ad7c: 0x24a40140  addiu       $a0, $a1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256B50u;
    if (runtime->hasFunction(0x256B50u)) {
        auto targetFn = runtime->lookupFunction(0x256B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AD80u; }
        if (ctx->pc != 0x25AD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CCharaPasFv_0x256b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AD80u; }
        if (ctx->pc != 0x25AD80u) { return; }
    }
    ctx->pc = 0x25AD80u;
label_25ad80:
    // 0x25ad80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25ad80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ad84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25ad84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ad88: 0x3e00008  jr          $ra
    ctx->pc = 0x25AD88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AD88u;
            // 0x25ad8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25AD90u;
}
