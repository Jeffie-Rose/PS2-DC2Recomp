#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EnterDataMenu__11CMenuInventFPUc
// Address: 0x202a70 - 0x202c20
void EnterDataMenu__11CMenuInventFPUc_0x202a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnterDataMenu__11CMenuInventFPUc_0x202a70");
#endif

    switch (ctx->pc) {
        case 0x202aa8u: goto label_202aa8;
        case 0x202accu: goto label_202acc;
        case 0x202ae0u: goto label_202ae0;
        case 0x202af8u: goto label_202af8;
        case 0x202b1cu: goto label_202b1c;
        case 0x202b24u: goto label_202b24;
        case 0x202b3cu: goto label_202b3c;
        case 0x202b4cu: goto label_202b4c;
        case 0x202b58u: goto label_202b58;
        case 0x202b68u: goto label_202b68;
        case 0x202b7cu: goto label_202b7c;
        case 0x202b90u: goto label_202b90;
        case 0x202ba0u: goto label_202ba0;
        case 0x202bb4u: goto label_202bb4;
        case 0x202bc8u: goto label_202bc8;
        case 0x202be4u: goto label_202be4;
        case 0x202bf4u: goto label_202bf4;
        case 0x202c00u: goto label_202c00;
        case 0x202c08u: goto label_202c08;
        default: break;
    }

    ctx->pc = 0x202a70u;

    // 0x202a70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x202a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x202a74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x202a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x202a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x202a7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x202a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x202a80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x202a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x202a84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x202a84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x202a88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x202a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x202a90: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x202a90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x202a94: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x202a94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x202a98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a9c: 0x24a593e8  addiu       $a1, $a1, -0x6C18
    ctx->pc = 0x202a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939624));
    // 0x202aa0: 0xc052734  jal         func_149CD0
    ctx->pc = 0x202AA0u;
    SET_GPR_U32(ctx, 31, 0x202AA8u);
    ctx->pc = 0x202AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202AA0u;
            // 0x202aa4: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202AA8u; }
        if (ctx->pc != 0x202AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202AA8u; }
        if (ctx->pc != 0x202AA8u) { return; }
    }
    ctx->pc = 0x202AA8u;
label_202aa8:
    // 0x202aa8: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x202AA8u;
    {
        const bool branch_taken_0x202aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202AA8u;
            // 0x202aac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202aa8) {
            ctx->pc = 0x202BF8u;
            goto label_202bf8;
        }
    }
    ctx->pc = 0x202AB0u;
    // 0x202ab0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x202AB0u;
    {
        const bool branch_taken_0x202ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202AB0u;
            // 0x202ab4: 0x8e460024  lw          $a2, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ab0) {
            ctx->pc = 0x202AE4u;
            goto label_202ae4;
        }
    }
    ctx->pc = 0x202AB8u;
    // 0x202ab8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x202ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ac0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x202ac0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ac4: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x202AC4u;
    SET_GPR_U32(ctx, 31, 0x202ACCu);
    ctx->pc = 0x202AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202AC4u;
            // 0x202ac8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202ACCu; }
        if (ctx->pc != 0x202ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202ACCu; }
        if (ctx->pc != 0x202ACCu) { return; }
    }
    ctx->pc = 0x202ACCu;
label_202acc:
    // 0x202acc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x202accu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x202ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ad4: 0x24a593f8  addiu       $a1, $a1, -0x6C08
    ctx->pc = 0x202ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939640));
    // 0x202ad8: 0xc04b414  jal         func_12D050
    ctx->pc = 0x202AD8u;
    SET_GPR_U32(ctx, 31, 0x202AE0u);
    ctx->pc = 0x202ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202AD8u;
            // 0x202adc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202AE0u; }
        if (ctx->pc != 0x202AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202AE0u; }
        if (ctx->pc != 0x202AE0u) { return; }
    }
    ctx->pc = 0x202AE0u;
label_202ae0:
    // 0x202ae0: 0xaf829110  sw          $v0, -0x6EF0($gp)
    ctx->pc = 0x202ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938896), GPR_U32(ctx, 2));
label_202ae4:
    // 0x202ae4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x202ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x202ae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202aec: 0x24a59400  addiu       $a1, $a1, -0x6C00
    ctx->pc = 0x202aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939648));
    // 0x202af0: 0xc052734  jal         func_149CD0
    ctx->pc = 0x202AF0u;
    SET_GPR_U32(ctx, 31, 0x202AF8u);
    ctx->pc = 0x202AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202AF0u;
            // 0x202af4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202AF8u; }
        if (ctx->pc != 0x202AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202AF8u; }
        if (ctx->pc != 0x202AF8u) { return; }
    }
    ctx->pc = 0x202AF8u;
label_202af8:
    // 0x202af8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x202AF8u;
    {
        const bool branch_taken_0x202af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202af8) {
            ctx->pc = 0x202B24u;
            goto label_202b24;
        }
    }
    ctx->pc = 0x202B00u;
    // 0x202b00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x202b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b08: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x202b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x202b0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x202b0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b10: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x202b10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x202b14: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x202B14u;
    SET_GPR_U32(ctx, 31, 0x202B1Cu);
    ctx->pc = 0x202B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202B14u;
            // 0x202b18: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B1Cu; }
        if (ctx->pc != 0x202B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B1Cu; }
        if (ctx->pc != 0x202B1Cu) { return; }
    }
    ctx->pc = 0x202B1Cu;
label_202b1c:
    // 0x202b1c: 0xc08ad38  jal         func_22B4E0
    ctx->pc = 0x202B1Cu;
    SET_GPR_U32(ctx, 31, 0x202B24u);
    ctx->pc = 0x202B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202B1Cu;
            // 0x202b20: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B4E0u;
    if (runtime->hasFunction(0x22B4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22B4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B24u; }
        if (ctx->pc != 0x202B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachCommonTexInfo__18CMenuPosDataManageFv_0x22b4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B24u; }
        if (ctx->pc != 0x202B24u) { return; }
    }
    ctx->pc = 0x202B24u;
label_202b24:
    // 0x202b24: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x202b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x202b28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b2c: 0x24a59410  addiu       $a1, $a1, -0x6BF0
    ctx->pc = 0x202b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939664));
    // 0x202b30: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x202b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x202b34: 0xc052734  jal         func_149CD0
    ctx->pc = 0x202B34u;
    SET_GPR_U32(ctx, 31, 0x202B3Cu);
    ctx->pc = 0x202B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202B34u;
            // 0x202b38: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B3Cu; }
        if (ctx->pc != 0x202B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B3Cu; }
        if (ctx->pc != 0x202B3Cu) { return; }
    }
    ctx->pc = 0x202B3Cu;
label_202b3c:
    // 0x202b3c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x202b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x202b40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x202b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b44: 0xc094f98  jal         func_253E60
    ctx->pc = 0x202B44u;
    SET_GPR_U32(ctx, 31, 0x202B4Cu);
    ctx->pc = 0x202B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202B44u;
            // 0x202b48: 0x26460398  addiu       $a2, $s2, 0x398 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x253E60u;
    if (runtime->hasFunction(0x253E60u)) {
        auto targetFn = runtime->lookupFunction(0x253E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B4Cu; }
        if (ctx->pc != 0x202B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuDataAnalyze__FPciP9mgCMemory_0x253e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B4Cu; }
        if (ctx->pc != 0x202B4Cu) { return; }
    }
    ctx->pc = 0x202B4Cu;
label_202b4c:
    // 0x202b4c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x202b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x202b50: 0xc04e780  jal         func_139E00
    ctx->pc = 0x202B50u;
    SET_GPR_U32(ctx, 31, 0x202B58u);
    ctx->pc = 0x202B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202B50u;
            // 0x202b54: 0x248496e0  addiu       $a0, $a0, -0x6920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B58u; }
        if (ctx->pc != 0x202B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B58u; }
        if (ctx->pc != 0x202B58u) { return; }
    }
    ctx->pc = 0x202B58u;
label_202b58:
    // 0x202b58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b5c: 0x264501d4  addiu       $a1, $s2, 0x1D4
    ctx->pc = 0x202b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 468));
    // 0x202b60: 0xc052734  jal         func_149CD0
    ctx->pc = 0x202B60u;
    SET_GPR_U32(ctx, 31, 0x202B68u);
    ctx->pc = 0x202B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202B60u;
            // 0x202b64: 0x264601f8  addiu       $a2, $s2, 0x1F8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B68u; }
        if (ctx->pc != 0x202B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B68u; }
        if (ctx->pc != 0x202B68u) { return; }
    }
    ctx->pc = 0x202B68u;
label_202b68:
    // 0x202b68: 0xae4201f4  sw          $v0, 0x1F4($s2)
    ctx->pc = 0x202b68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 500), GPR_U32(ctx, 2));
    // 0x202b6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b70: 0x264501fc  addiu       $a1, $s2, 0x1FC
    ctx->pc = 0x202b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 508));
    // 0x202b74: 0xc052734  jal         func_149CD0
    ctx->pc = 0x202B74u;
    SET_GPR_U32(ctx, 31, 0x202B7Cu);
    ctx->pc = 0x202B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202B74u;
            // 0x202b78: 0x26460220  addiu       $a2, $s2, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B7Cu; }
        if (ctx->pc != 0x202B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B7Cu; }
        if (ctx->pc != 0x202B7Cu) { return; }
    }
    ctx->pc = 0x202B7Cu;
label_202b7c:
    // 0x202b7c: 0xae42021c  sw          $v0, 0x21C($s2)
    ctx->pc = 0x202b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 540), GPR_U32(ctx, 2));
    // 0x202b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b84: 0x26450224  addiu       $a1, $s2, 0x224
    ctx->pc = 0x202b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 548));
    // 0x202b88: 0xc052734  jal         func_149CD0
    ctx->pc = 0x202B88u;
    SET_GPR_U32(ctx, 31, 0x202B90u);
    ctx->pc = 0x202B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202B88u;
            // 0x202b8c: 0x26460248  addiu       $a2, $s2, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B90u; }
        if (ctx->pc != 0x202B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B90u; }
        if (ctx->pc != 0x202B90u) { return; }
    }
    ctx->pc = 0x202B90u;
label_202b90:
    // 0x202b90: 0xae420244  sw          $v0, 0x244($s2)
    ctx->pc = 0x202b90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 580), GPR_U32(ctx, 2));
    // 0x202b94: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x202b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
    // 0x202b98: 0xc07faac  jal         func_1FEAB0
    ctx->pc = 0x202B98u;
    SET_GPR_U32(ctx, 31, 0x202BA0u);
    ctx->pc = 0x202B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202B98u;
            // 0x202b9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAB0u;
    if (runtime->hasFunction(0x1FEAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202BA0u; }
        if (ctx->pc != 0x202BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoInfo__15CInventUserDataFi_0x1feab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202BA0u; }
        if (ctx->pc != 0x202BA0u) { return; }
    }
    ctx->pc = 0x202BA0u;
label_202ba0:
    // 0x202ba0: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x202ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x202ba4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x202ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ba8: 0x264503c8  addiu       $a1, $s2, 0x3C8
    ctx->pc = 0x202ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 968));
    // 0x202bac: 0xc07f958  jal         func_1FE560
    ctx->pc = 0x202BACu;
    SET_GPR_U32(ctx, 31, 0x202BB4u);
    ctx->pc = 0x202BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202BACu;
            // 0x202bb0: 0x2407001e  addiu       $a3, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE560u;
    if (runtime->hasFunction(0x1FE560u)) {
        auto targetFn = runtime->lookupFunction(0x1FE560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202BB4u; }
        if (ctx->pc != 0x202BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachPictTex__FiPP10mgCTextureP17USER_PICTURE_INFOi_0x1fe560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202BB4u; }
        if (ctx->pc != 0x202BB4u) { return; }
    }
    ctx->pc = 0x202BB4u;
label_202bb4:
    // 0x202bb4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x202bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x202bb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202bbc: 0x24a59420  addiu       $a1, $a1, -0x6BE0
    ctx->pc = 0x202bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939680));
    // 0x202bc0: 0xc052734  jal         func_149CD0
    ctx->pc = 0x202BC0u;
    SET_GPR_U32(ctx, 31, 0x202BC8u);
    ctx->pc = 0x202BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202BC0u;
            // 0x202bc4: 0x2646000c  addiu       $a2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202BC8u; }
        if (ctx->pc != 0x202BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202BC8u; }
        if (ctx->pc != 0x202BC8u) { return; }
    }
    ctx->pc = 0x202BC8u;
label_202bc8:
    // 0x202bc8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x202bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x202bcc: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x202bccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x202bd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202bd4: 0x24a59430  addiu       $a1, $a1, -0x6BD0
    ctx->pc = 0x202bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939696));
    // 0x202bd8: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x202bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x202bdc: 0xc052734  jal         func_149CD0
    ctx->pc = 0x202BDCu;
    SET_GPR_U32(ctx, 31, 0x202BE4u);
    ctx->pc = 0x202BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202BDCu;
            // 0x202be0: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202BE4u; }
        if (ctx->pc != 0x202BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202BE4u; }
        if (ctx->pc != 0x202BE4u) { return; }
    }
    ctx->pc = 0x202BE4u;
label_202be4:
    // 0x202be4: 0x8f8490dc  lw          $a0, -0x6F24($gp)
    ctx->pc = 0x202be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938844)));
    // 0x202be8: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x202be8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x202bec: 0xc0800b4  jal         func_2002D0
    ctx->pc = 0x202BECu;
    SET_GPR_U32(ctx, 31, 0x202BF4u);
    ctx->pc = 0x202BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202BECu;
            // 0x202bf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2002D0u;
    if (runtime->hasFunction(0x2002D0u)) {
        auto targetFn = runtime->lookupFunction(0x2002D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202BF4u; }
        if (ctx->pc != 0x202BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadAnalyzeInventFile__17CInventDataManageFPci_0x2002d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202BF4u; }
        if (ctx->pc != 0x202BF4u) { return; }
    }
    ctx->pc = 0x202BF4u;
label_202bf4:
    // 0x202bf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x202bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_202bf8:
    // 0x202bf8: 0xc0803c0  jal         func_200F00
    ctx->pc = 0x202BF8u;
    SET_GPR_U32(ctx, 31, 0x202C00u);
    ctx->pc = 0x200F00u;
    if (runtime->hasFunction(0x200F00u)) {
        auto targetFn = runtime->lookupFunction(0x200F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202C00u; }
        if (ctx->pc != 0x202C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachFormInfo__11CMenuInventFv_0x200f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202C00u; }
        if (ctx->pc != 0x202C00u) { return; }
    }
    ctx->pc = 0x202C00u;
label_202c00:
    // 0x202c00: 0xc08791c  jal         func_21E470
    ctx->pc = 0x202C00u;
    SET_GPR_U32(ctx, 31, 0x202C08u);
    ctx->pc = 0x202C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202C00u;
            // 0x202c04: 0x8f849510  lw          $a0, -0x6AF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939920)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E470u;
    if (runtime->hasFunction(0x21E470u)) {
        auto targetFn = runtime->lookupFunction(0x21E470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202C08u; }
        if (ctx->pc != 0x202C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachForm__13CMenuMoveItemFv_0x21e470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202C08u; }
        if (ctx->pc != 0x202C08u) { return; }
    }
    ctx->pc = 0x202C08u;
label_202c08:
    // 0x202c08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x202c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202c0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x202c0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202c10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x202c10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202c14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x202c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202c18: 0x3e00008  jr          $ra
    ctx->pc = 0x202C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202C18u;
            // 0x202c1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202C20u;
}
