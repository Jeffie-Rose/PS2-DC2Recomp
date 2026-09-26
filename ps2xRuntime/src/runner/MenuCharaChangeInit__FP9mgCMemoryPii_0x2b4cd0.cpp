#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuCharaChangeInit__FP9mgCMemoryPii
// Address: 0x2b4cd0 - 0x2b5060
void MenuCharaChangeInit__FP9mgCMemoryPii_0x2b4cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuCharaChangeInit__FP9mgCMemoryPii_0x2b4cd0");
#endif

    switch (ctx->pc) {
        case 0x2b4d20u: goto label_2b4d20;
        case 0x2b4d3cu: goto label_2b4d3c;
        case 0x2b4d44u: goto label_2b4d44;
        case 0x2b4d58u: goto label_2b4d58;
        case 0x2b4d7cu: goto label_2b4d7c;
        case 0x2b4d8cu: goto label_2b4d8c;
        case 0x2b4d9cu: goto label_2b4d9c;
        case 0x2b4da8u: goto label_2b4da8;
        case 0x2b4db8u: goto label_2b4db8;
        case 0x2b4dc8u: goto label_2b4dc8;
        case 0x2b4df8u: goto label_2b4df8;
        case 0x2b4e04u: goto label_2b4e04;
        case 0x2b4e10u: goto label_2b4e10;
        case 0x2b4e18u: goto label_2b4e18;
        case 0x2b4e38u: goto label_2b4e38;
        case 0x2b4e44u: goto label_2b4e44;
        case 0x2b4e70u: goto label_2b4e70;
        case 0x2b4e7cu: goto label_2b4e7c;
        case 0x2b4eb0u: goto label_2b4eb0;
        case 0x2b4ec0u: goto label_2b4ec0;
        case 0x2b4eccu: goto label_2b4ecc;
        case 0x2b4ed8u: goto label_2b4ed8;
        case 0x2b4f08u: goto label_2b4f08;
        case 0x2b4f1cu: goto label_2b4f1c;
        case 0x2b4f28u: goto label_2b4f28;
        case 0x2b4f58u: goto label_2b4f58;
        case 0x2b4fa8u: goto label_2b4fa8;
        case 0x2b4fb0u: goto label_2b4fb0;
        case 0x2b4fb8u: goto label_2b4fb8;
        case 0x2b4fc0u: goto label_2b4fc0;
        case 0x2b4fe8u: goto label_2b4fe8;
        case 0x2b4ff8u: goto label_2b4ff8;
        case 0x2b5010u: goto label_2b5010;
        case 0x2b501cu: goto label_2b501c;
        case 0x2b5040u: goto label_2b5040;
        default: break;
    }

    ctx->pc = 0x2b4cd0u;

    // 0x2b4cd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b4cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b4cd4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b4cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b4cd8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b4cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b4cdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b4cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b4ce0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b4ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b4ce4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b4ce4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4ce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b4ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b4cec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2b4cecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4cf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b4cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b4cf4: 0x8c900020  lw          $s0, 0x20($a0)
    ctx->pc = 0x2b4cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2b4cf8: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4CF8u;
    {
        const bool branch_taken_0x2b4cf8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B4CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4CF8u;
            // 0x2b4cfc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4cf8) {
            ctx->pc = 0x2B4D0Cu;
            goto label_2b4d0c;
        }
    }
    ctx->pc = 0x2B4D00u;
    // 0x2b4d00: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2b4d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b4d04: 0x1642000f  bne         $s2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B4D04u;
    {
        const bool branch_taken_0x2b4d04 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b4d04) {
            ctx->pc = 0x2B4D44u;
            goto label_2b4d44;
        }
    }
    ctx->pc = 0x2B4D0Cu;
label_2b4d0c:
    // 0x2b4d0c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2b4d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2b4d10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b4d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4d14: 0x2484eda8  addiu       $a0, $a0, -0x1258
    ctx->pc = 0x2b4d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962600));
    // 0x2b4d18: 0xc094440  jal         func_251100
    ctx->pc = 0x2B4D18u;
    SET_GPR_U32(ctx, 31, 0x2B4D20u);
    ctx->pc = 0x2B4D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4D18u;
            // 0x2b4d1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4D20u; }
        if (ctx->pc != 0x2B4D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4D20u; }
        if (ctx->pc != 0x2B4D20u) { return; }
    }
    ctx->pc = 0x2B4D20u;
label_2b4d20:
    // 0x2b4d20: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2b4d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2b4d24: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4D24u;
    {
        const bool branch_taken_0x2b4d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4D24u;
            // 0x2b4d28: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4d24) {
            ctx->pc = 0x2B4D34u;
            goto label_2b4d34;
        }
    }
    ctx->pc = 0x2B4D2Cu;
    // 0x2b4d2c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2b4d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2b4d30: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2b4d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b4d34:
    // 0x2b4d34: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2B4D34u;
    SET_GPR_U32(ctx, 31, 0x2B4D3Cu);
    ctx->pc = 0x2B4D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4D34u;
            // 0x2b4d38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4D3Cu; }
        if (ctx->pc != 0x2B4D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4D3Cu; }
        if (ctx->pc != 0x2B4D3Cu) { return; }
    }
    ctx->pc = 0x2B4D3Cu;
label_2b4d3c:
    // 0x2b4d3c: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2B4D3Cu;
    SET_GPR_U32(ctx, 31, 0x2B4D44u);
    ctx->pc = 0x2B4D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4D3Cu;
            // 0x2b4d40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4D44u; }
        if (ctx->pc != 0x2B4D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4D44u; }
        if (ctx->pc != 0x2B4D44u) { return; }
    }
    ctx->pc = 0x2B4D44u;
label_2b4d44:
    // 0x2b4d44: 0x8e660024  lw          $a2, 0x24($s3)
    ctx->pc = 0x2b4d44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2b4d48: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2b4d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2b4d4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b4d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4d50: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2B4D50u;
    SET_GPR_U32(ctx, 31, 0x2B4D58u);
    ctx->pc = 0x2B4D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4D50u;
            // 0x2b4d54: 0x2484ccb0  addiu       $a0, $a0, -0x3350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4D58u; }
        if (ctx->pc != 0x2B4D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4D58u; }
        if (ctx->pc != 0x2B4D58u) { return; }
    }
    ctx->pc = 0x2B4D58u;
label_2b4d58:
    // 0x2b4d58: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x2b4d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x2b4d5c: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2b4d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2b4d60: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x2b4d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2b4d64: 0x2484cc50  addiu       $a0, $a0, -0x33B0
    ctx->pc = 0x2b4d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954064));
    // 0x2b4d68: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2b4d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2b4d6c: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2b4d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b4d70: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2b4d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2b4d74: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2B4D74u;
    SET_GPR_U32(ctx, 31, 0x2B4D7Cu);
    ctx->pc = 0x2B4D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4D74u;
            // 0x2b4d78: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4D7Cu; }
        if (ctx->pc != 0x2B4D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4D7Cu; }
        if (ctx->pc != 0x2B4D7Cu) { return; }
    }
    ctx->pc = 0x2B4D7Cu;
label_2b4d7c:
    // 0x2b4d7c: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2b4d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2b4d80: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2b4d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2b4d84: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2B4D84u;
    SET_GPR_U32(ctx, 31, 0x2B4D8Cu);
    ctx->pc = 0x2B4D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4D84u;
            // 0x2b4d88: 0x2484cc50  addiu       $a0, $a0, -0x33B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4D8Cu; }
        if (ctx->pc != 0x2B4D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4D8Cu; }
        if (ctx->pc != 0x2B4D8Cu) { return; }
    }
    ctx->pc = 0x2B4D8Cu;
label_2b4d8c:
    // 0x2b4d8c: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2b4d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2b4d90: 0x240501fa  addiu       $a1, $zero, 0x1FA
    ctx->pc = 0x2b4d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 506));
    // 0x2b4d94: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2B4D94u;
    SET_GPR_U32(ctx, 31, 0x2B4D9Cu);
    ctx->pc = 0x2B4D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4D94u;
            // 0x2b4d98: 0x2484cc50  addiu       $a0, $a0, -0x33B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4D9Cu; }
        if (ctx->pc != 0x2B4D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4D9Cu; }
        if (ctx->pc != 0x2B4D9Cu) { return; }
    }
    ctx->pc = 0x2B4D9Cu;
label_2b4d9c:
    // 0x2b4d9c: 0x24041f80  addiu       $a0, $zero, 0x1F80
    ctx->pc = 0x2b4d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8064));
    // 0x2b4da0: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2B4DA0u;
    SET_GPR_U32(ctx, 31, 0x2B4DA8u);
    ctx->pc = 0x2B4DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4DA0u;
            // 0x2b4da4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4DA8u; }
        if (ctx->pc != 0x2B4DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4DA8u; }
        if (ctx->pc != 0x2B4DA8u) { return; }
    }
    ctx->pc = 0x2B4DA8u;
label_2b4da8:
    // 0x2b4da8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4DA8u;
    {
        const bool branch_taken_0x2b4da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4DA8u;
            // 0x2b4dac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4da8) {
            ctx->pc = 0x2B4DBCu;
            goto label_2b4dbc;
        }
    }
    ctx->pc = 0x2B4DB0u;
    // 0x2b4db0: 0xc0ac0d4  jal         func_2B0350
    ctx->pc = 0x2B4DB0u;
    SET_GPR_U32(ctx, 31, 0x2B4DB8u);
    ctx->pc = 0x2B4DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4DB0u;
            // 0x2b4db4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B0350u;
    if (runtime->hasFunction(0x2B0350u)) {
        auto targetFn = runtime->lookupFunction(0x2B0350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4DB8u; }
        if (ctx->pc != 0x2B4DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__15CMenuChrCngMenuFv_0x2b0350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4DB8u; }
        if (ctx->pc != 0x2B4DB8u) { return; }
    }
    ctx->pc = 0x2B4DB8u;
label_2b4db8:
    // 0x2b4db8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b4db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b4dbc:
    // 0x2b4dbc: 0xaf829bc8  sw          $v0, -0x6438($gp)
    ctx->pc = 0x2b4dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941640), GPR_U32(ctx, 2));
    // 0x2b4dc0: 0xc08dc6c  jal         func_2371B0
    ctx->pc = 0x2B4DC0u;
    SET_GPR_U32(ctx, 31, 0x2B4DC8u);
    ctx->pc = 0x2B4DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4DC0u;
            // 0x2b4dc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2371B0u;
    if (runtime->hasFunction(0x2371B0u)) {
        auto targetFn = runtime->lookupFunction(0x2371B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4DC8u; }
        if (ctx->pc != 0x2B4DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexBlock__14CBaseMenuClassFPi_0x2371b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4DC8u; }
        if (ctx->pc != 0x2B4DC8u) { return; }
    }
    ctx->pc = 0x2B4DC8u;
label_2b4dc8:
    // 0x2b4dc8: 0x8f8394ac  lw          $v1, -0x6B54($gp)
    ctx->pc = 0x2b4dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x2b4dcc: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2b4dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x2b4dd0: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2b4dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2b4dd4: 0x8f829bc8  lw          $v0, -0x6438($gp)
    ctx->pc = 0x2b4dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b4dd8: 0x2484cc50  addiu       $a0, $a0, -0x33B0
    ctx->pc = 0x2b4dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954064));
    // 0x2b4ddc: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x2b4ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2b4de0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2b4de0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2b4de4: 0x84234d96  lh          $v1, 0x4D96($at)
    ctx->pc = 0x2b4de4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
    // 0x2b4de8: 0xac430114  sw          $v1, 0x114($v0)
    ctx->pc = 0x2b4de8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 3));
    // 0x2b4dec: 0x8f829bc8  lw          $v0, -0x6438($gp)
    ctx->pc = 0x2b4decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b4df0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2B4DF0u;
    SET_GPR_U32(ctx, 31, 0x2B4DF8u);
    ctx->pc = 0x2B4DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4DF0u;
            // 0x2b4df4: 0xac430110  sw          $v1, 0x110($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4DF8u; }
        if (ctx->pc != 0x2B4DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4DF8u; }
        if (ctx->pc != 0x2B4DF8u) { return; }
    }
    ctx->pc = 0x2B4DF8u;
label_2b4df8:
    // 0x2b4df8: 0x240401ec  addiu       $a0, $zero, 0x1EC
    ctx->pc = 0x2b4df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 492));
    // 0x2b4dfc: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2B4DFCu;
    SET_GPR_U32(ctx, 31, 0x2B4E04u);
    ctx->pc = 0x2B4E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4DFCu;
            // 0x2b4e00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4E04u; }
        if (ctx->pc != 0x2B4E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4E04u; }
        if (ctx->pc != 0x2B4E04u) { return; }
    }
    ctx->pc = 0x2B4E04u;
label_2b4e04:
    // 0x2b4e04: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B4E04u;
    {
        const bool branch_taken_0x2b4e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4E04u;
            // 0x2b4e08: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4e04) {
            ctx->pc = 0x2B4E38u;
            goto label_2b4e38;
        }
    }
    ctx->pc = 0x2B4E0Cu;
    // 0x2b4e0c: 0x26110024  addiu       $s1, $s0, 0x24
    ctx->pc = 0x2b4e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_2b4e10:
    // 0x2b4e10: 0xc04e640  jal         func_139900
    ctx->pc = 0x2B4E10u;
    SET_GPR_U32(ctx, 31, 0x2B4E18u);
    ctx->pc = 0x2B4E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4E10u;
            // 0x2b4e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4E18u; }
        if (ctx->pc != 0x2B4E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4E18u; }
        if (ctx->pc != 0x2B4E18u) { return; }
    }
    ctx->pc = 0x2B4E18u;
label_2b4e18:
    // 0x2b4e18: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x2b4e18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2b4e1c: 0x260201a4  addiu       $v0, $s0, 0x1A4
    ctx->pc = 0x2b4e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 420));
    // 0x2b4e20: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2b4e20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b4e24: 0x0  nop
    ctx->pc = 0x2b4e24u;
    // NOP
    // 0x2b4e28: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B4E28u;
    {
        const bool branch_taken_0x2b4e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4e28) {
            ctx->pc = 0x2B4E10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b4e10;
        }
    }
    ctx->pc = 0x2B4E30u;
    // 0x2b4e30: 0xc04e640  jal         func_139900
    ctx->pc = 0x2B4E30u;
    SET_GPR_U32(ctx, 31, 0x2B4E38u);
    ctx->pc = 0x2B4E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4E30u;
            // 0x2b4e34: 0x260401b4  addiu       $a0, $s0, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4E38u; }
        if (ctx->pc != 0x2B4E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4E38u; }
        if (ctx->pc != 0x2B4E38u) { return; }
    }
    ctx->pc = 0x2B4E38u;
label_2b4e38:
    // 0x2b4e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b4e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4e3c: 0xc08b614  jal         func_22D850
    ctx->pc = 0x2B4E3Cu;
    SET_GPR_U32(ctx, 31, 0x2B4E44u);
    ctx->pc = 0x2B4E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4E3Cu;
            // 0x2b4e40: 0xaf909584  sw          $s0, -0x6A7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940036), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D850u;
    if (runtime->hasFunction(0x22D850u)) {
        auto targetFn = runtime->lookupFunction(0x22D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4E44u; }
        if (ctx->pc != 0x2B4E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CRepairManagerFv_0x22d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4E44u; }
        if (ctx->pc != 0x2B4E44u) { return; }
    }
    ctx->pc = 0x2B4E44u;
label_2b4e44:
    // 0x2b4e44: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b4e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b4e48: 0x16440008  bne         $s2, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B4E48u;
    {
        const bool branch_taken_0x2b4e48 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B4E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4E48u;
            // 0x2b4e4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4e48) {
            ctx->pc = 0x2B4E6Cu;
            goto label_2b4e6c;
        }
    }
    ctx->pc = 0x2B4E50u;
    // 0x2b4e50: 0x8f829bc8  lw          $v0, -0x6438($gp)
    ctx->pc = 0x2b4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b4e54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b4e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4e58: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x2b4e58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b4e5c: 0x8f829bc8  lw          $v0, -0x6438($gp)
    ctx->pc = 0x2b4e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b4e60: 0xac440114  sw          $a0, 0x114($v0)
    ctx->pc = 0x2b4e60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 4));
    // 0x2b4e64: 0x8f829bc8  lw          $v0, -0x6438($gp)
    ctx->pc = 0x2b4e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b4e68: 0xac440110  sw          $a0, 0x110($v0)
    ctx->pc = 0x2b4e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 4));
label_2b4e6c:
    // 0x2b4e6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b4e6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4e70:
    // 0x2b4e70: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2b4e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2b4e74: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x2B4E74u;
    SET_GPR_U32(ctx, 31, 0x2B4E7Cu);
    ctx->pc = 0x2B4E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4E74u;
            // 0x2b4e78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4E7Cu; }
        if (ctx->pc != 0x2B4E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4E7Cu; }
        if (ctx->pc != 0x2B4E7Cu) { return; }
    }
    ctx->pc = 0x2B4E7Cu;
label_2b4e7c:
    // 0x2b4e7c: 0x3c0301f1  lui         $v1, 0x1F1
    ctx->pc = 0x2b4e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)497 << 16));
    // 0x2b4e80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b4e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b4e84: 0x2463caa0  addiu       $v1, $v1, -0x3560
    ctx->pc = 0x2b4e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953632));
    // 0x2b4e88: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x2b4e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2b4e8c: 0x2a030007  slti        $v1, $s0, 0x7
    ctx->pc = 0x2b4e8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2b4e90: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2b4e90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2b4e94: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2B4E94u;
    {
        const bool branch_taken_0x2b4e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4E94u;
            // 0x2b4e98: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4e94) {
            ctx->pc = 0x2B4E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b4e70;
        }
    }
    ctx->pc = 0x2B4E9Cu;
    // 0x2b4e9c: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2b4e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2b4ea0: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x2b4ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x2b4ea4: 0x2484cc50  addiu       $a0, $a0, -0x33B0
    ctx->pc = 0x2b4ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954064));
    // 0x2b4ea8: 0xc0abf24  jal         func_2AFC90
    ctx->pc = 0x2B4EA8u;
    SET_GPR_U32(ctx, 31, 0x2B4EB0u);
    ctx->pc = 0x2B4EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4EA8u;
            // 0x2b4eac: 0x24a547c0  addiu       $a1, $a1, 0x47C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFC90u;
    if (runtime->hasFunction(0x2AFC90u)) {
        auto targetFn = runtime->lookupFunction(0x2AFC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4EB0u; }
        if (ctx->pc != 0x2B4EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuBGReadInfo2Malloc__FP9mgCMemoryPi_0x2afc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4EB0u; }
        if (ctx->pc != 0x2B4EB0u) { return; }
    }
    ctx->pc = 0x2B4EB0u;
label_2b4eb0:
    // 0x2b4eb0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b4eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b4eb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b4eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4eb8: 0xc08900c  jal         func_224030
    ctx->pc = 0x2B4EB8u;
    SET_GPR_U32(ctx, 31, 0x2B4EC0u);
    ctx->pc = 0x2B4EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4EB8u;
            // 0x2b4ebc: 0xaf809b7c  sw          $zero, -0x6484($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941564), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224030u;
    if (runtime->hasFunction(0x224030u)) {
        auto targetFn = runtime->lookupFunction(0x224030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4EC0u; }
        if (ctx->pc != 0x2B4EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainFrameModeSet__Fii_0x224030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4EC0u; }
        if (ctx->pc != 0x2B4EC0u) { return; }
    }
    ctx->pc = 0x2B4EC0u;
label_2b4ec0:
    // 0x2b4ec0: 0x8f849bc8  lw          $a0, -0x6438($gp)
    ctx->pc = 0x2b4ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b4ec4: 0xc0ac198  jal         func_2B0660
    ctx->pc = 0x2B4EC4u;
    SET_GPR_U32(ctx, 31, 0x2B4ECCu);
    ctx->pc = 0x2B4EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4EC4u;
            // 0x2b4ec8: 0x8e650020  lw          $a1, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B0660u;
    if (runtime->hasFunction(0x2B0660u)) {
        auto targetFn = runtime->lookupFunction(0x2B0660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4ECCu; }
        if (ctx->pc != 0x2B4ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterDataMenu__15CMenuChrCngMenuFPUc_0x2b0660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4ECCu; }
        if (ctx->pc != 0x2B4ECCu) { return; }
    }
    ctx->pc = 0x2B4ECCu;
label_2b4ecc:
    // 0x2b4ecc: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2b4eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2b4ed0: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2B4ED0u;
    SET_GPR_U32(ctx, 31, 0x2B4ED8u);
    ctx->pc = 0x2B4ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4ED0u;
            // 0x2b4ed4: 0x2484cc50  addiu       $a0, $a0, -0x33B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4ED8u; }
        if (ctx->pc != 0x2B4ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4ED8u; }
        if (ctx->pc != 0x2B4ED8u) { return; }
    }
    ctx->pc = 0x2B4ED8u;
label_2b4ed8:
    // 0x2b4ed8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2b4ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2b4edc: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2b4edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2b4ee0: 0x8c23cc78  lw          $v1, -0x3388($at)
    ctx->pc = 0x2b4ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954104)));
    // 0x2b4ee4: 0x2484cc80  addiu       $a0, $a0, -0x3380
    ctx->pc = 0x2b4ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954112));
    // 0x2b4ee8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2b4ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2b4eec: 0x8c25cc74  lw          $a1, -0x338C($at)
    ctx->pc = 0x2b4eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954100)));
    // 0x2b4ef0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2b4ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2b4ef4: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2b4ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b4ef8: 0x8c22cc70  lw          $v0, -0x3390($at)
    ctx->pc = 0x2b4ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954096)));
    // 0x2b4efc: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2b4efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2b4f00: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2B4F00u;
    SET_GPR_U32(ctx, 31, 0x2B4F08u);
    ctx->pc = 0x2B4F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4F00u;
            // 0x2b4f04: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4F08u; }
        if (ctx->pc != 0x2B4F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4F08u; }
        if (ctx->pc != 0x2B4F08u) { return; }
    }
    ctx->pc = 0x2B4F08u;
label_2b4f08:
    // 0x2b4f08: 0x8f849bc8  lw          $a0, -0x6438($gp)
    ctx->pc = 0x2b4f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b4f0c: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2b4f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
    // 0x2b4f10: 0x24a5cc80  addiu       $a1, $a1, -0x3380
    ctx->pc = 0x2b4f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954112));
    // 0x2b4f14: 0xc0ac31c  jal         func_2B0C70
    ctx->pc = 0x2B4F14u;
    SET_GPR_U32(ctx, 31, 0x2B4F1Cu);
    ctx->pc = 0x2B4F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4F14u;
            // 0x2b4f18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B0C70u;
    if (runtime->hasFunction(0x2B0C70u)) {
        auto targetFn = runtime->lookupFunction(0x2B0C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4F1Cu; }
        if (ctx->pc != 0x2B4F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadNPCFaceData__15CMenuChrCngMenuFP9mgCMemoryi_0x2b0c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4F1Cu; }
        if (ctx->pc != 0x2B4F1Cu) { return; }
    }
    ctx->pc = 0x2B4F1Cu;
label_2b4f1c:
    // 0x2b4f1c: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2b4f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2b4f20: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2B4F20u;
    SET_GPR_U32(ctx, 31, 0x2B4F28u);
    ctx->pc = 0x2B4F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4F20u;
            // 0x2b4f24: 0x2484cc80  addiu       $a0, $a0, -0x3380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4F28u; }
        if (ctx->pc != 0x2B4F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4F28u; }
        if (ctx->pc != 0x2B4F28u) { return; }
    }
    ctx->pc = 0x2B4F28u;
label_2b4f28:
    // 0x2b4f28: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2b4f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2b4f2c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2b4f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2b4f30: 0x8c23cca8  lw          $v1, -0x3358($at)
    ctx->pc = 0x2b4f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954152)));
    // 0x2b4f34: 0x2484dbf0  addiu       $a0, $a0, -0x2410
    ctx->pc = 0x2b4f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
    // 0x2b4f38: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2b4f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2b4f3c: 0x8c25cca4  lw          $a1, -0x335C($at)
    ctx->pc = 0x2b4f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954148)));
    // 0x2b4f40: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2b4f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2b4f44: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2b4f44u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b4f48: 0x8c22cca0  lw          $v0, -0x3360($at)
    ctx->pc = 0x2b4f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954144)));
    // 0x2b4f4c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2b4f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2b4f50: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2B4F50u;
    SET_GPR_U32(ctx, 31, 0x2B4F58u);
    ctx->pc = 0x2B4F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4F50u;
            // 0x2b4f54: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4F58u; }
        if (ctx->pc != 0x2B4F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4F58u; }
        if (ctx->pc != 0x2B4F58u) { return; }
    }
    ctx->pc = 0x2B4F58u;
label_2b4f58:
    // 0x2b4f58: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b4f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b4f5c: 0xa3809b71  sb          $zero, -0x648F($gp)
    ctx->pc = 0x2b4f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941553), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b4f60: 0xac20dc14  sw          $zero, -0x23EC($at)
    ctx->pc = 0x2b4f60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958100), GPR_U32(ctx, 0));
    // 0x2b4f64: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b4f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b4f68: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4F68u;
    {
        const bool branch_taken_0x2b4f68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4F68u;
            // 0x2b4f6c: 0xac20dc0c  sw          $zero, -0x23F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294958092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4f68) {
            ctx->pc = 0x2B4F78u;
            goto label_2b4f78;
        }
    }
    ctx->pc = 0x2B4F70u;
    // 0x2b4f70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4F70u;
    {
        const bool branch_taken_0x2b4f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4F70u;
            // 0x2b4f74: 0x8f829bc8  lw          $v0, -0x6438($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4f70) {
            ctx->pc = 0x2B4F84u;
            goto label_2b4f84;
        }
    }
    ctx->pc = 0x2B4F78u;
label_2b4f78:
    // 0x2b4f78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4f7c: 0xa3829b71  sb          $v0, -0x648F($gp)
    ctx->pc = 0x2b4f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941553), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b4f80: 0x8f829bc8  lw          $v0, -0x6438($gp)
    ctx->pc = 0x2b4f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
label_2b4f84:
    // 0x2b4f84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b4f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4f88: 0xa3839b70  sb          $v1, -0x6490($gp)
    ctx->pc = 0x2b4f88u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941552), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b4f8c: 0x84420014  lh          $v0, 0x14($v0)
    ctx->pc = 0x2b4f8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2b4f90: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4F90u;
    {
        const bool branch_taken_0x2b4f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B4F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4F90u;
            // 0x2b4f94: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4f90) {
            ctx->pc = 0x2B4FA0u;
            goto label_2b4fa0;
        }
    }
    ctx->pc = 0x2B4F98u;
    // 0x2b4f98: 0x16420019  bne         $s2, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2B4F98u;
    {
        const bool branch_taken_0x2b4f98 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b4f98) {
            ctx->pc = 0x2B5000u;
            goto label_2b5000;
        }
    }
    ctx->pc = 0x2B4FA0u;
label_2b4fa0:
    // 0x2b4fa0: 0xc088ff8  jal         func_223FE0
    ctx->pc = 0x2B4FA0u;
    SET_GPR_U32(ctx, 31, 0x2B4FA8u);
    ctx->pc = 0x223FE0u;
    if (runtime->hasFunction(0x223FE0u)) {
        auto targetFn = runtime->lookupFunction(0x223FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4FA8u; }
        if (ctx->pc != 0x2B4FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainFrameEndFlag__Fv_0x223fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4FA8u; }
        if (ctx->pc != 0x2B4FA8u) { return; }
    }
    ctx->pc = 0x2B4FA8u;
label_2b4fa8:
    // 0x2b4fa8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B4FA8u;
    {
        const bool branch_taken_0x2b4fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4fa8) {
            ctx->pc = 0x2B4FD8u;
            goto label_2b4fd8;
        }
    }
    ctx->pc = 0x2B4FB0u;
label_2b4fb0:
    // 0x2b4fb0: 0xc08903c  jal         func_2240F0
    ctx->pc = 0x2B4FB0u;
    SET_GPR_U32(ctx, 31, 0x2B4FB8u);
    ctx->pc = 0x2240F0u;
    if (runtime->hasFunction(0x2240F0u)) {
        auto targetFn = runtime->lookupFunction(0x2240F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4FB8u; }
        if (ctx->pc != 0x2B4FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainFrameStep__Fv_0x2240f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4FB8u; }
        if (ctx->pc != 0x2B4FB8u) { return; }
    }
    ctx->pc = 0x2B4FB8u;
label_2b4fb8:
    // 0x2b4fb8: 0xc088ff8  jal         func_223FE0
    ctx->pc = 0x2B4FB8u;
    SET_GPR_U32(ctx, 31, 0x2B4FC0u);
    ctx->pc = 0x223FE0u;
    if (runtime->hasFunction(0x223FE0u)) {
        auto targetFn = runtime->lookupFunction(0x223FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4FC0u; }
        if (ctx->pc != 0x2B4FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainFrameEndFlag__Fv_0x223fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4FC0u; }
        if (ctx->pc != 0x2B4FC0u) { return; }
    }
    ctx->pc = 0x2B4FC0u;
label_2b4fc0:
    // 0x2b4fc0: 0x0  nop
    ctx->pc = 0x2b4fc0u;
    // NOP
    // 0x2b4fc4: 0x0  nop
    ctx->pc = 0x2b4fc4u;
    // NOP
    // 0x2b4fc8: 0x0  nop
    ctx->pc = 0x2b4fc8u;
    // NOP
    // 0x2b4fcc: 0x0  nop
    ctx->pc = 0x2b4fccu;
    // NOP
    // 0x2b4fd0: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2B4FD0u;
    {
        const bool branch_taken_0x2b4fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4fd0) {
            ctx->pc = 0x2B4FB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b4fb0;
        }
    }
    ctx->pc = 0x2B4FD8u;
label_2b4fd8:
    // 0x2b4fd8: 0x8f849bc8  lw          $a0, -0x6438($gp)
    ctx->pc = 0x2b4fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b4fdc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b4fdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b4fe0: 0xc08e898  jal         func_23A260
    ctx->pc = 0x2B4FE0u;
    SET_GPR_U32(ctx, 31, 0x2B4FE8u);
    ctx->pc = 0x2B4FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4FE0u;
            // 0x2b4fe4: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4FE8u; }
        if (ctx->pc != 0x2B4FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4FE8u; }
        if (ctx->pc != 0x2B4FE8u) { return; }
    }
    ctx->pc = 0x2B4FE8u;
label_2b4fe8:
    // 0x2b4fe8: 0x8f849bc8  lw          $a0, -0x6438($gp)
    ctx->pc = 0x2b4fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b4fec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b4fecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b4ff0: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2B4FF0u;
    SET_GPR_U32(ctx, 31, 0x2B4FF8u);
    ctx->pc = 0x2B4FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4FF0u;
            // 0x2b4ff4: 0x24a5edb8  addiu       $a1, $a1, -0x1248 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4FF8u; }
        if (ctx->pc != 0x2B4FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4FF8u; }
        if (ctx->pc != 0x2B4FF8u) { return; }
    }
    ctx->pc = 0x2B4FF8u;
label_2b4ff8:
    // 0x2b4ff8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B4FF8u;
    {
        const bool branch_taken_0x2b4ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4FF8u;
            // 0x2b4ffc: 0x8f8294f8  lw          $v0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4ff8) {
            ctx->pc = 0x2B5020u;
            goto label_2b5020;
        }
    }
    ctx->pc = 0x2B5000u;
label_2b5000:
    // 0x2b5000: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x2b5000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2b5004: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b5004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5008: 0xc05f5fc  jal         func_17D7F0
    ctx->pc = 0x2B5008u;
    SET_GPR_U32(ctx, 31, 0x2B5010u);
    ctx->pc = 0x2B500Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5008u;
            // 0x2b500c: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5010u; }
        if (ctx->pc != 0x2B5010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5010u; }
        if (ctx->pc != 0x2B5010u) { return; }
    }
    ctx->pc = 0x2B5010u;
label_2b5010:
    // 0x2b5010: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x2b5010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2b5014: 0xc05f664  jal         func_17D990
    ctx->pc = 0x2B5014u;
    SET_GPR_U32(ctx, 31, 0x2B501Cu);
    ctx->pc = 0x2B5018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5014u;
            // 0x2b5018: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D990u;
    if (runtime->hasFunction(0x17D990u)) {
        auto targetFn = runtime->lookupFunction(0x17D990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B501Cu; }
        if (ctx->pc != 0x2B501Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeStep__10CFadeInOutFv_0x17d990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B501Cu; }
        if (ctx->pc != 0x2B501Cu) { return; }
    }
    ctx->pc = 0x2B501Cu;
label_2b501c:
    // 0x2b501c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2b501cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2b5020:
    // 0x2b5020: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b5020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b5024: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2b5024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b5028: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2b5028u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b502c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2b502cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2b5030: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x2b5030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
    // 0x2b5034: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x2b5034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x2b5038: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2B5038u;
    SET_GPR_U32(ctx, 31, 0x2B5040u);
    ctx->pc = 0x2B503Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5038u;
            // 0x2b503c: 0xa3809bb0  sb          $zero, -0x6450($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941616), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5040u; }
        if (ctx->pc != 0x2B5040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5040u; }
        if (ctx->pc != 0x2B5040u) { return; }
    }
    ctx->pc = 0x2B5040u;
label_2b5040:
    // 0x2b5040: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b5040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b5044: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b5044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5048: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b5048u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b504c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b504cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5050: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b5050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5054: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b5054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5058: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B505Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5058u;
            // 0x2b505c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B5060u;
}
