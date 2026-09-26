#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__8CAquaMesFP9mgCMemory
// Address: 0x20fb10 - 0x2111b8
void Initialize__8CAquaMesFP9mgCMemory_0x20fb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__8CAquaMesFP9mgCMemory_0x20fb10");
#endif

    switch (ctx->pc) {
        case 0x20fbb0u: goto label_20fbb0;
        case 0x20fbc0u: goto label_20fbc0;
        case 0x20fbccu: goto label_20fbcc;
        case 0x20fbdcu: goto label_20fbdc;
        case 0x20fbecu: goto label_20fbec;
        case 0x20fbf8u: goto label_20fbf8;
        case 0x20fc08u: goto label_20fc08;
        case 0x20fc18u: goto label_20fc18;
        case 0x20fc24u: goto label_20fc24;
        case 0x20fc34u: goto label_20fc34;
        case 0x20fc44u: goto label_20fc44;
        case 0x20fc50u: goto label_20fc50;
        case 0x20fc60u: goto label_20fc60;
        case 0x20fc70u: goto label_20fc70;
        case 0x20fc7cu: goto label_20fc7c;
        case 0x20fc8cu: goto label_20fc8c;
        case 0x20fc9cu: goto label_20fc9c;
        case 0x20fca8u: goto label_20fca8;
        case 0x20fcb8u: goto label_20fcb8;
        case 0x20fcc8u: goto label_20fcc8;
        case 0x20fcd4u: goto label_20fcd4;
        case 0x20fce4u: goto label_20fce4;
        case 0x20fcf0u: goto label_20fcf0;
        case 0x20fcfcu: goto label_20fcfc;
        case 0x20fd14u: goto label_20fd14;
        case 0x20fd28u: goto label_20fd28;
        case 0x20fd50u: goto label_20fd50;
        case 0x20fd74u: goto label_20fd74;
        case 0x20fdc4u: goto label_20fdc4;
        case 0x20fde8u: goto label_20fde8;
        case 0x20fe1cu: goto label_20fe1c;
        case 0x20fe30u: goto label_20fe30;
        case 0x20fe4cu: goto label_20fe4c;
        case 0x20fe88u: goto label_20fe88;
        case 0x20ff6cu: goto label_20ff6c;
        case 0x20ffe8u: goto label_20ffe8;
        case 0x210000u: goto label_210000;
        case 0x21000cu: goto label_21000c;
        case 0x210040u: goto label_210040;
        case 0x210064u: goto label_210064;
        case 0x2100b4u: goto label_2100b4;
        case 0x2100d8u: goto label_2100d8;
        case 0x21010cu: goto label_21010c;
        case 0x210120u: goto label_210120;
        case 0x21013cu: goto label_21013c;
        case 0x210178u: goto label_210178;
        case 0x21025cu: goto label_21025c;
        case 0x2102d8u: goto label_2102d8;
        case 0x2102f0u: goto label_2102f0;
        case 0x2102fcu: goto label_2102fc;
        case 0x210344u: goto label_210344;
        case 0x210368u: goto label_210368;
        case 0x2103b8u: goto label_2103b8;
        case 0x2103dcu: goto label_2103dc;
        case 0x210410u: goto label_210410;
        case 0x210424u: goto label_210424;
        case 0x210440u: goto label_210440;
        case 0x21047cu: goto label_21047c;
        case 0x210560u: goto label_210560;
        case 0x2105dcu: goto label_2105dc;
        case 0x2105f4u: goto label_2105f4;
        case 0x210604u: goto label_210604;
        case 0x210620u: goto label_210620;
        case 0x21064cu: goto label_21064c;
        case 0x21069cu: goto label_21069c;
        case 0x2106c0u: goto label_2106c0;
        case 0x2106f4u: goto label_2106f4;
        case 0x210708u: goto label_210708;
        case 0x210724u: goto label_210724;
        case 0x210760u: goto label_210760;
        case 0x210844u: goto label_210844;
        case 0x2108c0u: goto label_2108c0;
        case 0x2108d8u: goto label_2108d8;
        case 0x2108e8u: goto label_2108e8;
        case 0x21092cu: goto label_21092c;
        case 0x21097cu: goto label_21097c;
        case 0x2109a0u: goto label_2109a0;
        case 0x2109d4u: goto label_2109d4;
        case 0x2109e8u: goto label_2109e8;
        case 0x210a04u: goto label_210a04;
        case 0x210a40u: goto label_210a40;
        case 0x210b24u: goto label_210b24;
        case 0x210ba0u: goto label_210ba0;
        case 0x210bacu: goto label_210bac;
        case 0x210bc4u: goto label_210bc4;
        case 0x210c00u: goto label_210c00;
        case 0x210c50u: goto label_210c50;
        case 0x210c74u: goto label_210c74;
        case 0x210ca8u: goto label_210ca8;
        case 0x210cbcu: goto label_210cbc;
        case 0x210cd8u: goto label_210cd8;
        case 0x210d14u: goto label_210d14;
        case 0x210df8u: goto label_210df8;
        case 0x210e74u: goto label_210e74;
        case 0x210e80u: goto label_210e80;
        case 0x210e98u: goto label_210e98;
        case 0x210edcu: goto label_210edc;
        case 0x210f2cu: goto label_210f2c;
        case 0x210f50u: goto label_210f50;
        case 0x210f84u: goto label_210f84;
        case 0x210f98u: goto label_210f98;
        case 0x210fb4u: goto label_210fb4;
        case 0x210ff0u: goto label_210ff0;
        case 0x2110d4u: goto label_2110d4;
        case 0x211150u: goto label_211150;
        case 0x21115cu: goto label_21115c;
        case 0x211174u: goto label_211174;
        default: break;
    }

    ctx->pc = 0x20fb10u;

    // 0x20fb10: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x20fb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x20fb14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20fb14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20fb18: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x20fb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x20fb1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20fb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20fb20: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20fb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x20fb24: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20fb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20fb28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20fb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20fb2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20fb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20fb30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20fb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20fb34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20fb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20fb38: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x20fb38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x20fb3c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x20fb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x20fb40: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x20fb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x20fb44: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x20fb44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x20fb48: 0xa080000c  sb          $zero, 0xC($a0)
    ctx->pc = 0x20fb48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x20fb4c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x20fb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x20fb50: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x20fb50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x20fb54: 0xa0800018  sb          $zero, 0x18($a0)
    ctx->pc = 0x20fb54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x20fb58: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x20fb58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x20fb5c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x20fb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x20fb60: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x20fb60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x20fb64: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x20fb64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x20fb68: 0xa080001a  sb          $zero, 0x1A($a0)
    ctx->pc = 0x20fb68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 0));
    // 0x20fb6c: 0xa0860019  sb          $a2, 0x19($a0)
    ctx->pc = 0x20fb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 6));
    // 0x20fb70: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x20fb70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x20fb74: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x20fb74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x20fb78: 0xa0800034  sb          $zero, 0x34($a0)
    ctx->pc = 0x20fb78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x20fb7c: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x20fb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x20fb80: 0xac85003c  sw          $a1, 0x3C($a0)
    ctx->pc = 0x20fb80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
    // 0x20fb84: 0xa0800040  sb          $zero, 0x40($a0)
    ctx->pc = 0x20fb84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x20fb88: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x20fb88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x20fb8c: 0xa0800048  sb          $zero, 0x48($a0)
    ctx->pc = 0x20fb8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x20fb90: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x20fb90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x20fb94: 0xac83005c  sw          $v1, 0x5C($a0)
    ctx->pc = 0x20fb94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 3));
    // 0x20fb98: 0xac830060  sw          $v1, 0x60($a0)
    ctx->pc = 0x20fb98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 3));
    // 0x20fb9c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20fba0: 0x1060057c  beqz        $v1, . + 4 + (0x57C << 2)
    ctx->pc = 0x20FBA0u;
    {
        const bool branch_taken_0x20fba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FBA0u;
            // 0x20fba4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fba0) {
            ctx->pc = 0x211194u;
            goto label_211194;
        }
    }
    ctx->pc = 0x20FBA8u;
    // 0x20fba8: 0xc065a18  jal         func_196860
    ctx->pc = 0x20FBA8u;
    SET_GPR_U32(ctx, 31, 0x20FBB0u);
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FBB0u; }
        if (ctx->pc != 0x20FBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FBB0u; }
        if (ctx->pc != 0x20FBB0u) { return; }
    }
    ctx->pc = 0x20FBB0u;
label_20fbb0:
    // 0x20fbb0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x20fbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20fbb4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x20fbb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fbb8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x20FBB8u;
    SET_GPR_U32(ctx, 31, 0x20FBC0u);
    ctx->pc = 0x20FBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FBB8u;
            // 0x20fbbc: 0x24050220  addiu       $a1, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FBC0u; }
        if (ctx->pc != 0x20FBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FBC0u; }
        if (ctx->pc != 0x20FBC0u) { return; }
    }
    ctx->pc = 0x20FBC0u;
label_20fbc0:
    // 0x20fbc0: 0x240421e0  addiu       $a0, $zero, 0x21E0
    ctx->pc = 0x20fbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8672));
    // 0x20fbc4: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x20FBC4u;
    SET_GPR_U32(ctx, 31, 0x20FBCCu);
    ctx->pc = 0x20FBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FBC4u;
            // 0x20fbc8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FBCCu; }
        if (ctx->pc != 0x20FBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FBCCu; }
        if (ctx->pc != 0x20FBCCu) { return; }
    }
    ctx->pc = 0x20FBCCu;
label_20fbcc:
    // 0x20fbcc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20FBCCu;
    {
        const bool branch_taken_0x20fbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FBCCu;
            // 0x20fbd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fbcc) {
            ctx->pc = 0x20FBDCu;
            goto label_20fbdc;
        }
    }
    ctx->pc = 0x20FBD4u;
    // 0x20fbd4: 0xc054aa4  jal         func_152A90
    ctx->pc = 0x20FBD4u;
    SET_GPR_U32(ctx, 31, 0x20FBDCu);
    ctx->pc = 0x152A90u;
    if (runtime->hasFunction(0x152A90u)) {
        auto targetFn = runtime->lookupFunction(0x152A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FBDCu; }
        if (ctx->pc != 0x20FBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__6ClsMesFv_0x152a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FBDCu; }
        if (ctx->pc != 0x20FBDCu) { return; }
    }
    ctx->pc = 0x20FBDCu;
label_20fbdc:
    // 0x20fbdc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x20fbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x20fbe0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x20fbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20fbe4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x20FBE4u;
    SET_GPR_U32(ctx, 31, 0x20FBECu);
    ctx->pc = 0x20FBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FBE4u;
            // 0x20fbe8: 0x24050220  addiu       $a1, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FBECu; }
        if (ctx->pc != 0x20FBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FBECu; }
        if (ctx->pc != 0x20FBECu) { return; }
    }
    ctx->pc = 0x20FBECu;
label_20fbec:
    // 0x20fbec: 0x240421e0  addiu       $a0, $zero, 0x21E0
    ctx->pc = 0x20fbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8672));
    // 0x20fbf0: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x20FBF0u;
    SET_GPR_U32(ctx, 31, 0x20FBF8u);
    ctx->pc = 0x20FBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FBF0u;
            // 0x20fbf4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FBF8u; }
        if (ctx->pc != 0x20FBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FBF8u; }
        if (ctx->pc != 0x20FBF8u) { return; }
    }
    ctx->pc = 0x20FBF8u;
label_20fbf8:
    // 0x20fbf8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20FBF8u;
    {
        const bool branch_taken_0x20fbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FBF8u;
            // 0x20fbfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fbf8) {
            ctx->pc = 0x20FC08u;
            goto label_20fc08;
        }
    }
    ctx->pc = 0x20FC00u;
    // 0x20fc00: 0xc054aa4  jal         func_152A90
    ctx->pc = 0x20FC00u;
    SET_GPR_U32(ctx, 31, 0x20FC08u);
    ctx->pc = 0x152A90u;
    if (runtime->hasFunction(0x152A90u)) {
        auto targetFn = runtime->lookupFunction(0x152A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC08u; }
        if (ctx->pc != 0x20FC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__6ClsMesFv_0x152a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC08u; }
        if (ctx->pc != 0x20FC08u) { return; }
    }
    ctx->pc = 0x20FC08u;
label_20fc08:
    // 0x20fc08: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x20fc08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x20fc0c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x20fc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20fc10: 0xc04e748  jal         func_139D20
    ctx->pc = 0x20FC10u;
    SET_GPR_U32(ctx, 31, 0x20FC18u);
    ctx->pc = 0x20FC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FC10u;
            // 0x20fc14: 0x24050220  addiu       $a1, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC18u; }
        if (ctx->pc != 0x20FC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC18u; }
        if (ctx->pc != 0x20FC18u) { return; }
    }
    ctx->pc = 0x20FC18u;
label_20fc18:
    // 0x20fc18: 0x240421e0  addiu       $a0, $zero, 0x21E0
    ctx->pc = 0x20fc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8672));
    // 0x20fc1c: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x20FC1Cu;
    SET_GPR_U32(ctx, 31, 0x20FC24u);
    ctx->pc = 0x20FC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FC1Cu;
            // 0x20fc20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC24u; }
        if (ctx->pc != 0x20FC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC24u; }
        if (ctx->pc != 0x20FC24u) { return; }
    }
    ctx->pc = 0x20FC24u;
label_20fc24:
    // 0x20fc24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20FC24u;
    {
        const bool branch_taken_0x20fc24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FC24u;
            // 0x20fc28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc24) {
            ctx->pc = 0x20FC34u;
            goto label_20fc34;
        }
    }
    ctx->pc = 0x20FC2Cu;
    // 0x20fc2c: 0xc054aa4  jal         func_152A90
    ctx->pc = 0x20FC2Cu;
    SET_GPR_U32(ctx, 31, 0x20FC34u);
    ctx->pc = 0x152A90u;
    if (runtime->hasFunction(0x152A90u)) {
        auto targetFn = runtime->lookupFunction(0x152A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC34u; }
        if (ctx->pc != 0x20FC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__6ClsMesFv_0x152a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC34u; }
        if (ctx->pc != 0x20FC34u) { return; }
    }
    ctx->pc = 0x20FC34u;
label_20fc34:
    // 0x20fc34: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x20fc34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x20fc38: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x20fc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20fc3c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x20FC3Cu;
    SET_GPR_U32(ctx, 31, 0x20FC44u);
    ctx->pc = 0x20FC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FC3Cu;
            // 0x20fc40: 0x24050220  addiu       $a1, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC44u; }
        if (ctx->pc != 0x20FC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC44u; }
        if (ctx->pc != 0x20FC44u) { return; }
    }
    ctx->pc = 0x20FC44u;
label_20fc44:
    // 0x20fc44: 0x240421e0  addiu       $a0, $zero, 0x21E0
    ctx->pc = 0x20fc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8672));
    // 0x20fc48: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x20FC48u;
    SET_GPR_U32(ctx, 31, 0x20FC50u);
    ctx->pc = 0x20FC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FC48u;
            // 0x20fc4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC50u; }
        if (ctx->pc != 0x20FC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC50u; }
        if (ctx->pc != 0x20FC50u) { return; }
    }
    ctx->pc = 0x20FC50u;
label_20fc50:
    // 0x20fc50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20FC50u;
    {
        const bool branch_taken_0x20fc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FC50u;
            // 0x20fc54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc50) {
            ctx->pc = 0x20FC60u;
            goto label_20fc60;
        }
    }
    ctx->pc = 0x20FC58u;
    // 0x20fc58: 0xc054aa4  jal         func_152A90
    ctx->pc = 0x20FC58u;
    SET_GPR_U32(ctx, 31, 0x20FC60u);
    ctx->pc = 0x152A90u;
    if (runtime->hasFunction(0x152A90u)) {
        auto targetFn = runtime->lookupFunction(0x152A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC60u; }
        if (ctx->pc != 0x20FC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__6ClsMesFv_0x152a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC60u; }
        if (ctx->pc != 0x20FC60u) { return; }
    }
    ctx->pc = 0x20FC60u;
label_20fc60:
    // 0x20fc60: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x20fc60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x20fc64: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x20fc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20fc68: 0xc04e748  jal         func_139D20
    ctx->pc = 0x20FC68u;
    SET_GPR_U32(ctx, 31, 0x20FC70u);
    ctx->pc = 0x20FC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FC68u;
            // 0x20fc6c: 0x24050220  addiu       $a1, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC70u; }
        if (ctx->pc != 0x20FC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC70u; }
        if (ctx->pc != 0x20FC70u) { return; }
    }
    ctx->pc = 0x20FC70u;
label_20fc70:
    // 0x20fc70: 0x240421e0  addiu       $a0, $zero, 0x21E0
    ctx->pc = 0x20fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8672));
    // 0x20fc74: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x20FC74u;
    SET_GPR_U32(ctx, 31, 0x20FC7Cu);
    ctx->pc = 0x20FC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FC74u;
            // 0x20fc78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC7Cu; }
        if (ctx->pc != 0x20FC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC7Cu; }
        if (ctx->pc != 0x20FC7Cu) { return; }
    }
    ctx->pc = 0x20FC7Cu;
label_20fc7c:
    // 0x20fc7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20FC7Cu;
    {
        const bool branch_taken_0x20fc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FC7Cu;
            // 0x20fc80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc7c) {
            ctx->pc = 0x20FC8Cu;
            goto label_20fc8c;
        }
    }
    ctx->pc = 0x20FC84u;
    // 0x20fc84: 0xc054aa4  jal         func_152A90
    ctx->pc = 0x20FC84u;
    SET_GPR_U32(ctx, 31, 0x20FC8Cu);
    ctx->pc = 0x152A90u;
    if (runtime->hasFunction(0x152A90u)) {
        auto targetFn = runtime->lookupFunction(0x152A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC8Cu; }
        if (ctx->pc != 0x20FC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__6ClsMesFv_0x152a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC8Cu; }
        if (ctx->pc != 0x20FC8Cu) { return; }
    }
    ctx->pc = 0x20FC8Cu;
label_20fc8c:
    // 0x20fc8c: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x20fc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x20fc90: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x20fc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20fc94: 0xc04e748  jal         func_139D20
    ctx->pc = 0x20FC94u;
    SET_GPR_U32(ctx, 31, 0x20FC9Cu);
    ctx->pc = 0x20FC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FC94u;
            // 0x20fc98: 0x24050220  addiu       $a1, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC9Cu; }
        if (ctx->pc != 0x20FC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC9Cu; }
        if (ctx->pc != 0x20FC9Cu) { return; }
    }
    ctx->pc = 0x20FC9Cu;
label_20fc9c:
    // 0x20fc9c: 0x240421e0  addiu       $a0, $zero, 0x21E0
    ctx->pc = 0x20fc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8672));
    // 0x20fca0: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x20FCA0u;
    SET_GPR_U32(ctx, 31, 0x20FCA8u);
    ctx->pc = 0x20FCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FCA0u;
            // 0x20fca4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FCA8u; }
        if (ctx->pc != 0x20FCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FCA8u; }
        if (ctx->pc != 0x20FCA8u) { return; }
    }
    ctx->pc = 0x20FCA8u;
label_20fca8:
    // 0x20fca8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20FCA8u;
    {
        const bool branch_taken_0x20fca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FCA8u;
            // 0x20fcac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fca8) {
            ctx->pc = 0x20FCB8u;
            goto label_20fcb8;
        }
    }
    ctx->pc = 0x20FCB0u;
    // 0x20fcb0: 0xc054aa4  jal         func_152A90
    ctx->pc = 0x20FCB0u;
    SET_GPR_U32(ctx, 31, 0x20FCB8u);
    ctx->pc = 0x152A90u;
    if (runtime->hasFunction(0x152A90u)) {
        auto targetFn = runtime->lookupFunction(0x152A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FCB8u; }
        if (ctx->pc != 0x20FCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__6ClsMesFv_0x152a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FCB8u; }
        if (ctx->pc != 0x20FCB8u) { return; }
    }
    ctx->pc = 0x20FCB8u;
label_20fcb8:
    // 0x20fcb8: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x20fcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x20fcbc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x20fcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20fcc0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x20FCC0u;
    SET_GPR_U32(ctx, 31, 0x20FCC8u);
    ctx->pc = 0x20FCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FCC0u;
            // 0x20fcc4: 0x24050220  addiu       $a1, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FCC8u; }
        if (ctx->pc != 0x20FCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FCC8u; }
        if (ctx->pc != 0x20FCC8u) { return; }
    }
    ctx->pc = 0x20FCC8u;
label_20fcc8:
    // 0x20fcc8: 0x240421e0  addiu       $a0, $zero, 0x21E0
    ctx->pc = 0x20fcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8672));
    // 0x20fccc: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x20FCCCu;
    SET_GPR_U32(ctx, 31, 0x20FCD4u);
    ctx->pc = 0x20FCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FCCCu;
            // 0x20fcd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FCD4u; }
        if (ctx->pc != 0x20FCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FCD4u; }
        if (ctx->pc != 0x20FCD4u) { return; }
    }
    ctx->pc = 0x20FCD4u;
label_20fcd4:
    // 0x20fcd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20FCD4u;
    {
        const bool branch_taken_0x20fcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FCD4u;
            // 0x20fcd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fcd4) {
            ctx->pc = 0x20FCE4u;
            goto label_20fce4;
        }
    }
    ctx->pc = 0x20FCDCu;
    // 0x20fcdc: 0xc054aa4  jal         func_152A90
    ctx->pc = 0x20FCDCu;
    SET_GPR_U32(ctx, 31, 0x20FCE4u);
    ctx->pc = 0x152A90u;
    if (runtime->hasFunction(0x152A90u)) {
        auto targetFn = runtime->lookupFunction(0x152A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FCE4u; }
        if (ctx->pc != 0x20FCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__6ClsMesFv_0x152a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FCE4u; }
        if (ctx->pc != 0x20FCE4u) { return; }
    }
    ctx->pc = 0x20FCE4u;
label_20fce4:
    // 0x20fce4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x20fce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x20fce8: 0xc04e780  jal         func_139E00
    ctx->pc = 0x20FCE8u;
    SET_GPR_U32(ctx, 31, 0x20FCF0u);
    ctx->pc = 0x20FCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FCE8u;
            // 0x20fcec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FCF0u; }
        if (ctx->pc != 0x20FCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FCF0u; }
        if (ctx->pc != 0x20FCF0u) { return; }
    }
    ctx->pc = 0x20FCF0u;
label_20fcf0:
    // 0x20fcf0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x20fcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20fcf4: 0xc04e714  jal         func_139C50
    ctx->pc = 0x20FCF4u;
    SET_GPR_U32(ctx, 31, 0x20FCFCu);
    ctx->pc = 0x20FCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FCF4u;
            // 0x20fcf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (runtime->hasFunction(0x139C50u)) {
        auto targetFn = runtime->lookupFunction(0x139C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FCFCu; }
        if (ctx->pc != 0x20FCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAllocTest__9mgCMemoryFi_0x139c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FCFCu; }
        if (ctx->pc != 0x20FCFCu) { return; }
    }
    ctx->pc = 0x20FCFCu;
label_20fcfc:
    // 0x20fcfc: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x20fcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x20fd00: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20fd00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x20fd04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20fd04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd08: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x20fd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x20fd0c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x20FD0Cu;
    SET_GPR_U32(ctx, 31, 0x20FD14u);
    ctx->pc = 0x20FD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FD0Cu;
            // 0x20fd10: 0x24a59e10  addiu       $a1, $a1, -0x61F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FD14u; }
        if (ctx->pc != 0x20FD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FD14u; }
        if (ctx->pc != 0x20FD14u) { return; }
    }
    ctx->pc = 0x20FD14u;
label_20fd14:
    // 0x20fd14: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x20fd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x20fd18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20fd18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd1c: 0x27a600bc  addiu       $a2, $sp, 0xBC
    ctx->pc = 0x20fd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x20fd20: 0xc0524dc  jal         func_149370
    ctx->pc = 0x20FD20u;
    SET_GPR_U32(ctx, 31, 0x20FD28u);
    ctx->pc = 0x20FD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FD20u;
            // 0x20fd24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FD28u; }
        if (ctx->pc != 0x20FD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FD28u; }
        if (ctx->pc != 0x20FD28u) { return; }
    }
    ctx->pc = 0x20FD28u;
label_20fd28:
    // 0x20fd28: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20FD28u;
    {
        const bool branch_taken_0x20fd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fd28) {
            ctx->pc = 0x20FD50u;
            goto label_20fd50;
        }
    }
    ctx->pc = 0x20FD30u;
    // 0x20fd30: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x20fd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x20fd34: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20FD34u;
    {
        const bool branch_taken_0x20fd34 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20FD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FD34u;
            // 0x20fd38: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd34) {
            ctx->pc = 0x20FD44u;
            goto label_20fd44;
        }
    }
    ctx->pc = 0x20FD3Cu;
    // 0x20fd3c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x20fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x20fd40: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x20fd40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_20fd44:
    // 0x20fd44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x20fd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20fd48: 0xc04e748  jal         func_139D20
    ctx->pc = 0x20FD48u;
    SET_GPR_U32(ctx, 31, 0x20FD50u);
    ctx->pc = 0x20FD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FD48u;
            // 0x20fd4c: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FD50u; }
        if (ctx->pc != 0x20FD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FD50u; }
        if (ctx->pc != 0x20FD50u) { return; }
    }
    ctx->pc = 0x20FD50u;
label_20fd50:
    // 0x20fd50: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x20fd50u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x20fd54: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x20fd54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20fd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd5c: 0xae4000b4  sw          $zero, 0xB4($s2)
    ctx->pc = 0x20fd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
    // 0x20fd60: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x20fd60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x20fd64: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x20fd64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
    // 0x20fd68: 0xae4000dc  sw          $zero, 0xDC($s2)
    ctx->pc = 0x20fd68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
    // 0x20fd6c: 0xae4000e0  sw          $zero, 0xE0($s2)
    ctx->pc = 0x20fd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
    // 0x20fd70: 0xae4000e4  sw          $zero, 0xE4($s2)
    ctx->pc = 0x20fd70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 0));
label_20fd74:
    // 0x20fd74: 0x2442821  addu        $a1, $s2, $a0
    ctx->pc = 0x20fd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x20fd78: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x20fd7c: 0xaca000e8  sw          $zero, 0xE8($a1)
    ctx->pc = 0x20fd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 232), GPR_U32(ctx, 0));
    // 0x20fd80: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x20fd80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x20fd84: 0xaca000ec  sw          $zero, 0xEC($a1)
    ctx->pc = 0x20fd84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 236), GPR_U32(ctx, 0));
    // 0x20fd88: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x20fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x20fd8c: 0xaca000f0  sw          $zero, 0xF0($a1)
    ctx->pc = 0x20fd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 240), GPR_U32(ctx, 0));
    // 0x20fd90: 0xaca000f4  sw          $zero, 0xF4($a1)
    ctx->pc = 0x20fd90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 0));
    // 0x20fd94: 0xaca000f8  sw          $zero, 0xF8($a1)
    ctx->pc = 0x20fd94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 248), GPR_U32(ctx, 0));
    // 0x20fd98: 0xaca000fc  sw          $zero, 0xFC($a1)
    ctx->pc = 0x20fd98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 252), GPR_U32(ctx, 0));
    // 0x20fd9c: 0xaca00100  sw          $zero, 0x100($a1)
    ctx->pc = 0x20fd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 0));
    // 0x20fda0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x20FDA0u;
    {
        const bool branch_taken_0x20fda0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FDA0u;
            // 0x20fda4: 0xaca00104  sw          $zero, 0x104($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fda0) {
            ctx->pc = 0x20FD74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20fd74;
        }
    }
    ctx->pc = 0x20FDA8u;
    // 0x20fda8: 0xae400128  sw          $zero, 0x128($s2)
    ctx->pc = 0x20fda8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 296), GPR_U32(ctx, 0));
    // 0x20fdac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20fdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20fdb0: 0xae40012c  sw          $zero, 0x12C($s2)
    ctx->pc = 0x20fdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 300), GPR_U32(ctx, 0));
    // 0x20fdb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20fdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fdb8: 0xae400188  sw          $zero, 0x188($s2)
    ctx->pc = 0x20fdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 0));
    // 0x20fdbc: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x20FDBCu;
    SET_GPR_U32(ctx, 31, 0x20FDC4u);
    ctx->pc = 0x20FDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FDBCu;
            // 0x20fdc0: 0xae42018c  sw          $v0, 0x18C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FDC4u; }
        if (ctx->pc != 0x20FDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FDC4u; }
        if (ctx->pc != 0x20FDC4u) { return; }
    }
    ctx->pc = 0x20FDC4u;
label_20fdc4:
    // 0x20fdc4: 0xe64001b8  swc1        $f0, 0x1B8($s2)
    ctx->pc = 0x20fdc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 440), bits); }
    // 0x20fdc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20fdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fdcc: 0xae4001c0  sw          $zero, 0x1C0($s2)
    ctx->pc = 0x20fdccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 0));
    // 0x20fdd0: 0xae4001cc  sw          $zero, 0x1CC($s2)
    ctx->pc = 0x20fdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 460), GPR_U32(ctx, 0));
    // 0x20fdd4: 0xae4001d0  sw          $zero, 0x1D0($s2)
    ctx->pc = 0x20fdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 464), GPR_U32(ctx, 0));
    // 0x20fdd8: 0xae4001d4  sw          $zero, 0x1D4($s2)
    ctx->pc = 0x20fdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 0));
    // 0x20fddc: 0xae4001d8  sw          $zero, 0x1D8($s2)
    ctx->pc = 0x20fddcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 472), GPR_U32(ctx, 0));
    // 0x20fde0: 0xc0557f0  jal         func_155FC0
    ctx->pc = 0x20FDE0u;
    SET_GPR_U32(ctx, 31, 0x20FDE8u);
    ctx->pc = 0x20FDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FDE0u;
            // 0x20fde4: 0xae4001dc  sw          $zero, 0x1DC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155FC0u;
    if (runtime->hasFunction(0x155FC0u)) {
        auto targetFn = runtime->lookupFunction(0x155FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FDE8u; }
        if (ctx->pc != 0x20FDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMesWinTbl__6ClsMesFv_0x155fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FDE8u; }
        if (ctx->pc != 0x20FDE8u) { return; }
    }
    ctx->pc = 0x20FDE8u;
label_20fde8:
    // 0x20fde8: 0x8e4517d0  lw          $a1, 0x17D0($s2)
    ctx->pc = 0x20fde8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6096)));
    // 0x20fdec: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x20fdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x20fdf0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20fdf4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x20fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20fdf8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x20fdf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fdfc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x20fdfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe00: 0xae4517d4  sw          $a1, 0x17D4($s2)
    ctx->pc = 0x20fe00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6100), GPR_U32(ctx, 5));
    // 0x20fe04: 0xae4017d8  sw          $zero, 0x17D8($s2)
    ctx->pc = 0x20fe04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6104), GPR_U32(ctx, 0));
    // 0x20fe08: 0xae4017dc  sw          $zero, 0x17DC($s2)
    ctx->pc = 0x20fe08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6108), GPR_U32(ctx, 0));
    // 0x20fe0c: 0xae4417e0  sw          $a0, 0x17E0($s2)
    ctx->pc = 0x20fe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6112), GPR_U32(ctx, 4));
    // 0x20fe10: 0xae4317e4  sw          $v1, 0x17E4($s2)
    ctx->pc = 0x20fe10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6116), GPR_U32(ctx, 3));
    // 0x20fe14: 0xae4017e8  sw          $zero, 0x17E8($s2)
    ctx->pc = 0x20fe14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6120), GPR_U32(ctx, 0));
    // 0x20fe18: 0xa2421800  sb          $v0, 0x1800($s2)
    ctx->pc = 0x20fe18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6144), (uint8_t)GPR_U32(ctx, 2));
label_20fe1c:
    // 0x20fe1c: 0x2551021  addu        $v0, $s2, $s5
    ctx->pc = 0x20fe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x20fe20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20fe20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe24: 0x24441801  addiu       $a0, $v0, 0x1801
    ctx->pc = 0x20fe24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
    // 0x20fe28: 0xc049c86  jal         func_127218
    ctx->pc = 0x20FE28u;
    SET_GPR_U32(ctx, 31, 0x20FE30u);
    ctx->pc = 0x20FE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FE28u;
            // 0x20fe2c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FE30u; }
        if (ctx->pc != 0x20FE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FE30u; }
        if (ctx->pc != 0x20FE30u) { return; }
    }
    ctx->pc = 0x20FE30u;
label_20fe30:
    // 0x20fe30: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x20fe30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x20fe34: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x20fe34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x20fe38: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x20FE38u;
    {
        const bool branch_taken_0x20fe38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FE38u;
            // 0x20fe3c: 0x26b50020  addiu       $s5, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe38) {
            ctx->pc = 0x20FE1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20fe1c;
        }
    }
    ctx->pc = 0x20FE40u;
    // 0x20fe40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20fe40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20fe44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe48: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20fe4c:
    // 0x20fe4c: 0x2453021  addu        $a2, $s2, $a1
    ctx->pc = 0x20fe4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x20fe50: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x20fe50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x20fe54: 0xacc31a04  sw          $v1, 0x1A04($a2)
    ctx->pc = 0x20fe54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6660), GPR_U32(ctx, 3));
    // 0x20fe58: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x20fe58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x20fe5c: 0xacc31a08  sw          $v1, 0x1A08($a2)
    ctx->pc = 0x20fe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6664), GPR_U32(ctx, 3));
    // 0x20fe60: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x20fe60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x20fe64: 0xacc31a0c  sw          $v1, 0x1A0C($a2)
    ctx->pc = 0x20fe64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6668), GPR_U32(ctx, 3));
    // 0x20fe68: 0xacc31a10  sw          $v1, 0x1A10($a2)
    ctx->pc = 0x20fe68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6672), GPR_U32(ctx, 3));
    // 0x20fe6c: 0xacc31a14  sw          $v1, 0x1A14($a2)
    ctx->pc = 0x20fe6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6676), GPR_U32(ctx, 3));
    // 0x20fe70: 0xacc31a18  sw          $v1, 0x1A18($a2)
    ctx->pc = 0x20fe70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6680), GPR_U32(ctx, 3));
    // 0x20fe74: 0xacc31a1c  sw          $v1, 0x1A1C($a2)
    ctx->pc = 0x20fe74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6684), GPR_U32(ctx, 3));
    // 0x20fe78: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x20FE78u;
    {
        const bool branch_taken_0x20fe78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FE78u;
            // 0x20fe7c: 0xacc31a20  sw          $v1, 0x1A20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 6688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe78) {
            ctx->pc = 0x20FE4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20fe4c;
        }
    }
    ctx->pc = 0x20FE80u;
    // 0x20fe80: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x20fe80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20fe84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20fe88:
    // 0x20fe88: 0x2442821  addu        $a1, $s2, $a0
    ctx->pc = 0x20fe88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x20fe8c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20fe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x20fe90: 0xaca01a44  sw          $zero, 0x1A44($a1)
    ctx->pc = 0x20fe90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6724), GPR_U32(ctx, 0));
    // 0x20fe94: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x20fe94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x20fe98: 0xaca01a84  sw          $zero, 0x1A84($a1)
    ctx->pc = 0x20fe98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6788), GPR_U32(ctx, 0));
    // 0x20fe9c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x20fe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x20fea0: 0xaca01a48  sw          $zero, 0x1A48($a1)
    ctx->pc = 0x20fea0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6728), GPR_U32(ctx, 0));
    // 0x20fea4: 0xaca01a88  sw          $zero, 0x1A88($a1)
    ctx->pc = 0x20fea4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6792), GPR_U32(ctx, 0));
    // 0x20fea8: 0xaca01a4c  sw          $zero, 0x1A4C($a1)
    ctx->pc = 0x20fea8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6732), GPR_U32(ctx, 0));
    // 0x20feac: 0xaca01a8c  sw          $zero, 0x1A8C($a1)
    ctx->pc = 0x20feacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6796), GPR_U32(ctx, 0));
    // 0x20feb0: 0xaca01a50  sw          $zero, 0x1A50($a1)
    ctx->pc = 0x20feb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6736), GPR_U32(ctx, 0));
    // 0x20feb4: 0xaca01a90  sw          $zero, 0x1A90($a1)
    ctx->pc = 0x20feb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6800), GPR_U32(ctx, 0));
    // 0x20feb8: 0xaca01a54  sw          $zero, 0x1A54($a1)
    ctx->pc = 0x20feb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6740), GPR_U32(ctx, 0));
    // 0x20febc: 0xaca01a94  sw          $zero, 0x1A94($a1)
    ctx->pc = 0x20febcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6804), GPR_U32(ctx, 0));
    // 0x20fec0: 0xaca01a58  sw          $zero, 0x1A58($a1)
    ctx->pc = 0x20fec0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6744), GPR_U32(ctx, 0));
    // 0x20fec4: 0xaca01a98  sw          $zero, 0x1A98($a1)
    ctx->pc = 0x20fec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6808), GPR_U32(ctx, 0));
    // 0x20fec8: 0xaca01a5c  sw          $zero, 0x1A5C($a1)
    ctx->pc = 0x20fec8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6748), GPR_U32(ctx, 0));
    // 0x20fecc: 0xaca01a9c  sw          $zero, 0x1A9C($a1)
    ctx->pc = 0x20feccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6812), GPR_U32(ctx, 0));
    // 0x20fed0: 0xaca01a60  sw          $zero, 0x1A60($a1)
    ctx->pc = 0x20fed0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6752), GPR_U32(ctx, 0));
    // 0x20fed4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x20FED4u;
    {
        const bool branch_taken_0x20fed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FED4u;
            // 0x20fed8: 0xaca01aa0  sw          $zero, 0x1AA0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 6816), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fed4) {
            ctx->pc = 0x20FE88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20fe88;
        }
    }
    ctx->pc = 0x20FEDCu;
    // 0x20fedc: 0xae401ac4  sw          $zero, 0x1AC4($s2)
    ctx->pc = 0x20fedcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6852), GPR_U32(ctx, 0));
    // 0x20fee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20fee4: 0xae401ac8  sw          $zero, 0x1AC8($s2)
    ctx->pc = 0x20fee4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6856), GPR_U32(ctx, 0));
    // 0x20fee8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20feec: 0xae421acc  sw          $v0, 0x1ACC($s2)
    ctx->pc = 0x20feecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6860), GPR_U32(ctx, 2));
    // 0x20fef0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20fef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fef4: 0xae401ad0  sw          $zero, 0x1AD0($s2)
    ctx->pc = 0x20fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6864), GPR_U32(ctx, 0));
    // 0x20fef8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20fef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fefc: 0xae401ad4  sw          $zero, 0x1AD4($s2)
    ctx->pc = 0x20fefcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6868), GPR_U32(ctx, 0));
    // 0x20ff00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20ff00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ff04: 0xae401ad8  sw          $zero, 0x1AD8($s2)
    ctx->pc = 0x20ff04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6872), GPR_U32(ctx, 0));
    // 0x20ff08: 0xae431adc  sw          $v1, 0x1ADC($s2)
    ctx->pc = 0x20ff08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6876), GPR_U32(ctx, 3));
    // 0x20ff0c: 0xae431ae0  sw          $v1, 0x1AE0($s2)
    ctx->pc = 0x20ff0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6880), GPR_U32(ctx, 3));
    // 0x20ff10: 0xae431ae4  sw          $v1, 0x1AE4($s2)
    ctx->pc = 0x20ff10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6884), GPR_U32(ctx, 3));
    // 0x20ff14: 0xae401ae8  sw          $zero, 0x1AE8($s2)
    ctx->pc = 0x20ff14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6888), GPR_U32(ctx, 0));
    // 0x20ff18: 0xae401aec  sw          $zero, 0x1AEC($s2)
    ctx->pc = 0x20ff18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6892), GPR_U32(ctx, 0));
    // 0x20ff1c: 0xae401af0  sw          $zero, 0x1AF0($s2)
    ctx->pc = 0x20ff1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6896), GPR_U32(ctx, 0));
    // 0x20ff20: 0xae401af4  sw          $zero, 0x1AF4($s2)
    ctx->pc = 0x20ff20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6900), GPR_U32(ctx, 0));
    // 0x20ff24: 0xae401af8  sw          $zero, 0x1AF8($s2)
    ctx->pc = 0x20ff24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6904), GPR_U32(ctx, 0));
    // 0x20ff28: 0xae401afc  sw          $zero, 0x1AFC($s2)
    ctx->pc = 0x20ff28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6908), GPR_U32(ctx, 0));
    // 0x20ff2c: 0xae401b00  sw          $zero, 0x1B00($s2)
    ctx->pc = 0x20ff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6912), GPR_U32(ctx, 0));
    // 0x20ff30: 0xae431b04  sw          $v1, 0x1B04($s2)
    ctx->pc = 0x20ff30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6916), GPR_U32(ctx, 3));
    // 0x20ff34: 0xae431b08  sw          $v1, 0x1B08($s2)
    ctx->pc = 0x20ff34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6920), GPR_U32(ctx, 3));
    // 0x20ff38: 0xae431b0c  sw          $v1, 0x1B0C($s2)
    ctx->pc = 0x20ff38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6924), GPR_U32(ctx, 3));
    // 0x20ff3c: 0xae431b10  sw          $v1, 0x1B10($s2)
    ctx->pc = 0x20ff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6928), GPR_U32(ctx, 3));
    // 0x20ff40: 0xae401b14  sw          $zero, 0x1B14($s2)
    ctx->pc = 0x20ff40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6932), GPR_U32(ctx, 0));
    // 0x20ff44: 0xae401b18  sw          $zero, 0x1B18($s2)
    ctx->pc = 0x20ff44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6936), GPR_U32(ctx, 0));
    // 0x20ff48: 0xae401b1c  sw          $zero, 0x1B1C($s2)
    ctx->pc = 0x20ff48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6940), GPR_U32(ctx, 0));
    // 0x20ff4c: 0xae401b20  sw          $zero, 0x1B20($s2)
    ctx->pc = 0x20ff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6944), GPR_U32(ctx, 0));
    // 0x20ff50: 0xae401b24  sw          $zero, 0x1B24($s2)
    ctx->pc = 0x20ff50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6948), GPR_U32(ctx, 0));
    // 0x20ff54: 0xae401b28  sw          $zero, 0x1B28($s2)
    ctx->pc = 0x20ff54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6952), GPR_U32(ctx, 0));
    // 0x20ff58: 0xae401b30  sw          $zero, 0x1B30($s2)
    ctx->pc = 0x20ff58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6960), GPR_U32(ctx, 0));
    // 0x20ff5c: 0xae401b34  sw          $zero, 0x1B34($s2)
    ctx->pc = 0x20ff5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6964), GPR_U32(ctx, 0));
    // 0x20ff60: 0xae401b3c  sw          $zero, 0x1B3C($s2)
    ctx->pc = 0x20ff60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6972), GPR_U32(ctx, 0));
    // 0x20ff64: 0xae401b38  sw          $zero, 0x1B38($s2)
    ctx->pc = 0x20ff64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6968), GPR_U32(ctx, 0));
    // 0x20ff68: 0xae401b40  sw          $zero, 0x1B40($s2)
    ctx->pc = 0x20ff68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6976), GPR_U32(ctx, 0));
label_20ff6c:
    // 0x20ff6c: 0x2453821  addu        $a3, $s2, $a1
    ctx->pc = 0x20ff6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x20ff70: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x20ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x20ff74: 0xace01b44  sw          $zero, 0x1B44($a3)
    ctx->pc = 0x20ff74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6980), GPR_U32(ctx, 0));
    // 0x20ff78: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20ff78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20ff7c: 0xac401b94  sw          $zero, 0x1B94($v0)
    ctx->pc = 0x20ff7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7060), GPR_U32(ctx, 0));
    // 0x20ff80: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x20ff80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x20ff84: 0xac401b98  sw          $zero, 0x1B98($v0)
    ctx->pc = 0x20ff84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7064), GPR_U32(ctx, 0));
    // 0x20ff88: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x20ff88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x20ff8c: 0xace01c34  sw          $zero, 0x1C34($a3)
    ctx->pc = 0x20ff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7220), GPR_U32(ctx, 0));
    // 0x20ff90: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x20ff90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x20ff94: 0xace31c84  sw          $v1, 0x1C84($a3)
    ctx->pc = 0x20ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7300), GPR_U32(ctx, 3));
    // 0x20ff98: 0xace01cd4  sw          $zero, 0x1CD4($a3)
    ctx->pc = 0x20ff98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7380), GPR_U32(ctx, 0));
    // 0x20ff9c: 0xace01d24  sw          $zero, 0x1D24($a3)
    ctx->pc = 0x20ff9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7460), GPR_U32(ctx, 0));
    // 0x20ffa0: 0xace01d74  sw          $zero, 0x1D74($a3)
    ctx->pc = 0x20ffa0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7540), GPR_U32(ctx, 0));
    // 0x20ffa4: 0xace01dc4  sw          $zero, 0x1DC4($a3)
    ctx->pc = 0x20ffa4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7620), GPR_U32(ctx, 0));
    // 0x20ffa8: 0xace01e14  sw          $zero, 0x1E14($a3)
    ctx->pc = 0x20ffa8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7700), GPR_U32(ctx, 0));
    // 0x20ffac: 0xace31e64  sw          $v1, 0x1E64($a3)
    ctx->pc = 0x20ffacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7780), GPR_U32(ctx, 3));
    // 0x20ffb0: 0xace01eb4  sw          $zero, 0x1EB4($a3)
    ctx->pc = 0x20ffb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7860), GPR_U32(ctx, 0));
    // 0x20ffb4: 0xace01f04  sw          $zero, 0x1F04($a3)
    ctx->pc = 0x20ffb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7940), GPR_U32(ctx, 0));
    // 0x20ffb8: 0xace01f54  sw          $zero, 0x1F54($a3)
    ctx->pc = 0x20ffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8020), GPR_U32(ctx, 0));
    // 0x20ffbc: 0xace31fa4  sw          $v1, 0x1FA4($a3)
    ctx->pc = 0x20ffbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8100), GPR_U32(ctx, 3));
    // 0x20ffc0: 0xace31ff4  sw          $v1, 0x1FF4($a3)
    ctx->pc = 0x20ffc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8180), GPR_U32(ctx, 3));
    // 0x20ffc4: 0xace02044  sw          $zero, 0x2044($a3)
    ctx->pc = 0x20ffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8260), GPR_U32(ctx, 0));
    // 0x20ffc8: 0xace02094  sw          $zero, 0x2094($a3)
    ctx->pc = 0x20ffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8340), GPR_U32(ctx, 0));
    // 0x20ffcc: 0xace020e4  sw          $zero, 0x20E4($a3)
    ctx->pc = 0x20ffccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8420), GPR_U32(ctx, 0));
    // 0x20ffd0: 0xace02134  sw          $zero, 0x2134($a3)
    ctx->pc = 0x20ffd0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8500), GPR_U32(ctx, 0));
    // 0x20ffd4: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x20FFD4u;
    {
        const bool branch_taken_0x20ffd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FFD4u;
            // 0x20ffd8: 0xace02184  sw          $zero, 0x2184($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ffd4) {
            ctx->pc = 0x20FF6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20ff6c;
        }
    }
    ctx->pc = 0x20FFDCu;
    // 0x20ffdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20ffdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ffe0: 0xc054ba8  jal         func_152EA0
    ctx->pc = 0x20FFE0u;
    SET_GPR_U32(ctx, 31, 0x20FFE8u);
    ctx->pc = 0x20FFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FFE0u;
            // 0x20ffe4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EA0u;
    if (runtime->hasFunction(0x152EA0u)) {
        auto targetFn = runtime->lookupFunction(0x152EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FFE8u; }
        if (ctx->pc != 0x20FFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff__6ClsMesFPs_0x152ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FFE8u; }
        if (ctx->pc != 0x20FFE8u) { return; }
    }
    ctx->pc = 0x20FFE8u;
label_20ffe8:
    // 0x20ffe8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x20ffe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x20ffec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20ffecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fff0: 0x8c22d624  lw          $v0, -0x29DC($at)
    ctx->pc = 0x20fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x20fff4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20fff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fff8: 0xc054bac  jal         func_152EB0
    ctx->pc = 0x20FFF8u;
    SET_GPR_U32(ctx, 31, 0x210000u);
    ctx->pc = 0x20FFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FFF8u;
            // 0x20fffc: 0xae421b2c  sw          $v0, 0x1B2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 6956), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EB0u;
    if (runtime->hasFunction(0x152EB0u)) {
        auto targetFn = runtime->lookupFunction(0x152EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210000u; }
        if (ctx->pc != 0x210000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff_system__6ClsMesFPs_0x152eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210000u; }
        if (ctx->pc != 0x210000u) { return; }
    }
    ctx->pc = 0x210000u;
label_210000:
    // 0x210000: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x210000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210004: 0xc054cdc  jal         func_153370
    ctx->pc = 0x210004u;
    SET_GPR_U32(ctx, 31, 0x21000Cu);
    ctx->pc = 0x210008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210004u;
            // 0x210008: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21000Cu; }
        if (ctx->pc != 0x21000Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21000Cu; }
        if (ctx->pc != 0x21000Cu) { return; }
    }
    ctx->pc = 0x21000Cu;
label_21000c:
    // 0x21000c: 0xae400184  sw          $zero, 0x184($s2)
    ctx->pc = 0x21000cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 0));
    // 0x210010: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x210010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x210014: 0xae4001b8  sw          $zero, 0x1B8($s2)
    ctx->pc = 0x210014u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 0));
    // 0x210018: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x210018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21001c: 0xae4001bc  sw          $zero, 0x1BC($s2)
    ctx->pc = 0x21001cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 0));
    // 0x210020: 0xae430190  sw          $v1, 0x190($s2)
    ctx->pc = 0x210020u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 400), GPR_U32(ctx, 3));
    // 0x210024: 0xae420194  sw          $v0, 0x194($s2)
    ctx->pc = 0x210024u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
    // 0x210028: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x210028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x21002c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21002cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x210030: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x210030u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    // 0x210034: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x210034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x210038: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x210038u;
    SET_GPR_U32(ctx, 31, 0x210040u);
    ctx->pc = 0x21003Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210038u;
            // 0x21003c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210040u; }
        if (ctx->pc != 0x210040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210040u; }
        if (ctx->pc != 0x210040u) { return; }
    }
    ctx->pc = 0x210040u;
label_210040:
    // 0x210040: 0x8e350010  lw          $s5, 0x10($s1)
    ctx->pc = 0x210040u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x210044: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x210044u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210048: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x210048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21004c: 0xaea000b4  sw          $zero, 0xB4($s5)
    ctx->pc = 0x21004cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 180), GPR_U32(ctx, 0));
    // 0x210050: 0xaea000d4  sw          $zero, 0xD4($s5)
    ctx->pc = 0x210050u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 212), GPR_U32(ctx, 0));
    // 0x210054: 0xaea000d8  sw          $zero, 0xD8($s5)
    ctx->pc = 0x210054u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 216), GPR_U32(ctx, 0));
    // 0x210058: 0xaea000dc  sw          $zero, 0xDC($s5)
    ctx->pc = 0x210058u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 220), GPR_U32(ctx, 0));
    // 0x21005c: 0xaea000e0  sw          $zero, 0xE0($s5)
    ctx->pc = 0x21005cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 224), GPR_U32(ctx, 0));
    // 0x210060: 0xaea000e4  sw          $zero, 0xE4($s5)
    ctx->pc = 0x210060u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 228), GPR_U32(ctx, 0));
label_210064:
    // 0x210064: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x210064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x210068: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x210068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x21006c: 0xaca000e8  sw          $zero, 0xE8($a1)
    ctx->pc = 0x21006cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 232), GPR_U32(ctx, 0));
    // 0x210070: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x210070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x210074: 0xaca000ec  sw          $zero, 0xEC($a1)
    ctx->pc = 0x210074u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 236), GPR_U32(ctx, 0));
    // 0x210078: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x210078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x21007c: 0xaca000f0  sw          $zero, 0xF0($a1)
    ctx->pc = 0x21007cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 240), GPR_U32(ctx, 0));
    // 0x210080: 0xaca000f4  sw          $zero, 0xF4($a1)
    ctx->pc = 0x210080u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 0));
    // 0x210084: 0xaca000f8  sw          $zero, 0xF8($a1)
    ctx->pc = 0x210084u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 248), GPR_U32(ctx, 0));
    // 0x210088: 0xaca000fc  sw          $zero, 0xFC($a1)
    ctx->pc = 0x210088u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 252), GPR_U32(ctx, 0));
    // 0x21008c: 0xaca00100  sw          $zero, 0x100($a1)
    ctx->pc = 0x21008cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 0));
    // 0x210090: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x210090u;
    {
        const bool branch_taken_0x210090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210090u;
            // 0x210094: 0xaca00104  sw          $zero, 0x104($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210090) {
            ctx->pc = 0x210064u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210064;
        }
    }
    ctx->pc = 0x210098u;
    // 0x210098: 0xaea00128  sw          $zero, 0x128($s5)
    ctx->pc = 0x210098u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 296), GPR_U32(ctx, 0));
    // 0x21009c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21009cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2100a0: 0xaea0012c  sw          $zero, 0x12C($s5)
    ctx->pc = 0x2100a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 300), GPR_U32(ctx, 0));
    // 0x2100a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2100a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2100a8: 0xaea00188  sw          $zero, 0x188($s5)
    ctx->pc = 0x2100a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 392), GPR_U32(ctx, 0));
    // 0x2100ac: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x2100ACu;
    SET_GPR_U32(ctx, 31, 0x2100B4u);
    ctx->pc = 0x2100B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2100ACu;
            // 0x2100b0: 0xaea2018c  sw          $v0, 0x18C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2100B4u; }
        if (ctx->pc != 0x2100B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2100B4u; }
        if (ctx->pc != 0x2100B4u) { return; }
    }
    ctx->pc = 0x2100B4u;
label_2100b4:
    // 0x2100b4: 0xe6a001b8  swc1        $f0, 0x1B8($s5)
    ctx->pc = 0x2100b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 440), bits); }
    // 0x2100b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2100b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2100bc: 0xaea001c0  sw          $zero, 0x1C0($s5)
    ctx->pc = 0x2100bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 448), GPR_U32(ctx, 0));
    // 0x2100c0: 0xaea001cc  sw          $zero, 0x1CC($s5)
    ctx->pc = 0x2100c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 460), GPR_U32(ctx, 0));
    // 0x2100c4: 0xaea001d0  sw          $zero, 0x1D0($s5)
    ctx->pc = 0x2100c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 464), GPR_U32(ctx, 0));
    // 0x2100c8: 0xaea001d4  sw          $zero, 0x1D4($s5)
    ctx->pc = 0x2100c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 468), GPR_U32(ctx, 0));
    // 0x2100cc: 0xaea001d8  sw          $zero, 0x1D8($s5)
    ctx->pc = 0x2100ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 472), GPR_U32(ctx, 0));
    // 0x2100d0: 0xc0557f0  jal         func_155FC0
    ctx->pc = 0x2100D0u;
    SET_GPR_U32(ctx, 31, 0x2100D8u);
    ctx->pc = 0x2100D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2100D0u;
            // 0x2100d4: 0xaea001dc  sw          $zero, 0x1DC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155FC0u;
    if (runtime->hasFunction(0x155FC0u)) {
        auto targetFn = runtime->lookupFunction(0x155FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2100D8u; }
        if (ctx->pc != 0x2100D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMesWinTbl__6ClsMesFv_0x155fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2100D8u; }
        if (ctx->pc != 0x2100D8u) { return; }
    }
    ctx->pc = 0x2100D8u;
label_2100d8:
    // 0x2100d8: 0x8ea517d0  lw          $a1, 0x17D0($s5)
    ctx->pc = 0x2100d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6096)));
    // 0x2100dc: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x2100dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2100e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2100e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2100e4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2100e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2100e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2100e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2100ec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2100ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2100f0: 0xaea517d4  sw          $a1, 0x17D4($s5)
    ctx->pc = 0x2100f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6100), GPR_U32(ctx, 5));
    // 0x2100f4: 0xaea017d8  sw          $zero, 0x17D8($s5)
    ctx->pc = 0x2100f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6104), GPR_U32(ctx, 0));
    // 0x2100f8: 0xaea017dc  sw          $zero, 0x17DC($s5)
    ctx->pc = 0x2100f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6108), GPR_U32(ctx, 0));
    // 0x2100fc: 0xaea417e0  sw          $a0, 0x17E0($s5)
    ctx->pc = 0x2100fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6112), GPR_U32(ctx, 4));
    // 0x210100: 0xaea317e4  sw          $v1, 0x17E4($s5)
    ctx->pc = 0x210100u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6116), GPR_U32(ctx, 3));
    // 0x210104: 0xaea017e8  sw          $zero, 0x17E8($s5)
    ctx->pc = 0x210104u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6120), GPR_U32(ctx, 0));
    // 0x210108: 0xa2a21800  sb          $v0, 0x1800($s5)
    ctx->pc = 0x210108u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 6144), (uint8_t)GPR_U32(ctx, 2));
label_21010c:
    // 0x21010c: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x21010cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x210110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x210110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210114: 0x24441801  addiu       $a0, $v0, 0x1801
    ctx->pc = 0x210114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
    // 0x210118: 0xc049c86  jal         func_127218
    ctx->pc = 0x210118u;
    SET_GPR_U32(ctx, 31, 0x210120u);
    ctx->pc = 0x21011Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210118u;
            // 0x21011c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210120u; }
        if (ctx->pc != 0x210120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210120u; }
        if (ctx->pc != 0x210120u) { return; }
    }
    ctx->pc = 0x210120u;
label_210120:
    // 0x210120: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x210120u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x210124: 0x2a420010  slti        $v0, $s2, 0x10
    ctx->pc = 0x210124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x210128: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x210128u;
    {
        const bool branch_taken_0x210128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21012Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210128u;
            // 0x21012c: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210128) {
            ctx->pc = 0x21010Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21010c;
        }
    }
    ctx->pc = 0x210130u;
    // 0x210130: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x210130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210134: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x210134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210138: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x210138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21013c:
    // 0x21013c: 0x2a53021  addu        $a2, $s5, $a1
    ctx->pc = 0x21013cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x210140: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x210140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x210144: 0xacc31a04  sw          $v1, 0x1A04($a2)
    ctx->pc = 0x210144u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6660), GPR_U32(ctx, 3));
    // 0x210148: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x210148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x21014c: 0xacc31a08  sw          $v1, 0x1A08($a2)
    ctx->pc = 0x21014cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6664), GPR_U32(ctx, 3));
    // 0x210150: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x210150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x210154: 0xacc31a0c  sw          $v1, 0x1A0C($a2)
    ctx->pc = 0x210154u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6668), GPR_U32(ctx, 3));
    // 0x210158: 0xacc31a10  sw          $v1, 0x1A10($a2)
    ctx->pc = 0x210158u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6672), GPR_U32(ctx, 3));
    // 0x21015c: 0xacc31a14  sw          $v1, 0x1A14($a2)
    ctx->pc = 0x21015cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6676), GPR_U32(ctx, 3));
    // 0x210160: 0xacc31a18  sw          $v1, 0x1A18($a2)
    ctx->pc = 0x210160u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6680), GPR_U32(ctx, 3));
    // 0x210164: 0xacc31a1c  sw          $v1, 0x1A1C($a2)
    ctx->pc = 0x210164u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6684), GPR_U32(ctx, 3));
    // 0x210168: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x210168u;
    {
        const bool branch_taken_0x210168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21016Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210168u;
            // 0x21016c: 0xacc31a20  sw          $v1, 0x1A20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 6688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210168) {
            ctx->pc = 0x21013Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21013c;
        }
    }
    ctx->pc = 0x210170u;
    // 0x210170: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x210170u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210174: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x210174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210178:
    // 0x210178: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x210178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x21017c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x21017cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x210180: 0xaca01a44  sw          $zero, 0x1A44($a1)
    ctx->pc = 0x210180u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6724), GPR_U32(ctx, 0));
    // 0x210184: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x210184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x210188: 0xaca01a84  sw          $zero, 0x1A84($a1)
    ctx->pc = 0x210188u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6788), GPR_U32(ctx, 0));
    // 0x21018c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x21018cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x210190: 0xaca01a48  sw          $zero, 0x1A48($a1)
    ctx->pc = 0x210190u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6728), GPR_U32(ctx, 0));
    // 0x210194: 0xaca01a88  sw          $zero, 0x1A88($a1)
    ctx->pc = 0x210194u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6792), GPR_U32(ctx, 0));
    // 0x210198: 0xaca01a4c  sw          $zero, 0x1A4C($a1)
    ctx->pc = 0x210198u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6732), GPR_U32(ctx, 0));
    // 0x21019c: 0xaca01a8c  sw          $zero, 0x1A8C($a1)
    ctx->pc = 0x21019cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6796), GPR_U32(ctx, 0));
    // 0x2101a0: 0xaca01a50  sw          $zero, 0x1A50($a1)
    ctx->pc = 0x2101a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6736), GPR_U32(ctx, 0));
    // 0x2101a4: 0xaca01a90  sw          $zero, 0x1A90($a1)
    ctx->pc = 0x2101a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6800), GPR_U32(ctx, 0));
    // 0x2101a8: 0xaca01a54  sw          $zero, 0x1A54($a1)
    ctx->pc = 0x2101a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6740), GPR_U32(ctx, 0));
    // 0x2101ac: 0xaca01a94  sw          $zero, 0x1A94($a1)
    ctx->pc = 0x2101acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6804), GPR_U32(ctx, 0));
    // 0x2101b0: 0xaca01a58  sw          $zero, 0x1A58($a1)
    ctx->pc = 0x2101b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6744), GPR_U32(ctx, 0));
    // 0x2101b4: 0xaca01a98  sw          $zero, 0x1A98($a1)
    ctx->pc = 0x2101b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6808), GPR_U32(ctx, 0));
    // 0x2101b8: 0xaca01a5c  sw          $zero, 0x1A5C($a1)
    ctx->pc = 0x2101b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6748), GPR_U32(ctx, 0));
    // 0x2101bc: 0xaca01a9c  sw          $zero, 0x1A9C($a1)
    ctx->pc = 0x2101bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6812), GPR_U32(ctx, 0));
    // 0x2101c0: 0xaca01a60  sw          $zero, 0x1A60($a1)
    ctx->pc = 0x2101c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6752), GPR_U32(ctx, 0));
    // 0x2101c4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2101C4u;
    {
        const bool branch_taken_0x2101c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2101C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2101C4u;
            // 0x2101c8: 0xaca01aa0  sw          $zero, 0x1AA0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 6816), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2101c4) {
            ctx->pc = 0x210178u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210178;
        }
    }
    ctx->pc = 0x2101CCu;
    // 0x2101cc: 0xaea01ac4  sw          $zero, 0x1AC4($s5)
    ctx->pc = 0x2101ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6852), GPR_U32(ctx, 0));
    // 0x2101d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2101d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2101d4: 0xaea01ac8  sw          $zero, 0x1AC8($s5)
    ctx->pc = 0x2101d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6856), GPR_U32(ctx, 0));
    // 0x2101d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2101d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2101dc: 0xaea21acc  sw          $v0, 0x1ACC($s5)
    ctx->pc = 0x2101dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6860), GPR_U32(ctx, 2));
    // 0x2101e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2101e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2101e4: 0xaea01ad0  sw          $zero, 0x1AD0($s5)
    ctx->pc = 0x2101e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6864), GPR_U32(ctx, 0));
    // 0x2101e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2101e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2101ec: 0xaea01ad4  sw          $zero, 0x1AD4($s5)
    ctx->pc = 0x2101ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6868), GPR_U32(ctx, 0));
    // 0x2101f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2101f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2101f4: 0xaea01ad8  sw          $zero, 0x1AD8($s5)
    ctx->pc = 0x2101f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6872), GPR_U32(ctx, 0));
    // 0x2101f8: 0xaea31adc  sw          $v1, 0x1ADC($s5)
    ctx->pc = 0x2101f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6876), GPR_U32(ctx, 3));
    // 0x2101fc: 0xaea31ae0  sw          $v1, 0x1AE0($s5)
    ctx->pc = 0x2101fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6880), GPR_U32(ctx, 3));
    // 0x210200: 0xaea31ae4  sw          $v1, 0x1AE4($s5)
    ctx->pc = 0x210200u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6884), GPR_U32(ctx, 3));
    // 0x210204: 0xaea01ae8  sw          $zero, 0x1AE8($s5)
    ctx->pc = 0x210204u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6888), GPR_U32(ctx, 0));
    // 0x210208: 0xaea01aec  sw          $zero, 0x1AEC($s5)
    ctx->pc = 0x210208u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6892), GPR_U32(ctx, 0));
    // 0x21020c: 0xaea01af0  sw          $zero, 0x1AF0($s5)
    ctx->pc = 0x21020cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6896), GPR_U32(ctx, 0));
    // 0x210210: 0xaea01af4  sw          $zero, 0x1AF4($s5)
    ctx->pc = 0x210210u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6900), GPR_U32(ctx, 0));
    // 0x210214: 0xaea01af8  sw          $zero, 0x1AF8($s5)
    ctx->pc = 0x210214u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6904), GPR_U32(ctx, 0));
    // 0x210218: 0xaea01afc  sw          $zero, 0x1AFC($s5)
    ctx->pc = 0x210218u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6908), GPR_U32(ctx, 0));
    // 0x21021c: 0xaea01b00  sw          $zero, 0x1B00($s5)
    ctx->pc = 0x21021cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6912), GPR_U32(ctx, 0));
    // 0x210220: 0xaea31b04  sw          $v1, 0x1B04($s5)
    ctx->pc = 0x210220u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6916), GPR_U32(ctx, 3));
    // 0x210224: 0xaea31b08  sw          $v1, 0x1B08($s5)
    ctx->pc = 0x210224u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6920), GPR_U32(ctx, 3));
    // 0x210228: 0xaea31b0c  sw          $v1, 0x1B0C($s5)
    ctx->pc = 0x210228u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6924), GPR_U32(ctx, 3));
    // 0x21022c: 0xaea31b10  sw          $v1, 0x1B10($s5)
    ctx->pc = 0x21022cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6928), GPR_U32(ctx, 3));
    // 0x210230: 0xaea01b14  sw          $zero, 0x1B14($s5)
    ctx->pc = 0x210230u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6932), GPR_U32(ctx, 0));
    // 0x210234: 0xaea01b18  sw          $zero, 0x1B18($s5)
    ctx->pc = 0x210234u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6936), GPR_U32(ctx, 0));
    // 0x210238: 0xaea01b1c  sw          $zero, 0x1B1C($s5)
    ctx->pc = 0x210238u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6940), GPR_U32(ctx, 0));
    // 0x21023c: 0xaea01b20  sw          $zero, 0x1B20($s5)
    ctx->pc = 0x21023cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6944), GPR_U32(ctx, 0));
    // 0x210240: 0xaea01b24  sw          $zero, 0x1B24($s5)
    ctx->pc = 0x210240u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6948), GPR_U32(ctx, 0));
    // 0x210244: 0xaea01b28  sw          $zero, 0x1B28($s5)
    ctx->pc = 0x210244u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6952), GPR_U32(ctx, 0));
    // 0x210248: 0xaea01b30  sw          $zero, 0x1B30($s5)
    ctx->pc = 0x210248u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6960), GPR_U32(ctx, 0));
    // 0x21024c: 0xaea01b34  sw          $zero, 0x1B34($s5)
    ctx->pc = 0x21024cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6964), GPR_U32(ctx, 0));
    // 0x210250: 0xaea01b3c  sw          $zero, 0x1B3C($s5)
    ctx->pc = 0x210250u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6972), GPR_U32(ctx, 0));
    // 0x210254: 0xaea01b38  sw          $zero, 0x1B38($s5)
    ctx->pc = 0x210254u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6968), GPR_U32(ctx, 0));
    // 0x210258: 0xaea01b40  sw          $zero, 0x1B40($s5)
    ctx->pc = 0x210258u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6976), GPR_U32(ctx, 0));
label_21025c:
    // 0x21025c: 0x2a53821  addu        $a3, $s5, $a1
    ctx->pc = 0x21025cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x210260: 0x2a61021  addu        $v0, $s5, $a2
    ctx->pc = 0x210260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x210264: 0xace01b44  sw          $zero, 0x1B44($a3)
    ctx->pc = 0x210264u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6980), GPR_U32(ctx, 0));
    // 0x210268: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x210268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21026c: 0xac401b94  sw          $zero, 0x1B94($v0)
    ctx->pc = 0x21026cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7060), GPR_U32(ctx, 0));
    // 0x210270: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x210270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x210274: 0xac401b98  sw          $zero, 0x1B98($v0)
    ctx->pc = 0x210274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7064), GPR_U32(ctx, 0));
    // 0x210278: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x210278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x21027c: 0xace01c34  sw          $zero, 0x1C34($a3)
    ctx->pc = 0x21027cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7220), GPR_U32(ctx, 0));
    // 0x210280: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x210280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x210284: 0xace31c84  sw          $v1, 0x1C84($a3)
    ctx->pc = 0x210284u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7300), GPR_U32(ctx, 3));
    // 0x210288: 0xace01cd4  sw          $zero, 0x1CD4($a3)
    ctx->pc = 0x210288u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7380), GPR_U32(ctx, 0));
    // 0x21028c: 0xace01d24  sw          $zero, 0x1D24($a3)
    ctx->pc = 0x21028cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7460), GPR_U32(ctx, 0));
    // 0x210290: 0xace01d74  sw          $zero, 0x1D74($a3)
    ctx->pc = 0x210290u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7540), GPR_U32(ctx, 0));
    // 0x210294: 0xace01dc4  sw          $zero, 0x1DC4($a3)
    ctx->pc = 0x210294u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7620), GPR_U32(ctx, 0));
    // 0x210298: 0xace01e14  sw          $zero, 0x1E14($a3)
    ctx->pc = 0x210298u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7700), GPR_U32(ctx, 0));
    // 0x21029c: 0xace31e64  sw          $v1, 0x1E64($a3)
    ctx->pc = 0x21029cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7780), GPR_U32(ctx, 3));
    // 0x2102a0: 0xace01eb4  sw          $zero, 0x1EB4($a3)
    ctx->pc = 0x2102a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7860), GPR_U32(ctx, 0));
    // 0x2102a4: 0xace01f04  sw          $zero, 0x1F04($a3)
    ctx->pc = 0x2102a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7940), GPR_U32(ctx, 0));
    // 0x2102a8: 0xace01f54  sw          $zero, 0x1F54($a3)
    ctx->pc = 0x2102a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8020), GPR_U32(ctx, 0));
    // 0x2102ac: 0xace31fa4  sw          $v1, 0x1FA4($a3)
    ctx->pc = 0x2102acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8100), GPR_U32(ctx, 3));
    // 0x2102b0: 0xace31ff4  sw          $v1, 0x1FF4($a3)
    ctx->pc = 0x2102b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8180), GPR_U32(ctx, 3));
    // 0x2102b4: 0xace02044  sw          $zero, 0x2044($a3)
    ctx->pc = 0x2102b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8260), GPR_U32(ctx, 0));
    // 0x2102b8: 0xace02094  sw          $zero, 0x2094($a3)
    ctx->pc = 0x2102b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8340), GPR_U32(ctx, 0));
    // 0x2102bc: 0xace020e4  sw          $zero, 0x20E4($a3)
    ctx->pc = 0x2102bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8420), GPR_U32(ctx, 0));
    // 0x2102c0: 0xace02134  sw          $zero, 0x2134($a3)
    ctx->pc = 0x2102c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8500), GPR_U32(ctx, 0));
    // 0x2102c4: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2102C4u;
    {
        const bool branch_taken_0x2102c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2102C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2102C4u;
            // 0x2102c8: 0xace02184  sw          $zero, 0x2184($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2102c4) {
            ctx->pc = 0x21025Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21025c;
        }
    }
    ctx->pc = 0x2102CCu;
    // 0x2102cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2102ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2102d0: 0xc054ba8  jal         func_152EA0
    ctx->pc = 0x2102D0u;
    SET_GPR_U32(ctx, 31, 0x2102D8u);
    ctx->pc = 0x2102D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2102D0u;
            // 0x2102d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EA0u;
    if (runtime->hasFunction(0x152EA0u)) {
        auto targetFn = runtime->lookupFunction(0x152EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2102D8u; }
        if (ctx->pc != 0x2102D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff__6ClsMesFPs_0x152ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2102D8u; }
        if (ctx->pc != 0x2102D8u) { return; }
    }
    ctx->pc = 0x2102D8u;
label_2102d8:
    // 0x2102d8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2102d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2102dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2102dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2102e0: 0x8c22d624  lw          $v0, -0x29DC($at)
    ctx->pc = 0x2102e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x2102e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2102e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2102e8: 0xc054bac  jal         func_152EB0
    ctx->pc = 0x2102E8u;
    SET_GPR_U32(ctx, 31, 0x2102F0u);
    ctx->pc = 0x2102ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2102E8u;
            // 0x2102ec: 0xaea21b2c  sw          $v0, 0x1B2C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 6956), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EB0u;
    if (runtime->hasFunction(0x152EB0u)) {
        auto targetFn = runtime->lookupFunction(0x152EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2102F0u; }
        if (ctx->pc != 0x2102F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff_system__6ClsMesFPs_0x152eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2102F0u; }
        if (ctx->pc != 0x2102F0u) { return; }
    }
    ctx->pc = 0x2102F0u;
label_2102f0:
    // 0x2102f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2102f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2102f4: 0xc054cdc  jal         func_153370
    ctx->pc = 0x2102F4u;
    SET_GPR_U32(ctx, 31, 0x2102FCu);
    ctx->pc = 0x2102F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2102F4u;
            // 0x2102f8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2102FCu; }
        if (ctx->pc != 0x2102FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2102FCu; }
        if (ctx->pc != 0x2102FCu) { return; }
    }
    ctx->pc = 0x2102FCu;
label_2102fc:
    // 0x2102fc: 0xaea00184  sw          $zero, 0x184($s5)
    ctx->pc = 0x2102fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 388), GPR_U32(ctx, 0));
    // 0x210300: 0xaea001b8  sw          $zero, 0x1B8($s5)
    ctx->pc = 0x210300u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 440), GPR_U32(ctx, 0));
    // 0x210304: 0xaea001bc  sw          $zero, 0x1BC($s5)
    ctx->pc = 0x210304u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 444), GPR_U32(ctx, 0));
    // 0x210308: 0x8ea21ae4  lw          $v0, 0x1AE4($s5)
    ctx->pc = 0x210308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6884)));
    // 0x21030c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21030Cu;
    {
        const bool branch_taken_0x21030c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x21030c) {
            ctx->pc = 0x210318u;
            goto label_210318;
        }
    }
    ctx->pc = 0x210314u;
    // 0x210314: 0xaea01b00  sw          $zero, 0x1B00($s5)
    ctx->pc = 0x210314u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6912), GPR_U32(ctx, 0));
label_210318:
    // 0x210318: 0xaea01ae4  sw          $zero, 0x1AE4($s5)
    ctx->pc = 0x210318u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6884), GPR_U32(ctx, 0));
    // 0x21031c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21031cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210320: 0xaea21af8  sw          $v0, 0x1AF8($s5)
    ctx->pc = 0x210320u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6904), GPR_U32(ctx, 2));
    // 0x210324: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x210324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x210328: 0xaea01b14  sw          $zero, 0x1B14($s5)
    ctx->pc = 0x210328u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6932), GPR_U32(ctx, 0));
    // 0x21032c: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x21032cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x210330: 0xaea30190  sw          $v1, 0x190($s5)
    ctx->pc = 0x210330u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 400), GPR_U32(ctx, 3));
    // 0x210334: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x210334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210338: 0xaea20194  sw          $v0, 0x194($s5)
    ctx->pc = 0x210338u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 404), GPR_U32(ctx, 2));
    // 0x21033c: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x21033Cu;
    SET_GPR_U32(ctx, 31, 0x210344u);
    ctx->pc = 0x210340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21033Cu;
            // 0x210340: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210344u; }
        if (ctx->pc != 0x210344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210344u; }
        if (ctx->pc != 0x210344u) { return; }
    }
    ctx->pc = 0x210344u;
label_210344:
    // 0x210344: 0x8e350038  lw          $s5, 0x38($s1)
    ctx->pc = 0x210344u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x210348: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x210348u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21034c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21034cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210350: 0xaea000b4  sw          $zero, 0xB4($s5)
    ctx->pc = 0x210350u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 180), GPR_U32(ctx, 0));
    // 0x210354: 0xaea000d4  sw          $zero, 0xD4($s5)
    ctx->pc = 0x210354u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 212), GPR_U32(ctx, 0));
    // 0x210358: 0xaea000d8  sw          $zero, 0xD8($s5)
    ctx->pc = 0x210358u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 216), GPR_U32(ctx, 0));
    // 0x21035c: 0xaea000dc  sw          $zero, 0xDC($s5)
    ctx->pc = 0x21035cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 220), GPR_U32(ctx, 0));
    // 0x210360: 0xaea000e0  sw          $zero, 0xE0($s5)
    ctx->pc = 0x210360u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 224), GPR_U32(ctx, 0));
    // 0x210364: 0xaea000e4  sw          $zero, 0xE4($s5)
    ctx->pc = 0x210364u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 228), GPR_U32(ctx, 0));
label_210368:
    // 0x210368: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x210368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x21036c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x21036cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x210370: 0xaca000e8  sw          $zero, 0xE8($a1)
    ctx->pc = 0x210370u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 232), GPR_U32(ctx, 0));
    // 0x210374: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x210374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x210378: 0xaca000ec  sw          $zero, 0xEC($a1)
    ctx->pc = 0x210378u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 236), GPR_U32(ctx, 0));
    // 0x21037c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x21037cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x210380: 0xaca000f0  sw          $zero, 0xF0($a1)
    ctx->pc = 0x210380u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 240), GPR_U32(ctx, 0));
    // 0x210384: 0xaca000f4  sw          $zero, 0xF4($a1)
    ctx->pc = 0x210384u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 0));
    // 0x210388: 0xaca000f8  sw          $zero, 0xF8($a1)
    ctx->pc = 0x210388u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 248), GPR_U32(ctx, 0));
    // 0x21038c: 0xaca000fc  sw          $zero, 0xFC($a1)
    ctx->pc = 0x21038cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 252), GPR_U32(ctx, 0));
    // 0x210390: 0xaca00100  sw          $zero, 0x100($a1)
    ctx->pc = 0x210390u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 0));
    // 0x210394: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x210394u;
    {
        const bool branch_taken_0x210394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210394u;
            // 0x210398: 0xaca00104  sw          $zero, 0x104($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210394) {
            ctx->pc = 0x210368u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210368;
        }
    }
    ctx->pc = 0x21039Cu;
    // 0x21039c: 0xaea00128  sw          $zero, 0x128($s5)
    ctx->pc = 0x21039cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 296), GPR_U32(ctx, 0));
    // 0x2103a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2103a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2103a4: 0xaea0012c  sw          $zero, 0x12C($s5)
    ctx->pc = 0x2103a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 300), GPR_U32(ctx, 0));
    // 0x2103a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2103a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2103ac: 0xaea00188  sw          $zero, 0x188($s5)
    ctx->pc = 0x2103acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 392), GPR_U32(ctx, 0));
    // 0x2103b0: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x2103B0u;
    SET_GPR_U32(ctx, 31, 0x2103B8u);
    ctx->pc = 0x2103B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2103B0u;
            // 0x2103b4: 0xaea2018c  sw          $v0, 0x18C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2103B8u; }
        if (ctx->pc != 0x2103B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2103B8u; }
        if (ctx->pc != 0x2103B8u) { return; }
    }
    ctx->pc = 0x2103B8u;
label_2103b8:
    // 0x2103b8: 0xe6a001b8  swc1        $f0, 0x1B8($s5)
    ctx->pc = 0x2103b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 440), bits); }
    // 0x2103bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2103bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2103c0: 0xaea001c0  sw          $zero, 0x1C0($s5)
    ctx->pc = 0x2103c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 448), GPR_U32(ctx, 0));
    // 0x2103c4: 0xaea001cc  sw          $zero, 0x1CC($s5)
    ctx->pc = 0x2103c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 460), GPR_U32(ctx, 0));
    // 0x2103c8: 0xaea001d0  sw          $zero, 0x1D0($s5)
    ctx->pc = 0x2103c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 464), GPR_U32(ctx, 0));
    // 0x2103cc: 0xaea001d4  sw          $zero, 0x1D4($s5)
    ctx->pc = 0x2103ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 468), GPR_U32(ctx, 0));
    // 0x2103d0: 0xaea001d8  sw          $zero, 0x1D8($s5)
    ctx->pc = 0x2103d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 472), GPR_U32(ctx, 0));
    // 0x2103d4: 0xc0557f0  jal         func_155FC0
    ctx->pc = 0x2103D4u;
    SET_GPR_U32(ctx, 31, 0x2103DCu);
    ctx->pc = 0x2103D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2103D4u;
            // 0x2103d8: 0xaea001dc  sw          $zero, 0x1DC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155FC0u;
    if (runtime->hasFunction(0x155FC0u)) {
        auto targetFn = runtime->lookupFunction(0x155FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2103DCu; }
        if (ctx->pc != 0x2103DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMesWinTbl__6ClsMesFv_0x155fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2103DCu; }
        if (ctx->pc != 0x2103DCu) { return; }
    }
    ctx->pc = 0x2103DCu;
label_2103dc:
    // 0x2103dc: 0x8ea517d0  lw          $a1, 0x17D0($s5)
    ctx->pc = 0x2103dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6096)));
    // 0x2103e0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x2103e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2103e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2103e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2103e8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2103e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2103ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2103ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2103f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2103f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2103f4: 0xaea517d4  sw          $a1, 0x17D4($s5)
    ctx->pc = 0x2103f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6100), GPR_U32(ctx, 5));
    // 0x2103f8: 0xaea017d8  sw          $zero, 0x17D8($s5)
    ctx->pc = 0x2103f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6104), GPR_U32(ctx, 0));
    // 0x2103fc: 0xaea017dc  sw          $zero, 0x17DC($s5)
    ctx->pc = 0x2103fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6108), GPR_U32(ctx, 0));
    // 0x210400: 0xaea417e0  sw          $a0, 0x17E0($s5)
    ctx->pc = 0x210400u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6112), GPR_U32(ctx, 4));
    // 0x210404: 0xaea317e4  sw          $v1, 0x17E4($s5)
    ctx->pc = 0x210404u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6116), GPR_U32(ctx, 3));
    // 0x210408: 0xaea017e8  sw          $zero, 0x17E8($s5)
    ctx->pc = 0x210408u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6120), GPR_U32(ctx, 0));
    // 0x21040c: 0xa2a21800  sb          $v0, 0x1800($s5)
    ctx->pc = 0x21040cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 6144), (uint8_t)GPR_U32(ctx, 2));
label_210410:
    // 0x210410: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x210410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x210414: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x210414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210418: 0x24441801  addiu       $a0, $v0, 0x1801
    ctx->pc = 0x210418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
    // 0x21041c: 0xc049c86  jal         func_127218
    ctx->pc = 0x21041Cu;
    SET_GPR_U32(ctx, 31, 0x210424u);
    ctx->pc = 0x210420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21041Cu;
            // 0x210420: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210424u; }
        if (ctx->pc != 0x210424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210424u; }
        if (ctx->pc != 0x210424u) { return; }
    }
    ctx->pc = 0x210424u;
label_210424:
    // 0x210424: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x210424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x210428: 0x2a420010  slti        $v0, $s2, 0x10
    ctx->pc = 0x210428u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x21042c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21042Cu;
    {
        const bool branch_taken_0x21042c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21042Cu;
            // 0x210430: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21042c) {
            ctx->pc = 0x210410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210410;
        }
    }
    ctx->pc = 0x210434u;
    // 0x210434: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x210434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210438: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x210438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21043c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21043cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_210440:
    // 0x210440: 0x2a53021  addu        $a2, $s5, $a1
    ctx->pc = 0x210440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x210444: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x210444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x210448: 0xacc31a04  sw          $v1, 0x1A04($a2)
    ctx->pc = 0x210448u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6660), GPR_U32(ctx, 3));
    // 0x21044c: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x21044cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x210450: 0xacc31a08  sw          $v1, 0x1A08($a2)
    ctx->pc = 0x210450u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6664), GPR_U32(ctx, 3));
    // 0x210454: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x210454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x210458: 0xacc31a0c  sw          $v1, 0x1A0C($a2)
    ctx->pc = 0x210458u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6668), GPR_U32(ctx, 3));
    // 0x21045c: 0xacc31a10  sw          $v1, 0x1A10($a2)
    ctx->pc = 0x21045cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6672), GPR_U32(ctx, 3));
    // 0x210460: 0xacc31a14  sw          $v1, 0x1A14($a2)
    ctx->pc = 0x210460u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6676), GPR_U32(ctx, 3));
    // 0x210464: 0xacc31a18  sw          $v1, 0x1A18($a2)
    ctx->pc = 0x210464u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6680), GPR_U32(ctx, 3));
    // 0x210468: 0xacc31a1c  sw          $v1, 0x1A1C($a2)
    ctx->pc = 0x210468u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6684), GPR_U32(ctx, 3));
    // 0x21046c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x21046Cu;
    {
        const bool branch_taken_0x21046c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21046Cu;
            // 0x210470: 0xacc31a20  sw          $v1, 0x1A20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 6688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21046c) {
            ctx->pc = 0x210440u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210440;
        }
    }
    ctx->pc = 0x210474u;
    // 0x210474: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x210474u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210478: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x210478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21047c:
    // 0x21047c: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x21047cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x210480: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x210480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x210484: 0xaca01a44  sw          $zero, 0x1A44($a1)
    ctx->pc = 0x210484u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6724), GPR_U32(ctx, 0));
    // 0x210488: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x210488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x21048c: 0xaca01a84  sw          $zero, 0x1A84($a1)
    ctx->pc = 0x21048cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6788), GPR_U32(ctx, 0));
    // 0x210490: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x210490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x210494: 0xaca01a48  sw          $zero, 0x1A48($a1)
    ctx->pc = 0x210494u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6728), GPR_U32(ctx, 0));
    // 0x210498: 0xaca01a88  sw          $zero, 0x1A88($a1)
    ctx->pc = 0x210498u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6792), GPR_U32(ctx, 0));
    // 0x21049c: 0xaca01a4c  sw          $zero, 0x1A4C($a1)
    ctx->pc = 0x21049cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6732), GPR_U32(ctx, 0));
    // 0x2104a0: 0xaca01a8c  sw          $zero, 0x1A8C($a1)
    ctx->pc = 0x2104a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6796), GPR_U32(ctx, 0));
    // 0x2104a4: 0xaca01a50  sw          $zero, 0x1A50($a1)
    ctx->pc = 0x2104a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6736), GPR_U32(ctx, 0));
    // 0x2104a8: 0xaca01a90  sw          $zero, 0x1A90($a1)
    ctx->pc = 0x2104a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6800), GPR_U32(ctx, 0));
    // 0x2104ac: 0xaca01a54  sw          $zero, 0x1A54($a1)
    ctx->pc = 0x2104acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6740), GPR_U32(ctx, 0));
    // 0x2104b0: 0xaca01a94  sw          $zero, 0x1A94($a1)
    ctx->pc = 0x2104b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6804), GPR_U32(ctx, 0));
    // 0x2104b4: 0xaca01a58  sw          $zero, 0x1A58($a1)
    ctx->pc = 0x2104b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6744), GPR_U32(ctx, 0));
    // 0x2104b8: 0xaca01a98  sw          $zero, 0x1A98($a1)
    ctx->pc = 0x2104b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6808), GPR_U32(ctx, 0));
    // 0x2104bc: 0xaca01a5c  sw          $zero, 0x1A5C($a1)
    ctx->pc = 0x2104bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6748), GPR_U32(ctx, 0));
    // 0x2104c0: 0xaca01a9c  sw          $zero, 0x1A9C($a1)
    ctx->pc = 0x2104c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6812), GPR_U32(ctx, 0));
    // 0x2104c4: 0xaca01a60  sw          $zero, 0x1A60($a1)
    ctx->pc = 0x2104c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6752), GPR_U32(ctx, 0));
    // 0x2104c8: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2104C8u;
    {
        const bool branch_taken_0x2104c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2104CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2104C8u;
            // 0x2104cc: 0xaca01aa0  sw          $zero, 0x1AA0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 6816), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2104c8) {
            ctx->pc = 0x21047Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21047c;
        }
    }
    ctx->pc = 0x2104D0u;
    // 0x2104d0: 0xaea01ac4  sw          $zero, 0x1AC4($s5)
    ctx->pc = 0x2104d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6852), GPR_U32(ctx, 0));
    // 0x2104d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2104d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2104d8: 0xaea01ac8  sw          $zero, 0x1AC8($s5)
    ctx->pc = 0x2104d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6856), GPR_U32(ctx, 0));
    // 0x2104dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2104dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2104e0: 0xaea21acc  sw          $v0, 0x1ACC($s5)
    ctx->pc = 0x2104e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6860), GPR_U32(ctx, 2));
    // 0x2104e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2104e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2104e8: 0xaea01ad0  sw          $zero, 0x1AD0($s5)
    ctx->pc = 0x2104e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6864), GPR_U32(ctx, 0));
    // 0x2104ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2104ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2104f0: 0xaea01ad4  sw          $zero, 0x1AD4($s5)
    ctx->pc = 0x2104f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6868), GPR_U32(ctx, 0));
    // 0x2104f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2104f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2104f8: 0xaea01ad8  sw          $zero, 0x1AD8($s5)
    ctx->pc = 0x2104f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6872), GPR_U32(ctx, 0));
    // 0x2104fc: 0xaea31adc  sw          $v1, 0x1ADC($s5)
    ctx->pc = 0x2104fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6876), GPR_U32(ctx, 3));
    // 0x210500: 0xaea31ae0  sw          $v1, 0x1AE0($s5)
    ctx->pc = 0x210500u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6880), GPR_U32(ctx, 3));
    // 0x210504: 0xaea31ae4  sw          $v1, 0x1AE4($s5)
    ctx->pc = 0x210504u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6884), GPR_U32(ctx, 3));
    // 0x210508: 0xaea01ae8  sw          $zero, 0x1AE8($s5)
    ctx->pc = 0x210508u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6888), GPR_U32(ctx, 0));
    // 0x21050c: 0xaea01aec  sw          $zero, 0x1AEC($s5)
    ctx->pc = 0x21050cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6892), GPR_U32(ctx, 0));
    // 0x210510: 0xaea01af0  sw          $zero, 0x1AF0($s5)
    ctx->pc = 0x210510u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6896), GPR_U32(ctx, 0));
    // 0x210514: 0xaea01af4  sw          $zero, 0x1AF4($s5)
    ctx->pc = 0x210514u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6900), GPR_U32(ctx, 0));
    // 0x210518: 0xaea01af8  sw          $zero, 0x1AF8($s5)
    ctx->pc = 0x210518u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6904), GPR_U32(ctx, 0));
    // 0x21051c: 0xaea01afc  sw          $zero, 0x1AFC($s5)
    ctx->pc = 0x21051cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6908), GPR_U32(ctx, 0));
    // 0x210520: 0xaea01b00  sw          $zero, 0x1B00($s5)
    ctx->pc = 0x210520u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6912), GPR_U32(ctx, 0));
    // 0x210524: 0xaea31b04  sw          $v1, 0x1B04($s5)
    ctx->pc = 0x210524u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6916), GPR_U32(ctx, 3));
    // 0x210528: 0xaea31b08  sw          $v1, 0x1B08($s5)
    ctx->pc = 0x210528u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6920), GPR_U32(ctx, 3));
    // 0x21052c: 0xaea31b0c  sw          $v1, 0x1B0C($s5)
    ctx->pc = 0x21052cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6924), GPR_U32(ctx, 3));
    // 0x210530: 0xaea31b10  sw          $v1, 0x1B10($s5)
    ctx->pc = 0x210530u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6928), GPR_U32(ctx, 3));
    // 0x210534: 0xaea01b14  sw          $zero, 0x1B14($s5)
    ctx->pc = 0x210534u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6932), GPR_U32(ctx, 0));
    // 0x210538: 0xaea01b18  sw          $zero, 0x1B18($s5)
    ctx->pc = 0x210538u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6936), GPR_U32(ctx, 0));
    // 0x21053c: 0xaea01b1c  sw          $zero, 0x1B1C($s5)
    ctx->pc = 0x21053cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6940), GPR_U32(ctx, 0));
    // 0x210540: 0xaea01b20  sw          $zero, 0x1B20($s5)
    ctx->pc = 0x210540u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6944), GPR_U32(ctx, 0));
    // 0x210544: 0xaea01b24  sw          $zero, 0x1B24($s5)
    ctx->pc = 0x210544u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6948), GPR_U32(ctx, 0));
    // 0x210548: 0xaea01b28  sw          $zero, 0x1B28($s5)
    ctx->pc = 0x210548u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6952), GPR_U32(ctx, 0));
    // 0x21054c: 0xaea01b30  sw          $zero, 0x1B30($s5)
    ctx->pc = 0x21054cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6960), GPR_U32(ctx, 0));
    // 0x210550: 0xaea01b34  sw          $zero, 0x1B34($s5)
    ctx->pc = 0x210550u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6964), GPR_U32(ctx, 0));
    // 0x210554: 0xaea01b3c  sw          $zero, 0x1B3C($s5)
    ctx->pc = 0x210554u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6972), GPR_U32(ctx, 0));
    // 0x210558: 0xaea01b38  sw          $zero, 0x1B38($s5)
    ctx->pc = 0x210558u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6968), GPR_U32(ctx, 0));
    // 0x21055c: 0xaea01b40  sw          $zero, 0x1B40($s5)
    ctx->pc = 0x21055cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6976), GPR_U32(ctx, 0));
label_210560:
    // 0x210560: 0x2a53821  addu        $a3, $s5, $a1
    ctx->pc = 0x210560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x210564: 0x2a61021  addu        $v0, $s5, $a2
    ctx->pc = 0x210564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x210568: 0xace01b44  sw          $zero, 0x1B44($a3)
    ctx->pc = 0x210568u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6980), GPR_U32(ctx, 0));
    // 0x21056c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21056cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x210570: 0xac401b94  sw          $zero, 0x1B94($v0)
    ctx->pc = 0x210570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7060), GPR_U32(ctx, 0));
    // 0x210574: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x210574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x210578: 0xac401b98  sw          $zero, 0x1B98($v0)
    ctx->pc = 0x210578u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7064), GPR_U32(ctx, 0));
    // 0x21057c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x21057cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x210580: 0xace01c34  sw          $zero, 0x1C34($a3)
    ctx->pc = 0x210580u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7220), GPR_U32(ctx, 0));
    // 0x210584: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x210584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x210588: 0xace31c84  sw          $v1, 0x1C84($a3)
    ctx->pc = 0x210588u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7300), GPR_U32(ctx, 3));
    // 0x21058c: 0xace01cd4  sw          $zero, 0x1CD4($a3)
    ctx->pc = 0x21058cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7380), GPR_U32(ctx, 0));
    // 0x210590: 0xace01d24  sw          $zero, 0x1D24($a3)
    ctx->pc = 0x210590u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7460), GPR_U32(ctx, 0));
    // 0x210594: 0xace01d74  sw          $zero, 0x1D74($a3)
    ctx->pc = 0x210594u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7540), GPR_U32(ctx, 0));
    // 0x210598: 0xace01dc4  sw          $zero, 0x1DC4($a3)
    ctx->pc = 0x210598u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7620), GPR_U32(ctx, 0));
    // 0x21059c: 0xace01e14  sw          $zero, 0x1E14($a3)
    ctx->pc = 0x21059cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7700), GPR_U32(ctx, 0));
    // 0x2105a0: 0xace31e64  sw          $v1, 0x1E64($a3)
    ctx->pc = 0x2105a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7780), GPR_U32(ctx, 3));
    // 0x2105a4: 0xace01eb4  sw          $zero, 0x1EB4($a3)
    ctx->pc = 0x2105a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7860), GPR_U32(ctx, 0));
    // 0x2105a8: 0xace01f04  sw          $zero, 0x1F04($a3)
    ctx->pc = 0x2105a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7940), GPR_U32(ctx, 0));
    // 0x2105ac: 0xace01f54  sw          $zero, 0x1F54($a3)
    ctx->pc = 0x2105acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8020), GPR_U32(ctx, 0));
    // 0x2105b0: 0xace31fa4  sw          $v1, 0x1FA4($a3)
    ctx->pc = 0x2105b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8100), GPR_U32(ctx, 3));
    // 0x2105b4: 0xace31ff4  sw          $v1, 0x1FF4($a3)
    ctx->pc = 0x2105b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8180), GPR_U32(ctx, 3));
    // 0x2105b8: 0xace02044  sw          $zero, 0x2044($a3)
    ctx->pc = 0x2105b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8260), GPR_U32(ctx, 0));
    // 0x2105bc: 0xace02094  sw          $zero, 0x2094($a3)
    ctx->pc = 0x2105bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8340), GPR_U32(ctx, 0));
    // 0x2105c0: 0xace020e4  sw          $zero, 0x20E4($a3)
    ctx->pc = 0x2105c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8420), GPR_U32(ctx, 0));
    // 0x2105c4: 0xace02134  sw          $zero, 0x2134($a3)
    ctx->pc = 0x2105c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8500), GPR_U32(ctx, 0));
    // 0x2105c8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2105C8u;
    {
        const bool branch_taken_0x2105c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2105CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2105C8u;
            // 0x2105cc: 0xace02184  sw          $zero, 0x2184($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2105c8) {
            ctx->pc = 0x210560u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210560;
        }
    }
    ctx->pc = 0x2105D0u;
    // 0x2105d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2105d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2105d4: 0xc054ba8  jal         func_152EA0
    ctx->pc = 0x2105D4u;
    SET_GPR_U32(ctx, 31, 0x2105DCu);
    ctx->pc = 0x2105D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2105D4u;
            // 0x2105d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EA0u;
    if (runtime->hasFunction(0x152EA0u)) {
        auto targetFn = runtime->lookupFunction(0x152EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2105DCu; }
        if (ctx->pc != 0x2105DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff__6ClsMesFPs_0x152ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2105DCu; }
        if (ctx->pc != 0x2105DCu) { return; }
    }
    ctx->pc = 0x2105DCu;
label_2105dc:
    // 0x2105dc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2105dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2105e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2105e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2105e4: 0x8c22d624  lw          $v0, -0x29DC($at)
    ctx->pc = 0x2105e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x2105e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2105e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2105ec: 0xc054bac  jal         func_152EB0
    ctx->pc = 0x2105ECu;
    SET_GPR_U32(ctx, 31, 0x2105F4u);
    ctx->pc = 0x2105F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2105ECu;
            // 0x2105f0: 0xaea21b2c  sw          $v0, 0x1B2C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 6956), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EB0u;
    if (runtime->hasFunction(0x152EB0u)) {
        auto targetFn = runtime->lookupFunction(0x152EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2105F4u; }
        if (ctx->pc != 0x2105F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff_system__6ClsMesFPs_0x152eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2105F4u; }
        if (ctx->pc != 0x2105F4u) { return; }
    }
    ctx->pc = 0x2105F4u;
label_2105f4:
    // 0x2105f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2105f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2105f8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2105f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2105fc: 0xc054cdc  jal         func_153370
    ctx->pc = 0x2105FCu;
    SET_GPR_U32(ctx, 31, 0x210604u);
    ctx->pc = 0x210600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2105FCu;
            // 0x210600: 0xaea017f8  sw          $zero, 0x17F8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 6136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210604u; }
        if (ctx->pc != 0x210604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210604u; }
        if (ctx->pc != 0x210604u) { return; }
    }
    ctx->pc = 0x210604u;
label_210604:
    // 0x210604: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x210604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x210608: 0xaea20184  sw          $v0, 0x184($s5)
    ctx->pc = 0x210608u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 388), GPR_U32(ctx, 2));
    // 0x21060c: 0xaea001b8  sw          $zero, 0x1B8($s5)
    ctx->pc = 0x21060cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 440), GPR_U32(ctx, 0));
    // 0x210610: 0xaea001bc  sw          $zero, 0x1BC($s5)
    ctx->pc = 0x210610u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 444), GPR_U32(ctx, 0));
    // 0x210614: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x210614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x210618: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x210618u;
    SET_GPR_U32(ctx, 31, 0x210620u);
    ctx->pc = 0x21061Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210618u;
            // 0x21061c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210620u; }
        if (ctx->pc != 0x210620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210620u; }
        if (ctx->pc != 0x210620u) { return; }
    }
    ctx->pc = 0x210620u;
label_210620:
    // 0x210620: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x210620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x210624: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x210624u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210628: 0xaea2014c  sw          $v0, 0x14C($s5)
    ctx->pc = 0x210628u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 332), GPR_U32(ctx, 2));
    // 0x21062c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21062cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210630: 0x8e35002c  lw          $s5, 0x2C($s1)
    ctx->pc = 0x210630u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x210634: 0xaea000b4  sw          $zero, 0xB4($s5)
    ctx->pc = 0x210634u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 180), GPR_U32(ctx, 0));
    // 0x210638: 0xaea000d4  sw          $zero, 0xD4($s5)
    ctx->pc = 0x210638u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 212), GPR_U32(ctx, 0));
    // 0x21063c: 0xaea000d8  sw          $zero, 0xD8($s5)
    ctx->pc = 0x21063cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 216), GPR_U32(ctx, 0));
    // 0x210640: 0xaea000dc  sw          $zero, 0xDC($s5)
    ctx->pc = 0x210640u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 220), GPR_U32(ctx, 0));
    // 0x210644: 0xaea000e0  sw          $zero, 0xE0($s5)
    ctx->pc = 0x210644u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 224), GPR_U32(ctx, 0));
    // 0x210648: 0xaea000e4  sw          $zero, 0xE4($s5)
    ctx->pc = 0x210648u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 228), GPR_U32(ctx, 0));
label_21064c:
    // 0x21064c: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x21064cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x210650: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x210650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x210654: 0xaca000e8  sw          $zero, 0xE8($a1)
    ctx->pc = 0x210654u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 232), GPR_U32(ctx, 0));
    // 0x210658: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x210658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x21065c: 0xaca000ec  sw          $zero, 0xEC($a1)
    ctx->pc = 0x21065cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 236), GPR_U32(ctx, 0));
    // 0x210660: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x210660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x210664: 0xaca000f0  sw          $zero, 0xF0($a1)
    ctx->pc = 0x210664u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 240), GPR_U32(ctx, 0));
    // 0x210668: 0xaca000f4  sw          $zero, 0xF4($a1)
    ctx->pc = 0x210668u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 0));
    // 0x21066c: 0xaca000f8  sw          $zero, 0xF8($a1)
    ctx->pc = 0x21066cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 248), GPR_U32(ctx, 0));
    // 0x210670: 0xaca000fc  sw          $zero, 0xFC($a1)
    ctx->pc = 0x210670u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 252), GPR_U32(ctx, 0));
    // 0x210674: 0xaca00100  sw          $zero, 0x100($a1)
    ctx->pc = 0x210674u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 0));
    // 0x210678: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x210678u;
    {
        const bool branch_taken_0x210678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21067Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210678u;
            // 0x21067c: 0xaca00104  sw          $zero, 0x104($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210678) {
            ctx->pc = 0x21064Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21064c;
        }
    }
    ctx->pc = 0x210680u;
    // 0x210680: 0xaea00128  sw          $zero, 0x128($s5)
    ctx->pc = 0x210680u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 296), GPR_U32(ctx, 0));
    // 0x210684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x210684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210688: 0xaea0012c  sw          $zero, 0x12C($s5)
    ctx->pc = 0x210688u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 300), GPR_U32(ctx, 0));
    // 0x21068c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21068cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210690: 0xaea00188  sw          $zero, 0x188($s5)
    ctx->pc = 0x210690u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 392), GPR_U32(ctx, 0));
    // 0x210694: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x210694u;
    SET_GPR_U32(ctx, 31, 0x21069Cu);
    ctx->pc = 0x210698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210694u;
            // 0x210698: 0xaea2018c  sw          $v0, 0x18C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21069Cu; }
        if (ctx->pc != 0x21069Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21069Cu; }
        if (ctx->pc != 0x21069Cu) { return; }
    }
    ctx->pc = 0x21069Cu;
label_21069c:
    // 0x21069c: 0xe6a001b8  swc1        $f0, 0x1B8($s5)
    ctx->pc = 0x21069cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 440), bits); }
    // 0x2106a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2106a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2106a4: 0xaea001c0  sw          $zero, 0x1C0($s5)
    ctx->pc = 0x2106a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 448), GPR_U32(ctx, 0));
    // 0x2106a8: 0xaea001cc  sw          $zero, 0x1CC($s5)
    ctx->pc = 0x2106a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 460), GPR_U32(ctx, 0));
    // 0x2106ac: 0xaea001d0  sw          $zero, 0x1D0($s5)
    ctx->pc = 0x2106acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 464), GPR_U32(ctx, 0));
    // 0x2106b0: 0xaea001d4  sw          $zero, 0x1D4($s5)
    ctx->pc = 0x2106b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 468), GPR_U32(ctx, 0));
    // 0x2106b4: 0xaea001d8  sw          $zero, 0x1D8($s5)
    ctx->pc = 0x2106b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 472), GPR_U32(ctx, 0));
    // 0x2106b8: 0xc0557f0  jal         func_155FC0
    ctx->pc = 0x2106B8u;
    SET_GPR_U32(ctx, 31, 0x2106C0u);
    ctx->pc = 0x2106BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2106B8u;
            // 0x2106bc: 0xaea001dc  sw          $zero, 0x1DC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155FC0u;
    if (runtime->hasFunction(0x155FC0u)) {
        auto targetFn = runtime->lookupFunction(0x155FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2106C0u; }
        if (ctx->pc != 0x2106C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMesWinTbl__6ClsMesFv_0x155fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2106C0u; }
        if (ctx->pc != 0x2106C0u) { return; }
    }
    ctx->pc = 0x2106C0u;
label_2106c0:
    // 0x2106c0: 0x8ea517d0  lw          $a1, 0x17D0($s5)
    ctx->pc = 0x2106c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6096)));
    // 0x2106c4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x2106c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2106c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2106c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2106cc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2106ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2106d0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2106d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2106d4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2106d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2106d8: 0xaea517d4  sw          $a1, 0x17D4($s5)
    ctx->pc = 0x2106d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6100), GPR_U32(ctx, 5));
    // 0x2106dc: 0xaea017d8  sw          $zero, 0x17D8($s5)
    ctx->pc = 0x2106dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6104), GPR_U32(ctx, 0));
    // 0x2106e0: 0xaea017dc  sw          $zero, 0x17DC($s5)
    ctx->pc = 0x2106e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6108), GPR_U32(ctx, 0));
    // 0x2106e4: 0xaea417e0  sw          $a0, 0x17E0($s5)
    ctx->pc = 0x2106e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6112), GPR_U32(ctx, 4));
    // 0x2106e8: 0xaea317e4  sw          $v1, 0x17E4($s5)
    ctx->pc = 0x2106e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6116), GPR_U32(ctx, 3));
    // 0x2106ec: 0xaea017e8  sw          $zero, 0x17E8($s5)
    ctx->pc = 0x2106ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6120), GPR_U32(ctx, 0));
    // 0x2106f0: 0xa2a21800  sb          $v0, 0x1800($s5)
    ctx->pc = 0x2106f0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 6144), (uint8_t)GPR_U32(ctx, 2));
label_2106f4:
    // 0x2106f4: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x2106f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x2106f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2106f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2106fc: 0x24441801  addiu       $a0, $v0, 0x1801
    ctx->pc = 0x2106fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
    // 0x210700: 0xc049c86  jal         func_127218
    ctx->pc = 0x210700u;
    SET_GPR_U32(ctx, 31, 0x210708u);
    ctx->pc = 0x210704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210700u;
            // 0x210704: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210708u; }
        if (ctx->pc != 0x210708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210708u; }
        if (ctx->pc != 0x210708u) { return; }
    }
    ctx->pc = 0x210708u;
label_210708:
    // 0x210708: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x210708u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21070c: 0x2a420010  slti        $v0, $s2, 0x10
    ctx->pc = 0x21070cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x210710: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x210710u;
    {
        const bool branch_taken_0x210710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210710u;
            // 0x210714: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210710) {
            ctx->pc = 0x2106F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2106f4;
        }
    }
    ctx->pc = 0x210718u;
    // 0x210718: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x210718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21071c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21071cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210720: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x210720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_210724:
    // 0x210724: 0x2a53021  addu        $a2, $s5, $a1
    ctx->pc = 0x210724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x210728: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x210728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x21072c: 0xacc31a04  sw          $v1, 0x1A04($a2)
    ctx->pc = 0x21072cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6660), GPR_U32(ctx, 3));
    // 0x210730: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x210730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x210734: 0xacc31a08  sw          $v1, 0x1A08($a2)
    ctx->pc = 0x210734u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6664), GPR_U32(ctx, 3));
    // 0x210738: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x210738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x21073c: 0xacc31a0c  sw          $v1, 0x1A0C($a2)
    ctx->pc = 0x21073cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6668), GPR_U32(ctx, 3));
    // 0x210740: 0xacc31a10  sw          $v1, 0x1A10($a2)
    ctx->pc = 0x210740u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6672), GPR_U32(ctx, 3));
    // 0x210744: 0xacc31a14  sw          $v1, 0x1A14($a2)
    ctx->pc = 0x210744u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6676), GPR_U32(ctx, 3));
    // 0x210748: 0xacc31a18  sw          $v1, 0x1A18($a2)
    ctx->pc = 0x210748u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6680), GPR_U32(ctx, 3));
    // 0x21074c: 0xacc31a1c  sw          $v1, 0x1A1C($a2)
    ctx->pc = 0x21074cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6684), GPR_U32(ctx, 3));
    // 0x210750: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x210750u;
    {
        const bool branch_taken_0x210750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210750u;
            // 0x210754: 0xacc31a20  sw          $v1, 0x1A20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 6688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210750) {
            ctx->pc = 0x210724u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210724;
        }
    }
    ctx->pc = 0x210758u;
    // 0x210758: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x210758u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21075c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21075cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210760:
    // 0x210760: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x210760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x210764: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x210764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x210768: 0xaca01a44  sw          $zero, 0x1A44($a1)
    ctx->pc = 0x210768u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6724), GPR_U32(ctx, 0));
    // 0x21076c: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x21076cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x210770: 0xaca01a84  sw          $zero, 0x1A84($a1)
    ctx->pc = 0x210770u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6788), GPR_U32(ctx, 0));
    // 0x210774: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x210774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x210778: 0xaca01a48  sw          $zero, 0x1A48($a1)
    ctx->pc = 0x210778u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6728), GPR_U32(ctx, 0));
    // 0x21077c: 0xaca01a88  sw          $zero, 0x1A88($a1)
    ctx->pc = 0x21077cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6792), GPR_U32(ctx, 0));
    // 0x210780: 0xaca01a4c  sw          $zero, 0x1A4C($a1)
    ctx->pc = 0x210780u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6732), GPR_U32(ctx, 0));
    // 0x210784: 0xaca01a8c  sw          $zero, 0x1A8C($a1)
    ctx->pc = 0x210784u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6796), GPR_U32(ctx, 0));
    // 0x210788: 0xaca01a50  sw          $zero, 0x1A50($a1)
    ctx->pc = 0x210788u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6736), GPR_U32(ctx, 0));
    // 0x21078c: 0xaca01a90  sw          $zero, 0x1A90($a1)
    ctx->pc = 0x21078cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6800), GPR_U32(ctx, 0));
    // 0x210790: 0xaca01a54  sw          $zero, 0x1A54($a1)
    ctx->pc = 0x210790u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6740), GPR_U32(ctx, 0));
    // 0x210794: 0xaca01a94  sw          $zero, 0x1A94($a1)
    ctx->pc = 0x210794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6804), GPR_U32(ctx, 0));
    // 0x210798: 0xaca01a58  sw          $zero, 0x1A58($a1)
    ctx->pc = 0x210798u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6744), GPR_U32(ctx, 0));
    // 0x21079c: 0xaca01a98  sw          $zero, 0x1A98($a1)
    ctx->pc = 0x21079cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6808), GPR_U32(ctx, 0));
    // 0x2107a0: 0xaca01a5c  sw          $zero, 0x1A5C($a1)
    ctx->pc = 0x2107a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6748), GPR_U32(ctx, 0));
    // 0x2107a4: 0xaca01a9c  sw          $zero, 0x1A9C($a1)
    ctx->pc = 0x2107a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6812), GPR_U32(ctx, 0));
    // 0x2107a8: 0xaca01a60  sw          $zero, 0x1A60($a1)
    ctx->pc = 0x2107a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6752), GPR_U32(ctx, 0));
    // 0x2107ac: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2107ACu;
    {
        const bool branch_taken_0x2107ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2107B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2107ACu;
            // 0x2107b0: 0xaca01aa0  sw          $zero, 0x1AA0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 6816), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2107ac) {
            ctx->pc = 0x210760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210760;
        }
    }
    ctx->pc = 0x2107B4u;
    // 0x2107b4: 0xaea01ac4  sw          $zero, 0x1AC4($s5)
    ctx->pc = 0x2107b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6852), GPR_U32(ctx, 0));
    // 0x2107b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2107b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2107bc: 0xaea01ac8  sw          $zero, 0x1AC8($s5)
    ctx->pc = 0x2107bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6856), GPR_U32(ctx, 0));
    // 0x2107c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2107c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2107c4: 0xaea21acc  sw          $v0, 0x1ACC($s5)
    ctx->pc = 0x2107c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6860), GPR_U32(ctx, 2));
    // 0x2107c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2107c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2107cc: 0xaea01ad0  sw          $zero, 0x1AD0($s5)
    ctx->pc = 0x2107ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6864), GPR_U32(ctx, 0));
    // 0x2107d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2107d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2107d4: 0xaea01ad4  sw          $zero, 0x1AD4($s5)
    ctx->pc = 0x2107d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6868), GPR_U32(ctx, 0));
    // 0x2107d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2107d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2107dc: 0xaea01ad8  sw          $zero, 0x1AD8($s5)
    ctx->pc = 0x2107dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6872), GPR_U32(ctx, 0));
    // 0x2107e0: 0xaea31adc  sw          $v1, 0x1ADC($s5)
    ctx->pc = 0x2107e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6876), GPR_U32(ctx, 3));
    // 0x2107e4: 0xaea31ae0  sw          $v1, 0x1AE0($s5)
    ctx->pc = 0x2107e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6880), GPR_U32(ctx, 3));
    // 0x2107e8: 0xaea31ae4  sw          $v1, 0x1AE4($s5)
    ctx->pc = 0x2107e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6884), GPR_U32(ctx, 3));
    // 0x2107ec: 0xaea01ae8  sw          $zero, 0x1AE8($s5)
    ctx->pc = 0x2107ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6888), GPR_U32(ctx, 0));
    // 0x2107f0: 0xaea01aec  sw          $zero, 0x1AEC($s5)
    ctx->pc = 0x2107f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6892), GPR_U32(ctx, 0));
    // 0x2107f4: 0xaea01af0  sw          $zero, 0x1AF0($s5)
    ctx->pc = 0x2107f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6896), GPR_U32(ctx, 0));
    // 0x2107f8: 0xaea01af4  sw          $zero, 0x1AF4($s5)
    ctx->pc = 0x2107f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6900), GPR_U32(ctx, 0));
    // 0x2107fc: 0xaea01af8  sw          $zero, 0x1AF8($s5)
    ctx->pc = 0x2107fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6904), GPR_U32(ctx, 0));
    // 0x210800: 0xaea01afc  sw          $zero, 0x1AFC($s5)
    ctx->pc = 0x210800u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6908), GPR_U32(ctx, 0));
    // 0x210804: 0xaea01b00  sw          $zero, 0x1B00($s5)
    ctx->pc = 0x210804u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6912), GPR_U32(ctx, 0));
    // 0x210808: 0xaea31b04  sw          $v1, 0x1B04($s5)
    ctx->pc = 0x210808u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6916), GPR_U32(ctx, 3));
    // 0x21080c: 0xaea31b08  sw          $v1, 0x1B08($s5)
    ctx->pc = 0x21080cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6920), GPR_U32(ctx, 3));
    // 0x210810: 0xaea31b0c  sw          $v1, 0x1B0C($s5)
    ctx->pc = 0x210810u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6924), GPR_U32(ctx, 3));
    // 0x210814: 0xaea31b10  sw          $v1, 0x1B10($s5)
    ctx->pc = 0x210814u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6928), GPR_U32(ctx, 3));
    // 0x210818: 0xaea01b14  sw          $zero, 0x1B14($s5)
    ctx->pc = 0x210818u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6932), GPR_U32(ctx, 0));
    // 0x21081c: 0xaea01b18  sw          $zero, 0x1B18($s5)
    ctx->pc = 0x21081cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6936), GPR_U32(ctx, 0));
    // 0x210820: 0xaea01b1c  sw          $zero, 0x1B1C($s5)
    ctx->pc = 0x210820u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6940), GPR_U32(ctx, 0));
    // 0x210824: 0xaea01b20  sw          $zero, 0x1B20($s5)
    ctx->pc = 0x210824u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6944), GPR_U32(ctx, 0));
    // 0x210828: 0xaea01b24  sw          $zero, 0x1B24($s5)
    ctx->pc = 0x210828u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6948), GPR_U32(ctx, 0));
    // 0x21082c: 0xaea01b28  sw          $zero, 0x1B28($s5)
    ctx->pc = 0x21082cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6952), GPR_U32(ctx, 0));
    // 0x210830: 0xaea01b30  sw          $zero, 0x1B30($s5)
    ctx->pc = 0x210830u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6960), GPR_U32(ctx, 0));
    // 0x210834: 0xaea01b34  sw          $zero, 0x1B34($s5)
    ctx->pc = 0x210834u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6964), GPR_U32(ctx, 0));
    // 0x210838: 0xaea01b3c  sw          $zero, 0x1B3C($s5)
    ctx->pc = 0x210838u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6972), GPR_U32(ctx, 0));
    // 0x21083c: 0xaea01b38  sw          $zero, 0x1B38($s5)
    ctx->pc = 0x21083cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6968), GPR_U32(ctx, 0));
    // 0x210840: 0xaea01b40  sw          $zero, 0x1B40($s5)
    ctx->pc = 0x210840u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6976), GPR_U32(ctx, 0));
label_210844:
    // 0x210844: 0x2a53821  addu        $a3, $s5, $a1
    ctx->pc = 0x210844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x210848: 0x2a61021  addu        $v0, $s5, $a2
    ctx->pc = 0x210848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x21084c: 0xace01b44  sw          $zero, 0x1B44($a3)
    ctx->pc = 0x21084cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6980), GPR_U32(ctx, 0));
    // 0x210850: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x210850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x210854: 0xac401b94  sw          $zero, 0x1B94($v0)
    ctx->pc = 0x210854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7060), GPR_U32(ctx, 0));
    // 0x210858: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x210858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x21085c: 0xac401b98  sw          $zero, 0x1B98($v0)
    ctx->pc = 0x21085cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7064), GPR_U32(ctx, 0));
    // 0x210860: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x210860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x210864: 0xace01c34  sw          $zero, 0x1C34($a3)
    ctx->pc = 0x210864u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7220), GPR_U32(ctx, 0));
    // 0x210868: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x210868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x21086c: 0xace31c84  sw          $v1, 0x1C84($a3)
    ctx->pc = 0x21086cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7300), GPR_U32(ctx, 3));
    // 0x210870: 0xace01cd4  sw          $zero, 0x1CD4($a3)
    ctx->pc = 0x210870u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7380), GPR_U32(ctx, 0));
    // 0x210874: 0xace01d24  sw          $zero, 0x1D24($a3)
    ctx->pc = 0x210874u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7460), GPR_U32(ctx, 0));
    // 0x210878: 0xace01d74  sw          $zero, 0x1D74($a3)
    ctx->pc = 0x210878u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7540), GPR_U32(ctx, 0));
    // 0x21087c: 0xace01dc4  sw          $zero, 0x1DC4($a3)
    ctx->pc = 0x21087cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7620), GPR_U32(ctx, 0));
    // 0x210880: 0xace01e14  sw          $zero, 0x1E14($a3)
    ctx->pc = 0x210880u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7700), GPR_U32(ctx, 0));
    // 0x210884: 0xace31e64  sw          $v1, 0x1E64($a3)
    ctx->pc = 0x210884u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7780), GPR_U32(ctx, 3));
    // 0x210888: 0xace01eb4  sw          $zero, 0x1EB4($a3)
    ctx->pc = 0x210888u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7860), GPR_U32(ctx, 0));
    // 0x21088c: 0xace01f04  sw          $zero, 0x1F04($a3)
    ctx->pc = 0x21088cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7940), GPR_U32(ctx, 0));
    // 0x210890: 0xace01f54  sw          $zero, 0x1F54($a3)
    ctx->pc = 0x210890u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8020), GPR_U32(ctx, 0));
    // 0x210894: 0xace31fa4  sw          $v1, 0x1FA4($a3)
    ctx->pc = 0x210894u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8100), GPR_U32(ctx, 3));
    // 0x210898: 0xace31ff4  sw          $v1, 0x1FF4($a3)
    ctx->pc = 0x210898u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8180), GPR_U32(ctx, 3));
    // 0x21089c: 0xace02044  sw          $zero, 0x2044($a3)
    ctx->pc = 0x21089cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8260), GPR_U32(ctx, 0));
    // 0x2108a0: 0xace02094  sw          $zero, 0x2094($a3)
    ctx->pc = 0x2108a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8340), GPR_U32(ctx, 0));
    // 0x2108a4: 0xace020e4  sw          $zero, 0x20E4($a3)
    ctx->pc = 0x2108a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8420), GPR_U32(ctx, 0));
    // 0x2108a8: 0xace02134  sw          $zero, 0x2134($a3)
    ctx->pc = 0x2108a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8500), GPR_U32(ctx, 0));
    // 0x2108ac: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2108ACu;
    {
        const bool branch_taken_0x2108ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2108B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2108ACu;
            // 0x2108b0: 0xace02184  sw          $zero, 0x2184($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2108ac) {
            ctx->pc = 0x210844u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210844;
        }
    }
    ctx->pc = 0x2108B4u;
    // 0x2108b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2108b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2108b8: 0xc054ba8  jal         func_152EA0
    ctx->pc = 0x2108B8u;
    SET_GPR_U32(ctx, 31, 0x2108C0u);
    ctx->pc = 0x2108BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2108B8u;
            // 0x2108bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EA0u;
    if (runtime->hasFunction(0x152EA0u)) {
        auto targetFn = runtime->lookupFunction(0x152EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2108C0u; }
        if (ctx->pc != 0x2108C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff__6ClsMesFPs_0x152ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2108C0u; }
        if (ctx->pc != 0x2108C0u) { return; }
    }
    ctx->pc = 0x2108C0u;
label_2108c0:
    // 0x2108c0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2108c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2108c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2108c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2108c8: 0x8c22d624  lw          $v0, -0x29DC($at)
    ctx->pc = 0x2108c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x2108cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2108ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2108d0: 0xc054bac  jal         func_152EB0
    ctx->pc = 0x2108D0u;
    SET_GPR_U32(ctx, 31, 0x2108D8u);
    ctx->pc = 0x2108D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2108D0u;
            // 0x2108d4: 0xaea21b2c  sw          $v0, 0x1B2C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 6956), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EB0u;
    if (runtime->hasFunction(0x152EB0u)) {
        auto targetFn = runtime->lookupFunction(0x152EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2108D8u; }
        if (ctx->pc != 0x2108D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff_system__6ClsMesFPs_0x152eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2108D8u; }
        if (ctx->pc != 0x2108D8u) { return; }
    }
    ctx->pc = 0x2108D8u;
label_2108d8:
    // 0x2108d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2108d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2108dc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2108dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2108e0: 0xc054cdc  jal         func_153370
    ctx->pc = 0x2108E0u;
    SET_GPR_U32(ctx, 31, 0x2108E8u);
    ctx->pc = 0x2108E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2108E0u;
            // 0x2108e4: 0xaea017f8  sw          $zero, 0x17F8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 6136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2108E8u; }
        if (ctx->pc != 0x2108E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2108E8u; }
        if (ctx->pc != 0x2108E8u) { return; }
    }
    ctx->pc = 0x2108E8u;
label_2108e8:
    // 0x2108e8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2108e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2108ec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2108ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2108f0: 0xaea2014c  sw          $v0, 0x14C($s5)
    ctx->pc = 0x2108f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 332), GPR_U32(ctx, 2));
    // 0x2108f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2108f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2108f8: 0xaea30184  sw          $v1, 0x184($s5)
    ctx->pc = 0x2108f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 388), GPR_U32(ctx, 3));
    // 0x2108fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2108fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x210900: 0xaea001b8  sw          $zero, 0x1B8($s5)
    ctx->pc = 0x210900u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 440), GPR_U32(ctx, 0));
    // 0x210904: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x210904u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210908: 0xaea001bc  sw          $zero, 0x1BC($s5)
    ctx->pc = 0x210908u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 444), GPR_U32(ctx, 0));
    // 0x21090c: 0xaea217e4  sw          $v0, 0x17E4($s5)
    ctx->pc = 0x21090cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6116), GPR_U32(ctx, 2));
    // 0x210910: 0x8e350044  lw          $s5, 0x44($s1)
    ctx->pc = 0x210910u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x210914: 0xaea000b4  sw          $zero, 0xB4($s5)
    ctx->pc = 0x210914u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 180), GPR_U32(ctx, 0));
    // 0x210918: 0xaea000d4  sw          $zero, 0xD4($s5)
    ctx->pc = 0x210918u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 212), GPR_U32(ctx, 0));
    // 0x21091c: 0xaea000d8  sw          $zero, 0xD8($s5)
    ctx->pc = 0x21091cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 216), GPR_U32(ctx, 0));
    // 0x210920: 0xaea000dc  sw          $zero, 0xDC($s5)
    ctx->pc = 0x210920u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 220), GPR_U32(ctx, 0));
    // 0x210924: 0xaea000e0  sw          $zero, 0xE0($s5)
    ctx->pc = 0x210924u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 224), GPR_U32(ctx, 0));
    // 0x210928: 0xaea000e4  sw          $zero, 0xE4($s5)
    ctx->pc = 0x210928u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 228), GPR_U32(ctx, 0));
label_21092c:
    // 0x21092c: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x21092cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x210930: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x210930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x210934: 0xaca000e8  sw          $zero, 0xE8($a1)
    ctx->pc = 0x210934u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 232), GPR_U32(ctx, 0));
    // 0x210938: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x210938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x21093c: 0xaca000ec  sw          $zero, 0xEC($a1)
    ctx->pc = 0x21093cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 236), GPR_U32(ctx, 0));
    // 0x210940: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x210940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x210944: 0xaca000f0  sw          $zero, 0xF0($a1)
    ctx->pc = 0x210944u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 240), GPR_U32(ctx, 0));
    // 0x210948: 0xaca000f4  sw          $zero, 0xF4($a1)
    ctx->pc = 0x210948u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 0));
    // 0x21094c: 0xaca000f8  sw          $zero, 0xF8($a1)
    ctx->pc = 0x21094cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 248), GPR_U32(ctx, 0));
    // 0x210950: 0xaca000fc  sw          $zero, 0xFC($a1)
    ctx->pc = 0x210950u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 252), GPR_U32(ctx, 0));
    // 0x210954: 0xaca00100  sw          $zero, 0x100($a1)
    ctx->pc = 0x210954u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 0));
    // 0x210958: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x210958u;
    {
        const bool branch_taken_0x210958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21095Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210958u;
            // 0x21095c: 0xaca00104  sw          $zero, 0x104($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210958) {
            ctx->pc = 0x21092Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21092c;
        }
    }
    ctx->pc = 0x210960u;
    // 0x210960: 0xaea00128  sw          $zero, 0x128($s5)
    ctx->pc = 0x210960u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 296), GPR_U32(ctx, 0));
    // 0x210964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x210964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210968: 0xaea0012c  sw          $zero, 0x12C($s5)
    ctx->pc = 0x210968u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 300), GPR_U32(ctx, 0));
    // 0x21096c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21096cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210970: 0xaea00188  sw          $zero, 0x188($s5)
    ctx->pc = 0x210970u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 392), GPR_U32(ctx, 0));
    // 0x210974: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x210974u;
    SET_GPR_U32(ctx, 31, 0x21097Cu);
    ctx->pc = 0x210978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210974u;
            // 0x210978: 0xaea2018c  sw          $v0, 0x18C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21097Cu; }
        if (ctx->pc != 0x21097Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21097Cu; }
        if (ctx->pc != 0x21097Cu) { return; }
    }
    ctx->pc = 0x21097Cu;
label_21097c:
    // 0x21097c: 0xe6a001b8  swc1        $f0, 0x1B8($s5)
    ctx->pc = 0x21097cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 440), bits); }
    // 0x210980: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x210980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210984: 0xaea001c0  sw          $zero, 0x1C0($s5)
    ctx->pc = 0x210984u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 448), GPR_U32(ctx, 0));
    // 0x210988: 0xaea001cc  sw          $zero, 0x1CC($s5)
    ctx->pc = 0x210988u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 460), GPR_U32(ctx, 0));
    // 0x21098c: 0xaea001d0  sw          $zero, 0x1D0($s5)
    ctx->pc = 0x21098cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 464), GPR_U32(ctx, 0));
    // 0x210990: 0xaea001d4  sw          $zero, 0x1D4($s5)
    ctx->pc = 0x210990u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 468), GPR_U32(ctx, 0));
    // 0x210994: 0xaea001d8  sw          $zero, 0x1D8($s5)
    ctx->pc = 0x210994u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 472), GPR_U32(ctx, 0));
    // 0x210998: 0xc0557f0  jal         func_155FC0
    ctx->pc = 0x210998u;
    SET_GPR_U32(ctx, 31, 0x2109A0u);
    ctx->pc = 0x21099Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210998u;
            // 0x21099c: 0xaea001dc  sw          $zero, 0x1DC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155FC0u;
    if (runtime->hasFunction(0x155FC0u)) {
        auto targetFn = runtime->lookupFunction(0x155FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2109A0u; }
        if (ctx->pc != 0x2109A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMesWinTbl__6ClsMesFv_0x155fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2109A0u; }
        if (ctx->pc != 0x2109A0u) { return; }
    }
    ctx->pc = 0x2109A0u;
label_2109a0:
    // 0x2109a0: 0x8ea517d0  lw          $a1, 0x17D0($s5)
    ctx->pc = 0x2109a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6096)));
    // 0x2109a4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x2109a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2109a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2109a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2109ac: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2109acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2109b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2109b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2109b4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2109b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2109b8: 0xaea517d4  sw          $a1, 0x17D4($s5)
    ctx->pc = 0x2109b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6100), GPR_U32(ctx, 5));
    // 0x2109bc: 0xaea017d8  sw          $zero, 0x17D8($s5)
    ctx->pc = 0x2109bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6104), GPR_U32(ctx, 0));
    // 0x2109c0: 0xaea017dc  sw          $zero, 0x17DC($s5)
    ctx->pc = 0x2109c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6108), GPR_U32(ctx, 0));
    // 0x2109c4: 0xaea417e0  sw          $a0, 0x17E0($s5)
    ctx->pc = 0x2109c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6112), GPR_U32(ctx, 4));
    // 0x2109c8: 0xaea317e4  sw          $v1, 0x17E4($s5)
    ctx->pc = 0x2109c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6116), GPR_U32(ctx, 3));
    // 0x2109cc: 0xaea017e8  sw          $zero, 0x17E8($s5)
    ctx->pc = 0x2109ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6120), GPR_U32(ctx, 0));
    // 0x2109d0: 0xa2a21800  sb          $v0, 0x1800($s5)
    ctx->pc = 0x2109d0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 6144), (uint8_t)GPR_U32(ctx, 2));
label_2109d4:
    // 0x2109d4: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x2109d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x2109d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2109d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2109dc: 0x24441801  addiu       $a0, $v0, 0x1801
    ctx->pc = 0x2109dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
    // 0x2109e0: 0xc049c86  jal         func_127218
    ctx->pc = 0x2109E0u;
    SET_GPR_U32(ctx, 31, 0x2109E8u);
    ctx->pc = 0x2109E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2109E0u;
            // 0x2109e4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2109E8u; }
        if (ctx->pc != 0x2109E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2109E8u; }
        if (ctx->pc != 0x2109E8u) { return; }
    }
    ctx->pc = 0x2109E8u;
label_2109e8:
    // 0x2109e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2109e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2109ec: 0x2a420010  slti        $v0, $s2, 0x10
    ctx->pc = 0x2109ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2109f0: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2109F0u;
    {
        const bool branch_taken_0x2109f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2109F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2109F0u;
            // 0x2109f4: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2109f0) {
            ctx->pc = 0x2109D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2109d4;
        }
    }
    ctx->pc = 0x2109F8u;
    // 0x2109f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2109f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2109fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2109fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210a00: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x210a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_210a04:
    // 0x210a04: 0x2a53021  addu        $a2, $s5, $a1
    ctx->pc = 0x210a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x210a08: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x210a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x210a0c: 0xacc31a04  sw          $v1, 0x1A04($a2)
    ctx->pc = 0x210a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6660), GPR_U32(ctx, 3));
    // 0x210a10: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x210a10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x210a14: 0xacc31a08  sw          $v1, 0x1A08($a2)
    ctx->pc = 0x210a14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6664), GPR_U32(ctx, 3));
    // 0x210a18: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x210a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x210a1c: 0xacc31a0c  sw          $v1, 0x1A0C($a2)
    ctx->pc = 0x210a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6668), GPR_U32(ctx, 3));
    // 0x210a20: 0xacc31a10  sw          $v1, 0x1A10($a2)
    ctx->pc = 0x210a20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6672), GPR_U32(ctx, 3));
    // 0x210a24: 0xacc31a14  sw          $v1, 0x1A14($a2)
    ctx->pc = 0x210a24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6676), GPR_U32(ctx, 3));
    // 0x210a28: 0xacc31a18  sw          $v1, 0x1A18($a2)
    ctx->pc = 0x210a28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6680), GPR_U32(ctx, 3));
    // 0x210a2c: 0xacc31a1c  sw          $v1, 0x1A1C($a2)
    ctx->pc = 0x210a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6684), GPR_U32(ctx, 3));
    // 0x210a30: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x210A30u;
    {
        const bool branch_taken_0x210a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210A30u;
            // 0x210a34: 0xacc31a20  sw          $v1, 0x1A20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 6688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a30) {
            ctx->pc = 0x210A04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210a04;
        }
    }
    ctx->pc = 0x210A38u;
    // 0x210a38: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x210a38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210a3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x210a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210a40:
    // 0x210a40: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x210a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x210a44: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x210a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x210a48: 0xaca01a44  sw          $zero, 0x1A44($a1)
    ctx->pc = 0x210a48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6724), GPR_U32(ctx, 0));
    // 0x210a4c: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x210a4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x210a50: 0xaca01a84  sw          $zero, 0x1A84($a1)
    ctx->pc = 0x210a50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6788), GPR_U32(ctx, 0));
    // 0x210a54: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x210a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x210a58: 0xaca01a48  sw          $zero, 0x1A48($a1)
    ctx->pc = 0x210a58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6728), GPR_U32(ctx, 0));
    // 0x210a5c: 0xaca01a88  sw          $zero, 0x1A88($a1)
    ctx->pc = 0x210a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6792), GPR_U32(ctx, 0));
    // 0x210a60: 0xaca01a4c  sw          $zero, 0x1A4C($a1)
    ctx->pc = 0x210a60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6732), GPR_U32(ctx, 0));
    // 0x210a64: 0xaca01a8c  sw          $zero, 0x1A8C($a1)
    ctx->pc = 0x210a64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6796), GPR_U32(ctx, 0));
    // 0x210a68: 0xaca01a50  sw          $zero, 0x1A50($a1)
    ctx->pc = 0x210a68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6736), GPR_U32(ctx, 0));
    // 0x210a6c: 0xaca01a90  sw          $zero, 0x1A90($a1)
    ctx->pc = 0x210a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6800), GPR_U32(ctx, 0));
    // 0x210a70: 0xaca01a54  sw          $zero, 0x1A54($a1)
    ctx->pc = 0x210a70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6740), GPR_U32(ctx, 0));
    // 0x210a74: 0xaca01a94  sw          $zero, 0x1A94($a1)
    ctx->pc = 0x210a74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6804), GPR_U32(ctx, 0));
    // 0x210a78: 0xaca01a58  sw          $zero, 0x1A58($a1)
    ctx->pc = 0x210a78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6744), GPR_U32(ctx, 0));
    // 0x210a7c: 0xaca01a98  sw          $zero, 0x1A98($a1)
    ctx->pc = 0x210a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6808), GPR_U32(ctx, 0));
    // 0x210a80: 0xaca01a5c  sw          $zero, 0x1A5C($a1)
    ctx->pc = 0x210a80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6748), GPR_U32(ctx, 0));
    // 0x210a84: 0xaca01a9c  sw          $zero, 0x1A9C($a1)
    ctx->pc = 0x210a84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6812), GPR_U32(ctx, 0));
    // 0x210a88: 0xaca01a60  sw          $zero, 0x1A60($a1)
    ctx->pc = 0x210a88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6752), GPR_U32(ctx, 0));
    // 0x210a8c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x210A8Cu;
    {
        const bool branch_taken_0x210a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210A8Cu;
            // 0x210a90: 0xaca01aa0  sw          $zero, 0x1AA0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 6816), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a8c) {
            ctx->pc = 0x210A40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210a40;
        }
    }
    ctx->pc = 0x210A94u;
    // 0x210a94: 0xaea01ac4  sw          $zero, 0x1AC4($s5)
    ctx->pc = 0x210a94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6852), GPR_U32(ctx, 0));
    // 0x210a98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x210a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210a9c: 0xaea01ac8  sw          $zero, 0x1AC8($s5)
    ctx->pc = 0x210a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6856), GPR_U32(ctx, 0));
    // 0x210aa0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x210aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x210aa4: 0xaea21acc  sw          $v0, 0x1ACC($s5)
    ctx->pc = 0x210aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6860), GPR_U32(ctx, 2));
    // 0x210aa8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x210aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210aac: 0xaea01ad0  sw          $zero, 0x1AD0($s5)
    ctx->pc = 0x210aacu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6864), GPR_U32(ctx, 0));
    // 0x210ab0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x210ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ab4: 0xaea01ad4  sw          $zero, 0x1AD4($s5)
    ctx->pc = 0x210ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6868), GPR_U32(ctx, 0));
    // 0x210ab8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x210ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210abc: 0xaea01ad8  sw          $zero, 0x1AD8($s5)
    ctx->pc = 0x210abcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6872), GPR_U32(ctx, 0));
    // 0x210ac0: 0xaea31adc  sw          $v1, 0x1ADC($s5)
    ctx->pc = 0x210ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6876), GPR_U32(ctx, 3));
    // 0x210ac4: 0xaea31ae0  sw          $v1, 0x1AE0($s5)
    ctx->pc = 0x210ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6880), GPR_U32(ctx, 3));
    // 0x210ac8: 0xaea31ae4  sw          $v1, 0x1AE4($s5)
    ctx->pc = 0x210ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6884), GPR_U32(ctx, 3));
    // 0x210acc: 0xaea01ae8  sw          $zero, 0x1AE8($s5)
    ctx->pc = 0x210accu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6888), GPR_U32(ctx, 0));
    // 0x210ad0: 0xaea01aec  sw          $zero, 0x1AEC($s5)
    ctx->pc = 0x210ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6892), GPR_U32(ctx, 0));
    // 0x210ad4: 0xaea01af0  sw          $zero, 0x1AF0($s5)
    ctx->pc = 0x210ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6896), GPR_U32(ctx, 0));
    // 0x210ad8: 0xaea01af4  sw          $zero, 0x1AF4($s5)
    ctx->pc = 0x210ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6900), GPR_U32(ctx, 0));
    // 0x210adc: 0xaea01af8  sw          $zero, 0x1AF8($s5)
    ctx->pc = 0x210adcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6904), GPR_U32(ctx, 0));
    // 0x210ae0: 0xaea01afc  sw          $zero, 0x1AFC($s5)
    ctx->pc = 0x210ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6908), GPR_U32(ctx, 0));
    // 0x210ae4: 0xaea01b00  sw          $zero, 0x1B00($s5)
    ctx->pc = 0x210ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6912), GPR_U32(ctx, 0));
    // 0x210ae8: 0xaea31b04  sw          $v1, 0x1B04($s5)
    ctx->pc = 0x210ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6916), GPR_U32(ctx, 3));
    // 0x210aec: 0xaea31b08  sw          $v1, 0x1B08($s5)
    ctx->pc = 0x210aecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6920), GPR_U32(ctx, 3));
    // 0x210af0: 0xaea31b0c  sw          $v1, 0x1B0C($s5)
    ctx->pc = 0x210af0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6924), GPR_U32(ctx, 3));
    // 0x210af4: 0xaea31b10  sw          $v1, 0x1B10($s5)
    ctx->pc = 0x210af4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6928), GPR_U32(ctx, 3));
    // 0x210af8: 0xaea01b14  sw          $zero, 0x1B14($s5)
    ctx->pc = 0x210af8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6932), GPR_U32(ctx, 0));
    // 0x210afc: 0xaea01b18  sw          $zero, 0x1B18($s5)
    ctx->pc = 0x210afcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6936), GPR_U32(ctx, 0));
    // 0x210b00: 0xaea01b1c  sw          $zero, 0x1B1C($s5)
    ctx->pc = 0x210b00u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6940), GPR_U32(ctx, 0));
    // 0x210b04: 0xaea01b20  sw          $zero, 0x1B20($s5)
    ctx->pc = 0x210b04u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6944), GPR_U32(ctx, 0));
    // 0x210b08: 0xaea01b24  sw          $zero, 0x1B24($s5)
    ctx->pc = 0x210b08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6948), GPR_U32(ctx, 0));
    // 0x210b0c: 0xaea01b28  sw          $zero, 0x1B28($s5)
    ctx->pc = 0x210b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6952), GPR_U32(ctx, 0));
    // 0x210b10: 0xaea01b30  sw          $zero, 0x1B30($s5)
    ctx->pc = 0x210b10u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6960), GPR_U32(ctx, 0));
    // 0x210b14: 0xaea01b34  sw          $zero, 0x1B34($s5)
    ctx->pc = 0x210b14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6964), GPR_U32(ctx, 0));
    // 0x210b18: 0xaea01b3c  sw          $zero, 0x1B3C($s5)
    ctx->pc = 0x210b18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6972), GPR_U32(ctx, 0));
    // 0x210b1c: 0xaea01b38  sw          $zero, 0x1B38($s5)
    ctx->pc = 0x210b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6968), GPR_U32(ctx, 0));
    // 0x210b20: 0xaea01b40  sw          $zero, 0x1B40($s5)
    ctx->pc = 0x210b20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6976), GPR_U32(ctx, 0));
label_210b24:
    // 0x210b24: 0x2a53821  addu        $a3, $s5, $a1
    ctx->pc = 0x210b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x210b28: 0x2a61021  addu        $v0, $s5, $a2
    ctx->pc = 0x210b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x210b2c: 0xace01b44  sw          $zero, 0x1B44($a3)
    ctx->pc = 0x210b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6980), GPR_U32(ctx, 0));
    // 0x210b30: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x210b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x210b34: 0xac401b94  sw          $zero, 0x1B94($v0)
    ctx->pc = 0x210b34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7060), GPR_U32(ctx, 0));
    // 0x210b38: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x210b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x210b3c: 0xac401b98  sw          $zero, 0x1B98($v0)
    ctx->pc = 0x210b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7064), GPR_U32(ctx, 0));
    // 0x210b40: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x210b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x210b44: 0xace01c34  sw          $zero, 0x1C34($a3)
    ctx->pc = 0x210b44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7220), GPR_U32(ctx, 0));
    // 0x210b48: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x210b48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x210b4c: 0xace31c84  sw          $v1, 0x1C84($a3)
    ctx->pc = 0x210b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7300), GPR_U32(ctx, 3));
    // 0x210b50: 0xace01cd4  sw          $zero, 0x1CD4($a3)
    ctx->pc = 0x210b50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7380), GPR_U32(ctx, 0));
    // 0x210b54: 0xace01d24  sw          $zero, 0x1D24($a3)
    ctx->pc = 0x210b54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7460), GPR_U32(ctx, 0));
    // 0x210b58: 0xace01d74  sw          $zero, 0x1D74($a3)
    ctx->pc = 0x210b58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7540), GPR_U32(ctx, 0));
    // 0x210b5c: 0xace01dc4  sw          $zero, 0x1DC4($a3)
    ctx->pc = 0x210b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7620), GPR_U32(ctx, 0));
    // 0x210b60: 0xace01e14  sw          $zero, 0x1E14($a3)
    ctx->pc = 0x210b60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7700), GPR_U32(ctx, 0));
    // 0x210b64: 0xace31e64  sw          $v1, 0x1E64($a3)
    ctx->pc = 0x210b64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7780), GPR_U32(ctx, 3));
    // 0x210b68: 0xace01eb4  sw          $zero, 0x1EB4($a3)
    ctx->pc = 0x210b68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7860), GPR_U32(ctx, 0));
    // 0x210b6c: 0xace01f04  sw          $zero, 0x1F04($a3)
    ctx->pc = 0x210b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7940), GPR_U32(ctx, 0));
    // 0x210b70: 0xace01f54  sw          $zero, 0x1F54($a3)
    ctx->pc = 0x210b70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8020), GPR_U32(ctx, 0));
    // 0x210b74: 0xace31fa4  sw          $v1, 0x1FA4($a3)
    ctx->pc = 0x210b74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8100), GPR_U32(ctx, 3));
    // 0x210b78: 0xace31ff4  sw          $v1, 0x1FF4($a3)
    ctx->pc = 0x210b78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8180), GPR_U32(ctx, 3));
    // 0x210b7c: 0xace02044  sw          $zero, 0x2044($a3)
    ctx->pc = 0x210b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8260), GPR_U32(ctx, 0));
    // 0x210b80: 0xace02094  sw          $zero, 0x2094($a3)
    ctx->pc = 0x210b80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8340), GPR_U32(ctx, 0));
    // 0x210b84: 0xace020e4  sw          $zero, 0x20E4($a3)
    ctx->pc = 0x210b84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8420), GPR_U32(ctx, 0));
    // 0x210b88: 0xace02134  sw          $zero, 0x2134($a3)
    ctx->pc = 0x210b88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8500), GPR_U32(ctx, 0));
    // 0x210b8c: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x210B8Cu;
    {
        const bool branch_taken_0x210b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210B8Cu;
            // 0x210b90: 0xace02184  sw          $zero, 0x2184($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b8c) {
            ctx->pc = 0x210B24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210b24;
        }
    }
    ctx->pc = 0x210B94u;
    // 0x210b94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x210b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b98: 0xc054ba8  jal         func_152EA0
    ctx->pc = 0x210B98u;
    SET_GPR_U32(ctx, 31, 0x210BA0u);
    ctx->pc = 0x210B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210B98u;
            // 0x210b9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EA0u;
    if (runtime->hasFunction(0x152EA0u)) {
        auto targetFn = runtime->lookupFunction(0x152EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210BA0u; }
        if (ctx->pc != 0x210BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff__6ClsMesFPs_0x152ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210BA0u; }
        if (ctx->pc != 0x210BA0u) { return; }
    }
    ctx->pc = 0x210BA0u;
label_210ba0:
    // 0x210ba0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x210ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ba4: 0xc054bac  jal         func_152EB0
    ctx->pc = 0x210BA4u;
    SET_GPR_U32(ctx, 31, 0x210BACu);
    ctx->pc = 0x210BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210BA4u;
            // 0x210ba8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EB0u;
    if (runtime->hasFunction(0x152EB0u)) {
        auto targetFn = runtime->lookupFunction(0x152EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210BACu; }
        if (ctx->pc != 0x210BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff_system__6ClsMesFPs_0x152eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210BACu; }
        if (ctx->pc != 0x210BACu) { return; }
    }
    ctx->pc = 0x210BACu;
label_210bac:
    // 0x210bac: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x210bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x210bb0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x210bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210bb4: 0x8c22d624  lw          $v0, -0x29DC($at)
    ctx->pc = 0x210bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x210bb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x210bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210bbc: 0xc054cdc  jal         func_153370
    ctx->pc = 0x210BBCu;
    SET_GPR_U32(ctx, 31, 0x210BC4u);
    ctx->pc = 0x210BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210BBCu;
            // 0x210bc0: 0xaea21b2c  sw          $v0, 0x1B2C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 6956), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210BC4u; }
        if (ctx->pc != 0x210BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210BC4u; }
        if (ctx->pc != 0x210BC4u) { return; }
    }
    ctx->pc = 0x210BC4u;
label_210bc4:
    // 0x210bc4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x210bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x210bc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x210bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x210bcc: 0xaea30184  sw          $v1, 0x184($s5)
    ctx->pc = 0x210bccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 388), GPR_U32(ctx, 3));
    // 0x210bd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x210bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210bd4: 0xaea001b8  sw          $zero, 0x1B8($s5)
    ctx->pc = 0x210bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 440), GPR_U32(ctx, 0));
    // 0x210bd8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x210bd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210bdc: 0xaea001bc  sw          $zero, 0x1BC($s5)
    ctx->pc = 0x210bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 444), GPR_U32(ctx, 0));
    // 0x210be0: 0xaea217e4  sw          $v0, 0x17E4($s5)
    ctx->pc = 0x210be0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6116), GPR_U32(ctx, 2));
    // 0x210be4: 0x8e35004c  lw          $s5, 0x4C($s1)
    ctx->pc = 0x210be4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x210be8: 0xaea000b4  sw          $zero, 0xB4($s5)
    ctx->pc = 0x210be8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 180), GPR_U32(ctx, 0));
    // 0x210bec: 0xaea000d4  sw          $zero, 0xD4($s5)
    ctx->pc = 0x210becu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 212), GPR_U32(ctx, 0));
    // 0x210bf0: 0xaea000d8  sw          $zero, 0xD8($s5)
    ctx->pc = 0x210bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 216), GPR_U32(ctx, 0));
    // 0x210bf4: 0xaea000dc  sw          $zero, 0xDC($s5)
    ctx->pc = 0x210bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 220), GPR_U32(ctx, 0));
    // 0x210bf8: 0xaea000e0  sw          $zero, 0xE0($s5)
    ctx->pc = 0x210bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 224), GPR_U32(ctx, 0));
    // 0x210bfc: 0xaea000e4  sw          $zero, 0xE4($s5)
    ctx->pc = 0x210bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 228), GPR_U32(ctx, 0));
label_210c00:
    // 0x210c00: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x210c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x210c04: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x210c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x210c08: 0xaca000e8  sw          $zero, 0xE8($a1)
    ctx->pc = 0x210c08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 232), GPR_U32(ctx, 0));
    // 0x210c0c: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x210c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x210c10: 0xaca000ec  sw          $zero, 0xEC($a1)
    ctx->pc = 0x210c10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 236), GPR_U32(ctx, 0));
    // 0x210c14: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x210c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x210c18: 0xaca000f0  sw          $zero, 0xF0($a1)
    ctx->pc = 0x210c18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 240), GPR_U32(ctx, 0));
    // 0x210c1c: 0xaca000f4  sw          $zero, 0xF4($a1)
    ctx->pc = 0x210c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 0));
    // 0x210c20: 0xaca000f8  sw          $zero, 0xF8($a1)
    ctx->pc = 0x210c20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 248), GPR_U32(ctx, 0));
    // 0x210c24: 0xaca000fc  sw          $zero, 0xFC($a1)
    ctx->pc = 0x210c24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 252), GPR_U32(ctx, 0));
    // 0x210c28: 0xaca00100  sw          $zero, 0x100($a1)
    ctx->pc = 0x210c28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 0));
    // 0x210c2c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x210C2Cu;
    {
        const bool branch_taken_0x210c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210C2Cu;
            // 0x210c30: 0xaca00104  sw          $zero, 0x104($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c2c) {
            ctx->pc = 0x210C00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210c00;
        }
    }
    ctx->pc = 0x210C34u;
    // 0x210c34: 0xaea00128  sw          $zero, 0x128($s5)
    ctx->pc = 0x210c34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 296), GPR_U32(ctx, 0));
    // 0x210c38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x210c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210c3c: 0xaea0012c  sw          $zero, 0x12C($s5)
    ctx->pc = 0x210c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 300), GPR_U32(ctx, 0));
    // 0x210c40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x210c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c44: 0xaea00188  sw          $zero, 0x188($s5)
    ctx->pc = 0x210c44u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 392), GPR_U32(ctx, 0));
    // 0x210c48: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x210C48u;
    SET_GPR_U32(ctx, 31, 0x210C50u);
    ctx->pc = 0x210C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210C48u;
            // 0x210c4c: 0xaea2018c  sw          $v0, 0x18C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210C50u; }
        if (ctx->pc != 0x210C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210C50u; }
        if (ctx->pc != 0x210C50u) { return; }
    }
    ctx->pc = 0x210C50u;
label_210c50:
    // 0x210c50: 0xe6a001b8  swc1        $f0, 0x1B8($s5)
    ctx->pc = 0x210c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 440), bits); }
    // 0x210c54: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x210c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c58: 0xaea001c0  sw          $zero, 0x1C0($s5)
    ctx->pc = 0x210c58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 448), GPR_U32(ctx, 0));
    // 0x210c5c: 0xaea001cc  sw          $zero, 0x1CC($s5)
    ctx->pc = 0x210c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 460), GPR_U32(ctx, 0));
    // 0x210c60: 0xaea001d0  sw          $zero, 0x1D0($s5)
    ctx->pc = 0x210c60u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 464), GPR_U32(ctx, 0));
    // 0x210c64: 0xaea001d4  sw          $zero, 0x1D4($s5)
    ctx->pc = 0x210c64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 468), GPR_U32(ctx, 0));
    // 0x210c68: 0xaea001d8  sw          $zero, 0x1D8($s5)
    ctx->pc = 0x210c68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 472), GPR_U32(ctx, 0));
    // 0x210c6c: 0xc0557f0  jal         func_155FC0
    ctx->pc = 0x210C6Cu;
    SET_GPR_U32(ctx, 31, 0x210C74u);
    ctx->pc = 0x210C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210C6Cu;
            // 0x210c70: 0xaea001dc  sw          $zero, 0x1DC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155FC0u;
    if (runtime->hasFunction(0x155FC0u)) {
        auto targetFn = runtime->lookupFunction(0x155FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210C74u; }
        if (ctx->pc != 0x210C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMesWinTbl__6ClsMesFv_0x155fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210C74u; }
        if (ctx->pc != 0x210C74u) { return; }
    }
    ctx->pc = 0x210C74u;
label_210c74:
    // 0x210c74: 0x8ea517d0  lw          $a1, 0x17D0($s5)
    ctx->pc = 0x210c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6096)));
    // 0x210c78: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x210c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x210c7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x210c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x210c80: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x210c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x210c84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x210c84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c88: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x210c88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c8c: 0xaea517d4  sw          $a1, 0x17D4($s5)
    ctx->pc = 0x210c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6100), GPR_U32(ctx, 5));
    // 0x210c90: 0xaea017d8  sw          $zero, 0x17D8($s5)
    ctx->pc = 0x210c90u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6104), GPR_U32(ctx, 0));
    // 0x210c94: 0xaea017dc  sw          $zero, 0x17DC($s5)
    ctx->pc = 0x210c94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6108), GPR_U32(ctx, 0));
    // 0x210c98: 0xaea417e0  sw          $a0, 0x17E0($s5)
    ctx->pc = 0x210c98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6112), GPR_U32(ctx, 4));
    // 0x210c9c: 0xaea317e4  sw          $v1, 0x17E4($s5)
    ctx->pc = 0x210c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6116), GPR_U32(ctx, 3));
    // 0x210ca0: 0xaea017e8  sw          $zero, 0x17E8($s5)
    ctx->pc = 0x210ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6120), GPR_U32(ctx, 0));
    // 0x210ca4: 0xa2a21800  sb          $v0, 0x1800($s5)
    ctx->pc = 0x210ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 6144), (uint8_t)GPR_U32(ctx, 2));
label_210ca8:
    // 0x210ca8: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x210ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x210cac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x210cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210cb0: 0x24441801  addiu       $a0, $v0, 0x1801
    ctx->pc = 0x210cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
    // 0x210cb4: 0xc049c86  jal         func_127218
    ctx->pc = 0x210CB4u;
    SET_GPR_U32(ctx, 31, 0x210CBCu);
    ctx->pc = 0x210CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210CB4u;
            // 0x210cb8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210CBCu; }
        if (ctx->pc != 0x210CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210CBCu; }
        if (ctx->pc != 0x210CBCu) { return; }
    }
    ctx->pc = 0x210CBCu;
label_210cbc:
    // 0x210cbc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x210cbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x210cc0: 0x2a420010  slti        $v0, $s2, 0x10
    ctx->pc = 0x210cc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x210cc4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x210CC4u;
    {
        const bool branch_taken_0x210cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210CC4u;
            // 0x210cc8: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210cc4) {
            ctx->pc = 0x210CA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210ca8;
        }
    }
    ctx->pc = 0x210CCCu;
    // 0x210ccc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x210cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210cd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x210cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210cd4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x210cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_210cd8:
    // 0x210cd8: 0x2a53021  addu        $a2, $s5, $a1
    ctx->pc = 0x210cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x210cdc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x210cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x210ce0: 0xacc31a04  sw          $v1, 0x1A04($a2)
    ctx->pc = 0x210ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6660), GPR_U32(ctx, 3));
    // 0x210ce4: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x210ce4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x210ce8: 0xacc31a08  sw          $v1, 0x1A08($a2)
    ctx->pc = 0x210ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6664), GPR_U32(ctx, 3));
    // 0x210cec: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x210cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x210cf0: 0xacc31a0c  sw          $v1, 0x1A0C($a2)
    ctx->pc = 0x210cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6668), GPR_U32(ctx, 3));
    // 0x210cf4: 0xacc31a10  sw          $v1, 0x1A10($a2)
    ctx->pc = 0x210cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6672), GPR_U32(ctx, 3));
    // 0x210cf8: 0xacc31a14  sw          $v1, 0x1A14($a2)
    ctx->pc = 0x210cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6676), GPR_U32(ctx, 3));
    // 0x210cfc: 0xacc31a18  sw          $v1, 0x1A18($a2)
    ctx->pc = 0x210cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6680), GPR_U32(ctx, 3));
    // 0x210d00: 0xacc31a1c  sw          $v1, 0x1A1C($a2)
    ctx->pc = 0x210d00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6684), GPR_U32(ctx, 3));
    // 0x210d04: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x210D04u;
    {
        const bool branch_taken_0x210d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210D04u;
            // 0x210d08: 0xacc31a20  sw          $v1, 0x1A20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 6688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d04) {
            ctx->pc = 0x210CD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210cd8;
        }
    }
    ctx->pc = 0x210D0Cu;
    // 0x210d0c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x210d0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x210d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210d14:
    // 0x210d14: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x210d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x210d18: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x210d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x210d1c: 0xaca01a44  sw          $zero, 0x1A44($a1)
    ctx->pc = 0x210d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6724), GPR_U32(ctx, 0));
    // 0x210d20: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x210d20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x210d24: 0xaca01a84  sw          $zero, 0x1A84($a1)
    ctx->pc = 0x210d24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6788), GPR_U32(ctx, 0));
    // 0x210d28: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x210d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x210d2c: 0xaca01a48  sw          $zero, 0x1A48($a1)
    ctx->pc = 0x210d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6728), GPR_U32(ctx, 0));
    // 0x210d30: 0xaca01a88  sw          $zero, 0x1A88($a1)
    ctx->pc = 0x210d30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6792), GPR_U32(ctx, 0));
    // 0x210d34: 0xaca01a4c  sw          $zero, 0x1A4C($a1)
    ctx->pc = 0x210d34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6732), GPR_U32(ctx, 0));
    // 0x210d38: 0xaca01a8c  sw          $zero, 0x1A8C($a1)
    ctx->pc = 0x210d38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6796), GPR_U32(ctx, 0));
    // 0x210d3c: 0xaca01a50  sw          $zero, 0x1A50($a1)
    ctx->pc = 0x210d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6736), GPR_U32(ctx, 0));
    // 0x210d40: 0xaca01a90  sw          $zero, 0x1A90($a1)
    ctx->pc = 0x210d40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6800), GPR_U32(ctx, 0));
    // 0x210d44: 0xaca01a54  sw          $zero, 0x1A54($a1)
    ctx->pc = 0x210d44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6740), GPR_U32(ctx, 0));
    // 0x210d48: 0xaca01a94  sw          $zero, 0x1A94($a1)
    ctx->pc = 0x210d48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6804), GPR_U32(ctx, 0));
    // 0x210d4c: 0xaca01a58  sw          $zero, 0x1A58($a1)
    ctx->pc = 0x210d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6744), GPR_U32(ctx, 0));
    // 0x210d50: 0xaca01a98  sw          $zero, 0x1A98($a1)
    ctx->pc = 0x210d50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6808), GPR_U32(ctx, 0));
    // 0x210d54: 0xaca01a5c  sw          $zero, 0x1A5C($a1)
    ctx->pc = 0x210d54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6748), GPR_U32(ctx, 0));
    // 0x210d58: 0xaca01a9c  sw          $zero, 0x1A9C($a1)
    ctx->pc = 0x210d58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6812), GPR_U32(ctx, 0));
    // 0x210d5c: 0xaca01a60  sw          $zero, 0x1A60($a1)
    ctx->pc = 0x210d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6752), GPR_U32(ctx, 0));
    // 0x210d60: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x210D60u;
    {
        const bool branch_taken_0x210d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210D60u;
            // 0x210d64: 0xaca01aa0  sw          $zero, 0x1AA0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 6816), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d60) {
            ctx->pc = 0x210D14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210d14;
        }
    }
    ctx->pc = 0x210D68u;
    // 0x210d68: 0xaea01ac4  sw          $zero, 0x1AC4($s5)
    ctx->pc = 0x210d68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6852), GPR_U32(ctx, 0));
    // 0x210d6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x210d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210d70: 0xaea01ac8  sw          $zero, 0x1AC8($s5)
    ctx->pc = 0x210d70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6856), GPR_U32(ctx, 0));
    // 0x210d74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x210d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x210d78: 0xaea21acc  sw          $v0, 0x1ACC($s5)
    ctx->pc = 0x210d78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6860), GPR_U32(ctx, 2));
    // 0x210d7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x210d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d80: 0xaea01ad0  sw          $zero, 0x1AD0($s5)
    ctx->pc = 0x210d80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6864), GPR_U32(ctx, 0));
    // 0x210d84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x210d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d88: 0xaea01ad4  sw          $zero, 0x1AD4($s5)
    ctx->pc = 0x210d88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6868), GPR_U32(ctx, 0));
    // 0x210d8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x210d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d90: 0xaea01ad8  sw          $zero, 0x1AD8($s5)
    ctx->pc = 0x210d90u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6872), GPR_U32(ctx, 0));
    // 0x210d94: 0xaea31adc  sw          $v1, 0x1ADC($s5)
    ctx->pc = 0x210d94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6876), GPR_U32(ctx, 3));
    // 0x210d98: 0xaea31ae0  sw          $v1, 0x1AE0($s5)
    ctx->pc = 0x210d98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6880), GPR_U32(ctx, 3));
    // 0x210d9c: 0xaea31ae4  sw          $v1, 0x1AE4($s5)
    ctx->pc = 0x210d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6884), GPR_U32(ctx, 3));
    // 0x210da0: 0xaea01ae8  sw          $zero, 0x1AE8($s5)
    ctx->pc = 0x210da0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6888), GPR_U32(ctx, 0));
    // 0x210da4: 0xaea01aec  sw          $zero, 0x1AEC($s5)
    ctx->pc = 0x210da4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6892), GPR_U32(ctx, 0));
    // 0x210da8: 0xaea01af0  sw          $zero, 0x1AF0($s5)
    ctx->pc = 0x210da8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6896), GPR_U32(ctx, 0));
    // 0x210dac: 0xaea01af4  sw          $zero, 0x1AF4($s5)
    ctx->pc = 0x210dacu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6900), GPR_U32(ctx, 0));
    // 0x210db0: 0xaea01af8  sw          $zero, 0x1AF8($s5)
    ctx->pc = 0x210db0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6904), GPR_U32(ctx, 0));
    // 0x210db4: 0xaea01afc  sw          $zero, 0x1AFC($s5)
    ctx->pc = 0x210db4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6908), GPR_U32(ctx, 0));
    // 0x210db8: 0xaea01b00  sw          $zero, 0x1B00($s5)
    ctx->pc = 0x210db8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6912), GPR_U32(ctx, 0));
    // 0x210dbc: 0xaea31b04  sw          $v1, 0x1B04($s5)
    ctx->pc = 0x210dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6916), GPR_U32(ctx, 3));
    // 0x210dc0: 0xaea31b08  sw          $v1, 0x1B08($s5)
    ctx->pc = 0x210dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6920), GPR_U32(ctx, 3));
    // 0x210dc4: 0xaea31b0c  sw          $v1, 0x1B0C($s5)
    ctx->pc = 0x210dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6924), GPR_U32(ctx, 3));
    // 0x210dc8: 0xaea31b10  sw          $v1, 0x1B10($s5)
    ctx->pc = 0x210dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6928), GPR_U32(ctx, 3));
    // 0x210dcc: 0xaea01b14  sw          $zero, 0x1B14($s5)
    ctx->pc = 0x210dccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6932), GPR_U32(ctx, 0));
    // 0x210dd0: 0xaea01b18  sw          $zero, 0x1B18($s5)
    ctx->pc = 0x210dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6936), GPR_U32(ctx, 0));
    // 0x210dd4: 0xaea01b1c  sw          $zero, 0x1B1C($s5)
    ctx->pc = 0x210dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6940), GPR_U32(ctx, 0));
    // 0x210dd8: 0xaea01b20  sw          $zero, 0x1B20($s5)
    ctx->pc = 0x210dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6944), GPR_U32(ctx, 0));
    // 0x210ddc: 0xaea01b24  sw          $zero, 0x1B24($s5)
    ctx->pc = 0x210ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6948), GPR_U32(ctx, 0));
    // 0x210de0: 0xaea01b28  sw          $zero, 0x1B28($s5)
    ctx->pc = 0x210de0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6952), GPR_U32(ctx, 0));
    // 0x210de4: 0xaea01b30  sw          $zero, 0x1B30($s5)
    ctx->pc = 0x210de4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6960), GPR_U32(ctx, 0));
    // 0x210de8: 0xaea01b34  sw          $zero, 0x1B34($s5)
    ctx->pc = 0x210de8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6964), GPR_U32(ctx, 0));
    // 0x210dec: 0xaea01b3c  sw          $zero, 0x1B3C($s5)
    ctx->pc = 0x210decu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6972), GPR_U32(ctx, 0));
    // 0x210df0: 0xaea01b38  sw          $zero, 0x1B38($s5)
    ctx->pc = 0x210df0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6968), GPR_U32(ctx, 0));
    // 0x210df4: 0xaea01b40  sw          $zero, 0x1B40($s5)
    ctx->pc = 0x210df4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6976), GPR_U32(ctx, 0));
label_210df8:
    // 0x210df8: 0x2a53821  addu        $a3, $s5, $a1
    ctx->pc = 0x210df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x210dfc: 0x2a61021  addu        $v0, $s5, $a2
    ctx->pc = 0x210dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x210e00: 0xace01b44  sw          $zero, 0x1B44($a3)
    ctx->pc = 0x210e00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6980), GPR_U32(ctx, 0));
    // 0x210e04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x210e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x210e08: 0xac401b94  sw          $zero, 0x1B94($v0)
    ctx->pc = 0x210e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7060), GPR_U32(ctx, 0));
    // 0x210e0c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x210e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x210e10: 0xac401b98  sw          $zero, 0x1B98($v0)
    ctx->pc = 0x210e10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7064), GPR_U32(ctx, 0));
    // 0x210e14: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x210e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x210e18: 0xace01c34  sw          $zero, 0x1C34($a3)
    ctx->pc = 0x210e18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7220), GPR_U32(ctx, 0));
    // 0x210e1c: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x210e1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x210e20: 0xace31c84  sw          $v1, 0x1C84($a3)
    ctx->pc = 0x210e20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7300), GPR_U32(ctx, 3));
    // 0x210e24: 0xace01cd4  sw          $zero, 0x1CD4($a3)
    ctx->pc = 0x210e24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7380), GPR_U32(ctx, 0));
    // 0x210e28: 0xace01d24  sw          $zero, 0x1D24($a3)
    ctx->pc = 0x210e28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7460), GPR_U32(ctx, 0));
    // 0x210e2c: 0xace01d74  sw          $zero, 0x1D74($a3)
    ctx->pc = 0x210e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7540), GPR_U32(ctx, 0));
    // 0x210e30: 0xace01dc4  sw          $zero, 0x1DC4($a3)
    ctx->pc = 0x210e30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7620), GPR_U32(ctx, 0));
    // 0x210e34: 0xace01e14  sw          $zero, 0x1E14($a3)
    ctx->pc = 0x210e34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7700), GPR_U32(ctx, 0));
    // 0x210e38: 0xace31e64  sw          $v1, 0x1E64($a3)
    ctx->pc = 0x210e38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7780), GPR_U32(ctx, 3));
    // 0x210e3c: 0xace01eb4  sw          $zero, 0x1EB4($a3)
    ctx->pc = 0x210e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7860), GPR_U32(ctx, 0));
    // 0x210e40: 0xace01f04  sw          $zero, 0x1F04($a3)
    ctx->pc = 0x210e40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7940), GPR_U32(ctx, 0));
    // 0x210e44: 0xace01f54  sw          $zero, 0x1F54($a3)
    ctx->pc = 0x210e44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8020), GPR_U32(ctx, 0));
    // 0x210e48: 0xace31fa4  sw          $v1, 0x1FA4($a3)
    ctx->pc = 0x210e48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8100), GPR_U32(ctx, 3));
    // 0x210e4c: 0xace31ff4  sw          $v1, 0x1FF4($a3)
    ctx->pc = 0x210e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8180), GPR_U32(ctx, 3));
    // 0x210e50: 0xace02044  sw          $zero, 0x2044($a3)
    ctx->pc = 0x210e50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8260), GPR_U32(ctx, 0));
    // 0x210e54: 0xace02094  sw          $zero, 0x2094($a3)
    ctx->pc = 0x210e54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8340), GPR_U32(ctx, 0));
    // 0x210e58: 0xace020e4  sw          $zero, 0x20E4($a3)
    ctx->pc = 0x210e58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8420), GPR_U32(ctx, 0));
    // 0x210e5c: 0xace02134  sw          $zero, 0x2134($a3)
    ctx->pc = 0x210e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8500), GPR_U32(ctx, 0));
    // 0x210e60: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x210E60u;
    {
        const bool branch_taken_0x210e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210E60u;
            // 0x210e64: 0xace02184  sw          $zero, 0x2184($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e60) {
            ctx->pc = 0x210DF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210df8;
        }
    }
    ctx->pc = 0x210E68u;
    // 0x210e68: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x210e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e6c: 0xc054ba8  jal         func_152EA0
    ctx->pc = 0x210E6Cu;
    SET_GPR_U32(ctx, 31, 0x210E74u);
    ctx->pc = 0x210E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210E6Cu;
            // 0x210e70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EA0u;
    if (runtime->hasFunction(0x152EA0u)) {
        auto targetFn = runtime->lookupFunction(0x152EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210E74u; }
        if (ctx->pc != 0x210E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff__6ClsMesFPs_0x152ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210E74u; }
        if (ctx->pc != 0x210E74u) { return; }
    }
    ctx->pc = 0x210E74u;
label_210e74:
    // 0x210e74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x210e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e78: 0xc054bac  jal         func_152EB0
    ctx->pc = 0x210E78u;
    SET_GPR_U32(ctx, 31, 0x210E80u);
    ctx->pc = 0x210E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210E78u;
            // 0x210e7c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EB0u;
    if (runtime->hasFunction(0x152EB0u)) {
        auto targetFn = runtime->lookupFunction(0x152EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210E80u; }
        if (ctx->pc != 0x210E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff_system__6ClsMesFPs_0x152eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210E80u; }
        if (ctx->pc != 0x210E80u) { return; }
    }
    ctx->pc = 0x210E80u;
label_210e80:
    // 0x210e80: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x210e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x210e84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x210e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e88: 0x8c22d624  lw          $v0, -0x29DC($at)
    ctx->pc = 0x210e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x210e8c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x210e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x210e90: 0xc054cdc  jal         func_153370
    ctx->pc = 0x210E90u;
    SET_GPR_U32(ctx, 31, 0x210E98u);
    ctx->pc = 0x210E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210E90u;
            // 0x210e94: 0xaea21b2c  sw          $v0, 0x1B2C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 6956), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210E98u; }
        if (ctx->pc != 0x210E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210E98u; }
        if (ctx->pc != 0x210E98u) { return; }
    }
    ctx->pc = 0x210E98u;
label_210e98:
    // 0x210e98: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x210e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x210e9c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x210e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x210ea0: 0xaea2014c  sw          $v0, 0x14C($s5)
    ctx->pc = 0x210ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 332), GPR_U32(ctx, 2));
    // 0x210ea4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x210ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ea8: 0xaea30184  sw          $v1, 0x184($s5)
    ctx->pc = 0x210ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 388), GPR_U32(ctx, 3));
    // 0x210eac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x210eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x210eb0: 0xaea001b8  sw          $zero, 0x1B8($s5)
    ctx->pc = 0x210eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 440), GPR_U32(ctx, 0));
    // 0x210eb4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x210eb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210eb8: 0xaea001bc  sw          $zero, 0x1BC($s5)
    ctx->pc = 0x210eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 444), GPR_U32(ctx, 0));
    // 0x210ebc: 0xaea217e4  sw          $v0, 0x17E4($s5)
    ctx->pc = 0x210ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6116), GPR_U32(ctx, 2));
    // 0x210ec0: 0x8e340054  lw          $s4, 0x54($s1)
    ctx->pc = 0x210ec0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x210ec4: 0xae8000b4  sw          $zero, 0xB4($s4)
    ctx->pc = 0x210ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 0));
    // 0x210ec8: 0xae8000d4  sw          $zero, 0xD4($s4)
    ctx->pc = 0x210ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 212), GPR_U32(ctx, 0));
    // 0x210ecc: 0xae8000d8  sw          $zero, 0xD8($s4)
    ctx->pc = 0x210eccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 216), GPR_U32(ctx, 0));
    // 0x210ed0: 0xae8000dc  sw          $zero, 0xDC($s4)
    ctx->pc = 0x210ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 220), GPR_U32(ctx, 0));
    // 0x210ed4: 0xae8000e0  sw          $zero, 0xE0($s4)
    ctx->pc = 0x210ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 0));
    // 0x210ed8: 0xae8000e4  sw          $zero, 0xE4($s4)
    ctx->pc = 0x210ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 228), GPR_U32(ctx, 0));
label_210edc:
    // 0x210edc: 0x2842821  addu        $a1, $s4, $a0
    ctx->pc = 0x210edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x210ee0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x210ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x210ee4: 0xaca000e8  sw          $zero, 0xE8($a1)
    ctx->pc = 0x210ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 232), GPR_U32(ctx, 0));
    // 0x210ee8: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x210ee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x210eec: 0xaca000ec  sw          $zero, 0xEC($a1)
    ctx->pc = 0x210eecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 236), GPR_U32(ctx, 0));
    // 0x210ef0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x210ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x210ef4: 0xaca000f0  sw          $zero, 0xF0($a1)
    ctx->pc = 0x210ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 240), GPR_U32(ctx, 0));
    // 0x210ef8: 0xaca000f4  sw          $zero, 0xF4($a1)
    ctx->pc = 0x210ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 0));
    // 0x210efc: 0xaca000f8  sw          $zero, 0xF8($a1)
    ctx->pc = 0x210efcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 248), GPR_U32(ctx, 0));
    // 0x210f00: 0xaca000fc  sw          $zero, 0xFC($a1)
    ctx->pc = 0x210f00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 252), GPR_U32(ctx, 0));
    // 0x210f04: 0xaca00100  sw          $zero, 0x100($a1)
    ctx->pc = 0x210f04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 0));
    // 0x210f08: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x210F08u;
    {
        const bool branch_taken_0x210f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210F08u;
            // 0x210f0c: 0xaca00104  sw          $zero, 0x104($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f08) {
            ctx->pc = 0x210EDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210edc;
        }
    }
    ctx->pc = 0x210F10u;
    // 0x210f10: 0xae800128  sw          $zero, 0x128($s4)
    ctx->pc = 0x210f10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 0));
    // 0x210f14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x210f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210f18: 0xae80012c  sw          $zero, 0x12C($s4)
    ctx->pc = 0x210f18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 0));
    // 0x210f1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x210f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f20: 0xae800188  sw          $zero, 0x188($s4)
    ctx->pc = 0x210f20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 392), GPR_U32(ctx, 0));
    // 0x210f24: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x210F24u;
    SET_GPR_U32(ctx, 31, 0x210F2Cu);
    ctx->pc = 0x210F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210F24u;
            // 0x210f28: 0xae82018c  sw          $v0, 0x18C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210F2Cu; }
        if (ctx->pc != 0x210F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210F2Cu; }
        if (ctx->pc != 0x210F2Cu) { return; }
    }
    ctx->pc = 0x210F2Cu;
label_210f2c:
    // 0x210f2c: 0xe68001b8  swc1        $f0, 0x1B8($s4)
    ctx->pc = 0x210f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 440), bits); }
    // 0x210f30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x210f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f34: 0xae8001c0  sw          $zero, 0x1C0($s4)
    ctx->pc = 0x210f34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 448), GPR_U32(ctx, 0));
    // 0x210f38: 0xae8001cc  sw          $zero, 0x1CC($s4)
    ctx->pc = 0x210f38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 460), GPR_U32(ctx, 0));
    // 0x210f3c: 0xae8001d0  sw          $zero, 0x1D0($s4)
    ctx->pc = 0x210f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 464), GPR_U32(ctx, 0));
    // 0x210f40: 0xae8001d4  sw          $zero, 0x1D4($s4)
    ctx->pc = 0x210f40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 468), GPR_U32(ctx, 0));
    // 0x210f44: 0xae8001d8  sw          $zero, 0x1D8($s4)
    ctx->pc = 0x210f44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 472), GPR_U32(ctx, 0));
    // 0x210f48: 0xc0557f0  jal         func_155FC0
    ctx->pc = 0x210F48u;
    SET_GPR_U32(ctx, 31, 0x210F50u);
    ctx->pc = 0x210F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210F48u;
            // 0x210f4c: 0xae8001dc  sw          $zero, 0x1DC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155FC0u;
    if (runtime->hasFunction(0x155FC0u)) {
        auto targetFn = runtime->lookupFunction(0x155FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210F50u; }
        if (ctx->pc != 0x210F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMesWinTbl__6ClsMesFv_0x155fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210F50u; }
        if (ctx->pc != 0x210F50u) { return; }
    }
    ctx->pc = 0x210F50u;
label_210f50:
    // 0x210f50: 0x8e8517d0  lw          $a1, 0x17D0($s4)
    ctx->pc = 0x210f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6096)));
    // 0x210f54: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x210f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x210f58: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x210f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x210f5c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x210f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x210f60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x210f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f64: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x210f64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f68: 0xae8517d4  sw          $a1, 0x17D4($s4)
    ctx->pc = 0x210f68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6100), GPR_U32(ctx, 5));
    // 0x210f6c: 0xae8017d8  sw          $zero, 0x17D8($s4)
    ctx->pc = 0x210f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6104), GPR_U32(ctx, 0));
    // 0x210f70: 0xae8017dc  sw          $zero, 0x17DC($s4)
    ctx->pc = 0x210f70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6108), GPR_U32(ctx, 0));
    // 0x210f74: 0xae8417e0  sw          $a0, 0x17E0($s4)
    ctx->pc = 0x210f74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6112), GPR_U32(ctx, 4));
    // 0x210f78: 0xae8317e4  sw          $v1, 0x17E4($s4)
    ctx->pc = 0x210f78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6116), GPR_U32(ctx, 3));
    // 0x210f7c: 0xae8017e8  sw          $zero, 0x17E8($s4)
    ctx->pc = 0x210f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6120), GPR_U32(ctx, 0));
    // 0x210f80: 0xa2821800  sb          $v0, 0x1800($s4)
    ctx->pc = 0x210f80u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 6144), (uint8_t)GPR_U32(ctx, 2));
label_210f84:
    // 0x210f84: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x210f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x210f88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x210f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f8c: 0x24441801  addiu       $a0, $v0, 0x1801
    ctx->pc = 0x210f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
    // 0x210f90: 0xc049c86  jal         func_127218
    ctx->pc = 0x210F90u;
    SET_GPR_U32(ctx, 31, 0x210F98u);
    ctx->pc = 0x210F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210F90u;
            // 0x210f94: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210F98u; }
        if (ctx->pc != 0x210F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210F98u; }
        if (ctx->pc != 0x210F98u) { return; }
    }
    ctx->pc = 0x210F98u;
label_210f98:
    // 0x210f98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x210f98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x210f9c: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x210f9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x210fa0: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x210FA0u;
    {
        const bool branch_taken_0x210fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210FA0u;
            // 0x210fa4: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210fa0) {
            ctx->pc = 0x210F84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210f84;
        }
    }
    ctx->pc = 0x210FA8u;
    // 0x210fa8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x210fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210fac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x210facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210fb0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x210fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_210fb4:
    // 0x210fb4: 0x2853021  addu        $a2, $s4, $a1
    ctx->pc = 0x210fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x210fb8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x210fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x210fbc: 0xacc31a04  sw          $v1, 0x1A04($a2)
    ctx->pc = 0x210fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6660), GPR_U32(ctx, 3));
    // 0x210fc0: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x210fc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x210fc4: 0xacc31a08  sw          $v1, 0x1A08($a2)
    ctx->pc = 0x210fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6664), GPR_U32(ctx, 3));
    // 0x210fc8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x210fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x210fcc: 0xacc31a0c  sw          $v1, 0x1A0C($a2)
    ctx->pc = 0x210fccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6668), GPR_U32(ctx, 3));
    // 0x210fd0: 0xacc31a10  sw          $v1, 0x1A10($a2)
    ctx->pc = 0x210fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6672), GPR_U32(ctx, 3));
    // 0x210fd4: 0xacc31a14  sw          $v1, 0x1A14($a2)
    ctx->pc = 0x210fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6676), GPR_U32(ctx, 3));
    // 0x210fd8: 0xacc31a18  sw          $v1, 0x1A18($a2)
    ctx->pc = 0x210fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6680), GPR_U32(ctx, 3));
    // 0x210fdc: 0xacc31a1c  sw          $v1, 0x1A1C($a2)
    ctx->pc = 0x210fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6684), GPR_U32(ctx, 3));
    // 0x210fe0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x210FE0u;
    {
        const bool branch_taken_0x210fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210FE0u;
            // 0x210fe4: 0xacc31a20  sw          $v1, 0x1A20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 6688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210fe0) {
            ctx->pc = 0x210FB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210fb4;
        }
    }
    ctx->pc = 0x210FE8u;
    // 0x210fe8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x210fe8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210fec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x210fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210ff0:
    // 0x210ff0: 0x2842821  addu        $a1, $s4, $a0
    ctx->pc = 0x210ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x210ff4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x210ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x210ff8: 0xaca01a44  sw          $zero, 0x1A44($a1)
    ctx->pc = 0x210ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6724), GPR_U32(ctx, 0));
    // 0x210ffc: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x210ffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x211000: 0xaca01a84  sw          $zero, 0x1A84($a1)
    ctx->pc = 0x211000u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6788), GPR_U32(ctx, 0));
    // 0x211004: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x211004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x211008: 0xaca01a48  sw          $zero, 0x1A48($a1)
    ctx->pc = 0x211008u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6728), GPR_U32(ctx, 0));
    // 0x21100c: 0xaca01a88  sw          $zero, 0x1A88($a1)
    ctx->pc = 0x21100cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6792), GPR_U32(ctx, 0));
    // 0x211010: 0xaca01a4c  sw          $zero, 0x1A4C($a1)
    ctx->pc = 0x211010u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6732), GPR_U32(ctx, 0));
    // 0x211014: 0xaca01a8c  sw          $zero, 0x1A8C($a1)
    ctx->pc = 0x211014u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6796), GPR_U32(ctx, 0));
    // 0x211018: 0xaca01a50  sw          $zero, 0x1A50($a1)
    ctx->pc = 0x211018u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6736), GPR_U32(ctx, 0));
    // 0x21101c: 0xaca01a90  sw          $zero, 0x1A90($a1)
    ctx->pc = 0x21101cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6800), GPR_U32(ctx, 0));
    // 0x211020: 0xaca01a54  sw          $zero, 0x1A54($a1)
    ctx->pc = 0x211020u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6740), GPR_U32(ctx, 0));
    // 0x211024: 0xaca01a94  sw          $zero, 0x1A94($a1)
    ctx->pc = 0x211024u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6804), GPR_U32(ctx, 0));
    // 0x211028: 0xaca01a58  sw          $zero, 0x1A58($a1)
    ctx->pc = 0x211028u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6744), GPR_U32(ctx, 0));
    // 0x21102c: 0xaca01a98  sw          $zero, 0x1A98($a1)
    ctx->pc = 0x21102cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6808), GPR_U32(ctx, 0));
    // 0x211030: 0xaca01a5c  sw          $zero, 0x1A5C($a1)
    ctx->pc = 0x211030u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6748), GPR_U32(ctx, 0));
    // 0x211034: 0xaca01a9c  sw          $zero, 0x1A9C($a1)
    ctx->pc = 0x211034u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6812), GPR_U32(ctx, 0));
    // 0x211038: 0xaca01a60  sw          $zero, 0x1A60($a1)
    ctx->pc = 0x211038u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6752), GPR_U32(ctx, 0));
    // 0x21103c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x21103Cu;
    {
        const bool branch_taken_0x21103c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21103Cu;
            // 0x211040: 0xaca01aa0  sw          $zero, 0x1AA0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 6816), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21103c) {
            ctx->pc = 0x210FF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210ff0;
        }
    }
    ctx->pc = 0x211044u;
    // 0x211044: 0xae801ac4  sw          $zero, 0x1AC4($s4)
    ctx->pc = 0x211044u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6852), GPR_U32(ctx, 0));
    // 0x211048: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x211048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21104c: 0xae801ac8  sw          $zero, 0x1AC8($s4)
    ctx->pc = 0x21104cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6856), GPR_U32(ctx, 0));
    // 0x211050: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x211050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211054: 0xae821acc  sw          $v0, 0x1ACC($s4)
    ctx->pc = 0x211054u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6860), GPR_U32(ctx, 2));
    // 0x211058: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x211058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21105c: 0xae801ad0  sw          $zero, 0x1AD0($s4)
    ctx->pc = 0x21105cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6864), GPR_U32(ctx, 0));
    // 0x211060: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x211060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211064: 0xae801ad4  sw          $zero, 0x1AD4($s4)
    ctx->pc = 0x211064u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6868), GPR_U32(ctx, 0));
    // 0x211068: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x211068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21106c: 0xae801ad8  sw          $zero, 0x1AD8($s4)
    ctx->pc = 0x21106cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6872), GPR_U32(ctx, 0));
    // 0x211070: 0xae831adc  sw          $v1, 0x1ADC($s4)
    ctx->pc = 0x211070u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6876), GPR_U32(ctx, 3));
    // 0x211074: 0xae831ae0  sw          $v1, 0x1AE0($s4)
    ctx->pc = 0x211074u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6880), GPR_U32(ctx, 3));
    // 0x211078: 0xae831ae4  sw          $v1, 0x1AE4($s4)
    ctx->pc = 0x211078u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6884), GPR_U32(ctx, 3));
    // 0x21107c: 0xae801ae8  sw          $zero, 0x1AE8($s4)
    ctx->pc = 0x21107cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6888), GPR_U32(ctx, 0));
    // 0x211080: 0xae801aec  sw          $zero, 0x1AEC($s4)
    ctx->pc = 0x211080u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6892), GPR_U32(ctx, 0));
    // 0x211084: 0xae801af0  sw          $zero, 0x1AF0($s4)
    ctx->pc = 0x211084u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6896), GPR_U32(ctx, 0));
    // 0x211088: 0xae801af4  sw          $zero, 0x1AF4($s4)
    ctx->pc = 0x211088u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6900), GPR_U32(ctx, 0));
    // 0x21108c: 0xae801af8  sw          $zero, 0x1AF8($s4)
    ctx->pc = 0x21108cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6904), GPR_U32(ctx, 0));
    // 0x211090: 0xae801afc  sw          $zero, 0x1AFC($s4)
    ctx->pc = 0x211090u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6908), GPR_U32(ctx, 0));
    // 0x211094: 0xae801b00  sw          $zero, 0x1B00($s4)
    ctx->pc = 0x211094u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6912), GPR_U32(ctx, 0));
    // 0x211098: 0xae831b04  sw          $v1, 0x1B04($s4)
    ctx->pc = 0x211098u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6916), GPR_U32(ctx, 3));
    // 0x21109c: 0xae831b08  sw          $v1, 0x1B08($s4)
    ctx->pc = 0x21109cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6920), GPR_U32(ctx, 3));
    // 0x2110a0: 0xae831b0c  sw          $v1, 0x1B0C($s4)
    ctx->pc = 0x2110a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6924), GPR_U32(ctx, 3));
    // 0x2110a4: 0xae831b10  sw          $v1, 0x1B10($s4)
    ctx->pc = 0x2110a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6928), GPR_U32(ctx, 3));
    // 0x2110a8: 0xae801b14  sw          $zero, 0x1B14($s4)
    ctx->pc = 0x2110a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6932), GPR_U32(ctx, 0));
    // 0x2110ac: 0xae801b18  sw          $zero, 0x1B18($s4)
    ctx->pc = 0x2110acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6936), GPR_U32(ctx, 0));
    // 0x2110b0: 0xae801b1c  sw          $zero, 0x1B1C($s4)
    ctx->pc = 0x2110b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6940), GPR_U32(ctx, 0));
    // 0x2110b4: 0xae801b20  sw          $zero, 0x1B20($s4)
    ctx->pc = 0x2110b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6944), GPR_U32(ctx, 0));
    // 0x2110b8: 0xae801b24  sw          $zero, 0x1B24($s4)
    ctx->pc = 0x2110b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6948), GPR_U32(ctx, 0));
    // 0x2110bc: 0xae801b28  sw          $zero, 0x1B28($s4)
    ctx->pc = 0x2110bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6952), GPR_U32(ctx, 0));
    // 0x2110c0: 0xae801b30  sw          $zero, 0x1B30($s4)
    ctx->pc = 0x2110c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6960), GPR_U32(ctx, 0));
    // 0x2110c4: 0xae801b34  sw          $zero, 0x1B34($s4)
    ctx->pc = 0x2110c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6964), GPR_U32(ctx, 0));
    // 0x2110c8: 0xae801b3c  sw          $zero, 0x1B3C($s4)
    ctx->pc = 0x2110c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6972), GPR_U32(ctx, 0));
    // 0x2110cc: 0xae801b38  sw          $zero, 0x1B38($s4)
    ctx->pc = 0x2110ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6968), GPR_U32(ctx, 0));
    // 0x2110d0: 0xae801b40  sw          $zero, 0x1B40($s4)
    ctx->pc = 0x2110d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6976), GPR_U32(ctx, 0));
label_2110d4:
    // 0x2110d4: 0x2853821  addu        $a3, $s4, $a1
    ctx->pc = 0x2110d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2110d8: 0x2861021  addu        $v0, $s4, $a2
    ctx->pc = 0x2110d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x2110dc: 0xace01b44  sw          $zero, 0x1B44($a3)
    ctx->pc = 0x2110dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6980), GPR_U32(ctx, 0));
    // 0x2110e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2110e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2110e4: 0xac401b94  sw          $zero, 0x1B94($v0)
    ctx->pc = 0x2110e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7060), GPR_U32(ctx, 0));
    // 0x2110e8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2110e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2110ec: 0xac401b98  sw          $zero, 0x1B98($v0)
    ctx->pc = 0x2110ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7064), GPR_U32(ctx, 0));
    // 0x2110f0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2110f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2110f4: 0xace01c34  sw          $zero, 0x1C34($a3)
    ctx->pc = 0x2110f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7220), GPR_U32(ctx, 0));
    // 0x2110f8: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x2110f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2110fc: 0xace31c84  sw          $v1, 0x1C84($a3)
    ctx->pc = 0x2110fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7300), GPR_U32(ctx, 3));
    // 0x211100: 0xace01cd4  sw          $zero, 0x1CD4($a3)
    ctx->pc = 0x211100u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7380), GPR_U32(ctx, 0));
    // 0x211104: 0xace01d24  sw          $zero, 0x1D24($a3)
    ctx->pc = 0x211104u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7460), GPR_U32(ctx, 0));
    // 0x211108: 0xace01d74  sw          $zero, 0x1D74($a3)
    ctx->pc = 0x211108u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7540), GPR_U32(ctx, 0));
    // 0x21110c: 0xace01dc4  sw          $zero, 0x1DC4($a3)
    ctx->pc = 0x21110cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7620), GPR_U32(ctx, 0));
    // 0x211110: 0xace01e14  sw          $zero, 0x1E14($a3)
    ctx->pc = 0x211110u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7700), GPR_U32(ctx, 0));
    // 0x211114: 0xace31e64  sw          $v1, 0x1E64($a3)
    ctx->pc = 0x211114u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7780), GPR_U32(ctx, 3));
    // 0x211118: 0xace01eb4  sw          $zero, 0x1EB4($a3)
    ctx->pc = 0x211118u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7860), GPR_U32(ctx, 0));
    // 0x21111c: 0xace01f04  sw          $zero, 0x1F04($a3)
    ctx->pc = 0x21111cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7940), GPR_U32(ctx, 0));
    // 0x211120: 0xace01f54  sw          $zero, 0x1F54($a3)
    ctx->pc = 0x211120u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8020), GPR_U32(ctx, 0));
    // 0x211124: 0xace31fa4  sw          $v1, 0x1FA4($a3)
    ctx->pc = 0x211124u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8100), GPR_U32(ctx, 3));
    // 0x211128: 0xace31ff4  sw          $v1, 0x1FF4($a3)
    ctx->pc = 0x211128u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8180), GPR_U32(ctx, 3));
    // 0x21112c: 0xace02044  sw          $zero, 0x2044($a3)
    ctx->pc = 0x21112cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8260), GPR_U32(ctx, 0));
    // 0x211130: 0xace02094  sw          $zero, 0x2094($a3)
    ctx->pc = 0x211130u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8340), GPR_U32(ctx, 0));
    // 0x211134: 0xace020e4  sw          $zero, 0x20E4($a3)
    ctx->pc = 0x211134u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8420), GPR_U32(ctx, 0));
    // 0x211138: 0xace02134  sw          $zero, 0x2134($a3)
    ctx->pc = 0x211138u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8500), GPR_U32(ctx, 0));
    // 0x21113c: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x21113Cu;
    {
        const bool branch_taken_0x21113c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21113Cu;
            // 0x211140: 0xace02184  sw          $zero, 0x2184($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21113c) {
            ctx->pc = 0x2110D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2110d4;
        }
    }
    ctx->pc = 0x211144u;
    // 0x211144: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x211144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211148: 0xc054ba8  jal         func_152EA0
    ctx->pc = 0x211148u;
    SET_GPR_U32(ctx, 31, 0x211150u);
    ctx->pc = 0x21114Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211148u;
            // 0x21114c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EA0u;
    if (runtime->hasFunction(0x152EA0u)) {
        auto targetFn = runtime->lookupFunction(0x152EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211150u; }
        if (ctx->pc != 0x211150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff__6ClsMesFPs_0x152ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211150u; }
        if (ctx->pc != 0x211150u) { return; }
    }
    ctx->pc = 0x211150u;
label_211150:
    // 0x211150: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x211150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211154: 0xc054bac  jal         func_152EB0
    ctx->pc = 0x211154u;
    SET_GPR_U32(ctx, 31, 0x21115Cu);
    ctx->pc = 0x211158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211154u;
            // 0x211158: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EB0u;
    if (runtime->hasFunction(0x152EB0u)) {
        auto targetFn = runtime->lookupFunction(0x152EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21115Cu; }
        if (ctx->pc != 0x21115Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff_system__6ClsMesFPs_0x152eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21115Cu; }
        if (ctx->pc != 0x21115Cu) { return; }
    }
    ctx->pc = 0x21115Cu;
label_21115c:
    // 0x21115c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21115cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x211160: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x211160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211164: 0x8c22d624  lw          $v0, -0x29DC($at)
    ctx->pc = 0x211164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x211168: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x211168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21116c: 0xc054cdc  jal         func_153370
    ctx->pc = 0x21116Cu;
    SET_GPR_U32(ctx, 31, 0x211174u);
    ctx->pc = 0x211170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21116Cu;
            // 0x211170: 0xae821b2c  sw          $v0, 0x1B2C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 6956), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211174u; }
        if (ctx->pc != 0x211174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211174u; }
        if (ctx->pc != 0x211174u) { return; }
    }
    ctx->pc = 0x211174u;
label_211174:
    // 0x211174: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x211174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x211178: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x211178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x21117c: 0xae83014c  sw          $v1, 0x14C($s4)
    ctx->pc = 0x21117cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 332), GPR_U32(ctx, 3));
    // 0x211180: 0xae840184  sw          $a0, 0x184($s4)
    ctx->pc = 0x211180u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 388), GPR_U32(ctx, 4));
    // 0x211184: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x211184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211188: 0xae8001b8  sw          $zero, 0x1B8($s4)
    ctx->pc = 0x211188u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 440), GPR_U32(ctx, 0));
    // 0x21118c: 0xae8001bc  sw          $zero, 0x1BC($s4)
    ctx->pc = 0x21118cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 444), GPR_U32(ctx, 0));
    // 0x211190: 0xae8317e4  sw          $v1, 0x17E4($s4)
    ctx->pc = 0x211190u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6116), GPR_U32(ctx, 3));
label_211194:
    // 0x211194: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x211194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x211198: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x211198u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21119c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21119cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2111a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2111a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2111a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2111a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2111a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2111a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2111ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2111acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2111b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2111B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2111B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2111B0u;
            // 0x2111b4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2111B8u;
}
