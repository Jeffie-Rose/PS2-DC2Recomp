#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _vfprintf_r
// Address: 0x12ab08 - 0x12c020
void _vfprintf_r_0x12ab08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_vfprintf_r_0x12ab08");
#endif

    switch (ctx->pc) {
        case 0x12ab48u: goto label_12ab48;
        case 0x12ab7cu: goto label_12ab7c;
        case 0x12abb8u: goto label_12abb8;
        case 0x12abe8u: goto label_12abe8;
        case 0x12abf0u: goto label_12abf0;
        case 0x12ac10u: goto label_12ac10;
        case 0x12ac7cu: goto label_12ac7c;
        case 0x12acbcu: goto label_12acbc;
        case 0x12acc4u: goto label_12acc4;
        case 0x12acc8u: goto label_12acc8;
        case 0x12acccu: goto label_12accc;
        case 0x12ace0u: goto label_12ace0;
        case 0x12adb8u: goto label_12adb8;
        case 0x12ae08u: goto label_12ae08;
        case 0x12af58u: goto label_12af58;
        case 0x12af68u: goto label_12af68;
        case 0x12af90u: goto label_12af90;
        case 0x12afccu: goto label_12afcc;
        case 0x12b030u: goto label_12b030;
        case 0x12b19cu: goto label_12b19c;
        case 0x12b1c0u: goto label_12b1c0;
        case 0x12b2b0u: goto label_12b2b0;
        case 0x12b2c8u: goto label_12b2c8;
        case 0x12b318u: goto label_12b318;
        case 0x12b324u: goto label_12b324;
        case 0x12b340u: goto label_12b340;
        case 0x12b380u: goto label_12b380;
        case 0x12b448u: goto label_12b448;
        case 0x12b48cu: goto label_12b48c;
        case 0x12b4e4u: goto label_12b4e4;
        case 0x12b594u: goto label_12b594;
        case 0x12b5d8u: goto label_12b5d8;
        case 0x12b618u: goto label_12b618;
        case 0x12b66cu: goto label_12b66c;
        case 0x12b6a0u: goto label_12b6a0;
        case 0x12b6e0u: goto label_12b6e0;
        case 0x12b734u: goto label_12b734;
        case 0x12b784u: goto label_12b784;
        case 0x12b7d0u: goto label_12b7d0;
        case 0x12b834u: goto label_12b834;
        case 0x12b858u: goto label_12b858;
        case 0x12b898u: goto label_12b898;
        case 0x12b934u: goto label_12b934;
        case 0x12b978u: goto label_12b978;
        case 0x12b998u: goto label_12b998;
        case 0x12b9d8u: goto label_12b9d8;
        case 0x12ba34u: goto label_12ba34;
        case 0x12bac0u: goto label_12bac0;
        case 0x12bae8u: goto label_12bae8;
        case 0x12bb28u: goto label_12bb28;
        case 0x12bb84u: goto label_12bb84;
        case 0x12bc04u: goto label_12bc04;
        case 0x12bc58u: goto label_12bc58;
        case 0x12bd14u: goto label_12bd14;
        case 0x12bd28u: goto label_12bd28;
        case 0x12bd88u: goto label_12bd88;
        case 0x12bdc8u: goto label_12bdc8;
        case 0x12be54u: goto label_12be54;
        case 0x12be9cu: goto label_12be9c;
        case 0x12bec8u: goto label_12bec8;
        case 0x12bf0cu: goto label_12bf0c;
        case 0x12bf68u: goto label_12bf68;
        case 0x12bfa4u: goto label_12bfa4;
        case 0x12bfccu: goto label_12bfcc;
        default: break;
    }

    ctx->pc = 0x12ab08u;

    // 0x12ab08: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x12ab08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
    // 0x12ab0c: 0xffb40270  sd          $s4, 0x270($sp)
    ctx->pc = 0x12ab0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 20));
    // 0x12ab10: 0xffb00230  sd          $s0, 0x230($sp)
    ctx->pc = 0x12ab10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 16));
    // 0x12ab14: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x12ab14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ab18: 0xafa501e8  sw          $a1, 0x1E8($sp)
    ctx->pc = 0x12ab18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 5));
    // 0x12ab1c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12ab1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ab20: 0xffbf02c0  sd          $ra, 0x2C0($sp)
    ctx->pc = 0x12ab20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 31));
    // 0x12ab24: 0xffbe02b0  sd          $fp, 0x2B0($sp)
    ctx->pc = 0x12ab24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 30));
    // 0x12ab28: 0xffb702a0  sd          $s7, 0x2A0($sp)
    ctx->pc = 0x12ab28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 23));
    // 0x12ab2c: 0xffb60290  sd          $s6, 0x290($sp)
    ctx->pc = 0x12ab2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 22));
    // 0x12ab30: 0xffb50280  sd          $s5, 0x280($sp)
    ctx->pc = 0x12ab30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 21));
    // 0x12ab34: 0xffb30260  sd          $s3, 0x260($sp)
    ctx->pc = 0x12ab34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 19));
    // 0x12ab38: 0xffb20250  sd          $s2, 0x250($sp)
    ctx->pc = 0x12ab38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 18));
    // 0x12ab3c: 0xffb10240  sd          $s1, 0x240($sp)
    ctx->pc = 0x12ab3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 17));
    // 0x12ab40: 0xc0498b2  jal         func_1262C8
    ctx->pc = 0x12AB40u;
    SET_GPR_U32(ctx, 31, 0x12AB48u);
    ctx->pc = 0x12AB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AB40u;
            // 0x12ab44: 0xafa401e4  sw          $a0, 0x1E4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1262C8u;
    if (runtime->hasFunction(0x1262C8u)) {
        auto targetFn = runtime->lookupFunction(0x1262C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AB48u; }
        if (ctx->pc != 0x12AB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        localeconv_0x1262c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AB48u; }
        if (ctx->pc != 0x12AB48u) { return; }
    }
    ctx->pc = 0x12AB48u;
label_12ab48:
    // 0x12ab48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ab4c: 0xafa201f8  sw          $v0, 0x1F8($sp)
    ctx->pc = 0x12ab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 2));
    // 0x12ab50: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x12ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12ab54: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x12ab54u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12ab58: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x12ab58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x12ab5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12AB5Cu;
    {
        const bool branch_taken_0x12ab5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AB5Cu;
            // 0x12ab60: 0xafa001d8  sw          $zero, 0x1D8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab5c) {
            ctx->pc = 0x12AB74u;
            goto label_12ab74;
        }
    }
    ctx->pc = 0x12AB64u;
    // 0x12ab64: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12ab64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12ab68: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x12ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12ab6c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12AB6Cu;
    {
        const bool branch_taken_0x12ab6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AB6Cu;
            // 0x12ab70: 0x3063001a  andi        $v1, $v1, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab6c) {
            ctx->pc = 0x12AB90u;
            goto label_12ab90;
        }
    }
    ctx->pc = 0x12AB74u;
label_12ab74:
    // 0x12ab74: 0xc04b0da  jal         func_12C368
    ctx->pc = 0x12AB74u;
    SET_GPR_U32(ctx, 31, 0x12AB7Cu);
    ctx->pc = 0x12AB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AB74u;
            // 0x12ab78: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C368u;
    if (runtime->hasFunction(0x12C368u)) {
        auto targetFn = runtime->lookupFunction(0x12C368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AB7Cu; }
        if (ctx->pc != 0x12AB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___swsetup_0x12c368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AB7Cu; }
        if (ctx->pc != 0x12AB7Cu) { return; }
    }
    ctx->pc = 0x12AB7Cu;
label_12ab7c:
    // 0x12ab7c: 0x1440051c  bnez        $v0, . + 4 + (0x51C << 2)
    ctx->pc = 0x12AB7Cu;
    {
        const bool branch_taken_0x12ab7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AB7Cu;
            // 0x12ab80: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab7c) {
            ctx->pc = 0x12BFF0u;
            goto label_12bff0;
        }
    }
    ctx->pc = 0x12AB84u;
    // 0x12ab84: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x12ab84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12ab88: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x12ab88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x12ab8c: 0x3063001a  andi        $v1, $v1, 0x1A
    ctx->pc = 0x12ab8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26);
label_12ab90:
    // 0x12ab90: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x12ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12ab94: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12AB94u;
    {
        const bool branch_taken_0x12ab94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12AB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AB94u;
            // 0x12ab98: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab94) {
            ctx->pc = 0x12ABC0u;
            goto label_12abc0;
        }
    }
    ctx->pc = 0x12AB9Cu;
    // 0x12ab9c: 0x8fa601e8  lw          $a2, 0x1E8($sp)
    ctx->pc = 0x12ab9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12aba0: 0x84c2000e  lh          $v0, 0xE($a2)
    ctx->pc = 0x12aba0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x12aba4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12ABA4u;
    {
        const bool branch_taken_0x12aba4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12ABA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ABA4u;
            // 0x12aba8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aba4) {
            ctx->pc = 0x12ABC0u;
            goto label_12abc0;
        }
    }
    ctx->pc = 0x12ABACu;
    // 0x12abac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12abacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12abb0: 0xc04aa76  jal         func_12A9D8
    ctx->pc = 0x12ABB0u;
    SET_GPR_U32(ctx, 31, 0x12ABB8u);
    ctx->pc = 0x12ABB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ABB0u;
            // 0x12abb4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A9D8u;
    if (runtime->hasFunction(0x12A9D8u)) {
        auto targetFn = runtime->lookupFunction(0x12A9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ABB8u; }
        if (ctx->pc != 0x12ABB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sbprintf_0x12a9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ABB8u; }
        if (ctx->pc != 0x12ABB8u) { return; }
    }
    ctx->pc = 0x12ABB8u;
label_12abb8:
    // 0x12abb8: 0x1000050e  b           . + 4 + (0x50E << 2)
    ctx->pc = 0x12ABB8u;
    {
        const bool branch_taken_0x12abb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ABBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ABB8u;
            // 0x12abbc: 0xdfbf02c0  ld          $ra, 0x2C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12abb8) {
            ctx->pc = 0x12BFF4u;
            goto label_12bff4;
        }
    }
    ctx->pc = 0x12ABC0u;
label_12abc0:
    // 0x12abc0: 0x27a201d4  addiu       $v0, $sp, 0x1D4
    ctx->pc = 0x12abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x12abc4: 0x27a301d8  addiu       $v1, $sp, 0x1D8
    ctx->pc = 0x12abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x12abc8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x12abc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x12abcc: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x12abccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x12abd0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x12abd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x12abd4: 0xafb001ec  sw          $s0, 0x1EC($sp)
    ctx->pc = 0x12abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 16));
    // 0x12abd8: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x12abd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
    // 0x12abdc: 0xafa20218  sw          $v0, 0x218($sp)
    ctx->pc = 0x12abdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
    // 0x12abe0: 0xafa3021c  sw          $v1, 0x21C($sp)
    ctx->pc = 0x12abe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 3));
    // 0x12abe4: 0x0  nop
    ctx->pc = 0x12abe4u;
    // NOP
label_12abe8:
    // 0x12abe8: 0x8fb301ec  lw          $s3, 0x1EC($sp)
    ctx->pc = 0x12abe8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12abec: 0x24120025  addiu       $s2, $zero, 0x25
    ctx->pc = 0x12abecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_12abf0:
    // 0x12abf0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x12abf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x12abf4: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x12abf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x12abf8: 0x8ca43b84  lw          $a0, 0x3B84($a1)
    ctx->pc = 0x12abf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 15236)));
    // 0x12abfc: 0x8cc73b88  lw          $a3, 0x3B88($a2)
    ctx->pc = 0x12abfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 15240)));
    // 0x12ac00: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x12ac00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x12ac04: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x12ac04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12ac08: 0xc049baa  jal         func_126EA8
    ctx->pc = 0x12AC08u;
    SET_GPR_U32(ctx, 31, 0x12AC10u);
    ctx->pc = 0x12AC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AC08u;
            // 0x12ac0c: 0x8fa8021c  lw          $t0, 0x21C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126EA8u;
    if (runtime->hasFunction(0x126EA8u)) {
        auto targetFn = runtime->lookupFunction(0x126EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AC10u; }
        if (ctx->pc != 0x12AC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _mbtowc_r_0x126ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AC10u; }
        if (ctx->pc != 0x12AC10u) { return; }
    }
    ctx->pc = 0x12AC10u;
label_12ac10:
    // 0x12ac10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12ac10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ac14: 0x1a000007  blez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12AC14u;
    {
        const bool branch_taken_0x12ac14 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12AC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AC14u;
            // 0x12ac18: 0x8fa301ec  lw          $v1, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac14) {
            ctx->pc = 0x12AC34u;
            goto label_12ac34;
        }
    }
    ctx->pc = 0x12AC1Cu;
    // 0x12ac1c: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x12ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x12ac20: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x12ac20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x12ac24: 0x1452fff2  bne         $v0, $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x12AC24u;
    {
        const bool branch_taken_0x12ac24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x12AC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AC24u;
            // 0x12ac28: 0xafa301ec  sw          $v1, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac24) {
            ctx->pc = 0x12ABF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12abf0;
        }
    }
    ctx->pc = 0x12AC2Cu;
    // 0x12ac2c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12ac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12ac30: 0xafa301ec  sw          $v1, 0x1EC($sp)
    ctx->pc = 0x12ac30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
label_12ac34:
    // 0x12ac34: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x12ac34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12ac38: 0x939023  subu        $s2, $a0, $s3
    ctx->pc = 0x12ac38u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x12ac3c: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x12AC3Cu;
    {
        const bool branch_taken_0x12ac3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ac3c) {
            ctx->pc = 0x12AC90u;
            goto label_12ac90;
        }
    }
    ctx->pc = 0x12AC44u;
    // 0x12ac44: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x12ac44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x12ac48: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x12ac48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x12ac4c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12ac4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12ac50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ac54: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12ac58: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x12ac58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x12ac5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12ac5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12ac60: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12ac60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12ac64: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12ac64u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12ac68: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12AC68u;
    {
        const bool branch_taken_0x12ac68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AC68u;
            // 0x12ac6c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac68) {
            ctx->pc = 0x12AC84u;
            goto label_12ac84;
        }
    }
    ctx->pc = 0x12AC70u;
    // 0x12ac70: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12ac74: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12AC74u;
    SET_GPR_U32(ctx, 31, 0x12AC7Cu);
    ctx->pc = 0x12AC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AC74u;
            // 0x12ac78: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AC7Cu; }
        if (ctx->pc != 0x12AC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AC7Cu; }
        if (ctx->pc != 0x12AC7Cu) { return; }
    }
    ctx->pc = 0x12AC7Cu;
label_12ac7c:
    // 0x12ac7c: 0x144004d6  bnez        $v0, . + 4 + (0x4D6 << 2)
    ctx->pc = 0x12AC7Cu;
    {
        const bool branch_taken_0x12ac7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AC7Cu;
            // 0x12ac80: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac7c) {
            ctx->pc = 0x12BFD8u;
            goto label_12bfd8;
        }
    }
    ctx->pc = 0x12AC84u;
label_12ac84:
    // 0x12ac84: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x12ac84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x12ac88: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x12ac88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x12ac8c: 0xafa501f0  sw          $a1, 0x1F0($sp)
    ctx->pc = 0x12ac8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 5));
label_12ac90:
    // 0x12ac90: 0x1a0004c9  blez        $s0, . + 4 + (0x4C9 << 2)
    ctx->pc = 0x12AC90u;
    {
        const bool branch_taken_0x12ac90 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12AC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AC90u;
            // 0x12ac94: 0x8fa601ec  lw          $a2, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac90) {
            ctx->pc = 0x12BFB8u;
            goto label_12bfb8;
        }
    }
    ctx->pc = 0x12AC98u;
    // 0x12ac98: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x12ac98u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ac9c: 0xafa0020c  sw          $zero, 0x20C($sp)
    ctx->pc = 0x12ac9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 0));
    // 0x12aca0: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x12aca0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12aca4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x12aca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x12aca8: 0xafa001f4  sw          $zero, 0x1F4($sp)
    ctx->pc = 0x12aca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 0));
    // 0x12acac: 0xafa601ec  sw          $a2, 0x1EC($sp)
    ctx->pc = 0x12acacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 6));
    // 0x12acb0: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x12acb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x12acb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12ACB4u;
    {
        const bool branch_taken_0x12acb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ACB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ACB4u;
            // 0x12acb8: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12acb4) {
            ctx->pc = 0x12ACCCu;
            goto label_12accc;
        }
    }
    ctx->pc = 0x12ACBCu;
label_12acbc:
    // 0x12acbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12ACBCu;
    {
        const bool branch_taken_0x12acbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ACC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ACBCu;
            // 0x12acc0: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12acbc) {
            ctx->pc = 0x12ACCCu;
            goto label_12accc;
        }
    }
    ctx->pc = 0x12ACC4u;
label_12acc4:
    // 0x12acc4: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x12acc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_12acc8:
    // 0x12acc8: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x12acc8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_12accc:
    // 0x12accc: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x12acccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x12acd0: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x12acd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12acd4: 0x2be03  sra         $s7, $v0, 24
    ctx->pc = 0x12acd4u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 24));
    // 0x12acd8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12acd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12acdc: 0xafa401ec  sw          $a0, 0x1EC($sp)
    ctx->pc = 0x12acdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 4));
label_12ace0:
    // 0x12ace0: 0x26e3ffe0  addiu       $v1, $s7, -0x20
    ctx->pc = 0x12ace0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967264));
    // 0x12ace4: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x12ace4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x12ace8: 0x104001b6  beqz        $v0, . + 4 + (0x1B6 << 2)
    ctx->pc = 0x12ACE8u;
    {
        const bool branch_taken_0x12ace8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ACECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ACE8u;
            // 0x12acec: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ace8) {
            ctx->pc = 0x12B3C4u;
            goto label_12b3c4;
        }
    }
    ctx->pc = 0x12ACF0u;
    // 0x12acf0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12acf4: 0x24422350  addiu       $v0, $v0, 0x2350
    ctx->pc = 0x12acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9040));
    // 0x12acf8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12acf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12acfc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12acfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12ad00: 0x800008  jr          $a0
    ctx->pc = 0x12AD00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12AD08u: goto label_12ad08;
            case 0x12AD20u: goto label_12ad20;
            case 0x12AD30u: goto label_12ad30;
            case 0x12AD48u: goto label_12ad48;
            case 0x12AD54u: goto label_12ad54;
            case 0x12AD68u: goto label_12ad68;
            case 0x12ADF4u: goto label_12adf4;
            case 0x12AE00u: goto label_12ae00;
            case 0x12AE38u: goto label_12ae38;
            case 0x12AE48u: goto label_12ae48;
            case 0x12AE58u: goto label_12ae58;
            case 0x12AE8Cu: goto label_12ae8c;
            case 0x12AE9Cu: goto label_12ae9c;
            case 0x12AEBCu: goto label_12aebc;
            case 0x12AEC0u: goto label_12aec0;
            case 0x12AF04u: goto label_12af04;
            case 0x12B0CCu: goto label_12b0cc;
            case 0x12B118u: goto label_12b118;
            case 0x12B11Cu: goto label_12b11c;
            case 0x12B150u: goto label_12b150;
            case 0x12B174u: goto label_12b174;
            case 0x12B1C8u: goto label_12b1c8;
            case 0x12B1CCu: goto label_12b1cc;
            case 0x12B200u: goto label_12b200;
            case 0x12B20Cu: goto label_12b20c;
            case 0x12B3C4u: goto label_12b3c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12AD08u;
label_12ad08:
    // 0x12ad08: 0x83a201d1  lb          $v0, 0x1D1($sp)
    ctx->pc = 0x12ad08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x12ad0c: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12AD0Cu;
    {
        const bool branch_taken_0x12ad0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AD0Cu;
            // 0x12ad10: 0x8fa201ec  lw          $v0, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad0c) {
            ctx->pc = 0x12ACBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12acbc;
        }
    }
    ctx->pc = 0x12AD14u;
    // 0x12ad14: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x12ad14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12ad18: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12AD18u;
    {
        const bool branch_taken_0x12ad18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AD18u;
            // 0x12ad1c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad18) {
            ctx->pc = 0x12AD5Cu;
            goto label_12ad5c;
        }
    }
    ctx->pc = 0x12AD20u;
label_12ad20:
    // 0x12ad20: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x12ad20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12ad24: 0x37de0001  ori         $fp, $fp, 0x1
    ctx->pc = 0x12ad24u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)1);
    // 0x12ad28: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x12AD28u;
    {
        const bool branch_taken_0x12ad28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AD28u;
            // 0x12ad2c: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad28) {
            ctx->pc = 0x12ACCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12accc;
        }
    }
    ctx->pc = 0x12AD30u;
label_12ad30:
    // 0x12ad30: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12ad30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12ad34: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x12ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x12ad38: 0x441ffe2  bgez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x12AD38u;
    {
        const bool branch_taken_0x12ad38 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12AD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AD38u;
            // 0x12ad3c: 0xafa201f4  sw          $v0, 0x1F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad38) {
            ctx->pc = 0x12ACC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12acc4;
        }
    }
    ctx->pc = 0x12AD40u;
    // 0x12ad40: 0x21023  negu        $v0, $v0
    ctx->pc = 0x12ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x12ad44: 0xafa201f4  sw          $v0, 0x1F4($sp)
    ctx->pc = 0x12ad44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
label_12ad48:
    // 0x12ad48: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x12ad48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12ad4c: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x12AD4Cu;
    {
        const bool branch_taken_0x12ad4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AD4Cu;
            // 0x12ad50: 0x37de0004  ori         $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad4c) {
            ctx->pc = 0x12ACC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12acc8;
        }
    }
    ctx->pc = 0x12AD54u;
label_12ad54:
    // 0x12ad54: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x12ad54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12ad58: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x12ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_12ad5c:
    // 0x12ad5c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x12ad5cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ad60: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x12AD60u;
    {
        const bool branch_taken_0x12ad60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AD60u;
            // 0x12ad64: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad60) {
            ctx->pc = 0x12ACCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12accc;
        }
    }
    ctx->pc = 0x12AD68u;
label_12ad68:
    // 0x12ad68: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x12ad68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12ad6c: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x12ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x12ad70: 0x80d70000  lb          $s7, 0x0($a2)
    ctx->pc = 0x12ad70u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12ad74: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x12ad74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x12ad78: 0x16e20009  bne         $s7, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12AD78u;
    {
        const bool branch_taken_0x12ad78 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x12AD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AD78u;
            // 0x12ad7c: 0xafa601ec  sw          $a2, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad78) {
            ctx->pc = 0x12ADA0u;
            goto label_12ada0;
        }
    }
    ctx->pc = 0x12AD80u;
    // 0x12ad80: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12ad80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12ad84: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x12ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x12ad88: 0x8e90fff8  lw          $s0, -0x8($s4)
    ctx->pc = 0x12ad88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x12ad8c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x12ad8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12ad90: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x12ad90u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12ad94: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x12ad94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x12ad98: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x12AD98u;
    {
        const bool branch_taken_0x12ad98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AD98u;
            // 0x12ad9c: 0x202900b  movn        $s2, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad98) {
            ctx->pc = 0x12ACCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12accc;
        }
    }
    ctx->pc = 0x12ADA0u;
label_12ada0:
    // 0x12ada0: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x12ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x12ada4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x12ada4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12ada8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12ADA8u;
    {
        const bool branch_taken_0x12ada8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ADACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ADA8u;
            // 0x12adac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ada8) {
            ctx->pc = 0x12ADE0u;
            goto label_12ade0;
        }
    }
    ctx->pc = 0x12ADB0u;
    // 0x12adb0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x12adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12adb4: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x12adb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_12adb8:
    // 0x12adb8: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x12adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x12adbc: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x12adbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x12adc0: 0x8fa201ec  lw          $v0, 0x1EC($sp)
    ctx->pc = 0x12adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12adc4: 0x80570000  lb          $s7, 0x0($v0)
    ctx->pc = 0x12adc4u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12adc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12adcc: 0xafa201ec  sw          $v0, 0x1EC($sp)
    ctx->pc = 0x12adccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
    // 0x12add0: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x12add0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x12add4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x12add4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12add8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12ADD8u;
    {
        const bool branch_taken_0x12add8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12ADDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ADD8u;
            // 0x12addc: 0x2031018  mult        $v0, $s0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12add8) {
            ctx->pc = 0x12ADB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12adb8;
        }
    }
    ctx->pc = 0x12ADE0u;
label_12ade0:
    // 0x12ade0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x12ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x12ade4: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x12ade4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12ade8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x12ade8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x12adec: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
    ctx->pc = 0x12ADECu;
    {
        const bool branch_taken_0x12adec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ADF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ADECu;
            // 0x12adf0: 0x202900b  movn        $s2, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12adec) {
            ctx->pc = 0x12ACE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ace0;
        }
    }
    ctx->pc = 0x12ADF4u;
label_12adf4:
    // 0x12adf4: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x12adf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12adf8: 0x1000ffb3  b           . + 4 + (-0x4D << 2)
    ctx->pc = 0x12ADF8u;
    {
        const bool branch_taken_0x12adf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ADFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ADF8u;
            // 0x12adfc: 0x37de0080  ori         $fp, $fp, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12adf8) {
            ctx->pc = 0x12ACC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12acc8;
        }
    }
    ctx->pc = 0x12AE00u;
label_12ae00:
    // 0x12ae00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12ae00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ae04: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x12ae04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_12ae08:
    // 0x12ae08: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x12ae08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x12ae0c: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x12ae0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12ae10: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x12ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x12ae14: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x12ae14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x12ae18: 0x80970000  lb          $s7, 0x0($a0)
    ctx->pc = 0x12ae18u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12ae1c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12ae1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12ae20: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x12ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x12ae24: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x12ae24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12ae28: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12AE28u;
    {
        const bool branch_taken_0x12ae28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AE28u;
            // 0x12ae2c: 0xafa401ec  sw          $a0, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae28) {
            ctx->pc = 0x12AE08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ae08;
        }
    }
    ctx->pc = 0x12AE30u;
    // 0x12ae30: 0x1000ffab  b           . + 4 + (-0x55 << 2)
    ctx->pc = 0x12AE30u;
    {
        const bool branch_taken_0x12ae30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AE30u;
            // 0x12ae34: 0xafb001f4  sw          $s0, 0x1F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae30) {
            ctx->pc = 0x12ACE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ace0;
        }
    }
    ctx->pc = 0x12AE38u;
label_12ae38:
    // 0x12ae38: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x12ae38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12ae3c: 0x37de0008  ori         $fp, $fp, 0x8
    ctx->pc = 0x12ae3cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)8);
    // 0x12ae40: 0x1000ffa2  b           . + 4 + (-0x5E << 2)
    ctx->pc = 0x12AE40u;
    {
        const bool branch_taken_0x12ae40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AE40u;
            // 0x12ae44: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae40) {
            ctx->pc = 0x12ACCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12accc;
        }
    }
    ctx->pc = 0x12AE48u;
label_12ae48:
    // 0x12ae48: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x12ae48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12ae4c: 0x37de0040  ori         $fp, $fp, 0x40
    ctx->pc = 0x12ae4cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)64);
    // 0x12ae50: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
    ctx->pc = 0x12AE50u;
    {
        const bool branch_taken_0x12ae50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AE50u;
            // 0x12ae54: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae50) {
            ctx->pc = 0x12ACCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12accc;
        }
    }
    ctx->pc = 0x12AE58u;
label_12ae58:
    // 0x12ae58: 0x8fa201ec  lw          $v0, 0x1EC($sp)
    ctx->pc = 0x12ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12ae5c: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x12ae5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12ae60: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x12ae60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ae64: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x12ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x12ae68: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12AE68u;
    {
        const bool branch_taken_0x12ae68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12AE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AE68u;
            // 0x12ae6c: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae68) {
            ctx->pc = 0x12AE84u;
            goto label_12ae84;
        }
    }
    ctx->pc = 0x12AE70u;
    // 0x12ae70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12ae70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12ae74: 0x37de0020  ori         $fp, $fp, 0x20
    ctx->pc = 0x12ae74u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)32);
    // 0x12ae78: 0xafa501ec  sw          $a1, 0x1EC($sp)
    ctx->pc = 0x12ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
    // 0x12ae7c: 0x1000ff93  b           . + 4 + (-0x6D << 2)
    ctx->pc = 0x12AE7Cu;
    {
        const bool branch_taken_0x12ae7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AE7Cu;
            // 0x12ae80: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae7c) {
            ctx->pc = 0x12ACCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12accc;
        }
    }
    ctx->pc = 0x12AE84u;
label_12ae84:
    // 0x12ae84: 0x1000ff91  b           . + 4 + (-0x6F << 2)
    ctx->pc = 0x12AE84u;
    {
        const bool branch_taken_0x12ae84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AE84u;
            // 0x12ae88: 0x37de0010  ori         $fp, $fp, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae84) {
            ctx->pc = 0x12ACCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12accc;
        }
    }
    ctx->pc = 0x12AE8Cu;
label_12ae8c:
    // 0x12ae8c: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x12ae8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12ae90: 0x37de0020  ori         $fp, $fp, 0x20
    ctx->pc = 0x12ae90u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)32);
    // 0x12ae94: 0x1000ff8d  b           . + 4 + (-0x73 << 2)
    ctx->pc = 0x12AE94u;
    {
        const bool branch_taken_0x12ae94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AE94u;
            // 0x12ae98: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae94) {
            ctx->pc = 0x12ACCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12accc;
        }
    }
    ctx->pc = 0x12AE9Cu;
label_12ae9c:
    // 0x12ae9c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12ae9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12aea0: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x12aea0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12aea4: 0x9282fff8  lbu         $v0, -0x8($s4)
    ctx->pc = 0x12aea4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x12aea8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x12aea8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12aeac: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x12aeacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x12aeb0: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x12aeb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12aeb4: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x12AEB4u;
    {
        const bool branch_taken_0x12aeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AEB4u;
            // 0x12aeb8: 0xa3a20060  sb          $v0, 0x60($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aeb4) {
            ctx->pc = 0x12B3DCu;
            goto label_12b3dc;
        }
    }
    ctx->pc = 0x12AEBCu;
label_12aebc:
    // 0x12aebc: 0x37de0010  ori         $fp, $fp, 0x10
    ctx->pc = 0x12aebcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16);
label_12aec0:
    // 0x12aec0: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x12aec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x12aec4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12AEC4u;
    {
        const bool branch_taken_0x12aec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AEC4u;
            // 0x12aec8: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aec4) {
            ctx->pc = 0x12AED8u;
            goto label_12aed8;
        }
    }
    ctx->pc = 0x12AECCu;
    // 0x12aecc: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12aeccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12aed0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12AED0u;
    {
        const bool branch_taken_0x12aed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AED0u;
            // 0x12aed4: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aed0) {
            ctx->pc = 0x12AEECu;
            goto label_12aeec;
        }
    }
    ctx->pc = 0x12AED8u;
label_12aed8:
    // 0x12aed8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AED8u;
    {
        const bool branch_taken_0x12aed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AED8u;
            // 0x12aedc: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aed8) {
            ctx->pc = 0x12AEE8u;
            goto label_12aee8;
        }
    }
    ctx->pc = 0x12AEE0u;
    // 0x12aee0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12AEE0u;
    {
        const bool branch_taken_0x12aee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AEE0u;
            // 0x12aee4: 0x8690fff8  lh          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aee0) {
            ctx->pc = 0x12AEECu;
            goto label_12aeec;
        }
    }
    ctx->pc = 0x12AEE8u;
label_12aee8:
    // 0x12aee8: 0x8e90fff8  lw          $s0, -0x8($s4)
    ctx->pc = 0x12aee8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_12aeec:
    // 0x12aeec: 0x60100db  bgez        $s0, . + 4 + (0xDB << 2)
    ctx->pc = 0x12AEECu;
    {
        const bool branch_taken_0x12aeec = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x12AEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AEECu;
            // 0x12aef0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aeec) {
            ctx->pc = 0x12B25Cu;
            goto label_12b25c;
        }
    }
    ctx->pc = 0x12AEF4u;
    // 0x12aef4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x12aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12aef8: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x12aef8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x12aefc: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x12AEFCu;
    {
        const bool branch_taken_0x12aefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AEFCu;
            // 0x12af00: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aefc) {
            ctx->pc = 0x12B25Cu;
            goto label_12b25c;
        }
    }
    ctx->pc = 0x12AF04u;
label_12af04:
    // 0x12af04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12af04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12af08: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AF08u;
    {
        const bool branch_taken_0x12af08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x12AF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF08u;
            // 0x12af0c: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af08) {
            ctx->pc = 0x12AF18u;
            goto label_12af18;
        }
    }
    ctx->pc = 0x12AF10u;
    // 0x12af10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12AF10u;
    {
        const bool branch_taken_0x12af10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF10u;
            // 0x12af14: 0x24120006  addiu       $s2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af10) {
            ctx->pc = 0x12AF30u;
            goto label_12af30;
        }
    }
    ctx->pc = 0x12AF18u;
label_12af18:
    // 0x12af18: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AF18u;
    {
        const bool branch_taken_0x12af18 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x12AF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF18u;
            // 0x12af1c: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af18) {
            ctx->pc = 0x12AF28u;
            goto label_12af28;
        }
    }
    ctx->pc = 0x12AF20u;
    // 0x12af20: 0x16e20004  bne         $s7, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12AF20u;
    {
        const bool branch_taken_0x12af20 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x12AF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF20u;
            // 0x12af24: 0x33c20008  andi        $v0, $fp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af20) {
            ctx->pc = 0x12AF34u;
            goto label_12af34;
        }
    }
    ctx->pc = 0x12AF28u;
label_12af28:
    // 0x12af28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12af28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12af2c: 0x52900a  movz        $s2, $v0, $s2
    ctx->pc = 0x12af2cu;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2));
label_12af30:
    // 0x12af30: 0x33c20008  andi        $v0, $fp, 0x8
    ctx->pc = 0x12af30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8);
label_12af34:
    // 0x12af34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12AF34u;
    {
        const bool branch_taken_0x12af34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF34u;
            // 0x12af38: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af34) {
            ctx->pc = 0x12AF48u;
            goto label_12af48;
        }
    }
    ctx->pc = 0x12AF3Cu;
    // 0x12af3c: 0xde82fff8  ld          $v0, -0x8($s4)
    ctx->pc = 0x12af3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x12af40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12AF40u;
    {
        const bool branch_taken_0x12af40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF40u;
            // 0x12af44: 0xffa20200  sd          $v0, 0x200($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af40) {
            ctx->pc = 0x12AF50u;
            goto label_12af50;
        }
    }
    ctx->pc = 0x12AF48u;
label_12af48:
    // 0x12af48: 0xde83fff8  ld          $v1, -0x8($s4)
    ctx->pc = 0x12af48u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x12af4c: 0xffa30200  sd          $v1, 0x200($sp)
    ctx->pc = 0x12af4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 3));
label_12af50:
    // 0x12af50: 0xc047758  jal         func_11DD60
    ctx->pc = 0x12AF50u;
    SET_GPR_U32(ctx, 31, 0x12AF58u);
    ctx->pc = 0x12AF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF50u;
            // 0x12af54: 0xdfa40200  ld          $a0, 0x200($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD60u;
    if (runtime->hasFunction(0x11DD60u)) {
        auto targetFn = runtime->lookupFunction(0x11DD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF58u; }
        if (ctx->pc != 0x12AF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isinf_0x11dd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF58u; }
        if (ctx->pc != 0x12AF58u) { return; }
    }
    ctx->pc = 0x12AF58u;
label_12af58:
    // 0x12af58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12AF58u;
    {
        const bool branch_taken_0x12af58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF58u;
            // 0x12af5c: 0xdfa40200  ld          $a0, 0x200($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af58) {
            ctx->pc = 0x12AF88u;
            goto label_12af88;
        }
    }
    ctx->pc = 0x12AF60u;
    // 0x12af60: 0xc0a2148  jal         func_288520
    ctx->pc = 0x12AF60u;
    SET_GPR_U32(ctx, 31, 0x12AF68u);
    ctx->pc = 0x12AF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF60u;
            // 0x12af64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF68u; }
        if (ctx->pc != 0x12AF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF68u; }
        if (ctx->pc != 0x12AF68u) { return; }
    }
    ctx->pc = 0x12AF68u;
label_12af68:
    // 0x12af68: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12AF68u;
    {
        const bool branch_taken_0x12af68 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12AF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF68u;
            // 0x12af6c: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af68) {
            ctx->pc = 0x12AF7Cu;
            goto label_12af7c;
        }
    }
    ctx->pc = 0x12AF70u;
    // 0x12af70: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x12af70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12af74: 0xa3a201d1  sb          $v0, 0x1D1($sp)
    ctx->pc = 0x12af74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
    // 0x12af78: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x12af78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_12af7c:
    // 0x12af7c: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x12af7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12af80: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x12AF80u;
    {
        const bool branch_taken_0x12af80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF80u;
            // 0x12af84: 0x245322d0  addiu       $s3, $v0, 0x22D0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af80) {
            ctx->pc = 0x12B3D8u;
            goto label_12b3d8;
        }
    }
    ctx->pc = 0x12AF88u;
label_12af88:
    // 0x12af88: 0xc04776a  jal         func_11DDA8
    ctx->pc = 0x12AF88u;
    SET_GPR_U32(ctx, 31, 0x12AF90u);
    ctx->pc = 0x12AF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF88u;
            // 0x12af8c: 0xdfa40200  ld          $a0, 0x200($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DDA8u;
    if (runtime->hasFunction(0x11DDA8u)) {
        auto targetFn = runtime->lookupFunction(0x11DDA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF90u; }
        if (ctx->pc != 0x12AF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isnan_0x11dda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF90u; }
        if (ctx->pc != 0x12AF90u) { return; }
    }
    ctx->pc = 0x12AF90u;
label_12af90:
    // 0x12af90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12AF90u;
    {
        const bool branch_taken_0x12af90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF90u;
            // 0x12af94: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af90) {
            ctx->pc = 0x12AFA4u;
            goto label_12afa4;
        }
    }
    ctx->pc = 0x12AF98u;
    // 0x12af98: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x12af98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12af9c: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x12AF9Cu;
    {
        const bool branch_taken_0x12af9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF9Cu;
            // 0x12afa0: 0x245322d8  addiu       $s3, $v0, 0x22D8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 8920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af9c) {
            ctx->pc = 0x12B3D8u;
            goto label_12b3d8;
        }
    }
    ctx->pc = 0x12AFA4u;
label_12afa4:
    // 0x12afa4: 0x37de0100  ori         $fp, $fp, 0x100
    ctx->pc = 0x12afa4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)256);
    // 0x12afa8: 0x8fa401e4  lw          $a0, 0x1E4($sp)
    ctx->pc = 0x12afa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x12afac: 0xdfa50200  ld          $a1, 0x200($sp)
    ctx->pc = 0x12afacu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x12afb0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12afb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afb4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x12afb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afb8: 0x27a801d0  addiu       $t0, $sp, 0x1D0
    ctx->pc = 0x12afb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x12afbc: 0x27a901dc  addiu       $t1, $sp, 0x1DC
    ctx->pc = 0x12afbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x12afc0: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x12afc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afc4: 0xc04b008  jal         func_12C020
    ctx->pc = 0x12AFC4u;
    SET_GPR_U32(ctx, 31, 0x12AFCCu);
    ctx->pc = 0x12AFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AFC4u;
            // 0x12afc8: 0x27ab01e0  addiu       $t3, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C020u;
    if (runtime->hasFunction(0x12C020u)) {
        auto targetFn = runtime->lookupFunction(0x12C020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AFCCu; }
        if (ctx->pc != 0x12AFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cvt_0x12c020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AFCCu; }
        if (ctx->pc != 0x12AFCCu) { return; }
    }
    ctx->pc = 0x12AFCCu;
label_12afcc:
    // 0x12afcc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12afccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afd0: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x12afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x12afd4: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AFD4u;
    {
        const bool branch_taken_0x12afd4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x12AFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AFD4u;
            // 0x12afd8: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12afd4) {
            ctx->pc = 0x12AFE4u;
            goto label_12afe4;
        }
    }
    ctx->pc = 0x12AFDCu;
    // 0x12afdc: 0x16e2000c  bne         $s7, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12AFDCu;
    {
        const bool branch_taken_0x12afdc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x12AFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AFDCu;
            // 0x12afe0: 0x8fa501dc  lw          $a1, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12afdc) {
            ctx->pc = 0x12B010u;
            goto label_12b010;
        }
    }
    ctx->pc = 0x12AFE4u;
label_12afe4:
    // 0x12afe4: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x12afe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x12afe8: 0x28a2fffd  slti        $v0, $a1, -0x3
    ctx->pc = 0x12afe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x12afec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12AFECu;
    {
        const bool branch_taken_0x12afec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AFECu;
            // 0x12aff0: 0x3ae40067  xori        $a0, $s7, 0x67 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)103);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12afec) {
            ctx->pc = 0x12B000u;
            goto label_12b000;
        }
    }
    ctx->pc = 0x12AFF4u;
    // 0x12aff4: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x12aff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x12aff8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12AFF8u;
    {
        const bool branch_taken_0x12aff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aff8) {
            ctx->pc = 0x12AFFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12AFF8u;
            // 0x12affc: 0x24170067  addiu       $s7, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B010u;
            goto label_12b010;
        }
    }
    ctx->pc = 0x12B000u;
label_12b000:
    // 0x12b000: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x12b000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x12b004: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x12b004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x12b008: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x12b008u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b00c: 0x64b80b  movn        $s7, $v1, $a0
    ctx->pc = 0x12b00cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3));
label_12b010:
    // 0x12b010: 0x2ae20066  slti        $v0, $s7, 0x66
    ctx->pc = 0x12b010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)102) ? 1 : 0);
    // 0x12b014: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12B014u;
    {
        const bool branch_taken_0x12b014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B014u;
            // 0x12b018: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b014) {
            ctx->pc = 0x12B05Cu;
            goto label_12b05c;
        }
    }
    ctx->pc = 0x12B01Cu;
    // 0x12b01c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12b01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b020: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12b020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b024: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x12b024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
    // 0x12b028: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12B028u;
    SET_GPR_U32(ctx, 31, 0x12B030u);
    ctx->pc = 0x12B02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B028u;
            // 0x12b02c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B030u; }
        if (ctx->pc != 0x12B030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        exponent_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B030u; }
        if (ctx->pc != 0x12B030u) { return; }
    }
    ctx->pc = 0x12B030u;
label_12b030:
    // 0x12b030: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x12b030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x12b034: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x12b034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12b038: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x12b038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x12b03c: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x12b03cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12b040: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B040u;
    {
        const bool branch_taken_0x12b040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B040u;
            // 0x12b044: 0x82a821  addu        $s5, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b040) {
            ctx->pc = 0x12B054u;
            goto label_12b054;
        }
    }
    ctx->pc = 0x12B048u;
    // 0x12b048: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x12b048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x12b04c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x12B04Cu;
    {
        const bool branch_taken_0x12b04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B04Cu;
            // 0x12b050: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b04c) {
            ctx->pc = 0x12B0B8u;
            goto label_12b0b8;
        }
    }
    ctx->pc = 0x12B054u;
label_12b054:
    // 0x12b054: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x12B054u;
    {
        const bool branch_taken_0x12b054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B054u;
            // 0x12b058: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b054) {
            ctx->pc = 0x12B0B4u;
            goto label_12b0b4;
        }
    }
    ctx->pc = 0x12B05Cu;
label_12b05c:
    // 0x12b05c: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x12b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x12b060: 0x16e2000b  bne         $s7, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12B060u;
    {
        const bool branch_taken_0x12b060 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x12B064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B060u;
            // 0x12b064: 0x8fa301e0  lw          $v1, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b060) {
            ctx->pc = 0x12B090u;
            goto label_12b090;
        }
    }
    ctx->pc = 0x12B068u;
    // 0x12b068: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x12B068u;
    {
        const bool branch_taken_0x12b068 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x12B06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B068u;
            // 0x12b06c: 0x26550002  addiu       $s5, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b068) {
            ctx->pc = 0x12B0B4u;
            goto label_12b0b4;
        }
    }
    ctx->pc = 0x12B070u;
    // 0x12b070: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B070u;
    {
        const bool branch_taken_0x12b070 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B070u;
            // 0x12b074: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b070) {
            ctx->pc = 0x12B084u;
            goto label_12b084;
        }
    }
    ctx->pc = 0x12B078u;
    // 0x12b078: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x12b078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x12b07c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12B07Cu;
    {
        const bool branch_taken_0x12b07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B07Cu;
            // 0x12b080: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b07c) {
            ctx->pc = 0x12B0B8u;
            goto label_12b0b8;
        }
    }
    ctx->pc = 0x12B084u;
label_12b084:
    // 0x12b084: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x12b084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12b088: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12B088u;
    {
        const bool branch_taken_0x12b088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B088u;
            // 0x12b08c: 0x52a821  addu        $s5, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b088) {
            ctx->pc = 0x12B0B4u;
            goto label_12b0b4;
        }
    }
    ctx->pc = 0x12B090u;
label_12b090:
    // 0x12b090: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x12b090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12b094: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B094u;
    {
        const bool branch_taken_0x12b094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B094u;
            // 0x12b098: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b094) {
            ctx->pc = 0x12B0A4u;
            goto label_12b0a4;
        }
    }
    ctx->pc = 0x12B09Cu;
    // 0x12b09c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12B09Cu;
    {
        const bool branch_taken_0x12b09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B09Cu;
            // 0x12b0a0: 0xa2a821  addu        $s5, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b09c) {
            ctx->pc = 0x12B0B4u;
            goto label_12b0b4;
        }
    }
    ctx->pc = 0x12B0A4u;
label_12b0a4:
    // 0x12b0a4: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B0A4u;
    {
        const bool branch_taken_0x12b0a4 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x12B0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B0A4u;
            // 0x12b0a8: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0a4) {
            ctx->pc = 0x12B0B4u;
            goto label_12b0b4;
        }
    }
    ctx->pc = 0x12B0ACu;
    // 0x12b0ac: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x12b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x12b0b0: 0x45a823  subu        $s5, $v0, $a1
    ctx->pc = 0x12b0b0u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_12b0b4:
    // 0x12b0b4: 0x83a201d0  lb          $v0, 0x1D0($sp)
    ctx->pc = 0x12b0b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
label_12b0b8:
    // 0x12b0b8: 0x104000c7  beqz        $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x12B0B8u;
    {
        const bool branch_taken_0x12b0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B0B8u;
            // 0x12b0bc: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0b8) {
            ctx->pc = 0x12B3D8u;
            goto label_12b3d8;
        }
    }
    ctx->pc = 0x12B0C0u;
    // 0x12b0c0: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x12b0c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12b0c4: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x12B0C4u;
    {
        const bool branch_taken_0x12b0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B0C4u;
            // 0x12b0c8: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0c4) {
            ctx->pc = 0x12B3DCu;
            goto label_12b3dc;
        }
    }
    ctx->pc = 0x12B0CCu;
label_12b0cc:
    // 0x12b0cc: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x12b0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x12b0d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B0D0u;
    {
        const bool branch_taken_0x12b0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B0D0u;
            // 0x12b0d4: 0x8fa501f0  lw          $a1, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0d0) {
            ctx->pc = 0x12B0E8u;
            goto label_12b0e8;
        }
    }
    ctx->pc = 0x12B0D8u;
    // 0x12b0d8: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12b0d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12b0dc: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x12b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x12b0e0: 0x1000fec1  b           . + 4 + (-0x13F << 2)
    ctx->pc = 0x12B0E0u;
    {
        const bool branch_taken_0x12b0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B0E0u;
            // 0x12b0e4: 0xfc450000  sd          $a1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0e0) {
            ctx->pc = 0x12ABE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12abe8;
        }
    }
    ctx->pc = 0x12B0E8u;
label_12b0e8:
    // 0x12b0e8: 0x33c20040  andi        $v0, $fp, 0x40
    ctx->pc = 0x12b0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
    // 0x12b0ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B0ECu;
    {
        const bool branch_taken_0x12b0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B0ECu;
            // 0x12b0f0: 0x8fa601f0  lw          $a2, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0ec) {
            ctx->pc = 0x12B104u;
            goto label_12b104;
        }
    }
    ctx->pc = 0x12B0F4u;
    // 0x12b0f4: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12b0f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12b0f8: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x12b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x12b0fc: 0x1000feba  b           . + 4 + (-0x146 << 2)
    ctx->pc = 0x12B0FCu;
    {
        const bool branch_taken_0x12b0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B0FCu;
            // 0x12b100: 0xa4460000  sh          $a2, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0fc) {
            ctx->pc = 0x12ABE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12abe8;
        }
    }
    ctx->pc = 0x12B104u;
label_12b104:
    // 0x12b104: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12b104u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12b108: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x12b108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x12b10c: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x12b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x12b110: 0x1000feb5  b           . + 4 + (-0x14B << 2)
    ctx->pc = 0x12B110u;
    {
        const bool branch_taken_0x12b110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B110u;
            // 0x12b114: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b110) {
            ctx->pc = 0x12ABE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12abe8;
        }
    }
    ctx->pc = 0x12B118u;
label_12b118:
    // 0x12b118: 0x37de0010  ori         $fp, $fp, 0x10
    ctx->pc = 0x12b118u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16);
label_12b11c:
    // 0x12b11c: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x12b11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x12b120: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B120u;
    {
        const bool branch_taken_0x12b120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B120u;
            // 0x12b124: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b120) {
            ctx->pc = 0x12B134u;
            goto label_12b134;
        }
    }
    ctx->pc = 0x12B128u;
    // 0x12b128: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12b128u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12b12c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12B12Cu;
    {
        const bool branch_taken_0x12b12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B12Cu;
            // 0x12b130: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b12c) {
            ctx->pc = 0x12B148u;
            goto label_12b148;
        }
    }
    ctx->pc = 0x12B134u;
label_12b134:
    // 0x12b134: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B134u;
    {
        const bool branch_taken_0x12b134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B134u;
            // 0x12b138: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b134) {
            ctx->pc = 0x12B144u;
            goto label_12b144;
        }
    }
    ctx->pc = 0x12B13Cu;
    // 0x12b13c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12B13Cu;
    {
        const bool branch_taken_0x12b13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B13Cu;
            // 0x12b140: 0x9690fff8  lhu         $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b13c) {
            ctx->pc = 0x12B148u;
            goto label_12b148;
        }
    }
    ctx->pc = 0x12B144u;
label_12b144:
    // 0x12b144: 0x9e90fff8  lwu         $s0, -0x8($s4)
    ctx->pc = 0x12b144u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_12b148:
    // 0x12b148: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x12B148u;
    {
        const bool branch_taken_0x12b148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B148u;
            // 0x12b14c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b148) {
            ctx->pc = 0x12B258u;
            goto label_12b258;
        }
    }
    ctx->pc = 0x12B150u;
label_12b150:
    // 0x12b150: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x12b150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x12b154: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12b154u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12b158: 0x244222e0  addiu       $v0, $v0, 0x22E0
    ctx->pc = 0x12b158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8928));
    // 0x12b15c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12b15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12b160: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x12b160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x12b164: 0x37de0002  ori         $fp, $fp, 0x2
    ctx->pc = 0x12b164u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)2);
    // 0x12b168: 0x24170078  addiu       $s7, $zero, 0x78
    ctx->pc = 0x12b168u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x12b16c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x12B16Cu;
    {
        const bool branch_taken_0x12b16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B16Cu;
            // 0x12b170: 0x8e90fff8  lw          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b16c) {
            ctx->pc = 0x12B258u;
            goto label_12b258;
        }
    }
    ctx->pc = 0x12B174u;
label_12b174:
    // 0x12b174: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12b174u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12b178: 0x8e93fff8  lw          $s3, -0x8($s4)
    ctx->pc = 0x12b178u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x12b17c: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x12B17Cu;
    {
        const bool branch_taken_0x12b17c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B17Cu;
            // 0x12b180: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b17c) {
            ctx->pc = 0x12B188u;
            goto label_12b188;
        }
    }
    ctx->pc = 0x12B184u;
    // 0x12b184: 0x245322f8  addiu       $s3, $v0, 0x22F8
    ctx->pc = 0x12b184u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 8952));
label_12b188:
    // 0x12b188: 0x640000b  bltz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x12B188u;
    {
        const bool branch_taken_0x12b188 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x12B18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B188u;
            // 0x12b18c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b188) {
            ctx->pc = 0x12B1B8u;
            goto label_12b1b8;
        }
    }
    ctx->pc = 0x12B190u;
    // 0x12b190: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12b190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b194: 0xc049bba  jal         func_126EE8
    ctx->pc = 0x12B194u;
    SET_GPR_U32(ctx, 31, 0x12B19Cu);
    ctx->pc = 0x12B198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B194u;
            // 0x12b198: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126EE8u;
    if (runtime->hasFunction(0x126EE8u)) {
        auto targetFn = runtime->lookupFunction(0x126EE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B19Cu; }
        if (ctx->pc != 0x12B19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memchr_0x126ee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B19Cu; }
        if (ctx->pc != 0x12B19Cu) { return; }
    }
    ctx->pc = 0x12B19Cu;
label_12b19c:
    // 0x12b19c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B19Cu;
    {
        const bool branch_taken_0x12b19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B19Cu;
            // 0x12b1a0: 0x53a823  subu        $s5, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b19c) {
            ctx->pc = 0x12B1B0u;
            goto label_12b1b0;
        }
    }
    ctx->pc = 0x12B1A4u;
    // 0x12b1a4: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x12b1a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x12b1a8: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x12B1A8u;
    {
        const bool branch_taken_0x12b1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B1A8u;
            // 0x12b1ac: 0x242a80b  movn        $s5, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1a8) {
            ctx->pc = 0x12B3D4u;
            goto label_12b3d4;
        }
    }
    ctx->pc = 0x12B1B0u;
label_12b1b0:
    // 0x12b1b0: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x12B1B0u;
    {
        const bool branch_taken_0x12b1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B1B0u;
            // 0x12b1b4: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1b0) {
            ctx->pc = 0x12B3D4u;
            goto label_12b3d4;
        }
    }
    ctx->pc = 0x12B1B8u;
label_12b1b8:
    // 0x12b1b8: 0xc04a422  jal         func_129088
    ctx->pc = 0x12B1B8u;
    SET_GPR_U32(ctx, 31, 0x12B1C0u);
    ctx->pc = 0x12B1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B1B8u;
            // 0x12b1bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B1C0u; }
        if (ctx->pc != 0x12B1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B1C0u; }
        if (ctx->pc != 0x12B1C0u) { return; }
    }
    ctx->pc = 0x12B1C0u;
label_12b1c0:
    // 0x12b1c0: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x12B1C0u;
    {
        const bool branch_taken_0x12b1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B1C0u;
            // 0x12b1c4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1c0) {
            ctx->pc = 0x12B3D4u;
            goto label_12b3d4;
        }
    }
    ctx->pc = 0x12B1C8u;
label_12b1c8:
    // 0x12b1c8: 0x37de0010  ori         $fp, $fp, 0x10
    ctx->pc = 0x12b1c8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16);
label_12b1cc:
    // 0x12b1cc: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x12b1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x12b1d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B1D0u;
    {
        const bool branch_taken_0x12b1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B1D0u;
            // 0x12b1d4: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1d0) {
            ctx->pc = 0x12B1E4u;
            goto label_12b1e4;
        }
    }
    ctx->pc = 0x12B1D8u;
    // 0x12b1d8: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12b1d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12b1dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12B1DCu;
    {
        const bool branch_taken_0x12b1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B1DCu;
            // 0x12b1e0: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1dc) {
            ctx->pc = 0x12B1F8u;
            goto label_12b1f8;
        }
    }
    ctx->pc = 0x12B1E4u;
label_12b1e4:
    // 0x12b1e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B1E4u;
    {
        const bool branch_taken_0x12b1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B1E4u;
            // 0x12b1e8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1e4) {
            ctx->pc = 0x12B1F4u;
            goto label_12b1f4;
        }
    }
    ctx->pc = 0x12B1ECu;
    // 0x12b1ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12B1ECu;
    {
        const bool branch_taken_0x12b1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B1ECu;
            // 0x12b1f0: 0x9690fff8  lhu         $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1ec) {
            ctx->pc = 0x12B1F8u;
            goto label_12b1f8;
        }
    }
    ctx->pc = 0x12B1F4u;
label_12b1f4:
    // 0x12b1f4: 0x9e90fff8  lwu         $s0, -0x8($s4)
    ctx->pc = 0x12b1f4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_12b1f8:
    // 0x12b1f8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x12B1F8u;
    {
        const bool branch_taken_0x12b1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B1F8u;
            // 0x12b1fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1f8) {
            ctx->pc = 0x12B258u;
            goto label_12b258;
        }
    }
    ctx->pc = 0x12B200u;
label_12b200:
    // 0x12b200: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x12b200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x12b204: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12B204u;
    {
        const bool branch_taken_0x12b204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B204u;
            // 0x12b208: 0x24422300  addiu       $v0, $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b204) {
            ctx->pc = 0x12B214u;
            goto label_12b214;
        }
    }
    ctx->pc = 0x12B20Cu;
label_12b20c:
    // 0x12b20c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x12b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x12b210: 0x244222e0  addiu       $v0, $v0, 0x22E0
    ctx->pc = 0x12b210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8928));
label_12b214:
    // 0x12b214: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x12b214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x12b218: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x12b218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x12b21c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B21Cu;
    {
        const bool branch_taken_0x12b21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B21Cu;
            // 0x12b220: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b21c) {
            ctx->pc = 0x12B230u;
            goto label_12b230;
        }
    }
    ctx->pc = 0x12B224u;
    // 0x12b224: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12b224u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12b228: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12B228u;
    {
        const bool branch_taken_0x12b228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B228u;
            // 0x12b22c: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b228) {
            ctx->pc = 0x12B244u;
            goto label_12b244;
        }
    }
    ctx->pc = 0x12B230u;
label_12b230:
    // 0x12b230: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B230u;
    {
        const bool branch_taken_0x12b230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B230u;
            // 0x12b234: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b230) {
            ctx->pc = 0x12B240u;
            goto label_12b240;
        }
    }
    ctx->pc = 0x12B238u;
    // 0x12b238: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12B238u;
    {
        const bool branch_taken_0x12b238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B238u;
            // 0x12b23c: 0x9690fff8  lhu         $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b238) {
            ctx->pc = 0x12B244u;
            goto label_12b244;
        }
    }
    ctx->pc = 0x12B240u;
label_12b240:
    // 0x12b240: 0x9e90fff8  lwu         $s0, -0x8($s4)
    ctx->pc = 0x12b240u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_12b244:
    // 0x12b244: 0x33c30001  andi        $v1, $fp, 0x1
    ctx->pc = 0x12b244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x12b248: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B248u;
    {
        const bool branch_taken_0x12b248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B248u;
            // 0x12b24c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b248) {
            ctx->pc = 0x12B258u;
            goto label_12b258;
        }
    }
    ctx->pc = 0x12B250u;
    // 0x12b250: 0x37c20002  ori         $v0, $fp, 0x2
    ctx->pc = 0x12b250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)2);
    // 0x12b254: 0x50f00b  movn        $fp, $v0, $s0
    ctx->pc = 0x12b254u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2));
label_12b258:
    // 0x12b258: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x12b258u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_12b25c:
    // 0x12b25c: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B25Cu;
    {
        const bool branch_taken_0x12b25c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x12B260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B25Cu;
            // 0x12b260: 0xafb2020c  sw          $s2, 0x20C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b25c) {
            ctx->pc = 0x12B26Cu;
            goto label_12b26c;
        }
    }
    ctx->pc = 0x12B264u;
    // 0x12b264: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x12b264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x12b268: 0x3c2f024  and         $fp, $fp, $v0
    ctx->pc = 0x12b268u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) & GPR_U64(ctx, 2));
label_12b26c:
    // 0x12b26c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B26Cu;
    {
        const bool branch_taken_0x12b26c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B26Cu;
            // 0x12b270: 0x27b301bc  addiu       $s3, $sp, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b26c) {
            ctx->pc = 0x12B280u;
            goto label_12b280;
        }
    }
    ctx->pc = 0x12B274u;
    // 0x12b274: 0x8fa5020c  lw          $a1, 0x20C($sp)
    ctx->pc = 0x12b274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x12b278: 0x10a0004d  beqz        $a1, . + 4 + (0x4D << 2)
    ctx->pc = 0x12B278u;
    {
        const bool branch_taken_0x12b278 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B278u;
            // 0x12b27c: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b278) {
            ctx->pc = 0x12B3B0u;
            goto label_12b3b0;
        }
    }
    ctx->pc = 0x12B280u;
label_12b280:
    // 0x12b280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12b280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b284: 0x1082001f  beq         $a0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x12B284u;
    {
        const bool branch_taken_0x12b284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x12B288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B284u;
            // 0x12b288: 0x2e02000a  sltiu       $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b284) {
            ctx->pc = 0x12B304u;
            goto label_12b304;
        }
    }
    ctx->pc = 0x12B28Cu;
    // 0x12b28c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x12B28Cu;
    {
        const bool branch_taken_0x12b28c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B28Cu;
            // 0x12b290: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b28c) {
            ctx->pc = 0x12B2B8u;
            goto label_12b2b8;
        }
    }
    ctx->pc = 0x12B294u;
    // 0x12b294: 0x10820037  beq         $a0, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x12B294u;
    {
        const bool branch_taken_0x12b294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x12B298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B294u;
            // 0x12b298: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b294) {
            ctx->pc = 0x12B374u;
            goto label_12b374;
        }
    }
    ctx->pc = 0x12B29Cu;
    // 0x12b29c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x12b29cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12b2a0: 0x24532318  addiu       $s3, $v0, 0x2318
    ctx->pc = 0x12b2a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 8984));
    // 0x12b2a4: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x12b2a4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    // 0x12b2a8: 0xc04a422  jal         func_129088
    ctx->pc = 0x12B2A8u;
    SET_GPR_U32(ctx, 31, 0x12B2B0u);
    ctx->pc = 0x12B2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B2A8u;
            // 0x12b2ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B2B0u; }
        if (ctx->pc != 0x12B2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B2B0u; }
        if (ctx->pc != 0x12B2B0u) { return; }
    }
    ctx->pc = 0x12B2B0u;
label_12b2b0:
    // 0x12b2b0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x12B2B0u;
    {
        const bool branch_taken_0x12b2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B2B0u;
            // 0x12b2b4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b2b0) {
            ctx->pc = 0x12B3E0u;
            goto label_12b3e0;
        }
    }
    ctx->pc = 0x12B2B8u;
label_12b2b8:
    // 0x12b2b8: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x12b2b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12b2bc: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x12b2bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12b2c0: 0x33c30001  andi        $v1, $fp, 0x1
    ctx->pc = 0x12b2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x12b2c4: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x12b2c4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
label_12b2c8:
    // 0x12b2c8: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x12b2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x12b2cc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x12b2ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x12b2d0: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x12b2d0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x12b2d4: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x12b2d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x12b2d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12b2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12b2dc: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x12b2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12b2e0: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12B2E0u;
    {
        const bool branch_taken_0x12b2e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b2e0) {
            ctx->pc = 0x12B2C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b2c8;
        }
    }
    ctx->pc = 0x12B2E8u;
    // 0x12b2e8: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x12B2E8u;
    {
        const bool branch_taken_0x12b2e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B2E8u;
            // 0x12b2ec: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b2e8) {
            ctx->pc = 0x12B3B8u;
            goto label_12b3b8;
        }
    }
    ctx->pc = 0x12B2F0u;
    // 0x12b2f0: 0x10430032  beq         $v0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x12B2F0u;
    {
        const bool branch_taken_0x12b2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12B2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B2F0u;
            // 0x12b2f4: 0x2662fea4  addiu       $v0, $s3, -0x15C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b2f0) {
            ctx->pc = 0x12B3BCu;
            goto label_12b3bc;
        }
    }
    ctx->pc = 0x12B2F8u;
    // 0x12b2f8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x12b2f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x12b2fc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x12B2FCu;
    {
        const bool branch_taken_0x12b2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B2FCu;
            // 0x12b300: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b2fc) {
            ctx->pc = 0x12B3B8u;
            goto label_12b3b8;
        }
    }
    ctx->pc = 0x12B304u;
label_12b304:
    // 0x12b304: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x12B304u;
    {
        const bool branch_taken_0x12b304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B304u;
            // 0x12b308: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b304) {
            ctx->pc = 0x12B358u;
            goto label_12b358;
        }
    }
    ctx->pc = 0x12B30Cu;
    // 0x12b30c: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x12b30cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12b310: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x12b310u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    // 0x12b314: 0x0  nop
    ctx->pc = 0x12b314u;
    // NOP
label_12b318:
    // 0x12b318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b31c: 0xc0a1d7a  jal         func_2875E8
    ctx->pc = 0x12B31Cu;
    SET_GPR_U32(ctx, 31, 0x12B324u);
    ctx->pc = 0x12B320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B31Cu;
            // 0x12b320: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2875E8u;
    if (runtime->hasFunction(0x2875E8u)) {
        auto targetFn = runtime->lookupFunction(0x2875E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B324u; }
        if (ctx->pc != 0x12B324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___umoddi3_0x2875e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B324u; }
        if (ctx->pc != 0x12B324u) { return; }
    }
    ctx->pc = 0x12B324u;
label_12b324:
    // 0x12b324: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x12b324u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x12b328: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x12b328u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x12b32c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b330: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12b330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12b334: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x12b334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12b338: 0xc0a1c06  jal         func_287018
    ctx->pc = 0x12B338u;
    SET_GPR_U32(ctx, 31, 0x12B340u);
    ctx->pc = 0x12B33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B338u;
            // 0x12b33c: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287018u;
    if (runtime->hasFunction(0x287018u)) {
        auto targetFn = runtime->lookupFunction(0x287018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B340u; }
        if (ctx->pc != 0x12B340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___udivdi3_0x287018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B340u; }
        if (ctx->pc != 0x12B340u) { return; }
    }
    ctx->pc = 0x12B340u;
label_12b340:
    // 0x12b340: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12b340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b344: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x12b344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12b348: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x12B348u;
    {
        const bool branch_taken_0x12b348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B348u;
            // 0x12b34c: 0x66020030  daddiu      $v0, $s0, 0x30 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b348) {
            ctx->pc = 0x12B318u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b318;
        }
    }
    ctx->pc = 0x12B350u;
    // 0x12b350: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12B350u;
    {
        const bool branch_taken_0x12b350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B350u;
            // 0x12b354: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b350) {
            ctx->pc = 0x12B368u;
            goto label_12b368;
        }
    }
    ctx->pc = 0x12B358u;
label_12b358:
    // 0x12b358: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x12b358u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12b35c: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x12b35cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    // 0x12b360: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x12b360u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x12b364: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x12b364u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_12b368:
    // 0x12b368: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12b368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12b36c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x12B36Cu;
    {
        const bool branch_taken_0x12b36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B36Cu;
            // 0x12b370: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b36c) {
            ctx->pc = 0x12B3B8u;
            goto label_12b3b8;
        }
    }
    ctx->pc = 0x12B374u;
label_12b374:
    // 0x12b374: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x12b374u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12b378: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x12b378u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12b37c: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x12b37cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
label_12b380:
    // 0x12b380: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x12b380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x12b384: 0x8fa60214  lw          $a2, 0x214($sp)
    ctx->pc = 0x12b384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x12b388: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12b388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12b38c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12b38cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12b390: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x12b390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x12b394: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x12b394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12b398: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x12b398u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x12b39c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x12b39cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12b3a0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12B3A0u;
    {
        const bool branch_taken_0x12b3a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B3A0u;
            // 0x12b3a4: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3a0) {
            ctx->pc = 0x12B380u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b380;
        }
    }
    ctx->pc = 0x12B3A8u;
    // 0x12b3a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12B3A8u;
    {
        const bool branch_taken_0x12b3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B3A8u;
            // 0x12b3ac: 0x2662fea4  addiu       $v0, $s3, -0x15C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3a8) {
            ctx->pc = 0x12B3BCu;
            goto label_12b3bc;
        }
    }
    ctx->pc = 0x12B3B0u;
label_12b3b0:
    // 0x12b3b0: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x12b3b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12b3b4: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x12b3b4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
label_12b3b8:
    // 0x12b3b8: 0x2662fea4  addiu       $v0, $s3, -0x15C
    ctx->pc = 0x12b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966948));
label_12b3bc:
    // 0x12b3bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12B3BCu;
    {
        const bool branch_taken_0x12b3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B3BCu;
            // 0x12b3c0: 0x2a2a823  subu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3bc) {
            ctx->pc = 0x12B3E0u;
            goto label_12b3e0;
        }
    }
    ctx->pc = 0x12B3C4u;
label_12b3c4:
    // 0x12b3c4: 0x12e002fc  beqz        $s7, . + 4 + (0x2FC << 2)
    ctx->pc = 0x12B3C4u;
    {
        const bool branch_taken_0x12b3c4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B3C4u;
            // 0x12b3c8: 0x27b30060  addiu       $s3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3c4) {
            ctx->pc = 0x12BFB8u;
            goto label_12bfb8;
        }
    }
    ctx->pc = 0x12B3CCu;
    // 0x12b3cc: 0xa3b70060  sb          $s7, 0x60($sp)
    ctx->pc = 0x12b3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 23));
    // 0x12b3d0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x12b3d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b3d4:
    // 0x12b3d4: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x12b3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_12b3d8:
    // 0x12b3d8: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x12b3d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_12b3dc:
    // 0x12b3dc: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x12b3dcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
label_12b3e0:
    // 0x12b3e0: 0xafb50210  sw          $s5, 0x210($sp)
    ctx->pc = 0x12b3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 21));
    // 0x12b3e4: 0x8fa4020c  lw          $a0, 0x20C($sp)
    ctx->pc = 0x12b3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x12b3e8: 0x8fa5020c  lw          $a1, 0x20C($sp)
    ctx->pc = 0x12b3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x12b3ec: 0x2a4102a  slt         $v0, $s5, $a0
    ctx->pc = 0x12b3ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x12b3f0: 0x83a301d1  lb          $v1, 0x1D1($sp)
    ctx->pc = 0x12b3f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x12b3f4: 0x2a2280a  movz        $a1, $s5, $v0
    ctx->pc = 0x12b3f4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21));
    // 0x12b3f8: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x12b3f8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x12b3fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B3FCu;
    {
        const bool branch_taken_0x12b3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B3FCu;
            // 0x12b400: 0xafa50210  sw          $a1, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3fc) {
            ctx->pc = 0x12B410u;
            goto label_12b410;
        }
    }
    ctx->pc = 0x12B404u;
    // 0x12b404: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12b404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12b408: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12B408u;
    {
        const bool branch_taken_0x12b408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B408u;
            // 0x12b40c: 0xafa50210  sw          $a1, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b408) {
            ctx->pc = 0x12B420u;
            goto label_12b420;
        }
    }
    ctx->pc = 0x12B410u;
label_12b410:
    // 0x12b410: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x12b410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x12b414: 0x33c20002  andi        $v0, $fp, 0x2
    ctx->pc = 0x12b414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
    // 0x12b418: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x12b418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x12b41c: 0xafa60210  sw          $a2, 0x210($sp)
    ctx->pc = 0x12b41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 6));
label_12b420:
    // 0x12b420: 0x16c00037  bnez        $s6, . + 4 + (0x37 << 2)
    ctx->pc = 0x12B420u;
    {
        const bool branch_taken_0x12b420 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B420u;
            // 0x12b424: 0x8fa201f4  lw          $v0, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b420) {
            ctx->pc = 0x12B500u;
            goto label_12b500;
        }
    }
    ctx->pc = 0x12B428u;
    // 0x12b428: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x12b428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x12b42c: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x12b42cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12b430: 0x1a000033  blez        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x12B430u;
    {
        const bool branch_taken_0x12b430 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12B434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B430u;
            // 0x12b434: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b430) {
            ctx->pc = 0x12B500u;
            goto label_12b500;
        }
    }
    ctx->pc = 0x12B438u;
    // 0x12b438: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x12B438u;
    {
        const bool branch_taken_0x12b438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B438u;
            // 0x12b43c: 0x3c060036  lui         $a2, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b438) {
            ctx->pc = 0x12B4A8u;
            goto label_12b4a8;
        }
    }
    ctx->pc = 0x12B440u;
    // 0x12b440: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12B440u;
    {
        const bool branch_taken_0x12b440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B440u;
            // 0x12b444: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b440) {
            ctx->pc = 0x12B44Cu;
            goto label_12b44c;
        }
    }
    ctx->pc = 0x12B448u;
label_12b448:
    // 0x12b448: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x12b448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_12b44c:
    // 0x12b44c: 0x24c422b0  addiu       $a0, $a2, 0x22B0
    ctx->pc = 0x12b44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 8880));
    // 0x12b450: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x12b450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x12b454: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12b454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12b458: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12b458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b45c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b460: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12b460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b464: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12b464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12b468: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b46c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12b46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12b470: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12b470u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b474: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B474u;
    {
        const bool branch_taken_0x12b474 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B474u;
            // 0x12b478: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b474) {
            ctx->pc = 0x12B498u;
            goto label_12b498;
        }
    }
    ctx->pc = 0x12B47Cu;
    // 0x12b47c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12b480: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12b480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12b484: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12B484u;
    SET_GPR_U32(ctx, 31, 0x12B48Cu);
    ctx->pc = 0x12B488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B484u;
            // 0x12b488: 0x7fa60220  sq          $a2, 0x220($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B48Cu; }
        if (ctx->pc != 0x12B48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B48Cu; }
        if (ctx->pc != 0x12B48Cu) { return; }
    }
    ctx->pc = 0x12B48Cu;
label_12b48c:
    // 0x12b48c: 0x144002d2  bnez        $v0, . + 4 + (0x2D2 << 2)
    ctx->pc = 0x12B48Cu;
    {
        const bool branch_taken_0x12b48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B48Cu;
            // 0x12b490: 0x7ba60220  lq          $a2, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b48c) {
            ctx->pc = 0x12BFD8u;
            goto label_12bfd8;
        }
    }
    ctx->pc = 0x12B494u;
    // 0x12b494: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x12b494u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_12b498:
    // 0x12b498: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12b498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12b49c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12b49cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12b4a0: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x12B4A0u;
    {
        const bool branch_taken_0x12b4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B4A0u;
            // 0x12b4a4: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4a0) {
            ctx->pc = 0x12B448u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b448;
        }
    }
    ctx->pc = 0x12B4A8u;
label_12b4a8:
    // 0x12b4a8: 0x24c222b0  addiu       $v0, $a2, 0x22B0
    ctx->pc = 0x12b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8880));
    // 0x12b4ac: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x12b4acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x12b4b0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12b4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12b4b4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b4b8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12b4b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b4bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b4c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b4c4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x12b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x12b4c8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12b4c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b4cc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12b4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12b4d0: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12B4D0u;
    {
        const bool branch_taken_0x12b4d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B4D0u;
            // 0x12b4d4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4d0) {
            ctx->pc = 0x12B4F8u;
            goto label_12b4f8;
        }
    }
    ctx->pc = 0x12B4D8u;
    // 0x12b4d8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12b4dc: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12B4DCu;
    SET_GPR_U32(ctx, 31, 0x12B4E4u);
    ctx->pc = 0x12B4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B4DCu;
            // 0x12b4e0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B4E4u; }
        if (ctx->pc != 0x12B4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B4E4u; }
        if (ctx->pc != 0x12B4E4u) { return; }
    }
    ctx->pc = 0x12B4E4u;
label_12b4e4:
    // 0x12b4e4: 0x144002bc  bnez        $v0, . + 4 + (0x2BC << 2)
    ctx->pc = 0x12B4E4u;
    {
        const bool branch_taken_0x12b4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B4E4u;
            // 0x12b4e8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4e4) {
            ctx->pc = 0x12BFD8u;
            goto label_12bfd8;
        }
    }
    ctx->pc = 0x12B4ECu;
    // 0x12b4ec: 0x27b20028  addiu       $s2, $sp, 0x28
    ctx->pc = 0x12b4ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x12b4f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12B4F0u;
    {
        const bool branch_taken_0x12b4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B4F0u;
            // 0x12b4f4: 0x93a401d1  lbu         $a0, 0x1D1($sp) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4f0) {
            ctx->pc = 0x12B500u;
            goto label_12b500;
        }
    }
    ctx->pc = 0x12B4F8u;
label_12b4f8:
    // 0x12b4f8: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x12b4f8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x12b4fc: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x12b4fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_12b500:
    // 0x12b500: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x12B500u;
    {
        const bool branch_taken_0x12b500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B500u;
            // 0x12b504: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b500) {
            ctx->pc = 0x12B540u;
            goto label_12b540;
        }
    }
    ctx->pc = 0x12B508u;
    // 0x12b508: 0x27a401d1  addiu       $a0, $sp, 0x1D1
    ctx->pc = 0x12b508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 465));
    // 0x12b50c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x12b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x12b510: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12b510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12b514: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12b514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b518: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b51c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b520: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12b520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12b524: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b528: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12b528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12b52c: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12b52cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b530: 0x1480001c  bnez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x12B530u;
    {
        const bool branch_taken_0x12b530 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B530u;
            // 0x12b534: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b530) {
            ctx->pc = 0x12B5A4u;
            goto label_12b5a4;
        }
    }
    ctx->pc = 0x12B538u;
    // 0x12b538: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x12B538u;
    {
        const bool branch_taken_0x12b538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B538u;
            // 0x12b53c: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b538) {
            ctx->pc = 0x12B58Cu;
            goto label_12b58c;
        }
    }
    ctx->pc = 0x12B540u;
label_12b540:
    // 0x12b540: 0x33c20002  andi        $v0, $fp, 0x2
    ctx->pc = 0x12b540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
    // 0x12b544: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x12B544u;
    {
        const bool branch_taken_0x12b544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B544u;
            // 0x12b548: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b544) {
            ctx->pc = 0x12B5A8u;
            goto label_12b5a8;
        }
    }
    ctx->pc = 0x12B54Cu;
    // 0x12b54c: 0xa3b701c1  sb          $s7, 0x1C1($sp)
    ctx->pc = 0x12b54cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 23));
    // 0x12b550: 0xa3a301c0  sb          $v1, 0x1C0($sp)
    ctx->pc = 0x12b550u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 3));
    // 0x12b554: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12b554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12b558: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x12b558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x12b55c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12b55cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12b560: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x12b560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x12b564: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12b564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b568: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12b568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b56c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b570: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x12b570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x12b574: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b578: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x12b578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x12b57c: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x12b57cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b580: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B580u;
    {
        const bool branch_taken_0x12b580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B580u;
            // 0x12b584: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b580) {
            ctx->pc = 0x12B5A4u;
            goto label_12b5a4;
        }
    }
    ctx->pc = 0x12B588u;
    // 0x12b588: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12b58c:
    // 0x12b58c: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12B58Cu;
    SET_GPR_U32(ctx, 31, 0x12B594u);
    ctx->pc = 0x12B590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B58Cu;
            // 0x12b590: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B594u; }
        if (ctx->pc != 0x12B594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B594u; }
        if (ctx->pc != 0x12B594u) { return; }
    }
    ctx->pc = 0x12B594u;
label_12b594:
    // 0x12b594: 0x14400290  bnez        $v0, . + 4 + (0x290 << 2)
    ctx->pc = 0x12B594u;
    {
        const bool branch_taken_0x12b594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B594u;
            // 0x12b598: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b594) {
            ctx->pc = 0x12BFD8u;
            goto label_12bfd8;
        }
    }
    ctx->pc = 0x12B59Cu;
    // 0x12b59c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12B59Cu;
    {
        const bool branch_taken_0x12b59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B59Cu;
            // 0x12b5a0: 0x27b20028  addiu       $s2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b59c) {
            ctx->pc = 0x12B5A8u;
            goto label_12b5a8;
        }
    }
    ctx->pc = 0x12B5A4u;
label_12b5a4:
    // 0x12b5a4: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x12b5a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_12b5a8:
    // 0x12b5a8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x12b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12b5ac: 0x16c20035  bne         $s6, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x12B5ACu;
    {
        const bool branch_taken_0x12b5ac = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x12B5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B5ACu;
            // 0x12b5b0: 0x8fa6020c  lw          $a2, 0x20C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5ac) {
            ctx->pc = 0x12B684u;
            goto label_12b684;
        }
    }
    ctx->pc = 0x12B5B4u;
    // 0x12b5b4: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12b5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12b5b8: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x12b5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x12b5bc: 0x858023  subu        $s0, $a0, $a1
    ctx->pc = 0x12b5bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12b5c0: 0x1a000030  blez        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x12B5C0u;
    {
        const bool branch_taken_0x12b5c0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12B5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B5C0u;
            // 0x12b5c4: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5c0) {
            ctx->pc = 0x12B684u;
            goto label_12b684;
        }
    }
    ctx->pc = 0x12B5C8u;
    // 0x12b5c8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x12B5C8u;
    {
        const bool branch_taken_0x12b5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B5C8u;
            // 0x12b5cc: 0x3c160036  lui         $s6, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5c8) {
            ctx->pc = 0x12B630u;
            goto label_12b630;
        }
    }
    ctx->pc = 0x12B5D0u;
    // 0x12b5d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12B5D0u;
    {
        const bool branch_taken_0x12b5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B5D0u;
            // 0x12b5d4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5d0) {
            ctx->pc = 0x12B5DCu;
            goto label_12b5dc;
        }
    }
    ctx->pc = 0x12B5D8u;
label_12b5d8:
    // 0x12b5d8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x12b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_12b5dc:
    // 0x12b5dc: 0x26c422c0  addiu       $a0, $s6, 0x22C0
    ctx->pc = 0x12b5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 8896));
    // 0x12b5e0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x12b5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x12b5e4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12b5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12b5e8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12b5e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b5ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b5f0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b5f4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12b5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12b5f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b5fc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12b5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12b600: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12b600u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b604: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12B604u;
    {
        const bool branch_taken_0x12b604 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B604u;
            // 0x12b608: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b604) {
            ctx->pc = 0x12B620u;
            goto label_12b620;
        }
    }
    ctx->pc = 0x12B60Cu;
    // 0x12b60c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12b610: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12B610u;
    SET_GPR_U32(ctx, 31, 0x12B618u);
    ctx->pc = 0x12B614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B610u;
            // 0x12b614: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B618u; }
        if (ctx->pc != 0x12B618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B618u; }
        if (ctx->pc != 0x12B618u) { return; }
    }
    ctx->pc = 0x12B618u;
label_12b618:
    // 0x12b618: 0x1440026f  bnez        $v0, . + 4 + (0x26F << 2)
    ctx->pc = 0x12B618u;
    {
        const bool branch_taken_0x12b618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B618u;
            // 0x12b61c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b618) {
            ctx->pc = 0x12BFD8u;
            goto label_12bfd8;
        }
    }
    ctx->pc = 0x12B620u;
label_12b620:
    // 0x12b620: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12b620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12b624: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12b624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12b628: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12B628u;
    {
        const bool branch_taken_0x12b628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B628u;
            // 0x12b62c: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b628) {
            ctx->pc = 0x12B5D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b5d8;
        }
    }
    ctx->pc = 0x12B630u;
label_12b630:
    // 0x12b630: 0x26c222c0  addiu       $v0, $s6, 0x22C0
    ctx->pc = 0x12b630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 8896));
    // 0x12b634: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x12b634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x12b638: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12b638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12b63c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b640: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12b640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b644: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b648: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b64c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x12b64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x12b650: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12b650u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b654: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12b654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12b658: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B658u;
    {
        const bool branch_taken_0x12b658 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B658u;
            // 0x12b65c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b658) {
            ctx->pc = 0x12B67Cu;
            goto label_12b67c;
        }
    }
    ctx->pc = 0x12B660u;
    // 0x12b660: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12b664: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12B664u;
    SET_GPR_U32(ctx, 31, 0x12B66Cu);
    ctx->pc = 0x12B668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B664u;
            // 0x12b668: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B66Cu; }
        if (ctx->pc != 0x12B66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B66Cu; }
        if (ctx->pc != 0x12B66Cu) { return; }
    }
    ctx->pc = 0x12B66Cu;
label_12b66c:
    // 0x12b66c: 0x1440025a  bnez        $v0, . + 4 + (0x25A << 2)
    ctx->pc = 0x12B66Cu;
    {
        const bool branch_taken_0x12b66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B66Cu;
            // 0x12b670: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b66c) {
            ctx->pc = 0x12BFD8u;
            goto label_12bfd8;
        }
    }
    ctx->pc = 0x12B674u;
    // 0x12b674: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12B674u;
    {
        const bool branch_taken_0x12b674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B674u;
            // 0x12b678: 0x27b20028  addiu       $s2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b674) {
            ctx->pc = 0x12B680u;
            goto label_12b680;
        }
    }
    ctx->pc = 0x12B67Cu;
label_12b67c:
    // 0x12b67c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x12b67cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_12b680:
    // 0x12b680: 0x8fa6020c  lw          $a2, 0x20C($sp)
    ctx->pc = 0x12b680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_12b684:
    // 0x12b684: 0xd58023  subu        $s0, $a2, $s5
    ctx->pc = 0x12b684u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x12b688: 0x1a00002f  blez        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x12B688u;
    {
        const bool branch_taken_0x12b688 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12B68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B688u;
            // 0x12b68c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b688) {
            ctx->pc = 0x12B748u;
            goto label_12b748;
        }
    }
    ctx->pc = 0x12B690u;
    // 0x12b690: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x12B690u;
    {
        const bool branch_taken_0x12b690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B690u;
            // 0x12b694: 0x3c160036  lui         $s6, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b690) {
            ctx->pc = 0x12B6F8u;
            goto label_12b6f8;
        }
    }
    ctx->pc = 0x12B698u;
    // 0x12b698: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12B698u;
    {
        const bool branch_taken_0x12b698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B698u;
            // 0x12b69c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b698) {
            ctx->pc = 0x12B6A4u;
            goto label_12b6a4;
        }
    }
    ctx->pc = 0x12B6A0u;
label_12b6a0:
    // 0x12b6a0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x12b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_12b6a4:
    // 0x12b6a4: 0x26c422c0  addiu       $a0, $s6, 0x22C0
    ctx->pc = 0x12b6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 8896));
    // 0x12b6a8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x12b6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x12b6ac: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12b6acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12b6b0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12b6b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b6b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b6b8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b6bc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12b6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12b6c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b6c4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12b6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12b6c8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12b6c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b6cc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12B6CCu;
    {
        const bool branch_taken_0x12b6cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B6CCu;
            // 0x12b6d0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b6cc) {
            ctx->pc = 0x12B6E8u;
            goto label_12b6e8;
        }
    }
    ctx->pc = 0x12B6D4u;
    // 0x12b6d4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12b6d8: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12B6D8u;
    SET_GPR_U32(ctx, 31, 0x12B6E0u);
    ctx->pc = 0x12B6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B6D8u;
            // 0x12b6dc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B6E0u; }
        if (ctx->pc != 0x12B6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B6E0u; }
        if (ctx->pc != 0x12B6E0u) { return; }
    }
    ctx->pc = 0x12B6E0u;
label_12b6e0:
    // 0x12b6e0: 0x1440023d  bnez        $v0, . + 4 + (0x23D << 2)
    ctx->pc = 0x12B6E0u;
    {
        const bool branch_taken_0x12b6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B6E0u;
            // 0x12b6e4: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b6e0) {
            ctx->pc = 0x12BFD8u;
            goto label_12bfd8;
        }
    }
    ctx->pc = 0x12B6E8u;
label_12b6e8:
    // 0x12b6e8: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12b6e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12b6ec: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12b6ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12b6f0: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12B6F0u;
    {
        const bool branch_taken_0x12b6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B6F0u;
            // 0x12b6f4: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b6f0) {
            ctx->pc = 0x12B6A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b6a0;
        }
    }
    ctx->pc = 0x12B6F8u;
label_12b6f8:
    // 0x12b6f8: 0x26c222c0  addiu       $v0, $s6, 0x22C0
    ctx->pc = 0x12b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 8896));
    // 0x12b6fc: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x12b6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x12b700: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12b700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12b704: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12b704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b708: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12b708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b70c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b710: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b714: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x12b714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x12b718: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12b718u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b71c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12b71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12b720: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B720u;
    {
        const bool branch_taken_0x12b720 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B720u;
            // 0x12b724: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b720) {
            ctx->pc = 0x12B744u;
            goto label_12b744;
        }
    }
    ctx->pc = 0x12B728u;
    // 0x12b728: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12b72c: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12B72Cu;
    SET_GPR_U32(ctx, 31, 0x12B734u);
    ctx->pc = 0x12B730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B72Cu;
            // 0x12b730: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B734u; }
        if (ctx->pc != 0x12B734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B734u; }
        if (ctx->pc != 0x12B734u) { return; }
    }
    ctx->pc = 0x12B734u;
label_12b734:
    // 0x12b734: 0x14400228  bnez        $v0, . + 4 + (0x228 << 2)
    ctx->pc = 0x12B734u;
    {
        const bool branch_taken_0x12b734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B734u;
            // 0x12b738: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b734) {
            ctx->pc = 0x12BFD8u;
            goto label_12bfd8;
        }
    }
    ctx->pc = 0x12B73Cu;
    // 0x12b73c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12B73Cu;
    {
        const bool branch_taken_0x12b73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B73Cu;
            // 0x12b740: 0x27b20028  addiu       $s2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b73c) {
            ctx->pc = 0x12B748u;
            goto label_12b748;
        }
    }
    ctx->pc = 0x12B744u;
label_12b744:
    // 0x12b744: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x12b744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_12b748:
    // 0x12b748: 0x33c20100  andi        $v0, $fp, 0x100
    ctx->pc = 0x12b748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)256);
    // 0x12b74c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B74Cu;
    {
        const bool branch_taken_0x12b74c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b74c) {
            ctx->pc = 0x12B750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12B74Cu;
            // 0x12b750: 0x2ae20066  slti        $v0, $s7, 0x66 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)102) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B770u;
            goto label_12b770;
        }
    }
    ctx->pc = 0x12B754u;
    // 0x12b754: 0xae350004  sw          $s5, 0x4($s1)
    ctx->pc = 0x12b754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 21));
    // 0x12b758: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x12b758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x12b75c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12b75cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b760: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b764: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12b764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b768: 0x100001c3  b           . + 4 + (0x1C3 << 2)
    ctx->pc = 0x12B768u;
    {
        const bool branch_taken_0x12b768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B768u;
            // 0x12b76c: 0x551021  addu        $v0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b768) {
            ctx->pc = 0x12BE78u;
            goto label_12be78;
        }
    }
    ctx->pc = 0x12B770u;
label_12b770:
    // 0x12b770: 0x1440014e  bnez        $v0, . + 4 + (0x14E << 2)
    ctx->pc = 0x12B770u;
    {
        const bool branch_taken_0x12b770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B770u;
            // 0x12b774: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b770) {
            ctx->pc = 0x12BCACu;
            goto label_12bcac;
        }
    }
    ctx->pc = 0x12B778u;
    // 0x12b778: 0xdfa40200  ld          $a0, 0x200($sp)
    ctx->pc = 0x12b778u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x12b77c: 0xc0a2148  jal         func_288520
    ctx->pc = 0x12B77Cu;
    SET_GPR_U32(ctx, 31, 0x12B784u);
    ctx->pc = 0x12B780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B77Cu;
            // 0x12b780: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B784u; }
        if (ctx->pc != 0x12B784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B784u; }
        if (ctx->pc != 0x12B784u) { return; }
    }
    ctx->pc = 0x12B784u;
label_12b784:
    // 0x12b784: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x12B784u;
    {
        const bool branch_taken_0x12b784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B784u;
            // 0x12b788: 0x8fa301dc  lw          $v1, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b784) {
            ctx->pc = 0x12B8E8u;
            goto label_12b8e8;
        }
    }
    ctx->pc = 0x12B78Cu;
    // 0x12b78c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x12b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x12b790: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12b790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b794: 0x24422338  addiu       $v0, $v0, 0x2338
    ctx->pc = 0x12b794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9016));
    // 0x12b798: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x12b798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x12b79c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12b79cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12b7a0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b7a4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12b7a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b7a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b7ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b7b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12b7b4: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12b7b4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b7b8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12b7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12b7bc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12B7BCu;
    {
        const bool branch_taken_0x12b7bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B7BCu;
            // 0x12b7c0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7bc) {
            ctx->pc = 0x12B7D8u;
            goto label_12b7d8;
        }
    }
    ctx->pc = 0x12B7C4u;
    // 0x12b7c4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12b7c8: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12B7C8u;
    SET_GPR_U32(ctx, 31, 0x12B7D0u);
    ctx->pc = 0x12B7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B7C8u;
            // 0x12b7cc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B7D0u; }
        if (ctx->pc != 0x12B7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B7D0u; }
        if (ctx->pc != 0x12B7D0u) { return; }
    }
    ctx->pc = 0x12B7D0u;
label_12b7d0:
    // 0x12b7d0: 0x14400201  bnez        $v0, . + 4 + (0x201 << 2)
    ctx->pc = 0x12B7D0u;
    {
        const bool branch_taken_0x12b7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B7D0u;
            // 0x12b7d4: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7d0) {
            ctx->pc = 0x12BFD8u;
            goto label_12bfd8;
        }
    }
    ctx->pc = 0x12B7D8u;
label_12b7d8:
    // 0x12b7d8: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x12b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x12b7dc: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x12b7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12b7e0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x12b7e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12b7e4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B7E4u;
    {
        const bool branch_taken_0x12b7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b7e4) {
            ctx->pc = 0x12B7E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12B7E4u;
            // 0x12b7e8: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B7FCu;
            goto label_12b7fc;
        }
    }
    ctx->pc = 0x12B7ECu;
    // 0x12b7ec: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x12b7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x12b7f0: 0x104001ad  beqz        $v0, . + 4 + (0x1AD << 2)
    ctx->pc = 0x12B7F0u;
    {
        const bool branch_taken_0x12b7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B7F0u;
            // 0x12b7f4: 0x33c20004  andi        $v0, $fp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7f0) {
            ctx->pc = 0x12BEA8u;
            goto label_12bea8;
        }
    }
    ctx->pc = 0x12B7F8u;
    // 0x12b7f8: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x12b7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_12b7fc:
    // 0x12b7fc: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x12b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12b800: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12b800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12b804: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b808: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12b808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12b80c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12b80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b810: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b814: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12b814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12b818: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12b818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12b81c: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12b81cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b820: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12B820u;
    {
        const bool branch_taken_0x12b820 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B820u;
            // 0x12b824: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b820) {
            ctx->pc = 0x12B83Cu;
            goto label_12b83c;
        }
    }
    ctx->pc = 0x12B828u;
    // 0x12b828: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12b82c: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12B82Cu;
    SET_GPR_U32(ctx, 31, 0x12B834u);
    ctx->pc = 0x12B830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B82Cu;
            // 0x12b830: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B834u; }
        if (ctx->pc != 0x12B834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B834u; }
        if (ctx->pc != 0x12B834u) { return; }
    }
    ctx->pc = 0x12B834u;
label_12b834:
    // 0x12b834: 0x144001e8  bnez        $v0, . + 4 + (0x1E8 << 2)
    ctx->pc = 0x12B834u;
    {
        const bool branch_taken_0x12b834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B834u;
            // 0x12b838: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b834) {
            ctx->pc = 0x12BFD8u;
            goto label_12bfd8;
        }
    }
    ctx->pc = 0x12B83Cu;
label_12b83c:
    // 0x12b83c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x12b83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12b840: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x12b840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12b844: 0x1a000197  blez        $s0, . + 4 + (0x197 << 2)
    ctx->pc = 0x12B844u;
    {
        const bool branch_taken_0x12b844 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12B848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B844u;
            // 0x12b848: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b844) {
            ctx->pc = 0x12BEA4u;
            goto label_12bea4;
        }
    }
    ctx->pc = 0x12B84Cu;
    // 0x12b84c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x12B84Cu;
    {
        const bool branch_taken_0x12b84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B84Cu;
            // 0x12b850: 0x3c160036  lui         $s6, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b84c) {
            ctx->pc = 0x12B8B8u;
            goto label_12b8b8;
        }
    }
    ctx->pc = 0x12B854u;
    // 0x12b854: 0x0  nop
    ctx->pc = 0x12b854u;
    // NOP
label_12b858:
    // 0x12b858: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x12b858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12b85c: 0x26c422c0  addiu       $a0, $s6, 0x22C0
    ctx->pc = 0x12b85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 8896));
    // 0x12b860: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x12b860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x12b864: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12b864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12b868: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12b868u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12b86c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b870: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12b870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b874: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12b874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12b878: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b87c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12b87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12b880: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12b880u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b884: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12B884u;
    {
        const bool branch_taken_0x12b884 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B884u;
            // 0x12b888: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b884) {
            ctx->pc = 0x12B8A0u;
            goto label_12b8a0;
        }
    }
    ctx->pc = 0x12B88Cu;
    // 0x12b88c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12b890: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12B890u;
    SET_GPR_U32(ctx, 31, 0x12B898u);
    ctx->pc = 0x12B894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B890u;
            // 0x12b894: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B898u; }
        if (ctx->pc != 0x12B898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B898u; }
        if (ctx->pc != 0x12B898u) { return; }
    }
    ctx->pc = 0x12B898u;
label_12b898:
    // 0x12b898: 0x144001cf  bnez        $v0, . + 4 + (0x1CF << 2)
    ctx->pc = 0x12B898u;
    {
        const bool branch_taken_0x12b898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B898u;
            // 0x12b89c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b898) {
            ctx->pc = 0x12BFD8u;
            goto label_12bfd8;
        }
    }
    ctx->pc = 0x12B8A0u;
label_12b8a0:
    // 0x12b8a0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12b8a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12b8a4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12b8a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12b8a8: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12B8A8u;
    {
        const bool branch_taken_0x12b8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B8A8u;
            // 0x12b8ac: 0x26c222c0  addiu       $v0, $s6, 0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 8896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8a8) {
            ctx->pc = 0x12B858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b858;
        }
    }
    ctx->pc = 0x12B8B0u;
    // 0x12b8b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12B8B0u;
    {
        const bool branch_taken_0x12b8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B8B0u;
            // 0x12b8b4: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8b0) {
            ctx->pc = 0x12B8C0u;
            goto label_12b8c0;
        }
    }
    ctx->pc = 0x12B8B8u;
label_12b8b8:
    // 0x12b8b8: 0x26c222c0  addiu       $v0, $s6, 0x22C0
    ctx->pc = 0x12b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 8896));
    // 0x12b8bc: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x12b8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_12b8c0:
    // 0x12b8c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12b8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12b8c4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b8c8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12b8c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12b8cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b8d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b8d4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x12b8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x12b8d8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12b8d8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b8dc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12b8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12b8e0: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x12B8E0u;
    {
        const bool branch_taken_0x12b8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B8E0u;
            // 0x12b8e4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8e0) {
            ctx->pc = 0x12BE88u;
            goto label_12be88;
        }
    }
    ctx->pc = 0x12B8E8u;
label_12b8e8:
    // 0x12b8e8: 0x1c600063  bgtz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x12B8E8u;
    {
        const bool branch_taken_0x12b8e8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x12B8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B8E8u;
            // 0x12b8ec: 0x8fa401e0  lw          $a0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8e8) {
            ctx->pc = 0x12BA78u;
            goto label_12ba78;
        }
    }
    ctx->pc = 0x12B8F0u;
    // 0x12b8f0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x12b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x12b8f4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12b8f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b8f8: 0x24422338  addiu       $v0, $v0, 0x2338
    ctx->pc = 0x12b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9016));
    // 0x12b8fc: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x12b8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x12b900: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12b900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12b904: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12b904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b908: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12b908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b90c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b910: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b914: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12b914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12b918: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12b918u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b91c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12b91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12b920: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12B920u;
    {
        const bool branch_taken_0x12b920 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B920u;
            // 0x12b924: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b920) {
            ctx->pc = 0x12B93Cu;
            goto label_12b93c;
        }
    }
    ctx->pc = 0x12B928u;
    // 0x12b928: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12b92c: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12B92Cu;
    SET_GPR_U32(ctx, 31, 0x12B934u);
    ctx->pc = 0x12B930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B92Cu;
            // 0x12b930: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B934u; }
        if (ctx->pc != 0x12B934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B934u; }
        if (ctx->pc != 0x12B934u) { return; }
    }
    ctx->pc = 0x12B934u;
label_12b934:
    // 0x12b934: 0x144001a8  bnez        $v0, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x12B934u;
    {
        const bool branch_taken_0x12b934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B934u;
            // 0x12b938: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b934) {
            ctx->pc = 0x12BFD8u;
            goto label_12bfd8;
        }
    }
    ctx->pc = 0x12B93Cu;
label_12b93c:
    // 0x12b93c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x12b93cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x12b940: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x12b940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12b944: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x12b944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x12b948: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12b948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b94c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12b94cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12b950: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b954: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12b954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12b958: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b95c: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12b95cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b960: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12b960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12b964: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12B964u;
    {
        const bool branch_taken_0x12b964 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B964u;
            // 0x12b968: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b964) {
            ctx->pc = 0x12B980u;
            goto label_12b980;
        }
    }
    ctx->pc = 0x12B96Cu;
    // 0x12b96c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12b970: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12B970u;
    SET_GPR_U32(ctx, 31, 0x12B978u);
    ctx->pc = 0x12B974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B970u;
            // 0x12b974: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B978u; }
        if (ctx->pc != 0x12B978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B978u; }
        if (ctx->pc != 0x12B978u) { return; }
    }
    ctx->pc = 0x12B978u;
label_12b978:
    // 0x12b978: 0x14400197  bnez        $v0, . + 4 + (0x197 << 2)
    ctx->pc = 0x12B978u;
    {
        const bool branch_taken_0x12b978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B978u;
            // 0x12b97c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b978) {
            ctx->pc = 0x12BFD8u;
            goto label_12bfd8;
        }
    }
    ctx->pc = 0x12B980u;
label_12b980:
    // 0x12b980: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x12b980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x12b984: 0x28023  negu        $s0, $v0
    ctx->pc = 0x12b984u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x12b988: 0x1a00002c  blez        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x12B988u;
    {
        const bool branch_taken_0x12b988 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12B98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B988u;
            // 0x12b98c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b988) {
            ctx->pc = 0x12BA3Cu;
            goto label_12ba3c;
        }
    }
    ctx->pc = 0x12B990u;
    // 0x12b990: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x12B990u;
    {
        const bool branch_taken_0x12b990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B990u;
            // 0x12b994: 0x3c160036  lui         $s6, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b990) {
            ctx->pc = 0x12B9F8u;
            goto label_12b9f8;
        }
    }
    ctx->pc = 0x12B998u;
label_12b998:
    // 0x12b998: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x12b998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12b99c: 0x26c422c0  addiu       $a0, $s6, 0x22C0
    ctx->pc = 0x12b99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 8896));
    // 0x12b9a0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x12b9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x12b9a4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12b9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12b9a8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12b9a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12b9ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b9b0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b9b4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12b9b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b9bc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12b9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12b9c0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12b9c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b9c4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12B9C4u;
    {
        const bool branch_taken_0x12b9c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B9C4u;
            // 0x12b9c8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b9c4) {
            ctx->pc = 0x12B9E0u;
            goto label_12b9e0;
        }
    }
    ctx->pc = 0x12B9CCu;
    // 0x12b9cc: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12b9d0: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12B9D0u;
    SET_GPR_U32(ctx, 31, 0x12B9D8u);
    ctx->pc = 0x12B9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B9D0u;
            // 0x12b9d4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B9D8u; }
        if (ctx->pc != 0x12B9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B9D8u; }
        if (ctx->pc != 0x12B9D8u) { return; }
    }
    ctx->pc = 0x12B9D8u;
label_12b9d8:
    // 0x12b9d8: 0x1440017f  bnez        $v0, . + 4 + (0x17F << 2)
    ctx->pc = 0x12B9D8u;
    {
        const bool branch_taken_0x12b9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B9D8u;
            // 0x12b9dc: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b9d8) {
            ctx->pc = 0x12BFD8u;
            goto label_12bfd8;
        }
    }
    ctx->pc = 0x12B9E0u;
label_12b9e0:
    // 0x12b9e0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12b9e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12b9e4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12b9e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12b9e8: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12B9E8u;
    {
        const bool branch_taken_0x12b9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B9E8u;
            // 0x12b9ec: 0x26c222c0  addiu       $v0, $s6, 0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 8896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b9e8) {
            ctx->pc = 0x12B998u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b998;
        }
    }
    ctx->pc = 0x12B9F0u;
    // 0x12b9f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12B9F0u;
    {
        const bool branch_taken_0x12b9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B9F0u;
            // 0x12b9f4: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b9f0) {
            ctx->pc = 0x12BA00u;
            goto label_12ba00;
        }
    }
    ctx->pc = 0x12B9F8u;
label_12b9f8:
    // 0x12b9f8: 0x26c222c0  addiu       $v0, $s6, 0x22C0
    ctx->pc = 0x12b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 8896));
    // 0x12b9fc: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x12b9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_12ba00:
    // 0x12ba00: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12ba00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12ba04: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12ba08: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12ba08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12ba0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ba0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ba10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12ba14: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x12ba14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x12ba18: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12ba18u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12ba1c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12ba1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12ba20: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12BA20u;
    {
        const bool branch_taken_0x12ba20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BA20u;
            // 0x12ba24: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba20) {
            ctx->pc = 0x12BA3Cu;
            goto label_12ba3c;
        }
    }
    ctx->pc = 0x12BA28u;
    // 0x12ba28: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12ba28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12ba2c: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12BA2Cu;
    SET_GPR_U32(ctx, 31, 0x12BA34u);
    ctx->pc = 0x12BA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BA2Cu;
            // 0x12ba30: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BA34u; }
        if (ctx->pc != 0x12BA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BA34u; }
        if (ctx->pc != 0x12BA34u) { return; }
    }
    ctx->pc = 0x12BA34u;
label_12ba34:
    // 0x12ba34: 0x14400168  bnez        $v0, . + 4 + (0x168 << 2)
    ctx->pc = 0x12BA34u;
    {
        const bool branch_taken_0x12ba34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BA34u;
            // 0x12ba38: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba34) {
            ctx->pc = 0x12BFD8u;
            goto label_12bfd8;
        }
    }
    ctx->pc = 0x12BA3Cu;
label_12ba3c:
    // 0x12ba3c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x12ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12ba40: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x12ba40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x12ba44: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12ba44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12ba48: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12ba48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12ba4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ba50: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12ba54: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x12ba54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12ba58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12ba5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12ba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12ba60: 0x28450008  slti        $a1, $v0, 0x8
    ctx->pc = 0x12ba60u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12ba64: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12ba64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12ba68: 0x14a0010e  bnez        $a1, . + 4 + (0x10E << 2)
    ctx->pc = 0x12BA68u;
    {
        const bool branch_taken_0x12ba68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BA68u;
            // 0x12ba6c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba68) {
            ctx->pc = 0x12BEA4u;
            goto label_12bea4;
        }
    }
    ctx->pc = 0x12BA70u;
    // 0x12ba70: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x12BA70u;
    {
        const bool branch_taken_0x12ba70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BA70u;
            // 0x12ba74: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba70) {
            ctx->pc = 0x12BE94u;
            goto label_12be94;
        }
    }
    ctx->pc = 0x12BA78u;
label_12ba78:
    // 0x12ba78: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x12ba78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x12ba7c: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x12BA7Cu;
    {
        const bool branch_taken_0x12ba7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ba7c) {
            ctx->pc = 0x12BA80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12BA7Cu;
            // 0x12ba80: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12BBCCu;
            goto label_12bbcc;
        }
    }
    ctx->pc = 0x12BA84u;
    // 0x12ba84: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x12ba84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x12ba88: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x12ba88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x12ba8c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12ba8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ba94: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12ba94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12ba98: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x12ba98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12ba9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12ba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12baa0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x12baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12baa4: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12baa4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12baa8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12baa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12baac: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12BAACu;
    {
        const bool branch_taken_0x12baac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BAACu;
            // 0x12bab0: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12baac) {
            ctx->pc = 0x12BACCu;
            goto label_12bacc;
        }
    }
    ctx->pc = 0x12BAB4u;
    // 0x12bab4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12bab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12bab8: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12BAB8u;
    SET_GPR_U32(ctx, 31, 0x12BAC0u);
    ctx->pc = 0x12BABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BAB8u;
            // 0x12babc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BAC0u; }
        if (ctx->pc != 0x12BAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BAC0u; }
        if (ctx->pc != 0x12BAC0u) { return; }
    }
    ctx->pc = 0x12BAC0u;
label_12bac0:
    // 0x12bac0: 0x14400145  bnez        $v0, . + 4 + (0x145 << 2)
    ctx->pc = 0x12BAC0u;
    {
        const bool branch_taken_0x12bac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BAC0u;
            // 0x12bac4: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bac0) {
            ctx->pc = 0x12BFD8u;
            goto label_12bfd8;
        }
    }
    ctx->pc = 0x12BAC8u;
    // 0x12bac8: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x12bac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_12bacc:
    // 0x12bacc: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x12baccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x12bad0: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x12bad0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12bad4: 0x1a00002d  blez        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x12BAD4u;
    {
        const bool branch_taken_0x12bad4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12BAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BAD4u;
            // 0x12bad8: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bad4) {
            ctx->pc = 0x12BB8Cu;
            goto label_12bb8c;
        }
    }
    ctx->pc = 0x12BADCu;
    // 0x12badc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x12BADCu;
    {
        const bool branch_taken_0x12badc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BADCu;
            // 0x12bae0: 0x3c160036  lui         $s6, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12badc) {
            ctx->pc = 0x12BB48u;
            goto label_12bb48;
        }
    }
    ctx->pc = 0x12BAE4u;
    // 0x12bae4: 0x0  nop
    ctx->pc = 0x12bae4u;
    // NOP
label_12bae8:
    // 0x12bae8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x12bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12baec: 0x26c422c0  addiu       $a0, $s6, 0x22C0
    ctx->pc = 0x12baecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 8896));
    // 0x12baf0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x12baf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x12baf4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12baf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12baf8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12baf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12bafc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bb00: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12bb04: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12bb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12bb08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12bb0c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12bb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12bb10: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12bb10u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12bb14: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12BB14u;
    {
        const bool branch_taken_0x12bb14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB14u;
            // 0x12bb18: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb14) {
            ctx->pc = 0x12BB30u;
            goto label_12bb30;
        }
    }
    ctx->pc = 0x12BB1Cu;
    // 0x12bb1c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12bb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12bb20: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12BB20u;
    SET_GPR_U32(ctx, 31, 0x12BB28u);
    ctx->pc = 0x12BB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB20u;
            // 0x12bb24: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BB28u; }
        if (ctx->pc != 0x12BB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BB28u; }
        if (ctx->pc != 0x12BB28u) { return; }
    }
    ctx->pc = 0x12BB28u;
label_12bb28:
    // 0x12bb28: 0x1440012b  bnez        $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x12BB28u;
    {
        const bool branch_taken_0x12bb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB28u;
            // 0x12bb2c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb28) {
            ctx->pc = 0x12BFD8u;
            goto label_12bfd8;
        }
    }
    ctx->pc = 0x12BB30u;
label_12bb30:
    // 0x12bb30: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12bb30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12bb34: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12bb34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12bb38: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12BB38u;
    {
        const bool branch_taken_0x12bb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB38u;
            // 0x12bb3c: 0x26c222c0  addiu       $v0, $s6, 0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 8896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb38) {
            ctx->pc = 0x12BAE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12bae8;
        }
    }
    ctx->pc = 0x12BB40u;
    // 0x12bb40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12BB40u;
    {
        const bool branch_taken_0x12bb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB40u;
            // 0x12bb44: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb40) {
            ctx->pc = 0x12BB50u;
            goto label_12bb50;
        }
    }
    ctx->pc = 0x12BB48u;
label_12bb48:
    // 0x12bb48: 0x26c222c0  addiu       $v0, $s6, 0x22C0
    ctx->pc = 0x12bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 8896));
    // 0x12bb4c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x12bb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_12bb50:
    // 0x12bb50: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12bb50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12bb54: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12bb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12bb58: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12bb58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12bb5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bb60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12bb64: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x12bb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x12bb68: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12bb68u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12bb6c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12bb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12bb70: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12BB70u;
    {
        const bool branch_taken_0x12bb70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB70u;
            // 0x12bb74: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb70) {
            ctx->pc = 0x12BB8Cu;
            goto label_12bb8c;
        }
    }
    ctx->pc = 0x12BB78u;
    // 0x12bb78: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12bb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12bb7c: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12BB7Cu;
    SET_GPR_U32(ctx, 31, 0x12BB84u);
    ctx->pc = 0x12BB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB7Cu;
            // 0x12bb80: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BB84u; }
        if (ctx->pc != 0x12BB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BB84u; }
        if (ctx->pc != 0x12BB84u) { return; }
    }
    ctx->pc = 0x12BB84u;
label_12bb84:
    // 0x12bb84: 0x14400114  bnez        $v0, . + 4 + (0x114 << 2)
    ctx->pc = 0x12BB84u;
    {
        const bool branch_taken_0x12bb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB84u;
            // 0x12bb88: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb84) {
            ctx->pc = 0x12BFD8u;
            goto label_12bfd8;
        }
    }
    ctx->pc = 0x12BB8Cu;
label_12bb8c:
    // 0x12bb8c: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x12bb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x12bb90: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x12BB90u;
    {
        const bool branch_taken_0x12bb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB90u;
            // 0x12bb94: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb90) {
            ctx->pc = 0x12BEA4u;
            goto label_12bea4;
        }
    }
    ctx->pc = 0x12BB98u;
    // 0x12bb98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12bb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bb9c: 0x24422340  addiu       $v0, $v0, 0x2340
    ctx->pc = 0x12bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9024));
    // 0x12bba0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x12bba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x12bba4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12bba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12bba8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12bbac: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12bbacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12bbb0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bbb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12bbb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12bbbc: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12bbbcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12bbc0: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12bbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12bbc4: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x12BBC4u;
    {
        const bool branch_taken_0x12bbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BBC4u;
            // 0x12bbc8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bbc4) {
            ctx->pc = 0x12BE88u;
            goto label_12be88;
        }
    }
    ctx->pc = 0x12BBCCu;
label_12bbcc:
    // 0x12bbcc: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x12bbccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x12bbd0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12bbd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bbd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bbd8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12bbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12bbdc: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x12bbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x12bbe0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12bbe4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x12bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12bbe8: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12bbe8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12bbec: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12bbecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12bbf0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12BBF0u;
    {
        const bool branch_taken_0x12bbf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BBF0u;
            // 0x12bbf4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bbf0) {
            ctx->pc = 0x12BC10u;
            goto label_12bc10;
        }
    }
    ctx->pc = 0x12BBF8u;
    // 0x12bbf8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12bbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12bbfc: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12BBFCu;
    SET_GPR_U32(ctx, 31, 0x12BC04u);
    ctx->pc = 0x12BC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BBFCu;
            // 0x12bc00: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BC04u; }
        if (ctx->pc != 0x12BC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BC04u; }
        if (ctx->pc != 0x12BC04u) { return; }
    }
    ctx->pc = 0x12BC04u;
label_12bc04:
    // 0x12bc04: 0x144000f4  bnez        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x12BC04u;
    {
        const bool branch_taken_0x12bc04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BC04u;
            // 0x12bc08: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc04) {
            ctx->pc = 0x12BFD8u;
            goto label_12bfd8;
        }
    }
    ctx->pc = 0x12BC0Cu;
    // 0x12bc0c: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x12bc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_12bc10:
    // 0x12bc10: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x12bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x12bc14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12bc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bc18: 0x24422340  addiu       $v0, $v0, 0x2340
    ctx->pc = 0x12bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9024));
    // 0x12bc1c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x12bc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x12bc20: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12bc24: 0x2659821  addu        $s3, $s3, $a1
    ctx->pc = 0x12bc24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x12bc28: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12bc2c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12bc2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12bc30: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bc34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12bc38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12bc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12bc3c: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12bc3cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12bc40: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12bc40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12bc44: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12BC44u;
    {
        const bool branch_taken_0x12bc44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BC44u;
            // 0x12bc48: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc44) {
            ctx->pc = 0x12BC60u;
            goto label_12bc60;
        }
    }
    ctx->pc = 0x12BC4Cu;
    // 0x12bc4c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12bc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12bc50: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12BC50u;
    SET_GPR_U32(ctx, 31, 0x12BC58u);
    ctx->pc = 0x12BC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BC50u;
            // 0x12bc54: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BC58u; }
        if (ctx->pc != 0x12BC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BC58u; }
        if (ctx->pc != 0x12BC58u) { return; }
    }
    ctx->pc = 0x12BC58u;
label_12bc58:
    // 0x12bc58: 0x144000df  bnez        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x12BC58u;
    {
        const bool branch_taken_0x12bc58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BC58u;
            // 0x12bc5c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc58) {
            ctx->pc = 0x12BFD8u;
            goto label_12bfd8;
        }
    }
    ctx->pc = 0x12BC60u;
label_12bc60:
    // 0x12bc60: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x12bc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x12bc64: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x12bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12bc68: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x12bc68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x12bc6c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x12bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12bc70: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12bc70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12bc74: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12bc74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12bc78: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x12bc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12bc7c: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x12bc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x12bc80: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12bc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bc84: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12bc88: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x12bc88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12bc8c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x12bc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x12bc90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12bc94: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x12bc94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x12bc98: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x12bc98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12bc9c: 0x14600081  bnez        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x12BC9Cu;
    {
        const bool branch_taken_0x12bc9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BC9Cu;
            // 0x12bca0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc9c) {
            ctx->pc = 0x12BEA4u;
            goto label_12bea4;
        }
    }
    ctx->pc = 0x12BCA4u;
    // 0x12bca4: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x12BCA4u;
    {
        const bool branch_taken_0x12bca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BCA4u;
            // 0x12bca8: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bca4) {
            ctx->pc = 0x12BE94u;
            goto label_12be94;
        }
    }
    ctx->pc = 0x12BCACu;
label_12bcac:
    // 0x12bcac: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x12bcacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12bcb0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12BCB0u;
    {
        const bool branch_taken_0x12bcb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BCB0u;
            // 0x12bcb4: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bcb0) {
            ctx->pc = 0x12BCC0u;
            goto label_12bcc0;
        }
    }
    ctx->pc = 0x12BCB8u;
    // 0x12bcb8: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x12BCB8u;
    {
        const bool branch_taken_0x12bcb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BCB8u;
            // 0x12bcbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bcb8) {
            ctx->pc = 0x12BE18u;
            goto label_12be18;
        }
    }
    ctx->pc = 0x12BCC0u;
label_12bcc0:
    // 0x12bcc0: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x12bcc0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12bcc4: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x12bcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x12bcc8: 0xa3a201c1  sb          $v0, 0x1C1($sp)
    ctx->pc = 0x12bcc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 2));
    // 0x12bccc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12bcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12bcd0: 0xa3a401c0  sb          $a0, 0x1C0($sp)
    ctx->pc = 0x12bcd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 4));
    // 0x12bcd4: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x12bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x12bcd8: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x12bcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x12bcdc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x12bcdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x12bce0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12bce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12bce4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12bce8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12bce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bcec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bcf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12bcf4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x12bcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x12bcf8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12bcf8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12bcfc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12bcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12bd00: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12BD00u;
    {
        const bool branch_taken_0x12bd00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD00u;
            // 0x12bd04: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd00) {
            ctx->pc = 0x12BD1Cu;
            goto label_12bd1c;
        }
    }
    ctx->pc = 0x12BD08u;
    // 0x12bd08: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12bd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12bd0c: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12BD0Cu;
    SET_GPR_U32(ctx, 31, 0x12BD14u);
    ctx->pc = 0x12BD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD0Cu;
            // 0x12bd10: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BD14u; }
        if (ctx->pc != 0x12BD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BD14u; }
        if (ctx->pc != 0x12BD14u) { return; }
    }
    ctx->pc = 0x12BD14u;
label_12bd14:
    // 0x12bd14: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x12BD14u;
    {
        const bool branch_taken_0x12bd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD14u;
            // 0x12bd18: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd14) {
            ctx->pc = 0x12BFD8u;
            goto label_12bfd8;
        }
    }
    ctx->pc = 0x12BD1Cu;
label_12bd1c:
    // 0x12bd1c: 0xdfa40200  ld          $a0, 0x200($sp)
    ctx->pc = 0x12bd1cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x12bd20: 0xc0a2148  jal         func_288520
    ctx->pc = 0x12BD20u;
    SET_GPR_U32(ctx, 31, 0x12BD28u);
    ctx->pc = 0x12BD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD20u;
            // 0x12bd24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BD28u; }
        if (ctx->pc != 0x12BD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BD28u; }
        if (ctx->pc != 0x12BD28u) { return; }
    }
    ctx->pc = 0x12BD28u;
label_12bd28:
    // 0x12bd28: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12BD28u;
    {
        const bool branch_taken_0x12bd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD28u;
            // 0x12bd2c: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd28) {
            ctx->pc = 0x12BD70u;
            goto label_12bd70;
        }
    }
    ctx->pc = 0x12BD30u;
    // 0x12bd30: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x12bd30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x12bd34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12bd38: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12bd38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12bd3c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12bd3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12bd40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bd44: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12bd48: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x12bd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12bd4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12bd50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12bd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12bd54: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12bd58: 0x28650008  slti        $a1, $v1, 0x8
    ctx->pc = 0x12bd58u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12bd5c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12bd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12bd60: 0x14a0003e  bnez        $a1, . + 4 + (0x3E << 2)
    ctx->pc = 0x12BD60u;
    {
        const bool branch_taken_0x12bd60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD60u;
            // 0x12bd64: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd60) {
            ctx->pc = 0x12BE5Cu;
            goto label_12be5c;
        }
    }
    ctx->pc = 0x12BD68u;
    // 0x12bd68: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x12BD68u;
    {
        const bool branch_taken_0x12bd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD68u;
            // 0x12bd6c: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd68) {
            ctx->pc = 0x12BE4Cu;
            goto label_12be4c;
        }
    }
    ctx->pc = 0x12BD70u;
label_12bd70:
    // 0x12bd70: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x12bd70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12bd74: 0x1a000039  blez        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x12BD74u;
    {
        const bool branch_taken_0x12bd74 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12BD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD74u;
            // 0x12bd78: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd74) {
            ctx->pc = 0x12BE5Cu;
            goto label_12be5c;
        }
    }
    ctx->pc = 0x12BD7Cu;
    // 0x12bd7c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x12BD7Cu;
    {
        const bool branch_taken_0x12bd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD7Cu;
            // 0x12bd80: 0x3c160036  lui         $s6, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd7c) {
            ctx->pc = 0x12BDE8u;
            goto label_12bde8;
        }
    }
    ctx->pc = 0x12BD84u;
    // 0x12bd84: 0x0  nop
    ctx->pc = 0x12bd84u;
    // NOP
label_12bd88:
    // 0x12bd88: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x12bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12bd8c: 0x26c422c0  addiu       $a0, $s6, 0x22C0
    ctx->pc = 0x12bd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 8896));
    // 0x12bd90: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x12bd90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x12bd94: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12bd94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12bd98: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12bd98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12bd9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bda0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12bda4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12bda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12bda8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12bdac: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12bdacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12bdb0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12bdb0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12bdb4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12BDB4u;
    {
        const bool branch_taken_0x12bdb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BDB4u;
            // 0x12bdb8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bdb4) {
            ctx->pc = 0x12BDD0u;
            goto label_12bdd0;
        }
    }
    ctx->pc = 0x12BDBCu;
    // 0x12bdbc: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12bdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12bdc0: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12BDC0u;
    SET_GPR_U32(ctx, 31, 0x12BDC8u);
    ctx->pc = 0x12BDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BDC0u;
            // 0x12bdc4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BDC8u; }
        if (ctx->pc != 0x12BDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BDC8u; }
        if (ctx->pc != 0x12BDC8u) { return; }
    }
    ctx->pc = 0x12BDC8u;
label_12bdc8:
    // 0x12bdc8: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x12BDC8u;
    {
        const bool branch_taken_0x12bdc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BDC8u;
            // 0x12bdcc: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bdc8) {
            ctx->pc = 0x12BFD8u;
            goto label_12bfd8;
        }
    }
    ctx->pc = 0x12BDD0u;
label_12bdd0:
    // 0x12bdd0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12bdd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12bdd4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12bdd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12bdd8: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12BDD8u;
    {
        const bool branch_taken_0x12bdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BDD8u;
            // 0x12bddc: 0x26c222c0  addiu       $v0, $s6, 0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 8896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bdd8) {
            ctx->pc = 0x12BD88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12bd88;
        }
    }
    ctx->pc = 0x12BDE0u;
    // 0x12bde0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12BDE0u;
    {
        const bool branch_taken_0x12bde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BDE0u;
            // 0x12bde4: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bde0) {
            ctx->pc = 0x12BDF0u;
            goto label_12bdf0;
        }
    }
    ctx->pc = 0x12BDE8u;
label_12bde8:
    // 0x12bde8: 0x26c222c0  addiu       $v0, $s6, 0x22C0
    ctx->pc = 0x12bde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 8896));
    // 0x12bdec: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x12bdecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_12bdf0:
    // 0x12bdf0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12bdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12bdf4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12bdf8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12bdf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12bdfc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12be00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12be00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12be04: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x12be04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x12be08: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12be08u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12be0c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12be0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12be10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12BE10u;
    {
        const bool branch_taken_0x12be10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BE10u;
            // 0x12be14: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be10) {
            ctx->pc = 0x12BE40u;
            goto label_12be40;
        }
    }
    ctx->pc = 0x12BE18u;
label_12be18:
    // 0x12be18: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x12be18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x12be1c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12be1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12be20: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12be20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12be24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12be28: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12be28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12be2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12be30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12be30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12be34: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12be34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12be38: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12be38u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12be3c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x12be3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_12be40:
    // 0x12be40: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12BE40u;
    {
        const bool branch_taken_0x12be40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BE40u;
            // 0x12be44: 0x8fa40208  lw          $a0, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be40) {
            ctx->pc = 0x12BE60u;
            goto label_12be60;
        }
    }
    ctx->pc = 0x12BE48u;
    // 0x12be48: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12be48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12be4c:
    // 0x12be4c: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12BE4Cu;
    SET_GPR_U32(ctx, 31, 0x12BE54u);
    ctx->pc = 0x12BE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BE4Cu;
            // 0x12be50: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BE54u; }
        if (ctx->pc != 0x12BE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BE54u; }
        if (ctx->pc != 0x12BE54u) { return; }
    }
    ctx->pc = 0x12BE54u;
label_12be54:
    // 0x12be54: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x12BE54u;
    {
        const bool branch_taken_0x12be54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BE54u;
            // 0x12be58: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be54) {
            ctx->pc = 0x12BFD8u;
            goto label_12bfd8;
        }
    }
    ctx->pc = 0x12BE5Cu;
label_12be5c:
    // 0x12be5c: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x12be5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_12be60:
    // 0x12be60: 0xae3d0000  sw          $sp, 0x0($s1)
    ctx->pc = 0x12be60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 29));
    // 0x12be64: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x12be64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x12be68: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12be68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12be6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12be70: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12be70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12be74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12be74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_12be78:
    // 0x12be78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12be78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12be7c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12be7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12be80: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12be80u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12be84: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x12be84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_12be88:
    // 0x12be88: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12BE88u;
    {
        const bool branch_taken_0x12be88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BE88u;
            // 0x12be8c: 0x33c20004  andi        $v0, $fp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be88) {
            ctx->pc = 0x12BEA8u;
            goto label_12bea8;
        }
    }
    ctx->pc = 0x12BE90u;
    // 0x12be90: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12be90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12be94:
    // 0x12be94: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12BE94u;
    SET_GPR_U32(ctx, 31, 0x12BE9Cu);
    ctx->pc = 0x12BE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BE94u;
            // 0x12be98: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BE9Cu; }
        if (ctx->pc != 0x12BE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BE9Cu; }
        if (ctx->pc != 0x12BE9Cu) { return; }
    }
    ctx->pc = 0x12BE9Cu;
label_12be9c:
    // 0x12be9c: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x12BE9Cu;
    {
        const bool branch_taken_0x12be9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BE9Cu;
            // 0x12bea0: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be9c) {
            ctx->pc = 0x12BFD8u;
            goto label_12bfd8;
        }
    }
    ctx->pc = 0x12BEA4u;
label_12bea4:
    // 0x12bea4: 0x33c20004  andi        $v0, $fp, 0x4
    ctx->pc = 0x12bea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4);
label_12bea8:
    // 0x12bea8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x12BEA8u;
    {
        const bool branch_taken_0x12bea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BEA8u;
            // 0x12beac: 0x8fa501f4  lw          $a1, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bea8) {
            ctx->pc = 0x12BF70u;
            goto label_12bf70;
        }
    }
    ctx->pc = 0x12BEB0u;
    // 0x12beb0: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x12beb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x12beb4: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x12beb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x12beb8: 0x1a00002d  blez        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x12BEB8u;
    {
        const bool branch_taken_0x12beb8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12BEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BEB8u;
            // 0x12bebc: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12beb8) {
            ctx->pc = 0x12BF70u;
            goto label_12bf70;
        }
    }
    ctx->pc = 0x12BEC0u;
    // 0x12bec0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x12BEC0u;
    {
        const bool branch_taken_0x12bec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BEC0u;
            // 0x12bec4: 0x3c060036  lui         $a2, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bec0) {
            ctx->pc = 0x12BF30u;
            goto label_12bf30;
        }
    }
    ctx->pc = 0x12BEC8u;
label_12bec8:
    // 0x12bec8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x12bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12becc: 0x24c422b0  addiu       $a0, $a2, 0x22B0
    ctx->pc = 0x12beccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 8880));
    // 0x12bed0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x12bed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x12bed4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12bed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12bed8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12bed8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12bedc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bee0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12bee4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12bee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12bee8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12beec: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12beecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12bef0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12bef0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12bef4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12BEF4u;
    {
        const bool branch_taken_0x12bef4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BEF4u;
            // 0x12bef8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bef4) {
            ctx->pc = 0x12BF18u;
            goto label_12bf18;
        }
    }
    ctx->pc = 0x12BEFCu;
    // 0x12befc: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12befcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12bf00: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12bf00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12bf04: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12BF04u;
    SET_GPR_U32(ctx, 31, 0x12BF0Cu);
    ctx->pc = 0x12BF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BF04u;
            // 0x12bf08: 0x7fa60220  sq          $a2, 0x220($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BF0Cu; }
        if (ctx->pc != 0x12BF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BF0Cu; }
        if (ctx->pc != 0x12BF0Cu) { return; }
    }
    ctx->pc = 0x12BF0Cu;
label_12bf0c:
    // 0x12bf0c: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x12BF0Cu;
    {
        const bool branch_taken_0x12bf0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BF0Cu;
            // 0x12bf10: 0x7ba60220  lq          $a2, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf0c) {
            ctx->pc = 0x12BFD8u;
            goto label_12bfd8;
        }
    }
    ctx->pc = 0x12BF14u;
    // 0x12bf14: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x12bf14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_12bf18:
    // 0x12bf18: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12bf18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12bf1c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12bf1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12bf20: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x12BF20u;
    {
        const bool branch_taken_0x12bf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BF20u;
            // 0x12bf24: 0x24c222b0  addiu       $v0, $a2, 0x22B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf20) {
            ctx->pc = 0x12BEC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12bec8;
        }
    }
    ctx->pc = 0x12BF28u;
    // 0x12bf28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12BF28u;
    {
        const bool branch_taken_0x12bf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BF28u;
            // 0x12bf2c: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf28) {
            ctx->pc = 0x12BF38u;
            goto label_12bf38;
        }
    }
    ctx->pc = 0x12BF30u;
label_12bf30:
    // 0x12bf30: 0x24c222b0  addiu       $v0, $a2, 0x22B0
    ctx->pc = 0x12bf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8880));
    // 0x12bf34: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x12bf34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_12bf38:
    // 0x12bf38: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12bf38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12bf3c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12bf40: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bf44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12bf48: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x12bf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x12bf4c: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12bf4cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12bf50: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12bf50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12bf54: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12BF54u;
    {
        const bool branch_taken_0x12bf54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BF54u;
            // 0x12bf58: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf54) {
            ctx->pc = 0x12BF70u;
            goto label_12bf70;
        }
    }
    ctx->pc = 0x12BF5Cu;
    // 0x12bf5c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12bf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12bf60: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12BF60u;
    SET_GPR_U32(ctx, 31, 0x12BF68u);
    ctx->pc = 0x12BF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BF60u;
            // 0x12bf64: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BF68u; }
        if (ctx->pc != 0x12BF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BF68u; }
        if (ctx->pc != 0x12BF68u) { return; }
    }
    ctx->pc = 0x12BF68u;
label_12bf68:
    // 0x12bf68: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x12BF68u;
    {
        const bool branch_taken_0x12bf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BF68u;
            // 0x12bf6c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf68) {
            ctx->pc = 0x12BFDCu;
            goto label_12bfdc;
        }
    }
    ctx->pc = 0x12BF70u;
label_12bf70:
    // 0x12bf70: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x12bf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x12bf74: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12bf74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12bf78: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x12bf78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x12bf7c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x12bf7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x12bf80: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x12bf80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x12bf84: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x12bf84u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5));
    // 0x12bf88: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bf8c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x12bf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x12bf90: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12BF90u;
    {
        const bool branch_taken_0x12bf90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BF90u;
            // 0x12bf94: 0xafa601f0  sw          $a2, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf90) {
            ctx->pc = 0x12BFACu;
            goto label_12bfac;
        }
    }
    ctx->pc = 0x12BF98u;
    // 0x12bf98: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12bf98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12bf9c: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12BF9Cu;
    SET_GPR_U32(ctx, 31, 0x12BFA4u);
    ctx->pc = 0x12BFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BF9Cu;
            // 0x12bfa0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BFA4u; }
        if (ctx->pc != 0x12BFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BFA4u; }
        if (ctx->pc != 0x12BFA4u) { return; }
    }
    ctx->pc = 0x12BFA4u;
label_12bfa4:
    // 0x12bfa4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12BFA4u;
    {
        const bool branch_taken_0x12bfa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BFA4u;
            // 0x12bfa8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bfa4) {
            ctx->pc = 0x12BFDCu;
            goto label_12bfdc;
        }
    }
    ctx->pc = 0x12BFACu;
label_12bfac:
    // 0x12bfac: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x12bfacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x12bfb0: 0x1000fb0d  b           . + 4 + (-0x4F3 << 2)
    ctx->pc = 0x12BFB0u;
    {
        const bool branch_taken_0x12bfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BFB0u;
            // 0x12bfb4: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bfb0) {
            ctx->pc = 0x12ABE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12abe8;
        }
    }
    ctx->pc = 0x12BFB8u;
label_12bfb8:
    // 0x12bfb8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bfbc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12BFBCu;
    {
        const bool branch_taken_0x12bfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BFBCu;
            // 0x12bfc0: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bfbc) {
            ctx->pc = 0x12BFD4u;
            goto label_12bfd4;
        }
    }
    ctx->pc = 0x12BFC4u;
    // 0x12bfc4: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12BFC4u;
    SET_GPR_U32(ctx, 31, 0x12BFCCu);
    ctx->pc = 0x12BFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BFC4u;
            // 0x12bfc8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (runtime->hasFunction(0x12A990u)) {
        auto targetFn = runtime->lookupFunction(0x12A990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BFCCu; }
        if (ctx->pc != 0x12BFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12a990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BFCCu; }
        if (ctx->pc != 0x12BFCCu) { return; }
    }
    ctx->pc = 0x12BFCCu;
label_12bfcc:
    // 0x12bfcc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12BFCCu;
    {
        const bool branch_taken_0x12bfcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BFCCu;
            // 0x12bfd0: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bfcc) {
            ctx->pc = 0x12BFDCu;
            goto label_12bfdc;
        }
    }
    ctx->pc = 0x12BFD4u;
label_12bfd4:
    // 0x12bfd4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x12bfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_12bfd8:
    // 0x12bfd8: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x12bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12bfdc:
    // 0x12bfdc: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x12bfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x12bfe0: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x12bfe0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12bfe4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12bfe8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x12bfe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x12bfec: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x12bfecu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
label_12bff0:
    // 0x12bff0: 0xdfbf02c0  ld          $ra, 0x2C0($sp)
    ctx->pc = 0x12bff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_12bff4:
    // 0x12bff4: 0xdfbe02b0  ld          $fp, 0x2B0($sp)
    ctx->pc = 0x12bff4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x12bff8: 0xdfb702a0  ld          $s7, 0x2A0($sp)
    ctx->pc = 0x12bff8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x12bffc: 0xdfb60290  ld          $s6, 0x290($sp)
    ctx->pc = 0x12bffcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x12c000: 0xdfb50280  ld          $s5, 0x280($sp)
    ctx->pc = 0x12c000u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x12c004: 0xdfb40270  ld          $s4, 0x270($sp)
    ctx->pc = 0x12c004u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x12c008: 0xdfb30260  ld          $s3, 0x260($sp)
    ctx->pc = 0x12c008u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x12c00c: 0xdfb20250  ld          $s2, 0x250($sp)
    ctx->pc = 0x12c00cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x12c010: 0xdfb10240  ld          $s1, 0x240($sp)
    ctx->pc = 0x12c010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x12c014: 0xdfb00230  ld          $s0, 0x230($sp)
    ctx->pc = 0x12c014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x12c018: 0x3e00008  jr          $ra
    ctx->pc = 0x12C018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C018u;
            // 0x12c01c: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C020u;
}
