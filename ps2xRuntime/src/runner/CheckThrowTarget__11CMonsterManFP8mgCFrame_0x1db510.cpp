#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckThrowTarget__11CMonsterManFP8mgCFrame
// Address: 0x1db510 - 0x1db6bc
void CheckThrowTarget__11CMonsterManFP8mgCFrame_0x1db510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckThrowTarget__11CMonsterManFP8mgCFrame_0x1db510");
#endif

    switch (ctx->pc) {
        case 0x1db510u: goto label_1db510;
        case 0x1db514u: goto label_1db514;
        case 0x1db518u: goto label_1db518;
        case 0x1db51cu: goto label_1db51c;
        case 0x1db520u: goto label_1db520;
        case 0x1db524u: goto label_1db524;
        case 0x1db528u: goto label_1db528;
        case 0x1db52cu: goto label_1db52c;
        case 0x1db530u: goto label_1db530;
        case 0x1db534u: goto label_1db534;
        case 0x1db538u: goto label_1db538;
        case 0x1db53cu: goto label_1db53c;
        case 0x1db540u: goto label_1db540;
        case 0x1db544u: goto label_1db544;
        case 0x1db548u: goto label_1db548;
        case 0x1db54cu: goto label_1db54c;
        case 0x1db550u: goto label_1db550;
        case 0x1db554u: goto label_1db554;
        case 0x1db558u: goto label_1db558;
        case 0x1db55cu: goto label_1db55c;
        case 0x1db560u: goto label_1db560;
        case 0x1db564u: goto label_1db564;
        case 0x1db568u: goto label_1db568;
        case 0x1db56cu: goto label_1db56c;
        case 0x1db570u: goto label_1db570;
        case 0x1db574u: goto label_1db574;
        case 0x1db578u: goto label_1db578;
        case 0x1db57cu: goto label_1db57c;
        case 0x1db580u: goto label_1db580;
        case 0x1db584u: goto label_1db584;
        case 0x1db588u: goto label_1db588;
        case 0x1db58cu: goto label_1db58c;
        case 0x1db590u: goto label_1db590;
        case 0x1db594u: goto label_1db594;
        case 0x1db598u: goto label_1db598;
        case 0x1db59cu: goto label_1db59c;
        case 0x1db5a0u: goto label_1db5a0;
        case 0x1db5a4u: goto label_1db5a4;
        case 0x1db5a8u: goto label_1db5a8;
        case 0x1db5acu: goto label_1db5ac;
        case 0x1db5b0u: goto label_1db5b0;
        case 0x1db5b4u: goto label_1db5b4;
        case 0x1db5b8u: goto label_1db5b8;
        case 0x1db5bcu: goto label_1db5bc;
        case 0x1db5c0u: goto label_1db5c0;
        case 0x1db5c4u: goto label_1db5c4;
        case 0x1db5c8u: goto label_1db5c8;
        case 0x1db5ccu: goto label_1db5cc;
        case 0x1db5d0u: goto label_1db5d0;
        case 0x1db5d4u: goto label_1db5d4;
        case 0x1db5d8u: goto label_1db5d8;
        case 0x1db5dcu: goto label_1db5dc;
        case 0x1db5e0u: goto label_1db5e0;
        case 0x1db5e4u: goto label_1db5e4;
        case 0x1db5e8u: goto label_1db5e8;
        case 0x1db5ecu: goto label_1db5ec;
        case 0x1db5f0u: goto label_1db5f0;
        case 0x1db5f4u: goto label_1db5f4;
        case 0x1db5f8u: goto label_1db5f8;
        case 0x1db5fcu: goto label_1db5fc;
        case 0x1db600u: goto label_1db600;
        case 0x1db604u: goto label_1db604;
        case 0x1db608u: goto label_1db608;
        case 0x1db60cu: goto label_1db60c;
        case 0x1db610u: goto label_1db610;
        case 0x1db614u: goto label_1db614;
        case 0x1db618u: goto label_1db618;
        case 0x1db61cu: goto label_1db61c;
        case 0x1db620u: goto label_1db620;
        case 0x1db624u: goto label_1db624;
        case 0x1db628u: goto label_1db628;
        case 0x1db62cu: goto label_1db62c;
        case 0x1db630u: goto label_1db630;
        case 0x1db634u: goto label_1db634;
        case 0x1db638u: goto label_1db638;
        case 0x1db63cu: goto label_1db63c;
        case 0x1db640u: goto label_1db640;
        case 0x1db644u: goto label_1db644;
        case 0x1db648u: goto label_1db648;
        case 0x1db64cu: goto label_1db64c;
        case 0x1db650u: goto label_1db650;
        case 0x1db654u: goto label_1db654;
        case 0x1db658u: goto label_1db658;
        case 0x1db65cu: goto label_1db65c;
        case 0x1db660u: goto label_1db660;
        case 0x1db664u: goto label_1db664;
        case 0x1db668u: goto label_1db668;
        case 0x1db66cu: goto label_1db66c;
        case 0x1db670u: goto label_1db670;
        case 0x1db674u: goto label_1db674;
        case 0x1db678u: goto label_1db678;
        case 0x1db67cu: goto label_1db67c;
        case 0x1db680u: goto label_1db680;
        case 0x1db684u: goto label_1db684;
        case 0x1db688u: goto label_1db688;
        case 0x1db68cu: goto label_1db68c;
        case 0x1db690u: goto label_1db690;
        case 0x1db694u: goto label_1db694;
        case 0x1db698u: goto label_1db698;
        case 0x1db69cu: goto label_1db69c;
        case 0x1db6a0u: goto label_1db6a0;
        case 0x1db6a4u: goto label_1db6a4;
        case 0x1db6a8u: goto label_1db6a8;
        case 0x1db6acu: goto label_1db6ac;
        case 0x1db6b0u: goto label_1db6b0;
        case 0x1db6b4u: goto label_1db6b4;
        case 0x1db6b8u: goto label_1db6b8;
        default: break;
    }

    ctx->pc = 0x1db510u;

label_1db510:
    // 0x1db510: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1db510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1db514:
    // 0x1db514: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1db514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1db518:
    // 0x1db518: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1db518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1db51c:
    // 0x1db51c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1db51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1db520:
    // 0x1db520: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1db520u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1db524:
    // 0x1db524: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1db524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1db528:
    // 0x1db528: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1db528u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1db52c:
    // 0x1db52c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1db52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1db530:
    // 0x1db530: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_1db534:
    if (ctx->pc == 0x1DB534u) {
        ctx->pc = 0x1DB534u;
            // 0x1db534: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1DB538u;
        goto label_1db538;
    }
    ctx->pc = 0x1DB530u;
    {
        const bool branch_taken_0x1db530 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB530u;
            // 0x1db534: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db530) {
            ctx->pc = 0x1DB540u;
            goto label_1db540;
        }
    }
    ctx->pc = 0x1DB538u;
label_1db538:
    // 0x1db538: 0x10000058  b           . + 4 + (0x58 << 2)
label_1db53c:
    if (ctx->pc == 0x1DB53Cu) {
        ctx->pc = 0x1DB53Cu;
            // 0x1db53c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB540u;
        goto label_1db540;
    }
    ctx->pc = 0x1DB538u;
    {
        const bool branch_taken_0x1db538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB538u;
            // 0x1db53c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db538) {
            ctx->pc = 0x1DB69Cu;
            goto label_1db69c;
        }
    }
    ctx->pc = 0x1DB540u;
label_1db540:
    // 0x1db540: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1db540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1db544:
    // 0x1db544: 0xc04de0c  jal         func_137830
label_1db548:
    if (ctx->pc == 0x1DB548u) {
        ctx->pc = 0x1DB548u;
            // 0x1db548: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1DB54Cu;
        goto label_1db54c;
    }
    ctx->pc = 0x1DB544u;
    SET_GPR_U32(ctx, 31, 0x1DB54Cu);
    ctx->pc = 0x1DB548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB544u;
            // 0x1db548: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB54Cu; }
        if (ctx->pc != 0x1DB54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB54Cu; }
        if (ctx->pc != 0x1DB54Cu) { return; }
    }
    ctx->pc = 0x1DB54Cu;
label_1db54c:
    // 0x1db54c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1db54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1db550:
    // 0x1db550: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1db550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db554:
    // 0x1db554: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x1db554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_1db558:
    // 0x1db558: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1db558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db55c:
    // 0x1db55c: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x1db55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1db560:
    // 0x1db560: 0x8c440484  lw          $a0, 0x484($v0)
    ctx->pc = 0x1db560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
label_1db564:
    // 0x1db564: 0x10800048  beqz        $a0, . + 4 + (0x48 << 2)
label_1db568:
    if (ctx->pc == 0x1DB568u) {
        ctx->pc = 0x1DB568u;
            // 0x1db568: 0x24520484  addiu       $s2, $v0, 0x484 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1156));
        ctx->pc = 0x1DB56Cu;
        goto label_1db56c;
    }
    ctx->pc = 0x1DB564u;
    {
        const bool branch_taken_0x1db564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB564u;
            // 0x1db568: 0x24520484  addiu       $s2, $v0, 0x484 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db564) {
            ctx->pc = 0x1DB688u;
            goto label_1db688;
        }
    }
    ctx->pc = 0x1DB56Cu;
label_1db56c:
    // 0x1db56c: 0xc0766cc  jal         func_1D9B30
label_1db570:
    if (ctx->pc == 0x1DB570u) {
        ctx->pc = 0x1DB570u;
            // 0x1db570: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DB574u;
        goto label_1db574;
    }
    ctx->pc = 0x1DB56Cu;
    SET_GPR_U32(ctx, 31, 0x1DB574u);
    ctx->pc = 0x1DB570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB56Cu;
            // 0x1db570: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B30u;
    if (runtime->hasFunction(0x1D9B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D9B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB574u; }
        if (ctx->pc != 0x1DB574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsDraw__14CActiveMonsterFi_0x1d9b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB574u; }
        if (ctx->pc != 0x1DB574u) { return; }
    }
    ctx->pc = 0x1DB574u;
label_1db574:
    // 0x1db574: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_1db578:
    if (ctx->pc == 0x1DB578u) {
        ctx->pc = 0x1DB57Cu;
        goto label_1db57c;
    }
    ctx->pc = 0x1DB574u;
    {
        const bool branch_taken_0x1db574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db574) {
            ctx->pc = 0x1DB688u;
            goto label_1db688;
        }
    }
    ctx->pc = 0x1DB57Cu;
label_1db57c:
    // 0x1db57c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1db57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1db580:
    // 0x1db580: 0x2402025a  addiu       $v0, $zero, 0x25A
    ctx->pc = 0x1db580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 602));
label_1db584:
    // 0x1db584: 0x84831156  lh          $v1, 0x1156($a0)
    ctx->pc = 0x1db584u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4438)));
label_1db588:
    // 0x1db588: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
label_1db58c:
    if (ctx->pc == 0x1DB58Cu) {
        ctx->pc = 0x1DB590u;
        goto label_1db590;
    }
    ctx->pc = 0x1DB588u;
    {
        const bool branch_taken_0x1db588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1db588) {
            ctx->pc = 0x1DB688u;
            goto label_1db688;
        }
    }
    ctx->pc = 0x1DB590u;
label_1db590:
    // 0x1db590: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1db590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1db594:
    // 0x1db594: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1db594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1db598:
    // 0x1db598: 0x320f809  jalr        $t9
label_1db59c:
    if (ctx->pc == 0x1DB59Cu) {
        ctx->pc = 0x1DB59Cu;
            // 0x1db59c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1DB5A0u;
        goto label_1db5a0;
    }
    ctx->pc = 0x1DB598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB5A0u);
        ctx->pc = 0x1DB59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB598u;
            // 0x1db59c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DB5A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DB5A0u; }
            if (ctx->pc != 0x1DB5A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1DB5A0u;
label_1db5a0:
    // 0x1db5a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1db5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1db5a4:
    // 0x1db5a4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1db5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1db5a8:
    // 0x1db5a8: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x1db5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_1db5ac:
    // 0x1db5ac: 0xc04c018  jal         func_130060
label_1db5b0:
    if (ctx->pc == 0x1DB5B0u) {
        ctx->pc = 0x1DB5B0u;
            // 0x1db5b0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1DB5B4u;
        goto label_1db5b4;
    }
    ctx->pc = 0x1DB5ACu;
    SET_GPR_U32(ctx, 31, 0x1DB5B4u);
    ctx->pc = 0x1DB5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB5ACu;
            // 0x1db5b0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB5B4u; }
        if (ctx->pc != 0x1DB5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB5B4u; }
        if (ctx->pc != 0x1DB5B4u) { return; }
    }
    ctx->pc = 0x1DB5B4u;
label_1db5b4:
    // 0x1db5b4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1db5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1db5b8:
    // 0x1db5b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1db5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1db5bc:
    // 0x1db5bc: 0x0  nop
    ctx->pc = 0x1db5bcu;
    // NOP
label_1db5c0:
    // 0x1db5c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1db5c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1db5c4:
    // 0x1db5c4: 0x0  nop
    ctx->pc = 0x1db5c4u;
    // NOP
label_1db5c8:
    // 0x1db5c8: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_1db5cc:
    if (ctx->pc == 0x1DB5CCu) {
        ctx->pc = 0x1DB5CCu;
            // 0x1db5cc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x1DB5D0u;
        goto label_1db5d0;
    }
    ctx->pc = 0x1DB5C8u;
    {
        const bool branch_taken_0x1db5c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DB5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB5C8u;
            // 0x1db5cc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db5c8) {
            ctx->pc = 0x1DB688u;
            goto label_1db688;
        }
    }
    ctx->pc = 0x1DB5D0u;
label_1db5d0:
    // 0x1db5d0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1db5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1db5d4:
    // 0x1db5d4: 0x8c430484  lw          $v1, 0x484($v0)
    ctx->pc = 0x1db5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
label_1db5d8:
    // 0x1db5d8: 0x24500484  addiu       $s0, $v0, 0x484
    ctx->pc = 0x1db5d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1156));
label_1db5dc:
    // 0x1db5dc: 0x8c621150  lw          $v0, 0x1150($v1)
    ctx->pc = 0x1db5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4432)));
label_1db5e0:
    // 0x1db5e0: 0x8c420098  lw          $v0, 0x98($v0)
    ctx->pc = 0x1db5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_1db5e4:
    // 0x1db5e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1db5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1db5e8:
    // 0x1db5e8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1db5ec:
    if (ctx->pc == 0x1DB5ECu) {
        ctx->pc = 0x1DB5F0u;
        goto label_1db5f0;
    }
    ctx->pc = 0x1DB5E8u;
    {
        const bool branch_taken_0x1db5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db5e8) {
            ctx->pc = 0x1DB64Cu;
            goto label_1db64c;
        }
    }
    ctx->pc = 0x1DB5F0u;
label_1db5f0:
    // 0x1db5f0: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x1db5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_1db5f4:
    // 0x1db5f4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1db5f8:
    if (ctx->pc == 0x1DB5F8u) {
        ctx->pc = 0x1DB5F8u;
            // 0x1db5f8: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1DB5FCu;
        goto label_1db5fc;
    }
    ctx->pc = 0x1DB5F4u;
    {
        const bool branch_taken_0x1db5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB5F4u;
            // 0x1db5f8: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db5f4) {
            ctx->pc = 0x1DB624u;
            goto label_1db624;
        }
    }
    ctx->pc = 0x1DB5FCu;
label_1db5fc:
    // 0x1db5fc: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1db5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1db600:
    // 0x1db600: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1db600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1db604:
    // 0x1db604: 0x2484ff90  addiu       $a0, $a0, -0x70
    ctx->pc = 0x1db604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
label_1db608:
    // 0x1db608: 0x24a57e70  addiu       $a1, $a1, 0x7E70
    ctx->pc = 0x1db608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32368));
label_1db60c:
    // 0x1db60c: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x1db60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1db610:
    // 0x1db610: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1db610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1db614:
    // 0x1db614: 0xc0a2dcc  jal         func_28B730
label_1db618:
    if (ctx->pc == 0x1DB618u) {
        ctx->pc = 0x1DB618u;
            // 0x1db618: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB61Cu;
        goto label_1db61c;
    }
    ctx->pc = 0x1DB614u;
    SET_GPR_U32(ctx, 31, 0x1DB61Cu);
    ctx->pc = 0x1DB618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB614u;
            // 0x1db618: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B730u;
    if (runtime->hasFunction(0x28B730u)) {
        auto targetFn = runtime->lookupFunction(0x28B730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB61Cu; }
        if (ctx->pc != 0x1DB61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Print__18MessageTaskManagerFPciii_0x28b730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB61Cu; }
        if (ctx->pc != 0x1DB61Cu) { return; }
    }
    ctx->pc = 0x1DB61Cu;
label_1db61c:
    // 0x1db61c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1db620:
    if (ctx->pc == 0x1DB620u) {
        ctx->pc = 0x1DB620u;
            // 0x1db620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB624u;
        goto label_1db624;
    }
    ctx->pc = 0x1DB61Cu;
    {
        const bool branch_taken_0x1db61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB61Cu;
            // 0x1db620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db61c) {
            ctx->pc = 0x1DB644u;
            goto label_1db644;
        }
    }
    ctx->pc = 0x1DB624u;
label_1db624:
    // 0x1db624: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1db624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1db628:
    // 0x1db628: 0x2484ff90  addiu       $a0, $a0, -0x70
    ctx->pc = 0x1db628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
label_1db62c:
    // 0x1db62c: 0x24a57ea0  addiu       $a1, $a1, 0x7EA0
    ctx->pc = 0x1db62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32416));
label_1db630:
    // 0x1db630: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x1db630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1db634:
    // 0x1db634: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1db634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1db638:
    // 0x1db638: 0xc0a2dcc  jal         func_28B730
label_1db63c:
    if (ctx->pc == 0x1DB63Cu) {
        ctx->pc = 0x1DB63Cu;
            // 0x1db63c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB640u;
        goto label_1db640;
    }
    ctx->pc = 0x1DB638u;
    SET_GPR_U32(ctx, 31, 0x1DB640u);
    ctx->pc = 0x1DB63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB638u;
            // 0x1db63c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B730u;
    if (runtime->hasFunction(0x28B730u)) {
        auto targetFn = runtime->lookupFunction(0x28B730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB640u; }
        if (ctx->pc != 0x1DB640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Print__18MessageTaskManagerFPciii_0x28b730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB640u; }
        if (ctx->pc != 0x1DB640u) { return; }
    }
    ctx->pc = 0x1DB640u;
label_1db640:
    // 0x1db640: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1db640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db644:
    // 0x1db644: 0x10000016  b           . + 4 + (0x16 << 2)
label_1db648:
    if (ctx->pc == 0x1DB648u) {
        ctx->pc = 0x1DB648u;
            // 0x1db648: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x1DB64Cu;
        goto label_1db64c;
    }
    ctx->pc = 0x1DB644u;
    {
        const bool branch_taken_0x1db644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB644u;
            // 0x1db648: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db644) {
            ctx->pc = 0x1DB6A0u;
            goto label_1db6a0;
        }
    }
    ctx->pc = 0x1DB64Cu;
label_1db64c:
    // 0x1db64c: 0x8c640070  lw          $a0, 0x70($v1)
    ctx->pc = 0x1db64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_1db650:
    // 0x1db650: 0xc04db0c  jal         func_136C30
label_1db654:
    if (ctx->pc == 0x1DB654u) {
        ctx->pc = 0x1DB654u;
            // 0x1db654: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB658u;
        goto label_1db658;
    }
    ctx->pc = 0x1DB650u;
    SET_GPR_U32(ctx, 31, 0x1DB658u);
    ctx->pc = 0x1DB654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB650u;
            // 0x1db654: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C30u;
    if (runtime->hasFunction(0x136C30u)) {
        auto targetFn = runtime->lookupFunction(0x136C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB658u; }
        if (ctx->pc != 0x1DB658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReference__8mgCFrameFP8mgCFrame_0x136c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB658u; }
        if (ctx->pc != 0x1DB658u) { return; }
    }
    ctx->pc = 0x1DB658u;
label_1db658:
    // 0x1db658: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1db658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db65c:
    // 0x1db65c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1db65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db660:
    // 0x1db660: 0x2403044c  addiu       $v1, $zero, 0x44C
    ctx->pc = 0x1db660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
label_1db664:
    // 0x1db664: 0xac53072c  sw          $s3, 0x72C($v0)
    ctx->pc = 0x1db664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1836), GPR_U32(ctx, 19));
label_1db668:
    // 0x1db668: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1db668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db66c:
    // 0x1db66c: 0xa4440730  sh          $a0, 0x730($v0)
    ctx->pc = 0x1db66cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1840), (uint16_t)GPR_U32(ctx, 4));
label_1db670:
    // 0x1db670: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1db670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db674:
    // 0x1db674: 0xa4400732  sh          $zero, 0x732($v0)
    ctx->pc = 0x1db674u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1842), (uint16_t)GPR_U32(ctx, 0));
label_1db678:
    // 0x1db678: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1db678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db67c:
    // 0x1db67c: 0xa4431158  sh          $v1, 0x1158($v0)
    ctx->pc = 0x1db67cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4440), (uint16_t)GPR_U32(ctx, 3));
label_1db680:
    // 0x1db680: 0x10000006  b           . + 4 + (0x6 << 2)
label_1db684:
    if (ctx->pc == 0x1DB684u) {
        ctx->pc = 0x1DB684u;
            // 0x1db684: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1DB688u;
        goto label_1db688;
    }
    ctx->pc = 0x1DB680u;
    {
        const bool branch_taken_0x1db680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB680u;
            // 0x1db684: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db680) {
            ctx->pc = 0x1DB69Cu;
            goto label_1db69c;
        }
    }
    ctx->pc = 0x1DB688u;
label_1db688:
    // 0x1db688: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1db688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1db68c:
    // 0x1db68c: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x1db68cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
label_1db690:
    // 0x1db690: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
label_1db694:
    if (ctx->pc == 0x1DB694u) {
        ctx->pc = 0x1DB694u;
            // 0x1db694: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x1DB698u;
        goto label_1db698;
    }
    ctx->pc = 0x1DB690u;
    {
        const bool branch_taken_0x1db690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB690u;
            // 0x1db694: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db690) {
            ctx->pc = 0x1DB55Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1db55c;
        }
    }
    ctx->pc = 0x1DB698u;
label_1db698:
    // 0x1db698: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1db698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db69c:
    // 0x1db69c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1db69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1db6a0:
    // 0x1db6a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1db6a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1db6a4:
    // 0x1db6a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1db6a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1db6a8:
    // 0x1db6a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1db6a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1db6ac:
    // 0x1db6ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1db6acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1db6b0:
    // 0x1db6b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1db6b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1db6b4:
    // 0x1db6b4: 0x3e00008  jr          $ra
label_1db6b8:
    if (ctx->pc == 0x1DB6B8u) {
        ctx->pc = 0x1DB6B8u;
            // 0x1db6b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1DB6BCu;
        goto label_fallthrough_0x1db6b4;
    }
    ctx->pc = 0x1DB6B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB6B4u;
            // 0x1db6b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1db6b4:
    ctx->pc = 0x1DB6BCu;
}
