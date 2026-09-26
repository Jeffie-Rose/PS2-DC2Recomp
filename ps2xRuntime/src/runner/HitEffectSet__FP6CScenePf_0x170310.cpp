#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: HitEffectSet__FP6CScenePf
// Address: 0x170310 - 0x1705e0
void HitEffectSet__FP6CScenePf_0x170310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HitEffectSet__FP6CScenePf_0x170310");
#endif

    switch (ctx->pc) {
        case 0x17032cu: goto label_17032c;
        case 0x170340u: goto label_170340;
        case 0x17034cu: goto label_17034c;
        case 0x17035cu: goto label_17035c;
        case 0x170368u: goto label_170368;
        case 0x17037cu: goto label_17037c;
        case 0x17038cu: goto label_17038c;
        case 0x170440u: goto label_170440;
        case 0x1704a8u: goto label_1704a8;
        case 0x170578u: goto label_170578;
        case 0x170594u: goto label_170594;
        default: break;
    }

    ctx->pc = 0x170310u;

    // 0x170310: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x170310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x170314: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x170314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x170318: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x170318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17031c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17031cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x170320: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x170320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170324: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x170324u;
    SET_GPR_U32(ctx, 31, 0x17032Cu);
    ctx->pc = 0x170328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170324u;
            // 0x170328: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17032Cu; }
        if (ctx->pc != 0x17032Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17032Cu; }
        if (ctx->pc != 0x17032Cu) { return; }
    }
    ctx->pc = 0x17032Cu;
label_17032c:
    // 0x17032c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17032cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170330: 0x120000a6  beqz        $s0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x170330u;
    {
        const bool branch_taken_0x170330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x170334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170330u;
            // 0x170334: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170330) {
            ctx->pc = 0x1705CCu;
            goto label_1705cc;
        }
    }
    ctx->pc = 0x170338u;
    // 0x170338: 0xc041c5c  jal         func_107170
    ctx->pc = 0x170338u;
    SET_GPR_U32(ctx, 31, 0x170340u);
    ctx->pc = 0x17033Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170338u;
            // 0x17033c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170340u; }
        if (ctx->pc != 0x170340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170340u; }
        if (ctx->pc != 0x170340u) { return; }
    }
    ctx->pc = 0x170340u;
label_170340:
    // 0x170340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170344: 0xc04c574  jal         func_1315D0
    ctx->pc = 0x170344u;
    SET_GPR_U32(ctx, 31, 0x17034Cu);
    ctx->pc = 0x170348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170344u;
            // 0x170348: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17034Cu; }
        if (ctx->pc != 0x17034Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17034Cu; }
        if (ctx->pc != 0x17034Cu) { return; }
    }
    ctx->pc = 0x17034Cu;
label_17034c:
    // 0x17034c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17034cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x170350: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x170350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x170354: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x170354u;
    SET_GPR_U32(ctx, 31, 0x17035Cu);
    ctx->pc = 0x170358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170354u;
            // 0x170358: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17035Cu; }
        if (ctx->pc != 0x17035Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17035Cu; }
        if (ctx->pc != 0x17035Cu) { return; }
    }
    ctx->pc = 0x17035Cu;
label_17035c:
    // 0x17035c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17035cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x170360: 0xc041be0  jal         func_106F80
    ctx->pc = 0x170360u;
    SET_GPR_U32(ctx, 31, 0x170368u);
    ctx->pc = 0x170364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170360u;
            // 0x170364: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170368u; }
        if (ctx->pc != 0x170368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170368u; }
        if (ctx->pc != 0x170368u) { return; }
    }
    ctx->pc = 0x170368u;
label_170368:
    // 0x170368: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x170368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x17036c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17036cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x170370: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x170370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x170374: 0xc041c4a  jal         func_107128
    ctx->pc = 0x170374u;
    SET_GPR_U32(ctx, 31, 0x17037Cu);
    ctx->pc = 0x170378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170374u;
            // 0x170378: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17037Cu; }
        if (ctx->pc != 0x17037Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17037Cu; }
        if (ctx->pc != 0x17037Cu) { return; }
    }
    ctx->pc = 0x17037Cu;
label_17037c:
    // 0x17037c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17037cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x170380: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x170380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x170384: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x170384u;
    SET_GPR_U32(ctx, 31, 0x17038Cu);
    ctx->pc = 0x170388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170384u;
            // 0x170388: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17038Cu; }
        if (ctx->pc != 0x17038Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17038Cu; }
        if (ctx->pc != 0x17038Cu) { return; }
    }
    ctx->pc = 0x17038Cu;
label_17038c:
    // 0x17038c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x17038cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x170390: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x170390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x170394: 0x24634c40  addiu       $v1, $v1, 0x4C40
    ctx->pc = 0x170394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19520));
    // 0x170398: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x170398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x17039c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x17039cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1703a0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1703a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1703a4: 0x8c270324  lw          $a3, 0x324($at)
    ctx->pc = 0x1703a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 804)));
    // 0x1703a8: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1703A8u;
    {
        const bool branch_taken_0x1703a8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1703ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1703A8u;
            // 0x1703ac: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1703a8) {
            ctx->pc = 0x1703B8u;
            goto label_1703b8;
        }
    }
    ctx->pc = 0x1703B0u;
    // 0x1703b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1703B0u;
    {
        const bool branch_taken_0x1703b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1703B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1703B0u;
            // 0x1703b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1703b0) {
            ctx->pc = 0x1703F8u;
            goto label_1703f8;
        }
    }
    ctx->pc = 0x1703B8u;
label_1703b8:
    // 0x1703b8: 0x8c26032c  lw          $a2, 0x32C($at)
    ctx->pc = 0x1703b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 812)));
    // 0x1703bc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1703bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1703c0: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1703c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1703c4: 0x8c230328  lw          $v1, 0x328($at)
    ctx->pc = 0x1703c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 808)));
    // 0x1703c8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1703c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1703cc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1703ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1703d0: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x1703d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1703d4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1703d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1703d8: 0xac24032c  sw          $a0, 0x32C($at)
    ctx->pc = 0x1703d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 812), GPR_U32(ctx, 4));
    // 0x1703dc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1703dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1703e0: 0x8c24032c  lw          $a0, 0x32C($at)
    ctx->pc = 0x1703e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 812)));
    // 0x1703e4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1703e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1703e8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1703E8u;
    {
        const bool branch_taken_0x1703e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1703ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1703E8u;
            // 0x1703ec: 0xe58021  addu        $s0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1703e8) {
            ctx->pc = 0x1703F8u;
            goto label_1703f8;
        }
    }
    ctx->pc = 0x1703F0u;
    // 0x1703f0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1703f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1703f4: 0xac20032c  sw          $zero, 0x32C($at)
    ctx->pc = 0x1703f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 812), GPR_U32(ctx, 0));
label_1703f8:
    // 0x1703f8: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1703F8u;
    {
        const bool branch_taken_0x1703f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1703f8) {
            ctx->pc = 0x170444u;
            goto label_170444;
        }
    }
    ctx->pc = 0x170400u;
    // 0x170400: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x170400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x170404: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x170404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x170408: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x170408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17040c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17040cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170410: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x170410u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x170414: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x170414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x170418: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x170418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x17041c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x17041cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x170420: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x170420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x170424: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x170424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x170428: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x170428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x17042c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x17042cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x170430: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x170430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x170434: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x170434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x170438: 0xc07098c  jal         func_1C2630
    ctx->pc = 0x170438u;
    SET_GPR_U32(ctx, 31, 0x170440u);
    ctx->pc = 0x17043Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170438u;
            // 0x17043c: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2630u;
    if (runtime->hasFunction(0x1C2630u)) {
        auto targetFn = runtime->lookupFunction(0x1C2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170440u; }
        if (ctx->pc != 0x170440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SethitEffect__15CHitEffectImageFPfPfffffii_0x1c2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170440u; }
        if (ctx->pc != 0x170440u) { return; }
    }
    ctx->pc = 0x170440u;
label_170440:
    // 0x170440: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x170440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_170444:
    // 0x170444: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x170444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x170448: 0x8c260330  lw          $a2, 0x330($at)
    ctx->pc = 0x170448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 816)));
    // 0x17044c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17044Cu;
    {
        const bool branch_taken_0x17044c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x170450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17044Cu;
            // 0x170450: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17044c) {
            ctx->pc = 0x17045Cu;
            goto label_17045c;
        }
    }
    ctx->pc = 0x170454u;
    // 0x170454: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x170454u;
    {
        const bool branch_taken_0x170454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170454u;
            // 0x170458: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170454) {
            ctx->pc = 0x170494u;
            goto label_170494;
        }
    }
    ctx->pc = 0x17045Cu;
label_17045c:
    // 0x17045c: 0x8c240338  lw          $a0, 0x338($at)
    ctx->pc = 0x17045cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 824)));
    // 0x170460: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x170460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x170464: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x170464u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x170468: 0x8c230334  lw          $v1, 0x334($at)
    ctx->pc = 0x170468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 820)));
    // 0x17046c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17046cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x170470: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x170470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x170474: 0xac240338  sw          $a0, 0x338($at)
    ctx->pc = 0x170474u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 824), GPR_U32(ctx, 4));
    // 0x170478: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x170478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x17047c: 0x8c240338  lw          $a0, 0x338($at)
    ctx->pc = 0x17047cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 824)));
    // 0x170480: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x170480u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x170484: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x170484u;
    {
        const bool branch_taken_0x170484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x170488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170484u;
            // 0x170488: 0xc58021  addu        $s0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170484) {
            ctx->pc = 0x170494u;
            goto label_170494;
        }
    }
    ctx->pc = 0x17048Cu;
    // 0x17048c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x17048cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x170490: 0xac200338  sw          $zero, 0x338($at)
    ctx->pc = 0x170490u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 824), GPR_U32(ctx, 0));
label_170494:
    // 0x170494: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x170494u;
    {
        const bool branch_taken_0x170494 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x170494) {
            ctx->pc = 0x1704E8u;
            goto label_1704e8;
        }
    }
    ctx->pc = 0x17049Cu;
    // 0x17049c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x17049cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1704a0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1704A0u;
    SET_GPR_U32(ctx, 31, 0x1704A8u);
    ctx->pc = 0x1704A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1704A0u;
            // 0x1704a4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1704A8u; }
        if (ctx->pc != 0x1704A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1704A8u; }
        if (ctx->pc != 0x1704A8u) { return; }
    }
    ctx->pc = 0x1704A8u;
label_1704a8:
    // 0x1704a8: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1704a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x1704ac: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1704acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1704b0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1704b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1704b4: 0xa6040024  sh          $a0, 0x24($s0)
    ctx->pc = 0x1704b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 4));
    // 0x1704b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1704b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1704bc: 0xa6030030  sh          $v1, 0x30($s0)
    ctx->pc = 0x1704bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x1704c0: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1704c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x1704c4: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x1704c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x1704c8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1704c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1704cc: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1704ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1704d0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1704d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1704d4: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x1704d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1704d8: 0xa6040032  sh          $a0, 0x32($s0)
    ctx->pc = 0x1704d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 4));
    // 0x1704dc: 0xa6030034  sh          $v1, 0x34($s0)
    ctx->pc = 0x1704dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x1704e0: 0xa6040036  sh          $a0, 0x36($s0)
    ctx->pc = 0x1704e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 4));
    // 0x1704e4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1704e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1704e8:
    // 0x1704e8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1704e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1704ec: 0x8c270324  lw          $a3, 0x324($at)
    ctx->pc = 0x1704ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 804)));
    // 0x1704f0: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1704F0u;
    {
        const bool branch_taken_0x1704f0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1704F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1704F0u;
            // 0x1704f4: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1704f0) {
            ctx->pc = 0x170500u;
            goto label_170500;
        }
    }
    ctx->pc = 0x1704F8u;
    // 0x1704f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1704F8u;
    {
        const bool branch_taken_0x1704f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1704FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1704F8u;
            // 0x1704fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1704f8) {
            ctx->pc = 0x170540u;
            goto label_170540;
        }
    }
    ctx->pc = 0x170500u;
label_170500:
    // 0x170500: 0x8c26032c  lw          $a2, 0x32C($at)
    ctx->pc = 0x170500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 812)));
    // 0x170504: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x170504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x170508: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x170508u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x17050c: 0x8c230328  lw          $v1, 0x328($at)
    ctx->pc = 0x17050cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 808)));
    // 0x170510: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x170510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x170514: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x170514u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x170518: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x170518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x17051c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x17051cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x170520: 0xac24032c  sw          $a0, 0x32C($at)
    ctx->pc = 0x170520u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 812), GPR_U32(ctx, 4));
    // 0x170524: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x170524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x170528: 0x8c24032c  lw          $a0, 0x32C($at)
    ctx->pc = 0x170528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 812)));
    // 0x17052c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x17052cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x170530: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x170530u;
    {
        const bool branch_taken_0x170530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x170534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170530u;
            // 0x170534: 0xe58021  addu        $s0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170530) {
            ctx->pc = 0x170540u;
            goto label_170540;
        }
    }
    ctx->pc = 0x170538u;
    // 0x170538: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x170538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x17053c: 0xac20032c  sw          $zero, 0x32C($at)
    ctx->pc = 0x17053cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 812), GPR_U32(ctx, 0));
label_170540:
    // 0x170540: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x170540u;
    {
        const bool branch_taken_0x170540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x170544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170540u;
            // 0x170544: 0x3c034220  lui         $v1, 0x4220 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170540) {
            ctx->pc = 0x1705CCu;
            goto label_1705cc;
        }
    }
    ctx->pc = 0x170548u;
    // 0x170548: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x170548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x17054c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x17054cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x170550: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x170550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x170554: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x170554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x170558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17055c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x17055cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x170560: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x170560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x170564: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x170564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x170568: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x170568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17056c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x17056cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x170570: 0xc07098c  jal         func_1C2630
    ctx->pc = 0x170570u;
    SET_GPR_U32(ctx, 31, 0x170578u);
    ctx->pc = 0x170574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170570u;
            // 0x170574: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2630u;
    if (runtime->hasFunction(0x1C2630u)) {
        auto targetFn = runtime->lookupFunction(0x1C2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170578u; }
        if (ctx->pc != 0x170578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SethitEffect__15CHitEffectImageFPfPfffffii_0x1c2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170578u; }
        if (ctx->pc != 0x170578u) { return; }
    }
    ctx->pc = 0x170578u;
label_170578:
    // 0x170578: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x170578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17057c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17057cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x170580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170584: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x170584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x170588: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x170588u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17058c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x17058Cu;
    SET_GPR_U32(ctx, 31, 0x170594u);
    ctx->pc = 0x170590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17058Cu;
            // 0x170590: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170594u; }
        if (ctx->pc != 0x170594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170594u; }
        if (ctx->pc != 0x170594u) { return; }
    }
    ctx->pc = 0x170594u;
label_170594:
    // 0x170594: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x170594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x170598: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x170598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17059c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x17059cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1705a0: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x1705a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x1705a4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1705a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1705a8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1705a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1705ac: 0xae040050  sw          $a0, 0x50($s0)
    ctx->pc = 0x1705acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 4));
    // 0x1705b0: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x1705b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1705b4: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x1705b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x1705b8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1705b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1705bc: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x1705bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
    // 0x1705c0: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x1705c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1705c4: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x1705c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x1705c8: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1705c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_1705cc:
    // 0x1705cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1705ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1705d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1705d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1705d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1705d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1705d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1705D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1705DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1705D8u;
            // 0x1705dc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1705E0u;
}
