#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AttachForm__15CMenuChrCngMenuFv
// Address: 0x2b04e0 - 0x2b065c
void AttachForm__15CMenuChrCngMenuFv_0x2b04e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AttachForm__15CMenuChrCngMenuFv_0x2b04e0");
#endif

    switch (ctx->pc) {
        case 0x2b0508u: goto label_2b0508;
        case 0x2b0520u: goto label_2b0520;
        case 0x2b0534u: goto label_2b0534;
        case 0x2b0548u: goto label_2b0548;
        case 0x2b055cu: goto label_2b055c;
        case 0x2b0570u: goto label_2b0570;
        case 0x2b0584u: goto label_2b0584;
        case 0x2b0598u: goto label_2b0598;
        case 0x2b05b0u: goto label_2b05b0;
        case 0x2b05b8u: goto label_2b05b8;
        case 0x2b05ccu: goto label_2b05cc;
        case 0x2b05d8u: goto label_2b05d8;
        case 0x2b0600u: goto label_2b0600;
        case 0x2b060cu: goto label_2b060c;
        case 0x2b0620u: goto label_2b0620;
        case 0x2b062cu: goto label_2b062c;
        default: break;
    }

    ctx->pc = 0x2b04e0u;

    // 0x2b04e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b04e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b04e4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b04e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b04e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b04e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b04ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b04ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b04f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b04f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b04f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b04f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b04f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b04f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b04fc: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2b04fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2b0500: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2B0500u;
    SET_GPR_U32(ctx, 31, 0x2B0508u);
    ctx->pc = 0x2B0504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0500u;
            // 0x2b0504: 0x24a5ea38  addiu       $a1, $a1, -0x15C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0508u; }
        if (ctx->pc != 0x2B0508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0508u; }
        if (ctx->pc != 0x2B0508u) { return; }
    }
    ctx->pc = 0x2B0508u;
label_2b0508:
    // 0x2b0508: 0xae020140  sw          $v0, 0x140($s0)
    ctx->pc = 0x2b0508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 2));
    // 0x2b050c: 0x8e040140  lw          $a0, 0x140($s0)
    ctx->pc = 0x2b050cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2b0510: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B0510u;
    {
        const bool branch_taken_0x2b0510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0510u;
            // 0x2b0514: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0510) {
            ctx->pc = 0x2B054Cu;
            goto label_2b054c;
        }
    }
    ctx->pc = 0x2B0518u;
    // 0x2b0518: 0xc089664  jal         func_225990
    ctx->pc = 0x2B0518u;
    SET_GPR_U32(ctx, 31, 0x2B0520u);
    ctx->pc = 0x2B051Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0518u;
            // 0x2b051c: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0520u; }
        if (ctx->pc != 0x2B0520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0520u; }
        if (ctx->pc != 0x2B0520u) { return; }
    }
    ctx->pc = 0x2B0520u;
label_2b0520:
    // 0x2b0520: 0xae020144  sw          $v0, 0x144($s0)
    ctx->pc = 0x2b0520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 2));
    // 0x2b0524: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b0524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b0528: 0x8e040140  lw          $a0, 0x140($s0)
    ctx->pc = 0x2b0528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2b052c: 0xc089664  jal         func_225990
    ctx->pc = 0x2B052Cu;
    SET_GPR_U32(ctx, 31, 0x2B0534u);
    ctx->pc = 0x2B0530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B052Cu;
            // 0x2b0530: 0x24a5ea48  addiu       $a1, $a1, -0x15B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0534u; }
        if (ctx->pc != 0x2B0534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0534u; }
        if (ctx->pc != 0x2B0534u) { return; }
    }
    ctx->pc = 0x2B0534u;
label_2b0534:
    // 0x2b0534: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x2b0534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x2b0538: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b0538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b053c: 0x8e040140  lw          $a0, 0x140($s0)
    ctx->pc = 0x2b053cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2b0540: 0xc089664  jal         func_225990
    ctx->pc = 0x2B0540u;
    SET_GPR_U32(ctx, 31, 0x2B0548u);
    ctx->pc = 0x2B0544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0540u;
            // 0x2b0544: 0x24a5ea50  addiu       $a1, $a1, -0x15B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0548u; }
        if (ctx->pc != 0x2B0548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0548u; }
        if (ctx->pc != 0x2B0548u) { return; }
    }
    ctx->pc = 0x2B0548u;
label_2b0548:
    // 0x2b0548: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x2b0548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
label_2b054c:
    // 0x2b054c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2b054cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2b0550: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b0550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b0554: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2B0554u;
    SET_GPR_U32(ctx, 31, 0x2B055Cu);
    ctx->pc = 0x2B0558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0554u;
            // 0x2b0558: 0x24a5ea58  addiu       $a1, $a1, -0x15A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B055Cu; }
        if (ctx->pc != 0x2B055Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B055Cu; }
        if (ctx->pc != 0x2B055Cu) { return; }
    }
    ctx->pc = 0x2B055Cu;
label_2b055c:
    // 0x2b055c: 0xae020170  sw          $v0, 0x170($s0)
    ctx->pc = 0x2b055cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
    // 0x2b0560: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b0560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b0564: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2b0564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2b0568: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2B0568u;
    SET_GPR_U32(ctx, 31, 0x2B0570u);
    ctx->pc = 0x2B056Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0568u;
            // 0x2b056c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0570u; }
        if (ctx->pc != 0x2B0570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0570u; }
        if (ctx->pc != 0x2B0570u) { return; }
    }
    ctx->pc = 0x2B0570u;
label_2b0570:
    // 0x2b0570: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x2b0570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x2b0574: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b0574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b0578: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2b0578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2b057c: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2B057Cu;
    SET_GPR_U32(ctx, 31, 0x2B0584u);
    ctx->pc = 0x2B0580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B057Cu;
            // 0x2b0580: 0x24a5ea70  addiu       $a1, $a1, -0x1590 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0584u; }
        if (ctx->pc != 0x2B0584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0584u; }
        if (ctx->pc != 0x2B0584u) { return; }
    }
    ctx->pc = 0x2B0584u;
label_2b0584:
    // 0x2b0584: 0xae020178  sw          $v0, 0x178($s0)
    ctx->pc = 0x2b0584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 2));
    // 0x2b0588: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b0588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b058c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2b058cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2b0590: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2B0590u;
    SET_GPR_U32(ctx, 31, 0x2B0598u);
    ctx->pc = 0x2B0594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0590u;
            // 0x2b0594: 0x24a5ea80  addiu       $a1, $a1, -0x1580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0598u; }
        if (ctx->pc != 0x2B0598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0598u; }
        if (ctx->pc != 0x2B0598u) { return; }
    }
    ctx->pc = 0x2B0598u;
label_2b0598:
    // 0x2b0598: 0xae02017c  sw          $v0, 0x17C($s0)
    ctx->pc = 0x2b0598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
    // 0x2b059c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b059cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b05a0: 0x8e040178  lw          $a0, 0x178($s0)
    ctx->pc = 0x2b05a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x2b05a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b05a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b05a8: 0xc0896c8  jal         func_225B20
    ctx->pc = 0x2B05A8u;
    SET_GPR_U32(ctx, 31, 0x2B05B0u);
    ctx->pc = 0x2B05ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B05A8u;
            // 0x2b05ac: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B20u;
    if (runtime->hasFunction(0x225B20u)) {
        auto targetFn = runtime->lookupFunction(0x225B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B05B0u; }
        if (ctx->pc != 0x2B05B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActionCharaPtr__16CMenuPosDataFormFP12CActionCharaii_0x225b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B05B0u; }
        if (ctx->pc != 0x2B05B0u) { return; }
    }
    ctx->pc = 0x2B05B0u;
label_2b05b0:
    // 0x2b05b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b05b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b05b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b05b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b05b8:
    // 0x2b05b8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b05b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b05bc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2b05bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b05c0: 0x24a5ea90  addiu       $a1, $a1, -0x1570
    ctx->pc = 0x2b05c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961808));
    // 0x2b05c4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2B05C4u;
    SET_GPR_U32(ctx, 31, 0x2B05CCu);
    ctx->pc = 0x2B05C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B05C4u;
            // 0x2b05c8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B05CCu; }
        if (ctx->pc != 0x2B05CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B05CCu; }
        if (ctx->pc != 0x2B05CCu) { return; }
    }
    ctx->pc = 0x2B05CCu;
label_2b05cc:
    // 0x2b05cc: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2b05ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2b05d0: 0xc08aac8  jal         func_22AB20
    ctx->pc = 0x2B05D0u;
    SET_GPR_U32(ctx, 31, 0x2B05D8u);
    ctx->pc = 0x2B05D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B05D0u;
            // 0x2b05d4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AB20u;
    if (runtime->hasFunction(0x22AB20u)) {
        auto targetFn = runtime->lookupFunction(0x22AB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B05D8u; }
        if (ctx->pc != 0x2B05D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEtcTbl__14CPosDataManageFPc_0x22ab20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B05D8u; }
        if (ctx->pc != 0x2B05D8u) { return; }
    }
    ctx->pc = 0x2B05D8u;
label_2b05d8:
    // 0x2b05d8: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x2b05d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2b05dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b05dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b05e0: 0xac62015c  sw          $v0, 0x15C($v1)
    ctx->pc = 0x2b05e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 348), GPR_U32(ctx, 2));
    // 0x2b05e4: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x2b05e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2b05e8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2B05E8u;
    {
        const bool branch_taken_0x2b05e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B05ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B05E8u;
            // 0x2b05ec: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b05e8) {
            ctx->pc = 0x2B05B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b05b8;
        }
    }
    ctx->pc = 0x2B05F0u;
    // 0x2b05f0: 0x8e040140  lw          $a0, 0x140($s0)
    ctx->pc = 0x2b05f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2b05f4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b05f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b05f8: 0xc089664  jal         func_225990
    ctx->pc = 0x2B05F8u;
    SET_GPR_U32(ctx, 31, 0x2B0600u);
    ctx->pc = 0x2B05FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B05F8u;
            // 0x2b05fc: 0x24a5ea98  addiu       $a1, $a1, -0x1568 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0600u; }
        if (ctx->pc != 0x2B0600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0600u; }
        if (ctx->pc != 0x2B0600u) { return; }
    }
    ctx->pc = 0x2B0600u;
label_2b0600:
    // 0x2b0600: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x2b0600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    // 0x2b0604: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b0604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0608: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b0608u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b060c:
    // 0x2b060c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b060cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b0610: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2b0610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b0614: 0x24a5eaa0  addiu       $a1, $a1, -0x1560
    ctx->pc = 0x2b0614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961824));
    // 0x2b0618: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2B0618u;
    SET_GPR_U32(ctx, 31, 0x2B0620u);
    ctx->pc = 0x2B061Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0618u;
            // 0x2b061c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0620u; }
        if (ctx->pc != 0x2B0620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0620u; }
        if (ctx->pc != 0x2B0620u) { return; }
    }
    ctx->pc = 0x2B0620u;
label_2b0620:
    // 0x2b0620: 0x8e040140  lw          $a0, 0x140($s0)
    ctx->pc = 0x2b0620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2b0624: 0xc089664  jal         func_225990
    ctx->pc = 0x2B0624u;
    SET_GPR_U32(ctx, 31, 0x2B062Cu);
    ctx->pc = 0x2B0628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0624u;
            // 0x2b0628: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B062Cu; }
        if (ctx->pc != 0x2B062Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B062Cu; }
        if (ctx->pc != 0x2B062Cu) { return; }
    }
    ctx->pc = 0x2B062Cu;
label_2b062c:
    // 0x2b062c: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x2b062cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2b0630: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b0630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b0634: 0xac620180  sw          $v0, 0x180($v1)
    ctx->pc = 0x2b0634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 384), GPR_U32(ctx, 2));
    // 0x2b0638: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x2b0638u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b063c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2B063Cu;
    {
        const bool branch_taken_0x2b063c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B063Cu;
            // 0x2b0640: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b063c) {
            ctx->pc = 0x2B060Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b060c;
        }
    }
    ctx->pc = 0x2B0644u;
    // 0x2b0644: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b0644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0648: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b0648u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b064c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b064cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0650: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b0650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0654: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0654u;
            // 0x2b0658: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B065Cu;
}
