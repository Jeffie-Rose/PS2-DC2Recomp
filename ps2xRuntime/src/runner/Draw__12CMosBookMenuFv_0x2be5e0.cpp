#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__12CMosBookMenuFv
// Address: 0x2be5e0 - 0x2bf404
void Draw__12CMosBookMenuFv_0x2be5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__12CMosBookMenuFv_0x2be5e0");
#endif

    switch (ctx->pc) {
        case 0x2be5e0u: goto label_2be5e0;
        case 0x2be5e4u: goto label_2be5e4;
        case 0x2be5e8u: goto label_2be5e8;
        case 0x2be5ecu: goto label_2be5ec;
        case 0x2be5f0u: goto label_2be5f0;
        case 0x2be5f4u: goto label_2be5f4;
        case 0x2be5f8u: goto label_2be5f8;
        case 0x2be5fcu: goto label_2be5fc;
        case 0x2be600u: goto label_2be600;
        case 0x2be604u: goto label_2be604;
        case 0x2be608u: goto label_2be608;
        case 0x2be60cu: goto label_2be60c;
        case 0x2be610u: goto label_2be610;
        case 0x2be614u: goto label_2be614;
        case 0x2be618u: goto label_2be618;
        case 0x2be61cu: goto label_2be61c;
        case 0x2be620u: goto label_2be620;
        case 0x2be624u: goto label_2be624;
        case 0x2be628u: goto label_2be628;
        case 0x2be62cu: goto label_2be62c;
        case 0x2be630u: goto label_2be630;
        case 0x2be634u: goto label_2be634;
        case 0x2be638u: goto label_2be638;
        case 0x2be63cu: goto label_2be63c;
        case 0x2be640u: goto label_2be640;
        case 0x2be644u: goto label_2be644;
        case 0x2be648u: goto label_2be648;
        case 0x2be64cu: goto label_2be64c;
        case 0x2be650u: goto label_2be650;
        case 0x2be654u: goto label_2be654;
        case 0x2be658u: goto label_2be658;
        case 0x2be65cu: goto label_2be65c;
        case 0x2be660u: goto label_2be660;
        case 0x2be664u: goto label_2be664;
        case 0x2be668u: goto label_2be668;
        case 0x2be66cu: goto label_2be66c;
        case 0x2be670u: goto label_2be670;
        case 0x2be674u: goto label_2be674;
        case 0x2be678u: goto label_2be678;
        case 0x2be67cu: goto label_2be67c;
        case 0x2be680u: goto label_2be680;
        case 0x2be684u: goto label_2be684;
        case 0x2be688u: goto label_2be688;
        case 0x2be68cu: goto label_2be68c;
        case 0x2be690u: goto label_2be690;
        case 0x2be694u: goto label_2be694;
        case 0x2be698u: goto label_2be698;
        case 0x2be69cu: goto label_2be69c;
        case 0x2be6a0u: goto label_2be6a0;
        case 0x2be6a4u: goto label_2be6a4;
        case 0x2be6a8u: goto label_2be6a8;
        case 0x2be6acu: goto label_2be6ac;
        case 0x2be6b0u: goto label_2be6b0;
        case 0x2be6b4u: goto label_2be6b4;
        case 0x2be6b8u: goto label_2be6b8;
        case 0x2be6bcu: goto label_2be6bc;
        case 0x2be6c0u: goto label_2be6c0;
        case 0x2be6c4u: goto label_2be6c4;
        case 0x2be6c8u: goto label_2be6c8;
        case 0x2be6ccu: goto label_2be6cc;
        case 0x2be6d0u: goto label_2be6d0;
        case 0x2be6d4u: goto label_2be6d4;
        case 0x2be6d8u: goto label_2be6d8;
        case 0x2be6dcu: goto label_2be6dc;
        case 0x2be6e0u: goto label_2be6e0;
        case 0x2be6e4u: goto label_2be6e4;
        case 0x2be6e8u: goto label_2be6e8;
        case 0x2be6ecu: goto label_2be6ec;
        case 0x2be6f0u: goto label_2be6f0;
        case 0x2be6f4u: goto label_2be6f4;
        case 0x2be6f8u: goto label_2be6f8;
        case 0x2be6fcu: goto label_2be6fc;
        case 0x2be700u: goto label_2be700;
        case 0x2be704u: goto label_2be704;
        case 0x2be708u: goto label_2be708;
        case 0x2be70cu: goto label_2be70c;
        case 0x2be710u: goto label_2be710;
        case 0x2be714u: goto label_2be714;
        case 0x2be718u: goto label_2be718;
        case 0x2be71cu: goto label_2be71c;
        case 0x2be720u: goto label_2be720;
        case 0x2be724u: goto label_2be724;
        case 0x2be728u: goto label_2be728;
        case 0x2be72cu: goto label_2be72c;
        case 0x2be730u: goto label_2be730;
        case 0x2be734u: goto label_2be734;
        case 0x2be738u: goto label_2be738;
        case 0x2be73cu: goto label_2be73c;
        case 0x2be740u: goto label_2be740;
        case 0x2be744u: goto label_2be744;
        case 0x2be748u: goto label_2be748;
        case 0x2be74cu: goto label_2be74c;
        case 0x2be750u: goto label_2be750;
        case 0x2be754u: goto label_2be754;
        case 0x2be758u: goto label_2be758;
        case 0x2be75cu: goto label_2be75c;
        case 0x2be760u: goto label_2be760;
        case 0x2be764u: goto label_2be764;
        case 0x2be768u: goto label_2be768;
        case 0x2be76cu: goto label_2be76c;
        case 0x2be770u: goto label_2be770;
        case 0x2be774u: goto label_2be774;
        case 0x2be778u: goto label_2be778;
        case 0x2be77cu: goto label_2be77c;
        case 0x2be780u: goto label_2be780;
        case 0x2be784u: goto label_2be784;
        case 0x2be788u: goto label_2be788;
        case 0x2be78cu: goto label_2be78c;
        case 0x2be790u: goto label_2be790;
        case 0x2be794u: goto label_2be794;
        case 0x2be798u: goto label_2be798;
        case 0x2be79cu: goto label_2be79c;
        case 0x2be7a0u: goto label_2be7a0;
        case 0x2be7a4u: goto label_2be7a4;
        case 0x2be7a8u: goto label_2be7a8;
        case 0x2be7acu: goto label_2be7ac;
        case 0x2be7b0u: goto label_2be7b0;
        case 0x2be7b4u: goto label_2be7b4;
        case 0x2be7b8u: goto label_2be7b8;
        case 0x2be7bcu: goto label_2be7bc;
        case 0x2be7c0u: goto label_2be7c0;
        case 0x2be7c4u: goto label_2be7c4;
        case 0x2be7c8u: goto label_2be7c8;
        case 0x2be7ccu: goto label_2be7cc;
        case 0x2be7d0u: goto label_2be7d0;
        case 0x2be7d4u: goto label_2be7d4;
        case 0x2be7d8u: goto label_2be7d8;
        case 0x2be7dcu: goto label_2be7dc;
        case 0x2be7e0u: goto label_2be7e0;
        case 0x2be7e4u: goto label_2be7e4;
        case 0x2be7e8u: goto label_2be7e8;
        case 0x2be7ecu: goto label_2be7ec;
        case 0x2be7f0u: goto label_2be7f0;
        case 0x2be7f4u: goto label_2be7f4;
        case 0x2be7f8u: goto label_2be7f8;
        case 0x2be7fcu: goto label_2be7fc;
        case 0x2be800u: goto label_2be800;
        case 0x2be804u: goto label_2be804;
        case 0x2be808u: goto label_2be808;
        case 0x2be80cu: goto label_2be80c;
        case 0x2be810u: goto label_2be810;
        case 0x2be814u: goto label_2be814;
        case 0x2be818u: goto label_2be818;
        case 0x2be81cu: goto label_2be81c;
        case 0x2be820u: goto label_2be820;
        case 0x2be824u: goto label_2be824;
        case 0x2be828u: goto label_2be828;
        case 0x2be82cu: goto label_2be82c;
        case 0x2be830u: goto label_2be830;
        case 0x2be834u: goto label_2be834;
        case 0x2be838u: goto label_2be838;
        case 0x2be83cu: goto label_2be83c;
        case 0x2be840u: goto label_2be840;
        case 0x2be844u: goto label_2be844;
        case 0x2be848u: goto label_2be848;
        case 0x2be84cu: goto label_2be84c;
        case 0x2be850u: goto label_2be850;
        case 0x2be854u: goto label_2be854;
        case 0x2be858u: goto label_2be858;
        case 0x2be85cu: goto label_2be85c;
        case 0x2be860u: goto label_2be860;
        case 0x2be864u: goto label_2be864;
        case 0x2be868u: goto label_2be868;
        case 0x2be86cu: goto label_2be86c;
        case 0x2be870u: goto label_2be870;
        case 0x2be874u: goto label_2be874;
        case 0x2be878u: goto label_2be878;
        case 0x2be87cu: goto label_2be87c;
        case 0x2be880u: goto label_2be880;
        case 0x2be884u: goto label_2be884;
        case 0x2be888u: goto label_2be888;
        case 0x2be88cu: goto label_2be88c;
        case 0x2be890u: goto label_2be890;
        case 0x2be894u: goto label_2be894;
        case 0x2be898u: goto label_2be898;
        case 0x2be89cu: goto label_2be89c;
        case 0x2be8a0u: goto label_2be8a0;
        case 0x2be8a4u: goto label_2be8a4;
        case 0x2be8a8u: goto label_2be8a8;
        case 0x2be8acu: goto label_2be8ac;
        case 0x2be8b0u: goto label_2be8b0;
        case 0x2be8b4u: goto label_2be8b4;
        case 0x2be8b8u: goto label_2be8b8;
        case 0x2be8bcu: goto label_2be8bc;
        case 0x2be8c0u: goto label_2be8c0;
        case 0x2be8c4u: goto label_2be8c4;
        case 0x2be8c8u: goto label_2be8c8;
        case 0x2be8ccu: goto label_2be8cc;
        case 0x2be8d0u: goto label_2be8d0;
        case 0x2be8d4u: goto label_2be8d4;
        case 0x2be8d8u: goto label_2be8d8;
        case 0x2be8dcu: goto label_2be8dc;
        case 0x2be8e0u: goto label_2be8e0;
        case 0x2be8e4u: goto label_2be8e4;
        case 0x2be8e8u: goto label_2be8e8;
        case 0x2be8ecu: goto label_2be8ec;
        case 0x2be8f0u: goto label_2be8f0;
        case 0x2be8f4u: goto label_2be8f4;
        case 0x2be8f8u: goto label_2be8f8;
        case 0x2be8fcu: goto label_2be8fc;
        case 0x2be900u: goto label_2be900;
        case 0x2be904u: goto label_2be904;
        case 0x2be908u: goto label_2be908;
        case 0x2be90cu: goto label_2be90c;
        case 0x2be910u: goto label_2be910;
        case 0x2be914u: goto label_2be914;
        case 0x2be918u: goto label_2be918;
        case 0x2be91cu: goto label_2be91c;
        case 0x2be920u: goto label_2be920;
        case 0x2be924u: goto label_2be924;
        case 0x2be928u: goto label_2be928;
        case 0x2be92cu: goto label_2be92c;
        case 0x2be930u: goto label_2be930;
        case 0x2be934u: goto label_2be934;
        case 0x2be938u: goto label_2be938;
        case 0x2be93cu: goto label_2be93c;
        case 0x2be940u: goto label_2be940;
        case 0x2be944u: goto label_2be944;
        case 0x2be948u: goto label_2be948;
        case 0x2be94cu: goto label_2be94c;
        case 0x2be950u: goto label_2be950;
        case 0x2be954u: goto label_2be954;
        case 0x2be958u: goto label_2be958;
        case 0x2be95cu: goto label_2be95c;
        case 0x2be960u: goto label_2be960;
        case 0x2be964u: goto label_2be964;
        case 0x2be968u: goto label_2be968;
        case 0x2be96cu: goto label_2be96c;
        case 0x2be970u: goto label_2be970;
        case 0x2be974u: goto label_2be974;
        case 0x2be978u: goto label_2be978;
        case 0x2be97cu: goto label_2be97c;
        case 0x2be980u: goto label_2be980;
        case 0x2be984u: goto label_2be984;
        case 0x2be988u: goto label_2be988;
        case 0x2be98cu: goto label_2be98c;
        case 0x2be990u: goto label_2be990;
        case 0x2be994u: goto label_2be994;
        case 0x2be998u: goto label_2be998;
        case 0x2be99cu: goto label_2be99c;
        case 0x2be9a0u: goto label_2be9a0;
        case 0x2be9a4u: goto label_2be9a4;
        case 0x2be9a8u: goto label_2be9a8;
        case 0x2be9acu: goto label_2be9ac;
        case 0x2be9b0u: goto label_2be9b0;
        case 0x2be9b4u: goto label_2be9b4;
        case 0x2be9b8u: goto label_2be9b8;
        case 0x2be9bcu: goto label_2be9bc;
        case 0x2be9c0u: goto label_2be9c0;
        case 0x2be9c4u: goto label_2be9c4;
        case 0x2be9c8u: goto label_2be9c8;
        case 0x2be9ccu: goto label_2be9cc;
        case 0x2be9d0u: goto label_2be9d0;
        case 0x2be9d4u: goto label_2be9d4;
        case 0x2be9d8u: goto label_2be9d8;
        case 0x2be9dcu: goto label_2be9dc;
        case 0x2be9e0u: goto label_2be9e0;
        case 0x2be9e4u: goto label_2be9e4;
        case 0x2be9e8u: goto label_2be9e8;
        case 0x2be9ecu: goto label_2be9ec;
        case 0x2be9f0u: goto label_2be9f0;
        case 0x2be9f4u: goto label_2be9f4;
        case 0x2be9f8u: goto label_2be9f8;
        case 0x2be9fcu: goto label_2be9fc;
        case 0x2bea00u: goto label_2bea00;
        case 0x2bea04u: goto label_2bea04;
        case 0x2bea08u: goto label_2bea08;
        case 0x2bea0cu: goto label_2bea0c;
        case 0x2bea10u: goto label_2bea10;
        case 0x2bea14u: goto label_2bea14;
        case 0x2bea18u: goto label_2bea18;
        case 0x2bea1cu: goto label_2bea1c;
        case 0x2bea20u: goto label_2bea20;
        case 0x2bea24u: goto label_2bea24;
        case 0x2bea28u: goto label_2bea28;
        case 0x2bea2cu: goto label_2bea2c;
        case 0x2bea30u: goto label_2bea30;
        case 0x2bea34u: goto label_2bea34;
        case 0x2bea38u: goto label_2bea38;
        case 0x2bea3cu: goto label_2bea3c;
        case 0x2bea40u: goto label_2bea40;
        case 0x2bea44u: goto label_2bea44;
        case 0x2bea48u: goto label_2bea48;
        case 0x2bea4cu: goto label_2bea4c;
        case 0x2bea50u: goto label_2bea50;
        case 0x2bea54u: goto label_2bea54;
        case 0x2bea58u: goto label_2bea58;
        case 0x2bea5cu: goto label_2bea5c;
        case 0x2bea60u: goto label_2bea60;
        case 0x2bea64u: goto label_2bea64;
        case 0x2bea68u: goto label_2bea68;
        case 0x2bea6cu: goto label_2bea6c;
        case 0x2bea70u: goto label_2bea70;
        case 0x2bea74u: goto label_2bea74;
        case 0x2bea78u: goto label_2bea78;
        case 0x2bea7cu: goto label_2bea7c;
        case 0x2bea80u: goto label_2bea80;
        case 0x2bea84u: goto label_2bea84;
        case 0x2bea88u: goto label_2bea88;
        case 0x2bea8cu: goto label_2bea8c;
        case 0x2bea90u: goto label_2bea90;
        case 0x2bea94u: goto label_2bea94;
        case 0x2bea98u: goto label_2bea98;
        case 0x2bea9cu: goto label_2bea9c;
        case 0x2beaa0u: goto label_2beaa0;
        case 0x2beaa4u: goto label_2beaa4;
        case 0x2beaa8u: goto label_2beaa8;
        case 0x2beaacu: goto label_2beaac;
        case 0x2beab0u: goto label_2beab0;
        case 0x2beab4u: goto label_2beab4;
        case 0x2beab8u: goto label_2beab8;
        case 0x2beabcu: goto label_2beabc;
        case 0x2beac0u: goto label_2beac0;
        case 0x2beac4u: goto label_2beac4;
        case 0x2beac8u: goto label_2beac8;
        case 0x2beaccu: goto label_2beacc;
        case 0x2bead0u: goto label_2bead0;
        case 0x2bead4u: goto label_2bead4;
        case 0x2bead8u: goto label_2bead8;
        case 0x2beadcu: goto label_2beadc;
        case 0x2beae0u: goto label_2beae0;
        case 0x2beae4u: goto label_2beae4;
        case 0x2beae8u: goto label_2beae8;
        case 0x2beaecu: goto label_2beaec;
        case 0x2beaf0u: goto label_2beaf0;
        case 0x2beaf4u: goto label_2beaf4;
        case 0x2beaf8u: goto label_2beaf8;
        case 0x2beafcu: goto label_2beafc;
        case 0x2beb00u: goto label_2beb00;
        case 0x2beb04u: goto label_2beb04;
        case 0x2beb08u: goto label_2beb08;
        case 0x2beb0cu: goto label_2beb0c;
        case 0x2beb10u: goto label_2beb10;
        case 0x2beb14u: goto label_2beb14;
        case 0x2beb18u: goto label_2beb18;
        case 0x2beb1cu: goto label_2beb1c;
        case 0x2beb20u: goto label_2beb20;
        case 0x2beb24u: goto label_2beb24;
        case 0x2beb28u: goto label_2beb28;
        case 0x2beb2cu: goto label_2beb2c;
        case 0x2beb30u: goto label_2beb30;
        case 0x2beb34u: goto label_2beb34;
        case 0x2beb38u: goto label_2beb38;
        case 0x2beb3cu: goto label_2beb3c;
        case 0x2beb40u: goto label_2beb40;
        case 0x2beb44u: goto label_2beb44;
        case 0x2beb48u: goto label_2beb48;
        case 0x2beb4cu: goto label_2beb4c;
        case 0x2beb50u: goto label_2beb50;
        case 0x2beb54u: goto label_2beb54;
        case 0x2beb58u: goto label_2beb58;
        case 0x2beb5cu: goto label_2beb5c;
        case 0x2beb60u: goto label_2beb60;
        case 0x2beb64u: goto label_2beb64;
        case 0x2beb68u: goto label_2beb68;
        case 0x2beb6cu: goto label_2beb6c;
        case 0x2beb70u: goto label_2beb70;
        case 0x2beb74u: goto label_2beb74;
        case 0x2beb78u: goto label_2beb78;
        case 0x2beb7cu: goto label_2beb7c;
        case 0x2beb80u: goto label_2beb80;
        case 0x2beb84u: goto label_2beb84;
        case 0x2beb88u: goto label_2beb88;
        case 0x2beb8cu: goto label_2beb8c;
        case 0x2beb90u: goto label_2beb90;
        case 0x2beb94u: goto label_2beb94;
        case 0x2beb98u: goto label_2beb98;
        case 0x2beb9cu: goto label_2beb9c;
        case 0x2beba0u: goto label_2beba0;
        case 0x2beba4u: goto label_2beba4;
        case 0x2beba8u: goto label_2beba8;
        case 0x2bebacu: goto label_2bebac;
        case 0x2bebb0u: goto label_2bebb0;
        case 0x2bebb4u: goto label_2bebb4;
        case 0x2bebb8u: goto label_2bebb8;
        case 0x2bebbcu: goto label_2bebbc;
        case 0x2bebc0u: goto label_2bebc0;
        case 0x2bebc4u: goto label_2bebc4;
        case 0x2bebc8u: goto label_2bebc8;
        case 0x2bebccu: goto label_2bebcc;
        case 0x2bebd0u: goto label_2bebd0;
        case 0x2bebd4u: goto label_2bebd4;
        case 0x2bebd8u: goto label_2bebd8;
        case 0x2bebdcu: goto label_2bebdc;
        case 0x2bebe0u: goto label_2bebe0;
        case 0x2bebe4u: goto label_2bebe4;
        case 0x2bebe8u: goto label_2bebe8;
        case 0x2bebecu: goto label_2bebec;
        case 0x2bebf0u: goto label_2bebf0;
        case 0x2bebf4u: goto label_2bebf4;
        case 0x2bebf8u: goto label_2bebf8;
        case 0x2bebfcu: goto label_2bebfc;
        case 0x2bec00u: goto label_2bec00;
        case 0x2bec04u: goto label_2bec04;
        case 0x2bec08u: goto label_2bec08;
        case 0x2bec0cu: goto label_2bec0c;
        case 0x2bec10u: goto label_2bec10;
        case 0x2bec14u: goto label_2bec14;
        case 0x2bec18u: goto label_2bec18;
        case 0x2bec1cu: goto label_2bec1c;
        case 0x2bec20u: goto label_2bec20;
        case 0x2bec24u: goto label_2bec24;
        case 0x2bec28u: goto label_2bec28;
        case 0x2bec2cu: goto label_2bec2c;
        case 0x2bec30u: goto label_2bec30;
        case 0x2bec34u: goto label_2bec34;
        case 0x2bec38u: goto label_2bec38;
        case 0x2bec3cu: goto label_2bec3c;
        case 0x2bec40u: goto label_2bec40;
        case 0x2bec44u: goto label_2bec44;
        case 0x2bec48u: goto label_2bec48;
        case 0x2bec4cu: goto label_2bec4c;
        case 0x2bec50u: goto label_2bec50;
        case 0x2bec54u: goto label_2bec54;
        case 0x2bec58u: goto label_2bec58;
        case 0x2bec5cu: goto label_2bec5c;
        case 0x2bec60u: goto label_2bec60;
        case 0x2bec64u: goto label_2bec64;
        case 0x2bec68u: goto label_2bec68;
        case 0x2bec6cu: goto label_2bec6c;
        case 0x2bec70u: goto label_2bec70;
        case 0x2bec74u: goto label_2bec74;
        case 0x2bec78u: goto label_2bec78;
        case 0x2bec7cu: goto label_2bec7c;
        case 0x2bec80u: goto label_2bec80;
        case 0x2bec84u: goto label_2bec84;
        case 0x2bec88u: goto label_2bec88;
        case 0x2bec8cu: goto label_2bec8c;
        case 0x2bec90u: goto label_2bec90;
        case 0x2bec94u: goto label_2bec94;
        case 0x2bec98u: goto label_2bec98;
        case 0x2bec9cu: goto label_2bec9c;
        case 0x2beca0u: goto label_2beca0;
        case 0x2beca4u: goto label_2beca4;
        case 0x2beca8u: goto label_2beca8;
        case 0x2becacu: goto label_2becac;
        case 0x2becb0u: goto label_2becb0;
        case 0x2becb4u: goto label_2becb4;
        case 0x2becb8u: goto label_2becb8;
        case 0x2becbcu: goto label_2becbc;
        case 0x2becc0u: goto label_2becc0;
        case 0x2becc4u: goto label_2becc4;
        case 0x2becc8u: goto label_2becc8;
        case 0x2becccu: goto label_2beccc;
        case 0x2becd0u: goto label_2becd0;
        case 0x2becd4u: goto label_2becd4;
        case 0x2becd8u: goto label_2becd8;
        case 0x2becdcu: goto label_2becdc;
        case 0x2bece0u: goto label_2bece0;
        case 0x2bece4u: goto label_2bece4;
        case 0x2bece8u: goto label_2bece8;
        case 0x2bececu: goto label_2becec;
        case 0x2becf0u: goto label_2becf0;
        case 0x2becf4u: goto label_2becf4;
        case 0x2becf8u: goto label_2becf8;
        case 0x2becfcu: goto label_2becfc;
        case 0x2bed00u: goto label_2bed00;
        case 0x2bed04u: goto label_2bed04;
        case 0x2bed08u: goto label_2bed08;
        case 0x2bed0cu: goto label_2bed0c;
        case 0x2bed10u: goto label_2bed10;
        case 0x2bed14u: goto label_2bed14;
        case 0x2bed18u: goto label_2bed18;
        case 0x2bed1cu: goto label_2bed1c;
        case 0x2bed20u: goto label_2bed20;
        case 0x2bed24u: goto label_2bed24;
        case 0x2bed28u: goto label_2bed28;
        case 0x2bed2cu: goto label_2bed2c;
        case 0x2bed30u: goto label_2bed30;
        case 0x2bed34u: goto label_2bed34;
        case 0x2bed38u: goto label_2bed38;
        case 0x2bed3cu: goto label_2bed3c;
        case 0x2bed40u: goto label_2bed40;
        case 0x2bed44u: goto label_2bed44;
        case 0x2bed48u: goto label_2bed48;
        case 0x2bed4cu: goto label_2bed4c;
        case 0x2bed50u: goto label_2bed50;
        case 0x2bed54u: goto label_2bed54;
        case 0x2bed58u: goto label_2bed58;
        case 0x2bed5cu: goto label_2bed5c;
        case 0x2bed60u: goto label_2bed60;
        case 0x2bed64u: goto label_2bed64;
        case 0x2bed68u: goto label_2bed68;
        case 0x2bed6cu: goto label_2bed6c;
        case 0x2bed70u: goto label_2bed70;
        case 0x2bed74u: goto label_2bed74;
        case 0x2bed78u: goto label_2bed78;
        case 0x2bed7cu: goto label_2bed7c;
        case 0x2bed80u: goto label_2bed80;
        case 0x2bed84u: goto label_2bed84;
        case 0x2bed88u: goto label_2bed88;
        case 0x2bed8cu: goto label_2bed8c;
        case 0x2bed90u: goto label_2bed90;
        case 0x2bed94u: goto label_2bed94;
        case 0x2bed98u: goto label_2bed98;
        case 0x2bed9cu: goto label_2bed9c;
        case 0x2beda0u: goto label_2beda0;
        case 0x2beda4u: goto label_2beda4;
        case 0x2beda8u: goto label_2beda8;
        case 0x2bedacu: goto label_2bedac;
        case 0x2bedb0u: goto label_2bedb0;
        case 0x2bedb4u: goto label_2bedb4;
        case 0x2bedb8u: goto label_2bedb8;
        case 0x2bedbcu: goto label_2bedbc;
        case 0x2bedc0u: goto label_2bedc0;
        case 0x2bedc4u: goto label_2bedc4;
        case 0x2bedc8u: goto label_2bedc8;
        case 0x2bedccu: goto label_2bedcc;
        case 0x2bedd0u: goto label_2bedd0;
        case 0x2bedd4u: goto label_2bedd4;
        case 0x2bedd8u: goto label_2bedd8;
        case 0x2beddcu: goto label_2beddc;
        case 0x2bede0u: goto label_2bede0;
        case 0x2bede4u: goto label_2bede4;
        case 0x2bede8u: goto label_2bede8;
        case 0x2bedecu: goto label_2bedec;
        case 0x2bedf0u: goto label_2bedf0;
        case 0x2bedf4u: goto label_2bedf4;
        case 0x2bedf8u: goto label_2bedf8;
        case 0x2bedfcu: goto label_2bedfc;
        case 0x2bee00u: goto label_2bee00;
        case 0x2bee04u: goto label_2bee04;
        case 0x2bee08u: goto label_2bee08;
        case 0x2bee0cu: goto label_2bee0c;
        case 0x2bee10u: goto label_2bee10;
        case 0x2bee14u: goto label_2bee14;
        case 0x2bee18u: goto label_2bee18;
        case 0x2bee1cu: goto label_2bee1c;
        case 0x2bee20u: goto label_2bee20;
        case 0x2bee24u: goto label_2bee24;
        case 0x2bee28u: goto label_2bee28;
        case 0x2bee2cu: goto label_2bee2c;
        case 0x2bee30u: goto label_2bee30;
        case 0x2bee34u: goto label_2bee34;
        case 0x2bee38u: goto label_2bee38;
        case 0x2bee3cu: goto label_2bee3c;
        case 0x2bee40u: goto label_2bee40;
        case 0x2bee44u: goto label_2bee44;
        case 0x2bee48u: goto label_2bee48;
        case 0x2bee4cu: goto label_2bee4c;
        case 0x2bee50u: goto label_2bee50;
        case 0x2bee54u: goto label_2bee54;
        case 0x2bee58u: goto label_2bee58;
        case 0x2bee5cu: goto label_2bee5c;
        case 0x2bee60u: goto label_2bee60;
        case 0x2bee64u: goto label_2bee64;
        case 0x2bee68u: goto label_2bee68;
        case 0x2bee6cu: goto label_2bee6c;
        case 0x2bee70u: goto label_2bee70;
        case 0x2bee74u: goto label_2bee74;
        case 0x2bee78u: goto label_2bee78;
        case 0x2bee7cu: goto label_2bee7c;
        case 0x2bee80u: goto label_2bee80;
        case 0x2bee84u: goto label_2bee84;
        case 0x2bee88u: goto label_2bee88;
        case 0x2bee8cu: goto label_2bee8c;
        case 0x2bee90u: goto label_2bee90;
        case 0x2bee94u: goto label_2bee94;
        case 0x2bee98u: goto label_2bee98;
        case 0x2bee9cu: goto label_2bee9c;
        case 0x2beea0u: goto label_2beea0;
        case 0x2beea4u: goto label_2beea4;
        case 0x2beea8u: goto label_2beea8;
        case 0x2beeacu: goto label_2beeac;
        case 0x2beeb0u: goto label_2beeb0;
        case 0x2beeb4u: goto label_2beeb4;
        case 0x2beeb8u: goto label_2beeb8;
        case 0x2beebcu: goto label_2beebc;
        case 0x2beec0u: goto label_2beec0;
        case 0x2beec4u: goto label_2beec4;
        case 0x2beec8u: goto label_2beec8;
        case 0x2beeccu: goto label_2beecc;
        case 0x2beed0u: goto label_2beed0;
        case 0x2beed4u: goto label_2beed4;
        case 0x2beed8u: goto label_2beed8;
        case 0x2beedcu: goto label_2beedc;
        case 0x2beee0u: goto label_2beee0;
        case 0x2beee4u: goto label_2beee4;
        case 0x2beee8u: goto label_2beee8;
        case 0x2beeecu: goto label_2beeec;
        case 0x2beef0u: goto label_2beef0;
        case 0x2beef4u: goto label_2beef4;
        case 0x2beef8u: goto label_2beef8;
        case 0x2beefcu: goto label_2beefc;
        case 0x2bef00u: goto label_2bef00;
        case 0x2bef04u: goto label_2bef04;
        case 0x2bef08u: goto label_2bef08;
        case 0x2bef0cu: goto label_2bef0c;
        case 0x2bef10u: goto label_2bef10;
        case 0x2bef14u: goto label_2bef14;
        case 0x2bef18u: goto label_2bef18;
        case 0x2bef1cu: goto label_2bef1c;
        case 0x2bef20u: goto label_2bef20;
        case 0x2bef24u: goto label_2bef24;
        case 0x2bef28u: goto label_2bef28;
        case 0x2bef2cu: goto label_2bef2c;
        case 0x2bef30u: goto label_2bef30;
        case 0x2bef34u: goto label_2bef34;
        case 0x2bef38u: goto label_2bef38;
        case 0x2bef3cu: goto label_2bef3c;
        case 0x2bef40u: goto label_2bef40;
        case 0x2bef44u: goto label_2bef44;
        case 0x2bef48u: goto label_2bef48;
        case 0x2bef4cu: goto label_2bef4c;
        case 0x2bef50u: goto label_2bef50;
        case 0x2bef54u: goto label_2bef54;
        case 0x2bef58u: goto label_2bef58;
        case 0x2bef5cu: goto label_2bef5c;
        case 0x2bef60u: goto label_2bef60;
        case 0x2bef64u: goto label_2bef64;
        case 0x2bef68u: goto label_2bef68;
        case 0x2bef6cu: goto label_2bef6c;
        case 0x2bef70u: goto label_2bef70;
        case 0x2bef74u: goto label_2bef74;
        case 0x2bef78u: goto label_2bef78;
        case 0x2bef7cu: goto label_2bef7c;
        case 0x2bef80u: goto label_2bef80;
        case 0x2bef84u: goto label_2bef84;
        case 0x2bef88u: goto label_2bef88;
        case 0x2bef8cu: goto label_2bef8c;
        case 0x2bef90u: goto label_2bef90;
        case 0x2bef94u: goto label_2bef94;
        case 0x2bef98u: goto label_2bef98;
        case 0x2bef9cu: goto label_2bef9c;
        case 0x2befa0u: goto label_2befa0;
        case 0x2befa4u: goto label_2befa4;
        case 0x2befa8u: goto label_2befa8;
        case 0x2befacu: goto label_2befac;
        case 0x2befb0u: goto label_2befb0;
        case 0x2befb4u: goto label_2befb4;
        case 0x2befb8u: goto label_2befb8;
        case 0x2befbcu: goto label_2befbc;
        case 0x2befc0u: goto label_2befc0;
        case 0x2befc4u: goto label_2befc4;
        case 0x2befc8u: goto label_2befc8;
        case 0x2befccu: goto label_2befcc;
        case 0x2befd0u: goto label_2befd0;
        case 0x2befd4u: goto label_2befd4;
        case 0x2befd8u: goto label_2befd8;
        case 0x2befdcu: goto label_2befdc;
        case 0x2befe0u: goto label_2befe0;
        case 0x2befe4u: goto label_2befe4;
        case 0x2befe8u: goto label_2befe8;
        case 0x2befecu: goto label_2befec;
        case 0x2beff0u: goto label_2beff0;
        case 0x2beff4u: goto label_2beff4;
        case 0x2beff8u: goto label_2beff8;
        case 0x2beffcu: goto label_2beffc;
        case 0x2bf000u: goto label_2bf000;
        case 0x2bf004u: goto label_2bf004;
        case 0x2bf008u: goto label_2bf008;
        case 0x2bf00cu: goto label_2bf00c;
        case 0x2bf010u: goto label_2bf010;
        case 0x2bf014u: goto label_2bf014;
        case 0x2bf018u: goto label_2bf018;
        case 0x2bf01cu: goto label_2bf01c;
        case 0x2bf020u: goto label_2bf020;
        case 0x2bf024u: goto label_2bf024;
        case 0x2bf028u: goto label_2bf028;
        case 0x2bf02cu: goto label_2bf02c;
        case 0x2bf030u: goto label_2bf030;
        case 0x2bf034u: goto label_2bf034;
        case 0x2bf038u: goto label_2bf038;
        case 0x2bf03cu: goto label_2bf03c;
        case 0x2bf040u: goto label_2bf040;
        case 0x2bf044u: goto label_2bf044;
        case 0x2bf048u: goto label_2bf048;
        case 0x2bf04cu: goto label_2bf04c;
        case 0x2bf050u: goto label_2bf050;
        case 0x2bf054u: goto label_2bf054;
        case 0x2bf058u: goto label_2bf058;
        case 0x2bf05cu: goto label_2bf05c;
        case 0x2bf060u: goto label_2bf060;
        case 0x2bf064u: goto label_2bf064;
        case 0x2bf068u: goto label_2bf068;
        case 0x2bf06cu: goto label_2bf06c;
        case 0x2bf070u: goto label_2bf070;
        case 0x2bf074u: goto label_2bf074;
        case 0x2bf078u: goto label_2bf078;
        case 0x2bf07cu: goto label_2bf07c;
        case 0x2bf080u: goto label_2bf080;
        case 0x2bf084u: goto label_2bf084;
        case 0x2bf088u: goto label_2bf088;
        case 0x2bf08cu: goto label_2bf08c;
        case 0x2bf090u: goto label_2bf090;
        case 0x2bf094u: goto label_2bf094;
        case 0x2bf098u: goto label_2bf098;
        case 0x2bf09cu: goto label_2bf09c;
        case 0x2bf0a0u: goto label_2bf0a0;
        case 0x2bf0a4u: goto label_2bf0a4;
        case 0x2bf0a8u: goto label_2bf0a8;
        case 0x2bf0acu: goto label_2bf0ac;
        case 0x2bf0b0u: goto label_2bf0b0;
        case 0x2bf0b4u: goto label_2bf0b4;
        case 0x2bf0b8u: goto label_2bf0b8;
        case 0x2bf0bcu: goto label_2bf0bc;
        case 0x2bf0c0u: goto label_2bf0c0;
        case 0x2bf0c4u: goto label_2bf0c4;
        case 0x2bf0c8u: goto label_2bf0c8;
        case 0x2bf0ccu: goto label_2bf0cc;
        case 0x2bf0d0u: goto label_2bf0d0;
        case 0x2bf0d4u: goto label_2bf0d4;
        case 0x2bf0d8u: goto label_2bf0d8;
        case 0x2bf0dcu: goto label_2bf0dc;
        case 0x2bf0e0u: goto label_2bf0e0;
        case 0x2bf0e4u: goto label_2bf0e4;
        case 0x2bf0e8u: goto label_2bf0e8;
        case 0x2bf0ecu: goto label_2bf0ec;
        case 0x2bf0f0u: goto label_2bf0f0;
        case 0x2bf0f4u: goto label_2bf0f4;
        case 0x2bf0f8u: goto label_2bf0f8;
        case 0x2bf0fcu: goto label_2bf0fc;
        case 0x2bf100u: goto label_2bf100;
        case 0x2bf104u: goto label_2bf104;
        case 0x2bf108u: goto label_2bf108;
        case 0x2bf10cu: goto label_2bf10c;
        case 0x2bf110u: goto label_2bf110;
        case 0x2bf114u: goto label_2bf114;
        case 0x2bf118u: goto label_2bf118;
        case 0x2bf11cu: goto label_2bf11c;
        case 0x2bf120u: goto label_2bf120;
        case 0x2bf124u: goto label_2bf124;
        case 0x2bf128u: goto label_2bf128;
        case 0x2bf12cu: goto label_2bf12c;
        case 0x2bf130u: goto label_2bf130;
        case 0x2bf134u: goto label_2bf134;
        case 0x2bf138u: goto label_2bf138;
        case 0x2bf13cu: goto label_2bf13c;
        case 0x2bf140u: goto label_2bf140;
        case 0x2bf144u: goto label_2bf144;
        case 0x2bf148u: goto label_2bf148;
        case 0x2bf14cu: goto label_2bf14c;
        case 0x2bf150u: goto label_2bf150;
        case 0x2bf154u: goto label_2bf154;
        case 0x2bf158u: goto label_2bf158;
        case 0x2bf15cu: goto label_2bf15c;
        case 0x2bf160u: goto label_2bf160;
        case 0x2bf164u: goto label_2bf164;
        case 0x2bf168u: goto label_2bf168;
        case 0x2bf16cu: goto label_2bf16c;
        case 0x2bf170u: goto label_2bf170;
        case 0x2bf174u: goto label_2bf174;
        case 0x2bf178u: goto label_2bf178;
        case 0x2bf17cu: goto label_2bf17c;
        case 0x2bf180u: goto label_2bf180;
        case 0x2bf184u: goto label_2bf184;
        case 0x2bf188u: goto label_2bf188;
        case 0x2bf18cu: goto label_2bf18c;
        case 0x2bf190u: goto label_2bf190;
        case 0x2bf194u: goto label_2bf194;
        case 0x2bf198u: goto label_2bf198;
        case 0x2bf19cu: goto label_2bf19c;
        case 0x2bf1a0u: goto label_2bf1a0;
        case 0x2bf1a4u: goto label_2bf1a4;
        case 0x2bf1a8u: goto label_2bf1a8;
        case 0x2bf1acu: goto label_2bf1ac;
        case 0x2bf1b0u: goto label_2bf1b0;
        case 0x2bf1b4u: goto label_2bf1b4;
        case 0x2bf1b8u: goto label_2bf1b8;
        case 0x2bf1bcu: goto label_2bf1bc;
        case 0x2bf1c0u: goto label_2bf1c0;
        case 0x2bf1c4u: goto label_2bf1c4;
        case 0x2bf1c8u: goto label_2bf1c8;
        case 0x2bf1ccu: goto label_2bf1cc;
        case 0x2bf1d0u: goto label_2bf1d0;
        case 0x2bf1d4u: goto label_2bf1d4;
        case 0x2bf1d8u: goto label_2bf1d8;
        case 0x2bf1dcu: goto label_2bf1dc;
        case 0x2bf1e0u: goto label_2bf1e0;
        case 0x2bf1e4u: goto label_2bf1e4;
        case 0x2bf1e8u: goto label_2bf1e8;
        case 0x2bf1ecu: goto label_2bf1ec;
        case 0x2bf1f0u: goto label_2bf1f0;
        case 0x2bf1f4u: goto label_2bf1f4;
        case 0x2bf1f8u: goto label_2bf1f8;
        case 0x2bf1fcu: goto label_2bf1fc;
        case 0x2bf200u: goto label_2bf200;
        case 0x2bf204u: goto label_2bf204;
        case 0x2bf208u: goto label_2bf208;
        case 0x2bf20cu: goto label_2bf20c;
        case 0x2bf210u: goto label_2bf210;
        case 0x2bf214u: goto label_2bf214;
        case 0x2bf218u: goto label_2bf218;
        case 0x2bf21cu: goto label_2bf21c;
        case 0x2bf220u: goto label_2bf220;
        case 0x2bf224u: goto label_2bf224;
        case 0x2bf228u: goto label_2bf228;
        case 0x2bf22cu: goto label_2bf22c;
        case 0x2bf230u: goto label_2bf230;
        case 0x2bf234u: goto label_2bf234;
        case 0x2bf238u: goto label_2bf238;
        case 0x2bf23cu: goto label_2bf23c;
        case 0x2bf240u: goto label_2bf240;
        case 0x2bf244u: goto label_2bf244;
        case 0x2bf248u: goto label_2bf248;
        case 0x2bf24cu: goto label_2bf24c;
        case 0x2bf250u: goto label_2bf250;
        case 0x2bf254u: goto label_2bf254;
        case 0x2bf258u: goto label_2bf258;
        case 0x2bf25cu: goto label_2bf25c;
        case 0x2bf260u: goto label_2bf260;
        case 0x2bf264u: goto label_2bf264;
        case 0x2bf268u: goto label_2bf268;
        case 0x2bf26cu: goto label_2bf26c;
        case 0x2bf270u: goto label_2bf270;
        case 0x2bf274u: goto label_2bf274;
        case 0x2bf278u: goto label_2bf278;
        case 0x2bf27cu: goto label_2bf27c;
        case 0x2bf280u: goto label_2bf280;
        case 0x2bf284u: goto label_2bf284;
        case 0x2bf288u: goto label_2bf288;
        case 0x2bf28cu: goto label_2bf28c;
        case 0x2bf290u: goto label_2bf290;
        case 0x2bf294u: goto label_2bf294;
        case 0x2bf298u: goto label_2bf298;
        case 0x2bf29cu: goto label_2bf29c;
        case 0x2bf2a0u: goto label_2bf2a0;
        case 0x2bf2a4u: goto label_2bf2a4;
        case 0x2bf2a8u: goto label_2bf2a8;
        case 0x2bf2acu: goto label_2bf2ac;
        case 0x2bf2b0u: goto label_2bf2b0;
        case 0x2bf2b4u: goto label_2bf2b4;
        case 0x2bf2b8u: goto label_2bf2b8;
        case 0x2bf2bcu: goto label_2bf2bc;
        case 0x2bf2c0u: goto label_2bf2c0;
        case 0x2bf2c4u: goto label_2bf2c4;
        case 0x2bf2c8u: goto label_2bf2c8;
        case 0x2bf2ccu: goto label_2bf2cc;
        case 0x2bf2d0u: goto label_2bf2d0;
        case 0x2bf2d4u: goto label_2bf2d4;
        case 0x2bf2d8u: goto label_2bf2d8;
        case 0x2bf2dcu: goto label_2bf2dc;
        case 0x2bf2e0u: goto label_2bf2e0;
        case 0x2bf2e4u: goto label_2bf2e4;
        case 0x2bf2e8u: goto label_2bf2e8;
        case 0x2bf2ecu: goto label_2bf2ec;
        case 0x2bf2f0u: goto label_2bf2f0;
        case 0x2bf2f4u: goto label_2bf2f4;
        case 0x2bf2f8u: goto label_2bf2f8;
        case 0x2bf2fcu: goto label_2bf2fc;
        case 0x2bf300u: goto label_2bf300;
        case 0x2bf304u: goto label_2bf304;
        case 0x2bf308u: goto label_2bf308;
        case 0x2bf30cu: goto label_2bf30c;
        case 0x2bf310u: goto label_2bf310;
        case 0x2bf314u: goto label_2bf314;
        case 0x2bf318u: goto label_2bf318;
        case 0x2bf31cu: goto label_2bf31c;
        case 0x2bf320u: goto label_2bf320;
        case 0x2bf324u: goto label_2bf324;
        case 0x2bf328u: goto label_2bf328;
        case 0x2bf32cu: goto label_2bf32c;
        case 0x2bf330u: goto label_2bf330;
        case 0x2bf334u: goto label_2bf334;
        case 0x2bf338u: goto label_2bf338;
        case 0x2bf33cu: goto label_2bf33c;
        case 0x2bf340u: goto label_2bf340;
        case 0x2bf344u: goto label_2bf344;
        case 0x2bf348u: goto label_2bf348;
        case 0x2bf34cu: goto label_2bf34c;
        case 0x2bf350u: goto label_2bf350;
        case 0x2bf354u: goto label_2bf354;
        case 0x2bf358u: goto label_2bf358;
        case 0x2bf35cu: goto label_2bf35c;
        case 0x2bf360u: goto label_2bf360;
        case 0x2bf364u: goto label_2bf364;
        case 0x2bf368u: goto label_2bf368;
        case 0x2bf36cu: goto label_2bf36c;
        case 0x2bf370u: goto label_2bf370;
        case 0x2bf374u: goto label_2bf374;
        case 0x2bf378u: goto label_2bf378;
        case 0x2bf37cu: goto label_2bf37c;
        case 0x2bf380u: goto label_2bf380;
        case 0x2bf384u: goto label_2bf384;
        case 0x2bf388u: goto label_2bf388;
        case 0x2bf38cu: goto label_2bf38c;
        case 0x2bf390u: goto label_2bf390;
        case 0x2bf394u: goto label_2bf394;
        case 0x2bf398u: goto label_2bf398;
        case 0x2bf39cu: goto label_2bf39c;
        case 0x2bf3a0u: goto label_2bf3a0;
        case 0x2bf3a4u: goto label_2bf3a4;
        case 0x2bf3a8u: goto label_2bf3a8;
        case 0x2bf3acu: goto label_2bf3ac;
        case 0x2bf3b0u: goto label_2bf3b0;
        case 0x2bf3b4u: goto label_2bf3b4;
        case 0x2bf3b8u: goto label_2bf3b8;
        case 0x2bf3bcu: goto label_2bf3bc;
        case 0x2bf3c0u: goto label_2bf3c0;
        case 0x2bf3c4u: goto label_2bf3c4;
        case 0x2bf3c8u: goto label_2bf3c8;
        case 0x2bf3ccu: goto label_2bf3cc;
        case 0x2bf3d0u: goto label_2bf3d0;
        case 0x2bf3d4u: goto label_2bf3d4;
        case 0x2bf3d8u: goto label_2bf3d8;
        case 0x2bf3dcu: goto label_2bf3dc;
        case 0x2bf3e0u: goto label_2bf3e0;
        case 0x2bf3e4u: goto label_2bf3e4;
        case 0x2bf3e8u: goto label_2bf3e8;
        case 0x2bf3ecu: goto label_2bf3ec;
        case 0x2bf3f0u: goto label_2bf3f0;
        case 0x2bf3f4u: goto label_2bf3f4;
        case 0x2bf3f8u: goto label_2bf3f8;
        case 0x2bf3fcu: goto label_2bf3fc;
        case 0x2bf400u: goto label_2bf400;
        default: break;
    }

    ctx->pc = 0x2be5e0u;

label_2be5e0:
    // 0x2be5e0: 0x27bdfad0  addiu       $sp, $sp, -0x530
    ctx->pc = 0x2be5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965968));
label_2be5e4:
    // 0x2be5e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2be5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2be5e8:
    // 0x2be5e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2be5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2be5ec:
    // 0x2be5ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2be5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2be5f0:
    // 0x2be5f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2be5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2be5f4:
    // 0x2be5f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2be5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2be5f8:
    // 0x2be5f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2be5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2be5fc:
    // 0x2be5fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2be5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2be600:
    // 0x2be600: 0x8f839c40  lw          $v1, -0x63C0($gp)
    ctx->pc = 0x2be600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941760)));
label_2be604:
    // 0x2be604: 0x10600376  beqz        $v1, . + 4 + (0x376 << 2)
label_2be608:
    if (ctx->pc == 0x2BE608u) {
        ctx->pc = 0x2BE608u;
            // 0x2be608: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BE60Cu;
        goto label_2be60c;
    }
    ctx->pc = 0x2BE604u;
    {
        const bool branch_taken_0x2be604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE604u;
            // 0x2be608: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be604) {
            ctx->pc = 0x2BF3E0u;
            goto label_2bf3e0;
        }
    }
    ctx->pc = 0x2BE60Cu;
label_2be60c:
    // 0x2be60c: 0x8f839c38  lw          $v1, -0x63C8($gp)
    ctx->pc = 0x2be60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941752)));
label_2be610:
    // 0x2be610: 0x10600373  beqz        $v1, . + 4 + (0x373 << 2)
label_2be614:
    if (ctx->pc == 0x2BE614u) {
        ctx->pc = 0x2BE618u;
        goto label_2be618;
    }
    ctx->pc = 0x2BE610u;
    {
        const bool branch_taken_0x2be610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be610) {
            ctx->pc = 0x2BF3E0u;
            goto label_2bf3e0;
        }
    }
    ctx->pc = 0x2BE618u;
label_2be618:
    // 0x2be618: 0x8f839c3c  lw          $v1, -0x63C4($gp)
    ctx->pc = 0x2be618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941756)));
label_2be61c:
    // 0x2be61c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2be620:
    if (ctx->pc == 0x2BE620u) {
        ctx->pc = 0x2BE624u;
        goto label_2be624;
    }
    ctx->pc = 0x2BE61Cu;
    {
        const bool branch_taken_0x2be61c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be61c) {
            ctx->pc = 0x2BE62Cu;
            goto label_2be62c;
        }
    }
    ctx->pc = 0x2BE624u;
label_2be624:
    // 0x2be624: 0x1000036f  b           . + 4 + (0x36F << 2)
label_2be628:
    if (ctx->pc == 0x2BE628u) {
        ctx->pc = 0x2BE628u;
            // 0x2be628: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x2BE62Cu;
        goto label_2be62c;
    }
    ctx->pc = 0x2BE624u;
    {
        const bool branch_taken_0x2be624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE624u;
            // 0x2be628: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be624) {
            ctx->pc = 0x2BF3E4u;
            goto label_2bf3e4;
        }
    }
    ctx->pc = 0x2BE62Cu;
label_2be62c:
    // 0x2be62c: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x2be62cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2be630:
    // 0x2be630: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x2be630u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
label_2be634:
    // 0x2be634: 0x26b51ef0  addiu       $s5, $s5, 0x1EF0
    ctx->pc = 0x2be634u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 7920));
label_2be638:
    // 0x2be638: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2be638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be63c:
    // 0x2be63c: 0xc04ba14  jal         func_12E850
label_2be640:
    if (ctx->pc == 0x2BE640u) {
        ctx->pc = 0x2BE640u;
            // 0x2be640: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BE644u;
        goto label_2be644;
    }
    ctx->pc = 0x2BE63Cu;
    SET_GPR_U32(ctx, 31, 0x2BE644u);
    ctx->pc = 0x2BE640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE63Cu;
            // 0x2be640: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE644u; }
        if (ctx->pc != 0x2BE644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE644u; }
        if (ctx->pc != 0x2BE644u) { return; }
    }
    ctx->pc = 0x2BE644u;
label_2be644:
    // 0x2be644: 0xc04d0e8  jal         func_1343A0
label_2be648:
    if (ctx->pc == 0x2BE648u) {
        ctx->pc = 0x2BE648u;
            // 0x2be648: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2BE64Cu;
        goto label_2be64c;
    }
    ctx->pc = 0x2BE644u;
    SET_GPR_U32(ctx, 31, 0x2BE64Cu);
    ctx->pc = 0x2BE648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE644u;
            // 0x2be648: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE64Cu; }
        if (ctx->pc != 0x2BE64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE64Cu; }
        if (ctx->pc != 0x2BE64Cu) { return; }
    }
    ctx->pc = 0x2BE64Cu;
label_2be64c:
    // 0x2be64c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2be64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2be650:
    // 0x2be650: 0xc087ec4  jal         func_21FB10
label_2be654:
    if (ctx->pc == 0x2BE654u) {
        ctx->pc = 0x2BE654u;
            // 0x2be654: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BE658u;
        goto label_2be658;
    }
    ctx->pc = 0x2BE650u;
    SET_GPR_U32(ctx, 31, 0x2BE658u);
    ctx->pc = 0x2BE654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE650u;
            // 0x2be654: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE658u; }
        if (ctx->pc != 0x2BE658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE658u; }
        if (ctx->pc != 0x2BE658u) { return; }
    }
    ctx->pc = 0x2BE658u;
label_2be658:
    // 0x2be658: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x2be658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2be65c:
    // 0x2be65c: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x2be65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_2be660:
    // 0x2be660: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2be660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be664:
    // 0x2be664: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2be664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be668:
    // 0x2be668: 0xc04f8e4  jal         func_13E390
label_2be66c:
    if (ctx->pc == 0x2BE66Cu) {
        ctx->pc = 0x2BE66Cu;
            // 0x2be66c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BE670u;
        goto label_2be670;
    }
    ctx->pc = 0x2BE668u;
    SET_GPR_U32(ctx, 31, 0x2BE670u);
    ctx->pc = 0x2BE66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE668u;
            // 0x2be66c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE670u; }
        if (ctx->pc != 0x2BE670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE670u; }
        if (ctx->pc != 0x2BE670u) { return; }
    }
    ctx->pc = 0x2BE670u;
label_2be670:
    // 0x2be670: 0xc60c0180  lwc1        $f12, 0x180($s0)
    ctx->pc = 0x2be670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2be674:
    // 0x2be674: 0x8f859c40  lw          $a1, -0x63C0($gp)
    ctx->pc = 0x2be674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941760)));
label_2be678:
    // 0x2be678: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2be678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2be67c:
    // 0x2be67c: 0x27a60320  addiu       $a2, $sp, 0x320
    ctx->pc = 0x2be67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_2be680:
    // 0x2be680: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2be680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be684:
    // 0x2be684: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2be684u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be688:
    // 0x2be688: 0xc088f58  jal         func_223D60
label_2be68c:
    if (ctx->pc == 0x2BE68Cu) {
        ctx->pc = 0x2BE68Cu;
            // 0x2be68c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2BE690u;
        goto label_2be690;
    }
    ctx->pc = 0x2BE688u;
    SET_GPR_U32(ctx, 31, 0x2BE690u);
    ctx->pc = 0x2BE68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE688u;
            // 0x2be68c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x223D60u;
    if (runtime->hasFunction(0x223D60u)) {
        auto targetFn = runtime->lookupFunction(0x223D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE690u; }
        if (ctx->pc != 0x2BE690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuTilePattern__FP11mgCDrawPrimP10mgCTextureff9mgRect_i_iPUc_0x223d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE690u; }
        if (ctx->pc != 0x2BE690u) { return; }
    }
    ctx->pc = 0x2BE690u;
label_2be690:
    // 0x2be690: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2be690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2be694:
    // 0x2be694: 0xc04d128  jal         func_1344A0
label_2be698:
    if (ctx->pc == 0x2BE698u) {
        ctx->pc = 0x2BE698u;
            // 0x2be698: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2BE69Cu;
        goto label_2be69c;
    }
    ctx->pc = 0x2BE694u;
    SET_GPR_U32(ctx, 31, 0x2BE69Cu);
    ctx->pc = 0x2BE698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE694u;
            // 0x2be698: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE69Cu; }
        if (ctx->pc != 0x2BE69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE69Cu; }
        if (ctx->pc != 0x2BE69Cu) { return; }
    }
    ctx->pc = 0x2BE69Cu;
label_2be69c:
    // 0x2be69c: 0x8f859c3c  lw          $a1, -0x63C4($gp)
    ctx->pc = 0x2be69cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941756)));
label_2be6a0:
    // 0x2be6a0: 0xc04d368  jal         func_134DA0
label_2be6a4:
    if (ctx->pc == 0x2BE6A4u) {
        ctx->pc = 0x2BE6A4u;
            // 0x2be6a4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2BE6A8u;
        goto label_2be6a8;
    }
    ctx->pc = 0x2BE6A0u;
    SET_GPR_U32(ctx, 31, 0x2BE6A8u);
    ctx->pc = 0x2BE6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE6A0u;
            // 0x2be6a4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE6A8u; }
        if (ctx->pc != 0x2BE6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE6A8u; }
        if (ctx->pc != 0x2BE6A8u) { return; }
    }
    ctx->pc = 0x2BE6A8u;
label_2be6a8:
    // 0x2be6a8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2be6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2be6ac:
    // 0x2be6ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2be6acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be6b0:
    // 0x2be6b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2be6b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be6b4:
    // 0x2be6b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2be6b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be6b8:
    // 0x2be6b8: 0xc04d320  jal         func_134C80
label_2be6bc:
    if (ctx->pc == 0x2BE6BCu) {
        ctx->pc = 0x2BE6BCu;
            // 0x2be6bc: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x2BE6C0u;
        goto label_2be6c0;
    }
    ctx->pc = 0x2BE6B8u;
    SET_GPR_U32(ctx, 31, 0x2BE6C0u);
    ctx->pc = 0x2BE6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE6B8u;
            // 0x2be6bc: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE6C0u; }
        if (ctx->pc != 0x2BE6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE6C0u; }
        if (ctx->pc != 0x2BE6C0u) { return; }
    }
    ctx->pc = 0x2BE6C0u;
label_2be6c0:
    // 0x2be6c0: 0x27a40330  addiu       $a0, $sp, 0x330
    ctx->pc = 0x2be6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_2be6c4:
    // 0x2be6c4: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x2be6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_2be6c8:
    // 0x2be6c8: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2be6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2be6cc:
    // 0x2be6cc: 0x240701cc  addiu       $a3, $zero, 0x1CC
    ctx->pc = 0x2be6ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
label_2be6d0:
    // 0x2be6d0: 0xc04f8e4  jal         func_13E390
label_2be6d4:
    if (ctx->pc == 0x2BE6D4u) {
        ctx->pc = 0x2BE6D4u;
            // 0x2be6d4: 0x24080024  addiu       $t0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x2BE6D8u;
        goto label_2be6d8;
    }
    ctx->pc = 0x2BE6D0u;
    SET_GPR_U32(ctx, 31, 0x2BE6D8u);
    ctx->pc = 0x2BE6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE6D0u;
            // 0x2be6d4: 0x24080024  addiu       $t0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE6D8u; }
        if (ctx->pc != 0x2BE6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE6D8u; }
        if (ctx->pc != 0x2BE6D8u) { return; }
    }
    ctx->pc = 0x2BE6D8u;
label_2be6d8:
    // 0x2be6d8: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2be6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2be6dc:
    // 0x2be6dc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2be6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2be6e0:
    // 0x2be6e0: 0x27a50330  addiu       $a1, $sp, 0x330
    ctx->pc = 0x2be6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_2be6e4:
    // 0x2be6e4: 0x24c64fb0  addiu       $a2, $a2, 0x4FB0
    ctx->pc = 0x2be6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20400));
label_2be6e8:
    // 0x2be6e8: 0xc08a338  jal         func_228CE0
label_2be6ec:
    if (ctx->pc == 0x2BE6ECu) {
        ctx->pc = 0x2BE6ECu;
            // 0x2be6ec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BE6F0u;
        goto label_2be6f0;
    }
    ctx->pc = 0x2BE6E8u;
    SET_GPR_U32(ctx, 31, 0x2BE6F0u);
    ctx->pc = 0x2BE6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE6E8u;
            // 0x2be6ec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE6F0u; }
        if (ctx->pc != 0x2BE6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE6F0u; }
        if (ctx->pc != 0x2BE6F0u) { return; }
    }
    ctx->pc = 0x2BE6F0u;
label_2be6f0:
    // 0x2be6f0: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x2be6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_2be6f4:
    // 0x2be6f4: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x2be6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_2be6f8:
    // 0x2be6f8: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x2be6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2be6fc:
    // 0x2be6fc: 0x240701cc  addiu       $a3, $zero, 0x1CC
    ctx->pc = 0x2be6fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
label_2be700:
    // 0x2be700: 0xc04f8e4  jal         func_13E390
label_2be704:
    if (ctx->pc == 0x2BE704u) {
        ctx->pc = 0x2BE704u;
            // 0x2be704: 0x24080116  addiu       $t0, $zero, 0x116 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
        ctx->pc = 0x2BE708u;
        goto label_2be708;
    }
    ctx->pc = 0x2BE700u;
    SET_GPR_U32(ctx, 31, 0x2BE708u);
    ctx->pc = 0x2BE704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE700u;
            // 0x2be704: 0x24080116  addiu       $t0, $zero, 0x116 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE708u; }
        if (ctx->pc != 0x2BE708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE708u; }
        if (ctx->pc != 0x2BE708u) { return; }
    }
    ctx->pc = 0x2BE708u;
label_2be708:
    // 0x2be708: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2be708u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2be70c:
    // 0x2be70c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2be70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2be710:
    // 0x2be710: 0x27a50340  addiu       $a1, $sp, 0x340
    ctx->pc = 0x2be710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_2be714:
    // 0x2be714: 0x24c64fc8  addiu       $a2, $a2, 0x4FC8
    ctx->pc = 0x2be714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20424));
label_2be718:
    // 0x2be718: 0xc08a338  jal         func_228CE0
label_2be71c:
    if (ctx->pc == 0x2BE71Cu) {
        ctx->pc = 0x2BE71Cu;
            // 0x2be71c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BE720u;
        goto label_2be720;
    }
    ctx->pc = 0x2BE718u;
    SET_GPR_U32(ctx, 31, 0x2BE720u);
    ctx->pc = 0x2BE71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE718u;
            // 0x2be71c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE720u; }
        if (ctx->pc != 0x2BE720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE720u; }
        if (ctx->pc != 0x2BE720u) { return; }
    }
    ctx->pc = 0x2BE720u;
label_2be720:
    // 0x2be720: 0x27a40350  addiu       $a0, $sp, 0x350
    ctx->pc = 0x2be720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
label_2be724:
    // 0x2be724: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x2be724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_2be728:
    // 0x2be728: 0x2406016a  addiu       $a2, $zero, 0x16A
    ctx->pc = 0x2be728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 362));
label_2be72c:
    // 0x2be72c: 0x240701cc  addiu       $a3, $zero, 0x1CC
    ctx->pc = 0x2be72cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
label_2be730:
    // 0x2be730: 0xc04f8e4  jal         func_13E390
label_2be734:
    if (ctx->pc == 0x2BE734u) {
        ctx->pc = 0x2BE734u;
            // 0x2be734: 0x24080024  addiu       $t0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x2BE738u;
        goto label_2be738;
    }
    ctx->pc = 0x2BE730u;
    SET_GPR_U32(ctx, 31, 0x2BE738u);
    ctx->pc = 0x2BE734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE730u;
            // 0x2be734: 0x24080024  addiu       $t0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE738u; }
        if (ctx->pc != 0x2BE738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE738u; }
        if (ctx->pc != 0x2BE738u) { return; }
    }
    ctx->pc = 0x2BE738u;
label_2be738:
    // 0x2be738: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2be738u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2be73c:
    // 0x2be73c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2be73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2be740:
    // 0x2be740: 0x27a50350  addiu       $a1, $sp, 0x350
    ctx->pc = 0x2be740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
label_2be744:
    // 0x2be744: 0x24c64fe0  addiu       $a2, $a2, 0x4FE0
    ctx->pc = 0x2be744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20448));
label_2be748:
    // 0x2be748: 0xc08a338  jal         func_228CE0
label_2be74c:
    if (ctx->pc == 0x2BE74Cu) {
        ctx->pc = 0x2BE74Cu;
            // 0x2be74c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BE750u;
        goto label_2be750;
    }
    ctx->pc = 0x2BE748u;
    SET_GPR_U32(ctx, 31, 0x2BE750u);
    ctx->pc = 0x2BE74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE748u;
            // 0x2be74c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE750u; }
        if (ctx->pc != 0x2BE750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE750u; }
        if (ctx->pc != 0x2BE750u) { return; }
    }
    ctx->pc = 0x2BE750u;
label_2be750:
    // 0x2be750: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2be750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2be754:
    // 0x2be754: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2be754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2be758:
    // 0x2be758: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2be758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2be75c:
    // 0x2be75c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2be75cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2be760:
    // 0x2be760: 0xc04d320  jal         func_134C80
label_2be764:
    if (ctx->pc == 0x2BE764u) {
        ctx->pc = 0x2BE764u;
            // 0x2be764: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BE768u;
        goto label_2be768;
    }
    ctx->pc = 0x2BE760u;
    SET_GPR_U32(ctx, 31, 0x2BE768u);
    ctx->pc = 0x2BE764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE760u;
            // 0x2be764: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE768u; }
        if (ctx->pc != 0x2BE768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE768u; }
        if (ctx->pc != 0x2BE768u) { return; }
    }
    ctx->pc = 0x2BE768u;
label_2be768:
    // 0x2be768: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x2be768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
label_2be76c:
    // 0x2be76c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2be76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2be770:
    // 0x2be770: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x2be770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_2be774:
    // 0x2be774: 0x240701cc  addiu       $a3, $zero, 0x1CC
    ctx->pc = 0x2be774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
label_2be778:
    // 0x2be778: 0xc04f8e4  jal         func_13E390
label_2be77c:
    if (ctx->pc == 0x2BE77Cu) {
        ctx->pc = 0x2BE77Cu;
            // 0x2be77c: 0x24080024  addiu       $t0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x2BE780u;
        goto label_2be780;
    }
    ctx->pc = 0x2BE778u;
    SET_GPR_U32(ctx, 31, 0x2BE780u);
    ctx->pc = 0x2BE77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE778u;
            // 0x2be77c: 0x24080024  addiu       $t0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE780u; }
        if (ctx->pc != 0x2BE780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE780u; }
        if (ctx->pc != 0x2BE780u) { return; }
    }
    ctx->pc = 0x2BE780u;
label_2be780:
    // 0x2be780: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2be780u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2be784:
    // 0x2be784: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2be784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2be788:
    // 0x2be788: 0x27a50360  addiu       $a1, $sp, 0x360
    ctx->pc = 0x2be788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
label_2be78c:
    // 0x2be78c: 0x24c64fb0  addiu       $a2, $a2, 0x4FB0
    ctx->pc = 0x2be78cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20400));
label_2be790:
    // 0x2be790: 0xc08a338  jal         func_228CE0
label_2be794:
    if (ctx->pc == 0x2BE794u) {
        ctx->pc = 0x2BE794u;
            // 0x2be794: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BE798u;
        goto label_2be798;
    }
    ctx->pc = 0x2BE790u;
    SET_GPR_U32(ctx, 31, 0x2BE798u);
    ctx->pc = 0x2BE794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE790u;
            // 0x2be794: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE798u; }
        if (ctx->pc != 0x2BE798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE798u; }
        if (ctx->pc != 0x2BE798u) { return; }
    }
    ctx->pc = 0x2BE798u;
label_2be798:
    // 0x2be798: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x2be798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_2be79c:
    // 0x2be79c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2be79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2be7a0:
    // 0x2be7a0: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x2be7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2be7a4:
    // 0x2be7a4: 0x240701cc  addiu       $a3, $zero, 0x1CC
    ctx->pc = 0x2be7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
label_2be7a8:
    // 0x2be7a8: 0xc04f8e4  jal         func_13E390
label_2be7ac:
    if (ctx->pc == 0x2BE7ACu) {
        ctx->pc = 0x2BE7ACu;
            // 0x2be7ac: 0x24080116  addiu       $t0, $zero, 0x116 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
        ctx->pc = 0x2BE7B0u;
        goto label_2be7b0;
    }
    ctx->pc = 0x2BE7A8u;
    SET_GPR_U32(ctx, 31, 0x2BE7B0u);
    ctx->pc = 0x2BE7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE7A8u;
            // 0x2be7ac: 0x24080116  addiu       $t0, $zero, 0x116 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE7B0u; }
        if (ctx->pc != 0x2BE7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE7B0u; }
        if (ctx->pc != 0x2BE7B0u) { return; }
    }
    ctx->pc = 0x2BE7B0u;
label_2be7b0:
    // 0x2be7b0: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2be7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2be7b4:
    // 0x2be7b4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2be7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2be7b8:
    // 0x2be7b8: 0x27a50370  addiu       $a1, $sp, 0x370
    ctx->pc = 0x2be7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_2be7bc:
    // 0x2be7bc: 0x24c64fc8  addiu       $a2, $a2, 0x4FC8
    ctx->pc = 0x2be7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20424));
label_2be7c0:
    // 0x2be7c0: 0xc08a338  jal         func_228CE0
label_2be7c4:
    if (ctx->pc == 0x2BE7C4u) {
        ctx->pc = 0x2BE7C4u;
            // 0x2be7c4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BE7C8u;
        goto label_2be7c8;
    }
    ctx->pc = 0x2BE7C0u;
    SET_GPR_U32(ctx, 31, 0x2BE7C8u);
    ctx->pc = 0x2BE7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE7C0u;
            // 0x2be7c4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE7C8u; }
        if (ctx->pc != 0x2BE7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE7C8u; }
        if (ctx->pc != 0x2BE7C8u) { return; }
    }
    ctx->pc = 0x2BE7C8u;
label_2be7c8:
    // 0x2be7c8: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x2be7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_2be7cc:
    // 0x2be7cc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2be7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2be7d0:
    // 0x2be7d0: 0x24060166  addiu       $a2, $zero, 0x166
    ctx->pc = 0x2be7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
label_2be7d4:
    // 0x2be7d4: 0x240701cc  addiu       $a3, $zero, 0x1CC
    ctx->pc = 0x2be7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
label_2be7d8:
    // 0x2be7d8: 0xc04f8e4  jal         func_13E390
label_2be7dc:
    if (ctx->pc == 0x2BE7DCu) {
        ctx->pc = 0x2BE7DCu;
            // 0x2be7dc: 0x24080024  addiu       $t0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x2BE7E0u;
        goto label_2be7e0;
    }
    ctx->pc = 0x2BE7D8u;
    SET_GPR_U32(ctx, 31, 0x2BE7E0u);
    ctx->pc = 0x2BE7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE7D8u;
            // 0x2be7dc: 0x24080024  addiu       $t0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE7E0u; }
        if (ctx->pc != 0x2BE7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE7E0u; }
        if (ctx->pc != 0x2BE7E0u) { return; }
    }
    ctx->pc = 0x2BE7E0u;
label_2be7e0:
    // 0x2be7e0: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2be7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2be7e4:
    // 0x2be7e4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2be7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2be7e8:
    // 0x2be7e8: 0x27a50380  addiu       $a1, $sp, 0x380
    ctx->pc = 0x2be7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_2be7ec:
    // 0x2be7ec: 0x24c64fe0  addiu       $a2, $a2, 0x4FE0
    ctx->pc = 0x2be7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20448));
label_2be7f0:
    // 0x2be7f0: 0xc08a338  jal         func_228CE0
label_2be7f4:
    if (ctx->pc == 0x2BE7F4u) {
        ctx->pc = 0x2BE7F4u;
            // 0x2be7f4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BE7F8u;
        goto label_2be7f8;
    }
    ctx->pc = 0x2BE7F0u;
    SET_GPR_U32(ctx, 31, 0x2BE7F8u);
    ctx->pc = 0x2BE7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE7F0u;
            // 0x2be7f4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE7F8u; }
        if (ctx->pc != 0x2BE7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE7F8u; }
        if (ctx->pc != 0x2BE7F8u) { return; }
    }
    ctx->pc = 0x2BE7F8u;
label_2be7f8:
    // 0x2be7f8: 0xc04d1a4  jal         func_134690
label_2be7fc:
    if (ctx->pc == 0x2BE7FCu) {
        ctx->pc = 0x2BE7FCu;
            // 0x2be7fc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2BE800u;
        goto label_2be800;
    }
    ctx->pc = 0x2BE7F8u;
    SET_GPR_U32(ctx, 31, 0x2BE800u);
    ctx->pc = 0x2BE7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE7F8u;
            // 0x2be7fc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE800u; }
        if (ctx->pc != 0x2BE800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE800u; }
        if (ctx->pc != 0x2BE800u) { return; }
    }
    ctx->pc = 0x2BE800u;
label_2be800:
    // 0x2be800: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x2be800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
label_2be804:
    // 0x2be804: 0x3c024250  lui         $v0, 0x4250
    ctx->pc = 0x2be804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16976 << 16));
label_2be808:
    // 0x2be808: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x2be808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2be80c:
    // 0x2be80c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2be80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2be810:
    // 0x2be810: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2be810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2be814:
    // 0x2be814: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2be814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2be818:
    // 0x2be818: 0x3c034294  lui         $v1, 0x4294
    ctx->pc = 0x2be818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17044 << 16));
label_2be81c:
    // 0x2be81c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2be81cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2be820:
    // 0x2be820: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x2be820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_2be824:
    // 0x2be824: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2be824u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2be828:
    // 0x2be828: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2be828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2be82c:
    // 0x2be82c: 0xc0887b8  jal         func_221EE0
label_2be830:
    if (ctx->pc == 0x2BE830u) {
        ctx->pc = 0x2BE830u;
            // 0x2be830: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BE834u;
        goto label_2be834;
    }
    ctx->pc = 0x2BE82Cu;
    SET_GPR_U32(ctx, 31, 0x2BE834u);
    ctx->pc = 0x2BE830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE82Cu;
            // 0x2be830: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE834u; }
        if (ctx->pc != 0x2BE834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE834u; }
        if (ctx->pc != 0x2BE834u) { return; }
    }
    ctx->pc = 0x2BE834u;
label_2be834:
    // 0x2be834: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2be834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2be838:
    // 0x2be838: 0xc04d128  jal         func_1344A0
label_2be83c:
    if (ctx->pc == 0x2BE83Cu) {
        ctx->pc = 0x2BE83Cu;
            // 0x2be83c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2BE840u;
        goto label_2be840;
    }
    ctx->pc = 0x2BE838u;
    SET_GPR_U32(ctx, 31, 0x2BE840u);
    ctx->pc = 0x2BE83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE838u;
            // 0x2be83c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE840u; }
        if (ctx->pc != 0x2BE840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE840u; }
        if (ctx->pc != 0x2BE840u) { return; }
    }
    ctx->pc = 0x2BE840u;
label_2be840:
    // 0x2be840: 0x8f859c3c  lw          $a1, -0x63C4($gp)
    ctx->pc = 0x2be840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941756)));
label_2be844:
    // 0x2be844: 0xc04d368  jal         func_134DA0
label_2be848:
    if (ctx->pc == 0x2BE848u) {
        ctx->pc = 0x2BE848u;
            // 0x2be848: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2BE84Cu;
        goto label_2be84c;
    }
    ctx->pc = 0x2BE844u;
    SET_GPR_U32(ctx, 31, 0x2BE84Cu);
    ctx->pc = 0x2BE848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE844u;
            // 0x2be848: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE84Cu; }
        if (ctx->pc != 0x2BE84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE84Cu; }
        if (ctx->pc != 0x2BE84Cu) { return; }
    }
    ctx->pc = 0x2BE84Cu;
label_2be84c:
    // 0x2be84c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2be84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2be850:
    // 0x2be850: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2be850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2be854:
    // 0x2be854: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2be854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2be858:
    // 0x2be858: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2be858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2be85c:
    // 0x2be85c: 0xc04d320  jal         func_134C80
label_2be860:
    if (ctx->pc == 0x2BE860u) {
        ctx->pc = 0x2BE860u;
            // 0x2be860: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BE864u;
        goto label_2be864;
    }
    ctx->pc = 0x2BE85Cu;
    SET_GPR_U32(ctx, 31, 0x2BE864u);
    ctx->pc = 0x2BE860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE85Cu;
            // 0x2be860: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE864u; }
        if (ctx->pc != 0x2BE864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE864u; }
        if (ctx->pc != 0x2BE864u) { return; }
    }
    ctx->pc = 0x2BE864u;
label_2be864:
    // 0x2be864: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2be864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2be868:
    // 0x2be868: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x2be868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_2be86c:
    // 0x2be86c: 0x84235024  lh          $v1, 0x5024($at)
    ctx->pc = 0x2be86cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20516)));
label_2be870:
    // 0x2be870: 0x24070052  addiu       $a3, $zero, 0x52
    ctx->pc = 0x2be870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_2be874:
    // 0x2be874: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x2be874u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2be878:
    // 0x2be878: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2be878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2be87c:
    // 0x2be87c: 0x24650016  addiu       $a1, $v1, 0x16
    ctx->pc = 0x2be87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
label_2be880:
    // 0x2be880: 0x84225026  lh          $v0, 0x5026($at)
    ctx->pc = 0x2be880u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20518)));
label_2be884:
    // 0x2be884: 0xc04f8e4  jal         func_13E390
label_2be888:
    if (ctx->pc == 0x2BE888u) {
        ctx->pc = 0x2BE888u;
            // 0x2be888: 0x2446002c  addiu       $a2, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->pc = 0x2BE88Cu;
        goto label_2be88c;
    }
    ctx->pc = 0x2BE884u;
    SET_GPR_U32(ctx, 31, 0x2BE88Cu);
    ctx->pc = 0x2BE888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE884u;
            // 0x2be888: 0x2446002c  addiu       $a2, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE88Cu; }
        if (ctx->pc != 0x2BE88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE88Cu; }
        if (ctx->pc != 0x2BE88Cu) { return; }
    }
    ctx->pc = 0x2BE88Cu;
label_2be88c:
    // 0x2be88c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2be88cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2be890:
    // 0x2be890: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2be890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2be894:
    // 0x2be894: 0x27a50390  addiu       $a1, $sp, 0x390
    ctx->pc = 0x2be894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_2be898:
    // 0x2be898: 0x24c65000  addiu       $a2, $a2, 0x5000
    ctx->pc = 0x2be898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20480));
label_2be89c:
    // 0x2be89c: 0xc08a338  jal         func_228CE0
label_2be8a0:
    if (ctx->pc == 0x2BE8A0u) {
        ctx->pc = 0x2BE8A0u;
            // 0x2be8a0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BE8A4u;
        goto label_2be8a4;
    }
    ctx->pc = 0x2BE89Cu;
    SET_GPR_U32(ctx, 31, 0x2BE8A4u);
    ctx->pc = 0x2BE8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE89Cu;
            // 0x2be8a0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE8A4u; }
        if (ctx->pc != 0x2BE8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE8A4u; }
        if (ctx->pc != 0x2BE8A4u) { return; }
    }
    ctx->pc = 0x2BE8A4u;
label_2be8a4:
    // 0x2be8a4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2be8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2be8a8:
    // 0x2be8a8: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x2be8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_2be8ac:
    // 0x2be8ac: 0x84235024  lh          $v1, 0x5024($at)
    ctx->pc = 0x2be8acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20516)));
label_2be8b0:
    // 0x2be8b0: 0x24070052  addiu       $a3, $zero, 0x52
    ctx->pc = 0x2be8b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_2be8b4:
    // 0x2be8b4: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x2be8b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2be8b8:
    // 0x2be8b8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2be8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2be8bc:
    // 0x2be8bc: 0x2465006e  addiu       $a1, $v1, 0x6E
    ctx->pc = 0x2be8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
label_2be8c0:
    // 0x2be8c0: 0x84225026  lh          $v0, 0x5026($at)
    ctx->pc = 0x2be8c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20518)));
label_2be8c4:
    // 0x2be8c4: 0xc04f8e4  jal         func_13E390
label_2be8c8:
    if (ctx->pc == 0x2BE8C8u) {
        ctx->pc = 0x2BE8C8u;
            // 0x2be8c8: 0x2446002c  addiu       $a2, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->pc = 0x2BE8CCu;
        goto label_2be8cc;
    }
    ctx->pc = 0x2BE8C4u;
    SET_GPR_U32(ctx, 31, 0x2BE8CCu);
    ctx->pc = 0x2BE8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE8C4u;
            // 0x2be8c8: 0x2446002c  addiu       $a2, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE8CCu; }
        if (ctx->pc != 0x2BE8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE8CCu; }
        if (ctx->pc != 0x2BE8CCu) { return; }
    }
    ctx->pc = 0x2BE8CCu;
label_2be8cc:
    // 0x2be8cc: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2be8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2be8d0:
    // 0x2be8d0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2be8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2be8d4:
    // 0x2be8d4: 0x27a503a0  addiu       $a1, $sp, 0x3A0
    ctx->pc = 0x2be8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_2be8d8:
    // 0x2be8d8: 0x24c65000  addiu       $a2, $a2, 0x5000
    ctx->pc = 0x2be8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20480));
label_2be8dc:
    // 0x2be8dc: 0xc08a338  jal         func_228CE0
label_2be8e0:
    if (ctx->pc == 0x2BE8E0u) {
        ctx->pc = 0x2BE8E0u;
            // 0x2be8e0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BE8E4u;
        goto label_2be8e4;
    }
    ctx->pc = 0x2BE8DCu;
    SET_GPR_U32(ctx, 31, 0x2BE8E4u);
    ctx->pc = 0x2BE8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE8DCu;
            // 0x2be8e0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE8E4u; }
        if (ctx->pc != 0x2BE8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE8E4u; }
        if (ctx->pc != 0x2BE8E4u) { return; }
    }
    ctx->pc = 0x2BE8E4u;
label_2be8e4:
    // 0x2be8e4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2be8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2be8e8:
    // 0x2be8e8: 0x27a403b0  addiu       $a0, $sp, 0x3B0
    ctx->pc = 0x2be8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_2be8ec:
    // 0x2be8ec: 0x8423502c  lh          $v1, 0x502C($at)
    ctx->pc = 0x2be8ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20524)));
label_2be8f0:
    // 0x2be8f0: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x2be8f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2be8f4:
    // 0x2be8f4: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x2be8f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2be8f8:
    // 0x2be8f8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2be8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2be8fc:
    // 0x2be8fc: 0x24650016  addiu       $a1, $v1, 0x16
    ctx->pc = 0x2be8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
label_2be900:
    // 0x2be900: 0x8422502e  lh          $v0, 0x502E($at)
    ctx->pc = 0x2be900u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20526)));
label_2be904:
    // 0x2be904: 0xc04f8e4  jal         func_13E390
label_2be908:
    if (ctx->pc == 0x2BE908u) {
        ctx->pc = 0x2BE908u;
            // 0x2be908: 0x2446002c  addiu       $a2, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->pc = 0x2BE90Cu;
        goto label_2be90c;
    }
    ctx->pc = 0x2BE904u;
    SET_GPR_U32(ctx, 31, 0x2BE90Cu);
    ctx->pc = 0x2BE908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE904u;
            // 0x2be908: 0x2446002c  addiu       $a2, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE90Cu; }
        if (ctx->pc != 0x2BE90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE90Cu; }
        if (ctx->pc != 0x2BE90Cu) { return; }
    }
    ctx->pc = 0x2BE90Cu;
label_2be90c:
    // 0x2be90c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2be90cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2be910:
    // 0x2be910: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2be910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2be914:
    // 0x2be914: 0x27a503b0  addiu       $a1, $sp, 0x3B0
    ctx->pc = 0x2be914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_2be918:
    // 0x2be918: 0x24c65000  addiu       $a2, $a2, 0x5000
    ctx->pc = 0x2be918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20480));
label_2be91c:
    // 0x2be91c: 0xc08a338  jal         func_228CE0
label_2be920:
    if (ctx->pc == 0x2BE920u) {
        ctx->pc = 0x2BE920u;
            // 0x2be920: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BE924u;
        goto label_2be924;
    }
    ctx->pc = 0x2BE91Cu;
    SET_GPR_U32(ctx, 31, 0x2BE924u);
    ctx->pc = 0x2BE920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE91Cu;
            // 0x2be920: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE924u; }
        if (ctx->pc != 0x2BE924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE924u; }
        if (ctx->pc != 0x2BE924u) { return; }
    }
    ctx->pc = 0x2BE924u;
label_2be924:
    // 0x2be924: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2be924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2be928:
    // 0x2be928: 0x27a403c0  addiu       $a0, $sp, 0x3C0
    ctx->pc = 0x2be928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_2be92c:
    // 0x2be92c: 0x84235034  lh          $v1, 0x5034($at)
    ctx->pc = 0x2be92cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20532)));
label_2be930:
    // 0x2be930: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x2be930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2be934:
    // 0x2be934: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x2be934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2be938:
    // 0x2be938: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2be938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2be93c:
    // 0x2be93c: 0x24650016  addiu       $a1, $v1, 0x16
    ctx->pc = 0x2be93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
label_2be940:
    // 0x2be940: 0x84225036  lh          $v0, 0x5036($at)
    ctx->pc = 0x2be940u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20534)));
label_2be944:
    // 0x2be944: 0xc04f8e4  jal         func_13E390
label_2be948:
    if (ctx->pc == 0x2BE948u) {
        ctx->pc = 0x2BE948u;
            // 0x2be948: 0x2446002c  addiu       $a2, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->pc = 0x2BE94Cu;
        goto label_2be94c;
    }
    ctx->pc = 0x2BE944u;
    SET_GPR_U32(ctx, 31, 0x2BE94Cu);
    ctx->pc = 0x2BE948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE944u;
            // 0x2be948: 0x2446002c  addiu       $a2, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE94Cu; }
        if (ctx->pc != 0x2BE94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE94Cu; }
        if (ctx->pc != 0x2BE94Cu) { return; }
    }
    ctx->pc = 0x2BE94Cu;
label_2be94c:
    // 0x2be94c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2be94cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2be950:
    // 0x2be950: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2be950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2be954:
    // 0x2be954: 0x27a503c0  addiu       $a1, $sp, 0x3C0
    ctx->pc = 0x2be954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_2be958:
    // 0x2be958: 0x24c65000  addiu       $a2, $a2, 0x5000
    ctx->pc = 0x2be958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20480));
label_2be95c:
    // 0x2be95c: 0xc08a338  jal         func_228CE0
label_2be960:
    if (ctx->pc == 0x2BE960u) {
        ctx->pc = 0x2BE960u;
            // 0x2be960: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BE964u;
        goto label_2be964;
    }
    ctx->pc = 0x2BE95Cu;
    SET_GPR_U32(ctx, 31, 0x2BE964u);
    ctx->pc = 0x2BE960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE95Cu;
            // 0x2be960: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE964u; }
        if (ctx->pc != 0x2BE964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE964u; }
        if (ctx->pc != 0x2BE964u) { return; }
    }
    ctx->pc = 0x2BE964u;
label_2be964:
    // 0x2be964: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2be964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2be968:
    // 0x2be968: 0x27a403d0  addiu       $a0, $sp, 0x3D0
    ctx->pc = 0x2be968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_2be96c:
    // 0x2be96c: 0x8423503c  lh          $v1, 0x503C($at)
    ctx->pc = 0x2be96cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20540)));
label_2be970:
    // 0x2be970: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x2be970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2be974:
    // 0x2be974: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x2be974u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2be978:
    // 0x2be978: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2be978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2be97c:
    // 0x2be97c: 0x24650016  addiu       $a1, $v1, 0x16
    ctx->pc = 0x2be97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
label_2be980:
    // 0x2be980: 0x8422503e  lh          $v0, 0x503E($at)
    ctx->pc = 0x2be980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20542)));
label_2be984:
    // 0x2be984: 0xc04f8e4  jal         func_13E390
label_2be988:
    if (ctx->pc == 0x2BE988u) {
        ctx->pc = 0x2BE988u;
            // 0x2be988: 0x2446002c  addiu       $a2, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->pc = 0x2BE98Cu;
        goto label_2be98c;
    }
    ctx->pc = 0x2BE984u;
    SET_GPR_U32(ctx, 31, 0x2BE98Cu);
    ctx->pc = 0x2BE988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE984u;
            // 0x2be988: 0x2446002c  addiu       $a2, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE98Cu; }
        if (ctx->pc != 0x2BE98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE98Cu; }
        if (ctx->pc != 0x2BE98Cu) { return; }
    }
    ctx->pc = 0x2BE98Cu;
label_2be98c:
    // 0x2be98c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2be98cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2be990:
    // 0x2be990: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2be990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2be994:
    // 0x2be994: 0x27a503d0  addiu       $a1, $sp, 0x3D0
    ctx->pc = 0x2be994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_2be998:
    // 0x2be998: 0x24c65000  addiu       $a2, $a2, 0x5000
    ctx->pc = 0x2be998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20480));
label_2be99c:
    // 0x2be99c: 0xc08a338  jal         func_228CE0
label_2be9a0:
    if (ctx->pc == 0x2BE9A0u) {
        ctx->pc = 0x2BE9A0u;
            // 0x2be9a0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BE9A4u;
        goto label_2be9a4;
    }
    ctx->pc = 0x2BE99Cu;
    SET_GPR_U32(ctx, 31, 0x2BE9A4u);
    ctx->pc = 0x2BE9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE99Cu;
            // 0x2be9a0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE9A4u; }
        if (ctx->pc != 0x2BE9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE9A4u; }
        if (ctx->pc != 0x2BE9A4u) { return; }
    }
    ctx->pc = 0x2BE9A4u;
label_2be9a4:
    // 0x2be9a4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2be9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2be9a8:
    // 0x2be9a8: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x2be9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_2be9ac:
    // 0x2be9ac: 0x84235044  lh          $v1, 0x5044($at)
    ctx->pc = 0x2be9acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20548)));
label_2be9b0:
    // 0x2be9b0: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x2be9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2be9b4:
    // 0x2be9b4: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x2be9b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2be9b8:
    // 0x2be9b8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2be9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2be9bc:
    // 0x2be9bc: 0x24650016  addiu       $a1, $v1, 0x16
    ctx->pc = 0x2be9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
label_2be9c0:
    // 0x2be9c0: 0x84225046  lh          $v0, 0x5046($at)
    ctx->pc = 0x2be9c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20550)));
label_2be9c4:
    // 0x2be9c4: 0xc04f8e4  jal         func_13E390
label_2be9c8:
    if (ctx->pc == 0x2BE9C8u) {
        ctx->pc = 0x2BE9C8u;
            // 0x2be9c8: 0x2446002c  addiu       $a2, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->pc = 0x2BE9CCu;
        goto label_2be9cc;
    }
    ctx->pc = 0x2BE9C4u;
    SET_GPR_U32(ctx, 31, 0x2BE9CCu);
    ctx->pc = 0x2BE9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE9C4u;
            // 0x2be9c8: 0x2446002c  addiu       $a2, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE9CCu; }
        if (ctx->pc != 0x2BE9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE9CCu; }
        if (ctx->pc != 0x2BE9CCu) { return; }
    }
    ctx->pc = 0x2BE9CCu;
label_2be9cc:
    // 0x2be9cc: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2be9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2be9d0:
    // 0x2be9d0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2be9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2be9d4:
    // 0x2be9d4: 0x27a503e0  addiu       $a1, $sp, 0x3E0
    ctx->pc = 0x2be9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_2be9d8:
    // 0x2be9d8: 0x24c65000  addiu       $a2, $a2, 0x5000
    ctx->pc = 0x2be9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20480));
label_2be9dc:
    // 0x2be9dc: 0xc08a338  jal         func_228CE0
label_2be9e0:
    if (ctx->pc == 0x2BE9E0u) {
        ctx->pc = 0x2BE9E0u;
            // 0x2be9e0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BE9E4u;
        goto label_2be9e4;
    }
    ctx->pc = 0x2BE9DCu;
    SET_GPR_U32(ctx, 31, 0x2BE9E4u);
    ctx->pc = 0x2BE9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE9DCu;
            // 0x2be9e0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE9E4u; }
        if (ctx->pc != 0x2BE9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE9E4u; }
        if (ctx->pc != 0x2BE9E4u) { return; }
    }
    ctx->pc = 0x2BE9E4u;
label_2be9e4:
    // 0x2be9e4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2be9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2be9e8:
    // 0x2be9e8: 0x27a403f0  addiu       $a0, $sp, 0x3F0
    ctx->pc = 0x2be9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
label_2be9ec:
    // 0x2be9ec: 0x84235044  lh          $v1, 0x5044($at)
    ctx->pc = 0x2be9ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20548)));
label_2be9f0:
    // 0x2be9f0: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x2be9f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2be9f4:
    // 0x2be9f4: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x2be9f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2be9f8:
    // 0x2be9f8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2be9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2be9fc:
    // 0x2be9fc: 0x24650016  addiu       $a1, $v1, 0x16
    ctx->pc = 0x2be9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
label_2bea00:
    // 0x2bea00: 0x84225046  lh          $v0, 0x5046($at)
    ctx->pc = 0x2bea00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20550)));
label_2bea04:
    // 0x2bea04: 0xc04f8e4  jal         func_13E390
label_2bea08:
    if (ctx->pc == 0x2BEA08u) {
        ctx->pc = 0x2BEA08u;
            // 0x2bea08: 0x2446004e  addiu       $a2, $v0, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 78));
        ctx->pc = 0x2BEA0Cu;
        goto label_2bea0c;
    }
    ctx->pc = 0x2BEA04u;
    SET_GPR_U32(ctx, 31, 0x2BEA0Cu);
    ctx->pc = 0x2BEA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEA04u;
            // 0x2bea08: 0x2446004e  addiu       $a2, $v0, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 78));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEA0Cu; }
        if (ctx->pc != 0x2BEA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEA0Cu; }
        if (ctx->pc != 0x2BEA0Cu) { return; }
    }
    ctx->pc = 0x2BEA0Cu;
label_2bea0c:
    // 0x2bea0c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2bea0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2bea10:
    // 0x2bea10: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bea10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bea14:
    // 0x2bea14: 0x27a503f0  addiu       $a1, $sp, 0x3F0
    ctx->pc = 0x2bea14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
label_2bea18:
    // 0x2bea18: 0x24c65000  addiu       $a2, $a2, 0x5000
    ctx->pc = 0x2bea18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20480));
label_2bea1c:
    // 0x2bea1c: 0xc08a338  jal         func_228CE0
label_2bea20:
    if (ctx->pc == 0x2BEA20u) {
        ctx->pc = 0x2BEA20u;
            // 0x2bea20: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BEA24u;
        goto label_2bea24;
    }
    ctx->pc = 0x2BEA1Cu;
    SET_GPR_U32(ctx, 31, 0x2BEA24u);
    ctx->pc = 0x2BEA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEA1Cu;
            // 0x2bea20: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEA24u; }
        if (ctx->pc != 0x2BEA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEA24u; }
        if (ctx->pc != 0x2BEA24u) { return; }
    }
    ctx->pc = 0x2BEA24u;
label_2bea24:
    // 0x2bea24: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2bea24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2bea28:
    // 0x2bea28: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x2bea28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_2bea2c:
    // 0x2bea2c: 0x84235044  lh          $v1, 0x5044($at)
    ctx->pc = 0x2bea2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20548)));
label_2bea30:
    // 0x2bea30: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x2bea30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2bea34:
    // 0x2bea34: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x2bea34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2bea38:
    // 0x2bea38: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2bea38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2bea3c:
    // 0x2bea3c: 0x24650016  addiu       $a1, $v1, 0x16
    ctx->pc = 0x2bea3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
label_2bea40:
    // 0x2bea40: 0x84225046  lh          $v0, 0x5046($at)
    ctx->pc = 0x2bea40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20550)));
label_2bea44:
    // 0x2bea44: 0xc04f8e4  jal         func_13E390
label_2bea48:
    if (ctx->pc == 0x2BEA48u) {
        ctx->pc = 0x2BEA48u;
            // 0x2bea48: 0x24460070  addiu       $a2, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->pc = 0x2BEA4Cu;
        goto label_2bea4c;
    }
    ctx->pc = 0x2BEA44u;
    SET_GPR_U32(ctx, 31, 0x2BEA4Cu);
    ctx->pc = 0x2BEA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEA44u;
            // 0x2bea48: 0x24460070  addiu       $a2, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEA4Cu; }
        if (ctx->pc != 0x2BEA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEA4Cu; }
        if (ctx->pc != 0x2BEA4Cu) { return; }
    }
    ctx->pc = 0x2BEA4Cu;
label_2bea4c:
    // 0x2bea4c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2bea4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2bea50:
    // 0x2bea50: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bea50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bea54:
    // 0x2bea54: 0x27a50400  addiu       $a1, $sp, 0x400
    ctx->pc = 0x2bea54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_2bea58:
    // 0x2bea58: 0x24c65000  addiu       $a2, $a2, 0x5000
    ctx->pc = 0x2bea58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20480));
label_2bea5c:
    // 0x2bea5c: 0xc08a338  jal         func_228CE0
label_2bea60:
    if (ctx->pc == 0x2BEA60u) {
        ctx->pc = 0x2BEA60u;
            // 0x2bea60: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BEA64u;
        goto label_2bea64;
    }
    ctx->pc = 0x2BEA5Cu;
    SET_GPR_U32(ctx, 31, 0x2BEA64u);
    ctx->pc = 0x2BEA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEA5Cu;
            // 0x2bea60: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEA64u; }
        if (ctx->pc != 0x2BEA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEA64u; }
        if (ctx->pc != 0x2BEA64u) { return; }
    }
    ctx->pc = 0x2BEA64u;
label_2bea64:
    // 0x2bea64: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2bea64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2bea68:
    // 0x2bea68: 0x27a40410  addiu       $a0, $sp, 0x410
    ctx->pc = 0x2bea68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_2bea6c:
    // 0x2bea6c: 0x8423504c  lh          $v1, 0x504C($at)
    ctx->pc = 0x2bea6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20556)));
label_2bea70:
    // 0x2bea70: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x2bea70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2bea74:
    // 0x2bea74: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x2bea74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2bea78:
    // 0x2bea78: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2bea78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2bea7c:
    // 0x2bea7c: 0x24650016  addiu       $a1, $v1, 0x16
    ctx->pc = 0x2bea7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
label_2bea80:
    // 0x2bea80: 0x8422504e  lh          $v0, 0x504E($at)
    ctx->pc = 0x2bea80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20558)));
label_2bea84:
    // 0x2bea84: 0xc04f8e4  jal         func_13E390
label_2bea88:
    if (ctx->pc == 0x2BEA88u) {
        ctx->pc = 0x2BEA88u;
            // 0x2bea88: 0x2446002c  addiu       $a2, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->pc = 0x2BEA8Cu;
        goto label_2bea8c;
    }
    ctx->pc = 0x2BEA84u;
    SET_GPR_U32(ctx, 31, 0x2BEA8Cu);
    ctx->pc = 0x2BEA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEA84u;
            // 0x2bea88: 0x2446002c  addiu       $a2, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEA8Cu; }
        if (ctx->pc != 0x2BEA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEA8Cu; }
        if (ctx->pc != 0x2BEA8Cu) { return; }
    }
    ctx->pc = 0x2BEA8Cu;
label_2bea8c:
    // 0x2bea8c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2bea8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2bea90:
    // 0x2bea90: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bea90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bea94:
    // 0x2bea94: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x2bea94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_2bea98:
    // 0x2bea98: 0x24c65000  addiu       $a2, $a2, 0x5000
    ctx->pc = 0x2bea98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20480));
label_2bea9c:
    // 0x2bea9c: 0xc08a338  jal         func_228CE0
label_2beaa0:
    if (ctx->pc == 0x2BEAA0u) {
        ctx->pc = 0x2BEAA0u;
            // 0x2beaa0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BEAA4u;
        goto label_2beaa4;
    }
    ctx->pc = 0x2BEA9Cu;
    SET_GPR_U32(ctx, 31, 0x2BEAA4u);
    ctx->pc = 0x2BEAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEA9Cu;
            // 0x2beaa0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEAA4u; }
        if (ctx->pc != 0x2BEAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEAA4u; }
        if (ctx->pc != 0x2BEAA4u) { return; }
    }
    ctx->pc = 0x2BEAA4u;
label_2beaa4:
    // 0x2beaa4: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x2beaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_2beaa8:
    // 0x2beaa8: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x2beaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_2beaac:
    // 0x2beaac: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2beaacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2beab0:
    // 0x2beab0: 0x2407009c  addiu       $a3, $zero, 0x9C
    ctx->pc = 0x2beab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
label_2beab4:
    // 0x2beab4: 0xc04f8e4  jal         func_13E390
label_2beab8:
    if (ctx->pc == 0x2BEAB8u) {
        ctx->pc = 0x2BEAB8u;
            // 0x2beab8: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x2BEABCu;
        goto label_2beabc;
    }
    ctx->pc = 0x2BEAB4u;
    SET_GPR_U32(ctx, 31, 0x2BEABCu);
    ctx->pc = 0x2BEAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEAB4u;
            // 0x2beab8: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEABCu; }
        if (ctx->pc != 0x2BEABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEABCu; }
        if (ctx->pc != 0x2BEABCu) { return; }
    }
    ctx->pc = 0x2BEABCu;
label_2beabc:
    // 0x2beabc: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2beabcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2beac0:
    // 0x2beac0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2beac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2beac4:
    // 0x2beac4: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x2beac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_2beac8:
    // 0x2beac8: 0x24c65000  addiu       $a2, $a2, 0x5000
    ctx->pc = 0x2beac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20480));
label_2beacc:
    // 0x2beacc: 0xc08a338  jal         func_228CE0
label_2bead0:
    if (ctx->pc == 0x2BEAD0u) {
        ctx->pc = 0x2BEAD0u;
            // 0x2bead0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BEAD4u;
        goto label_2bead4;
    }
    ctx->pc = 0x2BEACCu;
    SET_GPR_U32(ctx, 31, 0x2BEAD4u);
    ctx->pc = 0x2BEAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEACCu;
            // 0x2bead0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEAD4u; }
        if (ctx->pc != 0x2BEAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEAD4u; }
        if (ctx->pc != 0x2BEAD4u) { return; }
    }
    ctx->pc = 0x2BEAD4u;
label_2bead4:
    // 0x2bead4: 0xc04d1a4  jal         func_134690
label_2bead8:
    if (ctx->pc == 0x2BEAD8u) {
        ctx->pc = 0x2BEAD8u;
            // 0x2bead8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2BEADCu;
        goto label_2beadc;
    }
    ctx->pc = 0x2BEAD4u;
    SET_GPR_U32(ctx, 31, 0x2BEADCu);
    ctx->pc = 0x2BEAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEAD4u;
            // 0x2bead8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEADCu; }
        if (ctx->pc != 0x2BEADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEADCu; }
        if (ctx->pc != 0x2BEADCu) { return; }
    }
    ctx->pc = 0x2BEADCu;
label_2beadc:
    // 0x2beadc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2beadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2beae0:
    // 0x2beae0: 0xc04d128  jal         func_1344A0
label_2beae4:
    if (ctx->pc == 0x2BEAE4u) {
        ctx->pc = 0x2BEAE4u;
            // 0x2beae4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2BEAE8u;
        goto label_2beae8;
    }
    ctx->pc = 0x2BEAE0u;
    SET_GPR_U32(ctx, 31, 0x2BEAE8u);
    ctx->pc = 0x2BEAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEAE0u;
            // 0x2beae4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEAE8u; }
        if (ctx->pc != 0x2BEAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEAE8u; }
        if (ctx->pc != 0x2BEAE8u) { return; }
    }
    ctx->pc = 0x2BEAE8u;
label_2beae8:
    // 0x2beae8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2beae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2beaec:
    // 0x2beaec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2beaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2beaf0:
    // 0x2beaf0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2beaf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2beaf4:
    // 0x2beaf4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2beaf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2beaf8:
    // 0x2beaf8: 0xc04d320  jal         func_134C80
label_2beafc:
    if (ctx->pc == 0x2BEAFCu) {
        ctx->pc = 0x2BEAFCu;
            // 0x2beafc: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BEB00u;
        goto label_2beb00;
    }
    ctx->pc = 0x2BEAF8u;
    SET_GPR_U32(ctx, 31, 0x2BEB00u);
    ctx->pc = 0x2BEAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEAF8u;
            // 0x2beafc: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEB00u; }
        if (ctx->pc != 0x2BEB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEB00u; }
        if (ctx->pc != 0x2BEB00u) { return; }
    }
    ctx->pc = 0x2BEB00u;
label_2beb00:
    // 0x2beb00: 0x8f859c38  lw          $a1, -0x63C8($gp)
    ctx->pc = 0x2beb00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941752)));
label_2beb04:
    // 0x2beb04: 0xc04d368  jal         func_134DA0
label_2beb08:
    if (ctx->pc == 0x2BEB08u) {
        ctx->pc = 0x2BEB08u;
            // 0x2beb08: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2BEB0Cu;
        goto label_2beb0c;
    }
    ctx->pc = 0x2BEB04u;
    SET_GPR_U32(ctx, 31, 0x2BEB0Cu);
    ctx->pc = 0x2BEB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEB04u;
            // 0x2beb08: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEB0Cu; }
        if (ctx->pc != 0x2BEB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEB0Cu; }
        if (ctx->pc != 0x2BEB0Cu) { return; }
    }
    ctx->pc = 0x2BEB0Cu;
label_2beb0c:
    // 0x2beb0c: 0x27a40430  addiu       $a0, $sp, 0x430
    ctx->pc = 0x2beb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_2beb10:
    // 0x2beb10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2beb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2beb14:
    // 0x2beb14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2beb14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2beb18:
    // 0x2beb18: 0x240700a8  addiu       $a3, $zero, 0xA8
    ctx->pc = 0x2beb18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_2beb1c:
    // 0x2beb1c: 0xc04f8e4  jal         func_13E390
label_2beb20:
    if (ctx->pc == 0x2BEB20u) {
        ctx->pc = 0x2BEB20u;
            // 0x2beb20: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x2BEB24u;
        goto label_2beb24;
    }
    ctx->pc = 0x2BEB1Cu;
    SET_GPR_U32(ctx, 31, 0x2BEB24u);
    ctx->pc = 0x2BEB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEB1Cu;
            // 0x2beb20: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEB24u; }
        if (ctx->pc != 0x2BEB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEB24u; }
        if (ctx->pc != 0x2BEB24u) { return; }
    }
    ctx->pc = 0x2BEB24u;
label_2beb24:
    // 0x2beb24: 0x3c034190  lui         $v1, 0x4190
    ctx->pc = 0x2beb24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16784 << 16));
label_2beb28:
    // 0x2beb28: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2beb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_2beb2c:
    // 0x2beb2c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2beb2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2beb30:
    // 0x2beb30: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2beb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2beb34:
    // 0x2beb34: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2beb34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2beb38:
    // 0x2beb38: 0xc087f98  jal         func_21FE60
label_2beb3c:
    if (ctx->pc == 0x2BEB3Cu) {
        ctx->pc = 0x2BEB3Cu;
            // 0x2beb3c: 0x27a50430  addiu       $a1, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->pc = 0x2BEB40u;
        goto label_2beb40;
    }
    ctx->pc = 0x2BEB38u;
    SET_GPR_U32(ctx, 31, 0x2BEB40u);
    ctx->pc = 0x2BEB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEB38u;
            // 0x2beb3c: 0x27a50430  addiu       $a1, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEB40u; }
        if (ctx->pc != 0x2BEB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEB40u; }
        if (ctx->pc != 0x2BEB40u) { return; }
    }
    ctx->pc = 0x2BEB40u;
label_2beb40:
    // 0x2beb40: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2beb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2beb44:
    // 0x2beb44: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x2beb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_2beb48:
    // 0x2beb48: 0x84235020  lh          $v1, 0x5020($at)
    ctx->pc = 0x2beb48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20512)));
label_2beb4c:
    // 0x2beb4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2beb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2beb50:
    // 0x2beb50: 0x24060082  addiu       $a2, $zero, 0x82
    ctx->pc = 0x2beb50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_2beb54:
    // 0x2beb54: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x2beb54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2beb58:
    // 0x2beb58: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x2beb58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2beb5c:
    // 0x2beb5c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2beb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2beb60:
    // 0x2beb60: 0x24710016  addiu       $s1, $v1, 0x16
    ctx->pc = 0x2beb60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
label_2beb64:
    // 0x2beb64: 0x84225022  lh          $v0, 0x5022($at)
    ctx->pc = 0x2beb64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20514)));
label_2beb68:
    // 0x2beb68: 0xc04f8e4  jal         func_13E390
label_2beb6c:
    if (ctx->pc == 0x2BEB6Cu) {
        ctx->pc = 0x2BEB6Cu;
            // 0x2beb6c: 0x2452002c  addiu       $s2, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->pc = 0x2BEB70u;
        goto label_2beb70;
    }
    ctx->pc = 0x2BEB68u;
    SET_GPR_U32(ctx, 31, 0x2BEB70u);
    ctx->pc = 0x2BEB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEB68u;
            // 0x2beb6c: 0x2452002c  addiu       $s2, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEB70u; }
        if (ctx->pc != 0x2BEB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEB70u; }
        if (ctx->pc != 0x2BEB70u) { return; }
    }
    ctx->pc = 0x2BEB70u;
label_2beb70:
    // 0x2beb70: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2beb70u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2beb74:
    // 0x2beb74: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2beb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2beb78:
    // 0x2beb78: 0x84225022  lh          $v0, 0x5022($at)
    ctx->pc = 0x2beb78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20514)));
label_2beb7c:
    // 0x2beb7c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2beb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2beb80:
    // 0x2beb80: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2beb80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2beb84:
    // 0x2beb84: 0x27a50440  addiu       $a1, $sp, 0x440
    ctx->pc = 0x2beb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_2beb88:
    // 0x2beb88: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x2beb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_2beb8c:
    // 0x2beb8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2beb8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2beb90:
    // 0x2beb90: 0xc087f98  jal         func_21FE60
label_2beb94:
    if (ctx->pc == 0x2BEB94u) {
        ctx->pc = 0x2BEB94u;
            // 0x2beb94: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2BEB98u;
        goto label_2beb98;
    }
    ctx->pc = 0x2BEB90u;
    SET_GPR_U32(ctx, 31, 0x2BEB98u);
    ctx->pc = 0x2BEB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEB90u;
            // 0x2beb94: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEB98u; }
        if (ctx->pc != 0x2BEB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEB98u; }
        if (ctx->pc != 0x2BEB98u) { return; }
    }
    ctx->pc = 0x2BEB98u;
label_2beb98:
    // 0x2beb98: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2beb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2beb9c:
    // 0x2beb9c: 0x27a40450  addiu       $a0, $sp, 0x450
    ctx->pc = 0x2beb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_2beba0:
    // 0x2beba0: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x2beba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_2beba4:
    // 0x2beba4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2beba4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2beba8:
    // 0x2beba8: 0xc04f8e4  jal         func_13E390
label_2bebac:
    if (ctx->pc == 0x2BEBACu) {
        ctx->pc = 0x2BEBACu;
            // 0x2bebac: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2BEBB0u;
        goto label_2bebb0;
    }
    ctx->pc = 0x2BEBA8u;
    SET_GPR_U32(ctx, 31, 0x2BEBB0u);
    ctx->pc = 0x2BEBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEBA8u;
            // 0x2bebac: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEBB0u; }
        if (ctx->pc != 0x2BEBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEBB0u; }
        if (ctx->pc != 0x2BEBB0u) { return; }
    }
    ctx->pc = 0x2BEBB0u;
label_2bebb0:
    // 0x2bebb0: 0x2623000b  addiu       $v1, $s1, 0xB
    ctx->pc = 0x2bebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 11));
label_2bebb4:
    // 0x2bebb4: 0x26420019  addiu       $v0, $s2, 0x19
    ctx->pc = 0x2bebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 25));
label_2bebb8:
    // 0x2bebb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bebb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bebbc:
    // 0x2bebbc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bebbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bebc0:
    // 0x2bebc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bebc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bebc4:
    // 0x2bebc4: 0x27a50450  addiu       $a1, $sp, 0x450
    ctx->pc = 0x2bebc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_2bebc8:
    // 0x2bebc8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x2bebc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2bebcc:
    // 0x2bebcc: 0xc087f98  jal         func_21FE60
label_2bebd0:
    if (ctx->pc == 0x2BEBD0u) {
        ctx->pc = 0x2BEBD0u;
            // 0x2bebd0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2BEBD4u;
        goto label_2bebd4;
    }
    ctx->pc = 0x2BEBCCu;
    SET_GPR_U32(ctx, 31, 0x2BEBD4u);
    ctx->pc = 0x2BEBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEBCCu;
            // 0x2bebd0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEBD4u; }
        if (ctx->pc != 0x2BEBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEBD4u; }
        if (ctx->pc != 0x2BEBD4u) { return; }
    }
    ctx->pc = 0x2BEBD4u;
label_2bebd4:
    // 0x2bebd4: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x2bebd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2bebd8:
    // 0x2bebd8: 0x27a40460  addiu       $a0, $sp, 0x460
    ctx->pc = 0x2bebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_2bebdc:
    // 0x2bebdc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2bebdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2bebe0:
    // 0x2bebe0: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x2bebe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2bebe4:
    // 0x2bebe4: 0xc04f8e4  jal         func_13E390
label_2bebe8:
    if (ctx->pc == 0x2BEBE8u) {
        ctx->pc = 0x2BEBE8u;
            // 0x2bebe8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BEBECu;
        goto label_2bebec;
    }
    ctx->pc = 0x2BEBE4u;
    SET_GPR_U32(ctx, 31, 0x2BEBECu);
    ctx->pc = 0x2BEBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEBE4u;
            // 0x2bebe8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEBECu; }
        if (ctx->pc != 0x2BEBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEBECu; }
        if (ctx->pc != 0x2BEBECu) { return; }
    }
    ctx->pc = 0x2BEBECu;
label_2bebec:
    // 0x2bebec: 0x2623005e  addiu       $v1, $s1, 0x5E
    ctx->pc = 0x2bebecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 94));
label_2bebf0:
    // 0x2bebf0: 0x26420015  addiu       $v0, $s2, 0x15
    ctx->pc = 0x2bebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 21));
label_2bebf4:
    // 0x2bebf4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bebf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bebf8:
    // 0x2bebf8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bebf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bebfc:
    // 0x2bebfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bebfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bec00:
    // 0x2bec00: 0x27a50460  addiu       $a1, $sp, 0x460
    ctx->pc = 0x2bec00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_2bec04:
    // 0x2bec04: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x2bec04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2bec08:
    // 0x2bec08: 0xc087f98  jal         func_21FE60
label_2bec0c:
    if (ctx->pc == 0x2BEC0Cu) {
        ctx->pc = 0x2BEC0Cu;
            // 0x2bec0c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2BEC10u;
        goto label_2bec10;
    }
    ctx->pc = 0x2BEC08u;
    SET_GPR_U32(ctx, 31, 0x2BEC10u);
    ctx->pc = 0x2BEC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEC08u;
            // 0x2bec0c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEC10u; }
        if (ctx->pc != 0x2BEC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEC10u; }
        if (ctx->pc != 0x2BEC10u) { return; }
    }
    ctx->pc = 0x2BEC10u;
label_2bec10:
    // 0x2bec10: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x2bec10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_2bec14:
    // 0x2bec14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bec14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bec18:
    // 0x2bec18: 0x24060094  addiu       $a2, $zero, 0x94
    ctx->pc = 0x2bec18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_2bec1c:
    // 0x2bec1c: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x2bec1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2bec20:
    // 0x2bec20: 0xc04f8e4  jal         func_13E390
label_2bec24:
    if (ctx->pc == 0x2BEC24u) {
        ctx->pc = 0x2BEC24u;
            // 0x2bec24: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x2BEC28u;
        goto label_2bec28;
    }
    ctx->pc = 0x2BEC20u;
    SET_GPR_U32(ctx, 31, 0x2BEC28u);
    ctx->pc = 0x2BEC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEC20u;
            // 0x2bec24: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEC28u; }
        if (ctx->pc != 0x2BEC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEC28u; }
        if (ctx->pc != 0x2BEC28u) { return; }
    }
    ctx->pc = 0x2BEC28u;
label_2bec28:
    // 0x2bec28: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2bec28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2bec2c:
    // 0x2bec2c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bec2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bec30:
    // 0x2bec30: 0x84235028  lh          $v1, 0x5028($at)
    ctx->pc = 0x2bec30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20520)));
label_2bec34:
    // 0x2bec34: 0x27a50470  addiu       $a1, $sp, 0x470
    ctx->pc = 0x2bec34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_2bec38:
    // 0x2bec38: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2bec38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2bec3c:
    // 0x2bec3c: 0x24630016  addiu       $v1, $v1, 0x16
    ctx->pc = 0x2bec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
label_2bec40:
    // 0x2bec40: 0x8422502a  lh          $v0, 0x502A($at)
    ctx->pc = 0x2bec40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20522)));
label_2bec44:
    // 0x2bec44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bec44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bec48:
    // 0x2bec48: 0x0  nop
    ctx->pc = 0x2bec48u;
    // NOP
label_2bec4c:
    // 0x2bec4c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x2bec4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2bec50:
    // 0x2bec50: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x2bec50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_2bec54:
    // 0x2bec54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bec54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bec58:
    // 0x2bec58: 0xc087f98  jal         func_21FE60
label_2bec5c:
    if (ctx->pc == 0x2BEC5Cu) {
        ctx->pc = 0x2BEC5Cu;
            // 0x2bec5c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2BEC60u;
        goto label_2bec60;
    }
    ctx->pc = 0x2BEC58u;
    SET_GPR_U32(ctx, 31, 0x2BEC60u);
    ctx->pc = 0x2BEC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEC58u;
            // 0x2bec5c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEC60u; }
        if (ctx->pc != 0x2BEC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEC60u; }
        if (ctx->pc != 0x2BEC60u) { return; }
    }
    ctx->pc = 0x2BEC60u;
label_2bec60:
    // 0x2bec60: 0x27a40480  addiu       $a0, $sp, 0x480
    ctx->pc = 0x2bec60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_2bec64:
    // 0x2bec64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bec64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bec68:
    // 0x2bec68: 0x240600a6  addiu       $a2, $zero, 0xA6
    ctx->pc = 0x2bec68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
label_2bec6c:
    // 0x2bec6c: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x2bec6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2bec70:
    // 0x2bec70: 0xc04f8e4  jal         func_13E390
label_2bec74:
    if (ctx->pc == 0x2BEC74u) {
        ctx->pc = 0x2BEC74u;
            // 0x2bec74: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x2BEC78u;
        goto label_2bec78;
    }
    ctx->pc = 0x2BEC70u;
    SET_GPR_U32(ctx, 31, 0x2BEC78u);
    ctx->pc = 0x2BEC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEC70u;
            // 0x2bec74: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEC78u; }
        if (ctx->pc != 0x2BEC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEC78u; }
        if (ctx->pc != 0x2BEC78u) { return; }
    }
    ctx->pc = 0x2BEC78u;
label_2bec78:
    // 0x2bec78: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2bec78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2bec7c:
    // 0x2bec7c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bec7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bec80:
    // 0x2bec80: 0x84235030  lh          $v1, 0x5030($at)
    ctx->pc = 0x2bec80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20528)));
label_2bec84:
    // 0x2bec84: 0x27a50480  addiu       $a1, $sp, 0x480
    ctx->pc = 0x2bec84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_2bec88:
    // 0x2bec88: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2bec88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2bec8c:
    // 0x2bec8c: 0x24630016  addiu       $v1, $v1, 0x16
    ctx->pc = 0x2bec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
label_2bec90:
    // 0x2bec90: 0x84225032  lh          $v0, 0x5032($at)
    ctx->pc = 0x2bec90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20530)));
label_2bec94:
    // 0x2bec94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bec94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bec98:
    // 0x2bec98: 0x0  nop
    ctx->pc = 0x2bec98u;
    // NOP
label_2bec9c:
    // 0x2bec9c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x2bec9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2beca0:
    // 0x2beca0: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x2beca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_2beca4:
    // 0x2beca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2beca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2beca8:
    // 0x2beca8: 0xc087f98  jal         func_21FE60
label_2becac:
    if (ctx->pc == 0x2BECACu) {
        ctx->pc = 0x2BECACu;
            // 0x2becac: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2BECB0u;
        goto label_2becb0;
    }
    ctx->pc = 0x2BECA8u;
    SET_GPR_U32(ctx, 31, 0x2BECB0u);
    ctx->pc = 0x2BECACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BECA8u;
            // 0x2becac: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BECB0u; }
        if (ctx->pc != 0x2BECB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BECB0u; }
        if (ctx->pc != 0x2BECB0u) { return; }
    }
    ctx->pc = 0x2BECB0u;
label_2becb0:
    // 0x2becb0: 0x27a40490  addiu       $a0, $sp, 0x490
    ctx->pc = 0x2becb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_2becb4:
    // 0x2becb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2becb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2becb8:
    // 0x2becb8: 0x240600b8  addiu       $a2, $zero, 0xB8
    ctx->pc = 0x2becb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
label_2becbc:
    // 0x2becbc: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x2becbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2becc0:
    // 0x2becc0: 0xc04f8e4  jal         func_13E390
label_2becc4:
    if (ctx->pc == 0x2BECC4u) {
        ctx->pc = 0x2BECC4u;
            // 0x2becc4: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x2BECC8u;
        goto label_2becc8;
    }
    ctx->pc = 0x2BECC0u;
    SET_GPR_U32(ctx, 31, 0x2BECC8u);
    ctx->pc = 0x2BECC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BECC0u;
            // 0x2becc4: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BECC8u; }
        if (ctx->pc != 0x2BECC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BECC8u; }
        if (ctx->pc != 0x2BECC8u) { return; }
    }
    ctx->pc = 0x2BECC8u;
label_2becc8:
    // 0x2becc8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2becc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2beccc:
    // 0x2beccc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2becccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2becd0:
    // 0x2becd0: 0x84235038  lh          $v1, 0x5038($at)
    ctx->pc = 0x2becd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20536)));
label_2becd4:
    // 0x2becd4: 0x27a50490  addiu       $a1, $sp, 0x490
    ctx->pc = 0x2becd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_2becd8:
    // 0x2becd8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2becd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2becdc:
    // 0x2becdc: 0x24630016  addiu       $v1, $v1, 0x16
    ctx->pc = 0x2becdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
label_2bece0:
    // 0x2bece0: 0x8422503a  lh          $v0, 0x503A($at)
    ctx->pc = 0x2bece0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20538)));
label_2bece4:
    // 0x2bece4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bece4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bece8:
    // 0x2bece8: 0x0  nop
    ctx->pc = 0x2bece8u;
    // NOP
label_2becec:
    // 0x2becec: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x2bececu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2becf0:
    // 0x2becf0: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x2becf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_2becf4:
    // 0x2becf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2becf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2becf8:
    // 0x2becf8: 0xc087f98  jal         func_21FE60
label_2becfc:
    if (ctx->pc == 0x2BECFCu) {
        ctx->pc = 0x2BECFCu;
            // 0x2becfc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2BED00u;
        goto label_2bed00;
    }
    ctx->pc = 0x2BECF8u;
    SET_GPR_U32(ctx, 31, 0x2BED00u);
    ctx->pc = 0x2BECFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BECF8u;
            // 0x2becfc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BED00u; }
        if (ctx->pc != 0x2BED00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BED00u; }
        if (ctx->pc != 0x2BED00u) { return; }
    }
    ctx->pc = 0x2BED00u;
label_2bed00:
    // 0x2bed00: 0x27a404a0  addiu       $a0, $sp, 0x4A0
    ctx->pc = 0x2bed00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_2bed04:
    // 0x2bed04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bed04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bed08:
    // 0x2bed08: 0x240600ca  addiu       $a2, $zero, 0xCA
    ctx->pc = 0x2bed08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
label_2bed0c:
    // 0x2bed0c: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x2bed0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2bed10:
    // 0x2bed10: 0xc04f8e4  jal         func_13E390
label_2bed14:
    if (ctx->pc == 0x2BED14u) {
        ctx->pc = 0x2BED14u;
            // 0x2bed14: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x2BED18u;
        goto label_2bed18;
    }
    ctx->pc = 0x2BED10u;
    SET_GPR_U32(ctx, 31, 0x2BED18u);
    ctx->pc = 0x2BED14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BED10u;
            // 0x2bed14: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BED18u; }
        if (ctx->pc != 0x2BED18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BED18u; }
        if (ctx->pc != 0x2BED18u) { return; }
    }
    ctx->pc = 0x2BED18u;
label_2bed18:
    // 0x2bed18: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2bed18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2bed1c:
    // 0x2bed1c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bed1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bed20:
    // 0x2bed20: 0x84235040  lh          $v1, 0x5040($at)
    ctx->pc = 0x2bed20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20544)));
label_2bed24:
    // 0x2bed24: 0x27a504a0  addiu       $a1, $sp, 0x4A0
    ctx->pc = 0x2bed24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_2bed28:
    // 0x2bed28: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2bed28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2bed2c:
    // 0x2bed2c: 0x24630016  addiu       $v1, $v1, 0x16
    ctx->pc = 0x2bed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
label_2bed30:
    // 0x2bed30: 0x84225042  lh          $v0, 0x5042($at)
    ctx->pc = 0x2bed30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20546)));
label_2bed34:
    // 0x2bed34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bed34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bed38:
    // 0x2bed38: 0x0  nop
    ctx->pc = 0x2bed38u;
    // NOP
label_2bed3c:
    // 0x2bed3c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x2bed3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2bed40:
    // 0x2bed40: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x2bed40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_2bed44:
    // 0x2bed44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bed44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bed48:
    // 0x2bed48: 0xc087f98  jal         func_21FE60
label_2bed4c:
    if (ctx->pc == 0x2BED4Cu) {
        ctx->pc = 0x2BED4Cu;
            // 0x2bed4c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2BED50u;
        goto label_2bed50;
    }
    ctx->pc = 0x2BED48u;
    SET_GPR_U32(ctx, 31, 0x2BED50u);
    ctx->pc = 0x2BED4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BED48u;
            // 0x2bed4c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BED50u; }
        if (ctx->pc != 0x2BED50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BED50u; }
        if (ctx->pc != 0x2BED50u) { return; }
    }
    ctx->pc = 0x2BED50u;
label_2bed50:
    // 0x2bed50: 0x27a404b0  addiu       $a0, $sp, 0x4B0
    ctx->pc = 0x2bed50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_2bed54:
    // 0x2bed54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bed54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bed58:
    // 0x2bed58: 0x240600dc  addiu       $a2, $zero, 0xDC
    ctx->pc = 0x2bed58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
label_2bed5c:
    // 0x2bed5c: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x2bed5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2bed60:
    // 0x2bed60: 0xc04f8e4  jal         func_13E390
label_2bed64:
    if (ctx->pc == 0x2BED64u) {
        ctx->pc = 0x2BED64u;
            // 0x2bed64: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x2BED68u;
        goto label_2bed68;
    }
    ctx->pc = 0x2BED60u;
    SET_GPR_U32(ctx, 31, 0x2BED68u);
    ctx->pc = 0x2BED64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BED60u;
            // 0x2bed64: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BED68u; }
        if (ctx->pc != 0x2BED68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BED68u; }
        if (ctx->pc != 0x2BED68u) { return; }
    }
    ctx->pc = 0x2BED68u;
label_2bed68:
    // 0x2bed68: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2bed68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2bed6c:
    // 0x2bed6c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bed6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bed70:
    // 0x2bed70: 0x84235048  lh          $v1, 0x5048($at)
    ctx->pc = 0x2bed70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20552)));
label_2bed74:
    // 0x2bed74: 0x27a504b0  addiu       $a1, $sp, 0x4B0
    ctx->pc = 0x2bed74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_2bed78:
    // 0x2bed78: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2bed78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2bed7c:
    // 0x2bed7c: 0x24630016  addiu       $v1, $v1, 0x16
    ctx->pc = 0x2bed7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
label_2bed80:
    // 0x2bed80: 0x8422504a  lh          $v0, 0x504A($at)
    ctx->pc = 0x2bed80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20554)));
label_2bed84:
    // 0x2bed84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bed84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bed88:
    // 0x2bed88: 0x0  nop
    ctx->pc = 0x2bed88u;
    // NOP
label_2bed8c:
    // 0x2bed8c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x2bed8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2bed90:
    // 0x2bed90: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x2bed90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_2bed94:
    // 0x2bed94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bed94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bed98:
    // 0x2bed98: 0xc087f98  jal         func_21FE60
label_2bed9c:
    if (ctx->pc == 0x2BED9Cu) {
        ctx->pc = 0x2BED9Cu;
            // 0x2bed9c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2BEDA0u;
        goto label_2beda0;
    }
    ctx->pc = 0x2BED98u;
    SET_GPR_U32(ctx, 31, 0x2BEDA0u);
    ctx->pc = 0x2BED9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BED98u;
            // 0x2bed9c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEDA0u; }
        if (ctx->pc != 0x2BEDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEDA0u; }
        if (ctx->pc != 0x2BEDA0u) { return; }
    }
    ctx->pc = 0x2BEDA0u;
label_2beda0:
    // 0x2beda0: 0x27a404c0  addiu       $a0, $sp, 0x4C0
    ctx->pc = 0x2beda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_2beda4:
    // 0x2beda4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2beda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2beda8:
    // 0x2beda8: 0x240600ee  addiu       $a2, $zero, 0xEE
    ctx->pc = 0x2beda8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
label_2bedac:
    // 0x2bedac: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x2bedacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2bedb0:
    // 0x2bedb0: 0xc04f8e4  jal         func_13E390
label_2bedb4:
    if (ctx->pc == 0x2BEDB4u) {
        ctx->pc = 0x2BEDB4u;
            // 0x2bedb4: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x2BEDB8u;
        goto label_2bedb8;
    }
    ctx->pc = 0x2BEDB0u;
    SET_GPR_U32(ctx, 31, 0x2BEDB8u);
    ctx->pc = 0x2BEDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEDB0u;
            // 0x2bedb4: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEDB8u; }
        if (ctx->pc != 0x2BEDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEDB8u; }
        if (ctx->pc != 0x2BEDB8u) { return; }
    }
    ctx->pc = 0x2BEDB8u;
label_2bedb8:
    // 0x2bedb8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2bedb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2bedbc:
    // 0x2bedbc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bedbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bedc0:
    // 0x2bedc0: 0x84235050  lh          $v1, 0x5050($at)
    ctx->pc = 0x2bedc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20560)));
label_2bedc4:
    // 0x2bedc4: 0x27a504c0  addiu       $a1, $sp, 0x4C0
    ctx->pc = 0x2bedc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_2bedc8:
    // 0x2bedc8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2bedc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2bedcc:
    // 0x2bedcc: 0x24630016  addiu       $v1, $v1, 0x16
    ctx->pc = 0x2bedccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
label_2bedd0:
    // 0x2bedd0: 0x84225052  lh          $v0, 0x5052($at)
    ctx->pc = 0x2bedd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20562)));
label_2bedd4:
    // 0x2bedd4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bedd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bedd8:
    // 0x2bedd8: 0x0  nop
    ctx->pc = 0x2bedd8u;
    // NOP
label_2beddc:
    // 0x2beddc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x2beddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2bede0:
    // 0x2bede0: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x2bede0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_2bede4:
    // 0x2bede4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bede4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bede8:
    // 0x2bede8: 0xc087f98  jal         func_21FE60
label_2bedec:
    if (ctx->pc == 0x2BEDECu) {
        ctx->pc = 0x2BEDECu;
            // 0x2bedec: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2BEDF0u;
        goto label_2bedf0;
    }
    ctx->pc = 0x2BEDE8u;
    SET_GPR_U32(ctx, 31, 0x2BEDF0u);
    ctx->pc = 0x2BEDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEDE8u;
            // 0x2bedec: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEDF0u; }
        if (ctx->pc != 0x2BEDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEDF0u; }
        if (ctx->pc != 0x2BEDF0u) { return; }
    }
    ctx->pc = 0x2BEDF0u;
label_2bedf0:
    // 0x2bedf0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2bedf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2bedf4:
    // 0x2bedf4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2bedf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bedf8:
    // 0x2bedf8: 0x84235030  lh          $v1, 0x5030($at)
    ctx->pc = 0x2bedf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20528)));
label_2bedfc:
    // 0x2bedfc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2bedfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bee00:
    // 0x2bee00: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2bee00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2bee04:
    // 0x2bee04: 0x2471001d  addiu       $s1, $v1, 0x1D
    ctx->pc = 0x2bee04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 29));
label_2bee08:
    // 0x2bee08: 0x84225032  lh          $v0, 0x5032($at)
    ctx->pc = 0x2bee08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20530)));
label_2bee0c:
    // 0x2bee0c: 0x24520041  addiu       $s2, $v0, 0x41
    ctx->pc = 0x2bee0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 65));
label_2bee10:
    // 0x2bee10: 0x8e020910  lw          $v0, 0x910($s0)
    ctx->pc = 0x2bee10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2320)));
label_2bee14:
    // 0x2bee14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bee14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bee18:
    // 0x2bee18: 0x2631804  sllv        $v1, $v1, $s3
    ctx->pc = 0x2bee18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
label_2bee1c:
    // 0x2bee1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2bee1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2bee20:
    // 0x2bee20: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2bee24:
    if (ctx->pc == 0x2BEE24u) {
        ctx->pc = 0x2BEE28u;
        goto label_2bee28;
    }
    ctx->pc = 0x2BEE20u;
    {
        const bool branch_taken_0x2bee20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bee20) {
            ctx->pc = 0x2BEE6Cu;
            goto label_2bee6c;
        }
    }
    ctx->pc = 0x2BEE28u;
label_2bee28:
    // 0x2bee28: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2bee28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2bee2c:
    // 0x2bee2c: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x2bee2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2bee30:
    // 0x2bee30: 0x24425060  addiu       $v0, $v0, 0x5060
    ctx->pc = 0x2bee30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20576));
label_2bee34:
    // 0x2bee34: 0x27a404d0  addiu       $a0, $sp, 0x4D0
    ctx->pc = 0x2bee34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_2bee38:
    // 0x2bee38: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2bee38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2bee3c:
    // 0x2bee3c: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2bee3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2bee40:
    // 0x2bee40: 0x84460002  lh          $a2, 0x2($v0)
    ctx->pc = 0x2bee40u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2bee44:
    // 0x2bee44: 0xc04f8e4  jal         func_13E390
label_2bee48:
    if (ctx->pc == 0x2BEE48u) {
        ctx->pc = 0x2BEE48u;
            // 0x2bee48: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BEE4Cu;
        goto label_2bee4c;
    }
    ctx->pc = 0x2BEE44u;
    SET_GPR_U32(ctx, 31, 0x2BEE4Cu);
    ctx->pc = 0x2BEE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEE44u;
            // 0x2bee48: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEE4Cu; }
        if (ctx->pc != 0x2BEE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEE4Cu; }
        if (ctx->pc != 0x2BEE4Cu) { return; }
    }
    ctx->pc = 0x2BEE4Cu;
label_2bee4c:
    // 0x2bee4c: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x2bee4cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bee50:
    // 0x2bee50: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bee50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bee54:
    // 0x2bee54: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2bee54u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bee58:
    // 0x2bee58: 0x27a504d0  addiu       $a1, $sp, 0x4D0
    ctx->pc = 0x2bee58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_2bee5c:
    // 0x2bee5c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x2bee5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2bee60:
    // 0x2bee60: 0xc087f98  jal         func_21FE60
label_2bee64:
    if (ctx->pc == 0x2BEE64u) {
        ctx->pc = 0x2BEE64u;
            // 0x2bee64: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2BEE68u;
        goto label_2bee68;
    }
    ctx->pc = 0x2BEE60u;
    SET_GPR_U32(ctx, 31, 0x2BEE68u);
    ctx->pc = 0x2BEE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEE60u;
            // 0x2bee64: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEE68u; }
        if (ctx->pc != 0x2BEE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEE68u; }
        if (ctx->pc != 0x2BEE68u) { return; }
    }
    ctx->pc = 0x2BEE68u;
label_2bee68:
    // 0x2bee68: 0x26310016  addiu       $s1, $s1, 0x16
    ctx->pc = 0x2bee68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 22));
label_2bee6c:
    // 0x2bee6c: 0x0  nop
    ctx->pc = 0x2bee6cu;
    // NOP
label_2bee70:
    // 0x2bee70: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2bee70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2bee74:
    // 0x2bee74: 0x2a620008  slti        $v0, $s3, 0x8
    ctx->pc = 0x2bee74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
label_2bee78:
    // 0x2bee78: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_2bee7c:
    if (ctx->pc == 0x2BEE7Cu) {
        ctx->pc = 0x2BEE7Cu;
            // 0x2bee7c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x2BEE80u;
        goto label_2bee80;
    }
    ctx->pc = 0x2BEE78u;
    {
        const bool branch_taken_0x2bee78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEE78u;
            // 0x2bee7c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee78) {
            ctx->pc = 0x2BEE10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bee10;
        }
    }
    ctx->pc = 0x2BEE80u;
label_2bee80:
    // 0x2bee80: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2bee80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2bee84:
    // 0x2bee84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2bee84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bee88:
    // 0x2bee88: 0x84235030  lh          $v1, 0x5030($at)
    ctx->pc = 0x2bee88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20528)));
label_2bee8c:
    // 0x2bee8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2bee8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bee90:
    // 0x2bee90: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2bee90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_2bee94:
    // 0x2bee94: 0x2473001d  addiu       $s3, $v1, 0x1D
    ctx->pc = 0x2bee94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 29));
label_2bee98:
    // 0x2bee98: 0x84225032  lh          $v0, 0x5032($at)
    ctx->pc = 0x2bee98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20530)));
label_2bee9c:
    // 0x2bee9c: 0x24540073  addiu       $s4, $v0, 0x73
    ctx->pc = 0x2bee9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 115));
label_2beea0:
    // 0x2beea0: 0x8e020914  lw          $v0, 0x914($s0)
    ctx->pc = 0x2beea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2324)));
label_2beea4:
    // 0x2beea4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2beea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2beea8:
    // 0x2beea8: 0x2231804  sllv        $v1, $v1, $s1
    ctx->pc = 0x2beea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
label_2beeac:
    // 0x2beeac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2beeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2beeb0:
    // 0x2beeb0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2beeb4:
    if (ctx->pc == 0x2BEEB4u) {
        ctx->pc = 0x2BEEB8u;
        goto label_2beeb8;
    }
    ctx->pc = 0x2BEEB0u;
    {
        const bool branch_taken_0x2beeb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2beeb0) {
            ctx->pc = 0x2BEEFCu;
            goto label_2beefc;
        }
    }
    ctx->pc = 0x2BEEB8u;
label_2beeb8:
    // 0x2beeb8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2beeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2beebc:
    // 0x2beebc: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x2beebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2beec0:
    // 0x2beec0: 0x24425060  addiu       $v0, $v0, 0x5060
    ctx->pc = 0x2beec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20576));
label_2beec4:
    // 0x2beec4: 0x27a404e0  addiu       $a0, $sp, 0x4E0
    ctx->pc = 0x2beec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_2beec8:
    // 0x2beec8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2beec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2beecc:
    // 0x2beecc: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2beeccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2beed0:
    // 0x2beed0: 0x84460002  lh          $a2, 0x2($v0)
    ctx->pc = 0x2beed0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2beed4:
    // 0x2beed4: 0xc04f8e4  jal         func_13E390
label_2beed8:
    if (ctx->pc == 0x2BEED8u) {
        ctx->pc = 0x2BEED8u;
            // 0x2beed8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BEEDCu;
        goto label_2beedc;
    }
    ctx->pc = 0x2BEED4u;
    SET_GPR_U32(ctx, 31, 0x2BEEDCu);
    ctx->pc = 0x2BEED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEED4u;
            // 0x2beed8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEEDCu; }
        if (ctx->pc != 0x2BEEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEEDCu; }
        if (ctx->pc != 0x2BEEDCu) { return; }
    }
    ctx->pc = 0x2BEEDCu;
label_2beedc:
    // 0x2beedc: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x2beedcu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2beee0:
    // 0x2beee0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2beee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2beee4:
    // 0x2beee4: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x2beee4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2beee8:
    // 0x2beee8: 0x27a504e0  addiu       $a1, $sp, 0x4E0
    ctx->pc = 0x2beee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_2beeec:
    // 0x2beeec: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x2beeecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2beef0:
    // 0x2beef0: 0xc087f98  jal         func_21FE60
label_2beef4:
    if (ctx->pc == 0x2BEEF4u) {
        ctx->pc = 0x2BEEF4u;
            // 0x2beef4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2BEEF8u;
        goto label_2beef8;
    }
    ctx->pc = 0x2BEEF0u;
    SET_GPR_U32(ctx, 31, 0x2BEEF8u);
    ctx->pc = 0x2BEEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEEF0u;
            // 0x2beef4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEEF8u; }
        if (ctx->pc != 0x2BEEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEEF8u; }
        if (ctx->pc != 0x2BEEF8u) { return; }
    }
    ctx->pc = 0x2BEEF8u;
label_2beef8:
    // 0x2beef8: 0x26730016  addiu       $s3, $s3, 0x16
    ctx->pc = 0x2beef8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 22));
label_2beefc:
    // 0x2beefc: 0x0  nop
    ctx->pc = 0x2beefcu;
    // NOP
label_2bef00:
    // 0x2bef00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2bef00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2bef04:
    // 0x2bef04: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x2bef04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_2bef08:
    // 0x2bef08: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_2bef0c:
    if (ctx->pc == 0x2BEF0Cu) {
        ctx->pc = 0x2BEF0Cu;
            // 0x2bef0c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x2BEF10u;
        goto label_2bef10;
    }
    ctx->pc = 0x2BEF08u;
    {
        const bool branch_taken_0x2bef08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEF08u;
            // 0x2bef0c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef08) {
            ctx->pc = 0x2BEEA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2beea0;
        }
    }
    ctx->pc = 0x2BEF10u;
label_2bef10:
    // 0x2bef10: 0x27a404f0  addiu       $a0, $sp, 0x4F0
    ctx->pc = 0x2bef10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_2bef14:
    // 0x2bef14: 0x240500fb  addiu       $a1, $zero, 0xFB
    ctx->pc = 0x2bef14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
label_2bef18:
    // 0x2bef18: 0x2406003a  addiu       $a2, $zero, 0x3A
    ctx->pc = 0x2bef18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_2bef1c:
    // 0x2bef1c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x2bef1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2bef20:
    // 0x2bef20: 0xc04f8e4  jal         func_13E390
label_2bef24:
    if (ctx->pc == 0x2BEF24u) {
        ctx->pc = 0x2BEF24u;
            // 0x2bef24: 0x2408013c  addiu       $t0, $zero, 0x13C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
        ctx->pc = 0x2BEF28u;
        goto label_2bef28;
    }
    ctx->pc = 0x2BEF20u;
    SET_GPR_U32(ctx, 31, 0x2BEF28u);
    ctx->pc = 0x2BEF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEF20u;
            // 0x2bef24: 0x2408013c  addiu       $t0, $zero, 0x13C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF28u; }
        if (ctx->pc != 0x2BEF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF28u; }
        if (ctx->pc != 0x2BEF28u) { return; }
    }
    ctx->pc = 0x2BEF28u;
label_2bef28:
    // 0x2bef28: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2bef28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2bef2c:
    // 0x2bef2c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bef30:
    // 0x2bef30: 0x27a504f0  addiu       $a1, $sp, 0x4F0
    ctx->pc = 0x2bef30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_2bef34:
    // 0x2bef34: 0x24c65080  addiu       $a2, $a2, 0x5080
    ctx->pc = 0x2bef34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20608));
label_2bef38:
    // 0x2bef38: 0xc08a338  jal         func_228CE0
label_2bef3c:
    if (ctx->pc == 0x2BEF3Cu) {
        ctx->pc = 0x2BEF3Cu;
            // 0x2bef3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BEF40u;
        goto label_2bef40;
    }
    ctx->pc = 0x2BEF38u;
    SET_GPR_U32(ctx, 31, 0x2BEF40u);
    ctx->pc = 0x2BEF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEF38u;
            // 0x2bef3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF40u; }
        if (ctx->pc != 0x2BEF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF40u; }
        if (ctx->pc != 0x2BEF40u) { return; }
    }
    ctx->pc = 0x2BEF40u;
label_2bef40:
    // 0x2bef40: 0xc04d1a4  jal         func_134690
label_2bef44:
    if (ctx->pc == 0x2BEF44u) {
        ctx->pc = 0x2BEF44u;
            // 0x2bef44: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2BEF48u;
        goto label_2bef48;
    }
    ctx->pc = 0x2BEF40u;
    SET_GPR_U32(ctx, 31, 0x2BEF48u);
    ctx->pc = 0x2BEF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEF40u;
            // 0x2bef44: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF48u; }
        if (ctx->pc != 0x2BEF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF48u; }
        if (ctx->pc != 0x2BEF48u) { return; }
    }
    ctx->pc = 0x2BEF48u;
label_2bef48:
    // 0x2bef48: 0x8e190170  lw          $t9, 0x170($s0)
    ctx->pc = 0x2bef48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
label_2bef4c:
    // 0x2bef4c: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x2bef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_2bef50:
    // 0x2bef50: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2bef50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2bef54:
    // 0x2bef54: 0x320f809  jalr        $t9
label_2bef58:
    if (ctx->pc == 0x2BEF58u) {
        ctx->pc = 0x2BEF58u;
            // 0x2bef58: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x2BEF5Cu;
        goto label_2bef5c;
    }
    ctx->pc = 0x2BEF54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BEF5Cu);
        ctx->pc = 0x2BEF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEF54u;
            // 0x2bef58: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BEF5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF5Cu; }
            if (ctx->pc != 0x2BEF5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2BEF5Cu;
label_2bef5c:
    // 0x2bef5c: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x2bef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_2bef60:
    // 0x2bef60: 0xc04c574  jal         func_1315D0
label_2bef64:
    if (ctx->pc == 0x2BEF64u) {
        ctx->pc = 0x2BEF64u;
            // 0x2bef64: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x2BEF68u;
        goto label_2bef68;
    }
    ctx->pc = 0x2BEF60u;
    SET_GPR_U32(ctx, 31, 0x2BEF68u);
    ctx->pc = 0x2BEF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEF60u;
            // 0x2bef64: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF68u; }
        if (ctx->pc != 0x2BEF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF68u; }
        if (ctx->pc != 0x2BEF68u) { return; }
    }
    ctx->pc = 0x2BEF68u;
label_2bef68:
    // 0x2bef68: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2bef68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_2bef6c:
    // 0x2bef6c: 0xc050e28  jal         func_1438A0
label_2bef70:
    if (ctx->pc == 0x2BEF70u) {
        ctx->pc = 0x2BEF70u;
            // 0x2bef70: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x2BEF74u;
        goto label_2bef74;
    }
    ctx->pc = 0x2BEF6Cu;
    SET_GPR_U32(ctx, 31, 0x2BEF74u);
    ctx->pc = 0x2BEF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEF6Cu;
            // 0x2bef70: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438A0u;
    if (runtime->hasFunction(0x1438A0u)) {
        auto targetFn = runtime->lookupFunction(0x1438A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF74u; }
        if (ctx->pc != 0x2BEF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetViewMatrix__FPA4_fPf_0x1438a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEF74u; }
        if (ctx->pc != 0x2BEF74u) { return; }
    }
    ctx->pc = 0x2BEF74u;
label_2bef74:
    // 0x2bef74: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x2bef74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_2bef78:
    // 0x2bef78: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2bef7c:
    if (ctx->pc == 0x2BEF7Cu) {
        ctx->pc = 0x2BEF80u;
        goto label_2bef80;
    }
    ctx->pc = 0x2BEF78u;
    {
        const bool branch_taken_0x2bef78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bef78) {
            ctx->pc = 0x2BEFECu;
            goto label_2befec;
        }
    }
    ctx->pc = 0x2BEF80u;
label_2bef80:
    // 0x2bef80: 0x8e0301d0  lw          $v1, 0x1D0($s0)
    ctx->pc = 0x2bef80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
label_2bef84:
    // 0x2bef84: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bef84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2bef88:
    // 0x2bef88: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_2bef8c:
    if (ctx->pc == 0x2BEF8Cu) {
        ctx->pc = 0x2BEF90u;
        goto label_2bef90;
    }
    ctx->pc = 0x2BEF88u;
    {
        const bool branch_taken_0x2bef88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bef88) {
            ctx->pc = 0x2BEFECu;
            goto label_2befec;
        }
    }
    ctx->pc = 0x2BEF90u;
label_2bef90:
    // 0x2bef90: 0x8e0201d8  lw          $v0, 0x1D8($s0)
    ctx->pc = 0x2bef90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
label_2bef94:
    // 0x2bef94: 0x28410011  slti        $at, $v0, 0x11
    ctx->pc = 0x2bef94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
label_2bef98:
    // 0x2bef98: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
label_2bef9c:
    if (ctx->pc == 0x2BEF9Cu) {
        ctx->pc = 0x2BEFA0u;
        goto label_2befa0;
    }
    ctx->pc = 0x2BEF98u;
    {
        const bool branch_taken_0x2bef98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bef98) {
            ctx->pc = 0x2BEFECu;
            goto label_2befec;
        }
    }
    ctx->pc = 0x2BEFA0u;
label_2befa0:
    // 0x2befa0: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x2befa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_2befa4:
    // 0x2befa4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2befa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2befa8:
    // 0x2befa8: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x2befa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_2befac:
    // 0x2befac: 0x240700e8  addiu       $a3, $zero, 0xE8
    ctx->pc = 0x2befacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
label_2befb0:
    // 0x2befb0: 0xc04f8e4  jal         func_13E390
label_2befb4:
    if (ctx->pc == 0x2BEFB4u) {
        ctx->pc = 0x2BEFB4u;
            // 0x2befb4: 0x2408011a  addiu       $t0, $zero, 0x11A (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
        ctx->pc = 0x2BEFB8u;
        goto label_2befb8;
    }
    ctx->pc = 0x2BEFB0u;
    SET_GPR_U32(ctx, 31, 0x2BEFB8u);
    ctx->pc = 0x2BEFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEFB0u;
            // 0x2befb4: 0x2408011a  addiu       $t0, $zero, 0x11A (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEFB8u; }
        if (ctx->pc != 0x2BEFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEFB8u; }
        if (ctx->pc != 0x2BEFB8u) { return; }
    }
    ctx->pc = 0x2BEFB8u;
label_2befb8:
    // 0x2befb8: 0xc088050  jal         func_220140
label_2befbc:
    if (ctx->pc == 0x2BEFBCu) {
        ctx->pc = 0x2BEFBCu;
            // 0x2befbc: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x2BEFC0u;
        goto label_2befc0;
    }
    ctx->pc = 0x2BEFB8u;
    SET_GPR_U32(ctx, 31, 0x2BEFC0u);
    ctx->pc = 0x2BEFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEFB8u;
            // 0x2befbc: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220140u;
    if (runtime->hasFunction(0x220140u)) {
        auto targetFn = runtime->lookupFunction(0x220140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEFC0u; }
        if (ctx->pc != 0x2BEFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuScissor__F9mgRect_i__0x220140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEFC0u; }
        if (ctx->pc != 0x2BEFC0u) { return; }
    }
    ctx->pc = 0x2BEFC0u;
label_2befc0:
    // 0x2befc0: 0x8e0501b4  lw          $a1, 0x1B4($s0)
    ctx->pc = 0x2befc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_2befc4:
    // 0x2befc4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2befc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2befc8:
    // 0x2befc8: 0xc04ba14  jal         func_12E850
label_2befcc:
    if (ctx->pc == 0x2BEFCCu) {
        ctx->pc = 0x2BEFCCu;
            // 0x2befcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BEFD0u;
        goto label_2befd0;
    }
    ctx->pc = 0x2BEFC8u;
    SET_GPR_U32(ctx, 31, 0x2BEFD0u);
    ctx->pc = 0x2BEFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEFC8u;
            // 0x2befcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEFD0u; }
        if (ctx->pc != 0x2BEFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEFD0u; }
        if (ctx->pc != 0x2BEFD0u) { return; }
    }
    ctx->pc = 0x2BEFD0u;
label_2befd0:
    // 0x2befd0: 0x8e0401b8  lw          $a0, 0x1B8($s0)
    ctx->pc = 0x2befd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_2befd4:
    // 0x2befd4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2befd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2befd8:
    // 0x2befd8: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x2befd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_2befdc:
    // 0x2befdc: 0x320f809  jalr        $t9
label_2befe0:
    if (ctx->pc == 0x2BEFE0u) {
        ctx->pc = 0x2BEFE4u;
        goto label_2befe4;
    }
    ctx->pc = 0x2BEFDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BEFE4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BEFE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BEFE4u; }
            if (ctx->pc != 0x2BEFE4u) { return; }
        }
        }
    }
    ctx->pc = 0x2BEFE4u;
label_2befe4:
    // 0x2befe4: 0xc088070  jal         func_2201C0
label_2befe8:
    if (ctx->pc == 0x2BEFE8u) {
        ctx->pc = 0x2BEFECu;
        goto label_2befec;
    }
    ctx->pc = 0x2BEFE4u;
    SET_GPR_U32(ctx, 31, 0x2BEFECu);
    ctx->pc = 0x2201C0u;
    if (runtime->hasFunction(0x2201C0u)) {
        auto targetFn = runtime->lookupFunction(0x2201C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEFECu; }
        if (ctx->pc != 0x2BEFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMenuScissor__Fv_0x2201c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEFECu; }
        if (ctx->pc != 0x2BEFECu) { return; }
    }
    ctx->pc = 0x2BEFECu;
label_2befec:
    // 0x2befec: 0x8f829c3c  lw          $v0, -0x63C4($gp)
    ctx->pc = 0x2befecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941756)));
label_2beff0:
    // 0x2beff0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2beff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2beff4:
    // 0x2beff4: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2beff4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2beff8:
    // 0x2beff8: 0xc04ba14  jal         func_12E850
label_2beffc:
    if (ctx->pc == 0x2BEFFCu) {
        ctx->pc = 0x2BEFFCu;
            // 0x2beffc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF000u;
        goto label_2bf000;
    }
    ctx->pc = 0x2BEFF8u;
    SET_GPR_U32(ctx, 31, 0x2BF000u);
    ctx->pc = 0x2BEFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEFF8u;
            // 0x2beffc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF000u; }
        if (ctx->pc != 0x2BF000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF000u; }
        if (ctx->pc != 0x2BF000u) { return; }
    }
    ctx->pc = 0x2BF000u;
label_2bf000:
    // 0x2bf000: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bf000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bf004:
    // 0x2bf004: 0xc04d128  jal         func_1344A0
label_2bf008:
    if (ctx->pc == 0x2BF008u) {
        ctx->pc = 0x2BF008u;
            // 0x2bf008: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2BF00Cu;
        goto label_2bf00c;
    }
    ctx->pc = 0x2BF004u;
    SET_GPR_U32(ctx, 31, 0x2BF00Cu);
    ctx->pc = 0x2BF008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF004u;
            // 0x2bf008: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF00Cu; }
        if (ctx->pc != 0x2BF00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF00Cu; }
        if (ctx->pc != 0x2BF00Cu) { return; }
    }
    ctx->pc = 0x2BF00Cu;
label_2bf00c:
    // 0x2bf00c: 0x8f859c3c  lw          $a1, -0x63C4($gp)
    ctx->pc = 0x2bf00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941756)));
label_2bf010:
    // 0x2bf010: 0xc04d368  jal         func_134DA0
label_2bf014:
    if (ctx->pc == 0x2BF014u) {
        ctx->pc = 0x2BF014u;
            // 0x2bf014: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2BF018u;
        goto label_2bf018;
    }
    ctx->pc = 0x2BF010u;
    SET_GPR_U32(ctx, 31, 0x2BF018u);
    ctx->pc = 0x2BF014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF010u;
            // 0x2bf014: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF018u; }
        if (ctx->pc != 0x2BF018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF018u; }
        if (ctx->pc != 0x2BF018u) { return; }
    }
    ctx->pc = 0x2BF018u;
label_2bf018:
    // 0x2bf018: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2bf018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2bf01c:
    // 0x2bf01c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bf01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bf020:
    // 0x2bf020: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2bf020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bf024:
    // 0x2bf024: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2bf024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bf028:
    // 0x2bf028: 0xc04d320  jal         func_134C80
label_2bf02c:
    if (ctx->pc == 0x2BF02Cu) {
        ctx->pc = 0x2BF02Cu;
            // 0x2bf02c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF030u;
        goto label_2bf030;
    }
    ctx->pc = 0x2BF028u;
    SET_GPR_U32(ctx, 31, 0x2BF030u);
    ctx->pc = 0x2BF02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF028u;
            // 0x2bf02c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF030u; }
        if (ctx->pc != 0x2BF030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF030u; }
        if (ctx->pc != 0x2BF030u) { return; }
    }
    ctx->pc = 0x2BF030u;
label_2bf030:
    // 0x2bf030: 0x27a40500  addiu       $a0, $sp, 0x500
    ctx->pc = 0x2bf030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_2bf034:
    // 0x2bf034: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2bf034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2bf038:
    // 0x2bf038: 0x2406003a  addiu       $a2, $zero, 0x3A
    ctx->pc = 0x2bf038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_2bf03c:
    // 0x2bf03c: 0x240700d6  addiu       $a3, $zero, 0xD6
    ctx->pc = 0x2bf03cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
label_2bf040:
    // 0x2bf040: 0xc04f8e4  jal         func_13E390
label_2bf044:
    if (ctx->pc == 0x2BF044u) {
        ctx->pc = 0x2BF044u;
            // 0x2bf044: 0x24080036  addiu       $t0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->pc = 0x2BF048u;
        goto label_2bf048;
    }
    ctx->pc = 0x2BF040u;
    SET_GPR_U32(ctx, 31, 0x2BF048u);
    ctx->pc = 0x2BF044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF040u;
            // 0x2bf044: 0x24080036  addiu       $t0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF048u; }
        if (ctx->pc != 0x2BF048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF048u; }
        if (ctx->pc != 0x2BF048u) { return; }
    }
    ctx->pc = 0x2BF048u;
label_2bf048:
    // 0x2bf048: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2bf048u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2bf04c:
    // 0x2bf04c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bf04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bf050:
    // 0x2bf050: 0x27a50500  addiu       $a1, $sp, 0x500
    ctx->pc = 0x2bf050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_2bf054:
    // 0x2bf054: 0x24c650a0  addiu       $a2, $a2, 0x50A0
    ctx->pc = 0x2bf054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20640));
label_2bf058:
    // 0x2bf058: 0xc08a338  jal         func_228CE0
label_2bf05c:
    if (ctx->pc == 0x2BF05Cu) {
        ctx->pc = 0x2BF05Cu;
            // 0x2bf05c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BF060u;
        goto label_2bf060;
    }
    ctx->pc = 0x2BF058u;
    SET_GPR_U32(ctx, 31, 0x2BF060u);
    ctx->pc = 0x2BF05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF058u;
            // 0x2bf05c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF060u; }
        if (ctx->pc != 0x2BF060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF060u; }
        if (ctx->pc != 0x2BF060u) { return; }
    }
    ctx->pc = 0x2BF060u;
label_2bf060:
    // 0x2bf060: 0x27a40510  addiu       $a0, $sp, 0x510
    ctx->pc = 0x2bf060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
label_2bf064:
    // 0x2bf064: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2bf064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2bf068:
    // 0x2bf068: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x2bf068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_2bf06c:
    // 0x2bf06c: 0x240700d6  addiu       $a3, $zero, 0xD6
    ctx->pc = 0x2bf06cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
label_2bf070:
    // 0x2bf070: 0xc04f8e4  jal         func_13E390
label_2bf074:
    if (ctx->pc == 0x2BF074u) {
        ctx->pc = 0x2BF074u;
            // 0x2bf074: 0x24080092  addiu       $t0, $zero, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
        ctx->pc = 0x2BF078u;
        goto label_2bf078;
    }
    ctx->pc = 0x2BF070u;
    SET_GPR_U32(ctx, 31, 0x2BF078u);
    ctx->pc = 0x2BF074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF070u;
            // 0x2bf074: 0x24080092  addiu       $t0, $zero, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF078u; }
        if (ctx->pc != 0x2BF078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF078u; }
        if (ctx->pc != 0x2BF078u) { return; }
    }
    ctx->pc = 0x2BF078u;
label_2bf078:
    // 0x2bf078: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2bf078u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2bf07c:
    // 0x2bf07c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bf07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bf080:
    // 0x2bf080: 0x27a50510  addiu       $a1, $sp, 0x510
    ctx->pc = 0x2bf080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
label_2bf084:
    // 0x2bf084: 0x24c650b8  addiu       $a2, $a2, 0x50B8
    ctx->pc = 0x2bf084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20664));
label_2bf088:
    // 0x2bf088: 0xc08a338  jal         func_228CE0
label_2bf08c:
    if (ctx->pc == 0x2BF08Cu) {
        ctx->pc = 0x2BF08Cu;
            // 0x2bf08c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BF090u;
        goto label_2bf090;
    }
    ctx->pc = 0x2BF088u;
    SET_GPR_U32(ctx, 31, 0x2BF090u);
    ctx->pc = 0x2BF08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF088u;
            // 0x2bf08c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF090u; }
        if (ctx->pc != 0x2BF090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF090u; }
        if (ctx->pc != 0x2BF090u) { return; }
    }
    ctx->pc = 0x2BF090u;
label_2bf090:
    // 0x2bf090: 0x27a40520  addiu       $a0, $sp, 0x520
    ctx->pc = 0x2bf090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
label_2bf094:
    // 0x2bf094: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2bf094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2bf098:
    // 0x2bf098: 0x24060102  addiu       $a2, $zero, 0x102
    ctx->pc = 0x2bf098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_2bf09c:
    // 0x2bf09c: 0x240700d6  addiu       $a3, $zero, 0xD6
    ctx->pc = 0x2bf09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
label_2bf0a0:
    // 0x2bf0a0: 0xc04f8e4  jal         func_13E390
label_2bf0a4:
    if (ctx->pc == 0x2BF0A4u) {
        ctx->pc = 0x2BF0A4u;
            // 0x2bf0a4: 0x24080032  addiu       $t0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x2BF0A8u;
        goto label_2bf0a8;
    }
    ctx->pc = 0x2BF0A0u;
    SET_GPR_U32(ctx, 31, 0x2BF0A8u);
    ctx->pc = 0x2BF0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF0A0u;
            // 0x2bf0a4: 0x24080032  addiu       $t0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF0A8u; }
        if (ctx->pc != 0x2BF0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF0A8u; }
        if (ctx->pc != 0x2BF0A8u) { return; }
    }
    ctx->pc = 0x2BF0A8u;
label_2bf0a8:
    // 0x2bf0a8: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2bf0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2bf0ac:
    // 0x2bf0ac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bf0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bf0b0:
    // 0x2bf0b0: 0x27a50520  addiu       $a1, $sp, 0x520
    ctx->pc = 0x2bf0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
label_2bf0b4:
    // 0x2bf0b4: 0x24c650d0  addiu       $a2, $a2, 0x50D0
    ctx->pc = 0x2bf0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20688));
label_2bf0b8:
    // 0x2bf0b8: 0xc08a338  jal         func_228CE0
label_2bf0bc:
    if (ctx->pc == 0x2BF0BCu) {
        ctx->pc = 0x2BF0BCu;
            // 0x2bf0bc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BF0C0u;
        goto label_2bf0c0;
    }
    ctx->pc = 0x2BF0B8u;
    SET_GPR_U32(ctx, 31, 0x2BF0C0u);
    ctx->pc = 0x2BF0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF0B8u;
            // 0x2bf0bc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF0C0u; }
        if (ctx->pc != 0x2BF0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF0C0u; }
        if (ctx->pc != 0x2BF0C0u) { return; }
    }
    ctx->pc = 0x2BF0C0u;
label_2bf0c0:
    // 0x2bf0c0: 0xc04d1a4  jal         func_134690
label_2bf0c4:
    if (ctx->pc == 0x2BF0C4u) {
        ctx->pc = 0x2BF0C4u;
            // 0x2bf0c4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2BF0C8u;
        goto label_2bf0c8;
    }
    ctx->pc = 0x2BF0C0u;
    SET_GPR_U32(ctx, 31, 0x2BF0C8u);
    ctx->pc = 0x2BF0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF0C0u;
            // 0x2bf0c4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF0C8u; }
        if (ctx->pc != 0x2BF0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF0C8u; }
        if (ctx->pc != 0x2BF0C8u) { return; }
    }
    ctx->pc = 0x2BF0C8u;
label_2bf0c8:
    // 0x2bf0c8: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x2bf0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2bf0cc:
    // 0x2bf0cc: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2bf0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_2bf0d0:
    // 0x2bf0d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bf0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf0d4:
    // 0x2bf0d4: 0x2406014a  addiu       $a2, $zero, 0x14A
    ctx->pc = 0x2bf0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
label_2bf0d8:
    // 0x2bf0d8: 0xc04f8e4  jal         func_13E390
label_2bf0dc:
    if (ctx->pc == 0x2BF0DCu) {
        ctx->pc = 0x2BF0DCu;
            // 0x2bf0dc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF0E0u;
        goto label_2bf0e0;
    }
    ctx->pc = 0x2BF0D8u;
    SET_GPR_U32(ctx, 31, 0x2BF0E0u);
    ctx->pc = 0x2BF0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF0D8u;
            // 0x2bf0dc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF0E0u; }
        if (ctx->pc != 0x2BF0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF0E0u; }
        if (ctx->pc != 0x2BF0E0u) { return; }
    }
    ctx->pc = 0x2BF0E0u;
label_2bf0e0:
    // 0x2bf0e0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bf0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bf0e4:
    // 0x2bf0e4: 0xc04d128  jal         func_1344A0
label_2bf0e8:
    if (ctx->pc == 0x2BF0E8u) {
        ctx->pc = 0x2BF0E8u;
            // 0x2bf0e8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2BF0ECu;
        goto label_2bf0ec;
    }
    ctx->pc = 0x2BF0E4u;
    SET_GPR_U32(ctx, 31, 0x2BF0ECu);
    ctx->pc = 0x2BF0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF0E4u;
            // 0x2bf0e8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF0ECu; }
        if (ctx->pc != 0x2BF0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF0ECu; }
        if (ctx->pc != 0x2BF0ECu) { return; }
    }
    ctx->pc = 0x2BF0ECu;
label_2bf0ec:
    // 0x2bf0ec: 0x8f859c3c  lw          $a1, -0x63C4($gp)
    ctx->pc = 0x2bf0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941756)));
label_2bf0f0:
    // 0x2bf0f0: 0xc04d368  jal         func_134DA0
label_2bf0f4:
    if (ctx->pc == 0x2BF0F4u) {
        ctx->pc = 0x2BF0F4u;
            // 0x2bf0f4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2BF0F8u;
        goto label_2bf0f8;
    }
    ctx->pc = 0x2BF0F0u;
    SET_GPR_U32(ctx, 31, 0x2BF0F8u);
    ctx->pc = 0x2BF0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF0F0u;
            // 0x2bf0f4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF0F8u; }
        if (ctx->pc != 0x2BF0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF0F8u; }
        if (ctx->pc != 0x2BF0F8u) { return; }
    }
    ctx->pc = 0x2BF0F8u;
label_2bf0f8:
    // 0x2bf0f8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2bf0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2bf0fc:
    // 0x2bf0fc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bf0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bf100:
    // 0x2bf100: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2bf100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bf104:
    // 0x2bf104: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2bf104u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bf108:
    // 0x2bf108: 0xc04d320  jal         func_134C80
label_2bf10c:
    if (ctx->pc == 0x2BF10Cu) {
        ctx->pc = 0x2BF10Cu;
            // 0x2bf10c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF110u;
        goto label_2bf110;
    }
    ctx->pc = 0x2BF108u;
    SET_GPR_U32(ctx, 31, 0x2BF110u);
    ctx->pc = 0x2BF10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF108u;
            // 0x2bf10c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF110u; }
        if (ctx->pc != 0x2BF110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF110u; }
        if (ctx->pc != 0x2BF110u) { return; }
    }
    ctx->pc = 0x2BF110u;
label_2bf110:
    // 0x2bf110: 0x8e050904  lw          $a1, 0x904($s0)
    ctx->pc = 0x2bf110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2308)));
label_2bf114:
    // 0x2bf114: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bf114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bf118:
    // 0x2bf118: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bf118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf11c:
    // 0x2bf11c: 0x24070156  addiu       $a3, $zero, 0x156
    ctx->pc = 0x2bf11cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
label_2bf120:
    // 0x2bf120: 0x24080052  addiu       $t0, $zero, 0x52
    ctx->pc = 0x2bf120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_2bf124:
    // 0x2bf124: 0x27a901e0  addiu       $t1, $sp, 0x1E0
    ctx->pc = 0x2bf124u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_2bf128:
    // 0x2bf128: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x2bf128u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bf12c:
    // 0x2bf12c: 0xc0886ac  jal         func_221AB0
label_2bf130:
    if (ctx->pc == 0x2BF130u) {
        ctx->pc = 0x2BF130u;
            // 0x2bf130: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF134u;
        goto label_2bf134;
    }
    ctx->pc = 0x2BF12Cu;
    SET_GPR_U32(ctx, 31, 0x2BF134u);
    ctx->pc = 0x2BF130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF12Cu;
            // 0x2bf130: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF134u; }
        if (ctx->pc != 0x2BF134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF134u; }
        if (ctx->pc != 0x2BF134u) { return; }
    }
    ctx->pc = 0x2BF134u;
label_2bf134:
    // 0x2bf134: 0x8e050908  lw          $a1, 0x908($s0)
    ctx->pc = 0x2bf134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2312)));
label_2bf138:
    // 0x2bf138: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bf138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bf13c:
    // 0x2bf13c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bf13cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf140:
    // 0x2bf140: 0x240701ae  addiu       $a3, $zero, 0x1AE
    ctx->pc = 0x2bf140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
label_2bf144:
    // 0x2bf144: 0x24080052  addiu       $t0, $zero, 0x52
    ctx->pc = 0x2bf144u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_2bf148:
    // 0x2bf148: 0x27a901e0  addiu       $t1, $sp, 0x1E0
    ctx->pc = 0x2bf148u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_2bf14c:
    // 0x2bf14c: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x2bf14cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bf150:
    // 0x2bf150: 0xc0886ac  jal         func_221AB0
label_2bf154:
    if (ctx->pc == 0x2BF154u) {
        ctx->pc = 0x2BF154u;
            // 0x2bf154: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF158u;
        goto label_2bf158;
    }
    ctx->pc = 0x2BF150u;
    SET_GPR_U32(ctx, 31, 0x2BF158u);
    ctx->pc = 0x2BF154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF150u;
            // 0x2bf154: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF158u; }
        if (ctx->pc != 0x2BF158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF158u; }
        if (ctx->pc != 0x2BF158u) { return; }
    }
    ctx->pc = 0x2BF158u;
label_2bf158:
    // 0x2bf158: 0x8e05090c  lw          $a1, 0x90C($s0)
    ctx->pc = 0x2bf158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2316)));
label_2bf15c:
    // 0x2bf15c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bf15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bf160:
    // 0x2bf160: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bf160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf164:
    // 0x2bf164: 0x240700d0  addiu       $a3, $zero, 0xD0
    ctx->pc = 0x2bf164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_2bf168:
    // 0x2bf168: 0x2408016a  addiu       $t0, $zero, 0x16A
    ctx->pc = 0x2bf168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 362));
label_2bf16c:
    // 0x2bf16c: 0x27a901e0  addiu       $t1, $sp, 0x1E0
    ctx->pc = 0x2bf16cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_2bf170:
    // 0x2bf170: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x2bf170u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bf174:
    // 0x2bf174: 0xc0886ac  jal         func_221AB0
label_2bf178:
    if (ctx->pc == 0x2BF178u) {
        ctx->pc = 0x2BF178u;
            // 0x2bf178: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF17Cu;
        goto label_2bf17c;
    }
    ctx->pc = 0x2BF174u;
    SET_GPR_U32(ctx, 31, 0x2BF17Cu);
    ctx->pc = 0x2BF178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF174u;
            // 0x2bf178: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF17Cu; }
        if (ctx->pc != 0x2BF17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF17Cu; }
        if (ctx->pc != 0x2BF17Cu) { return; }
    }
    ctx->pc = 0x2BF17Cu;
label_2bf17c:
    // 0x2bf17c: 0xc04d1a4  jal         func_134690
label_2bf180:
    if (ctx->pc == 0x2BF180u) {
        ctx->pc = 0x2BF180u;
            // 0x2bf180: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2BF184u;
        goto label_2bf184;
    }
    ctx->pc = 0x2BF17Cu;
    SET_GPR_U32(ctx, 31, 0x2BF184u);
    ctx->pc = 0x2BF180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF17Cu;
            // 0x2bf180: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF184u; }
        if (ctx->pc != 0x2BF184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF184u; }
        if (ctx->pc != 0x2BF184u) { return; }
    }
    ctx->pc = 0x2BF184u;
label_2bf184:
    // 0x2bf184: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bf184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bf188:
    // 0x2bf188: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2bf188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2bf18c:
    // 0x2bf18c: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x2bf18cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
label_2bf190:
    // 0x2bf190: 0xc04ba14  jal         func_12E850
label_2bf194:
    if (ctx->pc == 0x2BF194u) {
        ctx->pc = 0x2BF194u;
            // 0x2bf194: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF198u;
        goto label_2bf198;
    }
    ctx->pc = 0x2BF190u;
    SET_GPR_U32(ctx, 31, 0x2BF198u);
    ctx->pc = 0x2BF194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF190u;
            // 0x2bf194: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF198u; }
        if (ctx->pc != 0x2BF198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF198u; }
        if (ctx->pc != 0x2BF198u) { return; }
    }
    ctx->pc = 0x2BF198u;
label_2bf198:
    // 0x2bf198: 0xc0873cc  jal         func_21CF30
label_2bf19c:
    if (ctx->pc == 0x2BF19Cu) {
        ctx->pc = 0x2BF19Cu;
            // 0x2bf19c: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x2BF1A0u;
        goto label_2bf1a0;
    }
    ctx->pc = 0x2BF198u;
    SET_GPR_U32(ctx, 31, 0x2BF1A0u);
    ctx->pc = 0x2BF19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF198u;
            // 0x2bf19c: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF1A0u; }
        if (ctx->pc != 0x2BF1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF1A0u; }
        if (ctx->pc != 0x2BF1A0u) { return; }
    }
    ctx->pc = 0x2BF1A0u;
label_2bf1a0:
    // 0x2bf1a0: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf1a4:
    // 0x2bf1a4: 0xc0b5160  jal         func_2D4580
label_2bf1a8:
    if (ctx->pc == 0x2BF1A8u) {
        ctx->pc = 0x2BF1A8u;
            // 0x2bf1a8: 0x2605082c  addiu       $a1, $s0, 0x82C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2092));
        ctx->pc = 0x2BF1ACu;
        goto label_2bf1ac;
    }
    ctx->pc = 0x2BF1A4u;
    SET_GPR_U32(ctx, 31, 0x2BF1ACu);
    ctx->pc = 0x2BF1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF1A4u;
            // 0x2bf1a8: 0x2605082c  addiu       $a1, $s0, 0x82C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2092));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF1ACu; }
        if (ctx->pc != 0x2BF1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF1ACu; }
        if (ctx->pc != 0x2BF1ACu) { return; }
    }
    ctx->pc = 0x2BF1ACu;
label_2bf1ac:
    // 0x2bf1ac: 0xc04a422  jal         func_129088
label_2bf1b0:
    if (ctx->pc == 0x2BF1B0u) {
        ctx->pc = 0x2BF1B0u;
            // 0x2bf1b0: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x2BF1B4u;
        goto label_2bf1b4;
    }
    ctx->pc = 0x2BF1ACu;
    SET_GPR_U32(ctx, 31, 0x2BF1B4u);
    ctx->pc = 0x2BF1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF1ACu;
            // 0x2bf1b0: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF1B4u; }
        if (ctx->pc != 0x2BF1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF1B4u; }
        if (ctx->pc != 0x2BF1B4u) { return; }
    }
    ctx->pc = 0x2BF1B4u;
label_2bf1b4:
    // 0x2bf1b4: 0x27b30294  addiu       $s3, $sp, 0x294
    ctx->pc = 0x2bf1b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 660));
label_2bf1b8:
    // 0x2bf1b8: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf1bc:
    // 0x2bf1bc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2bf1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2bf1c0:
    // 0x2bf1c0: 0x2605082c  addiu       $a1, $s0, 0x82C
    ctx->pc = 0x2bf1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2092));
label_2bf1c4:
    // 0x2bf1c4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2bf1c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2bf1c8:
    // 0x2bf1c8: 0xc0b5160  jal         func_2D4580
label_2bf1cc:
    if (ctx->pc == 0x2BF1CCu) {
        ctx->pc = 0x2BF1CCu;
            // 0x2bf1cc: 0x28842  srl         $s1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2BF1D0u;
        goto label_2bf1d0;
    }
    ctx->pc = 0x2BF1C8u;
    SET_GPR_U32(ctx, 31, 0x2BF1D0u);
    ctx->pc = 0x2BF1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF1C8u;
            // 0x2bf1cc: 0x28842  srl         $s1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF1D0u; }
        if (ctx->pc != 0x2BF1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF1D0u; }
        if (ctx->pc != 0x2BF1D0u) { return; }
    }
    ctx->pc = 0x2BF1D0u;
label_2bf1d0:
    // 0x2bf1d0: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
label_2bf1d4:
    if (ctx->pc == 0x2BF1D4u) {
        ctx->pc = 0x2BF1D4u;
            // 0x2bf1d4: 0x111843  sra         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 1));
        ctx->pc = 0x2BF1D8u;
        goto label_2bf1d8;
    }
    ctx->pc = 0x2BF1D0u;
    {
        const bool branch_taken_0x2bf1d0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2BF1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF1D0u;
            // 0x2bf1d4: 0x111843  sra         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf1d0) {
            ctx->pc = 0x2BF1E0u;
            goto label_2bf1e0;
        }
    }
    ctx->pc = 0x2BF1D8u;
label_2bf1d8:
    // 0x2bf1d8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x2bf1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2bf1dc:
    // 0x2bf1dc: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x2bf1dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_2bf1e0:
    // 0x2bf1e0: 0x24020092  addiu       $v0, $zero, 0x92
    ctx->pc = 0x2bf1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
label_2bf1e4:
    // 0x2bf1e4: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf1e8:
    // 0x2bf1e8: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x2bf1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bf1ec:
    // 0x2bf1ec: 0xc0b5130  jal         func_2D44C0
label_2bf1f0:
    if (ctx->pc == 0x2BF1F0u) {
        ctx->pc = 0x2BF1F0u;
            // 0x2bf1f0: 0x24060052  addiu       $a2, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->pc = 0x2BF1F4u;
        goto label_2bf1f4;
    }
    ctx->pc = 0x2BF1ECu;
    SET_GPR_U32(ctx, 31, 0x2BF1F4u);
    ctx->pc = 0x2BF1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF1ECu;
            // 0x2bf1f0: 0x24060052  addiu       $a2, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF1F4u; }
        if (ctx->pc != 0x2BF1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF1F4u; }
        if (ctx->pc != 0x2BF1F4u) { return; }
    }
    ctx->pc = 0x2BF1F4u;
label_2bf1f4:
    // 0x2bf1f4: 0x27b20284  addiu       $s2, $sp, 0x284
    ctx->pc = 0x2bf1f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
label_2bf1f8:
    // 0x2bf1f8: 0x27b10288  addiu       $s1, $sp, 0x288
    ctx->pc = 0x2bf1f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
label_2bf1fc:
    // 0x2bf1fc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2bf1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bf200:
    // 0x2bf200: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf204:
    // 0x2bf204: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2bf204u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bf208:
    // 0x2bf208: 0xc0b5688  jal         func_2D5A20
label_2bf20c:
    if (ctx->pc == 0x2BF20Cu) {
        ctx->pc = 0x2BF20Cu;
            // 0x2bf20c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF210u;
        goto label_2bf210;
    }
    ctx->pc = 0x2BF208u;
    SET_GPR_U32(ctx, 31, 0x2BF210u);
    ctx->pc = 0x2BF20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF208u;
            // 0x2bf20c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF210u; }
        if (ctx->pc != 0x2BF210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF210u; }
        if (ctx->pc != 0x2BF210u) { return; }
    }
    ctx->pc = 0x2BF210u;
label_2bf210:
    // 0x2bf210: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf214:
    // 0x2bf214: 0xc0b5160  jal         func_2D4580
label_2bf218:
    if (ctx->pc == 0x2BF218u) {
        ctx->pc = 0x2BF218u;
            // 0x2bf218: 0x2605086c  addiu       $a1, $s0, 0x86C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2156));
        ctx->pc = 0x2BF21Cu;
        goto label_2bf21c;
    }
    ctx->pc = 0x2BF214u;
    SET_GPR_U32(ctx, 31, 0x2BF21Cu);
    ctx->pc = 0x2BF218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF214u;
            // 0x2bf218: 0x2605086c  addiu       $a1, $s0, 0x86C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF21Cu; }
        if (ctx->pc != 0x2BF21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF21Cu; }
        if (ctx->pc != 0x2BF21Cu) { return; }
    }
    ctx->pc = 0x2BF21Cu;
label_2bf21c:
    // 0x2bf21c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf220:
    // 0x2bf220: 0xc0b5160  jal         func_2D4580
label_2bf224:
    if (ctx->pc == 0x2BF224u) {
        ctx->pc = 0x2BF224u;
            // 0x2bf224: 0x2605086c  addiu       $a1, $s0, 0x86C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2156));
        ctx->pc = 0x2BF228u;
        goto label_2bf228;
    }
    ctx->pc = 0x2BF220u;
    SET_GPR_U32(ctx, 31, 0x2BF228u);
    ctx->pc = 0x2BF224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF220u;
            // 0x2bf224: 0x2605086c  addiu       $a1, $s0, 0x86C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF228u; }
        if (ctx->pc != 0x2BF228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF228u; }
        if (ctx->pc != 0x2BF228u) { return; }
    }
    ctx->pc = 0x2BF228u;
label_2bf228:
    // 0x2bf228: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf22c:
    // 0x2bf22c: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x2bf22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_2bf230:
    // 0x2bf230: 0xc0b5130  jal         func_2D44C0
label_2bf234:
    if (ctx->pc == 0x2BF234u) {
        ctx->pc = 0x2BF234u;
            // 0x2bf234: 0x24060108  addiu       $a2, $zero, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
        ctx->pc = 0x2BF238u;
        goto label_2bf238;
    }
    ctx->pc = 0x2BF230u;
    SET_GPR_U32(ctx, 31, 0x2BF238u);
    ctx->pc = 0x2BF234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF230u;
            // 0x2bf234: 0x24060108  addiu       $a2, $zero, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF238u; }
        if (ctx->pc != 0x2BF238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF238u; }
        if (ctx->pc != 0x2BF238u) { return; }
    }
    ctx->pc = 0x2BF238u;
label_2bf238:
    // 0x2bf238: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2bf238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bf23c:
    // 0x2bf23c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf240:
    // 0x2bf240: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2bf240u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bf244:
    // 0x2bf244: 0xc0b5688  jal         func_2D5A20
label_2bf248:
    if (ctx->pc == 0x2BF248u) {
        ctx->pc = 0x2BF248u;
            // 0x2bf248: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF24Cu;
        goto label_2bf24c;
    }
    ctx->pc = 0x2BF244u;
    SET_GPR_U32(ctx, 31, 0x2BF24Cu);
    ctx->pc = 0x2BF248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF244u;
            // 0x2bf248: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF24Cu; }
        if (ctx->pc != 0x2BF24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF24Cu; }
        if (ctx->pc != 0x2BF24Cu) { return; }
    }
    ctx->pc = 0x2BF24Cu;
label_2bf24c:
    // 0x2bf24c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf250:
    // 0x2bf250: 0xc0b5160  jal         func_2D4580
label_2bf254:
    if (ctx->pc == 0x2BF254u) {
        ctx->pc = 0x2BF254u;
            // 0x2bf254: 0x260507ec  addiu       $a1, $s0, 0x7EC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2028));
        ctx->pc = 0x2BF258u;
        goto label_2bf258;
    }
    ctx->pc = 0x2BF250u;
    SET_GPR_U32(ctx, 31, 0x2BF258u);
    ctx->pc = 0x2BF254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF250u;
            // 0x2bf254: 0x260507ec  addiu       $a1, $s0, 0x7EC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2028));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF258u; }
        if (ctx->pc != 0x2BF258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF258u; }
        if (ctx->pc != 0x2BF258u) { return; }
    }
    ctx->pc = 0x2BF258u;
label_2bf258:
    // 0x2bf258: 0xc04a422  jal         func_129088
label_2bf25c:
    if (ctx->pc == 0x2BF25Cu) {
        ctx->pc = 0x2BF25Cu;
            // 0x2bf25c: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x2BF260u;
        goto label_2bf260;
    }
    ctx->pc = 0x2BF258u;
    SET_GPR_U32(ctx, 31, 0x2BF260u);
    ctx->pc = 0x2BF25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF258u;
            // 0x2bf25c: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF260u; }
        if (ctx->pc != 0x2BF260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF260u; }
        if (ctx->pc != 0x2BF260u) { return; }
    }
    ctx->pc = 0x2BF260u;
label_2bf260:
    // 0x2bf260: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2bf260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2bf264:
    // 0x2bf264: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf268:
    // 0x2bf268: 0x260507ec  addiu       $a1, $s0, 0x7EC
    ctx->pc = 0x2bf268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2028));
label_2bf26c:
    // 0x2bf26c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2bf26cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2bf270:
    // 0x2bf270: 0xc0b5160  jal         func_2D4580
label_2bf274:
    if (ctx->pc == 0x2BF274u) {
        ctx->pc = 0x2BF274u;
            // 0x2bf274: 0x29842  srl         $s3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2BF278u;
        goto label_2bf278;
    }
    ctx->pc = 0x2BF270u;
    SET_GPR_U32(ctx, 31, 0x2BF278u);
    ctx->pc = 0x2BF274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF270u;
            // 0x2bf274: 0x29842  srl         $s3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF278u; }
        if (ctx->pc != 0x2BF278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF278u; }
        if (ctx->pc != 0x2BF278u) { return; }
    }
    ctx->pc = 0x2BF278u;
label_2bf278:
    // 0x2bf278: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
label_2bf27c:
    if (ctx->pc == 0x2BF27Cu) {
        ctx->pc = 0x2BF27Cu;
            // 0x2bf27c: 0x131843  sra         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 19), 1));
        ctx->pc = 0x2BF280u;
        goto label_2bf280;
    }
    ctx->pc = 0x2BF278u;
    {
        const bool branch_taken_0x2bf278 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x2BF27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF278u;
            // 0x2bf27c: 0x131843  sra         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf278) {
            ctx->pc = 0x2BF288u;
            goto label_2bf288;
        }
    }
    ctx->pc = 0x2BF280u;
label_2bf280:
    // 0x2bf280: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x2bf280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2bf284:
    // 0x2bf284: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x2bf284u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_2bf288:
    // 0x2bf288: 0x24020092  addiu       $v0, $zero, 0x92
    ctx->pc = 0x2bf288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
label_2bf28c:
    // 0x2bf28c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf290:
    // 0x2bf290: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x2bf290u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bf294:
    // 0x2bf294: 0xc0b5130  jal         func_2D44C0
label_2bf298:
    if (ctx->pc == 0x2BF298u) {
        ctx->pc = 0x2BF298u;
            // 0x2bf298: 0x24060148  addiu       $a2, $zero, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
        ctx->pc = 0x2BF29Cu;
        goto label_2bf29c;
    }
    ctx->pc = 0x2BF294u;
    SET_GPR_U32(ctx, 31, 0x2BF29Cu);
    ctx->pc = 0x2BF298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF294u;
            // 0x2bf298: 0x24060148  addiu       $a2, $zero, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF29Cu; }
        if (ctx->pc != 0x2BF29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF29Cu; }
        if (ctx->pc != 0x2BF29Cu) { return; }
    }
    ctx->pc = 0x2BF29Cu;
label_2bf29c:
    // 0x2bf29c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2bf29cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bf2a0:
    // 0x2bf2a0: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf2a4:
    // 0x2bf2a4: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2bf2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bf2a8:
    // 0x2bf2a8: 0xc0b5688  jal         func_2D5A20
label_2bf2ac:
    if (ctx->pc == 0x2BF2ACu) {
        ctx->pc = 0x2BF2ACu;
            // 0x2bf2ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF2B0u;
        goto label_2bf2b0;
    }
    ctx->pc = 0x2BF2A8u;
    SET_GPR_U32(ctx, 31, 0x2BF2B0u);
    ctx->pc = 0x2BF2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF2A8u;
            // 0x2bf2ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2B0u; }
        if (ctx->pc != 0x2BF2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2B0u; }
        if (ctx->pc != 0x2BF2B0u) { return; }
    }
    ctx->pc = 0x2BF2B0u;
label_2bf2b0:
    // 0x2bf2b0: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf2b4:
    // 0x2bf2b4: 0xc0b5160  jal         func_2D4580
label_2bf2b8:
    if (ctx->pc == 0x2BF2B8u) {
        ctx->pc = 0x2BF2B8u;
            // 0x2bf2b8: 0x260508ac  addiu       $a1, $s0, 0x8AC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2220));
        ctx->pc = 0x2BF2BCu;
        goto label_2bf2bc;
    }
    ctx->pc = 0x2BF2B4u;
    SET_GPR_U32(ctx, 31, 0x2BF2BCu);
    ctx->pc = 0x2BF2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF2B4u;
            // 0x2bf2b8: 0x260508ac  addiu       $a1, $s0, 0x8AC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2BCu; }
        if (ctx->pc != 0x2BF2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2BCu; }
        if (ctx->pc != 0x2BF2BCu) { return; }
    }
    ctx->pc = 0x2BF2BCu;
label_2bf2bc:
    // 0x2bf2bc: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf2c0:
    // 0x2bf2c0: 0xc0b5160  jal         func_2D4580
label_2bf2c4:
    if (ctx->pc == 0x2BF2C4u) {
        ctx->pc = 0x2BF2C4u;
            // 0x2bf2c4: 0x260508ac  addiu       $a1, $s0, 0x8AC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2220));
        ctx->pc = 0x2BF2C8u;
        goto label_2bf2c8;
    }
    ctx->pc = 0x2BF2C0u;
    SET_GPR_U32(ctx, 31, 0x2BF2C8u);
    ctx->pc = 0x2BF2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF2C0u;
            // 0x2bf2c4: 0x260508ac  addiu       $a1, $s0, 0x8AC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2C8u; }
        if (ctx->pc != 0x2BF2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2C8u; }
        if (ctx->pc != 0x2BF2C8u) { return; }
    }
    ctx->pc = 0x2BF2C8u;
label_2bf2c8:
    // 0x2bf2c8: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf2cc:
    // 0x2bf2cc: 0x2405011e  addiu       $a1, $zero, 0x11E
    ctx->pc = 0x2bf2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
label_2bf2d0:
    // 0x2bf2d0: 0xc0b5130  jal         func_2D44C0
label_2bf2d4:
    if (ctx->pc == 0x2BF2D4u) {
        ctx->pc = 0x2BF2D4u;
            // 0x2bf2d4: 0x24060082  addiu       $a2, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->pc = 0x2BF2D8u;
        goto label_2bf2d8;
    }
    ctx->pc = 0x2BF2D0u;
    SET_GPR_U32(ctx, 31, 0x2BF2D8u);
    ctx->pc = 0x2BF2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF2D0u;
            // 0x2bf2d4: 0x24060082  addiu       $a2, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2D8u; }
        if (ctx->pc != 0x2BF2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2D8u; }
        if (ctx->pc != 0x2BF2D8u) { return; }
    }
    ctx->pc = 0x2BF2D8u;
label_2bf2d8:
    // 0x2bf2d8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2bf2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bf2dc:
    // 0x2bf2dc: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf2e0:
    // 0x2bf2e0: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2bf2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bf2e4:
    // 0x2bf2e4: 0xc0b5688  jal         func_2D5A20
label_2bf2e8:
    if (ctx->pc == 0x2BF2E8u) {
        ctx->pc = 0x2BF2E8u;
            // 0x2bf2e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF2ECu;
        goto label_2bf2ec;
    }
    ctx->pc = 0x2BF2E4u;
    SET_GPR_U32(ctx, 31, 0x2BF2ECu);
    ctx->pc = 0x2BF2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF2E4u;
            // 0x2bf2e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2ECu; }
        if (ctx->pc != 0x2BF2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2ECu; }
        if (ctx->pc != 0x2BF2ECu) { return; }
    }
    ctx->pc = 0x2BF2ECu;
label_2bf2ec:
    // 0x2bf2ec: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf2f0:
    // 0x2bf2f0: 0xc0b5160  jal         func_2D4580
label_2bf2f4:
    if (ctx->pc == 0x2BF2F4u) {
        ctx->pc = 0x2BF2F4u;
            // 0x2bf2f4: 0x26050918  addiu       $a1, $s0, 0x918 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2328));
        ctx->pc = 0x2BF2F8u;
        goto label_2bf2f8;
    }
    ctx->pc = 0x2BF2F0u;
    SET_GPR_U32(ctx, 31, 0x2BF2F8u);
    ctx->pc = 0x2BF2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF2F0u;
            // 0x2bf2f4: 0x26050918  addiu       $a1, $s0, 0x918 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2F8u; }
        if (ctx->pc != 0x2BF2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2F8u; }
        if (ctx->pc != 0x2BF2F8u) { return; }
    }
    ctx->pc = 0x2BF2F8u;
label_2bf2f8:
    // 0x2bf2f8: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf2fc:
    // 0x2bf2fc: 0x2405011a  addiu       $a1, $zero, 0x11A
    ctx->pc = 0x2bf2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
label_2bf300:
    // 0x2bf300: 0xc0b5130  jal         func_2D44C0
label_2bf304:
    if (ctx->pc == 0x2BF304u) {
        ctx->pc = 0x2BF304u;
            // 0x2bf304: 0x24060116  addiu       $a2, $zero, 0x116 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
        ctx->pc = 0x2BF308u;
        goto label_2bf308;
    }
    ctx->pc = 0x2BF300u;
    SET_GPR_U32(ctx, 31, 0x2BF308u);
    ctx->pc = 0x2BF304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF300u;
            // 0x2bf304: 0x24060116  addiu       $a2, $zero, 0x116 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF308u; }
        if (ctx->pc != 0x2BF308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF308u; }
        if (ctx->pc != 0x2BF308u) { return; }
    }
    ctx->pc = 0x2BF308u;
label_2bf308:
    // 0x2bf308: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2bf308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bf30c:
    // 0x2bf30c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf310:
    // 0x2bf310: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2bf310u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bf314:
    // 0x2bf314: 0xc0b5688  jal         func_2D5A20
label_2bf318:
    if (ctx->pc == 0x2BF318u) {
        ctx->pc = 0x2BF318u;
            // 0x2bf318: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF31Cu;
        goto label_2bf31c;
    }
    ctx->pc = 0x2BF314u;
    SET_GPR_U32(ctx, 31, 0x2BF31Cu);
    ctx->pc = 0x2BF318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF314u;
            // 0x2bf318: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF31Cu; }
        if (ctx->pc != 0x2BF31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF31Cu; }
        if (ctx->pc != 0x2BF31Cu) { return; }
    }
    ctx->pc = 0x2BF31Cu;
label_2bf31c:
    // 0x2bf31c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf320:
    // 0x2bf320: 0xc0b5160  jal         func_2D4580
label_2bf324:
    if (ctx->pc == 0x2BF324u) {
        ctx->pc = 0x2BF324u;
            // 0x2bf324: 0x26050939  addiu       $a1, $s0, 0x939 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2361));
        ctx->pc = 0x2BF328u;
        goto label_2bf328;
    }
    ctx->pc = 0x2BF320u;
    SET_GPR_U32(ctx, 31, 0x2BF328u);
    ctx->pc = 0x2BF324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF320u;
            // 0x2bf324: 0x26050939  addiu       $a1, $s0, 0x939 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2361));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF328u; }
        if (ctx->pc != 0x2BF328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF328u; }
        if (ctx->pc != 0x2BF328u) { return; }
    }
    ctx->pc = 0x2BF328u;
label_2bf328:
    // 0x2bf328: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf32c:
    // 0x2bf32c: 0x2405011a  addiu       $a1, $zero, 0x11A
    ctx->pc = 0x2bf32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
label_2bf330:
    // 0x2bf330: 0xc0b5130  jal         func_2D44C0
label_2bf334:
    if (ctx->pc == 0x2BF334u) {
        ctx->pc = 0x2BF334u;
            // 0x2bf334: 0x24060138  addiu       $a2, $zero, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
        ctx->pc = 0x2BF338u;
        goto label_2bf338;
    }
    ctx->pc = 0x2BF330u;
    SET_GPR_U32(ctx, 31, 0x2BF338u);
    ctx->pc = 0x2BF334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF330u;
            // 0x2bf334: 0x24060138  addiu       $a2, $zero, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF338u; }
        if (ctx->pc != 0x2BF338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF338u; }
        if (ctx->pc != 0x2BF338u) { return; }
    }
    ctx->pc = 0x2BF338u;
label_2bf338:
    // 0x2bf338: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2bf338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bf33c:
    // 0x2bf33c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf340:
    // 0x2bf340: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2bf340u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bf344:
    // 0x2bf344: 0xc0b5688  jal         func_2D5A20
label_2bf348:
    if (ctx->pc == 0x2BF348u) {
        ctx->pc = 0x2BF348u;
            // 0x2bf348: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF34Cu;
        goto label_2bf34c;
    }
    ctx->pc = 0x2BF344u;
    SET_GPR_U32(ctx, 31, 0x2BF34Cu);
    ctx->pc = 0x2BF348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF344u;
            // 0x2bf348: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF34Cu; }
        if (ctx->pc != 0x2BF34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF34Cu; }
        if (ctx->pc != 0x2BF34Cu) { return; }
    }
    ctx->pc = 0x2BF34Cu;
label_2bf34c:
    // 0x2bf34c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf350:
    // 0x2bf350: 0xc0b5160  jal         func_2D4580
label_2bf354:
    if (ctx->pc == 0x2BF354u) {
        ctx->pc = 0x2BF354u;
            // 0x2bf354: 0x2605095a  addiu       $a1, $s0, 0x95A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2394));
        ctx->pc = 0x2BF358u;
        goto label_2bf358;
    }
    ctx->pc = 0x2BF350u;
    SET_GPR_U32(ctx, 31, 0x2BF358u);
    ctx->pc = 0x2BF354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF350u;
            // 0x2bf354: 0x2605095a  addiu       $a1, $s0, 0x95A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2394));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF358u; }
        if (ctx->pc != 0x2BF358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF358u; }
        if (ctx->pc != 0x2BF358u) { return; }
    }
    ctx->pc = 0x2BF358u;
label_2bf358:
    // 0x2bf358: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf35c:
    // 0x2bf35c: 0x2405011a  addiu       $a1, $zero, 0x11A
    ctx->pc = 0x2bf35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
label_2bf360:
    // 0x2bf360: 0xc0b5130  jal         func_2D44C0
label_2bf364:
    if (ctx->pc == 0x2BF364u) {
        ctx->pc = 0x2BF364u;
            // 0x2bf364: 0x2406015a  addiu       $a2, $zero, 0x15A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 346));
        ctx->pc = 0x2BF368u;
        goto label_2bf368;
    }
    ctx->pc = 0x2BF360u;
    SET_GPR_U32(ctx, 31, 0x2BF368u);
    ctx->pc = 0x2BF364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF360u;
            // 0x2bf364: 0x2406015a  addiu       $a2, $zero, 0x15A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 346));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF368u; }
        if (ctx->pc != 0x2BF368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF368u; }
        if (ctx->pc != 0x2BF368u) { return; }
    }
    ctx->pc = 0x2BF368u;
label_2bf368:
    // 0x2bf368: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2bf368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bf36c:
    // 0x2bf36c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf370:
    // 0x2bf370: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2bf370u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bf374:
    // 0x2bf374: 0xc0b5688  jal         func_2D5A20
label_2bf378:
    if (ctx->pc == 0x2BF378u) {
        ctx->pc = 0x2BF378u;
            // 0x2bf378: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF37Cu;
        goto label_2bf37c;
    }
    ctx->pc = 0x2BF374u;
    SET_GPR_U32(ctx, 31, 0x2BF37Cu);
    ctx->pc = 0x2BF378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF374u;
            // 0x2bf378: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF37Cu; }
        if (ctx->pc != 0x2BF37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF37Cu; }
        if (ctx->pc != 0x2BF37Cu) { return; }
    }
    ctx->pc = 0x2BF37Cu;
label_2bf37c:
    // 0x2bf37c: 0x8e0201e0  lw          $v0, 0x1E0($s0)
    ctx->pc = 0x2bf37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_2bf380:
    // 0x2bf380: 0x8e0707e8  lw          $a3, 0x7E8($s0)
    ctx->pc = 0x2bf380u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2024)));
label_2bf384:
    // 0x2bf384: 0x1ce00002  bgtz        $a3, . + 4 + (0x2 << 2)
label_2bf388:
    if (ctx->pc == 0x2BF388u) {
        ctx->pc = 0x2BF388u;
            // 0x2bf388: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2BF38Cu;
        goto label_2bf38c;
    }
    ctx->pc = 0x2BF384u;
    {
        const bool branch_taken_0x2bf384 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2BF388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF384u;
            // 0x2bf388: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf384) {
            ctx->pc = 0x2BF390u;
            goto label_2bf390;
        }
    }
    ctx->pc = 0x2BF38Cu;
label_2bf38c:
    // 0x2bf38c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bf38cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf390:
    // 0x2bf390: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x2bf390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_2bf394:
    // 0x2bf394: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2bf394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2bf398:
    // 0x2bf398: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x2bf398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
label_2bf39c:
    // 0x2bf39c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bf39cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2bf3a0:
    // 0x2bf3a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bf3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bf3a4:
    // 0x2bf3a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2bf3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2bf3a8:
    // 0x2bf3a8: 0xc04a234  jal         func_1288D0
label_2bf3ac:
    if (ctx->pc == 0x2BF3ACu) {
        ctx->pc = 0x2BF3ACu;
            // 0x2bf3ac: 0x27a402a0  addiu       $a0, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->pc = 0x2BF3B0u;
        goto label_2bf3b0;
    }
    ctx->pc = 0x2BF3A8u;
    SET_GPR_U32(ctx, 31, 0x2BF3B0u);
    ctx->pc = 0x2BF3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF3A8u;
            // 0x2bf3ac: 0x27a402a0  addiu       $a0, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF3B0u; }
        if (ctx->pc != 0x2BF3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF3B0u; }
        if (ctx->pc != 0x2BF3B0u) { return; }
    }
    ctx->pc = 0x2BF3B0u;
label_2bf3b0:
    // 0x2bf3b0: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf3b4:
    // 0x2bf3b4: 0xc0b5160  jal         func_2D4580
label_2bf3b8:
    if (ctx->pc == 0x2BF3B8u) {
        ctx->pc = 0x2BF3B8u;
            // 0x2bf3b8: 0x27a502a0  addiu       $a1, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->pc = 0x2BF3BCu;
        goto label_2bf3bc;
    }
    ctx->pc = 0x2BF3B4u;
    SET_GPR_U32(ctx, 31, 0x2BF3BCu);
    ctx->pc = 0x2BF3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF3B4u;
            // 0x2bf3b8: 0x27a502a0  addiu       $a1, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF3BCu; }
        if (ctx->pc != 0x2BF3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF3BCu; }
        if (ctx->pc != 0x2BF3BCu) { return; }
    }
    ctx->pc = 0x2BF3BCu;
label_2bf3bc:
    // 0x2bf3bc: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf3c0:
    // 0x2bf3c0: 0x2405014c  addiu       $a1, $zero, 0x14C
    ctx->pc = 0x2bf3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
label_2bf3c4:
    // 0x2bf3c4: 0xc0b5130  jal         func_2D44C0
label_2bf3c8:
    if (ctx->pc == 0x2BF3C8u) {
        ctx->pc = 0x2BF3C8u;
            // 0x2bf3c8: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x2BF3CCu;
        goto label_2bf3cc;
    }
    ctx->pc = 0x2BF3C4u;
    SET_GPR_U32(ctx, 31, 0x2BF3CCu);
    ctx->pc = 0x2BF3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF3C4u;
            // 0x2bf3c8: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF3CCu; }
        if (ctx->pc != 0x2BF3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF3CCu; }
        if (ctx->pc != 0x2BF3CCu) { return; }
    }
    ctx->pc = 0x2BF3CCu;
label_2bf3cc:
    // 0x2bf3cc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2bf3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bf3d0:
    // 0x2bf3d0: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2bf3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2bf3d4:
    // 0x2bf3d4: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2bf3d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bf3d8:
    // 0x2bf3d8: 0xc0b5688  jal         func_2D5A20
label_2bf3dc:
    if (ctx->pc == 0x2BF3DCu) {
        ctx->pc = 0x2BF3DCu;
            // 0x2bf3dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF3E0u;
        goto label_2bf3e0;
    }
    ctx->pc = 0x2BF3D8u;
    SET_GPR_U32(ctx, 31, 0x2BF3E0u);
    ctx->pc = 0x2BF3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF3D8u;
            // 0x2bf3dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF3E0u; }
        if (ctx->pc != 0x2BF3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF3E0u; }
        if (ctx->pc != 0x2BF3E0u) { return; }
    }
    ctx->pc = 0x2BF3E0u;
label_2bf3e0:
    // 0x2bf3e0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2bf3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2bf3e4:
    // 0x2bf3e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2bf3e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2bf3e8:
    // 0x2bf3e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2bf3e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2bf3ec:
    // 0x2bf3ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bf3ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bf3f0:
    // 0x2bf3f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bf3f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bf3f4:
    // 0x2bf3f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bf3f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bf3f8:
    // 0x2bf3f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bf3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf3fc:
    // 0x2bf3fc: 0x3e00008  jr          $ra
label_2bf400:
    if (ctx->pc == 0x2BF400u) {
        ctx->pc = 0x2BF400u;
            // 0x2bf400: 0x27bd0530  addiu       $sp, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->pc = 0x2BF404u;
        goto label_fallthrough_0x2bf3fc;
    }
    ctx->pc = 0x2BF3FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF3FCu;
            // 0x2bf400: 0x27bd0530  addiu       $sp, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2bf3fc:
    ctx->pc = 0x2BF404u;
}
