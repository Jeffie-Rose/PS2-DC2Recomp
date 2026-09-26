#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitPas__12CSceneCmrSeqFv
// Address: 0x259f20 - 0x259f48
void InitPas__12CSceneCmrSeqFv_0x259f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitPas__12CSceneCmrSeqFv_0x259f20");
#endif

    switch (ctx->pc) {
        case 0x259f30u: goto label_259f30;
        default: break;
    }

    ctx->pc = 0x259f20u;

    // 0x259f20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x259f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x259f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259f28: 0xc096680  jal         func_259A00
    ctx->pc = 0x259F28u;
    SET_GPR_U32(ctx, 31, 0x259F30u);
    ctx->pc = 0x259A00u;
    if (runtime->hasFunction(0x259A00u)) {
        auto targetFn = runtime->lookupFunction(0x259A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259F30u; }
        if (ctx->pc != 0x259F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextPrSeq__12CSceneCmrSeqFv_0x259a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259F30u; }
        if (ctx->pc != 0x259F30u) { return; }
    }
    ctx->pc = 0x259F30u;
label_259f30:
    // 0x259f30: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x259F30u;
    {
        const bool branch_taken_0x259f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259F30u;
            // 0x259f34: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f30) {
            ctx->pc = 0x259F3Cu;
            goto label_259f3c;
        }
    }
    ctx->pc = 0x259F38u;
    // 0x259f38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x259f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_259f3c:
    // 0x259f3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259f40: 0x3e00008  jr          $ra
    ctx->pc = 0x259F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259F40u;
            // 0x259f44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259F48u;
}
