#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckNowRoboUseCapacity__FP9ROBO_DATAPi
// Address: 0x197000 - 0x197090
void CheckNowRoboUseCapacity__FP9ROBO_DATAPi_0x197000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckNowRoboUseCapacity__FP9ROBO_DATAPi_0x197000");
#endif

    switch (ctx->pc) {
        case 0x197030u: goto label_197030;
        case 0x19703cu: goto label_19703c;
        case 0x197060u: goto label_197060;
        case 0x197068u: goto label_197068;
        default: break;
    }

    ctx->pc = 0x197000u;

    // 0x197000: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x197000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x197004: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x197004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x197008: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x197008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19700c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19700cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x197010: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x197010u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197014: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x197014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x197018: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x197018u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19701c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19701cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x197020: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x197020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197024: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x197028: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x197028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19702c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19702cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197030:
    // 0x197030: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x197030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x197034: 0xc065d20  jal         func_197480
    ctx->pc = 0x197034u;
    SET_GPR_U32(ctx, 31, 0x19703Cu);
    ctx->pc = 0x197038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197034u;
            // 0x197038: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197480u;
    if (runtime->hasFunction(0x197480u)) {
        auto targetFn = runtime->lookupFunction(0x197480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19703Cu; }
        if (ctx->pc != 0x19703Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUseCapacity__13CGameDataUsedFv_0x197480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19703Cu; }
        if (ctx->pc != 0x19703Cu) { return; }
    }
    ctx->pc = 0x19703Cu;
label_19703c:
    // 0x19703c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x19703cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x197040: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x197040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x197044: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x197044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x197048: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x197048u;
    {
        const bool branch_taken_0x197048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19704Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197048u;
            // 0x19704c: 0x2652006c  addiu       $s2, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197048) {
            ctx->pc = 0x197030u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_197030;
        }
    }
    ctx->pc = 0x197050u;
    // 0x197050: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x197050u;
    {
        const bool branch_taken_0x197050 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x197054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197050u;
            // 0x197054: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197050) {
            ctx->pc = 0x197070u;
            goto label_197070;
        }
    }
    ctx->pc = 0x197058u;
    // 0x197058: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x197058u;
    SET_GPR_U32(ctx, 31, 0x197060u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197060u; }
        if (ctx->pc != 0x197060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197060u; }
        if (ctx->pc != 0x197060u) { return; }
    }
    ctx->pc = 0x197060u;
label_197060:
    // 0x197060: 0xc06715c  jal         func_19C570
    ctx->pc = 0x197060u;
    SET_GPR_U32(ctx, 31, 0x197068u);
    ctx->pc = 0x197064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197060u;
            // 0x197064: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C570u;
    if (runtime->hasFunction(0x19C570u)) {
        auto targetFn = runtime->lookupFunction(0x19C570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197068u; }
        if (ctx->pc != 0x197068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckCapacity__16CUserDataManagerFv_0x19c570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197068u; }
        if (ctx->pc != 0x197068u) { return; }
    }
    ctx->pc = 0x197068u;
label_197068:
    // 0x197068: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x197068u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x19706c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19706cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_197070:
    // 0x197070: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x197070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197074: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x197074u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197078: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x197078u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19707c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19707cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197080: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x197080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197084: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197088: 0x3e00008  jr          $ra
    ctx->pc = 0x197088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19708Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197088u;
            // 0x19708c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197090u;
}
