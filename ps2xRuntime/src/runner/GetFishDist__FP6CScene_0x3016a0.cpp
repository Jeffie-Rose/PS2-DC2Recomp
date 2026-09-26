#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFishDist__FP6CScene
// Address: 0x3016a0 - 0x301720
void GetFishDist__FP6CScene_0x3016a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFishDist__FP6CScene_0x3016a0");
#endif

    switch (ctx->pc) {
        case 0x3016a0u: goto label_3016a0;
        case 0x3016a4u: goto label_3016a4;
        case 0x3016a8u: goto label_3016a8;
        case 0x3016acu: goto label_3016ac;
        case 0x3016b0u: goto label_3016b0;
        case 0x3016b4u: goto label_3016b4;
        case 0x3016b8u: goto label_3016b8;
        case 0x3016bcu: goto label_3016bc;
        case 0x3016c0u: goto label_3016c0;
        case 0x3016c4u: goto label_3016c4;
        case 0x3016c8u: goto label_3016c8;
        case 0x3016ccu: goto label_3016cc;
        case 0x3016d0u: goto label_3016d0;
        case 0x3016d4u: goto label_3016d4;
        case 0x3016d8u: goto label_3016d8;
        case 0x3016dcu: goto label_3016dc;
        case 0x3016e0u: goto label_3016e0;
        case 0x3016e4u: goto label_3016e4;
        case 0x3016e8u: goto label_3016e8;
        case 0x3016ecu: goto label_3016ec;
        case 0x3016f0u: goto label_3016f0;
        case 0x3016f4u: goto label_3016f4;
        case 0x3016f8u: goto label_3016f8;
        case 0x3016fcu: goto label_3016fc;
        case 0x301700u: goto label_301700;
        case 0x301704u: goto label_301704;
        case 0x301708u: goto label_301708;
        case 0x30170cu: goto label_30170c;
        case 0x301710u: goto label_301710;
        case 0x301714u: goto label_301714;
        case 0x301718u: goto label_301718;
        case 0x30171cu: goto label_30171c;
        default: break;
    }

    ctx->pc = 0x3016a0u;

label_3016a0:
    // 0x3016a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3016a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3016a4:
    // 0x3016a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3016a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3016a8:
    // 0x3016a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3016a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3016ac:
    // 0x3016ac: 0xc0a0ed8  jal         func_283B60
label_3016b0:
    if (ctx->pc == 0x3016B0u) {
        ctx->pc = 0x3016B0u;
            // 0x3016b0: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->pc = 0x3016B4u;
        goto label_3016b4;
    }
    ctx->pc = 0x3016ACu;
    SET_GPR_U32(ctx, 31, 0x3016B4u);
    ctx->pc = 0x3016B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3016ACu;
            // 0x3016b0: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3016B4u; }
        if (ctx->pc != 0x3016B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3016B4u; }
        if (ctx->pc != 0x3016B4u) { return; }
    }
    ctx->pc = 0x3016B4u;
label_3016b4:
    // 0x3016b4: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x3016b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3016b8:
    // 0x3016b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3016b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3016bc:
    // 0x3016bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3016bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3016c0:
    // 0x3016c0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3016c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3016c4:
    // 0x3016c4: 0x320f809  jalr        $t9
label_3016c8:
    if (ctx->pc == 0x3016C8u) {
        ctx->pc = 0x3016C8u;
            // 0x3016c8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3016CCu;
        goto label_3016cc;
    }
    ctx->pc = 0x3016C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3016CCu);
        ctx->pc = 0x3016C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3016C4u;
            // 0x3016c8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3016CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3016CCu; }
            if (ctx->pc != 0x3016CCu) { return; }
        }
        }
    }
    ctx->pc = 0x3016CCu;
label_3016cc:
    // 0x3016cc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3016ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3016d0:
    // 0x3016d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3016d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3016d4:
    // 0x3016d4: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x3016d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_3016d8:
    // 0x3016d8: 0x320f809  jalr        $t9
label_3016dc:
    if (ctx->pc == 0x3016DCu) {
        ctx->pc = 0x3016DCu;
            // 0x3016dc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3016E0u;
        goto label_3016e0;
    }
    ctx->pc = 0x3016D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3016E0u);
        ctx->pc = 0x3016DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3016D8u;
            // 0x3016dc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3016E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3016E0u; }
            if (ctx->pc != 0x3016E0u) { return; }
        }
        }
    }
    ctx->pc = 0x3016E0u;
label_3016e0:
    // 0x3016e0: 0xc04c050  jal         func_130140
label_3016e4:
    if (ctx->pc == 0x3016E4u) {
        ctx->pc = 0x3016E4u;
            // 0x3016e4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3016E8u;
        goto label_3016e8;
    }
    ctx->pc = 0x3016E0u;
    SET_GPR_U32(ctx, 31, 0x3016E8u);
    ctx->pc = 0x3016E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3016E0u;
            // 0x3016e4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3016E8u; }
        if (ctx->pc != 0x3016E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3016E8u; }
        if (ctx->pc != 0x3016E8u) { return; }
    }
    ctx->pc = 0x3016E8u;
label_3016e8:
    // 0x3016e8: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x3016e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3016ec:
    // 0x3016ec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3016ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3016f0:
    // 0x3016f0: 0xc041cf6  jal         func_1073D8
label_3016f4:
    if (ctx->pc == 0x3016F4u) {
        ctx->pc = 0x3016F4u;
            // 0x3016f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3016F8u;
        goto label_3016f8;
    }
    ctx->pc = 0x3016F0u;
    SET_GPR_U32(ctx, 31, 0x3016F8u);
    ctx->pc = 0x3016F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3016F0u;
            // 0x3016f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3016F8u; }
        if (ctx->pc != 0x3016F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3016F8u; }
        if (ctx->pc != 0x3016F8u) { return; }
    }
    ctx->pc = 0x3016F8u;
label_3016f8:
    // 0x3016f8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3016f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3016fc:
    // 0x3016fc: 0xc0c441c  jal         func_311070
label_301700:
    if (ctx->pc == 0x301700u) {
        ctx->pc = 0x301700u;
            // 0x301700: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x301704u;
        goto label_301704;
    }
    ctx->pc = 0x3016FCu;
    SET_GPR_U32(ctx, 31, 0x301704u);
    ctx->pc = 0x301700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3016FCu;
            // 0x301700: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x311070u;
    if (runtime->hasFunction(0x311070u)) {
        auto targetFn = runtime->lookupFunction(0x311070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301704u; }
        if (ctx->pc != 0x301704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishPosVelo__FPfPf_0x311070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301704u; }
        if (ctx->pc != 0x301704u) { return; }
    }
    ctx->pc = 0x301704u;
label_301704:
    // 0x301704: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x301704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_301708:
    // 0x301708: 0xc04c028  jal         func_1300A0
label_30170c:
    if (ctx->pc == 0x30170Cu) {
        ctx->pc = 0x30170Cu;
            // 0x30170c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x301710u;
        goto label_301710;
    }
    ctx->pc = 0x301708u;
    SET_GPR_U32(ctx, 31, 0x301710u);
    ctx->pc = 0x30170Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301708u;
            // 0x30170c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301710u; }
        if (ctx->pc != 0x301710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301710u; }
        if (ctx->pc != 0x301710u) { return; }
    }
    ctx->pc = 0x301710u;
label_301710:
    // 0x301710: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x301710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_301714:
    // 0x301714: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x301714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_301718:
    // 0x301718: 0x3e00008  jr          $ra
label_30171c:
    if (ctx->pc == 0x30171Cu) {
        ctx->pc = 0x30171Cu;
            // 0x30171c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x301720u;
        goto label_fallthrough_0x301718;
    }
    ctx->pc = 0x301718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30171Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301718u;
            // 0x30171c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x301718:
    ctx->pc = 0x301720u;
}
