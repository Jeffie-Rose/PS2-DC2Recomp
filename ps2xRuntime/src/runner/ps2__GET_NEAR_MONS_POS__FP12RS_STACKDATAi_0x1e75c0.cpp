#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_NEAR_MONS_POS__FP12RS_STACKDATAi
// Address: 0x1e75c0 - 0x1e7718
void ps2__GET_NEAR_MONS_POS__FP12RS_STACKDATAi_0x1e75c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_NEAR_MONS_POS__FP12RS_STACKDATAi_0x1e75c0");
#endif

    switch (ctx->pc) {
        case 0x1e75c0u: goto label_1e75c0;
        case 0x1e75c4u: goto label_1e75c4;
        case 0x1e75c8u: goto label_1e75c8;
        case 0x1e75ccu: goto label_1e75cc;
        case 0x1e75d0u: goto label_1e75d0;
        case 0x1e75d4u: goto label_1e75d4;
        case 0x1e75d8u: goto label_1e75d8;
        case 0x1e75dcu: goto label_1e75dc;
        case 0x1e75e0u: goto label_1e75e0;
        case 0x1e75e4u: goto label_1e75e4;
        case 0x1e75e8u: goto label_1e75e8;
        case 0x1e75ecu: goto label_1e75ec;
        case 0x1e75f0u: goto label_1e75f0;
        case 0x1e75f4u: goto label_1e75f4;
        case 0x1e75f8u: goto label_1e75f8;
        case 0x1e75fcu: goto label_1e75fc;
        case 0x1e7600u: goto label_1e7600;
        case 0x1e7604u: goto label_1e7604;
        case 0x1e7608u: goto label_1e7608;
        case 0x1e760cu: goto label_1e760c;
        case 0x1e7610u: goto label_1e7610;
        case 0x1e7614u: goto label_1e7614;
        case 0x1e7618u: goto label_1e7618;
        case 0x1e761cu: goto label_1e761c;
        case 0x1e7620u: goto label_1e7620;
        case 0x1e7624u: goto label_1e7624;
        case 0x1e7628u: goto label_1e7628;
        case 0x1e762cu: goto label_1e762c;
        case 0x1e7630u: goto label_1e7630;
        case 0x1e7634u: goto label_1e7634;
        case 0x1e7638u: goto label_1e7638;
        case 0x1e763cu: goto label_1e763c;
        case 0x1e7640u: goto label_1e7640;
        case 0x1e7644u: goto label_1e7644;
        case 0x1e7648u: goto label_1e7648;
        case 0x1e764cu: goto label_1e764c;
        case 0x1e7650u: goto label_1e7650;
        case 0x1e7654u: goto label_1e7654;
        case 0x1e7658u: goto label_1e7658;
        case 0x1e765cu: goto label_1e765c;
        case 0x1e7660u: goto label_1e7660;
        case 0x1e7664u: goto label_1e7664;
        case 0x1e7668u: goto label_1e7668;
        case 0x1e766cu: goto label_1e766c;
        case 0x1e7670u: goto label_1e7670;
        case 0x1e7674u: goto label_1e7674;
        case 0x1e7678u: goto label_1e7678;
        case 0x1e767cu: goto label_1e767c;
        case 0x1e7680u: goto label_1e7680;
        case 0x1e7684u: goto label_1e7684;
        case 0x1e7688u: goto label_1e7688;
        case 0x1e768cu: goto label_1e768c;
        case 0x1e7690u: goto label_1e7690;
        case 0x1e7694u: goto label_1e7694;
        case 0x1e7698u: goto label_1e7698;
        case 0x1e769cu: goto label_1e769c;
        case 0x1e76a0u: goto label_1e76a0;
        case 0x1e76a4u: goto label_1e76a4;
        case 0x1e76a8u: goto label_1e76a8;
        case 0x1e76acu: goto label_1e76ac;
        case 0x1e76b0u: goto label_1e76b0;
        case 0x1e76b4u: goto label_1e76b4;
        case 0x1e76b8u: goto label_1e76b8;
        case 0x1e76bcu: goto label_1e76bc;
        case 0x1e76c0u: goto label_1e76c0;
        case 0x1e76c4u: goto label_1e76c4;
        case 0x1e76c8u: goto label_1e76c8;
        case 0x1e76ccu: goto label_1e76cc;
        case 0x1e76d0u: goto label_1e76d0;
        case 0x1e76d4u: goto label_1e76d4;
        case 0x1e76d8u: goto label_1e76d8;
        case 0x1e76dcu: goto label_1e76dc;
        case 0x1e76e0u: goto label_1e76e0;
        case 0x1e76e4u: goto label_1e76e4;
        case 0x1e76e8u: goto label_1e76e8;
        case 0x1e76ecu: goto label_1e76ec;
        case 0x1e76f0u: goto label_1e76f0;
        case 0x1e76f4u: goto label_1e76f4;
        case 0x1e76f8u: goto label_1e76f8;
        case 0x1e76fcu: goto label_1e76fc;
        case 0x1e7700u: goto label_1e7700;
        case 0x1e7704u: goto label_1e7704;
        case 0x1e7708u: goto label_1e7708;
        case 0x1e770cu: goto label_1e770c;
        case 0x1e7710u: goto label_1e7710;
        case 0x1e7714u: goto label_1e7714;
        default: break;
    }

    ctx->pc = 0x1e75c0u;

label_1e75c0:
    // 0x1e75c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e75c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e75c4:
    // 0x1e75c4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1e75c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1e75c8:
    // 0x1e75c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e75c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e75cc:
    // 0x1e75cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e75ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1e75d0:
    // 0x1e75d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e75d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e75d4:
    // 0x1e75d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e75d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e75d8:
    // 0x1e75d8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e75d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e75dc:
    // 0x1e75dc: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e75dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e75e0:
    // 0x1e75e0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1e75e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1e75e4:
    // 0x1e75e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e75e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e75e8:
    // 0x1e75e8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e75e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e75ec:
    // 0x1e75ec: 0x320f809  jalr        $t9
label_1e75f0:
    if (ctx->pc == 0x1E75F0u) {
        ctx->pc = 0x1E75F0u;
            // 0x1e75f0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1E75F4u;
        goto label_1e75f4;
    }
    ctx->pc = 0x1E75ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E75F4u);
        ctx->pc = 0x1E75F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E75ECu;
            // 0x1e75f0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E75F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E75F4u; }
            if (ctx->pc != 0x1E75F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1E75F4u;
label_1e75f4:
    // 0x1e75f4: 0xc04bc8c  jal         func_12F230
label_1e75f8:
    if (ctx->pc == 0x1E75F8u) {
        ctx->pc = 0x1E75F8u;
            // 0x1e75f8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1E75FCu;
        goto label_1e75fc;
    }
    ctx->pc = 0x1E75F4u;
    SET_GPR_U32(ctx, 31, 0x1E75FCu);
    ctx->pc = 0x1E75F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E75F4u;
            // 0x1e75f8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E75FCu; }
        if (ctx->pc != 0x1E75FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E75FCu; }
        if (ctx->pc != 0x1E75FCu) { return; }
    }
    ctx->pc = 0x1E75FCu;
label_1e75fc:
    // 0x1e75fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e75fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e7600:
    // 0x1e7600: 0x8f848e6c  lw          $a0, -0x7194($gp)
    ctx->pc = 0x1e7600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
label_1e7604:
    // 0x1e7604: 0xc0a0ed8  jal         func_283B60
label_1e7608:
    if (ctx->pc == 0x1E7608u) {
        ctx->pc = 0x1E7608u;
            // 0x1e7608: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->pc = 0x1E760Cu;
        goto label_1e760c;
    }
    ctx->pc = 0x1E7604u;
    SET_GPR_U32(ctx, 31, 0x1E760Cu);
    ctx->pc = 0x1E7608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7604u;
            // 0x1e7608: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E760Cu; }
        if (ctx->pc != 0x1E760Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E760Cu; }
        if (ctx->pc != 0x1E760Cu) { return; }
    }
    ctx->pc = 0x1E760Cu;
label_1e760c:
    // 0x1e760c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_1e7610:
    if (ctx->pc == 0x1E7610u) {
        ctx->pc = 0x1E7610u;
            // 0x1e7610: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7614u;
        goto label_1e7614;
    }
    ctx->pc = 0x1E760Cu;
    {
        const bool branch_taken_0x1e760c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E760Cu;
            // 0x1e7610: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e760c) {
            ctx->pc = 0x1E76ACu;
            goto label_1e76ac;
        }
    }
    ctx->pc = 0x1E7614u;
label_1e7614:
    // 0x1e7614: 0x8483068a  lh          $v1, 0x68A($a0)
    ctx->pc = 0x1e7614u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1674)));
label_1e7618:
    // 0x1e7618: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e7618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e761c:
    // 0x1e761c: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
label_1e7620:
    if (ctx->pc == 0x1E7620u) {
        ctx->pc = 0x1E7624u;
        goto label_1e7624;
    }
    ctx->pc = 0x1E761Cu;
    {
        const bool branch_taken_0x1e761c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e761c) {
            ctx->pc = 0x1E76ACu;
            goto label_1e76ac;
        }
    }
    ctx->pc = 0x1E7624u;
label_1e7624:
    // 0x1e7624: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e7624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e7628:
    // 0x1e7628: 0x8c820670  lw          $v0, 0x670($a0)
    ctx->pc = 0x1e7628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1648)));
label_1e762c:
    // 0x1e762c: 0x8c630670  lw          $v1, 0x670($v1)
    ctx->pc = 0x1e762cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
label_1e7630:
    // 0x1e7630: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
label_1e7634:
    if (ctx->pc == 0x1E7634u) {
        ctx->pc = 0x1E7638u;
        goto label_1e7638;
    }
    ctx->pc = 0x1E7630u;
    {
        const bool branch_taken_0x1e7630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e7630) {
            ctx->pc = 0x1E76ACu;
            goto label_1e76ac;
        }
    }
    ctx->pc = 0x1E7638u;
label_1e7638:
    // 0x1e7638: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e7638u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e763c:
    // 0x1e763c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e763cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e7640:
    // 0x1e7640: 0x320f809  jalr        $t9
label_1e7644:
    if (ctx->pc == 0x1E7644u) {
        ctx->pc = 0x1E7644u;
            // 0x1e7644: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1E7648u;
        goto label_1e7648;
    }
    ctx->pc = 0x1E7640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E7648u);
        ctx->pc = 0x1E7644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7640u;
            // 0x1e7644: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E7648u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E7648u; }
            if (ctx->pc != 0x1E7648u) { return; }
        }
        }
    }
    ctx->pc = 0x1E7648u;
label_1e7648:
    // 0x1e7648: 0xc0a24f0  jal         func_2893C0
label_1e764c:
    if (ctx->pc == 0x1E764Cu) {
        ctx->pc = 0x1E764Cu;
            // 0x1e764c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1E7650u;
        goto label_1e7650;
    }
    ctx->pc = 0x1E7648u;
    SET_GPR_U32(ctx, 31, 0x1E7650u);
    ctx->pc = 0x1E764Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7648u;
            // 0x1e764c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7650u; }
        if (ctx->pc != 0x1E7650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7650u; }
        if (ctx->pc != 0x1E7650u) { return; }
    }
    ctx->pc = 0x1E7650u;
label_1e7650:
    // 0x1e7650: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e7650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e7654:
    // 0x1e7654: 0xc040058  jal         func_100160
label_1e7658:
    if (ctx->pc == 0x1E7658u) {
        ctx->pc = 0x1E7658u;
            // 0x1e7658: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E765Cu;
        goto label_1e765c;
    }
    ctx->pc = 0x1E7654u;
    SET_GPR_U32(ctx, 31, 0x1E765Cu);
    ctx->pc = 0x1E7658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7654u;
            // 0x1e7658: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100160u;
    if (runtime->hasFunction(0x100160u)) {
        auto targetFn = runtime->lookupFunction(0x100160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E765Cu; }
        if (ctx->pc != 0x1E765Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x100160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E765Cu; }
        if (ctx->pc != 0x1E765Cu) { return; }
    }
    ctx->pc = 0x1E765Cu;
label_1e765c:
    // 0x1e765c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1e7660:
    if (ctx->pc == 0x1E7660u) {
        ctx->pc = 0x1E7660u;
            // 0x1e7660: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1E7664u;
        goto label_1e7664;
    }
    ctx->pc = 0x1E765Cu;
    {
        const bool branch_taken_0x1e765c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E765Cu;
            // 0x1e7660: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e765c) {
            ctx->pc = 0x1E7690u;
            goto label_1e7690;
        }
    }
    ctx->pc = 0x1E7664u;
label_1e7664:
    // 0x1e7664: 0xc04c018  jal         func_130060
label_1e7668:
    if (ctx->pc == 0x1E7668u) {
        ctx->pc = 0x1E7668u;
            // 0x1e7668: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1E766Cu;
        goto label_1e766c;
    }
    ctx->pc = 0x1E7664u;
    SET_GPR_U32(ctx, 31, 0x1E766Cu);
    ctx->pc = 0x1E7668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7664u;
            // 0x1e7668: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E766Cu; }
        if (ctx->pc != 0x1E766Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E766Cu; }
        if (ctx->pc != 0x1E766Cu) { return; }
    }
    ctx->pc = 0x1E766Cu;
label_1e766c:
    // 0x1e766c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1e766cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e7670:
    // 0x1e7670: 0x0  nop
    ctx->pc = 0x1e7670u;
    // NOP
label_1e7674:
    // 0x1e7674: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1e7678:
    if (ctx->pc == 0x1E7678u) {
        ctx->pc = 0x1E7678u;
            // 0x1e7678: 0x27a20060  addiu       $v0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1E767Cu;
        goto label_1e767c;
    }
    ctx->pc = 0x1E7674u;
    {
        const bool branch_taken_0x1e7674 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7674u;
            // 0x1e7678: 0x27a20060  addiu       $v0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7674) {
            ctx->pc = 0x1E76ACu;
            goto label_1e76ac;
        }
    }
    ctx->pc = 0x1E767Cu;
label_1e767c:
    // 0x1e767c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1e767cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1e7680:
    // 0x1e7680: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e7680u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1e7684:
    // 0x1e7684: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1e7684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1e7688:
    // 0x1e7688: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e768c:
    if (ctx->pc == 0x1E768Cu) {
        ctx->pc = 0x1E768Cu;
            // 0x1e768c: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->pc = 0x1E7690u;
        goto label_1e7690;
    }
    ctx->pc = 0x1E7688u;
    {
        const bool branch_taken_0x1e7688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E768Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7688u;
            // 0x1e768c: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7688) {
            ctx->pc = 0x1E76ACu;
            goto label_1e76ac;
        }
    }
    ctx->pc = 0x1E7690u;
label_1e7690:
    // 0x1e7690: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1e7690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e7694:
    // 0x1e7694: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1e7694u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1e7698:
    // 0x1e7698: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1e7698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1e769c:
    // 0x1e769c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e769cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e76a0:
    // 0x1e76a0: 0xc04c018  jal         func_130060
label_1e76a4:
    if (ctx->pc == 0x1E76A4u) {
        ctx->pc = 0x1E76A4u;
            // 0x1e76a4: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x1E76A8u;
        goto label_1e76a8;
    }
    ctx->pc = 0x1E76A0u;
    SET_GPR_U32(ctx, 31, 0x1E76A8u);
    ctx->pc = 0x1E76A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E76A0u;
            // 0x1e76a4: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E76A8u; }
        if (ctx->pc != 0x1E76A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E76A8u; }
        if (ctx->pc != 0x1E76A8u) { return; }
    }
    ctx->pc = 0x1E76A8u;
label_1e76a8:
    // 0x1e76a8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e76a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1e76ac:
    // 0x1e76ac: 0x0  nop
    ctx->pc = 0x1e76acu;
    // NOP
label_1e76b0:
    // 0x1e76b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e76b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e76b4:
    // 0x1e76b4: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x1e76b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
label_1e76b8:
    // 0x1e76b8: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_1e76bc:
    if (ctx->pc == 0x1E76BCu) {
        ctx->pc = 0x1E76C0u;
        goto label_1e76c0;
    }
    ctx->pc = 0x1E76B8u;
    {
        const bool branch_taken_0x1e76b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e76b8) {
            ctx->pc = 0x1E7600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e7600;
        }
    }
    ctx->pc = 0x1E76C0u;
label_1e76c0:
    // 0x1e76c0: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x1e76c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e76c4:
    // 0x1e76c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e76c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e76c8:
    // 0x1e76c8: 0xc0781c4  jal         func_1E0710
label_1e76cc:
    if (ctx->pc == 0x1E76CCu) {
        ctx->pc = 0x1E76CCu;
            // 0x1e76cc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E76D0u;
        goto label_1e76d0;
    }
    ctx->pc = 0x1E76C8u;
    SET_GPR_U32(ctx, 31, 0x1E76D0u);
    ctx->pc = 0x1E76CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E76C8u;
            // 0x1e76cc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E76D0u; }
        if (ctx->pc != 0x1E76D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E76D0u; }
        if (ctx->pc != 0x1E76D0u) { return; }
    }
    ctx->pc = 0x1E76D0u;
label_1e76d0:
    // 0x1e76d0: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x1e76d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e76d4:
    // 0x1e76d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e76d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e76d8:
    // 0x1e76d8: 0xc0781c4  jal         func_1E0710
label_1e76dc:
    if (ctx->pc == 0x1E76DCu) {
        ctx->pc = 0x1E76DCu;
            // 0x1e76dc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E76E0u;
        goto label_1e76e0;
    }
    ctx->pc = 0x1E76D8u;
    SET_GPR_U32(ctx, 31, 0x1E76E0u);
    ctx->pc = 0x1E76DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E76D8u;
            // 0x1e76dc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E76E0u; }
        if (ctx->pc != 0x1E76E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E76E0u; }
        if (ctx->pc != 0x1E76E0u) { return; }
    }
    ctx->pc = 0x1E76E0u;
label_1e76e0:
    // 0x1e76e0: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x1e76e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e76e4:
    // 0x1e76e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e76e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e76e8:
    // 0x1e76e8: 0xc0781c4  jal         func_1E0710
label_1e76ec:
    if (ctx->pc == 0x1E76ECu) {
        ctx->pc = 0x1E76ECu;
            // 0x1e76ec: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E76F0u;
        goto label_1e76f0;
    }
    ctx->pc = 0x1E76E8u;
    SET_GPR_U32(ctx, 31, 0x1E76F0u);
    ctx->pc = 0x1E76ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E76E8u;
            // 0x1e76ec: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E76F0u; }
        if (ctx->pc != 0x1E76F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E76F0u; }
        if (ctx->pc != 0x1E76F0u) { return; }
    }
    ctx->pc = 0x1E76F0u;
label_1e76f0:
    // 0x1e76f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e76f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e76f4:
    // 0x1e76f4: 0xc0781c4  jal         func_1E0710
label_1e76f8:
    if (ctx->pc == 0x1E76F8u) {
        ctx->pc = 0x1E76F8u;
            // 0x1e76f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1E76FCu;
        goto label_1e76fc;
    }
    ctx->pc = 0x1E76F4u;
    SET_GPR_U32(ctx, 31, 0x1E76FCu);
    ctx->pc = 0x1E76F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E76F4u;
            // 0x1e76f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E76FCu; }
        if (ctx->pc != 0x1E76FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E76FCu; }
        if (ctx->pc != 0x1E76FCu) { return; }
    }
    ctx->pc = 0x1E76FCu;
label_1e76fc:
    // 0x1e76fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e76fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e7700:
    // 0x1e7700: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e7700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e7704:
    // 0x1e7704: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e7704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e7708:
    // 0x1e7708: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e770c:
    // 0x1e770c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e770cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e7710:
    // 0x1e7710: 0x3e00008  jr          $ra
label_1e7714:
    if (ctx->pc == 0x1E7714u) {
        ctx->pc = 0x1E7714u;
            // 0x1e7714: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1E7718u;
        goto label_fallthrough_0x1e7710;
    }
    ctx->pc = 0x1E7710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7710u;
            // 0x1e7714: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e7710:
    ctx->pc = 0x1E7718u;
}
