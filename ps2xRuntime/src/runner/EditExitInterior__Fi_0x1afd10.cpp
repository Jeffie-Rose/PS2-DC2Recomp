#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditExitInterior__Fi
// Address: 0x1afd10 - 0x1afe30
void EditExitInterior__Fi_0x1afd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditExitInterior__Fi_0x1afd10");
#endif

    switch (ctx->pc) {
        case 0x1afd20u: goto label_1afd20;
        case 0x1afd28u: goto label_1afd28;
        case 0x1afd30u: goto label_1afd30;
        case 0x1afd38u: goto label_1afd38;
        case 0x1afd40u: goto label_1afd40;
        case 0x1afd60u: goto label_1afd60;
        case 0x1afd68u: goto label_1afd68;
        case 0x1afd70u: goto label_1afd70;
        case 0x1afd80u: goto label_1afd80;
        case 0x1afd94u: goto label_1afd94;
        case 0x1afda0u: goto label_1afda0;
        case 0x1afdacu: goto label_1afdac;
        case 0x1afdb4u: goto label_1afdb4;
        case 0x1afdc4u: goto label_1afdc4;
        case 0x1afdccu: goto label_1afdcc;
        case 0x1afdd4u: goto label_1afdd4;
        case 0x1afdf0u: goto label_1afdf0;
        case 0x1afdf8u: goto label_1afdf8;
        case 0x1afe00u: goto label_1afe00;
        case 0x1afe10u: goto label_1afe10;
        case 0x1afe18u: goto label_1afe18;
        case 0x1afe20u: goto label_1afe20;
        default: break;
    }

    ctx->pc = 0x1afd10u;

    // 0x1afd10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1afd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1afd14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1afd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1afd18: 0xc06b7f0  jal         func_1ADFC0
    ctx->pc = 0x1AFD18u;
    SET_GPR_U32(ctx, 31, 0x1AFD20u);
    ctx->pc = 0x1ADFC0u;
    if (runtime->hasFunction(0x1ADFC0u)) {
        auto targetFn = runtime->lookupFunction(0x1ADFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD20u; }
        if (ctx->pc != 0x1AFD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEditEvent__Fv_0x1adfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD20u; }
        if (ctx->pc != 0x1AFD20u) { return; }
    }
    ctx->pc = 0x1AFD20u;
label_1afd20:
    // 0x1afd20: 0xc052658  jal         func_149960
    ctx->pc = 0x1AFD20u;
    SET_GPR_U32(ctx, 31, 0x1AFD28u);
    ctx->pc = 0x149960u;
    if (runtime->hasFunction(0x149960u)) {
        auto targetFn = runtime->lookupFunction(0x149960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD28u; }
        if (ctx->pc != 0x1AFD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteFileCache__Fv_0x149960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD28u; }
        if (ctx->pc != 0x1AFD28u) { return; }
    }
    ctx->pc = 0x1AFD28u;
label_1afd28:
    // 0x1afd28: 0xc0a9fc0  jal         func_2A7F00
    ctx->pc = 0x1AFD28u;
    SET_GPR_U32(ctx, 31, 0x1AFD30u);
    ctx->pc = 0x1AFD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD28u;
            // 0x1afd2c: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7F00u;
    if (runtime->hasFunction(0x2A7F00u)) {
        auto targetFn = runtime->lookupFunction(0x2A7F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD30u; }
        if (ctx->pc != 0x1AFD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopSeSrc__6CSceneFv_0x2a7f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD30u; }
        if (ctx->pc != 0x1AFD30u) { return; }
    }
    ctx->pc = 0x1AFD30u;
label_1afd30:
    // 0x1afd30: 0xc0b2598  jal         func_2C9660
    ctx->pc = 0x1AFD30u;
    SET_GPR_U32(ctx, 31, 0x1AFD38u);
    ctx->pc = 0x1AFD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD30u;
            // 0x1afd34: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9660u;
    if (runtime->hasFunction(0x2C9660u)) {
        auto targetFn = runtime->lookupFunction(0x2C9660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD38u; }
        if (ctx->pc != 0x1AFD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSubVillager__6CSceneFv_0x2c9660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD38u; }
        if (ctx->pc != 0x1AFD38u) { return; }
    }
    ctx->pc = 0x1AFD38u;
label_1afd38:
    // 0x1afd38: 0xc0b260c  jal         func_2C9830
    ctx->pc = 0x1AFD38u;
    SET_GPR_U32(ctx, 31, 0x1AFD40u);
    ctx->pc = 0x1AFD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD38u;
            // 0x1afd3c: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9830u;
    if (runtime->hasFunction(0x2C9830u)) {
        auto targetFn = runtime->lookupFunction(0x2C9830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD40u; }
        if (ctx->pc != 0x1AFD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowVillagerTime__6CSceneFv_0x2c9830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD40u; }
        if (ctx->pc != 0x1AFD40u) { return; }
    }
    ctx->pc = 0x1AFD40u;
label_1afd40:
    // 0x1afd40: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1afd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1afd44: 0x8f838d14  lw          $v1, -0x72EC($gp)
    ctx->pc = 0x1afd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937876)));
    // 0x1afd48: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFD48u;
    {
        const bool branch_taken_0x1afd48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD48u;
            // 0x1afd4c: 0x8c853e60  lw          $a1, 0x3E60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afd48) {
            ctx->pc = 0x1AFD58u;
            goto label_1afd58;
        }
    }
    ctx->pc = 0x1AFD50u;
    // 0x1afd50: 0x1045000b  beq         $v0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1AFD50u;
    {
        const bool branch_taken_0x1afd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1afd50) {
            ctx->pc = 0x1AFD80u;
            goto label_1afd80;
        }
    }
    ctx->pc = 0x1AFD58u;
label_1afd58:
    // 0x1afd58: 0xc0b7e8c  jal         func_2DFA30
    ctx->pc = 0x1AFD58u;
    SET_GPR_U32(ctx, 31, 0x1AFD60u);
    ctx->pc = 0x2DFA30u;
    if (runtime->hasFunction(0x2DFA30u)) {
        auto targetFn = runtime->lookupFunction(0x2DFA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD60u; }
        if (ctx->pc != 0x1AFD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteInterior__FP6CScene_0x2dfa30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD60u; }
        if (ctx->pc != 0x1AFD60u) { return; }
    }
    ctx->pc = 0x1AFD60u;
label_1afd60:
    // 0x1afd60: 0xc0b25c4  jal         func_2C9710
    ctx->pc = 0x1AFD60u;
    SET_GPR_U32(ctx, 31, 0x1AFD68u);
    ctx->pc = 0x1AFD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD60u;
            // 0x1afd64: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9710u;
    if (runtime->hasFunction(0x2C9710u)) {
        auto targetFn = runtime->lookupFunction(0x2C9710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD68u; }
        if (ctx->pc != 0x1AFD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteVillager__6CSceneFv_0x2c9710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD68u; }
        if (ctx->pc != 0x1AFD68u) { return; }
    }
    ctx->pc = 0x1AFD68u;
label_1afd68:
    // 0x1afd68: 0xc0b7b04  jal         func_2DEC10
    ctx->pc = 0x1AFD68u;
    SET_GPR_U32(ctx, 31, 0x1AFD70u);
    ctx->pc = 0x2DEC10u;
    if (runtime->hasFunction(0x2DEC10u)) {
        auto targetFn = runtime->lookupFunction(0x2DEC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD70u; }
        if (ctx->pc != 0x1AFD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainMapNo__Fv_0x2dec10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD70u; }
        if (ctx->pc != 0x1AFD70u) { return; }
    }
    ctx->pc = 0x1AFD70u;
label_1afd70:
    // 0x1afd70: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1afd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1afd74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1afd74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd78: 0xc0b2750  jal         func_2C9D40
    ctx->pc = 0x1AFD78u;
    SET_GPR_U32(ctx, 31, 0x1AFD80u);
    ctx->pc = 0x1AFD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD78u;
            // 0x1afd7c: 0x2406004e  addiu       $a2, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9D40u;
    if (runtime->hasFunction(0x2C9D40u)) {
        auto targetFn = runtime->lookupFunction(0x2C9D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD80u; }
        if (ctx->pc != 0x1AFD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadVillager__6CSceneFii_0x2c9d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD80u; }
        if (ctx->pc != 0x1AFD80u) { return; }
    }
    ctx->pc = 0x1AFD80u;
label_1afd80:
    // 0x1afd80: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1afd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1afd84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1afd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1afd88: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1afd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1afd8c: 0xc0b7ea8  jal         func_2DFAA0
    ctx->pc = 0x1AFD8Cu;
    SET_GPR_U32(ctx, 31, 0x1AFD94u);
    ctx->pc = 0x1AFD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD8Cu;
            // 0x1afd90: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFAA0u;
    if (runtime->hasFunction(0x2DFAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2DFAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD94u; }
        if (ctx->pc != 0x1AFD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExitInterior__FP6CScenePi_0x2dfaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD94u; }
        if (ctx->pc != 0x1AFD94u) { return; }
    }
    ctx->pc = 0x1AFD94u;
label_1afd94:
    // 0x1afd94: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1afd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1afd98: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x1AFD98u;
    SET_GPR_U32(ctx, 31, 0x1AFDA0u);
    ctx->pc = 0x1AFD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD98u;
            // 0x1afd9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFDA0u; }
        if (ctx->pc != 0x1AFDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFDA0u; }
        if (ctx->pc != 0x1AFDA0u) { return; }
    }
    ctx->pc = 0x1AFDA0u;
label_1afda0:
    // 0x1afda0: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1afda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1afda4: 0xc0c638c  jal         func_318E30
    ctx->pc = 0x1AFDA4u;
    SET_GPR_U32(ctx, 31, 0x1AFDACu);
    ctx->pc = 0x1AFDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFDA4u;
            // 0x1afda8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318E30u;
    if (runtime->hasFunction(0x318E30u)) {
        auto targetFn = runtime->lookupFunction(0x318E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFDACu; }
        if (ctx->pc != 0x1AFDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditMapInitEvent__FiP8CEditMap_0x318e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFDACu; }
        if (ctx->pc != 0x1AFDACu) { return; }
    }
    ctx->pc = 0x1AFDACu;
label_1afdac:
    // 0x1afdac: 0xc0b7b08  jal         func_2DEC20
    ctx->pc = 0x1AFDACu;
    SET_GPR_U32(ctx, 31, 0x1AFDB4u);
    ctx->pc = 0x2DEC20u;
    if (runtime->hasFunction(0x2DEC20u)) {
        auto targetFn = runtime->lookupFunction(0x2DEC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFDB4u; }
        if (ctx->pc != 0x1AFDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSubMapNo__Fv_0x2dec20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFDB4u; }
        if (ctx->pc != 0x1AFDB4u) { return; }
    }
    ctx->pc = 0x1AFDB4u;
label_1afdb4:
    // 0x1afdb4: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1afdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1afdb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1afdb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afdbc: 0xc0b2824  jal         func_2CA090
    ctx->pc = 0x1AFDBCu;
    SET_GPR_U32(ctx, 31, 0x1AFDC4u);
    ctx->pc = 0x1AFDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFDBCu;
            // 0x1afdc0: 0x2406005e  addiu       $a2, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA090u;
    if (runtime->hasFunction(0x2CA090u)) {
        auto targetFn = runtime->lookupFunction(0x2CA090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFDC4u; }
        if (ctx->pc != 0x1AFDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSubVillager__6CSceneFii_0x2ca090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFDC4u; }
        if (ctx->pc != 0x1AFDC4u) { return; }
    }
    ctx->pc = 0x1AFDC4u;
label_1afdc4:
    // 0x1afdc4: 0xc0b2c04  jal         func_2CB010
    ctx->pc = 0x1AFDC4u;
    SET_GPR_U32(ctx, 31, 0x1AFDCCu);
    ctx->pc = 0x1AFDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFDC4u;
            // 0x1afdc8: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB010u;
    if (runtime->hasFunction(0x2CB010u)) {
        auto targetFn = runtime->lookupFunction(0x2CB010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFDCCu; }
        if (ctx->pc != 0x1AFDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveVillager__6CSceneFv_0x2cb010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFDCCu; }
        if (ctx->pc != 0x1AFDCCu) { return; }
    }
    ctx->pc = 0x1AFDCCu;
label_1afdcc:
    // 0x1afdcc: 0xc06905c  jal         func_1A4170
    ctx->pc = 0x1AFDCCu;
    SET_GPR_U32(ctx, 31, 0x1AFDD4u);
    ctx->pc = 0x1AFDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFDCCu;
            // 0x1afdd0: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4170u;
    if (runtime->hasFunction(0x1A4170u)) {
        auto targetFn = runtime->lookupFunction(0x1A4170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFDD4u; }
        if (ctx->pc != 0x1AFDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditControlInit__FP6CScene_0x1a4170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFDD4u; }
        if (ctx->pc != 0x1AFDD4u) { return; }
    }
    ctx->pc = 0x1AFDD4u;
label_1afdd4:
    // 0x1afdd4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1afdd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1afdd8: 0x8c25ef28  lw          $a1, -0x10D8($at)
    ctx->pc = 0x1afdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962984)));
    // 0x1afddc: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFDDCu;
    {
        const bool branch_taken_0x1afddc = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1afddc) {
            ctx->pc = 0x1AFDF0u;
            goto label_1afdf0;
        }
    }
    ctx->pc = 0x1AFDE4u;
    // 0x1afde4: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1afde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1afde8: 0xc0aa030  jal         func_2A80C0
    ctx->pc = 0x1AFDE8u;
    SET_GPR_U32(ctx, 31, 0x1AFDF0u);
    ctx->pc = 0x1AFDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFDE8u;
            // 0x1afdec: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A80C0u;
    if (runtime->hasFunction(0x2A80C0u)) {
        auto targetFn = runtime->lookupFunction(0x2A80C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFDF0u; }
        if (ctx->pc != 0x1AFDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SePlayCloseDoor__6CSceneFiPf_0x2a80c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFDF0u; }
        if (ctx->pc != 0x1AFDF0u) { return; }
    }
    ctx->pc = 0x1AFDF0u;
label_1afdf0:
    // 0x1afdf0: 0xc0b7b04  jal         func_2DEC10
    ctx->pc = 0x1AFDF0u;
    SET_GPR_U32(ctx, 31, 0x1AFDF8u);
    ctx->pc = 0x2DEC10u;
    if (runtime->hasFunction(0x2DEC10u)) {
        auto targetFn = runtime->lookupFunction(0x2DEC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFDF8u; }
        if (ctx->pc != 0x1AFDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainMapNo__Fv_0x2dec10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFDF8u; }
        if (ctx->pc != 0x1AFDF8u) { return; }
    }
    ctx->pc = 0x1AFDF8u;
label_1afdf8:
    // 0x1afdf8: 0xc0b49dc  jal         func_2D2770
    ctx->pc = 0x1AFDF8u;
    SET_GPR_U32(ctx, 31, 0x1AFE00u);
    ctx->pc = 0x1AFDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFDF8u;
            // 0x1afdfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2770u;
    if (runtime->hasFunction(0x2D2770u)) {
        auto targetFn = runtime->lookupFunction(0x2D2770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE00u; }
        if (ctx->pc != 0x1AFE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapSndDataID__Fi_0x2d2770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE00u; }
        if (ctx->pc != 0x1AFE00u) { return; }
    }
    ctx->pc = 0x1AFE00u;
label_1afe00:
    // 0x1afe00: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1afe00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1afe04: 0x8f868ac0  lw          $a2, -0x7540($gp)
    ctx->pc = 0x1afe04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x1afe08: 0xc0a9b5c  jal         func_2A6D70
    ctx->pc = 0x1AFE08u;
    SET_GPR_U32(ctx, 31, 0x1AFE10u);
    ctx->pc = 0x1AFE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE08u;
            // 0x1afe0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6D70u;
    if (runtime->hasFunction(0x2A6D70u)) {
        auto targetFn = runtime->lookupFunction(0x2A6D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE10u; }
        if (ctx->pc != 0x1AFE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSound__6CSceneFiP1_0x2a6d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE10u; }
        if (ctx->pc != 0x1AFE10u) { return; }
    }
    ctx->pc = 0x1AFE10u;
label_1afe10:
    // 0x1afe10: 0xc050e40  jal         func_143900
    ctx->pc = 0x1AFE10u;
    SET_GPR_U32(ctx, 31, 0x1AFE18u);
    ctx->pc = 0x1AFE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE10u;
            // 0x1afe14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143900u;
    if (runtime->hasFunction(0x143900u)) {
        auto targetFn = runtime->lookupFunction(0x143900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE18u; }
        if (ctx->pc != 0x1AFE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlightEnable__Fi_0x143900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE18u; }
        if (ctx->pc != 0x1AFE18u) { return; }
    }
    ctx->pc = 0x1AFE18u;
label_1afe18:
    // 0x1afe18: 0xc0b1e7c  jal         func_2C79F0
    ctx->pc = 0x1AFE18u;
    SET_GPR_U32(ctx, 31, 0x1AFE20u);
    ctx->pc = 0x1AFE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE18u;
            // 0x1afe1c: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C79F0u;
    if (runtime->hasFunction(0x2C79F0u)) {
        auto targetFn = runtime->lookupFunction(0x2C79F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE20u; }
        if (ctx->pc != 0x1AFE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpDateMapInfo__6CSceneFv_0x2c79f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE20u; }
        if (ctx->pc != 0x1AFE20u) { return; }
    }
    ctx->pc = 0x1AFE20u;
label_1afe20:
    // 0x1afe20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1afe20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afe24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1afe24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afe28: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFE28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE28u;
            // 0x1afe2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFE30u;
}
