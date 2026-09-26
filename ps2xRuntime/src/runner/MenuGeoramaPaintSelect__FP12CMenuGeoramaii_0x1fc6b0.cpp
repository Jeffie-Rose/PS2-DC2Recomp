#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuGeoramaPaintSelect__FP12CMenuGeoramaii
// Address: 0x1fc6b0 - 0x1fc878
void MenuGeoramaPaintSelect__FP12CMenuGeoramaii_0x1fc6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuGeoramaPaintSelect__FP12CMenuGeoramaii_0x1fc6b0");
#endif

    switch (ctx->pc) {
        case 0x1fc72cu: goto label_1fc72c;
        case 0x1fc740u: goto label_1fc740;
        case 0x1fc754u: goto label_1fc754;
        case 0x1fc7a8u: goto label_1fc7a8;
        case 0x1fc7b8u: goto label_1fc7b8;
        case 0x1fc81cu: goto label_1fc81c;
        case 0x1fc824u: goto label_1fc824;
        case 0x1fc848u: goto label_1fc848;
        case 0x1fc858u: goto label_1fc858;
        default: break;
    }

    ctx->pc = 0x1fc6b0u;

    // 0x1fc6b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fc6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fc6b4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1fc6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1fc6b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fc6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1fc6bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fc6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fc6c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fc6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fc6c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fc6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fc6c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fc6c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc6cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fc6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fc6d0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1fc6d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc6d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fc6d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc6d8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC6D8u;
    {
        const bool branch_taken_0x1fc6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC6D8u;
            // 0x1fc6dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc6d8) {
            ctx->pc = 0x1FC6E4u;
            goto label_1fc6e4;
        }
    }
    ctx->pc = 0x1FC6E0u;
    // 0x1fc6e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1fc6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1fc6e4:
    // 0x1fc6e4: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x1fc6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x1fc6e8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC6E8u;
    {
        const bool branch_taken_0x1fc6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC6E8u;
            // 0x1fc6ec: 0x30a20010  andi        $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc6e8) {
            ctx->pc = 0x1FC6F4u;
            goto label_1fc6f4;
        }
    }
    ctx->pc = 0x1FC6F0u;
    // 0x1fc6f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1fc6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1fc6f4:
    // 0x1fc6f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC6F4u;
    {
        const bool branch_taken_0x1fc6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC6F4u;
            // 0x1fc6f8: 0x30a20020  andi        $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc6f4) {
            ctx->pc = 0x1FC700u;
            goto label_1fc700;
        }
    }
    ctx->pc = 0x1FC6FCu;
    // 0x1fc6fc: 0x2484fff9  addiu       $a0, $a0, -0x7
    ctx->pc = 0x1fc6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967289));
label_1fc700:
    // 0x1fc700: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC700u;
    {
        const bool branch_taken_0x1fc700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc700) {
            ctx->pc = 0x1FC70Cu;
            goto label_1fc70c;
        }
    }
    ctx->pc = 0x1FC708u;
    // 0x1fc708: 0x24840007  addiu       $a0, $a0, 0x7
    ctx->pc = 0x1fc708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_1fc70c:
    // 0x1fc70c: 0x8e53015c  lw          $s3, 0x15C($s2)
    ctx->pc = 0x1fc70cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x1fc710: 0x2645015c  addiu       $a1, $s2, 0x15C
    ctx->pc = 0x1fc710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 348));
    // 0x1fc714: 0x26460160  addiu       $a2, $s2, 0x160
    ctx->pc = 0x1fc714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
    // 0x1fc718: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fc718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc71c: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x1fc71cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1fc720: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1fc720u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fc724: 0xc08ec6c  jal         func_23B1B0
    ctx->pc = 0x1FC724u;
    SET_GPR_U32(ctx, 31, 0x1FC72Cu);
    ctx->pc = 0x1FC728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC724u;
            // 0x1fc728: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B1B0u;
    if (runtime->hasFunction(0x23B1B0u)) {
        auto targetFn = runtime->lookupFunction(0x23B1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC72Cu; }
        if (ctx->pc != 0x1FC72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuKeySelectCheck__FiPiPiiiii_0x23b1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC72Cu; }
        if (ctx->pc != 0x1FC72Cu) { return; }
    }
    ctx->pc = 0x1FC72Cu;
label_1fc72c:
    // 0x1fc72c: 0x8e450148  lw          $a1, 0x148($s2)
    ctx->pc = 0x1fc72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x1fc730: 0x8e46015c  lw          $a2, 0x15C($s2)
    ctx->pc = 0x1fc730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x1fc734: 0x8e470160  lw          $a3, 0x160($s2)
    ctx->pc = 0x1fc734u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x1fc738: 0xc07e72c  jal         func_1F9CB0
    ctx->pc = 0x1FC738u;
    SET_GPR_U32(ctx, 31, 0x1FC740u);
    ctx->pc = 0x1FC73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC738u;
            // 0x1fc73c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9CB0u;
    if (runtime->hasFunction(0x1F9CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1F9CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC740u; }
        if (ctx->pc != 0x1FC740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetGeoListInfo__12CMenuGeoramaFiii_0x1f9cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC740u; }
        if (ctx->pc != 0x1FC740u) { return; }
    }
    ctx->pc = 0x1FC740u;
label_1fc740:
    // 0x1fc740: 0x8e42015c  lw          $v0, 0x15C($s2)
    ctx->pc = 0x1fc740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x1fc744: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC744u;
    {
        const bool branch_taken_0x1fc744 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC744u;
            // 0x1fc748: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc744) {
            ctx->pc = 0x1FC758u;
            goto label_1fc758;
        }
    }
    ctx->pc = 0x1FC74Cu;
    // 0x1fc74c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FC74Cu;
    SET_GPR_U32(ctx, 31, 0x1FC754u);
    ctx->pc = 0x1FC750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC74Cu;
            // 0x1fc750: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC754u; }
        if (ctx->pc != 0x1FC754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC754u; }
        if (ctx->pc != 0x1FC754u) { return; }
    }
    ctx->pc = 0x1FC754u;
label_1fc754:
    // 0x1fc754: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fc754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fc758:
    // 0x1fc758: 0x1222003d  beq         $s1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1FC758u;
    {
        const bool branch_taken_0x1fc758 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC758u;
            // 0x1fc75c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc758) {
            ctx->pc = 0x1FC850u;
            goto label_1fc850;
        }
    }
    ctx->pc = 0x1FC760u;
    // 0x1fc760: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1fc760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fc764: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC764u;
    {
        const bool branch_taken_0x1fc764 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC764u;
            // 0x1fc768: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc764) {
            ctx->pc = 0x1FC784u;
            goto label_1fc784;
        }
    }
    ctx->pc = 0x1FC76Cu;
    // 0x1fc76c: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC76Cu;
    {
        const bool branch_taken_0x1fc76c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC76Cu;
            // 0x1fc770: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc76c) {
            ctx->pc = 0x1FC784u;
            goto label_1fc784;
        }
    }
    ctx->pc = 0x1FC774u;
    // 0x1fc774: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC774u;
    {
        const bool branch_taken_0x1fc774 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fc774) {
            ctx->pc = 0x1FC784u;
            goto label_1fc784;
        }
    }
    ctx->pc = 0x1FC77Cu;
    // 0x1fc77c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1FC77Cu;
    {
        const bool branch_taken_0x1fc77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC77Cu;
            // 0x1fc780: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc77c) {
            ctx->pc = 0x1FC85Cu;
            goto label_1fc85c;
        }
    }
    ctx->pc = 0x1FC784u;
label_1fc784:
    // 0x1fc784: 0x8e43015c  lw          $v1, 0x15C($s2)
    ctx->pc = 0x1fc784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x1fc788: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1fc788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fc78c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FC78Cu;
    {
        const bool branch_taken_0x1fc78c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FC790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC78Cu;
            // 0x1fc790: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc78c) {
            ctx->pc = 0x1FC7C0u;
            goto label_1fc7c0;
        }
    }
    ctx->pc = 0x1FC794u;
    // 0x1fc794: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1fc794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1fc798: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fc798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1fc79c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fc79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc7a0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FC7A0u;
    SET_GPR_U32(ctx, 31, 0x1FC7A8u);
    ctx->pc = 0x1FC7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC7A0u;
            // 0x1fc7a4: 0xac22d62c  sw          $v0, -0x29D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC7A8u; }
        if (ctx->pc != 0x1FC7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC7A8u; }
        if (ctx->pc != 0x1FC7A8u) { return; }
    }
    ctx->pc = 0x1FC7A8u;
label_1fc7a8:
    // 0x1fc7a8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fc7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1fc7ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fc7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc7b0: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FC7B0u;
    SET_GPR_U32(ctx, 31, 0x1FC7B8u);
    ctx->pc = 0x1FC7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC7B0u;
            // 0x1fc7b4: 0x24a58e30  addiu       $a1, $a1, -0x71D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC7B8u; }
        if (ctx->pc != 0x1FC7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC7B8u; }
        if (ctx->pc != 0x1FC7B8u) { return; }
    }
    ctx->pc = 0x1FC7B8u;
label_1fc7b8:
    // 0x1fc7b8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1FC7B8u;
    {
        const bool branch_taken_0x1fc7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC7B8u;
            // 0x1fc7bc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc7b8) {
            ctx->pc = 0x1FC858u;
            goto label_1fc858;
        }
    }
    ctx->pc = 0x1FC7C0u;
label_1fc7c0:
    // 0x1fc7c0: 0xae400154  sw          $zero, 0x154($s2)
    ctx->pc = 0x1fc7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 0));
    // 0x1fc7c4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1fc7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc7c8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1fc7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x1fc7cc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1fc7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fc7d0: 0x2442e3a0  addiu       $v0, $v0, -0x1C60
    ctx->pc = 0x1fc7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960032));
    // 0x1fc7d4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1fc7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x1fc7d8: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x1fc7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fc7dc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1fc7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fc7e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fc7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fc7e4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1fc7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fc7e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fc7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc7ec: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x1fc7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fc7f0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1fc7f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1fc7f4: 0x0  nop
    ctx->pc = 0x1fc7f4u;
    // NOP
    // 0x1fc7f8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1fc7f8u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x1fc7fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fc7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc800: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x1fc800u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x1fc804: 0xe6400130  swc1        $f0, 0x130($s2)
    ctx->pc = 0x1fc804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
    // 0x1fc808: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x1fc808u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x1fc80c: 0xe6410134  swc1        $f1, 0x134($s2)
    ctx->pc = 0x1fc80cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 308), bits); }
    // 0x1fc810: 0xe6420138  swc1        $f2, 0x138($s2)
    ctx->pc = 0x1fc810u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 312), bits); }
    // 0x1fc814: 0xc07e68c  jal         func_1F9A30
    ctx->pc = 0x1FC814u;
    SET_GPR_U32(ctx, 31, 0x1FC81Cu);
    ctx->pc = 0x1FC818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC814u;
            // 0x1fc818: 0xae42013c  sw          $v0, 0x13C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9A30u;
    if (runtime->hasFunction(0x1F9A30u)) {
        auto targetFn = runtime->lookupFunction(0x1F9A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC81Cu; }
        if (ctx->pc != 0x1FC81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateGeoramaPartColor__12CMenuGeoramaFi_0x1f9a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC81Cu; }
        if (ctx->pc != 0x1FC81Cu) { return; }
    }
    ctx->pc = 0x1FC81Cu;
label_1fc81c:
    // 0x1fc81c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FC81Cu;
    SET_GPR_U32(ctx, 31, 0x1FC824u);
    ctx->pc = 0x1FC820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC81Cu;
            // 0x1fc820: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC824u; }
        if (ctx->pc != 0x1FC824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC824u; }
        if (ctx->pc != 0x1FC824u) { return; }
    }
    ctx->pc = 0x1FC824u;
label_1fc824:
    // 0x1fc824: 0x8e420168  lw          $v0, 0x168($s2)
    ctx->pc = 0x1fc824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 360)));
    // 0x1fc828: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FC828u;
    {
        const bool branch_taken_0x1fc828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC828u;
            // 0x1fc82c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc828) {
            ctx->pc = 0x1FC858u;
            goto label_1fc858;
        }
    }
    ctx->pc = 0x1FC830u;
    // 0x1fc830: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1fc830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fc834: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fc834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1fc838: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fc838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc83c: 0xac22d62c  sw          $v0, -0x29D4($at)
    ctx->pc = 0x1fc83cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 2));
    // 0x1fc840: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FC840u;
    SET_GPR_U32(ctx, 31, 0x1FC848u);
    ctx->pc = 0x1FC844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC840u;
            // 0x1fc844: 0x24a58e30  addiu       $a1, $a1, -0x71D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC848u; }
        if (ctx->pc != 0x1FC848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC848u; }
        if (ctx->pc != 0x1FC848u) { return; }
    }
    ctx->pc = 0x1FC848u;
label_1fc848:
    // 0x1fc848: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC848u;
    {
        const bool branch_taken_0x1fc848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC848u;
            // 0x1fc84c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc848) {
            ctx->pc = 0x1FC858u;
            goto label_1fc858;
        }
    }
    ctx->pc = 0x1FC850u;
label_1fc850:
    // 0x1fc850: 0xc07e738  jal         func_1F9CE0
    ctx->pc = 0x1FC850u;
    SET_GPR_U32(ctx, 31, 0x1FC858u);
    ctx->pc = 0x1FC854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC850u;
            // 0x1fc854: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9CE0u;
    if (runtime->hasFunction(0x1F9CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1F9CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC858u; }
        if (ctx->pc != 0x1FC858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnSelectMode__12CMenuGeoramaFi_0x1f9ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC858u; }
        if (ctx->pc != 0x1FC858u) { return; }
    }
    ctx->pc = 0x1FC858u;
label_1fc858:
    // 0x1fc858: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fc858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc85c:
    // 0x1fc85c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fc85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fc860: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fc860u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fc864: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fc864u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc868: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fc868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc86c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fc86cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc870: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC870u;
            // 0x1fc874: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FC878u;
}
