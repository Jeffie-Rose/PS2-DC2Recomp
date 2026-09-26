#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ExecEntryEffect__11CCharacter2FP15CHRINFO_KEY_SET
// Address: 0x177a30 - 0x177b24
void ExecEntryEffect__11CCharacter2FP15CHRINFO_KEY_SET_0x177a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExecEntryEffect__11CCharacter2FP15CHRINFO_KEY_SET_0x177a30");
#endif

    switch (ctx->pc) {
        case 0x177a60u: goto label_177a60;
        case 0x177a84u: goto label_177a84;
        case 0x177ac0u: goto label_177ac0;
        case 0x177ad0u: goto label_177ad0;
        default: break;
    }

    ctx->pc = 0x177a30u;

    // 0x177a30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x177a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x177a34: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x177a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x177a38: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x177a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x177a3c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x177a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x177a40: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x177a40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x177a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x177a48: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x177a48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x177a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x177a50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x177a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x177a54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x177a58: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x177a58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x177a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177a60:
    // 0x177a60: 0x2b19021  addu        $s2, $s5, $s1
    ctx->pc = 0x177a60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x177a64: 0x8e4305f0  lw          $v1, 0x5F0($s2)
    ctx->pc = 0x177a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
    // 0x177a68: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x177A68u;
    {
        const bool branch_taken_0x177a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x177A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177A68u;
            // 0x177a6c: 0x265305f0  addiu       $s3, $s2, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177a68) {
            ctx->pc = 0x177A84u;
            goto label_177a84;
        }
    }
    ctx->pc = 0x177A70u;
    // 0x177a70: 0x8e4305f4  lw          $v1, 0x5F4($s2)
    ctx->pc = 0x177a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1524)));
    // 0x177a74: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x177A74u;
    {
        const bool branch_taken_0x177a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x177a74) {
            ctx->pc = 0x177A84u;
            goto label_177a84;
        }
    }
    ctx->pc = 0x177A7Cu;
    // 0x177a7c: 0xc060b9c  jal         func_182E70
    ctx->pc = 0x177A7Cu;
    SET_GPR_U32(ctx, 31, 0x177A84u);
    ctx->pc = 0x177A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177A7Cu;
            // 0x177a80: 0x8e4405ec  lw          $a0, 0x5EC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1516)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182E70u;
    if (runtime->hasFunction(0x182E70u)) {
        auto targetFn = runtime->lookupFunction(0x182E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A84u; }
        if (ctx->pc != 0x177A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stop__14CEffectManagerFv_0x182e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A84u; }
        if (ctx->pc != 0x177A84u) { return; }
    }
    ctx->pc = 0x177A84u;
label_177a84:
    // 0x177a84: 0x0  nop
    ctx->pc = 0x177a84u;
    // NOP
    // 0x177a88: 0xae4005ec  sw          $zero, 0x5EC($s2)
    ctx->pc = 0x177a88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1516), GPR_U32(ctx, 0));
    // 0x177a8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x177a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x177a90: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x177a90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x177a94: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x177a94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x177a98: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x177a98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x177a9c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x177A9Cu;
    {
        const bool branch_taken_0x177a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177A9Cu;
            // 0x177aa0: 0xae4005f4  sw          $zero, 0x5F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177a9c) {
            ctx->pc = 0x177A60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_177a60;
        }
    }
    ctx->pc = 0x177AA4u;
    // 0x177aa4: 0x8ea30650  lw          $v1, 0x650($s5)
    ctx->pc = 0x177aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1616)));
    // 0x177aa8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x177AA8u;
    {
        const bool branch_taken_0x177aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x177aa8) {
            ctx->pc = 0x177B00u;
            goto label_177b00;
        }
    }
    ctx->pc = 0x177AB0u;
    // 0x177ab0: 0x12800013  beqz        $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x177AB0u;
    {
        const bool branch_taken_0x177ab0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x177AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177AB0u;
            // 0x177ab4: 0x8eb005e8  lw          $s0, 0x5E8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ab0) {
            ctx->pc = 0x177B00u;
            goto label_177b00;
        }
    }
    ctx->pc = 0x177AB8u;
    // 0x177ab8: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x177AB8u;
    {
        const bool branch_taken_0x177ab8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x177ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177AB8u;
            // 0x177abc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ab8) {
            ctx->pc = 0x177AFCu;
            goto label_177afc;
        }
    }
    ctx->pc = 0x177AC0u;
label_177ac0:
    // 0x177ac0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x177ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x177ac4: 0x8ea50374  lw          $a1, 0x374($s5)
    ctx->pc = 0x177ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 884)));
    // 0x177ac8: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x177AC8u;
    SET_GPR_U32(ctx, 31, 0x177AD0u);
    ctx->pc = 0x177ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177AC8u;
            // 0x177acc: 0x244401bc  addiu       $a0, $v0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AD0u; }
        if (ctx->pc != 0x177AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AD0u; }
        if (ctx->pc != 0x177AD0u) { return; }
    }
    ctx->pc = 0x177AD0u;
label_177ad0:
    // 0x177ad0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x177AD0u;
    {
        const bool branch_taken_0x177ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177ad0) {
            ctx->pc = 0x177AF0u;
            goto label_177af0;
        }
    }
    ctx->pc = 0x177AD8u;
    // 0x177ad8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x177ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x177adc: 0x2b12821  addu        $a1, $s5, $s1
    ctx->pc = 0x177adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x177ae0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x177ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177ae4: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x177ae4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x177ae8: 0xaca405ec  sw          $a0, 0x5EC($a1)
    ctx->pc = 0x177ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1516), GPR_U32(ctx, 4));
    // 0x177aec: 0xaca305f0  sw          $v1, 0x5F0($a1)
    ctx->pc = 0x177aecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1520), GPR_U32(ctx, 3));
label_177af0:
    // 0x177af0: 0x8e100024  lw          $s0, 0x24($s0)
    ctx->pc = 0x177af0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x177af4: 0x1600fff2  bnez        $s0, . + 4 + (-0xE << 2)
    ctx->pc = 0x177AF4u;
    {
        const bool branch_taken_0x177af4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x177af4) {
            ctx->pc = 0x177AC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_177ac0;
        }
    }
    ctx->pc = 0x177AFCu;
label_177afc:
    // 0x177afc: 0x0  nop
    ctx->pc = 0x177afcu;
    // NOP
label_177b00:
    // 0x177b00: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x177b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x177b04: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x177b04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x177b08: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x177b08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177b0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x177b0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177b10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x177b10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177b14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177b14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177b18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x177B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177B1Cu;
            // 0x177b20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177B24u;
}
