#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Play__12CSceneCmrSeqFv
// Address: 0x259410 - 0x2599ac
void Play__12CSceneCmrSeqFv_0x259410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Play__12CSceneCmrSeqFv_0x259410");
#endif

    switch (ctx->pc) {
        case 0x259410u: goto label_259410;
        case 0x259414u: goto label_259414;
        case 0x259418u: goto label_259418;
        case 0x25941cu: goto label_25941c;
        case 0x259420u: goto label_259420;
        case 0x259424u: goto label_259424;
        case 0x259428u: goto label_259428;
        case 0x25942cu: goto label_25942c;
        case 0x259430u: goto label_259430;
        case 0x259434u: goto label_259434;
        case 0x259438u: goto label_259438;
        case 0x25943cu: goto label_25943c;
        case 0x259440u: goto label_259440;
        case 0x259444u: goto label_259444;
        case 0x259448u: goto label_259448;
        case 0x25944cu: goto label_25944c;
        case 0x259450u: goto label_259450;
        case 0x259454u: goto label_259454;
        case 0x259458u: goto label_259458;
        case 0x25945cu: goto label_25945c;
        case 0x259460u: goto label_259460;
        case 0x259464u: goto label_259464;
        case 0x259468u: goto label_259468;
        case 0x25946cu: goto label_25946c;
        case 0x259470u: goto label_259470;
        case 0x259474u: goto label_259474;
        case 0x259478u: goto label_259478;
        case 0x25947cu: goto label_25947c;
        case 0x259480u: goto label_259480;
        case 0x259484u: goto label_259484;
        case 0x259488u: goto label_259488;
        case 0x25948cu: goto label_25948c;
        case 0x259490u: goto label_259490;
        case 0x259494u: goto label_259494;
        case 0x259498u: goto label_259498;
        case 0x25949cu: goto label_25949c;
        case 0x2594a0u: goto label_2594a0;
        case 0x2594a4u: goto label_2594a4;
        case 0x2594a8u: goto label_2594a8;
        case 0x2594acu: goto label_2594ac;
        case 0x2594b0u: goto label_2594b0;
        case 0x2594b4u: goto label_2594b4;
        case 0x2594b8u: goto label_2594b8;
        case 0x2594bcu: goto label_2594bc;
        case 0x2594c0u: goto label_2594c0;
        case 0x2594c4u: goto label_2594c4;
        case 0x2594c8u: goto label_2594c8;
        case 0x2594ccu: goto label_2594cc;
        case 0x2594d0u: goto label_2594d0;
        case 0x2594d4u: goto label_2594d4;
        case 0x2594d8u: goto label_2594d8;
        case 0x2594dcu: goto label_2594dc;
        case 0x2594e0u: goto label_2594e0;
        case 0x2594e4u: goto label_2594e4;
        case 0x2594e8u: goto label_2594e8;
        case 0x2594ecu: goto label_2594ec;
        case 0x2594f0u: goto label_2594f0;
        case 0x2594f4u: goto label_2594f4;
        case 0x2594f8u: goto label_2594f8;
        case 0x2594fcu: goto label_2594fc;
        case 0x259500u: goto label_259500;
        case 0x259504u: goto label_259504;
        case 0x259508u: goto label_259508;
        case 0x25950cu: goto label_25950c;
        case 0x259510u: goto label_259510;
        case 0x259514u: goto label_259514;
        case 0x259518u: goto label_259518;
        case 0x25951cu: goto label_25951c;
        case 0x259520u: goto label_259520;
        case 0x259524u: goto label_259524;
        case 0x259528u: goto label_259528;
        case 0x25952cu: goto label_25952c;
        case 0x259530u: goto label_259530;
        case 0x259534u: goto label_259534;
        case 0x259538u: goto label_259538;
        case 0x25953cu: goto label_25953c;
        case 0x259540u: goto label_259540;
        case 0x259544u: goto label_259544;
        case 0x259548u: goto label_259548;
        case 0x25954cu: goto label_25954c;
        case 0x259550u: goto label_259550;
        case 0x259554u: goto label_259554;
        case 0x259558u: goto label_259558;
        case 0x25955cu: goto label_25955c;
        case 0x259560u: goto label_259560;
        case 0x259564u: goto label_259564;
        case 0x259568u: goto label_259568;
        case 0x25956cu: goto label_25956c;
        case 0x259570u: goto label_259570;
        case 0x259574u: goto label_259574;
        case 0x259578u: goto label_259578;
        case 0x25957cu: goto label_25957c;
        case 0x259580u: goto label_259580;
        case 0x259584u: goto label_259584;
        case 0x259588u: goto label_259588;
        case 0x25958cu: goto label_25958c;
        case 0x259590u: goto label_259590;
        case 0x259594u: goto label_259594;
        case 0x259598u: goto label_259598;
        case 0x25959cu: goto label_25959c;
        case 0x2595a0u: goto label_2595a0;
        case 0x2595a4u: goto label_2595a4;
        case 0x2595a8u: goto label_2595a8;
        case 0x2595acu: goto label_2595ac;
        case 0x2595b0u: goto label_2595b0;
        case 0x2595b4u: goto label_2595b4;
        case 0x2595b8u: goto label_2595b8;
        case 0x2595bcu: goto label_2595bc;
        case 0x2595c0u: goto label_2595c0;
        case 0x2595c4u: goto label_2595c4;
        case 0x2595c8u: goto label_2595c8;
        case 0x2595ccu: goto label_2595cc;
        case 0x2595d0u: goto label_2595d0;
        case 0x2595d4u: goto label_2595d4;
        case 0x2595d8u: goto label_2595d8;
        case 0x2595dcu: goto label_2595dc;
        case 0x2595e0u: goto label_2595e0;
        case 0x2595e4u: goto label_2595e4;
        case 0x2595e8u: goto label_2595e8;
        case 0x2595ecu: goto label_2595ec;
        case 0x2595f0u: goto label_2595f0;
        case 0x2595f4u: goto label_2595f4;
        case 0x2595f8u: goto label_2595f8;
        case 0x2595fcu: goto label_2595fc;
        case 0x259600u: goto label_259600;
        case 0x259604u: goto label_259604;
        case 0x259608u: goto label_259608;
        case 0x25960cu: goto label_25960c;
        case 0x259610u: goto label_259610;
        case 0x259614u: goto label_259614;
        case 0x259618u: goto label_259618;
        case 0x25961cu: goto label_25961c;
        case 0x259620u: goto label_259620;
        case 0x259624u: goto label_259624;
        case 0x259628u: goto label_259628;
        case 0x25962cu: goto label_25962c;
        case 0x259630u: goto label_259630;
        case 0x259634u: goto label_259634;
        case 0x259638u: goto label_259638;
        case 0x25963cu: goto label_25963c;
        case 0x259640u: goto label_259640;
        case 0x259644u: goto label_259644;
        case 0x259648u: goto label_259648;
        case 0x25964cu: goto label_25964c;
        case 0x259650u: goto label_259650;
        case 0x259654u: goto label_259654;
        case 0x259658u: goto label_259658;
        case 0x25965cu: goto label_25965c;
        case 0x259660u: goto label_259660;
        case 0x259664u: goto label_259664;
        case 0x259668u: goto label_259668;
        case 0x25966cu: goto label_25966c;
        case 0x259670u: goto label_259670;
        case 0x259674u: goto label_259674;
        case 0x259678u: goto label_259678;
        case 0x25967cu: goto label_25967c;
        case 0x259680u: goto label_259680;
        case 0x259684u: goto label_259684;
        case 0x259688u: goto label_259688;
        case 0x25968cu: goto label_25968c;
        case 0x259690u: goto label_259690;
        case 0x259694u: goto label_259694;
        case 0x259698u: goto label_259698;
        case 0x25969cu: goto label_25969c;
        case 0x2596a0u: goto label_2596a0;
        case 0x2596a4u: goto label_2596a4;
        case 0x2596a8u: goto label_2596a8;
        case 0x2596acu: goto label_2596ac;
        case 0x2596b0u: goto label_2596b0;
        case 0x2596b4u: goto label_2596b4;
        case 0x2596b8u: goto label_2596b8;
        case 0x2596bcu: goto label_2596bc;
        case 0x2596c0u: goto label_2596c0;
        case 0x2596c4u: goto label_2596c4;
        case 0x2596c8u: goto label_2596c8;
        case 0x2596ccu: goto label_2596cc;
        case 0x2596d0u: goto label_2596d0;
        case 0x2596d4u: goto label_2596d4;
        case 0x2596d8u: goto label_2596d8;
        case 0x2596dcu: goto label_2596dc;
        case 0x2596e0u: goto label_2596e0;
        case 0x2596e4u: goto label_2596e4;
        case 0x2596e8u: goto label_2596e8;
        case 0x2596ecu: goto label_2596ec;
        case 0x2596f0u: goto label_2596f0;
        case 0x2596f4u: goto label_2596f4;
        case 0x2596f8u: goto label_2596f8;
        case 0x2596fcu: goto label_2596fc;
        case 0x259700u: goto label_259700;
        case 0x259704u: goto label_259704;
        case 0x259708u: goto label_259708;
        case 0x25970cu: goto label_25970c;
        case 0x259710u: goto label_259710;
        case 0x259714u: goto label_259714;
        case 0x259718u: goto label_259718;
        case 0x25971cu: goto label_25971c;
        case 0x259720u: goto label_259720;
        case 0x259724u: goto label_259724;
        case 0x259728u: goto label_259728;
        case 0x25972cu: goto label_25972c;
        case 0x259730u: goto label_259730;
        case 0x259734u: goto label_259734;
        case 0x259738u: goto label_259738;
        case 0x25973cu: goto label_25973c;
        case 0x259740u: goto label_259740;
        case 0x259744u: goto label_259744;
        case 0x259748u: goto label_259748;
        case 0x25974cu: goto label_25974c;
        case 0x259750u: goto label_259750;
        case 0x259754u: goto label_259754;
        case 0x259758u: goto label_259758;
        case 0x25975cu: goto label_25975c;
        case 0x259760u: goto label_259760;
        case 0x259764u: goto label_259764;
        case 0x259768u: goto label_259768;
        case 0x25976cu: goto label_25976c;
        case 0x259770u: goto label_259770;
        case 0x259774u: goto label_259774;
        case 0x259778u: goto label_259778;
        case 0x25977cu: goto label_25977c;
        case 0x259780u: goto label_259780;
        case 0x259784u: goto label_259784;
        case 0x259788u: goto label_259788;
        case 0x25978cu: goto label_25978c;
        case 0x259790u: goto label_259790;
        case 0x259794u: goto label_259794;
        case 0x259798u: goto label_259798;
        case 0x25979cu: goto label_25979c;
        case 0x2597a0u: goto label_2597a0;
        case 0x2597a4u: goto label_2597a4;
        case 0x2597a8u: goto label_2597a8;
        case 0x2597acu: goto label_2597ac;
        case 0x2597b0u: goto label_2597b0;
        case 0x2597b4u: goto label_2597b4;
        case 0x2597b8u: goto label_2597b8;
        case 0x2597bcu: goto label_2597bc;
        case 0x2597c0u: goto label_2597c0;
        case 0x2597c4u: goto label_2597c4;
        case 0x2597c8u: goto label_2597c8;
        case 0x2597ccu: goto label_2597cc;
        case 0x2597d0u: goto label_2597d0;
        case 0x2597d4u: goto label_2597d4;
        case 0x2597d8u: goto label_2597d8;
        case 0x2597dcu: goto label_2597dc;
        case 0x2597e0u: goto label_2597e0;
        case 0x2597e4u: goto label_2597e4;
        case 0x2597e8u: goto label_2597e8;
        case 0x2597ecu: goto label_2597ec;
        case 0x2597f0u: goto label_2597f0;
        case 0x2597f4u: goto label_2597f4;
        case 0x2597f8u: goto label_2597f8;
        case 0x2597fcu: goto label_2597fc;
        case 0x259800u: goto label_259800;
        case 0x259804u: goto label_259804;
        case 0x259808u: goto label_259808;
        case 0x25980cu: goto label_25980c;
        case 0x259810u: goto label_259810;
        case 0x259814u: goto label_259814;
        case 0x259818u: goto label_259818;
        case 0x25981cu: goto label_25981c;
        case 0x259820u: goto label_259820;
        case 0x259824u: goto label_259824;
        case 0x259828u: goto label_259828;
        case 0x25982cu: goto label_25982c;
        case 0x259830u: goto label_259830;
        case 0x259834u: goto label_259834;
        case 0x259838u: goto label_259838;
        case 0x25983cu: goto label_25983c;
        case 0x259840u: goto label_259840;
        case 0x259844u: goto label_259844;
        case 0x259848u: goto label_259848;
        case 0x25984cu: goto label_25984c;
        case 0x259850u: goto label_259850;
        case 0x259854u: goto label_259854;
        case 0x259858u: goto label_259858;
        case 0x25985cu: goto label_25985c;
        case 0x259860u: goto label_259860;
        case 0x259864u: goto label_259864;
        case 0x259868u: goto label_259868;
        case 0x25986cu: goto label_25986c;
        case 0x259870u: goto label_259870;
        case 0x259874u: goto label_259874;
        case 0x259878u: goto label_259878;
        case 0x25987cu: goto label_25987c;
        case 0x259880u: goto label_259880;
        case 0x259884u: goto label_259884;
        case 0x259888u: goto label_259888;
        case 0x25988cu: goto label_25988c;
        case 0x259890u: goto label_259890;
        case 0x259894u: goto label_259894;
        case 0x259898u: goto label_259898;
        case 0x25989cu: goto label_25989c;
        case 0x2598a0u: goto label_2598a0;
        case 0x2598a4u: goto label_2598a4;
        case 0x2598a8u: goto label_2598a8;
        case 0x2598acu: goto label_2598ac;
        case 0x2598b0u: goto label_2598b0;
        case 0x2598b4u: goto label_2598b4;
        case 0x2598b8u: goto label_2598b8;
        case 0x2598bcu: goto label_2598bc;
        case 0x2598c0u: goto label_2598c0;
        case 0x2598c4u: goto label_2598c4;
        case 0x2598c8u: goto label_2598c8;
        case 0x2598ccu: goto label_2598cc;
        case 0x2598d0u: goto label_2598d0;
        case 0x2598d4u: goto label_2598d4;
        case 0x2598d8u: goto label_2598d8;
        case 0x2598dcu: goto label_2598dc;
        case 0x2598e0u: goto label_2598e0;
        case 0x2598e4u: goto label_2598e4;
        case 0x2598e8u: goto label_2598e8;
        case 0x2598ecu: goto label_2598ec;
        case 0x2598f0u: goto label_2598f0;
        case 0x2598f4u: goto label_2598f4;
        case 0x2598f8u: goto label_2598f8;
        case 0x2598fcu: goto label_2598fc;
        case 0x259900u: goto label_259900;
        case 0x259904u: goto label_259904;
        case 0x259908u: goto label_259908;
        case 0x25990cu: goto label_25990c;
        case 0x259910u: goto label_259910;
        case 0x259914u: goto label_259914;
        case 0x259918u: goto label_259918;
        case 0x25991cu: goto label_25991c;
        case 0x259920u: goto label_259920;
        case 0x259924u: goto label_259924;
        case 0x259928u: goto label_259928;
        case 0x25992cu: goto label_25992c;
        case 0x259930u: goto label_259930;
        case 0x259934u: goto label_259934;
        case 0x259938u: goto label_259938;
        case 0x25993cu: goto label_25993c;
        case 0x259940u: goto label_259940;
        case 0x259944u: goto label_259944;
        case 0x259948u: goto label_259948;
        case 0x25994cu: goto label_25994c;
        case 0x259950u: goto label_259950;
        case 0x259954u: goto label_259954;
        case 0x259958u: goto label_259958;
        case 0x25995cu: goto label_25995c;
        case 0x259960u: goto label_259960;
        case 0x259964u: goto label_259964;
        case 0x259968u: goto label_259968;
        case 0x25996cu: goto label_25996c;
        case 0x259970u: goto label_259970;
        case 0x259974u: goto label_259974;
        case 0x259978u: goto label_259978;
        case 0x25997cu: goto label_25997c;
        case 0x259980u: goto label_259980;
        case 0x259984u: goto label_259984;
        case 0x259988u: goto label_259988;
        case 0x25998cu: goto label_25998c;
        case 0x259990u: goto label_259990;
        case 0x259994u: goto label_259994;
        case 0x259998u: goto label_259998;
        case 0x25999cu: goto label_25999c;
        case 0x2599a0u: goto label_2599a0;
        case 0x2599a4u: goto label_2599a4;
        case 0x2599a8u: goto label_2599a8;
        default: break;
    }

    ctx->pc = 0x259410u;

label_259410:
    // 0x259410: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x259410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_259414:
    // 0x259414: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x259414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_259418:
    // 0x259418: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x259418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_25941c:
    // 0x25941c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x25941cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_259420:
    // 0x259420: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x259420u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_259424:
    // 0x259424: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x259424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_259428:
    // 0x259428: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x259428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_25942c:
    // 0x25942c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25942cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_259430:
    // 0x259430: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x259430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_259434:
    // 0x259434: 0xc0956c8  jal         func_255B20
label_259438:
    if (ctx->pc == 0x259438u) {
        ctx->pc = 0x259438u;
            // 0x259438: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x25943Cu;
        goto label_25943c;
    }
    ctx->pc = 0x259434u;
    SET_GPR_U32(ctx, 31, 0x25943Cu);
    ctx->pc = 0x259438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259434u;
            // 0x259438: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B20u;
    if (runtime->hasFunction(0x255B20u)) {
        auto targetFn = runtime->lookupFunction(0x255B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25943Cu; }
        if (ctx->pc != 0x25943Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCamera__Fv_0x255b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25943Cu; }
        if (ctx->pc != 0x25943Cu) { return; }
    }
    ctx->pc = 0x25943Cu;
label_25943c:
    // 0x25943c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25943cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_259440:
    // 0x259440: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_259444:
    if (ctx->pc == 0x259444u) {
        ctx->pc = 0x259444u;
            // 0x259444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259448u;
        goto label_259448;
    }
    ctx->pc = 0x259440u;
    {
        const bool branch_taken_0x259440 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x259444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259440u;
            // 0x259444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259440) {
            ctx->pc = 0x259458u;
            goto label_259458;
        }
    }
    ctx->pc = 0x259448u;
label_259448:
    // 0x259448: 0xc09648c  jal         func_259230
label_25944c:
    if (ctx->pc == 0x25944Cu) {
        ctx->pc = 0x25944Cu;
            // 0x25944c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259450u;
        goto label_259450;
    }
    ctx->pc = 0x259448u;
    SET_GPR_U32(ctx, 31, 0x259450u);
    ctx->pc = 0x25944Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259448u;
            // 0x25944c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259230u;
    if (runtime->hasFunction(0x259230u)) {
        auto targetFn = runtime->lookupFunction(0x259230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259450u; }
        if (ctx->pc != 0x259450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__12CSceneCmrSeqFv_0x259230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259450u; }
        if (ctx->pc != 0x259450u) { return; }
    }
    ctx->pc = 0x259450u;
label_259450:
    // 0x259450: 0x1000014d  b           . + 4 + (0x14D << 2)
label_259454:
    if (ctx->pc == 0x259454u) {
        ctx->pc = 0x259454u;
            // 0x259454: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x259458u;
        goto label_259458;
    }
    ctx->pc = 0x259450u;
    {
        const bool branch_taken_0x259450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259450u;
            // 0x259454: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259450) {
            ctx->pc = 0x259988u;
            goto label_259988;
        }
    }
    ctx->pc = 0x259458u;
label_259458:
    // 0x259458: 0xc04c574  jal         func_1315D0
label_25945c:
    if (ctx->pc == 0x25945Cu) {
        ctx->pc = 0x25945Cu;
            // 0x25945c: 0x26a50050  addiu       $a1, $s5, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
        ctx->pc = 0x259460u;
        goto label_259460;
    }
    ctx->pc = 0x259458u;
    SET_GPR_U32(ctx, 31, 0x259460u);
    ctx->pc = 0x25945Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259458u;
            // 0x25945c: 0x26a50050  addiu       $a1, $s5, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259460u; }
        if (ctx->pc != 0x259460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259460u; }
        if (ctx->pc != 0x259460u) { return; }
    }
    ctx->pc = 0x259460u;
label_259460:
    // 0x259460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x259460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_259464:
    // 0x259464: 0xc04c578  jal         func_1315E0
label_259468:
    if (ctx->pc == 0x259468u) {
        ctx->pc = 0x259468u;
            // 0x259468: 0x26a50060  addiu       $a1, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->pc = 0x25946Cu;
        goto label_25946c;
    }
    ctx->pc = 0x259464u;
    SET_GPR_U32(ctx, 31, 0x25946Cu);
    ctx->pc = 0x259468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259464u;
            // 0x259468: 0x26a50060  addiu       $a1, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315E0u;
    if (runtime->hasFunction(0x1315E0u)) {
        auto targetFn = runtime->lookupFunction(0x1315E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25946Cu; }
        if (ctx->pc != 0x25946Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRef__9mgCCameraFPf_0x1315e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25946Cu; }
        if (ctx->pc != 0x25946Cu) { return; }
    }
    ctx->pc = 0x25946Cu;
label_25946c:
    // 0x25946c: 0x8ea20180  lw          $v0, 0x180($s5)
    ctx->pc = 0x25946cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 384)));
label_259470:
    // 0x259470: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_259474:
    if (ctx->pc == 0x259474u) {
        ctx->pc = 0x259474u;
            // 0x259474: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x259478u;
        goto label_259478;
    }
    ctx->pc = 0x259470u;
    {
        const bool branch_taken_0x259470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259470u;
            // 0x259474: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259470) {
            ctx->pc = 0x259494u;
            goto label_259494;
        }
    }
    ctx->pc = 0x259478u;
label_259478:
    // 0x259478: 0x26a40050  addiu       $a0, $s5, 0x50
    ctx->pc = 0x259478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
label_25947c:
    // 0x25947c: 0xc041c5c  jal         func_107170
label_259480:
    if (ctx->pc == 0x259480u) {
        ctx->pc = 0x259480u;
            // 0x259480: 0x26a501a0  addiu       $a1, $s5, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 416));
        ctx->pc = 0x259484u;
        goto label_259484;
    }
    ctx->pc = 0x25947Cu;
    SET_GPR_U32(ctx, 31, 0x259484u);
    ctx->pc = 0x259480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25947Cu;
            // 0x259480: 0x26a501a0  addiu       $a1, $s5, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259484u; }
        if (ctx->pc != 0x259484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259484u; }
        if (ctx->pc != 0x259484u) { return; }
    }
    ctx->pc = 0x259484u;
label_259484:
    // 0x259484: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x259484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_259488:
    // 0x259488: 0xc041c5c  jal         func_107170
label_25948c:
    if (ctx->pc == 0x25948Cu) {
        ctx->pc = 0x25948Cu;
            // 0x25948c: 0x26a501b0  addiu       $a1, $s5, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 432));
        ctx->pc = 0x259490u;
        goto label_259490;
    }
    ctx->pc = 0x259488u;
    SET_GPR_U32(ctx, 31, 0x259490u);
    ctx->pc = 0x25948Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259488u;
            // 0x25948c: 0x26a501b0  addiu       $a1, $s5, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259490u; }
        if (ctx->pc != 0x259490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259490u; }
        if (ctx->pc != 0x259490u) { return; }
    }
    ctx->pc = 0x259490u;
label_259490:
    // 0x259490: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x259490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_259494:
    // 0x259494: 0x26a50060  addiu       $a1, $s5, 0x60
    ctx->pc = 0x259494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_259498:
    // 0x259498: 0xc041c3e  jal         func_1070F8
label_25949c:
    if (ctx->pc == 0x25949Cu) {
        ctx->pc = 0x25949Cu;
            // 0x25949c: 0x26a60050  addiu       $a2, $s5, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
        ctx->pc = 0x2594A0u;
        goto label_2594a0;
    }
    ctx->pc = 0x259498u;
    SET_GPR_U32(ctx, 31, 0x2594A0u);
    ctx->pc = 0x25949Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259498u;
            // 0x25949c: 0x26a60050  addiu       $a2, $s5, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2594A0u; }
        if (ctx->pc != 0x2594A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2594A0u; }
        if (ctx->pc != 0x2594A0u) { return; }
    }
    ctx->pc = 0x2594A0u;
label_2594a0:
    // 0x2594a0: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2594a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2594a4:
    // 0x2594a4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2594a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2594a8:
    // 0x2594a8: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2594a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2594ac:
    // 0x2594ac: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x2594acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_2594b0:
    // 0x2594b0: 0x27b00098  addiu       $s0, $sp, 0x98
    ctx->pc = 0x2594b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_2594b4:
    // 0x2594b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2594b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2594b8:
    // 0x2594b8: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x2594b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2594bc:
    // 0x2594bc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2594bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2594c0:
    // 0x2594c0: 0xc041be0  jal         func_106F80
label_2594c4:
    if (ctx->pc == 0x2594C4u) {
        ctx->pc = 0x2594C4u;
            // 0x2594c4: 0xafa0009c  sw          $zero, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
        ctx->pc = 0x2594C8u;
        goto label_2594c8;
    }
    ctx->pc = 0x2594C0u;
    SET_GPR_U32(ctx, 31, 0x2594C8u);
    ctx->pc = 0x2594C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2594C0u;
            // 0x2594c4: 0xafa0009c  sw          $zero, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2594C8u; }
        if (ctx->pc != 0x2594C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2594C8u; }
        if (ctx->pc != 0x2594C8u) { return; }
    }
    ctx->pc = 0x2594C8u;
label_2594c8:
    // 0x2594c8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2594c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2594cc:
    // 0x2594cc: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x2594ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2594d0:
    // 0x2594d0: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x2594d0u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
label_2594d4:
    // 0x2594d4: 0xc047c76  jal         func_11F1D8
label_2594d8:
    if (ctx->pc == 0x2594D8u) {
        ctx->pc = 0x2594D8u;
            // 0x2594d8: 0x46000b07  neg.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[1]);
        ctx->pc = 0x2594DCu;
        goto label_2594dc;
    }
    ctx->pc = 0x2594D4u;
    SET_GPR_U32(ctx, 31, 0x2594DCu);
    ctx->pc = 0x2594D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2594D4u;
            // 0x2594d8: 0x46000b07  neg.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2594DCu; }
        if (ctx->pc != 0x2594DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2594DCu; }
        if (ctx->pc != 0x2594DCu) { return; }
    }
    ctx->pc = 0x2594DCu;
label_2594dc:
    // 0x2594dc: 0xe6a00070  swc1        $f0, 0x70($s5)
    ctx->pc = 0x2594dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 112), bits); }
label_2594e0:
    // 0x2594e0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2594e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2594e4:
    // 0x2594e4: 0xc6a10054  lwc1        $f1, 0x54($s5)
    ctx->pc = 0x2594e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2594e8:
    // 0x2594e8: 0x26a50050  addiu       $a1, $s5, 0x50
    ctx->pc = 0x2594e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
label_2594ec:
    // 0x2594ec: 0xc6a00064  lwc1        $f0, 0x64($s5)
    ctx->pc = 0x2594ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2594f0:
    // 0x2594f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2594f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2594f4:
    // 0x2594f4: 0xc041c5c  jal         func_107170
label_2594f8:
    if (ctx->pc == 0x2594F8u) {
        ctx->pc = 0x2594F8u;
            // 0x2594f8: 0xe6a00074  swc1        $f0, 0x74($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 116), bits); }
        ctx->pc = 0x2594FCu;
        goto label_2594fc;
    }
    ctx->pc = 0x2594F4u;
    SET_GPR_U32(ctx, 31, 0x2594FCu);
    ctx->pc = 0x2594F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2594F4u;
            // 0x2594f8: 0xe6a00074  swc1        $f0, 0x74($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2594FCu; }
        if (ctx->pc != 0x2594FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2594FCu; }
        if (ctx->pc != 0x2594FCu) { return; }
    }
    ctx->pc = 0x2594FCu;
label_2594fc:
    // 0x2594fc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2594fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_259500:
    // 0x259500: 0x26a50060  addiu       $a1, $s5, 0x60
    ctx->pc = 0x259500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_259504:
    // 0x259504: 0xc041c5c  jal         func_107170
label_259508:
    if (ctx->pc == 0x259508u) {
        ctx->pc = 0x259508u;
            // 0x259508: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
        ctx->pc = 0x25950Cu;
        goto label_25950c;
    }
    ctx->pc = 0x259504u;
    SET_GPR_U32(ctx, 31, 0x25950Cu);
    ctx->pc = 0x259508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259504u;
            // 0x259508: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25950Cu; }
        if (ctx->pc != 0x25950Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25950Cu; }
        if (ctx->pc != 0x25950Cu) { return; }
    }
    ctx->pc = 0x25950Cu;
label_25950c:
    // 0x25950c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x25950cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_259510:
    // 0x259510: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x259510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_259514:
    // 0x259514: 0xc04c018  jal         func_130060
label_259518:
    if (ctx->pc == 0x259518u) {
        ctx->pc = 0x259518u;
            // 0x259518: 0xafa000b4  sw          $zero, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
        ctx->pc = 0x25951Cu;
        goto label_25951c;
    }
    ctx->pc = 0x259514u;
    SET_GPR_U32(ctx, 31, 0x25951Cu);
    ctx->pc = 0x259518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259514u;
            // 0x259518: 0xafa000b4  sw          $zero, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25951Cu; }
        if (ctx->pc != 0x25951Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25951Cu; }
        if (ctx->pc != 0x25951Cu) { return; }
    }
    ctx->pc = 0x25951Cu;
label_25951c:
    // 0x25951c: 0xe6a00078  swc1        $f0, 0x78($s5)
    ctx->pc = 0x25951cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 120), bits); }
label_259520:
    // 0x259520: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x259520u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_259524:
    // 0x259524: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x259524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_259528:
    // 0x259528: 0x1242001a  beq         $s2, $v0, . + 4 + (0x1A << 2)
label_25952c:
    if (ctx->pc == 0x25952Cu) {
        ctx->pc = 0x25952Cu;
            // 0x25952c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x259530u;
        goto label_259530;
    }
    ctx->pc = 0x259528u;
    {
        const bool branch_taken_0x259528 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x25952Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259528u;
            // 0x25952c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259528) {
            ctx->pc = 0x259594u;
            goto label_259594;
        }
    }
    ctx->pc = 0x259530u;
label_259530:
    // 0x259530: 0x12420014  beq         $s2, $v0, . + 4 + (0x14 << 2)
label_259534:
    if (ctx->pc == 0x259534u) {
        ctx->pc = 0x259534u;
            // 0x259534: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x259538u;
        goto label_259538;
    }
    ctx->pc = 0x259530u;
    {
        const bool branch_taken_0x259530 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x259534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259530u;
            // 0x259534: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259530) {
            ctx->pc = 0x259584u;
            goto label_259584;
        }
    }
    ctx->pc = 0x259538u;
label_259538:
    // 0x259538: 0x1242000e  beq         $s2, $v0, . + 4 + (0xE << 2)
label_25953c:
    if (ctx->pc == 0x25953Cu) {
        ctx->pc = 0x25953Cu;
            // 0x25953c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x259540u;
        goto label_259540;
    }
    ctx->pc = 0x259538u;
    {
        const bool branch_taken_0x259538 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x25953Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259538u;
            // 0x25953c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259538) {
            ctx->pc = 0x259574u;
            goto label_259574;
        }
    }
    ctx->pc = 0x259540u;
label_259540:
    // 0x259540: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
label_259544:
    if (ctx->pc == 0x259544u) {
        ctx->pc = 0x259548u;
        goto label_259548;
    }
    ctx->pc = 0x259540u;
    {
        const bool branch_taken_0x259540 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x259540) {
            ctx->pc = 0x259564u;
            goto label_259564;
        }
    }
    ctx->pc = 0x259548u;
label_259548:
    // 0x259548: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_25954c:
    if (ctx->pc == 0x25954Cu) {
        ctx->pc = 0x259550u;
        goto label_259550;
    }
    ctx->pc = 0x259548u;
    {
        const bool branch_taken_0x259548 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x259548) {
            ctx->pc = 0x259558u;
            goto label_259558;
        }
    }
    ctx->pc = 0x259550u;
label_259550:
    // 0x259550: 0x10000013  b           . + 4 + (0x13 << 2)
label_259554:
    if (ctx->pc == 0x259554u) {
        ctx->pc = 0x259558u;
        goto label_259558;
    }
    ctx->pc = 0x259550u;
    {
        const bool branch_taken_0x259550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259550) {
            ctx->pc = 0x2595A0u;
            goto label_2595a0;
        }
    }
    ctx->pc = 0x259558u;
label_259558:
    // 0x259558: 0x26b30008  addiu       $s3, $s5, 0x8
    ctx->pc = 0x259558u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_25955c:
    // 0x25955c: 0x10000010  b           . + 4 + (0x10 << 2)
label_259560:
    if (ctx->pc == 0x259560u) {
        ctx->pc = 0x259560u;
            // 0x259560: 0x26b4000c  addiu       $s4, $s5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
        ctx->pc = 0x259564u;
        goto label_259564;
    }
    ctx->pc = 0x25955Cu;
    {
        const bool branch_taken_0x25955c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25955Cu;
            // 0x259560: 0x26b4000c  addiu       $s4, $s5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25955c) {
            ctx->pc = 0x2595A0u;
            goto label_2595a0;
        }
    }
    ctx->pc = 0x259564u;
label_259564:
    // 0x259564: 0x0  nop
    ctx->pc = 0x259564u;
    // NOP
label_259568:
    // 0x259568: 0x26b30010  addiu       $s3, $s5, 0x10
    ctx->pc = 0x259568u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_25956c:
    // 0x25956c: 0x1000000c  b           . + 4 + (0xC << 2)
label_259570:
    if (ctx->pc == 0x259570u) {
        ctx->pc = 0x259570u;
            // 0x259570: 0x26b40014  addiu       $s4, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->pc = 0x259574u;
        goto label_259574;
    }
    ctx->pc = 0x25956Cu;
    {
        const bool branch_taken_0x25956c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25956Cu;
            // 0x259570: 0x26b40014  addiu       $s4, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25956c) {
            ctx->pc = 0x2595A0u;
            goto label_2595a0;
        }
    }
    ctx->pc = 0x259574u;
label_259574:
    // 0x259574: 0x0  nop
    ctx->pc = 0x259574u;
    // NOP
label_259578:
    // 0x259578: 0x26b30018  addiu       $s3, $s5, 0x18
    ctx->pc = 0x259578u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
label_25957c:
    // 0x25957c: 0x10000008  b           . + 4 + (0x8 << 2)
label_259580:
    if (ctx->pc == 0x259580u) {
        ctx->pc = 0x259580u;
            // 0x259580: 0x26b4001c  addiu       $s4, $s5, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
        ctx->pc = 0x259584u;
        goto label_259584;
    }
    ctx->pc = 0x25957Cu;
    {
        const bool branch_taken_0x25957c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25957Cu;
            // 0x259580: 0x26b4001c  addiu       $s4, $s5, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25957c) {
            ctx->pc = 0x2595A0u;
            goto label_2595a0;
        }
    }
    ctx->pc = 0x259584u;
label_259584:
    // 0x259584: 0x0  nop
    ctx->pc = 0x259584u;
    // NOP
label_259588:
    // 0x259588: 0x26b30020  addiu       $s3, $s5, 0x20
    ctx->pc = 0x259588u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_25958c:
    // 0x25958c: 0x10000004  b           . + 4 + (0x4 << 2)
label_259590:
    if (ctx->pc == 0x259590u) {
        ctx->pc = 0x259590u;
            // 0x259590: 0x26b40024  addiu       $s4, $s5, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
        ctx->pc = 0x259594u;
        goto label_259594;
    }
    ctx->pc = 0x25958Cu;
    {
        const bool branch_taken_0x25958c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25958Cu;
            // 0x259590: 0x26b40024  addiu       $s4, $s5, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25958c) {
            ctx->pc = 0x2595A0u;
            goto label_2595a0;
        }
    }
    ctx->pc = 0x259594u;
label_259594:
    // 0x259594: 0x0  nop
    ctx->pc = 0x259594u;
    // NOP
label_259598:
    // 0x259598: 0x26b30028  addiu       $s3, $s5, 0x28
    ctx->pc = 0x259598u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
label_25959c:
    // 0x25959c: 0x26b4002c  addiu       $s4, $s5, 0x2C
    ctx->pc = 0x25959cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 44));
label_2595a0:
    // 0x2595a0: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2595a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2595a4:
    // 0x2595a4: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
label_2595a8:
    if (ctx->pc == 0x2595A8u) {
        ctx->pc = 0x2595ACu;
        goto label_2595ac;
    }
    ctx->pc = 0x2595A4u;
    {
        const bool branch_taken_0x2595a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2595a4) {
            ctx->pc = 0x25964Cu;
            goto label_25964c;
        }
    }
    ctx->pc = 0x2595ACu;
label_2595ac:
    // 0x2595ac: 0x0  nop
    ctx->pc = 0x2595acu;
    // NOP
label_2595b0:
    // 0x2595b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2595b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2595b4:
    // 0x2595b4: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
label_2595b8:
    if (ctx->pc == 0x2595B8u) {
        ctx->pc = 0x2595B8u;
            // 0x2595b8: 0x28410024  slti        $at, $v0, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)36) ? 1 : 0);
        ctx->pc = 0x2595BCu;
        goto label_2595bc;
    }
    ctx->pc = 0x2595B4u;
    {
        const bool branch_taken_0x2595b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2595B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2595B4u;
            // 0x2595b8: 0x28410024  slti        $at, $v0, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)36) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2595b4) {
            ctx->pc = 0x259628u;
            goto label_259628;
        }
    }
    ctx->pc = 0x2595BCu;
label_2595bc:
    // 0x2595bc: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
label_2595c0:
    if (ctx->pc == 0x2595C0u) {
        ctx->pc = 0x2595C0u;
            // 0x2595c0: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x2595C4u;
        goto label_2595c4;
    }
    ctx->pc = 0x2595BCu;
    {
        const bool branch_taken_0x2595bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2595C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2595BCu;
            // 0x2595c0: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2595bc) {
            ctx->pc = 0x259628u;
            goto label_259628;
        }
    }
    ctx->pc = 0x2595C4u;
label_2595c4:
    // 0x2595c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2595c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2595c8:
    // 0x2595c8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2595c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2595cc:
    // 0x2595cc: 0x24421a90  addiu       $v0, $v0, 0x1A90
    ctx->pc = 0x2595ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6800));
label_2595d0:
    // 0x2595d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2595d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2595d4:
    // 0x2595d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2595d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2595d8:
    // 0x2595d8: 0x40f809  jalr        $v0
label_2595dc:
    if (ctx->pc == 0x2595DCu) {
        ctx->pc = 0x2595DCu;
            // 0x2595dc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2595E0u;
        goto label_2595e0;
    }
    ctx->pc = 0x2595D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2595E0u);
        ctx->pc = 0x2595DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2595D8u;
            // 0x2595dc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2595E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2595E0u; }
            if (ctx->pc != 0x2595E0u) { return; }
        }
        }
    }
    ctx->pc = 0x2595E0u;
label_2595e0:
    // 0x2595e0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2595e4:
    if (ctx->pc == 0x2595E4u) {
        ctx->pc = 0x2595E4u;
            // 0x2595e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2595E8u;
        goto label_2595e8;
    }
    ctx->pc = 0x2595E0u;
    {
        const bool branch_taken_0x2595e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2595E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2595E0u;
            // 0x2595e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2595e0) {
            ctx->pc = 0x259630u;
            goto label_259630;
        }
    }
    ctx->pc = 0x2595E8u;
label_2595e8:
    // 0x2595e8: 0x10440018  beq         $v0, $a0, . + 4 + (0x18 << 2)
label_2595ec:
    if (ctx->pc == 0x2595ECu) {
        ctx->pc = 0x2595ECu;
            // 0x2595ec: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2595F0u;
        goto label_2595f0;
    }
    ctx->pc = 0x2595E8u;
    {
        const bool branch_taken_0x2595e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2595ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2595E8u;
            // 0x2595ec: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2595e8) {
            ctx->pc = 0x25964Cu;
            goto label_25964c;
        }
    }
    ctx->pc = 0x2595F0u;
label_2595f0:
    // 0x2595f0: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_2595f4:
    if (ctx->pc == 0x2595F4u) {
        ctx->pc = 0x2595F8u;
        goto label_2595f8;
    }
    ctx->pc = 0x2595F0u;
    {
        const bool branch_taken_0x2595f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2595f0) {
            ctx->pc = 0x259630u;
            goto label_259630;
        }
    }
    ctx->pc = 0x2595F8u;
label_2595f8:
    // 0x2595f8: 0x1243000d  beq         $s2, $v1, . + 4 + (0xD << 2)
label_2595fc:
    if (ctx->pc == 0x2595FCu) {
        ctx->pc = 0x259600u;
        goto label_259600;
    }
    ctx->pc = 0x2595F8u;
    {
        const bool branch_taken_0x2595f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x2595f8) {
            ctx->pc = 0x259630u;
            goto label_259630;
        }
    }
    ctx->pc = 0x259600u;
label_259600:
    // 0x259600: 0x12440007  beq         $s2, $a0, . + 4 + (0x7 << 2)
label_259604:
    if (ctx->pc == 0x259604u) {
        ctx->pc = 0x259608u;
        goto label_259608;
    }
    ctx->pc = 0x259600u;
    {
        const bool branch_taken_0x259600 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        if (branch_taken_0x259600) {
            ctx->pc = 0x259620u;
            goto label_259620;
        }
    }
    ctx->pc = 0x259608u;
label_259608:
    // 0x259608: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_25960c:
    if (ctx->pc == 0x25960Cu) {
        ctx->pc = 0x259610u;
        goto label_259610;
    }
    ctx->pc = 0x259608u;
    {
        const bool branch_taken_0x259608 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x259608) {
            ctx->pc = 0x259618u;
            goto label_259618;
        }
    }
    ctx->pc = 0x259610u;
label_259610:
    // 0x259610: 0x10000007  b           . + 4 + (0x7 << 2)
label_259614:
    if (ctx->pc == 0x259614u) {
        ctx->pc = 0x259618u;
        goto label_259618;
    }
    ctx->pc = 0x259610u;
    {
        const bool branch_taken_0x259610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259610) {
            ctx->pc = 0x259630u;
            goto label_259630;
        }
    }
    ctx->pc = 0x259618u;
label_259618:
    // 0x259618: 0x10000005  b           . + 4 + (0x5 << 2)
label_25961c:
    if (ctx->pc == 0x25961Cu) {
        ctx->pc = 0x25961Cu;
            // 0x25961c: 0x8eb00030  lw          $s0, 0x30($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
        ctx->pc = 0x259620u;
        goto label_259620;
    }
    ctx->pc = 0x259618u;
    {
        const bool branch_taken_0x259618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25961Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259618u;
            // 0x25961c: 0x8eb00030  lw          $s0, 0x30($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259618) {
            ctx->pc = 0x259630u;
            goto label_259630;
        }
    }
    ctx->pc = 0x259620u;
label_259620:
    // 0x259620: 0x10000003  b           . + 4 + (0x3 << 2)
label_259624:
    if (ctx->pc == 0x259624u) {
        ctx->pc = 0x259624u;
            // 0x259624: 0x8eb00034  lw          $s0, 0x34($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
        ctx->pc = 0x259628u;
        goto label_259628;
    }
    ctx->pc = 0x259620u;
    {
        const bool branch_taken_0x259620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259620u;
            // 0x259624: 0x8eb00034  lw          $s0, 0x34($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259620) {
            ctx->pc = 0x259630u;
            goto label_259630;
        }
    }
    ctx->pc = 0x259628u;
label_259628:
    // 0x259628: 0x10000008  b           . + 4 + (0x8 << 2)
label_25962c:
    if (ctx->pc == 0x25962Cu) {
        ctx->pc = 0x25962Cu;
            // 0x25962c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259630u;
        goto label_259630;
    }
    ctx->pc = 0x259628u;
    {
        const bool branch_taken_0x259628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25962Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259628u;
            // 0x25962c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259628) {
            ctx->pc = 0x25964Cu;
            goto label_25964c;
        }
    }
    ctx->pc = 0x259630u;
label_259630:
    // 0x259630: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x259630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_259634:
    // 0x259634: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x259634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_259638:
    // 0x259638: 0xc0966f8  jal         func_259BE0
label_25963c:
    if (ctx->pc == 0x25963Cu) {
        ctx->pc = 0x25963Cu;
            // 0x25963c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259640u;
        goto label_259640;
    }
    ctx->pc = 0x259638u;
    SET_GPR_U32(ctx, 31, 0x259640u);
    ctx->pc = 0x25963Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259638u;
            // 0x25963c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259BE0u;
    if (runtime->hasFunction(0x259BE0u)) {
        auto targetFn = runtime->lookupFunction(0x259BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259640u; }
        if (ctx->pc != 0x259640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNextSeq__12CSceneCmrSeqFP12_SEN_CMR_SEQi_0x259be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259640u; }
        if (ctx->pc != 0x259640u) { return; }
    }
    ctx->pc = 0x259640u;
label_259640:
    // 0x259640: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x259640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_259644:
    // 0x259644: 0x1600ffd9  bnez        $s0, . + 4 + (-0x27 << 2)
label_259648:
    if (ctx->pc == 0x259648u) {
        ctx->pc = 0x25964Cu;
        goto label_25964c;
    }
    ctx->pc = 0x259644u;
    {
        const bool branch_taken_0x259644 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x259644) {
            ctx->pc = 0x2595ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2595ac;
        }
    }
    ctx->pc = 0x25964Cu;
label_25964c:
    // 0x25964c: 0x0  nop
    ctx->pc = 0x25964cu;
    // NOP
label_259650:
    // 0x259650: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
label_259654:
    if (ctx->pc == 0x259654u) {
        ctx->pc = 0x259654u;
            // 0x259654: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->pc = 0x259658u;
        goto label_259658;
    }
    ctx->pc = 0x259650u;
    {
        const bool branch_taken_0x259650 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x259654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259650u;
            // 0x259654: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259650) {
            ctx->pc = 0x25965Cu;
            goto label_25965c;
        }
    }
    ctx->pc = 0x259658u;
label_259658:
    // 0x259658: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x259658u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_25965c:
    // 0x25965c: 0x0  nop
    ctx->pc = 0x25965cu;
    // NOP
label_259660:
    // 0x259660: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x259660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_259664:
    // 0x259664: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x259664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
label_259668:
    // 0x259668: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
label_25966c:
    if (ctx->pc == 0x25966Cu) {
        ctx->pc = 0x25966Cu;
            // 0x25966c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x259670u;
        goto label_259670;
    }
    ctx->pc = 0x259668u;
    {
        const bool branch_taken_0x259668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25966Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259668u;
            // 0x25966c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259668) {
            ctx->pc = 0x259528u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_259528;
        }
    }
    ctx->pc = 0x259670u;
label_259670:
    // 0x259670: 0x8ea2007c  lw          $v0, 0x7C($s5)
    ctx->pc = 0x259670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
label_259674:
    // 0x259674: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
label_259678:
    if (ctx->pc == 0x259678u) {
        ctx->pc = 0x259678u;
            // 0x259678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25967Cu;
        goto label_25967c;
    }
    ctx->pc = 0x259674u;
    {
        const bool branch_taken_0x259674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259674u;
            // 0x259678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259674) {
            ctx->pc = 0x259970u;
            goto label_259970;
        }
    }
    ctx->pc = 0x25967Cu;
label_25967c:
    // 0x25967c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x25967cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_259680:
    // 0x259680: 0x26a400ac  addiu       $a0, $s5, 0xAC
    ctx->pc = 0x259680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 172));
label_259684:
    // 0x259684: 0xc04a38a  jal         func_128E28
label_259688:
    if (ctx->pc == 0x259688u) {
        ctx->pc = 0x259688u;
            // 0x259688: 0x24a5c428  addiu       $a1, $a1, -0x3BD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951976));
        ctx->pc = 0x25968Cu;
        goto label_25968c;
    }
    ctx->pc = 0x259684u;
    SET_GPR_U32(ctx, 31, 0x25968Cu);
    ctx->pc = 0x259688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259684u;
            // 0x259688: 0x24a5c428  addiu       $a1, $a1, -0x3BD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25968Cu; }
        if (ctx->pc != 0x25968Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25968Cu; }
        if (ctx->pc != 0x25968Cu) { return; }
    }
    ctx->pc = 0x25968Cu;
label_25968c:
    // 0x25968c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_259690:
    if (ctx->pc == 0x259690u) {
        ctx->pc = 0x259694u;
        goto label_259694;
    }
    ctx->pc = 0x25968Cu;
    {
        const bool branch_taken_0x25968c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25968c) {
            ctx->pc = 0x2596E0u;
            goto label_2596e0;
        }
    }
    ctx->pc = 0x259694u;
label_259694:
    // 0x259694: 0x8ea50080  lw          $a1, 0x80($s5)
    ctx->pc = 0x259694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_259698:
    // 0x259698: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x259698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_25969c:
    // 0x25969c: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x25969cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_2596a0:
    // 0x2596a0: 0xc097b14  jal         func_25EC50
label_2596a4:
    if (ctx->pc == 0x2596A4u) {
        ctx->pc = 0x2596A4u;
            // 0x2596a4: 0x26a600ac  addiu       $a2, $s5, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 172));
        ctx->pc = 0x2596A8u;
        goto label_2596a8;
    }
    ctx->pc = 0x2596A0u;
    SET_GPR_U32(ctx, 31, 0x2596A8u);
    ctx->pc = 0x2596A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2596A0u;
            // 0x2596a4: 0x26a600ac  addiu       $a2, $s5, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EC50u;
    if (runtime->hasFunction(0x25EC50u)) {
        auto targetFn = runtime->lookupFunction(0x25EC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2596A8u; }
        if (ctx->pc != 0x2596A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__10CEohMotherFiPc_0x25ec50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2596A8u; }
        if (ctx->pc != 0x2596A8u) { return; }
    }
    ctx->pc = 0x2596A8u;
label_2596a8:
    // 0x2596a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2596ac:
    if (ctx->pc == 0x2596ACu) {
        ctx->pc = 0x2596ACu;
            // 0x2596ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2596B0u;
        goto label_2596b0;
    }
    ctx->pc = 0x2596A8u;
    {
        const bool branch_taken_0x2596a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2596ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2596A8u;
            // 0x2596ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2596a8) {
            ctx->pc = 0x2596C0u;
            goto label_2596c0;
        }
    }
    ctx->pc = 0x2596B0u;
label_2596b0:
    // 0x2596b0: 0xc04de0c  jal         func_137830
label_2596b4:
    if (ctx->pc == 0x2596B4u) {
        ctx->pc = 0x2596B4u;
            // 0x2596b4: 0x26a50060  addiu       $a1, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->pc = 0x2596B8u;
        goto label_2596b8;
    }
    ctx->pc = 0x2596B0u;
    SET_GPR_U32(ctx, 31, 0x2596B8u);
    ctx->pc = 0x2596B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2596B0u;
            // 0x2596b4: 0x26a50060  addiu       $a1, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2596B8u; }
        if (ctx->pc != 0x2596B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2596B8u; }
        if (ctx->pc != 0x2596B8u) { return; }
    }
    ctx->pc = 0x2596B8u;
label_2596b8:
    // 0x2596b8: 0x1000000f  b           . + 4 + (0xF << 2)
label_2596bc:
    if (ctx->pc == 0x2596BCu) {
        ctx->pc = 0x2596BCu;
            // 0x2596bc: 0x26a40060  addiu       $a0, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->pc = 0x2596C0u;
        goto label_2596c0;
    }
    ctx->pc = 0x2596B8u;
    {
        const bool branch_taken_0x2596b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2596BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2596B8u;
            // 0x2596bc: 0x26a40060  addiu       $a0, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2596b8) {
            ctx->pc = 0x2596F8u;
            goto label_2596f8;
        }
    }
    ctx->pc = 0x2596C0u;
label_2596c0:
    // 0x2596c0: 0x8ea50080  lw          $a1, 0x80($s5)
    ctx->pc = 0x2596c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_2596c4:
    // 0x2596c4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2596c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_2596c8:
    // 0x2596c8: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x2596c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_2596cc:
    // 0x2596cc: 0xc097808  jal         func_25E020
label_2596d0:
    if (ctx->pc == 0x2596D0u) {
        ctx->pc = 0x2596D0u;
            // 0x2596d0: 0x26a60060  addiu       $a2, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->pc = 0x2596D4u;
        goto label_2596d4;
    }
    ctx->pc = 0x2596CCu;
    SET_GPR_U32(ctx, 31, 0x2596D4u);
    ctx->pc = 0x2596D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2596CCu;
            // 0x2596d0: 0x26a60060  addiu       $a2, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E020u;
    if (runtime->hasFunction(0x25E020u)) {
        auto targetFn = runtime->lookupFunction(0x25E020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2596D4u; }
        if (ctx->pc != 0x2596D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__10CEohMotherFiPf_0x25e020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2596D4u; }
        if (ctx->pc != 0x2596D4u) { return; }
    }
    ctx->pc = 0x2596D4u;
label_2596d4:
    // 0x2596d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2596d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2596d8:
    // 0x2596d8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2596dc:
    if (ctx->pc == 0x2596DCu) {
        ctx->pc = 0x2596DCu;
            // 0x2596dc: 0xaea20084  sw          $v0, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x2596E0u;
        goto label_2596e0;
    }
    ctx->pc = 0x2596D8u;
    {
        const bool branch_taken_0x2596d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2596DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2596D8u;
            // 0x2596dc: 0xaea20084  sw          $v0, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2596d8) {
            ctx->pc = 0x2596F4u;
            goto label_2596f4;
        }
    }
    ctx->pc = 0x2596E0u;
label_2596e0:
    // 0x2596e0: 0x8ea50080  lw          $a1, 0x80($s5)
    ctx->pc = 0x2596e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_2596e4:
    // 0x2596e4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2596e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_2596e8:
    // 0x2596e8: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x2596e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_2596ec:
    // 0x2596ec: 0xc097808  jal         func_25E020
label_2596f0:
    if (ctx->pc == 0x2596F0u) {
        ctx->pc = 0x2596F0u;
            // 0x2596f0: 0x26a60060  addiu       $a2, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->pc = 0x2596F4u;
        goto label_2596f4;
    }
    ctx->pc = 0x2596ECu;
    SET_GPR_U32(ctx, 31, 0x2596F4u);
    ctx->pc = 0x2596F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2596ECu;
            // 0x2596f0: 0x26a60060  addiu       $a2, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E020u;
    if (runtime->hasFunction(0x25E020u)) {
        auto targetFn = runtime->lookupFunction(0x25E020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2596F4u; }
        if (ctx->pc != 0x2596F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__10CEohMotherFiPf_0x25e020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2596F4u; }
        if (ctx->pc != 0x2596F4u) { return; }
    }
    ctx->pc = 0x2596F4u;
label_2596f4:
    // 0x2596f4: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x2596f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_2596f8:
    // 0x2596f8: 0x26a60090  addiu       $a2, $s5, 0x90
    ctx->pc = 0x2596f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
label_2596fc:
    // 0x2596fc: 0xc041c38  jal         func_1070E0
label_259700:
    if (ctx->pc == 0x259700u) {
        ctx->pc = 0x259700u;
            // 0x259700: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259704u;
        goto label_259704;
    }
    ctx->pc = 0x2596FCu;
    SET_GPR_U32(ctx, 31, 0x259704u);
    ctx->pc = 0x259700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2596FCu;
            // 0x259700: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259704u; }
        if (ctx->pc != 0x259704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259704u; }
        if (ctx->pc != 0x259704u) { return; }
    }
    ctx->pc = 0x259704u;
label_259704:
    // 0x259704: 0x8ea30084  lw          $v1, 0x84($s5)
    ctx->pc = 0x259704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_259708:
    // 0x259708: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x259708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25970c:
    // 0x25970c: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
label_259710:
    if (ctx->pc == 0x259710u) {
        ctx->pc = 0x259710u;
            // 0x259710: 0xc6b400a0  lwc1        $f20, 0xA0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x259714u;
        goto label_259714;
    }
    ctx->pc = 0x25970Cu;
    {
        const bool branch_taken_0x25970c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x259710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25970Cu;
            // 0x259710: 0xc6b400a0  lwc1        $f20, 0xA0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25970c) {
            ctx->pc = 0x2597FCu;
            goto label_2597fc;
        }
    }
    ctx->pc = 0x259714u;
label_259714:
    // 0x259714: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_259718:
    if (ctx->pc == 0x259718u) {
        ctx->pc = 0x259718u;
            // 0x259718: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x25971Cu;
        goto label_25971c;
    }
    ctx->pc = 0x259714u;
    {
        const bool branch_taken_0x259714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259714u;
            // 0x259718: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259714) {
            ctx->pc = 0x2597B0u;
            goto label_2597b0;
        }
    }
    ctx->pc = 0x25971Cu;
label_25971c:
    // 0x25971c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25971cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_259720:
    // 0x259720: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_259724:
    if (ctx->pc == 0x259724u) {
        ctx->pc = 0x259728u;
        goto label_259728;
    }
    ctx->pc = 0x259720u;
    {
        const bool branch_taken_0x259720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x259720) {
            ctx->pc = 0x259730u;
            goto label_259730;
        }
    }
    ctx->pc = 0x259728u;
label_259728:
    // 0x259728: 0x10000020  b           . + 4 + (0x20 << 2)
label_25972c:
    if (ctx->pc == 0x25972Cu) {
        ctx->pc = 0x259730u;
        goto label_259730;
    }
    ctx->pc = 0x259728u;
    {
        const bool branch_taken_0x259728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259728) {
            ctx->pc = 0x2597ACu;
            goto label_2597ac;
        }
    }
    ctx->pc = 0x259730u;
label_259730:
    // 0x259730: 0x8ea50080  lw          $a1, 0x80($s5)
    ctx->pc = 0x259730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_259734:
    // 0x259734: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x259734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_259738:
    // 0x259738: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x259738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_25973c:
    // 0x25973c: 0xc097870  jal         func_25E1C0
label_259740:
    if (ctx->pc == 0x259740u) {
        ctx->pc = 0x259740u;
            // 0x259740: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x259744u;
        goto label_259744;
    }
    ctx->pc = 0x25973Cu;
    SET_GPR_U32(ctx, 31, 0x259744u);
    ctx->pc = 0x259740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25973Cu;
            // 0x259740: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E1C0u;
    if (runtime->hasFunction(0x25E1C0u)) {
        auto targetFn = runtime->lookupFunction(0x25E1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259744u; }
        if (ctx->pc != 0x259744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRot__10CEohMotherFiPf_0x25e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259744u; }
        if (ctx->pc != 0x259744u) { return; }
    }
    ctx->pc = 0x259744u;
label_259744:
    // 0x259744: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x259744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259748:
    // 0x259748: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x259748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_25974c:
    // 0x25974c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25974cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_259750:
    // 0x259750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x259750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_259754:
    // 0x259754: 0x0  nop
    ctx->pc = 0x259754u;
    // NOP
label_259758:
    // 0x259758: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x259758u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_25975c:
    // 0x25975c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x25975cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_259760:
    // 0x259760: 0x0  nop
    ctx->pc = 0x259760u;
    // NOP
label_259764:
    // 0x259764: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_259768:
    if (ctx->pc == 0x259768u) {
        ctx->pc = 0x259768u;
            // 0x259768: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->pc = 0x25976Cu;
        goto label_25976c;
    }
    ctx->pc = 0x259764u;
    {
        const bool branch_taken_0x259764 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x259768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259764u;
            // 0x259768: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259764) {
            ctx->pc = 0x259780u;
            goto label_259780;
        }
    }
    ctx->pc = 0x25976Cu;
label_25976c:
    // 0x25976c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x25976cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_259770:
    // 0x259770: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x259770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_259774:
    // 0x259774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x259774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_259778:
    // 0x259778: 0x1000000c  b           . + 4 + (0xC << 2)
label_25977c:
    if (ctx->pc == 0x25977Cu) {
        ctx->pc = 0x25977Cu;
            // 0x25977c: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x259780u;
        goto label_259780;
    }
    ctx->pc = 0x259778u;
    {
        const bool branch_taken_0x259778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25977Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259778u;
            // 0x25977c: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259778) {
            ctx->pc = 0x2597ACu;
            goto label_2597ac;
        }
    }
    ctx->pc = 0x259780u;
label_259780:
    // 0x259780: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x259780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_259784:
    // 0x259784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x259784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_259788:
    // 0x259788: 0x0  nop
    ctx->pc = 0x259788u;
    // NOP
label_25978c:
    // 0x25978c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x25978cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_259790:
    // 0x259790: 0x0  nop
    ctx->pc = 0x259790u;
    // NOP
label_259794:
    // 0x259794: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_259798:
    if (ctx->pc == 0x259798u) {
        ctx->pc = 0x259798u;
            // 0x259798: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->pc = 0x25979Cu;
        goto label_25979c;
    }
    ctx->pc = 0x259794u;
    {
        const bool branch_taken_0x259794 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x259798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259794u;
            // 0x259798: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259794) {
            ctx->pc = 0x2597ACu;
            goto label_2597ac;
        }
    }
    ctx->pc = 0x25979Cu;
label_25979c:
    // 0x25979c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25979cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2597a0:
    // 0x2597a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2597a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2597a4:
    // 0x2597a4: 0x0  nop
    ctx->pc = 0x2597a4u;
    // NOP
label_2597a8:
    // 0x2597a8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2597a8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2597ac:
    // 0x2597ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2597acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2597b0:
    // 0x2597b0: 0xc047a42  jal         func_11E908
label_2597b4:
    if (ctx->pc == 0x2597B4u) {
        ctx->pc = 0x2597B8u;
        goto label_2597b8;
    }
    ctx->pc = 0x2597B0u;
    SET_GPR_U32(ctx, 31, 0x2597B8u);
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2597B8u; }
        if (ctx->pc != 0x2597B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2597B8u; }
        if (ctx->pc != 0x2597B8u) { return; }
    }
    ctx->pc = 0x2597B8u;
label_2597b8:
    // 0x2597b8: 0xc6a200a8  lwc1        $f2, 0xA8($s5)
    ctx->pc = 0x2597b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2597bc:
    // 0x2597bc: 0xc6a10060  lwc1        $f1, 0x60($s5)
    ctx->pc = 0x2597bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2597c0:
    // 0x2597c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2597c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2597c4:
    // 0x2597c4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2597c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2597c8:
    // 0x2597c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2597c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2597cc:
    // 0x2597cc: 0xe6a00050  swc1        $f0, 0x50($s5)
    ctx->pc = 0x2597ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 80), bits); }
label_2597d0:
    // 0x2597d0: 0xc6a100a4  lwc1        $f1, 0xA4($s5)
    ctx->pc = 0x2597d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2597d4:
    // 0x2597d4: 0xc6a00064  lwc1        $f0, 0x64($s5)
    ctx->pc = 0x2597d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2597d8:
    // 0x2597d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2597d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2597dc:
    // 0x2597dc: 0xc047964  jal         func_11E590
label_2597e0:
    if (ctx->pc == 0x2597E0u) {
        ctx->pc = 0x2597E0u;
            // 0x2597e0: 0xe6a00054  swc1        $f0, 0x54($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 84), bits); }
        ctx->pc = 0x2597E4u;
        goto label_2597e4;
    }
    ctx->pc = 0x2597DCu;
    SET_GPR_U32(ctx, 31, 0x2597E4u);
    ctx->pc = 0x2597E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2597DCu;
            // 0x2597e0: 0xe6a00054  swc1        $f0, 0x54($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 84), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2597E4u; }
        if (ctx->pc != 0x2597E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2597E4u; }
        if (ctx->pc != 0x2597E4u) { return; }
    }
    ctx->pc = 0x2597E4u;
label_2597e4:
    // 0x2597e4: 0xc6a200a8  lwc1        $f2, 0xA8($s5)
    ctx->pc = 0x2597e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2597e8:
    // 0x2597e8: 0xc6a10068  lwc1        $f1, 0x68($s5)
    ctx->pc = 0x2597e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2597ec:
    // 0x2597ec: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2597ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2597f0:
    // 0x2597f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2597f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2597f4:
    // 0x2597f4: 0x1000005d  b           . + 4 + (0x5D << 2)
label_2597f8:
    if (ctx->pc == 0x2597F8u) {
        ctx->pc = 0x2597F8u;
            // 0x2597f8: 0xe6a00058  swc1        $f0, 0x58($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 88), bits); }
        ctx->pc = 0x2597FCu;
        goto label_2597fc;
    }
    ctx->pc = 0x2597F4u;
    {
        const bool branch_taken_0x2597f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2597F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2597F4u;
            // 0x2597f8: 0xe6a00058  swc1        $f0, 0x58($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597f4) {
            ctx->pc = 0x25996Cu;
            goto label_25996c;
        }
    }
    ctx->pc = 0x2597FCu;
label_2597fc:
    // 0x2597fc: 0x8ea50080  lw          $a1, 0x80($s5)
    ctx->pc = 0x2597fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_259800:
    // 0x259800: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x259800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_259804:
    // 0x259804: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x259804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_259808:
    // 0x259808: 0xc097870  jal         func_25E1C0
label_25980c:
    if (ctx->pc == 0x25980Cu) {
        ctx->pc = 0x25980Cu;
            // 0x25980c: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x259810u;
        goto label_259810;
    }
    ctx->pc = 0x259808u;
    SET_GPR_U32(ctx, 31, 0x259810u);
    ctx->pc = 0x25980Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259808u;
            // 0x25980c: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E1C0u;
    if (runtime->hasFunction(0x25E1C0u)) {
        auto targetFn = runtime->lookupFunction(0x25E1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259810u; }
        if (ctx->pc != 0x259810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRot__10CEohMotherFiPf_0x25e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259810u; }
        if (ctx->pc != 0x259810u) { return; }
    }
    ctx->pc = 0x259810u;
label_259810:
    // 0x259810: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x259810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259814:
    // 0x259814: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x259814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_259818:
    // 0x259818: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x259818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_25981c:
    // 0x25981c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25981cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_259820:
    // 0x259820: 0x0  nop
    ctx->pc = 0x259820u;
    // NOP
label_259824:
    // 0x259824: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x259824u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_259828:
    // 0x259828: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x259828u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25982c:
    // 0x25982c: 0x0  nop
    ctx->pc = 0x25982cu;
    // NOP
label_259830:
    // 0x259830: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_259834:
    if (ctx->pc == 0x259834u) {
        ctx->pc = 0x259834u;
            // 0x259834: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->pc = 0x259838u;
        goto label_259838;
    }
    ctx->pc = 0x259830u;
    {
        const bool branch_taken_0x259830 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x259834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259830u;
            // 0x259834: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259830) {
            ctx->pc = 0x25984Cu;
            goto label_25984c;
        }
    }
    ctx->pc = 0x259838u;
label_259838:
    // 0x259838: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x259838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_25983c:
    // 0x25983c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25983cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_259840:
    // 0x259840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x259840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_259844:
    // 0x259844: 0x1000000d  b           . + 4 + (0xD << 2)
label_259848:
    if (ctx->pc == 0x259848u) {
        ctx->pc = 0x259848u;
            // 0x259848: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x25984Cu;
        goto label_25984c;
    }
    ctx->pc = 0x259844u;
    {
        const bool branch_taken_0x259844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259844u;
            // 0x259848: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259844) {
            ctx->pc = 0x25987Cu;
            goto label_25987c;
        }
    }
    ctx->pc = 0x25984Cu;
label_25984c:
    // 0x25984c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25984cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_259850:
    // 0x259850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x259850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_259854:
    // 0x259854: 0x0  nop
    ctx->pc = 0x259854u;
    // NOP
label_259858:
    // 0x259858: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x259858u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25985c:
    // 0x25985c: 0x0  nop
    ctx->pc = 0x25985cu;
    // NOP
label_259860:
    // 0x259860: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_259864:
    if (ctx->pc == 0x259864u) {
        ctx->pc = 0x259864u;
            // 0x259864: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x259868u;
        goto label_259868;
    }
    ctx->pc = 0x259860u;
    {
        const bool branch_taken_0x259860 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x259864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259860u;
            // 0x259864: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259860) {
            ctx->pc = 0x259880u;
            goto label_259880;
        }
    }
    ctx->pc = 0x259868u;
label_259868:
    // 0x259868: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x259868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_25986c:
    // 0x25986c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25986cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_259870:
    // 0x259870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x259870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_259874:
    // 0x259874: 0x0  nop
    ctx->pc = 0x259874u;
    // NOP
label_259878:
    // 0x259878: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x259878u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_25987c:
    // 0x25987c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25987cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_259880:
    // 0x259880: 0xc047a42  jal         func_11E908
label_259884:
    if (ctx->pc == 0x259884u) {
        ctx->pc = 0x259888u;
        goto label_259888;
    }
    ctx->pc = 0x259880u;
    SET_GPR_U32(ctx, 31, 0x259888u);
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259888u; }
        if (ctx->pc != 0x259888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259888u; }
        if (ctx->pc != 0x259888u) { return; }
    }
    ctx->pc = 0x259888u;
label_259888:
    // 0x259888: 0xc6a200a8  lwc1        $f2, 0xA8($s5)
    ctx->pc = 0x259888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25988c:
    // 0x25988c: 0xc6a10060  lwc1        $f1, 0x60($s5)
    ctx->pc = 0x25988cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259890:
    // 0x259890: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x259890u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_259894:
    // 0x259894: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x259894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_259898:
    // 0x259898: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x259898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25989c:
    // 0x25989c: 0xe6a00050  swc1        $f0, 0x50($s5)
    ctx->pc = 0x25989cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 80), bits); }
label_2598a0:
    // 0x2598a0: 0xc6a100a4  lwc1        $f1, 0xA4($s5)
    ctx->pc = 0x2598a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2598a4:
    // 0x2598a4: 0xc6a00064  lwc1        $f0, 0x64($s5)
    ctx->pc = 0x2598a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2598a8:
    // 0x2598a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2598a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2598ac:
    // 0x2598ac: 0xc047964  jal         func_11E590
label_2598b0:
    if (ctx->pc == 0x2598B0u) {
        ctx->pc = 0x2598B0u;
            // 0x2598b0: 0xe6a00054  swc1        $f0, 0x54($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 84), bits); }
        ctx->pc = 0x2598B4u;
        goto label_2598b4;
    }
    ctx->pc = 0x2598ACu;
    SET_GPR_U32(ctx, 31, 0x2598B4u);
    ctx->pc = 0x2598B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2598ACu;
            // 0x2598b0: 0xe6a00054  swc1        $f0, 0x54($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 84), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2598B4u; }
        if (ctx->pc != 0x2598B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2598B4u; }
        if (ctx->pc != 0x2598B4u) { return; }
    }
    ctx->pc = 0x2598B4u;
label_2598b4:
    // 0x2598b4: 0xc6a200a8  lwc1        $f2, 0xA8($s5)
    ctx->pc = 0x2598b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2598b8:
    // 0x2598b8: 0x26a40050  addiu       $a0, $s5, 0x50
    ctx->pc = 0x2598b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
label_2598bc:
    // 0x2598bc: 0xc6a10068  lwc1        $f1, 0x68($s5)
    ctx->pc = 0x2598bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2598c0:
    // 0x2598c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2598c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2598c4:
    // 0x2598c4: 0x26a60060  addiu       $a2, $s5, 0x60
    ctx->pc = 0x2598c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_2598c8:
    // 0x2598c8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2598c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2598cc:
    // 0x2598cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2598ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2598d0:
    // 0x2598d0: 0xc041c3e  jal         func_1070F8
label_2598d4:
    if (ctx->pc == 0x2598D4u) {
        ctx->pc = 0x2598D4u;
            // 0x2598d4: 0xe6a00058  swc1        $f0, 0x58($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 88), bits); }
        ctx->pc = 0x2598D8u;
        goto label_2598d8;
    }
    ctx->pc = 0x2598D0u;
    SET_GPR_U32(ctx, 31, 0x2598D8u);
    ctx->pc = 0x2598D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2598D0u;
            // 0x2598d4: 0xe6a00058  swc1        $f0, 0x58($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 88), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2598D8u; }
        if (ctx->pc != 0x2598D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2598D8u; }
        if (ctx->pc != 0x2598D8u) { return; }
    }
    ctx->pc = 0x2598D8u;
label_2598d8:
    // 0x2598d8: 0xc04bc8c  jal         func_12F230
label_2598dc:
    if (ctx->pc == 0x2598DCu) {
        ctx->pc = 0x2598DCu;
            // 0x2598dc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2598E0u;
        goto label_2598e0;
    }
    ctx->pc = 0x2598D8u;
    SET_GPR_U32(ctx, 31, 0x2598E0u);
    ctx->pc = 0x2598DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2598D8u;
            // 0x2598dc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2598E0u; }
        if (ctx->pc != 0x2598E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2598E0u; }
        if (ctx->pc != 0x2598E0u) { return; }
    }
    ctx->pc = 0x2598E0u;
label_2598e0:
    // 0x2598e0: 0x8ea50080  lw          $a1, 0x80($s5)
    ctx->pc = 0x2598e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_2598e4:
    // 0x2598e4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2598e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_2598e8:
    // 0x2598e8: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x2598e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_2598ec:
    // 0x2598ec: 0xc097b14  jal         func_25EC50
label_2598f0:
    if (ctx->pc == 0x2598F0u) {
        ctx->pc = 0x2598F0u;
            // 0x2598f0: 0x26a600ac  addiu       $a2, $s5, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 172));
        ctx->pc = 0x2598F4u;
        goto label_2598f4;
    }
    ctx->pc = 0x2598ECu;
    SET_GPR_U32(ctx, 31, 0x2598F4u);
    ctx->pc = 0x2598F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2598ECu;
            // 0x2598f0: 0x26a600ac  addiu       $a2, $s5, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EC50u;
    if (runtime->hasFunction(0x25EC50u)) {
        auto targetFn = runtime->lookupFunction(0x25EC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2598F4u; }
        if (ctx->pc != 0x2598F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__10CEohMotherFiPc_0x25ec50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2598F4u; }
        if (ctx->pc != 0x2598F4u) { return; }
    }
    ctx->pc = 0x2598F4u;
label_2598f4:
    // 0x2598f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2598f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2598f8:
    // 0x2598f8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_2598fc:
    if (ctx->pc == 0x2598FCu) {
        ctx->pc = 0x2598FCu;
            // 0x2598fc: 0x26a40060  addiu       $a0, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->pc = 0x259900u;
        goto label_259900;
    }
    ctx->pc = 0x2598F8u;
    {
        const bool branch_taken_0x2598f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2598FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2598F8u;
            // 0x2598fc: 0x26a40060  addiu       $a0, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2598f8) {
            ctx->pc = 0x259930u;
            goto label_259930;
        }
    }
    ctx->pc = 0x259900u;
label_259900:
    // 0x259900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x259900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_259904:
    // 0x259904: 0xc04dc0c  jal         func_137030
label_259908:
    if (ctx->pc == 0x259908u) {
        ctx->pc = 0x259908u;
            // 0x259908: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x25990Cu;
        goto label_25990c;
    }
    ctx->pc = 0x259904u;
    SET_GPR_U32(ctx, 31, 0x25990Cu);
    ctx->pc = 0x259908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259904u;
            // 0x259908: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25990Cu; }
        if (ctx->pc != 0x25990Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25990Cu; }
        if (ctx->pc != 0x25990Cu) { return; }
    }
    ctx->pc = 0x25990Cu;
label_25990c:
    // 0x25990c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25990cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_259910:
    // 0x259910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x259910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_259914:
    // 0x259914: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x259914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_259918:
    // 0x259918: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x259918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_25991c:
    // 0x25991c: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x25991cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
label_259920:
    // 0x259920: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x259920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
label_259924:
    // 0x259924: 0xc04de0c  jal         func_137830
label_259928:
    if (ctx->pc == 0x259928u) {
        ctx->pc = 0x259928u;
            // 0x259928: 0xafa00110  sw          $zero, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x25992Cu;
        goto label_25992c;
    }
    ctx->pc = 0x259924u;
    SET_GPR_U32(ctx, 31, 0x25992Cu);
    ctx->pc = 0x259928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259924u;
            // 0x259928: 0xafa00110  sw          $zero, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25992Cu; }
        if (ctx->pc != 0x25992Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25992Cu; }
        if (ctx->pc != 0x25992Cu) { return; }
    }
    ctx->pc = 0x25992Cu;
label_25992c:
    // 0x25992c: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x25992cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_259930:
    // 0x259930: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x259930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_259934:
    // 0x259934: 0xc041bb0  jal         func_106EC0
label_259938:
    if (ctx->pc == 0x259938u) {
        ctx->pc = 0x259938u;
            // 0x259938: 0x26a60090  addiu       $a2, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->pc = 0x25993Cu;
        goto label_25993c;
    }
    ctx->pc = 0x259934u;
    SET_GPR_U32(ctx, 31, 0x25993Cu);
    ctx->pc = 0x259938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259934u;
            // 0x259938: 0x26a60090  addiu       $a2, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25993Cu; }
        if (ctx->pc != 0x25993Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25993Cu; }
        if (ctx->pc != 0x25993Cu) { return; }
    }
    ctx->pc = 0x25993Cu;
label_25993c:
    // 0x25993c: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x25993cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_259940:
    // 0x259940: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x259940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_259944:
    // 0x259944: 0xc041c38  jal         func_1070E0
label_259948:
    if (ctx->pc == 0x259948u) {
        ctx->pc = 0x259948u;
            // 0x259948: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25994Cu;
        goto label_25994c;
    }
    ctx->pc = 0x259944u;
    SET_GPR_U32(ctx, 31, 0x25994Cu);
    ctx->pc = 0x259948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259944u;
            // 0x259948: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25994Cu; }
        if (ctx->pc != 0x25994Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25994Cu; }
        if (ctx->pc != 0x25994Cu) { return; }
    }
    ctx->pc = 0x25994Cu;
label_25994c:
    // 0x25994c: 0x26a40050  addiu       $a0, $s5, 0x50
    ctx->pc = 0x25994cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
label_259950:
    // 0x259950: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x259950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_259954:
    // 0x259954: 0xc041bb0  jal         func_106EC0
label_259958:
    if (ctx->pc == 0x259958u) {
        ctx->pc = 0x259958u;
            // 0x259958: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25995Cu;
        goto label_25995c;
    }
    ctx->pc = 0x259954u;
    SET_GPR_U32(ctx, 31, 0x25995Cu);
    ctx->pc = 0x259958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259954u;
            // 0x259958: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25995Cu; }
        if (ctx->pc != 0x25995Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25995Cu; }
        if (ctx->pc != 0x25995Cu) { return; }
    }
    ctx->pc = 0x25995Cu;
label_25995c:
    // 0x25995c: 0x26a40050  addiu       $a0, $s5, 0x50
    ctx->pc = 0x25995cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
label_259960:
    // 0x259960: 0x26a50060  addiu       $a1, $s5, 0x60
    ctx->pc = 0x259960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_259964:
    // 0x259964: 0xc041c38  jal         func_1070E0
label_259968:
    if (ctx->pc == 0x259968u) {
        ctx->pc = 0x259968u;
            // 0x259968: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25996Cu;
        goto label_25996c;
    }
    ctx->pc = 0x259964u;
    SET_GPR_U32(ctx, 31, 0x25996Cu);
    ctx->pc = 0x259968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259964u;
            // 0x259968: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25996Cu; }
        if (ctx->pc != 0x25996Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25996Cu; }
        if (ctx->pc != 0x25996Cu) { return; }
    }
    ctx->pc = 0x25996Cu;
label_25996c:
    // 0x25996c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25996cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_259970:
    // 0x259970: 0xc04c504  jal         func_131410
label_259974:
    if (ctx->pc == 0x259974u) {
        ctx->pc = 0x259974u;
            // 0x259974: 0x26a50050  addiu       $a1, $s5, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
        ctx->pc = 0x259978u;
        goto label_259978;
    }
    ctx->pc = 0x259970u;
    SET_GPR_U32(ctx, 31, 0x259978u);
    ctx->pc = 0x259974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259970u;
            // 0x259974: 0x26a50050  addiu       $a1, $s5, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259978u; }
        if (ctx->pc != 0x259978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259978u; }
        if (ctx->pc != 0x259978u) { return; }
    }
    ctx->pc = 0x259978u;
label_259978:
    // 0x259978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x259978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25997c:
    // 0x25997c: 0xc04c518  jal         func_131460
label_259980:
    if (ctx->pc == 0x259980u) {
        ctx->pc = 0x259980u;
            // 0x259980: 0x26a50060  addiu       $a1, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->pc = 0x259984u;
        goto label_259984;
    }
    ctx->pc = 0x25997Cu;
    SET_GPR_U32(ctx, 31, 0x259984u);
    ctx->pc = 0x259980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25997Cu;
            // 0x259980: 0x26a50060  addiu       $a1, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259984u; }
        if (ctx->pc != 0x259984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFPf_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259984u; }
        if (ctx->pc != 0x259984u) { return; }
    }
    ctx->pc = 0x259984u;
label_259984:
    // 0x259984: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x259984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_259988:
    // 0x259988: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x259988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25998c:
    // 0x25998c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x25998cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_259990:
    // 0x259990: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x259990u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_259994:
    // 0x259994: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x259994u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_259998:
    // 0x259998: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x259998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25999c:
    // 0x25999c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25999cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2599a0:
    // 0x2599a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2599a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2599a4:
    // 0x2599a4: 0x3e00008  jr          $ra
label_2599a8:
    if (ctx->pc == 0x2599A8u) {
        ctx->pc = 0x2599A8u;
            // 0x2599a8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x2599ACu;
        goto label_fallthrough_0x2599a4;
    }
    ctx->pc = 0x2599A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2599A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2599A4u;
            // 0x2599a8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2599a4:
    ctx->pc = 0x2599ACu;
}
