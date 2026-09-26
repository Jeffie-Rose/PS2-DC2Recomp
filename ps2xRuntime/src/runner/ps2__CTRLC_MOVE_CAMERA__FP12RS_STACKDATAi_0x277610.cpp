#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CTRLC_MOVE_CAMERA__FP12RS_STACKDATAi
// Address: 0x277610 - 0x27776c
void ps2__CTRLC_MOVE_CAMERA__FP12RS_STACKDATAi_0x277610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CTRLC_MOVE_CAMERA__FP12RS_STACKDATAi_0x277610");
#endif

    switch (ctx->pc) {
        case 0x277610u: goto label_277610;
        case 0x277614u: goto label_277614;
        case 0x277618u: goto label_277618;
        case 0x27761cu: goto label_27761c;
        case 0x277620u: goto label_277620;
        case 0x277624u: goto label_277624;
        case 0x277628u: goto label_277628;
        case 0x27762cu: goto label_27762c;
        case 0x277630u: goto label_277630;
        case 0x277634u: goto label_277634;
        case 0x277638u: goto label_277638;
        case 0x27763cu: goto label_27763c;
        case 0x277640u: goto label_277640;
        case 0x277644u: goto label_277644;
        case 0x277648u: goto label_277648;
        case 0x27764cu: goto label_27764c;
        case 0x277650u: goto label_277650;
        case 0x277654u: goto label_277654;
        case 0x277658u: goto label_277658;
        case 0x27765cu: goto label_27765c;
        case 0x277660u: goto label_277660;
        case 0x277664u: goto label_277664;
        case 0x277668u: goto label_277668;
        case 0x27766cu: goto label_27766c;
        case 0x277670u: goto label_277670;
        case 0x277674u: goto label_277674;
        case 0x277678u: goto label_277678;
        case 0x27767cu: goto label_27767c;
        case 0x277680u: goto label_277680;
        case 0x277684u: goto label_277684;
        case 0x277688u: goto label_277688;
        case 0x27768cu: goto label_27768c;
        case 0x277690u: goto label_277690;
        case 0x277694u: goto label_277694;
        case 0x277698u: goto label_277698;
        case 0x27769cu: goto label_27769c;
        case 0x2776a0u: goto label_2776a0;
        case 0x2776a4u: goto label_2776a4;
        case 0x2776a8u: goto label_2776a8;
        case 0x2776acu: goto label_2776ac;
        case 0x2776b0u: goto label_2776b0;
        case 0x2776b4u: goto label_2776b4;
        case 0x2776b8u: goto label_2776b8;
        case 0x2776bcu: goto label_2776bc;
        case 0x2776c0u: goto label_2776c0;
        case 0x2776c4u: goto label_2776c4;
        case 0x2776c8u: goto label_2776c8;
        case 0x2776ccu: goto label_2776cc;
        case 0x2776d0u: goto label_2776d0;
        case 0x2776d4u: goto label_2776d4;
        case 0x2776d8u: goto label_2776d8;
        case 0x2776dcu: goto label_2776dc;
        case 0x2776e0u: goto label_2776e0;
        case 0x2776e4u: goto label_2776e4;
        case 0x2776e8u: goto label_2776e8;
        case 0x2776ecu: goto label_2776ec;
        case 0x2776f0u: goto label_2776f0;
        case 0x2776f4u: goto label_2776f4;
        case 0x2776f8u: goto label_2776f8;
        case 0x2776fcu: goto label_2776fc;
        case 0x277700u: goto label_277700;
        case 0x277704u: goto label_277704;
        case 0x277708u: goto label_277708;
        case 0x27770cu: goto label_27770c;
        case 0x277710u: goto label_277710;
        case 0x277714u: goto label_277714;
        case 0x277718u: goto label_277718;
        case 0x27771cu: goto label_27771c;
        case 0x277720u: goto label_277720;
        case 0x277724u: goto label_277724;
        case 0x277728u: goto label_277728;
        case 0x27772cu: goto label_27772c;
        case 0x277730u: goto label_277730;
        case 0x277734u: goto label_277734;
        case 0x277738u: goto label_277738;
        case 0x27773cu: goto label_27773c;
        case 0x277740u: goto label_277740;
        case 0x277744u: goto label_277744;
        case 0x277748u: goto label_277748;
        case 0x27774cu: goto label_27774c;
        case 0x277750u: goto label_277750;
        case 0x277754u: goto label_277754;
        case 0x277758u: goto label_277758;
        case 0x27775cu: goto label_27775c;
        case 0x277760u: goto label_277760;
        case 0x277764u: goto label_277764;
        case 0x277768u: goto label_277768;
        default: break;
    }

    ctx->pc = 0x277610u;

label_277610:
    // 0x277610: 0x27bdaf80  addiu       $sp, $sp, -0x5080
    ctx->pc = 0x277610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294946688));
label_277614:
    // 0x277614: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x277614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_277618:
    // 0x277618: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x277618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_27761c:
    // 0x27761c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27761cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_277620:
    // 0x277620: 0xc097e18  jal         func_25F860
label_277624:
    if (ctx->pc == 0x277624u) {
        ctx->pc = 0x277624u;
            // 0x277624: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x277628u;
        goto label_277628;
    }
    ctx->pc = 0x277620u;
    SET_GPR_U32(ctx, 31, 0x277628u);
    ctx->pc = 0x277624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277620u;
            // 0x277624: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277628u; }
        if (ctx->pc != 0x277628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277628u; }
        if (ctx->pc != 0x277628u) { return; }
    }
    ctx->pc = 0x277628u;
label_277628:
    // 0x277628: 0xc0956d4  jal         func_255B50
label_27762c:
    if (ctx->pc == 0x27762Cu) {
        ctx->pc = 0x27762Cu;
            // 0x27762c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x277630u;
        goto label_277630;
    }
    ctx->pc = 0x277628u;
    SET_GPR_U32(ctx, 31, 0x277630u);
    ctx->pc = 0x27762Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277628u;
            // 0x27762c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277630u; }
        if (ctx->pc != 0x277630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277630u; }
        if (ctx->pc != 0x277630u) { return; }
    }
    ctx->pc = 0x277630u;
label_277630:
    // 0x277630: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_277634:
    if (ctx->pc == 0x277634u) {
        ctx->pc = 0x277638u;
        goto label_277638;
    }
    ctx->pc = 0x277630u;
    {
        const bool branch_taken_0x277630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x277630) {
            ctx->pc = 0x277640u;
            goto label_277640;
        }
    }
    ctx->pc = 0x277638u;
label_277638:
    // 0x277638: 0x10000046  b           . + 4 + (0x46 << 2)
label_27763c:
    if (ctx->pc == 0x27763Cu) {
        ctx->pc = 0x27763Cu;
            // 0x27763c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x277640u;
        goto label_277640;
    }
    ctx->pc = 0x277638u;
    {
        const bool branch_taken_0x277638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27763Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277638u;
            // 0x27763c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277638) {
            ctx->pc = 0x277754u;
            goto label_277754;
        }
    }
    ctx->pc = 0x277640u;
label_277640:
    // 0x277640: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x277640u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_277644:
    // 0x277644: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_277648:
    // 0x277648: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x277648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_27764c:
    // 0x27764c: 0x320f809  jalr        $t9
label_277650:
    if (ctx->pc == 0x277650u) {
        ctx->pc = 0x277650u;
            // 0x277650: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x277654u;
        goto label_277654;
    }
    ctx->pc = 0x27764Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x277654u);
        ctx->pc = 0x277650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27764Cu;
            // 0x277650: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x277654u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x277654u; }
            if (ctx->pc != 0x277654u) { return; }
        }
        }
    }
    ctx->pc = 0x277654u;
label_277654:
    // 0x277654: 0xc09b8c8  jal         func_26E320
label_277658:
    if (ctx->pc == 0x277658u) {
        ctx->pc = 0x27765Cu;
        goto label_27765c;
    }
    ctx->pc = 0x277654u;
    SET_GPR_U32(ctx, 31, 0x27765Cu);
    ctx->pc = 0x26E320u;
    if (runtime->hasFunction(0x26E320u)) {
        auto targetFn = runtime->lookupFunction(0x26E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27765Cu; }
        if (ctx->pc != 0x27765Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__Fv_0x26e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27765Cu; }
        if (ctx->pc != 0x27765Cu) { return; }
    }
    ctx->pc = 0x27765Cu;
label_27765c:
    // 0x27765c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27765cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_277660:
    // 0x277660: 0xc04c684  jal         func_131A10
label_277664:
    if (ctx->pc == 0x277664u) {
        ctx->pc = 0x277664u;
            // 0x277664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x277668u;
        goto label_277668;
    }
    ctx->pc = 0x277660u;
    SET_GPR_U32(ctx, 31, 0x277668u);
    ctx->pc = 0x277664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277660u;
            // 0x277664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A10u;
    if (runtime->hasFunction(0x131A10u)) {
        auto targetFn = runtime->lookupFunction(0x131A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277668u; }
        if (ctx->pc != 0x277668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDistance__15mgCCameraFollowFv_0x131a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277668u; }
        if (ctx->pc != 0x277668u) { return; }
    }
    ctx->pc = 0x277668u;
label_277668:
    // 0x277668: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x277668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_27766c:
    // 0x27766c: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x27766cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
label_277670:
    // 0x277670: 0xc0a0f58  jal         func_283D60
label_277674:
    if (ctx->pc == 0x277674u) {
        ctx->pc = 0x277674u;
            // 0x277674: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x277678u;
        goto label_277678;
    }
    ctx->pc = 0x277670u;
    SET_GPR_U32(ctx, 31, 0x277678u);
    ctx->pc = 0x277674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277670u;
            // 0x277674: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277678u; }
        if (ctx->pc != 0x277678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277678u; }
        if (ctx->pc != 0x277678u) { return; }
    }
    ctx->pc = 0x277678u;
label_277678:
    // 0x277678: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x277678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27767c:
    // 0x27767c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27767cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_277680:
    // 0x277680: 0xc04c578  jal         func_1315E0
label_277684:
    if (ctx->pc == 0x277684u) {
        ctx->pc = 0x277684u;
            // 0x277684: 0x27a55070  addiu       $a1, $sp, 0x5070 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20592));
        ctx->pc = 0x277688u;
        goto label_277688;
    }
    ctx->pc = 0x277680u;
    SET_GPR_U32(ctx, 31, 0x277688u);
    ctx->pc = 0x277684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277680u;
            // 0x277684: 0x27a55070  addiu       $a1, $sp, 0x5070 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315E0u;
    if (runtime->hasFunction(0x1315E0u)) {
        auto targetFn = runtime->lookupFunction(0x1315E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277688u; }
        if (ctx->pc != 0x277688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRef__9mgCCameraFPf_0x1315e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277688u; }
        if (ctx->pc != 0x277688u) { return; }
    }
    ctx->pc = 0x277688u;
label_277688:
    // 0x277688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27768c:
    // 0x27768c: 0xc0bb22c  jal         func_2EC8B0
label_277690:
    if (ctx->pc == 0x277690u) {
        ctx->pc = 0x277690u;
            // 0x277690: 0x27a55070  addiu       $a1, $sp, 0x5070 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20592));
        ctx->pc = 0x277694u;
        goto label_277694;
    }
    ctx->pc = 0x27768Cu;
    SET_GPR_U32(ctx, 31, 0x277694u);
    ctx->pc = 0x277690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27768Cu;
            // 0x277690: 0x27a55070  addiu       $a1, $sp, 0x5070 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC8B0u;
    if (runtime->hasFunction(0x2EC8B0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277694u; }
        if (ctx->pc != 0x277694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCheckRef__14CCameraControlFPf_0x2ec8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277694u; }
        if (ctx->pc != 0x277694u) { return; }
    }
    ctx->pc = 0x277694u;
label_277694:
    // 0x277694: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x277694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_277698:
    // 0x277698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x277698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27769c:
    // 0x27769c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x27769cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_2776a0:
    // 0x2776a0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2776a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2776a4:
    // 0x2776a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2776a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2776a8:
    // 0x2776a8: 0x27a65050  addiu       $a2, $sp, 0x5050
    ctx->pc = 0x2776a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20560));
label_2776ac:
    // 0x2776ac: 0xc7a15070  lwc1        $f1, 0x5070($sp)
    ctx->pc = 0x2776acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2776b0:
    // 0x2776b0: 0x46140082  mul.s       $f2, $f0, $f20
    ctx->pc = 0x2776b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2776b4:
    // 0x2776b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2776b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2776b8:
    // 0x2776b8: 0xafa2505c  sw          $v0, 0x505C($sp)
    ctx->pc = 0x2776b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20572), GPR_U32(ctx, 2));
label_2776bc:
    // 0x2776bc: 0xafa2506c  sw          $v0, 0x506C($sp)
    ctx->pc = 0x2776bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20588), GPR_U32(ctx, 2));
label_2776c0:
    // 0x2776c0: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x2776c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2776c4:
    // 0x2776c4: 0xe7a05050  swc1        $f0, 0x5050($sp)
    ctx->pc = 0x2776c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20560), bits); }
label_2776c8:
    // 0x2776c8: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x2776c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_2776cc:
    // 0x2776cc: 0xc7a35074  lwc1        $f3, 0x5074($sp)
    ctx->pc = 0x2776ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2776d0:
    // 0x2776d0: 0xe7a05060  swc1        $f0, 0x5060($sp)
    ctx->pc = 0x2776d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20576), bits); }
label_2776d4:
    // 0x2776d4: 0xc7a45078  lwc1        $f4, 0x5078($sp)
    ctx->pc = 0x2776d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2776d8:
    // 0x2776d8: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x2776d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2776dc:
    // 0x2776dc: 0xe7a05054  swc1        $f0, 0x5054($sp)
    ctx->pc = 0x2776dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20564), bits); }
label_2776e0:
    // 0x2776e0: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x2776e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_2776e4:
    // 0x2776e4: 0xe7a05064  swc1        $f0, 0x5064($sp)
    ctx->pc = 0x2776e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20580), bits); }
label_2776e8:
    // 0x2776e8: 0x46022040  add.s       $f1, $f4, $f2
    ctx->pc = 0x2776e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_2776ec:
    // 0x2776ec: 0x46022001  sub.s       $f0, $f4, $f2
    ctx->pc = 0x2776ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_2776f0:
    // 0x2776f0: 0xe7a15058  swc1        $f1, 0x5058($sp)
    ctx->pc = 0x2776f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20568), bits); }
label_2776f4:
    // 0x2776f4: 0xe7a05068  swc1        $f0, 0x5068($sp)
    ctx->pc = 0x2776f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20584), bits); }
label_2776f8:
    // 0x2776f8: 0x8e390d00  lw          $t9, 0xD00($s1)
    ctx->pc = 0x2776f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3328)));
label_2776fc:
    // 0x2776fc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2776fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_277700:
    // 0x277700: 0x320f809  jalr        $t9
label_277704:
    if (ctx->pc == 0x277704u) {
        ctx->pc = 0x277704u;
            // 0x277704: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x277708u;
        goto label_277708;
    }
    ctx->pc = 0x277700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x277708u);
        ctx->pc = 0x277704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277700u;
            // 0x277704: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x277708u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x277708u; }
            if (ctx->pc != 0x277708u) { return; }
        }
        }
    }
    ctx->pc = 0x277708u;
label_277708:
    // 0x277708: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_27770c:
    if (ctx->pc == 0x27770Cu) {
        ctx->pc = 0x27770Cu;
            // 0x27770c: 0x28410101  slti        $at, $v0, 0x101 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)257) ? 1 : 0);
        ctx->pc = 0x277710u;
        goto label_277710;
    }
    ctx->pc = 0x277708u;
    {
        const bool branch_taken_0x277708 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27770Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277708u;
            // 0x27770c: 0x28410101  slti        $at, $v0, 0x101 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)257) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277708) {
            ctx->pc = 0x277718u;
            goto label_277718;
        }
    }
    ctx->pc = 0x277710u;
label_277710:
    // 0x277710: 0x10000010  b           . + 4 + (0x10 << 2)
label_277714:
    if (ctx->pc == 0x277714u) {
        ctx->pc = 0x277714u;
            // 0x277714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x277718u;
        goto label_277718;
    }
    ctx->pc = 0x277710u;
    {
        const bool branch_taken_0x277710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277710u;
            // 0x277714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277710) {
            ctx->pc = 0x277754u;
            goto label_277754;
        }
    }
    ctx->pc = 0x277718u;
label_277718:
    // 0x277718: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_27771c:
    if (ctx->pc == 0x27771Cu) {
        ctx->pc = 0x27771Cu;
            // 0x27771c: 0x3c05003d  lui         $a1, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x277720u;
        goto label_277720;
    }
    ctx->pc = 0x277718u;
    {
        const bool branch_taken_0x277718 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x27771Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277718u;
            // 0x27771c: 0x3c05003d  lui         $a1, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277718) {
            ctx->pc = 0x277738u;
            goto label_277738;
        }
    }
    ctx->pc = 0x277720u;
label_277720:
    // 0x277720: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x277720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_277724:
    // 0x277724: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x277724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_277728:
    // 0x277728: 0xc04a0d2  jal         func_128348
label_27772c:
    if (ctx->pc == 0x27772Cu) {
        ctx->pc = 0x27772Cu;
            // 0x27772c: 0x2484cb00  addiu       $a0, $a0, -0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953728));
        ctx->pc = 0x277730u;
        goto label_277730;
    }
    ctx->pc = 0x277728u;
    SET_GPR_U32(ctx, 31, 0x277730u);
    ctx->pc = 0x27772Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277728u;
            // 0x27772c: 0x2484cb00  addiu       $a0, $a0, -0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277730u; }
        if (ctx->pc != 0x277730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277730u; }
        if (ctx->pc != 0x277730u) { return; }
    }
    ctx->pc = 0x277730u;
label_277730:
    // 0x277730: 0x10000008  b           . + 4 + (0x8 << 2)
label_277734:
    if (ctx->pc == 0x277734u) {
        ctx->pc = 0x277734u;
            // 0x277734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x277738u;
        goto label_277738;
    }
    ctx->pc = 0x277730u;
    {
        const bool branch_taken_0x277730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277730u;
            // 0x277734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277730) {
            ctx->pc = 0x277754u;
            goto label_277754;
        }
    }
    ctx->pc = 0x277738u;
label_277738:
    // 0x277738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27773c:
    // 0x27773c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x27773cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_277740:
    // 0x277740: 0x24a57b60  addiu       $a1, $a1, 0x7B60
    ctx->pc = 0x277740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31584));
label_277744:
    // 0x277744: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x277744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_277748:
    // 0x277748: 0xc0bb07c  jal         func_2EC1F0
label_27774c:
    if (ctx->pc == 0x27774Cu) {
        ctx->pc = 0x27774Cu;
            // 0x27774c: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x277750u;
        goto label_277750;
    }
    ctx->pc = 0x277748u;
    SET_GPR_U32(ctx, 31, 0x277750u);
    ctx->pc = 0x27774Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277748u;
            // 0x27774c: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC1F0u;
    if (runtime->hasFunction(0x2EC1F0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277750u; }
        if (ctx->pc != 0x277750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveCamera__14CCameraControlFP11CPadControlPfP6CCPolyi_0x2ec1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277750u; }
        if (ctx->pc != 0x277750u) { return; }
    }
    ctx->pc = 0x277750u;
label_277750:
    // 0x277750: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_277754:
    // 0x277754: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x277754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_277758:
    // 0x277758: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x277758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27775c:
    // 0x27775c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27775cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_277760:
    // 0x277760: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x277760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_277764:
    // 0x277764: 0x3e00008  jr          $ra
label_277768:
    if (ctx->pc == 0x277768u) {
        ctx->pc = 0x277768u;
            // 0x277768: 0x27bd5080  addiu       $sp, $sp, 0x5080 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 20608));
        ctx->pc = 0x27776Cu;
        goto label_fallthrough_0x277764;
    }
    ctx->pc = 0x277764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277764u;
            // 0x277768: 0x27bd5080  addiu       $sp, $sp, 0x5080 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 20608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x277764:
    ctx->pc = 0x27776Cu;
}
