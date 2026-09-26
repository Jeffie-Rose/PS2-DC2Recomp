#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPlacePartsBuff__4CMapFP9mgCMemoryi
// Address: 0x15ca30 - 0x15cb28
void SetPlacePartsBuff__4CMapFP9mgCMemoryi_0x15ca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPlacePartsBuff__4CMapFP9mgCMemoryi_0x15ca30");
#endif

    switch (ctx->pc) {
        case 0x15ca8cu: goto label_15ca8c;
        case 0x15caacu: goto label_15caac;
        case 0x15cac8u: goto label_15cac8;
        case 0x15caf0u: goto label_15caf0;
        case 0x15cafcu: goto label_15cafc;
        case 0x15cb0cu: goto label_15cb0c;
        default: break;
    }

    ctx->pc = 0x15ca30u;

    // 0x15ca30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15ca30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15ca34: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x15ca34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x15ca38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15ca38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15ca3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15ca3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15ca40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15ca40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15ca44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15ca44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15ca48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15ca48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ca4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ca4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15ca50: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x15ca50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ca54: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x15ca54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x15ca58: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x15ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x15ca5c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ca60: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x15ca60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15ca64: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x15ca64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x15ca68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15CA68u;
    {
        const bool branch_taken_0x15ca68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CA68u;
            // 0x15ca6c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca68) {
            ctx->pc = 0x15CA7Cu;
            goto label_15ca7c;
        }
    }
    ctx->pc = 0x15CA70u;
    // 0x15ca70: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x15ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x15ca74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15CA74u;
    {
        const bool branch_taken_0x15ca74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CA74u;
            // 0x15ca78: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca74) {
            ctx->pc = 0x15CA80u;
            goto label_15ca80;
        }
    }
    ctx->pc = 0x15CA7Cu;
label_15ca7c:
    // 0x15ca7c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x15ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_15ca80:
    // 0x15ca80: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x15ca80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x15ca84: 0xc04e748  jal         func_139D20
    ctx->pc = 0x15CA84u;
    SET_GPR_U32(ctx, 31, 0x15CA8Cu);
    ctx->pc = 0x15CA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CA84u;
            // 0x15ca88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CA8Cu; }
        if (ctx->pc != 0x15CA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CA8Cu; }
        if (ctx->pc != 0x15CA8Cu) { return; }
    }
    ctx->pc = 0x15CA8Cu;
label_15ca8c:
    // 0x15ca8c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x15ca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x15ca90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15ca90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ca94: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x15ca94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15ca98: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x15ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x15ca9c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15caa0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15caa4: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x15CAA4u;
    SET_GPR_U32(ctx, 31, 0x15CAACu);
    ctx->pc = 0x15CAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CAA4u;
            // 0x15caa8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CAACu; }
        if (ctx->pc != 0x15CAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CAACu; }
        if (ctx->pc != 0x15CAACu) { return; }
    }
    ctx->pc = 0x15CAACu;
label_15caac:
    // 0x15caac: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x15caacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x15cab0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15cab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cab4: 0x24a5cb30  addiu       $a1, $a1, -0x34D0
    ctx->pc = 0x15cab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953776));
    // 0x15cab8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15cab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cabc: 0x24070310  addiu       $a3, $zero, 0x310
    ctx->pc = 0x15cabcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
    // 0x15cac0: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x15CAC0u;
    SET_GPR_U32(ctx, 31, 0x15CAC8u);
    ctx->pc = 0x15CAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CAC0u;
            // 0x15cac4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CAC8u; }
        if (ctx->pc != 0x15CAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CAC8u; }
        if (ctx->pc != 0x15CAC8u) { return; }
    }
    ctx->pc = 0x15CAC8u;
label_15cac8:
    // 0x15cac8: 0xae42032c  sw          $v0, 0x32C($s2)
    ctx->pc = 0x15cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 812), GPR_U32(ctx, 2));
    // 0x15cacc: 0x109880  sll         $s3, $s0, 2
    ctx->pc = 0x15caccu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x15cad0: 0x3262000f  andi        $v0, $s3, 0xF
    ctx->pc = 0x15cad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x15cad4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15CAD4u;
    {
        const bool branch_taken_0x15cad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CAD4u;
            // 0x15cad8: 0x131102  srl         $v0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cad4) {
            ctx->pc = 0x15CAE4u;
            goto label_15cae4;
        }
    }
    ctx->pc = 0x15CADCu;
    // 0x15cadc: 0x131102  srl         $v0, $s3, 4
    ctx->pc = 0x15cadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 4));
    // 0x15cae0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15cae4:
    // 0x15cae4: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x15cae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x15cae8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x15CAE8u;
    SET_GPR_U32(ctx, 31, 0x15CAF0u);
    ctx->pc = 0x15CAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CAE8u;
            // 0x15caec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CAF0u; }
        if (ctx->pc != 0x15CAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CAF0u; }
        if (ctx->pc != 0x15CAF0u) { return; }
    }
    ctx->pc = 0x15CAF0u;
label_15caf0:
    // 0x15caf0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15caf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15caf4: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x15CAF4u;
    SET_GPR_U32(ctx, 31, 0x15CAFCu);
    ctx->pc = 0x15CAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CAF4u;
            // 0x15caf8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CAFCu; }
        if (ctx->pc != 0x15CAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CAFCu; }
        if (ctx->pc != 0x15CAFCu) { return; }
    }
    ctx->pc = 0x15CAFCu;
label_15cafc:
    // 0x15cafc: 0xae420364  sw          $v0, 0x364($s2)
    ctx->pc = 0x15cafcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 868), GPR_U32(ctx, 2));
    // 0x15cb00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15cb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cb04: 0xc0574d4  jal         func_15D350
    ctx->pc = 0x15CB04u;
    SET_GPR_U32(ctx, 31, 0x15CB0Cu);
    ctx->pc = 0x15CB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CB04u;
            // 0x15cb08: 0xae500328  sw          $s0, 0x328($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 808), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D350u;
    if (runtime->hasFunction(0x15D350u)) {
        auto targetFn = runtime->lookupFunction(0x15D350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CB0Cu; }
        if (ctx->pc != 0x15CB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearPlaceParts__4CMapFv_0x15d350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CB0Cu; }
        if (ctx->pc != 0x15CB0Cu) { return; }
    }
    ctx->pc = 0x15CB0Cu;
label_15cb0c:
    // 0x15cb0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15cb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15cb10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15cb10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15cb14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15cb14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cb18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15cb18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15cb1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15cb1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cb20: 0x3e00008  jr          $ra
    ctx->pc = 0x15CB20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CB20u;
            // 0x15cb24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15CB28u;
}
