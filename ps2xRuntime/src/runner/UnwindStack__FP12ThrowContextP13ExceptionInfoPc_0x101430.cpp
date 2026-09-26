#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UnwindStack__FP12ThrowContextP13ExceptionInfoPc
// Address: 0x101430 - 0x101c94
void UnwindStack__FP12ThrowContextP13ExceptionInfoPc_0x101430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UnwindStack__FP12ThrowContextP13ExceptionInfoPc_0x101430");
#endif

    switch (ctx->pc) {
        case 0x101430u: goto label_101430;
        case 0x101434u: goto label_101434;
        case 0x101438u: goto label_101438;
        case 0x10143cu: goto label_10143c;
        case 0x101440u: goto label_101440;
        case 0x101444u: goto label_101444;
        case 0x101448u: goto label_101448;
        case 0x10144cu: goto label_10144c;
        case 0x101450u: goto label_101450;
        case 0x101454u: goto label_101454;
        case 0x101458u: goto label_101458;
        case 0x10145cu: goto label_10145c;
        case 0x101460u: goto label_101460;
        case 0x101464u: goto label_101464;
        case 0x101468u: goto label_101468;
        case 0x10146cu: goto label_10146c;
        case 0x101470u: goto label_101470;
        case 0x101474u: goto label_101474;
        case 0x101478u: goto label_101478;
        case 0x10147cu: goto label_10147c;
        case 0x101480u: goto label_101480;
        case 0x101484u: goto label_101484;
        case 0x101488u: goto label_101488;
        case 0x10148cu: goto label_10148c;
        case 0x101490u: goto label_101490;
        case 0x101494u: goto label_101494;
        case 0x101498u: goto label_101498;
        case 0x10149cu: goto label_10149c;
        case 0x1014a0u: goto label_1014a0;
        case 0x1014a4u: goto label_1014a4;
        case 0x1014a8u: goto label_1014a8;
        case 0x1014acu: goto label_1014ac;
        case 0x1014b0u: goto label_1014b0;
        case 0x1014b4u: goto label_1014b4;
        case 0x1014b8u: goto label_1014b8;
        case 0x1014bcu: goto label_1014bc;
        case 0x1014c0u: goto label_1014c0;
        case 0x1014c4u: goto label_1014c4;
        case 0x1014c8u: goto label_1014c8;
        case 0x1014ccu: goto label_1014cc;
        case 0x1014d0u: goto label_1014d0;
        case 0x1014d4u: goto label_1014d4;
        case 0x1014d8u: goto label_1014d8;
        case 0x1014dcu: goto label_1014dc;
        case 0x1014e0u: goto label_1014e0;
        case 0x1014e4u: goto label_1014e4;
        case 0x1014e8u: goto label_1014e8;
        case 0x1014ecu: goto label_1014ec;
        case 0x1014f0u: goto label_1014f0;
        case 0x1014f4u: goto label_1014f4;
        case 0x1014f8u: goto label_1014f8;
        case 0x1014fcu: goto label_1014fc;
        case 0x101500u: goto label_101500;
        case 0x101504u: goto label_101504;
        case 0x101508u: goto label_101508;
        case 0x10150cu: goto label_10150c;
        case 0x101510u: goto label_101510;
        case 0x101514u: goto label_101514;
        case 0x101518u: goto label_101518;
        case 0x10151cu: goto label_10151c;
        case 0x101520u: goto label_101520;
        case 0x101524u: goto label_101524;
        case 0x101528u: goto label_101528;
        case 0x10152cu: goto label_10152c;
        case 0x101530u: goto label_101530;
        case 0x101534u: goto label_101534;
        case 0x101538u: goto label_101538;
        case 0x10153cu: goto label_10153c;
        case 0x101540u: goto label_101540;
        case 0x101544u: goto label_101544;
        case 0x101548u: goto label_101548;
        case 0x10154cu: goto label_10154c;
        case 0x101550u: goto label_101550;
        case 0x101554u: goto label_101554;
        case 0x101558u: goto label_101558;
        case 0x10155cu: goto label_10155c;
        case 0x101560u: goto label_101560;
        case 0x101564u: goto label_101564;
        case 0x101568u: goto label_101568;
        case 0x10156cu: goto label_10156c;
        case 0x101570u: goto label_101570;
        case 0x101574u: goto label_101574;
        case 0x101578u: goto label_101578;
        case 0x10157cu: goto label_10157c;
        case 0x101580u: goto label_101580;
        case 0x101584u: goto label_101584;
        case 0x101588u: goto label_101588;
        case 0x10158cu: goto label_10158c;
        case 0x101590u: goto label_101590;
        case 0x101594u: goto label_101594;
        case 0x101598u: goto label_101598;
        case 0x10159cu: goto label_10159c;
        case 0x1015a0u: goto label_1015a0;
        case 0x1015a4u: goto label_1015a4;
        case 0x1015a8u: goto label_1015a8;
        case 0x1015acu: goto label_1015ac;
        case 0x1015b0u: goto label_1015b0;
        case 0x1015b4u: goto label_1015b4;
        case 0x1015b8u: goto label_1015b8;
        case 0x1015bcu: goto label_1015bc;
        case 0x1015c0u: goto label_1015c0;
        case 0x1015c4u: goto label_1015c4;
        case 0x1015c8u: goto label_1015c8;
        case 0x1015ccu: goto label_1015cc;
        case 0x1015d0u: goto label_1015d0;
        case 0x1015d4u: goto label_1015d4;
        case 0x1015d8u: goto label_1015d8;
        case 0x1015dcu: goto label_1015dc;
        case 0x1015e0u: goto label_1015e0;
        case 0x1015e4u: goto label_1015e4;
        case 0x1015e8u: goto label_1015e8;
        case 0x1015ecu: goto label_1015ec;
        case 0x1015f0u: goto label_1015f0;
        case 0x1015f4u: goto label_1015f4;
        case 0x1015f8u: goto label_1015f8;
        case 0x1015fcu: goto label_1015fc;
        case 0x101600u: goto label_101600;
        case 0x101604u: goto label_101604;
        case 0x101608u: goto label_101608;
        case 0x10160cu: goto label_10160c;
        case 0x101610u: goto label_101610;
        case 0x101614u: goto label_101614;
        case 0x101618u: goto label_101618;
        case 0x10161cu: goto label_10161c;
        case 0x101620u: goto label_101620;
        case 0x101624u: goto label_101624;
        case 0x101628u: goto label_101628;
        case 0x10162cu: goto label_10162c;
        case 0x101630u: goto label_101630;
        case 0x101634u: goto label_101634;
        case 0x101638u: goto label_101638;
        case 0x10163cu: goto label_10163c;
        case 0x101640u: goto label_101640;
        case 0x101644u: goto label_101644;
        case 0x101648u: goto label_101648;
        case 0x10164cu: goto label_10164c;
        case 0x101650u: goto label_101650;
        case 0x101654u: goto label_101654;
        case 0x101658u: goto label_101658;
        case 0x10165cu: goto label_10165c;
        case 0x101660u: goto label_101660;
        case 0x101664u: goto label_101664;
        case 0x101668u: goto label_101668;
        case 0x10166cu: goto label_10166c;
        case 0x101670u: goto label_101670;
        case 0x101674u: goto label_101674;
        case 0x101678u: goto label_101678;
        case 0x10167cu: goto label_10167c;
        case 0x101680u: goto label_101680;
        case 0x101684u: goto label_101684;
        case 0x101688u: goto label_101688;
        case 0x10168cu: goto label_10168c;
        case 0x101690u: goto label_101690;
        case 0x101694u: goto label_101694;
        case 0x101698u: goto label_101698;
        case 0x10169cu: goto label_10169c;
        case 0x1016a0u: goto label_1016a0;
        case 0x1016a4u: goto label_1016a4;
        case 0x1016a8u: goto label_1016a8;
        case 0x1016acu: goto label_1016ac;
        case 0x1016b0u: goto label_1016b0;
        case 0x1016b4u: goto label_1016b4;
        case 0x1016b8u: goto label_1016b8;
        case 0x1016bcu: goto label_1016bc;
        case 0x1016c0u: goto label_1016c0;
        case 0x1016c4u: goto label_1016c4;
        case 0x1016c8u: goto label_1016c8;
        case 0x1016ccu: goto label_1016cc;
        case 0x1016d0u: goto label_1016d0;
        case 0x1016d4u: goto label_1016d4;
        case 0x1016d8u: goto label_1016d8;
        case 0x1016dcu: goto label_1016dc;
        case 0x1016e0u: goto label_1016e0;
        case 0x1016e4u: goto label_1016e4;
        case 0x1016e8u: goto label_1016e8;
        case 0x1016ecu: goto label_1016ec;
        case 0x1016f0u: goto label_1016f0;
        case 0x1016f4u: goto label_1016f4;
        case 0x1016f8u: goto label_1016f8;
        case 0x1016fcu: goto label_1016fc;
        case 0x101700u: goto label_101700;
        case 0x101704u: goto label_101704;
        case 0x101708u: goto label_101708;
        case 0x10170cu: goto label_10170c;
        case 0x101710u: goto label_101710;
        case 0x101714u: goto label_101714;
        case 0x101718u: goto label_101718;
        case 0x10171cu: goto label_10171c;
        case 0x101720u: goto label_101720;
        case 0x101724u: goto label_101724;
        case 0x101728u: goto label_101728;
        case 0x10172cu: goto label_10172c;
        case 0x101730u: goto label_101730;
        case 0x101734u: goto label_101734;
        case 0x101738u: goto label_101738;
        case 0x10173cu: goto label_10173c;
        case 0x101740u: goto label_101740;
        case 0x101744u: goto label_101744;
        case 0x101748u: goto label_101748;
        case 0x10174cu: goto label_10174c;
        case 0x101750u: goto label_101750;
        case 0x101754u: goto label_101754;
        case 0x101758u: goto label_101758;
        case 0x10175cu: goto label_10175c;
        case 0x101760u: goto label_101760;
        case 0x101764u: goto label_101764;
        case 0x101768u: goto label_101768;
        case 0x10176cu: goto label_10176c;
        case 0x101770u: goto label_101770;
        case 0x101774u: goto label_101774;
        case 0x101778u: goto label_101778;
        case 0x10177cu: goto label_10177c;
        case 0x101780u: goto label_101780;
        case 0x101784u: goto label_101784;
        case 0x101788u: goto label_101788;
        case 0x10178cu: goto label_10178c;
        case 0x101790u: goto label_101790;
        case 0x101794u: goto label_101794;
        case 0x101798u: goto label_101798;
        case 0x10179cu: goto label_10179c;
        case 0x1017a0u: goto label_1017a0;
        case 0x1017a4u: goto label_1017a4;
        case 0x1017a8u: goto label_1017a8;
        case 0x1017acu: goto label_1017ac;
        case 0x1017b0u: goto label_1017b0;
        case 0x1017b4u: goto label_1017b4;
        case 0x1017b8u: goto label_1017b8;
        case 0x1017bcu: goto label_1017bc;
        case 0x1017c0u: goto label_1017c0;
        case 0x1017c4u: goto label_1017c4;
        case 0x1017c8u: goto label_1017c8;
        case 0x1017ccu: goto label_1017cc;
        case 0x1017d0u: goto label_1017d0;
        case 0x1017d4u: goto label_1017d4;
        case 0x1017d8u: goto label_1017d8;
        case 0x1017dcu: goto label_1017dc;
        case 0x1017e0u: goto label_1017e0;
        case 0x1017e4u: goto label_1017e4;
        case 0x1017e8u: goto label_1017e8;
        case 0x1017ecu: goto label_1017ec;
        case 0x1017f0u: goto label_1017f0;
        case 0x1017f4u: goto label_1017f4;
        case 0x1017f8u: goto label_1017f8;
        case 0x1017fcu: goto label_1017fc;
        case 0x101800u: goto label_101800;
        case 0x101804u: goto label_101804;
        case 0x101808u: goto label_101808;
        case 0x10180cu: goto label_10180c;
        case 0x101810u: goto label_101810;
        case 0x101814u: goto label_101814;
        case 0x101818u: goto label_101818;
        case 0x10181cu: goto label_10181c;
        case 0x101820u: goto label_101820;
        case 0x101824u: goto label_101824;
        case 0x101828u: goto label_101828;
        case 0x10182cu: goto label_10182c;
        case 0x101830u: goto label_101830;
        case 0x101834u: goto label_101834;
        case 0x101838u: goto label_101838;
        case 0x10183cu: goto label_10183c;
        case 0x101840u: goto label_101840;
        case 0x101844u: goto label_101844;
        case 0x101848u: goto label_101848;
        case 0x10184cu: goto label_10184c;
        case 0x101850u: goto label_101850;
        case 0x101854u: goto label_101854;
        case 0x101858u: goto label_101858;
        case 0x10185cu: goto label_10185c;
        case 0x101860u: goto label_101860;
        case 0x101864u: goto label_101864;
        case 0x101868u: goto label_101868;
        case 0x10186cu: goto label_10186c;
        case 0x101870u: goto label_101870;
        case 0x101874u: goto label_101874;
        case 0x101878u: goto label_101878;
        case 0x10187cu: goto label_10187c;
        case 0x101880u: goto label_101880;
        case 0x101884u: goto label_101884;
        case 0x101888u: goto label_101888;
        case 0x10188cu: goto label_10188c;
        case 0x101890u: goto label_101890;
        case 0x101894u: goto label_101894;
        case 0x101898u: goto label_101898;
        case 0x10189cu: goto label_10189c;
        case 0x1018a0u: goto label_1018a0;
        case 0x1018a4u: goto label_1018a4;
        case 0x1018a8u: goto label_1018a8;
        case 0x1018acu: goto label_1018ac;
        case 0x1018b0u: goto label_1018b0;
        case 0x1018b4u: goto label_1018b4;
        case 0x1018b8u: goto label_1018b8;
        case 0x1018bcu: goto label_1018bc;
        case 0x1018c0u: goto label_1018c0;
        case 0x1018c4u: goto label_1018c4;
        case 0x1018c8u: goto label_1018c8;
        case 0x1018ccu: goto label_1018cc;
        case 0x1018d0u: goto label_1018d0;
        case 0x1018d4u: goto label_1018d4;
        case 0x1018d8u: goto label_1018d8;
        case 0x1018dcu: goto label_1018dc;
        case 0x1018e0u: goto label_1018e0;
        case 0x1018e4u: goto label_1018e4;
        case 0x1018e8u: goto label_1018e8;
        case 0x1018ecu: goto label_1018ec;
        case 0x1018f0u: goto label_1018f0;
        case 0x1018f4u: goto label_1018f4;
        case 0x1018f8u: goto label_1018f8;
        case 0x1018fcu: goto label_1018fc;
        case 0x101900u: goto label_101900;
        case 0x101904u: goto label_101904;
        case 0x101908u: goto label_101908;
        case 0x10190cu: goto label_10190c;
        case 0x101910u: goto label_101910;
        case 0x101914u: goto label_101914;
        case 0x101918u: goto label_101918;
        case 0x10191cu: goto label_10191c;
        case 0x101920u: goto label_101920;
        case 0x101924u: goto label_101924;
        case 0x101928u: goto label_101928;
        case 0x10192cu: goto label_10192c;
        case 0x101930u: goto label_101930;
        case 0x101934u: goto label_101934;
        case 0x101938u: goto label_101938;
        case 0x10193cu: goto label_10193c;
        case 0x101940u: goto label_101940;
        case 0x101944u: goto label_101944;
        case 0x101948u: goto label_101948;
        case 0x10194cu: goto label_10194c;
        case 0x101950u: goto label_101950;
        case 0x101954u: goto label_101954;
        case 0x101958u: goto label_101958;
        case 0x10195cu: goto label_10195c;
        case 0x101960u: goto label_101960;
        case 0x101964u: goto label_101964;
        case 0x101968u: goto label_101968;
        case 0x10196cu: goto label_10196c;
        case 0x101970u: goto label_101970;
        case 0x101974u: goto label_101974;
        case 0x101978u: goto label_101978;
        case 0x10197cu: goto label_10197c;
        case 0x101980u: goto label_101980;
        case 0x101984u: goto label_101984;
        case 0x101988u: goto label_101988;
        case 0x10198cu: goto label_10198c;
        case 0x101990u: goto label_101990;
        case 0x101994u: goto label_101994;
        case 0x101998u: goto label_101998;
        case 0x10199cu: goto label_10199c;
        case 0x1019a0u: goto label_1019a0;
        case 0x1019a4u: goto label_1019a4;
        case 0x1019a8u: goto label_1019a8;
        case 0x1019acu: goto label_1019ac;
        case 0x1019b0u: goto label_1019b0;
        case 0x1019b4u: goto label_1019b4;
        case 0x1019b8u: goto label_1019b8;
        case 0x1019bcu: goto label_1019bc;
        case 0x1019c0u: goto label_1019c0;
        case 0x1019c4u: goto label_1019c4;
        case 0x1019c8u: goto label_1019c8;
        case 0x1019ccu: goto label_1019cc;
        case 0x1019d0u: goto label_1019d0;
        case 0x1019d4u: goto label_1019d4;
        case 0x1019d8u: goto label_1019d8;
        case 0x1019dcu: goto label_1019dc;
        case 0x1019e0u: goto label_1019e0;
        case 0x1019e4u: goto label_1019e4;
        case 0x1019e8u: goto label_1019e8;
        case 0x1019ecu: goto label_1019ec;
        case 0x1019f0u: goto label_1019f0;
        case 0x1019f4u: goto label_1019f4;
        case 0x1019f8u: goto label_1019f8;
        case 0x1019fcu: goto label_1019fc;
        case 0x101a00u: goto label_101a00;
        case 0x101a04u: goto label_101a04;
        case 0x101a08u: goto label_101a08;
        case 0x101a0cu: goto label_101a0c;
        case 0x101a10u: goto label_101a10;
        case 0x101a14u: goto label_101a14;
        case 0x101a18u: goto label_101a18;
        case 0x101a1cu: goto label_101a1c;
        case 0x101a20u: goto label_101a20;
        case 0x101a24u: goto label_101a24;
        case 0x101a28u: goto label_101a28;
        case 0x101a2cu: goto label_101a2c;
        case 0x101a30u: goto label_101a30;
        case 0x101a34u: goto label_101a34;
        case 0x101a38u: goto label_101a38;
        case 0x101a3cu: goto label_101a3c;
        case 0x101a40u: goto label_101a40;
        case 0x101a44u: goto label_101a44;
        case 0x101a48u: goto label_101a48;
        case 0x101a4cu: goto label_101a4c;
        case 0x101a50u: goto label_101a50;
        case 0x101a54u: goto label_101a54;
        case 0x101a58u: goto label_101a58;
        case 0x101a5cu: goto label_101a5c;
        case 0x101a60u: goto label_101a60;
        case 0x101a64u: goto label_101a64;
        case 0x101a68u: goto label_101a68;
        case 0x101a6cu: goto label_101a6c;
        case 0x101a70u: goto label_101a70;
        case 0x101a74u: goto label_101a74;
        case 0x101a78u: goto label_101a78;
        case 0x101a7cu: goto label_101a7c;
        case 0x101a80u: goto label_101a80;
        case 0x101a84u: goto label_101a84;
        case 0x101a88u: goto label_101a88;
        case 0x101a8cu: goto label_101a8c;
        case 0x101a90u: goto label_101a90;
        case 0x101a94u: goto label_101a94;
        case 0x101a98u: goto label_101a98;
        case 0x101a9cu: goto label_101a9c;
        case 0x101aa0u: goto label_101aa0;
        case 0x101aa4u: goto label_101aa4;
        case 0x101aa8u: goto label_101aa8;
        case 0x101aacu: goto label_101aac;
        case 0x101ab0u: goto label_101ab0;
        case 0x101ab4u: goto label_101ab4;
        case 0x101ab8u: goto label_101ab8;
        case 0x101abcu: goto label_101abc;
        case 0x101ac0u: goto label_101ac0;
        case 0x101ac4u: goto label_101ac4;
        case 0x101ac8u: goto label_101ac8;
        case 0x101accu: goto label_101acc;
        case 0x101ad0u: goto label_101ad0;
        case 0x101ad4u: goto label_101ad4;
        case 0x101ad8u: goto label_101ad8;
        case 0x101adcu: goto label_101adc;
        case 0x101ae0u: goto label_101ae0;
        case 0x101ae4u: goto label_101ae4;
        case 0x101ae8u: goto label_101ae8;
        case 0x101aecu: goto label_101aec;
        case 0x101af0u: goto label_101af0;
        case 0x101af4u: goto label_101af4;
        case 0x101af8u: goto label_101af8;
        case 0x101afcu: goto label_101afc;
        case 0x101b00u: goto label_101b00;
        case 0x101b04u: goto label_101b04;
        case 0x101b08u: goto label_101b08;
        case 0x101b0cu: goto label_101b0c;
        case 0x101b10u: goto label_101b10;
        case 0x101b14u: goto label_101b14;
        case 0x101b18u: goto label_101b18;
        case 0x101b1cu: goto label_101b1c;
        case 0x101b20u: goto label_101b20;
        case 0x101b24u: goto label_101b24;
        case 0x101b28u: goto label_101b28;
        case 0x101b2cu: goto label_101b2c;
        case 0x101b30u: goto label_101b30;
        case 0x101b34u: goto label_101b34;
        case 0x101b38u: goto label_101b38;
        case 0x101b3cu: goto label_101b3c;
        case 0x101b40u: goto label_101b40;
        case 0x101b44u: goto label_101b44;
        case 0x101b48u: goto label_101b48;
        case 0x101b4cu: goto label_101b4c;
        case 0x101b50u: goto label_101b50;
        case 0x101b54u: goto label_101b54;
        case 0x101b58u: goto label_101b58;
        case 0x101b5cu: goto label_101b5c;
        case 0x101b60u: goto label_101b60;
        case 0x101b64u: goto label_101b64;
        case 0x101b68u: goto label_101b68;
        case 0x101b6cu: goto label_101b6c;
        case 0x101b70u: goto label_101b70;
        case 0x101b74u: goto label_101b74;
        case 0x101b78u: goto label_101b78;
        case 0x101b7cu: goto label_101b7c;
        case 0x101b80u: goto label_101b80;
        case 0x101b84u: goto label_101b84;
        case 0x101b88u: goto label_101b88;
        case 0x101b8cu: goto label_101b8c;
        case 0x101b90u: goto label_101b90;
        case 0x101b94u: goto label_101b94;
        case 0x101b98u: goto label_101b98;
        case 0x101b9cu: goto label_101b9c;
        case 0x101ba0u: goto label_101ba0;
        case 0x101ba4u: goto label_101ba4;
        case 0x101ba8u: goto label_101ba8;
        case 0x101bacu: goto label_101bac;
        case 0x101bb0u: goto label_101bb0;
        case 0x101bb4u: goto label_101bb4;
        case 0x101bb8u: goto label_101bb8;
        case 0x101bbcu: goto label_101bbc;
        case 0x101bc0u: goto label_101bc0;
        case 0x101bc4u: goto label_101bc4;
        case 0x101bc8u: goto label_101bc8;
        case 0x101bccu: goto label_101bcc;
        case 0x101bd0u: goto label_101bd0;
        case 0x101bd4u: goto label_101bd4;
        case 0x101bd8u: goto label_101bd8;
        case 0x101bdcu: goto label_101bdc;
        case 0x101be0u: goto label_101be0;
        case 0x101be4u: goto label_101be4;
        case 0x101be8u: goto label_101be8;
        case 0x101becu: goto label_101bec;
        case 0x101bf0u: goto label_101bf0;
        case 0x101bf4u: goto label_101bf4;
        case 0x101bf8u: goto label_101bf8;
        case 0x101bfcu: goto label_101bfc;
        case 0x101c00u: goto label_101c00;
        case 0x101c04u: goto label_101c04;
        case 0x101c08u: goto label_101c08;
        case 0x101c0cu: goto label_101c0c;
        case 0x101c10u: goto label_101c10;
        case 0x101c14u: goto label_101c14;
        case 0x101c18u: goto label_101c18;
        case 0x101c1cu: goto label_101c1c;
        case 0x101c20u: goto label_101c20;
        case 0x101c24u: goto label_101c24;
        case 0x101c28u: goto label_101c28;
        case 0x101c2cu: goto label_101c2c;
        case 0x101c30u: goto label_101c30;
        case 0x101c34u: goto label_101c34;
        case 0x101c38u: goto label_101c38;
        case 0x101c3cu: goto label_101c3c;
        case 0x101c40u: goto label_101c40;
        case 0x101c44u: goto label_101c44;
        case 0x101c48u: goto label_101c48;
        case 0x101c4cu: goto label_101c4c;
        case 0x101c50u: goto label_101c50;
        case 0x101c54u: goto label_101c54;
        case 0x101c58u: goto label_101c58;
        case 0x101c5cu: goto label_101c5c;
        case 0x101c60u: goto label_101c60;
        case 0x101c64u: goto label_101c64;
        case 0x101c68u: goto label_101c68;
        case 0x101c6cu: goto label_101c6c;
        case 0x101c70u: goto label_101c70;
        case 0x101c74u: goto label_101c74;
        case 0x101c78u: goto label_101c78;
        case 0x101c7cu: goto label_101c7c;
        case 0x101c80u: goto label_101c80;
        case 0x101c84u: goto label_101c84;
        case 0x101c88u: goto label_101c88;
        case 0x101c8cu: goto label_101c8c;
        case 0x101c90u: goto label_101c90;
        default: break;
    }

    ctx->pc = 0x101430u;

label_101430:
    // 0x101430: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x101430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_101434:
    // 0x101434: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x101434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_101438:
    // 0x101438: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x101438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_10143c:
    // 0x10143c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x10143cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_101440:
    // 0x101440: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x101440u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_101444:
    // 0x101444: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x101444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_101448:
    // 0x101448: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x101448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_10144c:
    // 0x10144c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10144cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_101450:
    // 0x101450: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x101450u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_101454:
    // 0x101454: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x101454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_101458:
    // 0x101458: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x101458u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10145c:
    // 0x10145c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10145cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_101460:
    // 0x101460: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x101460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_101464:
    // 0x101464: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x101464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_101468:
    // 0x101468: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_10146c:
    if (ctx->pc == 0x10146Cu) {
        ctx->pc = 0x10146Cu;
            // 0x10146c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x101470u;
        goto label_101470;
    }
    ctx->pc = 0x101468u;
    {
        const bool branch_taken_0x101468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10146Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101468u;
            // 0x10146c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101468) {
            ctx->pc = 0x1014B0u;
            goto label_1014b0;
        }
    }
    ctx->pc = 0x101470u;
label_101470:
    // 0x101470: 0xc0408e8  jal         func_1023A0
label_101474:
    if (ctx->pc == 0x101474u) {
        ctx->pc = 0x101474u;
            // 0x101474: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x101478u;
        goto label_101478;
    }
    ctx->pc = 0x101470u;
    SET_GPR_U32(ctx, 31, 0x101478u);
    ctx->pc = 0x101474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101470u;
            // 0x101474: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1023A0u;
    if (runtime->hasFunction(0x1023A0u)) {
        auto targetFn = runtime->lookupFunction(0x1023A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101478u; }
        if (ctx->pc != 0x101478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___PopStackFrame__FP12ThrowContextP13ExceptionInfo_0x1023a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101478u; }
        if (ctx->pc != 0x101478u) { return; }
    }
    ctx->pc = 0x101478u;
label_101478:
    // 0x101478: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10147c:
    // 0x10147c: 0xc0407f0  jal         func_101FC0
label_101480:
    if (ctx->pc == 0x101480u) {
        ctx->pc = 0x101480u;
            // 0x101480: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x101484u;
        goto label_101484;
    }
    ctx->pc = 0x10147Cu;
    SET_GPR_U32(ctx, 31, 0x101484u);
    ctx->pc = 0x101480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10147Cu;
            // 0x101480: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FC0u;
    if (runtime->hasFunction(0x101FC0u)) {
        auto targetFn = runtime->lookupFunction(0x101FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101484u; }
        if (ctx->pc != 0x101484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FindExceptionRecord__FPcP13ExceptionInfo_0x101fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101484u; }
        if (ctx->pc != 0x101484u) { return; }
    }
    ctx->pc = 0x101484u;
label_101484:
    // 0x101484: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x101484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_101488:
    // 0x101488: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_10148c:
    if (ctx->pc == 0x10148Cu) {
        ctx->pc = 0x101490u;
        goto label_101490;
    }
    ctx->pc = 0x101488u;
    {
        const bool branch_taken_0x101488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101488) {
            ctx->pc = 0x101498u;
            goto label_101498;
        }
    }
    ctx->pc = 0x101490u;
label_101490:
    // 0x101490: 0xc040248  jal         func_100920
label_101494:
    if (ctx->pc == 0x101494u) {
        ctx->pc = 0x101498u;
        goto label_101498;
    }
    ctx->pc = 0x101490u;
    SET_GPR_U32(ctx, 31, 0x101498u);
    ctx->pc = 0x100920u;
    if (runtime->hasFunction(0x100920u)) {
        auto targetFn = runtime->lookupFunction(0x100920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101498u; }
        if (ctx->pc != 0x101498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        terminate__3stdFv_0x100920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101498u; }
        if (ctx->pc != 0x101498u) { return; }
    }
    ctx->pc = 0x101498u;
label_101498:
    // 0x101498: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x101498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10149c:
    // 0x10149c: 0xc0408bc  jal         func_1022F0
label_1014a0:
    if (ctx->pc == 0x1014A0u) {
        ctx->pc = 0x1014A0u;
            // 0x1014a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1014A4u;
        goto label_1014a4;
    }
    ctx->pc = 0x10149Cu;
    SET_GPR_U32(ctx, 31, 0x1014A4u);
    ctx->pc = 0x1014A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10149Cu;
            // 0x1014a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1022F0u;
    if (runtime->hasFunction(0x1022F0u)) {
        auto targetFn = runtime->lookupFunction(0x1022F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014A4u; }
        if (ctx->pc != 0x1014A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___SetupFrameInfo__FP12ThrowContextP13ExceptionInfo_0x1022f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014A4u; }
        if (ctx->pc != 0x1014A4u) { return; }
    }
    ctx->pc = 0x1014A4u;
label_1014a4:
    // 0x1014a4: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1014a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1014a8:
    // 0x1014a8: 0x1060ffee  beqz        $v1, . + 4 + (-0x12 << 2)
label_1014ac:
    if (ctx->pc == 0x1014ACu) {
        ctx->pc = 0x1014B0u;
        goto label_1014b0;
    }
    ctx->pc = 0x1014A8u;
    {
        const bool branch_taken_0x1014a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1014a8) {
            ctx->pc = 0x101464u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101464;
        }
    }
    ctx->pc = 0x1014B0u;
label_1014b0:
    // 0x1014b0: 0x8e690008  lw          $t1, 0x8($s3)
    ctx->pc = 0x1014b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1014b4:
    // 0x1014b4: 0x91320000  lbu         $s2, 0x0($t1)
    ctx->pc = 0x1014b4u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_1014b8:
    // 0x1014b8: 0x3243001f  andi        $v1, $s2, 0x1F
    ctx->pc = 0x1014b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)31);
label_1014bc:
    // 0x1014bc: 0x2c610010  sltiu       $at, $v1, 0x10
    ctx->pc = 0x1014bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1014c0:
    // 0x1014c0: 0x102001e0  beqz        $at, . + 4 + (0x1E0 << 2)
label_1014c4:
    if (ctx->pc == 0x1014C4u) {
        ctx->pc = 0x1014C4u;
            // 0x1014c4: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x1014C8u;
        goto label_1014c8;
    }
    ctx->pc = 0x1014C0u;
    {
        const bool branch_taken_0x1014c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1014C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1014C0u;
            // 0x1014c4: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1014c0) {
            ctx->pc = 0x101C44u;
            goto label_101c44;
        }
    }
    ctx->pc = 0x1014C8u;
label_1014c8:
    // 0x1014c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1014c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1014cc:
    // 0x1014cc: 0x2484ef30  addiu       $a0, $a0, -0x10D0
    ctx->pc = 0x1014ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962992));
label_1014d0:
    // 0x1014d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1014d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1014d4:
    // 0x1014d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1014d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1014d8:
    // 0x1014d8: 0x600008  jr          $v1
label_1014dc:
    if (ctx->pc == 0x1014DCu) {
        ctx->pc = 0x1014E0u;
        goto label_1014e0;
    }
    ctx->pc = 0x1014D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1014E0u: goto label_1014e0;
            case 0x101500u: goto label_101500;
            case 0x101558u: goto label_101558;
            case 0x1015F8u: goto label_1015f8;
            case 0x101680u: goto label_101680;
            case 0x101718u: goto label_101718;
            case 0x1017ACu: goto label_1017ac;
            case 0x101844u: goto label_101844;
            case 0x101930u: goto label_101930;
            case 0x101A10u: goto label_101a10;
            case 0x101A90u: goto label_101a90;
            case 0x101B60u: goto label_101b60;
            case 0x101BB8u: goto label_101bb8;
            case 0x101C08u: goto label_101c08;
            case 0x101C44u: goto label_101c44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1014E0u;
label_1014e0:
    // 0x1014e0: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x1014e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1014e4:
    // 0x1014e4: 0xc0402b4  jal         func_100AD0
label_1014e8:
    if (ctx->pc == 0x1014E8u) {
        ctx->pc = 0x1014E8u;
            // 0x1014e8: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->pc = 0x1014ECu;
        goto label_1014ec;
    }
    ctx->pc = 0x1014E4u;
    SET_GPR_U32(ctx, 31, 0x1014ECu);
    ctx->pc = 0x1014E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1014E4u;
            // 0x1014e8: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014ECu; }
        if (ctx->pc != 0x1014ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014ECu; }
        if (ctx->pc != 0x1014ECu) { return; }
    }
    ctx->pc = 0x1014ECu;
label_1014ec:
    // 0x1014ec: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1014ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1014f0:
    // 0x1014f0: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1014f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_1014f4:
    // 0x1014f4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1014f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1014f8:
    // 0x1014f8: 0x100001d5  b           . + 4 + (0x1D5 << 2)
label_1014fc:
    if (ctx->pc == 0x1014FCu) {
        ctx->pc = 0x1014FCu;
            // 0x1014fc: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x101500u;
        goto label_101500;
    }
    ctx->pc = 0x1014F8u;
    {
        const bool branch_taken_0x1014f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1014FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1014F8u;
            // 0x1014fc: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1014f8) {
            ctx->pc = 0x101C50u;
            goto label_101c50;
        }
    }
    ctx->pc = 0x101500u;
label_101500:
    // 0x101500: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x101500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_101504:
    // 0x101504: 0xc0402b4  jal         func_100AD0
label_101508:
    if (ctx->pc == 0x101508u) {
        ctx->pc = 0x101508u;
            // 0x101508: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x10150Cu;
        goto label_10150c;
    }
    ctx->pc = 0x101504u;
    SET_GPR_U32(ctx, 31, 0x10150Cu);
    ctx->pc = 0x101508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101504u;
            // 0x101508: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10150Cu; }
        if (ctx->pc != 0x10150Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10150Cu; }
        if (ctx->pc != 0x10150Cu) { return; }
    }
    ctx->pc = 0x10150Cu;
label_10150c:
    // 0x10150c: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x10150cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_101510:
    // 0x101510: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x101510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101514:
    // 0x101514: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x101514u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_101518:
    // 0x101518: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x101518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10151c:
    // 0x10151c: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x10151cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_101520:
    // 0x101520: 0x8e880018  lw          $t0, 0x18($s4)
    ctx->pc = 0x101520u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_101524:
    // 0x101524: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x101524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_101528:
    // 0x101528: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x101528u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_10152c:
    // 0x10152c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x10152cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_101530:
    // 0x101530: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x101530u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_101534:
    // 0x101534: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x101534u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_101538:
    // 0x101538: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x101538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_10153c:
    // 0x10153c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x10153cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_101540:
    // 0x101540: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x101540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_101544:
    // 0x101544: 0x40f809  jalr        $v0
label_101548:
    if (ctx->pc == 0x101548u) {
        ctx->pc = 0x101548u;
            // 0x101548: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->pc = 0x10154Cu;
        goto label_10154c;
    }
    ctx->pc = 0x101544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10154Cu);
        ctx->pc = 0x101548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101544u;
            // 0x101548: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10154Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10154Cu; }
            if (ctx->pc != 0x10154Cu) { return; }
        }
        }
    }
    ctx->pc = 0x10154Cu;
label_10154c:
    // 0x10154c: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x10154cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_101550:
    // 0x101550: 0x100001bf  b           . + 4 + (0x1BF << 2)
label_101554:
    if (ctx->pc == 0x101554u) {
        ctx->pc = 0x101554u;
            // 0x101554: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x101558u;
        goto label_101558;
    }
    ctx->pc = 0x101550u;
    {
        const bool branch_taken_0x101550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101550u;
            // 0x101554: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101550) {
            ctx->pc = 0x101C50u;
            goto label_101c50;
        }
    }
    ctx->pc = 0x101558u;
label_101558:
    // 0x101558: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x101558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_10155c:
    // 0x10155c: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x10155cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_101560:
    // 0x101560: 0xc0402b4  jal         func_100AD0
label_101564:
    if (ctx->pc == 0x101564u) {
        ctx->pc = 0x101564u;
            // 0x101564: 0x32500040  andi        $s0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->pc = 0x101568u;
        goto label_101568;
    }
    ctx->pc = 0x101560u;
    SET_GPR_U32(ctx, 31, 0x101568u);
    ctx->pc = 0x101564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101560u;
            // 0x101564: 0x32500040  andi        $s0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101568u; }
        if (ctx->pc != 0x101568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101568u; }
        if (ctx->pc != 0x101568u) { return; }
    }
    ctx->pc = 0x101568u;
label_101568:
    // 0x101568: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10156c:
    // 0x10156c: 0xc0402b4  jal         func_100AD0
label_101570:
    if (ctx->pc == 0x101570u) {
        ctx->pc = 0x101570u;
            // 0x101570: 0x27a500a4  addiu       $a1, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->pc = 0x101574u;
        goto label_101574;
    }
    ctx->pc = 0x10156Cu;
    SET_GPR_U32(ctx, 31, 0x101574u);
    ctx->pc = 0x101570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10156Cu;
            // 0x101570: 0x27a500a4  addiu       $a1, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101574u; }
        if (ctx->pc != 0x101574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101574u; }
        if (ctx->pc != 0x101574u) { return; }
    }
    ctx->pc = 0x101574u;
label_101574:
    // 0x101574: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x101574u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_101578:
    // 0x101578: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x101578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_10157c:
    // 0x10157c: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x10157cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_101580:
    // 0x101580: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x101580u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_101584:
    // 0x101584: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x101584u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_101588:
    // 0x101588: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x101588u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_10158c:
    // 0x10158c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x10158cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_101590:
    // 0x101590: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x101590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_101594:
    // 0x101594: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x101594u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_101598:
    // 0x101598: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x101598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_10159c:
    // 0x10159c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1015a0:
    if (ctx->pc == 0x1015A0u) {
        ctx->pc = 0x1015A0u;
            // 0x1015a0: 0x643025  or          $a2, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->pc = 0x1015A4u;
        goto label_1015a4;
    }
    ctx->pc = 0x10159Cu;
    {
        const bool branch_taken_0x10159c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1015A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10159Cu;
            // 0x1015a0: 0x643025  or          $a2, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10159c) {
            ctx->pc = 0x1015C0u;
            goto label_1015c0;
        }
    }
    ctx->pc = 0x1015A4u;
label_1015a4:
    // 0x1015a4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1015a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1015a8:
    // 0x1015a8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1015a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1015ac:
    // 0x1015ac: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1015acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1015b0:
    // 0x1015b0: 0x78630020  lq          $v1, 0x20($v1)
    ctx->pc = 0x1015b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_1015b4:
    // 0x1015b4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1015b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_1015b8:
    // 0x1015b8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1015bc:
    if (ctx->pc == 0x1015BCu) {
        ctx->pc = 0x1015BCu;
            // 0x1015bc: 0x31e3f  dsra32      $v1, $v1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
        ctx->pc = 0x1015C0u;
        goto label_1015c0;
    }
    ctx->pc = 0x1015B8u;
    {
        const bool branch_taken_0x1015b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1015BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1015B8u;
            // 0x1015bc: 0x31e3f  dsra32      $v1, $v1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1015b8) {
            ctx->pc = 0x1015D4u;
            goto label_1015d4;
        }
    }
    ctx->pc = 0x1015C0u;
label_1015c0:
    // 0x1015c0: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x1015c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1015c4:
    // 0x1015c4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1015c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1015c8:
    // 0x1015c8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1015c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1015cc:
    // 0x1015cc: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1015ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1015d0:
    // 0x1015d0: 0x0  nop
    ctx->pc = 0x1015d0u;
    // NOP
label_1015d4:
    // 0x1015d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1015d8:
    if (ctx->pc == 0x1015D8u) {
        ctx->pc = 0x1015DCu;
        goto label_1015dc;
    }
    ctx->pc = 0x1015D4u;
    {
        const bool branch_taken_0x1015d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1015d4) {
            ctx->pc = 0x1015F0u;
            goto label_1015f0;
        }
    }
    ctx->pc = 0x1015DCu;
label_1015dc:
    // 0x1015dc: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x1015dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1015e0:
    // 0x1015e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1015e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1015e4:
    // 0x1015e4: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x1015e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1015e8:
    // 0x1015e8: 0xc0f809  jalr        $a2
label_1015ec:
    if (ctx->pc == 0x1015ECu) {
        ctx->pc = 0x1015ECu;
            // 0x1015ec: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1015F0u;
        goto label_1015f0;
    }
    ctx->pc = 0x1015E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1015F0u);
        ctx->pc = 0x1015ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1015E8u;
            // 0x1015ec: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1015F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1015F0u; }
            if (ctx->pc != 0x1015F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1015F0u;
label_1015f0:
    // 0x1015f0: 0x10000197  b           . + 4 + (0x197 << 2)
label_1015f4:
    if (ctx->pc == 0x1015F4u) {
        ctx->pc = 0x1015F4u;
            // 0x1015f4: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->pc = 0x1015F8u;
        goto label_1015f8;
    }
    ctx->pc = 0x1015F0u;
    {
        const bool branch_taken_0x1015f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1015F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1015F0u;
            // 0x1015f4: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1015f0) {
            ctx->pc = 0x101C50u;
            goto label_101c50;
        }
    }
    ctx->pc = 0x1015F8u;
label_1015f8:
    // 0x1015f8: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x1015f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1015fc:
    // 0x1015fc: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x1015fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_101600:
    // 0x101600: 0xc0402b4  jal         func_100AD0
label_101604:
    if (ctx->pc == 0x101604u) {
        ctx->pc = 0x101604u;
            // 0x101604: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->pc = 0x101608u;
        goto label_101608;
    }
    ctx->pc = 0x101600u;
    SET_GPR_U32(ctx, 31, 0x101608u);
    ctx->pc = 0x101604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101600u;
            // 0x101604: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101608u; }
        if (ctx->pc != 0x101608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101608u; }
        if (ctx->pc != 0x101608u) { return; }
    }
    ctx->pc = 0x101608u;
label_101608:
    // 0x101608: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x101608u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_10160c:
    // 0x10160c: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x10160cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_101610:
    // 0x101610: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x101610u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_101614:
    // 0x101614: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x101614u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_101618:
    // 0x101618: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x101618u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_10161c:
    // 0x10161c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x10161cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_101620:
    // 0x101620: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x101620u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_101624:
    // 0x101624: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x101624u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_101628:
    // 0x101628: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x101628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_10162c:
    // 0x10162c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x10162cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_101630:
    // 0x101630: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_101634:
    if (ctx->pc == 0x101634u) {
        ctx->pc = 0x101634u;
            // 0x101634: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->pc = 0x101638u;
        goto label_101638;
    }
    ctx->pc = 0x101630u;
    {
        const bool branch_taken_0x101630 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x101634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101630u;
            // 0x101634: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101630) {
            ctx->pc = 0x101654u;
            goto label_101654;
        }
    }
    ctx->pc = 0x101638u;
label_101638:
    // 0x101638: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x101638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_10163c:
    // 0x10163c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10163cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_101640:
    // 0x101640: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x101640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_101644:
    // 0x101644: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x101644u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_101648:
    // 0x101648: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x101648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_10164c:
    // 0x10164c: 0x10000007  b           . + 4 + (0x7 << 2)
label_101650:
    if (ctx->pc == 0x101650u) {
        ctx->pc = 0x101650u;
            // 0x101650: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->pc = 0x101654u;
        goto label_101654;
    }
    ctx->pc = 0x10164Cu;
    {
        const bool branch_taken_0x10164c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10164Cu;
            // 0x101650: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10164c) {
            ctx->pc = 0x10166Cu;
            goto label_10166c;
        }
    }
    ctx->pc = 0x101654u;
label_101654:
    // 0x101654: 0x0  nop
    ctx->pc = 0x101654u;
    // NOP
label_101658:
    // 0x101658: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x101658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_10165c:
    // 0x10165c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x10165cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_101660:
    // 0x101660: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x101660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_101664:
    // 0x101664: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x101664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_101668:
    // 0x101668: 0x0  nop
    ctx->pc = 0x101668u;
    // NOP
label_10166c:
    // 0x10166c: 0x0  nop
    ctx->pc = 0x10166cu;
    // NOP
label_101670:
    // 0x101670: 0xc0f809  jalr        $a2
label_101674:
    if (ctx->pc == 0x101674u) {
        ctx->pc = 0x101674u;
            // 0x101674: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x101678u;
        goto label_101678;
    }
    ctx->pc = 0x101670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x101678u);
        ctx->pc = 0x101674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101670u;
            // 0x101674: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x101678u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x101678u; }
            if (ctx->pc != 0x101678u) { return; }
        }
        }
    }
    ctx->pc = 0x101678u;
label_101678:
    // 0x101678: 0x10000175  b           . + 4 + (0x175 << 2)
label_10167c:
    if (ctx->pc == 0x10167Cu) {
        ctx->pc = 0x10167Cu;
            // 0x10167c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->pc = 0x101680u;
        goto label_101680;
    }
    ctx->pc = 0x101678u;
    {
        const bool branch_taken_0x101678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10167Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101678u;
            // 0x10167c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101678) {
            ctx->pc = 0x101C50u;
            goto label_101c50;
        }
    }
    ctx->pc = 0x101680u;
label_101680:
    // 0x101680: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x101680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_101684:
    // 0x101684: 0xc0402b4  jal         func_100AD0
label_101688:
    if (ctx->pc == 0x101688u) {
        ctx->pc = 0x101688u;
            // 0x101688: 0x27a500b8  addiu       $a1, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->pc = 0x10168Cu;
        goto label_10168c;
    }
    ctx->pc = 0x101684u;
    SET_GPR_U32(ctx, 31, 0x10168Cu);
    ctx->pc = 0x101688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101684u;
            // 0x101688: 0x27a500b8  addiu       $a1, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10168Cu; }
        if (ctx->pc != 0x10168Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10168Cu; }
        if (ctx->pc != 0x10168Cu) { return; }
    }
    ctx->pc = 0x10168Cu;
label_10168c:
    // 0x10168c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10168cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101690:
    // 0x101690: 0xc04028c  jal         func_100A30
label_101694:
    if (ctx->pc == 0x101694u) {
        ctx->pc = 0x101694u;
            // 0x101694: 0x27a500b4  addiu       $a1, $sp, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
        ctx->pc = 0x101698u;
        goto label_101698;
    }
    ctx->pc = 0x101690u;
    SET_GPR_U32(ctx, 31, 0x101698u);
    ctx->pc = 0x101694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101690u;
            // 0x101694: 0x27a500b4  addiu       $a1, $sp, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101698u; }
        if (ctx->pc != 0x101698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101698u; }
        if (ctx->pc != 0x101698u) { return; }
    }
    ctx->pc = 0x101698u;
label_101698:
    // 0x101698: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10169c:
    // 0x10169c: 0xc04028c  jal         func_100A30
label_1016a0:
    if (ctx->pc == 0x1016A0u) {
        ctx->pc = 0x1016A0u;
            // 0x1016a0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1016A4u;
        goto label_1016a4;
    }
    ctx->pc = 0x10169Cu;
    SET_GPR_U32(ctx, 31, 0x1016A4u);
    ctx->pc = 0x1016A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10169Cu;
            // 0x1016a0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016A4u; }
        if (ctx->pc != 0x1016A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016A4u; }
        if (ctx->pc != 0x1016A4u) { return; }
    }
    ctx->pc = 0x1016A4u;
label_1016a4:
    // 0x1016a4: 0x90480001  lbu         $t0, 0x1($v0)
    ctx->pc = 0x1016a4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1016a8:
    // 0x1016a8: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x1016a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1016ac:
    // 0x1016ac: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1016acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1016b0:
    // 0x1016b0: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x1016b0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1016b4:
    // 0x1016b4: 0x90460003  lbu         $a2, 0x3($v0)
    ctx->pc = 0x1016b4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1016b8:
    // 0x1016b8: 0x8fb100b4  lw          $s1, 0xB4($sp)
    ctx->pc = 0x1016b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_1016bc:
    // 0x1016bc: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x1016bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1016c0:
    // 0x1016c0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1016c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_1016c4:
    // 0x1016c4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1016c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1016c8:
    // 0x1016c8: 0x684025  or          $t0, $v1, $t0
    ctx->pc = 0x1016c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
label_1016cc:
    // 0x1016cc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1016ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1016d0:
    // 0x1016d0: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1016d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1016d4:
    // 0x1016d4: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1016d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_1016d8:
    // 0x1016d8: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1016d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_1016dc:
    // 0x1016dc: 0xc7b025  or          $s6, $a2, $a3
    ctx->pc = 0x1016dcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1016e0:
    // 0x1016e0: 0xa4a821  addu        $s5, $a1, $a0
    ctx->pc = 0x1016e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1016e4:
    // 0x1016e4: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1016e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1016e8:
    // 0x1016e8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_1016ec:
    if (ctx->pc == 0x1016ECu) {
        ctx->pc = 0x1016ECu;
            // 0x1016ec: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->pc = 0x1016F0u;
        goto label_1016f0;
    }
    ctx->pc = 0x1016E8u;
    {
        const bool branch_taken_0x1016e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1016ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1016E8u;
            // 0x1016ec: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1016e8) {
            ctx->pc = 0x101710u;
            goto label_101710;
        }
    }
    ctx->pc = 0x1016F0u;
label_1016f0:
    // 0x1016f0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1016f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1016f4:
    // 0x1016f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1016f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1016f8:
    // 0x1016f8: 0x2a2a823  subu        $s5, $s5, $v0
    ctx->pc = 0x1016f8u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1016fc:
    // 0x1016fc: 0x2c0f809  jalr        $s6
label_101700:
    if (ctx->pc == 0x101700u) {
        ctx->pc = 0x101700u;
            // 0x101700: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x101704u;
        goto label_101704;
    }
    ctx->pc = 0x1016FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x101704u);
        ctx->pc = 0x101700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1016FCu;
            // 0x101700: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x101704u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x101704u; }
            if (ctx->pc != 0x101704u) { return; }
        }
        }
    }
    ctx->pc = 0x101704u;
label_101704:
    // 0x101704: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x101704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_101708:
    // 0x101708: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
label_10170c:
    if (ctx->pc == 0x10170Cu) {
        ctx->pc = 0x101710u;
        goto label_101710;
    }
    ctx->pc = 0x101708u;
    {
        const bool branch_taken_0x101708 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x101708) {
            ctx->pc = 0x1016F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1016f0;
        }
    }
    ctx->pc = 0x101710u;
label_101710:
    // 0x101710: 0x1000014f  b           . + 4 + (0x14F << 2)
label_101714:
    if (ctx->pc == 0x101714u) {
        ctx->pc = 0x101714u;
            // 0x101714: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->pc = 0x101718u;
        goto label_101718;
    }
    ctx->pc = 0x101710u;
    {
        const bool branch_taken_0x101710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101710u;
            // 0x101714: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101710) {
            ctx->pc = 0x101C50u;
            goto label_101c50;
        }
    }
    ctx->pc = 0x101718u;
label_101718:
    // 0x101718: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x101718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_10171c:
    // 0x10171c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x10171cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_101720:
    // 0x101720: 0xc0402b4  jal         func_100AD0
label_101724:
    if (ctx->pc == 0x101724u) {
        ctx->pc = 0x101724u;
            // 0x101724: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->pc = 0x101728u;
        goto label_101728;
    }
    ctx->pc = 0x101720u;
    SET_GPR_U32(ctx, 31, 0x101728u);
    ctx->pc = 0x101724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101720u;
            // 0x101724: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101728u; }
        if (ctx->pc != 0x101728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101728u; }
        if (ctx->pc != 0x101728u) { return; }
    }
    ctx->pc = 0x101728u;
label_101728:
    // 0x101728: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10172c:
    // 0x10172c: 0xc0402b4  jal         func_100AD0
label_101730:
    if (ctx->pc == 0x101730u) {
        ctx->pc = 0x101730u;
            // 0x101730: 0x27a500bc  addiu       $a1, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->pc = 0x101734u;
        goto label_101734;
    }
    ctx->pc = 0x10172Cu;
    SET_GPR_U32(ctx, 31, 0x101734u);
    ctx->pc = 0x101730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10172Cu;
            // 0x101730: 0x27a500bc  addiu       $a1, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101734u; }
        if (ctx->pc != 0x101734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101734u; }
        if (ctx->pc != 0x101734u) { return; }
    }
    ctx->pc = 0x101734u;
label_101734:
    // 0x101734: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x101734u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_101738:
    // 0x101738: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x101738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_10173c:
    // 0x10173c: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x10173cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_101740:
    // 0x101740: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x101740u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_101744:
    // 0x101744: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x101744u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_101748:
    // 0x101748: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x101748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_10174c:
    // 0x10174c: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x10174cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_101750:
    // 0x101750: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x101750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_101754:
    // 0x101754: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x101754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_101758:
    // 0x101758: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x101758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_10175c:
    // 0x10175c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_101760:
    if (ctx->pc == 0x101760u) {
        ctx->pc = 0x101760u;
            // 0x101760: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->pc = 0x101764u;
        goto label_101764;
    }
    ctx->pc = 0x10175Cu;
    {
        const bool branch_taken_0x10175c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x101760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10175Cu;
            // 0x101760: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10175c) {
            ctx->pc = 0x101780u;
            goto label_101780;
        }
    }
    ctx->pc = 0x101764u;
label_101764:
    // 0x101764: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x101764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_101768:
    // 0x101768: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x101768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10176c:
    // 0x10176c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x10176cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_101770:
    // 0x101770: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x101770u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_101774:
    // 0x101774: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x101774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_101778:
    // 0x101778: 0x10000006  b           . + 4 + (0x6 << 2)
label_10177c:
    if (ctx->pc == 0x10177Cu) {
        ctx->pc = 0x10177Cu;
            // 0x10177c: 0x3183f  dsra32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
        ctx->pc = 0x101780u;
        goto label_101780;
    }
    ctx->pc = 0x101778u;
    {
        const bool branch_taken_0x101778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10177Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101778u;
            // 0x10177c: 0x3183f  dsra32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101778) {
            ctx->pc = 0x101794u;
            goto label_101794;
        }
    }
    ctx->pc = 0x101780u;
label_101780:
    // 0x101780: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x101780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_101784:
    // 0x101784: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x101784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_101788:
    // 0x101788: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x101788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10178c:
    // 0x10178c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10178cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_101790:
    // 0x101790: 0x0  nop
    ctx->pc = 0x101790u;
    // NOP
label_101794:
    // 0x101794: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x101794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_101798:
    // 0x101798: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10179c:
    // 0x10179c: 0xc0f809  jalr        $a2
label_1017a0:
    if (ctx->pc == 0x1017A0u) {
        ctx->pc = 0x1017A0u;
            // 0x1017a0: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1017A4u;
        goto label_1017a4;
    }
    ctx->pc = 0x10179Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1017A4u);
        ctx->pc = 0x1017A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10179Cu;
            // 0x1017a0: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1017A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1017A4u; }
            if (ctx->pc != 0x1017A4u) { return; }
        }
        }
    }
    ctx->pc = 0x1017A4u;
label_1017a4:
    // 0x1017a4: 0x1000012a  b           . + 4 + (0x12A << 2)
label_1017a8:
    if (ctx->pc == 0x1017A8u) {
        ctx->pc = 0x1017A8u;
            // 0x1017a8: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->pc = 0x1017ACu;
        goto label_1017ac;
    }
    ctx->pc = 0x1017A4u;
    {
        const bool branch_taken_0x1017a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1017A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1017A4u;
            // 0x1017a8: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1017a4) {
            ctx->pc = 0x101C50u;
            goto label_101c50;
        }
    }
    ctx->pc = 0x1017ACu;
label_1017ac:
    // 0x1017ac: 0x0  nop
    ctx->pc = 0x1017acu;
    // NOP
label_1017b0:
    // 0x1017b0: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x1017b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1017b4:
    // 0x1017b4: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x1017b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_1017b8:
    // 0x1017b8: 0xc0402b4  jal         func_100AD0
label_1017bc:
    if (ctx->pc == 0x1017BCu) {
        ctx->pc = 0x1017BCu;
            // 0x1017bc: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->pc = 0x1017C0u;
        goto label_1017c0;
    }
    ctx->pc = 0x1017B8u;
    SET_GPR_U32(ctx, 31, 0x1017C0u);
    ctx->pc = 0x1017BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1017B8u;
            // 0x1017bc: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1017C0u; }
        if (ctx->pc != 0x1017C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1017C0u; }
        if (ctx->pc != 0x1017C0u) { return; }
    }
    ctx->pc = 0x1017C0u;
label_1017c0:
    // 0x1017c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1017c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1017c4:
    // 0x1017c4: 0xc0402b4  jal         func_100AD0
label_1017c8:
    if (ctx->pc == 0x1017C8u) {
        ctx->pc = 0x1017C8u;
            // 0x1017c8: 0x27a500c4  addiu       $a1, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->pc = 0x1017CCu;
        goto label_1017cc;
    }
    ctx->pc = 0x1017C4u;
    SET_GPR_U32(ctx, 31, 0x1017CCu);
    ctx->pc = 0x1017C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1017C4u;
            // 0x1017c8: 0x27a500c4  addiu       $a1, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1017CCu; }
        if (ctx->pc != 0x1017CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1017CCu; }
        if (ctx->pc != 0x1017CCu) { return; }
    }
    ctx->pc = 0x1017CCu;
label_1017cc:
    // 0x1017cc: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x1017ccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1017d0:
    // 0x1017d0: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1017d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1017d4:
    // 0x1017d4: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1017d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1017d8:
    // 0x1017d8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1017d8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1017dc:
    // 0x1017dc: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1017dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1017e0:
    // 0x1017e0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1017e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1017e4:
    // 0x1017e4: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1017e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1017e8:
    // 0x1017e8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1017e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1017ec:
    // 0x1017ec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1017ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1017f0:
    // 0x1017f0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1017f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1017f4:
    // 0x1017f4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1017f8:
    if (ctx->pc == 0x1017F8u) {
        ctx->pc = 0x1017F8u;
            // 0x1017f8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->pc = 0x1017FCu;
        goto label_1017fc;
    }
    ctx->pc = 0x1017F4u;
    {
        const bool branch_taken_0x1017f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1017F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1017F4u;
            // 0x1017f8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1017f4) {
            ctx->pc = 0x101818u;
            goto label_101818;
        }
    }
    ctx->pc = 0x1017FCu;
label_1017fc:
    // 0x1017fc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1017fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_101800:
    // 0x101800: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x101800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_101804:
    // 0x101804: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x101804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_101808:
    // 0x101808: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x101808u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_10180c:
    // 0x10180c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x10180cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_101810:
    // 0x101810: 0x10000006  b           . + 4 + (0x6 << 2)
label_101814:
    if (ctx->pc == 0x101814u) {
        ctx->pc = 0x101814u;
            // 0x101814: 0x3183f  dsra32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
        ctx->pc = 0x101818u;
        goto label_101818;
    }
    ctx->pc = 0x101810u;
    {
        const bool branch_taken_0x101810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101810u;
            // 0x101814: 0x3183f  dsra32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101810) {
            ctx->pc = 0x10182Cu;
            goto label_10182c;
        }
    }
    ctx->pc = 0x101818u;
label_101818:
    // 0x101818: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x101818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_10181c:
    // 0x10181c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x10181cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_101820:
    // 0x101820: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x101820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_101824:
    // 0x101824: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x101824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_101828:
    // 0x101828: 0x0  nop
    ctx->pc = 0x101828u;
    // NOP
label_10182c:
    // 0x10182c: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x10182cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_101830:
    // 0x101830: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x101830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_101834:
    // 0x101834: 0xc0f809  jalr        $a2
label_101838:
    if (ctx->pc == 0x101838u) {
        ctx->pc = 0x101838u;
            // 0x101838: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x10183Cu;
        goto label_10183c;
    }
    ctx->pc = 0x101834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x10183Cu);
        ctx->pc = 0x101838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101834u;
            // 0x101838: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10183Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10183Cu; }
            if (ctx->pc != 0x10183Cu) { return; }
        }
        }
    }
    ctx->pc = 0x10183Cu;
label_10183c:
    // 0x10183c: 0x10000104  b           . + 4 + (0x104 << 2)
label_101840:
    if (ctx->pc == 0x101840u) {
        ctx->pc = 0x101840u;
            // 0x101840: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->pc = 0x101844u;
        goto label_101844;
    }
    ctx->pc = 0x10183Cu;
    {
        const bool branch_taken_0x10183c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10183Cu;
            // 0x101840: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10183c) {
            ctx->pc = 0x101C50u;
            goto label_101c50;
        }
    }
    ctx->pc = 0x101844u;
label_101844:
    // 0x101844: 0x0  nop
    ctx->pc = 0x101844u;
    // NOP
label_101848:
    // 0x101848: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x101848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_10184c:
    // 0x10184c: 0x27a500d4  addiu       $a1, $sp, 0xD4
    ctx->pc = 0x10184cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_101850:
    // 0x101850: 0x32550040  andi        $s5, $s2, 0x40
    ctx->pc = 0x101850u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
label_101854:
    // 0x101854: 0xc0402b4  jal         func_100AD0
label_101858:
    if (ctx->pc == 0x101858u) {
        ctx->pc = 0x101858u;
            // 0x101858: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->pc = 0x10185Cu;
        goto label_10185c;
    }
    ctx->pc = 0x101854u;
    SET_GPR_U32(ctx, 31, 0x10185Cu);
    ctx->pc = 0x101858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101854u;
            // 0x101858: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10185Cu; }
        if (ctx->pc != 0x10185Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10185Cu; }
        if (ctx->pc != 0x10185Cu) { return; }
    }
    ctx->pc = 0x10185Cu;
label_10185c:
    // 0x10185c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10185cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101860:
    // 0x101860: 0xc0402b4  jal         func_100AD0
label_101864:
    if (ctx->pc == 0x101864u) {
        ctx->pc = 0x101864u;
            // 0x101864: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x101868u;
        goto label_101868;
    }
    ctx->pc = 0x101860u;
    SET_GPR_U32(ctx, 31, 0x101868u);
    ctx->pc = 0x101864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101860u;
            // 0x101864: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101868u; }
        if (ctx->pc != 0x101868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101868u; }
        if (ctx->pc != 0x101868u) { return; }
    }
    ctx->pc = 0x101868u;
label_101868:
    // 0x101868: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10186c:
    // 0x10186c: 0xc0402b4  jal         func_100AD0
label_101870:
    if (ctx->pc == 0x101870u) {
        ctx->pc = 0x101870u;
            // 0x101870: 0x27a500cc  addiu       $a1, $sp, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
        ctx->pc = 0x101874u;
        goto label_101874;
    }
    ctx->pc = 0x10186Cu;
    SET_GPR_U32(ctx, 31, 0x101874u);
    ctx->pc = 0x101870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10186Cu;
            // 0x101870: 0x27a500cc  addiu       $a1, $sp, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101874u; }
        if (ctx->pc != 0x101874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101874u; }
        if (ctx->pc != 0x101874u) { return; }
    }
    ctx->pc = 0x101874u;
label_101874:
    // 0x101874: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x101874u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_101878:
    // 0x101878: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x101878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_10187c:
    // 0x10187c: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x10187cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_101880:
    // 0x101880: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x101880u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_101884:
    // 0x101884: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x101884u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_101888:
    // 0x101888: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x101888u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_10188c:
    // 0x10188c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x10188cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_101890:
    // 0x101890: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x101890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_101894:
    // 0x101894: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x101894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_101898:
    // 0x101898: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x101898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_10189c:
    // 0x10189c: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
label_1018a0:
    if (ctx->pc == 0x1018A0u) {
        ctx->pc = 0x1018A0u;
            // 0x1018a0: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->pc = 0x1018A4u;
        goto label_1018a4;
    }
    ctx->pc = 0x10189Cu;
    {
        const bool branch_taken_0x10189c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1018A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10189Cu;
            // 0x1018a0: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10189c) {
            ctx->pc = 0x1018C0u;
            goto label_1018c0;
        }
    }
    ctx->pc = 0x1018A4u;
label_1018a4:
    // 0x1018a4: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x1018a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_1018a8:
    // 0x1018a8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1018a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1018ac:
    // 0x1018ac: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1018acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1018b0:
    // 0x1018b0: 0x78840020  lq          $a0, 0x20($a0)
    ctx->pc = 0x1018b0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_1018b4:
    // 0x1018b4: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x1018b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_1018b8:
    // 0x1018b8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1018bc:
    if (ctx->pc == 0x1018BCu) {
        ctx->pc = 0x1018BCu;
            // 0x1018bc: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->pc = 0x1018C0u;
        goto label_1018c0;
    }
    ctx->pc = 0x1018B8u;
    {
        const bool branch_taken_0x1018b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1018BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1018B8u;
            // 0x1018bc: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1018b8) {
            ctx->pc = 0x1018D4u;
            goto label_1018d4;
        }
    }
    ctx->pc = 0x1018C0u;
label_1018c0:
    // 0x1018c0: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x1018c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1018c4:
    // 0x1018c4: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x1018c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_1018c8:
    // 0x1018c8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1018c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1018cc:
    // 0x1018cc: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x1018ccu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1018d0:
    // 0x1018d0: 0x0  nop
    ctx->pc = 0x1018d0u;
    // NOP
label_1018d4:
    // 0x1018d4: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_1018d8:
    if (ctx->pc == 0x1018D8u) {
        ctx->pc = 0x1018DCu;
        goto label_1018dc;
    }
    ctx->pc = 0x1018D4u;
    {
        const bool branch_taken_0x1018d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1018d4) {
            ctx->pc = 0x101924u;
            goto label_101924;
        }
    }
    ctx->pc = 0x1018DCu;
label_1018dc:
    // 0x1018dc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1018e0:
    if (ctx->pc == 0x1018E0u) {
        ctx->pc = 0x1018E4u;
        goto label_1018e4;
    }
    ctx->pc = 0x1018DCu;
    {
        const bool branch_taken_0x1018dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1018dc) {
            ctx->pc = 0x101900u;
            goto label_101900;
        }
    }
    ctx->pc = 0x1018E4u;
label_1018e4:
    // 0x1018e4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1018e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1018e8:
    // 0x1018e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1018e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1018ec:
    // 0x1018ec: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1018ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1018f0:
    // 0x1018f0: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x1018f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_1018f4:
    // 0x1018f4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1018f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1018f8:
    // 0x1018f8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1018fc:
    if (ctx->pc == 0x1018FCu) {
        ctx->pc = 0x1018FCu;
            // 0x1018fc: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->pc = 0x101900u;
        goto label_101900;
    }
    ctx->pc = 0x1018F8u;
    {
        const bool branch_taken_0x1018f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1018FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1018F8u;
            // 0x1018fc: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1018f8) {
            ctx->pc = 0x101914u;
            goto label_101914;
        }
    }
    ctx->pc = 0x101900u;
label_101900:
    // 0x101900: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x101900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_101904:
    // 0x101904: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x101904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_101908:
    // 0x101908: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x101908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10190c:
    // 0x10190c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10190cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_101910:
    // 0x101910: 0x0  nop
    ctx->pc = 0x101910u;
    // NOP
label_101914:
    // 0x101914: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x101914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_101918:
    // 0x101918: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x101918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10191c:
    // 0x10191c: 0x60f809  jalr        $v1
label_101920:
    if (ctx->pc == 0x101920u) {
        ctx->pc = 0x101920u;
            // 0x101920: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->pc = 0x101924u;
        goto label_101924;
    }
    ctx->pc = 0x10191Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x101924u);
        ctx->pc = 0x101920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10191Cu;
            // 0x101920: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x101924u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x101924u; }
            if (ctx->pc != 0x101924u) { return; }
        }
        }
    }
    ctx->pc = 0x101924u;
label_101924:
    // 0x101924: 0x0  nop
    ctx->pc = 0x101924u;
    // NOP
label_101928:
    // 0x101928: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_10192c:
    if (ctx->pc == 0x10192Cu) {
        ctx->pc = 0x10192Cu;
            // 0x10192c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->pc = 0x101930u;
        goto label_101930;
    }
    ctx->pc = 0x101928u;
    {
        const bool branch_taken_0x101928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10192Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101928u;
            // 0x10192c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101928) {
            ctx->pc = 0x101C50u;
            goto label_101c50;
        }
    }
    ctx->pc = 0x101930u;
label_101930:
    // 0x101930: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x101930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_101934:
    // 0x101934: 0x27a500e4  addiu       $a1, $sp, 0xE4
    ctx->pc = 0x101934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_101938:
    // 0x101938: 0xc0402b4  jal         func_100AD0
label_10193c:
    if (ctx->pc == 0x10193Cu) {
        ctx->pc = 0x10193Cu;
            // 0x10193c: 0x32510020  andi        $s1, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->pc = 0x101940u;
        goto label_101940;
    }
    ctx->pc = 0x101938u;
    SET_GPR_U32(ctx, 31, 0x101940u);
    ctx->pc = 0x10193Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101938u;
            // 0x10193c: 0x32510020  andi        $s1, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101940u; }
        if (ctx->pc != 0x101940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101940u; }
        if (ctx->pc != 0x101940u) { return; }
    }
    ctx->pc = 0x101940u;
label_101940:
    // 0x101940: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101944:
    // 0x101944: 0xc0402b4  jal         func_100AD0
label_101948:
    if (ctx->pc == 0x101948u) {
        ctx->pc = 0x101948u;
            // 0x101948: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x10194Cu;
        goto label_10194c;
    }
    ctx->pc = 0x101944u;
    SET_GPR_U32(ctx, 31, 0x10194Cu);
    ctx->pc = 0x101948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101944u;
            // 0x101948: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10194Cu; }
        if (ctx->pc != 0x10194Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10194Cu; }
        if (ctx->pc != 0x10194Cu) { return; }
    }
    ctx->pc = 0x10194Cu;
label_10194c:
    // 0x10194c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10194cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101950:
    // 0x101950: 0xc04028c  jal         func_100A30
label_101954:
    if (ctx->pc == 0x101954u) {
        ctx->pc = 0x101954u;
            // 0x101954: 0x27a500dc  addiu       $a1, $sp, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
        ctx->pc = 0x101958u;
        goto label_101958;
    }
    ctx->pc = 0x101950u;
    SET_GPR_U32(ctx, 31, 0x101958u);
    ctx->pc = 0x101954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101950u;
            // 0x101954: 0x27a500dc  addiu       $a1, $sp, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101958u; }
        if (ctx->pc != 0x101958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101958u; }
        if (ctx->pc != 0x101958u) { return; }
    }
    ctx->pc = 0x101958u;
label_101958:
    // 0x101958: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10195c:
    // 0x10195c: 0xc04028c  jal         func_100A30
label_101960:
    if (ctx->pc == 0x101960u) {
        ctx->pc = 0x101960u;
            // 0x101960: 0x27a500d8  addiu       $a1, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->pc = 0x101964u;
        goto label_101964;
    }
    ctx->pc = 0x10195Cu;
    SET_GPR_U32(ctx, 31, 0x101964u);
    ctx->pc = 0x101960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10195Cu;
            // 0x101960: 0x27a500d8  addiu       $a1, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101964u; }
        if (ctx->pc != 0x101964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101964u; }
        if (ctx->pc != 0x101964u) { return; }
    }
    ctx->pc = 0x101964u;
label_101964:
    // 0x101964: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x101964u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_101968:
    // 0x101968: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x101968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_10196c:
    // 0x10196c: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x10196cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_101970:
    // 0x101970: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x101970u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_101974:
    // 0x101974: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x101974u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_101978:
    // 0x101978: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x101978u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_10197c:
    // 0x10197c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x10197cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_101980:
    // 0x101980: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x101980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_101984:
    // 0x101984: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x101984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_101988:
    // 0x101988: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x101988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_10198c:
    // 0x10198c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_101990:
    if (ctx->pc == 0x101990u) {
        ctx->pc = 0x101990u;
            // 0x101990: 0x64b025  or          $s6, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->pc = 0x101994u;
        goto label_101994;
    }
    ctx->pc = 0x10198Cu;
    {
        const bool branch_taken_0x10198c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x101990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10198Cu;
            // 0x101990: 0x64b025  or          $s6, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10198c) {
            ctx->pc = 0x1019B8u;
            goto label_1019b8;
        }
    }
    ctx->pc = 0x101994u;
label_101994:
    // 0x101994: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x101994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_101998:
    // 0x101998: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x101998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_10199c:
    // 0x10199c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x10199cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1019a0:
    // 0x1019a0: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1019a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1019a4:
    // 0x1019a4: 0x78840020  lq          $a0, 0x20($a0)
    ctx->pc = 0x1019a4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_1019a8:
    // 0x1019a8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1019a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1019ac:
    // 0x1019ac: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1019acu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1019b0:
    // 0x1019b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1019b4:
    if (ctx->pc == 0x1019B4u) {
        ctx->pc = 0x1019B4u;
            // 0x1019b4: 0x83a821  addu        $s5, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x1019B8u;
        goto label_1019b8;
    }
    ctx->pc = 0x1019B0u;
    {
        const bool branch_taken_0x1019b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1019B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1019B0u;
            // 0x1019b4: 0x83a821  addu        $s5, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1019b0) {
            ctx->pc = 0x1019D0u;
            goto label_1019d0;
        }
    }
    ctx->pc = 0x1019B8u;
label_1019b8:
    // 0x1019b8: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x1019b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1019bc:
    // 0x1019bc: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x1019bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_1019c0:
    // 0x1019c0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1019c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1019c4:
    // 0x1019c4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1019c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1019c8:
    // 0x1019c8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1019c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1019cc:
    // 0x1019cc: 0x83a821  addu        $s5, $a0, $v1
    ctx->pc = 0x1019ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1019d0:
    // 0x1019d0: 0x8fb100dc  lw          $s1, 0xDC($sp)
    ctx->pc = 0x1019d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1019d4:
    // 0x1019d4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1019d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1019d8:
    // 0x1019d8: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1019d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1019dc:
    // 0x1019dc: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_1019e0:
    if (ctx->pc == 0x1019E0u) {
        ctx->pc = 0x1019E0u;
            // 0x1019e0: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->pc = 0x1019E4u;
        goto label_1019e4;
    }
    ctx->pc = 0x1019DCu;
    {
        const bool branch_taken_0x1019dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1019E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1019DCu;
            // 0x1019e0: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1019dc) {
            ctx->pc = 0x101A08u;
            goto label_101a08;
        }
    }
    ctx->pc = 0x1019E4u;
label_1019e4:
    // 0x1019e4: 0x0  nop
    ctx->pc = 0x1019e4u;
    // NOP
label_1019e8:
    // 0x1019e8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1019e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1019ec:
    // 0x1019ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1019ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1019f0:
    // 0x1019f0: 0x2a2a823  subu        $s5, $s5, $v0
    ctx->pc = 0x1019f0u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1019f4:
    // 0x1019f4: 0x2c0f809  jalr        $s6
label_1019f8:
    if (ctx->pc == 0x1019F8u) {
        ctx->pc = 0x1019F8u;
            // 0x1019f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1019FCu;
        goto label_1019fc;
    }
    ctx->pc = 0x1019F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x1019FCu);
        ctx->pc = 0x1019F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1019F4u;
            // 0x1019f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1019FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1019FCu; }
            if (ctx->pc != 0x1019FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1019FCu;
label_1019fc:
    // 0x1019fc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1019fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_101a00:
    // 0x101a00: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
label_101a04:
    if (ctx->pc == 0x101A04u) {
        ctx->pc = 0x101A08u;
        goto label_101a08;
    }
    ctx->pc = 0x101A00u;
    {
        const bool branch_taken_0x101a00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x101a00) {
            ctx->pc = 0x1019E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1019e4;
        }
    }
    ctx->pc = 0x101A08u;
label_101a08:
    // 0x101a08: 0x10000091  b           . + 4 + (0x91 << 2)
label_101a0c:
    if (ctx->pc == 0x101A0Cu) {
        ctx->pc = 0x101A0Cu;
            // 0x101a0c: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->pc = 0x101A10u;
        goto label_101a10;
    }
    ctx->pc = 0x101A08u;
    {
        const bool branch_taken_0x101a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101A08u;
            // 0x101a0c: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a08) {
            ctx->pc = 0x101C50u;
            goto label_101c50;
        }
    }
    ctx->pc = 0x101A10u;
label_101a10:
    // 0x101a10: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x101a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_101a14:
    // 0x101a14: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x101a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_101a18:
    // 0x101a18: 0xc0402b4  jal         func_100AD0
label_101a1c:
    if (ctx->pc == 0x101A1Cu) {
        ctx->pc = 0x101A1Cu;
            // 0x101a1c: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->pc = 0x101A20u;
        goto label_101a20;
    }
    ctx->pc = 0x101A18u;
    SET_GPR_U32(ctx, 31, 0x101A20u);
    ctx->pc = 0x101A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101A18u;
            // 0x101a1c: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101A20u; }
        if (ctx->pc != 0x101A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101A20u; }
        if (ctx->pc != 0x101A20u) { return; }
    }
    ctx->pc = 0x101A20u;
label_101a20:
    // 0x101a20: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x101a20u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_101a24:
    // 0x101a24: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x101a24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_101a28:
    // 0x101a28: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x101a28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_101a2c:
    // 0x101a2c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x101a2cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_101a30:
    // 0x101a30: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x101a30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_101a34:
    // 0x101a34: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x101a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_101a38:
    // 0x101a38: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x101a38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_101a3c:
    // 0x101a3c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x101a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_101a40:
    // 0x101a40: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x101a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_101a44:
    // 0x101a44: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x101a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_101a48:
    // 0x101a48: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_101a4c:
    if (ctx->pc == 0x101A4Cu) {
        ctx->pc = 0x101A4Cu;
            // 0x101a4c: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->pc = 0x101A50u;
        goto label_101a50;
    }
    ctx->pc = 0x101A48u;
    {
        const bool branch_taken_0x101a48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x101A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101A48u;
            // 0x101a4c: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a48) {
            ctx->pc = 0x101A6Cu;
            goto label_101a6c;
        }
    }
    ctx->pc = 0x101A50u;
label_101a50:
    // 0x101a50: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x101a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_101a54:
    // 0x101a54: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x101a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_101a58:
    // 0x101a58: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x101a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_101a5c:
    // 0x101a5c: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x101a5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_101a60:
    // 0x101a60: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x101a60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_101a64:
    // 0x101a64: 0x10000006  b           . + 4 + (0x6 << 2)
label_101a68:
    if (ctx->pc == 0x101A68u) {
        ctx->pc = 0x101A68u;
            // 0x101a68: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->pc = 0x101A6Cu;
        goto label_101a6c;
    }
    ctx->pc = 0x101A64u;
    {
        const bool branch_taken_0x101a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101A64u;
            // 0x101a68: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a64) {
            ctx->pc = 0x101A80u;
            goto label_101a80;
        }
    }
    ctx->pc = 0x101A6Cu;
label_101a6c:
    // 0x101a6c: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x101a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_101a70:
    // 0x101a70: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x101a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_101a74:
    // 0x101a74: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x101a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_101a78:
    // 0x101a78: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x101a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_101a7c:
    // 0x101a7c: 0x0  nop
    ctx->pc = 0x101a7cu;
    // NOP
label_101a80:
    // 0x101a80: 0xa0f809  jalr        $a1
label_101a84:
    if (ctx->pc == 0x101A84u) {
        ctx->pc = 0x101A88u;
        goto label_101a88;
    }
    ctx->pc = 0x101A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x101A88u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x101A88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x101A88u; }
            if (ctx->pc != 0x101A88u) { return; }
        }
        }
    }
    ctx->pc = 0x101A88u;
label_101a88:
    // 0x101a88: 0x10000071  b           . + 4 + (0x71 << 2)
label_101a8c:
    if (ctx->pc == 0x101A8Cu) {
        ctx->pc = 0x101A8Cu;
            // 0x101a8c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->pc = 0x101A90u;
        goto label_101a90;
    }
    ctx->pc = 0x101A88u;
    {
        const bool branch_taken_0x101a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101A88u;
            // 0x101a8c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a88) {
            ctx->pc = 0x101C50u;
            goto label_101c50;
        }
    }
    ctx->pc = 0x101A90u;
label_101a90:
    // 0x101a90: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x101a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_101a94:
    // 0x101a94: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x101a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_101a98:
    // 0x101a98: 0x32550040  andi        $s5, $s2, 0x40
    ctx->pc = 0x101a98u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
label_101a9c:
    // 0x101a9c: 0xc0402b4  jal         func_100AD0
label_101aa0:
    if (ctx->pc == 0x101AA0u) {
        ctx->pc = 0x101AA0u;
            // 0x101aa0: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->pc = 0x101AA4u;
        goto label_101aa4;
    }
    ctx->pc = 0x101A9Cu;
    SET_GPR_U32(ctx, 31, 0x101AA4u);
    ctx->pc = 0x101AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101A9Cu;
            // 0x101aa0: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101AA4u; }
        if (ctx->pc != 0x101AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101AA4u; }
        if (ctx->pc != 0x101AA4u) { return; }
    }
    ctx->pc = 0x101AA4u;
label_101aa4:
    // 0x101aa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101aa8:
    // 0x101aa8: 0xc0402b4  jal         func_100AD0
label_101aac:
    if (ctx->pc == 0x101AACu) {
        ctx->pc = 0x101AACu;
            // 0x101aac: 0x27a500ec  addiu       $a1, $sp, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
        ctx->pc = 0x101AB0u;
        goto label_101ab0;
    }
    ctx->pc = 0x101AA8u;
    SET_GPR_U32(ctx, 31, 0x101AB0u);
    ctx->pc = 0x101AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101AA8u;
            // 0x101aac: 0x27a500ec  addiu       $a1, $sp, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101AB0u; }
        if (ctx->pc != 0x101AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101AB0u; }
        if (ctx->pc != 0x101AB0u) { return; }
    }
    ctx->pc = 0x101AB0u;
label_101ab0:
    // 0x101ab0: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x101ab0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_101ab4:
    // 0x101ab4: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x101ab4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_101ab8:
    // 0x101ab8: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x101ab8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_101abc:
    // 0x101abc: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x101abcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_101ac0:
    // 0x101ac0: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x101ac0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_101ac4:
    // 0x101ac4: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x101ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_101ac8:
    // 0x101ac8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x101ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_101acc:
    // 0x101acc: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x101accu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_101ad0:
    // 0x101ad0: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x101ad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_101ad4:
    // 0x101ad4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x101ad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_101ad8:
    // 0x101ad8: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
label_101adc:
    if (ctx->pc == 0x101ADCu) {
        ctx->pc = 0x101ADCu;
            // 0x101adc: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->pc = 0x101AE0u;
        goto label_101ae0;
    }
    ctx->pc = 0x101AD8u;
    {
        const bool branch_taken_0x101ad8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x101ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101AD8u;
            // 0x101adc: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ad8) {
            ctx->pc = 0x101AFCu;
            goto label_101afc;
        }
    }
    ctx->pc = 0x101AE0u;
label_101ae0:
    // 0x101ae0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x101ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_101ae4:
    // 0x101ae4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x101ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_101ae8:
    // 0x101ae8: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x101ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_101aec:
    // 0x101aec: 0x78840020  lq          $a0, 0x20($a0)
    ctx->pc = 0x101aecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_101af0:
    // 0x101af0: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x101af0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_101af4:
    // 0x101af4: 0x10000006  b           . + 4 + (0x6 << 2)
label_101af8:
    if (ctx->pc == 0x101AF8u) {
        ctx->pc = 0x101AF8u;
            // 0x101af8: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->pc = 0x101AFCu;
        goto label_101afc;
    }
    ctx->pc = 0x101AF4u;
    {
        const bool branch_taken_0x101af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101AF4u;
            // 0x101af8: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101af4) {
            ctx->pc = 0x101B10u;
            goto label_101b10;
        }
    }
    ctx->pc = 0x101AFCu;
label_101afc:
    // 0x101afc: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x101afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_101b00:
    // 0x101b00: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x101b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_101b04:
    // 0x101b04: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x101b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_101b08:
    // 0x101b08: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x101b08u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_101b0c:
    // 0x101b0c: 0x0  nop
    ctx->pc = 0x101b0cu;
    // NOP
label_101b10:
    // 0x101b10: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_101b14:
    if (ctx->pc == 0x101B14u) {
        ctx->pc = 0x101B18u;
        goto label_101b18;
    }
    ctx->pc = 0x101B10u;
    {
        const bool branch_taken_0x101b10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x101b10) {
            ctx->pc = 0x101B58u;
            goto label_101b58;
        }
    }
    ctx->pc = 0x101B18u;
label_101b18:
    // 0x101b18: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_101b1c:
    if (ctx->pc == 0x101B1Cu) {
        ctx->pc = 0x101B20u;
        goto label_101b20;
    }
    ctx->pc = 0x101B18u;
    {
        const bool branch_taken_0x101b18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x101b18) {
            ctx->pc = 0x101B3Cu;
            goto label_101b3c;
        }
    }
    ctx->pc = 0x101B20u;
label_101b20:
    // 0x101b20: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x101b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_101b24:
    // 0x101b24: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x101b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_101b28:
    // 0x101b28: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x101b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_101b2c:
    // 0x101b2c: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x101b2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_101b30:
    // 0x101b30: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x101b30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_101b34:
    // 0x101b34: 0x10000006  b           . + 4 + (0x6 << 2)
label_101b38:
    if (ctx->pc == 0x101B38u) {
        ctx->pc = 0x101B38u;
            // 0x101b38: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->pc = 0x101B3Cu;
        goto label_101b3c;
    }
    ctx->pc = 0x101B34u;
    {
        const bool branch_taken_0x101b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101B34u;
            // 0x101b38: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101b34) {
            ctx->pc = 0x101B50u;
            goto label_101b50;
        }
    }
    ctx->pc = 0x101B3Cu;
label_101b3c:
    // 0x101b3c: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x101b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_101b40:
    // 0x101b40: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x101b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_101b44:
    // 0x101b44: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x101b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_101b48:
    // 0x101b48: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x101b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_101b4c:
    // 0x101b4c: 0x0  nop
    ctx->pc = 0x101b4cu;
    // NOP
label_101b50:
    // 0x101b50: 0x60f809  jalr        $v1
label_101b54:
    if (ctx->pc == 0x101B54u) {
        ctx->pc = 0x101B58u;
        goto label_101b58;
    }
    ctx->pc = 0x101B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x101B58u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x101B58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x101B58u; }
            if (ctx->pc != 0x101B58u) { return; }
        }
        }
    }
    ctx->pc = 0x101B58u;
label_101b58:
    // 0x101b58: 0x1000003d  b           . + 4 + (0x3D << 2)
label_101b5c:
    if (ctx->pc == 0x101B5Cu) {
        ctx->pc = 0x101B5Cu;
            // 0x101b5c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->pc = 0x101B60u;
        goto label_101b60;
    }
    ctx->pc = 0x101B58u;
    {
        const bool branch_taken_0x101b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101B58u;
            // 0x101b5c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101b58) {
            ctx->pc = 0x101C50u;
            goto label_101c50;
        }
    }
    ctx->pc = 0x101B60u;
label_101b60:
    // 0x101b60: 0x12e90040  beq         $s7, $t1, . + 4 + (0x40 << 2)
label_101b64:
    if (ctx->pc == 0x101B64u) {
        ctx->pc = 0x101B68u;
        goto label_101b68;
    }
    ctx->pc = 0x101B60u;
    {
        const bool branch_taken_0x101b60 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 9));
        if (branch_taken_0x101b60) {
            ctx->pc = 0x101C64u;
            goto label_101c64;
        }
    }
    ctx->pc = 0x101B68u;
label_101b68:
    // 0x101b68: 0x91280002  lbu         $t0, 0x2($t1)
    ctx->pc = 0x101b68u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
label_101b6c:
    // 0x101b6c: 0x27a200fc  addiu       $v0, $sp, 0xFC
    ctx->pc = 0x101b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
label_101b70:
    // 0x101b70: 0x91260003  lbu         $a2, 0x3($t1)
    ctx->pc = 0x101b70u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
label_101b74:
    // 0x101b74: 0x25240005  addiu       $a0, $t1, 0x5
    ctx->pc = 0x101b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
label_101b78:
    // 0x101b78: 0x91230004  lbu         $v1, 0x4($t1)
    ctx->pc = 0x101b78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
label_101b7c:
    // 0x101b7c: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x101b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_101b80:
    // 0x101b80: 0x91270001  lbu         $a3, 0x1($t1)
    ctx->pc = 0x101b80u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_101b84:
    // 0x101b84: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x101b84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_101b88:
    // 0x101b88: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x101b88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_101b8c:
    // 0x101b8c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x101b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_101b90:
    // 0x101b90: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x101b90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_101b94:
    // 0x101b94: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x101b94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_101b98:
    // 0x101b98: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x101b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_101b9c:
    // 0x101b9c: 0xc04028c  jal         func_100A30
label_101ba0:
    if (ctx->pc == 0x101BA0u) {
        ctx->pc = 0x101BA0u;
            // 0x101ba0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x101BA4u;
        goto label_101ba4;
    }
    ctx->pc = 0x101B9Cu;
    SET_GPR_U32(ctx, 31, 0x101BA4u);
    ctx->pc = 0x101BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101B9Cu;
            // 0x101ba0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101BA4u; }
        if (ctx->pc != 0x101BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101BA4u; }
        if (ctx->pc != 0x101BA4u) { return; }
    }
    ctx->pc = 0x101BA4u;
label_101ba4:
    // 0x101ba4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101ba8:
    // 0x101ba8: 0xc0402b4  jal         func_100AD0
label_101bac:
    if (ctx->pc == 0x101BACu) {
        ctx->pc = 0x101BACu;
            // 0x101bac: 0x27a500f4  addiu       $a1, $sp, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
        ctx->pc = 0x101BB0u;
        goto label_101bb0;
    }
    ctx->pc = 0x101BA8u;
    SET_GPR_U32(ctx, 31, 0x101BB0u);
    ctx->pc = 0x101BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101BA8u;
            // 0x101bac: 0x27a500f4  addiu       $a1, $sp, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101BB0u; }
        if (ctx->pc != 0x101BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101BB0u; }
        if (ctx->pc != 0x101BB0u) { return; }
    }
    ctx->pc = 0x101BB0u;
label_101bb0:
    // 0x101bb0: 0x10000027  b           . + 4 + (0x27 << 2)
label_101bb4:
    if (ctx->pc == 0x101BB4u) {
        ctx->pc = 0x101BB4u;
            // 0x101bb4: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x101BB8u;
        goto label_101bb8;
    }
    ctx->pc = 0x101BB0u;
    {
        const bool branch_taken_0x101bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101BB0u;
            // 0x101bb4: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101bb0) {
            ctx->pc = 0x101C50u;
            goto label_101c50;
        }
    }
    ctx->pc = 0x101BB8u;
label_101bb8:
    // 0x101bb8: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x101bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_101bbc:
    // 0x101bbc: 0xc0402b4  jal         func_100AD0
label_101bc0:
    if (ctx->pc == 0x101BC0u) {
        ctx->pc = 0x101BC0u;
            // 0x101bc0: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x101BC4u;
        goto label_101bc4;
    }
    ctx->pc = 0x101BBCu;
    SET_GPR_U32(ctx, 31, 0x101BC4u);
    ctx->pc = 0x101BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101BBCu;
            // 0x101bc0: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101BC4u; }
        if (ctx->pc != 0x101BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101BC4u; }
        if (ctx->pc != 0x101BC4u) { return; }
    }
    ctx->pc = 0x101BC4u;
label_101bc4:
    // 0x101bc4: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x101bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_101bc8:
    // 0x101bc8: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x101bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_101bcc:
    // 0x101bcc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x101bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_101bd0:
    // 0x101bd0: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x101bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_101bd4:
    // 0x101bd4: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_101bd8:
    if (ctx->pc == 0x101BD8u) {
        ctx->pc = 0x101BD8u;
            // 0x101bd8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x101BDCu;
        goto label_101bdc;
    }
    ctx->pc = 0x101BD4u;
    {
        const bool branch_taken_0x101bd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x101BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101BD4u;
            // 0x101bd8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101bd4) {
            ctx->pc = 0x101C00u;
            goto label_101c00;
        }
    }
    ctx->pc = 0x101BDCu;
label_101bdc:
    // 0x101bdc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x101bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_101be0:
    // 0x101be0: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x101be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_101be4:
    // 0x101be4: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_101be8:
    if (ctx->pc == 0x101BE8u) {
        ctx->pc = 0x101BECu;
        goto label_101bec;
    }
    ctx->pc = 0x101BE4u;
    {
        const bool branch_taken_0x101be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x101be4) {
            ctx->pc = 0x101BF4u;
            goto label_101bf4;
        }
    }
    ctx->pc = 0x101BECu;
label_101bec:
    // 0x101bec: 0x10000004  b           . + 4 + (0x4 << 2)
label_101bf0:
    if (ctx->pc == 0x101BF0u) {
        ctx->pc = 0x101BF0u;
            // 0x101bf0: 0xae860008  sw          $a2, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 6));
        ctx->pc = 0x101BF4u;
        goto label_101bf4;
    }
    ctx->pc = 0x101BECu;
    {
        const bool branch_taken_0x101bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101BECu;
            // 0x101bf0: 0xae860008  sw          $a2, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101bec) {
            ctx->pc = 0x101C00u;
            goto label_101c00;
        }
    }
    ctx->pc = 0x101BF4u;
label_101bf4:
    // 0x101bf4: 0x0  nop
    ctx->pc = 0x101bf4u;
    // NOP
label_101bf8:
    // 0x101bf8: 0xc0f809  jalr        $a2
label_101bfc:
    if (ctx->pc == 0x101BFCu) {
        ctx->pc = 0x101BFCu;
            // 0x101bfc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x101C00u;
        goto label_101c00;
    }
    ctx->pc = 0x101BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x101C00u);
        ctx->pc = 0x101BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101BF8u;
            // 0x101bfc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x101C00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x101C00u; }
            if (ctx->pc != 0x101C00u) { return; }
        }
        }
    }
    ctx->pc = 0x101C00u;
label_101c00:
    // 0x101c00: 0x10000013  b           . + 4 + (0x13 << 2)
label_101c04:
    if (ctx->pc == 0x101C04u) {
        ctx->pc = 0x101C04u;
            // 0x101c04: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->pc = 0x101C08u;
        goto label_101c08;
    }
    ctx->pc = 0x101C00u;
    {
        const bool branch_taken_0x101c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101C00u;
            // 0x101c04: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c00) {
            ctx->pc = 0x101C50u;
            goto label_101c50;
        }
    }
    ctx->pc = 0x101C08u;
label_101c08:
    // 0x101c08: 0x12e90016  beq         $s7, $t1, . + 4 + (0x16 << 2)
label_101c0c:
    if (ctx->pc == 0x101C0Cu) {
        ctx->pc = 0x101C0Cu;
            // 0x101c0c: 0x25240001  addiu       $a0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->pc = 0x101C10u;
        goto label_101c10;
    }
    ctx->pc = 0x101C08u;
    {
        const bool branch_taken_0x101c08 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 9));
        ctx->pc = 0x101C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101C08u;
            // 0x101c0c: 0x25240001  addiu       $a0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c08) {
            ctx->pc = 0x101C64u;
            goto label_101c64;
        }
    }
    ctx->pc = 0x101C10u;
label_101c10:
    // 0x101c10: 0xc04028c  jal         func_100A30
label_101c14:
    if (ctx->pc == 0x101C14u) {
        ctx->pc = 0x101C14u;
            // 0x101c14: 0x27a5010c  addiu       $a1, $sp, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
        ctx->pc = 0x101C18u;
        goto label_101c18;
    }
    ctx->pc = 0x101C10u;
    SET_GPR_U32(ctx, 31, 0x101C18u);
    ctx->pc = 0x101C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101C10u;
            // 0x101c14: 0x27a5010c  addiu       $a1, $sp, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101C18u; }
        if (ctx->pc != 0x101C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101C18u; }
        if (ctx->pc != 0x101C18u) { return; }
    }
    ctx->pc = 0x101C18u;
label_101c18:
    // 0x101c18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101c1c:
    // 0x101c1c: 0xc04028c  jal         func_100A30
label_101c20:
    if (ctx->pc == 0x101C20u) {
        ctx->pc = 0x101C20u;
            // 0x101c20: 0x27a50108  addiu       $a1, $sp, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
        ctx->pc = 0x101C24u;
        goto label_101c24;
    }
    ctx->pc = 0x101C1Cu;
    SET_GPR_U32(ctx, 31, 0x101C24u);
    ctx->pc = 0x101C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101C1Cu;
            // 0x101c20: 0x27a50108  addiu       $a1, $sp, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101C24u; }
        if (ctx->pc != 0x101C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101C24u; }
        if (ctx->pc != 0x101C24u) { return; }
    }
    ctx->pc = 0x101C24u;
label_101c24:
    // 0x101c24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101c28:
    // 0x101c28: 0xc0402b4  jal         func_100AD0
label_101c2c:
    if (ctx->pc == 0x101C2Cu) {
        ctx->pc = 0x101C2Cu;
            // 0x101c2c: 0x27a50104  addiu       $a1, $sp, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
        ctx->pc = 0x101C30u;
        goto label_101c30;
    }
    ctx->pc = 0x101C28u;
    SET_GPR_U32(ctx, 31, 0x101C30u);
    ctx->pc = 0x101C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101C28u;
            // 0x101c2c: 0x27a50104  addiu       $a1, $sp, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101C30u; }
        if (ctx->pc != 0x101C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101C30u; }
        if (ctx->pc != 0x101C30u) { return; }
    }
    ctx->pc = 0x101C30u;
label_101c30:
    // 0x101c30: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x101c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_101c34:
    // 0x101c34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x101c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_101c38:
    // 0x101c38: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x101c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_101c3c:
    // 0x101c3c: 0x10000004  b           . + 4 + (0x4 << 2)
label_101c40:
    if (ctx->pc == 0x101C40u) {
        ctx->pc = 0x101C40u;
            // 0x101c40: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x101C44u;
        goto label_101c44;
    }
    ctx->pc = 0x101C3Cu;
    {
        const bool branch_taken_0x101c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101C3Cu;
            // 0x101c40: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c3c) {
            ctx->pc = 0x101C50u;
            goto label_101c50;
        }
    }
    ctx->pc = 0x101C44u;
label_101c44:
    // 0x101c44: 0x0  nop
    ctx->pc = 0x101c44u;
    // NOP
label_101c48:
    // 0x101c48: 0xc040248  jal         func_100920
label_101c4c:
    if (ctx->pc == 0x101C4Cu) {
        ctx->pc = 0x101C50u;
        goto label_101c50;
    }
    ctx->pc = 0x101C48u;
    SET_GPR_U32(ctx, 31, 0x101C50u);
    ctx->pc = 0x100920u;
    if (runtime->hasFunction(0x100920u)) {
        auto targetFn = runtime->lookupFunction(0x100920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101C50u; }
        if (ctx->pc != 0x101C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        terminate__3stdFv_0x100920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101C50u; }
        if (ctx->pc != 0x101C50u) { return; }
    }
    ctx->pc = 0x101C50u;
label_101c50:
    // 0x101c50: 0x32430080  andi        $v1, $s2, 0x80
    ctx->pc = 0x101c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)128);
label_101c54:
    // 0x101c54: 0x1060fe03  beqz        $v1, . + 4 + (-0x1FD << 2)
label_101c58:
    if (ctx->pc == 0x101C58u) {
        ctx->pc = 0x101C5Cu;
        goto label_101c5c;
    }
    ctx->pc = 0x101C54u;
    {
        const bool branch_taken_0x101c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x101c54) {
            ctx->pc = 0x101464u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101464;
        }
    }
    ctx->pc = 0x101C5Cu;
label_101c5c:
    // 0x101c5c: 0x1000fe01  b           . + 4 + (-0x1FF << 2)
label_101c60:
    if (ctx->pc == 0x101C60u) {
        ctx->pc = 0x101C60u;
            // 0x101c60: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x101C64u;
        goto label_101c64;
    }
    ctx->pc = 0x101C5Cu;
    {
        const bool branch_taken_0x101c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101C5Cu;
            // 0x101c60: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c5c) {
            ctx->pc = 0x101464u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101464;
        }
    }
    ctx->pc = 0x101C64u;
label_101c64:
    // 0x101c64: 0x0  nop
    ctx->pc = 0x101c64u;
    // NOP
label_101c68:
    // 0x101c68: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x101c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_101c6c:
    // 0x101c6c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x101c6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_101c70:
    // 0x101c70: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x101c70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_101c74:
    // 0x101c74: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x101c74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_101c78:
    // 0x101c78: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x101c78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_101c7c:
    // 0x101c7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x101c7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_101c80:
    // 0x101c80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x101c80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_101c84:
    // 0x101c84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_101c88:
    // 0x101c88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_101c8c:
    // 0x101c8c: 0x3e00008  jr          $ra
label_101c90:
    if (ctx->pc == 0x101C90u) {
        ctx->pc = 0x101C90u;
            // 0x101c90: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x101C94u;
        goto label_fallthrough_0x101c8c;
    }
    ctx->pc = 0x101C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101C8Cu;
            // 0x101c90: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x101c8c:
    ctx->pc = 0x101C94u;
}
