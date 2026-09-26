#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CopyMDTDataPointer__12mgCVisualMDTFP10MDT_HEADERP9mgCMemory
// Address: 0x13ee20 - 0x13ef54
void CopyMDTDataPointer__12mgCVisualMDTFP10MDT_HEADERP9mgCMemory_0x13ee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyMDTDataPointer__12mgCVisualMDTFP10MDT_HEADERP9mgCMemory_0x13ee20");
#endif

    switch (ctx->pc) {
        case 0x13ee50u: goto label_13ee50;
        case 0x13eee0u: goto label_13eee0;
        case 0x13eefcu: goto label_13eefc;
        case 0x13ef10u: goto label_13ef10;
        default: break;
    }

    ctx->pc = 0x13ee20u;

    // 0x13ee20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13ee20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x13ee24: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13ee24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x13ee28: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13ee28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13ee2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13ee2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13ee30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13ee30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13ee34: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13ee34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13ee38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13ee3c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x13ee3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13ee40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13ee44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ee44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ee48: 0xc04fa08  jal         func_13E820
    ctx->pc = 0x13EE48u;
    SET_GPR_U32(ctx, 31, 0x13EE50u);
    ctx->pc = 0x13EE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EE48u;
            // 0x13ee4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E820u;
    if (runtime->hasFunction(0x13E820u)) {
        auto targetFn = runtime->lookupFunction(0x13E820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EE50u; }
        if (ctx->pc != 0x13EE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextureManager__9mgCVisualFv_0x13e820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EE50u; }
        if (ctx->pc != 0x13EE50u) { return; }
    }
    ctx->pc = 0x13EE50u;
label_13ee50:
    // 0x13ee50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13ee50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee54: 0x8e870010  lw          $a3, 0x10($s4)
    ctx->pc = 0x13ee54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x13ee58: 0x8e860018  lw          $a2, 0x18($s4)
    ctx->pc = 0x13ee58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x13ee5c: 0x8e850020  lw          $a1, 0x20($s4)
    ctx->pc = 0x13ee5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x13ee60: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x13ee60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x13ee64: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x13ee64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x13ee68: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x13ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13ee6c: 0x2873821  addu        $a3, $s4, $a3
    ctx->pc = 0x13ee6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x13ee70: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x13ee70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x13ee74: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x13ee74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x13ee78: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x13ee78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x13ee7c: 0x2839021  addu        $s2, $s4, $v1
    ctx->pc = 0x13ee7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x13ee80: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x13ee80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x13ee84: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x13ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x13ee88: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x13ee88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x13ee8c: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x13ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x13ee90: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x13ee90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x13ee94: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x13ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x13ee98: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x13ee98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x13ee9c: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x13ee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x13eea0: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x13eea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x13eea4: 0xae070030  sw          $a3, 0x30($s0)
    ctx->pc = 0x13eea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 7));
    // 0x13eea8: 0xae060034  sw          $a2, 0x34($s0)
    ctx->pc = 0x13eea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 6));
    // 0x13eeac: 0xae050038  sw          $a1, 0x38($s0)
    ctx->pc = 0x13eeacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 5));
    // 0x13eeb0: 0xae04003c  sw          $a0, 0x3C($s0)
    ctx->pc = 0x13eeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
    // 0x13eeb4: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x13eeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x13eeb8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x13eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x13eebc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x13eebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13eec0: 0x3293c  dsll32      $a1, $v1, 4
    ctx->pc = 0x13eec0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 4));
    // 0x13eec4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x13eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13eec8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EEC8u;
    {
        const bool branch_taken_0x13eec8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x13EECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EEC8u;
            // 0x13eecc: 0x5293f  dsra32      $a1, $a1, 4 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eec8) {
            ctx->pc = 0x13EED8u;
            goto label_13eed8;
        }
    }
    ctx->pc = 0x13EED0u;
    // 0x13eed0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x13eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x13eed4: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x13eed4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_13eed8:
    // 0x13eed8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x13EED8u;
    SET_GPR_U32(ctx, 31, 0x13EEE0u);
    ctx->pc = 0x13EEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EED8u;
            // 0x13eedc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EEE0u; }
        if (ctx->pc != 0x13EEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EEE0u; }
        if (ctx->pc != 0x13EEE0u) { return; }
    }
    ctx->pc = 0x13EEE0u;
label_13eee0:
    // 0x13eee0: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x13eee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x13eee4: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x13eee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x13eee8: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x13EEE8u;
    {
        const bool branch_taken_0x13eee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EEE8u;
            // 0x13eeec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eee8) {
            ctx->pc = 0x13EF30u;
            goto label_13ef30;
        }
    }
    ctx->pc = 0x13EEF0u;
    // 0x13eef0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x13eef0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eef4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13EEF4u;
    {
        const bool branch_taken_0x13eef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EEF4u;
            // 0x13eef8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eef4) {
            ctx->pc = 0x13EF1Cu;
            goto label_13ef1c;
        }
    }
    ctx->pc = 0x13EEFCu;
label_13eefc:
    // 0x13eefc: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x13eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x13ef00: 0x2542821  addu        $a1, $s2, $s4
    ctx->pc = 0x13ef00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x13ef04: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13ef04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef08: 0xc04fac8  jal         func_13EB20
    ctx->pc = 0x13EF08u;
    SET_GPR_U32(ctx, 31, 0x13EF10u);
    ctx->pc = 0x13EF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EF08u;
            // 0x13ef0c: 0x552021  addu        $a0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13EB20u;
    if (runtime->hasFunction(0x13EB20u)) {
        auto targetFn = runtime->lookupFunction(0x13EB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF10u; }
        if (ctx->pc != 0x13EF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyMaterial__FP10mgMaterialP13MDT_MATERIAL_P17mgCTextureManager_0x13eb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF10u; }
        if (ctx->pc != 0x13EF10u) { return; }
    }
    ctx->pc = 0x13EF10u;
label_13ef10:
    // 0x13ef10: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x13ef10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x13ef14: 0x26b50030  addiu       $s5, $s5, 0x30
    ctx->pc = 0x13ef14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x13ef18: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x13ef18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_13ef1c:
    // 0x13ef1c: 0x0  nop
    ctx->pc = 0x13ef1cu;
    // NOP
    // 0x13ef20: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x13ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x13ef24: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x13ef24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13ef28: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x13EF28u;
    {
        const bool branch_taken_0x13ef28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ef28) {
            ctx->pc = 0x13EEFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13eefc;
        }
    }
    ctx->pc = 0x13EF30u;
label_13ef30:
    // 0x13ef30: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13ef30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13ef34: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13ef34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13ef38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13ef38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13ef3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13ef3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ef40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13ef40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ef44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13ef44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ef48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13ef48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ef4c: 0x3e00008  jr          $ra
    ctx->pc = 0x13EF4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EF4Cu;
            // 0x13ef50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13EF54u;
}
