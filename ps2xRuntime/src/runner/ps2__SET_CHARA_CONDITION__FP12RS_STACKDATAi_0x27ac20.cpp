#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CHARA_CONDITION__FP12RS_STACKDATAi
// Address: 0x27ac20 - 0x27ad20
void ps2__SET_CHARA_CONDITION__FP12RS_STACKDATAi_0x27ac20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CHARA_CONDITION__FP12RS_STACKDATAi_0x27ac20");
#endif

    switch (ctx->pc) {
        case 0x27ac5cu: goto label_27ac5c;
        case 0x27ac78u: goto label_27ac78;
        case 0x27ac84u: goto label_27ac84;
        case 0x27ac94u: goto label_27ac94;
        case 0x27aca4u: goto label_27aca4;
        case 0x27acc0u: goto label_27acc0;
        case 0x27acd0u: goto label_27acd0;
        case 0x27acdcu: goto label_27acdc;
        case 0x27acf4u: goto label_27acf4;
        default: break;
    }

    ctx->pc = 0x27ac20u;

    // 0x27ac20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27ac20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27ac24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27ac28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27ac28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27ac2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27ac2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27ac30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27ac30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27ac34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27ac34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27ac38: 0x10a20018  beq         $a1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x27AC38u;
    {
        const bool branch_taken_0x27ac38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27AC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AC38u;
            // 0x27ac3c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ac38) {
            ctx->pc = 0x27AC9Cu;
            goto label_27ac9c;
        }
    }
    ctx->pc = 0x27AC40u;
    // 0x27ac40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27ac40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27ac44: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27AC44u;
    {
        const bool branch_taken_0x27ac44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x27ac44) {
            ctx->pc = 0x27AC54u;
            goto label_27ac54;
        }
    }
    ctx->pc = 0x27AC4Cu;
    // 0x27ac4c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x27AC4Cu;
    {
        const bool branch_taken_0x27ac4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AC4Cu;
            // 0x27ac50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ac4c) {
            ctx->pc = 0x27ACFCu;
            goto label_27acfc;
        }
    }
    ctx->pc = 0x27AC54u;
label_27ac54:
    // 0x27ac54: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x27AC54u;
    SET_GPR_U32(ctx, 31, 0x27AC5Cu);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AC5Cu; }
        if (ctx->pc != 0x27AC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AC5Cu; }
        if (ctx->pc != 0x27AC5Cu) { return; }
    }
    ctx->pc = 0x27AC5Cu;
label_27ac5c:
    // 0x27ac5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27AC5Cu;
    {
        const bool branch_taken_0x27ac5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AC5Cu;
            // 0x27ac60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ac5c) {
            ctx->pc = 0x27AC6Cu;
            goto label_27ac6c;
        }
    }
    ctx->pc = 0x27AC64u;
    // 0x27ac64: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x27AC64u;
    {
        const bool branch_taken_0x27ac64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AC64u;
            // 0x27ac68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ac64) {
            ctx->pc = 0x27AD08u;
            goto label_27ad08;
        }
    }
    ctx->pc = 0x27AC6Cu;
label_27ac6c:
    // 0x27ac6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27ac6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ac70: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27AC70u;
    SET_GPR_U32(ctx, 31, 0x27AC78u);
    ctx->pc = 0x27AC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AC70u;
            // 0x27ac74: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AC78u; }
        if (ctx->pc != 0x27AC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AC78u; }
        if (ctx->pc != 0x27AC78u) { return; }
    }
    ctx->pc = 0x27AC78u;
label_27ac78:
    // 0x27ac78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27ac78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ac7c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27AC7Cu;
    SET_GPR_U32(ctx, 31, 0x27AC84u);
    ctx->pc = 0x27AC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AC7Cu;
            // 0x27ac80: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AC84u; }
        if (ctx->pc != 0x27AC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AC84u; }
        if (ctx->pc != 0x27AC84u) { return; }
    }
    ctx->pc = 0x27AC84u;
label_27ac84:
    // 0x27ac84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ac84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ac88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27ac88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ac8c: 0xc068108  jal         func_1A0420
    ctx->pc = 0x27AC8Cu;
    SET_GPR_U32(ctx, 31, 0x27AC94u);
    ctx->pc = 0x27AC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AC8Cu;
            // 0x27ac90: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0420u;
    if (runtime->hasFunction(0x1A0420u)) {
        auto targetFn = runtime->lookupFunction(0x1A0420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AC94u; }
        if (ctx->pc != 0x27AC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttr__16CBattleCharaInfoFii_0x1a0420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AC94u; }
        if (ctx->pc != 0x27AC94u) { return; }
    }
    ctx->pc = 0x27AC94u;
label_27ac94:
    // 0x27ac94: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x27AC94u;
    {
        const bool branch_taken_0x27ac94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AC94u;
            // 0x27ac98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ac94) {
            ctx->pc = 0x27AD08u;
            goto label_27ad08;
        }
    }
    ctx->pc = 0x27AC9Cu;
label_27ac9c:
    // 0x27ac9c: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x27AC9Cu;
    SET_GPR_U32(ctx, 31, 0x27ACA4u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ACA4u; }
        if (ctx->pc != 0x27ACA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ACA4u; }
        if (ctx->pc != 0x27ACA4u) { return; }
    }
    ctx->pc = 0x27ACA4u;
label_27aca4:
    // 0x27aca4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27ACA4u;
    {
        const bool branch_taken_0x27aca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27ACA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ACA4u;
            // 0x27aca8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aca4) {
            ctx->pc = 0x27ACB4u;
            goto label_27acb4;
        }
    }
    ctx->pc = 0x27ACACu;
    // 0x27acac: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x27ACACu;
    {
        const bool branch_taken_0x27acac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ACB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ACACu;
            // 0x27acb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27acac) {
            ctx->pc = 0x27AD08u;
            goto label_27ad08;
        }
    }
    ctx->pc = 0x27ACB4u;
label_27acb4:
    // 0x27acb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27acb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27acb8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27ACB8u;
    SET_GPR_U32(ctx, 31, 0x27ACC0u);
    ctx->pc = 0x27ACBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ACB8u;
            // 0x27acbc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ACC0u; }
        if (ctx->pc != 0x27ACC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ACC0u; }
        if (ctx->pc != 0x27ACC0u) { return; }
    }
    ctx->pc = 0x27ACC0u;
label_27acc0:
    // 0x27acc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27acc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27acc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27acc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27acc8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27ACC8u;
    SET_GPR_U32(ctx, 31, 0x27ACD0u);
    ctx->pc = 0x27ACCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ACC8u;
            // 0x27accc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ACD0u; }
        if (ctx->pc != 0x27ACD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ACD0u; }
        if (ctx->pc != 0x27ACD0u) { return; }
    }
    ctx->pc = 0x27ACD0u;
label_27acd0:
    // 0x27acd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27acd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27acd4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27ACD4u;
    SET_GPR_U32(ctx, 31, 0x27ACDCu);
    ctx->pc = 0x27ACD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ACD4u;
            // 0x27acd8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ACDCu; }
        if (ctx->pc != 0x27ACDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ACDCu; }
        if (ctx->pc != 0x27ACDCu) { return; }
    }
    ctx->pc = 0x27ACDCu;
label_27acdc:
    // 0x27acdc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27ACDCu;
    {
        const bool branch_taken_0x27acdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ACE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ACDCu;
            // 0x27ace0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27acdc) {
            ctx->pc = 0x27AD04u;
            goto label_27ad04;
        }
    }
    ctx->pc = 0x27ACE4u;
    // 0x27ace4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27ace4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ace8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27ace8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27acec: 0xc067030  jal         func_19C0C0
    ctx->pc = 0x27ACECu;
    SET_GPR_U32(ctx, 31, 0x27ACF4u);
    ctx->pc = 0x27ACF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ACECu;
            // 0x27acf0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C0C0u;
    if (runtime->hasFunction(0x19C0C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ACF4u; }
        if (ctx->pc != 0x27ACF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaStatusAttirbute__16CUserDataManagerFiUii_0x19c0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ACF4u; }
        if (ctx->pc != 0x27ACF4u) { return; }
    }
    ctx->pc = 0x27ACF4u;
label_27acf4:
    // 0x27acf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27ACF4u;
    {
        const bool branch_taken_0x27acf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27acf4) {
            ctx->pc = 0x27AD04u;
            goto label_27ad04;
        }
    }
    ctx->pc = 0x27ACFCu;
label_27acfc:
    // 0x27acfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27ACFCu;
    {
        const bool branch_taken_0x27acfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ACFCu;
            // 0x27ad00: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27acfc) {
            ctx->pc = 0x27AD0Cu;
            goto label_27ad0c;
        }
    }
    ctx->pc = 0x27AD04u;
label_27ad04:
    // 0x27ad04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27ad08:
    // 0x27ad08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27ad08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_27ad0c:
    // 0x27ad0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27ad0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ad10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27ad10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ad14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ad14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ad18: 0x3e00008  jr          $ra
    ctx->pc = 0x27AD18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AD18u;
            // 0x27ad1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27AD20u;
}
