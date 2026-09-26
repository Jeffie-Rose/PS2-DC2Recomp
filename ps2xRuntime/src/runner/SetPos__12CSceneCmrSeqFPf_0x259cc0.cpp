#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPos__12CSceneCmrSeqFPf
// Address: 0x259cc0 - 0x259cfc
void SetPos__12CSceneCmrSeqFPf_0x259cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPos__12CSceneCmrSeqFPf_0x259cc0");
#endif

    switch (ctx->pc) {
        case 0x259cd4u: goto label_259cd4;
        case 0x259cecu: goto label_259cec;
        default: break;
    }

    ctx->pc = 0x259cc0u;

    // 0x259cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x259cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x259cc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x259cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x259cc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x259ccc: 0xc096680  jal         func_259A00
    ctx->pc = 0x259CCCu;
    SET_GPR_U32(ctx, 31, 0x259CD4u);
    ctx->pc = 0x259CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259CCCu;
            // 0x259cd0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259A00u;
    if (runtime->hasFunction(0x259A00u)) {
        auto targetFn = runtime->lookupFunction(0x259A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259CD4u; }
        if (ctx->pc != 0x259CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextPrSeq__12CSceneCmrSeqFv_0x259a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259CD4u; }
        if (ctx->pc != 0x259CD4u) { return; }
    }
    ctx->pc = 0x259CD4u;
label_259cd4:
    // 0x259cd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x259CD4u;
    {
        const bool branch_taken_0x259cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259CD4u;
            // 0x259cd8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259cd4) {
            ctx->pc = 0x259CECu;
            goto label_259cec;
        }
    }
    ctx->pc = 0x259CDCu;
    // 0x259cdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x259cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ce0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x259ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x259ce4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x259CE4u;
    SET_GPR_U32(ctx, 31, 0x259CECu);
    ctx->pc = 0x259CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259CE4u;
            // 0x259ce8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259CECu; }
        if (ctx->pc != 0x259CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259CECu; }
        if (ctx->pc != 0x259CECu) { return; }
    }
    ctx->pc = 0x259CECu;
label_259cec:
    // 0x259cec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x259cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259cf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x259CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259CF4u;
            // 0x259cf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259CFCu;
}
