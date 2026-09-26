#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AssignFuncPoint__15CMapTreasureBoxFP10CFuncPointP9CMapParts
// Address: 0x1682f0 - 0x1683bc
void AssignFuncPoint__15CMapTreasureBoxFP10CFuncPointP9CMapParts_0x1682f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AssignFuncPoint__15CMapTreasureBoxFP10CFuncPointP9CMapParts_0x1682f0");
#endif

    switch (ctx->pc) {
        case 0x1682f0u: goto label_1682f0;
        case 0x1682f4u: goto label_1682f4;
        case 0x1682f8u: goto label_1682f8;
        case 0x1682fcu: goto label_1682fc;
        case 0x168300u: goto label_168300;
        case 0x168304u: goto label_168304;
        case 0x168308u: goto label_168308;
        case 0x16830cu: goto label_16830c;
        case 0x168310u: goto label_168310;
        case 0x168314u: goto label_168314;
        case 0x168318u: goto label_168318;
        case 0x16831cu: goto label_16831c;
        case 0x168320u: goto label_168320;
        case 0x168324u: goto label_168324;
        case 0x168328u: goto label_168328;
        case 0x16832cu: goto label_16832c;
        case 0x168330u: goto label_168330;
        case 0x168334u: goto label_168334;
        case 0x168338u: goto label_168338;
        case 0x16833cu: goto label_16833c;
        case 0x168340u: goto label_168340;
        case 0x168344u: goto label_168344;
        case 0x168348u: goto label_168348;
        case 0x16834cu: goto label_16834c;
        case 0x168350u: goto label_168350;
        case 0x168354u: goto label_168354;
        case 0x168358u: goto label_168358;
        case 0x16835cu: goto label_16835c;
        case 0x168360u: goto label_168360;
        case 0x168364u: goto label_168364;
        case 0x168368u: goto label_168368;
        case 0x16836cu: goto label_16836c;
        case 0x168370u: goto label_168370;
        case 0x168374u: goto label_168374;
        case 0x168378u: goto label_168378;
        case 0x16837cu: goto label_16837c;
        case 0x168380u: goto label_168380;
        case 0x168384u: goto label_168384;
        case 0x168388u: goto label_168388;
        case 0x16838cu: goto label_16838c;
        case 0x168390u: goto label_168390;
        case 0x168394u: goto label_168394;
        case 0x168398u: goto label_168398;
        case 0x16839cu: goto label_16839c;
        case 0x1683a0u: goto label_1683a0;
        case 0x1683a4u: goto label_1683a4;
        case 0x1683a8u: goto label_1683a8;
        case 0x1683acu: goto label_1683ac;
        case 0x1683b0u: goto label_1683b0;
        case 0x1683b4u: goto label_1683b4;
        case 0x1683b8u: goto label_1683b8;
        default: break;
    }

    ctx->pc = 0x1682f0u;

label_1682f0:
    // 0x1682f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1682f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1682f4:
    // 0x1682f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1682f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1682f8:
    // 0x1682f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1682f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1682fc:
    // 0x1682fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1682fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_168300:
    // 0x168300: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x168300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_168304:
    // 0x168304: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_168308:
    if (ctx->pc == 0x168308u) {
        ctx->pc = 0x168308u;
            // 0x168308: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16830Cu;
        goto label_16830c;
    }
    ctx->pc = 0x168304u;
    {
        const bool branch_taken_0x168304 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x168308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168304u;
            // 0x168308: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168304) {
            ctx->pc = 0x168314u;
            goto label_168314;
        }
    }
    ctx->pc = 0x16830Cu;
label_16830c:
    // 0x16830c: 0x10000026  b           . + 4 + (0x26 << 2)
label_168310:
    if (ctx->pc == 0x168310u) {
        ctx->pc = 0x168310u;
            // 0x168310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x168314u;
        goto label_168314;
    }
    ctx->pc = 0x16830Cu;
    {
        const bool branch_taken_0x16830c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16830Cu;
            // 0x168310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16830c) {
            ctx->pc = 0x1683A8u;
            goto label_1683a8;
        }
    }
    ctx->pc = 0x168314u;
label_168314:
    // 0x168314: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x168314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_168318:
    // 0x168318: 0xae230660  sw          $v1, 0x660($s1)
    ctx->pc = 0x168318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1632), GPR_U32(ctx, 3));
label_16831c:
    // 0x16831c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x16831cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_168320:
    // 0x168320: 0xae220664  sw          $v0, 0x664($s1)
    ctx->pc = 0x168320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1636), GPR_U32(ctx, 2));
label_168324:
    // 0x168324: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x168324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_168328:
    // 0x168328: 0xae220668  sw          $v0, 0x668($s1)
    ctx->pc = 0x168328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1640), GPR_U32(ctx, 2));
label_16832c:
    // 0x16832c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x16832cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_168330:
    // 0x168330: 0xae22066c  sw          $v0, 0x66C($s1)
    ctx->pc = 0x168330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1644), GPR_U32(ctx, 2));
label_168334:
    // 0x168334: 0x8e22066c  lw          $v0, 0x66C($s1)
    ctx->pc = 0x168334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1644)));
label_168338:
    // 0x168338: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_16833c:
    if (ctx->pc == 0x16833Cu) {
        ctx->pc = 0x168340u;
        goto label_168340;
    }
    ctx->pc = 0x168338u;
    {
        const bool branch_taken_0x168338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168338) {
            ctx->pc = 0x168344u;
            goto label_168344;
        }
    }
    ctx->pc = 0x168340u;
label_168340:
    // 0x168340: 0xae23066c  sw          $v1, 0x66C($s1)
    ctx->pc = 0x168340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1644), GPR_U32(ctx, 3));
label_168344:
    // 0x168344: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x168344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_168348:
    // 0x168348: 0xae220670  sw          $v0, 0x670($s1)
    ctx->pc = 0x168348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 2));
label_16834c:
    // 0x16834c: 0xae300674  sw          $s0, 0x674($s1)
    ctx->pc = 0x16834cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 16));
label_168350:
    // 0x168350: 0xae260678  sw          $a2, 0x678($s1)
    ctx->pc = 0x168350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 6));
label_168354:
    // 0x168354: 0x8e220678  lw          $v0, 0x678($s1)
    ctx->pc = 0x168354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_168358:
    // 0x168358: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_16835c:
    if (ctx->pc == 0x16835Cu) {
        ctx->pc = 0x168360u;
        goto label_168360;
    }
    ctx->pc = 0x168358u;
    {
        const bool branch_taken_0x168358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168358) {
            ctx->pc = 0x168374u;
            goto label_168374;
        }
    }
    ctx->pc = 0x168360u;
label_168360:
    // 0x168360: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x168360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_168364:
    // 0x168364: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_168368:
    if (ctx->pc == 0x168368u) {
        ctx->pc = 0x168368u;
            // 0x168368: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x16836Cu;
        goto label_16836c;
    }
    ctx->pc = 0x168364u;
    {
        const bool branch_taken_0x168364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x168368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168364u;
            // 0x168368: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168364) {
            ctx->pc = 0x168374u;
            goto label_168374;
        }
    }
    ctx->pc = 0x16836Cu;
label_16836c:
    // 0x16836c: 0xc04db0c  jal         func_136C30
label_168370:
    if (ctx->pc == 0x168370u) {
        ctx->pc = 0x168374u;
        goto label_168374;
    }
    ctx->pc = 0x16836Cu;
    SET_GPR_U32(ctx, 31, 0x168374u);
    ctx->pc = 0x136C30u;
    if (runtime->hasFunction(0x136C30u)) {
        auto targetFn = runtime->lookupFunction(0x136C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168374u; }
        if (ctx->pc != 0x168374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReference__8mgCFrameFP8mgCFrame_0x136c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168374u; }
        if (ctx->pc != 0x168374u) { return; }
    }
    ctx->pc = 0x168374u;
label_168374:
    // 0x168374: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x168374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_168378:
    // 0x168378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16837c:
    // 0x16837c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x16837cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_168380:
    // 0x168380: 0x320f809  jalr        $t9
label_168384:
    if (ctx->pc == 0x168384u) {
        ctx->pc = 0x168384u;
            // 0x168384: 0x26050180  addiu       $a1, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->pc = 0x168388u;
        goto label_168388;
    }
    ctx->pc = 0x168380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x168388u);
        ctx->pc = 0x168384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168380u;
            // 0x168384: 0x26050180  addiu       $a1, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x168388u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x168388u; }
            if (ctx->pc != 0x168388u) { return; }
        }
        }
    }
    ctx->pc = 0x168388u;
label_168388:
    // 0x168388: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x168388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16838c:
    // 0x16838c: 0x26050190  addiu       $a1, $s0, 0x190
    ctx->pc = 0x16838cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_168390:
    // 0x168390: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x168390u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_168394:
    // 0x168394: 0x320f809  jalr        $t9
label_168398:
    if (ctx->pc == 0x168398u) {
        ctx->pc = 0x168398u;
            // 0x168398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16839Cu;
        goto label_16839c;
    }
    ctx->pc = 0x168394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16839Cu);
        ctx->pc = 0x168398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168394u;
            // 0x168398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16839Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16839Cu; }
            if (ctx->pc != 0x16839Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16839Cu;
label_16839c:
    // 0x16839c: 0xc05cdc0  jal         func_173700
label_1683a0:
    if (ctx->pc == 0x1683A0u) {
        ctx->pc = 0x1683A0u;
            // 0x1683a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1683A4u;
        goto label_1683a4;
    }
    ctx->pc = 0x16839Cu;
    SET_GPR_U32(ctx, 31, 0x1683A4u);
    ctx->pc = 0x1683A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16839Cu;
            // 0x1683a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173700u;
    if (runtime->hasFunction(0x173700u)) {
        auto targetFn = runtime->lookupFunction(0x173700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1683A4u; }
        if (ctx->pc != 0x1683A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdatePosition__11CCharacter2Fv_0x173700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1683A4u; }
        if (ctx->pc != 0x1683A4u) { return; }
    }
    ctx->pc = 0x1683A4u;
label_1683a4:
    // 0x1683a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1683a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1683a8:
    // 0x1683a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1683a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1683ac:
    // 0x1683ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1683acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1683b0:
    // 0x1683b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1683b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1683b4:
    // 0x1683b4: 0x3e00008  jr          $ra
label_1683b8:
    if (ctx->pc == 0x1683B8u) {
        ctx->pc = 0x1683B8u;
            // 0x1683b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1683BCu;
        goto label_fallthrough_0x1683b4;
    }
    ctx->pc = 0x1683B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1683B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1683B4u;
            // 0x1683b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1683b4:
    ctx->pc = 0x1683BCu;
}
