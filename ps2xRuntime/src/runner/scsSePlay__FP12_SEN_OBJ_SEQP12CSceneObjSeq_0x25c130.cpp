#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsSePlay__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25c130 - 0x25c158
void scsSePlay__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25c130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsSePlay__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25c130");
#endif

    switch (ctx->pc) {
        case 0x25c148u: goto label_25c148;
        default: break;
    }

    ctx->pc = 0x25c130u;

    // 0x25c130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25c130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25c134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25c134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25c138: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x25c138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x25c13c: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x25c13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25c140: 0xc063818  jal         func_18E060
    ctx->pc = 0x25C140u;
    SET_GPR_U32(ctx, 31, 0x25C148u);
    ctx->pc = 0x25C144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C140u;
            // 0x25c144: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C148u; }
        if (ctx->pc != 0x25C148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C148u; }
        if (ctx->pc != 0x25C148u) { return; }
    }
    ctx->pc = 0x25C148u;
label_25c148:
    // 0x25c148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c14c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25c14cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c150: 0x3e00008  jr          $ra
    ctx->pc = 0x25C150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C150u;
            // 0x25c154: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C158u;
}
