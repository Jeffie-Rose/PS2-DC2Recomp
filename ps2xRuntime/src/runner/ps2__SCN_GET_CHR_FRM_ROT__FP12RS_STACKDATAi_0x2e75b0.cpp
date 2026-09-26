#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SCN_GET_CHR_FRM_ROT__FP12RS_STACKDATAi
// Address: 0x2e75b0 - 0x2e76f8
void ps2__SCN_GET_CHR_FRM_ROT__FP12RS_STACKDATAi_0x2e75b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SCN_GET_CHR_FRM_ROT__FP12RS_STACKDATAi_0x2e75b0");
#endif

    switch (ctx->pc) {
        case 0x2e75d0u: goto label_2e75d0;
        case 0x2e75e0u: goto label_2e75e0;
        case 0x2e75ecu: goto label_2e75ec;
        case 0x2e7618u: goto label_2e7618;
        case 0x2e7660u: goto label_2e7660;
        case 0x2e7670u: goto label_2e7670;
        case 0x2e767cu: goto label_2e767c;
        case 0x2e7688u: goto label_2e7688;
        case 0x2e76a0u: goto label_2e76a0;
        case 0x2e76acu: goto label_2e76ac;
        case 0x2e76bcu: goto label_2e76bc;
        case 0x2e76ccu: goto label_2e76cc;
        case 0x2e76d8u: goto label_2e76d8;
        default: break;
    }

    ctx->pc = 0x2e75b0u;

    // 0x2e75b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e75b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e75b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e75b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e75b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e75b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e75bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e75bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e75c0: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x2e75c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e75c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e75c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e75c8: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E75C8u;
    SET_GPR_U32(ctx, 31, 0x2E75D0u);
    ctx->pc = 0x2E75CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E75C8u;
            // 0x2e75cc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E75D0u; }
        if (ctx->pc != 0x2E75D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E75D0u; }
        if (ctx->pc != 0x2E75D0u) { return; }
    }
    ctx->pc = 0x2E75D0u;
label_2e75d0:
    // 0x2e75d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e75d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e75d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e75d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e75d8: 0xc0b8cd0  jal         func_2E3340
    ctx->pc = 0x2E75D8u;
    SET_GPR_U32(ctx, 31, 0x2E75E0u);
    ctx->pc = 0x2E75DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E75D8u;
            // 0x2e75dc: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3340u;
    if (runtime->hasFunction(0x2E3340u)) {
        auto targetFn = runtime->lookupFunction(0x2E3340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E75E0u; }
        if (ctx->pc != 0x2E75E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2e3340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E75E0u; }
        if (ctx->pc != 0x2E75E0u) { return; }
    }
    ctx->pc = 0x2E75E0u;
label_2e75e0:
    // 0x2e75e0: 0x8f849ec8  lw          $a0, -0x6138($gp)
    ctx->pc = 0x2e75e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942408)));
    // 0x2e75e4: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x2E75E4u;
    SET_GPR_U32(ctx, 31, 0x2E75ECu);
    ctx->pc = 0x2E75E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E75E4u;
            // 0x2e75e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E75ECu; }
        if (ctx->pc != 0x2E75ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E75ECu; }
        if (ctx->pc != 0x2E75ECu) { return; }
    }
    ctx->pc = 0x2E75ECu;
label_2e75ec:
    // 0x2e75ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E75ECu;
    {
        const bool branch_taken_0x2e75ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e75ec) {
            ctx->pc = 0x2E75FCu;
            goto label_2e75fc;
        }
    }
    ctx->pc = 0x2E75F4u;
    // 0x2e75f4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2E75F4u;
    {
        const bool branch_taken_0x2e75f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E75F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E75F4u;
            // 0x2e75f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e75f4) {
            ctx->pc = 0x2E76DCu;
            goto label_2e76dc;
        }
    }
    ctx->pc = 0x2E75FCu;
label_2e75fc:
    // 0x2e75fc: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x2e75fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x2e7600: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7600u;
    {
        const bool branch_taken_0x2e7600 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7600u;
            // 0x2e7604: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7600) {
            ctx->pc = 0x2E7610u;
            goto label_2e7610;
        }
    }
    ctx->pc = 0x2E7608u;
    // 0x2e7608: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2E7608u;
    {
        const bool branch_taken_0x2e7608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E760Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7608u;
            // 0x2e760c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7608) {
            ctx->pc = 0x2E76DCu;
            goto label_2e76dc;
        }
    }
    ctx->pc = 0x2E7610u;
label_2e7610:
    // 0x2e7610: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x2E7610u;
    SET_GPR_U32(ctx, 31, 0x2E7618u);
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7618u; }
        if (ctx->pc != 0x2E7618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7618u; }
        if (ctx->pc != 0x2E7618u) { return; }
    }
    ctx->pc = 0x2E7618u;
label_2e7618:
    // 0x2e7618: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7618u;
    {
        const bool branch_taken_0x2e7618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E761Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7618u;
            // 0x2e761c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7618) {
            ctx->pc = 0x2E7628u;
            goto label_2e7628;
        }
    }
    ctx->pc = 0x2E7620u;
    // 0x2e7620: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2E7620u;
    {
        const bool branch_taken_0x2e7620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7620u;
            // 0x2e7624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7620) {
            ctx->pc = 0x2E76DCu;
            goto label_2e76dc;
        }
    }
    ctx->pc = 0x2E7628u;
label_2e7628:
    // 0x2e7628: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2e7628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2e762c: 0x27b10054  addiu       $s1, $sp, 0x54
    ctx->pc = 0x2e762cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2e7630: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e7630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e7634: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2e7634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e7638: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e7638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2e763c: 0x27b00058  addiu       $s0, $sp, 0x58
    ctx->pc = 0x2e763cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2e7640: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2e7640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7644: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2e7644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2e7648: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x2e7648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x2e764c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x2e764cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x2e7650: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2e7650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x2e7654: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2e7654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2e7658: 0xc04de1c  jal         func_137870
    ctx->pc = 0x2E7658u;
    SET_GPR_U32(ctx, 31, 0x2E7660u);
    ctx->pc = 0x2E765Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7658u;
            // 0x2e765c: 0xafa00068  sw          $zero, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137870u;
    if (runtime->hasFunction(0x137870u)) {
        auto targetFn = runtime->lookupFunction(0x137870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7660u; }
        if (ctx->pc != 0x2E7660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldDir__8mgCFrameFPfPf_0x137870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7660u; }
        if (ctx->pc != 0x2E7660u) { return; }
    }
    ctx->pc = 0x2E7660u;
label_2e7660:
    // 0x2e7660: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e7660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e7664: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e7664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e7668: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2E7668u;
    SET_GPR_U32(ctx, 31, 0x2E7670u);
    ctx->pc = 0x2E766Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7668u;
            // 0x2e766c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7670u; }
        if (ctx->pc != 0x2E7670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7670u; }
        if (ctx->pc != 0x2E7670u) { return; }
    }
    ctx->pc = 0x2E7670u;
label_2e7670:
    // 0x2e7670: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e7670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e7674: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2E7674u;
    SET_GPR_U32(ctx, 31, 0x2E767Cu);
    ctx->pc = 0x2E7678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7674u;
            // 0x2e7678: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E767Cu; }
        if (ctx->pc != 0x2E767Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E767Cu; }
        if (ctx->pc != 0x2E767Cu) { return; }
    }
    ctx->pc = 0x2E767Cu;
label_2e767c:
    // 0x2e767c: 0xc60d0000  lwc1        $f13, 0x0($s0)
    ctx->pc = 0x2e767cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e7680: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x2E7680u;
    SET_GPR_U32(ctx, 31, 0x2E7688u);
    ctx->pc = 0x2E7684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7680u;
            // 0x2e7684: 0xc7ac0050  lwc1        $f12, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7688u; }
        if (ctx->pc != 0x2E7688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7688u; }
        if (ctx->pc != 0x2E7688u) { return; }
    }
    ctx->pc = 0x2E7688u;
label_2e7688:
    // 0x2e7688: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e7688u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2e768c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2e768cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7690: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2e7690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7694: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x2e7694u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2e7698: 0xc047cc0  jal         func_11F300
    ctx->pc = 0x2E7698u;
    SET_GPR_U32(ctx, 31, 0x2E76A0u);
    ctx->pc = 0x2E769Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7698u;
            // 0x2e769c: 0x46010b1c  madd.s      $f12, $f1, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F300u;
    if (runtime->hasFunction(0x11F300u)) {
        auto targetFn = runtime->lookupFunction(0x11F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E76A0u; }
        if (ctx->pc != 0x2E76A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x11f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E76A0u; }
        if (ctx->pc != 0x2E76A0u) { return; }
    }
    ctx->pc = 0x2E76A0u;
label_2e76a0:
    // 0x2e76a0: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2e76a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e76a4: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x2E76A4u;
    SET_GPR_U32(ctx, 31, 0x2E76ACu);
    ctx->pc = 0x2E76A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E76A4u;
            // 0x2e76a8: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E76ACu; }
        if (ctx->pc != 0x2E76ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E76ACu; }
        if (ctx->pc != 0x2E76ACu) { return; }
    }
    ctx->pc = 0x2E76ACu;
label_2e76ac:
    // 0x2e76ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e76acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e76b0: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2e76b0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2e76b4: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E76B4u;
    SET_GPR_U32(ctx, 31, 0x2E76BCu);
    ctx->pc = 0x2E76B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E76B4u;
            // 0x2e76b8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E76BCu; }
        if (ctx->pc != 0x2E76BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E76BCu; }
        if (ctx->pc != 0x2E76BCu) { return; }
    }
    ctx->pc = 0x2E76BCu;
label_2e76bc:
    // 0x2e76bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e76bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e76c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e76c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e76c4: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E76C4u;
    SET_GPR_U32(ctx, 31, 0x2E76CCu);
    ctx->pc = 0x2E76C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E76C4u;
            // 0x2e76c8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E76CCu; }
        if (ctx->pc != 0x2E76CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E76CCu; }
        if (ctx->pc != 0x2E76CCu) { return; }
    }
    ctx->pc = 0x2E76CCu;
label_2e76cc:
    // 0x2e76cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e76ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e76d0: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E76D0u;
    SET_GPR_U32(ctx, 31, 0x2E76D8u);
    ctx->pc = 0x2E76D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E76D0u;
            // 0x2e76d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E76D8u; }
        if (ctx->pc != 0x2E76D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E76D8u; }
        if (ctx->pc != 0x2E76D8u) { return; }
    }
    ctx->pc = 0x2E76D8u;
label_2e76d8:
    // 0x2e76d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e76d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e76dc:
    // 0x2e76dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e76dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e76e0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e76e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e76e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e76e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e76e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e76e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e76ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e76ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e76f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E76F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E76F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E76F0u;
            // 0x2e76f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E76F8u;
}
