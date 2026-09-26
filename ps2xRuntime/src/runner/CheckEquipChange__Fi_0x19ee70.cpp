#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckEquipChange__Fi
// Address: 0x19ee70 - 0x19ef68
void CheckEquipChange__Fi_0x19ee70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckEquipChange__Fi_0x19ee70");
#endif

    switch (ctx->pc) {
        case 0x19ee98u: goto label_19ee98;
        case 0x19eea4u: goto label_19eea4;
        case 0x19eeb8u: goto label_19eeb8;
        case 0x19eec0u: goto label_19eec0;
        case 0x19eed0u: goto label_19eed0;
        case 0x19eee4u: goto label_19eee4;
        case 0x19eef8u: goto label_19eef8;
        case 0x19ef00u: goto label_19ef00;
        case 0x19ef14u: goto label_19ef14;
        case 0x19ef1cu: goto label_19ef1c;
        case 0x19ef30u: goto label_19ef30;
        case 0x19ef48u: goto label_19ef48;
        default: break;
    }

    ctx->pc = 0x19ee70u;

    // 0x19ee70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19ee70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19ee74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ee74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ee78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19ee78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19ee7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19ee7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19ee80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19ee80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19ee84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ee84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19ee88: 0x14830030  bne         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x19EE88u;
    {
        const bool branch_taken_0x19ee88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x19EE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EE88u;
            // 0x19ee8c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee88) {
            ctx->pc = 0x19EF4Cu;
            goto label_19ef4c;
        }
    }
    ctx->pc = 0x19EE90u;
    // 0x19ee90: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x19EE90u;
    SET_GPR_U32(ctx, 31, 0x19EE98u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE98u; }
        if (ctx->pc != 0x19EE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE98u; }
        if (ctx->pc != 0x19EE98u) { return; }
    }
    ctx->pc = 0x19EE98u;
label_19ee98:
    // 0x19ee98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ee98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ee9c: 0xc066d24  jal         func_19B490
    ctx->pc = 0x19EE9Cu;
    SET_GPR_U32(ctx, 31, 0x19EEA4u);
    ctx->pc = 0x19EEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EE9Cu;
            // 0x19eea0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEA4u; }
        if (ctx->pc != 0x19EEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEA4u; }
        if (ctx->pc != 0x19EEA4u) { return; }
    }
    ctx->pc = 0x19EEA4u;
label_19eea4:
    // 0x19eea4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19eea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eea8: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x19EEA8u;
    {
        const bool branch_taken_0x19eea8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EEA8u;
            // 0x19eeac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eea8) {
            ctx->pc = 0x19EF4Cu;
            goto label_19ef4c;
        }
    }
    ctx->pc = 0x19EEB0u;
    // 0x19eeb0: 0xc067b38  jal         func_19ECE0
    ctx->pc = 0x19EEB0u;
    SET_GPR_U32(ctx, 31, 0x19EEB8u);
    ctx->pc = 0x19EEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EEB0u;
            // 0x19eeb4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19ECE0u;
    if (runtime->hasFunction(0x19ECE0u)) {
        auto targetFn = runtime->lookupFunction(0x19ECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEB8u; }
        if (ctx->pc != 0x19EEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDefaultWeapon__FiPi_0x19ece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEB8u; }
        if (ctx->pc != 0x19EEB8u) { return; }
    }
    ctx->pc = 0x19EEB8u;
label_19eeb8:
    // 0x19eeb8: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x19EEB8u;
    SET_GPR_U32(ctx, 31, 0x19EEC0u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEC0u; }
        if (ctx->pc != 0x19EEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEC0u; }
        if (ctx->pc != 0x19EEC0u) { return; }
    }
    ctx->pc = 0x19EEC0u;
label_19eec0:
    // 0x19eec0: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x19eec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19eec4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19eec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eec8: 0xc067558  jal         func_19D560
    ctx->pc = 0x19EEC8u;
    SET_GPR_U32(ctx, 31, 0x19EED0u);
    ctx->pc = 0x19EECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EEC8u;
            // 0x19eecc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D560u;
    if (runtime->hasFunction(0x19D560u)) {
        auto targetFn = runtime->lookupFunction(0x19D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EED0u; }
        if (ctx->pc != 0x19EED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquipDirect__16CUserDataManagerFii_0x19d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EED0u; }
        if (ctx->pc != 0x19EED0u) { return; }
    }
    ctx->pc = 0x19EED0u;
label_19eed0:
    // 0x19eed0: 0x8203002b  lb          $v1, 0x2B($s0)
    ctx->pc = 0x19eed0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x19eed4: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x19EED4u;
    {
        const bool branch_taken_0x19eed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19eed4) {
            ctx->pc = 0x19EF48u;
            goto label_19ef48;
        }
    }
    ctx->pc = 0x19EEDCu;
    // 0x19eedc: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x19EEDCu;
    SET_GPR_U32(ctx, 31, 0x19EEE4u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEE4u; }
        if (ctx->pc != 0x19EEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEE4u; }
        if (ctx->pc != 0x19EEE4u) { return; }
    }
    ctx->pc = 0x19EEE4u;
label_19eee4:
    // 0x19eee4: 0x27b30058  addiu       $s3, $sp, 0x58
    ctx->pc = 0x19eee4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x19eee8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19eee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eeec: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x19eeecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x19eef0: 0xc067558  jal         func_19D560
    ctx->pc = 0x19EEF0u;
    SET_GPR_U32(ctx, 31, 0x19EEF8u);
    ctx->pc = 0x19EEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EEF0u;
            // 0x19eef4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D560u;
    if (runtime->hasFunction(0x19D560u)) {
        auto targetFn = runtime->lookupFunction(0x19D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEF8u; }
        if (ctx->pc != 0x19EEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquipDirect__16CUserDataManagerFii_0x19d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEF8u; }
        if (ctx->pc != 0x19EEF8u) { return; }
    }
    ctx->pc = 0x19EEF8u;
label_19eef8:
    // 0x19eef8: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x19EEF8u;
    SET_GPR_U32(ctx, 31, 0x19EF00u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF00u; }
        if (ctx->pc != 0x19EF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF00u; }
        if (ctx->pc != 0x19EF00u) { return; }
    }
    ctx->pc = 0x19EF00u;
label_19ef00:
    // 0x19ef00: 0x27b2005c  addiu       $s2, $sp, 0x5C
    ctx->pc = 0x19ef00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x19ef04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ef04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef08: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x19ef08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19ef0c: 0xc067558  jal         func_19D560
    ctx->pc = 0x19EF0Cu;
    SET_GPR_U32(ctx, 31, 0x19EF14u);
    ctx->pc = 0x19EF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EF0Cu;
            // 0x19ef10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D560u;
    if (runtime->hasFunction(0x19D560u)) {
        auto targetFn = runtime->lookupFunction(0x19D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF14u; }
        if (ctx->pc != 0x19EF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquipDirect__16CUserDataManagerFii_0x19d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF14u; }
        if (ctx->pc != 0x19EF14u) { return; }
    }
    ctx->pc = 0x19EF14u;
label_19ef14:
    // 0x19ef14: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x19EF14u;
    SET_GPR_U32(ctx, 31, 0x19EF1Cu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF1Cu; }
        if (ctx->pc != 0x19EF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF1Cu; }
        if (ctx->pc != 0x19EF1Cu) { return; }
    }
    ctx->pc = 0x19EF1Cu;
label_19ef1c:
    // 0x19ef1c: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x19ef1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19ef20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ef20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef24: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x19ef24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19ef28: 0xc067558  jal         func_19D560
    ctx->pc = 0x19EF28u;
    SET_GPR_U32(ctx, 31, 0x19EF30u);
    ctx->pc = 0x19EF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EF28u;
            // 0x19ef2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D560u;
    if (runtime->hasFunction(0x19D560u)) {
        auto targetFn = runtime->lookupFunction(0x19D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF30u; }
        if (ctx->pc != 0x19EF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquipDirect__16CUserDataManagerFii_0x19d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF30u; }
        if (ctx->pc != 0x19EF30u) { return; }
    }
    ctx->pc = 0x19EF30u;
label_19ef30:
    // 0x19ef30: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x19ef30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x19ef34: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x19ef34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x19ef38: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x19ef38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19ef3c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x19ef3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19ef40: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x19EF40u;
    SET_GPR_U32(ctx, 31, 0x19EF48u);
    ctx->pc = 0x19EF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EF40u;
            // 0x19ef44: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF48u; }
        if (ctx->pc != 0x19EF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF48u; }
        if (ctx->pc != 0x19EF48u) { return; }
    }
    ctx->pc = 0x19EF48u;
label_19ef48:
    // 0x19ef48: 0xa200002b  sb          $zero, 0x2B($s0)
    ctx->pc = 0x19ef48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 0));
label_19ef4c:
    // 0x19ef4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19ef4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19ef50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19ef50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ef54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19ef54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ef58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19ef58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ef5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ef5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ef60: 0x3e00008  jr          $ra
    ctx->pc = 0x19EF60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EF60u;
            // 0x19ef64: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EF68u;
}
