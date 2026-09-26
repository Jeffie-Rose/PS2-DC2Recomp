#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditSetEffectBuffer__FP9mgCMemory
// Address: 0x2faa00 - 0x2fab3c
void EditSetEffectBuffer__FP9mgCMemory_0x2faa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditSetEffectBuffer__FP9mgCMemory_0x2faa00");
#endif

    switch (ctx->pc) {
        case 0x2faa3cu: goto label_2faa3c;
        case 0x2faa48u: goto label_2faa48;
        case 0x2faa5cu: goto label_2faa5c;
        case 0x2faa98u: goto label_2faa98;
        case 0x2faaa8u: goto label_2faaa8;
        case 0x2faaccu: goto label_2faacc;
        case 0x2faad8u: goto label_2faad8;
        case 0x2faaf4u: goto label_2faaf4;
        case 0x2fab04u: goto label_2fab04;
        case 0x2fab18u: goto label_2fab18;
        default: break;
    }

    ctx->pc = 0x2faa00u;

    // 0x2faa00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2faa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2faa04: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2faa04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2faa08: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2faa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2faa0c: 0x24a51bf8  addiu       $a1, $a1, 0x1BF8
    ctx->pc = 0x2faa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7160));
    // 0x2faa10: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2faa10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2faa14: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2faa14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2faa18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2faa18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2faa1c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2faa1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faa20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2faa20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2faa24: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2faa24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2faa28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2faa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2faa2c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2faa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2faa30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2faa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2faa34: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2FAA34u;
    SET_GPR_U32(ctx, 31, 0x2FAA3Cu);
    ctx->pc = 0x2FAA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAA34u;
            // 0x2faa38: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAA3Cu; }
        if (ctx->pc != 0x2FAA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAA3Cu; }
        if (ctx->pc != 0x2FAA3Cu) { return; }
    }
    ctx->pc = 0x2FAA3Cu;
label_2faa3c:
    // 0x2faa3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2faa3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faa40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2faa40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faa44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2faa44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2faa48:
    // 0x2faa48: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x2faa48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x2faa4c: 0x24429370  addiu       $v0, $v0, -0x6C90
    ctx->pc = 0x2faa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939504));
    // 0x2faa50: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x2faa50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2faa54: 0xc05a778  jal         func_169DE0
    ctx->pc = 0x2FAA54u;
    SET_GPR_U32(ctx, 31, 0x2FAA5Cu);
    ctx->pc = 0x2FAA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAA54u;
            // 0x2faa58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169DE0u;
    if (runtime->hasFunction(0x169DE0u)) {
        auto targetFn = runtime->lookupFunction(0x169DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAA5Cu; }
        if (ctx->pc != 0x2FAA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__7CObjectFv_0x169de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAA5Cu; }
        if (ctx->pc != 0x2FAA5Cu) { return; }
    }
    ctx->pc = 0x2FAA5Cu;
label_2faa5c:
    // 0x2faa5c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2faa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2faa60: 0xae62008c  sw          $v0, 0x8C($s3)
    ctx->pc = 0x2faa60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 2));
    // 0x2faa64: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x2faa64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x2faa68: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x2faa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x2faa6c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2faa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2faa70: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2faa70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2faa74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FAA74u;
    {
        const bool branch_taken_0x2faa74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAA74u;
            // 0x2faa78: 0x2674008c  addiu       $s4, $s3, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faa74) {
            ctx->pc = 0x2FAA88u;
            goto label_2faa88;
        }
    }
    ctx->pc = 0x2FAA7Cu;
    // 0x2faa7c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2faa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2faa80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FAA80u;
    {
        const bool branch_taken_0x2faa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAA80u;
            // 0x2faa84: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faa80) {
            ctx->pc = 0x2FAA8Cu;
            goto label_2faa8c;
        }
    }
    ctx->pc = 0x2FAA88u;
label_2faa88:
    // 0x2faa88: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2faa88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_2faa8c:
    // 0x2faa8c: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x2faa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2faa90: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2FAA90u;
    SET_GPR_U32(ctx, 31, 0x2FAA98u);
    ctx->pc = 0x2FAA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAA90u;
            // 0x2faa94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAA98u; }
        if (ctx->pc != 0x2FAA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAA98u; }
        if (ctx->pc != 0x2FAA98u) { return; }
    }
    ctx->pc = 0x2FAA98u;
label_2faa98:
    // 0x2faa98: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2faa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2faa9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2faa9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faaa0: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x2FAAA0u;
    SET_GPR_U32(ctx, 31, 0x2FAAA8u);
    ctx->pc = 0x2FAAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAAA0u;
            // 0x2faaa4: 0x32140  sll         $a0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAAA8u; }
        if (ctx->pc != 0x2FAAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAAA8u; }
        if (ctx->pc != 0x2FAAA8u) { return; }
    }
    ctx->pc = 0x2FAAA8u;
label_2faaa8:
    // 0x2faaa8: 0xae620094  sw          $v0, 0x94($s3)
    ctx->pc = 0x2faaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 2));
    // 0x2faaac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2faaacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2faab0: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x2faab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2faab4: 0x26520100  addiu       $s2, $s2, 0x100
    ctx->pc = 0x2faab4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x2faab8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2FAAB8u;
    {
        const bool branch_taken_0x2faab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAAB8u;
            // 0x2faabc: 0xae7000f0  sw          $s0, 0xF0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faab8) {
            ctx->pc = 0x2FAA48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2faa48;
        }
    }
    ctx->pc = 0x2FAAC0u;
    // 0x2faac0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2faac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faac4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2FAAC4u;
    SET_GPR_U32(ctx, 31, 0x2FAACCu);
    ctx->pc = 0x2FAAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAAC4u;
            // 0x2faac8: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAACCu; }
        if (ctx->pc != 0x2FAACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAACCu; }
        if (ctx->pc != 0x2FAACCu) { return; }
    }
    ctx->pc = 0x2FAACCu;
label_2faacc:
    // 0x2faacc: 0x24040410  addiu       $a0, $zero, 0x410
    ctx->pc = 0x2faaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x2faad0: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x2FAAD0u;
    SET_GPR_U32(ctx, 31, 0x2FAAD8u);
    ctx->pc = 0x2FAAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAAD0u;
            // 0x2faad4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAAD8u; }
        if (ctx->pc != 0x2FAAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAAD8u; }
        if (ctx->pc != 0x2FAAD8u) { return; }
    }
    ctx->pc = 0x2FAAD8u;
label_2faad8:
    // 0x2faad8: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2faad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2faadc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2faadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faae0: 0x24a5ab40  addiu       $a1, $a1, -0x54C0
    ctx->pc = 0x2faae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945600));
    // 0x2faae4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2faae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faae8: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2faae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2faaec: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x2FAAECu;
    SET_GPR_U32(ctx, 31, 0x2FAAF4u);
    ctx->pc = 0x2FAAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAAECu;
            // 0x2faaf0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAAF4u; }
        if (ctx->pc != 0x2FAAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAAF4u; }
        if (ctx->pc != 0x2FAAF4u) { return; }
    }
    ctx->pc = 0x2FAAF4u;
label_2faaf4:
    // 0x2faaf4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2faaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faaf8: 0xaf829f6c  sw          $v0, -0x6094($gp)
    ctx->pc = 0x2faaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942572), GPR_U32(ctx, 2));
    // 0x2faafc: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2FAAFCu;
    SET_GPR_U32(ctx, 31, 0x2FAB04u);
    ctx->pc = 0x2FAB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAAFCu;
            // 0x2fab00: 0x240505dc  addiu       $a1, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAB04u; }
        if (ctx->pc != 0x2FAB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAB04u; }
        if (ctx->pc != 0x2FAB04u) { return; }
    }
    ctx->pc = 0x2FAB04u;
label_2fab04:
    // 0x2fab04: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2fab04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x2fab08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2fab08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fab0c: 0x24849670  addiu       $a0, $a0, -0x6990
    ctx->pc = 0x2fab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940272));
    // 0x2fab10: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2FAB10u;
    SET_GPR_U32(ctx, 31, 0x2FAB18u);
    ctx->pc = 0x2FAB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAB10u;
            // 0x2fab14: 0x240605dc  addiu       $a2, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAB18u; }
        if (ctx->pc != 0x2FAB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAB18u; }
        if (ctx->pc != 0x2FAB18u) { return; }
    }
    ctx->pc = 0x2FAB18u;
label_2fab18:
    // 0x2fab18: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2fab18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fab1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2fab1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fab20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2fab20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fab24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2fab24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fab28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fab28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fab2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fab2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fab30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fab30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fab34: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAB34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAB34u;
            // 0x2fab38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FAB3Cu;
}
