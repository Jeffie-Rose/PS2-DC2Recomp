#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawMenuDl__Fiiiif
// Address: 0x2a4620 - 0x2a48e4
void DrawMenuDl__Fiiiif_0x2a4620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawMenuDl__Fiiiif_0x2a4620");
#endif

    switch (ctx->pc) {
        case 0x2a4668u: goto label_2a4668;
        case 0x2a4674u: goto label_2a4674;
        case 0x2a4680u: goto label_2a4680;
        case 0x2a468cu: goto label_2a468c;
        case 0x2a46a4u: goto label_2a46a4;
        case 0x2a46bcu: goto label_2a46bc;
        case 0x2a46d4u: goto label_2a46d4;
        case 0x2a46ecu: goto label_2a46ec;
        case 0x2a46fcu: goto label_2a46fc;
        case 0x2a4704u: goto label_2a4704;
        case 0x2a4710u: goto label_2a4710;
        case 0x2a4758u: goto label_2a4758;
        case 0x2a4790u: goto label_2a4790;
        case 0x2a47acu: goto label_2a47ac;
        case 0x2a47c4u: goto label_2a47c4;
        case 0x2a47d4u: goto label_2a47d4;
        case 0x2a47dcu: goto label_2a47dc;
        case 0x2a47e8u: goto label_2a47e8;
        case 0x2a47f4u: goto label_2a47f4;
        case 0x2a47fcu: goto label_2a47fc;
        case 0x2a4814u: goto label_2a4814;
        case 0x2a483cu: goto label_2a483c;
        case 0x2a4850u: goto label_2a4850;
        case 0x2a4868u: goto label_2a4868;
        case 0x2a4880u: goto label_2a4880;
        case 0x2a4894u: goto label_2a4894;
        case 0x2a48b4u: goto label_2a48b4;
        default: break;
    }

    ctx->pc = 0x2a4620u;

    // 0x2a4620: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x2a4620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x2a4624: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2a4624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2a4628: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2a4628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2a462c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2a462cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2a4630: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2a4630u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4634: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2a4634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2a4638: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2a4638u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a463c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2a463cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2a4640: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a4640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a4644: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a4644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a4648: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a4648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a464c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a464cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a4650: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a4650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a4654: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a4654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4658: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2a4658u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a465c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a465cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4660: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x2A4660u;
    SET_GPR_U32(ctx, 31, 0x2A4668u);
    ctx->pc = 0x2A4664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4660u;
            // 0x2a4664: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4668u; }
        if (ctx->pc != 0x2A4668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4668u; }
        if (ctx->pc != 0x2A4668u) { return; }
    }
    ctx->pc = 0x2A4668u;
label_2a4668:
    // 0x2a4668: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a4668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a466c: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x2A466Cu;
    SET_GPR_U32(ctx, 31, 0x2A4674u);
    ctx->pc = 0x2A4670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A466Cu;
            // 0x2a4670: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4674u; }
        if (ctx->pc != 0x2A4674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4674u; }
        if (ctx->pc != 0x2A4674u) { return; }
    }
    ctx->pc = 0x2A4674u;
label_2a4674:
    // 0x2a4674: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a4674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a4678: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2A4678u;
    SET_GPR_U32(ctx, 31, 0x2A4680u);
    ctx->pc = 0x2A467Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4678u;
            // 0x2a467c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4680u; }
        if (ctx->pc != 0x2A4680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4680u; }
        if (ctx->pc != 0x2A4680u) { return; }
    }
    ctx->pc = 0x2A4680u;
label_2a4680:
    // 0x2a4680: 0x8f859a1c  lw          $a1, -0x65E4($gp)
    ctx->pc = 0x2a4680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941212)));
    // 0x2a4684: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2A4684u;
    SET_GPR_U32(ctx, 31, 0x2A468Cu);
    ctx->pc = 0x2A4688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4684u;
            // 0x2a4688: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A468Cu; }
        if (ctx->pc != 0x2A468Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A468Cu; }
        if (ctx->pc != 0x2A468Cu) { return; }
    }
    ctx->pc = 0x2A468Cu;
label_2a468c:
    // 0x2a468c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2a468cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a4690: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a4690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a4694: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a4694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4698: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2a4698u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a469c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2A469Cu;
    SET_GPR_U32(ctx, 31, 0x2A46A4u);
    ctx->pc = 0x2A46A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A469Cu;
            // 0x2a46a0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A46A4u; }
        if (ctx->pc != 0x2A46A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A46A4u; }
        if (ctx->pc != 0x2A46A4u) { return; }
    }
    ctx->pc = 0x2A46A4u;
label_2a46a4:
    // 0x2a46a4: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x2a46a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a46a8: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2a46a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2a46ac: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x2a46acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x2a46b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a46b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a46b4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2A46B4u;
    SET_GPR_U32(ctx, 31, 0x2A46BCu);
    ctx->pc = 0x2A46B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A46B4u;
            // 0x2a46b8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A46BCu; }
        if (ctx->pc != 0x2A46BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A46BCu; }
        if (ctx->pc != 0x2A46BCu) { return; }
    }
    ctx->pc = 0x2A46BCu;
label_2a46bc:
    // 0x2a46bc: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2a46bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2a46c0: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x2a46c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x2a46c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a46c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a46c8: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x2a46c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a46cc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2A46CCu;
    SET_GPR_U32(ctx, 31, 0x2A46D4u);
    ctx->pc = 0x2A46D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A46CCu;
            // 0x2a46d0: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A46D4u; }
        if (ctx->pc != 0x2A46D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A46D4u; }
        if (ctx->pc != 0x2A46D4u) { return; }
    }
    ctx->pc = 0x2A46D4u;
label_2a46d4:
    // 0x2a46d4: 0x26c50004  addiu       $a1, $s6, 0x4
    ctx->pc = 0x2a46d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x2a46d8: 0x2626002e  addiu       $a2, $s1, 0x2E
    ctx->pc = 0x2a46d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 46));
    // 0x2a46dc: 0x26e7fff6  addiu       $a3, $s7, -0xA
    ctx->pc = 0x2a46dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967286));
    // 0x2a46e0: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x2a46e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2a46e4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2A46E4u;
    SET_GPR_U32(ctx, 31, 0x2A46ECu);
    ctx->pc = 0x2A46E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A46E4u;
            // 0x2a46e8: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A46ECu; }
        if (ctx->pc != 0x2A46ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A46ECu; }
        if (ctx->pc != 0x2A46ECu) { return; }
    }
    ctx->pc = 0x2A46ECu;
label_2a46ec:
    // 0x2a46ec: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a46ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a46f0: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x2a46f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2a46f4: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x2A46F4u;
    SET_GPR_U32(ctx, 31, 0x2A46FCu);
    ctx->pc = 0x2A46F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A46F4u;
            // 0x2a46f8: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A46FCu; }
        if (ctx->pc != 0x2A46FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A46FCu; }
        if (ctx->pc != 0x2A46FCu) { return; }
    }
    ctx->pc = 0x2A46FCu;
label_2a46fc:
    // 0x2a46fc: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2A46FCu;
    SET_GPR_U32(ctx, 31, 0x2A4704u);
    ctx->pc = 0x2A4700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A46FCu;
            // 0x2a4700: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4704u; }
        if (ctx->pc != 0x2A4704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4704u; }
        if (ctx->pc != 0x2A4704u) { return; }
    }
    ctx->pc = 0x2A4704u;
label_2a4704:
    // 0x2a4704: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a4704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a4708: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2A4708u;
    SET_GPR_U32(ctx, 31, 0x2A4710u);
    ctx->pc = 0x2A470Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4708u;
            // 0x2a470c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4710u; }
        if (ctx->pc != 0x2A4710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4710u; }
        if (ctx->pc != 0x2A4710u) { return; }
    }
    ctx->pc = 0x2A4710u;
label_2a4710:
    // 0x2a4710: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2a4710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2a4714: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2a4714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2a4718: 0x84264354  lh          $a2, 0x4354($at)
    ctx->pc = 0x2a4718u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 17236)));
    // 0x2a471c: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x2a471cu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4720: 0x0  nop
    ctx->pc = 0x2a4720u;
    // NOP
    // 0x2a4724: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a4724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a4728: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2a4728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2a472c: 0x24c6ffec  addiu       $a2, $a2, -0x14
    ctx->pc = 0x2a472cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967276));
    // 0x2a4730: 0x84234370  lh          $v1, 0x4370($at)
    ctx->pc = 0x2a4730u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 17264)));
    // 0x2a4734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a4734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4738: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2a4738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2a473c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2a473cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a4740: 0x0  nop
    ctx->pc = 0x2a4740u;
    // NOP
    // 0x2a4744: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2a4744u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2a4748: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2a4748u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2a474c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a474cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a4750: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2A4750u;
    SET_GPR_U32(ctx, 31, 0x2A4758u);
    ctx->pc = 0x2A4754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4750u;
            // 0x2a4754: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4758u; }
        if (ctx->pc != 0x2A4758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4758u; }
        if (ctx->pc != 0x2A4758u) { return; }
    }
    ctx->pc = 0x2A4758u;
label_2a4758:
    // 0x2a4758: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a4758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a475c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a475cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a4760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a4760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4764: 0x0  nop
    ctx->pc = 0x2a4764u;
    // NOP
    // 0x2a4768: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2a4768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a476c: 0x0  nop
    ctx->pc = 0x2a476cu;
    // NOP
    // 0x2a4770: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2A4770u;
    {
        const bool branch_taken_0x2a4770 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A4774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4770u;
            // 0x2a4774: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4770) {
            ctx->pc = 0x2A4798u;
            goto label_2a4798;
        }
    }
    ctx->pc = 0x2A4778u;
    // 0x2a4778: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2a4778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a477c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a477cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a4780: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a4780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4784: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2a4784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4788: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2A4788u;
    SET_GPR_U32(ctx, 31, 0x2A4790u);
    ctx->pc = 0x2A478Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4788u;
            // 0x2a478c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4790u; }
        if (ctx->pc != 0x2A4790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4790u; }
        if (ctx->pc != 0x2A4790u) { return; }
    }
    ctx->pc = 0x2A4790u;
label_2a4790:
    // 0x2a4790: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A4790u;
    {
        const bool branch_taken_0x2a4790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4790u;
            // 0x2a4794: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4790) {
            ctx->pc = 0x2A47B0u;
            goto label_2a47b0;
        }
    }
    ctx->pc = 0x2A4798u;
label_2a4798:
    // 0x2a4798: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a4798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a479c: 0x24060094  addiu       $a2, $zero, 0x94
    ctx->pc = 0x2a479cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x2a47a0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2a47a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a47a4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2A47A4u;
    SET_GPR_U32(ctx, 31, 0x2A47ACu);
    ctx->pc = 0x2A47A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A47A4u;
            // 0x2a47a8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A47ACu; }
        if (ctx->pc != 0x2A47ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A47ACu; }
        if (ctx->pc != 0x2A47ACu) { return; }
    }
    ctx->pc = 0x2A47ACu;
label_2a47ac:
    // 0x2a47ac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a47acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a47b0:
    // 0x2a47b0: 0x26c50017  addiu       $a1, $s6, 0x17
    ctx->pc = 0x2a47b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 23));
    // 0x2a47b4: 0x2626002f  addiu       $a2, $s1, 0x2F
    ctx->pc = 0x2a47b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 47));
    // 0x2a47b8: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2a47b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2a47bc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2A47BCu;
    SET_GPR_U32(ctx, 31, 0x2A47C4u);
    ctx->pc = 0x2A47C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A47BCu;
            // 0x2a47c0: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A47C4u; }
        if (ctx->pc != 0x2A47C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A47C4u; }
        if (ctx->pc != 0x2A47C4u) { return; }
    }
    ctx->pc = 0x2A47C4u;
label_2a47c4:
    // 0x2a47c4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a47c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a47c8: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x2a47c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2a47cc: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x2A47CCu;
    SET_GPR_U32(ctx, 31, 0x2A47D4u);
    ctx->pc = 0x2A47D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A47CCu;
            // 0x2a47d0: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A47D4u; }
        if (ctx->pc != 0x2A47D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A47D4u; }
        if (ctx->pc != 0x2A47D4u) { return; }
    }
    ctx->pc = 0x2A47D4u;
label_2a47d4:
    // 0x2a47d4: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2A47D4u;
    SET_GPR_U32(ctx, 31, 0x2A47DCu);
    ctx->pc = 0x2A47D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A47D4u;
            // 0x2a47d8: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A47DCu; }
        if (ctx->pc != 0x2A47DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A47DCu; }
        if (ctx->pc != 0x2A47DCu) { return; }
    }
    ctx->pc = 0x2A47DCu;
label_2a47dc:
    // 0x2a47dc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a47dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a47e0: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x2A47E0u;
    SET_GPR_U32(ctx, 31, 0x2A47E8u);
    ctx->pc = 0x2A47E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A47E0u;
            // 0x2a47e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A47E8u; }
        if (ctx->pc != 0x2A47E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A47E8u; }
        if (ctx->pc != 0x2A47E8u) { return; }
    }
    ctx->pc = 0x2A47E8u;
label_2a47e8:
    // 0x2a47e8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a47e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a47ec: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2A47ECu;
    SET_GPR_U32(ctx, 31, 0x2A47F4u);
    ctx->pc = 0x2A47F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A47ECu;
            // 0x2a47f0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A47F4u; }
        if (ctx->pc != 0x2A47F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A47F4u; }
        if (ctx->pc != 0x2A47F4u) { return; }
    }
    ctx->pc = 0x2A47F4u;
label_2a47f4:
    // 0x2a47f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a47f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a47f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a47f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a47fc:
    // 0x2a47fc: 0x104083  sra         $t0, $s0, 2
    ctx->pc = 0x2a47fcu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 16), 2));
    // 0x2a4800: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a4800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a4804: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a4804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4808: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a4808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a480c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2A480Cu;
    SET_GPR_U32(ctx, 31, 0x2A4814u);
    ctx->pc = 0x2A4810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A480Cu;
            // 0x2a4810: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4814u; }
        if (ctx->pc != 0x2A4814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4814u; }
        if (ctx->pc != 0x2A4814u) { return; }
    }
    ctx->pc = 0x2A4814u;
label_2a4814:
    // 0x2a4814: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2a4814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2a4818: 0x26c50004  addiu       $a1, $s6, 0x4
    ctx->pc = 0x2a4818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x2a481c: 0x24424350  addiu       $v0, $v0, 0x4350
    ctx->pc = 0x2a481cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17232));
    // 0x2a4820: 0x26260004  addiu       $a2, $s1, 0x4
    ctx->pc = 0x2a4820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2a4824: 0x53a021  addu        $s4, $v0, $s3
    ctx->pc = 0x2a4824u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2a4828: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2a4828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2a482c: 0x86880006  lh          $t0, 0x6($s4)
    ctx->pc = 0x2a482cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x2a4830: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2a4830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4834: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2A4834u;
    SET_GPR_U32(ctx, 31, 0x2A483Cu);
    ctx->pc = 0x2A4838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4834u;
            // 0x2a4838: 0x26950006  addiu       $s5, $s4, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A483Cu; }
        if (ctx->pc != 0x2A483Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A483Cu; }
        if (ctx->pc != 0x2A483Cu) { return; }
    }
    ctx->pc = 0x2A483Cu;
label_2a483c:
    // 0x2a483c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a483cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a4840: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x2a4840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2a4844: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2a4844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4848: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x2A4848u;
    SET_GPR_U32(ctx, 31, 0x2A4850u);
    ctx->pc = 0x2A484Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4848u;
            // 0x2a484c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4850u; }
        if (ctx->pc != 0x2A4850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4850u; }
        if (ctx->pc != 0x2A4850u) { return; }
    }
    ctx->pc = 0x2A4850u;
label_2a4850:
    // 0x2a4850: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2a4850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a4854: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a4854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a4858: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a4858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a485c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2a485cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4860: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2A4860u;
    SET_GPR_U32(ctx, 31, 0x2A4868u);
    ctx->pc = 0x2A4864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4860u;
            // 0x2a4864: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4868u; }
        if (ctx->pc != 0x2A4868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4868u; }
        if (ctx->pc != 0x2A4868u) { return; }
    }
    ctx->pc = 0x2A4868u;
label_2a4868:
    // 0x2a4868: 0x86a80000  lh          $t0, 0x0($s5)
    ctx->pc = 0x2a4868u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2a486c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2a486cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2a4870: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2a4870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4874: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a4874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4878: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2A4878u;
    SET_GPR_U32(ctx, 31, 0x2A4880u);
    ctx->pc = 0x2A487Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4878u;
            // 0x2a487c: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4880u; }
        if (ctx->pc != 0x2A4880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4880u; }
        if (ctx->pc != 0x2A4880u) { return; }
    }
    ctx->pc = 0x2A4880u;
label_2a4880:
    // 0x2a4880: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2a4880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4884: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a4884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a4888: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x2a4888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2a488c: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x2A488Cu;
    SET_GPR_U32(ctx, 31, 0x2A4894u);
    ctx->pc = 0x2A4890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A488Cu;
            // 0x2a4890: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4894u; }
        if (ctx->pc != 0x2A4894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4894u; }
        if (ctx->pc != 0x2A4894u) { return; }
    }
    ctx->pc = 0x2A4894u;
label_2a4894:
    // 0x2a4894: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x2a4894u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2a4898: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a4898u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a489c: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x2a489cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a48a0: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x2a48a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x2a48a4: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2A48A4u;
    {
        const bool branch_taken_0x2a48a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A48A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A48A4u;
            // 0x2a48a8: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a48a4) {
            ctx->pc = 0x2A47FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a47fc;
        }
    }
    ctx->pc = 0x2A48ACu;
    // 0x2a48ac: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2A48ACu;
    SET_GPR_U32(ctx, 31, 0x2A48B4u);
    ctx->pc = 0x2A48B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A48ACu;
            // 0x2a48b0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A48B4u; }
        if (ctx->pc != 0x2A48B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A48B4u; }
        if (ctx->pc != 0x2A48B4u) { return; }
    }
    ctx->pc = 0x2A48B4u;
label_2a48b4:
    // 0x2a48b4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2a48b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a48b8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2a48b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a48bc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2a48bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a48c0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2a48c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a48c4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2a48c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a48c8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2a48c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a48cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a48ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a48d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a48d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a48d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a48d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a48d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a48d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a48dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A48DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A48E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A48DCu;
            // 0x2a48e0: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A48E4u;
}
