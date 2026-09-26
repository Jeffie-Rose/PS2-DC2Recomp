#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuCostumeInit__FP9mgCMemoryPii
// Address: 0x2bdf20 - 0x2be02c
void MenuCostumeInit__FP9mgCMemoryPii_0x2bdf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuCostumeInit__FP9mgCMemoryPii_0x2bdf20");
#endif

    switch (ctx->pc) {
        case 0x2bdf54u: goto label_2bdf54;
        case 0x2bdf64u: goto label_2bdf64;
        case 0x2bdf70u: goto label_2bdf70;
        case 0x2bdf80u: goto label_2bdf80;
        case 0x2bdfccu: goto label_2bdfcc;
        case 0x2bdfe0u: goto label_2bdfe0;
        case 0x2bdff0u: goto label_2bdff0;
        case 0x2be01cu: goto label_2be01c;
        default: break;
    }

    ctx->pc = 0x2bdf20u;

    // 0x2bdf20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bdf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bdf24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bdf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bdf28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bdf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bdf2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bdf2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf30: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2bdf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2bdf34: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x2bdf34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2bdf38: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2bdf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2bdf3c: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2bdf3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2bdf40: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2bdf40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2bdf44: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2bdf44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2bdf48: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2bdf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bdf4c: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2BDF4Cu;
    SET_GPR_U32(ctx, 31, 0x2BDF54u);
    ctx->pc = 0x2BDF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDF4Cu;
            // 0x2bdf50: 0x2484cc50  addiu       $a0, $a0, -0x33B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF54u; }
        if (ctx->pc != 0x2BDF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF54u; }
        if (ctx->pc != 0x2BDF54u) { return; }
    }
    ctx->pc = 0x2BDF54u;
label_2bdf54:
    // 0x2bdf54: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2bdf54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2bdf58: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2bdf58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2bdf5c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2BDF5Cu;
    SET_GPR_U32(ctx, 31, 0x2BDF64u);
    ctx->pc = 0x2BDF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDF5Cu;
            // 0x2bdf60: 0x2484cc50  addiu       $a0, $a0, -0x33B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF64u; }
        if (ctx->pc != 0x2BDF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF64u; }
        if (ctx->pc != 0x2BDF64u) { return; }
    }
    ctx->pc = 0x2BDF64u;
label_2bdf64:
    // 0x2bdf64: 0x240402e0  addiu       $a0, $zero, 0x2E0
    ctx->pc = 0x2bdf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
    // 0x2bdf68: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2BDF68u;
    SET_GPR_U32(ctx, 31, 0x2BDF70u);
    ctx->pc = 0x2BDF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDF68u;
            // 0x2bdf6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF70u; }
        if (ctx->pc != 0x2BDF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF70u; }
        if (ctx->pc != 0x2BDF70u) { return; }
    }
    ctx->pc = 0x2BDF70u;
label_2bdf70:
    // 0x2bdf70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDF70u;
    {
        const bool branch_taken_0x2bdf70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDF70u;
            // 0x2bdf74: 0x3c032745  lui         $v1, 0x2745 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10053 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf70) {
            ctx->pc = 0x2BDF84u;
            goto label_2bdf84;
        }
    }
    ctx->pc = 0x2BDF78u;
    // 0x2bdf78: 0xc0af140  jal         func_2BC500
    ctx->pc = 0x2BDF78u;
    SET_GPR_U32(ctx, 31, 0x2BDF80u);
    ctx->pc = 0x2BDF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDF78u;
            // 0x2bdf7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC500u;
    if (runtime->hasFunction(0x2BC500u)) {
        auto targetFn = runtime->lookupFunction(0x2BC500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF80u; }
        if (ctx->pc != 0x2BDF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__15CMenuCostumeSelFv_0x2bc500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF80u; }
        if (ctx->pc != 0x2BDF80u) { return; }
    }
    ctx->pc = 0x2BDF80u;
label_2bdf80:
    // 0x2bdf80: 0x3c032745  lui         $v1, 0x2745
    ctx->pc = 0x2bdf80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10053 << 16));
label_2bdf84:
    // 0x2bdf84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2bdf84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bdf88: 0x346421cb  ori         $a0, $v1, 0x21CB
    ctx->pc = 0x2bdf88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8651);
    // 0x2bdf8c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bdf8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2bdf90: 0x8c23d648  lw          $v1, -0x29B8($at)
    ctx->pc = 0x2bdf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956616)));
    // 0x2bdf94: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x2bdf94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2bdf98: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2bdf98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2bdf9c: 0xaf829c30  sw          $v0, -0x63D0($gp)
    ctx->pc = 0x2bdf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941744), GPR_U32(ctx, 2));
    // 0x2bdfa0: 0x14660006  bne         $v1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BDFA0u;
    {
        const bool branch_taken_0x2bdfa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x2BDFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDFA0u;
            // 0x2bdfa4: 0xff849c28  sd          $a0, -0x63D8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294941736), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdfa0) {
            ctx->pc = 0x2BDFBCu;
            goto label_2bdfbc;
        }
    }
    ctx->pc = 0x2BDFA8u;
    // 0x2bdfa8: 0xac46025c  sw          $a2, 0x25C($v0)
    ctx->pc = 0x2bdfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 604), GPR_U32(ctx, 6));
    // 0x2bdfac: 0xdf839c28  ld          $v1, -0x63D8($gp)
    ctx->pc = 0x2bdfacu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294941736)));
    // 0x2bdfb0: 0xdf829988  ld          $v0, -0x6678($gp)
    ctx->pc = 0x2bdfb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294941064)));
    // 0x2bdfb4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2bdfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bdfb8: 0xff829c28  sd          $v0, -0x63D8($gp)
    ctx->pc = 0x2bdfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294941736), GPR_U64(ctx, 2));
label_2bdfbc:
    // 0x2bdfbc: 0x8f849c30  lw          $a0, -0x63D0($gp)
    ctx->pc = 0x2bdfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941744)));
    // 0x2bdfc0: 0xdf869c28  ld          $a2, -0x63D8($gp)
    ctx->pc = 0x2bdfc0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294941736)));
    // 0x2bdfc4: 0xc0af1bc  jal         func_2BC6F0
    ctx->pc = 0x2BDFC4u;
    SET_GPR_U32(ctx, 31, 0x2BDFCCu);
    ctx->pc = 0x2BDFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDFC4u;
            // 0x2bdfc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC6F0u;
    if (runtime->hasFunction(0x2BC6F0u)) {
        auto targetFn = runtime->lookupFunction(0x2BC6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDFCCu; }
        if (ctx->pc != 0x2BDFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateCostumeList__15CMenuCostumeSelFiUl_0x2bc6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDFCCu; }
        if (ctx->pc != 0x2BDFCCu) { return; }
    }
    ctx->pc = 0x2BDFCCu;
label_2bdfcc:
    // 0x2bdfcc: 0x8f849c30  lw          $a0, -0x63D0($gp)
    ctx->pc = 0x2bdfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941744)));
    // 0x2bdfd0: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2bdfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
    // 0x2bdfd4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bdfd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdfd8: 0xc0af234  jal         func_2BC8D0
    ctx->pc = 0x2BDFD8u;
    SET_GPR_U32(ctx, 31, 0x2BDFE0u);
    ctx->pc = 0x2BDFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDFD8u;
            // 0x2bdfdc: 0x24a5cc50  addiu       $a1, $a1, -0x33B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC8D0u;
    if (runtime->hasFunction(0x2BC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x2BC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDFE0u; }
        if (ctx->pc != 0x2BDFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMenuData__15CMenuCostumeSelFP9mgCMemoryPi_0x2bc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDFE0u; }
        if (ctx->pc != 0x2BDFE0u) { return; }
    }
    ctx->pc = 0x2BDFE0u;
label_2bdfe0:
    // 0x2bdfe0: 0x8f849c30  lw          $a0, -0x63D0($gp)
    ctx->pc = 0x2bdfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941744)));
    // 0x2bdfe4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bdfe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bdfe8: 0xc08e88c  jal         func_23A230
    ctx->pc = 0x2BDFE8u;
    SET_GPR_U32(ctx, 31, 0x2BDFF0u);
    ctx->pc = 0x2BDFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDFE8u;
            // 0x2bdfec: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A230u;
    if (runtime->hasFunction(0x23A230u)) {
        auto targetFn = runtime->lookupFunction(0x23A230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDFF0u; }
        if (ctx->pc != 0x2BDFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeInMenu__14CBaseMenuClassFif_0x23a230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDFF0u; }
        if (ctx->pc != 0x2BDFF0u) { return; }
    }
    ctx->pc = 0x2BDFF0u;
label_2bdff0:
    // 0x2bdff0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bdff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2bdff4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2bdff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2bdff8: 0xac20d62c  sw          $zero, -0x29D4($at)
    ctx->pc = 0x2bdff8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 0));
    // 0x2bdffc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2bdffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2be000: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2be000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2be004: 0xac20d630  sw          $zero, -0x29D0($at)
    ctx->pc = 0x2be004u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 0));
    // 0x2be008: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2be008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2be00c: 0xac20d634  sw          $zero, -0x29CC($at)
    ctx->pc = 0x2be00cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 0));
    // 0x2be010: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2be010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2be014: 0xc08d150  jal         func_234540
    ctx->pc = 0x2BE014u;
    SET_GPR_U32(ctx, 31, 0x2BE01Cu);
    ctx->pc = 0x2BE018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE014u;
            // 0x2be018: 0xac20d638  sw          $zero, -0x29C8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234540u;
    if (runtime->hasFunction(0x234540u)) {
        auto targetFn = runtime->lookupFunction(0x234540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE01Cu; }
        if (ctx->pc != 0x2BE01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCamInit__Ff_0x234540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE01Cu; }
        if (ctx->pc != 0x2BE01Cu) { return; }
    }
    ctx->pc = 0x2BE01Cu;
label_2be01c:
    // 0x2be01c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2be01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be020: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2be020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be024: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE024u;
            // 0x2be028: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BE02Cu;
}
