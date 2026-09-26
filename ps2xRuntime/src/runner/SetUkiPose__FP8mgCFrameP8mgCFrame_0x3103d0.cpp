#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetUkiPose__FP8mgCFrameP8mgCFrame
// Address: 0x3103d0 - 0x3105b4
void SetUkiPose__FP8mgCFrameP8mgCFrame_0x3103d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetUkiPose__FP8mgCFrameP8mgCFrame_0x3103d0");
#endif

    switch (ctx->pc) {
        case 0x3103d0u: goto label_3103d0;
        case 0x3103d4u: goto label_3103d4;
        case 0x3103d8u: goto label_3103d8;
        case 0x3103dcu: goto label_3103dc;
        case 0x3103e0u: goto label_3103e0;
        case 0x3103e4u: goto label_3103e4;
        case 0x3103e8u: goto label_3103e8;
        case 0x3103ecu: goto label_3103ec;
        case 0x3103f0u: goto label_3103f0;
        case 0x3103f4u: goto label_3103f4;
        case 0x3103f8u: goto label_3103f8;
        case 0x3103fcu: goto label_3103fc;
        case 0x310400u: goto label_310400;
        case 0x310404u: goto label_310404;
        case 0x310408u: goto label_310408;
        case 0x31040cu: goto label_31040c;
        case 0x310410u: goto label_310410;
        case 0x310414u: goto label_310414;
        case 0x310418u: goto label_310418;
        case 0x31041cu: goto label_31041c;
        case 0x310420u: goto label_310420;
        case 0x310424u: goto label_310424;
        case 0x310428u: goto label_310428;
        case 0x31042cu: goto label_31042c;
        case 0x310430u: goto label_310430;
        case 0x310434u: goto label_310434;
        case 0x310438u: goto label_310438;
        case 0x31043cu: goto label_31043c;
        case 0x310440u: goto label_310440;
        case 0x310444u: goto label_310444;
        case 0x310448u: goto label_310448;
        case 0x31044cu: goto label_31044c;
        case 0x310450u: goto label_310450;
        case 0x310454u: goto label_310454;
        case 0x310458u: goto label_310458;
        case 0x31045cu: goto label_31045c;
        case 0x310460u: goto label_310460;
        case 0x310464u: goto label_310464;
        case 0x310468u: goto label_310468;
        case 0x31046cu: goto label_31046c;
        case 0x310470u: goto label_310470;
        case 0x310474u: goto label_310474;
        case 0x310478u: goto label_310478;
        case 0x31047cu: goto label_31047c;
        case 0x310480u: goto label_310480;
        case 0x310484u: goto label_310484;
        case 0x310488u: goto label_310488;
        case 0x31048cu: goto label_31048c;
        case 0x310490u: goto label_310490;
        case 0x310494u: goto label_310494;
        case 0x310498u: goto label_310498;
        case 0x31049cu: goto label_31049c;
        case 0x3104a0u: goto label_3104a0;
        case 0x3104a4u: goto label_3104a4;
        case 0x3104a8u: goto label_3104a8;
        case 0x3104acu: goto label_3104ac;
        case 0x3104b0u: goto label_3104b0;
        case 0x3104b4u: goto label_3104b4;
        case 0x3104b8u: goto label_3104b8;
        case 0x3104bcu: goto label_3104bc;
        case 0x3104c0u: goto label_3104c0;
        case 0x3104c4u: goto label_3104c4;
        case 0x3104c8u: goto label_3104c8;
        case 0x3104ccu: goto label_3104cc;
        case 0x3104d0u: goto label_3104d0;
        case 0x3104d4u: goto label_3104d4;
        case 0x3104d8u: goto label_3104d8;
        case 0x3104dcu: goto label_3104dc;
        case 0x3104e0u: goto label_3104e0;
        case 0x3104e4u: goto label_3104e4;
        case 0x3104e8u: goto label_3104e8;
        case 0x3104ecu: goto label_3104ec;
        case 0x3104f0u: goto label_3104f0;
        case 0x3104f4u: goto label_3104f4;
        case 0x3104f8u: goto label_3104f8;
        case 0x3104fcu: goto label_3104fc;
        case 0x310500u: goto label_310500;
        case 0x310504u: goto label_310504;
        case 0x310508u: goto label_310508;
        case 0x31050cu: goto label_31050c;
        case 0x310510u: goto label_310510;
        case 0x310514u: goto label_310514;
        case 0x310518u: goto label_310518;
        case 0x31051cu: goto label_31051c;
        case 0x310520u: goto label_310520;
        case 0x310524u: goto label_310524;
        case 0x310528u: goto label_310528;
        case 0x31052cu: goto label_31052c;
        case 0x310530u: goto label_310530;
        case 0x310534u: goto label_310534;
        case 0x310538u: goto label_310538;
        case 0x31053cu: goto label_31053c;
        case 0x310540u: goto label_310540;
        case 0x310544u: goto label_310544;
        case 0x310548u: goto label_310548;
        case 0x31054cu: goto label_31054c;
        case 0x310550u: goto label_310550;
        case 0x310554u: goto label_310554;
        case 0x310558u: goto label_310558;
        case 0x31055cu: goto label_31055c;
        case 0x310560u: goto label_310560;
        case 0x310564u: goto label_310564;
        case 0x310568u: goto label_310568;
        case 0x31056cu: goto label_31056c;
        case 0x310570u: goto label_310570;
        case 0x310574u: goto label_310574;
        case 0x310578u: goto label_310578;
        case 0x31057cu: goto label_31057c;
        case 0x310580u: goto label_310580;
        case 0x310584u: goto label_310584;
        case 0x310588u: goto label_310588;
        case 0x31058cu: goto label_31058c;
        case 0x310590u: goto label_310590;
        case 0x310594u: goto label_310594;
        case 0x310598u: goto label_310598;
        case 0x31059cu: goto label_31059c;
        case 0x3105a0u: goto label_3105a0;
        case 0x3105a4u: goto label_3105a4;
        case 0x3105a8u: goto label_3105a8;
        case 0x3105acu: goto label_3105ac;
        case 0x3105b0u: goto label_3105b0;
        default: break;
    }

    ctx->pc = 0x3103d0u;

label_3103d0:
    // 0x3103d0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3103d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3103d4:
    // 0x3103d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3103d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3103d8:
    // 0x3103d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3103d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3103dc:
    // 0x3103dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3103dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3103e0:
    // 0x3103e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3103e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3103e4:
    // 0x3103e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3103e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3103e8:
    // 0x3103e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3103e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3103ec:
    // 0x3103ec: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_3103f0:
    if (ctx->pc == 0x3103F0u) {
        ctx->pc = 0x3103F0u;
            // 0x3103f0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x3103F4u;
        goto label_3103f4;
    }
    ctx->pc = 0x3103ECu;
    {
        const bool branch_taken_0x3103ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3103F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3103ECu;
            // 0x3103f0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3103ec) {
            ctx->pc = 0x3103FCu;
            goto label_3103fc;
        }
    }
    ctx->pc = 0x3103F4u;
label_3103f4:
    // 0x3103f4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_3103f8:
    if (ctx->pc == 0x3103F8u) {
        ctx->pc = 0x3103FCu;
        goto label_3103fc;
    }
    ctx->pc = 0x3103F4u;
    {
        const bool branch_taken_0x3103f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3103f4) {
            ctx->pc = 0x310404u;
            goto label_310404;
        }
    }
    ctx->pc = 0x3103FCu;
label_3103fc:
    // 0x3103fc: 0x10000066  b           . + 4 + (0x66 << 2)
label_310400:
    if (ctx->pc == 0x310400u) {
        ctx->pc = 0x310400u;
            // 0x310400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310404u;
        goto label_310404;
    }
    ctx->pc = 0x3103FCu;
    {
        const bool branch_taken_0x3103fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3103FCu;
            // 0x310400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3103fc) {
            ctx->pc = 0x310598u;
            goto label_310598;
        }
    }
    ctx->pc = 0x310404u;
label_310404:
    // 0x310404: 0x8f83a26c  lw          $v1, -0x5D94($gp)
    ctx->pc = 0x310404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943340)));
label_310408:
    // 0x310408: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x310408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31040c:
    // 0x31040c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_310410:
    if (ctx->pc == 0x310410u) {
        ctx->pc = 0x310410u;
            // 0x310410: 0x3c0301f6  lui         $v1, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x310414u;
        goto label_310414;
    }
    ctx->pc = 0x31040Cu;
    {
        const bool branch_taken_0x31040c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x310410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31040Cu;
            // 0x310410: 0x3c0301f6  lui         $v1, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31040c) {
            ctx->pc = 0x31041Cu;
            goto label_31041c;
        }
    }
    ctx->pc = 0x310414u;
label_310414:
    // 0x310414: 0x10000060  b           . + 4 + (0x60 << 2)
label_310418:
    if (ctx->pc == 0x310418u) {
        ctx->pc = 0x310418u;
            // 0x310418: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31041Cu;
        goto label_31041c;
    }
    ctx->pc = 0x310414u;
    {
        const bool branch_taken_0x310414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310414u;
            // 0x310418: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310414) {
            ctx->pc = 0x310598u;
            goto label_310598;
        }
    }
    ctx->pc = 0x31041Cu;
label_31041c:
    // 0x31041c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x31041cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_310420:
    // 0x310420: 0x2463ebe0  addiu       $v1, $v1, -0x1420
    ctx->pc = 0x310420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962144));
label_310424:
    // 0x310424: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x310424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_310428:
    // 0x310428: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x310428u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_31042c:
    // 0x31042c: 0xc04c050  jal         func_130140
label_310430:
    if (ctx->pc == 0x310430u) {
        ctx->pc = 0x310430u;
            // 0x310430: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->pc = 0x310434u;
        goto label_310434;
    }
    ctx->pc = 0x31042Cu;
    SET_GPR_U32(ctx, 31, 0x310434u);
    ctx->pc = 0x310430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31042Cu;
            // 0x310430: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310434u; }
        if (ctx->pc != 0x310434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310434u; }
        if (ctx->pc != 0x310434u) { return; }
    }
    ctx->pc = 0x310434u;
label_310434:
    // 0x310434: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x310434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_310438:
    // 0x310438: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x310438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_31043c:
    // 0x31043c: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x31043cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
label_310440:
    // 0x310440: 0x24a5f1d0  addiu       $a1, $a1, -0xE30
    ctx->pc = 0x310440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963664));
label_310444:
    // 0x310444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x310444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_310448:
    // 0x310448: 0xc041c38  jal         func_1070E0
label_31044c:
    if (ctx->pc == 0x31044Cu) {
        ctx->pc = 0x31044Cu;
            // 0x31044c: 0x24c6f200  addiu       $a2, $a2, -0xE00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963712));
        ctx->pc = 0x310450u;
        goto label_310450;
    }
    ctx->pc = 0x310448u;
    SET_GPR_U32(ctx, 31, 0x310450u);
    ctx->pc = 0x31044Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310448u;
            // 0x31044c: 0x24c6f200  addiu       $a2, $a2, -0xE00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310450u; }
        if (ctx->pc != 0x310450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310450u; }
        if (ctx->pc != 0x310450u) { return; }
    }
    ctx->pc = 0x310450u;
label_310450:
    // 0x310450: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x310450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_310454:
    // 0x310454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x310454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_310458:
    // 0x310458: 0xc04bcf4  jal         func_12F3D0
label_31045c:
    if (ctx->pc == 0x31045Cu) {
        ctx->pc = 0x31045Cu;
            // 0x31045c: 0x24a5f230  addiu       $a1, $a1, -0xDD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963760));
        ctx->pc = 0x310460u;
        goto label_310460;
    }
    ctx->pc = 0x310458u;
    SET_GPR_U32(ctx, 31, 0x310460u);
    ctx->pc = 0x31045Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310458u;
            // 0x31045c: 0x24a5f230  addiu       $a1, $a1, -0xDD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310460u; }
        if (ctx->pc != 0x310460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310460u; }
        if (ctx->pc != 0x310460u) { return; }
    }
    ctx->pc = 0x310460u;
label_310460:
    // 0x310460: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x310460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_310464:
    // 0x310464: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x310464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_310468:
    // 0x310468: 0x2442f1a0  addiu       $v0, $v0, -0xE60
    ctx->pc = 0x310468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963616));
label_31046c:
    // 0x31046c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31046cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_310470:
    // 0x310470: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x310470u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_310474:
    // 0x310474: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x310474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_310478:
    // 0x310478: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x310478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
label_31047c:
    // 0x31047c: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x31047cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_310480:
    // 0x310480: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x310480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_310484:
    // 0x310484: 0xc041c4a  jal         func_107128
label_310488:
    if (ctx->pc == 0x310488u) {
        ctx->pc = 0x310488u;
            // 0x310488: 0x7c660000  sq          $a2, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
        ctx->pc = 0x31048Cu;
        goto label_31048c;
    }
    ctx->pc = 0x310484u;
    SET_GPR_U32(ctx, 31, 0x31048Cu);
    ctx->pc = 0x310488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310484u;
            // 0x310488: 0x7c660000  sq          $a2, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31048Cu; }
        if (ctx->pc != 0x31048Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31048Cu; }
        if (ctx->pc != 0x31048Cu) { return; }
    }
    ctx->pc = 0x31048Cu;
label_31048c:
    // 0x31048c: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x31048cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_310490:
    // 0x310490: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x310490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_310494:
    // 0x310494: 0x2442f1d0  addiu       $v0, $v0, -0xE30
    ctx->pc = 0x310494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963664));
label_310498:
    // 0x310498: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x310498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_31049c:
    // 0x31049c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x31049cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3104a0:
    // 0x3104a0: 0x2463e6e0  addiu       $v1, $v1, -0x1920
    ctx->pc = 0x3104a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960864));
label_3104a4:
    // 0x3104a4: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x3104a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3104a8:
    // 0x3104a8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3104a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3104ac:
    // 0x3104ac: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3104acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3104b0:
    // 0x3104b0: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3104b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_3104b4:
    // 0x3104b4: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x3104b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_3104b8:
    // 0x3104b8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3104b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3104bc:
    // 0x3104bc: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x3104bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_3104c0:
    // 0x3104c0: 0xc0c4008  jal         func_310020
label_3104c4:
    if (ctx->pc == 0x3104C4u) {
        ctx->pc = 0x3104C4u;
            // 0x3104c4: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->pc = 0x3104C8u;
        goto label_3104c8;
    }
    ctx->pc = 0x3104C0u;
    SET_GPR_U32(ctx, 31, 0x3104C8u);
    ctx->pc = 0x3104C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3104C0u;
            // 0x3104c4: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x310020u;
    if (runtime->hasFunction(0x310020u)) {
        auto targetFn = runtime->lookupFunction(0x310020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3104C8u; }
        if (ctx->pc != 0x3104C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTriPose__FPA4_fPA4_fPi_0x310020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3104C8u; }
        if (ctx->pc != 0x3104C8u) { return; }
    }
    ctx->pc = 0x3104C8u;
label_3104c8:
    // 0x3104c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3104c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3104cc:
    // 0x3104cc: 0xc04dd64  jal         func_137590
label_3104d0:
    if (ctx->pc == 0x3104D0u) {
        ctx->pc = 0x3104D0u;
            // 0x3104d0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3104D4u;
        goto label_3104d4;
    }
    ctx->pc = 0x3104CCu;
    SET_GPR_U32(ctx, 31, 0x3104D4u);
    ctx->pc = 0x3104D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3104CCu;
            // 0x3104d0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3104D4u; }
        if (ctx->pc != 0x3104D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3104D4u; }
        if (ctx->pc != 0x3104D4u) { return; }
    }
    ctx->pc = 0x3104D4u;
label_3104d4:
    // 0x3104d4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3104d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3104d8:
    // 0x3104d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3104d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3104dc:
    // 0x3104dc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3104dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3104e0:
    // 0x3104e0: 0x320f809  jalr        $t9
label_3104e4:
    if (ctx->pc == 0x3104E4u) {
        ctx->pc = 0x3104E4u;
            // 0x3104e4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3104E8u;
        goto label_3104e8;
    }
    ctx->pc = 0x3104E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3104E8u);
        ctx->pc = 0x3104E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3104E0u;
            // 0x3104e4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3104E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3104E8u; }
            if (ctx->pc != 0x3104E8u) { return; }
        }
        }
    }
    ctx->pc = 0x3104E8u;
label_3104e8:
    // 0x3104e8: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x3104e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
label_3104ec:
    // 0x3104ec: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x3104ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_3104f0:
    // 0x3104f0: 0x2463ec70  addiu       $v1, $v1, -0x1390
    ctx->pc = 0x3104f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
label_3104f4:
    // 0x3104f4: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x3104f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
label_3104f8:
    // 0x3104f8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3104f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3104fc:
    // 0x3104fc: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x3104fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_310500:
    // 0x310500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x310500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_310504:
    // 0x310504: 0x24a5f5a0  addiu       $a1, $a1, -0xA60
    ctx->pc = 0x310504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964640));
label_310508:
    // 0x310508: 0x24c6f5d0  addiu       $a2, $a2, -0xA30
    ctx->pc = 0x310508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964688));
label_31050c:
    // 0x31050c: 0xc041c38  jal         func_1070E0
label_310510:
    if (ctx->pc == 0x310510u) {
        ctx->pc = 0x310510u;
            // 0x310510: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->pc = 0x310514u;
        goto label_310514;
    }
    ctx->pc = 0x31050Cu;
    SET_GPR_U32(ctx, 31, 0x310514u);
    ctx->pc = 0x310510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31050Cu;
            // 0x310510: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310514u; }
        if (ctx->pc != 0x310514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310514u; }
        if (ctx->pc != 0x310514u) { return; }
    }
    ctx->pc = 0x310514u;
label_310514:
    // 0x310514: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x310514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_310518:
    // 0x310518: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x310518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_31051c:
    // 0x31051c: 0x2442f570  addiu       $v0, $v0, -0xA90
    ctx->pc = 0x31051cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964592));
label_310520:
    // 0x310520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x310520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_310524:
    // 0x310524: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x310524u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_310528:
    // 0x310528: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x310528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31052c:
    // 0x31052c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x31052cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_310530:
    // 0x310530: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x310530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_310534:
    // 0x310534: 0xc041c4a  jal         func_107128
label_310538:
    if (ctx->pc == 0x310538u) {
        ctx->pc = 0x310538u;
            // 0x310538: 0x7c660000  sq          $a2, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
        ctx->pc = 0x31053Cu;
        goto label_31053c;
    }
    ctx->pc = 0x310534u;
    SET_GPR_U32(ctx, 31, 0x31053Cu);
    ctx->pc = 0x310538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310534u;
            // 0x310538: 0x7c660000  sq          $a2, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31053Cu; }
        if (ctx->pc != 0x31053Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31053Cu; }
        if (ctx->pc != 0x31053Cu) { return; }
    }
    ctx->pc = 0x31053Cu;
label_31053c:
    // 0x31053c: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x31053cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_310540:
    // 0x310540: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x310540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_310544:
    // 0x310544: 0x2442f5d0  addiu       $v0, $v0, -0xA30
    ctx->pc = 0x310544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964688));
label_310548:
    // 0x310548: 0x2463e6f0  addiu       $v1, $v1, -0x1910
    ctx->pc = 0x310548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960880));
label_31054c:
    // 0x31054c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x31054cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_310550:
    // 0x310550: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x310550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_310554:
    // 0x310554: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x310554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_310558:
    // 0x310558: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x310558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_31055c:
    // 0x31055c: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x31055cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_310560:
    // 0x310560: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x310560u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_310564:
    // 0x310564: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x310564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_310568:
    // 0x310568: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x310568u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_31056c:
    // 0x31056c: 0xc0c4008  jal         func_310020
label_310570:
    if (ctx->pc == 0x310570u) {
        ctx->pc = 0x310570u;
            // 0x310570: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->pc = 0x310574u;
        goto label_310574;
    }
    ctx->pc = 0x31056Cu;
    SET_GPR_U32(ctx, 31, 0x310574u);
    ctx->pc = 0x310570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31056Cu;
            // 0x310570: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x310020u;
    if (runtime->hasFunction(0x310020u)) {
        auto targetFn = runtime->lookupFunction(0x310020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310574u; }
        if (ctx->pc != 0x310574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTriPose__FPA4_fPA4_fPi_0x310020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310574u; }
        if (ctx->pc != 0x310574u) { return; }
    }
    ctx->pc = 0x310574u;
label_310574:
    // 0x310574: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x310574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_310578:
    // 0x310578: 0xc04dd64  jal         func_137590
label_31057c:
    if (ctx->pc == 0x31057Cu) {
        ctx->pc = 0x31057Cu;
            // 0x31057c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x310580u;
        goto label_310580;
    }
    ctx->pc = 0x310578u;
    SET_GPR_U32(ctx, 31, 0x310580u);
    ctx->pc = 0x31057Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310578u;
            // 0x31057c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310580u; }
        if (ctx->pc != 0x310580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310580u; }
        if (ctx->pc != 0x310580u) { return; }
    }
    ctx->pc = 0x310580u;
label_310580:
    // 0x310580: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x310580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_310584:
    // 0x310584: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x310584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_310588:
    // 0x310588: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x310588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_31058c:
    // 0x31058c: 0x320f809  jalr        $t9
label_310590:
    if (ctx->pc == 0x310590u) {
        ctx->pc = 0x310590u;
            // 0x310590: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x310594u;
        goto label_310594;
    }
    ctx->pc = 0x31058Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x310594u);
        ctx->pc = 0x310590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31058Cu;
            // 0x310590: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x310594u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x310594u; }
            if (ctx->pc != 0x310594u) { return; }
        }
        }
    }
    ctx->pc = 0x310594u;
label_310594:
    // 0x310594: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x310594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_310598:
    // 0x310598: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x310598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_31059c:
    // 0x31059c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31059cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3105a0:
    // 0x3105a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3105a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3105a4:
    // 0x3105a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3105a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3105a8:
    // 0x3105a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3105a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3105ac:
    // 0x3105ac: 0x3e00008  jr          $ra
label_3105b0:
    if (ctx->pc == 0x3105B0u) {
        ctx->pc = 0x3105B0u;
            // 0x3105b0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x3105B4u;
        goto label_fallthrough_0x3105ac;
    }
    ctx->pc = 0x3105ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3105B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3105ACu;
            // 0x3105b0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3105ac:
    ctx->pc = 0x3105B4u;
}
