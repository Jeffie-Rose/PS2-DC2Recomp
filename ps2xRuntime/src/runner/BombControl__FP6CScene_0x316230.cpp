#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BombControl__FP6CScene
// Address: 0x316230 - 0x316860
void BombControl__FP6CScene_0x316230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BombControl__FP6CScene_0x316230");
#endif

    switch (ctx->pc) {
        case 0x316230u: goto label_316230;
        case 0x316234u: goto label_316234;
        case 0x316238u: goto label_316238;
        case 0x31623cu: goto label_31623c;
        case 0x316240u: goto label_316240;
        case 0x316244u: goto label_316244;
        case 0x316248u: goto label_316248;
        case 0x31624cu: goto label_31624c;
        case 0x316250u: goto label_316250;
        case 0x316254u: goto label_316254;
        case 0x316258u: goto label_316258;
        case 0x31625cu: goto label_31625c;
        case 0x316260u: goto label_316260;
        case 0x316264u: goto label_316264;
        case 0x316268u: goto label_316268;
        case 0x31626cu: goto label_31626c;
        case 0x316270u: goto label_316270;
        case 0x316274u: goto label_316274;
        case 0x316278u: goto label_316278;
        case 0x31627cu: goto label_31627c;
        case 0x316280u: goto label_316280;
        case 0x316284u: goto label_316284;
        case 0x316288u: goto label_316288;
        case 0x31628cu: goto label_31628c;
        case 0x316290u: goto label_316290;
        case 0x316294u: goto label_316294;
        case 0x316298u: goto label_316298;
        case 0x31629cu: goto label_31629c;
        case 0x3162a0u: goto label_3162a0;
        case 0x3162a4u: goto label_3162a4;
        case 0x3162a8u: goto label_3162a8;
        case 0x3162acu: goto label_3162ac;
        case 0x3162b0u: goto label_3162b0;
        case 0x3162b4u: goto label_3162b4;
        case 0x3162b8u: goto label_3162b8;
        case 0x3162bcu: goto label_3162bc;
        case 0x3162c0u: goto label_3162c0;
        case 0x3162c4u: goto label_3162c4;
        case 0x3162c8u: goto label_3162c8;
        case 0x3162ccu: goto label_3162cc;
        case 0x3162d0u: goto label_3162d0;
        case 0x3162d4u: goto label_3162d4;
        case 0x3162d8u: goto label_3162d8;
        case 0x3162dcu: goto label_3162dc;
        case 0x3162e0u: goto label_3162e0;
        case 0x3162e4u: goto label_3162e4;
        case 0x3162e8u: goto label_3162e8;
        case 0x3162ecu: goto label_3162ec;
        case 0x3162f0u: goto label_3162f0;
        case 0x3162f4u: goto label_3162f4;
        case 0x3162f8u: goto label_3162f8;
        case 0x3162fcu: goto label_3162fc;
        case 0x316300u: goto label_316300;
        case 0x316304u: goto label_316304;
        case 0x316308u: goto label_316308;
        case 0x31630cu: goto label_31630c;
        case 0x316310u: goto label_316310;
        case 0x316314u: goto label_316314;
        case 0x316318u: goto label_316318;
        case 0x31631cu: goto label_31631c;
        case 0x316320u: goto label_316320;
        case 0x316324u: goto label_316324;
        case 0x316328u: goto label_316328;
        case 0x31632cu: goto label_31632c;
        case 0x316330u: goto label_316330;
        case 0x316334u: goto label_316334;
        case 0x316338u: goto label_316338;
        case 0x31633cu: goto label_31633c;
        case 0x316340u: goto label_316340;
        case 0x316344u: goto label_316344;
        case 0x316348u: goto label_316348;
        case 0x31634cu: goto label_31634c;
        case 0x316350u: goto label_316350;
        case 0x316354u: goto label_316354;
        case 0x316358u: goto label_316358;
        case 0x31635cu: goto label_31635c;
        case 0x316360u: goto label_316360;
        case 0x316364u: goto label_316364;
        case 0x316368u: goto label_316368;
        case 0x31636cu: goto label_31636c;
        case 0x316370u: goto label_316370;
        case 0x316374u: goto label_316374;
        case 0x316378u: goto label_316378;
        case 0x31637cu: goto label_31637c;
        case 0x316380u: goto label_316380;
        case 0x316384u: goto label_316384;
        case 0x316388u: goto label_316388;
        case 0x31638cu: goto label_31638c;
        case 0x316390u: goto label_316390;
        case 0x316394u: goto label_316394;
        case 0x316398u: goto label_316398;
        case 0x31639cu: goto label_31639c;
        case 0x3163a0u: goto label_3163a0;
        case 0x3163a4u: goto label_3163a4;
        case 0x3163a8u: goto label_3163a8;
        case 0x3163acu: goto label_3163ac;
        case 0x3163b0u: goto label_3163b0;
        case 0x3163b4u: goto label_3163b4;
        case 0x3163b8u: goto label_3163b8;
        case 0x3163bcu: goto label_3163bc;
        case 0x3163c0u: goto label_3163c0;
        case 0x3163c4u: goto label_3163c4;
        case 0x3163c8u: goto label_3163c8;
        case 0x3163ccu: goto label_3163cc;
        case 0x3163d0u: goto label_3163d0;
        case 0x3163d4u: goto label_3163d4;
        case 0x3163d8u: goto label_3163d8;
        case 0x3163dcu: goto label_3163dc;
        case 0x3163e0u: goto label_3163e0;
        case 0x3163e4u: goto label_3163e4;
        case 0x3163e8u: goto label_3163e8;
        case 0x3163ecu: goto label_3163ec;
        case 0x3163f0u: goto label_3163f0;
        case 0x3163f4u: goto label_3163f4;
        case 0x3163f8u: goto label_3163f8;
        case 0x3163fcu: goto label_3163fc;
        case 0x316400u: goto label_316400;
        case 0x316404u: goto label_316404;
        case 0x316408u: goto label_316408;
        case 0x31640cu: goto label_31640c;
        case 0x316410u: goto label_316410;
        case 0x316414u: goto label_316414;
        case 0x316418u: goto label_316418;
        case 0x31641cu: goto label_31641c;
        case 0x316420u: goto label_316420;
        case 0x316424u: goto label_316424;
        case 0x316428u: goto label_316428;
        case 0x31642cu: goto label_31642c;
        case 0x316430u: goto label_316430;
        case 0x316434u: goto label_316434;
        case 0x316438u: goto label_316438;
        case 0x31643cu: goto label_31643c;
        case 0x316440u: goto label_316440;
        case 0x316444u: goto label_316444;
        case 0x316448u: goto label_316448;
        case 0x31644cu: goto label_31644c;
        case 0x316450u: goto label_316450;
        case 0x316454u: goto label_316454;
        case 0x316458u: goto label_316458;
        case 0x31645cu: goto label_31645c;
        case 0x316460u: goto label_316460;
        case 0x316464u: goto label_316464;
        case 0x316468u: goto label_316468;
        case 0x31646cu: goto label_31646c;
        case 0x316470u: goto label_316470;
        case 0x316474u: goto label_316474;
        case 0x316478u: goto label_316478;
        case 0x31647cu: goto label_31647c;
        case 0x316480u: goto label_316480;
        case 0x316484u: goto label_316484;
        case 0x316488u: goto label_316488;
        case 0x31648cu: goto label_31648c;
        case 0x316490u: goto label_316490;
        case 0x316494u: goto label_316494;
        case 0x316498u: goto label_316498;
        case 0x31649cu: goto label_31649c;
        case 0x3164a0u: goto label_3164a0;
        case 0x3164a4u: goto label_3164a4;
        case 0x3164a8u: goto label_3164a8;
        case 0x3164acu: goto label_3164ac;
        case 0x3164b0u: goto label_3164b0;
        case 0x3164b4u: goto label_3164b4;
        case 0x3164b8u: goto label_3164b8;
        case 0x3164bcu: goto label_3164bc;
        case 0x3164c0u: goto label_3164c0;
        case 0x3164c4u: goto label_3164c4;
        case 0x3164c8u: goto label_3164c8;
        case 0x3164ccu: goto label_3164cc;
        case 0x3164d0u: goto label_3164d0;
        case 0x3164d4u: goto label_3164d4;
        case 0x3164d8u: goto label_3164d8;
        case 0x3164dcu: goto label_3164dc;
        case 0x3164e0u: goto label_3164e0;
        case 0x3164e4u: goto label_3164e4;
        case 0x3164e8u: goto label_3164e8;
        case 0x3164ecu: goto label_3164ec;
        case 0x3164f0u: goto label_3164f0;
        case 0x3164f4u: goto label_3164f4;
        case 0x3164f8u: goto label_3164f8;
        case 0x3164fcu: goto label_3164fc;
        case 0x316500u: goto label_316500;
        case 0x316504u: goto label_316504;
        case 0x316508u: goto label_316508;
        case 0x31650cu: goto label_31650c;
        case 0x316510u: goto label_316510;
        case 0x316514u: goto label_316514;
        case 0x316518u: goto label_316518;
        case 0x31651cu: goto label_31651c;
        case 0x316520u: goto label_316520;
        case 0x316524u: goto label_316524;
        case 0x316528u: goto label_316528;
        case 0x31652cu: goto label_31652c;
        case 0x316530u: goto label_316530;
        case 0x316534u: goto label_316534;
        case 0x316538u: goto label_316538;
        case 0x31653cu: goto label_31653c;
        case 0x316540u: goto label_316540;
        case 0x316544u: goto label_316544;
        case 0x316548u: goto label_316548;
        case 0x31654cu: goto label_31654c;
        case 0x316550u: goto label_316550;
        case 0x316554u: goto label_316554;
        case 0x316558u: goto label_316558;
        case 0x31655cu: goto label_31655c;
        case 0x316560u: goto label_316560;
        case 0x316564u: goto label_316564;
        case 0x316568u: goto label_316568;
        case 0x31656cu: goto label_31656c;
        case 0x316570u: goto label_316570;
        case 0x316574u: goto label_316574;
        case 0x316578u: goto label_316578;
        case 0x31657cu: goto label_31657c;
        case 0x316580u: goto label_316580;
        case 0x316584u: goto label_316584;
        case 0x316588u: goto label_316588;
        case 0x31658cu: goto label_31658c;
        case 0x316590u: goto label_316590;
        case 0x316594u: goto label_316594;
        case 0x316598u: goto label_316598;
        case 0x31659cu: goto label_31659c;
        case 0x3165a0u: goto label_3165a0;
        case 0x3165a4u: goto label_3165a4;
        case 0x3165a8u: goto label_3165a8;
        case 0x3165acu: goto label_3165ac;
        case 0x3165b0u: goto label_3165b0;
        case 0x3165b4u: goto label_3165b4;
        case 0x3165b8u: goto label_3165b8;
        case 0x3165bcu: goto label_3165bc;
        case 0x3165c0u: goto label_3165c0;
        case 0x3165c4u: goto label_3165c4;
        case 0x3165c8u: goto label_3165c8;
        case 0x3165ccu: goto label_3165cc;
        case 0x3165d0u: goto label_3165d0;
        case 0x3165d4u: goto label_3165d4;
        case 0x3165d8u: goto label_3165d8;
        case 0x3165dcu: goto label_3165dc;
        case 0x3165e0u: goto label_3165e0;
        case 0x3165e4u: goto label_3165e4;
        case 0x3165e8u: goto label_3165e8;
        case 0x3165ecu: goto label_3165ec;
        case 0x3165f0u: goto label_3165f0;
        case 0x3165f4u: goto label_3165f4;
        case 0x3165f8u: goto label_3165f8;
        case 0x3165fcu: goto label_3165fc;
        case 0x316600u: goto label_316600;
        case 0x316604u: goto label_316604;
        case 0x316608u: goto label_316608;
        case 0x31660cu: goto label_31660c;
        case 0x316610u: goto label_316610;
        case 0x316614u: goto label_316614;
        case 0x316618u: goto label_316618;
        case 0x31661cu: goto label_31661c;
        case 0x316620u: goto label_316620;
        case 0x316624u: goto label_316624;
        case 0x316628u: goto label_316628;
        case 0x31662cu: goto label_31662c;
        case 0x316630u: goto label_316630;
        case 0x316634u: goto label_316634;
        case 0x316638u: goto label_316638;
        case 0x31663cu: goto label_31663c;
        case 0x316640u: goto label_316640;
        case 0x316644u: goto label_316644;
        case 0x316648u: goto label_316648;
        case 0x31664cu: goto label_31664c;
        case 0x316650u: goto label_316650;
        case 0x316654u: goto label_316654;
        case 0x316658u: goto label_316658;
        case 0x31665cu: goto label_31665c;
        case 0x316660u: goto label_316660;
        case 0x316664u: goto label_316664;
        case 0x316668u: goto label_316668;
        case 0x31666cu: goto label_31666c;
        case 0x316670u: goto label_316670;
        case 0x316674u: goto label_316674;
        case 0x316678u: goto label_316678;
        case 0x31667cu: goto label_31667c;
        case 0x316680u: goto label_316680;
        case 0x316684u: goto label_316684;
        case 0x316688u: goto label_316688;
        case 0x31668cu: goto label_31668c;
        case 0x316690u: goto label_316690;
        case 0x316694u: goto label_316694;
        case 0x316698u: goto label_316698;
        case 0x31669cu: goto label_31669c;
        case 0x3166a0u: goto label_3166a0;
        case 0x3166a4u: goto label_3166a4;
        case 0x3166a8u: goto label_3166a8;
        case 0x3166acu: goto label_3166ac;
        case 0x3166b0u: goto label_3166b0;
        case 0x3166b4u: goto label_3166b4;
        case 0x3166b8u: goto label_3166b8;
        case 0x3166bcu: goto label_3166bc;
        case 0x3166c0u: goto label_3166c0;
        case 0x3166c4u: goto label_3166c4;
        case 0x3166c8u: goto label_3166c8;
        case 0x3166ccu: goto label_3166cc;
        case 0x3166d0u: goto label_3166d0;
        case 0x3166d4u: goto label_3166d4;
        case 0x3166d8u: goto label_3166d8;
        case 0x3166dcu: goto label_3166dc;
        case 0x3166e0u: goto label_3166e0;
        case 0x3166e4u: goto label_3166e4;
        case 0x3166e8u: goto label_3166e8;
        case 0x3166ecu: goto label_3166ec;
        case 0x3166f0u: goto label_3166f0;
        case 0x3166f4u: goto label_3166f4;
        case 0x3166f8u: goto label_3166f8;
        case 0x3166fcu: goto label_3166fc;
        case 0x316700u: goto label_316700;
        case 0x316704u: goto label_316704;
        case 0x316708u: goto label_316708;
        case 0x31670cu: goto label_31670c;
        case 0x316710u: goto label_316710;
        case 0x316714u: goto label_316714;
        case 0x316718u: goto label_316718;
        case 0x31671cu: goto label_31671c;
        case 0x316720u: goto label_316720;
        case 0x316724u: goto label_316724;
        case 0x316728u: goto label_316728;
        case 0x31672cu: goto label_31672c;
        case 0x316730u: goto label_316730;
        case 0x316734u: goto label_316734;
        case 0x316738u: goto label_316738;
        case 0x31673cu: goto label_31673c;
        case 0x316740u: goto label_316740;
        case 0x316744u: goto label_316744;
        case 0x316748u: goto label_316748;
        case 0x31674cu: goto label_31674c;
        case 0x316750u: goto label_316750;
        case 0x316754u: goto label_316754;
        case 0x316758u: goto label_316758;
        case 0x31675cu: goto label_31675c;
        case 0x316760u: goto label_316760;
        case 0x316764u: goto label_316764;
        case 0x316768u: goto label_316768;
        case 0x31676cu: goto label_31676c;
        case 0x316770u: goto label_316770;
        case 0x316774u: goto label_316774;
        case 0x316778u: goto label_316778;
        case 0x31677cu: goto label_31677c;
        case 0x316780u: goto label_316780;
        case 0x316784u: goto label_316784;
        case 0x316788u: goto label_316788;
        case 0x31678cu: goto label_31678c;
        case 0x316790u: goto label_316790;
        case 0x316794u: goto label_316794;
        case 0x316798u: goto label_316798;
        case 0x31679cu: goto label_31679c;
        case 0x3167a0u: goto label_3167a0;
        case 0x3167a4u: goto label_3167a4;
        case 0x3167a8u: goto label_3167a8;
        case 0x3167acu: goto label_3167ac;
        case 0x3167b0u: goto label_3167b0;
        case 0x3167b4u: goto label_3167b4;
        case 0x3167b8u: goto label_3167b8;
        case 0x3167bcu: goto label_3167bc;
        case 0x3167c0u: goto label_3167c0;
        case 0x3167c4u: goto label_3167c4;
        case 0x3167c8u: goto label_3167c8;
        case 0x3167ccu: goto label_3167cc;
        case 0x3167d0u: goto label_3167d0;
        case 0x3167d4u: goto label_3167d4;
        case 0x3167d8u: goto label_3167d8;
        case 0x3167dcu: goto label_3167dc;
        case 0x3167e0u: goto label_3167e0;
        case 0x3167e4u: goto label_3167e4;
        case 0x3167e8u: goto label_3167e8;
        case 0x3167ecu: goto label_3167ec;
        case 0x3167f0u: goto label_3167f0;
        case 0x3167f4u: goto label_3167f4;
        case 0x3167f8u: goto label_3167f8;
        case 0x3167fcu: goto label_3167fc;
        case 0x316800u: goto label_316800;
        case 0x316804u: goto label_316804;
        case 0x316808u: goto label_316808;
        case 0x31680cu: goto label_31680c;
        case 0x316810u: goto label_316810;
        case 0x316814u: goto label_316814;
        case 0x316818u: goto label_316818;
        case 0x31681cu: goto label_31681c;
        case 0x316820u: goto label_316820;
        case 0x316824u: goto label_316824;
        case 0x316828u: goto label_316828;
        case 0x31682cu: goto label_31682c;
        case 0x316830u: goto label_316830;
        case 0x316834u: goto label_316834;
        case 0x316838u: goto label_316838;
        case 0x31683cu: goto label_31683c;
        case 0x316840u: goto label_316840;
        case 0x316844u: goto label_316844;
        case 0x316848u: goto label_316848;
        case 0x31684cu: goto label_31684c;
        case 0x316850u: goto label_316850;
        case 0x316854u: goto label_316854;
        case 0x316858u: goto label_316858;
        case 0x31685cu: goto label_31685c;
        default: break;
    }

    ctx->pc = 0x316230u;

label_316230:
    // 0x316230: 0x3c01ffff  lui         $at, 0xFFFF
    ctx->pc = 0x316230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
label_316234:
    // 0x316234: 0x34215f00  ori         $at, $at, 0x5F00
    ctx->pc = 0x316234u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24320);
label_316238:
    // 0x316238: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x316238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_31623c:
    // 0x31623c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31623cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_316240:
    // 0x316240: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x316240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_316244:
    // 0x316244: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_316248:
    // 0x316248: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x316248u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_31624c:
    // 0x31624c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x31624cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_316250:
    // 0x316250: 0x8c852e50  lw          $a1, 0x2E50($a0)
    ctx->pc = 0x316250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
label_316254:
    // 0x316254: 0xc0a0ed8  jal         func_283B60
label_316258:
    if (ctx->pc == 0x316258u) {
        ctx->pc = 0x316258u;
            // 0x316258: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31625Cu;
        goto label_31625c;
    }
    ctx->pc = 0x316254u;
    SET_GPR_U32(ctx, 31, 0x31625Cu);
    ctx->pc = 0x316258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316254u;
            // 0x316258: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31625Cu; }
        if (ctx->pc != 0x31625Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31625Cu; }
        if (ctx->pc != 0x31625Cu) { return; }
    }
    ctx->pc = 0x31625Cu;
label_31625c:
    // 0x31625c: 0x10400178  beqz        $v0, . + 4 + (0x178 << 2)
label_316260:
    if (ctx->pc == 0x316260u) {
        ctx->pc = 0x316264u;
        goto label_316264;
    }
    ctx->pc = 0x31625Cu;
    {
        const bool branch_taken_0x31625c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31625c) {
            ctx->pc = 0x316840u;
            goto label_316840;
        }
    }
    ctx->pc = 0x316264u;
label_316264:
    // 0x316264: 0x8f84a308  lw          $a0, -0x5CF8($gp)
    ctx->pc = 0x316264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943496)));
label_316268:
    // 0x316268: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x316268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31626c:
    // 0x31626c: 0x1483001c  bne         $a0, $v1, . + 4 + (0x1C << 2)
label_316270:
    if (ctx->pc == 0x316270u) {
        ctx->pc = 0x316270u;
            // 0x316270: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x316274u;
        goto label_316274;
    }
    ctx->pc = 0x31626Cu;
    {
        const bool branch_taken_0x31626c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x316270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31626Cu;
            // 0x316270: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31626c) {
            ctx->pc = 0x3162E0u;
            goto label_3162e0;
        }
    }
    ctx->pc = 0x316274u;
label_316274:
    // 0x316274: 0x8f84a294  lw          $a0, -0x5D6C($gp)
    ctx->pc = 0x316274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943380)));
label_316278:
    // 0x316278: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x316278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_31627c:
    // 0x31627c: 0xaf80a320  sw          $zero, -0x5CE0($gp)
    ctx->pc = 0x31627cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943520), GPR_U32(ctx, 0));
label_316280:
    // 0x316280: 0x24a528c8  addiu       $a1, $a1, 0x28C8
    ctx->pc = 0x316280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10440));
label_316284:
    // 0x316284: 0xaf80a314  sw          $zero, -0x5CEC($gp)
    ctx->pc = 0x316284u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943508), GPR_U32(ctx, 0));
label_316288:
    // 0x316288: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x316288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31628c:
    // 0x31628c: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x31628cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_316290:
    // 0x316290: 0x320f809  jalr        $t9
label_316294:
    if (ctx->pc == 0x316294u) {
        ctx->pc = 0x316294u;
            // 0x316294: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x316298u;
        goto label_316298;
    }
    ctx->pc = 0x316290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x316298u);
        ctx->pc = 0x316294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316290u;
            // 0x316294: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x316298u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x316298u; }
            if (ctx->pc != 0x316298u) { return; }
        }
        }
    }
    ctx->pc = 0x316298u;
label_316298:
    // 0x316298: 0x8f84a290  lw          $a0, -0x5D70($gp)
    ctx->pc = 0x316298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
label_31629c:
    // 0x31629c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x31629cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3162a0:
    // 0x3162a0: 0x0  nop
    ctx->pc = 0x3162a0u;
    // NOP
label_3162a4:
    // 0x3162a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3162a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3162a8:
    // 0x3162a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3162a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3162ac:
    // 0x3162ac: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3162acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3162b0:
    // 0x3162b0: 0x320f809  jalr        $t9
label_3162b4:
    if (ctx->pc == 0x3162B4u) {
        ctx->pc = 0x3162B4u;
            // 0x3162b4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3162B8u;
        goto label_3162b8;
    }
    ctx->pc = 0x3162B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3162B8u);
        ctx->pc = 0x3162B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3162B0u;
            // 0x3162b4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3162B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3162B8u; }
            if (ctx->pc != 0x3162B8u) { return; }
        }
        }
    }
    ctx->pc = 0x3162B8u;
label_3162b8:
    // 0x3162b8: 0xc05cdc0  jal         func_173700
label_3162bc:
    if (ctx->pc == 0x3162BCu) {
        ctx->pc = 0x3162BCu;
            // 0x3162bc: 0x8f84a290  lw          $a0, -0x5D70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
        ctx->pc = 0x3162C0u;
        goto label_3162c0;
    }
    ctx->pc = 0x3162B8u;
    SET_GPR_U32(ctx, 31, 0x3162C0u);
    ctx->pc = 0x3162BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3162B8u;
            // 0x3162bc: 0x8f84a290  lw          $a0, -0x5D70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173700u;
    if (runtime->hasFunction(0x173700u)) {
        auto targetFn = runtime->lookupFunction(0x173700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3162C0u; }
        if (ctx->pc != 0x3162C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdatePosition__11CCharacter2Fv_0x173700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3162C0u; }
        if (ctx->pc != 0x3162C0u) { return; }
    }
    ctx->pc = 0x3162C0u;
label_3162c0:
    // 0x3162c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3162c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3162c4:
    // 0x3162c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3162c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3162c8:
    // 0x3162c8: 0xaf82a308  sw          $v0, -0x5CF8($gp)
    ctx->pc = 0x3162c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943496), GPR_U32(ctx, 2));
label_3162cc:
    // 0x3162cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3162ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3162d0:
    // 0x3162d0: 0xc0a11c0  jal         func_284700
label_3162d4:
    if (ctx->pc == 0x3162D4u) {
        ctx->pc = 0x3162D4u;
            // 0x3162d4: 0x24060043  addiu       $a2, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->pc = 0x3162D8u;
        goto label_3162d8;
    }
    ctx->pc = 0x3162D0u;
    SET_GPR_U32(ctx, 31, 0x3162D8u);
    ctx->pc = 0x3162D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3162D0u;
            // 0x3162d4: 0x24060043  addiu       $a2, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284700u;
    if (runtime->hasFunction(0x284700u)) {
        auto targetFn = runtime->lookupFunction(0x284700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3162D8u; }
        if (ctx->pc != 0x3162D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetActive__6CSceneFii_0x284700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3162D8u; }
        if (ctx->pc != 0x3162D8u) { return; }
    }
    ctx->pc = 0x3162D8u;
label_3162d8:
    // 0x3162d8: 0x1000015a  b           . + 4 + (0x15A << 2)
label_3162dc:
    if (ctx->pc == 0x3162DCu) {
        ctx->pc = 0x3162DCu;
            // 0x3162dc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x3162E0u;
        goto label_3162e0;
    }
    ctx->pc = 0x3162D8u;
    {
        const bool branch_taken_0x3162d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3162DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3162D8u;
            // 0x3162dc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3162d8) {
            ctx->pc = 0x316844u;
            goto label_316844;
        }
    }
    ctx->pc = 0x3162E0u;
label_3162e0:
    // 0x3162e0: 0x14830063  bne         $a0, $v1, . + 4 + (0x63 << 2)
label_3162e4:
    if (ctx->pc == 0x3162E4u) {
        ctx->pc = 0x3162E4u;
            // 0x3162e4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3162E8u;
        goto label_3162e8;
    }
    ctx->pc = 0x3162E0u;
    {
        const bool branch_taken_0x3162e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3162E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3162E0u;
            // 0x3162e4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3162e0) {
            ctx->pc = 0x316470u;
            goto label_316470;
        }
    }
    ctx->pc = 0x3162E8u;
label_3162e8:
    // 0x3162e8: 0x8f84a294  lw          $a0, -0x5D6C($gp)
    ctx->pc = 0x3162e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943380)));
label_3162ec:
    // 0x3162ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3162ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3162f0:
    // 0x3162f0: 0x8f3900a4  lw          $t9, 0xA4($t9)
    ctx->pc = 0x3162f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 164)));
label_3162f4:
    // 0x3162f4: 0x320f809  jalr        $t9
label_3162f8:
    if (ctx->pc == 0x3162F8u) {
        ctx->pc = 0x3162FCu;
        goto label_3162fc;
    }
    ctx->pc = 0x3162F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3162FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3162FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3162FCu; }
            if (ctx->pc != 0x3162FCu) { return; }
        }
        }
    }
    ctx->pc = 0x3162FCu;
label_3162fc:
    // 0x3162fc: 0x8f84a294  lw          $a0, -0x5D6C($gp)
    ctx->pc = 0x3162fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943380)));
label_316300:
    // 0x316300: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x316300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_316304:
    // 0x316304: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x316304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_316308:
    // 0x316308: 0x320f809  jalr        $t9
label_31630c:
    if (ctx->pc == 0x31630Cu) {
        ctx->pc = 0x31630Cu;
            // 0x31630c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x316310u;
        goto label_316310;
    }
    ctx->pc = 0x316308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x316310u);
        ctx->pc = 0x31630Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316308u;
            // 0x31630c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x316310u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x316310u; }
            if (ctx->pc != 0x316310u) { return; }
        }
        }
    }
    ctx->pc = 0x316310u;
label_316310:
    // 0x316310: 0x8f82a294  lw          $v0, -0x5D6C($gp)
    ctx->pc = 0x316310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943380)));
label_316314:
    // 0x316314: 0x8f83a290  lw          $v1, -0x5D70($gp)
    ctx->pc = 0x316314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
label_316318:
    // 0x316318: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x316318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_31631c:
    // 0x31631c: 0x8c710070  lw          $s1, 0x70($v1)
    ctx->pc = 0x31631cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_316320:
    // 0x316320: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_316324:
    if (ctx->pc == 0x316324u) {
        ctx->pc = 0x316324u;
            // 0x316324: 0x4600a540  add.s       $f21, $f20, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x316328u;
        goto label_316328;
    }
    ctx->pc = 0x316320u;
    {
        const bool branch_taken_0x316320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316320u;
            // 0x316324: 0x4600a540  add.s       $f21, $f20, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x316320) {
            ctx->pc = 0x316338u;
            goto label_316338;
        }
    }
    ctx->pc = 0x316328u;
label_316328:
    // 0x316328: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x316328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_31632c:
    // 0x31632c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31632cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_316330:
    // 0x316330: 0xc04ddb4  jal         func_1376D0
label_316334:
    if (ctx->pc == 0x316334u) {
        ctx->pc = 0x316334u;
            // 0x316334: 0x24a528d8  addiu       $a1, $a1, 0x28D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10456));
        ctx->pc = 0x316338u;
        goto label_316338;
    }
    ctx->pc = 0x316330u;
    SET_GPR_U32(ctx, 31, 0x316338u);
    ctx->pc = 0x316334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316330u;
            // 0x316334: 0x24a528d8  addiu       $a1, $a1, 0x28D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316338u; }
        if (ctx->pc != 0x316338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316338u; }
        if (ctx->pc != 0x316338u) { return; }
    }
    ctx->pc = 0x316338u;
label_316338:
    // 0x316338: 0x3c034198  lui         $v1, 0x4198
    ctx->pc = 0x316338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16792 << 16));
label_31633c:
    // 0x31633c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31633cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316340:
    // 0x316340: 0x0  nop
    ctx->pc = 0x316340u;
    // NOP
label_316344:
    // 0x316344: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x316344u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316348:
    // 0x316348: 0x0  nop
    ctx->pc = 0x316348u;
    // NOP
label_31634c:
    // 0x31634c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_316350:
    if (ctx->pc == 0x316350u) {
        ctx->pc = 0x316354u;
        goto label_316354;
    }
    ctx->pc = 0x31634Cu;
    {
        const bool branch_taken_0x31634c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31634c) {
            ctx->pc = 0x316374u;
            goto label_316374;
        }
    }
    ctx->pc = 0x316354u;
label_316354:
    // 0x316354: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x316354u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316358:
    // 0x316358: 0x0  nop
    ctx->pc = 0x316358u;
    // NOP
label_31635c:
    // 0x31635c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_316360:
    if (ctx->pc == 0x316360u) {
        ctx->pc = 0x316364u;
        goto label_316364;
    }
    ctx->pc = 0x31635Cu;
    {
        const bool branch_taken_0x31635c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31635c) {
            ctx->pc = 0x316374u;
            goto label_316374;
        }
    }
    ctx->pc = 0x316364u;
label_316364:
    // 0x316364: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_316368:
    if (ctx->pc == 0x316368u) {
        ctx->pc = 0x316368u;
            // 0x316368: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31636Cu;
        goto label_31636c;
    }
    ctx->pc = 0x316364u;
    {
        const bool branch_taken_0x316364 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x316368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316364u;
            // 0x316368: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316364) {
            ctx->pc = 0x316374u;
            goto label_316374;
        }
    }
    ctx->pc = 0x31636Cu;
label_31636c:
    // 0x31636c: 0xc04db0c  jal         func_136C30
label_316370:
    if (ctx->pc == 0x316370u) {
        ctx->pc = 0x316370u;
            // 0x316370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316374u;
        goto label_316374;
    }
    ctx->pc = 0x31636Cu;
    SET_GPR_U32(ctx, 31, 0x316374u);
    ctx->pc = 0x316370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31636Cu;
            // 0x316370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C30u;
    if (runtime->hasFunction(0x136C30u)) {
        auto targetFn = runtime->lookupFunction(0x136C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316374u; }
        if (ctx->pc != 0x316374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReference__8mgCFrameFP8mgCFrame_0x136c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316374u; }
        if (ctx->pc != 0x316374u) { return; }
    }
    ctx->pc = 0x316374u;
label_316374:
    // 0x316374: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x316374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
label_316378:
    // 0x316378: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x316378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31637c:
    // 0x31637c: 0x0  nop
    ctx->pc = 0x31637cu;
    // NOP
label_316380:
    // 0x316380: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x316380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316384:
    // 0x316384: 0x0  nop
    ctx->pc = 0x316384u;
    // NOP
label_316388:
    // 0x316388: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_31638c:
    if (ctx->pc == 0x31638Cu) {
        ctx->pc = 0x31638Cu;
            // 0x31638c: 0x3c024200  lui         $v0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
        ctx->pc = 0x316390u;
        goto label_316390;
    }
    ctx->pc = 0x316388u;
    {
        const bool branch_taken_0x316388 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31638Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316388u;
            // 0x31638c: 0x3c024200  lui         $v0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316388) {
            ctx->pc = 0x3163A4u;
            goto label_3163a4;
        }
    }
    ctx->pc = 0x316390u;
label_316390:
    // 0x316390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x316390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_316394:
    // 0x316394: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x316394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_316398:
    // 0x316398: 0xc0a11b4  jal         func_2846D0
label_31639c:
    if (ctx->pc == 0x31639Cu) {
        ctx->pc = 0x31639Cu;
            // 0x31639c: 0x24060043  addiu       $a2, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->pc = 0x3163A0u;
        goto label_3163a0;
    }
    ctx->pc = 0x316398u;
    SET_GPR_U32(ctx, 31, 0x3163A0u);
    ctx->pc = 0x31639Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316398u;
            // 0x31639c: 0x24060043  addiu       $a2, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3163A0u; }
        if (ctx->pc != 0x3163A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3163A0u; }
        if (ctx->pc != 0x3163A0u) { return; }
    }
    ctx->pc = 0x3163A0u;
label_3163a0:
    // 0x3163a0: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x3163a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_3163a4:
    // 0x3163a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3163a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3163a8:
    // 0x3163a8: 0x0  nop
    ctx->pc = 0x3163a8u;
    // NOP
label_3163ac:
    // 0x3163ac: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3163acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3163b0:
    // 0x3163b0: 0x0  nop
    ctx->pc = 0x3163b0u;
    // NOP
label_3163b4:
    // 0x3163b4: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_3163b8:
    if (ctx->pc == 0x3163B8u) {
        ctx->pc = 0x3163BCu;
        goto label_3163bc;
    }
    ctx->pc = 0x3163B4u;
    {
        const bool branch_taken_0x3163b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3163b4) {
            ctx->pc = 0x316420u;
            goto label_316420;
        }
    }
    ctx->pc = 0x3163BCu;
label_3163bc:
    // 0x3163bc: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x3163bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3163c0:
    // 0x3163c0: 0x0  nop
    ctx->pc = 0x3163c0u;
    // NOP
label_3163c4:
    // 0x3163c4: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_3163c8:
    if (ctx->pc == 0x3163C8u) {
        ctx->pc = 0x3163C8u;
            // 0x3163c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3163CCu;
        goto label_3163cc;
    }
    ctx->pc = 0x3163C4u;
    {
        const bool branch_taken_0x3163c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3163C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3163C4u;
            // 0x3163c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3163c4) {
            ctx->pc = 0x316420u;
            goto label_316420;
        }
    }
    ctx->pc = 0x3163CCu;
label_3163cc:
    // 0x3163cc: 0xc04dc0c  jal         func_137030
label_3163d0:
    if (ctx->pc == 0x3163D0u) {
        ctx->pc = 0x3163D0u;
            // 0x3163d0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3163D4u;
        goto label_3163d4;
    }
    ctx->pc = 0x3163CCu;
    SET_GPR_U32(ctx, 31, 0x3163D4u);
    ctx->pc = 0x3163D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3163CCu;
            // 0x3163d0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3163D4u; }
        if (ctx->pc != 0x3163D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3163D4u; }
        if (ctx->pc != 0x3163D4u) { return; }
    }
    ctx->pc = 0x3163D4u;
label_3163d4:
    // 0x3163d4: 0xc04db18  jal         func_136C60
label_3163d8:
    if (ctx->pc == 0x3163D8u) {
        ctx->pc = 0x3163D8u;
            // 0x3163d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3163DCu;
        goto label_3163dc;
    }
    ctx->pc = 0x3163D4u;
    SET_GPR_U32(ctx, 31, 0x3163DCu);
    ctx->pc = 0x3163D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3163D4u;
            // 0x3163d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C60u;
    if (runtime->hasFunction(0x136C60u)) {
        auto targetFn = runtime->lookupFunction(0x136C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3163DCu; }
        if (ctx->pc != 0x3163DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteReference__8mgCFrameFv_0x136c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3163DCu; }
        if (ctx->pc != 0x3163DCu) { return; }
    }
    ctx->pc = 0x3163DCu;
label_3163dc:
    // 0x3163dc: 0x8f84a290  lw          $a0, -0x5D70($gp)
    ctx->pc = 0x3163dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
label_3163e0:
    // 0x3163e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3163e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3163e4:
    // 0x3163e4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3163e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3163e8:
    // 0x3163e8: 0x320f809  jalr        $t9
label_3163ec:
    if (ctx->pc == 0x3163ECu) {
        ctx->pc = 0x3163ECu;
            // 0x3163ec: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3163F0u;
        goto label_3163f0;
    }
    ctx->pc = 0x3163E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3163F0u);
        ctx->pc = 0x3163ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3163E8u;
            // 0x3163ec: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3163F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3163F0u; }
            if (ctx->pc != 0x3163F0u) { return; }
        }
        }
    }
    ctx->pc = 0x3163F0u;
label_3163f0:
    // 0x3163f0: 0xc7ad0068  lwc1        $f13, 0x68($sp)
    ctx->pc = 0x3163f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3163f4:
    // 0x3163f4: 0xc047c76  jal         func_11F1D8
label_3163f8:
    if (ctx->pc == 0x3163F8u) {
        ctx->pc = 0x3163F8u;
            // 0x3163f8: 0xc7ac0060  lwc1        $f12, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x3163FCu;
        goto label_3163fc;
    }
    ctx->pc = 0x3163F4u;
    SET_GPR_U32(ctx, 31, 0x3163FCu);
    ctx->pc = 0x3163F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3163F4u;
            // 0x3163f8: 0xc7ac0060  lwc1        $f12, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3163FCu; }
        if (ctx->pc != 0x3163FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3163FCu; }
        if (ctx->pc != 0x3163FCu) { return; }
    }
    ctx->pc = 0x3163FCu;
label_3163fc:
    // 0x3163fc: 0x8f84a290  lw          $a0, -0x5D70($gp)
    ctx->pc = 0x3163fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
label_316400:
    // 0x316400: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x316400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_316404:
    // 0x316404: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x316404u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_316408:
    // 0x316408: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x316408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31640c:
    // 0x31640c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x31640cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_316410:
    // 0x316410: 0x320f809  jalr        $t9
label_316414:
    if (ctx->pc == 0x316414u) {
        ctx->pc = 0x316414u;
            // 0x316414: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x316418u;
        goto label_316418;
    }
    ctx->pc = 0x316410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x316418u);
        ctx->pc = 0x316414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316410u;
            // 0x316414: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x316418u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x316418u; }
            if (ctx->pc != 0x316418u) { return; }
        }
        }
    }
    ctx->pc = 0x316418u;
label_316418:
    // 0x316418: 0xc05cdc0  jal         func_173700
label_31641c:
    if (ctx->pc == 0x31641Cu) {
        ctx->pc = 0x31641Cu;
            // 0x31641c: 0x8f84a290  lw          $a0, -0x5D70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
        ctx->pc = 0x316420u;
        goto label_316420;
    }
    ctx->pc = 0x316418u;
    SET_GPR_U32(ctx, 31, 0x316420u);
    ctx->pc = 0x31641Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316418u;
            // 0x31641c: 0x8f84a290  lw          $a0, -0x5D70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173700u;
    if (runtime->hasFunction(0x173700u)) {
        auto targetFn = runtime->lookupFunction(0x173700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316420u; }
        if (ctx->pc != 0x316420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdatePosition__11CCharacter2Fv_0x173700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316420u; }
        if (ctx->pc != 0x316420u) { return; }
    }
    ctx->pc = 0x316420u;
label_316420:
    // 0x316420: 0x8f82a320  lw          $v0, -0x5CE0($gp)
    ctx->pc = 0x316420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943520)));
label_316424:
    // 0x316424: 0x8f84a294  lw          $a0, -0x5D6C($gp)
    ctx->pc = 0x316424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943380)));
label_316428:
    // 0x316428: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x316428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_31642c:
    // 0x31642c: 0xaf82a320  sw          $v0, -0x5CE0($gp)
    ctx->pc = 0x31642cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943520), GPR_U32(ctx, 2));
label_316430:
    // 0x316430: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x316430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_316434:
    // 0x316434: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x316434u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_316438:
    // 0x316438: 0x320f809  jalr        $t9
label_31643c:
    if (ctx->pc == 0x31643Cu) {
        ctx->pc = 0x316440u;
        goto label_316440;
    }
    ctx->pc = 0x316438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x316440u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x316440u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x316440u; }
            if (ctx->pc != 0x316440u) { return; }
        }
        }
    }
    ctx->pc = 0x316440u;
label_316440:
    // 0x316440: 0x104000ff  beqz        $v0, . + 4 + (0xFF << 2)
label_316444:
    if (ctx->pc == 0x316444u) {
        ctx->pc = 0x316448u;
        goto label_316448;
    }
    ctx->pc = 0x316440u;
    {
        const bool branch_taken_0x316440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x316440) {
            ctx->pc = 0x316840u;
            goto label_316840;
        }
    }
    ctx->pc = 0x316448u;
label_316448:
    // 0x316448: 0x8f84a294  lw          $a0, -0x5D6C($gp)
    ctx->pc = 0x316448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943380)));
label_31644c:
    // 0x31644c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31644cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_316450:
    // 0x316450: 0x24a528c0  addiu       $a1, $a1, 0x28C0
    ctx->pc = 0x316450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10432));
label_316454:
    // 0x316454: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x316454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_316458:
    // 0x316458: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x316458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_31645c:
    // 0x31645c: 0x320f809  jalr        $t9
label_316460:
    if (ctx->pc == 0x316460u) {
        ctx->pc = 0x316460u;
            // 0x316460: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316464u;
        goto label_316464;
    }
    ctx->pc = 0x31645Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x316464u);
        ctx->pc = 0x316460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31645Cu;
            // 0x316460: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x316464u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x316464u; }
            if (ctx->pc != 0x316464u) { return; }
        }
        }
    }
    ctx->pc = 0x316464u;
label_316464:
    // 0x316464: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x316464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_316468:
    // 0x316468: 0x100000f5  b           . + 4 + (0xF5 << 2)
label_31646c:
    if (ctx->pc == 0x31646Cu) {
        ctx->pc = 0x31646Cu;
            // 0x31646c: 0xaf83a308  sw          $v1, -0x5CF8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943496), GPR_U32(ctx, 3));
        ctx->pc = 0x316470u;
        goto label_316470;
    }
    ctx->pc = 0x316468u;
    {
        const bool branch_taken_0x316468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31646Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316468u;
            // 0x31646c: 0xaf83a308  sw          $v1, -0x5CF8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943496), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316468) {
            ctx->pc = 0x316840u;
            goto label_316840;
        }
    }
    ctx->pc = 0x316470u;
label_316470:
    // 0x316470: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_316474:
    if (ctx->pc == 0x316474u) {
        ctx->pc = 0x316474u;
            // 0x316474: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x316478u;
        goto label_316478;
    }
    ctx->pc = 0x316470u;
    {
        const bool branch_taken_0x316470 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x316474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316470u;
            // 0x316474: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316470) {
            ctx->pc = 0x316494u;
            goto label_316494;
        }
    }
    ctx->pc = 0x316478u;
label_316478:
    // 0x316478: 0x8f84a290  lw          $a0, -0x5D70($gp)
    ctx->pc = 0x316478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
label_31647c:
    // 0x31647c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x31647cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_316480:
    // 0x316480: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x316480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_316484:
    // 0x316484: 0x320f809  jalr        $t9
label_316488:
    if (ctx->pc == 0x316488u) {
        ctx->pc = 0x316488u;
            // 0x316488: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x31648Cu;
        goto label_31648c;
    }
    ctx->pc = 0x316484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31648Cu);
        ctx->pc = 0x316488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316484u;
            // 0x316488: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x31648Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31648Cu; }
            if (ctx->pc != 0x31648Cu) { return; }
        }
        }
    }
    ctx->pc = 0x31648Cu;
label_31648c:
    // 0x31648c: 0x100000ec  b           . + 4 + (0xEC << 2)
label_316490:
    if (ctx->pc == 0x316490u) {
        ctx->pc = 0x316494u;
        goto label_316494;
    }
    ctx->pc = 0x31648Cu;
    {
        const bool branch_taken_0x31648c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31648c) {
            ctx->pc = 0x316840u;
            goto label_316840;
        }
    }
    ctx->pc = 0x316494u;
label_316494:
    // 0x316494: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
label_316498:
    if (ctx->pc == 0x316498u) {
        ctx->pc = 0x316498u;
            // 0x316498: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x31649Cu;
        goto label_31649c;
    }
    ctx->pc = 0x316494u;
    {
        const bool branch_taken_0x316494 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x316498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316494u;
            // 0x316498: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316494) {
            ctx->pc = 0x3164F0u;
            goto label_3164f0;
        }
    }
    ctx->pc = 0x31649Cu;
label_31649c:
    // 0x31649c: 0x8c500070  lw          $s0, 0x70($v0)
    ctx->pc = 0x31649cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_3164a0:
    // 0x3164a0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_3164a4:
    if (ctx->pc == 0x3164A4u) {
        ctx->pc = 0x3164A4u;
            // 0x3164a4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x3164A8u;
        goto label_3164a8;
    }
    ctx->pc = 0x3164A0u;
    {
        const bool branch_taken_0x3164a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3164A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3164A0u;
            // 0x3164a4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3164a0) {
            ctx->pc = 0x3164B8u;
            goto label_3164b8;
        }
    }
    ctx->pc = 0x3164A8u;
label_3164a8:
    // 0x3164a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3164a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3164ac:
    // 0x3164ac: 0xc04ddb4  jal         func_1376D0
label_3164b0:
    if (ctx->pc == 0x3164B0u) {
        ctx->pc = 0x3164B0u;
            // 0x3164b0: 0x24a528e0  addiu       $a1, $a1, 0x28E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10464));
        ctx->pc = 0x3164B4u;
        goto label_3164b4;
    }
    ctx->pc = 0x3164ACu;
    SET_GPR_U32(ctx, 31, 0x3164B4u);
    ctx->pc = 0x3164B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3164ACu;
            // 0x3164b0: 0x24a528e0  addiu       $a1, $a1, 0x28E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3164B4u; }
        if (ctx->pc != 0x3164B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3164B4u; }
        if (ctx->pc != 0x3164B4u) { return; }
    }
    ctx->pc = 0x3164B4u;
label_3164b4:
    // 0x3164b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3164b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3164b8:
    // 0x3164b8: 0x8f84a290  lw          $a0, -0x5D70($gp)
    ctx->pc = 0x3164b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
label_3164bc:
    // 0x3164bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3164bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3164c0:
    // 0x3164c0: 0x0  nop
    ctx->pc = 0x3164c0u;
    // NOP
label_3164c4:
    // 0x3164c4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3164c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3164c8:
    // 0x3164c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3164c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3164cc:
    // 0x3164cc: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x3164ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3164d0:
    // 0x3164d0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3164d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3164d4:
    // 0x3164d4: 0x320f809  jalr        $t9
label_3164d8:
    if (ctx->pc == 0x3164D8u) {
        ctx->pc = 0x3164D8u;
            // 0x3164d8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3164DCu;
        goto label_3164dc;
    }
    ctx->pc = 0x3164D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3164DCu);
        ctx->pc = 0x3164D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3164D4u;
            // 0x3164d8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3164DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3164DCu; }
            if (ctx->pc != 0x3164DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3164DCu;
label_3164dc:
    // 0x3164dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3164dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3164e0:
    // 0x3164e0: 0xc04db0c  jal         func_136C30
label_3164e4:
    if (ctx->pc == 0x3164E4u) {
        ctx->pc = 0x3164E4u;
            // 0x3164e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3164E8u;
        goto label_3164e8;
    }
    ctx->pc = 0x3164E0u;
    SET_GPR_U32(ctx, 31, 0x3164E8u);
    ctx->pc = 0x3164E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3164E0u;
            // 0x3164e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C30u;
    if (runtime->hasFunction(0x136C30u)) {
        auto targetFn = runtime->lookupFunction(0x136C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3164E8u; }
        if (ctx->pc != 0x3164E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReference__8mgCFrameFP8mgCFrame_0x136c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3164E8u; }
        if (ctx->pc != 0x3164E8u) { return; }
    }
    ctx->pc = 0x3164E8u;
label_3164e8:
    // 0x3164e8: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_3164ec:
    if (ctx->pc == 0x3164ECu) {
        ctx->pc = 0x3164F0u;
        goto label_3164f0;
    }
    ctx->pc = 0x3164E8u;
    {
        const bool branch_taken_0x3164e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3164e8) {
            ctx->pc = 0x316840u;
            goto label_316840;
        }
    }
    ctx->pc = 0x3164F0u;
label_3164f0:
    // 0x3164f0: 0x148300ab  bne         $a0, $v1, . + 4 + (0xAB << 2)
label_3164f4:
    if (ctx->pc == 0x3164F4u) {
        ctx->pc = 0x3164F4u;
            // 0x3164f4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x3164F8u;
        goto label_3164f8;
    }
    ctx->pc = 0x3164F0u;
    {
        const bool branch_taken_0x3164f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3164F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3164F0u;
            // 0x3164f4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3164f0) {
            ctx->pc = 0x3167A0u;
            goto label_3167a0;
        }
    }
    ctx->pc = 0x3164F8u;
label_3164f8:
    // 0x3164f8: 0x8f84a290  lw          $a0, -0x5D70($gp)
    ctx->pc = 0x3164f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
label_3164fc:
    // 0x3164fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3164fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_316500:
    // 0x316500: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x316500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_316504:
    // 0x316504: 0x320f809  jalr        $t9
label_316508:
    if (ctx->pc == 0x316508u) {
        ctx->pc = 0x316508u;
            // 0x316508: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x31650Cu;
        goto label_31650c;
    }
    ctx->pc = 0x316504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31650Cu);
        ctx->pc = 0x316508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316504u;
            // 0x316508: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x31650Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31650Cu; }
            if (ctx->pc != 0x31650Cu) { return; }
        }
        }
    }
    ctx->pc = 0x31650Cu;
label_31650c:
    // 0x31650c: 0x8f84a290  lw          $a0, -0x5D70($gp)
    ctx->pc = 0x31650cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
label_316510:
    // 0x316510: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x316510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_316514:
    // 0x316514: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x316514u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_316518:
    // 0x316518: 0x320f809  jalr        $t9
label_31651c:
    if (ctx->pc == 0x31651Cu) {
        ctx->pc = 0x31651Cu;
            // 0x31651c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x316520u;
        goto label_316520;
    }
    ctx->pc = 0x316518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x316520u);
        ctx->pc = 0x31651Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316518u;
            // 0x31651c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x316520u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x316520u; }
            if (ctx->pc != 0x316520u) { return; }
        }
        }
    }
    ctx->pc = 0x316520u;
label_316520:
    // 0x316520: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x316520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_316524:
    // 0x316524: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x316524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_316528:
    // 0x316528: 0xc04bcf4  jal         func_12F3D0
label_31652c:
    if (ctx->pc == 0x31652Cu) {
        ctx->pc = 0x31652Cu;
            // 0x31652c: 0x24a5f990  addiu       $a1, $a1, -0x670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965648));
        ctx->pc = 0x316530u;
        goto label_316530;
    }
    ctx->pc = 0x316528u;
    SET_GPR_U32(ctx, 31, 0x316530u);
    ctx->pc = 0x31652Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316528u;
            // 0x31652c: 0x24a5f990  addiu       $a1, $a1, -0x670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316530u; }
        if (ctx->pc != 0x316530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316530u; }
        if (ctx->pc != 0x316530u) { return; }
    }
    ctx->pc = 0x316530u;
label_316530:
    // 0x316530: 0x8f82a30c  lw          $v0, -0x5CF4($gp)
    ctx->pc = 0x316530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943500)));
label_316534:
    // 0x316534: 0x1c40002d  bgtz        $v0, . + 4 + (0x2D << 2)
label_316538:
    if (ctx->pc == 0x316538u) {
        ctx->pc = 0x316538u;
            // 0x316538: 0x3401a0d0  ori         $at, $zero, 0xA0D0 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41168);
        ctx->pc = 0x31653Cu;
        goto label_31653c;
    }
    ctx->pc = 0x316534u;
    {
        const bool branch_taken_0x316534 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x316538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316534u;
            // 0x316538: 0x3401a0d0  ori         $at, $zero, 0xA0D0 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41168);
        ctx->in_delay_slot = false;
        if (branch_taken_0x316534) {
            ctx->pc = 0x3165ECu;
            goto label_3165ec;
        }
    }
    ctx->pc = 0x31653Cu;
label_31653c:
    // 0x31653c: 0x8f84a290  lw          $a0, -0x5D70($gp)
    ctx->pc = 0x31653cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
label_316540:
    // 0x316540: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x316540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_316544:
    // 0x316544: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x316544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_316548:
    // 0x316548: 0x320f809  jalr        $t9
label_31654c:
    if (ctx->pc == 0x31654Cu) {
        ctx->pc = 0x31654Cu;
            // 0x31654c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x316550u;
        goto label_316550;
    }
    ctx->pc = 0x316548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x316550u);
        ctx->pc = 0x31654Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316548u;
            // 0x31654c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x316550u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x316550u; }
            if (ctx->pc != 0x316550u) { return; }
        }
        }
    }
    ctx->pc = 0x316550u;
label_316550:
    // 0x316550: 0x8f84a2cc  lw          $a0, -0x5D34($gp)
    ctx->pc = 0x316550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943436)));
label_316554:
    // 0x316554: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x316554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_316558:
    // 0x316558: 0x24a527b0  addiu       $a1, $a1, 0x27B0
    ctx->pc = 0x316558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10160));
label_31655c:
    // 0x31655c: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x31655cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_316560:
    // 0x316560: 0xc0b8498  jal         func_2E1260
label_316564:
    if (ctx->pc == 0x316564u) {
        ctx->pc = 0x316564u;
            // 0x316564: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x316568u;
        goto label_316568;
    }
    ctx->pc = 0x316560u;
    SET_GPR_U32(ctx, 31, 0x316568u);
    ctx->pc = 0x316564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316560u;
            // 0x316564: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316568u; }
        if (ctx->pc != 0x316568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316568u; }
        if (ctx->pc != 0x316568u) { return; }
    }
    ctx->pc = 0x316568u;
label_316568:
    // 0x316568: 0xaf82a2a0  sw          $v0, -0x5D60($gp)
    ctx->pc = 0x316568u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943392), GPR_U32(ctx, 2));
label_31656c:
    // 0x31656c: 0x8f84a2cc  lw          $a0, -0x5D34($gp)
    ctx->pc = 0x31656cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943436)));
label_316570:
    // 0x316570: 0x8f86a2a0  lw          $a2, -0x5D60($gp)
    ctx->pc = 0x316570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943392)));
label_316574:
    // 0x316574: 0xc0b8a3c  jal         func_2E28F0
label_316578:
    if (ctx->pc == 0x316578u) {
        ctx->pc = 0x316578u;
            // 0x316578: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->pc = 0x31657Cu;
        goto label_31657c;
    }
    ctx->pc = 0x316574u;
    SET_GPR_U32(ctx, 31, 0x31657Cu);
    ctx->pc = 0x316578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316574u;
            // 0x316578: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E28F0u;
    if (runtime->hasFunction(0x2E28F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31657Cu; }
        if (ctx->pc != 0x31657Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__16CEffectScriptManFii_0x2e28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31657Cu; }
        if (ctx->pc != 0x31657Cu) { return; }
    }
    ctx->pc = 0x31657Cu;
label_31657c:
    // 0x31657c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_316580:
    if (ctx->pc == 0x316580u) {
        ctx->pc = 0x316584u;
        goto label_316584;
    }
    ctx->pc = 0x31657Cu;
    {
        const bool branch_taken_0x31657c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31657c) {
            ctx->pc = 0x3165A4u;
            goto label_3165a4;
        }
    }
    ctx->pc = 0x316584u;
label_316584:
    // 0x316584: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x316584u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_316588:
    // 0x316588: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x316588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_31658c:
    // 0x31658c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x31658cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_316590:
    // 0x316590: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x316590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_316594:
    // 0x316594: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x316594u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_316598:
    // 0x316598: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x316598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_31659c:
    // 0x31659c: 0x320f809  jalr        $t9
label_3165a0:
    if (ctx->pc == 0x3165A0u) {
        ctx->pc = 0x3165A0u;
            // 0x3165a0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3165A4u;
        goto label_3165a4;
    }
    ctx->pc = 0x31659Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3165A4u);
        ctx->pc = 0x3165A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31659Cu;
            // 0x3165a0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3165A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3165A4u; }
            if (ctx->pc != 0x3165A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3165A4u;
label_3165a4:
    // 0x3165a4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3165a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_3165a8:
    // 0x3165a8: 0x3c02c1c8  lui         $v0, 0xC1C8
    ctx->pc = 0x3165a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49608 << 16));
label_3165ac:
    // 0x3165ac: 0xac20f990  sw          $zero, -0x670($at)
    ctx->pc = 0x3165acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965648), GPR_U32(ctx, 0));
label_3165b0:
    // 0x3165b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3165b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3165b4:
    // 0x3165b4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3165b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_3165b8:
    // 0x3165b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3165b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3165bc:
    // 0x3165bc: 0xac20f994  sw          $zero, -0x66C($at)
    ctx->pc = 0x3165bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965652), GPR_U32(ctx, 0));
label_3165c0:
    // 0x3165c0: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x3165c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_3165c4:
    // 0x3165c4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3165c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_3165c8:
    // 0x3165c8: 0xac22f998  sw          $v0, -0x668($at)
    ctx->pc = 0x3165c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965656), GPR_U32(ctx, 2));
label_3165cc:
    // 0x3165cc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3165ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3165d0:
    // 0x3165d0: 0xaf82a308  sw          $v0, -0x5CF8($gp)
    ctx->pc = 0x3165d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943496), GPR_U32(ctx, 2));
label_3165d4:
    // 0x3165d4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x3165d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3165d8:
    // 0x3165d8: 0xc0a11c0  jal         func_284700
label_3165dc:
    if (ctx->pc == 0x3165DCu) {
        ctx->pc = 0x3165DCu;
            // 0x3165dc: 0xaf82a30c  sw          $v0, -0x5CF4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943500), GPR_U32(ctx, 2));
        ctx->pc = 0x3165E0u;
        goto label_3165e0;
    }
    ctx->pc = 0x3165D8u;
    SET_GPR_U32(ctx, 31, 0x3165E0u);
    ctx->pc = 0x3165DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3165D8u;
            // 0x3165dc: 0xaf82a30c  sw          $v0, -0x5CF4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284700u;
    if (runtime->hasFunction(0x284700u)) {
        auto targetFn = runtime->lookupFunction(0x284700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3165E0u; }
        if (ctx->pc != 0x3165E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetActive__6CSceneFii_0x284700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3165E0u; }
        if (ctx->pc != 0x3165E0u) { return; }
    }
    ctx->pc = 0x3165E0u;
label_3165e0:
    // 0x3165e0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3165e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3165e4:
    // 0x3165e4: 0x10000065  b           . + 4 + (0x65 << 2)
label_3165e8:
    if (ctx->pc == 0x3165E8u) {
        ctx->pc = 0x3165E8u;
            // 0x3165e8: 0xaf82a314  sw          $v0, -0x5CEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943508), GPR_U32(ctx, 2));
        ctx->pc = 0x3165ECu;
        goto label_3165ec;
    }
    ctx->pc = 0x3165E4u;
    {
        const bool branch_taken_0x3165e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3165E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3165E4u;
            // 0x3165e8: 0xaf82a314  sw          $v0, -0x5CEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943508), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3165e4) {
            ctx->pc = 0x31677Cu;
            goto label_31677c;
        }
    }
    ctx->pc = 0x3165ECu;
label_3165ec:
    // 0x3165ec: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x3165ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3165f0:
    // 0x3165f0: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x3165f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_3165f4:
    // 0x3165f4: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x3165f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3165f8:
    // 0x3165f8: 0x3401a0e0  ori         $at, $zero, 0xA0E0
    ctx->pc = 0x3165f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41184);
label_3165fc:
    // 0x3165fc: 0xc04bd2c  jal         func_12F4B0
label_316600:
    if (ctx->pc == 0x316600u) {
        ctx->pc = 0x316600u;
            // 0x316600: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x316604u;
        goto label_316604;
    }
    ctx->pc = 0x3165FCu;
    SET_GPR_U32(ctx, 31, 0x316604u);
    ctx->pc = 0x316600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3165FCu;
            // 0x316600: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4B0u;
    if (runtime->hasFunction(0x12F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316604u; }
        if (ctx->pc != 0x316604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPf_0x12f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316604u; }
        if (ctx->pc != 0x316604u) { return; }
    }
    ctx->pc = 0x316604u;
label_316604:
    // 0x316604: 0x3401a0d0  ori         $at, $zero, 0xA0D0
    ctx->pc = 0x316604u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41168);
label_316608:
    // 0x316608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x316608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31660c:
    // 0x31660c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x31660cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_316610:
    // 0x316610: 0x3a13021  addu        $a2, $sp, $at
    ctx->pc = 0x316610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_316614:
    // 0x316614: 0xc0b1ed4  jal         func_2C7B50
label_316618:
    if (ctx->pc == 0x316618u) {
        ctx->pc = 0x316618u;
            // 0x316618: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x31661Cu;
        goto label_31661c;
    }
    ctx->pc = 0x316614u;
    SET_GPR_U32(ctx, 31, 0x31661Cu);
    ctx->pc = 0x316618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316614u;
            // 0x316618: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7B50u;
    if (runtime->hasFunction(0x2C7B50u)) {
        auto targetFn = runtime->lookupFunction(0x2C7B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31661Cu; }
        if (ctx->pc != 0x31661Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColPoly__6CSceneFP6CCPolyR9mgVu0FBOXi_0x2c7b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31661Cu; }
        if (ctx->pc != 0x31661Cu) { return; }
    }
    ctx->pc = 0x31661Cu;
label_31661c:
    // 0x31661c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x31661cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_316620:
    // 0x316620: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x316620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_316624:
    // 0x316624: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x316624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_316628:
    // 0x316628: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x316628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_31662c:
    // 0x31662c: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x31662cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_316630:
    // 0x316630: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x316630u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_316634:
    // 0x316634: 0xc053794  jal         func_14DE50
label_316638:
    if (ctx->pc == 0x316638u) {
        ctx->pc = 0x316638u;
            // 0x316638: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x31663Cu;
        goto label_31663c;
    }
    ctx->pc = 0x316634u;
    SET_GPR_U32(ctx, 31, 0x31663Cu);
    ctx->pc = 0x316638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316634u;
            // 0x316638: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31663Cu; }
        if (ctx->pc != 0x31663Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31663Cu; }
        if (ctx->pc != 0x31663Cu) { return; }
    }
    ctx->pc = 0x31663Cu;
label_31663c:
    // 0x31663c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_316640:
    if (ctx->pc == 0x316640u) {
        ctx->pc = 0x316644u;
        goto label_316644;
    }
    ctx->pc = 0x31663Cu;
    {
        const bool branch_taken_0x31663c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x31663c) {
            ctx->pc = 0x316690u;
            goto label_316690;
        }
    }
    ctx->pc = 0x316644u;
label_316644:
    // 0x316644: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x316644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316648:
    // 0x316648: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x316648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_31664c:
    // 0x31664c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31664cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316650:
    // 0x316650: 0x0  nop
    ctx->pc = 0x316650u;
    // NOP
label_316654:
    // 0x316654: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x316654u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316658:
    // 0x316658: 0x0  nop
    ctx->pc = 0x316658u;
    // NOP
label_31665c:
    // 0x31665c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_316660:
    if (ctx->pc == 0x316660u) {
        ctx->pc = 0x316660u;
            // 0x316660: 0x27a300b0  addiu       $v1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x316664u;
        goto label_316664;
    }
    ctx->pc = 0x31665Cu;
    {
        const bool branch_taken_0x31665c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x316660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31665Cu;
            // 0x316660: 0x27a300b0  addiu       $v1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31665c) {
            ctx->pc = 0x316690u;
            goto label_316690;
        }
    }
    ctx->pc = 0x316664u;
label_316664:
    // 0x316664: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x316664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_316668:
    // 0x316668: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x316668u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_31666c:
    // 0x31666c: 0xc0c5878  jal         func_3161E0
label_316670:
    if (ctx->pc == 0x316670u) {
        ctx->pc = 0x316670u;
            // 0x316670: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->pc = 0x316674u;
        goto label_316674;
    }
    ctx->pc = 0x31666Cu;
    SET_GPR_U32(ctx, 31, 0x316674u);
    ctx->pc = 0x316670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31666Cu;
            // 0x316670: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3161E0u;
    if (runtime->hasFunction(0x3161E0u)) {
        auto targetFn = runtime->lookupFunction(0x3161E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316674u; }
        if (ctx->pc != 0x316674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BombBomb__Fv_0x3161e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316674u; }
        if (ctx->pc != 0x316674u) { return; }
    }
    ctx->pc = 0x316674u;
label_316674:
    // 0x316674: 0xc781a2f0  lwc1        $f1, -0x5D10($gp)
    ctx->pc = 0x316674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316678:
    // 0x316678: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x316678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_31667c:
    // 0x31667c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31667cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_316680:
    // 0x316680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x316680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316684:
    // 0x316684: 0x0  nop
    ctx->pc = 0x316684u;
    // NOP
label_316688:
    // 0x316688: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x316688u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31668c:
    // 0x31668c: 0xe780a2f0  swc1        $f0, -0x5D10($gp)
    ctx->pc = 0x31668cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943472), bits); }
label_316690:
    // 0x316690: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x316690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316694:
    // 0x316694: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x316694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_316698:
    // 0x316698: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x316698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31669c:
    // 0x31669c: 0x0  nop
    ctx->pc = 0x31669cu;
    // NOP
label_3166a0:
    // 0x3166a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3166a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3166a4:
    // 0x3166a4: 0x0  nop
    ctx->pc = 0x3166a4u;
    // NOP
label_3166a8:
    // 0x3166a8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3166ac:
    if (ctx->pc == 0x3166ACu) {
        ctx->pc = 0x3166B0u;
        goto label_3166b0;
    }
    ctx->pc = 0x3166A8u;
    {
        const bool branch_taken_0x3166a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3166a8) {
            ctx->pc = 0x3166B4u;
            goto label_3166b4;
        }
    }
    ctx->pc = 0x3166B0u;
label_3166b0:
    // 0x3166b0: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x3166b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3166b4:
    // 0x3166b4: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x3166b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3166b8:
    // 0x3166b8: 0x3c02c3c8  lui         $v0, 0xC3C8
    ctx->pc = 0x3166b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
label_3166bc:
    // 0x3166bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3166bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3166c0:
    // 0x3166c0: 0x0  nop
    ctx->pc = 0x3166c0u;
    // NOP
label_3166c4:
    // 0x3166c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3166c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3166c8:
    // 0x3166c8: 0x0  nop
    ctx->pc = 0x3166c8u;
    // NOP
label_3166cc:
    // 0x3166cc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3166d0:
    if (ctx->pc == 0x3166D0u) {
        ctx->pc = 0x3166D0u;
            // 0x3166d0: 0x27a40094  addiu       $a0, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->pc = 0x3166D4u;
        goto label_3166d4;
    }
    ctx->pc = 0x3166CCu;
    {
        const bool branch_taken_0x3166cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3166D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3166CCu;
            // 0x3166d0: 0x27a40094  addiu       $a0, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3166cc) {
            ctx->pc = 0x3166D8u;
            goto label_3166d8;
        }
    }
    ctx->pc = 0x3166D4u;
label_3166d4:
    // 0x3166d4: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x3166d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3166d8:
    // 0x3166d8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3166d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3166dc:
    // 0x3166dc: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x3166dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3166e0:
    // 0x3166e0: 0x0  nop
    ctx->pc = 0x3166e0u;
    // NOP
label_3166e4:
    // 0x3166e4: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x3166e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3166e8:
    // 0x3166e8: 0x0  nop
    ctx->pc = 0x3166e8u;
    // NOP
label_3166ec:
    // 0x3166ec: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_3166f0:
    if (ctx->pc == 0x3166F0u) {
        ctx->pc = 0x3166F4u;
        goto label_3166f4;
    }
    ctx->pc = 0x3166ECu;
    {
        const bool branch_taken_0x3166ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3166ec) {
            ctx->pc = 0x316758u;
            goto label_316758;
        }
    }
    ctx->pc = 0x3166F4u;
label_3166f4:
    // 0x3166f4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3166f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_3166f8:
    // 0x3166f8: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x3166f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_3166fc:
    // 0x3166fc: 0xc422f994  lwc1        $f2, -0x66C($at)
    ctx->pc = 0x3166fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_316700:
    // 0x316700: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x316700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_316704:
    // 0x316704: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x316704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_316708:
    // 0x316708: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x316708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31670c:
    // 0x31670c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x31670cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_316710:
    // 0x316710: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x316710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_316714:
    // 0x316714: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x316714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
label_316718:
    // 0x316718: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x316718u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_31671c:
    // 0x31671c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x31671cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_316720:
    // 0x316720: 0xe422f994  swc1        $f2, -0x66C($at)
    ctx->pc = 0x316720u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294965652), bits); }
label_316724:
    // 0x316724: 0xe4840000  swc1        $f4, 0x0($a0)
    ctx->pc = 0x316724u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_316728:
    // 0x316728: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x316728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_31672c:
    // 0x31672c: 0xc422f998  lwc1        $f2, -0x668($at)
    ctx->pc = 0x31672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_316730:
    // 0x316730: 0x8f84a2d8  lw          $a0, -0x5D28($gp)
    ctx->pc = 0x316730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943448)));
label_316734:
    // 0x316734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x316734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316738:
    // 0x316738: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x316738u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31673c:
    // 0x31673c: 0x0  nop
    ctx->pc = 0x31673cu;
    // NOP
label_316740:
    // 0x316740: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x316740u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_316744:
    // 0x316744: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x316744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_316748:
    // 0x316748: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x316748u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_31674c:
    // 0x31674c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x31674cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_316750:
    // 0x316750: 0xc063818  jal         func_18E060
label_316754:
    if (ctx->pc == 0x316754u) {
        ctx->pc = 0x316754u;
            // 0x316754: 0xe420f998  swc1        $f0, -0x668($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294965656), bits); }
        ctx->pc = 0x316758u;
        goto label_316758;
    }
    ctx->pc = 0x316750u;
    SET_GPR_U32(ctx, 31, 0x316758u);
    ctx->pc = 0x316754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316750u;
            // 0x316754: 0xe420f998  swc1        $f0, -0x668($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294965656), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316758u; }
        if (ctx->pc != 0x316758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316758u; }
        if (ctx->pc != 0x316758u) { return; }
    }
    ctx->pc = 0x316758u;
label_316758:
    // 0x316758: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x316758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_31675c:
    // 0x31675c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x31675cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_316760:
    // 0x316760: 0xc421f994  lwc1        $f1, -0x66C($at)
    ctx->pc = 0x316760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316764:
    // 0x316764: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x316764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_316768:
    // 0x316768: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x316768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31676c:
    // 0x31676c: 0x0  nop
    ctx->pc = 0x31676cu;
    // NOP
label_316770:
    // 0x316770: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x316770u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_316774:
    // 0x316774: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x316774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_316778:
    // 0x316778: 0xe420f994  swc1        $f0, -0x66C($at)
    ctx->pc = 0x316778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294965652), bits); }
label_31677c:
    // 0x31677c: 0x8f84a290  lw          $a0, -0x5D70($gp)
    ctx->pc = 0x31677cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
label_316780:
    // 0x316780: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x316780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_316784:
    // 0x316784: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x316784u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_316788:
    // 0x316788: 0x320f809  jalr        $t9
label_31678c:
    if (ctx->pc == 0x31678Cu) {
        ctx->pc = 0x31678Cu;
            // 0x31678c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x316790u;
        goto label_316790;
    }
    ctx->pc = 0x316788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x316790u);
        ctx->pc = 0x31678Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316788u;
            // 0x31678c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x316790u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x316790u; }
            if (ctx->pc != 0x316790u) { return; }
        }
        }
    }
    ctx->pc = 0x316790u;
label_316790:
    // 0x316790: 0x8f83a30c  lw          $v1, -0x5CF4($gp)
    ctx->pc = 0x316790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943500)));
label_316794:
    // 0x316794: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x316794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_316798:
    // 0x316798: 0x10000029  b           . + 4 + (0x29 << 2)
label_31679c:
    if (ctx->pc == 0x31679Cu) {
        ctx->pc = 0x31679Cu;
            // 0x31679c: 0xaf83a30c  sw          $v1, -0x5CF4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943500), GPR_U32(ctx, 3));
        ctx->pc = 0x3167A0u;
        goto label_3167a0;
    }
    ctx->pc = 0x316798u;
    {
        const bool branch_taken_0x316798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31679Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316798u;
            // 0x31679c: 0xaf83a30c  sw          $v1, -0x5CF4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943500), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316798) {
            ctx->pc = 0x316840u;
            goto label_316840;
        }
    }
    ctx->pc = 0x3167A0u;
label_3167a0:
    // 0x3167a0: 0x14830027  bne         $a0, $v1, . + 4 + (0x27 << 2)
label_3167a4:
    if (ctx->pc == 0x3167A4u) {
        ctx->pc = 0x3167A8u;
        goto label_3167a8;
    }
    ctx->pc = 0x3167A0u;
    {
        const bool branch_taken_0x3167a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3167a0) {
            ctx->pc = 0x316840u;
            goto label_316840;
        }
    }
    ctx->pc = 0x3167A8u;
label_3167a8:
    // 0x3167a8: 0x8f84a290  lw          $a0, -0x5D70($gp)
    ctx->pc = 0x3167a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
label_3167ac:
    // 0x3167ac: 0x3401a0f0  ori         $at, $zero, 0xA0F0
    ctx->pc = 0x3167acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41200);
label_3167b0:
    // 0x3167b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3167b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3167b4:
    // 0x3167b4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3167b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3167b8:
    // 0x3167b8: 0x320f809  jalr        $t9
label_3167bc:
    if (ctx->pc == 0x3167BCu) {
        ctx->pc = 0x3167BCu;
            // 0x3167bc: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x3167C0u;
        goto label_3167c0;
    }
    ctx->pc = 0x3167B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3167C0u);
        ctx->pc = 0x3167BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3167B8u;
            // 0x3167bc: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3167C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3167C0u; }
            if (ctx->pc != 0x3167C0u) { return; }
        }
        }
    }
    ctx->pc = 0x3167C0u;
label_3167c0:
    // 0x3167c0: 0x8f82a310  lw          $v0, -0x5CF0($gp)
    ctx->pc = 0x3167c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943504)));
label_3167c4:
    // 0x3167c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3167c8:
    if (ctx->pc == 0x3167C8u) {
        ctx->pc = 0x3167C8u;
            // 0x3167c8: 0x3401a0f0  ori         $at, $zero, 0xA0F0 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41200);
        ctx->pc = 0x3167CCu;
        goto label_3167cc;
    }
    ctx->pc = 0x3167C4u;
    {
        const bool branch_taken_0x3167c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3167C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3167C4u;
            // 0x3167c8: 0x3401a0f0  ori         $at, $zero, 0xA0F0 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41200);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3167c4) {
            ctx->pc = 0x3167DCu;
            goto label_3167dc;
        }
    }
    ctx->pc = 0x3167CCu;
label_3167cc:
    // 0x3167cc: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x3167ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_3167d0:
    // 0x3167d0: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x3167d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_3167d4:
    // 0x3167d4: 0xc04bcf4  jal         func_12F3D0
label_3167d8:
    if (ctx->pc == 0x3167D8u) {
        ctx->pc = 0x3167D8u;
            // 0x3167d8: 0x24a5f990  addiu       $a1, $a1, -0x670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965648));
        ctx->pc = 0x3167DCu;
        goto label_3167dc;
    }
    ctx->pc = 0x3167D4u;
    SET_GPR_U32(ctx, 31, 0x3167DCu);
    ctx->pc = 0x3167D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3167D4u;
            // 0x3167d8: 0x24a5f990  addiu       $a1, $a1, -0x670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3167DCu; }
        if (ctx->pc != 0x3167DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3167DCu; }
        if (ctx->pc != 0x3167DCu) { return; }
    }
    ctx->pc = 0x3167DCu;
label_3167dc:
    // 0x3167dc: 0x8f84a290  lw          $a0, -0x5D70($gp)
    ctx->pc = 0x3167dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
label_3167e0:
    // 0x3167e0: 0x3401a0f0  ori         $at, $zero, 0xA0F0
    ctx->pc = 0x3167e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41200);
label_3167e4:
    // 0x3167e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3167e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3167e8:
    // 0x3167e8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3167e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3167ec:
    // 0x3167ec: 0x320f809  jalr        $t9
label_3167f0:
    if (ctx->pc == 0x3167F0u) {
        ctx->pc = 0x3167F0u;
            // 0x3167f0: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x3167F4u;
        goto label_3167f4;
    }
    ctx->pc = 0x3167ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3167F4u);
        ctx->pc = 0x3167F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3167ECu;
            // 0x3167f0: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3167F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3167F4u; }
            if (ctx->pc != 0x3167F4u) { return; }
        }
        }
    }
    ctx->pc = 0x3167F4u;
label_3167f4:
    // 0x3167f4: 0x8f84a2cc  lw          $a0, -0x5D34($gp)
    ctx->pc = 0x3167f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943436)));
label_3167f8:
    // 0x3167f8: 0x3401a0f0  ori         $at, $zero, 0xA0F0
    ctx->pc = 0x3167f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41200);
label_3167fc:
    // 0x3167fc: 0x8f87a2a0  lw          $a3, -0x5D60($gp)
    ctx->pc = 0x3167fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943392)));
label_316800:
    // 0x316800: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x316800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_316804:
    // 0x316804: 0xc0b8a1c  jal         func_2E2870
label_316808:
    if (ctx->pc == 0x316808u) {
        ctx->pc = 0x316808u;
            // 0x316808: 0x24060043  addiu       $a2, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->pc = 0x31680Cu;
        goto label_31680c;
    }
    ctx->pc = 0x316804u;
    SET_GPR_U32(ctx, 31, 0x31680Cu);
    ctx->pc = 0x316808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316804u;
            // 0x316808: 0x24060043  addiu       $a2, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2870u;
    if (runtime->hasFunction(0x2E2870u)) {
        auto targetFn = runtime->lookupFunction(0x2E2870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31680Cu; }
        if (ctx->pc != 0x31680Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetOrigin__16CEffectScriptManFPfii_0x2e2870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31680Cu; }
        if (ctx->pc != 0x31680Cu) { return; }
    }
    ctx->pc = 0x31680Cu;
label_31680c:
    // 0x31680c: 0x8f83a314  lw          $v1, -0x5CEC($gp)
    ctx->pc = 0x31680cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943508)));
label_316810:
    // 0x316810: 0x8f84a30c  lw          $a0, -0x5CF4($gp)
    ctx->pc = 0x316810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943500)));
label_316814:
    // 0x316814: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x316814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_316818:
    // 0x316818: 0xaf83a314  sw          $v1, -0x5CEC($gp)
    ctx->pc = 0x316818u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943508), GPR_U32(ctx, 3));
label_31681c:
    // 0x31681c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x31681cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_316820:
    // 0x316820: 0x8f83a314  lw          $v1, -0x5CEC($gp)
    ctx->pc = 0x316820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943508)));
label_316824:
    // 0x316824: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
label_316828:
    if (ctx->pc == 0x316828u) {
        ctx->pc = 0x316828u;
            // 0x316828: 0xaf84a30c  sw          $a0, -0x5CF4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943500), GPR_U32(ctx, 4));
        ctx->pc = 0x31682Cu;
        goto label_31682c;
    }
    ctx->pc = 0x316824u;
    {
        const bool branch_taken_0x316824 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x316828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316824u;
            // 0x316828: 0xaf84a30c  sw          $a0, -0x5CF4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943500), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316824) {
            ctx->pc = 0x316830u;
            goto label_316830;
        }
    }
    ctx->pc = 0x31682Cu;
label_31682c:
    // 0x31682c: 0xaf80a314  sw          $zero, -0x5CEC($gp)
    ctx->pc = 0x31682cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943508), GPR_U32(ctx, 0));
label_316830:
    // 0x316830: 0x8f83a30c  lw          $v1, -0x5CF4($gp)
    ctx->pc = 0x316830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943500)));
label_316834:
    // 0x316834: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
label_316838:
    if (ctx->pc == 0x316838u) {
        ctx->pc = 0x316838u;
            // 0x316838: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x31683Cu;
        goto label_31683c;
    }
    ctx->pc = 0x316834u;
    {
        const bool branch_taken_0x316834 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x316838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316834u;
            // 0x316838: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316834) {
            ctx->pc = 0x316840u;
            goto label_316840;
        }
    }
    ctx->pc = 0x31683Cu;
label_31683c:
    // 0x31683c: 0xaf83a308  sw          $v1, -0x5CF8($gp)
    ctx->pc = 0x31683cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943496), GPR_U32(ctx, 3));
label_316840:
    // 0x316840: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x316840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_316844:
    // 0x316844: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x316844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_316848:
    // 0x316848: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x316848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31684c:
    // 0x31684c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x31684cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_316850:
    // 0x316850: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316854:
    // 0x316854: 0x3401a100  ori         $at, $zero, 0xA100
    ctx->pc = 0x316854u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41216);
label_316858:
    // 0x316858: 0x3e00008  jr          $ra
label_31685c:
    if (ctx->pc == 0x31685Cu) {
        ctx->pc = 0x31685Cu;
            // 0x31685c: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x316860u;
        goto label_fallthrough_0x316858;
    }
    ctx->pc = 0x316858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31685Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316858u;
            // 0x31685c: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x316858:
    ctx->pc = 0x316860u;
}
