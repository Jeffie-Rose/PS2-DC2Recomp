#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PRKeep__12CSceneCmrSeqFv
// Address: 0x25a080 - 0x25a0a8
void PRKeep__12CSceneCmrSeqFv_0x25a080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PRKeep__12CSceneCmrSeqFv_0x25a080");
#endif

    switch (ctx->pc) {
        case 0x25a090u: goto label_25a090;
        default: break;
    }

    ctx->pc = 0x25a080u;

    // 0x25a080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25a080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25a084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25a088: 0xc096680  jal         func_259A00
    ctx->pc = 0x25A088u;
    SET_GPR_U32(ctx, 31, 0x25A090u);
    ctx->pc = 0x259A00u;
    if (runtime->hasFunction(0x259A00u)) {
        auto targetFn = runtime->lookupFunction(0x259A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A090u; }
        if (ctx->pc != 0x25A090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextPrSeq__12CSceneCmrSeqFv_0x259a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A090u; }
        if (ctx->pc != 0x25A090u) { return; }
    }
    ctx->pc = 0x25A090u;
label_25a090:
    // 0x25a090: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25A090u;
    {
        const bool branch_taken_0x25a090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A090u;
            // 0x25a094: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a090) {
            ctx->pc = 0x25A09Cu;
            goto label_25a09c;
        }
    }
    ctx->pc = 0x25A098u;
    // 0x25a098: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25a098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_25a09c:
    // 0x25a09c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x25A0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A0A0u;
            // 0x25a0a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A0A8u;
}
