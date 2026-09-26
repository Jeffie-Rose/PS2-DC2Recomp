#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuNPCModelLoad__FP9mgCMemoryii
// Address: 0x2bc350 - 0x2bc41c
void MenuNPCModelLoad__FP9mgCMemoryii_0x2bc350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuNPCModelLoad__FP9mgCMemoryii_0x2bc350");
#endif

    switch (ctx->pc) {
        case 0x2bc378u: goto label_2bc378;
        case 0x2bc384u: goto label_2bc384;
        case 0x2bc3b8u: goto label_2bc3b8;
        case 0x2bc3ccu: goto label_2bc3cc;
        case 0x2bc3fcu: goto label_2bc3fc;
        default: break;
    }

    ctx->pc = 0x2bc350u;

    // 0x2bc350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bc350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bc354: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bc354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2bc358: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bc358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bc35c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bc35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bc360: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2bc360u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc364: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bc364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bc368: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2bc368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc36c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bc36cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc370: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2BC370u;
    SET_GPR_U32(ctx, 31, 0x2BC378u);
    ctx->pc = 0x2BC374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC370u;
            // 0x2bc374: 0xa3809c1c  sb          $zero, -0x63E4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941724), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC378u; }
        if (ctx->pc != 0x2BC378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC378u; }
        if (ctx->pc != 0x2BC378u) { return; }
    }
    ctx->pc = 0x2BC378u;
label_2bc378:
    // 0x2bc378: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bc378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc37c: 0xc0aad00  jal         func_2AB400
    ctx->pc = 0x2BC37Cu;
    SET_GPR_U32(ctx, 31, 0x2BC384u);
    ctx->pc = 0x2BC380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC37Cu;
            // 0x2bc380: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB400u;
    if (runtime->hasFunction(0x2AB400u)) {
        auto targetFn = runtime->lookupFunction(0x2AB400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC384u; }
        if (ctx->pc != 0x2BC384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaModelName__Fii_0x2ab400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC384u; }
        if (ctx->pc != 0x2BC384u) { return; }
    }
    ctx->pc = 0x2BC384u;
label_2bc384:
    // 0x2bc384: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x2bc384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2bc388: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2bc388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2bc38c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2bc38cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2bc390: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2bc390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bc394: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC394u;
    {
        const bool branch_taken_0x2bc394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC394u;
            // 0x2bc398: 0xaf859c20  sw          $a1, -0x63E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941728), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc394) {
            ctx->pc = 0x2BC3A4u;
            goto label_2bc3a4;
        }
    }
    ctx->pc = 0x2BC39Cu;
    // 0x2bc39c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2BC39Cu;
    {
        const bool branch_taken_0x2bc39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC39Cu;
            // 0x2bc3a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc39c) {
            ctx->pc = 0x2BC404u;
            goto label_2bc404;
        }
    }
    ctx->pc = 0x2BC3A4u;
label_2bc3a4:
    // 0x2bc3a4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC3A4u;
    {
        const bool branch_taken_0x2bc3a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC3A4u;
            // 0x2bc3a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc3a4) {
            ctx->pc = 0x2BC3C0u;
            goto label_2bc3c0;
        }
    }
    ctx->pc = 0x2BC3ACu;
    // 0x2bc3ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bc3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc3b0: 0xc05224c  jal         func_148930
    ctx->pc = 0x2BC3B0u;
    SET_GPR_U32(ctx, 31, 0x2BC3B8u);
    ctx->pc = 0x2BC3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC3B0u;
            // 0x2bc3b4: 0x27a6004c  addiu       $a2, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC3B8u; }
        if (ctx->pc != 0x2BC3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC3B8u; }
        if (ctx->pc != 0x2BC3B8u) { return; }
    }
    ctx->pc = 0x2BC3B8u;
label_2bc3b8:
    // 0x2bc3b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC3B8u;
    {
        const bool branch_taken_0x2bc3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC3B8u;
            // 0x2bc3bc: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc3b8) {
            ctx->pc = 0x2BC3D0u;
            goto label_2bc3d0;
        }
    }
    ctx->pc = 0x2BC3C0u;
label_2bc3c0:
    // 0x2bc3c0: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x2bc3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2bc3c4: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2BC3C4u;
    SET_GPR_U32(ctx, 31, 0x2BC3CCu);
    ctx->pc = 0x2BC3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC3C4u;
            // 0x2bc3c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC3CCu; }
        if (ctx->pc != 0x2BC3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC3CCu; }
        if (ctx->pc != 0x2BC3CCu) { return; }
    }
    ctx->pc = 0x2BC3CCu;
label_2bc3cc:
    // 0x2bc3cc: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2bc3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2bc3d0:
    // 0x2bc3d0: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC3D0u;
    {
        const bool branch_taken_0x2bc3d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2BC3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC3D0u;
            // 0x2bc3d4: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc3d0) {
            ctx->pc = 0x2BC3E4u;
            goto label_2bc3e4;
        }
    }
    ctx->pc = 0x2BC3D8u;
    // 0x2bc3d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bc3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc3dc: 0xa3829c1c  sb          $v0, -0x63E4($gp)
    ctx->pc = 0x2bc3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941724), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bc3e0: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2bc3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_2bc3e4:
    // 0x2bc3e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC3E4u;
    {
        const bool branch_taken_0x2bc3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC3E4u;
            // 0x2bc3e8: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc3e4) {
            ctx->pc = 0x2BC3F4u;
            goto label_2bc3f4;
        }
    }
    ctx->pc = 0x2BC3ECu;
    // 0x2bc3ec: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2bc3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2bc3f0: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2bc3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bc3f4:
    // 0x2bc3f4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2BC3F4u;
    SET_GPR_U32(ctx, 31, 0x2BC3FCu);
    ctx->pc = 0x2BC3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC3F4u;
            // 0x2bc3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC3FCu; }
        if (ctx->pc != 0x2BC3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC3FCu; }
        if (ctx->pc != 0x2BC3FCu) { return; }
    }
    ctx->pc = 0x2BC3FCu;
label_2bc3fc:
    // 0x2bc3fc: 0x83829c1c  lb          $v0, -0x63E4($gp)
    ctx->pc = 0x2bc3fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941724)));
    // 0x2bc400: 0x0  nop
    ctx->pc = 0x2bc400u;
    // NOP
label_2bc404:
    // 0x2bc404: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bc404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bc408: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bc408u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc40c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bc40cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc410: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bc410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc414: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC414u;
            // 0x2bc418: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BC41Cu;
}
