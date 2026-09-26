#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AssignSprite__16CEffectScriptManFi
// Address: 0x2e1e70 - 0x2e1f54
void AssignSprite__16CEffectScriptManFi_0x2e1e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AssignSprite__16CEffectScriptManFi_0x2e1e70");
#endif

    switch (ctx->pc) {
        case 0x2e1eccu: goto label_2e1ecc;
        case 0x2e1ee0u: goto label_2e1ee0;
        case 0x2e1f04u: goto label_2e1f04;
        case 0x2e1f10u: goto label_2e1f10;
        case 0x2e1f24u: goto label_2e1f24;
        case 0x2e1f2cu: goto label_2e1f2c;
        case 0x2e1f34u: goto label_2e1f34;
        default: break;
    }

    ctx->pc = 0x2e1e70u;

    // 0x2e1e70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e1e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e1e74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e1e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e1e78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e1e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e1e7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e1e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e1e80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e1e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e1e84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e1e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e1e88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e1e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1e8c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2e1e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e1e90: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1E90u;
    {
        const bool branch_taken_0x2e1e90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1E90u;
            // 0x2e1e94: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1e90) {
            ctx->pc = 0x2E1EA0u;
            goto label_2e1ea0;
        }
    }
    ctx->pc = 0x2E1E98u;
    // 0x2e1e98: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2E1E98u;
    {
        const bool branch_taken_0x2e1e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1E98u;
            // 0x2e1e9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1e98) {
            ctx->pc = 0x2E1F38u;
            goto label_2e1f38;
        }
    }
    ctx->pc = 0x2E1EA0u;
label_2e1ea0:
    // 0x2e1ea0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2e1ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e1ea4: 0x28900  sll         $s1, $v0, 4
    ctx->pc = 0x2e1ea4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e1ea8: 0x3233000f  andi        $s3, $s1, 0xF
    ctx->pc = 0x2e1ea8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x2e1eac: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1EACu;
    {
        const bool branch_taken_0x2e1eac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1EACu;
            // 0x2e1eb0: 0x111102  srl         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1eac) {
            ctx->pc = 0x2E1EBCu;
            goto label_2e1ebc;
        }
    }
    ctx->pc = 0x2E1EB4u;
    // 0x2e1eb4: 0x111102  srl         $v0, $s1, 4
    ctx->pc = 0x2e1eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
    // 0x2e1eb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e1eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e1ebc:
    // 0x2e1ebc: 0x24520003  addiu       $s2, $v0, 0x3
    ctx->pc = 0x2e1ebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2e1ec0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2e1ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e1ec4: 0xc04e6a8  jal         func_139AA0
    ctx->pc = 0x2E1EC4u;
    SET_GPR_U32(ctx, 31, 0x2E1ECCu);
    ctx->pc = 0x2E1EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1EC4u;
            // 0x2e1ec8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139AA0u;
    if (runtime->hasFunction(0x139AA0u)) {
        auto targetFn = runtime->lookupFunction(0x139AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1ECCu; }
        if (ctx->pc != 0x2E1ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartStackMode__9mgCMemoryFii_0x139aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1ECCu; }
        if (ctx->pc != 0x2E1ECCu) { return; }
    }
    ctx->pc = 0x2E1ECCu;
label_2e1ecc:
    // 0x2e1ecc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1ECCu;
    {
        const bool branch_taken_0x2e1ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1ECCu;
            // 0x2e1ed0: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1ecc) {
            ctx->pc = 0x2E1EE8u;
            goto label_2e1ee8;
        }
    }
    ctx->pc = 0x2E1ED4u;
    // 0x2e1ed4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e1ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1ed8: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2E1ED8u;
    SET_GPR_U32(ctx, 31, 0x2E1EE0u);
    ctx->pc = 0x2E1EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1ED8u;
            // 0x2e1edc: 0x24841260  addiu       $a0, $a0, 0x1260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1EE0u; }
        if (ctx->pc != 0x2E1EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1EE0u; }
        if (ctx->pc != 0x2E1EE0u) { return; }
    }
    ctx->pc = 0x2E1EE0u;
label_2e1ee0:
    // 0x2e1ee0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E1EE0u;
    {
        const bool branch_taken_0x2e1ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1EE0u;
            // 0x2e1ee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1ee0) {
            ctx->pc = 0x2E1F38u;
            goto label_2e1f38;
        }
    }
    ctx->pc = 0x2E1EE8u;
label_2e1ee8:
    // 0x2e1ee8: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1EE8u;
    {
        const bool branch_taken_0x2e1ee8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1EE8u;
            // 0x2e1eec: 0x111102  srl         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1ee8) {
            ctx->pc = 0x2E1EF8u;
            goto label_2e1ef8;
        }
    }
    ctx->pc = 0x2E1EF0u;
    // 0x2e1ef0: 0x111102  srl         $v0, $s1, 4
    ctx->pc = 0x2e1ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
    // 0x2e1ef4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e1ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e1ef8:
    // 0x2e1ef8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2e1ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e1efc: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2E1EFCu;
    SET_GPR_U32(ctx, 31, 0x2E1F04u);
    ctx->pc = 0x2E1F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1EFCu;
            // 0x2e1f00: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1F04u; }
        if (ctx->pc != 0x2E1F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1F04u; }
        if (ctx->pc != 0x2E1F04u) { return; }
    }
    ctx->pc = 0x2E1F04u;
label_2e1f04:
    // 0x2e1f04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e1f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1f08: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x2E1F08u;
    SET_GPR_U32(ctx, 31, 0x2E1F10u);
    ctx->pc = 0x2E1F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1F08u;
            // 0x2e1f0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1F10u; }
        if (ctx->pc != 0x2E1F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1F10u; }
        if (ctx->pc != 0x2E1F10u) { return; }
    }
    ctx->pc = 0x2E1F10u;
label_2e1f10:
    // 0x2e1f10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e1f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1f14: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e1f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1f18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e1f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1f1c: 0xc049c86  jal         func_127218
    ctx->pc = 0x2E1F1Cu;
    SET_GPR_U32(ctx, 31, 0x2E1F24u);
    ctx->pc = 0x2E1F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1F1Cu;
            // 0x2e1f20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1F24u; }
        if (ctx->pc != 0x2E1F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1F24u; }
        if (ctx->pc != 0x2E1F24u) { return; }
    }
    ctx->pc = 0x2E1F24u;
label_2e1f24:
    // 0x2e1f24: 0xc04e764  jal         func_139D90
    ctx->pc = 0x2E1F24u;
    SET_GPR_U32(ctx, 31, 0x2E1F2Cu);
    ctx->pc = 0x2E1F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1F24u;
            // 0x2e1f28: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D90u;
    if (runtime->hasFunction(0x139D90u)) {
        auto targetFn = runtime->lookupFunction(0x139D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1F2Cu; }
        if (ctx->pc != 0x2E1F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlign64__9mgCMemoryFv_0x139d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1F2Cu; }
        if (ctx->pc != 0x2E1F2Cu) { return; }
    }
    ctx->pc = 0x2E1F2Cu;
label_2e1f2c:
    // 0x2e1f2c: 0xc04e6f4  jal         func_139BD0
    ctx->pc = 0x2E1F2Cu;
    SET_GPR_U32(ctx, 31, 0x2E1F34u);
    ctx->pc = 0x2E1F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1F2Cu;
            // 0x2e1f30: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139BD0u;
    if (runtime->hasFunction(0x139BD0u)) {
        auto targetFn = runtime->lookupFunction(0x139BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1F34u; }
        if (ctx->pc != 0x2E1F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndStackMode__9mgCMemoryFv_0x139bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1F34u; }
        if (ctx->pc != 0x2E1F34u) { return; }
    }
    ctx->pc = 0x2E1F34u;
label_2e1f34:
    // 0x2e1f34: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e1f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e1f38:
    // 0x2e1f38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e1f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e1f3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e1f3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1f40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e1f40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1f44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e1f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1f48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e1f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1F4Cu;
            // 0x2e1f50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E1F54u;
}
