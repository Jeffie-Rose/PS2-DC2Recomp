#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EnterDataMenu__13CMenuItemInfoFPUi
// Address: 0x242f50 - 0x243080
void EnterDataMenu__13CMenuItemInfoFPUi_0x242f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnterDataMenu__13CMenuItemInfoFPUi_0x242f50");
#endif

    switch (ctx->pc) {
        case 0x242f88u: goto label_242f88;
        case 0x242fa4u: goto label_242fa4;
        case 0x242fbcu: goto label_242fbc;
        case 0x242fc4u: goto label_242fc4;
        case 0x242fe4u: goto label_242fe4;
        case 0x242ff8u: goto label_242ff8;
        case 0x243010u: goto label_243010;
        case 0x243028u: goto label_243028;
        case 0x243040u: goto label_243040;
        case 0x243058u: goto label_243058;
        default: break;
    }

    ctx->pc = 0x242f50u;

    // 0x242f50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x242f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x242f54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x242f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242f58: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x242f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x242f5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x242f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x242f60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x242f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x242f64: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x242f64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242f68: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x242f68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242f6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x242f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x242f70: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x242f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x242f74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x242f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x242f78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x242f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242f7c: 0x24a5b078  addiu       $a1, $a1, -0x4F88
    ctx->pc = 0x242f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946936));
    // 0x242f80: 0xc052734  jal         func_149CD0
    ctx->pc = 0x242F80u;
    SET_GPR_U32(ctx, 31, 0x242F88u);
    ctx->pc = 0x242F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242F80u;
            // 0x242f84: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242F88u; }
        if (ctx->pc != 0x242F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242F88u; }
        if (ctx->pc != 0x242F88u) { return; }
    }
    ctx->pc = 0x242F88u;
label_242f88:
    // 0x242f88: 0x8e910018  lw          $s1, 0x18($s4)
    ctx->pc = 0x242f88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x242f8c: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x242f8cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x242f90: 0x26521ef0  addiu       $s2, $s2, 0x1EF0
    ctx->pc = 0x242f90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7920));
    // 0x242f94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x242f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242f98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x242f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242f9c: 0xc04b950  jal         func_12E540
    ctx->pc = 0x242F9Cu;
    SET_GPR_U32(ctx, 31, 0x242FA4u);
    ctx->pc = 0x242FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242F9Cu;
            // 0x242fa0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242FA4u; }
        if (ctx->pc != 0x242FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242FA4u; }
        if (ctx->pc != 0x242FA4u) { return; }
    }
    ctx->pc = 0x242FA4u;
label_242fa4:
    // 0x242fa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x242fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242fa8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x242fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242fac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x242facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242fb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x242fb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242fb4: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x242FB4u;
    SET_GPR_U32(ctx, 31, 0x242FBCu);
    ctx->pc = 0x242FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242FB4u;
            // 0x242fb8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242FBCu; }
        if (ctx->pc != 0x242FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242FBCu; }
        if (ctx->pc != 0x242FBCu) { return; }
    }
    ctx->pc = 0x242FBCu;
label_242fbc:
    // 0x242fbc: 0xc08aa80  jal         func_22AA00
    ctx->pc = 0x242FBCu;
    SET_GPR_U32(ctx, 31, 0x242FC4u);
    ctx->pc = 0x242FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242FBCu;
            // 0x242fc0: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AA00u;
    if (runtime->hasFunction(0x22AA00u)) {
        auto targetFn = runtime->lookupFunction(0x22AA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242FC4u; }
        if (ctx->pc != 0x242FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetTextureInfoAll__14CPosDataManageFv_0x22aa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242FC4u; }
        if (ctx->pc != 0x242FC4u) { return; }
    }
    ctx->pc = 0x242FC4u;
label_242fc4:
    // 0x242fc4: 0x8f8294ac  lw          $v0, -0x6B54($gp)
    ctx->pc = 0x242fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x242fc8: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x242fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x242fcc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x242fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x242fd0: 0x8e8401a4  lw          $a0, 0x1A4($s4)
    ctx->pc = 0x242fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 420)));
    // 0x242fd4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x242fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x242fd8: 0x8c264d9c  lw          $a2, 0x4D9C($at)
    ctx->pc = 0x242fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19868)));
    // 0x242fdc: 0xc089728  jal         func_225CA0
    ctx->pc = 0x242FDCu;
    SET_GPR_U32(ctx, 31, 0x242FE4u);
    ctx->pc = 0x242FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242FDCu;
            // 0x242fe0: 0x24a5abe0  addiu       $a1, $a1, -0x5420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242FE4u; }
        if (ctx->pc != 0x242FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242FE4u; }
        if (ctx->pc != 0x242FE4u) { return; }
    }
    ctx->pc = 0x242FE4u;
label_242fe4:
    // 0x242fe4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x242fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x242fe8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x242fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242fec: 0x24a5abf0  addiu       $a1, $a1, -0x5410
    ctx->pc = 0x242fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945776));
    // 0x242ff0: 0xc04b414  jal         func_12D050
    ctx->pc = 0x242FF0u;
    SET_GPR_U32(ctx, 31, 0x242FF8u);
    ctx->pc = 0x242FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242FF0u;
            // 0x242ff4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242FF8u; }
        if (ctx->pc != 0x242FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242FF8u; }
        if (ctx->pc != 0x242FF8u) { return; }
    }
    ctx->pc = 0x242FF8u;
label_242ff8:
    // 0x242ff8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x242ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x242ffc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x242ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243000: 0xaf8296b8  sw          $v0, -0x6948($gp)
    ctx->pc = 0x243000u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940344), GPR_U32(ctx, 2));
    // 0x243004: 0x24a5b088  addiu       $a1, $a1, -0x4F78
    ctx->pc = 0x243004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946952));
    // 0x243008: 0xc052734  jal         func_149CD0
    ctx->pc = 0x243008u;
    SET_GPR_U32(ctx, 31, 0x243010u);
    ctx->pc = 0x24300Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243008u;
            // 0x24300c: 0x27a6006c  addiu       $a2, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243010u; }
        if (ctx->pc != 0x243010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243010u; }
        if (ctx->pc != 0x243010u) { return; }
    }
    ctx->pc = 0x243010u;
label_243010:
    // 0x243010: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x243010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x243014: 0x8c24ca4c  lw          $a0, -0x35B4($at)
    ctx->pc = 0x243014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
    // 0x243018: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x243018u;
    {
        const bool branch_taken_0x243018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24301Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243018u;
            // 0x24301c: 0xaf8295d0  sw          $v0, -0x6A30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243018) {
            ctx->pc = 0x243028u;
            goto label_243028;
        }
    }
    ctx->pc = 0x243020u;
    // 0x243020: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x243020u;
    SET_GPR_U32(ctx, 31, 0x243028u);
    ctx->pc = 0x243024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243020u;
            // 0x243024: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243028u; }
        if (ctx->pc != 0x243028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243028u; }
        if (ctx->pc != 0x243028u) { return; }
    }
    ctx->pc = 0x243028u;
label_243028:
    // 0x243028: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x243028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24302c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24302cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243030: 0x24a5b098  addiu       $a1, $a1, -0x4F68
    ctx->pc = 0x243030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946968));
    // 0x243034: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x243034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x243038: 0xc04b414  jal         func_12D050
    ctx->pc = 0x243038u;
    SET_GPR_U32(ctx, 31, 0x243040u);
    ctx->pc = 0x24303Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243038u;
            // 0x24303c: 0xa38095ac  sb          $zero, -0x6A54($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294940076), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243040u; }
        if (ctx->pc != 0x243040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243040u; }
        if (ctx->pc != 0x243040u) { return; }
    }
    ctx->pc = 0x243040u;
label_243040:
    // 0x243040: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x243040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x243044: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x243044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243048: 0xaf8295b0  sw          $v0, -0x6A50($gp)
    ctx->pc = 0x243048u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940080), GPR_U32(ctx, 2));
    // 0x24304c: 0x24a5b0a0  addiu       $a1, $a1, -0x4F60
    ctx->pc = 0x24304cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946976));
    // 0x243050: 0xc04b414  jal         func_12D050
    ctx->pc = 0x243050u;
    SET_GPR_U32(ctx, 31, 0x243058u);
    ctx->pc = 0x243054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243050u;
            // 0x243054: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243058u; }
        if (ctx->pc != 0x243058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243058u; }
        if (ctx->pc != 0x243058u) { return; }
    }
    ctx->pc = 0x243058u;
label_243058:
    // 0x243058: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x243058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24305c: 0xac22d920  sw          $v0, -0x26E0($at)
    ctx->pc = 0x24305cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957344), GPR_U32(ctx, 2));
    // 0x243060: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x243060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243064: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x243064u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x243068: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x243068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24306c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24306cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243070: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x243070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x243074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243078: 0x3e00008  jr          $ra
    ctx->pc = 0x243078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24307Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243078u;
            // 0x24307c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243080u;
}
