#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LanguageChange__FiP1
// Address: 0x190c00 - 0x190cac
void LanguageChange__FiP1_0x190c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LanguageChange__FiP1_0x190c00");
#endif

    switch (ctx->pc) {
        case 0x190c1cu: goto label_190c1c;
        case 0x190c28u: goto label_190c28;
        case 0x190c30u: goto label_190c30;
        case 0x190c38u: goto label_190c38;
        case 0x190c40u: goto label_190c40;
        case 0x190c48u: goto label_190c48;
        case 0x190c50u: goto label_190c50;
        case 0x190c58u: goto label_190c58;
        case 0x190c60u: goto label_190c60;
        case 0x190c6cu: goto label_190c6c;
        case 0x190c74u: goto label_190c74;
        case 0x190c7cu: goto label_190c7c;
        case 0x190c98u: goto label_190c98;
        case 0x190ca0u: goto label_190ca0;
        default: break;
    }

    ctx->pc = 0x190c00u;

    // 0x190c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190c04: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x190c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190c0c: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x190c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x190c10: 0xaf858ad0  sw          $a1, -0x7530($gp)
    ctx->pc = 0x190c10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937296), GPR_U32(ctx, 5));
    // 0x190c14: 0xc06558c  jal         func_195630
    ctx->pc = 0x190C14u;
    SET_GPR_U32(ctx, 31, 0x190C1Cu);
    ctx->pc = 0x190C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190C14u;
            // 0x190c18: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195630u;
    if (runtime->hasFunction(0x195630u)) {
        auto targetFn = runtime->lookupFunction(0x195630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C1Cu; }
        if (ctx->pc != 0x190C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadItemSystemMes__9CGameDataFi_0x195630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C1Cu; }
        if (ctx->pc != 0x190C1Cu) { return; }
    }
    ctx->pc = 0x190C1Cu;
label_190c1c:
    // 0x190c1c: 0x8f858ac0  lw          $a1, -0x7540($gp)
    ctx->pc = 0x190c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x190c20: 0xc0b4940  jal         func_2D2500
    ctx->pc = 0x190C20u;
    SET_GPR_U32(ctx, 31, 0x190C28u);
    ctx->pc = 0x190C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190C20u;
            // 0x190c24: 0x8f848ad0  lw          $a0, -0x7530($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2500u;
    if (runtime->hasFunction(0x2D2500u)) {
        auto targetFn = runtime->lookupFunction(0x2D2500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C28u; }
        if (ctx->pc != 0x190C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMapName__FiP1_0x2d2500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C28u; }
        if (ctx->pc != 0x190C28u) { return; }
    }
    ctx->pc = 0x190C28u;
label_190c28:
    // 0x190c28: 0xc067b70  jal         func_19EDC0
    ctx->pc = 0x190C28u;
    SET_GPR_U32(ctx, 31, 0x190C30u);
    ctx->pc = 0x19EDC0u;
    if (runtime->hasFunction(0x19EDC0u)) {
        auto targetFn = runtime->lookupFunction(0x19EDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C30u; }
        if (ctx->pc != 0x190C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LanguageEquipChange__Fv_0x19edc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C30u; }
        if (ctx->pc != 0x190C30u) { return; }
    }
    ctx->pc = 0x190C30u;
label_190c30:
    // 0x190c30: 0xc0aac94  jal         func_2AB250
    ctx->pc = 0x190C30u;
    SET_GPR_U32(ctx, 31, 0x190C38u);
    ctx->pc = 0x2AB250u;
    if (runtime->hasFunction(0x2AB250u)) {
        auto targetFn = runtime->lookupFunction(0x2AB250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C38u; }
        if (ctx->pc != 0x190C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadNPCCfg__Fv_0x2ab250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C38u; }
        if (ctx->pc != 0x190C38u) { return; }
    }
    ctx->pc = 0x190C38u;
label_190c38:
    // 0x190c38: 0xc0659f0  jal         func_1967C0
    ctx->pc = 0x190C38u;
    SET_GPR_U32(ctx, 31, 0x190C40u);
    ctx->pc = 0x1967C0u;
    if (runtime->hasFunction(0x1967C0u)) {
        auto targetFn = runtime->lookupFunction(0x1967C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C40u; }
        if (ctx->pc != 0x190C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSystemMes__Fv_0x1967c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C40u; }
        if (ctx->pc != 0x190C40u) { return; }
    }
    ctx->pc = 0x190C40u;
label_190c40:
    // 0x190c40: 0xc0b61dc  jal         func_2D8770
    ctx->pc = 0x190C40u;
    SET_GPR_U32(ctx, 31, 0x190C48u);
    ctx->pc = 0x2D8770u;
    if (runtime->hasFunction(0x2D8770u)) {
        auto targetFn = runtime->lookupFunction(0x2D8770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C48u; }
        if (ctx->pc != 0x190C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFontTex2Img__Fv_0x2d8770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C48u; }
        if (ctx->pc != 0x190C48u) { return; }
    }
    ctx->pc = 0x190C48u;
label_190c48:
    // 0x190c48: 0xc0b61bc  jal         func_2D86F0
    ctx->pc = 0x190C48u;
    SET_GPR_U32(ctx, 31, 0x190C50u);
    ctx->pc = 0x2D86F0u;
    if (runtime->hasFunction(0x2D86F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D86F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C50u; }
        if (ctx->pc != 0x190C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGaijiImg__Fv_0x2d86f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C50u; }
        if (ctx->pc != 0x190C50u) { return; }
    }
    ctx->pc = 0x190C50u;
label_190c50:
    // 0x190c50: 0xc064bf0  jal         func_192FC0
    ctx->pc = 0x190C50u;
    SET_GPR_U32(ctx, 31, 0x190C58u);
    ctx->pc = 0x192FC0u;
    if (runtime->hasFunction(0x192FC0u)) {
        auto targetFn = runtime->lookupFunction(0x192FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C58u; }
        if (ctx->pc != 0x190C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFontTexture__Fv_0x192fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C58u; }
        if (ctx->pc != 0x190C58u) { return; }
    }
    ctx->pc = 0x190C58u;
label_190c58:
    // 0x190c58: 0xc0b50d0  jal         func_2D4340
    ctx->pc = 0x190C58u;
    SET_GPR_U32(ctx, 31, 0x190C60u);
    ctx->pc = 0x2D4340u;
    if (runtime->hasFunction(0x2D4340u)) {
        auto targetFn = runtime->lookupFunction(0x2D4340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C60u; }
        if (ctx->pc != 0x190C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFontTblBin__Fv_0x2d4340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C60u; }
        if (ctx->pc != 0x190C60u) { return; }
    }
    ctx->pc = 0x190C60u;
label_190c60:
    // 0x190c60: 0x8f858ac0  lw          $a1, -0x7540($gp)
    ctx->pc = 0x190c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x190c64: 0xc0aa908  jal         func_2AA420
    ctx->pc = 0x190C64u;
    SET_GPR_U32(ctx, 31, 0x190C6Cu);
    ctx->pc = 0x190C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190C64u;
            // 0x190c68: 0x8f848ad0  lw          $a0, -0x7530($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA420u;
    if (runtime->hasFunction(0x2AA420u)) {
        auto targetFn = runtime->lookupFunction(0x2AA420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C6Cu; }
        if (ctx->pc != 0x190C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadEditAnalyzeData__FiP1_0x2aa420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C6Cu; }
        if (ctx->pc != 0x190C6Cu) { return; }
    }
    ctx->pc = 0x190C6Cu;
label_190c6c:
    // 0x190c6c: 0xc07fe1c  jal         func_1FF870
    ctx->pc = 0x190C6Cu;
    SET_GPR_U32(ctx, 31, 0x190C74u);
    ctx->pc = 0x1FF870u;
    if (runtime->hasFunction(0x1FF870u)) {
        auto targetFn = runtime->lookupFunction(0x1FF870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C74u; }
        if (ctx->pc != 0x190C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFilePictureName__Fv_0x1ff870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C74u; }
        if (ctx->pc != 0x190C74u) { return; }
    }
    ctx->pc = 0x190C74u;
label_190c74:
    // 0x190c74: 0xc078150  jal         func_1E0540
    ctx->pc = 0x190C74u;
    SET_GPR_U32(ctx, 31, 0x190C7Cu);
    ctx->pc = 0x190C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190C74u;
            // 0x190c78: 0x8f848ad0  lw          $a0, -0x7530($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0540u;
    if (runtime->hasFunction(0x1E0540u)) {
        auto targetFn = runtime->lookupFunction(0x1E0540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C7Cu; }
        if (ctx->pc != 0x190C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMonsterLanguage__Fi_0x1e0540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C7Cu; }
        if (ctx->pc != 0x190C7Cu) { return; }
    }
    ctx->pc = 0x190C7Cu;
label_190c7c:
    // 0x190c7c: 0x3c0101e0  lui         $at, 0x1E0
    ctx->pc = 0x190c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)480 << 16));
    // 0x190c80: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x190c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x190c84: 0xac201804  sw          $zero, 0x1804($at)
    ctx->pc = 0x190c84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6148), GPR_U32(ctx, 0));
    // 0x190c88: 0x248417e0  addiu       $a0, $a0, 0x17E0
    ctx->pc = 0x190c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6112));
    // 0x190c8c: 0x3c0101e0  lui         $at, 0x1E0
    ctx->pc = 0x190c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)480 << 16));
    // 0x190c90: 0xc0c6950  jal         func_31A540
    ctx->pc = 0x190C90u;
    SET_GPR_U32(ctx, 31, 0x190C98u);
    ctx->pc = 0x190C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190C90u;
            // 0x190c94: 0xac2017fc  sw          $zero, 0x17FC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31A540u;
    if (runtime->hasFunction(0x31A540u)) {
        auto targetFn = runtime->lookupFunction(0x31A540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C98u; }
        if (ctx->pc != 0x190C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGameInfo__FP9mgCMemory_0x31a540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C98u; }
        if (ctx->pc != 0x190C98u) { return; }
    }
    ctx->pc = 0x190C98u;
label_190c98:
    // 0x190c98: 0xc06428c  jal         func_190A30
    ctx->pc = 0x190C98u;
    SET_GPR_U32(ctx, 31, 0x190CA0u);
    ctx->pc = 0x190C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190C98u;
            // 0x190c9c: 0x8f848ad0  lw          $a0, -0x7530($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190A30u;
    if (runtime->hasFunction(0x190A30u)) {
        auto targetFn = runtime->lookupFunction(0x190A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190CA0u; }
        if (ctx->pc != 0x190CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPadTable__Fi_0x190a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190CA0u; }
        if (ctx->pc != 0x190CA0u) { return; }
    }
    ctx->pc = 0x190CA0u;
label_190ca0:
    // 0x190ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x190CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190CA4u;
            // 0x190ca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190CACu;
}
