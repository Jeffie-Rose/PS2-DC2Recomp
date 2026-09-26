#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CopyChara__6CSceneFiiP9mgCMemory
// Address: 0x2853e0 - 0x285664
void CopyChara__6CSceneFiiP9mgCMemory_0x2853e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyChara__6CSceneFiiP9mgCMemory_0x2853e0");
#endif

    switch (ctx->pc) {
        case 0x2853e0u: goto label_2853e0;
        case 0x2853e4u: goto label_2853e4;
        case 0x2853e8u: goto label_2853e8;
        case 0x2853ecu: goto label_2853ec;
        case 0x2853f0u: goto label_2853f0;
        case 0x2853f4u: goto label_2853f4;
        case 0x2853f8u: goto label_2853f8;
        case 0x2853fcu: goto label_2853fc;
        case 0x285400u: goto label_285400;
        case 0x285404u: goto label_285404;
        case 0x285408u: goto label_285408;
        case 0x28540cu: goto label_28540c;
        case 0x285410u: goto label_285410;
        case 0x285414u: goto label_285414;
        case 0x285418u: goto label_285418;
        case 0x28541cu: goto label_28541c;
        case 0x285420u: goto label_285420;
        case 0x285424u: goto label_285424;
        case 0x285428u: goto label_285428;
        case 0x28542cu: goto label_28542c;
        case 0x285430u: goto label_285430;
        case 0x285434u: goto label_285434;
        case 0x285438u: goto label_285438;
        case 0x28543cu: goto label_28543c;
        case 0x285440u: goto label_285440;
        case 0x285444u: goto label_285444;
        case 0x285448u: goto label_285448;
        case 0x28544cu: goto label_28544c;
        case 0x285450u: goto label_285450;
        case 0x285454u: goto label_285454;
        case 0x285458u: goto label_285458;
        case 0x28545cu: goto label_28545c;
        case 0x285460u: goto label_285460;
        case 0x285464u: goto label_285464;
        case 0x285468u: goto label_285468;
        case 0x28546cu: goto label_28546c;
        case 0x285470u: goto label_285470;
        case 0x285474u: goto label_285474;
        case 0x285478u: goto label_285478;
        case 0x28547cu: goto label_28547c;
        case 0x285480u: goto label_285480;
        case 0x285484u: goto label_285484;
        case 0x285488u: goto label_285488;
        case 0x28548cu: goto label_28548c;
        case 0x285490u: goto label_285490;
        case 0x285494u: goto label_285494;
        case 0x285498u: goto label_285498;
        case 0x28549cu: goto label_28549c;
        case 0x2854a0u: goto label_2854a0;
        case 0x2854a4u: goto label_2854a4;
        case 0x2854a8u: goto label_2854a8;
        case 0x2854acu: goto label_2854ac;
        case 0x2854b0u: goto label_2854b0;
        case 0x2854b4u: goto label_2854b4;
        case 0x2854b8u: goto label_2854b8;
        case 0x2854bcu: goto label_2854bc;
        case 0x2854c0u: goto label_2854c0;
        case 0x2854c4u: goto label_2854c4;
        case 0x2854c8u: goto label_2854c8;
        case 0x2854ccu: goto label_2854cc;
        case 0x2854d0u: goto label_2854d0;
        case 0x2854d4u: goto label_2854d4;
        case 0x2854d8u: goto label_2854d8;
        case 0x2854dcu: goto label_2854dc;
        case 0x2854e0u: goto label_2854e0;
        case 0x2854e4u: goto label_2854e4;
        case 0x2854e8u: goto label_2854e8;
        case 0x2854ecu: goto label_2854ec;
        case 0x2854f0u: goto label_2854f0;
        case 0x2854f4u: goto label_2854f4;
        case 0x2854f8u: goto label_2854f8;
        case 0x2854fcu: goto label_2854fc;
        case 0x285500u: goto label_285500;
        case 0x285504u: goto label_285504;
        case 0x285508u: goto label_285508;
        case 0x28550cu: goto label_28550c;
        case 0x285510u: goto label_285510;
        case 0x285514u: goto label_285514;
        case 0x285518u: goto label_285518;
        case 0x28551cu: goto label_28551c;
        case 0x285520u: goto label_285520;
        case 0x285524u: goto label_285524;
        case 0x285528u: goto label_285528;
        case 0x28552cu: goto label_28552c;
        case 0x285530u: goto label_285530;
        case 0x285534u: goto label_285534;
        case 0x285538u: goto label_285538;
        case 0x28553cu: goto label_28553c;
        case 0x285540u: goto label_285540;
        case 0x285544u: goto label_285544;
        case 0x285548u: goto label_285548;
        case 0x28554cu: goto label_28554c;
        case 0x285550u: goto label_285550;
        case 0x285554u: goto label_285554;
        case 0x285558u: goto label_285558;
        case 0x28555cu: goto label_28555c;
        case 0x285560u: goto label_285560;
        case 0x285564u: goto label_285564;
        case 0x285568u: goto label_285568;
        case 0x28556cu: goto label_28556c;
        case 0x285570u: goto label_285570;
        case 0x285574u: goto label_285574;
        case 0x285578u: goto label_285578;
        case 0x28557cu: goto label_28557c;
        case 0x285580u: goto label_285580;
        case 0x285584u: goto label_285584;
        case 0x285588u: goto label_285588;
        case 0x28558cu: goto label_28558c;
        case 0x285590u: goto label_285590;
        case 0x285594u: goto label_285594;
        case 0x285598u: goto label_285598;
        case 0x28559cu: goto label_28559c;
        case 0x2855a0u: goto label_2855a0;
        case 0x2855a4u: goto label_2855a4;
        case 0x2855a8u: goto label_2855a8;
        case 0x2855acu: goto label_2855ac;
        case 0x2855b0u: goto label_2855b0;
        case 0x2855b4u: goto label_2855b4;
        case 0x2855b8u: goto label_2855b8;
        case 0x2855bcu: goto label_2855bc;
        case 0x2855c0u: goto label_2855c0;
        case 0x2855c4u: goto label_2855c4;
        case 0x2855c8u: goto label_2855c8;
        case 0x2855ccu: goto label_2855cc;
        case 0x2855d0u: goto label_2855d0;
        case 0x2855d4u: goto label_2855d4;
        case 0x2855d8u: goto label_2855d8;
        case 0x2855dcu: goto label_2855dc;
        case 0x2855e0u: goto label_2855e0;
        case 0x2855e4u: goto label_2855e4;
        case 0x2855e8u: goto label_2855e8;
        case 0x2855ecu: goto label_2855ec;
        case 0x2855f0u: goto label_2855f0;
        case 0x2855f4u: goto label_2855f4;
        case 0x2855f8u: goto label_2855f8;
        case 0x2855fcu: goto label_2855fc;
        case 0x285600u: goto label_285600;
        case 0x285604u: goto label_285604;
        case 0x285608u: goto label_285608;
        case 0x28560cu: goto label_28560c;
        case 0x285610u: goto label_285610;
        case 0x285614u: goto label_285614;
        case 0x285618u: goto label_285618;
        case 0x28561cu: goto label_28561c;
        case 0x285620u: goto label_285620;
        case 0x285624u: goto label_285624;
        case 0x285628u: goto label_285628;
        case 0x28562cu: goto label_28562c;
        case 0x285630u: goto label_285630;
        case 0x285634u: goto label_285634;
        case 0x285638u: goto label_285638;
        case 0x28563cu: goto label_28563c;
        case 0x285640u: goto label_285640;
        case 0x285644u: goto label_285644;
        case 0x285648u: goto label_285648;
        case 0x28564cu: goto label_28564c;
        case 0x285650u: goto label_285650;
        case 0x285654u: goto label_285654;
        case 0x285658u: goto label_285658;
        case 0x28565cu: goto label_28565c;
        case 0x285660u: goto label_285660;
        default: break;
    }

    ctx->pc = 0x2853e0u;

label_2853e0:
    // 0x2853e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2853e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2853e4:
    // 0x2853e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2853e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2853e8:
    // 0x2853e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2853e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2853ec:
    // 0x2853ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2853ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2853f0:
    // 0x2853f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2853f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2853f4:
    // 0x2853f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2853f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2853f8:
    // 0x2853f8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2853f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2853fc:
    // 0x2853fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2853fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_285400:
    // 0x285400: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x285400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_285404:
    // 0x285404: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x285404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_285408:
    // 0x285408: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x285408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28540c:
    // 0x28540c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28540cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_285410:
    // 0x285410: 0xc04e748  jal         func_139D20
label_285414:
    if (ctx->pc == 0x285414u) {
        ctx->pc = 0x285414u;
            // 0x285414: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x285418u;
        goto label_285418;
    }
    ctx->pc = 0x285410u;
    SET_GPR_U32(ctx, 31, 0x285418u);
    ctx->pc = 0x285414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285410u;
            // 0x285414: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285418u; }
        if (ctx->pc != 0x285418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285418u; }
        if (ctx->pc != 0x285418u) { return; }
    }
    ctx->pc = 0x285418u;
label_285418:
    // 0x285418: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x285418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_28541c:
    // 0x28541c: 0xc04e638  jal         func_1398E0
label_285420:
    if (ctx->pc == 0x285420u) {
        ctx->pc = 0x285420u;
            // 0x285420: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285424u;
        goto label_285424;
    }
    ctx->pc = 0x28541Cu;
    SET_GPR_U32(ctx, 31, 0x285424u);
    ctx->pc = 0x285420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28541Cu;
            // 0x285420: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285424u; }
        if (ctx->pc != 0x285424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285424u; }
        if (ctx->pc != 0x285424u) { return; }
    }
    ctx->pc = 0x285424u;
label_285424:
    // 0x285424: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_285428:
    if (ctx->pc == 0x285428u) {
        ctx->pc = 0x285428u;
            // 0x285428: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28542Cu;
        goto label_28542c;
    }
    ctx->pc = 0x285424u;
    {
        const bool branch_taken_0x285424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285424u;
            // 0x285428: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285424) {
            ctx->pc = 0x2854A8u;
            goto label_2854a8;
        }
    }
    ctx->pc = 0x28542Cu;
label_28542c:
    // 0x28542c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x28542cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_285430:
    // 0x285430: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x285430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_285434:
    // 0x285434: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x285434u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_285438:
    // 0x285438: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x285438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28543c:
    // 0x28543c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x28543cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_285440:
    // 0x285440: 0x320f809  jalr        $t9
label_285444:
    if (ctx->pc == 0x285444u) {
        ctx->pc = 0x285444u;
            // 0x285444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285448u;
        goto label_285448;
    }
    ctx->pc = 0x285440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x285448u);
        ctx->pc = 0x285444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285440u;
            // 0x285444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x285448u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x285448u; }
            if (ctx->pc != 0x285448u) { return; }
        }
        }
    }
    ctx->pc = 0x285448u;
label_285448:
    // 0x285448: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x285448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_28544c:
    // 0x28544c: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x28544cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_285450:
    // 0x285450: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x285450u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_285454:
    // 0x285454: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x285454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_285458:
    // 0x285458: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x285458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_28545c:
    // 0x28545c: 0x320f809  jalr        $t9
label_285460:
    if (ctx->pc == 0x285460u) {
        ctx->pc = 0x285460u;
            // 0x285460: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285464u;
        goto label_285464;
    }
    ctx->pc = 0x28545Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x285464u);
        ctx->pc = 0x285460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28545Cu;
            // 0x285460: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x285464u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x285464u; }
            if (ctx->pc != 0x285464u) { return; }
        }
        }
    }
    ctx->pc = 0x285464u;
label_285464:
    // 0x285464: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x285464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_285468:
    // 0x285468: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x285468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_28546c:
    // 0x28546c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x28546cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_285470:
    // 0x285470: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x285470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_285474:
    // 0x285474: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x285474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_285478:
    // 0x285478: 0x320f809  jalr        $t9
label_28547c:
    if (ctx->pc == 0x28547Cu) {
        ctx->pc = 0x28547Cu;
            // 0x28547c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285480u;
        goto label_285480;
    }
    ctx->pc = 0x285478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x285480u);
        ctx->pc = 0x28547Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285478u;
            // 0x28547c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x285480u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x285480u; }
            if (ctx->pc != 0x285480u) { return; }
        }
        }
    }
    ctx->pc = 0x285480u;
label_285480:
    // 0x285480: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x285480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_285484:
    // 0x285484: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x285484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_285488:
    // 0x285488: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x285488u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_28548c:
    // 0x28548c: 0xae40035c  sw          $zero, 0x35C($s2)
    ctx->pc = 0x28548cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 860), GPR_U32(ctx, 0));
label_285490:
    // 0x285490: 0xae400364  sw          $zero, 0x364($s2)
    ctx->pc = 0x285490u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 868), GPR_U32(ctx, 0));
label_285494:
    // 0x285494: 0xae400360  sw          $zero, 0x360($s2)
    ctx->pc = 0x285494u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 864), GPR_U32(ctx, 0));
label_285498:
    // 0x285498: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x285498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28549c:
    // 0x28549c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x28549cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2854a0:
    // 0x2854a0: 0x320f809  jalr        $t9
label_2854a4:
    if (ctx->pc == 0x2854A4u) {
        ctx->pc = 0x2854A4u;
            // 0x2854a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2854A8u;
        goto label_2854a8;
    }
    ctx->pc = 0x2854A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2854A8u);
        ctx->pc = 0x2854A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2854A0u;
            // 0x2854a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2854A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2854A8u; }
            if (ctx->pc != 0x2854A8u) { return; }
        }
        }
    }
    ctx->pc = 0x2854A8u;
label_2854a8:
    // 0x2854a8: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_2854ac:
    if (ctx->pc == 0x2854ACu) {
        ctx->pc = 0x2854ACu;
            // 0x2854ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2854B0u;
        goto label_2854b0;
    }
    ctx->pc = 0x2854A8u;
    {
        const bool branch_taken_0x2854a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2854ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2854A8u;
            // 0x2854ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2854a8) {
            ctx->pc = 0x2854B8u;
            goto label_2854b8;
        }
    }
    ctx->pc = 0x2854B0u;
label_2854b0:
    // 0x2854b0: 0x10000065  b           . + 4 + (0x65 << 2)
label_2854b4:
    if (ctx->pc == 0x2854B4u) {
        ctx->pc = 0x2854B4u;
            // 0x2854b4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2854B8u;
        goto label_2854b8;
    }
    ctx->pc = 0x2854B0u;
    {
        const bool branch_taken_0x2854b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2854B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2854B0u;
            // 0x2854b4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2854b0) {
            ctx->pc = 0x285648u;
            goto label_285648;
        }
    }
    ctx->pc = 0x2854B8u;
label_2854b8:
    // 0x2854b8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2854b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2854bc:
    // 0x2854bc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2854bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2854c0:
    // 0x2854c0: 0x320f809  jalr        $t9
label_2854c4:
    if (ctx->pc == 0x2854C4u) {
        ctx->pc = 0x2854C4u;
            // 0x2854c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2854C8u;
        goto label_2854c8;
    }
    ctx->pc = 0x2854C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2854C8u);
        ctx->pc = 0x2854C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2854C0u;
            // 0x2854c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2854C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2854C8u; }
            if (ctx->pc != 0x2854C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2854C8u;
label_2854c8:
    // 0x2854c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2854c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2854cc:
    // 0x2854cc: 0xc0a14ec  jal         func_2853B0
label_2854d0:
    if (ctx->pc == 0x2854D0u) {
        ctx->pc = 0x2854D0u;
            // 0x2854d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2854D4u;
        goto label_2854d4;
    }
    ctx->pc = 0x2854CCu;
    SET_GPR_U32(ctx, 31, 0x2854D4u);
    ctx->pc = 0x2854D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2854CCu;
            // 0x2854d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2853B0u;
    if (runtime->hasFunction(0x2853B0u)) {
        auto targetFn = runtime->lookupFunction(0x2853B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2854D4u; }
        if (ctx->pc != 0x2854D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteChara__6CSceneFi_0x2853b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2854D4u; }
        if (ctx->pc != 0x2854D4u) { return; }
    }
    ctx->pc = 0x2854D4u;
label_2854d4:
    // 0x2854d4: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2854d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_2854d8:
    // 0x2854d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2854d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2854dc:
    // 0x2854dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2854dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2854e0:
    // 0x2854e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2854e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2854e4:
    // 0x2854e4: 0xc0a0e8c  jal         func_283A30
label_2854e8:
    if (ctx->pc == 0x2854E8u) {
        ctx->pc = 0x2854E8u;
            // 0x2854e8: 0x24e7d1c0  addiu       $a3, $a3, -0x2E40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955456));
        ctx->pc = 0x2854ECu;
        goto label_2854ec;
    }
    ctx->pc = 0x2854E4u;
    SET_GPR_U32(ctx, 31, 0x2854ECu);
    ctx->pc = 0x2854E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2854E4u;
            // 0x2854e8: 0x24e7d1c0  addiu       $a3, $a3, -0x2E40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283A30u;
    if (runtime->hasFunction(0x283A30u)) {
        auto targetFn = runtime->lookupFunction(0x283A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2854ECu; }
        if (ctx->pc != 0x2854ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignChara__6CSceneFiP11CCharacter2Pc_0x283a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2854ECu; }
        if (ctx->pc != 0x2854ECu) { return; }
    }
    ctx->pc = 0x2854ECu;
label_2854ec:
    // 0x2854ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2854ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2854f0:
    // 0x2854f0: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
label_2854f4:
    if (ctx->pc == 0x2854F4u) {
        ctx->pc = 0x2854F4u;
            // 0x2854f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2854F8u;
        goto label_2854f8;
    }
    ctx->pc = 0x2854F0u;
    {
        const bool branch_taken_0x2854f0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2854F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2854F0u;
            // 0x2854f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2854f0) {
            ctx->pc = 0x285500u;
            goto label_285500;
        }
    }
    ctx->pc = 0x2854F8u;
label_2854f8:
    // 0x2854f8: 0x10000052  b           . + 4 + (0x52 << 2)
label_2854fc:
    if (ctx->pc == 0x2854FCu) {
        ctx->pc = 0x2854FCu;
            // 0x2854fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x285500u;
        goto label_285500;
    }
    ctx->pc = 0x2854F8u;
    {
        const bool branch_taken_0x2854f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2854FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2854F8u;
            // 0x2854fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2854f8) {
            ctx->pc = 0x285644u;
            goto label_285644;
        }
    }
    ctx->pc = 0x285500u;
label_285500:
    // 0x285500: 0xc0a0cd0  jal         func_283340
label_285504:
    if (ctx->pc == 0x285504u) {
        ctx->pc = 0x285504u;
            // 0x285504: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285508u;
        goto label_285508;
    }
    ctx->pc = 0x285500u;
    SET_GPR_U32(ctx, 31, 0x285508u);
    ctx->pc = 0x285504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285500u;
            // 0x285504: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283340u;
    if (runtime->hasFunction(0x283340u)) {
        auto targetFn = runtime->lookupFunction(0x283340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285508u; }
        if (ctx->pc != 0x285508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneCharacter__6CSceneFi_0x283340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285508u; }
        if (ctx->pc != 0x285508u) { return; }
    }
    ctx->pc = 0x285508u;
label_285508:
    // 0x285508: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x285508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28550c:
    // 0x28550c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28550cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_285510:
    // 0x285510: 0xc0a0cd0  jal         func_283340
label_285514:
    if (ctx->pc == 0x285514u) {
        ctx->pc = 0x285514u;
            // 0x285514: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285518u;
        goto label_285518;
    }
    ctx->pc = 0x285510u;
    SET_GPR_U32(ctx, 31, 0x285518u);
    ctx->pc = 0x285514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285510u;
            // 0x285514: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283340u;
    if (runtime->hasFunction(0x283340u)) {
        auto targetFn = runtime->lookupFunction(0x283340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285518u; }
        if (ctx->pc != 0x285518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneCharacter__6CSceneFi_0x283340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285518u; }
        if (ctx->pc != 0x285518u) { return; }
    }
    ctx->pc = 0x285518u;
label_285518:
    // 0x285518: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_28551c:
    if (ctx->pc == 0x28551Cu) {
        ctx->pc = 0x285520u;
        goto label_285520;
    }
    ctx->pc = 0x285518u;
    {
        const bool branch_taken_0x285518 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x285518) {
            ctx->pc = 0x285528u;
            goto label_285528;
        }
    }
    ctx->pc = 0x285520u;
label_285520:
    // 0x285520: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_285524:
    if (ctx->pc == 0x285524u) {
        ctx->pc = 0x285528u;
        goto label_285528;
    }
    ctx->pc = 0x285520u;
    {
        const bool branch_taken_0x285520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285520) {
            ctx->pc = 0x285530u;
            goto label_285530;
        }
    }
    ctx->pc = 0x285528u;
label_285528:
    // 0x285528: 0x10000046  b           . + 4 + (0x46 << 2)
label_28552c:
    if (ctx->pc == 0x28552Cu) {
        ctx->pc = 0x28552Cu;
            // 0x28552c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285530u;
        goto label_285530;
    }
    ctx->pc = 0x285528u;
    {
        const bool branch_taken_0x285528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28552Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285528u;
            // 0x28552c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285528) {
            ctx->pc = 0x285644u;
            goto label_285644;
        }
    }
    ctx->pc = 0x285530u;
label_285530:
    // 0x285530: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x285530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_285534:
    // 0x285534: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x285534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_285538:
    // 0x285538: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x285538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_28553c:
    // 0x28553c: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x28553cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_285540:
    // 0x285540: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x285540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
label_285544:
    // 0x285544: 0x8c510034  lw          $s1, 0x34($v0)
    ctx->pc = 0x285544u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_285548:
    // 0x285548: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_28554c:
    if (ctx->pc == 0x28554Cu) {
        ctx->pc = 0x28554Cu;
            // 0x28554c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285550u;
        goto label_285550;
    }
    ctx->pc = 0x285548u;
    {
        const bool branch_taken_0x285548 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x28554Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285548u;
            // 0x28554c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285548) {
            ctx->pc = 0x285558u;
            goto label_285558;
        }
    }
    ctx->pc = 0x285550u;
label_285550:
    // 0x285550: 0x1000003c  b           . + 4 + (0x3C << 2)
label_285554:
    if (ctx->pc == 0x285554u) {
        ctx->pc = 0x285558u;
        goto label_285558;
    }
    ctx->pc = 0x285550u;
    {
        const bool branch_taken_0x285550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285550) {
            ctx->pc = 0x285644u;
            goto label_285644;
        }
    }
    ctx->pc = 0x285558u;
label_285558:
    // 0x285558: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x285558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28555c:
    // 0x28555c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28555cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285560:
    // 0x285560: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x285560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_285564:
    // 0x285564: 0x320f809  jalr        $t9
label_285568:
    if (ctx->pc == 0x285568u) {
        ctx->pc = 0x285568u;
            // 0x285568: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x28556Cu;
        goto label_28556c;
    }
    ctx->pc = 0x285564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28556Cu);
        ctx->pc = 0x285568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285564u;
            // 0x285568: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28556Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28556Cu; }
            if (ctx->pc != 0x28556Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28556Cu;
label_28556c:
    // 0x28556c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x28556cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_285570:
    // 0x285570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x285570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285574:
    // 0x285574: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x285574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_285578:
    // 0x285578: 0x320f809  jalr        $t9
label_28557c:
    if (ctx->pc == 0x28557Cu) {
        ctx->pc = 0x28557Cu;
            // 0x28557c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x285580u;
        goto label_285580;
    }
    ctx->pc = 0x285578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x285580u);
        ctx->pc = 0x28557Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285578u;
            // 0x28557c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x285580u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x285580u; }
            if (ctx->pc != 0x285580u) { return; }
        }
        }
    }
    ctx->pc = 0x285580u;
label_285580:
    // 0x285580: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x285580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_285584:
    // 0x285584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x285584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285588:
    // 0x285588: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x285588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_28558c:
    // 0x28558c: 0x320f809  jalr        $t9
label_285590:
    if (ctx->pc == 0x285590u) {
        ctx->pc = 0x285590u;
            // 0x285590: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x285594u;
        goto label_285594;
    }
    ctx->pc = 0x28558Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x285594u);
        ctx->pc = 0x285590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28558Cu;
            // 0x285590: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x285594u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x285594u; }
            if (ctx->pc != 0x285594u) { return; }
        }
        }
    }
    ctx->pc = 0x285594u;
label_285594:
    // 0x285594: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x285594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_285598:
    // 0x285598: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x285598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28559c:
    // 0x28559c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28559cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2855a0:
    // 0x2855a0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2855a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2855a4:
    // 0x2855a4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2855a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2855a8:
    // 0x2855a8: 0x320f809  jalr        $t9
label_2855ac:
    if (ctx->pc == 0x2855ACu) {
        ctx->pc = 0x2855ACu;
            // 0x2855ac: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2855B0u;
        goto label_2855b0;
    }
    ctx->pc = 0x2855A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2855B0u);
        ctx->pc = 0x2855ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2855A8u;
            // 0x2855ac: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2855B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2855B0u; }
            if (ctx->pc != 0x2855B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2855B0u;
label_2855b0:
    // 0x2855b0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2855b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2855b4:
    // 0x2855b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2855b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2855b8:
    // 0x2855b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2855b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2855bc:
    // 0x2855bc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2855bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2855c0:
    // 0x2855c0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2855c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2855c4:
    // 0x2855c4: 0x320f809  jalr        $t9
label_2855c8:
    if (ctx->pc == 0x2855C8u) {
        ctx->pc = 0x2855C8u;
            // 0x2855c8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2855CCu;
        goto label_2855cc;
    }
    ctx->pc = 0x2855C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2855CCu);
        ctx->pc = 0x2855C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2855C4u;
            // 0x2855c8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2855CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2855CCu; }
            if (ctx->pc != 0x2855CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2855CCu;
label_2855cc:
    // 0x2855cc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2855ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2855d0:
    // 0x2855d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2855d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2855d4:
    // 0x2855d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2855d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2855d8:
    // 0x2855d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2855d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2855dc:
    // 0x2855dc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2855dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2855e0:
    // 0x2855e0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2855e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2855e4:
    // 0x2855e4: 0x320f809  jalr        $t9
label_2855e8:
    if (ctx->pc == 0x2855E8u) {
        ctx->pc = 0x2855E8u;
            // 0x2855e8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2855ECu;
        goto label_2855ec;
    }
    ctx->pc = 0x2855E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2855ECu);
        ctx->pc = 0x2855E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2855E4u;
            // 0x2855e8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2855ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2855ECu; }
            if (ctx->pc != 0x2855ECu) { return; }
        }
        }
    }
    ctx->pc = 0x2855ECu;
label_2855ec:
    // 0x2855ec: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2855ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2855f0:
    // 0x2855f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2855f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2855f4:
    // 0x2855f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2855f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2855f8:
    // 0x2855f8: 0x8f3900ec  lw          $t9, 0xEC($t9)
    ctx->pc = 0x2855f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 236)));
label_2855fc:
    // 0x2855fc: 0x320f809  jalr        $t9
label_285600:
    if (ctx->pc == 0x285600u) {
        ctx->pc = 0x285600u;
            // 0x285600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285604u;
        goto label_285604;
    }
    ctx->pc = 0x2855FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x285604u);
        ctx->pc = 0x285600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2855FCu;
            // 0x285600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x285604u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x285604u; }
            if (ctx->pc != 0x285604u) { return; }
        }
        }
    }
    ctx->pc = 0x285604u;
label_285604:
    // 0x285604: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x285604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_285608:
    // 0x285608: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x285608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28560c:
    // 0x28560c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x28560cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_285610:
    // 0x285610: 0x320f809  jalr        $t9
label_285614:
    if (ctx->pc == 0x285614u) {
        ctx->pc = 0x285614u;
            // 0x285614: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x285618u;
        goto label_285618;
    }
    ctx->pc = 0x285610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x285618u);
        ctx->pc = 0x285614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285610u;
            // 0x285614: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x285618u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x285618u; }
            if (ctx->pc != 0x285618u) { return; }
        }
        }
    }
    ctx->pc = 0x285618u;
label_285618:
    // 0x285618: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x285618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28561c:
    // 0x28561c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28561cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285620:
    // 0x285620: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x285620u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_285624:
    // 0x285624: 0x320f809  jalr        $t9
label_285628:
    if (ctx->pc == 0x285628u) {
        ctx->pc = 0x285628u;
            // 0x285628: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x28562Cu;
        goto label_28562c;
    }
    ctx->pc = 0x285624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28562Cu);
        ctx->pc = 0x285628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285624u;
            // 0x285628: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28562Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28562Cu; }
            if (ctx->pc != 0x28562Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28562Cu;
label_28562c:
    // 0x28562c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x28562cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_285630:
    // 0x285630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x285630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285634:
    // 0x285634: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x285634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_285638:
    // 0x285638: 0x320f809  jalr        $t9
label_28563c:
    if (ctx->pc == 0x28563Cu) {
        ctx->pc = 0x28563Cu;
            // 0x28563c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x285640u;
        goto label_285640;
    }
    ctx->pc = 0x285638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x285640u);
        ctx->pc = 0x28563Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285638u;
            // 0x28563c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x285640u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x285640u; }
            if (ctx->pc != 0x285640u) { return; }
        }
        }
    }
    ctx->pc = 0x285640u;
label_285640:
    // 0x285640: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x285640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_285644:
    // 0x285644: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x285644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_285648:
    // 0x285648: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x285648u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28564c:
    // 0x28564c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28564cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_285650:
    // 0x285650: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x285650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_285654:
    // 0x285654: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x285654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_285658:
    // 0x285658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x285658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28565c:
    // 0x28565c: 0x3e00008  jr          $ra
label_285660:
    if (ctx->pc == 0x285660u) {
        ctx->pc = 0x285660u;
            // 0x285660: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x285664u;
        goto label_fallthrough_0x28565c;
    }
    ctx->pc = 0x28565Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28565Cu;
            // 0x285660: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28565c:
    ctx->pc = 0x285664u;
}
