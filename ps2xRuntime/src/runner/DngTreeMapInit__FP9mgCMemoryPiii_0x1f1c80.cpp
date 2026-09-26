#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DngTreeMapInit__FP9mgCMemoryPiii
// Address: 0x1f1c80 - 0x1f2078
void DngTreeMapInit__FP9mgCMemoryPiii_0x1f1c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DngTreeMapInit__FP9mgCMemoryPiii_0x1f1c80");
#endif

    switch (ctx->pc) {
        case 0x1f1cd8u: goto label_1f1cd8;
        case 0x1f1ce4u: goto label_1f1ce4;
        case 0x1f1cf4u: goto label_1f1cf4;
        case 0x1f1d04u: goto label_1f1d04;
        case 0x1f1d14u: goto label_1f1d14;
        case 0x1f1d24u: goto label_1f1d24;
        case 0x1f1d2cu: goto label_1f1d2c;
        case 0x1f1da0u: goto label_1f1da0;
        case 0x1f1dc0u: goto label_1f1dc0;
        case 0x1f1dc8u: goto label_1f1dc8;
        case 0x1f1dd4u: goto label_1f1dd4;
        case 0x1f1e08u: goto label_1f1e08;
        case 0x1f1e18u: goto label_1f1e18;
        case 0x1f1e24u: goto label_1f1e24;
        case 0x1f1e44u: goto label_1f1e44;
        case 0x1f1e48u: goto label_1f1e48;
        case 0x1f1e60u: goto label_1f1e60;
        case 0x1f1e7cu: goto label_1f1e7c;
        case 0x1f1e8cu: goto label_1f1e8c;
        case 0x1f1ec8u: goto label_1f1ec8;
        case 0x1f1ef8u: goto label_1f1ef8;
        case 0x1f1f18u: goto label_1f1f18;
        case 0x1f1f28u: goto label_1f1f28;
        case 0x1f1f30u: goto label_1f1f30;
        case 0x1f1f5cu: goto label_1f1f5c;
        case 0x1f1f68u: goto label_1f1f68;
        case 0x1f1f78u: goto label_1f1f78;
        case 0x1f1f84u: goto label_1f1f84;
        case 0x1f1facu: goto label_1f1fac;
        case 0x1f1fb8u: goto label_1f1fb8;
        case 0x1f1fe0u: goto label_1f1fe0;
        case 0x1f2028u: goto label_1f2028;
        case 0x1f204cu: goto label_1f204c;
        default: break;
    }

    ctx->pc = 0x1f1c80u;

    // 0x1f1c80: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1f1c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1f1c84: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1f1c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1f1c88: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f1c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1f1c8c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f1c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1f1c90: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1f1c90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c94: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f1c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1f1c98: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1f1c98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c9c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f1c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f1ca0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1f1ca0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ca4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f1ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f1ca8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f1ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f1cac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f1cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f1cb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f1cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f1cb4: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x1f1cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1f1cb8: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x1f1cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1f1cbc: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1f1cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1f1cc0: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x1f1cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f1cc4: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1f1cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1f1cc8: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1f1cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1f1ccc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1f1cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f1cd0: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x1F1CD0u;
    SET_GPR_U32(ctx, 31, 0x1F1CD8u);
    ctx->pc = 0x1F1CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1CD0u;
            // 0x1f1cd4: 0x24848e00  addiu       $a0, $a0, -0x7200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1CD8u; }
        if (ctx->pc != 0x1F1CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1CD8u; }
        if (ctx->pc != 0x1F1CD8u) { return; }
    }
    ctx->pc = 0x1F1CD8u;
label_1f1cd8:
    // 0x1f1cd8: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1f1cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1f1cdc: 0xc04e780  jal         func_139E00
    ctx->pc = 0x1F1CDCu;
    SET_GPR_U32(ctx, 31, 0x1F1CE4u);
    ctx->pc = 0x1F1CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1CDCu;
            // 0x1f1ce0: 0x24848e00  addiu       $a0, $a0, -0x7200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1CE4u; }
        if (ctx->pc != 0x1F1CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1CE4u; }
        if (ctx->pc != 0x1F1CE4u) { return; }
    }
    ctx->pc = 0x1F1CE4u;
label_1f1ce4:
    // 0x1f1ce4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1f1ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1f1ce8: 0x24052c00  addiu       $a1, $zero, 0x2C00
    ctx->pc = 0x1f1ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11264));
    // 0x1f1cec: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1F1CECu;
    SET_GPR_U32(ctx, 31, 0x1F1CF4u);
    ctx->pc = 0x1F1CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1CECu;
            // 0x1f1cf0: 0x24848e00  addiu       $a0, $a0, -0x7200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1CF4u; }
        if (ctx->pc != 0x1F1CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1CF4u; }
        if (ctx->pc != 0x1F1CF4u) { return; }
    }
    ctx->pc = 0x1F1CF4u;
label_1f1cf4:
    // 0x1f1cf4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1f1cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1f1cf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f1cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1cfc: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x1F1CFCu;
    SET_GPR_U32(ctx, 31, 0x1F1D04u);
    ctx->pc = 0x1F1D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1CFCu;
            // 0x1f1d00: 0x3464bfe0  ori         $a0, $v1, 0xBFE0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49120);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1D04u; }
        if (ctx->pc != 0x1F1D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1D04u; }
        if (ctx->pc != 0x1F1D04u) { return; }
    }
    ctx->pc = 0x1F1D04u;
label_1f1d04:
    // 0x1f1d04: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1F1D04u;
    {
        const bool branch_taken_0x1f1d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1D04u;
            // 0x1f1d08: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1d04) {
            ctx->pc = 0x1F1DF8u;
            goto label_1f1df8;
        }
    }
    ctx->pc = 0x1F1D0Cu;
    // 0x1f1d0c: 0xc08dc2c  jal         func_2370B0
    ctx->pc = 0x1F1D0Cu;
    SET_GPR_U32(ctx, 31, 0x1F1D14u);
    ctx->pc = 0x1F1D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1D0Cu;
            // 0x1f1d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2370B0u;
    if (runtime->hasFunction(0x2370B0u)) {
        auto targetFn = runtime->lookupFunction(0x2370B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1D14u; }
        if (ctx->pc != 0x1F1D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CBaseMenuClassFv_0x2370b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1D14u; }
        if (ctx->pc != 0x1F1D14u) { return; }
    }
    ctx->pc = 0x1F1D14u;
label_1f1d14:
    // 0x1f1d14: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1f1d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1f1d18: 0x26110130  addiu       $s1, $s0, 0x130
    ctx->pc = 0x1f1d18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1f1d1c: 0x24425d00  addiu       $v0, $v0, 0x5D00
    ctx->pc = 0x1f1d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23808));
    // 0x1f1d20: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1f1d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1f1d24:
    // 0x1f1d24: 0xc0874b4  jal         func_21D2D0
    ctx->pc = 0x1F1D24u;
    SET_GPR_U32(ctx, 31, 0x1F1D2Cu);
    ctx->pc = 0x1F1D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1D24u;
            // 0x1f1d28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D2D0u;
    if (runtime->hasFunction(0x21D2D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1D2Cu; }
        if (ctx->pc != 0x1F1D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CDC2MesFv_0x21d2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1D2Cu; }
        if (ctx->pc != 0x1F1D2Cu) { return; }
    }
    ctx->pc = 0x1F1D2Cu;
label_1f1d2c:
    // 0x1f1d2c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1f1d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1f1d30: 0x263122d0  addiu       $s1, $s1, 0x22D0
    ctx->pc = 0x1f1d30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8912));
    // 0x1f1d34: 0x344217b0  ori         $v0, $v0, 0x17B0
    ctx->pc = 0x1f1d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6064);
    // 0x1f1d38: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f1d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f1d3c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1f1d3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f1d40: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F1D40u;
    {
        const bool branch_taken_0x1f1d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1d40) {
            ctx->pc = 0x1F1D24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f1d24;
        }
    }
    ctx->pc = 0x1F1D48u;
    // 0x1f1d48: 0xa600011a  sh          $zero, 0x11A($s0)
    ctx->pc = 0x1f1d48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 282), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1d4c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1d50: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x1f1d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x1f1d54: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1d54u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f1d58: 0xac2017b0  sw          $zero, 0x17B0($at)
    ctx->pc = 0x1f1d58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6064), GPR_U32(ctx, 0));
    // 0x1f1d5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1d60: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1d64: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x1f1d64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1d68: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1d68u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f1d6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f1d6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d70: 0xac2217c0  sw          $v0, 0x17C0($at)
    ctx->pc = 0x1f1d70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6080), GPR_U32(ctx, 2));
    // 0x1f1d74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f1d74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d78: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1d7c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f1d7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d80: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1d80u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f1d84: 0xac2017b8  sw          $zero, 0x17B8($at)
    ctx->pc = 0x1f1d84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6072), GPR_U32(ctx, 0));
    // 0x1f1d88: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1d8c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f1d90: 0xac2017bc  sw          $zero, 0x17BC($at)
    ctx->pc = 0x1f1d90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6076), GPR_U32(ctx, 0));
    // 0x1f1d94: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1d98: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1d98u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f1d9c: 0xa02017c4  sb          $zero, 0x17C4($at)
    ctx->pc = 0x1f1d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6084), (uint8_t)GPR_U32(ctx, 0));
label_1f1da0:
    // 0x1f1da0: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1f1da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1f1da4: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x1f1da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1f1da8: 0x24428dc0  addiu       $v0, $v0, -0x7240
    ctx->pc = 0x1f1da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938048));
    // 0x1f1dac: 0x24630130  addiu       $v1, $v1, 0x130
    ctx->pc = 0x1f1dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
    // 0x1f1db0: 0x53a021  addu        $s4, $v0, $s3
    ctx->pc = 0x1f1db0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f1db4: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1f1db4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x1f1db8: 0xc07c820  jal         func_1F2080
    ctx->pc = 0x1F1DB8u;
    SET_GPR_U32(ctx, 31, 0x1F1DC0u);
    ctx->pc = 0x1F1DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1DB8u;
            // 0x1f1dbc: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F2080u;
    if (runtime->hasFunction(0x1F2080u)) {
        auto targetFn = runtime->lookupFunction(0x1F2080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1DC0u; }
        if (ctx->pc != 0x1F1DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__6ClsMesFv_0x1f2080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1DC0u; }
        if (ctx->pc != 0x1F1DC0u) { return; }
    }
    ctx->pc = 0x1F1DC0u;
label_1f1dc0:
    // 0x1f1dc0: 0xc065a18  jal         func_196860
    ctx->pc = 0x1F1DC0u;
    SET_GPR_U32(ctx, 31, 0x1F1DC8u);
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1DC8u; }
        if (ctx->pc != 0x1F1DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1DC8u; }
        if (ctx->pc != 0x1F1DC8u) { return; }
    }
    ctx->pc = 0x1F1DC8u;
label_1f1dc8:
    // 0x1f1dc8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1f1dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1f1dcc: 0xc054bac  jal         func_152EB0
    ctx->pc = 0x1F1DCCu;
    SET_GPR_U32(ctx, 31, 0x1F1DD4u);
    ctx->pc = 0x1F1DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1DCCu;
            // 0x1f1dd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EB0u;
    if (runtime->hasFunction(0x152EB0u)) {
        auto targetFn = runtime->lookupFunction(0x152EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1DD4u; }
        if (ctx->pc != 0x1F1DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff_system__6ClsMesFPs_0x152eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1DD4u; }
        if (ctx->pc != 0x1F1DD4u) { return; }
    }
    ctx->pc = 0x1F1DD4u;
label_1f1dd4:
    // 0x1f1dd4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f1dd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f1dd8: 0x265222d0  addiu       $s2, $s2, 0x22D0
    ctx->pc = 0x1f1dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8912));
    // 0x1f1ddc: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x1f1ddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1f1de0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F1DE0u;
    {
        const bool branch_taken_0x1f1de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1DE0u;
            // 0x1f1de4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1de0) {
            ctx->pc = 0x1F1DA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f1da0;
        }
    }
    ctx->pc = 0x1F1DE8u;
    // 0x1f1de8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f1de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f1dec: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1f1decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f1df0: 0x8c228dc4  lw          $v0, -0x723C($at)
    ctx->pc = 0x1f1df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938052)));
    // 0x1f1df4: 0xac431ad4  sw          $v1, 0x1AD4($v0)
    ctx->pc = 0x1f1df4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6868), GPR_U32(ctx, 3));
label_1f1df8:
    // 0x1f1df8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1f1df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1e00: 0xc08dc6c  jal         func_2371B0
    ctx->pc = 0x1F1E00u;
    SET_GPR_U32(ctx, 31, 0x1F1E08u);
    ctx->pc = 0x1F1E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1E00u;
            // 0x1f1e04: 0xaf908f28  sw          $s0, -0x70D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938408), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2371B0u;
    if (runtime->hasFunction(0x2371B0u)) {
        auto targetFn = runtime->lookupFunction(0x2371B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1E08u; }
        if (ctx->pc != 0x1F1E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexBlock__14CBaseMenuClassFPi_0x2371b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1E08u; }
        if (ctx->pc != 0x1F1E08u) { return; }
    }
    ctx->pc = 0x1F1E08u;
label_1f1e08:
    // 0x1f1e08: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1f1e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1f1e0c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1f1e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1f1e10: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1F1E10u;
    SET_GPR_U32(ctx, 31, 0x1F1E18u);
    ctx->pc = 0x1F1E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1E10u;
            // 0x1f1e14: 0x24848e00  addiu       $a0, $a0, -0x7200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1E18u; }
        if (ctx->pc != 0x1F1E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1E18u; }
        if (ctx->pc != 0x1F1E18u) { return; }
    }
    ctx->pc = 0x1F1E18u;
label_1f1e18:
    // 0x1f1e18: 0x24040110  addiu       $a0, $zero, 0x110
    ctx->pc = 0x1f1e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x1f1e1c: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x1F1E1Cu;
    SET_GPR_U32(ctx, 31, 0x1F1E24u);
    ctx->pc = 0x1F1E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1E1Cu;
            // 0x1f1e20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1E24u; }
        if (ctx->pc != 0x1F1E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1E24u; }
        if (ctx->pc != 0x1F1E24u) { return; }
    }
    ctx->pc = 0x1F1E24u;
label_1f1e24:
    // 0x1f1e24: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F1E24u;
    {
        const bool branch_taken_0x1f1e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1E24u;
            // 0x1f1e28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1e24) {
            ctx->pc = 0x1F1E7Cu;
            goto label_1f1e7c;
        }
    }
    ctx->pc = 0x1F1E2Cu;
    // 0x1f1e2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f1e2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1e30: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1f1e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1f1e34: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1f1e34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1f1e38: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1f1e38u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1f1e3c: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x1F1E3Cu;
    SET_GPR_U32(ctx, 31, 0x1F1E44u);
    ctx->pc = 0x1F1E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1E3Cu;
            // 0x1f1e40: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1E44u; }
        if (ctx->pc != 0x1F1E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1E44u; }
        if (ctx->pc != 0x1F1E44u) { return; }
    }
    ctx->pc = 0x1F1E44u;
label_1f1e44:
    // 0x1f1e44: 0x26110040  addiu       $s1, $s0, 0x40
    ctx->pc = 0x1f1e44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1f1e48:
    // 0x1f1e48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f1e48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1e4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f1e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1e50: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1f1e50u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1f1e54: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1f1e54u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1f1e58: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x1F1E58u;
    SET_GPR_U32(ctx, 31, 0x1F1E60u);
    ctx->pc = 0x1F1E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1E58u;
            // 0x1f1e5c: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1E60u; }
        if (ctx->pc != 0x1F1E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1E60u; }
        if (ctx->pc != 0x1F1E60u) { return; }
    }
    ctx->pc = 0x1F1E60u;
label_1f1e60:
    // 0x1f1e60: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1f1e60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1f1e64: 0x260200c0  addiu       $v0, $s0, 0xC0
    ctx->pc = 0x1f1e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x1f1e68: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1f1e68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f1e6c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1F1E6Cu;
    {
        const bool branch_taken_0x1f1e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1E6Cu;
            // 0x1f1e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1e6c) {
            ctx->pc = 0x1F1E48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f1e48;
        }
    }
    ctx->pc = 0x1F1E74u;
    // 0x1f1e74: 0xc07a9d8  jal         func_1EA760
    ctx->pc = 0x1F1E74u;
    SET_GPR_U32(ctx, 31, 0x1F1E7Cu);
    ctx->pc = 0x1EA760u;
    if (runtime->hasFunction(0x1EA760u)) {
        auto targetFn = runtime->lookupFunction(0x1EA760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1E7Cu; }
        if (ctx->pc != 0x1F1E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CDngFreeMapFv_0x1ea760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1E7Cu; }
        if (ctx->pc != 0x1F1E7Cu) { return; }
    }
    ctx->pc = 0x1F1E7Cu;
label_1f1e7c:
    // 0x1f1e7c: 0x8f8294b8  lw          $v0, -0x6B48($gp)
    ctx->pc = 0x1f1e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939832)));
    // 0x1f1e80: 0xaf908eb0  sw          $s0, -0x7150($gp)
    ctx->pc = 0x1f1e80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938288), GPR_U32(ctx, 16));
    // 0x1f1e84: 0xc08caa8  jal         func_232AA0
    ctx->pc = 0x1F1E84u;
    SET_GPR_U32(ctx, 31, 0x1F1E8Cu);
    ctx->pc = 0x1F1E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1E84u;
            // 0x1f1e88: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232AA0u;
    if (runtime->hasFunction(0x232AA0u)) {
        auto targetFn = runtime->lookupFunction(0x232AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1E8Cu; }
        if (ctx->pc != 0x1F1E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_GetBattleAreaScene__Fv_0x232aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1E8Cu; }
        if (ctx->pc != 0x1F1E8Cu) { return; }
    }
    ctx->pc = 0x1F1E8Cu;
label_1f1e8c:
    // 0x1f1e8c: 0x8f838eb0  lw          $v1, -0x7150($gp)
    ctx->pc = 0x1f1e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
    // 0x1f1e90: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x1f1e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1f1e94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f1e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f1e98: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1f1e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1f1e9c: 0xa7808f04  sh          $zero, -0x70FC($gp)
    ctx->pc = 0x1f1e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938372), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1ea0: 0xaf808ed4  sw          $zero, -0x712C($gp)
    ctx->pc = 0x1f1ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938324), GPR_U32(ctx, 0));
    // 0x1f1ea4: 0x12c20005  beq         $s6, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1EA4u;
    {
        const bool branch_taken_0x1f1ea4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F1EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1EA4u;
            // 0x1f1ea8: 0xaf808ebc  sw          $zero, -0x7144($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ea4) {
            ctx->pc = 0x1F1EBCu;
            goto label_1f1ebc;
        }
    }
    ctx->pc = 0x1F1EACu;
    // 0x1f1eac: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1EACu;
    {
        const bool branch_taken_0x1f1eac = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1eac) {
            ctx->pc = 0x1F1EBCu;
            goto label_1f1ebc;
        }
    }
    ctx->pc = 0x1F1EB4u;
    // 0x1f1eb4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1F1EB4u;
    {
        const bool branch_taken_0x1f1eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1EB4u;
            // 0x1f1eb8: 0x8f8294f8  lw          $v0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1eb4) {
            ctx->pc = 0x1F1F8Cu;
            goto label_1f1f8c;
        }
    }
    ctx->pc = 0x1F1EBCu;
label_1f1ebc:
    // 0x1f1ebc: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1f1ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1f1ec0: 0xc04e780  jal         func_139E00
    ctx->pc = 0x1F1EC0u;
    SET_GPR_U32(ctx, 31, 0x1F1EC8u);
    ctx->pc = 0x1F1EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1EC0u;
            // 0x1f1ec4: 0x24848e00  addiu       $a0, $a0, -0x7200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1EC8u; }
        if (ctx->pc != 0x1F1EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1EC8u; }
        if (ctx->pc != 0x1F1EC8u) { return; }
    }
    ctx->pc = 0x1F1EC8u;
label_1f1ec8:
    // 0x1f1ec8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f1ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f1ecc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1f1eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1f1ed0: 0x8c238e24  lw          $v1, -0x71DC($at)
    ctx->pc = 0x1f1ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938148)));
    // 0x1f1ed4: 0x24848900  addiu       $a0, $a0, -0x7700
    ctx->pc = 0x1f1ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936832));
    // 0x1f1ed8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f1ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f1edc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f1edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1f1ee0: 0x8c228e20  lw          $v0, -0x71E0($at)
    ctx->pc = 0x1f1ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938144)));
    // 0x1f1ee4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f1ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f1ee8: 0xaf828f24  sw          $v0, -0x70DC($gp)
    ctx->pc = 0x1f1ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938404), GPR_U32(ctx, 2));
    // 0x1f1eec: 0x8f858f24  lw          $a1, -0x70DC($gp)
    ctx->pc = 0x1f1eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938404)));
    // 0x1f1ef0: 0xc094440  jal         func_251100
    ctx->pc = 0x1F1EF0u;
    SET_GPR_U32(ctx, 31, 0x1F1EF8u);
    ctx->pc = 0x1F1EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1EF0u;
            // 0x1f1ef4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1EF8u; }
        if (ctx->pc != 0x1F1EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1EF8u; }
        if (ctx->pc != 0x1F1EF8u) { return; }
    }
    ctx->pc = 0x1F1EF8u;
label_1f1ef8:
    // 0x1f1ef8: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x1f1ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1f1efc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1EFCu;
    {
        const bool branch_taken_0x1f1efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1EFCu;
            // 0x1f1f00: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1efc) {
            ctx->pc = 0x1F1F0Cu;
            goto label_1f1f0c;
        }
    }
    ctx->pc = 0x1F1F04u;
    // 0x1f1f04: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1f1f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1f1f08: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1f1f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f1f0c:
    // 0x1f1f0c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1f1f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1f1f10: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1F1F10u;
    SET_GPR_U32(ctx, 31, 0x1F1F18u);
    ctx->pc = 0x1F1F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1F10u;
            // 0x1f1f14: 0x24848e00  addiu       $a0, $a0, -0x7200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1F18u; }
        if (ctx->pc != 0x1F1F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1F18u; }
        if (ctx->pc != 0x1F1F18u) { return; }
    }
    ctx->pc = 0x1F1F18u;
label_1f1f18:
    // 0x1f1f18: 0x8f848f28  lw          $a0, -0x70D8($gp)
    ctx->pc = 0x1f1f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
    // 0x1f1f1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f1f1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1f20: 0xc08e898  jal         func_23A260
    ctx->pc = 0x1F1F20u;
    SET_GPR_U32(ctx, 31, 0x1F1F28u);
    ctx->pc = 0x1F1F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1F20u;
            // 0x1f1f24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1F28u; }
        if (ctx->pc != 0x1F1F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1F28u; }
        if (ctx->pc != 0x1F1F28u) { return; }
    }
    ctx->pc = 0x1F1F28u;
label_1f1f28:
    // 0x1f1f28: 0xc064268  jal         func_1909A0
    ctx->pc = 0x1F1F28u;
    SET_GPR_U32(ctx, 31, 0x1F1F30u);
    ctx->pc = 0x1909A0u;
    if (runtime->hasFunction(0x1909A0u)) {
        auto targetFn = runtime->lookupFunction(0x1909A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1F30u; }
        if (ctx->pc != 0x1F1F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowLoopNo__Fv_0x1909a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1F30u; }
        if (ctx->pc != 0x1F1F30u) { return; }
    }
    ctx->pc = 0x1F1F30u;
label_1f1f30:
    // 0x1f1f30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f1f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1f34: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1F34u;
    {
        const bool branch_taken_0x1f1f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f1f34) {
            ctx->pc = 0x1F1F44u;
            goto label_1f1f44;
        }
    }
    ctx->pc = 0x1F1F3Cu;
    // 0x1f1f3c: 0x16c00028  bnez        $s6, . + 4 + (0x28 << 2)
    ctx->pc = 0x1F1F3Cu;
    {
        const bool branch_taken_0x1f1f3c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1f3c) {
            ctx->pc = 0x1F1FE0u;
            goto label_1f1fe0;
        }
    }
    ctx->pc = 0x1F1F44u;
label_1f1f44:
    // 0x1f1f44: 0x8f828eb0  lw          $v0, -0x7150($gp)
    ctx->pc = 0x1f1f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
    // 0x1f1f48: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x1f1f48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x1f1f4c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f1f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1f50: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1f1f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f1f54: 0xc0be52c  jal         func_2F94B0
    ctx->pc = 0x1F1F54u;
    SET_GPR_U32(ctx, 31, 0x1F1F5Cu);
    ctx->pc = 0x1F1F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1F54u;
            // 0x1f1f58: 0x24c68e00  addiu       $a2, $a2, -0x7200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F94B0u;
    if (runtime->hasFunction(0x2F94B0u)) {
        auto targetFn = runtime->lookupFunction(0x2F94B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1F5Cu; }
        if (ctx->pc != 0x1F1F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadDataTable__16CDngFloorManagerFiP9mgCMemory_0x2f94b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1F5Cu; }
        if (ctx->pc != 0x1F1F5Cu) { return; }
    }
    ctx->pc = 0x1F1F5Cu;
label_1f1f5c:
    // 0x1f1f5c: 0x8f828eb0  lw          $v0, -0x7150($gp)
    ctx->pc = 0x1f1f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
    // 0x1f1f60: 0xc0be7cc  jal         func_2F9F30
    ctx->pc = 0x1F1F60u;
    SET_GPR_U32(ctx, 31, 0x1F1F68u);
    ctx->pc = 0x1F1F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1F60u;
            // 0x1f1f64: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9F30u;
    if (runtime->hasFunction(0x2F9F30u)) {
        auto targetFn = runtime->lookupFunction(0x2F9F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1F68u; }
        if (ctx->pc != 0x1F1F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDrawGlidInfo__16CDngFloorManagerFv_0x2f9f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1F68u; }
        if (ctx->pc != 0x1F1F68u) { return; }
    }
    ctx->pc = 0x1F1F68u;
label_1f1f68:
    // 0x1f1f68: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1f1f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1f1f6c: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1f1f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1f1f70: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1F1F70u;
    SET_GPR_U32(ctx, 31, 0x1F1F78u);
    ctx->pc = 0x1F1F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1F70u;
            // 0x1f1f74: 0x24848e00  addiu       $a0, $a0, -0x7200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1F78u; }
        if (ctx->pc != 0x1F1F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1F78u; }
        if (ctx->pc != 0x1F1F78u) { return; }
    }
    ctx->pc = 0x1F1F78u;
label_1f1f78:
    // 0x1f1f78: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1f1f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1f1f7c: 0xc04e780  jal         func_139E00
    ctx->pc = 0x1F1F7Cu;
    SET_GPR_U32(ctx, 31, 0x1F1F84u);
    ctx->pc = 0x1F1F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1F7Cu;
            // 0x1f1f80: 0x24848e00  addiu       $a0, $a0, -0x7200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1F84u; }
        if (ctx->pc != 0x1F1F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1F84u; }
        if (ctx->pc != 0x1F1F84u) { return; }
    }
    ctx->pc = 0x1F1F84u;
label_1f1f84:
    // 0x1f1f84: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F1F84u;
    {
        const bool branch_taken_0x1f1f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1F84u;
            // 0x1f1f88: 0xa3808eb4  sb          $zero, -0x714C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294938292), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f84) {
            ctx->pc = 0x1F1FE4u;
            goto label_1f1fe4;
        }
    }
    ctx->pc = 0x1F1F8Cu;
label_1f1f8c:
    // 0x1f1f8c: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x1f1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x1f1f90: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1F90u;
    {
        const bool branch_taken_0x1f1f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1f90) {
            ctx->pc = 0x1F1F9Cu;
            goto label_1f1f9c;
        }
    }
    ctx->pc = 0x1F1F98u;
    // 0x1f1f98: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1f1f98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_1f1f9c:
    // 0x1f1f9c: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x1f1f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x1f1fa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f1fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fa4: 0xc08f078  jal         func_23C1E0
    ctx->pc = 0x1F1FA4u;
    SET_GPR_U32(ctx, 31, 0x1F1FACu);
    ctx->pc = 0x1F1FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1FA4u;
            // 0x1f1fa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C1E0u;
    if (runtime->hasFunction(0x23C1E0u)) {
        auto targetFn = runtime->lookupFunction(0x23C1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1FACu; }
        if (ctx->pc != 0x1F1FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVibeCnt__12CMenuKeyFuncFii_0x23c1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1FACu; }
        if (ctx->pc != 0x1F1FACu) { return; }
    }
    ctx->pc = 0x1F1FACu;
label_1f1fac:
    // 0x1f1fac: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x1f1facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x1f1fb0: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x1F1FB0u;
    SET_GPR_U32(ctx, 31, 0x1F1FB8u);
    ctx->pc = 0x1F1FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1FB0u;
            // 0x1f1fb4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C0B0u;
    if (runtime->hasFunction(0x23C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x23C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1FB8u; }
        if (ctx->pc != 0x1F1FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuType__12CMenuKeyFuncFi_0x23c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1FB8u; }
        if (ctx->pc != 0x1F1FB8u) { return; }
    }
    ctx->pc = 0x1F1FB8u;
label_1f1fb8:
    // 0x1f1fb8: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x1f1fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x1f1fbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f1fbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1fc0: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1f1fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1fc4: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x1f1fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x1f1fc8: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x1f1fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
    // 0x1f1fcc: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x1f1fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x1f1fd0: 0xac400074  sw          $zero, 0x74($v0)
    ctx->pc = 0x1f1fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
    // 0x1f1fd4: 0x8f848f28  lw          $a0, -0x70D8($gp)
    ctx->pc = 0x1f1fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
    // 0x1f1fd8: 0xc08e898  jal         func_23A260
    ctx->pc = 0x1F1FD8u;
    SET_GPR_U32(ctx, 31, 0x1F1FE0u);
    ctx->pc = 0x1F1FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1FD8u;
            // 0x1f1fdc: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1FE0u; }
        if (ctx->pc != 0x1F1FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1FE0u; }
        if (ctx->pc != 0x1F1FE0u) { return; }
    }
    ctx->pc = 0x1F1FE0u;
label_1f1fe0:
    // 0x1f1fe0: 0xa3808eb4  sb          $zero, -0x714C($gp)
    ctx->pc = 0x1f1fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938292), (uint8_t)GPR_U32(ctx, 0));
label_1f1fe4:
    // 0x1f1fe4: 0xa3808eb8  sb          $zero, -0x7148($gp)
    ctx->pc = 0x1f1fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938296), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1fe8: 0x6a00004  bltz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1FE8u;
    {
        const bool branch_taken_0x1f1fe8 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x1F1FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1FE8u;
            // 0x1f1fec: 0xa7808f10  sh          $zero, -0x70F0($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294938384), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1fe8) {
            ctx->pc = 0x1F1FFCu;
            goto label_1f1ffc;
        }
    }
    ctx->pc = 0x1F1FF0u;
    // 0x1f1ff0: 0x2aa10007  slti        $at, $s5, 0x7
    ctx->pc = 0x1f1ff0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1f1ff4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1FF4u;
    {
        const bool branch_taken_0x1f1ff4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1ff4) {
            ctx->pc = 0x1F2000u;
            goto label_1f2000;
        }
    }
    ctx->pc = 0x1F1FFCu;
label_1f1ffc:
    // 0x1f1ffc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1f1ffcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2000:
    // 0x1f2000: 0x8f828f28  lw          $v0, -0x70D8($gp)
    ctx->pc = 0x1f2000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
    // 0x1f2004: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f2004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f2008: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1f2008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f200c: 0x24a58910  addiu       $a1, $a1, -0x76F0
    ctx->pc = 0x1f200cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936848));
    // 0x1f2010: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1f2010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2014: 0xa4550118  sh          $s5, 0x118($v0)
    ctx->pc = 0x1f2014u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 21));
    // 0x1f2018: 0x8f828eb0  lw          $v0, -0x7150($gp)
    ctx->pc = 0x1f2018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
    // 0x1f201c: 0xa455000a  sh          $s5, 0xA($v0)
    ctx->pc = 0x1f201cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 21));
    // 0x1f2020: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1F2020u;
    SET_GPR_U32(ctx, 31, 0x1F2028u);
    ctx->pc = 0x1F2024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2020u;
            // 0x1f2024: 0xa3958148  sb          $s5, -0x7EB8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294934856), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2028u; }
        if (ctx->pc != 0x1F2028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2028u; }
        if (ctx->pc != 0x1F2028u) { return; }
    }
    ctx->pc = 0x1F2028u;
label_1f2028:
    // 0x1f2028: 0xdf838f58  ld          $v1, -0x70A8($gp)
    ctx->pc = 0x1f2028u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294938456)));
    // 0x1f202c: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x1f202cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1f2030: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1f2030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1f2034: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1f2034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f2038: 0x24848e00  addiu       $a0, $a0, -0x7200
    ctx->pc = 0x1f2038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938112));
    // 0x1f203c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f203cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2040: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x1f2040u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x1f2044: 0xc094470  jal         func_2511C0
    ctx->pc = 0x1F2044u;
    SET_GPR_U32(ctx, 31, 0x1F204Cu);
    ctx->pc = 0x1F2048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2044u;
            // 0x1f2048: 0xafa200b8  sw          $v0, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2511C0u;
    if (runtime->hasFunction(0x2511C0u)) {
        auto targetFn = runtime->lookupFunction(0x2511C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F204Cu; }
        if (ctx->pc != 0x1F204Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCommonReadData__FP9mgCMemoryPPci_0x2511c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F204Cu; }
        if (ctx->pc != 0x1F204Cu) { return; }
    }
    ctx->pc = 0x1F204Cu;
label_1f204c:
    // 0x1f204c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1f204cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f2050: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f2050u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f2054: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f2054u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f2058: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f2058u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f205c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f205cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f2060: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f2060u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f2064: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f2064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2068: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f2068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f206c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f206cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2070: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2070u;
            // 0x1f2074: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F2078u;
}
