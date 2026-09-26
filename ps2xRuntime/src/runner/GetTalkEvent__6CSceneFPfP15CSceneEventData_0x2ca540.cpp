#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTalkEvent__6CSceneFPfP15CSceneEventData
// Address: 0x2ca540 - 0x2ca6c4
void GetTalkEvent__6CSceneFPfP15CSceneEventData_0x2ca540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTalkEvent__6CSceneFPfP15CSceneEventData_0x2ca540");
#endif

    switch (ctx->pc) {
        case 0x2ca540u: goto label_2ca540;
        case 0x2ca544u: goto label_2ca544;
        case 0x2ca548u: goto label_2ca548;
        case 0x2ca54cu: goto label_2ca54c;
        case 0x2ca550u: goto label_2ca550;
        case 0x2ca554u: goto label_2ca554;
        case 0x2ca558u: goto label_2ca558;
        case 0x2ca55cu: goto label_2ca55c;
        case 0x2ca560u: goto label_2ca560;
        case 0x2ca564u: goto label_2ca564;
        case 0x2ca568u: goto label_2ca568;
        case 0x2ca56cu: goto label_2ca56c;
        case 0x2ca570u: goto label_2ca570;
        case 0x2ca574u: goto label_2ca574;
        case 0x2ca578u: goto label_2ca578;
        case 0x2ca57cu: goto label_2ca57c;
        case 0x2ca580u: goto label_2ca580;
        case 0x2ca584u: goto label_2ca584;
        case 0x2ca588u: goto label_2ca588;
        case 0x2ca58cu: goto label_2ca58c;
        case 0x2ca590u: goto label_2ca590;
        case 0x2ca594u: goto label_2ca594;
        case 0x2ca598u: goto label_2ca598;
        case 0x2ca59cu: goto label_2ca59c;
        case 0x2ca5a0u: goto label_2ca5a0;
        case 0x2ca5a4u: goto label_2ca5a4;
        case 0x2ca5a8u: goto label_2ca5a8;
        case 0x2ca5acu: goto label_2ca5ac;
        case 0x2ca5b0u: goto label_2ca5b0;
        case 0x2ca5b4u: goto label_2ca5b4;
        case 0x2ca5b8u: goto label_2ca5b8;
        case 0x2ca5bcu: goto label_2ca5bc;
        case 0x2ca5c0u: goto label_2ca5c0;
        case 0x2ca5c4u: goto label_2ca5c4;
        case 0x2ca5c8u: goto label_2ca5c8;
        case 0x2ca5ccu: goto label_2ca5cc;
        case 0x2ca5d0u: goto label_2ca5d0;
        case 0x2ca5d4u: goto label_2ca5d4;
        case 0x2ca5d8u: goto label_2ca5d8;
        case 0x2ca5dcu: goto label_2ca5dc;
        case 0x2ca5e0u: goto label_2ca5e0;
        case 0x2ca5e4u: goto label_2ca5e4;
        case 0x2ca5e8u: goto label_2ca5e8;
        case 0x2ca5ecu: goto label_2ca5ec;
        case 0x2ca5f0u: goto label_2ca5f0;
        case 0x2ca5f4u: goto label_2ca5f4;
        case 0x2ca5f8u: goto label_2ca5f8;
        case 0x2ca5fcu: goto label_2ca5fc;
        case 0x2ca600u: goto label_2ca600;
        case 0x2ca604u: goto label_2ca604;
        case 0x2ca608u: goto label_2ca608;
        case 0x2ca60cu: goto label_2ca60c;
        case 0x2ca610u: goto label_2ca610;
        case 0x2ca614u: goto label_2ca614;
        case 0x2ca618u: goto label_2ca618;
        case 0x2ca61cu: goto label_2ca61c;
        case 0x2ca620u: goto label_2ca620;
        case 0x2ca624u: goto label_2ca624;
        case 0x2ca628u: goto label_2ca628;
        case 0x2ca62cu: goto label_2ca62c;
        case 0x2ca630u: goto label_2ca630;
        case 0x2ca634u: goto label_2ca634;
        case 0x2ca638u: goto label_2ca638;
        case 0x2ca63cu: goto label_2ca63c;
        case 0x2ca640u: goto label_2ca640;
        case 0x2ca644u: goto label_2ca644;
        case 0x2ca648u: goto label_2ca648;
        case 0x2ca64cu: goto label_2ca64c;
        case 0x2ca650u: goto label_2ca650;
        case 0x2ca654u: goto label_2ca654;
        case 0x2ca658u: goto label_2ca658;
        case 0x2ca65cu: goto label_2ca65c;
        case 0x2ca660u: goto label_2ca660;
        case 0x2ca664u: goto label_2ca664;
        case 0x2ca668u: goto label_2ca668;
        case 0x2ca66cu: goto label_2ca66c;
        case 0x2ca670u: goto label_2ca670;
        case 0x2ca674u: goto label_2ca674;
        case 0x2ca678u: goto label_2ca678;
        case 0x2ca67cu: goto label_2ca67c;
        case 0x2ca680u: goto label_2ca680;
        case 0x2ca684u: goto label_2ca684;
        case 0x2ca688u: goto label_2ca688;
        case 0x2ca68cu: goto label_2ca68c;
        case 0x2ca690u: goto label_2ca690;
        case 0x2ca694u: goto label_2ca694;
        case 0x2ca698u: goto label_2ca698;
        case 0x2ca69cu: goto label_2ca69c;
        case 0x2ca6a0u: goto label_2ca6a0;
        case 0x2ca6a4u: goto label_2ca6a4;
        case 0x2ca6a8u: goto label_2ca6a8;
        case 0x2ca6acu: goto label_2ca6ac;
        case 0x2ca6b0u: goto label_2ca6b0;
        case 0x2ca6b4u: goto label_2ca6b4;
        case 0x2ca6b8u: goto label_2ca6b8;
        case 0x2ca6bcu: goto label_2ca6bc;
        case 0x2ca6c0u: goto label_2ca6c0;
        default: break;
    }

    ctx->pc = 0x2ca540u;

label_2ca540:
    // 0x2ca540: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x2ca540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_2ca544:
    // 0x2ca544: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ca544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2ca548:
    // 0x2ca548: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2ca548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2ca54c:
    // 0x2ca54c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2ca54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2ca550:
    // 0x2ca550: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ca550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2ca554:
    // 0x2ca554: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ca554u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ca558:
    // 0x2ca558: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ca558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2ca55c:
    // 0x2ca55c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ca55cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ca560:
    // 0x2ca560: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ca560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2ca564:
    // 0x2ca564: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ca564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ca568:
    // 0x2ca568: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ca568u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2ca56c:
    // 0x2ca56c: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x2ca56cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2ca570:
    // 0x2ca570: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ca570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2ca574:
    // 0x2ca574: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ca574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ca578:
    // 0x2ca578: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2ca578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2ca57c:
    // 0x2ca57c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ca57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ca580:
    // 0x2ca580: 0xc0a11a4  jal         func_284690
label_2ca584:
    if (ctx->pc == 0x2CA584u) {
        ctx->pc = 0x2CA584u;
            // 0x2ca584: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA588u;
        goto label_2ca588;
    }
    ctx->pc = 0x2CA580u;
    SET_GPR_U32(ctx, 31, 0x2CA588u);
    ctx->pc = 0x2CA584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA580u;
            // 0x2ca584: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284690u;
    if (runtime->hasFunction(0x284690u)) {
        auto targetFn = runtime->lookupFunction(0x284690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA588u; }
        if (ctx->pc != 0x2CA588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsActive__6CSceneFii_0x284690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA588u; }
        if (ctx->pc != 0x2CA588u) { return; }
    }
    ctx->pc = 0x2CA588u;
label_2ca588:
    // 0x2ca588: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_2ca58c:
    if (ctx->pc == 0x2CA58Cu) {
        ctx->pc = 0x2CA58Cu;
            // 0x2ca58c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA590u;
        goto label_2ca590;
    }
    ctx->pc = 0x2CA588u;
    {
        const bool branch_taken_0x2ca588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA588u;
            // 0x2ca58c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca588) {
            ctx->pc = 0x2CA68Cu;
            goto label_2ca68c;
        }
    }
    ctx->pc = 0x2CA590u;
label_2ca590:
    // 0x2ca590: 0xc0a0ed8  jal         func_283B60
label_2ca594:
    if (ctx->pc == 0x2CA594u) {
        ctx->pc = 0x2CA594u;
            // 0x2ca594: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA598u;
        goto label_2ca598;
    }
    ctx->pc = 0x2CA590u;
    SET_GPR_U32(ctx, 31, 0x2CA598u);
    ctx->pc = 0x2CA594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA590u;
            // 0x2ca594: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA598u; }
        if (ctx->pc != 0x2CA598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA598u; }
        if (ctx->pc != 0x2CA598u) { return; }
    }
    ctx->pc = 0x2CA598u;
label_2ca598:
    // 0x2ca598: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2ca598u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca59c:
    // 0x2ca59c: 0x1280003b  beqz        $s4, . + 4 + (0x3B << 2)
label_2ca5a0:
    if (ctx->pc == 0x2CA5A0u) {
        ctx->pc = 0x2CA5A4u;
        goto label_2ca5a4;
    }
    ctx->pc = 0x2CA59Cu;
    {
        const bool branch_taken_0x2ca59c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca59c) {
            ctx->pc = 0x2CA68Cu;
            goto label_2ca68c;
        }
    }
    ctx->pc = 0x2CA5A4u;
label_2ca5a4:
    // 0x2ca5a4: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2ca5a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ca5a8:
    // 0x2ca5a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ca5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ca5ac:
    // 0x2ca5ac: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2ca5acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2ca5b0:
    // 0x2ca5b0: 0x320f809  jalr        $t9
label_2ca5b4:
    if (ctx->pc == 0x2CA5B4u) {
        ctx->pc = 0x2CA5B4u;
            // 0x2ca5b4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2CA5B8u;
        goto label_2ca5b8;
    }
    ctx->pc = 0x2CA5B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CA5B8u);
        ctx->pc = 0x2CA5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA5B0u;
            // 0x2ca5b4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CA5B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CA5B8u; }
            if (ctx->pc != 0x2CA5B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2CA5B8u;
label_2ca5b8:
    // 0x2ca5b8: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2ca5b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ca5bc:
    // 0x2ca5bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ca5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ca5c0:
    // 0x2ca5c0: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2ca5c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2ca5c4:
    // 0x2ca5c4: 0x320f809  jalr        $t9
label_2ca5c8:
    if (ctx->pc == 0x2CA5C8u) {
        ctx->pc = 0x2CA5C8u;
            // 0x2ca5c8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2CA5CCu;
        goto label_2ca5cc;
    }
    ctx->pc = 0x2CA5C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CA5CCu);
        ctx->pc = 0x2CA5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA5C4u;
            // 0x2ca5c8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CA5CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CA5CCu; }
            if (ctx->pc != 0x2CA5CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2CA5CCu;
label_2ca5cc:
    // 0x2ca5cc: 0x26643050  addiu       $a0, $s3, 0x3050
    ctx->pc = 0x2ca5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12368));
label_2ca5d0:
    // 0x2ca5d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ca5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ca5d4:
    // 0x2ca5d4: 0xc0b3744  jal         func_2CDD10
label_2ca5d8:
    if (ctx->pc == 0x2CA5D8u) {
        ctx->pc = 0x2CA5D8u;
            // 0x2ca5d8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2CA5DCu;
        goto label_2ca5dc;
    }
    ctx->pc = 0x2CA5D4u;
    SET_GPR_U32(ctx, 31, 0x2CA5DCu);
    ctx->pc = 0x2CA5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA5D4u;
            // 0x2ca5d8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDD10u;
    if (runtime->hasFunction(0x2CDD10u)) {
        auto targetFn = runtime->lookupFunction(0x2CDD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA5DCu; }
        if (ctx->pc != 0x2CA5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTalkRect__13CVillagerMngrFiPf_0x2cdd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA5DCu; }
        if (ctx->pc != 0x2CA5DCu) { return; }
    }
    ctx->pc = 0x2CA5DCu;
label_2ca5dc:
    // 0x2ca5dc: 0x440002b  bltz        $v0, . + 4 + (0x2B << 2)
label_2ca5e0:
    if (ctx->pc == 0x2CA5E0u) {
        ctx->pc = 0x2CA5E0u;
            // 0x2ca5e0: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->pc = 0x2CA5E4u;
        goto label_2ca5e4;
    }
    ctx->pc = 0x2CA5DCu;
    {
        const bool branch_taken_0x2ca5dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CA5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA5DCu;
            // 0x2ca5e0: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca5dc) {
            ctx->pc = 0x2CA68Cu;
            goto label_2ca68c;
        }
    }
    ctx->pc = 0x2CA5E4u;
label_2ca5e4:
    // 0x2ca5e4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2ca5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ca5e8:
    // 0x2ca5e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca5e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ca5ec:
    // 0x2ca5ec: 0x0  nop
    ctx->pc = 0x2ca5ecu;
    // NOP
label_2ca5f0:
    // 0x2ca5f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ca5f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ca5f4:
    // 0x2ca5f4: 0x0  nop
    ctx->pc = 0x2ca5f4u;
    // NOP
label_2ca5f8:
    // 0x2ca5f8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2ca5fc:
    if (ctx->pc == 0x2CA5FCu) {
        ctx->pc = 0x2CA600u;
        goto label_2ca600;
    }
    ctx->pc = 0x2CA5F8u;
    {
        const bool branch_taken_0x2ca5f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ca5f8) {
            ctx->pc = 0x2CA604u;
            goto label_2ca604;
        }
    }
    ctx->pc = 0x2CA600u;
label_2ca600:
    // 0x2ca600: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x2ca600u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_2ca604:
    // 0x2ca604: 0x0  nop
    ctx->pc = 0x2ca604u;
    // NOP
label_2ca608:
    // 0x2ca608: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ca608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2ca60c:
    // 0x2ca60c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2ca610:
    if (ctx->pc == 0x2CA610u) {
        ctx->pc = 0x2CA610u;
            // 0x2ca610: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2CA614u;
        goto label_2ca614;
    }
    ctx->pc = 0x2CA60Cu;
    {
        const bool branch_taken_0x2ca60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA60Cu;
            // 0x2ca610: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca60c) {
            ctx->pc = 0x2CA63Cu;
            goto label_2ca63c;
        }
    }
    ctx->pc = 0x2CA614u;
label_2ca614:
    // 0x2ca614: 0xc04c050  jal         func_130140
label_2ca618:
    if (ctx->pc == 0x2CA618u) {
        ctx->pc = 0x2CA618u;
            // 0x2ca618: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2CA61Cu;
        goto label_2ca61c;
    }
    ctx->pc = 0x2CA614u;
    SET_GPR_U32(ctx, 31, 0x2CA61Cu);
    ctx->pc = 0x2CA618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA614u;
            // 0x2ca618: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA61Cu; }
        if (ctx->pc != 0x2CA61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA61Cu; }
        if (ctx->pc != 0x2CA61Cu) { return; }
    }
    ctx->pc = 0x2CA61Cu;
label_2ca61c:
    // 0x2ca61c: 0xc7ac0084  lwc1        $f12, 0x84($sp)
    ctx->pc = 0x2ca61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ca620:
    // 0x2ca620: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2ca620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2ca624:
    // 0x2ca624: 0xc04c154  jal         func_130550
label_2ca628:
    if (ctx->pc == 0x2CA628u) {
        ctx->pc = 0x2CA628u;
            // 0x2ca628: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2CA62Cu;
        goto label_2ca62c;
    }
    ctx->pc = 0x2CA624u;
    SET_GPR_U32(ctx, 31, 0x2CA62Cu);
    ctx->pc = 0x2CA628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA624u;
            // 0x2ca628: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130550u;
    if (runtime->hasFunction(0x130550u)) {
        auto targetFn = runtime->lookupFunction(0x130550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA62Cu; }
        if (ctx->pc != 0x2CA62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCreateMatrixPY__FPA4_fPff_0x130550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA62Cu; }
        if (ctx->pc != 0x2CA62Cu) { return; }
    }
    ctx->pc = 0x2CA62Cu;
label_2ca62c:
    // 0x2ca62c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2ca62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2ca630:
    // 0x2ca630: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2ca630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2ca634:
    // 0x2ca634: 0xc041bb0  jal         func_106EC0
label_2ca638:
    if (ctx->pc == 0x2CA638u) {
        ctx->pc = 0x2CA638u;
            // 0x2ca638: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2CA63Cu;
        goto label_2ca63c;
    }
    ctx->pc = 0x2CA634u;
    SET_GPR_U32(ctx, 31, 0x2CA63Cu);
    ctx->pc = 0x2CA638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA634u;
            // 0x2ca638: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA63Cu; }
        if (ctx->pc != 0x2CA63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA63Cu; }
        if (ctx->pc != 0x2CA63Cu) { return; }
    }
    ctx->pc = 0x2CA63Cu;
label_2ca63c:
    // 0x2ca63c: 0x0  nop
    ctx->pc = 0x2ca63cu;
    // NOP
label_2ca640:
    // 0x2ca640: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2ca640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2ca644:
    // 0x2ca644: 0xc04c018  jal         func_130060
label_2ca648:
    if (ctx->pc == 0x2CA648u) {
        ctx->pc = 0x2CA648u;
            // 0x2ca648: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA64Cu;
        goto label_2ca64c;
    }
    ctx->pc = 0x2CA644u;
    SET_GPR_U32(ctx, 31, 0x2CA64Cu);
    ctx->pc = 0x2CA648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA644u;
            // 0x2ca648: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA64Cu; }
        if (ctx->pc != 0x2CA64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA64Cu; }
        if (ctx->pc != 0x2CA64Cu) { return; }
    }
    ctx->pc = 0x2CA64Cu;
label_2ca64c:
    // 0x2ca64c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2ca64cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ca650:
    // 0x2ca650: 0x0  nop
    ctx->pc = 0x2ca650u;
    // NOP
label_2ca654:
    // 0x2ca654: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_2ca658:
    if (ctx->pc == 0x2CA658u) {
        ctx->pc = 0x2CA658u;
            // 0x2ca658: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2CA65Cu;
        goto label_2ca65c;
    }
    ctx->pc = 0x2CA654u;
    {
        const bool branch_taken_0x2ca654 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA654u;
            // 0x2ca658: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca654) {
            ctx->pc = 0x2CA68Cu;
            goto label_2ca68c;
        }
    }
    ctx->pc = 0x2CA65Cu;
label_2ca65c:
    // 0x2ca65c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ca65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ca660:
    // 0x2ca660: 0xc049c86  jal         func_127218
label_2ca664:
    if (ctx->pc == 0x2CA664u) {
        ctx->pc = 0x2CA664u;
            // 0x2ca664: 0x240600d0  addiu       $a2, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x2CA668u;
        goto label_2ca668;
    }
    ctx->pc = 0x2CA660u;
    SET_GPR_U32(ctx, 31, 0x2CA668u);
    ctx->pc = 0x2CA664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA660u;
            // 0x2ca664: 0x240600d0  addiu       $a2, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA668u; }
        if (ctx->pc != 0x2CA668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA668u; }
        if (ctx->pc != 0x2CA668u) { return; }
    }
    ctx->pc = 0x2CA668u;
label_2ca668:
    // 0x2ca668: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ca668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ca66c:
    // 0x2ca66c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ca66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ca670:
    // 0x2ca670: 0xc0a0ecc  jal         func_283B30
label_2ca674:
    if (ctx->pc == 0x2CA674u) {
        ctx->pc = 0x2CA674u;
            // 0x2ca674: 0xae3000c4  sw          $s0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 16));
        ctx->pc = 0x2CA678u;
        goto label_2ca678;
    }
    ctx->pc = 0x2CA670u;
    SET_GPR_U32(ctx, 31, 0x2CA678u);
    ctx->pc = 0x2CA674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA670u;
            // 0x2ca674: 0xae3000c4  sw          $s0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B30u;
    if (runtime->hasFunction(0x283B30u)) {
        auto targetFn = runtime->lookupFunction(0x283B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA678u; }
        if (ctx->pc != 0x2CA678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaNo__6CSceneFi_0x283b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA678u; }
        if (ctx->pc != 0x2CA678u) { return; }
    }
    ctx->pc = 0x2CA678u;
label_2ca678:
    // 0x2ca678: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x2ca678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
label_2ca67c:
    // 0x2ca67c: 0x2603fff8  addiu       $v1, $s0, -0x8
    ctx->pc = 0x2ca67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_2ca680:
    // 0x2ca680: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2ca680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_2ca684:
    // 0x2ca684: 0x10000006  b           . + 4 + (0x6 << 2)
label_2ca688:
    if (ctx->pc == 0x2CA688u) {
        ctx->pc = 0x2CA688u;
            // 0x2ca688: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CA68Cu;
        goto label_2ca68c;
    }
    ctx->pc = 0x2CA684u;
    {
        const bool branch_taken_0x2ca684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA684u;
            // 0x2ca688: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca684) {
            ctx->pc = 0x2CA6A0u;
            goto label_2ca6a0;
        }
    }
    ctx->pc = 0x2CA68Cu;
label_2ca68c:
    // 0x2ca68c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ca68cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2ca690:
    // 0x2ca690: 0x2a020040  slti        $v0, $s0, 0x40
    ctx->pc = 0x2ca690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
label_2ca694:
    // 0x2ca694: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
label_2ca698:
    if (ctx->pc == 0x2CA698u) {
        ctx->pc = 0x2CA698u;
            // 0x2ca698: 0x3c0241f0  lui         $v0, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
        ctx->pc = 0x2CA69Cu;
        goto label_2ca69c;
    }
    ctx->pc = 0x2CA694u;
    {
        const bool branch_taken_0x2ca694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA694u;
            // 0x2ca698: 0x3c0241f0  lui         $v0, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca694) {
            ctx->pc = 0x2CA574u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ca574;
        }
    }
    ctx->pc = 0x2CA69Cu;
label_2ca69c:
    // 0x2ca69c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca69cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ca6a0:
    // 0x2ca6a0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ca6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2ca6a4:
    // 0x2ca6a4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ca6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ca6a8:
    // 0x2ca6a8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2ca6a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ca6ac:
    // 0x2ca6ac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2ca6acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ca6b0:
    // 0x2ca6b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ca6b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ca6b4:
    // 0x2ca6b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ca6b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ca6b8:
    // 0x2ca6b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ca6b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ca6bc:
    // 0x2ca6bc: 0x3e00008  jr          $ra
label_2ca6c0:
    if (ctx->pc == 0x2CA6C0u) {
        ctx->pc = 0x2CA6C0u;
            // 0x2ca6c0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x2CA6C4u;
        goto label_fallthrough_0x2ca6bc;
    }
    ctx->pc = 0x2CA6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA6BCu;
            // 0x2ca6c0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ca6bc:
    ctx->pc = 0x2CA6C4u;
}
