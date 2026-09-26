#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsSetPos__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25a840 - 0x25a868
void scsSetPos__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25a840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsSetPos__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25a840");
#endif

    switch (ctx->pc) {
        case 0x25a858u: goto label_25a858;
        default: break;
    }

    ctx->pc = 0x25a840u;

    // 0x25a840: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25a840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a844: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25a844u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25a848: 0x24a40070  addiu       $a0, $a1, 0x70
    ctx->pc = 0x25a848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x25a84c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25a850: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25A850u;
    SET_GPR_U32(ctx, 31, 0x25A858u);
    ctx->pc = 0x25A854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A850u;
            // 0x25a854: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A858u; }
        if (ctx->pc != 0x25A858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A858u; }
        if (ctx->pc != 0x25A858u) { return; }
    }
    ctx->pc = 0x25A858u;
label_25a858:
    // 0x25a858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a85c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25a85cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a860: 0x3e00008  jr          $ra
    ctx->pc = 0x25A860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A860u;
            // 0x25a864: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A868u;
}
