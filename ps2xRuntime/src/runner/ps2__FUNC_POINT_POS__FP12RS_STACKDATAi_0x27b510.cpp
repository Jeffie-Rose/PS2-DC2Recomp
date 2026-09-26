#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _FUNC_POINT_POS__FP12RS_STACKDATAi
// Address: 0x27b510 - 0x27b670
void ps2__FUNC_POINT_POS__FP12RS_STACKDATAi_0x27b510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__FUNC_POINT_POS__FP12RS_STACKDATAi_0x27b510");
#endif

    switch (ctx->pc) {
        case 0x27b510u: goto label_27b510;
        case 0x27b514u: goto label_27b514;
        case 0x27b518u: goto label_27b518;
        case 0x27b51cu: goto label_27b51c;
        case 0x27b520u: goto label_27b520;
        case 0x27b524u: goto label_27b524;
        case 0x27b528u: goto label_27b528;
        case 0x27b52cu: goto label_27b52c;
        case 0x27b530u: goto label_27b530;
        case 0x27b534u: goto label_27b534;
        case 0x27b538u: goto label_27b538;
        case 0x27b53cu: goto label_27b53c;
        case 0x27b540u: goto label_27b540;
        case 0x27b544u: goto label_27b544;
        case 0x27b548u: goto label_27b548;
        case 0x27b54cu: goto label_27b54c;
        case 0x27b550u: goto label_27b550;
        case 0x27b554u: goto label_27b554;
        case 0x27b558u: goto label_27b558;
        case 0x27b55cu: goto label_27b55c;
        case 0x27b560u: goto label_27b560;
        case 0x27b564u: goto label_27b564;
        case 0x27b568u: goto label_27b568;
        case 0x27b56cu: goto label_27b56c;
        case 0x27b570u: goto label_27b570;
        case 0x27b574u: goto label_27b574;
        case 0x27b578u: goto label_27b578;
        case 0x27b57cu: goto label_27b57c;
        case 0x27b580u: goto label_27b580;
        case 0x27b584u: goto label_27b584;
        case 0x27b588u: goto label_27b588;
        case 0x27b58cu: goto label_27b58c;
        case 0x27b590u: goto label_27b590;
        case 0x27b594u: goto label_27b594;
        case 0x27b598u: goto label_27b598;
        case 0x27b59cu: goto label_27b59c;
        case 0x27b5a0u: goto label_27b5a0;
        case 0x27b5a4u: goto label_27b5a4;
        case 0x27b5a8u: goto label_27b5a8;
        case 0x27b5acu: goto label_27b5ac;
        case 0x27b5b0u: goto label_27b5b0;
        case 0x27b5b4u: goto label_27b5b4;
        case 0x27b5b8u: goto label_27b5b8;
        case 0x27b5bcu: goto label_27b5bc;
        case 0x27b5c0u: goto label_27b5c0;
        case 0x27b5c4u: goto label_27b5c4;
        case 0x27b5c8u: goto label_27b5c8;
        case 0x27b5ccu: goto label_27b5cc;
        case 0x27b5d0u: goto label_27b5d0;
        case 0x27b5d4u: goto label_27b5d4;
        case 0x27b5d8u: goto label_27b5d8;
        case 0x27b5dcu: goto label_27b5dc;
        case 0x27b5e0u: goto label_27b5e0;
        case 0x27b5e4u: goto label_27b5e4;
        case 0x27b5e8u: goto label_27b5e8;
        case 0x27b5ecu: goto label_27b5ec;
        case 0x27b5f0u: goto label_27b5f0;
        case 0x27b5f4u: goto label_27b5f4;
        case 0x27b5f8u: goto label_27b5f8;
        case 0x27b5fcu: goto label_27b5fc;
        case 0x27b600u: goto label_27b600;
        case 0x27b604u: goto label_27b604;
        case 0x27b608u: goto label_27b608;
        case 0x27b60cu: goto label_27b60c;
        case 0x27b610u: goto label_27b610;
        case 0x27b614u: goto label_27b614;
        case 0x27b618u: goto label_27b618;
        case 0x27b61cu: goto label_27b61c;
        case 0x27b620u: goto label_27b620;
        case 0x27b624u: goto label_27b624;
        case 0x27b628u: goto label_27b628;
        case 0x27b62cu: goto label_27b62c;
        case 0x27b630u: goto label_27b630;
        case 0x27b634u: goto label_27b634;
        case 0x27b638u: goto label_27b638;
        case 0x27b63cu: goto label_27b63c;
        case 0x27b640u: goto label_27b640;
        case 0x27b644u: goto label_27b644;
        case 0x27b648u: goto label_27b648;
        case 0x27b64cu: goto label_27b64c;
        case 0x27b650u: goto label_27b650;
        case 0x27b654u: goto label_27b654;
        case 0x27b658u: goto label_27b658;
        case 0x27b65cu: goto label_27b65c;
        case 0x27b660u: goto label_27b660;
        case 0x27b664u: goto label_27b664;
        case 0x27b668u: goto label_27b668;
        case 0x27b66cu: goto label_27b66c;
        default: break;
    }

    ctx->pc = 0x27b510u;

label_27b510:
    // 0x27b510: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27b510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_27b514:
    // 0x27b514: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27b514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_27b518:
    // 0x27b518: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27b518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27b51c:
    // 0x27b51c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27b51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27b520:
    // 0x27b520: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27b520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27b524:
    // 0x27b524: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27b524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27b528:
    // 0x27b528: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27b528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27b52c:
    // 0x27b52c: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27b52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_27b530:
    // 0x27b530: 0xc0a0f58  jal         func_283D60
label_27b534:
    if (ctx->pc == 0x27B534u) {
        ctx->pc = 0x27B534u;
            // 0x27b534: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x27B538u;
        goto label_27b538;
    }
    ctx->pc = 0x27B530u;
    SET_GPR_U32(ctx, 31, 0x27B538u);
    ctx->pc = 0x27B534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B530u;
            // 0x27b534: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B538u; }
        if (ctx->pc != 0x27B538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B538u; }
        if (ctx->pc != 0x27B538u) { return; }
    }
    ctx->pc = 0x27B538u;
label_27b538:
    // 0x27b538: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27b538u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27b53c:
    // 0x27b53c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_27b540:
    if (ctx->pc == 0x27B540u) {
        ctx->pc = 0x27B540u;
            // 0x27b540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B544u;
        goto label_27b544;
    }
    ctx->pc = 0x27B53Cu;
    {
        const bool branch_taken_0x27b53c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B53Cu;
            // 0x27b540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b53c) {
            ctx->pc = 0x27B54Cu;
            goto label_27b54c;
        }
    }
    ctx->pc = 0x27B544u;
label_27b544:
    // 0x27b544: 0x10000044  b           . + 4 + (0x44 << 2)
label_27b548:
    if (ctx->pc == 0x27B548u) {
        ctx->pc = 0x27B548u;
            // 0x27b548: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x27B54Cu;
        goto label_27b54c;
    }
    ctx->pc = 0x27B544u;
    {
        const bool branch_taken_0x27b544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B544u;
            // 0x27b548: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b544) {
            ctx->pc = 0x27B658u;
            goto label_27b658;
        }
    }
    ctx->pc = 0x27B54Cu;
label_27b54c:
    // 0x27b54c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27b54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27b550:
    // 0x27b550: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27b550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27b554:
    // 0x27b554: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_27b558:
    if (ctx->pc == 0x27B558u) {
        ctx->pc = 0x27B558u;
            // 0x27b558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B55Cu;
        goto label_27b55c;
    }
    ctx->pc = 0x27B554u;
    {
        const bool branch_taken_0x27b554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27B558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B554u;
            // 0x27b558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b554) {
            ctx->pc = 0x27B5B0u;
            goto label_27b5b0;
        }
    }
    ctx->pc = 0x27B55Cu;
label_27b55c:
    // 0x27b55c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_27b560:
    if (ctx->pc == 0x27B560u) {
        ctx->pc = 0x27B560u;
            // 0x27b560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B564u;
        goto label_27b564;
    }
    ctx->pc = 0x27B55Cu;
    {
        const bool branch_taken_0x27b55c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B55Cu;
            // 0x27b560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b55c) {
            ctx->pc = 0x27B56Cu;
            goto label_27b56c;
        }
    }
    ctx->pc = 0x27B564u;
label_27b564:
    // 0x27b564: 0x1000002d  b           . + 4 + (0x2D << 2)
label_27b568:
    if (ctx->pc == 0x27B568u) {
        ctx->pc = 0x27B56Cu;
        goto label_27b56c;
    }
    ctx->pc = 0x27B564u;
    {
        const bool branch_taken_0x27b564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b564) {
            ctx->pc = 0x27B61Cu;
            goto label_27b61c;
        }
    }
    ctx->pc = 0x27B56Cu;
label_27b56c:
    // 0x27b56c: 0xc097e18  jal         func_25F860
label_27b570:
    if (ctx->pc == 0x27B570u) {
        ctx->pc = 0x27B570u;
            // 0x27b570: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x27B574u;
        goto label_27b574;
    }
    ctx->pc = 0x27B56Cu;
    SET_GPR_U32(ctx, 31, 0x27B574u);
    ctx->pc = 0x27B570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B56Cu;
            // 0x27b570: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B574u; }
        if (ctx->pc != 0x27B574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B574u; }
        if (ctx->pc != 0x27B574u) { return; }
    }
    ctx->pc = 0x27B574u;
label_27b574:
    // 0x27b574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b578:
    // 0x27b578: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27b578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27b57c:
    // 0x27b57c: 0xc097e48  jal         func_25F920
label_27b580:
    if (ctx->pc == 0x27B580u) {
        ctx->pc = 0x27B580u;
            // 0x27b580: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x27B584u;
        goto label_27b584;
    }
    ctx->pc = 0x27B57Cu;
    SET_GPR_U32(ctx, 31, 0x27B584u);
    ctx->pc = 0x27B580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B57Cu;
            // 0x27b580: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B584u; }
        if (ctx->pc != 0x27B584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B584u; }
        if (ctx->pc != 0x27B584u) { return; }
    }
    ctx->pc = 0x27B584u;
label_27b584:
    // 0x27b584: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27b584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b588:
    // 0x27b588: 0xc057530  jal         func_15D4C0
label_27b58c:
    if (ctx->pc == 0x27B58Cu) {
        ctx->pc = 0x27B58Cu;
            // 0x27b58c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B590u;
        goto label_27b590;
    }
    ctx->pc = 0x27B588u;
    SET_GPR_U32(ctx, 31, 0x27B590u);
    ctx->pc = 0x27B58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B588u;
            // 0x27b58c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4C0u;
    if (runtime->hasFunction(0x15D4C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B590u; }
        if (ctx->pc != 0x27B590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFi_0x15d4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B590u; }
        if (ctx->pc != 0x27B590u) { return; }
    }
    ctx->pc = 0x27B590u;
label_27b590:
    // 0x27b590: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_27b594:
    if (ctx->pc == 0x27B594u) {
        ctx->pc = 0x27B594u;
            // 0x27b594: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B598u;
        goto label_27b598;
    }
    ctx->pc = 0x27B590u;
    {
        const bool branch_taken_0x27b590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B590u;
            // 0x27b594: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b590) {
            ctx->pc = 0x27B5A0u;
            goto label_27b5a0;
        }
    }
    ctx->pc = 0x27B598u;
label_27b598:
    // 0x27b598: 0x1000002e  b           . + 4 + (0x2E << 2)
label_27b59c:
    if (ctx->pc == 0x27B59Cu) {
        ctx->pc = 0x27B59Cu;
            // 0x27b59c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B5A0u;
        goto label_27b5a0;
    }
    ctx->pc = 0x27B598u;
    {
        const bool branch_taken_0x27b598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B598u;
            // 0x27b59c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b598) {
            ctx->pc = 0x27B654u;
            goto label_27b654;
        }
    }
    ctx->pc = 0x27B5A0u;
label_27b5a0:
    // 0x27b5a0: 0xc0a763c  jal         func_29D8F0
label_27b5a4:
    if (ctx->pc == 0x27B5A4u) {
        ctx->pc = 0x27B5A4u;
            // 0x27b5a4: 0x244402b0  addiu       $a0, $v0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
        ctx->pc = 0x27B5A8u;
        goto label_27b5a8;
    }
    ctx->pc = 0x27B5A0u;
    SET_GPR_U32(ctx, 31, 0x27B5A8u);
    ctx->pc = 0x27B5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B5A0u;
            // 0x27b5a4: 0x244402b0  addiu       $a0, $v0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8F0u;
    if (runtime->hasFunction(0x29D8F0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B5A8u; }
        if (ctx->pc != 0x27B5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Search__14CFuncPointMngrFPc_0x29d8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B5A8u; }
        if (ctx->pc != 0x27B5A8u) { return; }
    }
    ctx->pc = 0x27B5A8u;
label_27b5a8:
    // 0x27b5a8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_27b5ac:
    if (ctx->pc == 0x27B5ACu) {
        ctx->pc = 0x27B5ACu;
            // 0x27b5ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B5B0u;
        goto label_27b5b0;
    }
    ctx->pc = 0x27B5A8u;
    {
        const bool branch_taken_0x27b5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B5A8u;
            // 0x27b5ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b5a8) {
            ctx->pc = 0x27B61Cu;
            goto label_27b61c;
        }
    }
    ctx->pc = 0x27B5B0u;
label_27b5b0:
    // 0x27b5b0: 0xc097e48  jal         func_25F920
label_27b5b4:
    if (ctx->pc == 0x27B5B4u) {
        ctx->pc = 0x27B5B4u;
            // 0x27b5b4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x27B5B8u;
        goto label_27b5b8;
    }
    ctx->pc = 0x27B5B0u;
    SET_GPR_U32(ctx, 31, 0x27B5B8u);
    ctx->pc = 0x27B5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B5B0u;
            // 0x27b5b4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B5B8u; }
        if (ctx->pc != 0x27B5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B5B8u; }
        if (ctx->pc != 0x27B5B8u) { return; }
    }
    ctx->pc = 0x27B5B8u;
label_27b5b8:
    // 0x27b5b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b5bc:
    // 0x27b5bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27b5bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27b5c0:
    // 0x27b5c0: 0xc097e48  jal         func_25F920
label_27b5c4:
    if (ctx->pc == 0x27B5C4u) {
        ctx->pc = 0x27B5C4u;
            // 0x27b5c4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x27B5C8u;
        goto label_27b5c8;
    }
    ctx->pc = 0x27B5C0u;
    SET_GPR_U32(ctx, 31, 0x27B5C8u);
    ctx->pc = 0x27B5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B5C0u;
            // 0x27b5c4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B5C8u; }
        if (ctx->pc != 0x27B5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B5C8u; }
        if (ctx->pc != 0x27B5C8u) { return; }
    }
    ctx->pc = 0x27B5C8u;
label_27b5c8:
    // 0x27b5c8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27b5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_27b5cc:
    // 0x27b5cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27b5ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27b5d0:
    // 0x27b5d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27b5d4:
    // 0x27b5d4: 0xc04a38a  jal         func_128E28
label_27b5d8:
    if (ctx->pc == 0x27B5D8u) {
        ctx->pc = 0x27B5D8u;
            // 0x27b5d8: 0x24a5c708  addiu       $a1, $a1, -0x38F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952712));
        ctx->pc = 0x27B5DCu;
        goto label_27b5dc;
    }
    ctx->pc = 0x27B5D4u;
    SET_GPR_U32(ctx, 31, 0x27B5DCu);
    ctx->pc = 0x27B5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B5D4u;
            // 0x27b5d8: 0x24a5c708  addiu       $a1, $a1, -0x38F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B5DCu; }
        if (ctx->pc != 0x27B5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B5DCu; }
        if (ctx->pc != 0x27B5DCu) { return; }
    }
    ctx->pc = 0x27B5DCu;
label_27b5dc:
    // 0x27b5dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_27b5e0:
    if (ctx->pc == 0x27B5E0u) {
        ctx->pc = 0x27B5E0u;
            // 0x27b5e0: 0x26440cb0  addiu       $a0, $s2, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3248));
        ctx->pc = 0x27B5E4u;
        goto label_27b5e4;
    }
    ctx->pc = 0x27B5DCu;
    {
        const bool branch_taken_0x27b5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B5DCu;
            // 0x27b5e0: 0x26440cb0  addiu       $a0, $s2, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b5dc) {
            ctx->pc = 0x27B610u;
            goto label_27b610;
        }
    }
    ctx->pc = 0x27B5E4u;
label_27b5e4:
    // 0x27b5e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27b5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b5e8:
    // 0x27b5e8: 0xc057508  jal         func_15D420
label_27b5ec:
    if (ctx->pc == 0x27B5ECu) {
        ctx->pc = 0x27B5ECu;
            // 0x27b5ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B5F0u;
        goto label_27b5f0;
    }
    ctx->pc = 0x27B5E8u;
    SET_GPR_U32(ctx, 31, 0x27B5F0u);
    ctx->pc = 0x27B5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B5E8u;
            // 0x27b5ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B5F0u; }
        if (ctx->pc != 0x27B5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B5F0u; }
        if (ctx->pc != 0x27B5F0u) { return; }
    }
    ctx->pc = 0x27B5F0u;
label_27b5f0:
    // 0x27b5f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_27b5f4:
    if (ctx->pc == 0x27B5F4u) {
        ctx->pc = 0x27B5F4u;
            // 0x27b5f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B5F8u;
        goto label_27b5f8;
    }
    ctx->pc = 0x27B5F0u;
    {
        const bool branch_taken_0x27b5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B5F0u;
            // 0x27b5f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b5f0) {
            ctx->pc = 0x27B600u;
            goto label_27b600;
        }
    }
    ctx->pc = 0x27B5F8u;
label_27b5f8:
    // 0x27b5f8: 0x10000016  b           . + 4 + (0x16 << 2)
label_27b5fc:
    if (ctx->pc == 0x27B5FCu) {
        ctx->pc = 0x27B5FCu;
            // 0x27b5fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B600u;
        goto label_27b600;
    }
    ctx->pc = 0x27B5F8u;
    {
        const bool branch_taken_0x27b5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B5F8u;
            // 0x27b5fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b5f8) {
            ctx->pc = 0x27B654u;
            goto label_27b654;
        }
    }
    ctx->pc = 0x27B600u;
label_27b600:
    // 0x27b600: 0xc0a763c  jal         func_29D8F0
label_27b604:
    if (ctx->pc == 0x27B604u) {
        ctx->pc = 0x27B604u;
            // 0x27b604: 0x244402b0  addiu       $a0, $v0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
        ctx->pc = 0x27B608u;
        goto label_27b608;
    }
    ctx->pc = 0x27B600u;
    SET_GPR_U32(ctx, 31, 0x27B608u);
    ctx->pc = 0x27B604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B600u;
            // 0x27b604: 0x244402b0  addiu       $a0, $v0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8F0u;
    if (runtime->hasFunction(0x29D8F0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B608u; }
        if (ctx->pc != 0x27B608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Search__14CFuncPointMngrFPc_0x29d8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B608u; }
        if (ctx->pc != 0x27B608u) { return; }
    }
    ctx->pc = 0x27B608u;
label_27b608:
    // 0x27b608: 0x10000004  b           . + 4 + (0x4 << 2)
label_27b60c:
    if (ctx->pc == 0x27B60Cu) {
        ctx->pc = 0x27B60Cu;
            // 0x27b60c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B610u;
        goto label_27b610;
    }
    ctx->pc = 0x27B608u;
    {
        const bool branch_taken_0x27b608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B608u;
            // 0x27b60c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b608) {
            ctx->pc = 0x27B61Cu;
            goto label_27b61c;
        }
    }
    ctx->pc = 0x27B610u;
label_27b610:
    // 0x27b610: 0xc0a763c  jal         func_29D8F0
label_27b614:
    if (ctx->pc == 0x27B614u) {
        ctx->pc = 0x27B614u;
            // 0x27b614: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B618u;
        goto label_27b618;
    }
    ctx->pc = 0x27B610u;
    SET_GPR_U32(ctx, 31, 0x27B618u);
    ctx->pc = 0x27B614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B610u;
            // 0x27b614: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8F0u;
    if (runtime->hasFunction(0x29D8F0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B618u; }
        if (ctx->pc != 0x27B618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Search__14CFuncPointMngrFPc_0x29d8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B618u; }
        if (ctx->pc != 0x27B618u) { return; }
    }
    ctx->pc = 0x27B618u;
label_27b618:
    // 0x27b618: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27b618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27b61c:
    // 0x27b61c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_27b620:
    if (ctx->pc == 0x27B620u) {
        ctx->pc = 0x27B620u;
            // 0x27b620: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B624u;
        goto label_27b624;
    }
    ctx->pc = 0x27B61Cu;
    {
        const bool branch_taken_0x27b61c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B61Cu;
            // 0x27b620: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b61c) {
            ctx->pc = 0x27B62Cu;
            goto label_27b62c;
        }
    }
    ctx->pc = 0x27B624u;
label_27b624:
    // 0x27b624: 0x1000000b  b           . + 4 + (0xB << 2)
label_27b628:
    if (ctx->pc == 0x27B628u) {
        ctx->pc = 0x27B628u;
            // 0x27b628: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B62Cu;
        goto label_27b62c;
    }
    ctx->pc = 0x27B624u;
    {
        const bool branch_taken_0x27b624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B624u;
            // 0x27b628: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b624) {
            ctx->pc = 0x27B654u;
            goto label_27b654;
        }
    }
    ctx->pc = 0x27B62Cu;
label_27b62c:
    // 0x27b62c: 0xc097e34  jal         func_25F8D0
label_27b630:
    if (ctx->pc == 0x27B630u) {
        ctx->pc = 0x27B630u;
            // 0x27b630: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x27B634u;
        goto label_27b634;
    }
    ctx->pc = 0x27B62Cu;
    SET_GPR_U32(ctx, 31, 0x27B634u);
    ctx->pc = 0x27B630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B62Cu;
            // 0x27b630: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B634u; }
        if (ctx->pc != 0x27B634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B634u; }
        if (ctx->pc != 0x27B634u) { return; }
    }
    ctx->pc = 0x27B634u;
label_27b634:
    // 0x27b634: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x27b634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_27b638:
    // 0x27b638: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x27b638u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_27b63c:
    // 0x27b63c: 0x7e220180  sq          $v0, 0x180($s1)
    ctx->pc = 0x27b63cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 384), GPR_VEC(ctx, 2));
label_27b640:
    // 0x27b640: 0x8e390070  lw          $t9, 0x70($s1)
    ctx->pc = 0x27b640u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_27b644:
    // 0x27b644: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x27b644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_27b648:
    // 0x27b648: 0x320f809  jalr        $t9
label_27b64c:
    if (ctx->pc == 0x27B64Cu) {
        ctx->pc = 0x27B64Cu;
            // 0x27b64c: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->pc = 0x27B650u;
        goto label_27b650;
    }
    ctx->pc = 0x27B648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27B650u);
        ctx->pc = 0x27B64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B648u;
            // 0x27b64c: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27B650u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27B650u; }
            if (ctx->pc != 0x27B650u) { return; }
        }
        }
    }
    ctx->pc = 0x27B650u;
label_27b650:
    // 0x27b650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b654:
    // 0x27b654: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27b654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_27b658:
    // 0x27b658: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27b658u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27b65c:
    // 0x27b65c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27b65cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27b660:
    // 0x27b660: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27b660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27b664:
    // 0x27b664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27b664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27b668:
    // 0x27b668: 0x3e00008  jr          $ra
label_27b66c:
    if (ctx->pc == 0x27B66Cu) {
        ctx->pc = 0x27B66Cu;
            // 0x27b66c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x27B670u;
        goto label_fallthrough_0x27b668;
    }
    ctx->pc = 0x27B668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B668u;
            // 0x27b66c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x27b668:
    ctx->pc = 0x27B670u;
}
