#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PRReturn__12CSceneCmrSeqFv
// Address: 0x25a0b0 - 0x25a0d8
void PRReturn__12CSceneCmrSeqFv_0x25a0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PRReturn__12CSceneCmrSeqFv_0x25a0b0");
#endif

    switch (ctx->pc) {
        case 0x25a0c0u: goto label_25a0c0;
        default: break;
    }

    ctx->pc = 0x25a0b0u;

    // 0x25a0b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25a0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25a0b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25a0b8: 0xc096680  jal         func_259A00
    ctx->pc = 0x25A0B8u;
    SET_GPR_U32(ctx, 31, 0x25A0C0u);
    ctx->pc = 0x259A00u;
    if (runtime->hasFunction(0x259A00u)) {
        auto targetFn = runtime->lookupFunction(0x259A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A0C0u; }
        if (ctx->pc != 0x25A0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextPrSeq__12CSceneCmrSeqFv_0x259a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A0C0u; }
        if (ctx->pc != 0x25A0C0u) { return; }
    }
    ctx->pc = 0x25A0C0u;
label_25a0c0:
    // 0x25a0c0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25A0C0u;
    {
        const bool branch_taken_0x25a0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A0C0u;
            // 0x25a0c4: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a0c0) {
            ctx->pc = 0x25A0CCu;
            goto label_25a0cc;
        }
    }
    ctx->pc = 0x25A0C8u;
    // 0x25a0c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25a0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_25a0cc:
    // 0x25a0cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x25A0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A0D0u;
            // 0x25a0d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A0D8u;
}
