#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteBait__16CUserDataManagerFv
// Address: 0x19cf90 - 0x19cfd0
void DeleteBait__16CUserDataManagerFv_0x19cf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteBait__16CUserDataManagerFv_0x19cf90");
#endif

    switch (ctx->pc) {
        case 0x19cfa4u: goto label_19cfa4;
        case 0x19cfb0u: goto label_19cfb0;
        case 0x19cfc0u: goto label_19cfc0;
        default: break;
    }

    ctx->pc = 0x19cf90u;

    // 0x19cf90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19cf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19cf94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19cf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19cf98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19cf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19cf9c: 0xc0673b8  jal         func_19CEE0
    ctx->pc = 0x19CF9Cu;
    SET_GPR_U32(ctx, 31, 0x19CFA4u);
    ctx->pc = 0x19CFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF9Cu;
            // 0x19cfa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CEE0u;
    if (runtime->hasFunction(0x19CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x19CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CFA4u; }
        if (ctx->pc != 0x19CFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveEsa__16CUserDataManagerFv_0x19cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CFA4u; }
        if (ctx->pc != 0x19CFA4u) { return; }
    }
    ctx->pc = 0x19CFA4u;
label_19cfa4:
    // 0x19cfa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cfa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cfa8: 0xc0673a8  jal         func_19CEA0
    ctx->pc = 0x19CFA8u;
    SET_GPR_U32(ctx, 31, 0x19CFB0u);
    ctx->pc = 0x19CFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CFA8u;
            // 0x19cfac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CEA0u;
    if (runtime->hasFunction(0x19CEA0u)) {
        auto targetFn = runtime->lookupFunction(0x19CEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CFB0u; }
        if (ctx->pc != 0x19CFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishingRodNo__16CUserDataManagerFv_0x19cea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CFB0u; }
        if (ctx->pc != 0x19CFB0u) { return; }
    }
    ctx->pc = 0x19CFB0u;
label_19cfb0:
    // 0x19cfb0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CFB0u;
    {
        const bool branch_taken_0x19cfb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CFB0u;
            // 0x19cfb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cfb0) {
            ctx->pc = 0x19CFC0u;
            goto label_19cfc0;
        }
    }
    ctx->pc = 0x19CFB8u;
    // 0x19cfb8: 0xc065f4c  jal         func_197D30
    ctx->pc = 0x19CFB8u;
    SET_GPR_U32(ctx, 31, 0x19CFC0u);
    ctx->pc = 0x19CFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CFB8u;
            // 0x19cfbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197D30u;
    if (runtime->hasFunction(0x197D30u)) {
        auto targetFn = runtime->lookupFunction(0x197D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CFC0u; }
        if (ctx->pc != 0x19CFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteNum__13CGameDataUsedFi_0x197d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CFC0u; }
        if (ctx->pc != 0x19CFC0u) { return; }
    }
    ctx->pc = 0x19CFC0u;
label_19cfc0:
    // 0x19cfc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19cfc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cfc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cfc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cfc8: 0x3e00008  jr          $ra
    ctx->pc = 0x19CFC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CFC8u;
            // 0x19cfcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CFD0u;
}
