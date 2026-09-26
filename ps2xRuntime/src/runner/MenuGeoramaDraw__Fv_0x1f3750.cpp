#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuGeoramaDraw__Fv
// Address: 0x1f3750 - 0x1f38f8
void MenuGeoramaDraw__Fv_0x1f3750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuGeoramaDraw__Fv_0x1f3750");
#endif

    switch (ctx->pc) {
        case 0x1f3774u: goto label_1f3774;
        case 0x1f3794u: goto label_1f3794;
        case 0x1f37b4u: goto label_1f37b4;
        case 0x1f37ccu: goto label_1f37cc;
        case 0x1f37e4u: goto label_1f37e4;
        case 0x1f3804u: goto label_1f3804;
        case 0x1f381cu: goto label_1f381c;
        case 0x1f3838u: goto label_1f3838;
        case 0x1f3840u: goto label_1f3840;
        case 0x1f3874u: goto label_1f3874;
        case 0x1f3884u: goto label_1f3884;
        case 0x1f3894u: goto label_1f3894;
        case 0x1f38b0u: goto label_1f38b0;
        case 0x1f38c0u: goto label_1f38c0;
        case 0x1f38d0u: goto label_1f38d0;
        case 0x1f38e4u: goto label_1f38e4;
        default: break;
    }

    ctx->pc = 0x1f3750u;

    // 0x1f3750: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1f3750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1f3754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f3754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f3758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f3758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f375c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f375cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f3760: 0x8f838ffc  lw          $v1, -0x7004($gp)
    ctx->pc = 0x1f3760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f3764: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x1F3764u;
    {
        const bool branch_taken_0x1f3764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3764) {
            ctx->pc = 0x1F38E4u;
            goto label_1f38e4;
        }
    }
    ctx->pc = 0x1F376Cu;
    // 0x1f376c: 0xc08ad0c  jal         func_22B430
    ctx->pc = 0x1F376Cu;
    SET_GPR_U32(ctx, 31, 0x1F3774u);
    ctx->pc = 0x1F3770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F376Cu;
            // 0x1f3770: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B430u;
    if (runtime->hasFunction(0x22B430u)) {
        auto targetFn = runtime->lookupFunction(0x22B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3774u; }
        if (ctx->pc != 0x1F3774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormDraw__14CPosDataManageFv_0x22b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3774u; }
        if (ctx->pc != 0x1F3774u) { return; }
    }
    ctx->pc = 0x1F3774u;
label_1f3774:
    // 0x1f3774: 0x83848fd8  lb          $a0, -0x7028($gp)
    ctx->pc = 0x1f3774u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938584)));
    // 0x1f3778: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f3778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f377c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F377Cu;
    {
        const bool branch_taken_0x1f377c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F3780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F377Cu;
            // 0x1f3780: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f377c) {
            ctx->pc = 0x1F378Cu;
            goto label_1f378c;
        }
    }
    ctx->pc = 0x1F3784u;
    // 0x1f3784: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3784u;
    {
        const bool branch_taken_0x1f3784 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f3784) {
            ctx->pc = 0x1F3794u;
            goto label_1f3794;
        }
    }
    ctx->pc = 0x1F378Cu;
label_1f378c:
    // 0x1f378c: 0xc07d68c  jal         func_1F5A30
    ctx->pc = 0x1F378Cu;
    SET_GPR_U32(ctx, 31, 0x1F3794u);
    ctx->pc = 0x1F5A30u;
    if (runtime->hasFunction(0x1F5A30u)) {
        auto targetFn = runtime->lookupFunction(0x1F5A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3794u; }
        if (ctx->pc != 0x1F3794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDownLoadAnaunce__Fv_0x1f5a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3794u; }
        if (ctx->pc != 0x1F3794u) { return; }
    }
    ctx->pc = 0x1F3794u;
label_1f3794:
    // 0x1f3794: 0x8f839004  lw          $v1, -0x6FFC($gp)
    ctx->pc = 0x1f3794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938628)));
    // 0x1f3798: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1f3798u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1f379c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F379Cu;
    {
        const bool branch_taken_0x1f379c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F37A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F379Cu;
            // 0x1f37a0: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f379c) {
            ctx->pc = 0x1F381Cu;
            goto label_1f381c;
        }
    }
    ctx->pc = 0x1F37A4u;
    // 0x1f37a4: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x1f37a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f37a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f37a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37ac: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x1F37ACu;
    SET_GPR_U32(ctx, 31, 0x1F37B4u);
    ctx->pc = 0x1F37B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F37ACu;
            // 0x1f37b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F37B4u; }
        if (ctx->pc != 0x1F37B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F37B4u; }
        if (ctx->pc != 0x1F37B4u) { return; }
    }
    ctx->pc = 0x1F37B4u;
label_1f37b4:
    // 0x1f37b4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1f37b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1f37b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f37b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37bc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1f37bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f37c0: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x1f37c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1f37c4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F37C4u;
    SET_GPR_U32(ctx, 31, 0x1F37CCu);
    ctx->pc = 0x1F37C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F37C4u;
            // 0x1f37c8: 0x240801a0  addiu       $t0, $zero, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F37CCu; }
        if (ctx->pc != 0x1F37CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F37CCu; }
        if (ctx->pc != 0x1F37CCu) { return; }
    }
    ctx->pc = 0x1F37CCu;
label_1f37cc:
    // 0x1f37cc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1f37ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1f37d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f37d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f37d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37d8: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x1f37d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1f37dc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F37DCu;
    SET_GPR_U32(ctx, 31, 0x1F37E4u);
    ctx->pc = 0x1F37E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F37DCu;
            // 0x1f37e0: 0x240801a0  addiu       $t0, $zero, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F37E4u; }
        if (ctx->pc != 0x1F37E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F37E4u; }
        if (ctx->pc != 0x1F37E4u) { return; }
    }
    ctx->pc = 0x1F37E4u;
label_1f37e4:
    // 0x1f37e4: 0x8f849004  lw          $a0, -0x6FFC($gp)
    ctx->pc = 0x1f37e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938628)));
    // 0x1f37e8: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1f37e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f37ec: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1f37ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1f37f0: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1f37f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1f37f4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1f37f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37f8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1f37f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37fc: 0xc088004  jal         func_220010
    ctx->pc = 0x1F37FCu;
    SET_GPR_U32(ctx, 31, 0x1F3804u);
    ctx->pc = 0x1F3800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F37FCu;
            // 0x1f3800: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3804u; }
        if (ctx->pc != 0x1F3804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3804u; }
        if (ctx->pc != 0x1F3804u) { return; }
    }
    ctx->pc = 0x1F3804u;
label_1f3804:
    // 0x1f3804: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f3804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f3808: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f3808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f380c: 0x8c24cb38  lw          $a0, -0x34C8($at)
    ctx->pc = 0x1f380cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953784)));
    // 0x1f3810: 0x27a5010c  addiu       $a1, $sp, 0x10C
    ctx->pc = 0x1f3810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x1f3814: 0xc08a9b4  jal         func_22A6D0
    ctx->pc = 0x1F3814u;
    SET_GPR_U32(ctx, 31, 0x1F381Cu);
    ctx->pc = 0x1F3818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3814u;
            // 0x1f3818: 0xafa2010c  sw          $v0, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A6D0u;
    if (runtime->hasFunction(0x22A6D0u)) {
        auto targetFn = runtime->lookupFunction(0x22A6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F381Cu; }
        if (ctx->pc != 0x1F381Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuFormDraw__16CMenuPosDataFormFRi_0x22a6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F381Cu; }
        if (ctx->pc != 0x1F381Cu) { return; }
    }
    ctx->pc = 0x1F381Cu;
label_1f381c:
    // 0x1f381c: 0x8f839520  lw          $v1, -0x6AE0($gp)
    ctx->pc = 0x1f381cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
    // 0x1f3820: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1F3820u;
    {
        const bool branch_taken_0x1f3820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3820u;
            // 0x1f3824: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3820) {
            ctx->pc = 0x1F38E4u;
            goto label_1f38e4;
        }
    }
    ctx->pc = 0x1F3828u;
    // 0x1f3828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f382c: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x1f382cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x1f3830: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x1F3830u;
    SET_GPR_U32(ctx, 31, 0x1F3838u);
    ctx->pc = 0x1F3834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3830u;
            // 0x1f3834: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3838u; }
        if (ctx->pc != 0x1F3838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3838u; }
        if (ctx->pc != 0x1F3838u) { return; }
    }
    ctx->pc = 0x1F3838u;
label_1f3838:
    // 0x1f3838: 0xc0873cc  jal         func_21CF30
    ctx->pc = 0x1F3838u;
    SET_GPR_U32(ctx, 31, 0x1F3840u);
    ctx->pc = 0x1F383Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3838u;
            // 0x1f383c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3840u; }
        if (ctx->pc != 0x1F3840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3840u; }
        if (ctx->pc != 0x1F3840u) { return; }
    }
    ctx->pc = 0x1F3840u;
label_1f3840:
    // 0x1f3840: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x1f3840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x1f3844: 0x3c0243aa  lui         $v0, 0x43AA
    ctx->pc = 0x1f3844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17322 << 16));
    // 0x1f3848: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1f3848u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f384c: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x1f384cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1f3850: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f3850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f3854: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3858: 0x3c0342c4  lui         $v1, 0x42C4
    ctx->pc = 0x1f3858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17092 << 16));
    // 0x1f385c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f385cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3860: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1f3860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1f3864: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1f3864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f3868: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1f3868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1f386c: 0xc0887b8  jal         func_221EE0
    ctx->pc = 0x1F386Cu;
    SET_GPR_U32(ctx, 31, 0x1F3874u);
    ctx->pc = 0x1F3870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F386Cu;
            // 0x1f3870: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3874u; }
        if (ctx->pc != 0x1F3874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3874u; }
        if (ctx->pc != 0x1F3874u) { return; }
    }
    ctx->pc = 0x1F3874u;
label_1f3874:
    // 0x1f3874: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f3874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f3878: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1f3878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f387c: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x1F387Cu;
    SET_GPR_U32(ctx, 31, 0x1F3884u);
    ctx->pc = 0x1F3880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F387Cu;
            // 0x1f3880: 0x24a589e0  addiu       $a1, $a1, -0x7620 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3884u; }
        if (ctx->pc != 0x1F3884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3884u; }
        if (ctx->pc != 0x1F3884u) { return; }
    }
    ctx->pc = 0x1F3884u;
label_1f3884:
    // 0x1f3884: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1f3884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f3888: 0x24050156  addiu       $a1, $zero, 0x156
    ctx->pc = 0x1f3888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x1f388c: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x1F388Cu;
    SET_GPR_U32(ctx, 31, 0x1F3894u);
    ctx->pc = 0x1F3890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F388Cu;
            // 0x1f3890: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3894u; }
        if (ctx->pc != 0x1F3894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3894u; }
        if (ctx->pc != 0x1F3894u) { return; }
    }
    ctx->pc = 0x1F3894u;
label_1f3894:
    // 0x1f3894: 0x27b100c4  addiu       $s1, $sp, 0xC4
    ctx->pc = 0x1f3894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x1f3898: 0x27b000c8  addiu       $s0, $sp, 0xC8
    ctx->pc = 0x1f3898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x1f389c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1f389cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f38a0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1f38a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f38a4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1f38a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f38a8: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x1F38A8u;
    SET_GPR_U32(ctx, 31, 0x1F38B0u);
    ctx->pc = 0x1F38ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F38A8u;
            // 0x1f38ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F38B0u; }
        if (ctx->pc != 0x1F38B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F38B0u; }
        if (ctx->pc != 0x1F38B0u) { return; }
    }
    ctx->pc = 0x1F38B0u;
label_1f38b0:
    // 0x1f38b0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f38b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f38b4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1f38b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f38b8: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x1F38B8u;
    SET_GPR_U32(ctx, 31, 0x1F38C0u);
    ctx->pc = 0x1F38BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F38B8u;
            // 0x1f38bc: 0x24a58a00  addiu       $a1, $a1, -0x7600 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F38C0u; }
        if (ctx->pc != 0x1F38C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F38C0u; }
        if (ctx->pc != 0x1F38C0u) { return; }
    }
    ctx->pc = 0x1F38C0u;
label_1f38c0:
    // 0x1f38c0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1f38c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f38c4: 0x24050156  addiu       $a1, $zero, 0x156
    ctx->pc = 0x1f38c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x1f38c8: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x1F38C8u;
    SET_GPR_U32(ctx, 31, 0x1F38D0u);
    ctx->pc = 0x1F38CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F38C8u;
            // 0x1f38cc: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F38D0u; }
        if (ctx->pc != 0x1F38D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F38D0u; }
        if (ctx->pc != 0x1F38D0u) { return; }
    }
    ctx->pc = 0x1F38D0u;
label_1f38d0:
    // 0x1f38d0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1f38d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f38d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1f38d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f38d8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1f38d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f38dc: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x1F38DCu;
    SET_GPR_U32(ctx, 31, 0x1F38E4u);
    ctx->pc = 0x1F38E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F38DCu;
            // 0x1f38e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F38E4u; }
        if (ctx->pc != 0x1F38E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F38E4u; }
        if (ctx->pc != 0x1F38E4u) { return; }
    }
    ctx->pc = 0x1F38E4u;
label_1f38e4:
    // 0x1f38e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f38e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f38e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f38e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f38ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f38ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f38f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F38F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F38F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F38F0u;
            // 0x1f38f4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F38F8u;
}
