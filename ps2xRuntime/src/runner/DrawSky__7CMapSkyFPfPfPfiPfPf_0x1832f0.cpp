#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawSky__7CMapSkyFPfPfPfiPfPf
// Address: 0x1832f0 - 0x183860
void DrawSky__7CMapSkyFPfPfPfiPfPf_0x1832f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSky__7CMapSkyFPfPfPfiPfPf_0x1832f0");
#endif

    switch (ctx->pc) {
        case 0x1832f0u: goto label_1832f0;
        case 0x1832f4u: goto label_1832f4;
        case 0x1832f8u: goto label_1832f8;
        case 0x1832fcu: goto label_1832fc;
        case 0x183300u: goto label_183300;
        case 0x183304u: goto label_183304;
        case 0x183308u: goto label_183308;
        case 0x18330cu: goto label_18330c;
        case 0x183310u: goto label_183310;
        case 0x183314u: goto label_183314;
        case 0x183318u: goto label_183318;
        case 0x18331cu: goto label_18331c;
        case 0x183320u: goto label_183320;
        case 0x183324u: goto label_183324;
        case 0x183328u: goto label_183328;
        case 0x18332cu: goto label_18332c;
        case 0x183330u: goto label_183330;
        case 0x183334u: goto label_183334;
        case 0x183338u: goto label_183338;
        case 0x18333cu: goto label_18333c;
        case 0x183340u: goto label_183340;
        case 0x183344u: goto label_183344;
        case 0x183348u: goto label_183348;
        case 0x18334cu: goto label_18334c;
        case 0x183350u: goto label_183350;
        case 0x183354u: goto label_183354;
        case 0x183358u: goto label_183358;
        case 0x18335cu: goto label_18335c;
        case 0x183360u: goto label_183360;
        case 0x183364u: goto label_183364;
        case 0x183368u: goto label_183368;
        case 0x18336cu: goto label_18336c;
        case 0x183370u: goto label_183370;
        case 0x183374u: goto label_183374;
        case 0x183378u: goto label_183378;
        case 0x18337cu: goto label_18337c;
        case 0x183380u: goto label_183380;
        case 0x183384u: goto label_183384;
        case 0x183388u: goto label_183388;
        case 0x18338cu: goto label_18338c;
        case 0x183390u: goto label_183390;
        case 0x183394u: goto label_183394;
        case 0x183398u: goto label_183398;
        case 0x18339cu: goto label_18339c;
        case 0x1833a0u: goto label_1833a0;
        case 0x1833a4u: goto label_1833a4;
        case 0x1833a8u: goto label_1833a8;
        case 0x1833acu: goto label_1833ac;
        case 0x1833b0u: goto label_1833b0;
        case 0x1833b4u: goto label_1833b4;
        case 0x1833b8u: goto label_1833b8;
        case 0x1833bcu: goto label_1833bc;
        case 0x1833c0u: goto label_1833c0;
        case 0x1833c4u: goto label_1833c4;
        case 0x1833c8u: goto label_1833c8;
        case 0x1833ccu: goto label_1833cc;
        case 0x1833d0u: goto label_1833d0;
        case 0x1833d4u: goto label_1833d4;
        case 0x1833d8u: goto label_1833d8;
        case 0x1833dcu: goto label_1833dc;
        case 0x1833e0u: goto label_1833e0;
        case 0x1833e4u: goto label_1833e4;
        case 0x1833e8u: goto label_1833e8;
        case 0x1833ecu: goto label_1833ec;
        case 0x1833f0u: goto label_1833f0;
        case 0x1833f4u: goto label_1833f4;
        case 0x1833f8u: goto label_1833f8;
        case 0x1833fcu: goto label_1833fc;
        case 0x183400u: goto label_183400;
        case 0x183404u: goto label_183404;
        case 0x183408u: goto label_183408;
        case 0x18340cu: goto label_18340c;
        case 0x183410u: goto label_183410;
        case 0x183414u: goto label_183414;
        case 0x183418u: goto label_183418;
        case 0x18341cu: goto label_18341c;
        case 0x183420u: goto label_183420;
        case 0x183424u: goto label_183424;
        case 0x183428u: goto label_183428;
        case 0x18342cu: goto label_18342c;
        case 0x183430u: goto label_183430;
        case 0x183434u: goto label_183434;
        case 0x183438u: goto label_183438;
        case 0x18343cu: goto label_18343c;
        case 0x183440u: goto label_183440;
        case 0x183444u: goto label_183444;
        case 0x183448u: goto label_183448;
        case 0x18344cu: goto label_18344c;
        case 0x183450u: goto label_183450;
        case 0x183454u: goto label_183454;
        case 0x183458u: goto label_183458;
        case 0x18345cu: goto label_18345c;
        case 0x183460u: goto label_183460;
        case 0x183464u: goto label_183464;
        case 0x183468u: goto label_183468;
        case 0x18346cu: goto label_18346c;
        case 0x183470u: goto label_183470;
        case 0x183474u: goto label_183474;
        case 0x183478u: goto label_183478;
        case 0x18347cu: goto label_18347c;
        case 0x183480u: goto label_183480;
        case 0x183484u: goto label_183484;
        case 0x183488u: goto label_183488;
        case 0x18348cu: goto label_18348c;
        case 0x183490u: goto label_183490;
        case 0x183494u: goto label_183494;
        case 0x183498u: goto label_183498;
        case 0x18349cu: goto label_18349c;
        case 0x1834a0u: goto label_1834a0;
        case 0x1834a4u: goto label_1834a4;
        case 0x1834a8u: goto label_1834a8;
        case 0x1834acu: goto label_1834ac;
        case 0x1834b0u: goto label_1834b0;
        case 0x1834b4u: goto label_1834b4;
        case 0x1834b8u: goto label_1834b8;
        case 0x1834bcu: goto label_1834bc;
        case 0x1834c0u: goto label_1834c0;
        case 0x1834c4u: goto label_1834c4;
        case 0x1834c8u: goto label_1834c8;
        case 0x1834ccu: goto label_1834cc;
        case 0x1834d0u: goto label_1834d0;
        case 0x1834d4u: goto label_1834d4;
        case 0x1834d8u: goto label_1834d8;
        case 0x1834dcu: goto label_1834dc;
        case 0x1834e0u: goto label_1834e0;
        case 0x1834e4u: goto label_1834e4;
        case 0x1834e8u: goto label_1834e8;
        case 0x1834ecu: goto label_1834ec;
        case 0x1834f0u: goto label_1834f0;
        case 0x1834f4u: goto label_1834f4;
        case 0x1834f8u: goto label_1834f8;
        case 0x1834fcu: goto label_1834fc;
        case 0x183500u: goto label_183500;
        case 0x183504u: goto label_183504;
        case 0x183508u: goto label_183508;
        case 0x18350cu: goto label_18350c;
        case 0x183510u: goto label_183510;
        case 0x183514u: goto label_183514;
        case 0x183518u: goto label_183518;
        case 0x18351cu: goto label_18351c;
        case 0x183520u: goto label_183520;
        case 0x183524u: goto label_183524;
        case 0x183528u: goto label_183528;
        case 0x18352cu: goto label_18352c;
        case 0x183530u: goto label_183530;
        case 0x183534u: goto label_183534;
        case 0x183538u: goto label_183538;
        case 0x18353cu: goto label_18353c;
        case 0x183540u: goto label_183540;
        case 0x183544u: goto label_183544;
        case 0x183548u: goto label_183548;
        case 0x18354cu: goto label_18354c;
        case 0x183550u: goto label_183550;
        case 0x183554u: goto label_183554;
        case 0x183558u: goto label_183558;
        case 0x18355cu: goto label_18355c;
        case 0x183560u: goto label_183560;
        case 0x183564u: goto label_183564;
        case 0x183568u: goto label_183568;
        case 0x18356cu: goto label_18356c;
        case 0x183570u: goto label_183570;
        case 0x183574u: goto label_183574;
        case 0x183578u: goto label_183578;
        case 0x18357cu: goto label_18357c;
        case 0x183580u: goto label_183580;
        case 0x183584u: goto label_183584;
        case 0x183588u: goto label_183588;
        case 0x18358cu: goto label_18358c;
        case 0x183590u: goto label_183590;
        case 0x183594u: goto label_183594;
        case 0x183598u: goto label_183598;
        case 0x18359cu: goto label_18359c;
        case 0x1835a0u: goto label_1835a0;
        case 0x1835a4u: goto label_1835a4;
        case 0x1835a8u: goto label_1835a8;
        case 0x1835acu: goto label_1835ac;
        case 0x1835b0u: goto label_1835b0;
        case 0x1835b4u: goto label_1835b4;
        case 0x1835b8u: goto label_1835b8;
        case 0x1835bcu: goto label_1835bc;
        case 0x1835c0u: goto label_1835c0;
        case 0x1835c4u: goto label_1835c4;
        case 0x1835c8u: goto label_1835c8;
        case 0x1835ccu: goto label_1835cc;
        case 0x1835d0u: goto label_1835d0;
        case 0x1835d4u: goto label_1835d4;
        case 0x1835d8u: goto label_1835d8;
        case 0x1835dcu: goto label_1835dc;
        case 0x1835e0u: goto label_1835e0;
        case 0x1835e4u: goto label_1835e4;
        case 0x1835e8u: goto label_1835e8;
        case 0x1835ecu: goto label_1835ec;
        case 0x1835f0u: goto label_1835f0;
        case 0x1835f4u: goto label_1835f4;
        case 0x1835f8u: goto label_1835f8;
        case 0x1835fcu: goto label_1835fc;
        case 0x183600u: goto label_183600;
        case 0x183604u: goto label_183604;
        case 0x183608u: goto label_183608;
        case 0x18360cu: goto label_18360c;
        case 0x183610u: goto label_183610;
        case 0x183614u: goto label_183614;
        case 0x183618u: goto label_183618;
        case 0x18361cu: goto label_18361c;
        case 0x183620u: goto label_183620;
        case 0x183624u: goto label_183624;
        case 0x183628u: goto label_183628;
        case 0x18362cu: goto label_18362c;
        case 0x183630u: goto label_183630;
        case 0x183634u: goto label_183634;
        case 0x183638u: goto label_183638;
        case 0x18363cu: goto label_18363c;
        case 0x183640u: goto label_183640;
        case 0x183644u: goto label_183644;
        case 0x183648u: goto label_183648;
        case 0x18364cu: goto label_18364c;
        case 0x183650u: goto label_183650;
        case 0x183654u: goto label_183654;
        case 0x183658u: goto label_183658;
        case 0x18365cu: goto label_18365c;
        case 0x183660u: goto label_183660;
        case 0x183664u: goto label_183664;
        case 0x183668u: goto label_183668;
        case 0x18366cu: goto label_18366c;
        case 0x183670u: goto label_183670;
        case 0x183674u: goto label_183674;
        case 0x183678u: goto label_183678;
        case 0x18367cu: goto label_18367c;
        case 0x183680u: goto label_183680;
        case 0x183684u: goto label_183684;
        case 0x183688u: goto label_183688;
        case 0x18368cu: goto label_18368c;
        case 0x183690u: goto label_183690;
        case 0x183694u: goto label_183694;
        case 0x183698u: goto label_183698;
        case 0x18369cu: goto label_18369c;
        case 0x1836a0u: goto label_1836a0;
        case 0x1836a4u: goto label_1836a4;
        case 0x1836a8u: goto label_1836a8;
        case 0x1836acu: goto label_1836ac;
        case 0x1836b0u: goto label_1836b0;
        case 0x1836b4u: goto label_1836b4;
        case 0x1836b8u: goto label_1836b8;
        case 0x1836bcu: goto label_1836bc;
        case 0x1836c0u: goto label_1836c0;
        case 0x1836c4u: goto label_1836c4;
        case 0x1836c8u: goto label_1836c8;
        case 0x1836ccu: goto label_1836cc;
        case 0x1836d0u: goto label_1836d0;
        case 0x1836d4u: goto label_1836d4;
        case 0x1836d8u: goto label_1836d8;
        case 0x1836dcu: goto label_1836dc;
        case 0x1836e0u: goto label_1836e0;
        case 0x1836e4u: goto label_1836e4;
        case 0x1836e8u: goto label_1836e8;
        case 0x1836ecu: goto label_1836ec;
        case 0x1836f0u: goto label_1836f0;
        case 0x1836f4u: goto label_1836f4;
        case 0x1836f8u: goto label_1836f8;
        case 0x1836fcu: goto label_1836fc;
        case 0x183700u: goto label_183700;
        case 0x183704u: goto label_183704;
        case 0x183708u: goto label_183708;
        case 0x18370cu: goto label_18370c;
        case 0x183710u: goto label_183710;
        case 0x183714u: goto label_183714;
        case 0x183718u: goto label_183718;
        case 0x18371cu: goto label_18371c;
        case 0x183720u: goto label_183720;
        case 0x183724u: goto label_183724;
        case 0x183728u: goto label_183728;
        case 0x18372cu: goto label_18372c;
        case 0x183730u: goto label_183730;
        case 0x183734u: goto label_183734;
        case 0x183738u: goto label_183738;
        case 0x18373cu: goto label_18373c;
        case 0x183740u: goto label_183740;
        case 0x183744u: goto label_183744;
        case 0x183748u: goto label_183748;
        case 0x18374cu: goto label_18374c;
        case 0x183750u: goto label_183750;
        case 0x183754u: goto label_183754;
        case 0x183758u: goto label_183758;
        case 0x18375cu: goto label_18375c;
        case 0x183760u: goto label_183760;
        case 0x183764u: goto label_183764;
        case 0x183768u: goto label_183768;
        case 0x18376cu: goto label_18376c;
        case 0x183770u: goto label_183770;
        case 0x183774u: goto label_183774;
        case 0x183778u: goto label_183778;
        case 0x18377cu: goto label_18377c;
        case 0x183780u: goto label_183780;
        case 0x183784u: goto label_183784;
        case 0x183788u: goto label_183788;
        case 0x18378cu: goto label_18378c;
        case 0x183790u: goto label_183790;
        case 0x183794u: goto label_183794;
        case 0x183798u: goto label_183798;
        case 0x18379cu: goto label_18379c;
        case 0x1837a0u: goto label_1837a0;
        case 0x1837a4u: goto label_1837a4;
        case 0x1837a8u: goto label_1837a8;
        case 0x1837acu: goto label_1837ac;
        case 0x1837b0u: goto label_1837b0;
        case 0x1837b4u: goto label_1837b4;
        case 0x1837b8u: goto label_1837b8;
        case 0x1837bcu: goto label_1837bc;
        case 0x1837c0u: goto label_1837c0;
        case 0x1837c4u: goto label_1837c4;
        case 0x1837c8u: goto label_1837c8;
        case 0x1837ccu: goto label_1837cc;
        case 0x1837d0u: goto label_1837d0;
        case 0x1837d4u: goto label_1837d4;
        case 0x1837d8u: goto label_1837d8;
        case 0x1837dcu: goto label_1837dc;
        case 0x1837e0u: goto label_1837e0;
        case 0x1837e4u: goto label_1837e4;
        case 0x1837e8u: goto label_1837e8;
        case 0x1837ecu: goto label_1837ec;
        case 0x1837f0u: goto label_1837f0;
        case 0x1837f4u: goto label_1837f4;
        case 0x1837f8u: goto label_1837f8;
        case 0x1837fcu: goto label_1837fc;
        case 0x183800u: goto label_183800;
        case 0x183804u: goto label_183804;
        case 0x183808u: goto label_183808;
        case 0x18380cu: goto label_18380c;
        case 0x183810u: goto label_183810;
        case 0x183814u: goto label_183814;
        case 0x183818u: goto label_183818;
        case 0x18381cu: goto label_18381c;
        case 0x183820u: goto label_183820;
        case 0x183824u: goto label_183824;
        case 0x183828u: goto label_183828;
        case 0x18382cu: goto label_18382c;
        case 0x183830u: goto label_183830;
        case 0x183834u: goto label_183834;
        case 0x183838u: goto label_183838;
        case 0x18383cu: goto label_18383c;
        case 0x183840u: goto label_183840;
        case 0x183844u: goto label_183844;
        case 0x183848u: goto label_183848;
        case 0x18384cu: goto label_18384c;
        case 0x183850u: goto label_183850;
        case 0x183854u: goto label_183854;
        case 0x183858u: goto label_183858;
        case 0x18385cu: goto label_18385c;
        default: break;
    }

    ctx->pc = 0x1832f0u;

label_1832f0:
    // 0x1832f0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1832f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_1832f4:
    // 0x1832f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1832f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1832f8:
    // 0x1832f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1832f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1832fc:
    // 0x1832fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1832fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_183300:
    // 0x183300: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x183300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_183304:
    // 0x183304: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x183304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_183308:
    // 0x183308: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x183308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_18330c:
    // 0x18330c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x18330cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_183310:
    // 0x183310: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x183310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_183314:
    // 0x183314: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x183314u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_183318:
    // 0x183318: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x183318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18331c:
    // 0x18331c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x18331cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_183320:
    // 0x183320: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x183320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_183324:
    // 0x183324: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x183324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_183328:
    // 0x183328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x183328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18332c:
    // 0x18332c: 0xafa900ac  sw          $t1, 0xAC($sp)
    ctx->pc = 0x18332cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 9));
label_183330:
    // 0x183330: 0x500013f  bltz        $t0, . + 4 + (0x13F << 2)
label_183334:
    if (ctx->pc == 0x183334u) {
        ctx->pc = 0x183334u;
            // 0x183334: 0xafaa00a8  sw          $t2, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 10));
        ctx->pc = 0x183338u;
        goto label_183338;
    }
    ctx->pc = 0x183330u;
    {
        const bool branch_taken_0x183330 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x183334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183330u;
            // 0x183334: 0xafaa00a8  sw          $t2, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183330) {
            ctx->pc = 0x183830u;
            goto label_183830;
        }
    }
    ctx->pc = 0x183338u;
label_183338:
    // 0x183338: 0x29030004  slti        $v1, $t0, 0x4
    ctx->pc = 0x183338u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
label_18333c:
    // 0x18333c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_183340:
    if (ctx->pc == 0x183340u) {
        ctx->pc = 0x183340u;
            // 0x183340: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183344u;
        goto label_183344;
    }
    ctx->pc = 0x18333Cu;
    {
        const bool branch_taken_0x18333c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x183340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18333Cu;
            // 0x183340: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18333c) {
            ctx->pc = 0x183350u;
            goto label_183350;
        }
    }
    ctx->pc = 0x183344u;
label_183344:
    // 0x183344: 0x1000013b  b           . + 4 + (0x13B << 2)
label_183348:
    if (ctx->pc == 0x183348u) {
        ctx->pc = 0x183348u;
            // 0x183348: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x18334Cu;
        goto label_18334c;
    }
    ctx->pc = 0x183344u;
    {
        const bool branch_taken_0x183344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183344u;
            // 0x183348: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183344) {
            ctx->pc = 0x183834u;
            goto label_183834;
        }
    }
    ctx->pc = 0x18334Cu;
label_18334c:
    // 0x18334c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18334cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183350:
    // 0x183350: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x183350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183354:
    // 0x183354: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x183354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_183358:
    // 0x183358: 0x8c440088  lw          $a0, 0x88($v0)
    ctx->pc = 0x183358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_18335c:
    // 0x18335c: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_183360:
    if (ctx->pc == 0x183360u) {
        ctx->pc = 0x183360u;
            // 0x183360: 0x24560088  addiu       $s6, $v0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
        ctx->pc = 0x183364u;
        goto label_183364;
    }
    ctx->pc = 0x18335Cu;
    {
        const bool branch_taken_0x18335c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x183360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18335Cu;
            // 0x183360: 0x24560088  addiu       $s6, $v0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18335c) {
            ctx->pc = 0x1833A0u;
            goto label_1833a0;
        }
    }
    ctx->pc = 0x183364u;
label_183364:
    // 0x183364: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x183364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_183368:
    // 0x183368: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x183368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_18336c:
    // 0x18336c: 0x320f809  jalr        $t9
label_183370:
    if (ctx->pc == 0x183370u) {
        ctx->pc = 0x183370u;
            // 0x183370: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x183374u;
        goto label_183374;
    }
    ctx->pc = 0x18336Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x183374u);
        ctx->pc = 0x183370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18336Cu;
            // 0x183370: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x183374u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x183374u; }
            if (ctx->pc != 0x183374u) { return; }
        }
        }
    }
    ctx->pc = 0x183374u;
label_183374:
    // 0x183374: 0x27b700b4  addiu       $s7, $sp, 0xB4
    ctx->pc = 0x183374u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_183378:
    // 0x183378: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x183378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18337c:
    // 0x18337c: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x18337cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_183380:
    // 0x183380: 0xc04c374  jal         func_130DD0
label_183384:
    if (ctx->pc == 0x183384u) {
        ctx->pc = 0x183384u;
            // 0x183384: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x183388u;
        goto label_183388;
    }
    ctx->pc = 0x183380u;
    SET_GPR_U32(ctx, 31, 0x183388u);
    ctx->pc = 0x183384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183380u;
            // 0x183384: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183388u; }
        if (ctx->pc != 0x183388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183388u; }
        if (ctx->pc != 0x183388u) { return; }
    }
    ctx->pc = 0x183388u;
label_183388:
    // 0x183388: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x183388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_18338c:
    // 0x18338c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x18338cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_183390:
    // 0x183390: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x183390u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_183394:
    // 0x183394: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x183394u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_183398:
    // 0x183398: 0x320f809  jalr        $t9
label_18339c:
    if (ctx->pc == 0x18339Cu) {
        ctx->pc = 0x18339Cu;
            // 0x18339c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1833A0u;
        goto label_1833a0;
    }
    ctx->pc = 0x183398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1833A0u);
        ctx->pc = 0x18339Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183398u;
            // 0x18339c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1833A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1833A0u; }
            if (ctx->pc != 0x1833A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1833A0u;
label_1833a0:
    // 0x1833a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1833a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1833a4:
    // 0x1833a4: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x1833a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_1833a8:
    // 0x1833a8: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_1833ac:
    if (ctx->pc == 0x1833ACu) {
        ctx->pc = 0x1833ACu;
            // 0x1833ac: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x1833B0u;
        goto label_1833b0;
    }
    ctx->pc = 0x1833A8u;
    {
        const bool branch_taken_0x1833a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1833ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1833A8u;
            // 0x1833ac: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1833a8) {
            ctx->pc = 0x183354u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183354;
        }
    }
    ctx->pc = 0x1833B0u;
label_1833b0:
    // 0x1833b0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1833b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1833b4:
    // 0x1833b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1833b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1833b8:
    // 0x1833b8: 0x2b08821  addu        $s1, $s5, $s0
    ctx->pc = 0x1833b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_1833bc:
    // 0x1833bc: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1833bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1833c0:
    // 0x1833c0: 0x26370010  addiu       $s7, $s1, 0x10
    ctx->pc = 0x1833c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1833c4:
    // 0x1833c4: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1833c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1833c8:
    // 0x1833c8: 0xc04c374  jal         func_130DD0
label_1833cc:
    if (ctx->pc == 0x1833CCu) {
        ctx->pc = 0x1833CCu;
            // 0x1833cc: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1833D0u;
        goto label_1833d0;
    }
    ctx->pc = 0x1833C8u;
    SET_GPR_U32(ctx, 31, 0x1833D0u);
    ctx->pc = 0x1833CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1833C8u;
            // 0x1833cc: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1833D0u; }
        if (ctx->pc != 0x1833D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1833D0u; }
        if (ctx->pc != 0x1833D0u) { return; }
    }
    ctx->pc = 0x1833D0u;
label_1833d0:
    // 0x1833d0: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x1833d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_1833d4:
    // 0x1833d4: 0xc6210040  lwc1        $f1, 0x40($s1)
    ctx->pc = 0x1833d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1833d8:
    // 0x1833d8: 0x26370040  addiu       $s7, $s1, 0x40
    ctx->pc = 0x1833d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1833dc:
    // 0x1833dc: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x1833dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1833e0:
    // 0x1833e0: 0xc04c374  jal         func_130DD0
label_1833e4:
    if (ctx->pc == 0x1833E4u) {
        ctx->pc = 0x1833E4u;
            // 0x1833e4: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1833E8u;
        goto label_1833e8;
    }
    ctx->pc = 0x1833E0u;
    SET_GPR_U32(ctx, 31, 0x1833E8u);
    ctx->pc = 0x1833E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1833E0u;
            // 0x1833e4: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1833E8u; }
        if (ctx->pc != 0x1833E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1833E8u; }
        if (ctx->pc != 0x1833E8u) { return; }
    }
    ctx->pc = 0x1833E8u;
label_1833e8:
    // 0x1833e8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1833e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1833ec:
    // 0x1833ec: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1833ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1833f0:
    // 0x1833f0: 0x2ac20004  slti        $v0, $s6, 0x4
    ctx->pc = 0x1833f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
label_1833f4:
    // 0x1833f4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_1833f8:
    if (ctx->pc == 0x1833F8u) {
        ctx->pc = 0x1833F8u;
            // 0x1833f8: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->pc = 0x1833FCu;
        goto label_1833fc;
    }
    ctx->pc = 0x1833F4u;
    {
        const bool branch_taken_0x1833f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1833F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1833F4u;
            // 0x1833f8: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1833f4) {
            ctx->pc = 0x1833B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1833b8;
        }
    }
    ctx->pc = 0x1833FCu;
label_1833fc:
    // 0x1833fc: 0x3c170038  lui         $s7, 0x38
    ctx->pc = 0x1833fcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)56 << 16));
label_183400:
    // 0x183400: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x183400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_183404:
    // 0x183404: 0xc050df4  jal         func_1437D0
label_183408:
    if (ctx->pc == 0x183408u) {
        ctx->pc = 0x183408u;
            // 0x183408: 0x26f71ef0  addiu       $s7, $s7, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 7920));
        ctx->pc = 0x18340Cu;
        goto label_18340c;
    }
    ctx->pc = 0x183404u;
    SET_GPR_U32(ctx, 31, 0x18340Cu);
    ctx->pc = 0x183408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183404u;
            // 0x183408: 0x26f71ef0  addiu       $s7, $s7, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437D0u;
    if (runtime->hasFunction(0x1437D0u)) {
        auto targetFn = runtime->lookupFunction(0x1437D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18340Cu; }
        if (ctx->pc != 0x18340Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetAmbient__FPf_0x1437d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18340Cu; }
        if (ctx->pc != 0x18340Cu) { return; }
    }
    ctx->pc = 0x18340Cu;
label_18340c:
    // 0x18340c: 0xc050df4  jal         func_1437D0
label_183410:
    if (ctx->pc == 0x183410u) {
        ctx->pc = 0x183410u;
            // 0x183410: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x183414u;
        goto label_183414;
    }
    ctx->pc = 0x18340Cu;
    SET_GPR_U32(ctx, 31, 0x183414u);
    ctx->pc = 0x183410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18340Cu;
            // 0x183410: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437D0u;
    if (runtime->hasFunction(0x1437D0u)) {
        auto targetFn = runtime->lookupFunction(0x1437D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183414u; }
        if (ctx->pc != 0x183414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetAmbient__FPf_0x1437d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183414u; }
        if (ctx->pc != 0x183414u) { return; }
    }
    ctx->pc = 0x183414u;
label_183414:
    // 0x183414: 0xc04d6d8  jal         func_135B60
label_183418:
    if (ctx->pc == 0x183418u) {
        ctx->pc = 0x183418u;
            // 0x183418: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x18341Cu;
        goto label_18341c;
    }
    ctx->pc = 0x183414u;
    SET_GPR_U32(ctx, 31, 0x18341Cu);
    ctx->pc = 0x183418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183414u;
            // 0x183418: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18341Cu; }
        if (ctx->pc != 0x18341Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18341Cu; }
        if (ctx->pc != 0x18341Cu) { return; }
    }
    ctx->pc = 0x18341Cu;
label_18341c:
    // 0x18341c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x18341cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183420:
    // 0x183420: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x183420u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183424:
    // 0x183424: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x183424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_183428:
    // 0x183428: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x183428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18342c:
    // 0x18342c: 0x762021  addu        $a0, $v1, $s6
    ctx->pc = 0x18342cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_183430:
    // 0x183430: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x183430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_183434:
    // 0x183434: 0x27a30124  addiu       $v1, $sp, 0x124
    ctx->pc = 0x183434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_183438:
    // 0x183438: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x183438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_18343c:
    // 0x18343c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x18343cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_183440:
    // 0x183440: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x183440u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_183444:
    // 0x183444: 0x0  nop
    ctx->pc = 0x183444u;
    // NOP
label_183448:
    // 0x183448: 0x45010032  bc1t        . + 4 + (0x32 << 2)
label_18344c:
    if (ctx->pc == 0x18344Cu) {
        ctx->pc = 0x183450u;
        goto label_183450;
    }
    ctx->pc = 0x183448u;
    {
        const bool branch_taken_0x183448 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x183448) {
            ctx->pc = 0x183514u;
            goto label_183514;
        }
    }
    ctx->pc = 0x183450u;
label_183450:
    // 0x183450: 0x2b68021  addu        $s0, $s5, $s6
    ctx->pc = 0x183450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
label_183454:
    // 0x183454: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x183454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_183458:
    // 0x183458: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_18345c:
    if (ctx->pc == 0x18345Cu) {
        ctx->pc = 0x18345Cu;
            // 0x18345c: 0x26110030  addiu       $s1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x183460u;
        goto label_183460;
    }
    ctx->pc = 0x183458u;
    {
        const bool branch_taken_0x183458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18345Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183458u;
            // 0x18345c: 0x26110030  addiu       $s1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183458) {
            ctx->pc = 0x183514u;
            goto label_183514;
        }
    }
    ctx->pc = 0x183460u;
label_183460:
    // 0x183460: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x183460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_183464:
    // 0x183464: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x183464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_183468:
    // 0x183468: 0xc04ba14  jal         func_12E850
label_18346c:
    if (ctx->pc == 0x18346Cu) {
        ctx->pc = 0x18346Cu;
            // 0x18346c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183470u;
        goto label_183470;
    }
    ctx->pc = 0x183468u;
    SET_GPR_U32(ctx, 31, 0x183470u);
    ctx->pc = 0x18346Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183468u;
            // 0x18346c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183470u; }
        if (ctx->pc != 0x183470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183470u; }
        if (ctx->pc != 0x183470u) { return; }
    }
    ctx->pc = 0x183470u;
label_183470:
    // 0x183470: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x183470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_183474:
    // 0x183474: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x183474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_183478:
    // 0x183478: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x183478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18347c:
    // 0x18347c: 0x0  nop
    ctx->pc = 0x18347cu;
    // NOP
label_183480:
    // 0x183480: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x183480u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_183484:
    // 0x183484: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x183484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_183488:
    // 0x183488: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x183488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_18348c:
    // 0x18348c: 0x320f809  jalr        $t9
label_183490:
    if (ctx->pc == 0x183490u) {
        ctx->pc = 0x183490u;
            // 0x183490: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x183494u;
        goto label_183494;
    }
    ctx->pc = 0x18348Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x183494u);
        ctx->pc = 0x183490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18348Cu;
            // 0x183490: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x183494u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x183494u; }
            if (ctx->pc != 0x183494u) { return; }
        }
        }
    }
    ctx->pc = 0x183494u;
label_183494:
    // 0x183494: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x183494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_183498:
    // 0x183498: 0xc68d0004  lwc1        $f13, 0x4($s4)
    ctx->pc = 0x183498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18349c:
    // 0x18349c: 0xc68e0008  lwc1        $f14, 0x8($s4)
    ctx->pc = 0x18349cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1834a0:
    // 0x1834a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1834a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1834a4:
    // 0x1834a4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1834a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1834a8:
    // 0x1834a8: 0x320f809  jalr        $t9
label_1834ac:
    if (ctx->pc == 0x1834ACu) {
        ctx->pc = 0x1834ACu;
            // 0x1834ac: 0xc68c0000  lwc1        $f12, 0x0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1834B0u;
        goto label_1834b0;
    }
    ctx->pc = 0x1834A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1834B0u);
        ctx->pc = 0x1834ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1834A8u;
            // 0x1834ac: 0xc68c0000  lwc1        $f12, 0x0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1834B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1834B0u; }
            if (ctx->pc != 0x1834B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1834B0u;
label_1834b0:
    // 0x1834b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1834b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1834b4:
    // 0x1834b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1834b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1834b8:
    // 0x1834b8: 0xc60d0040  lwc1        $f13, 0x40($s0)
    ctx->pc = 0x1834b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1834bc:
    // 0x1834bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1834bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1834c0:
    // 0x1834c0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1834c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1834c4:
    // 0x1834c4: 0x320f809  jalr        $t9
label_1834c8:
    if (ctx->pc == 0x1834C8u) {
        ctx->pc = 0x1834C8u;
            // 0x1834c8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1834CCu;
        goto label_1834cc;
    }
    ctx->pc = 0x1834C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1834CCu);
        ctx->pc = 0x1834C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1834C4u;
            // 0x1834c8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1834CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1834CCu; }
            if (ctx->pc != 0x1834CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1834CCu;
label_1834cc:
    // 0x1834cc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1834ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1834d0:
    // 0x1834d0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1834d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1834d4:
    // 0x1834d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1834d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1834d8:
    // 0x1834d8: 0xc04de54  jal         func_137950
label_1834dc:
    if (ctx->pc == 0x1834DCu) {
        ctx->pc = 0x1834DCu;
            // 0x1834dc: 0x3c070004  lui         $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
        ctx->pc = 0x1834E0u;
        goto label_1834e0;
    }
    ctx->pc = 0x1834D8u;
    SET_GPR_U32(ctx, 31, 0x1834E0u);
    ctx->pc = 0x1834DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1834D8u;
            // 0x1834dc: 0x3c070004  lui         $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1834E0u; }
        if (ctx->pc != 0x1834E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1834E0u; }
        if (ctx->pc != 0x1834E0u) { return; }
    }
    ctx->pc = 0x1834E0u;
label_1834e0:
    // 0x1834e0: 0xc050bf4  jal         func_142FD0
label_1834e4:
    if (ctx->pc == 0x1834E4u) {
        ctx->pc = 0x1834E4u;
            // 0x1834e4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1834E8u;
        goto label_1834e8;
    }
    ctx->pc = 0x1834E0u;
    SET_GPR_U32(ctx, 31, 0x1834E8u);
    ctx->pc = 0x1834E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1834E0u;
            // 0x1834e4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1834E8u; }
        if (ctx->pc != 0x1834E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1834E8u; }
        if (ctx->pc != 0x1834E8u) { return; }
    }
    ctx->pc = 0x1834E8u;
label_1834e8:
    // 0x1834e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1834e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1834ec:
    // 0x1834ec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1834ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1834f0:
    // 0x1834f0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1834f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1834f4:
    // 0x1834f4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1834f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1834f8:
    // 0x1834f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1834f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1834fc:
    // 0x1834fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1834fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_183500:
    // 0x183500: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x183500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_183504:
    // 0x183504: 0x320f809  jalr        $t9
label_183508:
    if (ctx->pc == 0x183508u) {
        ctx->pc = 0x183508u;
            // 0x183508: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x18350Cu;
        goto label_18350c;
    }
    ctx->pc = 0x183504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18350Cu);
        ctx->pc = 0x183508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183504u;
            // 0x183508: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18350Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18350Cu; }
            if (ctx->pc != 0x18350Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18350Cu;
label_18350c:
    // 0x18350c: 0xc050bf4  jal         func_142FD0
label_183510:
    if (ctx->pc == 0x183510u) {
        ctx->pc = 0x183510u;
            // 0x183510: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x183514u;
        goto label_183514;
    }
    ctx->pc = 0x18350Cu;
    SET_GPR_U32(ctx, 31, 0x183514u);
    ctx->pc = 0x183510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18350Cu;
            // 0x183510: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183514u; }
        if (ctx->pc != 0x183514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183514u; }
        if (ctx->pc != 0x183514u) { return; }
    }
    ctx->pc = 0x183514u;
label_183514:
    // 0x183514: 0x0  nop
    ctx->pc = 0x183514u;
    // NOP
label_183518:
    // 0x183518: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x183518u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_18351c:
    // 0x18351c: 0x2bc30004  slti        $v1, $fp, 0x4
    ctx->pc = 0x18351cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)4) ? 1 : 0);
label_183520:
    // 0x183520: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
label_183524:
    if (ctx->pc == 0x183524u) {
        ctx->pc = 0x183524u;
            // 0x183524: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x183528u;
        goto label_183528;
    }
    ctx->pc = 0x183520u;
    {
        const bool branch_taken_0x183520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x183524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183520u;
            // 0x183524: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183520) {
            ctx->pc = 0x183424u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183424;
        }
    }
    ctx->pc = 0x183528u;
label_183528:
    // 0x183528: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x183528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_18352c:
    // 0x18352c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18352cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183530:
    // 0x183530: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x183530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_183534:
    // 0x183534: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x183534u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_183538:
    // 0x183538: 0x0  nop
    ctx->pc = 0x183538u;
    // NOP
label_18353c:
    // 0x18353c: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
label_183540:
    if (ctx->pc == 0x183540u) {
        ctx->pc = 0x183544u;
        goto label_183544;
    }
    ctx->pc = 0x18353Cu;
    {
        const bool branch_taken_0x18353c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18353c) {
            ctx->pc = 0x183628u;
            goto label_183628;
        }
    }
    ctx->pc = 0x183544u;
label_183544:
    // 0x183544: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x183544u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183548:
    // 0x183548: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x183548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18354c:
    // 0x18354c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x18354cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_183550:
    // 0x183550: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x183550u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183554:
    // 0x183554: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x183554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_183558:
    // 0x183558: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x183558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18355c:
    // 0x18355c: 0x27a30124  addiu       $v1, $sp, 0x124
    ctx->pc = 0x18355cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_183560:
    // 0x183560: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x183560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_183564:
    // 0x183564: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x183564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_183568:
    // 0x183568: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x183568u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18356c:
    // 0x18356c: 0x0  nop
    ctx->pc = 0x18356cu;
    // NOP
label_183570:
    // 0x183570: 0x45010029  bc1t        . + 4 + (0x29 << 2)
label_183574:
    if (ctx->pc == 0x183574u) {
        ctx->pc = 0x183578u;
        goto label_183578;
    }
    ctx->pc = 0x183570u;
    {
        const bool branch_taken_0x183570 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x183570) {
            ctx->pc = 0x183618u;
            goto label_183618;
        }
    }
    ctx->pc = 0x183578u;
label_183578:
    // 0x183578: 0x2b02021  addu        $a0, $s5, $s0
    ctx->pc = 0x183578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_18357c:
    // 0x18357c: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x18357cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_183580:
    // 0x183580: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_183584:
    if (ctx->pc == 0x183584u) {
        ctx->pc = 0x183584u;
            // 0x183584: 0x24910060  addiu       $s1, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->pc = 0x183588u;
        goto label_183588;
    }
    ctx->pc = 0x183580u;
    {
        const bool branch_taken_0x183580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x183584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183580u;
            // 0x183584: 0x24910060  addiu       $s1, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183580) {
            ctx->pc = 0x183618u;
            goto label_183618;
        }
    }
    ctx->pc = 0x183588u;
label_183588:
    // 0x183588: 0x8c850070  lw          $a1, 0x70($a0)
    ctx->pc = 0x183588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_18358c:
    // 0x18358c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18358cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183590:
    // 0x183590: 0xc04ba14  jal         func_12E850
label_183594:
    if (ctx->pc == 0x183594u) {
        ctx->pc = 0x183594u;
            // 0x183594: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183598u;
        goto label_183598;
    }
    ctx->pc = 0x183590u;
    SET_GPR_U32(ctx, 31, 0x183598u);
    ctx->pc = 0x183594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183590u;
            // 0x183594: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183598u; }
        if (ctx->pc != 0x183598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183598u; }
        if (ctx->pc != 0x183598u) { return; }
    }
    ctx->pc = 0x183598u;
label_183598:
    // 0x183598: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x183598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18359c:
    // 0x18359c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18359cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1835a0:
    // 0x1835a0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1835a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1835a4:
    // 0x1835a4: 0x320f809  jalr        $t9
label_1835a8:
    if (ctx->pc == 0x1835A8u) {
        ctx->pc = 0x1835A8u;
            // 0x1835a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1835ACu;
        goto label_1835ac;
    }
    ctx->pc = 0x1835A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1835ACu);
        ctx->pc = 0x1835A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1835A4u;
            // 0x1835a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1835ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1835ACu; }
            if (ctx->pc != 0x1835ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1835ACu;
label_1835ac:
    // 0x1835ac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1835acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1835b0:
    // 0x1835b0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1835b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1835b4:
    // 0x1835b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1835b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1835b8:
    // 0x1835b8: 0xc04de54  jal         func_137950
label_1835bc:
    if (ctx->pc == 0x1835BCu) {
        ctx->pc = 0x1835BCu;
            // 0x1835bc: 0x3c070004  lui         $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
        ctx->pc = 0x1835C0u;
        goto label_1835c0;
    }
    ctx->pc = 0x1835B8u;
    SET_GPR_U32(ctx, 31, 0x1835C0u);
    ctx->pc = 0x1835BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1835B8u;
            // 0x1835bc: 0x3c070004  lui         $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1835C0u; }
        if (ctx->pc != 0x1835C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1835C0u; }
        if (ctx->pc != 0x1835C0u) { return; }
    }
    ctx->pc = 0x1835C0u;
label_1835c0:
    // 0x1835c0: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1835c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1835c4:
    // 0x1835c4: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x1835c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1835c8:
    // 0x1835c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1835c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1835cc:
    // 0x1835cc: 0x0  nop
    ctx->pc = 0x1835ccu;
    // NOP
label_1835d0:
    // 0x1835d0: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_1835d4:
    if (ctx->pc == 0x1835D4u) {
        ctx->pc = 0x1835D8u;
        goto label_1835d8;
    }
    ctx->pc = 0x1835D0u;
    {
        const bool branch_taken_0x1835d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1835d0) {
            ctx->pc = 0x183618u;
            goto label_183618;
        }
    }
    ctx->pc = 0x1835D8u;
label_1835d8:
    // 0x1835d8: 0xc050bf4  jal         func_142FD0
label_1835dc:
    if (ctx->pc == 0x1835DCu) {
        ctx->pc = 0x1835DCu;
            // 0x1835dc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1835E0u;
        goto label_1835e0;
    }
    ctx->pc = 0x1835D8u;
    SET_GPR_U32(ctx, 31, 0x1835E0u);
    ctx->pc = 0x1835DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1835D8u;
            // 0x1835dc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1835E0u; }
        if (ctx->pc != 0x1835E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1835E0u; }
        if (ctx->pc != 0x1835E0u) { return; }
    }
    ctx->pc = 0x1835E0u;
label_1835e0:
    // 0x1835e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1835e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1835e4:
    // 0x1835e4: 0x12c3000c  beq         $s6, $v1, . + 4 + (0xC << 2)
label_1835e8:
    if (ctx->pc == 0x1835E8u) {
        ctx->pc = 0x1835ECu;
        goto label_1835ec;
    }
    ctx->pc = 0x1835E4u;
    {
        const bool branch_taken_0x1835e4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        if (branch_taken_0x1835e4) {
            ctx->pc = 0x183618u;
            goto label_183618;
        }
    }
    ctx->pc = 0x1835ECu;
label_1835ec:
    // 0x1835ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1835ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1835f0:
    // 0x1835f0: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x1835f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1835f4:
    // 0x1835f4: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1835f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1835f8:
    // 0x1835f8: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x1835f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1835fc:
    // 0x1835fc: 0xc66e0008  lwc1        $f14, 0x8($s3)
    ctx->pc = 0x1835fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_183600:
    // 0x183600: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x183600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_183604:
    // 0x183604: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x183604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_183608:
    // 0x183608: 0x320f809  jalr        $t9
label_18360c:
    if (ctx->pc == 0x18360Cu) {
        ctx->pc = 0x18360Cu;
            // 0x18360c: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x183610u;
        goto label_183610;
    }
    ctx->pc = 0x183608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x183610u);
        ctx->pc = 0x18360Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183608u;
            // 0x18360c: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x183610u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x183610u; }
            if (ctx->pc != 0x183610u) { return; }
        }
        }
    }
    ctx->pc = 0x183610u;
label_183610:
    // 0x183610: 0xc050bf4  jal         func_142FD0
label_183614:
    if (ctx->pc == 0x183614u) {
        ctx->pc = 0x183614u;
            // 0x183614: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x183618u;
        goto label_183618;
    }
    ctx->pc = 0x183610u;
    SET_GPR_U32(ctx, 31, 0x183618u);
    ctx->pc = 0x183614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183610u;
            // 0x183614: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183618u; }
        if (ctx->pc != 0x183618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183618u; }
        if (ctx->pc != 0x183618u) { return; }
    }
    ctx->pc = 0x183618u;
label_183618:
    // 0x183618: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x183618u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_18361c:
    // 0x18361c: 0x2ac30004  slti        $v1, $s6, 0x4
    ctx->pc = 0x18361cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
label_183620:
    // 0x183620: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
label_183624:
    if (ctx->pc == 0x183624u) {
        ctx->pc = 0x183624u;
            // 0x183624: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x183628u;
        goto label_183628;
    }
    ctx->pc = 0x183620u;
    {
        const bool branch_taken_0x183620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x183624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183620u;
            // 0x183624: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183620) {
            ctx->pc = 0x18354Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18354c;
        }
    }
    ctx->pc = 0x183628u;
label_183628:
    // 0x183628: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x183628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_18362c:
    // 0x18362c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18362cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183630:
    // 0x183630: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x183630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_183634:
    // 0x183634: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x183634u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_183638:
    // 0x183638: 0x0  nop
    ctx->pc = 0x183638u;
    // NOP
label_18363c:
    // 0x18363c: 0x4501003a  bc1t        . + 4 + (0x3A << 2)
label_183640:
    if (ctx->pc == 0x183640u) {
        ctx->pc = 0x183644u;
        goto label_183644;
    }
    ctx->pc = 0x18363Cu;
    {
        const bool branch_taken_0x18363c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18363c) {
            ctx->pc = 0x183728u;
            goto label_183728;
        }
    }
    ctx->pc = 0x183644u;
label_183644:
    // 0x183644: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x183644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183648:
    // 0x183648: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x183648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18364c:
    // 0x18364c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x18364cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_183650:
    // 0x183650: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x183650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183654:
    // 0x183654: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x183654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_183658:
    // 0x183658: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x183658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18365c:
    // 0x18365c: 0x27a30124  addiu       $v1, $sp, 0x124
    ctx->pc = 0x18365cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_183660:
    // 0x183660: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x183660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_183664:
    // 0x183664: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x183664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_183668:
    // 0x183668: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x183668u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18366c:
    // 0x18366c: 0x0  nop
    ctx->pc = 0x18366cu;
    // NOP
label_183670:
    // 0x183670: 0x45010029  bc1t        . + 4 + (0x29 << 2)
label_183674:
    if (ctx->pc == 0x183674u) {
        ctx->pc = 0x183678u;
        goto label_183678;
    }
    ctx->pc = 0x183670u;
    {
        const bool branch_taken_0x183670 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x183670) {
            ctx->pc = 0x183718u;
            goto label_183718;
        }
    }
    ctx->pc = 0x183678u;
label_183678:
    // 0x183678: 0x2b12021  addu        $a0, $s5, $s1
    ctx->pc = 0x183678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_18367c:
    // 0x18367c: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x18367cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_183680:
    // 0x183680: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_183684:
    if (ctx->pc == 0x183684u) {
        ctx->pc = 0x183684u;
            // 0x183684: 0x24930060  addiu       $s3, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->pc = 0x183688u;
        goto label_183688;
    }
    ctx->pc = 0x183680u;
    {
        const bool branch_taken_0x183680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x183684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183680u;
            // 0x183684: 0x24930060  addiu       $s3, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183680) {
            ctx->pc = 0x183718u;
            goto label_183718;
        }
    }
    ctx->pc = 0x183688u;
label_183688:
    // 0x183688: 0x8c850070  lw          $a1, 0x70($a0)
    ctx->pc = 0x183688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_18368c:
    // 0x18368c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18368cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183690:
    // 0x183690: 0xc04ba14  jal         func_12E850
label_183694:
    if (ctx->pc == 0x183694u) {
        ctx->pc = 0x183694u;
            // 0x183694: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183698u;
        goto label_183698;
    }
    ctx->pc = 0x183690u;
    SET_GPR_U32(ctx, 31, 0x183698u);
    ctx->pc = 0x183694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183690u;
            // 0x183694: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183698u; }
        if (ctx->pc != 0x183698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183698u; }
        if (ctx->pc != 0x183698u) { return; }
    }
    ctx->pc = 0x183698u;
label_183698:
    // 0x183698: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x183698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_18369c:
    // 0x18369c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18369cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1836a0:
    // 0x1836a0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1836a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1836a4:
    // 0x1836a4: 0x320f809  jalr        $t9
label_1836a8:
    if (ctx->pc == 0x1836A8u) {
        ctx->pc = 0x1836A8u;
            // 0x1836a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1836ACu;
        goto label_1836ac;
    }
    ctx->pc = 0x1836A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1836ACu);
        ctx->pc = 0x1836A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1836A4u;
            // 0x1836a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1836ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1836ACu; }
            if (ctx->pc != 0x1836ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1836ACu;
label_1836ac:
    // 0x1836ac: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1836acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1836b0:
    // 0x1836b0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1836b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1836b4:
    // 0x1836b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1836b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1836b8:
    // 0x1836b8: 0xc04de54  jal         func_137950
label_1836bc:
    if (ctx->pc == 0x1836BCu) {
        ctx->pc = 0x1836BCu;
            // 0x1836bc: 0x3c070004  lui         $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
        ctx->pc = 0x1836C0u;
        goto label_1836c0;
    }
    ctx->pc = 0x1836B8u;
    SET_GPR_U32(ctx, 31, 0x1836C0u);
    ctx->pc = 0x1836BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1836B8u;
            // 0x1836bc: 0x3c070004  lui         $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1836C0u; }
        if (ctx->pc != 0x1836C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1836C0u; }
        if (ctx->pc != 0x1836C0u) { return; }
    }
    ctx->pc = 0x1836C0u;
label_1836c0:
    // 0x1836c0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1836c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1836c4:
    // 0x1836c4: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x1836c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1836c8:
    // 0x1836c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1836c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1836cc:
    // 0x1836cc: 0x0  nop
    ctx->pc = 0x1836ccu;
    // NOP
label_1836d0:
    // 0x1836d0: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_1836d4:
    if (ctx->pc == 0x1836D4u) {
        ctx->pc = 0x1836D8u;
        goto label_1836d8;
    }
    ctx->pc = 0x1836D0u;
    {
        const bool branch_taken_0x1836d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1836d0) {
            ctx->pc = 0x183718u;
            goto label_183718;
        }
    }
    ctx->pc = 0x1836D8u;
label_1836d8:
    // 0x1836d8: 0xc050bf4  jal         func_142FD0
label_1836dc:
    if (ctx->pc == 0x1836DCu) {
        ctx->pc = 0x1836DCu;
            // 0x1836dc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1836E0u;
        goto label_1836e0;
    }
    ctx->pc = 0x1836D8u;
    SET_GPR_U32(ctx, 31, 0x1836E0u);
    ctx->pc = 0x1836DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1836D8u;
            // 0x1836dc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1836E0u; }
        if (ctx->pc != 0x1836E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1836E0u; }
        if (ctx->pc != 0x1836E0u) { return; }
    }
    ctx->pc = 0x1836E0u;
label_1836e0:
    // 0x1836e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1836e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1836e4:
    // 0x1836e4: 0x1203000c  beq         $s0, $v1, . + 4 + (0xC << 2)
label_1836e8:
    if (ctx->pc == 0x1836E8u) {
        ctx->pc = 0x1836ECu;
        goto label_1836ec;
    }
    ctx->pc = 0x1836E4u;
    {
        const bool branch_taken_0x1836e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1836e4) {
            ctx->pc = 0x183718u;
            goto label_183718;
        }
    }
    ctx->pc = 0x1836ECu;
label_1836ec:
    // 0x1836ec: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1836ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1836f0:
    // 0x1836f0: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x1836f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1836f4:
    // 0x1836f4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1836f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1836f8:
    // 0x1836f8: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x1836f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1836fc:
    // 0x1836fc: 0xc64e0008  lwc1        $f14, 0x8($s2)
    ctx->pc = 0x1836fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_183700:
    // 0x183700: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x183700u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_183704:
    // 0x183704: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x183704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_183708:
    // 0x183708: 0x320f809  jalr        $t9
label_18370c:
    if (ctx->pc == 0x18370Cu) {
        ctx->pc = 0x18370Cu;
            // 0x18370c: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x183710u;
        goto label_183710;
    }
    ctx->pc = 0x183708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x183710u);
        ctx->pc = 0x18370Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183708u;
            // 0x18370c: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x183710u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x183710u; }
            if (ctx->pc != 0x183710u) { return; }
        }
        }
    }
    ctx->pc = 0x183710u;
label_183710:
    // 0x183710: 0xc050bf4  jal         func_142FD0
label_183714:
    if (ctx->pc == 0x183714u) {
        ctx->pc = 0x183714u;
            // 0x183714: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x183718u;
        goto label_183718;
    }
    ctx->pc = 0x183710u;
    SET_GPR_U32(ctx, 31, 0x183718u);
    ctx->pc = 0x183714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183710u;
            // 0x183714: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183718u; }
        if (ctx->pc != 0x183718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183718u; }
        if (ctx->pc != 0x183718u) { return; }
    }
    ctx->pc = 0x183718u;
label_183718:
    // 0x183718: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x183718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_18371c:
    // 0x18371c: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x18371cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_183720:
    // 0x183720: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
label_183724:
    if (ctx->pc == 0x183724u) {
        ctx->pc = 0x183724u;
            // 0x183724: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x183728u;
        goto label_183728;
    }
    ctx->pc = 0x183720u;
    {
        const bool branch_taken_0x183720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x183724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183720u;
            // 0x183724: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183720) {
            ctx->pc = 0x18364Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18364c;
        }
    }
    ctx->pc = 0x183728u;
label_183728:
    // 0x183728: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x183728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18372c:
    // 0x18372c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18372cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183730:
    // 0x183730: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x183730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_183734:
    // 0x183734: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x183734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183738:
    // 0x183738: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x183738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_18373c:
    // 0x18373c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x18373cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_183740:
    // 0x183740: 0x27a30124  addiu       $v1, $sp, 0x124
    ctx->pc = 0x183740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_183744:
    // 0x183744: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x183744u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_183748:
    // 0x183748: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x183748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18374c:
    // 0x18374c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18374cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_183750:
    // 0x183750: 0x0  nop
    ctx->pc = 0x183750u;
    // NOP
label_183754:
    // 0x183754: 0x45010032  bc1t        . + 4 + (0x32 << 2)
label_183758:
    if (ctx->pc == 0x183758u) {
        ctx->pc = 0x18375Cu;
        goto label_18375c;
    }
    ctx->pc = 0x183754u;
    {
        const bool branch_taken_0x183754 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x183754) {
            ctx->pc = 0x183820u;
            goto label_183820;
        }
    }
    ctx->pc = 0x18375Cu;
label_18375c:
    // 0x18375c: 0x2b19021  addu        $s2, $s5, $s1
    ctx->pc = 0x18375cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_183760:
    // 0x183760: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x183760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_183764:
    // 0x183764: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_183768:
    if (ctx->pc == 0x183768u) {
        ctx->pc = 0x18376Cu;
        goto label_18376c;
    }
    ctx->pc = 0x183764u;
    {
        const bool branch_taken_0x183764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x183764) {
            ctx->pc = 0x183820u;
            goto label_183820;
        }
    }
    ctx->pc = 0x18376Cu;
label_18376c:
    // 0x18376c: 0x8e450070  lw          $a1, 0x70($s2)
    ctx->pc = 0x18376cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_183770:
    // 0x183770: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x183770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_183774:
    // 0x183774: 0xc04ba14  jal         func_12E850
label_183778:
    if (ctx->pc == 0x183778u) {
        ctx->pc = 0x183778u;
            // 0x183778: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18377Cu;
        goto label_18377c;
    }
    ctx->pc = 0x183774u;
    SET_GPR_U32(ctx, 31, 0x18377Cu);
    ctx->pc = 0x183778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183774u;
            // 0x183778: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18377Cu; }
        if (ctx->pc != 0x18377Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18377Cu; }
        if (ctx->pc != 0x18377Cu) { return; }
    }
    ctx->pc = 0x18377Cu;
label_18377c:
    // 0x18377c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x18377cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_183780:
    // 0x183780: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x183780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_183784:
    // 0x183784: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x183784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_183788:
    // 0x183788: 0x0  nop
    ctx->pc = 0x183788u;
    // NOP
label_18378c:
    // 0x18378c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18378cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_183790:
    // 0x183790: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x183790u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_183794:
    // 0x183794: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x183794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_183798:
    // 0x183798: 0x320f809  jalr        $t9
label_18379c:
    if (ctx->pc == 0x18379Cu) {
        ctx->pc = 0x18379Cu;
            // 0x18379c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1837A0u;
        goto label_1837a0;
    }
    ctx->pc = 0x183798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1837A0u);
        ctx->pc = 0x18379Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183798u;
            // 0x18379c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1837A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1837A0u; }
            if (ctx->pc != 0x1837A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1837A0u;
label_1837a0:
    // 0x1837a0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1837a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1837a4:
    // 0x1837a4: 0xc68d0004  lwc1        $f13, 0x4($s4)
    ctx->pc = 0x1837a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1837a8:
    // 0x1837a8: 0xc68e0008  lwc1        $f14, 0x8($s4)
    ctx->pc = 0x1837a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1837ac:
    // 0x1837ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1837acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1837b0:
    // 0x1837b0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1837b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1837b4:
    // 0x1837b4: 0x320f809  jalr        $t9
label_1837b8:
    if (ctx->pc == 0x1837B8u) {
        ctx->pc = 0x1837B8u;
            // 0x1837b8: 0xc68c0000  lwc1        $f12, 0x0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1837BCu;
        goto label_1837bc;
    }
    ctx->pc = 0x1837B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1837BCu);
        ctx->pc = 0x1837B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1837B4u;
            // 0x1837b8: 0xc68c0000  lwc1        $f12, 0x0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1837BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1837BCu; }
            if (ctx->pc != 0x1837BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1837BCu;
label_1837bc:
    // 0x1837bc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1837bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1837c0:
    // 0x1837c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1837c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1837c4:
    // 0x1837c4: 0xc64d0010  lwc1        $f13, 0x10($s2)
    ctx->pc = 0x1837c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1837c8:
    // 0x1837c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1837c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1837cc:
    // 0x1837cc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1837ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1837d0:
    // 0x1837d0: 0x320f809  jalr        $t9
label_1837d4:
    if (ctx->pc == 0x1837D4u) {
        ctx->pc = 0x1837D4u;
            // 0x1837d4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1837D8u;
        goto label_1837d8;
    }
    ctx->pc = 0x1837D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1837D8u);
        ctx->pc = 0x1837D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1837D0u;
            // 0x1837d4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1837D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1837D8u; }
            if (ctx->pc != 0x1837D8u) { return; }
        }
        }
    }
    ctx->pc = 0x1837D8u;
label_1837d8:
    // 0x1837d8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1837d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1837dc:
    // 0x1837dc: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1837dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1837e0:
    // 0x1837e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1837e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1837e4:
    // 0x1837e4: 0xc04de54  jal         func_137950
label_1837e8:
    if (ctx->pc == 0x1837E8u) {
        ctx->pc = 0x1837E8u;
            // 0x1837e8: 0x3c070004  lui         $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
        ctx->pc = 0x1837ECu;
        goto label_1837ec;
    }
    ctx->pc = 0x1837E4u;
    SET_GPR_U32(ctx, 31, 0x1837ECu);
    ctx->pc = 0x1837E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1837E4u;
            // 0x1837e8: 0x3c070004  lui         $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1837ECu; }
        if (ctx->pc != 0x1837ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1837ECu; }
        if (ctx->pc != 0x1837ECu) { return; }
    }
    ctx->pc = 0x1837ECu;
label_1837ec:
    // 0x1837ec: 0xc050bf4  jal         func_142FD0
label_1837f0:
    if (ctx->pc == 0x1837F0u) {
        ctx->pc = 0x1837F0u;
            // 0x1837f0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x1837F4u;
        goto label_1837f4;
    }
    ctx->pc = 0x1837ECu;
    SET_GPR_U32(ctx, 31, 0x1837F4u);
    ctx->pc = 0x1837F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1837ECu;
            // 0x1837f0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1837F4u; }
        if (ctx->pc != 0x1837F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1837F4u; }
        if (ctx->pc != 0x1837F4u) { return; }
    }
    ctx->pc = 0x1837F4u;
label_1837f4:
    // 0x1837f4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1837f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1837f8:
    // 0x1837f8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1837f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1837fc:
    // 0x1837fc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1837fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_183800:
    // 0x183800: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x183800u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_183804:
    // 0x183804: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x183804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_183808:
    // 0x183808: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x183808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18380c:
    // 0x18380c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x18380cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_183810:
    // 0x183810: 0x320f809  jalr        $t9
label_183814:
    if (ctx->pc == 0x183814u) {
        ctx->pc = 0x183814u;
            // 0x183814: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x183818u;
        goto label_183818;
    }
    ctx->pc = 0x183810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x183818u);
        ctx->pc = 0x183814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183810u;
            // 0x183814: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x183818u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x183818u; }
            if (ctx->pc != 0x183818u) { return; }
        }
        }
    }
    ctx->pc = 0x183818u;
label_183818:
    // 0x183818: 0xc050bf4  jal         func_142FD0
label_18381c:
    if (ctx->pc == 0x18381Cu) {
        ctx->pc = 0x18381Cu;
            // 0x18381c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x183820u;
        goto label_183820;
    }
    ctx->pc = 0x183818u;
    SET_GPR_U32(ctx, 31, 0x183820u);
    ctx->pc = 0x18381Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183818u;
            // 0x18381c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183820u; }
        if (ctx->pc != 0x183820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183820u; }
        if (ctx->pc != 0x183820u) { return; }
    }
    ctx->pc = 0x183820u;
label_183820:
    // 0x183820: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x183820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_183824:
    // 0x183824: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x183824u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_183828:
    // 0x183828: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
label_18382c:
    if (ctx->pc == 0x18382Cu) {
        ctx->pc = 0x18382Cu;
            // 0x18382c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x183830u;
        goto label_183830;
    }
    ctx->pc = 0x183828u;
    {
        const bool branch_taken_0x183828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18382Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183828u;
            // 0x18382c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183828) {
            ctx->pc = 0x183730u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183730;
        }
    }
    ctx->pc = 0x183830u;
label_183830:
    // 0x183830: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x183830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_183834:
    // 0x183834: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x183834u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_183838:
    // 0x183838: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x183838u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_18383c:
    // 0x18383c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18383cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_183840:
    // 0x183840: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x183840u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_183844:
    // 0x183844: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x183844u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_183848:
    // 0x183848: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x183848u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18384c:
    // 0x18384c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18384cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_183850:
    // 0x183850: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x183850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_183854:
    // 0x183854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_183858:
    // 0x183858: 0x3e00008  jr          $ra
label_18385c:
    if (ctx->pc == 0x18385Cu) {
        ctx->pc = 0x18385Cu;
            // 0x18385c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x183860u;
        goto label_fallthrough_0x183858;
    }
    ctx->pc = 0x183858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18385Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183858u;
            // 0x18385c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x183858:
    ctx->pc = 0x183860u;
}
