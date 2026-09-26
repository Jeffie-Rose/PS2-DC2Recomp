#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgExitFishing__FP11SubGameInfo
// Address: 0x2fdc50 - 0x2fdd08
void sgExitFishing__FP11SubGameInfo_0x2fdc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgExitFishing__FP11SubGameInfo_0x2fdc50");
#endif

    switch (ctx->pc) {
        case 0x2fdc50u: goto label_2fdc50;
        case 0x2fdc54u: goto label_2fdc54;
        case 0x2fdc58u: goto label_2fdc58;
        case 0x2fdc5cu: goto label_2fdc5c;
        case 0x2fdc60u: goto label_2fdc60;
        case 0x2fdc64u: goto label_2fdc64;
        case 0x2fdc68u: goto label_2fdc68;
        case 0x2fdc6cu: goto label_2fdc6c;
        case 0x2fdc70u: goto label_2fdc70;
        case 0x2fdc74u: goto label_2fdc74;
        case 0x2fdc78u: goto label_2fdc78;
        case 0x2fdc7cu: goto label_2fdc7c;
        case 0x2fdc80u: goto label_2fdc80;
        case 0x2fdc84u: goto label_2fdc84;
        case 0x2fdc88u: goto label_2fdc88;
        case 0x2fdc8cu: goto label_2fdc8c;
        case 0x2fdc90u: goto label_2fdc90;
        case 0x2fdc94u: goto label_2fdc94;
        case 0x2fdc98u: goto label_2fdc98;
        case 0x2fdc9cu: goto label_2fdc9c;
        case 0x2fdca0u: goto label_2fdca0;
        case 0x2fdca4u: goto label_2fdca4;
        case 0x2fdca8u: goto label_2fdca8;
        case 0x2fdcacu: goto label_2fdcac;
        case 0x2fdcb0u: goto label_2fdcb0;
        case 0x2fdcb4u: goto label_2fdcb4;
        case 0x2fdcb8u: goto label_2fdcb8;
        case 0x2fdcbcu: goto label_2fdcbc;
        case 0x2fdcc0u: goto label_2fdcc0;
        case 0x2fdcc4u: goto label_2fdcc4;
        case 0x2fdcc8u: goto label_2fdcc8;
        case 0x2fdcccu: goto label_2fdccc;
        case 0x2fdcd0u: goto label_2fdcd0;
        case 0x2fdcd4u: goto label_2fdcd4;
        case 0x2fdcd8u: goto label_2fdcd8;
        case 0x2fdcdcu: goto label_2fdcdc;
        case 0x2fdce0u: goto label_2fdce0;
        case 0x2fdce4u: goto label_2fdce4;
        case 0x2fdce8u: goto label_2fdce8;
        case 0x2fdcecu: goto label_2fdcec;
        case 0x2fdcf0u: goto label_2fdcf0;
        case 0x2fdcf4u: goto label_2fdcf4;
        case 0x2fdcf8u: goto label_2fdcf8;
        case 0x2fdcfcu: goto label_2fdcfc;
        case 0x2fdd00u: goto label_2fdd00;
        case 0x2fdd04u: goto label_2fdd04;
        default: break;
    }

    ctx->pc = 0x2fdc50u;

label_2fdc50:
    // 0x2fdc50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fdc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2fdc54:
    // 0x2fdc54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fdc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2fdc58:
    // 0x2fdc58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fdc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fdc5c:
    // 0x2fdc5c: 0x8f859f90  lw          $a1, -0x6070($gp)
    ctx->pc = 0x2fdc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942608)));
label_2fdc60:
    // 0x2fdc60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fdc60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fdc64:
    // 0x2fdc64: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2fdc64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_2fdc68:
    // 0x2fdc68: 0xc04b950  jal         func_12E540
label_2fdc6c:
    if (ctx->pc == 0x2FDC6Cu) {
        ctx->pc = 0x2FDC6Cu;
            // 0x2fdc6c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->pc = 0x2FDC70u;
        goto label_2fdc70;
    }
    ctx->pc = 0x2FDC68u;
    SET_GPR_U32(ctx, 31, 0x2FDC70u);
    ctx->pc = 0x2FDC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDC68u;
            // 0x2fdc6c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDC70u; }
        if (ctx->pc != 0x2FDC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDC70u; }
        if (ctx->pc != 0x2FDC70u) { return; }
    }
    ctx->pc = 0x2FDC70u;
label_2fdc70:
    // 0x2fdc70: 0x8f859f94  lw          $a1, -0x606C($gp)
    ctx->pc = 0x2fdc70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942612)));
label_2fdc74:
    // 0x2fdc74: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2fdc74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_2fdc78:
    // 0x2fdc78: 0xc04b950  jal         func_12E540
label_2fdc7c:
    if (ctx->pc == 0x2FDC7Cu) {
        ctx->pc = 0x2FDC7Cu;
            // 0x2fdc7c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->pc = 0x2FDC80u;
        goto label_2fdc80;
    }
    ctx->pc = 0x2FDC78u;
    SET_GPR_U32(ctx, 31, 0x2FDC80u);
    ctx->pc = 0x2FDC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDC78u;
            // 0x2fdc7c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDC80u; }
        if (ctx->pc != 0x2FDC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDC80u; }
        if (ctx->pc != 0x2FDC80u) { return; }
    }
    ctx->pc = 0x2FDC80u;
label_2fdc80:
    // 0x2fdc80: 0x8f859f98  lw          $a1, -0x6068($gp)
    ctx->pc = 0x2fdc80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942616)));
label_2fdc84:
    // 0x2fdc84: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2fdc84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_2fdc88:
    // 0x2fdc88: 0xc04b950  jal         func_12E540
label_2fdc8c:
    if (ctx->pc == 0x2FDC8Cu) {
        ctx->pc = 0x2FDC8Cu;
            // 0x2fdc8c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->pc = 0x2FDC90u;
        goto label_2fdc90;
    }
    ctx->pc = 0x2FDC88u;
    SET_GPR_U32(ctx, 31, 0x2FDC90u);
    ctx->pc = 0x2FDC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDC88u;
            // 0x2fdc8c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDC90u; }
        if (ctx->pc != 0x2FDC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDC90u; }
        if (ctx->pc != 0x2FDC90u) { return; }
    }
    ctx->pc = 0x2FDC90u;
label_2fdc90:
    // 0x2fdc90: 0xc065b88  jal         func_196E20
label_2fdc94:
    if (ctx->pc == 0x2FDC94u) {
        ctx->pc = 0x2FDC98u;
        goto label_2fdc98;
    }
    ctx->pc = 0x2FDC90u;
    SET_GPR_U32(ctx, 31, 0x2FDC98u);
    ctx->pc = 0x196E20u;
    if (runtime->hasFunction(0x196E20u)) {
        auto targetFn = runtime->lookupFunction(0x196E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDC98u; }
        if (ctx->pc != 0x2FDC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReEquipFishingGameWeapon__Fv_0x196e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDC98u; }
        if (ctx->pc != 0x2FDC98u) { return; }
    }
    ctx->pc = 0x2FDC98u;
label_2fdc98:
    // 0x2fdc98: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2fdc9c:
    if (ctx->pc == 0x2FDC9Cu) {
        ctx->pc = 0x2FDCA0u;
        goto label_2fdca0;
    }
    ctx->pc = 0x2FDC98u;
    {
        const bool branch_taken_0x2fdc98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdc98) {
            ctx->pc = 0x2FDCB4u;
            goto label_2fdcb4;
        }
    }
    ctx->pc = 0x2FDCA0u;
label_2fdca0:
    // 0x2fdca0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2fdca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2fdca4:
    // 0x2fdca4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2fdca8:
    if (ctx->pc == 0x2FDCA8u) {
        ctx->pc = 0x2FDCACu;
        goto label_2fdcac;
    }
    ctx->pc = 0x2FDCA4u;
    {
        const bool branch_taken_0x2fdca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdca4) {
            ctx->pc = 0x2FDCB4u;
            goto label_2fdcb4;
        }
    }
    ctx->pc = 0x2FDCACu;
label_2fdcac:
    // 0x2fdcac: 0xc0bf160  jal         func_2FC580
label_2fdcb0:
    if (ctx->pc == 0x2FDCB0u) {
        ctx->pc = 0x2FDCB4u;
        goto label_2fdcb4;
    }
    ctx->pc = 0x2FDCACu;
    SET_GPR_U32(ctx, 31, 0x2FDCB4u);
    ctx->pc = 0x2FC580u;
    if (runtime->hasFunction(0x2FC580u)) {
        auto targetFn = runtime->lookupFunction(0x2FC580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDCB4u; }
        if (ctx->pc != 0x2FDCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReplayPrevBGM__FP6CScene_0x2fc580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDCB4u; }
        if (ctx->pc != 0x2FDCB4u) { return; }
    }
    ctx->pc = 0x2FDCB4u;
label_2fdcb4:
    // 0x2fdcb4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2fdcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2fdcb8:
    // 0x2fdcb8: 0xc0a0ed8  jal         func_283B60
label_2fdcbc:
    if (ctx->pc == 0x2FDCBCu) {
        ctx->pc = 0x2FDCBCu;
            // 0x2fdcbc: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->pc = 0x2FDCC0u;
        goto label_2fdcc0;
    }
    ctx->pc = 0x2FDCB8u;
    SET_GPR_U32(ctx, 31, 0x2FDCC0u);
    ctx->pc = 0x2FDCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDCB8u;
            // 0x2fdcbc: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDCC0u; }
        if (ctx->pc != 0x2FDCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDCC0u; }
        if (ctx->pc != 0x2FDCC0u) { return; }
    }
    ctx->pc = 0x2FDCC0u;
label_2fdcc0:
    // 0x2fdcc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fdcc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fdcc4:
    // 0x2fdcc4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_2fdcc8:
    if (ctx->pc == 0x2FDCC8u) {
        ctx->pc = 0x2FDCC8u;
            // 0x2fdcc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDCCCu;
        goto label_2fdccc;
    }
    ctx->pc = 0x2FDCC4u;
    {
        const bool branch_taken_0x2fdcc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDCC4u;
            // 0x2fdcc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdcc4) {
            ctx->pc = 0x2FDCF0u;
            goto label_2fdcf0;
        }
    }
    ctx->pc = 0x2FDCCCu;
label_2fdccc:
    // 0x2fdccc: 0xc05d31c  jal         func_174C70
label_2fdcd0:
    if (ctx->pc == 0x2FDCD0u) {
        ctx->pc = 0x2FDCD4u;
        goto label_2fdcd4;
    }
    ctx->pc = 0x2FDCCCu;
    SET_GPR_U32(ctx, 31, 0x2FDCD4u);
    ctx->pc = 0x174C70u;
    if (runtime->hasFunction(0x174C70u)) {
        auto targetFn = runtime->lookupFunction(0x174C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDCD4u; }
        if (ctx->pc != 0x2FDCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteExtMotion__11CCharacter2Fv_0x174c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDCD4u; }
        if (ctx->pc != 0x2FDCD4u) { return; }
    }
    ctx->pc = 0x2FDCD4u;
label_2fdcd4:
    // 0x2fdcd4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2fdcd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2fdcd8:
    // 0x2fdcd8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2fdcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2fdcdc:
    // 0x2fdcdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fdcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fdce0:
    // 0x2fdce0: 0x24a51e18  addiu       $a1, $a1, 0x1E18
    ctx->pc = 0x2fdce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7704));
label_2fdce4:
    // 0x2fdce4: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2fdce4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2fdce8:
    // 0x2fdce8: 0x320f809  jalr        $t9
label_2fdcec:
    if (ctx->pc == 0x2FDCECu) {
        ctx->pc = 0x2FDCECu;
            // 0x2fdcec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDCF0u;
        goto label_2fdcf0;
    }
    ctx->pc = 0x2FDCE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FDCF0u);
        ctx->pc = 0x2FDCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDCE8u;
            // 0x2fdcec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FDCF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FDCF0u; }
            if (ctx->pc != 0x2FDCF0u) { return; }
        }
        }
    }
    ctx->pc = 0x2FDCF0u;
label_2fdcf0:
    // 0x2fdcf0: 0xaf80a068  sw          $zero, -0x5F98($gp)
    ctx->pc = 0x2fdcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942824), GPR_U32(ctx, 0));
label_2fdcf4:
    // 0x2fdcf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fdcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fdcf8:
    // 0x2fdcf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fdcf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fdcfc:
    // 0x2fdcfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fdcfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fdd00:
    // 0x2fdd00: 0x3e00008  jr          $ra
label_2fdd04:
    if (ctx->pc == 0x2FDD04u) {
        ctx->pc = 0x2FDD04u;
            // 0x2fdd04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FDD08u;
        goto label_fallthrough_0x2fdd00;
    }
    ctx->pc = 0x2FDD00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDD00u;
            // 0x2fdd04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2fdd00:
    ctx->pc = 0x2FDD08u;
}
