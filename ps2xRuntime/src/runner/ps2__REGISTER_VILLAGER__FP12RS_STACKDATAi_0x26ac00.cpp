#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _REGISTER_VILLAGER__FP12RS_STACKDATAi
// Address: 0x26ac00 - 0x26acc0
void ps2__REGISTER_VILLAGER__FP12RS_STACKDATAi_0x26ac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__REGISTER_VILLAGER__FP12RS_STACKDATAi_0x26ac00");
#endif

    switch (ctx->pc) {
        case 0x26ac24u: goto label_26ac24;
        case 0x26ac34u: goto label_26ac34;
        case 0x26ac50u: goto label_26ac50;
        case 0x26ac74u: goto label_26ac74;
        case 0x26ac8cu: goto label_26ac8c;
        case 0x26aca0u: goto label_26aca0;
        default: break;
    }

    ctx->pc = 0x26ac00u;

    // 0x26ac00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26ac00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26ac04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26ac04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26ac08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26ac08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26ac0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26ac0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26ac10: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x26ac10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26ac14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26ac14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26ac18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26ac18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ac1c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26AC1Cu;
    SET_GPR_U32(ctx, 31, 0x26AC24u);
    ctx->pc = 0x26AC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC1Cu;
            // 0x26ac20: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AC24u; }
        if (ctx->pc != 0x26AC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AC24u; }
        if (ctx->pc != 0x26AC24u) { return; }
    }
    ctx->pc = 0x26AC24u;
label_26ac24:
    // 0x26ac24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ac24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ac28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26ac28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ac2c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26AC2Cu;
    SET_GPR_U32(ctx, 31, 0x26AC34u);
    ctx->pc = 0x26AC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC2Cu;
            // 0x26ac30: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AC34u; }
        if (ctx->pc != 0x26AC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AC34u; }
        if (ctx->pc != 0x26AC34u) { return; }
    }
    ctx->pc = 0x26AC34u;
label_26ac34:
    // 0x26ac34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26ac34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ac38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26ac3c: 0x1642000f  bne         $s2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26AC3Cu;
    {
        const bool branch_taken_0x26ac3c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x26AC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC3Cu;
            // 0x26ac40: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac3c) {
            ctx->pc = 0x26AC7Cu;
            goto label_26ac7c;
        }
    }
    ctx->pc = 0x26AC44u;
    // 0x26ac44: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x26ac44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x26ac48: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x26AC48u;
    SET_GPR_U32(ctx, 31, 0x26AC50u);
    ctx->pc = 0x26AC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC48u;
            // 0x26ac4c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AC50u; }
        if (ctx->pc != 0x26AC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AC50u; }
        if (ctx->pc != 0x26AC50u) { return; }
    }
    ctx->pc = 0x26AC50u;
label_26ac50:
    // 0x26ac50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26AC50u;
    {
        const bool branch_taken_0x26ac50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ac50) {
            ctx->pc = 0x26AC60u;
            goto label_26ac60;
        }
    }
    ctx->pc = 0x26AC58u;
    // 0x26ac58: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x26AC58u;
    {
        const bool branch_taken_0x26ac58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC58u;
            // 0x26ac5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac58) {
            ctx->pc = 0x26ACA4u;
            goto label_26aca4;
        }
    }
    ctx->pc = 0x26AC60u;
label_26ac60:
    // 0x26ac60: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x26ac60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x26ac64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26ac64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ac68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26ac68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ac6c: 0xc0b2914  jal         func_2CA450
    ctx->pc = 0x26AC6Cu;
    SET_GPR_U32(ctx, 31, 0x26AC74u);
    ctx->pc = 0x26AC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC6Cu;
            // 0x26ac70: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA450u;
    if (runtime->hasFunction(0x2CA450u)) {
        auto targetFn = runtime->lookupFunction(0x2CA450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AC74u; }
        if (ctx->pc != 0x26AC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegisterVillager__6CSceneFiiP9mgCMemory_0x2ca450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AC74u; }
        if (ctx->pc != 0x26AC74u) { return; }
    }
    ctx->pc = 0x26AC74u;
label_26ac74:
    // 0x26ac74: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26AC74u;
    {
        const bool branch_taken_0x26ac74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC74u;
            // 0x26ac78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac74) {
            ctx->pc = 0x26ACA4u;
            goto label_26aca4;
        }
    }
    ctx->pc = 0x26AC7Cu;
label_26ac7c:
    // 0x26ac7c: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26AC7Cu;
    {
        const bool branch_taken_0x26ac7c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x26AC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC7Cu;
            // 0x26ac80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac7c) {
            ctx->pc = 0x26ACA4u;
            goto label_26aca4;
        }
    }
    ctx->pc = 0x26AC84u;
    // 0x26ac84: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26AC84u;
    SET_GPR_U32(ctx, 31, 0x26AC8Cu);
    ctx->pc = 0x26AC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC84u;
            // 0x26ac88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AC8Cu; }
        if (ctx->pc != 0x26AC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AC8Cu; }
        if (ctx->pc != 0x26AC8Cu) { return; }
    }
    ctx->pc = 0x26AC8Cu;
label_26ac8c:
    // 0x26ac8c: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x26ac8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x26ac90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26ac90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ac94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26ac94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ac98: 0xc0b28f4  jal         func_2CA3D0
    ctx->pc = 0x26AC98u;
    SET_GPR_U32(ctx, 31, 0x26ACA0u);
    ctx->pc = 0x26AC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC98u;
            // 0x26ac9c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA3D0u;
    if (runtime->hasFunction(0x2CA3D0u)) {
        auto targetFn = runtime->lookupFunction(0x2CA3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ACA0u; }
        if (ctx->pc != 0x26ACA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegisterVillager__6CSceneFiii_0x2ca3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ACA0u; }
        if (ctx->pc != 0x26ACA0u) { return; }
    }
    ctx->pc = 0x26ACA0u;
label_26aca0:
    // 0x26aca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26aca4:
    // 0x26aca4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26aca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26aca8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26aca8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26acac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26acacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26acb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26acb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26acb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26acb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26acb8: 0x3e00008  jr          $ra
    ctx->pc = 0x26ACB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26ACBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ACB8u;
            // 0x26acbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26ACC0u;
}
