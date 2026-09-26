#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchActiveItemTableSpace__16CUserDataManagerFii
// Address: 0x19da20 - 0x19dae4
void SearchActiveItemTableSpace__16CUserDataManagerFii_0x19da20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchActiveItemTableSpace__16CUserDataManagerFii_0x19da20");
#endif

    switch (ctx->pc) {
        case 0x19da40u: goto label_19da40;
        case 0x19da58u: goto label_19da58;
        case 0x19da74u: goto label_19da74;
        case 0x19da9cu: goto label_19da9c;
        default: break;
    }

    ctx->pc = 0x19da20u;

    // 0x19da20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19da20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19da24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19da24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19da28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19da28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19da2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19da2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19da30: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x19da30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19da34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19da34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19da38: 0xc066d24  jal         func_19B490
    ctx->pc = 0x19DA38u;
    SET_GPR_U32(ctx, 31, 0x19DA40u);
    ctx->pc = 0x19DA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DA38u;
            // 0x19da3c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA40u; }
        if (ctx->pc != 0x19DA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA40u; }
        if (ctx->pc != 0x19DA40u) { return; }
    }
    ctx->pc = 0x19DA40u;
label_19da40:
    // 0x19da40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19da40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19da44: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19DA44u;
    {
        const bool branch_taken_0x19da44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DA44u;
            // 0x19da48: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19da44) {
            ctx->pc = 0x19DA54u;
            goto label_19da54;
        }
    }
    ctx->pc = 0x19DA4Cu;
    // 0x19da4c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x19DA4Cu;
    {
        const bool branch_taken_0x19da4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DA4Cu;
            // 0x19da50: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19da4c) {
            ctx->pc = 0x19DAC8u;
            goto label_19dac8;
        }
    }
    ctx->pc = 0x19DA54u;
label_19da54:
    // 0x19da54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19da54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19da58:
    // 0x19da58: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x19da58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x19da5c: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x19da5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x19da60: 0x8442002e  lh          $v0, 0x2E($v0)
    ctx->pc = 0x19da60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x19da64: 0x14530007  bne         $v0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x19DA64u;
    {
        const bool branch_taken_0x19da64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x19da64) {
            ctx->pc = 0x19DA84u;
            goto label_19da84;
        }
    }
    ctx->pc = 0x19DA6Cu;
    // 0x19da6c: 0xc065c9c  jal         func_197270
    ctx->pc = 0x19DA6Cu;
    SET_GPR_U32(ctx, 31, 0x19DA74u);
    ctx->pc = 0x197270u;
    if (runtime->hasFunction(0x197270u)) {
        auto targetFn = runtime->lookupFunction(0x197270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA74u; }
        if (ctx->pc != 0x19DA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckStackRemain__13CGameDataUsedFv_0x197270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA74u; }
        if (ctx->pc != 0x19DA74u) { return; }
    }
    ctx->pc = 0x19DA74u;
label_19da74:
    // 0x19da74: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19DA74u;
    {
        const bool branch_taken_0x19da74 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19DA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DA74u;
            // 0x19da78: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19da74) {
            ctx->pc = 0x19DA84u;
            goto label_19da84;
        }
    }
    ctx->pc = 0x19DA7Cu;
    // 0x19da7c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x19DA7Cu;
    {
        const bool branch_taken_0x19da7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DA7Cu;
            // 0x19da80: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19da7c) {
            ctx->pc = 0x19DACCu;
            goto label_19dacc;
        }
    }
    ctx->pc = 0x19DA84u;
label_19da84:
    // 0x19da84: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19da84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19da88: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x19da88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19da8c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x19DA8Cu;
    {
        const bool branch_taken_0x19da8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DA8Cu;
            // 0x19da90: 0x2652006c  addiu       $s2, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19da8c) {
            ctx->pc = 0x19DA58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19da58;
        }
    }
    ctx->pc = 0x19DA94u;
    // 0x19da94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19da94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19da98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19da98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19da9c:
    // 0x19da9c: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x19da9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x19daa0: 0x8463002e  lh          $v1, 0x2E($v1)
    ctx->pc = 0x19daa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x19daa4: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19DAA4u;
    {
        const bool branch_taken_0x19daa4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x19daa4) {
            ctx->pc = 0x19DAB4u;
            goto label_19dab4;
        }
    }
    ctx->pc = 0x19DAACu;
    // 0x19daac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19DAACu;
    {
        const bool branch_taken_0x19daac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19daac) {
            ctx->pc = 0x19DAC8u;
            goto label_19dac8;
        }
    }
    ctx->pc = 0x19DAB4u;
label_19dab4:
    // 0x19dab4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19dab8: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x19dab8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19dabc: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x19DABCu;
    {
        const bool branch_taken_0x19dabc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DABCu;
            // 0x19dac0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dabc) {
            ctx->pc = 0x19DA9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19da9c;
        }
    }
    ctx->pc = 0x19DAC4u;
    // 0x19dac4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19dac8:
    // 0x19dac8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19dac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19dacc:
    // 0x19dacc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19daccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19dad0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19dad0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19dad4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19dad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19dad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dadc: 0x3e00008  jr          $ra
    ctx->pc = 0x19DADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DADCu;
            // 0x19dae0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19DAE4u;
}
