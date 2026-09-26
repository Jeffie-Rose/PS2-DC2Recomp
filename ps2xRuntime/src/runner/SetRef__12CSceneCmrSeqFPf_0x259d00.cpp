#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetRef__12CSceneCmrSeqFPf
// Address: 0x259d00 - 0x259d3c
void SetRef__12CSceneCmrSeqFPf_0x259d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRef__12CSceneCmrSeqFPf_0x259d00");
#endif

    switch (ctx->pc) {
        case 0x259d14u: goto label_259d14;
        case 0x259d2cu: goto label_259d2c;
        default: break;
    }

    ctx->pc = 0x259d00u;

    // 0x259d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x259d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x259d04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x259d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x259d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x259d0c: 0xc096680  jal         func_259A00
    ctx->pc = 0x259D0Cu;
    SET_GPR_U32(ctx, 31, 0x259D14u);
    ctx->pc = 0x259D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259D0Cu;
            // 0x259d10: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259A00u;
    if (runtime->hasFunction(0x259A00u)) {
        auto targetFn = runtime->lookupFunction(0x259A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259D14u; }
        if (ctx->pc != 0x259D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextPrSeq__12CSceneCmrSeqFv_0x259a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259D14u; }
        if (ctx->pc != 0x259D14u) { return; }
    }
    ctx->pc = 0x259D14u;
label_259d14:
    // 0x259d14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x259D14u;
    {
        const bool branch_taken_0x259d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259D14u;
            // 0x259d18: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d14) {
            ctx->pc = 0x259D2Cu;
            goto label_259d2c;
        }
    }
    ctx->pc = 0x259D1Cu;
    // 0x259d1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x259d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259d20: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x259d20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x259d24: 0xc041c5c  jal         func_107170
    ctx->pc = 0x259D24u;
    SET_GPR_U32(ctx, 31, 0x259D2Cu);
    ctx->pc = 0x259D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259D24u;
            // 0x259d28: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259D2Cu; }
        if (ctx->pc != 0x259D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259D2Cu; }
        if (ctx->pc != 0x259D2Cu) { return; }
    }
    ctx->pc = 0x259D2Cu;
label_259d2c:
    // 0x259d2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x259d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259d30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259d34: 0x3e00008  jr          $ra
    ctx->pc = 0x259D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259D34u;
            // 0x259d38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259D3Cu;
}
