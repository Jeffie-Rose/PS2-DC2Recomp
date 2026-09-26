#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LanguageEquipChange__Fv
// Address: 0x19edc0 - 0x19ee64
void LanguageEquipChange__Fv_0x19edc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LanguageEquipChange__Fv_0x19edc0");
#endif

    switch (ctx->pc) {
        case 0x19eddcu: goto label_19eddc;
        case 0x19edecu: goto label_19edec;
        case 0x19edf4u: goto label_19edf4;
        case 0x19edfcu: goto label_19edfc;
        case 0x19ee14u: goto label_19ee14;
        case 0x19ee3cu: goto label_19ee3c;
        case 0x19ee48u: goto label_19ee48;
        default: break;
    }

    ctx->pc = 0x19edc0u;

    // 0x19edc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19edc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19edc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19edc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19edc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19edc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19edcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19edccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19edd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19edd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19edd4: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x19EDD4u;
    SET_GPR_U32(ctx, 31, 0x19EDDCu);
    ctx->pc = 0x19EDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EDD4u;
            // 0x19edd8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EDDCu; }
        if (ctx->pc != 0x19EDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EDDCu; }
        if (ctx->pc != 0x19EDDCu) { return; }
    }
    ctx->pc = 0x19EDDCu;
label_19eddc:
    // 0x19eddc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19eddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ede0: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x19EDE0u;
    {
        const bool branch_taken_0x19ede0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EDE0u;
            // 0x19ede4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ede0) {
            ctx->pc = 0x19EE48u;
            goto label_19ee48;
        }
    }
    ctx->pc = 0x19EDE8u;
    // 0x19ede8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ede8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19edec:
    // 0x19edec: 0xc067b38  jal         func_19ECE0
    ctx->pc = 0x19EDECu;
    SET_GPR_U32(ctx, 31, 0x19EDF4u);
    ctx->pc = 0x19EDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EDECu;
            // 0x19edf0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19ECE0u;
    if (runtime->hasFunction(0x19ECE0u)) {
        auto targetFn = runtime->lookupFunction(0x19ECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EDF4u; }
        if (ctx->pc != 0x19EDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDefaultWeapon__FiPi_0x19ece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EDF4u; }
        if (ctx->pc != 0x19EDF4u) { return; }
    }
    ctx->pc = 0x19EDF4u;
label_19edf4:
    // 0x19edf4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19edf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19edf8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19edf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19edfc:
    // 0x19edfc: 0x0  nop
    ctx->pc = 0x19edfcu;
    // NOP
    // 0x19ee00: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x19ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x19ee04: 0x8c460050  lw          $a2, 0x50($v0)
    ctx->pc = 0x19ee04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x19ee08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ee08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ee0c: 0xc067558  jal         func_19D560
    ctx->pc = 0x19EE0Cu;
    SET_GPR_U32(ctx, 31, 0x19EE14u);
    ctx->pc = 0x19EE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EE0Cu;
            // 0x19ee10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D560u;
    if (runtime->hasFunction(0x19D560u)) {
        auto targetFn = runtime->lookupFunction(0x19D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE14u; }
        if (ctx->pc != 0x19EE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquipDirect__16CUserDataManagerFii_0x19d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE14u; }
        if (ctx->pc != 0x19EE14u) { return; }
    }
    ctx->pc = 0x19EE14u;
label_19ee14:
    // 0x19ee14: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19ee14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19ee18: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x19ee18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x19ee1c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x19EE1Cu;
    {
        const bool branch_taken_0x19ee1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EE1Cu;
            // 0x19ee20: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee1c) {
            ctx->pc = 0x19EDFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19edfc;
        }
    }
    ctx->pc = 0x19EE24u;
    // 0x19ee24: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19ee24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19ee28: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x19ee28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19ee2c: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x19EE2Cu;
    {
        const bool branch_taken_0x19ee2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EE2Cu;
            // 0x19ee30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee2c) {
            ctx->pc = 0x19EDECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19edec;
        }
    }
    ctx->pc = 0x19EE34u;
    // 0x19ee34: 0xc067114  jal         func_19C450
    ctx->pc = 0x19EE34u;
    SET_GPR_U32(ctx, 31, 0x19EE3Cu);
    ctx->pc = 0x19EE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EE34u;
            // 0x19ee38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C450u;
    if (runtime->hasFunction(0x19C450u)) {
        auto targetFn = runtime->lookupFunction(0x19C450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE3Cu; }
        if (ctx->pc != 0x19EE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboNameDefault__16CUserDataManagerFv_0x19c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE3Cu; }
        if (ctx->pc != 0x19EE3Cu) { return; }
    }
    ctx->pc = 0x19EE3Cu;
label_19ee3c:
    // 0x19ee3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ee3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ee40: 0xc067108  jal         func_19C420
    ctx->pc = 0x19EE40u;
    SET_GPR_U32(ctx, 31, 0x19EE48u);
    ctx->pc = 0x19EE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EE40u;
            // 0x19ee44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C420u;
    if (runtime->hasFunction(0x19C420u)) {
        auto targetFn = runtime->lookupFunction(0x19C420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE48u; }
        if (ctx->pc != 0x19EE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRoboName__16CUserDataManagerFPc_0x19c420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE48u; }
        if (ctx->pc != 0x19EE48u) { return; }
    }
    ctx->pc = 0x19EE48u;
label_19ee48:
    // 0x19ee48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19ee48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19ee4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19ee4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ee50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19ee50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ee54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19ee54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ee58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ee58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ee5c: 0x3e00008  jr          $ra
    ctx->pc = 0x19EE5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EE5Cu;
            // 0x19ee60: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EE64u;
}
