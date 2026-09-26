#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditGotoInterior__Fii
// Address: 0x1afbd0 - 0x1afd0c
void EditGotoInterior__Fii_0x1afbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditGotoInterior__Fii_0x1afbd0");
#endif

    switch (ctx->pc) {
        case 0x1afbecu: goto label_1afbec;
        case 0x1afbf4u: goto label_1afbf4;
        case 0x1afbfcu: goto label_1afbfc;
        case 0x1afc04u: goto label_1afc04;
        case 0x1afc14u: goto label_1afc14;
        case 0x1afc24u: goto label_1afc24;
        case 0x1afc2cu: goto label_1afc2c;
        case 0x1afc40u: goto label_1afc40;
        case 0x1afc54u: goto label_1afc54;
        case 0x1afc60u: goto label_1afc60;
        case 0x1afc6cu: goto label_1afc6c;
        case 0x1afc7cu: goto label_1afc7c;
        case 0x1afc9cu: goto label_1afc9c;
        case 0x1afca4u: goto label_1afca4;
        case 0x1afcb4u: goto label_1afcb4;
        case 0x1afcbcu: goto label_1afcbc;
        case 0x1afcc4u: goto label_1afcc4;
        case 0x1afce0u: goto label_1afce0;
        case 0x1afcecu: goto label_1afcec;
        case 0x1afcf4u: goto label_1afcf4;
        default: break;
    }

    ctx->pc = 0x1afbd0u;

    // 0x1afbd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1afbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1afbd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1afbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1afbd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1afbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1afbdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1afbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1afbe0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1afbe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afbe4: 0xc06b7f0  jal         func_1ADFC0
    ctx->pc = 0x1AFBE4u;
    SET_GPR_U32(ctx, 31, 0x1AFBECu);
    ctx->pc = 0x1AFBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFBE4u;
            // 0x1afbe8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ADFC0u;
    if (runtime->hasFunction(0x1ADFC0u)) {
        auto targetFn = runtime->lookupFunction(0x1ADFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFBECu; }
        if (ctx->pc != 0x1AFBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEditEvent__Fv_0x1adfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFBECu; }
        if (ctx->pc != 0x1AFBECu) { return; }
    }
    ctx->pc = 0x1AFBECu;
label_1afbec:
    // 0x1afbec: 0xc052658  jal         func_149960
    ctx->pc = 0x1AFBECu;
    SET_GPR_U32(ctx, 31, 0x1AFBF4u);
    ctx->pc = 0x149960u;
    if (runtime->hasFunction(0x149960u)) {
        auto targetFn = runtime->lookupFunction(0x149960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFBF4u; }
        if (ctx->pc != 0x1AFBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteFileCache__Fv_0x149960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFBF4u; }
        if (ctx->pc != 0x1AFBF4u) { return; }
    }
    ctx->pc = 0x1AFBF4u;
label_1afbf4:
    // 0x1afbf4: 0xc06bf8c  jal         func_1AFE30
    ctx->pc = 0x1AFBF4u;
    SET_GPR_U32(ctx, 31, 0x1AFBFCu);
    ctx->pc = 0x1AFE30u;
    if (runtime->hasFunction(0x1AFE30u)) {
        auto targetFn = runtime->lookupFunction(0x1AFE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFBFCu; }
        if (ctx->pc != 0x1AFBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditDataSave__Fv_0x1afe30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFBFCu; }
        if (ctx->pc != 0x1AFBFCu) { return; }
    }
    ctx->pc = 0x1AFBFCu;
label_1afbfc:
    // 0x1afbfc: 0xc0a9fc0  jal         func_2A7F00
    ctx->pc = 0x1AFBFCu;
    SET_GPR_U32(ctx, 31, 0x1AFC04u);
    ctx->pc = 0x1AFC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFBFCu;
            // 0x1afc00: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7F00u;
    if (runtime->hasFunction(0x2A7F00u)) {
        auto targetFn = runtime->lookupFunction(0x2A7F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC04u; }
        if (ctx->pc != 0x1AFC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopSeSrc__6CSceneFv_0x2a7f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC04u; }
        if (ctx->pc != 0x1AFC04u) { return; }
    }
    ctx->pc = 0x1AFC04u;
label_1afc04:
    // 0x1afc04: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AFC04u;
    {
        const bool branch_taken_0x1afc04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFC04u;
            // 0x1afc08: 0xaf808d14  sw          $zero, -0x72EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937876), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc04) {
            ctx->pc = 0x1AFC1Cu;
            goto label_1afc1c;
        }
    }
    ctx->pc = 0x1AFC0Cu;
    // 0x1afc0c: 0xc0b25c4  jal         func_2C9710
    ctx->pc = 0x1AFC0Cu;
    SET_GPR_U32(ctx, 31, 0x1AFC14u);
    ctx->pc = 0x1AFC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFC0Cu;
            // 0x1afc10: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9710u;
    if (runtime->hasFunction(0x2C9710u)) {
        auto targetFn = runtime->lookupFunction(0x2C9710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC14u; }
        if (ctx->pc != 0x1AFC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteVillager__6CSceneFv_0x2c9710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC14u; }
        if (ctx->pc != 0x1AFC14u) { return; }
    }
    ctx->pc = 0x1AFC14u;
label_1afc14:
    // 0x1afc14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1afc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afc18: 0xaf828d14  sw          $v0, -0x72EC($gp)
    ctx->pc = 0x1afc18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937876), GPR_U32(ctx, 2));
label_1afc1c:
    // 0x1afc1c: 0xc0b2598  jal         func_2C9660
    ctx->pc = 0x1AFC1Cu;
    SET_GPR_U32(ctx, 31, 0x1AFC24u);
    ctx->pc = 0x1AFC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFC1Cu;
            // 0x1afc20: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9660u;
    if (runtime->hasFunction(0x2C9660u)) {
        auto targetFn = runtime->lookupFunction(0x2C9660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC24u; }
        if (ctx->pc != 0x1AFC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSubVillager__6CSceneFv_0x2c9660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC24u; }
        if (ctx->pc != 0x1AFC24u) { return; }
    }
    ctx->pc = 0x1AFC24u;
label_1afc24:
    // 0x1afc24: 0xc0b7d7c  jal         func_2DF5F0
    ctx->pc = 0x1AFC24u;
    SET_GPR_U32(ctx, 31, 0x1AFC2Cu);
    ctx->pc = 0x2DF5F0u;
    if (runtime->hasFunction(0x2DF5F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC2Cu; }
        if (ctx->pc != 0x1AFC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InInterior__Fv_0x2df5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC2Cu; }
        if (ctx->pc != 0x1AFC2Cu) { return; }
    }
    ctx->pc = 0x1AFC2Cu;
label_1afc2c:
    // 0x1afc2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFC2Cu;
    {
        const bool branch_taken_0x1afc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afc2c) {
            ctx->pc = 0x1AFC48u;
            goto label_1afc48;
        }
    }
    ctx->pc = 0x1AFC34u;
    // 0x1afc34: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1afc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1afc38: 0xc0b7f3c  jal         func_2DFCF0
    ctx->pc = 0x1AFC38u;
    SET_GPR_U32(ctx, 31, 0x1AFC40u);
    ctx->pc = 0x1AFC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFC38u;
            // 0x1afc3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFCF0u;
    if (runtime->hasFunction(0x2DFCF0u)) {
        auto targetFn = runtime->lookupFunction(0x2DFCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC40u; }
        if (ctx->pc != 0x1AFC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InteriorMapJump__FP6CScenei_0x2dfcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC40u; }
        if (ctx->pc != 0x1AFC40u) { return; }
    }
    ctx->pc = 0x1AFC40u;
label_1afc40:
    // 0x1afc40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AFC40u;
    {
        const bool branch_taken_0x1afc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFC40u;
            // 0x1afc44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc40) {
            ctx->pc = 0x1AFC58u;
            goto label_1afc58;
        }
    }
    ctx->pc = 0x1AFC48u;
label_1afc48:
    // 0x1afc48: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1afc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1afc4c: 0xc0b7e34  jal         func_2DF8D0
    ctx->pc = 0x1AFC4Cu;
    SET_GPR_U32(ctx, 31, 0x1AFC54u);
    ctx->pc = 0x1AFC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFC4Cu;
            // 0x1afc50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF8D0u;
    if (runtime->hasFunction(0x2DF8D0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC54u; }
        if (ctx->pc != 0x1AFC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GotoInterior__FP6CScenei_0x2df8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC54u; }
        if (ctx->pc != 0x1AFC54u) { return; }
    }
    ctx->pc = 0x1AFC54u;
label_1afc54:
    // 0x1afc54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1afc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1afc58:
    // 0x1afc58: 0xc06bce8  jal         func_1AF3A0
    ctx->pc = 0x1AFC58u;
    SET_GPR_U32(ctx, 31, 0x1AFC60u);
    ctx->pc = 0x1AF3A0u;
    if (runtime->hasFunction(0x1AF3A0u)) {
        auto targetFn = runtime->lookupFunction(0x1AF3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC60u; }
        if (ctx->pc != 0x1AFC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        editLoadSound__Fi_0x1af3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC60u; }
        if (ctx->pc != 0x1AFC60u) { return; }
    }
    ctx->pc = 0x1AFC60u;
label_1afc60:
    // 0x1afc60: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1afc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1afc64: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x1AFC64u;
    SET_GPR_U32(ctx, 31, 0x1AFC6Cu);
    ctx->pc = 0x1AFC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFC64u;
            // 0x1afc68: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC6Cu; }
        if (ctx->pc != 0x1AFC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC6Cu; }
        if (ctx->pc != 0x1AFC6Cu) { return; }
    }
    ctx->pc = 0x1AFC6Cu;
label_1afc6c:
    // 0x1afc6c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1afc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1afc70: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x1afc70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
    // 0x1afc74: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x1AFC74u;
    SET_GPR_U32(ctx, 31, 0x1AFC7Cu);
    ctx->pc = 0x1AFC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFC74u;
            // 0x1afc78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC7Cu; }
        if (ctx->pc != 0x1AFC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC7Cu; }
        if (ctx->pc != 0x1AFC7Cu) { return; }
    }
    ctx->pc = 0x1AFC7Cu;
label_1afc7c:
    // 0x1afc7c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AFC7Cu;
    {
        const bool branch_taken_0x1afc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afc7c) {
            ctx->pc = 0x1AFCA4u;
            goto label_1afca4;
        }
    }
    ctx->pc = 0x1AFC84u;
    // 0x1afc84: 0x8f858c54  lw          $a1, -0x73AC($gp)
    ctx->pc = 0x1afc84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
    // 0x1afc88: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFC88u;
    {
        const bool branch_taken_0x1afc88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFC88u;
            // 0x1afc8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc88) {
            ctx->pc = 0x1AFCA4u;
            goto label_1afca4;
        }
    }
    ctx->pc = 0x1AFC90u;
    // 0x1afc90: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1afc90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afc94: 0xc0580b0  jal         func_1602C0
    ctx->pc = 0x1AFC94u;
    SET_GPR_U32(ctx, 31, 0x1AFC9Cu);
    ctx->pc = 0x1AFC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFC94u;
            // 0x1afc98: 0x240600ac  addiu       $a2, $zero, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1602C0u;
    if (runtime->hasFunction(0x1602C0u)) {
        auto targetFn = runtime->lookupFunction(0x1602C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC9Cu; }
        if (ctx->pc != 0x1AFC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateTrBox__4CMapFP15CMapTreasureBoxiP9mgCMemory_0x1602c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC9Cu; }
        if (ctx->pc != 0x1AFC9Cu) { return; }
    }
    ctx->pc = 0x1AFC9Cu;
label_1afc9c:
    // 0x1afc9c: 0xc06bc50  jal         func_1AF140
    ctx->pc = 0x1AFC9Cu;
    SET_GPR_U32(ctx, 31, 0x1AFCA4u);
    ctx->pc = 0x1AFCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFC9Cu;
            // 0x1afca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF140u;
    if (runtime->hasFunction(0x1AF140u)) {
        auto targetFn = runtime->lookupFunction(0x1AF140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCA4u; }
        if (ctx->pc != 0x1AFCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateTrBoxFlag__Fi_0x1af140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCA4u; }
        if (ctx->pc != 0x1AFCA4u) { return; }
    }
    ctx->pc = 0x1AFCA4u;
label_1afca4:
    // 0x1afca4: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1afca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1afca8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1afca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afcac: 0xc0b2824  jal         func_2CA090
    ctx->pc = 0x1AFCACu;
    SET_GPR_U32(ctx, 31, 0x1AFCB4u);
    ctx->pc = 0x1AFCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFCACu;
            // 0x1afcb0: 0x2406005e  addiu       $a2, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA090u;
    if (runtime->hasFunction(0x2CA090u)) {
        auto targetFn = runtime->lookupFunction(0x2CA090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCB4u; }
        if (ctx->pc != 0x1AFCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSubVillager__6CSceneFii_0x2ca090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCB4u; }
        if (ctx->pc != 0x1AFCB4u) { return; }
    }
    ctx->pc = 0x1AFCB4u;
label_1afcb4:
    // 0x1afcb4: 0xc0b2c04  jal         func_2CB010
    ctx->pc = 0x1AFCB4u;
    SET_GPR_U32(ctx, 31, 0x1AFCBCu);
    ctx->pc = 0x1AFCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFCB4u;
            // 0x1afcb8: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB010u;
    if (runtime->hasFunction(0x2CB010u)) {
        auto targetFn = runtime->lookupFunction(0x2CB010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCBCu; }
        if (ctx->pc != 0x1AFCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveVillager__6CSceneFv_0x2cb010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCBCu; }
        if (ctx->pc != 0x1AFCBCu) { return; }
    }
    ctx->pc = 0x1AFCBCu;
label_1afcbc:
    // 0x1afcbc: 0xc06905c  jal         func_1A4170
    ctx->pc = 0x1AFCBCu;
    SET_GPR_U32(ctx, 31, 0x1AFCC4u);
    ctx->pc = 0x1AFCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFCBCu;
            // 0x1afcc0: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4170u;
    if (runtime->hasFunction(0x1A4170u)) {
        auto targetFn = runtime->lookupFunction(0x1A4170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCC4u; }
        if (ctx->pc != 0x1AFCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditControlInit__FP6CScene_0x1a4170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCC4u; }
        if (ctx->pc != 0x1AFCC4u) { return; }
    }
    ctx->pc = 0x1AFCC4u;
label_1afcc4:
    // 0x1afcc4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1afcc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1afcc8: 0x8c25ef28  lw          $a1, -0x10D8($at)
    ctx->pc = 0x1afcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962984)));
    // 0x1afccc: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AFCCCu;
    {
        const bool branch_taken_0x1afccc = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1AFCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFCCCu;
            // 0x1afcd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afccc) {
            ctx->pc = 0x1AFCE4u;
            goto label_1afce4;
        }
    }
    ctx->pc = 0x1AFCD4u;
    // 0x1afcd4: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1afcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1afcd8: 0xc0aa030  jal         func_2A80C0
    ctx->pc = 0x1AFCD8u;
    SET_GPR_U32(ctx, 31, 0x1AFCE0u);
    ctx->pc = 0x1AFCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFCD8u;
            // 0x1afcdc: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A80C0u;
    if (runtime->hasFunction(0x2A80C0u)) {
        auto targetFn = runtime->lookupFunction(0x2A80C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCE0u; }
        if (ctx->pc != 0x1AFCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SePlayCloseDoor__6CSceneFiPf_0x2a80c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCE0u; }
        if (ctx->pc != 0x1AFCE0u) { return; }
    }
    ctx->pc = 0x1AFCE0u;
label_1afce0:
    // 0x1afce0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1afce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afce4:
    // 0x1afce4: 0xc050e40  jal         func_143900
    ctx->pc = 0x1AFCE4u;
    SET_GPR_U32(ctx, 31, 0x1AFCECu);
    ctx->pc = 0x143900u;
    if (runtime->hasFunction(0x143900u)) {
        auto targetFn = runtime->lookupFunction(0x143900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCECu; }
        if (ctx->pc != 0x1AFCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlightEnable__Fi_0x143900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCECu; }
        if (ctx->pc != 0x1AFCECu) { return; }
    }
    ctx->pc = 0x1AFCECu;
label_1afcec:
    // 0x1afcec: 0xc0b1e7c  jal         func_2C79F0
    ctx->pc = 0x1AFCECu;
    SET_GPR_U32(ctx, 31, 0x1AFCF4u);
    ctx->pc = 0x1AFCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFCECu;
            // 0x1afcf0: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C79F0u;
    if (runtime->hasFunction(0x2C79F0u)) {
        auto targetFn = runtime->lookupFunction(0x2C79F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCF4u; }
        if (ctx->pc != 0x1AFCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpDateMapInfo__6CSceneFv_0x2c79f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCF4u; }
        if (ctx->pc != 0x1AFCF4u) { return; }
    }
    ctx->pc = 0x1AFCF4u;
label_1afcf4:
    // 0x1afcf4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1afcf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afcf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1afcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afcfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1afcfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afd00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1afd00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afd04: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFD04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD04u;
            // 0x1afd08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFD0Cu;
}
