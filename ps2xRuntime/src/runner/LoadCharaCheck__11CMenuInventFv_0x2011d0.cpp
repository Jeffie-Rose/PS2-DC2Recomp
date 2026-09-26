#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadCharaCheck__11CMenuInventFv
// Address: 0x2011d0 - 0x2016a8
void LoadCharaCheck__11CMenuInventFv_0x2011d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadCharaCheck__11CMenuInventFv_0x2011d0");
#endif

    switch (ctx->pc) {
        case 0x2011d0u: goto label_2011d0;
        case 0x2011d4u: goto label_2011d4;
        case 0x2011d8u: goto label_2011d8;
        case 0x2011dcu: goto label_2011dc;
        case 0x2011e0u: goto label_2011e0;
        case 0x2011e4u: goto label_2011e4;
        case 0x2011e8u: goto label_2011e8;
        case 0x2011ecu: goto label_2011ec;
        case 0x2011f0u: goto label_2011f0;
        case 0x2011f4u: goto label_2011f4;
        case 0x2011f8u: goto label_2011f8;
        case 0x2011fcu: goto label_2011fc;
        case 0x201200u: goto label_201200;
        case 0x201204u: goto label_201204;
        case 0x201208u: goto label_201208;
        case 0x20120cu: goto label_20120c;
        case 0x201210u: goto label_201210;
        case 0x201214u: goto label_201214;
        case 0x201218u: goto label_201218;
        case 0x20121cu: goto label_20121c;
        case 0x201220u: goto label_201220;
        case 0x201224u: goto label_201224;
        case 0x201228u: goto label_201228;
        case 0x20122cu: goto label_20122c;
        case 0x201230u: goto label_201230;
        case 0x201234u: goto label_201234;
        case 0x201238u: goto label_201238;
        case 0x20123cu: goto label_20123c;
        case 0x201240u: goto label_201240;
        case 0x201244u: goto label_201244;
        case 0x201248u: goto label_201248;
        case 0x20124cu: goto label_20124c;
        case 0x201250u: goto label_201250;
        case 0x201254u: goto label_201254;
        case 0x201258u: goto label_201258;
        case 0x20125cu: goto label_20125c;
        case 0x201260u: goto label_201260;
        case 0x201264u: goto label_201264;
        case 0x201268u: goto label_201268;
        case 0x20126cu: goto label_20126c;
        case 0x201270u: goto label_201270;
        case 0x201274u: goto label_201274;
        case 0x201278u: goto label_201278;
        case 0x20127cu: goto label_20127c;
        case 0x201280u: goto label_201280;
        case 0x201284u: goto label_201284;
        case 0x201288u: goto label_201288;
        case 0x20128cu: goto label_20128c;
        case 0x201290u: goto label_201290;
        case 0x201294u: goto label_201294;
        case 0x201298u: goto label_201298;
        case 0x20129cu: goto label_20129c;
        case 0x2012a0u: goto label_2012a0;
        case 0x2012a4u: goto label_2012a4;
        case 0x2012a8u: goto label_2012a8;
        case 0x2012acu: goto label_2012ac;
        case 0x2012b0u: goto label_2012b0;
        case 0x2012b4u: goto label_2012b4;
        case 0x2012b8u: goto label_2012b8;
        case 0x2012bcu: goto label_2012bc;
        case 0x2012c0u: goto label_2012c0;
        case 0x2012c4u: goto label_2012c4;
        case 0x2012c8u: goto label_2012c8;
        case 0x2012ccu: goto label_2012cc;
        case 0x2012d0u: goto label_2012d0;
        case 0x2012d4u: goto label_2012d4;
        case 0x2012d8u: goto label_2012d8;
        case 0x2012dcu: goto label_2012dc;
        case 0x2012e0u: goto label_2012e0;
        case 0x2012e4u: goto label_2012e4;
        case 0x2012e8u: goto label_2012e8;
        case 0x2012ecu: goto label_2012ec;
        case 0x2012f0u: goto label_2012f0;
        case 0x2012f4u: goto label_2012f4;
        case 0x2012f8u: goto label_2012f8;
        case 0x2012fcu: goto label_2012fc;
        case 0x201300u: goto label_201300;
        case 0x201304u: goto label_201304;
        case 0x201308u: goto label_201308;
        case 0x20130cu: goto label_20130c;
        case 0x201310u: goto label_201310;
        case 0x201314u: goto label_201314;
        case 0x201318u: goto label_201318;
        case 0x20131cu: goto label_20131c;
        case 0x201320u: goto label_201320;
        case 0x201324u: goto label_201324;
        case 0x201328u: goto label_201328;
        case 0x20132cu: goto label_20132c;
        case 0x201330u: goto label_201330;
        case 0x201334u: goto label_201334;
        case 0x201338u: goto label_201338;
        case 0x20133cu: goto label_20133c;
        case 0x201340u: goto label_201340;
        case 0x201344u: goto label_201344;
        case 0x201348u: goto label_201348;
        case 0x20134cu: goto label_20134c;
        case 0x201350u: goto label_201350;
        case 0x201354u: goto label_201354;
        case 0x201358u: goto label_201358;
        case 0x20135cu: goto label_20135c;
        case 0x201360u: goto label_201360;
        case 0x201364u: goto label_201364;
        case 0x201368u: goto label_201368;
        case 0x20136cu: goto label_20136c;
        case 0x201370u: goto label_201370;
        case 0x201374u: goto label_201374;
        case 0x201378u: goto label_201378;
        case 0x20137cu: goto label_20137c;
        case 0x201380u: goto label_201380;
        case 0x201384u: goto label_201384;
        case 0x201388u: goto label_201388;
        case 0x20138cu: goto label_20138c;
        case 0x201390u: goto label_201390;
        case 0x201394u: goto label_201394;
        case 0x201398u: goto label_201398;
        case 0x20139cu: goto label_20139c;
        case 0x2013a0u: goto label_2013a0;
        case 0x2013a4u: goto label_2013a4;
        case 0x2013a8u: goto label_2013a8;
        case 0x2013acu: goto label_2013ac;
        case 0x2013b0u: goto label_2013b0;
        case 0x2013b4u: goto label_2013b4;
        case 0x2013b8u: goto label_2013b8;
        case 0x2013bcu: goto label_2013bc;
        case 0x2013c0u: goto label_2013c0;
        case 0x2013c4u: goto label_2013c4;
        case 0x2013c8u: goto label_2013c8;
        case 0x2013ccu: goto label_2013cc;
        case 0x2013d0u: goto label_2013d0;
        case 0x2013d4u: goto label_2013d4;
        case 0x2013d8u: goto label_2013d8;
        case 0x2013dcu: goto label_2013dc;
        case 0x2013e0u: goto label_2013e0;
        case 0x2013e4u: goto label_2013e4;
        case 0x2013e8u: goto label_2013e8;
        case 0x2013ecu: goto label_2013ec;
        case 0x2013f0u: goto label_2013f0;
        case 0x2013f4u: goto label_2013f4;
        case 0x2013f8u: goto label_2013f8;
        case 0x2013fcu: goto label_2013fc;
        case 0x201400u: goto label_201400;
        case 0x201404u: goto label_201404;
        case 0x201408u: goto label_201408;
        case 0x20140cu: goto label_20140c;
        case 0x201410u: goto label_201410;
        case 0x201414u: goto label_201414;
        case 0x201418u: goto label_201418;
        case 0x20141cu: goto label_20141c;
        case 0x201420u: goto label_201420;
        case 0x201424u: goto label_201424;
        case 0x201428u: goto label_201428;
        case 0x20142cu: goto label_20142c;
        case 0x201430u: goto label_201430;
        case 0x201434u: goto label_201434;
        case 0x201438u: goto label_201438;
        case 0x20143cu: goto label_20143c;
        case 0x201440u: goto label_201440;
        case 0x201444u: goto label_201444;
        case 0x201448u: goto label_201448;
        case 0x20144cu: goto label_20144c;
        case 0x201450u: goto label_201450;
        case 0x201454u: goto label_201454;
        case 0x201458u: goto label_201458;
        case 0x20145cu: goto label_20145c;
        case 0x201460u: goto label_201460;
        case 0x201464u: goto label_201464;
        case 0x201468u: goto label_201468;
        case 0x20146cu: goto label_20146c;
        case 0x201470u: goto label_201470;
        case 0x201474u: goto label_201474;
        case 0x201478u: goto label_201478;
        case 0x20147cu: goto label_20147c;
        case 0x201480u: goto label_201480;
        case 0x201484u: goto label_201484;
        case 0x201488u: goto label_201488;
        case 0x20148cu: goto label_20148c;
        case 0x201490u: goto label_201490;
        case 0x201494u: goto label_201494;
        case 0x201498u: goto label_201498;
        case 0x20149cu: goto label_20149c;
        case 0x2014a0u: goto label_2014a0;
        case 0x2014a4u: goto label_2014a4;
        case 0x2014a8u: goto label_2014a8;
        case 0x2014acu: goto label_2014ac;
        case 0x2014b0u: goto label_2014b0;
        case 0x2014b4u: goto label_2014b4;
        case 0x2014b8u: goto label_2014b8;
        case 0x2014bcu: goto label_2014bc;
        case 0x2014c0u: goto label_2014c0;
        case 0x2014c4u: goto label_2014c4;
        case 0x2014c8u: goto label_2014c8;
        case 0x2014ccu: goto label_2014cc;
        case 0x2014d0u: goto label_2014d0;
        case 0x2014d4u: goto label_2014d4;
        case 0x2014d8u: goto label_2014d8;
        case 0x2014dcu: goto label_2014dc;
        case 0x2014e0u: goto label_2014e0;
        case 0x2014e4u: goto label_2014e4;
        case 0x2014e8u: goto label_2014e8;
        case 0x2014ecu: goto label_2014ec;
        case 0x2014f0u: goto label_2014f0;
        case 0x2014f4u: goto label_2014f4;
        case 0x2014f8u: goto label_2014f8;
        case 0x2014fcu: goto label_2014fc;
        case 0x201500u: goto label_201500;
        case 0x201504u: goto label_201504;
        case 0x201508u: goto label_201508;
        case 0x20150cu: goto label_20150c;
        case 0x201510u: goto label_201510;
        case 0x201514u: goto label_201514;
        case 0x201518u: goto label_201518;
        case 0x20151cu: goto label_20151c;
        case 0x201520u: goto label_201520;
        case 0x201524u: goto label_201524;
        case 0x201528u: goto label_201528;
        case 0x20152cu: goto label_20152c;
        case 0x201530u: goto label_201530;
        case 0x201534u: goto label_201534;
        case 0x201538u: goto label_201538;
        case 0x20153cu: goto label_20153c;
        case 0x201540u: goto label_201540;
        case 0x201544u: goto label_201544;
        case 0x201548u: goto label_201548;
        case 0x20154cu: goto label_20154c;
        case 0x201550u: goto label_201550;
        case 0x201554u: goto label_201554;
        case 0x201558u: goto label_201558;
        case 0x20155cu: goto label_20155c;
        case 0x201560u: goto label_201560;
        case 0x201564u: goto label_201564;
        case 0x201568u: goto label_201568;
        case 0x20156cu: goto label_20156c;
        case 0x201570u: goto label_201570;
        case 0x201574u: goto label_201574;
        case 0x201578u: goto label_201578;
        case 0x20157cu: goto label_20157c;
        case 0x201580u: goto label_201580;
        case 0x201584u: goto label_201584;
        case 0x201588u: goto label_201588;
        case 0x20158cu: goto label_20158c;
        case 0x201590u: goto label_201590;
        case 0x201594u: goto label_201594;
        case 0x201598u: goto label_201598;
        case 0x20159cu: goto label_20159c;
        case 0x2015a0u: goto label_2015a0;
        case 0x2015a4u: goto label_2015a4;
        case 0x2015a8u: goto label_2015a8;
        case 0x2015acu: goto label_2015ac;
        case 0x2015b0u: goto label_2015b0;
        case 0x2015b4u: goto label_2015b4;
        case 0x2015b8u: goto label_2015b8;
        case 0x2015bcu: goto label_2015bc;
        case 0x2015c0u: goto label_2015c0;
        case 0x2015c4u: goto label_2015c4;
        case 0x2015c8u: goto label_2015c8;
        case 0x2015ccu: goto label_2015cc;
        case 0x2015d0u: goto label_2015d0;
        case 0x2015d4u: goto label_2015d4;
        case 0x2015d8u: goto label_2015d8;
        case 0x2015dcu: goto label_2015dc;
        case 0x2015e0u: goto label_2015e0;
        case 0x2015e4u: goto label_2015e4;
        case 0x2015e8u: goto label_2015e8;
        case 0x2015ecu: goto label_2015ec;
        case 0x2015f0u: goto label_2015f0;
        case 0x2015f4u: goto label_2015f4;
        case 0x2015f8u: goto label_2015f8;
        case 0x2015fcu: goto label_2015fc;
        case 0x201600u: goto label_201600;
        case 0x201604u: goto label_201604;
        case 0x201608u: goto label_201608;
        case 0x20160cu: goto label_20160c;
        case 0x201610u: goto label_201610;
        case 0x201614u: goto label_201614;
        case 0x201618u: goto label_201618;
        case 0x20161cu: goto label_20161c;
        case 0x201620u: goto label_201620;
        case 0x201624u: goto label_201624;
        case 0x201628u: goto label_201628;
        case 0x20162cu: goto label_20162c;
        case 0x201630u: goto label_201630;
        case 0x201634u: goto label_201634;
        case 0x201638u: goto label_201638;
        case 0x20163cu: goto label_20163c;
        case 0x201640u: goto label_201640;
        case 0x201644u: goto label_201644;
        case 0x201648u: goto label_201648;
        case 0x20164cu: goto label_20164c;
        case 0x201650u: goto label_201650;
        case 0x201654u: goto label_201654;
        case 0x201658u: goto label_201658;
        case 0x20165cu: goto label_20165c;
        case 0x201660u: goto label_201660;
        case 0x201664u: goto label_201664;
        case 0x201668u: goto label_201668;
        case 0x20166cu: goto label_20166c;
        case 0x201670u: goto label_201670;
        case 0x201674u: goto label_201674;
        case 0x201678u: goto label_201678;
        case 0x20167cu: goto label_20167c;
        case 0x201680u: goto label_201680;
        case 0x201684u: goto label_201684;
        case 0x201688u: goto label_201688;
        case 0x20168cu: goto label_20168c;
        case 0x201690u: goto label_201690;
        case 0x201694u: goto label_201694;
        case 0x201698u: goto label_201698;
        case 0x20169cu: goto label_20169c;
        case 0x2016a0u: goto label_2016a0;
        case 0x2016a4u: goto label_2016a4;
        default: break;
    }

    ctx->pc = 0x2011d0u;

label_2011d0:
    // 0x2011d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2011d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2011d4:
    // 0x2011d4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2011d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2011d8:
    // 0x2011d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2011d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2011dc:
    // 0x2011dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2011dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2011e0:
    // 0x2011e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2011e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2011e4:
    // 0x2011e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2011e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2011e8:
    // 0x2011e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2011e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2011ec:
    // 0x2011ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2011ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2011f0:
    // 0x2011f0: 0x3c1201ed  lui         $s2, 0x1ED
    ctx->pc = 0x2011f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)493 << 16));
label_2011f4:
    // 0x2011f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2011f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2011f8:
    // 0x2011f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2011f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2011fc:
    // 0x2011fc: 0x8c31caa0  lw          $s1, -0x3560($at)
    ctx->pc = 0x2011fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_201200:
    // 0x201200: 0x80840634  lb          $a0, 0x634($a0)
    ctx->pc = 0x201200u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1588)));
label_201204:
    // 0x201204: 0x1083011c  beq         $a0, $v1, . + 4 + (0x11C << 2)
label_201208:
    if (ctx->pc == 0x201208u) {
        ctx->pc = 0x201208u;
            // 0x201208: 0x2652dbf0  addiu       $s2, $s2, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958064));
        ctx->pc = 0x20120Cu;
        goto label_20120c;
    }
    ctx->pc = 0x201204u;
    {
        const bool branch_taken_0x201204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x201208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201204u;
            // 0x201208: 0x2652dbf0  addiu       $s2, $s2, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201204) {
            ctx->pc = 0x201678u;
            goto label_201678;
        }
    }
    ctx->pc = 0x20120Cu;
label_20120c:
    // 0x20120c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20120cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201210:
    // 0x201210: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
label_201214:
    if (ctx->pc == 0x201214u) {
        ctx->pc = 0x201218u;
        goto label_201218;
    }
    ctx->pc = 0x201210u;
    {
        const bool branch_taken_0x201210 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x201210) {
            ctx->pc = 0x2012F0u;
            goto label_2012f0;
        }
    }
    ctx->pc = 0x201218u;
label_201218:
    // 0x201218: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_20121c:
    if (ctx->pc == 0x20121Cu) {
        ctx->pc = 0x20121Cu;
            // 0x20121c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x201220u;
        goto label_201220;
    }
    ctx->pc = 0x201218u;
    {
        const bool branch_taken_0x201218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20121Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201218u;
            // 0x20121c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201218) {
            ctx->pc = 0x201230u;
            goto label_201230;
        }
    }
    ctx->pc = 0x201220u;
label_201220:
    // 0x201220: 0x10830119  beq         $a0, $v1, . + 4 + (0x119 << 2)
label_201224:
    if (ctx->pc == 0x201224u) {
        ctx->pc = 0x201228u;
        goto label_201228;
    }
    ctx->pc = 0x201220u;
    {
        const bool branch_taken_0x201220 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x201220) {
            ctx->pc = 0x201688u;
            goto label_201688;
        }
    }
    ctx->pc = 0x201228u;
label_201228:
    // 0x201228: 0x10000118  b           . + 4 + (0x118 << 2)
label_20122c:
    if (ctx->pc == 0x20122Cu) {
        ctx->pc = 0x20122Cu;
            // 0x20122c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x201230u;
        goto label_201230;
    }
    ctx->pc = 0x201228u;
    {
        const bool branch_taken_0x201228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20122Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201228u;
            // 0x20122c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201228) {
            ctx->pc = 0x20168Cu;
            goto label_20168c;
        }
    }
    ctx->pc = 0x201230u;
label_201230:
    // 0x201230: 0x8e040f10  lw          $a0, 0xF10($s0)
    ctx->pc = 0x201230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3856)));
label_201234:
    // 0x201234: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_201238:
    if (ctx->pc == 0x201238u) {
        ctx->pc = 0x201238u;
            // 0x201238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20123Cu;
        goto label_20123c;
    }
    ctx->pc = 0x201234u;
    {
        const bool branch_taken_0x201234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201234u;
            // 0x201238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201234) {
            ctx->pc = 0x201250u;
            goto label_201250;
        }
    }
    ctx->pc = 0x20123Cu;
label_20123c:
    // 0x20123c: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x20123cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_201240:
    // 0x201240: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201244:
    // 0x201244: 0xc0896c8  jal         func_225B20
label_201248:
    if (ctx->pc == 0x201248u) {
        ctx->pc = 0x201248u;
            // 0x201248: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x20124Cu;
        goto label_20124c;
    }
    ctx->pc = 0x201244u;
    SET_GPR_U32(ctx, 31, 0x20124Cu);
    ctx->pc = 0x201248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201244u;
            // 0x201248: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B20u;
    if (runtime->hasFunction(0x225B20u)) {
        auto targetFn = runtime->lookupFunction(0x225B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20124Cu; }
        if (ctx->pc != 0x20124Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActionCharaPtr__16CMenuPosDataFormFP12CActionCharaii_0x225b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20124Cu; }
        if (ctx->pc != 0x20124Cu) { return; }
    }
    ctx->pc = 0x20124Cu;
label_20124c:
    // 0x20124c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20124cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201250:
    // 0x201250: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x201250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201254:
    // 0x201254: 0xa3829b70  sb          $v0, -0x6490($gp)
    ctx->pc = 0x201254u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941552), (uint8_t)GPR_U32(ctx, 2));
label_201258:
    // 0x201258: 0xa3829b72  sb          $v0, -0x648E($gp)
    ctx->pc = 0x201258u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941554), (uint8_t)GPR_U32(ctx, 2));
label_20125c:
    // 0x20125c: 0xa3809b73  sb          $zero, -0x648D($gp)
    ctx->pc = 0x20125cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941555), (uint8_t)GPR_U32(ctx, 0));
label_201260:
    // 0x201260: 0xc0abf6c  jal         func_2AFDB0
label_201264:
    if (ctx->pc == 0x201264u) {
        ctx->pc = 0x201264u;
            // 0x201264: 0xa3809b77  sb          $zero, -0x6489($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941559), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x201268u;
        goto label_201268;
    }
    ctx->pc = 0x201260u;
    SET_GPR_U32(ctx, 31, 0x201268u);
    ctx->pc = 0x201264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201260u;
            // 0x201264: 0xa3809b77  sb          $zero, -0x6489($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941559), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFDB0u;
    if (runtime->hasFunction(0x2AFDB0u)) {
        auto targetFn = runtime->lookupFunction(0x2AFDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201268u; }
        if (ctx->pc != 0x201268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuLoadItemNo__Fi_0x2afdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201268u; }
        if (ctx->pc != 0x201268u) { return; }
    }
    ctx->pc = 0x201268u;
label_201268:
    // 0x201268: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x201268u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
label_20126c:
    // 0x20126c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20126cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_201270:
    // 0x201270: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201274:
    // 0x201274: 0x24c6ca80  addiu       $a2, $a2, -0x3580
    ctx->pc = 0x201274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953600));
label_201278:
    // 0x201278: 0xc0ae434  jal         func_2B90D0
label_20127c:
    if (ctx->pc == 0x20127Cu) {
        ctx->pc = 0x20127Cu;
            // 0x20127c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201280u;
        goto label_201280;
    }
    ctx->pc = 0x201278u;
    SET_GPR_U32(ctx, 31, 0x201280u);
    ctx->pc = 0x20127Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201278u;
            // 0x20127c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B90D0u;
    if (runtime->hasFunction(0x2B90D0u)) {
        auto targetFn = runtime->lookupFunction(0x2B90D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201280u; }
        if (ctx->pc != 0x201280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoad__FP9mgCMemoryiPP17MENU_BGREAD_INFO2i_0x2b90d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201280u; }
        if (ctx->pc != 0x201280u) { return; }
    }
    ctx->pc = 0x201280u;
label_201280:
    // 0x201280: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x201280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_201284:
    // 0x201284: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x201284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201288:
    // 0x201288: 0xa2040634  sb          $a0, 0x634($s0)
    ctx->pc = 0x201288u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1588), (uint8_t)GPR_U32(ctx, 4));
label_20128c:
    // 0x20128c: 0xae000638  sw          $zero, 0x638($s0)
    ctx->pc = 0x20128cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1592), GPR_U32(ctx, 0));
label_201290:
    // 0x201290: 0x86030110  lh          $v1, 0x110($s0)
    ctx->pc = 0x201290u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_201294:
    // 0x201294: 0x146400fc  bne         $v1, $a0, . + 4 + (0xFC << 2)
label_201298:
    if (ctx->pc == 0x201298u) {
        ctx->pc = 0x20129Cu;
        goto label_20129c;
    }
    ctx->pc = 0x201294u;
    {
        const bool branch_taken_0x201294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x201294) {
            ctx->pc = 0x201688u;
            goto label_201688;
        }
    }
    ctx->pc = 0x20129Cu;
label_20129c:
    // 0x20129c: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x20129cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2012a0:
    // 0x2012a0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2012a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2012a4:
    // 0x2012a4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2012a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2012a8:
    // 0x2012a8: 0x24849220  addiu       $a0, $a0, -0x6DE0
    ctx->pc = 0x2012a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939168));
label_2012ac:
    // 0x2012ac: 0x27a6006c  addiu       $a2, $sp, 0x6C
    ctx->pc = 0x2012acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_2012b0:
    // 0x2012b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2012b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2012b4:
    // 0x2012b4: 0xc05224c  jal         func_148930
label_2012b8:
    if (ctx->pc == 0x2012B8u) {
        ctx->pc = 0x2012B8u;
            // 0x2012b8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2012BCu;
        goto label_2012bc;
    }
    ctx->pc = 0x2012B4u;
    SET_GPR_U32(ctx, 31, 0x2012BCu);
    ctx->pc = 0x2012B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2012B4u;
            // 0x2012b8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2012BCu; }
        if (ctx->pc != 0x2012BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2012BCu; }
        if (ctx->pc != 0x2012BCu) { return; }
    }
    ctx->pc = 0x2012BCu;
label_2012bc:
    // 0x2012bc: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x2012bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_2012c0:
    // 0x2012c0: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2012c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_2012c4:
    // 0x2012c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2012c8:
    if (ctx->pc == 0x2012C8u) {
        ctx->pc = 0x2012C8u;
            // 0x2012c8: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x2012CCu;
        goto label_2012cc;
    }
    ctx->pc = 0x2012C4u;
    {
        const bool branch_taken_0x2012c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2012C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2012C4u;
            // 0x2012c8: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2012c4) {
            ctx->pc = 0x2012D4u;
            goto label_2012d4;
        }
    }
    ctx->pc = 0x2012CCu;
label_2012cc:
    // 0x2012cc: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2012ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_2012d0:
    // 0x2012d0: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2012d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2012d4:
    // 0x2012d4: 0xc04e748  jal         func_139D20
label_2012d8:
    if (ctx->pc == 0x2012D8u) {
        ctx->pc = 0x2012D8u;
            // 0x2012d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2012DCu;
        goto label_2012dc;
    }
    ctx->pc = 0x2012D4u;
    SET_GPR_U32(ctx, 31, 0x2012DCu);
    ctx->pc = 0x2012D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2012D4u;
            // 0x2012d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2012DCu; }
        if (ctx->pc != 0x2012DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2012DCu; }
        if (ctx->pc != 0x2012DCu) { return; }
    }
    ctx->pc = 0x2012DCu;
label_2012dc:
    // 0x2012dc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2012dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2012e0:
    // 0x2012e0: 0xc094504  jal         func_251410
label_2012e4:
    if (ctx->pc == 0x2012E4u) {
        ctx->pc = 0x2012E4u;
            // 0x2012e4: 0x24849220  addiu       $a0, $a0, -0x6DE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939168));
        ctx->pc = 0x2012E8u;
        goto label_2012e8;
    }
    ctx->pc = 0x2012E0u;
    SET_GPR_U32(ctx, 31, 0x2012E8u);
    ctx->pc = 0x2012E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2012E0u;
            // 0x2012e4: 0x24849220  addiu       $a0, $a0, -0x6DE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251410u;
    if (runtime->hasFunction(0x251410u)) {
        auto targetFn = runtime->lookupFunction(0x251410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2012E8u; }
        if (ctx->pc != 0x2012E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGInfo__FPc_0x251410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2012E8u; }
        if (ctx->pc != 0x2012E8u) { return; }
    }
    ctx->pc = 0x2012E8u;
label_2012e8:
    // 0x2012e8: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_2012ec:
    if (ctx->pc == 0x2012ECu) {
        ctx->pc = 0x2012ECu;
            // 0x2012ec: 0xae020630  sw          $v0, 0x630($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 2));
        ctx->pc = 0x2012F0u;
        goto label_2012f0;
    }
    ctx->pc = 0x2012E8u;
    {
        const bool branch_taken_0x2012e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2012ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2012E8u;
            // 0x2012ec: 0xae020630  sw          $v0, 0x630($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2012e8) {
            ctx->pc = 0x201688u;
            goto label_201688;
        }
    }
    ctx->pc = 0x2012F0u;
label_2012f0:
    // 0x2012f0: 0xc05239c  jal         func_148E70
label_2012f4:
    if (ctx->pc == 0x2012F4u) {
        ctx->pc = 0x2012F8u;
        goto label_2012f8;
    }
    ctx->pc = 0x2012F0u;
    SET_GPR_U32(ctx, 31, 0x2012F8u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2012F8u; }
        if (ctx->pc != 0x2012F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2012F8u; }
        if (ctx->pc != 0x2012F8u) { return; }
    }
    ctx->pc = 0x2012F8u;
label_2012f8:
    // 0x2012f8: 0x144000e3  bnez        $v0, . + 4 + (0xE3 << 2)
label_2012fc:
    if (ctx->pc == 0x2012FCu) {
        ctx->pc = 0x201300u;
        goto label_201300;
    }
    ctx->pc = 0x2012F8u;
    {
        const bool branch_taken_0x2012f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2012f8) {
            ctx->pc = 0x201688u;
            goto label_201688;
        }
    }
    ctx->pc = 0x201300u;
label_201300:
    // 0x201300: 0x8e08001c  lw          $t0, 0x1C($s0)
    ctx->pc = 0x201300u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_201304:
    // 0x201304: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x201304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_201308:
    // 0x201308: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x201308u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
label_20130c:
    // 0x20130c: 0x2484ca80  addiu       $a0, $a0, -0x3580
    ctx->pc = 0x20130cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
label_201310:
    // 0x201310: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201314:
    // 0x201314: 0x24c6caa0  addiu       $a2, $a2, -0x3560
    ctx->pc = 0x201314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953632));
label_201318:
    // 0x201318: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x201318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20131c:
    // 0x20131c: 0xc0ae634  jal         func_2B98D0
label_201320:
    if (ctx->pc == 0x201320u) {
        ctx->pc = 0x201320u;
            // 0x201320: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x201324u;
        goto label_201324;
    }
    ctx->pc = 0x20131Cu;
    SET_GPR_U32(ctx, 31, 0x201324u);
    ctx->pc = 0x201320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20131Cu;
            // 0x201320: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B98D0u;
    if (runtime->hasFunction(0x2B98D0u)) {
        auto targetFn = runtime->lookupFunction(0x2B98D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201324u; }
        if (ctx->pc != 0x201324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoadEndCheck__FPP17MENU_BGREAD_INFO2P9mgCMemoryPP12CActionCharaiii_0x2b98d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201324u; }
        if (ctx->pc != 0x201324u) { return; }
    }
    ctx->pc = 0x201324u;
label_201324:
    // 0x201324: 0xc05af58  jal         func_16BD60
label_201328:
    if (ctx->pc == 0x201328u) {
        ctx->pc = 0x201328u;
            // 0x201328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20132Cu;
        goto label_20132c;
    }
    ctx->pc = 0x201324u;
    SET_GPR_U32(ctx, 31, 0x20132Cu);
    ctx->pc = 0x201328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201324u;
            // 0x201328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BD60u;
    if (runtime->hasFunction(0x16BD60u)) {
        auto targetFn = runtime->lookupFunction(0x16BD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20132Cu; }
        if (ctx->pc != 0x20132Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetParent__12CActionCharaFv_0x16bd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20132Cu; }
        if (ctx->pc != 0x20132Cu) { return; }
    }
    ctx->pc = 0x20132Cu;
label_20132c:
    // 0x20132c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x20132cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_201330:
    // 0x201330: 0x8c25caac  lw          $a1, -0x3554($at)
    ctx->pc = 0x201330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953644)));
label_201334:
    // 0x201334: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_201338:
    if (ctx->pc == 0x201338u) {
        ctx->pc = 0x201338u;
            // 0x201338: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x20133Cu;
        goto label_20133c;
    }
    ctx->pc = 0x201334u;
    {
        const bool branch_taken_0x201334 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x201338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201334u;
            // 0x201338: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201334) {
            ctx->pc = 0x201368u;
            goto label_201368;
        }
    }
    ctx->pc = 0x20133Cu;
label_20133c:
    // 0x20133c: 0x8c22d8c0  lw          $v0, -0x2740($at)
    ctx->pc = 0x20133cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957248)));
label_201340:
    // 0x201340: 0x8442024a  lh          $v0, 0x24A($v0)
    ctx->pc = 0x201340u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 586)));
label_201344:
    // 0x201344: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_201348:
    if (ctx->pc == 0x201348u) {
        ctx->pc = 0x201348u;
            // 0x201348: 0x3c060037  lui         $a2, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x20134Cu;
        goto label_20134c;
    }
    ctx->pc = 0x201344u;
    {
        const bool branch_taken_0x201344 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x201348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201344u;
            // 0x201348: 0x3c060037  lui         $a2, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201344) {
            ctx->pc = 0x201368u;
            goto label_201368;
        }
    }
    ctx->pc = 0x20134Cu;
label_20134c:
    // 0x20134c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20134cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_201350:
    // 0x201350: 0xc05af64  jal         func_16BD90
label_201354:
    if (ctx->pc == 0x201354u) {
        ctx->pc = 0x201354u;
            // 0x201354: 0x24c69238  addiu       $a2, $a2, -0x6DC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939192));
        ctx->pc = 0x201358u;
        goto label_201358;
    }
    ctx->pc = 0x201350u;
    SET_GPR_U32(ctx, 31, 0x201358u);
    ctx->pc = 0x201354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201350u;
            // 0x201354: 0x24c69238  addiu       $a2, $a2, -0x6DC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (runtime->hasFunction(0x16BD90u)) {
        auto targetFn = runtime->lookupFunction(0x16BD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201358u; }
        if (ctx->pc != 0x201358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__12CActionCharaFP12CActionCharaPc_0x16bd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201358u; }
        if (ctx->pc != 0x201358u) { return; }
    }
    ctx->pc = 0x201358u;
label_201358:
    // 0x201358: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x201358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_20135c:
    // 0x20135c: 0x8c25caac  lw          $a1, -0x3554($at)
    ctx->pc = 0x20135cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953644)));
label_201360:
    // 0x201360: 0xc05cbc0  jal         func_172F00
label_201364:
    if (ctx->pc == 0x201364u) {
        ctx->pc = 0x201364u;
            // 0x201364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201368u;
        goto label_201368;
    }
    ctx->pc = 0x201360u;
    SET_GPR_U32(ctx, 31, 0x201368u);
    ctx->pc = 0x201364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201360u;
            // 0x201364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172F00u;
    if (runtime->hasFunction(0x172F00u)) {
        auto targetFn = runtime->lookupFunction(0x172F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201368u; }
        if (ctx->pc != 0x201368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyOutLine__11CCharacter2FP11CCharacter2_0x172f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201368u; }
        if (ctx->pc != 0x201368u) { return; }
    }
    ctx->pc = 0x201368u;
label_201368:
    // 0x201368: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x201368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_20136c:
    // 0x20136c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_201370:
    if (ctx->pc == 0x201370u) {
        ctx->pc = 0x201374u;
        goto label_201374;
    }
    ctx->pc = 0x20136Cu;
    {
        const bool branch_taken_0x20136c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20136c) {
            ctx->pc = 0x20138Cu;
            goto label_20138c;
        }
    }
    ctx->pc = 0x201374u;
label_201374:
    // 0x201374: 0x8c8500f4  lw          $a1, 0xF4($a0)
    ctx->pc = 0x201374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
label_201378:
    // 0x201378: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x201378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20137c:
    // 0x20137c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x20137cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_201380:
    // 0x201380: 0x34478000  ori         $a3, $v0, 0x8000
    ctx->pc = 0x201380u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_201384:
    // 0x201384: 0xc04de54  jal         func_137950
label_201388:
    if (ctx->pc == 0x201388u) {
        ctx->pc = 0x201388u;
            // 0x201388: 0xaca60060  sw          $a2, 0x60($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 6));
        ctx->pc = 0x20138Cu;
        goto label_20138c;
    }
    ctx->pc = 0x201384u;
    SET_GPR_U32(ctx, 31, 0x20138Cu);
    ctx->pc = 0x201388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201384u;
            // 0x201388: 0xaca60060  sw          $a2, 0x60($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20138Cu; }
        if (ctx->pc != 0x20138Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20138Cu; }
        if (ctx->pc != 0x20138Cu) { return; }
    }
    ctx->pc = 0x20138Cu;
label_20138c:
    // 0x20138c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x20138cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_201390:
    // 0x201390: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x201390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_201394:
    // 0x201394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x201394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_201398:
    // 0x201398: 0x24a59240  addiu       $a1, $a1, -0x6DC0
    ctx->pc = 0x201398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939200));
label_20139c:
    // 0x20139c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20139cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2013a0:
    // 0x2013a0: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x2013a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_2013a4:
    // 0x2013a4: 0x320f809  jalr        $t9
label_2013a8:
    if (ctx->pc == 0x2013A8u) {
        ctx->pc = 0x2013A8u;
            // 0x2013a8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2013ACu;
        goto label_2013ac;
    }
    ctx->pc = 0x2013A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2013ACu);
        ctx->pc = 0x2013A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2013A4u;
            // 0x2013a8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2013ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2013ACu; }
            if (ctx->pc != 0x2013ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2013ACu;
label_2013ac:
    // 0x2013ac: 0x8e140630  lw          $s4, 0x630($s0)
    ctx->pc = 0x2013acu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1584)));
label_2013b0:
    // 0x2013b0: 0x12800076  beqz        $s4, . + 4 + (0x76 << 2)
label_2013b4:
    if (ctx->pc == 0x2013B4u) {
        ctx->pc = 0x2013B8u;
        goto label_2013b8;
    }
    ctx->pc = 0x2013B0u;
    {
        const bool branch_taken_0x2013b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2013b0) {
            ctx->pc = 0x20158Cu;
            goto label_20158c;
        }
    }
    ctx->pc = 0x2013B8u;
label_2013b8:
    // 0x2013b8: 0x8e840110  lw          $a0, 0x110($s4)
    ctx->pc = 0x2013b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
label_2013bc:
    // 0x2013bc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2013bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2013c0:
    // 0x2013c0: 0x24a59248  addiu       $a1, $a1, -0x6DB8
    ctx->pc = 0x2013c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939208));
label_2013c4:
    // 0x2013c4: 0xc052734  jal         func_149CD0
label_2013c8:
    if (ctx->pc == 0x2013C8u) {
        ctx->pc = 0x2013C8u;
            // 0x2013c8: 0x27a6006c  addiu       $a2, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->pc = 0x2013CCu;
        goto label_2013cc;
    }
    ctx->pc = 0x2013C4u;
    SET_GPR_U32(ctx, 31, 0x2013CCu);
    ctx->pc = 0x2013C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2013C4u;
            // 0x2013c8: 0x27a6006c  addiu       $a2, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2013CCu; }
        if (ctx->pc != 0x2013CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2013CCu; }
        if (ctx->pc != 0x2013CCu) { return; }
    }
    ctx->pc = 0x2013CCu;
label_2013cc:
    // 0x2013cc: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x2013ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
label_2013d0:
    // 0x2013d0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2013d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2013d4:
    // 0x2013d4: 0x26521ef0  addiu       $s2, $s2, 0x1EF0
    ctx->pc = 0x2013d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7920));
label_2013d8:
    // 0x2013d8: 0xae000560  sw          $zero, 0x560($s0)
    ctx->pc = 0x2013d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 0));
label_2013dc:
    // 0x2013dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2013dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2013e0:
    // 0x2013e0: 0x264401d8  addiu       $a0, $s2, 0x1D8
    ctx->pc = 0x2013e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 472));
label_2013e4:
    // 0x2013e4: 0x24a59258  addiu       $a1, $a1, -0x6DA8
    ctx->pc = 0x2013e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939224));
label_2013e8:
    // 0x2013e8: 0xc04a3dc  jal         func_128F70
label_2013ec:
    if (ctx->pc == 0x2013ECu) {
        ctx->pc = 0x2013ECu;
            // 0x2013ec: 0xae000558  sw          $zero, 0x558($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1368), GPR_U32(ctx, 0));
        ctx->pc = 0x2013F0u;
        goto label_2013f0;
    }
    ctx->pc = 0x2013E8u;
    SET_GPR_U32(ctx, 31, 0x2013F0u);
    ctx->pc = 0x2013ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2013E8u;
            // 0x2013ec: 0xae000558  sw          $zero, 0x558($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2013F0u; }
        if (ctx->pc != 0x2013F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2013F0u; }
        if (ctx->pc != 0x2013F0u) { return; }
    }
    ctx->pc = 0x2013F0u;
label_2013f0:
    // 0x2013f0: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
label_2013f4:
    if (ctx->pc == 0x2013F4u) {
        ctx->pc = 0x2013F8u;
        goto label_2013f8;
    }
    ctx->pc = 0x2013F0u;
    {
        const bool branch_taken_0x2013f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2013f0) {
            ctx->pc = 0x201428u;
            goto label_201428;
        }
    }
    ctx->pc = 0x2013F8u;
label_2013f8:
    // 0x2013f8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2013f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2013fc:
    // 0x2013fc: 0x2607053c  addiu       $a3, $s0, 0x53C
    ctx->pc = 0x2013fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1340));
label_201400:
    // 0x201400: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x201400u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_201404:
    // 0x201404: 0x8e0a001c  lw          $t2, 0x1C($s0)
    ctx->pc = 0x201404u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_201408:
    // 0x201408: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x201408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20140c:
    // 0x20140c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20140cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_201410:
    // 0x201410: 0x24c69260  addiu       $a2, $a2, -0x6DA0
    ctx->pc = 0x201410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939232));
label_201414:
    // 0x201414: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x201414u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_201418:
    // 0x201418: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x201418u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20141c:
    // 0x20141c: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x20141cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_201420:
    // 0x201420: 0x320f809  jalr        $t9
label_201424:
    if (ctx->pc == 0x201424u) {
        ctx->pc = 0x201424u;
            // 0x201424: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201428u;
        goto label_201428;
    }
    ctx->pc = 0x201420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x201428u);
        ctx->pc = 0x201424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201420u;
            // 0x201424: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x201428u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x201428u; }
            if (ctx->pc != 0x201428u) { return; }
        }
        }
    }
    ctx->pc = 0x201428u;
label_201428:
    // 0x201428: 0x8e840110  lw          $a0, 0x110($s4)
    ctx->pc = 0x201428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
label_20142c:
    // 0x20142c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20142cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_201430:
    // 0x201430: 0x24a59270  addiu       $a1, $a1, -0x6D90
    ctx->pc = 0x201430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939248));
label_201434:
    // 0x201434: 0xc052734  jal         func_149CD0
label_201438:
    if (ctx->pc == 0x201438u) {
        ctx->pc = 0x201438u;
            // 0x201438: 0x27a6006c  addiu       $a2, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->pc = 0x20143Cu;
        goto label_20143c;
    }
    ctx->pc = 0x201434u;
    SET_GPR_U32(ctx, 31, 0x20143Cu);
    ctx->pc = 0x201438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201434u;
            // 0x201438: 0x27a6006c  addiu       $a2, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20143Cu; }
        if (ctx->pc != 0x20143Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20143Cu; }
        if (ctx->pc != 0x20143Cu) { return; }
    }
    ctx->pc = 0x20143Cu;
label_20143c:
    // 0x20143c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x20143cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201440:
    // 0x201440: 0x2604053c  addiu       $a0, $s0, 0x53C
    ctx->pc = 0x201440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1340));
label_201444:
    // 0x201444: 0xc04e748  jal         func_139D20
label_201448:
    if (ctx->pc == 0x201448u) {
        ctx->pc = 0x201448u;
            // 0x201448: 0x24050105  addiu       $a1, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->pc = 0x20144Cu;
        goto label_20144c;
    }
    ctx->pc = 0x201444u;
    SET_GPR_U32(ctx, 31, 0x20144Cu);
    ctx->pc = 0x201448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201444u;
            // 0x201448: 0x24050105  addiu       $a1, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20144Cu; }
        if (ctx->pc != 0x20144Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20144Cu; }
        if (ctx->pc != 0x20144Cu) { return; }
    }
    ctx->pc = 0x20144Cu;
label_20144c:
    // 0x20144c: 0x24041030  addiu       $a0, $zero, 0x1030
    ctx->pc = 0x20144cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4144));
label_201450:
    // 0x201450: 0xc04e638  jal         func_1398E0
label_201454:
    if (ctx->pc == 0x201454u) {
        ctx->pc = 0x201454u;
            // 0x201454: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201458u;
        goto label_201458;
    }
    ctx->pc = 0x201450u;
    SET_GPR_U32(ctx, 31, 0x201458u);
    ctx->pc = 0x201454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201450u;
            // 0x201454: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201458u; }
        if (ctx->pc != 0x201458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201458u; }
        if (ctx->pc != 0x201458u) { return; }
    }
    ctx->pc = 0x201458u;
label_201458:
    // 0x201458: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_20145c:
    if (ctx->pc == 0x20145Cu) {
        ctx->pc = 0x20145Cu;
            // 0x20145c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201460u;
        goto label_201460;
    }
    ctx->pc = 0x201458u;
    {
        const bool branch_taken_0x201458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20145Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201458u;
            // 0x20145c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201458) {
            ctx->pc = 0x201500u;
            goto label_201500;
        }
    }
    ctx->pc = 0x201460u;
label_201460:
    // 0x201460: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x201460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_201464:
    // 0x201464: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x201464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_201468:
    // 0x201468: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x201468u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_20146c:
    // 0x20146c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x20146cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_201470:
    // 0x201470: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x201470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_201474:
    // 0x201474: 0x320f809  jalr        $t9
label_201478:
    if (ctx->pc == 0x201478u) {
        ctx->pc = 0x201478u;
            // 0x201478: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20147Cu;
        goto label_20147c;
    }
    ctx->pc = 0x201474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20147Cu);
        ctx->pc = 0x201478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201474u;
            // 0x201478: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20147Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20147Cu; }
            if (ctx->pc != 0x20147Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20147Cu;
label_20147c:
    // 0x20147c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x20147cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_201480:
    // 0x201480: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x201480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_201484:
    // 0x201484: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x201484u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_201488:
    // 0x201488: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x201488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_20148c:
    // 0x20148c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x20148cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_201490:
    // 0x201490: 0x320f809  jalr        $t9
label_201494:
    if (ctx->pc == 0x201494u) {
        ctx->pc = 0x201494u;
            // 0x201494: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201498u;
        goto label_201498;
    }
    ctx->pc = 0x201490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x201498u);
        ctx->pc = 0x201494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201490u;
            // 0x201494: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x201498u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x201498u; }
            if (ctx->pc != 0x201498u) { return; }
        }
        }
    }
    ctx->pc = 0x201498u;
label_201498:
    // 0x201498: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x201498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_20149c:
    // 0x20149c: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x20149cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_2014a0:
    // 0x2014a0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2014a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2014a4:
    // 0x2014a4: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2014a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2014a8:
    // 0x2014a8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2014a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2014ac:
    // 0x2014ac: 0x320f809  jalr        $t9
label_2014b0:
    if (ctx->pc == 0x2014B0u) {
        ctx->pc = 0x2014B0u;
            // 0x2014b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2014B4u;
        goto label_2014b4;
    }
    ctx->pc = 0x2014ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2014B4u);
        ctx->pc = 0x2014B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2014ACu;
            // 0x2014b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2014B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2014B4u; }
            if (ctx->pc != 0x2014B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2014B4u;
label_2014b4:
    // 0x2014b4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2014b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2014b8:
    // 0x2014b8: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x2014b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_2014bc:
    // 0x2014bc: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2014bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2014c0:
    // 0x2014c0: 0xae80035c  sw          $zero, 0x35C($s4)
    ctx->pc = 0x2014c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 860), GPR_U32(ctx, 0));
label_2014c4:
    // 0x2014c4: 0xae800364  sw          $zero, 0x364($s4)
    ctx->pc = 0x2014c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 868), GPR_U32(ctx, 0));
label_2014c8:
    // 0x2014c8: 0xae800360  sw          $zero, 0x360($s4)
    ctx->pc = 0x2014c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 864), GPR_U32(ctx, 0));
label_2014cc:
    // 0x2014cc: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2014ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2014d0:
    // 0x2014d0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2014d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2014d4:
    // 0x2014d4: 0x320f809  jalr        $t9
label_2014d8:
    if (ctx->pc == 0x2014D8u) {
        ctx->pc = 0x2014D8u;
            // 0x2014d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2014DCu;
        goto label_2014dc;
    }
    ctx->pc = 0x2014D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2014DCu);
        ctx->pc = 0x2014D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2014D4u;
            // 0x2014d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2014DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2014DCu; }
            if (ctx->pc != 0x2014DCu) { return; }
        }
        }
    }
    ctx->pc = 0x2014DCu;
label_2014dc:
    // 0x2014dc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2014dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2014e0:
    // 0x2014e0: 0x268406bc  addiu       $a0, $s4, 0x6BC
    ctx->pc = 0x2014e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1724));
label_2014e4:
    // 0x2014e4: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x2014e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
label_2014e8:
    // 0x2014e8: 0xc061b34  jal         func_186CD0
label_2014ec:
    if (ctx->pc == 0x2014ECu) {
        ctx->pc = 0x2014ECu;
            // 0x2014ec: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2014F0u;
        goto label_2014f0;
    }
    ctx->pc = 0x2014E8u;
    SET_GPR_U32(ctx, 31, 0x2014F0u);
    ctx->pc = 0x2014ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2014E8u;
            // 0x2014ec: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2014F0u; }
        if (ctx->pc != 0x2014F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2014F0u; }
        if (ctx->pc != 0x2014F0u) { return; }
    }
    ctx->pc = 0x2014F0u;
label_2014f0:
    // 0x2014f0: 0x26840910  addiu       $a0, $s4, 0x910
    ctx->pc = 0x2014f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2320));
label_2014f4:
    // 0x2014f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2014f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2014f8:
    // 0x2014f8: 0xc049c86  jal         func_127218
label_2014fc:
    if (ctx->pc == 0x2014FCu) {
        ctx->pc = 0x2014FCu;
            // 0x2014fc: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x201500u;
        goto label_201500;
    }
    ctx->pc = 0x2014F8u;
    SET_GPR_U32(ctx, 31, 0x201500u);
    ctx->pc = 0x2014FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2014F8u;
            // 0x2014fc: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201500u; }
        if (ctx->pc != 0x201500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201500u; }
        if (ctx->pc != 0x201500u) { return; }
    }
    ctx->pc = 0x201500u;
label_201500:
    // 0x201500: 0xae140638  sw          $s4, 0x638($s0)
    ctx->pc = 0x201500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1592), GPR_U32(ctx, 20));
label_201504:
    // 0x201504: 0x8e040638  lw          $a0, 0x638($s0)
    ctx->pc = 0x201504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1592)));
label_201508:
    // 0x201508: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x201508u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20150c:
    // 0x20150c: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x20150cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_201510:
    // 0x201510: 0x320f809  jalr        $t9
label_201514:
    if (ctx->pc == 0x201514u) {
        ctx->pc = 0x201514u;
            // 0x201514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201518u;
        goto label_201518;
    }
    ctx->pc = 0x201510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x201518u);
        ctx->pc = 0x201514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201510u;
            // 0x201514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x201518u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x201518u; }
            if (ctx->pc != 0x201518u) { return; }
        }
        }
    }
    ctx->pc = 0x201518u;
label_201518:
    // 0x201518: 0x8e040638  lw          $a0, 0x638($s0)
    ctx->pc = 0x201518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1592)));
label_20151c:
    // 0x20151c: 0x2607053c  addiu       $a3, $s0, 0x53C
    ctx->pc = 0x20151cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1340));
label_201520:
    // 0x201520: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x201520u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_201524:
    // 0x201524: 0x8e0a001c  lw          $t2, 0x1C($s0)
    ctx->pc = 0x201524u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_201528:
    // 0x201528: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x201528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20152c:
    // 0x20152c: 0x24c69260  addiu       $a2, $a2, -0x6DA0
    ctx->pc = 0x20152cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939232));
label_201530:
    // 0x201530: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x201530u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_201534:
    // 0x201534: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x201534u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_201538:
    // 0x201538: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x201538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20153c:
    // 0x20153c: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x20153cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_201540:
    // 0x201540: 0x320f809  jalr        $t9
label_201544:
    if (ctx->pc == 0x201544u) {
        ctx->pc = 0x201544u;
            // 0x201544: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201548u;
        goto label_201548;
    }
    ctx->pc = 0x201540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x201548u);
        ctx->pc = 0x201544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201540u;
            // 0x201544: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x201548u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x201548u; }
            if (ctx->pc != 0x201548u) { return; }
        }
        }
    }
    ctx->pc = 0x201548u;
label_201548:
    // 0x201548: 0xa24001d8  sb          $zero, 0x1D8($s2)
    ctx->pc = 0x201548u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 472), (uint8_t)GPR_U32(ctx, 0));
label_20154c:
    // 0x20154c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x20154cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_201550:
    // 0x201550: 0x8e050638  lw          $a1, 0x638($s0)
    ctx->pc = 0x201550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1592)));
label_201554:
    // 0x201554: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x201554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_201558:
    // 0x201558: 0xc05af64  jal         func_16BD90
label_20155c:
    if (ctx->pc == 0x20155Cu) {
        ctx->pc = 0x20155Cu;
            // 0x20155c: 0x24c69280  addiu       $a2, $a2, -0x6D80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939264));
        ctx->pc = 0x201560u;
        goto label_201560;
    }
    ctx->pc = 0x201558u;
    SET_GPR_U32(ctx, 31, 0x201560u);
    ctx->pc = 0x20155Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201558u;
            // 0x20155c: 0x24c69280  addiu       $a2, $a2, -0x6D80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (runtime->hasFunction(0x16BD90u)) {
        auto targetFn = runtime->lookupFunction(0x16BD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201560u; }
        if (ctx->pc != 0x201560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__12CActionCharaFP12CActionCharaPc_0x16bd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201560u; }
        if (ctx->pc != 0x201560u) { return; }
    }
    ctx->pc = 0x201560u;
label_201560:
    // 0x201560: 0x8e050638  lw          $a1, 0x638($s0)
    ctx->pc = 0x201560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1592)));
label_201564:
    // 0x201564: 0xc05cbc0  jal         func_172F00
label_201568:
    if (ctx->pc == 0x201568u) {
        ctx->pc = 0x201568u;
            // 0x201568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20156Cu;
        goto label_20156c;
    }
    ctx->pc = 0x201564u;
    SET_GPR_U32(ctx, 31, 0x20156Cu);
    ctx->pc = 0x201568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201564u;
            // 0x201568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172F00u;
    if (runtime->hasFunction(0x172F00u)) {
        auto targetFn = runtime->lookupFunction(0x172F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20156Cu; }
        if (ctx->pc != 0x20156Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyOutLine__11CCharacter2FP11CCharacter2_0x172f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20156Cu; }
        if (ctx->pc != 0x20156Cu) { return; }
    }
    ctx->pc = 0x20156Cu;
label_20156c:
    // 0x20156c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x20156cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_201570:
    // 0x201570: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x201570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_201574:
    // 0x201574: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x201574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_201578:
    // 0x201578: 0x24a59288  addiu       $a1, $a1, -0x6D78
    ctx->pc = 0x201578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939272));
label_20157c:
    // 0x20157c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20157cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201580:
    // 0x201580: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x201580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_201584:
    // 0x201584: 0x320f809  jalr        $t9
label_201588:
    if (ctx->pc == 0x201588u) {
        ctx->pc = 0x201588u;
            // 0x201588: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20158Cu;
        goto label_20158c;
    }
    ctx->pc = 0x201584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20158Cu);
        ctx->pc = 0x201588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201584u;
            // 0x201588: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20158Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20158Cu; }
            if (ctx->pc != 0x20158Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20158Cu;
label_20158c:
    // 0x20158c: 0x92020258  lbu         $v0, 0x258($s0)
    ctx->pc = 0x20158cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 600)));
label_201590:
    // 0x201590: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_201594:
    if (ctx->pc == 0x201594u) {
        ctx->pc = 0x201598u;
        goto label_201598;
    }
    ctx->pc = 0x201590u;
    {
        const bool branch_taken_0x201590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201590) {
            ctx->pc = 0x2015D8u;
            goto label_2015d8;
        }
    }
    ctx->pc = 0x201598u;
label_201598:
    // 0x201598: 0x86030110  lh          $v1, 0x110($s0)
    ctx->pc = 0x201598u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_20159c:
    // 0x20159c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20159cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2015a0:
    // 0x2015a0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_2015a4:
    if (ctx->pc == 0x2015A4u) {
        ctx->pc = 0x2015A8u;
        goto label_2015a8;
    }
    ctx->pc = 0x2015A0u;
    {
        const bool branch_taken_0x2015a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2015a0) {
            ctx->pc = 0x2015D8u;
            goto label_2015d8;
        }
    }
    ctx->pc = 0x2015A8u;
label_2015a8:
    // 0x2015a8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2015a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2015ac:
    // 0x2015ac: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2015acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_2015b0:
    // 0x2015b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2015b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2015b4:
    // 0x2015b4: 0x3c03c1e8  lui         $v1, 0xC1E8
    ctx->pc = 0x2015b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49640 << 16));
label_2015b8:
    // 0x2015b8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2015b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2015bc:
    // 0x2015bc: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x2015bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
label_2015c0:
    // 0x2015c0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2015c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2015c4:
    // 0x2015c4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2015c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2015c8:
    // 0x2015c8: 0x320f809  jalr        $t9
label_2015cc:
    if (ctx->pc == 0x2015CCu) {
        ctx->pc = 0x2015CCu;
            // 0x2015cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2015D0u;
        goto label_2015d0;
    }
    ctx->pc = 0x2015C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2015D0u);
        ctx->pc = 0x2015CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2015C8u;
            // 0x2015cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2015D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2015D0u; }
            if (ctx->pc != 0x2015D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2015D0u;
label_2015d0:
    // 0x2015d0: 0x1000000c  b           . + 4 + (0xC << 2)
label_2015d4:
    if (ctx->pc == 0x2015D4u) {
        ctx->pc = 0x2015D4u;
            // 0x2015d4: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2015D8u;
        goto label_2015d8;
    }
    ctx->pc = 0x2015D0u;
    {
        const bool branch_taken_0x2015d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2015D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2015D0u;
            // 0x2015d4: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2015d0) {
            ctx->pc = 0x201604u;
            goto label_201604;
        }
    }
    ctx->pc = 0x2015D8u;
label_2015d8:
    // 0x2015d8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2015d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2015dc:
    // 0x2015dc: 0x3c02c1e8  lui         $v0, 0xC1E8
    ctx->pc = 0x2015dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49640 << 16));
label_2015e0:
    // 0x2015e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2015e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2015e4:
    // 0x2015e4: 0x3c034160  lui         $v1, 0x4160
    ctx->pc = 0x2015e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16736 << 16));
label_2015e8:
    // 0x2015e8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2015e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2015ec:
    // 0x2015ec: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2015ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_2015f0:
    // 0x2015f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2015f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2015f4:
    // 0x2015f4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2015f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2015f8:
    // 0x2015f8: 0x320f809  jalr        $t9
label_2015fc:
    if (ctx->pc == 0x2015FCu) {
        ctx->pc = 0x2015FCu;
            // 0x2015fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201600u;
        goto label_201600;
    }
    ctx->pc = 0x2015F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x201600u);
        ctx->pc = 0x2015FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2015F8u;
            // 0x2015fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x201600u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x201600u; }
            if (ctx->pc != 0x201600u) { return; }
        }
        }
    }
    ctx->pc = 0x201600u;
label_201600:
    // 0x201600: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x201600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_201604:
    // 0x201604: 0x3c02bf0f  lui         $v0, 0xBF0F
    ctx->pc = 0x201604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48911 << 16));
label_201608:
    // 0x201608: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x201608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20160c:
    // 0x20160c: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x20160cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23593);
label_201610:
    // 0x201610: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x201610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_201614:
    // 0x201614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x201614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_201618:
    // 0x201618: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x201618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_20161c:
    // 0x20161c: 0x320f809  jalr        $t9
label_201620:
    if (ctx->pc == 0x201620u) {
        ctx->pc = 0x201620u;
            // 0x201620: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x201624u;
        goto label_201624;
    }
    ctx->pc = 0x20161Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x201624u);
        ctx->pc = 0x201620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20161Cu;
            // 0x201620: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x201624u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x201624u; }
            if (ctx->pc != 0x201624u) { return; }
        }
        }
    }
    ctx->pc = 0x201624u;
label_201624:
    // 0x201624: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x201624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_201628:
    // 0x201628: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x201628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_20162c:
    // 0x20162c: 0x320f809  jalr        $t9
label_201630:
    if (ctx->pc == 0x201630u) {
        ctx->pc = 0x201630u;
            // 0x201630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201634u;
        goto label_201634;
    }
    ctx->pc = 0x20162Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x201634u);
        ctx->pc = 0x201630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20162Cu;
            // 0x201630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x201634u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x201634u; }
            if (ctx->pc != 0x201634u) { return; }
        }
        }
    }
    ctx->pc = 0x201634u;
label_201634:
    // 0x201634: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x201634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_201638:
    // 0x201638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20163c:
    // 0x20163c: 0xc08e7cc  jal         func_239F30
label_201640:
    if (ctx->pc == 0x201640u) {
        ctx->pc = 0x201640u;
            // 0x201640: 0x24a59298  addiu       $a1, $a1, -0x6D68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939288));
        ctx->pc = 0x201644u;
        goto label_201644;
    }
    ctx->pc = 0x20163Cu;
    SET_GPR_U32(ctx, 31, 0x201644u);
    ctx->pc = 0x201640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20163Cu;
            // 0x201640: 0x24a59298  addiu       $a1, $a1, -0x6D68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201644u; }
        if (ctx->pc != 0x201644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201644u; }
        if (ctx->pc != 0x201644u) { return; }
    }
    ctx->pc = 0x201644u;
label_201644:
    // 0x201644: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x201644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_201648:
    // 0x201648: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x201648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20164c:
    // 0x20164c: 0xa2020634  sb          $v0, 0x634($s0)
    ctx->pc = 0x20164cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1588), (uint8_t)GPR_U32(ctx, 2));
label_201650:
    // 0x201650: 0x8e040f10  lw          $a0, 0xF10($s0)
    ctx->pc = 0x201650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3856)));
label_201654:
    // 0x201654: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x201654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_201658:
    // 0x201658: 0xc0896c8  jal         func_225B20
label_20165c:
    if (ctx->pc == 0x20165Cu) {
        ctx->pc = 0x20165Cu;
            // 0x20165c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x201660u;
        goto label_201660;
    }
    ctx->pc = 0x201658u;
    SET_GPR_U32(ctx, 31, 0x201660u);
    ctx->pc = 0x20165Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201658u;
            // 0x20165c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B20u;
    if (runtime->hasFunction(0x225B20u)) {
        auto targetFn = runtime->lookupFunction(0x225B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201660u; }
        if (ctx->pc != 0x201660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActionCharaPtr__16CMenuPosDataFormFP12CActionCharaii_0x225b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201660u; }
        if (ctx->pc != 0x201660u) { return; }
    }
    ctx->pc = 0x201660u;
label_201660:
    // 0x201660: 0x3c03bf20  lui         $v1, 0xBF20
    ctx->pc = 0x201660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48928 << 16));
label_201664:
    // 0x201664: 0xa6000642  sh          $zero, 0x642($s0)
    ctx->pc = 0x201664u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1602), (uint16_t)GPR_U32(ctx, 0));
label_201668:
    // 0x201668: 0x3463d97c  ori         $v1, $v1, 0xD97C
    ctx->pc = 0x201668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55676);
label_20166c:
    // 0x20166c: 0xae030648  sw          $v1, 0x648($s0)
    ctx->pc = 0x20166cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1608), GPR_U32(ctx, 3));
label_201670:
    // 0x201670: 0x10000005  b           . + 4 + (0x5 << 2)
label_201674:
    if (ctx->pc == 0x201674u) {
        ctx->pc = 0x201674u;
            // 0x201674: 0xa2000640  sb          $zero, 0x640($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1600), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x201678u;
        goto label_201678;
    }
    ctx->pc = 0x201670u;
    {
        const bool branch_taken_0x201670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201670u;
            // 0x201674: 0xa2000640  sb          $zero, 0x640($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1600), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201670) {
            ctx->pc = 0x201688u;
            goto label_201688;
        }
    }
    ctx->pc = 0x201678u;
label_201678:
    // 0x201678: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x201678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20167c:
    // 0x20167c: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x20167cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_201680:
    // 0x201680: 0x320f809  jalr        $t9
label_201684:
    if (ctx->pc == 0x201684u) {
        ctx->pc = 0x201684u;
            // 0x201684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201688u;
        goto label_201688;
    }
    ctx->pc = 0x201680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x201688u);
        ctx->pc = 0x201684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201680u;
            // 0x201684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x201688u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x201688u; }
            if (ctx->pc != 0x201688u) { return; }
        }
        }
    }
    ctx->pc = 0x201688u;
label_201688:
    // 0x201688: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x201688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_20168c:
    // 0x20168c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20168cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_201690:
    // 0x201690: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x201690u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_201694:
    // 0x201694: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x201694u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_201698:
    // 0x201698: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x201698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20169c:
    // 0x20169c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20169cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2016a0:
    // 0x2016a0: 0x3e00008  jr          $ra
label_2016a4:
    if (ctx->pc == 0x2016A4u) {
        ctx->pc = 0x2016A4u;
            // 0x2016a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2016A8u;
        goto label_fallthrough_0x2016a0;
    }
    ctx->pc = 0x2016A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2016A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2016A0u;
            // 0x2016a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2016a0:
    ctx->pc = 0x2016A8u;
}
