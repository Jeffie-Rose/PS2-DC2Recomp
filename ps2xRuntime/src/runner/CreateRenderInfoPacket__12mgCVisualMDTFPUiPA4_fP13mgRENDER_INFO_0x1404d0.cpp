#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateRenderInfoPacket__12mgCVisualMDTFPUiPA4_fP13mgRENDER_INFO
// Address: 0x1404d0 - 0x140bd8
void CreateRenderInfoPacket__12mgCVisualMDTFPUiPA4_fP13mgRENDER_INFO_0x1404d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateRenderInfoPacket__12mgCVisualMDTFPUiPA4_fP13mgRENDER_INFO_0x1404d0");
#endif

    switch (ctx->pc) {
        case 0x1404d0u: goto label_1404d0;
        case 0x1404d4u: goto label_1404d4;
        case 0x1404d8u: goto label_1404d8;
        case 0x1404dcu: goto label_1404dc;
        case 0x1404e0u: goto label_1404e0;
        case 0x1404e4u: goto label_1404e4;
        case 0x1404e8u: goto label_1404e8;
        case 0x1404ecu: goto label_1404ec;
        case 0x1404f0u: goto label_1404f0;
        case 0x1404f4u: goto label_1404f4;
        case 0x1404f8u: goto label_1404f8;
        case 0x1404fcu: goto label_1404fc;
        case 0x140500u: goto label_140500;
        case 0x140504u: goto label_140504;
        case 0x140508u: goto label_140508;
        case 0x14050cu: goto label_14050c;
        case 0x140510u: goto label_140510;
        case 0x140514u: goto label_140514;
        case 0x140518u: goto label_140518;
        case 0x14051cu: goto label_14051c;
        case 0x140520u: goto label_140520;
        case 0x140524u: goto label_140524;
        case 0x140528u: goto label_140528;
        case 0x14052cu: goto label_14052c;
        case 0x140530u: goto label_140530;
        case 0x140534u: goto label_140534;
        case 0x140538u: goto label_140538;
        case 0x14053cu: goto label_14053c;
        case 0x140540u: goto label_140540;
        case 0x140544u: goto label_140544;
        case 0x140548u: goto label_140548;
        case 0x14054cu: goto label_14054c;
        case 0x140550u: goto label_140550;
        case 0x140554u: goto label_140554;
        case 0x140558u: goto label_140558;
        case 0x14055cu: goto label_14055c;
        case 0x140560u: goto label_140560;
        case 0x140564u: goto label_140564;
        case 0x140568u: goto label_140568;
        case 0x14056cu: goto label_14056c;
        case 0x140570u: goto label_140570;
        case 0x140574u: goto label_140574;
        case 0x140578u: goto label_140578;
        case 0x14057cu: goto label_14057c;
        case 0x140580u: goto label_140580;
        case 0x140584u: goto label_140584;
        case 0x140588u: goto label_140588;
        case 0x14058cu: goto label_14058c;
        case 0x140590u: goto label_140590;
        case 0x140594u: goto label_140594;
        case 0x140598u: goto label_140598;
        case 0x14059cu: goto label_14059c;
        case 0x1405a0u: goto label_1405a0;
        case 0x1405a4u: goto label_1405a4;
        case 0x1405a8u: goto label_1405a8;
        case 0x1405acu: goto label_1405ac;
        case 0x1405b0u: goto label_1405b0;
        case 0x1405b4u: goto label_1405b4;
        case 0x1405b8u: goto label_1405b8;
        case 0x1405bcu: goto label_1405bc;
        case 0x1405c0u: goto label_1405c0;
        case 0x1405c4u: goto label_1405c4;
        case 0x1405c8u: goto label_1405c8;
        case 0x1405ccu: goto label_1405cc;
        case 0x1405d0u: goto label_1405d0;
        case 0x1405d4u: goto label_1405d4;
        case 0x1405d8u: goto label_1405d8;
        case 0x1405dcu: goto label_1405dc;
        case 0x1405e0u: goto label_1405e0;
        case 0x1405e4u: goto label_1405e4;
        case 0x1405e8u: goto label_1405e8;
        case 0x1405ecu: goto label_1405ec;
        case 0x1405f0u: goto label_1405f0;
        case 0x1405f4u: goto label_1405f4;
        case 0x1405f8u: goto label_1405f8;
        case 0x1405fcu: goto label_1405fc;
        case 0x140600u: goto label_140600;
        case 0x140604u: goto label_140604;
        case 0x140608u: goto label_140608;
        case 0x14060cu: goto label_14060c;
        case 0x140610u: goto label_140610;
        case 0x140614u: goto label_140614;
        case 0x140618u: goto label_140618;
        case 0x14061cu: goto label_14061c;
        case 0x140620u: goto label_140620;
        case 0x140624u: goto label_140624;
        case 0x140628u: goto label_140628;
        case 0x14062cu: goto label_14062c;
        case 0x140630u: goto label_140630;
        case 0x140634u: goto label_140634;
        case 0x140638u: goto label_140638;
        case 0x14063cu: goto label_14063c;
        case 0x140640u: goto label_140640;
        case 0x140644u: goto label_140644;
        case 0x140648u: goto label_140648;
        case 0x14064cu: goto label_14064c;
        case 0x140650u: goto label_140650;
        case 0x140654u: goto label_140654;
        case 0x140658u: goto label_140658;
        case 0x14065cu: goto label_14065c;
        case 0x140660u: goto label_140660;
        case 0x140664u: goto label_140664;
        case 0x140668u: goto label_140668;
        case 0x14066cu: goto label_14066c;
        case 0x140670u: goto label_140670;
        case 0x140674u: goto label_140674;
        case 0x140678u: goto label_140678;
        case 0x14067cu: goto label_14067c;
        case 0x140680u: goto label_140680;
        case 0x140684u: goto label_140684;
        case 0x140688u: goto label_140688;
        case 0x14068cu: goto label_14068c;
        case 0x140690u: goto label_140690;
        case 0x140694u: goto label_140694;
        case 0x140698u: goto label_140698;
        case 0x14069cu: goto label_14069c;
        case 0x1406a0u: goto label_1406a0;
        case 0x1406a4u: goto label_1406a4;
        case 0x1406a8u: goto label_1406a8;
        case 0x1406acu: goto label_1406ac;
        case 0x1406b0u: goto label_1406b0;
        case 0x1406b4u: goto label_1406b4;
        case 0x1406b8u: goto label_1406b8;
        case 0x1406bcu: goto label_1406bc;
        case 0x1406c0u: goto label_1406c0;
        case 0x1406c4u: goto label_1406c4;
        case 0x1406c8u: goto label_1406c8;
        case 0x1406ccu: goto label_1406cc;
        case 0x1406d0u: goto label_1406d0;
        case 0x1406d4u: goto label_1406d4;
        case 0x1406d8u: goto label_1406d8;
        case 0x1406dcu: goto label_1406dc;
        case 0x1406e0u: goto label_1406e0;
        case 0x1406e4u: goto label_1406e4;
        case 0x1406e8u: goto label_1406e8;
        case 0x1406ecu: goto label_1406ec;
        case 0x1406f0u: goto label_1406f0;
        case 0x1406f4u: goto label_1406f4;
        case 0x1406f8u: goto label_1406f8;
        case 0x1406fcu: goto label_1406fc;
        case 0x140700u: goto label_140700;
        case 0x140704u: goto label_140704;
        case 0x140708u: goto label_140708;
        case 0x14070cu: goto label_14070c;
        case 0x140710u: goto label_140710;
        case 0x140714u: goto label_140714;
        case 0x140718u: goto label_140718;
        case 0x14071cu: goto label_14071c;
        case 0x140720u: goto label_140720;
        case 0x140724u: goto label_140724;
        case 0x140728u: goto label_140728;
        case 0x14072cu: goto label_14072c;
        case 0x140730u: goto label_140730;
        case 0x140734u: goto label_140734;
        case 0x140738u: goto label_140738;
        case 0x14073cu: goto label_14073c;
        case 0x140740u: goto label_140740;
        case 0x140744u: goto label_140744;
        case 0x140748u: goto label_140748;
        case 0x14074cu: goto label_14074c;
        case 0x140750u: goto label_140750;
        case 0x140754u: goto label_140754;
        case 0x140758u: goto label_140758;
        case 0x14075cu: goto label_14075c;
        case 0x140760u: goto label_140760;
        case 0x140764u: goto label_140764;
        case 0x140768u: goto label_140768;
        case 0x14076cu: goto label_14076c;
        case 0x140770u: goto label_140770;
        case 0x140774u: goto label_140774;
        case 0x140778u: goto label_140778;
        case 0x14077cu: goto label_14077c;
        case 0x140780u: goto label_140780;
        case 0x140784u: goto label_140784;
        case 0x140788u: goto label_140788;
        case 0x14078cu: goto label_14078c;
        case 0x140790u: goto label_140790;
        case 0x140794u: goto label_140794;
        case 0x140798u: goto label_140798;
        case 0x14079cu: goto label_14079c;
        case 0x1407a0u: goto label_1407a0;
        case 0x1407a4u: goto label_1407a4;
        case 0x1407a8u: goto label_1407a8;
        case 0x1407acu: goto label_1407ac;
        case 0x1407b0u: goto label_1407b0;
        case 0x1407b4u: goto label_1407b4;
        case 0x1407b8u: goto label_1407b8;
        case 0x1407bcu: goto label_1407bc;
        case 0x1407c0u: goto label_1407c0;
        case 0x1407c4u: goto label_1407c4;
        case 0x1407c8u: goto label_1407c8;
        case 0x1407ccu: goto label_1407cc;
        case 0x1407d0u: goto label_1407d0;
        case 0x1407d4u: goto label_1407d4;
        case 0x1407d8u: goto label_1407d8;
        case 0x1407dcu: goto label_1407dc;
        case 0x1407e0u: goto label_1407e0;
        case 0x1407e4u: goto label_1407e4;
        case 0x1407e8u: goto label_1407e8;
        case 0x1407ecu: goto label_1407ec;
        case 0x1407f0u: goto label_1407f0;
        case 0x1407f4u: goto label_1407f4;
        case 0x1407f8u: goto label_1407f8;
        case 0x1407fcu: goto label_1407fc;
        case 0x140800u: goto label_140800;
        case 0x140804u: goto label_140804;
        case 0x140808u: goto label_140808;
        case 0x14080cu: goto label_14080c;
        case 0x140810u: goto label_140810;
        case 0x140814u: goto label_140814;
        case 0x140818u: goto label_140818;
        case 0x14081cu: goto label_14081c;
        case 0x140820u: goto label_140820;
        case 0x140824u: goto label_140824;
        case 0x140828u: goto label_140828;
        case 0x14082cu: goto label_14082c;
        case 0x140830u: goto label_140830;
        case 0x140834u: goto label_140834;
        case 0x140838u: goto label_140838;
        case 0x14083cu: goto label_14083c;
        case 0x140840u: goto label_140840;
        case 0x140844u: goto label_140844;
        case 0x140848u: goto label_140848;
        case 0x14084cu: goto label_14084c;
        case 0x140850u: goto label_140850;
        case 0x140854u: goto label_140854;
        case 0x140858u: goto label_140858;
        case 0x14085cu: goto label_14085c;
        case 0x140860u: goto label_140860;
        case 0x140864u: goto label_140864;
        case 0x140868u: goto label_140868;
        case 0x14086cu: goto label_14086c;
        case 0x140870u: goto label_140870;
        case 0x140874u: goto label_140874;
        case 0x140878u: goto label_140878;
        case 0x14087cu: goto label_14087c;
        case 0x140880u: goto label_140880;
        case 0x140884u: goto label_140884;
        case 0x140888u: goto label_140888;
        case 0x14088cu: goto label_14088c;
        case 0x140890u: goto label_140890;
        case 0x140894u: goto label_140894;
        case 0x140898u: goto label_140898;
        case 0x14089cu: goto label_14089c;
        case 0x1408a0u: goto label_1408a0;
        case 0x1408a4u: goto label_1408a4;
        case 0x1408a8u: goto label_1408a8;
        case 0x1408acu: goto label_1408ac;
        case 0x1408b0u: goto label_1408b0;
        case 0x1408b4u: goto label_1408b4;
        case 0x1408b8u: goto label_1408b8;
        case 0x1408bcu: goto label_1408bc;
        case 0x1408c0u: goto label_1408c0;
        case 0x1408c4u: goto label_1408c4;
        case 0x1408c8u: goto label_1408c8;
        case 0x1408ccu: goto label_1408cc;
        case 0x1408d0u: goto label_1408d0;
        case 0x1408d4u: goto label_1408d4;
        case 0x1408d8u: goto label_1408d8;
        case 0x1408dcu: goto label_1408dc;
        case 0x1408e0u: goto label_1408e0;
        case 0x1408e4u: goto label_1408e4;
        case 0x1408e8u: goto label_1408e8;
        case 0x1408ecu: goto label_1408ec;
        case 0x1408f0u: goto label_1408f0;
        case 0x1408f4u: goto label_1408f4;
        case 0x1408f8u: goto label_1408f8;
        case 0x1408fcu: goto label_1408fc;
        case 0x140900u: goto label_140900;
        case 0x140904u: goto label_140904;
        case 0x140908u: goto label_140908;
        case 0x14090cu: goto label_14090c;
        case 0x140910u: goto label_140910;
        case 0x140914u: goto label_140914;
        case 0x140918u: goto label_140918;
        case 0x14091cu: goto label_14091c;
        case 0x140920u: goto label_140920;
        case 0x140924u: goto label_140924;
        case 0x140928u: goto label_140928;
        case 0x14092cu: goto label_14092c;
        case 0x140930u: goto label_140930;
        case 0x140934u: goto label_140934;
        case 0x140938u: goto label_140938;
        case 0x14093cu: goto label_14093c;
        case 0x140940u: goto label_140940;
        case 0x140944u: goto label_140944;
        case 0x140948u: goto label_140948;
        case 0x14094cu: goto label_14094c;
        case 0x140950u: goto label_140950;
        case 0x140954u: goto label_140954;
        case 0x140958u: goto label_140958;
        case 0x14095cu: goto label_14095c;
        case 0x140960u: goto label_140960;
        case 0x140964u: goto label_140964;
        case 0x140968u: goto label_140968;
        case 0x14096cu: goto label_14096c;
        case 0x140970u: goto label_140970;
        case 0x140974u: goto label_140974;
        case 0x140978u: goto label_140978;
        case 0x14097cu: goto label_14097c;
        case 0x140980u: goto label_140980;
        case 0x140984u: goto label_140984;
        case 0x140988u: goto label_140988;
        case 0x14098cu: goto label_14098c;
        case 0x140990u: goto label_140990;
        case 0x140994u: goto label_140994;
        case 0x140998u: goto label_140998;
        case 0x14099cu: goto label_14099c;
        case 0x1409a0u: goto label_1409a0;
        case 0x1409a4u: goto label_1409a4;
        case 0x1409a8u: goto label_1409a8;
        case 0x1409acu: goto label_1409ac;
        case 0x1409b0u: goto label_1409b0;
        case 0x1409b4u: goto label_1409b4;
        case 0x1409b8u: goto label_1409b8;
        case 0x1409bcu: goto label_1409bc;
        case 0x1409c0u: goto label_1409c0;
        case 0x1409c4u: goto label_1409c4;
        case 0x1409c8u: goto label_1409c8;
        case 0x1409ccu: goto label_1409cc;
        case 0x1409d0u: goto label_1409d0;
        case 0x1409d4u: goto label_1409d4;
        case 0x1409d8u: goto label_1409d8;
        case 0x1409dcu: goto label_1409dc;
        case 0x1409e0u: goto label_1409e0;
        case 0x1409e4u: goto label_1409e4;
        case 0x1409e8u: goto label_1409e8;
        case 0x1409ecu: goto label_1409ec;
        case 0x1409f0u: goto label_1409f0;
        case 0x1409f4u: goto label_1409f4;
        case 0x1409f8u: goto label_1409f8;
        case 0x1409fcu: goto label_1409fc;
        case 0x140a00u: goto label_140a00;
        case 0x140a04u: goto label_140a04;
        case 0x140a08u: goto label_140a08;
        case 0x140a0cu: goto label_140a0c;
        case 0x140a10u: goto label_140a10;
        case 0x140a14u: goto label_140a14;
        case 0x140a18u: goto label_140a18;
        case 0x140a1cu: goto label_140a1c;
        case 0x140a20u: goto label_140a20;
        case 0x140a24u: goto label_140a24;
        case 0x140a28u: goto label_140a28;
        case 0x140a2cu: goto label_140a2c;
        case 0x140a30u: goto label_140a30;
        case 0x140a34u: goto label_140a34;
        case 0x140a38u: goto label_140a38;
        case 0x140a3cu: goto label_140a3c;
        case 0x140a40u: goto label_140a40;
        case 0x140a44u: goto label_140a44;
        case 0x140a48u: goto label_140a48;
        case 0x140a4cu: goto label_140a4c;
        case 0x140a50u: goto label_140a50;
        case 0x140a54u: goto label_140a54;
        case 0x140a58u: goto label_140a58;
        case 0x140a5cu: goto label_140a5c;
        case 0x140a60u: goto label_140a60;
        case 0x140a64u: goto label_140a64;
        case 0x140a68u: goto label_140a68;
        case 0x140a6cu: goto label_140a6c;
        case 0x140a70u: goto label_140a70;
        case 0x140a74u: goto label_140a74;
        case 0x140a78u: goto label_140a78;
        case 0x140a7cu: goto label_140a7c;
        case 0x140a80u: goto label_140a80;
        case 0x140a84u: goto label_140a84;
        case 0x140a88u: goto label_140a88;
        case 0x140a8cu: goto label_140a8c;
        case 0x140a90u: goto label_140a90;
        case 0x140a94u: goto label_140a94;
        case 0x140a98u: goto label_140a98;
        case 0x140a9cu: goto label_140a9c;
        case 0x140aa0u: goto label_140aa0;
        case 0x140aa4u: goto label_140aa4;
        case 0x140aa8u: goto label_140aa8;
        case 0x140aacu: goto label_140aac;
        case 0x140ab0u: goto label_140ab0;
        case 0x140ab4u: goto label_140ab4;
        case 0x140ab8u: goto label_140ab8;
        case 0x140abcu: goto label_140abc;
        case 0x140ac0u: goto label_140ac0;
        case 0x140ac4u: goto label_140ac4;
        case 0x140ac8u: goto label_140ac8;
        case 0x140accu: goto label_140acc;
        case 0x140ad0u: goto label_140ad0;
        case 0x140ad4u: goto label_140ad4;
        case 0x140ad8u: goto label_140ad8;
        case 0x140adcu: goto label_140adc;
        case 0x140ae0u: goto label_140ae0;
        case 0x140ae4u: goto label_140ae4;
        case 0x140ae8u: goto label_140ae8;
        case 0x140aecu: goto label_140aec;
        case 0x140af0u: goto label_140af0;
        case 0x140af4u: goto label_140af4;
        case 0x140af8u: goto label_140af8;
        case 0x140afcu: goto label_140afc;
        case 0x140b00u: goto label_140b00;
        case 0x140b04u: goto label_140b04;
        case 0x140b08u: goto label_140b08;
        case 0x140b0cu: goto label_140b0c;
        case 0x140b10u: goto label_140b10;
        case 0x140b14u: goto label_140b14;
        case 0x140b18u: goto label_140b18;
        case 0x140b1cu: goto label_140b1c;
        case 0x140b20u: goto label_140b20;
        case 0x140b24u: goto label_140b24;
        case 0x140b28u: goto label_140b28;
        case 0x140b2cu: goto label_140b2c;
        case 0x140b30u: goto label_140b30;
        case 0x140b34u: goto label_140b34;
        case 0x140b38u: goto label_140b38;
        case 0x140b3cu: goto label_140b3c;
        case 0x140b40u: goto label_140b40;
        case 0x140b44u: goto label_140b44;
        case 0x140b48u: goto label_140b48;
        case 0x140b4cu: goto label_140b4c;
        case 0x140b50u: goto label_140b50;
        case 0x140b54u: goto label_140b54;
        case 0x140b58u: goto label_140b58;
        case 0x140b5cu: goto label_140b5c;
        case 0x140b60u: goto label_140b60;
        case 0x140b64u: goto label_140b64;
        case 0x140b68u: goto label_140b68;
        case 0x140b6cu: goto label_140b6c;
        case 0x140b70u: goto label_140b70;
        case 0x140b74u: goto label_140b74;
        case 0x140b78u: goto label_140b78;
        case 0x140b7cu: goto label_140b7c;
        case 0x140b80u: goto label_140b80;
        case 0x140b84u: goto label_140b84;
        case 0x140b88u: goto label_140b88;
        case 0x140b8cu: goto label_140b8c;
        case 0x140b90u: goto label_140b90;
        case 0x140b94u: goto label_140b94;
        case 0x140b98u: goto label_140b98;
        case 0x140b9cu: goto label_140b9c;
        case 0x140ba0u: goto label_140ba0;
        case 0x140ba4u: goto label_140ba4;
        case 0x140ba8u: goto label_140ba8;
        case 0x140bacu: goto label_140bac;
        case 0x140bb0u: goto label_140bb0;
        case 0x140bb4u: goto label_140bb4;
        case 0x140bb8u: goto label_140bb8;
        case 0x140bbcu: goto label_140bbc;
        case 0x140bc0u: goto label_140bc0;
        case 0x140bc4u: goto label_140bc4;
        case 0x140bc8u: goto label_140bc8;
        case 0x140bccu: goto label_140bcc;
        case 0x140bd0u: goto label_140bd0;
        case 0x140bd4u: goto label_140bd4;
        default: break;
    }

    ctx->pc = 0x1404d0u;

label_1404d0:
    // 0x1404d0: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x1404d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
label_1404d4:
    // 0x1404d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1404d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1404d8:
    // 0x1404d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1404d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1404dc:
    // 0x1404dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1404dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1404e0:
    // 0x1404e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1404e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1404e4:
    // 0x1404e4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1404e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1404e8:
    // 0x1404e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1404e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1404ec:
    // 0x1404ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1404ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1404f0:
    // 0x1404f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1404f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1404f4:
    // 0x1404f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1404f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1404f8:
    // 0x1404f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1404f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1404fc:
    // 0x1404fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1404fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_140500:
    // 0x140500: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x140500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
label_140504:
    // 0x140504: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x140504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
label_140508:
    // 0x140508: 0x8ce20fcc  lw          $v0, 0xFCC($a3)
    ctx->pc = 0x140508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4044)));
label_14050c:
    // 0x14050c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_140510:
    if (ctx->pc == 0x140510u) {
        ctx->pc = 0x140510u;
            // 0x140510: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140514u;
        goto label_140514;
    }
    ctx->pc = 0x14050Cu;
    {
        const bool branch_taken_0x14050c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14050Cu;
            // 0x140510: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14050c) {
            ctx->pc = 0x140540u;
            goto label_140540;
        }
    }
    ctx->pc = 0x140514u;
label_140514:
    // 0x140514: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x140514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_140518:
    // 0x140518: 0x3c046000  lui         $a0, 0x6000
    ctx->pc = 0x140518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
label_14051c:
    // 0x14051c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14051cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_140520:
    // 0x140520: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x140520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_140524:
    // 0x140524: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x140524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_140528:
    // 0x140528: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x140528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_14052c:
    // 0x14052c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x14052cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_140530:
    // 0x140530: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x140530u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_140534:
    // 0x140534: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x140534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_140538:
    // 0x140538: 0x1000019b  b           . + 4 + (0x19B << 2)
label_14053c:
    if (ctx->pc == 0x14053Cu) {
        ctx->pc = 0x14053Cu;
            // 0x14053c: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x140540u;
        goto label_140540;
    }
    ctx->pc = 0x140538u;
    {
        const bool branch_taken_0x140538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14053Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140538u;
            // 0x14053c: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140538) {
            ctx->pc = 0x140BA8u;
            goto label_140ba8;
        }
    }
    ctx->pc = 0x140540u;
label_140540:
    // 0x140540: 0xc04f8ec  jal         func_13E3B0
label_140544:
    if (ctx->pc == 0x140544u) {
        ctx->pc = 0x140548u;
        goto label_140548;
    }
    ctx->pc = 0x140540u;
    SET_GPR_U32(ctx, 31, 0x140548u);
    ctx->pc = 0x13E3B0u;
    if (runtime->hasFunction(0x13E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x13E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140548u; }
        if (ctx->pc != 0x140548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScrPad__Fv_0x13e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140548u; }
        if (ctx->pc != 0x140548u) { return; }
    }
    ctx->pc = 0x140548u;
label_140548:
    // 0x140548: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x140548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_14054c:
    // 0x14054c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14054cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140550:
    // 0x140550: 0xc04e494  jal         func_139250
label_140554:
    if (ctx->pc == 0x140554u) {
        ctx->pc = 0x140554u;
            // 0x140554: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140558u;
        goto label_140558;
    }
    ctx->pc = 0x140550u;
    SET_GPR_U32(ctx, 31, 0x140558u);
    ctx->pc = 0x140554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140550u;
            // 0x140554: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139250u;
    if (runtime->hasFunction(0x139250u)) {
        auto targetFn = runtime->lookupFunction(0x139250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140558u; }
        if (ctx->pc != 0x140558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetpLightInfo__13mgRENDER_INFOFv_0x139250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140558u; }
        if (ctx->pc != 0x140558u) { return; }
    }
    ctx->pc = 0x140558u;
label_140558:
    // 0x140558: 0x7ae30000  lq          $v1, 0x0($s7)
    ctx->pc = 0x140558u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_14055c:
    // 0x14055c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x14055cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140560:
    // 0x140560: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x140560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_140564:
    // 0x140564: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x140564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_140568:
    // 0x140568: 0x7e030070  sq          $v1, 0x70($s0)
    ctx->pc = 0x140568u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 3));
label_14056c:
    // 0x14056c: 0x7ae20010  lq          $v0, 0x10($s7)
    ctx->pc = 0x14056cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 16)));
label_140570:
    // 0x140570: 0x7e020080  sq          $v0, 0x80($s0)
    ctx->pc = 0x140570u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 2));
label_140574:
    // 0x140574: 0x7ae20020  lq          $v0, 0x20($s7)
    ctx->pc = 0x140574u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 32)));
label_140578:
    // 0x140578: 0x7e020090  sq          $v0, 0x90($s0)
    ctx->pc = 0x140578u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
label_14057c:
    // 0x14057c: 0x7ae20030  lq          $v0, 0x30($s7)
    ctx->pc = 0x14057cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 48)));
label_140580:
    // 0x140580: 0x7e0200a0  sq          $v0, 0xA0($s0)
    ctx->pc = 0x140580u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 2));
label_140584:
    // 0x140584: 0x8ea20fcc  lw          $v0, 0xFCC($s5)
    ctx->pc = 0x140584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4044)));
label_140588:
    // 0x140588: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x140588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14058c:
    // 0x14058c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14058cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_140590:
    // 0x140590: 0x0  nop
    ctx->pc = 0x140590u;
    // NOP
label_140594:
    // 0x140594: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_140598:
    if (ctx->pc == 0x140598u) {
        ctx->pc = 0x140598u;
            // 0x140598: 0x26060070  addiu       $a2, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x14059Cu;
        goto label_14059c;
    }
    ctx->pc = 0x140594u;
    {
        const bool branch_taken_0x140594 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x140598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140594u;
            // 0x140598: 0x26060070  addiu       $a2, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140594) {
            ctx->pc = 0x1405E8u;
            goto label_1405e8;
        }
    }
    ctx->pc = 0x14059Cu;
label_14059c:
    // 0x14059c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x14059cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1405a0:
    // 0x1405a0: 0xc041c60  jal         func_107180
label_1405a4:
    if (ctx->pc == 0x1405A4u) {
        ctx->pc = 0x1405A4u;
            // 0x1405a4: 0x26a50110  addiu       $a1, $s5, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 272));
        ctx->pc = 0x1405A8u;
        goto label_1405a8;
    }
    ctx->pc = 0x1405A0u;
    SET_GPR_U32(ctx, 31, 0x1405A8u);
    ctx->pc = 0x1405A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1405A0u;
            // 0x1405a4: 0x26a50110  addiu       $a1, $s5, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1405A8u; }
        if (ctx->pc != 0x1405A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1405A8u; }
        if (ctx->pc != 0x1405A8u) { return; }
    }
    ctx->pc = 0x1405A8u;
label_1405a8:
    // 0x1405a8: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x1405a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1405ac:
    // 0x1405ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1405acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1405b0:
    // 0x1405b0: 0x3442a3d7  ori         $v0, $v0, 0xA3D7
    ctx->pc = 0x1405b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41943);
label_1405b4:
    // 0x1405b4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1405b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1405b8:
    // 0x1405b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1405b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1405bc:
    // 0x1405bc: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1405bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1405c0:
    // 0x1405c0: 0x26a60150  addiu       $a2, $s5, 0x150
    ctx->pc = 0x1405c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 336));
label_1405c4:
    // 0x1405c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1405c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1405c8:
    // 0x1405c8: 0xc04c094  jal         func_130250
label_1405cc:
    if (ctx->pc == 0x1405CCu) {
        ctx->pc = 0x1405CCu;
            // 0x1405cc: 0xe7a00128  swc1        $f0, 0x128($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
        ctx->pc = 0x1405D0u;
        goto label_1405d0;
    }
    ctx->pc = 0x1405C8u;
    SET_GPR_U32(ctx, 31, 0x1405D0u);
    ctx->pc = 0x1405CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1405C8u;
            // 0x1405cc: 0xe7a00128  swc1        $f0, 0x128($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1405D0u; }
        if (ctx->pc != 0x1405D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1405D0u; }
        if (ctx->pc != 0x1405D0u) { return; }
    }
    ctx->pc = 0x1405D0u;
label_1405d0:
    // 0x1405d0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1405d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1405d4:
    // 0x1405d4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1405d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1405d8:
    // 0x1405d8: 0xc04c094  jal         func_130250
label_1405dc:
    if (ctx->pc == 0x1405DCu) {
        ctx->pc = 0x1405DCu;
            // 0x1405dc: 0x26060070  addiu       $a2, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x1405E0u;
        goto label_1405e0;
    }
    ctx->pc = 0x1405D8u;
    SET_GPR_U32(ctx, 31, 0x1405E0u);
    ctx->pc = 0x1405DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1405D8u;
            // 0x1405dc: 0x26060070  addiu       $a2, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1405E0u; }
        if (ctx->pc != 0x1405E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1405E0u; }
        if (ctx->pc != 0x1405E0u) { return; }
    }
    ctx->pc = 0x1405E0u;
label_1405e0:
    // 0x1405e0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1405e4:
    if (ctx->pc == 0x1405E4u) {
        ctx->pc = 0x1405E4u;
            // 0x1405e4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->pc = 0x1405E8u;
        goto label_1405e8;
    }
    ctx->pc = 0x1405E0u;
    {
        const bool branch_taken_0x1405e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1405E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1405E0u;
            // 0x1405e4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1405e0) {
            ctx->pc = 0x1405F8u;
            goto label_1405f8;
        }
    }
    ctx->pc = 0x1405E8u;
label_1405e8:
    // 0x1405e8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1405e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1405ec:
    // 0x1405ec: 0xc04c094  jal         func_130250
label_1405f0:
    if (ctx->pc == 0x1405F0u) {
        ctx->pc = 0x1405F0u;
            // 0x1405f0: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x1405F4u;
        goto label_1405f4;
    }
    ctx->pc = 0x1405ECu;
    SET_GPR_U32(ctx, 31, 0x1405F4u);
    ctx->pc = 0x1405F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1405ECu;
            // 0x1405f0: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1405F4u; }
        if (ctx->pc != 0x1405F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1405F4u; }
        if (ctx->pc != 0x1405F4u) { return; }
    }
    ctx->pc = 0x1405F4u;
label_1405f4:
    // 0x1405f4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1405f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1405f8:
    // 0x1405f8: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x1405f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
label_1405fc:
    // 0x1405fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1405fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_140600:
    // 0x140600: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x140600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_140604:
    // 0x140604: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x140604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_140608:
    // 0x140608: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x140608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_14060c:
    // 0x14060c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x14060cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_140610:
    // 0x140610: 0x27c50040  addiu       $a1, $fp, 0x40
    ctx->pc = 0x140610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
label_140614:
    // 0x140614: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x140614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_140618:
    // 0x140618: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x140618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_14061c:
    // 0x14061c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x14061cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_140620:
    // 0x140620: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x140620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_140624:
    // 0x140624: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x140624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_140628:
    // 0x140628: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x140628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_14062c:
    // 0x14062c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x14062cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_140630:
    // 0x140630: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x140630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_140634:
    // 0x140634: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x140634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_140638:
    // 0x140638: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x140638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_14063c:
    // 0x14063c: 0x7bc20000  lq          $v0, 0x0($fp)
    ctx->pc = 0x14063cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_140640:
    // 0x140640: 0x7e0200b0  sq          $v0, 0xB0($s0)
    ctx->pc = 0x140640u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 2));
label_140644:
    // 0x140644: 0x7bc20010  lq          $v0, 0x10($fp)
    ctx->pc = 0x140644u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 16)));
label_140648:
    // 0x140648: 0x7e0200c0  sq          $v0, 0xC0($s0)
    ctx->pc = 0x140648u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 2));
label_14064c:
    // 0x14064c: 0x7bc20020  lq          $v0, 0x20($fp)
    ctx->pc = 0x14064cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 32)));
label_140650:
    // 0x140650: 0xc041c60  jal         func_107180
label_140654:
    if (ctx->pc == 0x140654u) {
        ctx->pc = 0x140654u;
            // 0x140654: 0x7e0200d0  sq          $v0, 0xD0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 208), GPR_VEC(ctx, 2));
        ctx->pc = 0x140658u;
        goto label_140658;
    }
    ctx->pc = 0x140650u;
    SET_GPR_U32(ctx, 31, 0x140658u);
    ctx->pc = 0x140654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140650u;
            // 0x140654: 0x7e0200d0  sq          $v0, 0xD0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 208), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140658u; }
        if (ctx->pc != 0x140658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140658u; }
        if (ctx->pc != 0x140658u) { return; }
    }
    ctx->pc = 0x140658u;
label_140658:
    // 0x140658: 0x7bc20080  lq          $v0, 0x80($fp)
    ctx->pc = 0x140658u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 128)));
label_14065c:
    // 0x14065c: 0x7e020120  sq          $v0, 0x120($s0)
    ctx->pc = 0x14065cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 288), GPR_VEC(ctx, 2));
label_140660:
    // 0x140660: 0x8ea20fcc  lw          $v0, 0xFCC($s5)
    ctx->pc = 0x140660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4044)));
label_140664:
    // 0x140664: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x140664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_140668:
    // 0x140668: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x140668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14066c:
    // 0x14066c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x14066cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_140670:
    // 0x140670: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x140670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_140674:
    // 0x140674: 0x8ea20fcc  lw          $v0, 0xFCC($s5)
    ctx->pc = 0x140674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4044)));
label_140678:
    // 0x140678: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x140678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_14067c:
    // 0x14067c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_140680:
    if (ctx->pc == 0x140680u) {
        ctx->pc = 0x140680u;
            // 0x140680: 0x3c023e99  lui         $v0, 0x3E99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
        ctx->pc = 0x140684u;
        goto label_140684;
    }
    ctx->pc = 0x14067Cu;
    {
        const bool branch_taken_0x14067c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14067Cu;
            // 0x140680: 0x3c023e99  lui         $v0, 0x3E99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14067c) {
            ctx->pc = 0x1406BCu;
            goto label_1406bc;
        }
    }
    ctx->pc = 0x140684u;
label_140684:
    // 0x140684: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x140684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_140688:
    // 0x140688: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x140688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_14068c:
    // 0x14068c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14068cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_140690:
    // 0x140690: 0xc041c4a  jal         func_107128
label_140694:
    if (ctx->pc == 0x140694u) {
        ctx->pc = 0x140694u;
            // 0x140694: 0x27c50040  addiu       $a1, $fp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
        ctx->pc = 0x140698u;
        goto label_140698;
    }
    ctx->pc = 0x140690u;
    SET_GPR_U32(ctx, 31, 0x140698u);
    ctx->pc = 0x140694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140690u;
            // 0x140694: 0x27c50040  addiu       $a1, $fp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140698u; }
        if (ctx->pc != 0x140698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140698u; }
        if (ctx->pc != 0x140698u) { return; }
    }
    ctx->pc = 0x140698u;
label_140698:
    // 0x140698: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x140698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_14069c:
    // 0x14069c: 0xc04bcf4  jal         func_12F3D0
label_1406a0:
    if (ctx->pc == 0x1406A0u) {
        ctx->pc = 0x1406A0u;
            // 0x1406a0: 0x27c50080  addiu       $a1, $fp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 128));
        ctx->pc = 0x1406A4u;
        goto label_1406a4;
    }
    ctx->pc = 0x14069Cu;
    SET_GPR_U32(ctx, 31, 0x1406A4u);
    ctx->pc = 0x1406A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14069Cu;
            // 0x1406a0: 0x27c50080  addiu       $a1, $fp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1406A4u; }
        if (ctx->pc != 0x1406A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1406A4u; }
        if (ctx->pc != 0x1406A4u) { return; }
    }
    ctx->pc = 0x1406A4u;
label_1406a4:
    // 0x1406a4: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x1406a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1406a8:
    // 0x1406a8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1406a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1406ac:
    // 0x1406ac: 0x7e020130  sq          $v0, 0x130($s0)
    ctx->pc = 0x1406acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 304), GPR_VEC(ctx, 2));
label_1406b0:
    // 0x1406b0: 0xc6a0100c  lwc1        $f0, 0x100C($s5)
    ctx->pc = 0x1406b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1406b4:
    // 0x1406b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1406b8:
    if (ctx->pc == 0x1406B8u) {
        ctx->pc = 0x1406B8u;
            // 0x1406b8: 0xe600013c  swc1        $f0, 0x13C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
        ctx->pc = 0x1406BCu;
        goto label_1406bc;
    }
    ctx->pc = 0x1406B4u;
    {
        const bool branch_taken_0x1406b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1406B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1406B4u;
            // 0x1406b8: 0xe600013c  swc1        $f0, 0x13C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1406b4) {
            ctx->pc = 0x1406C4u;
            goto label_1406c4;
        }
    }
    ctx->pc = 0x1406BCu;
label_1406bc:
    // 0x1406bc: 0x7aa21000  lq          $v0, 0x1000($s5)
    ctx->pc = 0x1406bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 4096)));
label_1406c0:
    // 0x1406c0: 0x7e020130  sq          $v0, 0x130($s0)
    ctx->pc = 0x1406c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 304), GPR_VEC(ctx, 2));
label_1406c4:
    // 0x1406c4: 0x8ea40fcc  lw          $a0, 0xFCC($s5)
    ctx->pc = 0x1406c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4044)));
label_1406c8:
    // 0x1406c8: 0xc601013c  lwc1        $f1, 0x13C($s0)
    ctx->pc = 0x1406c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1406cc:
    // 0x1406cc: 0x26140140  addiu       $s4, $s0, 0x140
    ctx->pc = 0x1406ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
label_1406d0:
    // 0x1406d0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1406d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1406d4:
    // 0x1406d4: 0x2821823  subu        $v1, $s4, $v0
    ctx->pc = 0x1406d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1406d8:
    // 0x1406d8: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x1406d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
label_1406dc:
    // 0x1406dc: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x1406dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1406e0:
    // 0x1406e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1406e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1406e4:
    // 0x1406e4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1406e8:
    if (ctx->pc == 0x1406E8u) {
        ctx->pc = 0x1406E8u;
            // 0x1406e8: 0xe600013c  swc1        $f0, 0x13C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
        ctx->pc = 0x1406ECu;
        goto label_1406ec;
    }
    ctx->pc = 0x1406E4u;
    {
        const bool branch_taken_0x1406e4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1406E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1406E4u;
            // 0x1406e8: 0xe600013c  swc1        $f0, 0x13C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1406e4) {
            ctx->pc = 0x1406F4u;
            goto label_1406f4;
        }
    }
    ctx->pc = 0x1406ECu;
label_1406ec:
    // 0x1406ec: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1406ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_1406f0:
    // 0x1406f0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1406f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1406f4:
    // 0x1406f4: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x1406f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_1406f8:
    // 0x1406f8: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x1406f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
label_1406fc:
    // 0x1406fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1406fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_140700:
    // 0x140700: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x140700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_140704:
    // 0x140704: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x140704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_140708:
    // 0x140708: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x140708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_14070c:
    // 0x14070c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x14070cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_140710:
    // 0x140710: 0x8ea20fcc  lw          $v0, 0xFCC($s5)
    ctx->pc = 0x140710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4044)));
label_140714:
    // 0x140714: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x140714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_140718:
    // 0x140718: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_14071c:
    if (ctx->pc == 0x14071Cu) {
        ctx->pc = 0x140720u;
        goto label_140720;
    }
    ctx->pc = 0x140718u;
    {
        const bool branch_taken_0x140718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140718) {
            ctx->pc = 0x140790u;
            goto label_140790;
        }
    }
    ctx->pc = 0x140720u;
label_140720:
    // 0x140720: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x140720u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_140724:
    // 0x140724: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x140724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
label_140728:
    // 0x140728: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x140728u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_14072c:
    // 0x14072c: 0x34430018  ori         $v1, $v0, 0x18
    ctx->pc = 0x14072cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
label_140730:
    // 0x140730: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x140730u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
label_140734:
    // 0x140734: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x140734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_140738:
    // 0x140738: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x140738u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
label_14073c:
    // 0x14073c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x14073cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_140740:
    // 0x140740: 0xc6a003a0  lwc1        $f0, 0x3A0($s5)
    ctx->pc = 0x140740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140744:
    // 0x140744: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x140744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_140748:
    // 0x140748: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x140748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_14074c:
    // 0x14074c: 0xc6a003a4  lwc1        $f0, 0x3A4($s5)
    ctx->pc = 0x14074cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140750:
    // 0x140750: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x140750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_140754:
    // 0x140754: 0xc6a003a8  lwc1        $f0, 0x3A8($s5)
    ctx->pc = 0x140754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140758:
    // 0x140758: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x140758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_14075c:
    // 0x14075c: 0xc041c60  jal         func_107180
label_140760:
    if (ctx->pc == 0x140760u) {
        ctx->pc = 0x140760u;
            // 0x140760: 0xafa2014c  sw          $v0, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
        ctx->pc = 0x140764u;
        goto label_140764;
    }
    ctx->pc = 0x14075Cu;
    SET_GPR_U32(ctx, 31, 0x140764u);
    ctx->pc = 0x140760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14075Cu;
            // 0x140760: 0xafa2014c  sw          $v0, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140764u; }
        if (ctx->pc != 0x140764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140764u; }
        if (ctx->pc != 0x140764u) { return; }
    }
    ctx->pc = 0x140764u;
label_140764:
    // 0x140764: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x140764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_140768:
    // 0x140768: 0xc041c02  jal         func_107008
label_14076c:
    if (ctx->pc == 0x14076Cu) {
        ctx->pc = 0x14076Cu;
            // 0x14076c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140770u;
        goto label_140770;
    }
    ctx->pc = 0x140768u;
    SET_GPR_U32(ctx, 31, 0x140770u);
    ctx->pc = 0x14076Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140768u;
            // 0x14076c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107008u;
    if (runtime->hasFunction(0x107008u)) {
        auto targetFn = runtime->lookupFunction(0x107008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140770u; }
        if (ctx->pc != 0x140770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InversMatrix_0x107008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140770u; }
        if (ctx->pc != 0x140770u) { return; }
    }
    ctx->pc = 0x140770u;
label_140770:
    // 0x140770: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x140770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_140774:
    // 0x140774: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x140774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_140778:
    // 0x140778: 0xc041bb0  jal         func_106EC0
label_14077c:
    if (ctx->pc == 0x14077Cu) {
        ctx->pc = 0x14077Cu;
            // 0x14077c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140780u;
        goto label_140780;
    }
    ctx->pc = 0x140778u;
    SET_GPR_U32(ctx, 31, 0x140780u);
    ctx->pc = 0x14077Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140778u;
            // 0x14077c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140780u; }
        if (ctx->pc != 0x140780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140780u; }
        if (ctx->pc != 0x140780u) { return; }
    }
    ctx->pc = 0x140780u;
label_140780:
    // 0x140780: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x140780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_140784:
    // 0x140784: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x140784u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_140788:
    // 0x140788: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x140788u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
label_14078c:
    // 0x14078c: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x14078cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_140790:
    // 0x140790: 0x8ea20fc4  lw          $v0, 0xFC4($s5)
    ctx->pc = 0x140790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4036)));
label_140794:
    // 0x140794: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_140798:
    if (ctx->pc == 0x140798u) {
        ctx->pc = 0x140798u;
            // 0x140798: 0x26020010  addiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x14079Cu;
        goto label_14079c;
    }
    ctx->pc = 0x140794u;
    {
        const bool branch_taken_0x140794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140794u;
            // 0x140798: 0x26020010  addiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140794) {
            ctx->pc = 0x140830u;
            goto label_140830;
        }
    }
    ctx->pc = 0x14079Cu;
label_14079c:
    // 0x14079c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x14079cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_1407a0:
    // 0x1407a0: 0x3c026c08  lui         $v0, 0x6C08
    ctx->pc = 0x1407a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27656 << 16));
label_1407a4:
    // 0x1407a4: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x1407a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_1407a8:
    // 0x1407a8: 0x34420019  ori         $v0, $v0, 0x19
    ctx->pc = 0x1407a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25);
label_1407ac:
    // 0x1407ac: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x1407acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
label_1407b0:
    // 0x1407b0: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1407b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1407b4:
    // 0x1407b4: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x1407b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
label_1407b8:
    // 0x1407b8: 0x26a50220  addiu       $a1, $s5, 0x220
    ctx->pc = 0x1407b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 544));
label_1407bc:
    // 0x1407bc: 0xc04c094  jal         func_130250
label_1407c0:
    if (ctx->pc == 0x1407C0u) {
        ctx->pc = 0x1407C0u;
            // 0x1407c0: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1407C4u;
        goto label_1407c4;
    }
    ctx->pc = 0x1407BCu;
    SET_GPR_U32(ctx, 31, 0x1407C4u);
    ctx->pc = 0x1407C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1407BCu;
            // 0x1407c0: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1407C4u; }
        if (ctx->pc != 0x1407C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1407C4u; }
        if (ctx->pc != 0x1407C4u) { return; }
    }
    ctx->pc = 0x1407C4u;
label_1407c4:
    // 0x1407c4: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x1407c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1407c8:
    // 0x1407c8: 0xc041c60  jal         func_107180
label_1407cc:
    if (ctx->pc == 0x1407CCu) {
        ctx->pc = 0x1407CCu;
            // 0x1407cc: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x1407D0u;
        goto label_1407d0;
    }
    ctx->pc = 0x1407C8u;
    SET_GPR_U32(ctx, 31, 0x1407D0u);
    ctx->pc = 0x1407CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1407C8u;
            // 0x1407cc: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1407D0u; }
        if (ctx->pc != 0x1407D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1407D0u; }
        if (ctx->pc != 0x1407D0u) { return; }
    }
    ctx->pc = 0x1407D0u;
label_1407d0:
    // 0x1407d0: 0x7aa30260  lq          $v1, 0x260($s5)
    ctx->pc = 0x1407d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 608)));
label_1407d4:
    // 0x1407d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1407d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1407d8:
    // 0x1407d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1407d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1407dc:
    // 0x1407dc: 0x7e830050  sq          $v1, 0x50($s4)
    ctx->pc = 0x1407dcu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 80), GPR_VEC(ctx, 3));
label_1407e0:
    // 0x1407e0: 0x7aa30270  lq          $v1, 0x270($s5)
    ctx->pc = 0x1407e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 624)));
label_1407e4:
    // 0x1407e4: 0x7e830060  sq          $v1, 0x60($s4)
    ctx->pc = 0x1407e4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 96), GPR_VEC(ctx, 3));
label_1407e8:
    // 0x1407e8: 0x7aa30280  lq          $v1, 0x280($s5)
    ctx->pc = 0x1407e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 640)));
label_1407ec:
    // 0x1407ec: 0x7e830070  sq          $v1, 0x70($s4)
    ctx->pc = 0x1407ecu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 112), GPR_VEC(ctx, 3));
label_1407f0:
    // 0x1407f0: 0x7aa30290  lq          $v1, 0x290($s5)
    ctx->pc = 0x1407f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 656)));
label_1407f4:
    // 0x1407f4: 0x7e830080  sq          $v1, 0x80($s4)
    ctx->pc = 0x1407f4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 128), GPR_VEC(ctx, 3));
label_1407f8:
    // 0x1407f8: 0x8ea30fcc  lw          $v1, 0xFCC($s5)
    ctx->pc = 0x1407f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4044)));
label_1407fc:
    // 0x1407fc: 0xc461008c  lwc1        $f1, 0x8C($v1)
    ctx->pc = 0x1407fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_140800:
    // 0x140800: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x140800u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_140804:
    // 0x140804: 0x0  nop
    ctx->pc = 0x140804u;
    // NOP
label_140808:
    // 0x140808: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_14080c:
    if (ctx->pc == 0x14080Cu) {
        ctx->pc = 0x14080Cu;
            // 0x14080c: 0x26840080  addiu       $a0, $s4, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
        ctx->pc = 0x140810u;
        goto label_140810;
    }
    ctx->pc = 0x140808u;
    {
        const bool branch_taken_0x140808 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14080Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140808u;
            // 0x14080c: 0x26840080  addiu       $a0, $s4, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140808) {
            ctx->pc = 0x140828u;
            goto label_140828;
        }
    }
    ctx->pc = 0x140810u;
label_140810:
    // 0x140810: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x140810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140814:
    // 0x140814: 0x3442023f  ori         $v0, $v0, 0x23F
    ctx->pc = 0x140814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)575);
label_140818:
    // 0x140818: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x140818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14081c:
    // 0x14081c: 0x0  nop
    ctx->pc = 0x14081cu;
    // NOP
label_140820:
    // 0x140820: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x140820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_140824:
    // 0x140824: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x140824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_140828:
    // 0x140828: 0x26940090  addiu       $s4, $s4, 0x90
    ctx->pc = 0x140828u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_14082c:
    // 0x14082c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x14082cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_140830:
    // 0x140830: 0x2821823  subu        $v1, $s4, $v0
    ctx->pc = 0x140830u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_140834:
    // 0x140834: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_140838:
    if (ctx->pc == 0x140838u) {
        ctx->pc = 0x140838u;
            // 0x140838: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->pc = 0x14083Cu;
        goto label_14083c;
    }
    ctx->pc = 0x140834u;
    {
        const bool branch_taken_0x140834 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x140838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140834u;
            // 0x140838: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140834) {
            ctx->pc = 0x140844u;
            goto label_140844;
        }
    }
    ctx->pc = 0x14083Cu;
label_14083c:
    // 0x14083c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x14083cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_140840:
    // 0x140840: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x140840u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_140844:
    // 0x140844: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_140848:
    if (ctx->pc == 0x140848u) {
        ctx->pc = 0x140848u;
            // 0x140848: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->pc = 0x14084Cu;
        goto label_14084c;
    }
    ctx->pc = 0x140844u;
    {
        const bool branch_taken_0x140844 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x140848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140844u;
            // 0x140848: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140844) {
            ctx->pc = 0x140854u;
            goto label_140854;
        }
    }
    ctx->pc = 0x14084Cu;
label_14084c:
    // 0x14084c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14084cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_140850:
    // 0x140850: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x140850u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_140854:
    // 0x140854: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x140854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_140858:
    // 0x140858: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x140858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_14085c:
    // 0x14085c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14085cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_140860:
    // 0x140860: 0x8ea20fc8  lw          $v0, 0xFC8($s5)
    ctx->pc = 0x140860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4040)));
label_140864:
    // 0x140864: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_140868:
    if (ctx->pc == 0x140868u) {
        ctx->pc = 0x14086Cu;
        goto label_14086c;
    }
    ctx->pc = 0x140864u;
    {
        const bool branch_taken_0x140864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140864) {
            ctx->pc = 0x1408E0u;
            goto label_1408e0;
        }
    }
    ctx->pc = 0x14086Cu;
label_14086c:
    // 0x14086c: 0x8ea20fac  lw          $v0, 0xFAC($s5)
    ctx->pc = 0x14086cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4012)));
label_140870:
    // 0x140870: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_140874:
    if (ctx->pc == 0x140874u) {
        ctx->pc = 0x140874u;
            // 0x140874: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140878u;
        goto label_140878;
    }
    ctx->pc = 0x140870u;
    {
        const bool branch_taken_0x140870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140870u;
            // 0x140874: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140870) {
            ctx->pc = 0x1408E0u;
            goto label_1408e0;
        }
    }
    ctx->pc = 0x140878u;
label_140878:
    // 0x140878: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x140878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14087c:
    // 0x14087c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14087cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140880:
    // 0x140880: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x140880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_140884:
    // 0x140884: 0x3d19821  addu        $s3, $fp, $s1
    ctx->pc = 0x140884u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
label_140888:
    // 0x140888: 0x245601d0  addiu       $s6, $v0, 0x1D0
    ctx->pc = 0x140888u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
label_14088c:
    // 0x14088c: 0x26650090  addiu       $a1, $s3, 0x90
    ctx->pc = 0x14088cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_140890:
    // 0x140890: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x140890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_140894:
    // 0x140894: 0xc041c3e  jal         func_1070F8
label_140898:
    if (ctx->pc == 0x140898u) {
        ctx->pc = 0x140898u;
            // 0x140898: 0x26e60030  addiu       $a2, $s7, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
        ctx->pc = 0x14089Cu;
        goto label_14089c;
    }
    ctx->pc = 0x140894u;
    SET_GPR_U32(ctx, 31, 0x14089Cu);
    ctx->pc = 0x140898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140894u;
            // 0x140898: 0x26e60030  addiu       $a2, $s7, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14089Cu; }
        if (ctx->pc != 0x14089Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14089Cu; }
        if (ctx->pc != 0x14089Cu) { return; }
    }
    ctx->pc = 0x14089Cu;
label_14089c:
    // 0x14089c: 0xc66000b0  lwc1        $f0, 0xB0($s3)
    ctx->pc = 0x14089cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1408a0:
    // 0x1408a0: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x1408a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_1408a4:
    // 0x1408a4: 0x266500a0  addiu       $a1, $s3, 0xA0
    ctx->pc = 0x1408a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_1408a8:
    // 0x1408a8: 0x24440210  addiu       $a0, $v0, 0x210
    ctx->pc = 0x1408a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
label_1408ac:
    // 0x1408ac: 0xc041c5c  jal         func_107170
label_1408b0:
    if (ctx->pc == 0x1408B0u) {
        ctx->pc = 0x1408B0u;
            // 0x1408b0: 0xe6c0000c  swc1        $f0, 0xC($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
        ctx->pc = 0x1408B4u;
        goto label_1408b4;
    }
    ctx->pc = 0x1408ACu;
    SET_GPR_U32(ctx, 31, 0x1408B4u);
    ctx->pc = 0x1408B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1408ACu;
            // 0x1408b0: 0xe6c0000c  swc1        $f0, 0xC($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1408B4u; }
        if (ctx->pc != 0x1408B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1408B4u; }
        if (ctx->pc != 0x1408B4u) { return; }
    }
    ctx->pc = 0x1408B4u;
label_1408b4:
    // 0x1408b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1408b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1408b8:
    // 0x1408b8: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1408b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1408bc:
    // 0x1408bc: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1408bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_1408c0:
    // 0x1408c0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1408c4:
    if (ctx->pc == 0x1408C4u) {
        ctx->pc = 0x1408C4u;
            // 0x1408c4: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x1408C8u;
        goto label_1408c8;
    }
    ctx->pc = 0x1408C0u;
    {
        const bool branch_taken_0x1408c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1408C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1408C0u;
            // 0x1408c4: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1408c0) {
            ctx->pc = 0x140880u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_140880;
        }
    }
    ctx->pc = 0x1408C8u;
label_1408c8:
    // 0x1408c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1408c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1408cc:
    // 0x1408cc: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1408ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_1408d0:
    // 0x1408d0: 0xc04f960  jal         func_13E580
label_1408d4:
    if (ctx->pc == 0x1408D4u) {
        ctx->pc = 0x1408D4u;
            // 0x1408d4: 0x27a60210  addiu       $a2, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x1408D8u;
        goto label_1408d8;
    }
    ctx->pc = 0x1408D0u;
    SET_GPR_U32(ctx, 31, 0x1408D8u);
    ctx->pc = 0x1408D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1408D0u;
            // 0x1408d4: 0x27a60210  addiu       $a2, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E580u;
    if (runtime->hasFunction(0x13E580u)) {
        auto targetFn = runtime->lookupFunction(0x13E580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1408D8u; }
        if (ctx->pc != 0x1408D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPointLight__FPUiPA4_fPA4_f_0x13e580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1408D8u; }
        if (ctx->pc != 0x1408D8u) { return; }
    }
    ctx->pc = 0x1408D8u;
label_1408d8:
    // 0x1408d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1408d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1408dc:
    // 0x1408dc: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1408dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1408e0:
    // 0x1408e0: 0x8ea20fcc  lw          $v0, 0xFCC($s5)
    ctx->pc = 0x1408e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4044)));
label_1408e4:
    // 0x1408e4: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1408e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_1408e8:
    // 0x1408e8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1408e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1408ec:
    // 0x1408ec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1408f0:
    if (ctx->pc == 0x1408F0u) {
        ctx->pc = 0x1408F0u;
            // 0x1408f0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->pc = 0x1408F4u;
        goto label_1408f4;
    }
    ctx->pc = 0x1408ECu;
    {
        const bool branch_taken_0x1408ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1408F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1408ECu;
            // 0x1408f0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1408ec) {
            ctx->pc = 0x140924u;
            goto label_140924;
        }
    }
    ctx->pc = 0x1408F4u;
label_1408f4:
    // 0x1408f4: 0x3c026c04  lui         $v0, 0x6C04
    ctx->pc = 0x1408f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27652 << 16));
label_1408f8:
    // 0x1408f8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1408f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_1408fc:
    // 0x1408fc: 0x34420019  ori         $v0, $v0, 0x19
    ctx->pc = 0x1408fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25);
label_140900:
    // 0x140900: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x140900u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_140904:
    // 0x140904: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x140904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_140908:
    // 0x140908: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x140908u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_14090c:
    // 0x14090c: 0x26a501a0  addiu       $a1, $s5, 0x1A0
    ctx->pc = 0x14090cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 416));
label_140910:
    // 0x140910: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x140910u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
label_140914:
    // 0x140914: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x140914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_140918:
    // 0x140918: 0xc04c094  jal         func_130250
label_14091c:
    if (ctx->pc == 0x14091Cu) {
        ctx->pc = 0x14091Cu;
            // 0x14091c: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x140920u;
        goto label_140920;
    }
    ctx->pc = 0x140918u;
    SET_GPR_U32(ctx, 31, 0x140920u);
    ctx->pc = 0x14091Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140918u;
            // 0x14091c: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140920u; }
        if (ctx->pc != 0x140920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140920u; }
        if (ctx->pc != 0x140920u) { return; }
    }
    ctx->pc = 0x140920u;
label_140920:
    // 0x140920: 0x26940050  addiu       $s4, $s4, 0x50
    ctx->pc = 0x140920u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
label_140924:
    // 0x140924: 0x8ea40fc4  lw          $a0, 0xFC4($s5)
    ctx->pc = 0x140924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4036)));
label_140928:
    // 0x140928: 0x8ea30fc0  lw          $v1, 0xFC0($s5)
    ctx->pc = 0x140928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4032)));
label_14092c:
    // 0x14092c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x14092cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_140930:
    // 0x140930: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_140934:
    if (ctx->pc == 0x140934u) {
        ctx->pc = 0x140934u;
            // 0x140934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140938u;
        goto label_140938;
    }
    ctx->pc = 0x140930u;
    {
        const bool branch_taken_0x140930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x140934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140930u;
            // 0x140934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140930) {
            ctx->pc = 0x14093Cu;
            goto label_14093c;
        }
    }
    ctx->pc = 0x140938u;
label_140938:
    // 0x140938: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x140938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_14093c:
    // 0x14093c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_140940:
    if (ctx->pc == 0x140940u) {
        ctx->pc = 0x140944u;
        goto label_140944;
    }
    ctx->pc = 0x14093Cu;
    {
        const bool branch_taken_0x14093c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14093c) {
            ctx->pc = 0x140948u;
            goto label_140948;
        }
    }
    ctx->pc = 0x140944u;
label_140944:
    // 0x140944: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x140944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_140948:
    // 0x140948: 0x8ea50fcc  lw          $a1, 0xFCC($s5)
    ctx->pc = 0x140948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4044)));
label_14094c:
    // 0x14094c: 0x8ca40040  lw          $a0, 0x40($a1)
    ctx->pc = 0x14094cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_140950:
    // 0x140950: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_140954:
    if (ctx->pc == 0x140954u) {
        ctx->pc = 0x140954u;
            // 0x140954: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x140958u;
        goto label_140958;
    }
    ctx->pc = 0x140950u;
    {
        const bool branch_taken_0x140950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x140954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140950u;
            // 0x140954: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x140950) {
            ctx->pc = 0x140970u;
            goto label_140970;
        }
    }
    ctx->pc = 0x140958u;
label_140958:
    // 0x140958: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_14095c:
    if (ctx->pc == 0x14095Cu) {
        ctx->pc = 0x14095Cu;
            // 0x14095c: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x140960u;
        goto label_140960;
    }
    ctx->pc = 0x140958u;
    {
        const bool branch_taken_0x140958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14095Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140958u;
            // 0x14095c: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x140958) {
            ctx->pc = 0x140964u;
            goto label_140964;
        }
    }
    ctx->pc = 0x140960u;
label_140960:
    // 0x140960: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x140960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_140964:
    // 0x140964: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_140968:
    if (ctx->pc == 0x140968u) {
        ctx->pc = 0x14096Cu;
        goto label_14096c;
    }
    ctx->pc = 0x140964u;
    {
        const bool branch_taken_0x140964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x140964) {
            ctx->pc = 0x140970u;
            goto label_140970;
        }
    }
    ctx->pc = 0x14096Cu;
label_14096c:
    // 0x14096c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x14096cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_140970:
    // 0x140970: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x140970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_140974:
    // 0x140974: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_140978:
    if (ctx->pc == 0x140978u) {
        ctx->pc = 0x14097Cu;
        goto label_14097c;
    }
    ctx->pc = 0x140974u;
    {
        const bool branch_taken_0x140974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x140974) {
            ctx->pc = 0x140980u;
            goto label_140980;
        }
    }
    ctx->pc = 0x14097Cu;
label_14097c:
    // 0x14097c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x14097cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_140980:
    // 0x140980: 0x8ea30fc8  lw          $v1, 0xFC8($s5)
    ctx->pc = 0x140980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4040)));
label_140984:
    // 0x140984: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_140988:
    if (ctx->pc == 0x140988u) {
        ctx->pc = 0x14098Cu;
        goto label_14098c;
    }
    ctx->pc = 0x140984u;
    {
        const bool branch_taken_0x140984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x140984) {
            ctx->pc = 0x140990u;
            goto label_140990;
        }
    }
    ctx->pc = 0x14098Cu;
label_14098c:
    // 0x14098c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x14098cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_140990:
    // 0x140990: 0x8ea31010  lw          $v1, 0x1010($s5)
    ctx->pc = 0x140990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4112)));
label_140994:
    // 0x140994: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_140998:
    if (ctx->pc == 0x140998u) {
        ctx->pc = 0x14099Cu;
        goto label_14099c;
    }
    ctx->pc = 0x140994u;
    {
        const bool branch_taken_0x140994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x140994) {
            ctx->pc = 0x1409A0u;
            goto label_1409a0;
        }
    }
    ctx->pc = 0x14099Cu;
label_14099c:
    // 0x14099c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x14099cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_1409a0:
    // 0x1409a0: 0x8ca30060  lw          $v1, 0x60($a1)
    ctx->pc = 0x1409a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
label_1409a4:
    // 0x1409a4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1409a8:
    if (ctx->pc == 0x1409A8u) {
        ctx->pc = 0x1409ACu;
        goto label_1409ac;
    }
    ctx->pc = 0x1409A4u;
    {
        const bool branch_taken_0x1409a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1409a4) {
            ctx->pc = 0x1409C4u;
            goto label_1409c4;
        }
    }
    ctx->pc = 0x1409ACu;
label_1409ac:
    // 0x1409ac: 0x8ea30fac  lw          $v1, 0xFAC($s5)
    ctx->pc = 0x1409acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4012)));
label_1409b0:
    // 0x1409b0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1409b4:
    if (ctx->pc == 0x1409B4u) {
        ctx->pc = 0x1409B8u;
        goto label_1409b8;
    }
    ctx->pc = 0x1409B0u;
    {
        const bool branch_taken_0x1409b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1409b0) {
            ctx->pc = 0x1409C4u;
            goto label_1409c4;
        }
    }
    ctx->pc = 0x1409B8u;
label_1409b8:
    // 0x1409b8: 0x8ca3004c  lw          $v1, 0x4C($a1)
    ctx->pc = 0x1409b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_1409bc:
    // 0x1409bc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1409c0:
    if (ctx->pc == 0x1409C0u) {
        ctx->pc = 0x1409C4u;
        goto label_1409c4;
    }
    ctx->pc = 0x1409BCu;
    {
        const bool branch_taken_0x1409bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1409bc) {
            ctx->pc = 0x1409C8u;
            goto label_1409c8;
        }
    }
    ctx->pc = 0x1409C4u;
label_1409c4:
    // 0x1409c4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1409c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_1409c8:
    // 0x1409c8: 0x8ca40084  lw          $a0, 0x84($a1)
    ctx->pc = 0x1409c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
label_1409cc:
    // 0x1409cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1409ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1409d0:
    // 0x1409d0: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_1409d4:
    if (ctx->pc == 0x1409D4u) {
        ctx->pc = 0x1409D4u;
            // 0x1409d4: 0x3c036c01  lui         $v1, 0x6C01 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27649 << 16));
        ctx->pc = 0x1409D8u;
        goto label_1409d8;
    }
    ctx->pc = 0x1409D0u;
    {
        const bool branch_taken_0x1409d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1409D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1409D0u;
            // 0x1409d4: 0x3c036c01  lui         $v1, 0x6C01 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27649 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1409d0) {
            ctx->pc = 0x1409DCu;
            goto label_1409dc;
        }
    }
    ctx->pc = 0x1409D8u;
label_1409d8:
    // 0x1409d8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1409d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_1409dc:
    // 0x1409dc: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1409dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_1409e0:
    // 0x1409e0: 0x34640026  ori         $a0, $v1, 0x26
    ctx->pc = 0x1409e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)38);
label_1409e4:
    // 0x1409e4: 0x3c061400  lui         $a2, 0x1400
    ctx->pc = 0x1409e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5120 << 16));
label_1409e8:
    // 0x1409e8: 0x34e3000a  ori         $v1, $a3, 0xA
    ctx->pc = 0x1409e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
label_1409ec:
    // 0x1409ec: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1409ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_1409f0:
    // 0x1409f0: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x1409f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_1409f4:
    // 0x1409f4: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1409f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_1409f8:
    // 0x1409f8: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x1409f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
label_1409fc:
    // 0x1409fc: 0x34650008  ori         $a1, $v1, 0x8
    ctx->pc = 0x1409fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_140a00:
    // 0x140a00: 0xae84000c  sw          $a0, 0xC($s4)
    ctx->pc = 0x140a00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 4));
label_140a04:
    // 0x140a04: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x140a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_140a08:
    // 0x140a08: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x140a08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_140a0c:
    // 0x140a0c: 0x34048003  ori         $a0, $zero, 0x8003
    ctx->pc = 0x140a0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
label_140a10:
    // 0x140a10: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x140a10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
label_140a14:
    // 0x140a14: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x140a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_140a18:
    // 0x140a18: 0xae800018  sw          $zero, 0x18($s4)
    ctx->pc = 0x140a18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 0));
label_140a1c:
    // 0x140a1c: 0xae80001c  sw          $zero, 0x1C($s4)
    ctx->pc = 0x140a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
label_140a20:
    // 0x140a20: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x140a20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
label_140a24:
    // 0x140a24: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x140a24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
label_140a28:
    // 0x140a28: 0xae860028  sw          $a2, 0x28($s4)
    ctx->pc = 0x140a28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 6));
label_140a2c:
    // 0x140a2c: 0xae85002c  sw          $a1, 0x2C($s4)
    ctx->pc = 0x140a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 5));
label_140a30:
    // 0x140a30: 0xae840030  sw          $a0, 0x30($s4)
    ctx->pc = 0x140a30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 4));
label_140a34:
    // 0x140a34: 0xae870034  sw          $a3, 0x34($s4)
    ctx->pc = 0x140a34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 7));
label_140a38:
    // 0x140a38: 0xae830038  sw          $v1, 0x38($s4)
    ctx->pc = 0x140a38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 3));
label_140a3c:
    // 0x140a3c: 0xae80003c  sw          $zero, 0x3C($s4)
    ctx->pc = 0x140a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 0));
label_140a40:
    // 0x140a40: 0xae800040  sw          $zero, 0x40($s4)
    ctx->pc = 0x140a40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 0));
label_140a44:
    // 0x140a44: 0xae800044  sw          $zero, 0x44($s4)
    ctx->pc = 0x140a44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 0));
label_140a48:
    // 0x140a48: 0xae820048  sw          $v0, 0x48($s4)
    ctx->pc = 0x140a48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 2));
label_140a4c:
    // 0x140a4c: 0xae80004c  sw          $zero, 0x4C($s4)
    ctx->pc = 0x140a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 0));
label_140a50:
    // 0x140a50: 0x8ea20fcc  lw          $v0, 0xFCC($s5)
    ctx->pc = 0x140a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4044)));
label_140a54:
    // 0x140a54: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x140a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_140a58:
    // 0x140a58: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x140a58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_140a5c:
    // 0x140a5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_140a60:
    if (ctx->pc == 0x140A60u) {
        ctx->pc = 0x140A64u;
        goto label_140a64;
    }
    ctx->pc = 0x140A5Cu;
    {
        const bool branch_taken_0x140a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140a5c) {
            ctx->pc = 0x140A6Cu;
            goto label_140a6c;
        }
    }
    ctx->pc = 0x140A64u;
label_140a64:
    // 0x140a64: 0x8ea20fa4  lw          $v0, 0xFA4($s5)
    ctx->pc = 0x140a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4004)));
label_140a68:
    // 0x140a68: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x140a68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_140a6c:
    // 0x140a6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_140a70:
    // 0x140a70: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x140a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_140a74:
    // 0x140a74: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x140a74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_140a78:
    // 0x140a78: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x140a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_140a7c:
    // 0x140a7c: 0x34440058  ori         $a0, $v0, 0x58
    ctx->pc = 0x140a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)88);
label_140a80:
    // 0x140a80: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x140a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_140a84:
    // 0x140a84: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x140a84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
label_140a88:
    // 0x140a88: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x140a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_140a8c:
    // 0x140a8c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x140a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_140a90:
    // 0x140a90: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x140a90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
label_140a94:
    // 0x140a94: 0xae800054  sw          $zero, 0x54($s4)
    ctx->pc = 0x140a94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 0));
label_140a98:
    // 0x140a98: 0xae830058  sw          $v1, 0x58($s4)
    ctx->pc = 0x140a98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 3));
label_140a9c:
    // 0x140a9c: 0xae80005c  sw          $zero, 0x5C($s4)
    ctx->pc = 0x140a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 0));
label_140aa0:
    // 0x140aa0: 0x92a40fd9  lbu         $a0, 0xFD9($s5)
    ctx->pc = 0x140aa0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4057)));
label_140aa4:
    // 0x140aa4: 0x92a30fda  lbu         $v1, 0xFDA($s5)
    ctx->pc = 0x140aa4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4058)));
label_140aa8:
    // 0x140aa8: 0x92a50fd8  lbu         $a1, 0xFD8($s5)
    ctx->pc = 0x140aa8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4056)));
label_140aac:
    // 0x140aac: 0x8ea20fcc  lw          $v0, 0xFCC($s5)
    ctx->pc = 0x140aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4044)));
label_140ab0:
    // 0x140ab0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x140ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_140ab4:
    // 0x140ab4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x140ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_140ab8:
    // 0x140ab8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x140ab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_140abc:
    // 0x140abc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x140abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_140ac0:
    // 0x140ac0: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x140ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_140ac4:
    // 0x140ac4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x140ac4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_140ac8:
    // 0x140ac8: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_140acc:
    if (ctx->pc == 0x140ACCu) {
        ctx->pc = 0x140ACCu;
            // 0x140acc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x140AD0u;
        goto label_140ad0;
    }
    ctx->pc = 0x140AC8u;
    {
        const bool branch_taken_0x140ac8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x140ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140AC8u;
            // 0x140acc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140ac8) {
            ctx->pc = 0x140AE8u;
            goto label_140ae8;
        }
    }
    ctx->pc = 0x140AD0u;
label_140ad0:
    // 0x140ad0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_140ad4:
    if (ctx->pc == 0x140AD4u) {
        ctx->pc = 0x140AD4u;
            // 0x140ad4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x140AD8u;
        goto label_140ad8;
    }
    ctx->pc = 0x140AD0u;
    {
        const bool branch_taken_0x140ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x140AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140AD0u;
            // 0x140ad4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140ad0) {
            ctx->pc = 0x140ADCu;
            goto label_140adc;
        }
    }
    ctx->pc = 0x140AD8u;
label_140ad8:
    // 0x140ad8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x140ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140adc:
    // 0x140adc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_140ae0:
    if (ctx->pc == 0x140AE0u) {
        ctx->pc = 0x140AE0u;
            // 0x140ae0: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->pc = 0x140AE4u;
        goto label_140ae4;
    }
    ctx->pc = 0x140ADCu;
    {
        const bool branch_taken_0x140adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x140AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140ADCu;
            // 0x140ae0: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140adc) {
            ctx->pc = 0x140AE8u;
            goto label_140ae8;
        }
    }
    ctx->pc = 0x140AE4u;
label_140ae4:
    // 0x140ae4: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x140ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_140ae8:
    // 0x140ae8: 0xae840060  sw          $a0, 0x60($s4)
    ctx->pc = 0x140ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 4));
label_140aec:
    // 0x140aec: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x140aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_140af0:
    // 0x140af0: 0xae800064  sw          $zero, 0x64($s4)
    ctx->pc = 0x140af0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 0));
label_140af4:
    // 0x140af4: 0xae820068  sw          $v0, 0x68($s4)
    ctx->pc = 0x140af4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 2));
label_140af8:
    // 0x140af8: 0xae80006c  sw          $zero, 0x6C($s4)
    ctx->pc = 0x140af8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 0));
label_140afc:
    // 0x140afc: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x140afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_140b00:
    // 0x140b00: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x140b00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_140b04:
    // 0x140b04: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_140b08:
    if (ctx->pc == 0x140B08u) {
        ctx->pc = 0x140B08u;
            // 0x140b08: 0x26940070  addiu       $s4, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->pc = 0x140B0Cu;
        goto label_140b0c;
    }
    ctx->pc = 0x140B04u;
    {
        const bool branch_taken_0x140b04 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x140B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140B04u;
            // 0x140b08: 0x26940070  addiu       $s4, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b04) {
            ctx->pc = 0x140B14u;
            goto label_140b14;
        }
    }
    ctx->pc = 0x140B0Cu;
label_140b0c:
    // 0x140b0c: 0x10000003  b           . + 4 + (0x3 << 2)
label_140b10:
    if (ctx->pc == 0x140B10u) {
        ctx->pc = 0x140B10u;
            // 0x140b10: 0x8fa400ac  lw          $a0, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->pc = 0x140B14u;
        goto label_140b14;
    }
    ctx->pc = 0x140B0Cu;
    {
        const bool branch_taken_0x140b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140B0Cu;
            // 0x140b10: 0x8fa400ac  lw          $a0, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b0c) {
            ctx->pc = 0x140B1Cu;
            goto label_140b1c;
        }
    }
    ctx->pc = 0x140B14u;
label_140b14:
    // 0x140b14: 0x26a70f20  addiu       $a3, $s5, 0xF20
    ctx->pc = 0x140b14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 3872));
label_140b18:
    // 0x140b18: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x140b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_140b1c:
    // 0x140b1c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x140b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_140b20:
    // 0x140b20: 0xc04fa14  jal         func_13E850
label_140b24:
    if (ctx->pc == 0x140B24u) {
        ctx->pc = 0x140B24u;
            // 0x140b24: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140B28u;
        goto label_140b28;
    }
    ctx->pc = 0x140B20u;
    SET_GPR_U32(ctx, 31, 0x140B28u);
    ctx->pc = 0x140B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140B20u;
            // 0x140b24: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E850u;
    if (runtime->hasFunction(0x13E850u)) {
        auto targetFn = runtime->lookupFunction(0x13E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B28u; }
        if (ctx->pc != 0x140B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDrawEnvGifTag__9mgCVisualFP1P13mgRENDER_INFOP10mgCDrawEnv_0x13e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B28u; }
        if (ctx->pc != 0x140B28u) { return; }
    }
    ctx->pc = 0x140B28u;
label_140b28:
    // 0x140b28: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x140b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_140b2c:
    // 0x140b2c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x140b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_140b30:
    // 0x140b30: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x140b30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_140b34:
    // 0x140b34: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x140b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_140b38:
    // 0x140b38: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x140b38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_140b3c:
    // 0x140b3c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x140b3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_140b40:
    // 0x140b40: 0x8c59001c  lw          $t9, 0x1C($v0)
    ctx->pc = 0x140b40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_140b44:
    // 0x140b44: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x140b44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_140b48:
    // 0x140b48: 0x320f809  jalr        $t9
label_140b4c:
    if (ctx->pc == 0x140B4Cu) {
        ctx->pc = 0x140B4Cu;
            // 0x140b4c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140B50u;
        goto label_140b50;
    }
    ctx->pc = 0x140B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x140B50u);
        ctx->pc = 0x140B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140B48u;
            // 0x140b4c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x140B50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x140B50u; }
            if (ctx->pc != 0x140B50u) { return; }
        }
        }
    }
    ctx->pc = 0x140B50u;
label_140b50:
    // 0x140b50: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x140b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_140b54:
    // 0x140b54: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x140b54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_140b58:
    // 0x140b58: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x140b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
label_140b5c:
    // 0x140b5c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x140b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_140b60:
    // 0x140b60: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x140b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_140b64:
    // 0x140b64: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x140b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_140b68:
    // 0x140b68: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x140b68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_140b6c:
    // 0x140b6c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x140b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_140b70:
    // 0x140b70: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x140b70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
label_140b74:
    // 0x140b74: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x140b74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
label_140b78:
    // 0x140b78: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_140b7c:
    if (ctx->pc == 0x140B7Cu) {
        ctx->pc = 0x140B7Cu;
            // 0x140b7c: 0xae80000c  sw          $zero, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x140B80u;
        goto label_140b80;
    }
    ctx->pc = 0x140B78u;
    {
        const bool branch_taken_0x140b78 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x140B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140B78u;
            // 0x140b7c: 0xae80000c  sw          $zero, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b78) {
            ctx->pc = 0x140B88u;
            goto label_140b88;
        }
    }
    ctx->pc = 0x140B80u;
label_140b80:
    // 0x140b80: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x140b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_140b84:
    // 0x140b84: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x140b84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_140b88:
    // 0x140b88: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_140b8c:
    if (ctx->pc == 0x140B8Cu) {
        ctx->pc = 0x140B8Cu;
            // 0x140b8c: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->pc = 0x140B90u;
        goto label_140b90;
    }
    ctx->pc = 0x140B88u;
    {
        const bool branch_taken_0x140b88 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x140B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140B88u;
            // 0x140b8c: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b88) {
            ctx->pc = 0x140B98u;
            goto label_140b98;
        }
    }
    ctx->pc = 0x140B90u;
label_140b90:
    // 0x140b90: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x140b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_140b94:
    // 0x140b94: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x140b94u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
label_140b98:
    // 0x140b98: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x140b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_140b9c:
    // 0x140b9c: 0xc04f8f4  jal         func_13E3D0
label_140ba0:
    if (ctx->pc == 0x140BA0u) {
        ctx->pc = 0x140BA0u;
            // 0x140ba0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140BA4u;
        goto label_140ba4;
    }
    ctx->pc = 0x140B9Cu;
    SET_GPR_U32(ctx, 31, 0x140BA4u);
    ctx->pc = 0x140BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140B9Cu;
            // 0x140ba0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E3D0u;
    if (runtime->hasFunction(0x13E3D0u)) {
        auto targetFn = runtime->lookupFunction(0x13E3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140BA4u; }
        if (ctx->pc != 0x140BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SendDMA__FPvi_0x13e3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140BA4u; }
        if (ctx->pc != 0x140BA4u) { return; }
    }
    ctx->pc = 0x140BA4u;
label_140ba4:
    // 0x140ba4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x140ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140ba8:
    // 0x140ba8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x140ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_140bac:
    // 0x140bac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x140bacu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_140bb0:
    // 0x140bb0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x140bb0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_140bb4:
    // 0x140bb4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x140bb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_140bb8:
    // 0x140bb8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x140bb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_140bbc:
    // 0x140bbc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x140bbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_140bc0:
    // 0x140bc0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x140bc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_140bc4:
    // 0x140bc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x140bc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_140bc8:
    // 0x140bc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x140bc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_140bcc:
    // 0x140bcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x140bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_140bd0:
    // 0x140bd0: 0x3e00008  jr          $ra
label_140bd4:
    if (ctx->pc == 0x140BD4u) {
        ctx->pc = 0x140BD4u;
            // 0x140bd4: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x140BD8u;
        goto label_fallthrough_0x140bd0;
    }
    ctx->pc = 0x140BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140BD0u;
            // 0x140bd4: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x140bd0:
    ctx->pc = 0x140BD8u;
}
