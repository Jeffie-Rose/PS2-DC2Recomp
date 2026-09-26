#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuManualInit__FP9mgCMemoryPii
// Address: 0x2bfe70 - 0x2c0338
void MenuManualInit__FP9mgCMemoryPii_0x2bfe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuManualInit__FP9mgCMemoryPii_0x2bfe70");
#endif

    switch (ctx->pc) {
        case 0x2bfec8u: goto label_2bfec8;
        case 0x2bfed8u: goto label_2bfed8;
        case 0x2bfee8u: goto label_2bfee8;
        case 0x2bfefcu: goto label_2bfefc;
        case 0x2bff08u: goto label_2bff08;
        case 0x2bff18u: goto label_2bff18;
        case 0x2bff2cu: goto label_2bff2c;
        case 0x2bff5cu: goto label_2bff5c;
        case 0x2bff6cu: goto label_2bff6c;
        case 0x2bff74u: goto label_2bff74;
        case 0x2bff90u: goto label_2bff90;
        case 0x2bffa4u: goto label_2bffa4;
        case 0x2bffc0u: goto label_2bffc0;
        case 0x2bffd8u: goto label_2bffd8;
        case 0x2c000cu: goto label_2c000c;
        case 0x2c0024u: goto label_2c0024;
        case 0x2c0040u: goto label_2c0040;
        case 0x2c004cu: goto label_2c004c;
        case 0x2c007cu: goto label_2c007c;
        case 0x2c0084u: goto label_2c0084;
        case 0x2c0094u: goto label_2c0094;
        case 0x2c00a8u: goto label_2c00a8;
        case 0x2c00c4u: goto label_2c00c4;
        case 0x2c00d0u: goto label_2c00d0;
        case 0x2c00f4u: goto label_2c00f4;
        case 0x2c0108u: goto label_2c0108;
        case 0x2c011cu: goto label_2c011c;
        case 0x2c012cu: goto label_2c012c;
        case 0x2c013cu: goto label_2c013c;
        case 0x2c014cu: goto label_2c014c;
        case 0x2c0154u: goto label_2c0154;
        case 0x2c0180u: goto label_2c0180;
        case 0x2c0190u: goto label_2c0190;
        case 0x2c01d0u: goto label_2c01d0;
        case 0x2c01e0u: goto label_2c01e0;
        case 0x2c0270u: goto label_2c0270;
        case 0x2c0284u: goto label_2c0284;
        case 0x2c02c4u: goto label_2c02c4;
        case 0x2c02ccu: goto label_2c02cc;
        case 0x2c0304u: goto label_2c0304;
        default: break;
    }

    ctx->pc = 0x2bfe70u;

    // 0x2bfe70: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2bfe70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2bfe74: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2bfe74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2bfe78: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2bfe78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2bfe7c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2bfe7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2bfe80: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2bfe80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2bfe84: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2bfe84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2bfe88: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2bfe88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2bfe8c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2bfe8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2bfe90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2bfe90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2bfe94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bfe94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2bfe98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2bfe98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2bfe9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bfe9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfea0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bfea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfea4: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2bfea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2bfea8: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x2bfea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2bfeac: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2bfeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2bfeb0: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2bfeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2bfeb4: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2bfeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2bfeb8: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2bfeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2bfebc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2bfebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bfec0: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2BFEC0u;
    SET_GPR_U32(ctx, 31, 0x2BFEC8u);
    ctx->pc = 0x2BFEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFEC0u;
            // 0x2bfec4: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFEC8u; }
        if (ctx->pc != 0x2BFEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFEC8u; }
        if (ctx->pc != 0x2BFEC8u) { return; }
    }
    ctx->pc = 0x2BFEC8u;
label_2bfec8:
    // 0x2bfec8: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2bfec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2bfecc: 0x24052396  addiu       $a1, $zero, 0x2396
    ctx->pc = 0x2bfeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9110));
    // 0x2bfed0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2BFED0u;
    SET_GPR_U32(ctx, 31, 0x2BFED8u);
    ctx->pc = 0x2BFED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFED0u;
            // 0x2bfed4: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFED8u; }
        if (ctx->pc != 0x2BFED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFED8u; }
        if (ctx->pc != 0x2BFED8u) { return; }
    }
    ctx->pc = 0x2BFED8u;
label_2bfed8:
    // 0x2bfed8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2bfed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2bfedc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bfedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfee0: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2BFEE0u;
    SET_GPR_U32(ctx, 31, 0x2BFEE8u);
    ctx->pc = 0x2BFEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFEE0u;
            // 0x2bfee4: 0x34643940  ori         $a0, $v1, 0x3940 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14656);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFEE8u; }
        if (ctx->pc != 0x2BFEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFEE8u; }
        if (ctx->pc != 0x2BFEE8u) { return; }
    }
    ctx->pc = 0x2BFEE8u;
label_2bfee8:
    // 0x2bfee8: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2bfee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2bfeec: 0xaf829c4c  sw          $v0, -0x63B4($gp)
    ctx->pc = 0x2bfeecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941772), GPR_U32(ctx, 2));
    // 0x2bfef0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2bfef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2bfef4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2BFEF4u;
    SET_GPR_U32(ctx, 31, 0x2BFEFCu);
    ctx->pc = 0x2BFEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFEF4u;
            // 0x2bfef8: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFEFCu; }
        if (ctx->pc != 0x2BFEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFEFCu; }
        if (ctx->pc != 0x2BFEFCu) { return; }
    }
    ctx->pc = 0x2BFEFCu;
label_2bfefc:
    // 0x2bfefc: 0x24040178  addiu       $a0, $zero, 0x178
    ctx->pc = 0x2bfefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
    // 0x2bff00: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2BFF00u;
    SET_GPR_U32(ctx, 31, 0x2BFF08u);
    ctx->pc = 0x2BFF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFF00u;
            // 0x2bff04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF08u; }
        if (ctx->pc != 0x2BFF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF08u; }
        if (ctx->pc != 0x2BFF08u) { return; }
    }
    ctx->pc = 0x2BFF08u;
label_2bff08:
    // 0x2bff08: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2BFF08u;
    {
        const bool branch_taken_0x2bff08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFF08u;
            // 0x2bff0c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff08) {
            ctx->pc = 0x2BFF5Cu;
            goto label_2bff5c;
        }
    }
    ctx->pc = 0x2BFF10u;
    // 0x2bff10: 0xc08dc2c  jal         func_2370B0
    ctx->pc = 0x2BFF10u;
    SET_GPR_U32(ctx, 31, 0x2BFF18u);
    ctx->pc = 0x2BFF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFF10u;
            // 0x2bff14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2370B0u;
    if (runtime->hasFunction(0x2370B0u)) {
        auto targetFn = runtime->lookupFunction(0x2370B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF18u; }
        if (ctx->pc != 0x2BFF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CBaseMenuClassFv_0x2370b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF18u; }
        if (ctx->pc != 0x2BFF18u) { return; }
    }
    ctx->pc = 0x2BFF18u;
label_2bff18:
    // 0x2bff18: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2bff18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2bff1c: 0x26440140  addiu       $a0, $s2, 0x140
    ctx->pc = 0x2bff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
    // 0x2bff20: 0x24426310  addiu       $v0, $v0, 0x6310
    ctx->pc = 0x2bff20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25360));
    // 0x2bff24: 0xc04e640  jal         func_139900
    ctx->pc = 0x2BFF24u;
    SET_GPR_U32(ctx, 31, 0x2BFF2Cu);
    ctx->pc = 0x2BFF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFF24u;
            // 0x2bff28: 0xae42010c  sw          $v0, 0x10C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF2Cu; }
        if (ctx->pc != 0x2BFF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF2Cu; }
        if (ctx->pc != 0x2BFF2Cu) { return; }
    }
    ctx->pc = 0x2BFF2Cu;
label_2bff2c:
    // 0x2bff2c: 0xae400110  sw          $zero, 0x110($s2)
    ctx->pc = 0x2bff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 0));
    // 0x2bff30: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2bff30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2bff34: 0xae400114  sw          $zero, 0x114($s2)
    ctx->pc = 0x2bff34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 0));
    // 0x2bff38: 0x26440140  addiu       $a0, $s2, 0x140
    ctx->pc = 0x2bff38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
    // 0x2bff3c: 0xae420170  sw          $v0, 0x170($s2)
    ctx->pc = 0x2bff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 368), GPR_U32(ctx, 2));
    // 0x2bff40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bff40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff44: 0xae400174  sw          $zero, 0x174($s2)
    ctx->pc = 0x2bff44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 372), GPR_U32(ctx, 0));
    // 0x2bff48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bff48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff4c: 0xae400134  sw          $zero, 0x134($s2)
    ctx->pc = 0x2bff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 308), GPR_U32(ctx, 0));
    // 0x2bff50: 0xae400138  sw          $zero, 0x138($s2)
    ctx->pc = 0x2bff50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 312), GPR_U32(ctx, 0));
    // 0x2bff54: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2BFF54u;
    SET_GPR_U32(ctx, 31, 0x2BFF5Cu);
    ctx->pc = 0x2BFF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFF54u;
            // 0x2bff58: 0xa6400014  sh          $zero, 0x14($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF5Cu; }
        if (ctx->pc != 0x2BFF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF5Cu; }
        if (ctx->pc != 0x2BFF5Cu) { return; }
    }
    ctx->pc = 0x2BFF5Cu;
label_2bff5c:
    // 0x2bff5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bff5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bff60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff64: 0xc08dc6c  jal         func_2371B0
    ctx->pc = 0x2BFF64u;
    SET_GPR_U32(ctx, 31, 0x2BFF6Cu);
    ctx->pc = 0x2BFF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFF64u;
            // 0x2bff68: 0xaf929c7c  sw          $s2, -0x6384($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941820), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2371B0u;
    if (runtime->hasFunction(0x2371B0u)) {
        auto targetFn = runtime->lookupFunction(0x2371B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF6Cu; }
        if (ctx->pc != 0x2BFF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexBlock__14CBaseMenuClassFPi_0x2371b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF6Cu; }
        if (ctx->pc != 0x2BFF6Cu) { return; }
    }
    ctx->pc = 0x2BFF6Cu;
label_2bff6c:
    // 0x2bff6c: 0xc0aff88  jal         func_2BFE20
    ctx->pc = 0x2BFF6Cu;
    SET_GPR_U32(ctx, 31, 0x2BFF74u);
    ctx->pc = 0x2BFE20u;
    if (runtime->hasFunction(0x2BFE20u)) {
        auto targetFn = runtime->lookupFunction(0x2BFE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF74u; }
        if (ctx->pc != 0x2BFF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMnOnePictTex__Fv_0x2bfe20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF74u; }
        if (ctx->pc != 0x2BFF74u) { return; }
    }
    ctx->pc = 0x2BFF74u;
label_2bff74:
    // 0x2bff74: 0x8e300020  lw          $s0, 0x20($s1)
    ctx->pc = 0x2bff74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bff78: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2bff78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2bff7c: 0x8f829c7c  lw          $v0, -0x6384($gp)
    ctx->pc = 0x2bff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941820)));
    // 0x2bff80: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2bff80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2bff84: 0x8c510018  lw          $s1, 0x18($v0)
    ctx->pc = 0x2bff84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2bff88: 0xc04b950  jal         func_12E540
    ctx->pc = 0x2BFF88u;
    SET_GPR_U32(ctx, 31, 0x2BFF90u);
    ctx->pc = 0x2BFF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFF88u;
            // 0x2bff8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF90u; }
        if (ctx->pc != 0x2BFF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF90u; }
        if (ctx->pc != 0x2BFF90u) { return; }
    }
    ctx->pc = 0x2BFF90u;
label_2bff90:
    // 0x2bff90: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2bff90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2bff94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bff94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff98: 0x24a5f8c0  addiu       $a1, $a1, -0x740
    ctx->pc = 0x2bff98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965440));
    // 0x2bff9c: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2BFF9Cu;
    SET_GPR_U32(ctx, 31, 0x2BFFA4u);
    ctx->pc = 0x2BFFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFF9Cu;
            // 0x2bffa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFFA4u; }
        if (ctx->pc != 0x2BFFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFFA4u; }
        if (ctx->pc != 0x2BFFA4u) { return; }
    }
    ctx->pc = 0x2BFFA4u;
label_2bffa4:
    // 0x2bffa4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2bffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2bffa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bffa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bffac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bffacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bffb0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2bffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2bffb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bffb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bffb8: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x2BFFB8u;
    SET_GPR_U32(ctx, 31, 0x2BFFC0u);
    ctx->pc = 0x2BFFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFFB8u;
            // 0x2bffbc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFFC0u; }
        if (ctx->pc != 0x2BFFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFFC0u; }
        if (ctx->pc != 0x2BFFC0u) { return; }
    }
    ctx->pc = 0x2BFFC0u;
label_2bffc0:
    // 0x2bffc0: 0x8f829c7c  lw          $v0, -0x6384($gp)
    ctx->pc = 0x2bffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941820)));
    // 0x2bffc4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2bffc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2bffc8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2bffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2bffcc: 0x8c51001c  lw          $s1, 0x1C($v0)
    ctx->pc = 0x2bffccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2bffd0: 0xc04b950  jal         func_12E540
    ctx->pc = 0x2BFFD0u;
    SET_GPR_U32(ctx, 31, 0x2BFFD8u);
    ctx->pc = 0x2BFFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFFD0u;
            // 0x2bffd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFFD8u; }
        if (ctx->pc != 0x2BFFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFFD8u; }
        if (ctx->pc != 0x2BFFD8u) { return; }
    }
    ctx->pc = 0x2BFFD8u;
label_2bffd8:
    // 0x2bffd8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2bffd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2bffdc: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2bffdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2bffe0: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x2bffe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x2bffe4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2bffe4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x2bffe8: 0x8f888780  lw          $t0, -0x7880($gp)
    ctx->pc = 0x2bffe8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x2bffec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bffecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfff0: 0x8f898784  lw          $t1, -0x787C($gp)
    ctx->pc = 0x2bfff0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x2bfff4: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2bfff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2bfff8: 0x8f8a87a0  lw          $t2, -0x7860($gp)
    ctx->pc = 0x2bfff8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936480)));
    // 0x2bfffc: 0x24c6f8d0  addiu       $a2, $a2, -0x730
    ctx->pc = 0x2bfffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965456));
    // 0x2c0000: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c0000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0004: 0xc04b450  jal         func_12D140
    ctx->pc = 0x2C0004u;
    SET_GPR_U32(ctx, 31, 0x2C000Cu);
    ctx->pc = 0x2C0008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0004u;
            // 0x2c0008: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C000Cu; }
        if (ctx->pc != 0x2C000Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C000Cu; }
        if (ctx->pc != 0x2C000Cu) { return; }
    }
    ctx->pc = 0x2C000Cu;
label_2c000c:
    // 0x2c000c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c000cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c0010: 0xaf829c50  sw          $v0, -0x63B0($gp)
    ctx->pc = 0x2c0010u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941776), GPR_U32(ctx, 2));
    // 0x2c0014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c0014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0018: 0x24a5f8e0  addiu       $a1, $a1, -0x720
    ctx->pc = 0x2c0018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965472));
    // 0x2c001c: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2C001Cu;
    SET_GPR_U32(ctx, 31, 0x2C0024u);
    ctx->pc = 0x2C0020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C001Cu;
            // 0x2c0020: 0x27a600bc  addiu       $a2, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0024u; }
        if (ctx->pc != 0x2C0024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0024u; }
        if (ctx->pc != 0x2C0024u) { return; }
    }
    ctx->pc = 0x2C0024u;
label_2c0024:
    // 0x2c0024: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0024u;
    {
        const bool branch_taken_0x2c0024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0024) {
            ctx->pc = 0x2C0040u;
            goto label_2c0040;
        }
    }
    ctx->pc = 0x2C002Cu;
    // 0x2c002c: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x2c002cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2c0030: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2c0030u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
    // 0x2c0034: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c0034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0038: 0xc094f98  jal         func_253E60
    ctx->pc = 0x2C0038u;
    SET_GPR_U32(ctx, 31, 0x2C0040u);
    ctx->pc = 0x2C003Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0038u;
            // 0x2c003c: 0x24c6d200  addiu       $a2, $a2, -0x2E00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x253E60u;
    if (runtime->hasFunction(0x253E60u)) {
        auto targetFn = runtime->lookupFunction(0x253E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0040u; }
        if (ctx->pc != 0x2C0040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuDataAnalyze__FPciP9mgCMemory_0x253e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0040u; }
        if (ctx->pc != 0x2C0040u) { return; }
    }
    ctx->pc = 0x2C0040u;
label_2c0040:
    // 0x2c0040: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c0040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2c0044: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2C0044u;
    SET_GPR_U32(ctx, 31, 0x2C004Cu);
    ctx->pc = 0x2C0048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0044u;
            // 0x2c0048: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C004Cu; }
        if (ctx->pc != 0x2C004Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C004Cu; }
        if (ctx->pc != 0x2C004Cu) { return; }
    }
    ctx->pc = 0x2C004Cu;
label_2c004c:
    // 0x2c004c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c004cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c0050: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c0050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2c0054: 0x8c23d228  lw          $v1, -0x2DD8($at)
    ctx->pc = 0x2c0054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955560)));
    // 0x2c0058: 0x2484d230  addiu       $a0, $a0, -0x2DD0
    ctx->pc = 0x2c0058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955568));
    // 0x2c005c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c005cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c0060: 0x8c25d224  lw          $a1, -0x2DDC($at)
    ctx->pc = 0x2c0060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955556)));
    // 0x2c0064: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c0064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c0068: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2c0068u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c006c: 0x8c22d220  lw          $v0, -0x2DE0($at)
    ctx->pc = 0x2c006cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955552)));
    // 0x2c0070: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2c0070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2c0074: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2C0074u;
    SET_GPR_U32(ctx, 31, 0x2C007Cu);
    ctx->pc = 0x2C0078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0074u;
            // 0x2c0078: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C007Cu; }
        if (ctx->pc != 0x2C007Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C007Cu; }
        if (ctx->pc != 0x2C007Cu) { return; }
    }
    ctx->pc = 0x2C007Cu;
label_2c007c:
    // 0x2c007c: 0xc087d68  jal         func_21F5A0
    ctx->pc = 0x2C007Cu;
    SET_GPR_U32(ctx, 31, 0x2C0084u);
    ctx->pc = 0x21F5A0u;
    if (runtime->hasFunction(0x21F5A0u)) {
        auto targetFn = runtime->lookupFunction(0x21F5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0084u; }
        if (ctx->pc != 0x2C0084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachMessageForm__Fv_0x21f5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0084u; }
        if (ctx->pc != 0x2C0084u) { return; }
    }
    ctx->pc = 0x2C0084u;
label_2c0084:
    // 0x2c0084: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2c0084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2c0088: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c0088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c008c: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2C008Cu;
    SET_GPR_U32(ctx, 31, 0x2C0094u);
    ctx->pc = 0x2C0090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C008Cu;
            // 0x2c0090: 0x24a5f8f0  addiu       $a1, $a1, -0x710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0094u; }
        if (ctx->pc != 0x2C0094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0094u; }
        if (ctx->pc != 0x2C0094u) { return; }
    }
    ctx->pc = 0x2C0094u;
label_2c0094:
    // 0x2c0094: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2c0094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2c0098: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c0098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c009c: 0xaf829c54  sw          $v0, -0x63AC($gp)
    ctx->pc = 0x2c009cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941780), GPR_U32(ctx, 2));
    // 0x2c00a0: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2C00A0u;
    SET_GPR_U32(ctx, 31, 0x2C00A8u);
    ctx->pc = 0x2C00A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C00A0u;
            // 0x2c00a4: 0x24a5f8f8  addiu       $a1, $a1, -0x708 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C00A8u; }
        if (ctx->pc != 0x2C00A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C00A8u; }
        if (ctx->pc != 0x2C00A8u) { return; }
    }
    ctx->pc = 0x2C00A8u;
label_2c00a8:
    // 0x2c00a8: 0xaf829c58  sw          $v0, -0x63A8($gp)
    ctx->pc = 0x2c00a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941784), GPR_U32(ctx, 2));
    // 0x2c00ac: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c00acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c00b0: 0x8f829c7c  lw          $v0, -0x6384($gp)
    ctx->pc = 0x2c00b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941820)));
    // 0x2c00b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c00b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c00b8: 0x24a5f900  addiu       $a1, $a1, -0x700
    ctx->pc = 0x2c00b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965504));
    // 0x2c00bc: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2C00BCu;
    SET_GPR_U32(ctx, 31, 0x2C00C4u);
    ctx->pc = 0x2C00C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C00BCu;
            // 0x2c00c0: 0x2446000c  addiu       $a2, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C00C4u; }
        if (ctx->pc != 0x2C00C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C00C4u; }
        if (ctx->pc != 0x2C00C4u) { return; }
    }
    ctx->pc = 0x2C00C4u;
label_2c00c4:
    // 0x2c00c4: 0x8f839c7c  lw          $v1, -0x6384($gp)
    ctx->pc = 0x2c00c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941820)));
    // 0x2c00c8: 0xc08d1bc  jal         func_2346F0
    ctx->pc = 0x2C00C8u;
    SET_GPR_U32(ctx, 31, 0x2C00D0u);
    ctx->pc = 0x2C00CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C00C8u;
            // 0x2c00cc: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C00D0u; }
        if (ctx->pc != 0x2C00D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C00D0u; }
        if (ctx->pc != 0x2C00D0u) { return; }
    }
    ctx->pc = 0x2C00D0u;
label_2c00d0:
    // 0x2c00d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c00d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c00d4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c00d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c00d8: 0x8c22ca48  lw          $v0, -0x35B8($at)
    ctx->pc = 0x2c00d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
    // 0x2c00dc: 0x8c4221d4  lw          $v0, 0x21D4($v0)
    ctx->pc = 0x2c00dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8660)));
    // 0x2c00e0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c00e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c00e4: 0xac22e3b8  sw          $v0, -0x1C48($at)
    ctx->pc = 0x2c00e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960056), GPR_U32(ctx, 2));
    // 0x2c00e8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c00e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c00ec: 0xc065a18  jal         func_196860
    ctx->pc = 0x2C00ECu;
    SET_GPR_U32(ctx, 31, 0x2C00F4u);
    ctx->pc = 0x2C00F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C00ECu;
            // 0x2c00f0: 0xac30e3bc  sw          $s0, -0x1C44($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960060), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C00F4u; }
        if (ctx->pc != 0x2C00F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C00F4u; }
        if (ctx->pc != 0x2C00F4u) { return; }
    }
    ctx->pc = 0x2C00F4u;
label_2c00f4:
    // 0x2c00f4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c00f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c00f8: 0xac22e3a8  sw          $v0, -0x1C58($at)
    ctx->pc = 0x2c00f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960040), GPR_U32(ctx, 2));
    // 0x2c00fc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c00fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c0100: 0xc065a18  jal         func_196860
    ctx->pc = 0x2C0100u;
    SET_GPR_U32(ctx, 31, 0x2C0108u);
    ctx->pc = 0x2C0104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0100u;
            // 0x2c0104: 0xac30e3ac  sw          $s0, -0x1C54($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960044), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0108u; }
        if (ctx->pc != 0x2C0108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0108u; }
        if (ctx->pc != 0x2C0108u) { return; }
    }
    ctx->pc = 0x2C0108u;
label_2c0108:
    // 0x2c0108: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c0108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c010c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c010cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0110: 0x8c24ca5c  lw          $a0, -0x35A4($at)
    ctx->pc = 0x2c0110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
    // 0x2c0114: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x2C0114u;
    SET_GPR_U32(ctx, 31, 0x2C011Cu);
    ctx->pc = 0x2C0118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0114u;
            // 0x2c0118: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C011Cu; }
        if (ctx->pc != 0x2C011Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C011Cu; }
        if (ctx->pc != 0x2C011Cu) { return; }
    }
    ctx->pc = 0x2C011Cu;
label_2c011c:
    // 0x2c011c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c011cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c0120: 0x8c24ca5c  lw          $a0, -0x35A4($at)
    ctx->pc = 0x2c0120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
    // 0x2c0124: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2C0124u;
    SET_GPR_U32(ctx, 31, 0x2C012Cu);
    ctx->pc = 0x2C0128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0124u;
            // 0x2c0128: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C012Cu; }
        if (ctx->pc != 0x2C012Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C012Cu; }
        if (ctx->pc != 0x2C012Cu) { return; }
    }
    ctx->pc = 0x2C012Cu;
label_2c012c:
    // 0x2c012c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c012cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c0130: 0x8c24ca5c  lw          $a0, -0x35A4($at)
    ctx->pc = 0x2c0130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
    // 0x2c0134: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C0134u;
    SET_GPR_U32(ctx, 31, 0x2C013Cu);
    ctx->pc = 0x2C0138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0134u;
            // 0x2c0138: 0x240511c6  addiu       $a1, $zero, 0x11C6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4550));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C013Cu; }
        if (ctx->pc != 0x2C013Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C013Cu; }
        if (ctx->pc != 0x2C013Cu) { return; }
    }
    ctx->pc = 0x2C013Cu;
label_2c013c:
    // 0x2c013c: 0x8f849c7c  lw          $a0, -0x6384($gp)
    ctx->pc = 0x2c013cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941820)));
    // 0x2c0140: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c0140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c0144: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2C0144u;
    SET_GPR_U32(ctx, 31, 0x2C014Cu);
    ctx->pc = 0x2C0148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0144u;
            // 0x2c0148: 0x24a5f910  addiu       $a1, $a1, -0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C014Cu; }
        if (ctx->pc != 0x2C014Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C014Cu; }
        if (ctx->pc != 0x2C014Cu) { return; }
    }
    ctx->pc = 0x2C014Cu;
label_2c014c:
    // 0x2c014c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2c014cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0150: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2c0150u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0154:
    // 0x2c0154: 0x27828500  addiu       $v0, $gp, -0x7B00
    ctx->pc = 0x2c0154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935808));
    // 0x2c0158: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c0158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c015c: 0x571821  addu        $v1, $v0, $s7
    ctx->pc = 0x2c015cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2c0160: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c0160u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0164: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2c0164u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0168: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x2c0168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x2c016c: 0x2442ca40  addiu       $v0, $v0, -0x35C0
    ctx->pc = 0x2c016cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953536));
    // 0x2c0170: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c0170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c0174: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0178: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x2c0178u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c017c: 0xaec01ad0  sw          $zero, 0x1AD0($s6)
    ctx->pc = 0x2c017cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 6864), GPR_U32(ctx, 0));
label_2c0180:
    // 0x2c0180: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c0180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0184: 0x24050746  addiu       $a1, $zero, 0x746
    ctx->pc = 0x2c0184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1862));
    // 0x2c0188: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C0188u;
    SET_GPR_U32(ctx, 31, 0x2C0190u);
    ctx->pc = 0x2C018Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0188u;
            // 0x2c018c: 0x21e8821  addu        $s1, $s0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0190u; }
        if (ctx->pc != 0x2C0190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0190u; }
        if (ctx->pc != 0x2C0190u) { return; }
    }
    ctx->pc = 0x2C0190u;
label_2c0190:
    // 0x2c0190: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x2c0190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c0194: 0x2d4a821  addu        $s5, $s6, $s4
    ctx->pc = 0x2c0194u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x2c0198: 0xaea21a44  sw          $v0, 0x1A44($s5)
    ctx->pc = 0x2c0198u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6724), GPR_U32(ctx, 2));
    // 0x2c019c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c019cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c01a0: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C01A0u;
    {
        const bool branch_taken_0x2c01a0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2C01A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C01A0u;
            // 0x2c01a4: 0xaea21a84  sw          $v0, 0x1A84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 6788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c01a0) {
            ctx->pc = 0x2C01B8u;
            goto label_2c01b8;
        }
    }
    ctx->pc = 0x2C01A8u;
    // 0x2c01a8: 0x2a010010  slti        $at, $s0, 0x10
    ctx->pc = 0x2c01a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2c01ac: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C01ACu;
    {
        const bool branch_taken_0x2c01ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C01B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C01ACu;
            // 0x2c01b0: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c01ac) {
            ctx->pc = 0x2C01B8u;
            goto label_2c01b8;
        }
    }
    ctx->pc = 0x2C01B4u;
    // 0x2c01b4: 0xaea21a04  sw          $v0, 0x1A04($s5)
    ctx->pc = 0x2c01b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6660), GPR_U32(ctx, 2));
label_2c01b8:
    // 0x2c01b8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2c01b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2c01bc: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x2c01bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2c01c0: 0x24425110  addiu       $v0, $v0, 0x5110
    ctx->pc = 0x2c01c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20752));
    // 0x2c01c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c01c8: 0xc08cac4  jal         func_232B10
    ctx->pc = 0x2C01C8u;
    SET_GPR_U32(ctx, 31, 0x2C01D0u);
    ctx->pc = 0x2C01CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C01C8u;
            // 0x2c01cc: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C01D0u; }
        if (ctx->pc != 0x2C01D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C01D0u; }
        if (ctx->pc != 0x2C01D0u) { return; }
    }
    ctx->pc = 0x2C01D0u;
label_2c01d0:
    // 0x2c01d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c01d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c01d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c01d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c01d8: 0xc0aff6c  jal         func_2BFDB0
    ctx->pc = 0x2C01D8u;
    SET_GPR_U32(ctx, 31, 0x2C01E0u);
    ctx->pc = 0x2C01DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C01D8u;
            // 0x2c01dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFDB0u;
    if (runtime->hasFunction(0x2BFDB0u)) {
        auto targetFn = runtime->lookupFunction(0x2BFDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C01E0u; }
        if (ctx->pc != 0x2C01E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckOmakeVtuto__Fi_0x2bfdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C01E0u; }
        if (ctx->pc != 0x2C01E0u) { return; }
    }
    ctx->pc = 0x2C01E0u;
label_2c01e0:
    // 0x2c01e0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C01E0u;
    {
        const bool branch_taken_0x2c01e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c01e0) {
            ctx->pc = 0x2C01ECu;
            goto label_2c01ec;
        }
    }
    ctx->pc = 0x2C01E8u;
    // 0x2c01e8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2c01e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c01ec:
    // 0x2c01ec: 0x0  nop
    ctx->pc = 0x2c01ecu;
    // NOP
    // 0x2c01f0: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C01F0u;
    {
        const bool branch_taken_0x2c01f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c01f0) {
            ctx->pc = 0x2C0200u;
            goto label_2c0200;
        }
    }
    ctx->pc = 0x2C01F8u;
    // 0x2c01f8: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C01F8u;
    {
        const bool branch_taken_0x2c01f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c01f8) {
            ctx->pc = 0x2C0248u;
            goto label_2c0248;
        }
    }
    ctx->pc = 0x2C0200u;
label_2c0200:
    // 0x2c0200: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0200u;
    {
        const bool branch_taken_0x2c0200 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2C0204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0200u;
            // 0x2c0204: 0x2a010010  slti        $at, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0200) {
            ctx->pc = 0x2C0214u;
            goto label_2c0214;
        }
    }
    ctx->pc = 0x2C0208u;
    // 0x2c0208: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C0208u;
    {
        const bool branch_taken_0x2c0208 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C020Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0208u;
            // 0x2c020c: 0x26221194  addiu       $v0, $s1, 0x1194 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0208) {
            ctx->pc = 0x2C0214u;
            goto label_2c0214;
        }
    }
    ctx->pc = 0x2C0210u;
    // 0x2c0210: 0xaea21a04  sw          $v0, 0x1A04($s5)
    ctx->pc = 0x2c0210u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6660), GPR_U32(ctx, 2));
label_2c0214:
    // 0x2c0214: 0x0  nop
    ctx->pc = 0x2c0214u;
    // NOP
    // 0x2c0218: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x2c0218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2c021c: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C021Cu;
    {
        const bool branch_taken_0x2c021c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C021Cu;
            // 0x2c0220: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c021c) {
            ctx->pc = 0x2C022Cu;
            goto label_2c022c;
        }
    }
    ctx->pc = 0x2C0224u;
    // 0x2c0224: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C0224u;
    {
        const bool branch_taken_0x2c0224 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c0224) {
            ctx->pc = 0x2C0248u;
            goto label_2c0248;
        }
    }
    ctx->pc = 0x2C022Cu;
label_2c022c:
    // 0x2c022c: 0x0  nop
    ctx->pc = 0x2c022cu;
    // NOP
    // 0x2c0230: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C0230u;
    {
        const bool branch_taken_0x2c0230 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2C0234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0230u;
            // 0x2c0234: 0x2a010014  slti        $at, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0230) {
            ctx->pc = 0x2C0248u;
            goto label_2c0248;
        }
    }
    ctx->pc = 0x2C0238u;
    // 0x2c0238: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0238u;
    {
        const bool branch_taken_0x2c0238 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C023Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0238u;
            // 0x2c023c: 0x3c0280e0  lui         $v0, 0x80E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32992 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0238) {
            ctx->pc = 0x2C0248u;
            goto label_2c0248;
        }
    }
    ctx->pc = 0x2C0240u;
    // 0x2c0240: 0x3442e060  ori         $v0, $v0, 0xE060
    ctx->pc = 0x2c0240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57440);
    // 0x2c0244: 0xaea21cd4  sw          $v0, 0x1CD4($s5)
    ctx->pc = 0x2c0244u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 7380), GPR_U32(ctx, 2));
label_2c0248:
    // 0x2c0248: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c0248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c024c: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x2c024cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2c0250: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x2C0250u;
    {
        const bool branch_taken_0x2c0250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0250u;
            // 0x2c0254: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0250) {
            ctx->pc = 0x2C0180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c0180;
        }
    }
    ctx->pc = 0x2C0258u;
    // 0x2c0258: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2c0258u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2c025c: 0x2ae20005  slti        $v0, $s7, 0x5
    ctx->pc = 0x2c025cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c0260: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x2C0260u;
    {
        const bool branch_taken_0x2c0260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0260u;
            // 0x2c0264: 0x27de000a  addiu       $fp, $fp, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0260) {
            ctx->pc = 0x2C0154u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c0154;
        }
    }
    ctx->pc = 0x2C0268u;
    // 0x2c0268: 0xc064268  jal         func_1909A0
    ctx->pc = 0x2C0268u;
    SET_GPR_U32(ctx, 31, 0x2C0270u);
    ctx->pc = 0x1909A0u;
    if (runtime->hasFunction(0x1909A0u)) {
        auto targetFn = runtime->lookupFunction(0x1909A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0270u; }
        if (ctx->pc != 0x2C0270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowLoopNo__Fv_0x1909a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0270u; }
        if (ctx->pc != 0x2C0270u) { return; }
    }
    ctx->pc = 0x2C0270u;
label_2c0270:
    // 0x2c0270: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2c0270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2c0274: 0xa7809c74  sh          $zero, -0x638C($gp)
    ctx->pc = 0x2c0274u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941812), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c0278: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2c0278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2c027c: 0xc06421c  jal         func_190870
    ctx->pc = 0x2C027Cu;
    SET_GPR_U32(ctx, 31, 0x2C0284u);
    ctx->pc = 0x2C0280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C027Cu;
            // 0x2c0280: 0xa7829c70  sh          $v0, -0x6390($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941808), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0284u; }
        if (ctx->pc != 0x2C0284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0284u; }
        if (ctx->pc != 0x2C0284u) { return; }
    }
    ctx->pc = 0x2C0284u;
label_2c0284:
    // 0x2c0284: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x2c0284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x2c0288: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0288u;
    {
        const bool branch_taken_0x2c0288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0288) {
            ctx->pc = 0x2C0298u;
            goto label_2c0298;
        }
    }
    ctx->pc = 0x2C0290u;
    // 0x2c0290: 0x84420058  lh          $v0, 0x58($v0)
    ctx->pc = 0x2c0290u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2c0294: 0xa7829c74  sh          $v0, -0x638C($gp)
    ctx->pc = 0x2c0294u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941812), (uint16_t)GPR_U32(ctx, 2));
label_2c0298:
    // 0x2c0298: 0x87839c70  lh          $v1, -0x6390($gp)
    ctx->pc = 0x2c0298u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941808)));
    // 0x2c029c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c029cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c02a0: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C02A0u;
    {
        const bool branch_taken_0x2c02a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C02A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C02A0u;
            // 0x2c02a4: 0xa7809c78  sh          $zero, -0x6388($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941816), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c02a0) {
            ctx->pc = 0x2C02F8u;
            goto label_2c02f8;
        }
    }
    ctx->pc = 0x2C02A8u;
    // 0x2c02a8: 0x87829c74  lh          $v0, -0x638C($gp)
    ctx->pc = 0x2c02a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941812)));
    // 0x2c02ac: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C02ACu;
    {
        const bool branch_taken_0x2c02ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c02ac) {
            ctx->pc = 0x2C02F8u;
            goto label_2c02f8;
        }
    }
    ctx->pc = 0x2C02B4u;
    // 0x2c02b4: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x2c02b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c02b8: 0x8c502e60  lw          $s0, 0x2E60($v0)
    ctx->pc = 0x2c02b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11872)));
    // 0x2c02bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C02BCu;
    {
        const bool branch_taken_0x2c02bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C02C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C02BCu;
            // 0x2c02c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c02bc) {
            ctx->pc = 0x2C02DCu;
            goto label_2c02dc;
        }
    }
    ctx->pc = 0x2C02C4u;
label_2c02c4:
    // 0x2c02c4: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x2C02C4u;
    SET_GPR_U32(ctx, 31, 0x2C02CCu);
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C02CCu; }
        if (ctx->pc != 0x2C02CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C02CCu; }
        if (ctx->pc != 0x2C02CCu) { return; }
    }
    ctx->pc = 0x2C02CCu;
label_2c02cc:
    // 0x2c02cc: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C02CCu;
    {
        const bool branch_taken_0x2c02cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C02D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C02CCu;
            // 0x2c02d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c02cc) {
            ctx->pc = 0x2C02D8u;
            goto label_2c02d8;
        }
    }
    ctx->pc = 0x2C02D4u;
    // 0x2c02d4: 0xa7829c74  sh          $v0, -0x638C($gp)
    ctx->pc = 0x2c02d4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941812), (uint16_t)GPR_U32(ctx, 2));
label_2c02d8:
    // 0x2c02d8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2c02d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2c02dc:
    // 0x2c02dc: 0x0  nop
    ctx->pc = 0x2c02dcu;
    // NOP
    // 0x2c02e0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2c02e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2c02e4: 0x24425170  addiu       $v0, $v0, 0x5170
    ctx->pc = 0x2c02e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20848));
    // 0x2c02e8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2c02e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2c02ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c02ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c02f0: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C02F0u;
    {
        const bool branch_taken_0x2c02f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c02f0) {
            ctx->pc = 0x2C02C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c02c4;
        }
    }
    ctx->pc = 0x2C02F8u;
label_2c02f8:
    // 0x2c02f8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2c02f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c02fc: 0xc08900c  jal         func_224030
    ctx->pc = 0x2C02FCu;
    SET_GPR_U32(ctx, 31, 0x2C0304u);
    ctx->pc = 0x2C0300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C02FCu;
            // 0x2c0300: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224030u;
    if (runtime->hasFunction(0x224030u)) {
        auto targetFn = runtime->lookupFunction(0x224030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0304u; }
        if (ctx->pc != 0x2C0304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainFrameModeSet__Fii_0x224030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0304u; }
        if (ctx->pc != 0x2C0304u) { return; }
    }
    ctx->pc = 0x2C0304u;
label_2c0304:
    // 0x2c0304: 0xa3809c64  sb          $zero, -0x639C($gp)
    ctx->pc = 0x2c0304u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941796), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c0308: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2c0308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c030c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2c030cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c0310: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2c0310u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c0314: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2c0314u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c0318: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2c0318u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c031c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c031cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c0320: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c0320u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c0324: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c0324u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c0328: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c0328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c032c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c032cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0330: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0330u;
            // 0x2c0334: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C0338u;
}
