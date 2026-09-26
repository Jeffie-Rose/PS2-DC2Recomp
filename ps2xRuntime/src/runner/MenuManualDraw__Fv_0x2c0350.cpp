#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuManualDraw__Fv
// Address: 0x2c0350 - 0x2c0998
void MenuManualDraw__Fv_0x2c0350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuManualDraw__Fv_0x2c0350");
#endif

    switch (ctx->pc) {
        case 0x2c0350u: goto label_2c0350;
        case 0x2c0354u: goto label_2c0354;
        case 0x2c0358u: goto label_2c0358;
        case 0x2c035cu: goto label_2c035c;
        case 0x2c0360u: goto label_2c0360;
        case 0x2c0364u: goto label_2c0364;
        case 0x2c0368u: goto label_2c0368;
        case 0x2c036cu: goto label_2c036c;
        case 0x2c0370u: goto label_2c0370;
        case 0x2c0374u: goto label_2c0374;
        case 0x2c0378u: goto label_2c0378;
        case 0x2c037cu: goto label_2c037c;
        case 0x2c0380u: goto label_2c0380;
        case 0x2c0384u: goto label_2c0384;
        case 0x2c0388u: goto label_2c0388;
        case 0x2c038cu: goto label_2c038c;
        case 0x2c0390u: goto label_2c0390;
        case 0x2c0394u: goto label_2c0394;
        case 0x2c0398u: goto label_2c0398;
        case 0x2c039cu: goto label_2c039c;
        case 0x2c03a0u: goto label_2c03a0;
        case 0x2c03a4u: goto label_2c03a4;
        case 0x2c03a8u: goto label_2c03a8;
        case 0x2c03acu: goto label_2c03ac;
        case 0x2c03b0u: goto label_2c03b0;
        case 0x2c03b4u: goto label_2c03b4;
        case 0x2c03b8u: goto label_2c03b8;
        case 0x2c03bcu: goto label_2c03bc;
        case 0x2c03c0u: goto label_2c03c0;
        case 0x2c03c4u: goto label_2c03c4;
        case 0x2c03c8u: goto label_2c03c8;
        case 0x2c03ccu: goto label_2c03cc;
        case 0x2c03d0u: goto label_2c03d0;
        case 0x2c03d4u: goto label_2c03d4;
        case 0x2c03d8u: goto label_2c03d8;
        case 0x2c03dcu: goto label_2c03dc;
        case 0x2c03e0u: goto label_2c03e0;
        case 0x2c03e4u: goto label_2c03e4;
        case 0x2c03e8u: goto label_2c03e8;
        case 0x2c03ecu: goto label_2c03ec;
        case 0x2c03f0u: goto label_2c03f0;
        case 0x2c03f4u: goto label_2c03f4;
        case 0x2c03f8u: goto label_2c03f8;
        case 0x2c03fcu: goto label_2c03fc;
        case 0x2c0400u: goto label_2c0400;
        case 0x2c0404u: goto label_2c0404;
        case 0x2c0408u: goto label_2c0408;
        case 0x2c040cu: goto label_2c040c;
        case 0x2c0410u: goto label_2c0410;
        case 0x2c0414u: goto label_2c0414;
        case 0x2c0418u: goto label_2c0418;
        case 0x2c041cu: goto label_2c041c;
        case 0x2c0420u: goto label_2c0420;
        case 0x2c0424u: goto label_2c0424;
        case 0x2c0428u: goto label_2c0428;
        case 0x2c042cu: goto label_2c042c;
        case 0x2c0430u: goto label_2c0430;
        case 0x2c0434u: goto label_2c0434;
        case 0x2c0438u: goto label_2c0438;
        case 0x2c043cu: goto label_2c043c;
        case 0x2c0440u: goto label_2c0440;
        case 0x2c0444u: goto label_2c0444;
        case 0x2c0448u: goto label_2c0448;
        case 0x2c044cu: goto label_2c044c;
        case 0x2c0450u: goto label_2c0450;
        case 0x2c0454u: goto label_2c0454;
        case 0x2c0458u: goto label_2c0458;
        case 0x2c045cu: goto label_2c045c;
        case 0x2c0460u: goto label_2c0460;
        case 0x2c0464u: goto label_2c0464;
        case 0x2c0468u: goto label_2c0468;
        case 0x2c046cu: goto label_2c046c;
        case 0x2c0470u: goto label_2c0470;
        case 0x2c0474u: goto label_2c0474;
        case 0x2c0478u: goto label_2c0478;
        case 0x2c047cu: goto label_2c047c;
        case 0x2c0480u: goto label_2c0480;
        case 0x2c0484u: goto label_2c0484;
        case 0x2c0488u: goto label_2c0488;
        case 0x2c048cu: goto label_2c048c;
        case 0x2c0490u: goto label_2c0490;
        case 0x2c0494u: goto label_2c0494;
        case 0x2c0498u: goto label_2c0498;
        case 0x2c049cu: goto label_2c049c;
        case 0x2c04a0u: goto label_2c04a0;
        case 0x2c04a4u: goto label_2c04a4;
        case 0x2c04a8u: goto label_2c04a8;
        case 0x2c04acu: goto label_2c04ac;
        case 0x2c04b0u: goto label_2c04b0;
        case 0x2c04b4u: goto label_2c04b4;
        case 0x2c04b8u: goto label_2c04b8;
        case 0x2c04bcu: goto label_2c04bc;
        case 0x2c04c0u: goto label_2c04c0;
        case 0x2c04c4u: goto label_2c04c4;
        case 0x2c04c8u: goto label_2c04c8;
        case 0x2c04ccu: goto label_2c04cc;
        case 0x2c04d0u: goto label_2c04d0;
        case 0x2c04d4u: goto label_2c04d4;
        case 0x2c04d8u: goto label_2c04d8;
        case 0x2c04dcu: goto label_2c04dc;
        case 0x2c04e0u: goto label_2c04e0;
        case 0x2c04e4u: goto label_2c04e4;
        case 0x2c04e8u: goto label_2c04e8;
        case 0x2c04ecu: goto label_2c04ec;
        case 0x2c04f0u: goto label_2c04f0;
        case 0x2c04f4u: goto label_2c04f4;
        case 0x2c04f8u: goto label_2c04f8;
        case 0x2c04fcu: goto label_2c04fc;
        case 0x2c0500u: goto label_2c0500;
        case 0x2c0504u: goto label_2c0504;
        case 0x2c0508u: goto label_2c0508;
        case 0x2c050cu: goto label_2c050c;
        case 0x2c0510u: goto label_2c0510;
        case 0x2c0514u: goto label_2c0514;
        case 0x2c0518u: goto label_2c0518;
        case 0x2c051cu: goto label_2c051c;
        case 0x2c0520u: goto label_2c0520;
        case 0x2c0524u: goto label_2c0524;
        case 0x2c0528u: goto label_2c0528;
        case 0x2c052cu: goto label_2c052c;
        case 0x2c0530u: goto label_2c0530;
        case 0x2c0534u: goto label_2c0534;
        case 0x2c0538u: goto label_2c0538;
        case 0x2c053cu: goto label_2c053c;
        case 0x2c0540u: goto label_2c0540;
        case 0x2c0544u: goto label_2c0544;
        case 0x2c0548u: goto label_2c0548;
        case 0x2c054cu: goto label_2c054c;
        case 0x2c0550u: goto label_2c0550;
        case 0x2c0554u: goto label_2c0554;
        case 0x2c0558u: goto label_2c0558;
        case 0x2c055cu: goto label_2c055c;
        case 0x2c0560u: goto label_2c0560;
        case 0x2c0564u: goto label_2c0564;
        case 0x2c0568u: goto label_2c0568;
        case 0x2c056cu: goto label_2c056c;
        case 0x2c0570u: goto label_2c0570;
        case 0x2c0574u: goto label_2c0574;
        case 0x2c0578u: goto label_2c0578;
        case 0x2c057cu: goto label_2c057c;
        case 0x2c0580u: goto label_2c0580;
        case 0x2c0584u: goto label_2c0584;
        case 0x2c0588u: goto label_2c0588;
        case 0x2c058cu: goto label_2c058c;
        case 0x2c0590u: goto label_2c0590;
        case 0x2c0594u: goto label_2c0594;
        case 0x2c0598u: goto label_2c0598;
        case 0x2c059cu: goto label_2c059c;
        case 0x2c05a0u: goto label_2c05a0;
        case 0x2c05a4u: goto label_2c05a4;
        case 0x2c05a8u: goto label_2c05a8;
        case 0x2c05acu: goto label_2c05ac;
        case 0x2c05b0u: goto label_2c05b0;
        case 0x2c05b4u: goto label_2c05b4;
        case 0x2c05b8u: goto label_2c05b8;
        case 0x2c05bcu: goto label_2c05bc;
        case 0x2c05c0u: goto label_2c05c0;
        case 0x2c05c4u: goto label_2c05c4;
        case 0x2c05c8u: goto label_2c05c8;
        case 0x2c05ccu: goto label_2c05cc;
        case 0x2c05d0u: goto label_2c05d0;
        case 0x2c05d4u: goto label_2c05d4;
        case 0x2c05d8u: goto label_2c05d8;
        case 0x2c05dcu: goto label_2c05dc;
        case 0x2c05e0u: goto label_2c05e0;
        case 0x2c05e4u: goto label_2c05e4;
        case 0x2c05e8u: goto label_2c05e8;
        case 0x2c05ecu: goto label_2c05ec;
        case 0x2c05f0u: goto label_2c05f0;
        case 0x2c05f4u: goto label_2c05f4;
        case 0x2c05f8u: goto label_2c05f8;
        case 0x2c05fcu: goto label_2c05fc;
        case 0x2c0600u: goto label_2c0600;
        case 0x2c0604u: goto label_2c0604;
        case 0x2c0608u: goto label_2c0608;
        case 0x2c060cu: goto label_2c060c;
        case 0x2c0610u: goto label_2c0610;
        case 0x2c0614u: goto label_2c0614;
        case 0x2c0618u: goto label_2c0618;
        case 0x2c061cu: goto label_2c061c;
        case 0x2c0620u: goto label_2c0620;
        case 0x2c0624u: goto label_2c0624;
        case 0x2c0628u: goto label_2c0628;
        case 0x2c062cu: goto label_2c062c;
        case 0x2c0630u: goto label_2c0630;
        case 0x2c0634u: goto label_2c0634;
        case 0x2c0638u: goto label_2c0638;
        case 0x2c063cu: goto label_2c063c;
        case 0x2c0640u: goto label_2c0640;
        case 0x2c0644u: goto label_2c0644;
        case 0x2c0648u: goto label_2c0648;
        case 0x2c064cu: goto label_2c064c;
        case 0x2c0650u: goto label_2c0650;
        case 0x2c0654u: goto label_2c0654;
        case 0x2c0658u: goto label_2c0658;
        case 0x2c065cu: goto label_2c065c;
        case 0x2c0660u: goto label_2c0660;
        case 0x2c0664u: goto label_2c0664;
        case 0x2c0668u: goto label_2c0668;
        case 0x2c066cu: goto label_2c066c;
        case 0x2c0670u: goto label_2c0670;
        case 0x2c0674u: goto label_2c0674;
        case 0x2c0678u: goto label_2c0678;
        case 0x2c067cu: goto label_2c067c;
        case 0x2c0680u: goto label_2c0680;
        case 0x2c0684u: goto label_2c0684;
        case 0x2c0688u: goto label_2c0688;
        case 0x2c068cu: goto label_2c068c;
        case 0x2c0690u: goto label_2c0690;
        case 0x2c0694u: goto label_2c0694;
        case 0x2c0698u: goto label_2c0698;
        case 0x2c069cu: goto label_2c069c;
        case 0x2c06a0u: goto label_2c06a0;
        case 0x2c06a4u: goto label_2c06a4;
        case 0x2c06a8u: goto label_2c06a8;
        case 0x2c06acu: goto label_2c06ac;
        case 0x2c06b0u: goto label_2c06b0;
        case 0x2c06b4u: goto label_2c06b4;
        case 0x2c06b8u: goto label_2c06b8;
        case 0x2c06bcu: goto label_2c06bc;
        case 0x2c06c0u: goto label_2c06c0;
        case 0x2c06c4u: goto label_2c06c4;
        case 0x2c06c8u: goto label_2c06c8;
        case 0x2c06ccu: goto label_2c06cc;
        case 0x2c06d0u: goto label_2c06d0;
        case 0x2c06d4u: goto label_2c06d4;
        case 0x2c06d8u: goto label_2c06d8;
        case 0x2c06dcu: goto label_2c06dc;
        case 0x2c06e0u: goto label_2c06e0;
        case 0x2c06e4u: goto label_2c06e4;
        case 0x2c06e8u: goto label_2c06e8;
        case 0x2c06ecu: goto label_2c06ec;
        case 0x2c06f0u: goto label_2c06f0;
        case 0x2c06f4u: goto label_2c06f4;
        case 0x2c06f8u: goto label_2c06f8;
        case 0x2c06fcu: goto label_2c06fc;
        case 0x2c0700u: goto label_2c0700;
        case 0x2c0704u: goto label_2c0704;
        case 0x2c0708u: goto label_2c0708;
        case 0x2c070cu: goto label_2c070c;
        case 0x2c0710u: goto label_2c0710;
        case 0x2c0714u: goto label_2c0714;
        case 0x2c0718u: goto label_2c0718;
        case 0x2c071cu: goto label_2c071c;
        case 0x2c0720u: goto label_2c0720;
        case 0x2c0724u: goto label_2c0724;
        case 0x2c0728u: goto label_2c0728;
        case 0x2c072cu: goto label_2c072c;
        case 0x2c0730u: goto label_2c0730;
        case 0x2c0734u: goto label_2c0734;
        case 0x2c0738u: goto label_2c0738;
        case 0x2c073cu: goto label_2c073c;
        case 0x2c0740u: goto label_2c0740;
        case 0x2c0744u: goto label_2c0744;
        case 0x2c0748u: goto label_2c0748;
        case 0x2c074cu: goto label_2c074c;
        case 0x2c0750u: goto label_2c0750;
        case 0x2c0754u: goto label_2c0754;
        case 0x2c0758u: goto label_2c0758;
        case 0x2c075cu: goto label_2c075c;
        case 0x2c0760u: goto label_2c0760;
        case 0x2c0764u: goto label_2c0764;
        case 0x2c0768u: goto label_2c0768;
        case 0x2c076cu: goto label_2c076c;
        case 0x2c0770u: goto label_2c0770;
        case 0x2c0774u: goto label_2c0774;
        case 0x2c0778u: goto label_2c0778;
        case 0x2c077cu: goto label_2c077c;
        case 0x2c0780u: goto label_2c0780;
        case 0x2c0784u: goto label_2c0784;
        case 0x2c0788u: goto label_2c0788;
        case 0x2c078cu: goto label_2c078c;
        case 0x2c0790u: goto label_2c0790;
        case 0x2c0794u: goto label_2c0794;
        case 0x2c0798u: goto label_2c0798;
        case 0x2c079cu: goto label_2c079c;
        case 0x2c07a0u: goto label_2c07a0;
        case 0x2c07a4u: goto label_2c07a4;
        case 0x2c07a8u: goto label_2c07a8;
        case 0x2c07acu: goto label_2c07ac;
        case 0x2c07b0u: goto label_2c07b0;
        case 0x2c07b4u: goto label_2c07b4;
        case 0x2c07b8u: goto label_2c07b8;
        case 0x2c07bcu: goto label_2c07bc;
        case 0x2c07c0u: goto label_2c07c0;
        case 0x2c07c4u: goto label_2c07c4;
        case 0x2c07c8u: goto label_2c07c8;
        case 0x2c07ccu: goto label_2c07cc;
        case 0x2c07d0u: goto label_2c07d0;
        case 0x2c07d4u: goto label_2c07d4;
        case 0x2c07d8u: goto label_2c07d8;
        case 0x2c07dcu: goto label_2c07dc;
        case 0x2c07e0u: goto label_2c07e0;
        case 0x2c07e4u: goto label_2c07e4;
        case 0x2c07e8u: goto label_2c07e8;
        case 0x2c07ecu: goto label_2c07ec;
        case 0x2c07f0u: goto label_2c07f0;
        case 0x2c07f4u: goto label_2c07f4;
        case 0x2c07f8u: goto label_2c07f8;
        case 0x2c07fcu: goto label_2c07fc;
        case 0x2c0800u: goto label_2c0800;
        case 0x2c0804u: goto label_2c0804;
        case 0x2c0808u: goto label_2c0808;
        case 0x2c080cu: goto label_2c080c;
        case 0x2c0810u: goto label_2c0810;
        case 0x2c0814u: goto label_2c0814;
        case 0x2c0818u: goto label_2c0818;
        case 0x2c081cu: goto label_2c081c;
        case 0x2c0820u: goto label_2c0820;
        case 0x2c0824u: goto label_2c0824;
        case 0x2c0828u: goto label_2c0828;
        case 0x2c082cu: goto label_2c082c;
        case 0x2c0830u: goto label_2c0830;
        case 0x2c0834u: goto label_2c0834;
        case 0x2c0838u: goto label_2c0838;
        case 0x2c083cu: goto label_2c083c;
        case 0x2c0840u: goto label_2c0840;
        case 0x2c0844u: goto label_2c0844;
        case 0x2c0848u: goto label_2c0848;
        case 0x2c084cu: goto label_2c084c;
        case 0x2c0850u: goto label_2c0850;
        case 0x2c0854u: goto label_2c0854;
        case 0x2c0858u: goto label_2c0858;
        case 0x2c085cu: goto label_2c085c;
        case 0x2c0860u: goto label_2c0860;
        case 0x2c0864u: goto label_2c0864;
        case 0x2c0868u: goto label_2c0868;
        case 0x2c086cu: goto label_2c086c;
        case 0x2c0870u: goto label_2c0870;
        case 0x2c0874u: goto label_2c0874;
        case 0x2c0878u: goto label_2c0878;
        case 0x2c087cu: goto label_2c087c;
        case 0x2c0880u: goto label_2c0880;
        case 0x2c0884u: goto label_2c0884;
        case 0x2c0888u: goto label_2c0888;
        case 0x2c088cu: goto label_2c088c;
        case 0x2c0890u: goto label_2c0890;
        case 0x2c0894u: goto label_2c0894;
        case 0x2c0898u: goto label_2c0898;
        case 0x2c089cu: goto label_2c089c;
        case 0x2c08a0u: goto label_2c08a0;
        case 0x2c08a4u: goto label_2c08a4;
        case 0x2c08a8u: goto label_2c08a8;
        case 0x2c08acu: goto label_2c08ac;
        case 0x2c08b0u: goto label_2c08b0;
        case 0x2c08b4u: goto label_2c08b4;
        case 0x2c08b8u: goto label_2c08b8;
        case 0x2c08bcu: goto label_2c08bc;
        case 0x2c08c0u: goto label_2c08c0;
        case 0x2c08c4u: goto label_2c08c4;
        case 0x2c08c8u: goto label_2c08c8;
        case 0x2c08ccu: goto label_2c08cc;
        case 0x2c08d0u: goto label_2c08d0;
        case 0x2c08d4u: goto label_2c08d4;
        case 0x2c08d8u: goto label_2c08d8;
        case 0x2c08dcu: goto label_2c08dc;
        case 0x2c08e0u: goto label_2c08e0;
        case 0x2c08e4u: goto label_2c08e4;
        case 0x2c08e8u: goto label_2c08e8;
        case 0x2c08ecu: goto label_2c08ec;
        case 0x2c08f0u: goto label_2c08f0;
        case 0x2c08f4u: goto label_2c08f4;
        case 0x2c08f8u: goto label_2c08f8;
        case 0x2c08fcu: goto label_2c08fc;
        case 0x2c0900u: goto label_2c0900;
        case 0x2c0904u: goto label_2c0904;
        case 0x2c0908u: goto label_2c0908;
        case 0x2c090cu: goto label_2c090c;
        case 0x2c0910u: goto label_2c0910;
        case 0x2c0914u: goto label_2c0914;
        case 0x2c0918u: goto label_2c0918;
        case 0x2c091cu: goto label_2c091c;
        case 0x2c0920u: goto label_2c0920;
        case 0x2c0924u: goto label_2c0924;
        case 0x2c0928u: goto label_2c0928;
        case 0x2c092cu: goto label_2c092c;
        case 0x2c0930u: goto label_2c0930;
        case 0x2c0934u: goto label_2c0934;
        case 0x2c0938u: goto label_2c0938;
        case 0x2c093cu: goto label_2c093c;
        case 0x2c0940u: goto label_2c0940;
        case 0x2c0944u: goto label_2c0944;
        case 0x2c0948u: goto label_2c0948;
        case 0x2c094cu: goto label_2c094c;
        case 0x2c0950u: goto label_2c0950;
        case 0x2c0954u: goto label_2c0954;
        case 0x2c0958u: goto label_2c0958;
        case 0x2c095cu: goto label_2c095c;
        case 0x2c0960u: goto label_2c0960;
        case 0x2c0964u: goto label_2c0964;
        case 0x2c0968u: goto label_2c0968;
        case 0x2c096cu: goto label_2c096c;
        case 0x2c0970u: goto label_2c0970;
        case 0x2c0974u: goto label_2c0974;
        case 0x2c0978u: goto label_2c0978;
        case 0x2c097cu: goto label_2c097c;
        case 0x2c0980u: goto label_2c0980;
        case 0x2c0984u: goto label_2c0984;
        case 0x2c0988u: goto label_2c0988;
        case 0x2c098cu: goto label_2c098c;
        case 0x2c0990u: goto label_2c0990;
        case 0x2c0994u: goto label_2c0994;
        default: break;
    }

    ctx->pc = 0x2c0350u;

label_2c0350:
    // 0x2c0350: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x2c0350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_2c0354:
    // 0x2c0354: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c0358:
    // 0x2c0358: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c0358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2c035c:
    // 0x2c035c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c035cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c0360:
    // 0x2c0360: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c0360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c0364:
    // 0x2c0364: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c0364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c0368:
    // 0x2c0368: 0x8f849c7c  lw          $a0, -0x6384($gp)
    ctx->pc = 0x2c0368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941820)));
label_2c036c:
    // 0x2c036c: 0x84830014  lh          $v1, 0x14($a0)
    ctx->pc = 0x2c036cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_2c0370:
    // 0x2c0370: 0x1062012f  beq         $v1, $v0, . + 4 + (0x12F << 2)
label_2c0374:
    if (ctx->pc == 0x2C0374u) {
        ctx->pc = 0x2C0374u;
            // 0x2c0374: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0378u;
        goto label_2c0378;
    }
    ctx->pc = 0x2C0370u;
    {
        const bool branch_taken_0x2c0370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0370u;
            // 0x2c0374: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0370) {
            ctx->pc = 0x2C0830u;
            goto label_2c0830;
        }
    }
    ctx->pc = 0x2C0378u;
label_2c0378:
    // 0x2c0378: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c0378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c037c:
    // 0x2c037c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2c0380:
    if (ctx->pc == 0x2C0380u) {
        ctx->pc = 0x2C0380u;
            // 0x2c0380: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2C0384u;
        goto label_2c0384;
    }
    ctx->pc = 0x2C037Cu;
    {
        const bool branch_taken_0x2c037c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C037Cu;
            // 0x2c0380: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c037c) {
            ctx->pc = 0x2C039Cu;
            goto label_2c039c;
        }
    }
    ctx->pc = 0x2C0384u;
label_2c0384:
    // 0x2c0384: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2c0388:
    if (ctx->pc == 0x2C0388u) {
        ctx->pc = 0x2C0388u;
            // 0x2c0388: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2C038Cu;
        goto label_2c038c;
    }
    ctx->pc = 0x2C0384u;
    {
        const bool branch_taken_0x2c0384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0384u;
            // 0x2c0388: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0384) {
            ctx->pc = 0x2C039Cu;
            goto label_2c039c;
        }
    }
    ctx->pc = 0x2C038Cu;
label_2c038c:
    // 0x2c038c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2c0390:
    if (ctx->pc == 0x2C0390u) {
        ctx->pc = 0x2C0394u;
        goto label_2c0394;
    }
    ctx->pc = 0x2C038Cu;
    {
        const bool branch_taken_0x2c038c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c038c) {
            ctx->pc = 0x2C039Cu;
            goto label_2c039c;
        }
    }
    ctx->pc = 0x2C0394u;
label_2c0394:
    // 0x2c0394: 0x10000127  b           . + 4 + (0x127 << 2)
label_2c0398:
    if (ctx->pc == 0x2C0398u) {
        ctx->pc = 0x2C0398u;
            // 0x2c0398: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->pc = 0x2C039Cu;
        goto label_2c039c;
    }
    ctx->pc = 0x2C0394u;
    {
        const bool branch_taken_0x2c0394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0394u;
            // 0x2c0398: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0394) {
            ctx->pc = 0x2C0834u;
            goto label_2c0834;
        }
    }
    ctx->pc = 0x2C039Cu;
label_2c039c:
    // 0x2c039c: 0x8c820134  lw          $v0, 0x134($a0)
    ctx->pc = 0x2c039cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 308)));
label_2c03a0:
    // 0x2c03a0: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x2c03a0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
label_2c03a4:
    // 0x2c03a4: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_2c03a8:
    if (ctx->pc == 0x2C03A8u) {
        ctx->pc = 0x2C03A8u;
            // 0x2c03a8: 0x26311ef0  addiu       $s1, $s1, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7920));
        ctx->pc = 0x2C03ACu;
        goto label_2c03ac;
    }
    ctx->pc = 0x2C03A4u;
    {
        const bool branch_taken_0x2c03a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C03A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C03A4u;
            // 0x2c03a8: 0x26311ef0  addiu       $s1, $s1, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c03a4) {
            ctx->pc = 0x2C04ECu;
            goto label_2c04ec;
        }
    }
    ctx->pc = 0x2C03ACu;
label_2c03ac:
    // 0x2c03ac: 0x8c83013c  lw          $v1, 0x13C($a0)
    ctx->pc = 0x2c03acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
label_2c03b0:
    // 0x2c03b0: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2c03b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
label_2c03b4:
    // 0x2c03b4: 0x2442d1c0  addiu       $v0, $v0, -0x2E40
    ctx->pc = 0x2c03b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955456));
label_2c03b8:
    // 0x2c03b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c03b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2c03bc:
    // 0x2c03bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c03bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c03c0:
    // 0x2c03c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c03c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c03c4:
    // 0x2c03c4: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_2c03c8:
    if (ctx->pc == 0x2C03C8u) {
        ctx->pc = 0x2C03CCu;
        goto label_2c03cc;
    }
    ctx->pc = 0x2C03C4u;
    {
        const bool branch_taken_0x2c03c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c03c4) {
            ctx->pc = 0x2C04ECu;
            goto label_2c04ec;
        }
    }
    ctx->pc = 0x2C03CCu;
label_2c03cc:
    // 0x2c03cc: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x2c03ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_2c03d0:
    // 0x2c03d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c03d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c03d4:
    // 0x2c03d4: 0xc04ba14  jal         func_12E850
label_2c03d8:
    if (ctx->pc == 0x2C03D8u) {
        ctx->pc = 0x2C03D8u;
            // 0x2c03d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C03DCu;
        goto label_2c03dc;
    }
    ctx->pc = 0x2C03D4u;
    SET_GPR_U32(ctx, 31, 0x2C03DCu);
    ctx->pc = 0x2C03D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C03D4u;
            // 0x2c03d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C03DCu; }
        if (ctx->pc != 0x2C03DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C03DCu; }
        if (ctx->pc != 0x2C03DCu) { return; }
    }
    ctx->pc = 0x2C03DCu;
label_2c03dc:
    // 0x2c03dc: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x2c03dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_2c03e0:
    // 0x2c03e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c03e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c03e4:
    // 0x2c03e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c03e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c03e8:
    // 0x2c03e8: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2c03e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2c03ec:
    // 0x2c03ec: 0xc04f8e4  jal         func_13E390
label_2c03f0:
    if (ctx->pc == 0x2C03F0u) {
        ctx->pc = 0x2C03F0u;
            // 0x2c03f0: 0x240801c0  addiu       $t0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->pc = 0x2C03F4u;
        goto label_2c03f4;
    }
    ctx->pc = 0x2C03ECu;
    SET_GPR_U32(ctx, 31, 0x2C03F4u);
    ctx->pc = 0x2C03F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C03ECu;
            // 0x2c03f0: 0x240801c0  addiu       $t0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C03F4u; }
        if (ctx->pc != 0x2C03F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C03F4u; }
        if (ctx->pc != 0x2C03F4u) { return; }
    }
    ctx->pc = 0x2C03F4u;
label_2c03f4:
    // 0x2c03f4: 0x8f839c7c  lw          $v1, -0x6384($gp)
    ctx->pc = 0x2c03f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941820)));
label_2c03f8:
    // 0x2c03f8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2c03f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2c03fc:
    // 0x2c03fc: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2c03fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
label_2c0400:
    // 0x2c0400: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x2c0400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_2c0404:
    // 0x2c0404: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c0404u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c0408:
    // 0x2c0408: 0x2442d1c0  addiu       $v0, $v0, -0x2E40
    ctx->pc = 0x2c0408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955456));
label_2c040c:
    // 0x2c040c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2c040cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c0410:
    // 0x2c0410: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2c0410u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c0414:
    // 0x2c0414: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c0414u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2c0418:
    // 0x2c0418: 0x8c63013c  lw          $v1, 0x13C($v1)
    ctx->pc = 0x2c0418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_2c041c:
    // 0x2c041c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c041cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2c0420:
    // 0x2c0420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c0424:
    // 0x2c0424: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c0424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c0428:
    // 0x2c0428: 0xc087fcc  jal         func_21FF30
label_2c042c:
    if (ctx->pc == 0x2C042Cu) {
        ctx->pc = 0x2C042Cu;
            // 0x2c042c: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0430u;
        goto label_2c0430;
    }
    ctx->pc = 0x2C0428u;
    SET_GPR_U32(ctx, 31, 0x2C0430u);
    ctx->pc = 0x2C042Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0428u;
            // 0x2c042c: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0430u; }
        if (ctx->pc != 0x2C0430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0430u; }
        if (ctx->pc != 0x2C0430u) { return; }
    }
    ctx->pc = 0x2C0430u;
label_2c0430:
    // 0x2c0430: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2c0430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
label_2c0434:
    // 0x2c0434: 0x8f898ad0  lw          $t1, -0x7530($gp)
    ctx->pc = 0x2c0434u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_2c0438:
    // 0x2c0438: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c0438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c043c:
    // 0x2c043c: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x2c043cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
label_2c0440:
    // 0x2c0440: 0x3c0343bc  lui         $v1, 0x43BC
    ctx->pc = 0x2c0440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17340 << 16));
label_2c0444:
    // 0x2c0444: 0x250851d0  addiu       $t0, $t0, 0x51D0
    ctx->pc = 0x2c0444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20944));
label_2c0448:
    // 0x2c0448: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c0448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2c044c:
    // 0x2c044c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2c044cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2c0450:
    // 0x2c0450: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2c0450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2c0454:
    // 0x2c0454: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c0454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0458:
    // 0x2c0458: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2c0458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2c045c:
    // 0x2c045c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c045cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0460:
    // 0x2c0460: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x2c0460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_2c0464:
    // 0x2c0464: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c0464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0468:
    // 0x2c0468: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2c0468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_2c046c:
    // 0x2c046c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2c046cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2c0470:
    // 0x2c0470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c0474:
    // 0x2c0474: 0xc0887b8  jal         func_221EE0
label_2c0478:
    if (ctx->pc == 0x2C0478u) {
        ctx->pc = 0x2C0478u;
            // 0x2c0478: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2C047Cu;
        goto label_2c047c;
    }
    ctx->pc = 0x2C0474u;
    SET_GPR_U32(ctx, 31, 0x2C047Cu);
    ctx->pc = 0x2C0478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0474u;
            // 0x2c0478: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C047Cu; }
        if (ctx->pc != 0x2C047Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C047Cu; }
        if (ctx->pc != 0x2C047Cu) { return; }
    }
    ctx->pc = 0x2C047Cu;
label_2c047c:
    // 0x2c047c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c047cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2c0480:
    // 0x2c0480: 0x8c23ca5c  lw          $v1, -0x35A4($at)
    ctx->pc = 0x2c0480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
label_2c0484:
    // 0x2c0484: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_2c0488:
    if (ctx->pc == 0x2C0488u) {
        ctx->pc = 0x2C0488u;
            // 0x2c0488: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x2C048Cu;
        goto label_2c048c;
    }
    ctx->pc = 0x2C0484u;
    {
        const bool branch_taken_0x2c0484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0484u;
            // 0x2c0488: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0484) {
            ctx->pc = 0x2C04D0u;
            goto label_2c04d0;
        }
    }
    ctx->pc = 0x2C048Cu;
label_2c048c:
    // 0x2c048c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c048cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c0490:
    // 0x2c0490: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x2c0490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
label_2c0494:
    // 0x2c0494: 0xc04ba14  jal         func_12E850
label_2c0498:
    if (ctx->pc == 0x2C0498u) {
        ctx->pc = 0x2C0498u;
            // 0x2c0498: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C049Cu;
        goto label_2c049c;
    }
    ctx->pc = 0x2C0494u;
    SET_GPR_U32(ctx, 31, 0x2C049Cu);
    ctx->pc = 0x2C0498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0494u;
            // 0x2c0498: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C049Cu; }
        if (ctx->pc != 0x2C049Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C049Cu; }
        if (ctx->pc != 0x2C049Cu) { return; }
    }
    ctx->pc = 0x2C049Cu;
label_2c049c:
    // 0x2c049c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c049cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2c04a0:
    // 0x2c04a0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2c04a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c04a4:
    // 0x2c04a4: 0x8c24ca5c  lw          $a0, -0x35A4($at)
    ctx->pc = 0x2c04a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
label_2c04a8:
    // 0x2c04a8: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2c04a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2c04ac:
    // 0x2c04ac: 0x2406017c  addiu       $a2, $zero, 0x17C
    ctx->pc = 0x2c04acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
label_2c04b0:
    // 0x2c04b0: 0xc0876a0  jal         func_21DA80
label_2c04b4:
    if (ctx->pc == 0x2C04B4u) {
        ctx->pc = 0x2C04B4u;
            // 0x2c04b4: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C04B8u;
        goto label_2c04b8;
    }
    ctx->pc = 0x2C04B0u;
    SET_GPR_U32(ctx, 31, 0x2C04B8u);
    ctx->pc = 0x2C04B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C04B0u;
            // 0x2c04b4: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DA80u;
    if (runtime->hasFunction(0x21DA80u)) {
        auto targetFn = runtime->lookupFunction(0x21DA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C04B8u; }
        if (ctx->pc != 0x2C04B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPutPos__7CDC2MesFiiii_0x21da80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C04B8u; }
        if (ctx->pc != 0x2C04B8u) { return; }
    }
    ctx->pc = 0x2C04B8u;
label_2c04b8:
    // 0x2c04b8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c04b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2c04bc:
    // 0x2c04bc: 0xc087898  jal         func_21E260
label_2c04c0:
    if (ctx->pc == 0x2C04C0u) {
        ctx->pc = 0x2C04C0u;
            // 0x2c04c0: 0x8c24ca5c  lw          $a0, -0x35A4($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
        ctx->pc = 0x2C04C4u;
        goto label_2c04c4;
    }
    ctx->pc = 0x2C04BCu;
    SET_GPR_U32(ctx, 31, 0x2C04C4u);
    ctx->pc = 0x2C04C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C04BCu;
            // 0x2c04c0: 0x8c24ca5c  lw          $a0, -0x35A4($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C04C4u; }
        if (ctx->pc != 0x2C04C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C04C4u; }
        if (ctx->pc != 0x2C04C4u) { return; }
    }
    ctx->pc = 0x2C04C4u;
label_2c04c4:
    // 0x2c04c4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c04c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2c04c8:
    // 0x2c04c8: 0xc0878c8  jal         func_21E320
label_2c04cc:
    if (ctx->pc == 0x2C04CCu) {
        ctx->pc = 0x2C04CCu;
            // 0x2c04cc: 0x8c24ca5c  lw          $a0, -0x35A4($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
        ctx->pc = 0x2C04D0u;
        goto label_2c04d0;
    }
    ctx->pc = 0x2C04C8u;
    SET_GPR_U32(ctx, 31, 0x2C04D0u);
    ctx->pc = 0x2C04CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C04C8u;
            // 0x2c04cc: 0x8c24ca5c  lw          $a0, -0x35A4($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C04D0u; }
        if (ctx->pc != 0x2C04D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C04D0u; }
        if (ctx->pc != 0x2C04D0u) { return; }
    }
    ctx->pc = 0x2C04D0u;
label_2c04d0:
    // 0x2c04d0: 0x8f849c7c  lw          $a0, -0x6384($gp)
    ctx->pc = 0x2c04d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941820)));
label_2c04d4:
    // 0x2c04d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2c04d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c04d8:
    // 0x2c04d8: 0x84840014  lh          $a0, 0x14($a0)
    ctx->pc = 0x2c04d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_2c04dc:
    // 0x2c04dc: 0x148300d7  bne         $a0, $v1, . + 4 + (0xD7 << 2)
label_2c04e0:
    if (ctx->pc == 0x2C04E0u) {
        ctx->pc = 0x2C04E4u;
        goto label_2c04e4;
    }
    ctx->pc = 0x2C04DCu;
    {
        const bool branch_taken_0x2c04dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c04dc) {
            ctx->pc = 0x2C083Cu;
            goto label_2c083c;
        }
    }
    ctx->pc = 0x2C04E4u;
label_2c04e4:
    // 0x2c04e4: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_2c04e8:
    if (ctx->pc == 0x2C04E8u) {
        ctx->pc = 0x2C04E8u;
            // 0x2c04e8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C04ECu;
        goto label_2c04ec;
    }
    ctx->pc = 0x2C04E4u;
    {
        const bool branch_taken_0x2c04e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C04E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C04E4u;
            // 0x2c04e8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c04e4) {
            ctx->pc = 0x2C083Cu;
            goto label_2c083c;
        }
    }
    ctx->pc = 0x2C04ECu;
label_2c04ec:
    // 0x2c04ec: 0xc0a6360  jal         func_298D80
label_2c04f0:
    if (ctx->pc == 0x2C04F0u) {
        ctx->pc = 0x2C04F0u;
            // 0x2c04f0: 0x8f849c4c  lw          $a0, -0x63B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941772)));
        ctx->pc = 0x2C04F4u;
        goto label_2c04f4;
    }
    ctx->pc = 0x2C04ECu;
    SET_GPR_U32(ctx, 31, 0x2C04F4u);
    ctx->pc = 0x2C04F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C04ECu;
            // 0x2c04f0: 0x8f849c4c  lw          $a0, -0x63B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C04F4u; }
        if (ctx->pc != 0x2C04F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C04F4u; }
        if (ctx->pc != 0x2C04F4u) { return; }
    }
    ctx->pc = 0x2C04F4u;
label_2c04f4:
    // 0x2c04f4: 0x8f829c7c  lw          $v0, -0x6384($gp)
    ctx->pc = 0x2c04f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941820)));
label_2c04f8:
    // 0x2c04f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c04f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c04fc:
    // 0x2c04fc: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x2c04fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2c0500:
    // 0x2c0500: 0xc04ba14  jal         func_12E850
label_2c0504:
    if (ctx->pc == 0x2C0504u) {
        ctx->pc = 0x2C0504u;
            // 0x2c0504: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0508u;
        goto label_2c0508;
    }
    ctx->pc = 0x2C0500u;
    SET_GPR_U32(ctx, 31, 0x2C0508u);
    ctx->pc = 0x2C0504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0500u;
            // 0x2c0504: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0508u; }
        if (ctx->pc != 0x2C0508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0508u; }
        if (ctx->pc != 0x2C0508u) { return; }
    }
    ctx->pc = 0x2C0508u;
label_2c0508:
    // 0x2c0508: 0xc04d0e8  jal         func_1343A0
label_2c050c:
    if (ctx->pc == 0x2C050Cu) {
        ctx->pc = 0x2C050Cu;
            // 0x2c050c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2C0510u;
        goto label_2c0510;
    }
    ctx->pc = 0x2C0508u;
    SET_GPR_U32(ctx, 31, 0x2C0510u);
    ctx->pc = 0x2C050Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0508u;
            // 0x2c050c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0510u; }
        if (ctx->pc != 0x2C0510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0510u; }
        if (ctx->pc != 0x2C0510u) { return; }
    }
    ctx->pc = 0x2C0510u;
label_2c0510:
    // 0x2c0510: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c0510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2c0514:
    // 0x2c0514: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c0514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0518:
    // 0x2c0518: 0xc04d104  jal         func_134410
label_2c051c:
    if (ctx->pc == 0x2C051Cu) {
        ctx->pc = 0x2C051Cu;
            // 0x2c051c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0520u;
        goto label_2c0520;
    }
    ctx->pc = 0x2C0518u;
    SET_GPR_U32(ctx, 31, 0x2C0520u);
    ctx->pc = 0x2C051Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0518u;
            // 0x2c051c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0520u; }
        if (ctx->pc != 0x2C0520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0520u; }
        if (ctx->pc != 0x2C0520u) { return; }
    }
    ctx->pc = 0x2C0520u;
label_2c0520:
    // 0x2c0520: 0xc079f5c  jal         func_1E7D70
label_2c0524:
    if (ctx->pc == 0x2C0524u) {
        ctx->pc = 0x2C0524u;
            // 0x2c0524: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2C0528u;
        goto label_2c0528;
    }
    ctx->pc = 0x2C0520u;
    SET_GPR_U32(ctx, 31, 0x2C0528u);
    ctx->pc = 0x2C0524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0520u;
            // 0x2c0524: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0528u; }
        if (ctx->pc != 0x2C0528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0528u; }
        if (ctx->pc != 0x2C0528u) { return; }
    }
    ctx->pc = 0x2C0528u;
label_2c0528:
    // 0x2c0528: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c0528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2c052c:
    // 0x2c052c: 0xc04d3b0  jal         func_134EC0
label_2c0530:
    if (ctx->pc == 0x2C0530u) {
        ctx->pc = 0x2C0530u;
            // 0x2c0530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0534u;
        goto label_2c0534;
    }
    ctx->pc = 0x2C052Cu;
    SET_GPR_U32(ctx, 31, 0x2C0534u);
    ctx->pc = 0x2C0530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C052Cu;
            // 0x2c0530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0534u; }
        if (ctx->pc != 0x2C0534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0534u; }
        if (ctx->pc != 0x2C0534u) { return; }
    }
    ctx->pc = 0x2C0534u;
label_2c0534:
    // 0x2c0534: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c0534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2c0538:
    // 0x2c0538: 0xc04d428  jal         func_1350A0
label_2c053c:
    if (ctx->pc == 0x2C053Cu) {
        ctx->pc = 0x2C053Cu;
            // 0x2c053c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C0540u;
        goto label_2c0540;
    }
    ctx->pc = 0x2C0538u;
    SET_GPR_U32(ctx, 31, 0x2C0540u);
    ctx->pc = 0x2C053Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0538u;
            // 0x2c053c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0540u; }
        if (ctx->pc != 0x2C0540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0540u; }
        if (ctx->pc != 0x2C0540u) { return; }
    }
    ctx->pc = 0x2C0540u;
label_2c0540:
    // 0x2c0540: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c0540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2c0544:
    // 0x2c0544: 0xc04d128  jal         func_1344A0
label_2c0548:
    if (ctx->pc == 0x2C0548u) {
        ctx->pc = 0x2C0548u;
            // 0x2c0548: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2C054Cu;
        goto label_2c054c;
    }
    ctx->pc = 0x2C0544u;
    SET_GPR_U32(ctx, 31, 0x2C054Cu);
    ctx->pc = 0x2C0548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0544u;
            // 0x2c0548: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C054Cu; }
        if (ctx->pc != 0x2C054Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C054Cu; }
        if (ctx->pc != 0x2C054Cu) { return; }
    }
    ctx->pc = 0x2C054Cu;
label_2c054c:
    // 0x2c054c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c054cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2c0550:
    // 0x2c0550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c0550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0554:
    // 0x2c0554: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c0554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0558:
    // 0x2c0558: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c0558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c055c:
    // 0x2c055c: 0xc04d320  jal         func_134C80
label_2c0560:
    if (ctx->pc == 0x2C0560u) {
        ctx->pc = 0x2C0560u;
            // 0x2c0560: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2C0564u;
        goto label_2c0564;
    }
    ctx->pc = 0x2C055Cu;
    SET_GPR_U32(ctx, 31, 0x2C0564u);
    ctx->pc = 0x2C0560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C055Cu;
            // 0x2c0560: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0564u; }
        if (ctx->pc != 0x2C0564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0564u; }
        if (ctx->pc != 0x2C0564u) { return; }
    }
    ctx->pc = 0x2C0564u;
label_2c0564:
    // 0x2c0564: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c0564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2c0568:
    // 0x2c0568: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c0568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c056c:
    // 0x2c056c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c056cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0570:
    // 0x2c0570: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2c0570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2c0574:
    // 0x2c0574: 0x240801a0  addiu       $t0, $zero, 0x1A0
    ctx->pc = 0x2c0574u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
label_2c0578:
    // 0x2c0578: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c0578u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c057c:
    // 0x2c057c: 0xc079f7c  jal         func_1E7DF0
label_2c0580:
    if (ctx->pc == 0x2C0580u) {
        ctx->pc = 0x2C0580u;
            // 0x2c0580: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0584u;
        goto label_2c0584;
    }
    ctx->pc = 0x2C057Cu;
    SET_GPR_U32(ctx, 31, 0x2C0584u);
    ctx->pc = 0x2C0580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C057Cu;
            // 0x2c0580: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0584u; }
        if (ctx->pc != 0x2C0584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0584u; }
        if (ctx->pc != 0x2C0584u) { return; }
    }
    ctx->pc = 0x2C0584u;
label_2c0584:
    // 0x2c0584: 0x8f859c50  lw          $a1, -0x63B0($gp)
    ctx->pc = 0x2c0584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941776)));
label_2c0588:
    // 0x2c0588: 0xc04d368  jal         func_134DA0
label_2c058c:
    if (ctx->pc == 0x2C058Cu) {
        ctx->pc = 0x2C058Cu;
            // 0x2c058c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2C0590u;
        goto label_2c0590;
    }
    ctx->pc = 0x2C0588u;
    SET_GPR_U32(ctx, 31, 0x2C0590u);
    ctx->pc = 0x2C058Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0588u;
            // 0x2c058c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0590u; }
        if (ctx->pc != 0x2C0590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0590u; }
        if (ctx->pc != 0x2C0590u) { return; }
    }
    ctx->pc = 0x2C0590u;
label_2c0590:
    // 0x2c0590: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2c0590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2c0594:
    // 0x2c0594: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c0594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2c0598:
    // 0x2c0598: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2c0598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c059c:
    // 0x2c059c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2c059cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c05a0:
    // 0x2c05a0: 0xc04d320  jal         func_134C80
label_2c05a4:
    if (ctx->pc == 0x2C05A4u) {
        ctx->pc = 0x2C05A4u;
            // 0x2c05a4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C05A8u;
        goto label_2c05a8;
    }
    ctx->pc = 0x2C05A0u;
    SET_GPR_U32(ctx, 31, 0x2C05A8u);
    ctx->pc = 0x2C05A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C05A0u;
            // 0x2c05a4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C05A8u; }
        if (ctx->pc != 0x2C05A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C05A8u; }
        if (ctx->pc != 0x2C05A8u) { return; }
    }
    ctx->pc = 0x2C05A8u;
label_2c05a8:
    // 0x2c05a8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c05a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2c05ac:
    // 0x2c05ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c05acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c05b0:
    // 0x2c05b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c05b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c05b4:
    // 0x2c05b4: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2c05b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2c05b8:
    // 0x2c05b8: 0x240801a0  addiu       $t0, $zero, 0x1A0
    ctx->pc = 0x2c05b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
label_2c05bc:
    // 0x2c05bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c05bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c05c0:
    // 0x2c05c0: 0xc079f7c  jal         func_1E7DF0
label_2c05c4:
    if (ctx->pc == 0x2C05C4u) {
        ctx->pc = 0x2C05C4u;
            // 0x2c05c4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C05C8u;
        goto label_2c05c8;
    }
    ctx->pc = 0x2C05C0u;
    SET_GPR_U32(ctx, 31, 0x2C05C8u);
    ctx->pc = 0x2C05C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C05C0u;
            // 0x2c05c4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C05C8u; }
        if (ctx->pc != 0x2C05C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C05C8u; }
        if (ctx->pc != 0x2C05C8u) { return; }
    }
    ctx->pc = 0x2C05C8u;
label_2c05c8:
    // 0x2c05c8: 0xc04d1a4  jal         func_134690
label_2c05cc:
    if (ctx->pc == 0x2C05CCu) {
        ctx->pc = 0x2C05CCu;
            // 0x2c05cc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2C05D0u;
        goto label_2c05d0;
    }
    ctx->pc = 0x2C05C8u;
    SET_GPR_U32(ctx, 31, 0x2C05D0u);
    ctx->pc = 0x2C05CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C05C8u;
            // 0x2c05cc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C05D0u; }
        if (ctx->pc != 0x2C05D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C05D0u; }
        if (ctx->pc != 0x2C05D0u) { return; }
    }
    ctx->pc = 0x2C05D0u;
label_2c05d0:
    // 0x2c05d0: 0x8f849c7c  lw          $a0, -0x6384($gp)
    ctx->pc = 0x2c05d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941820)));
label_2c05d4:
    // 0x2c05d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2c05d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c05d8:
    // 0x2c05d8: 0x84840014  lh          $a0, 0x14($a0)
    ctx->pc = 0x2c05d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_2c05dc:
    // 0x2c05dc: 0x14830097  bne         $a0, $v1, . + 4 + (0x97 << 2)
label_2c05e0:
    if (ctx->pc == 0x2C05E0u) {
        ctx->pc = 0x2C05E4u;
        goto label_2c05e4;
    }
    ctx->pc = 0x2C05DCu;
    {
        const bool branch_taken_0x2c05dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c05dc) {
            ctx->pc = 0x2C083Cu;
            goto label_2c083c;
        }
    }
    ctx->pc = 0x2C05E4u;
label_2c05e4:
    // 0x2c05e4: 0xc0a6378  jal         func_298DE0
label_2c05e8:
    if (ctx->pc == 0x2C05E8u) {
        ctx->pc = 0x2C05E8u;
            // 0x2c05e8: 0x8f849c4c  lw          $a0, -0x63B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941772)));
        ctx->pc = 0x2C05ECu;
        goto label_2c05ec;
    }
    ctx->pc = 0x2C05E4u;
    SET_GPR_U32(ctx, 31, 0x2C05ECu);
    ctx->pc = 0x2C05E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C05E4u;
            // 0x2c05e8: 0x8f849c4c  lw          $a0, -0x63B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298DE0u;
    if (runtime->hasFunction(0x298DE0u)) {
        auto targetFn = runtime->lookupFunction(0x298DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C05ECu; }
        if (ctx->pc != 0x2C05ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Term__6CMovieFv_0x298de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C05ECu; }
        if (ctx->pc != 0x2C05ECu) { return; }
    }
    ctx->pc = 0x2C05ECu;
label_2c05ec:
    // 0x2c05ec: 0xc0a6360  jal         func_298D80
label_2c05f0:
    if (ctx->pc == 0x2C05F0u) {
        ctx->pc = 0x2C05F0u;
            // 0x2c05f0: 0x8f849c4c  lw          $a0, -0x63B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941772)));
        ctx->pc = 0x2C05F4u;
        goto label_2c05f4;
    }
    ctx->pc = 0x2C05ECu;
    SET_GPR_U32(ctx, 31, 0x2C05F4u);
    ctx->pc = 0x2C05F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C05ECu;
            // 0x2c05f0: 0x8f849c4c  lw          $a0, -0x63B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C05F4u; }
        if (ctx->pc != 0x2C05F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C05F4u; }
        if (ctx->pc != 0x2C05F4u) { return; }
    }
    ctx->pc = 0x2C05F4u;
label_2c05f4:
    // 0x2c05f4: 0xc040cc0  jal         func_103300
label_2c05f8:
    if (ctx->pc == 0x2C05F8u) {
        ctx->pc = 0x2C05F8u;
            // 0x2c05f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C05FCu;
        goto label_2c05fc;
    }
    ctx->pc = 0x2C05F4u;
    SET_GPR_U32(ctx, 31, 0x2C05FCu);
    ctx->pc = 0x2C05F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C05F4u;
            // 0x2c05f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C05FCu; }
        if (ctx->pc != 0x2C05FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C05FCu; }
        if (ctx->pc != 0x2C05FCu) { return; }
    }
    ctx->pc = 0x2C05FCu;
label_2c05fc:
    // 0x2c05fc: 0xc040cc0  jal         func_103300
label_2c0600:
    if (ctx->pc == 0x2C0600u) {
        ctx->pc = 0x2C0600u;
            // 0x2c0600: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0604u;
        goto label_2c0604;
    }
    ctx->pc = 0x2C05FCu;
    SET_GPR_U32(ctx, 31, 0x2C0604u);
    ctx->pc = 0x2C0600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C05FCu;
            // 0x2c0600: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0604u; }
        if (ctx->pc != 0x2C0604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0604u; }
        if (ctx->pc != 0x2C0604u) { return; }
    }
    ctx->pc = 0x2C0604u;
label_2c0604:
    // 0x2c0604: 0xc040cc0  jal         func_103300
label_2c0608:
    if (ctx->pc == 0x2C0608u) {
        ctx->pc = 0x2C0608u;
            // 0x2c0608: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C060Cu;
        goto label_2c060c;
    }
    ctx->pc = 0x2C0604u;
    SET_GPR_U32(ctx, 31, 0x2C060Cu);
    ctx->pc = 0x2C0608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0604u;
            // 0x2c0608: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C060Cu; }
        if (ctx->pc != 0x2C060Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C060Cu; }
        if (ctx->pc != 0x2C060Cu) { return; }
    }
    ctx->pc = 0x2C060Cu;
label_2c060c:
    // 0x2c060c: 0xc065af8  jal         func_196BE0
label_2c0610:
    if (ctx->pc == 0x2C0610u) {
        ctx->pc = 0x2C0614u;
        goto label_2c0614;
    }
    ctx->pc = 0x2C060Cu;
    SET_GPR_U32(ctx, 31, 0x2C0614u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0614u; }
        if (ctx->pc != 0x2C0614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0614u; }
        if (ctx->pc != 0x2C0614u) { return; }
    }
    ctx->pc = 0x2C0614u;
label_2c0614:
    // 0x2c0614: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c0614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2c0618:
    // 0x2c0618: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c0618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c061c:
    // 0x2c061c: 0xac20d254  sw          $zero, -0x2DAC($at)
    ctx->pc = 0x2c061cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955604), GPR_U32(ctx, 0));
label_2c0620:
    // 0x2c0620: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c0620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2c0624:
    // 0x2c0624: 0xac20d24c  sw          $zero, -0x2DB4($at)
    ctx->pc = 0x2c0624u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955596), GPR_U32(ctx, 0));
label_2c0628:
    // 0x2c0628: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c0628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2c062c:
    // 0x2c062c: 0x8c23d254  lw          $v1, -0x2DAC($at)
    ctx->pc = 0x2c062cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955604)));
label_2c0630:
    // 0x2c0630: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c0630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2c0634:
    // 0x2c0634: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2c0634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2c0638:
    // 0x2c0638: 0x8c22d250  lw          $v0, -0x2DB0($at)
    ctx->pc = 0x2c0638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955600)));
label_2c063c:
    // 0x2c063c: 0xc08ca88  jal         func_232A20
label_2c0640:
    if (ctx->pc == 0x2C0640u) {
        ctx->pc = 0x2C0640u;
            // 0x2c0640: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2C0644u;
        goto label_2c0644;
    }
    ctx->pc = 0x2C063Cu;
    SET_GPR_U32(ctx, 31, 0x2C0644u);
    ctx->pc = 0x2C0640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C063Cu;
            // 0x2c0640: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232A20u;
    if (runtime->hasFunction(0x232A20u)) {
        auto targetFn = runtime->lookupFunction(0x232A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0644u; }
        if (ctx->pc != 0x2C0644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuLoopType__Fv_0x232a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0644u; }
        if (ctx->pc != 0x2C0644u) { return; }
    }
    ctx->pc = 0x2C0644u;
label_2c0644:
    // 0x2c0644: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c0644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2c0648:
    // 0x2c0648: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2c0648u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2c064c:
    // 0x2c064c: 0x8425d5fc  lh          $a1, -0x2A04($at)
    ctx->pc = 0x2c064cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294956540)));
label_2c0650:
    // 0x2c0650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c0650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c0654:
    // 0x2c0654: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c0654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2c0658:
    // 0x2c0658: 0xc04b950  jal         func_12E540
label_2c065c:
    if (ctx->pc == 0x2C065Cu) {
        ctx->pc = 0x2C065Cu;
            // 0x2c065c: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x2C0660u;
        goto label_2c0660;
    }
    ctx->pc = 0x2C0658u;
    SET_GPR_U32(ctx, 31, 0x2C0660u);
    ctx->pc = 0x2C065Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0658u;
            // 0x2c065c: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0660u; }
        if (ctx->pc != 0x2C0660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0660u; }
        if (ctx->pc != 0x2C0660u) { return; }
    }
    ctx->pc = 0x2C0660u;
label_2c0660:
    // 0x2c0660: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c0660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2c0664:
    // 0x2c0664: 0x8c22d5f4  lw          $v0, -0x2A0C($at)
    ctx->pc = 0x2c0664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956532)));
label_2c0668:
    // 0x2c0668: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2c0668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_2c066c:
    // 0x2c066c: 0xc06421c  jal         func_190870
label_2c0670:
    if (ctx->pc == 0x2C0670u) {
        ctx->pc = 0x2C0670u;
            // 0x2c0670: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x2C0674u;
        goto label_2c0674;
    }
    ctx->pc = 0x2C066Cu;
    SET_GPR_U32(ctx, 31, 0x2C0674u);
    ctx->pc = 0x2C0670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C066Cu;
            // 0x2c0670: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0674u; }
        if (ctx->pc != 0x2C0674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0674u; }
        if (ctx->pc != 0x2C0674u) { return; }
    }
    ctx->pc = 0x2C0674u;
label_2c0674:
    // 0x2c0674: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c0674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2c0678:
    // 0x2c0678: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2c0678u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c067c:
    // 0x2c067c: 0x8427d5fc  lh          $a3, -0x2A04($at)
    ctx->pc = 0x2c067cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294956540)));
label_2c0680:
    // 0x2c0680: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2c0680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_2c0684:
    // 0x2c0684: 0x34424d96  ori         $v0, $v0, 0x4D96
    ctx->pc = 0x2c0684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19862);
label_2c0688:
    // 0x2c0688: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c0688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c068c:
    // 0x2c068c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2c068cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2c0690:
    // 0x2c0690: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2c0690u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c0694:
    // 0x2c0694: 0x844a0000  lh          $t2, 0x0($v0)
    ctx->pc = 0x2c0694u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2c0698:
    // 0x2c0698: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c0698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2c069c:
    // 0x2c069c: 0x8c25d5f4  lw          $a1, -0x2A0C($at)
    ctx->pc = 0x2c069cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956532)));
label_2c06a0:
    // 0x2c06a0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c06a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2c06a4:
    // 0x2c06a4: 0x8c26d5f8  lw          $a2, -0x2A08($at)
    ctx->pc = 0x2c06a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956536)));
label_2c06a8:
    // 0x2c06a8: 0xc07a3cc  jal         func_1E8F30
label_2c06ac:
    if (ctx->pc == 0x2C06ACu) {
        ctx->pc = 0x2C06ACu;
            // 0x2c06ac: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C06B0u;
        goto label_2c06b0;
    }
    ctx->pc = 0x2C06A8u;
    SET_GPR_U32(ctx, 31, 0x2C06B0u);
    ctx->pc = 0x2C06ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C06A8u;
            // 0x2c06ac: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8F30u;
    if (runtime->hasFunction(0x1E8F30u)) {
        auto targetFn = runtime->lookupFunction(0x1E8F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06B0u; }
        if (ctx->pc != 0x2C06B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetupMainUnit__FP1P9mgCMemoryP9mgCMemoryiP6CSceneP16CUserDataManagerii_0x1e8f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06B0u; }
        if (ctx->pc != 0x2C06B0u) { return; }
    }
    ctx->pc = 0x2C06B0u;
label_2c06b0:
    // 0x2c06b0: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2c06b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_2c06b4:
    // 0x2c06b4: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c06b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2c06b8:
    // 0x2c06b8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2c06b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_2c06bc:
    // 0x2c06bc: 0x2484d230  addiu       $a0, $a0, -0x2DD0
    ctx->pc = 0x2c06bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955568));
label_2c06c0:
    // 0x2c06c0: 0x84254d96  lh          $a1, 0x4D96($at)
    ctx->pc = 0x2c06c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
label_2c06c4:
    // 0x2c06c4: 0xc0ae7c8  jal         func_2B9F20
label_2c06c8:
    if (ctx->pc == 0x2C06C8u) {
        ctx->pc = 0x2C06C8u;
            // 0x2c06c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C06CCu;
        goto label_2c06cc;
    }
    ctx->pc = 0x2C06C4u;
    SET_GPR_U32(ctx, 31, 0x2C06CCu);
    ctx->pc = 0x2C06C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C06C4u;
            // 0x2c06c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9F20u;
    if (runtime->hasFunction(0x2B9F20u)) {
        auto targetFn = runtime->lookupFunction(0x2B9F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06CCu; }
        if (ctx->pc != 0x2C06CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCharaSoundLoad__FP9mgCMemoryii_0x2b9f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06CCu; }
        if (ctx->pc != 0x2C06CCu) { return; }
    }
    ctx->pc = 0x2C06CCu;
label_2c06cc:
    // 0x2c06cc: 0xc06421c  jal         func_190870
label_2c06d0:
    if (ctx->pc == 0x2C06D0u) {
        ctx->pc = 0x2C06D4u;
        goto label_2c06d4;
    }
    ctx->pc = 0x2C06CCu;
    SET_GPR_U32(ctx, 31, 0x2C06D4u);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06D4u; }
        if (ctx->pc != 0x2C06D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06D4u; }
        if (ctx->pc != 0x2C06D4u) { return; }
    }
    ctx->pc = 0x2C06D4u;
label_2c06d4:
    // 0x2c06d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c06d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c06d8:
    // 0x2c06d8: 0xc0a0ed8  jal         func_283B60
label_2c06dc:
    if (ctx->pc == 0x2C06DCu) {
        ctx->pc = 0x2C06DCu;
            // 0x2c06dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C06E0u;
        goto label_2c06e0;
    }
    ctx->pc = 0x2C06D8u;
    SET_GPR_U32(ctx, 31, 0x2C06E0u);
    ctx->pc = 0x2C06DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C06D8u;
            // 0x2c06dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06E0u; }
        if (ctx->pc != 0x2C06E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06E0u; }
        if (ctx->pc != 0x2C06E0u) { return; }
    }
    ctx->pc = 0x2C06E0u;
label_2c06e0:
    // 0x2c06e0: 0xc06421c  jal         func_190870
label_2c06e4:
    if (ctx->pc == 0x2C06E4u) {
        ctx->pc = 0x2C06E4u;
            // 0x2c06e4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C06E8u;
        goto label_2c06e8;
    }
    ctx->pc = 0x2C06E0u;
    SET_GPR_U32(ctx, 31, 0x2C06E8u);
    ctx->pc = 0x2C06E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C06E0u;
            // 0x2c06e4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06E8u; }
        if (ctx->pc != 0x2C06E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06E8u; }
        if (ctx->pc != 0x2C06E8u) { return; }
    }
    ctx->pc = 0x2C06E8u;
label_2c06e8:
    // 0x2c06e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c06e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c06ec:
    // 0x2c06ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c06ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c06f0:
    // 0x2c06f0: 0xc0ae808  jal         func_2BA020
label_2c06f4:
    if (ctx->pc == 0x2C06F4u) {
        ctx->pc = 0x2C06F4u;
            // 0x2c06f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C06F8u;
        goto label_2c06f8;
    }
    ctx->pc = 0x2C06F0u;
    SET_GPR_U32(ctx, 31, 0x2C06F8u);
    ctx->pc = 0x2C06F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C06F0u;
            // 0x2c06f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA020u;
    if (runtime->hasFunction(0x2BA020u)) {
        auto targetFn = runtime->lookupFunction(0x2BA020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06F8u; }
        if (ctx->pc != 0x2C06F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCharaSoundEnter__FP6CSceneP12CActionCharai_0x2ba020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06F8u; }
        if (ctx->pc != 0x2C06F8u) { return; }
    }
    ctx->pc = 0x2C06F8u;
label_2c06f8:
    // 0x2c06f8: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2c06f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_2c06fc:
    // 0x2c06fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c06fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c0700:
    // 0x2c0700: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2c0700u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_2c0704:
    // 0x2c0704: 0x84234d96  lh          $v1, 0x4D96($at)
    ctx->pc = 0x2c0704u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
label_2c0708:
    // 0x2c0708: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
label_2c070c:
    if (ctx->pc == 0x2C070Cu) {
        ctx->pc = 0x2C070Cu;
            // 0x2c070c: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x2C0710u;
        goto label_2c0710;
    }
    ctx->pc = 0x2C0708u;
    {
        const bool branch_taken_0x2c0708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C070Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0708u;
            // 0x2c070c: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0708) {
            ctx->pc = 0x2C0780u;
            goto label_2c0780;
        }
    }
    ctx->pc = 0x2C0710u;
label_2c0710:
    // 0x2c0710: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c0710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2c0714:
    // 0x2c0714: 0xac20d254  sw          $zero, -0x2DAC($at)
    ctx->pc = 0x2c0714u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955604), GPR_U32(ctx, 0));
label_2c0718:
    // 0x2c0718: 0x2484d230  addiu       $a0, $a0, -0x2DD0
    ctx->pc = 0x2c0718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955568));
label_2c071c:
    // 0x2c071c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c071cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2c0720:
    // 0x2c0720: 0xac20d24c  sw          $zero, -0x2DB4($at)
    ctx->pc = 0x2c0720u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955596), GPR_U32(ctx, 0));
label_2c0724:
    // 0x2c0724: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2c0724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_2c0728:
    // 0x2c0728: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2c0728u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_2c072c:
    // 0x2c072c: 0x84254d98  lh          $a1, 0x4D98($at)
    ctx->pc = 0x2c072cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19864)));
label_2c0730:
    // 0x2c0730: 0xc0ad8d0  jal         func_2B6340
label_2c0734:
    if (ctx->pc == 0x2C0734u) {
        ctx->pc = 0x2C0734u;
            // 0x2c0734: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0738u;
        goto label_2c0738;
    }
    ctx->pc = 0x2C0730u;
    SET_GPR_U32(ctx, 31, 0x2C0738u);
    ctx->pc = 0x2C0734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0730u;
            // 0x2c0734: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6340u;
    if (runtime->hasFunction(0x2B6340u)) {
        auto targetFn = runtime->lookupFunction(0x2B6340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0738u; }
        if (ctx->pc != 0x2C0738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MonsterEffectRead__FP9mgCMemoryii_0x2b6340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0738u; }
        if (ctx->pc != 0x2C0738u) { return; }
    }
    ctx->pc = 0x2C0738u;
label_2c0738:
    // 0x2c0738: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c0738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2c073c:
    // 0x2c073c: 0xc04e780  jal         func_139E00
label_2c0740:
    if (ctx->pc == 0x2C0740u) {
        ctx->pc = 0x2C0740u;
            // 0x2c0740: 0x2484d230  addiu       $a0, $a0, -0x2DD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955568));
        ctx->pc = 0x2C0744u;
        goto label_2c0744;
    }
    ctx->pc = 0x2C073Cu;
    SET_GPR_U32(ctx, 31, 0x2C0744u);
    ctx->pc = 0x2C0740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C073Cu;
            // 0x2c0740: 0x2484d230  addiu       $a0, $a0, -0x2DD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0744u; }
        if (ctx->pc != 0x2C0744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0744u; }
        if (ctx->pc != 0x2C0744u) { return; }
    }
    ctx->pc = 0x2C0744u;
label_2c0744:
    // 0x2c0744: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c0744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2c0748:
    // 0x2c0748: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x2c0748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2c074c:
    // 0x2c074c: 0xc04e748  jal         func_139D20
label_2c0750:
    if (ctx->pc == 0x2C0750u) {
        ctx->pc = 0x2C0750u;
            // 0x2c0750: 0x2484d230  addiu       $a0, $a0, -0x2DD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955568));
        ctx->pc = 0x2C0754u;
        goto label_2c0754;
    }
    ctx->pc = 0x2C074Cu;
    SET_GPR_U32(ctx, 31, 0x2C0754u);
    ctx->pc = 0x2C0750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C074Cu;
            // 0x2c0750: 0x2484d230  addiu       $a0, $a0, -0x2DD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0754u; }
        if (ctx->pc != 0x2C0754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0754u; }
        if (ctx->pc != 0x2C0754u) { return; }
    }
    ctx->pc = 0x2C0754u;
label_2c0754:
    // 0x2c0754: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c0754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2c0758:
    // 0x2c0758: 0x8c23d254  lw          $v1, -0x2DAC($at)
    ctx->pc = 0x2c0758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955604)));
label_2c075c:
    // 0x2c075c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c075cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2c0760:
    // 0x2c0760: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2c0760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2c0764:
    // 0x2c0764: 0x8c22d250  lw          $v0, -0x2DB0($at)
    ctx->pc = 0x2c0764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955600)));
label_2c0768:
    // 0x2c0768: 0xc06421c  jal         func_190870
label_2c076c:
    if (ctx->pc == 0x2C076Cu) {
        ctx->pc = 0x2C076Cu;
            // 0x2c076c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2C0770u;
        goto label_2c0770;
    }
    ctx->pc = 0x2C0768u;
    SET_GPR_U32(ctx, 31, 0x2C0770u);
    ctx->pc = 0x2C076Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0768u;
            // 0x2c076c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0770u; }
        if (ctx->pc != 0x2C0770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0770u; }
        if (ctx->pc != 0x2C0770u) { return; }
    }
    ctx->pc = 0x2C0770u;
label_2c0770:
    // 0x2c0770: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c0770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c0774:
    // 0x2c0774: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c0774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c0778:
    // 0x2c0778: 0xc0ad954  jal         func_2B6550
label_2c077c:
    if (ctx->pc == 0x2C077Cu) {
        ctx->pc = 0x2C077Cu;
            // 0x2c077c: 0x240600aa  addiu       $a2, $zero, 0xAA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
        ctx->pc = 0x2C0780u;
        goto label_2c0780;
    }
    ctx->pc = 0x2C0778u;
    SET_GPR_U32(ctx, 31, 0x2C0780u);
    ctx->pc = 0x2C077Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0778u;
            // 0x2c077c: 0x240600aa  addiu       $a2, $zero, 0xAA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6550u;
    if (runtime->hasFunction(0x2B6550u)) {
        auto targetFn = runtime->lookupFunction(0x2B6550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0780u; }
        if (ctx->pc != 0x2C0780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MonsterEffectEnter__FP6CSceneP1i_0x2b6550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0780u; }
        if (ctx->pc != 0x2C0780u) { return; }
    }
    ctx->pc = 0x2C0780u;
label_2c0780:
    // 0x2c0780: 0x16200015  bnez        $s1, . + 4 + (0x15 << 2)
label_2c0784:
    if (ctx->pc == 0x2C0784u) {
        ctx->pc = 0x2C0788u;
        goto label_2c0788;
    }
    ctx->pc = 0x2C0780u;
    {
        const bool branch_taken_0x2c0780 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0780) {
            ctx->pc = 0x2C07D8u;
            goto label_2c07d8;
        }
    }
    ctx->pc = 0x2C0788u;
label_2c0788:
    // 0x2c0788: 0x8f828ddc  lw          $v0, -0x7224($gp)
    ctx->pc = 0x2c0788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_2c078c:
    // 0x2c078c: 0xc065af8  jal         func_196BE0
label_2c0790:
    if (ctx->pc == 0x2C0790u) {
        ctx->pc = 0x2C0790u;
            // 0x2c0790: 0xae4207dc  sw          $v0, 0x7DC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2012), GPR_U32(ctx, 2));
        ctx->pc = 0x2C0794u;
        goto label_2c0794;
    }
    ctx->pc = 0x2C078Cu;
    SET_GPR_U32(ctx, 31, 0x2C0794u);
    ctx->pc = 0x2C0790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C078Cu;
            // 0x2c0790: 0xae4207dc  sw          $v0, 0x7DC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2012), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0794u; }
        if (ctx->pc != 0x2C0794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0794u; }
        if (ctx->pc != 0x2C0794u) { return; }
    }
    ctx->pc = 0x2C0794u;
label_2c0794:
    // 0x2c0794: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2c0794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_2c0798:
    // 0x2c0798: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2c0798u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2c079c:
    // 0x2c079c: 0xc065af8  jal         func_196BE0
label_2c07a0:
    if (ctx->pc == 0x2C07A0u) {
        ctx->pc = 0x2C07A0u;
            // 0x2c07a0: 0x84304d96  lh          $s0, 0x4D96($at) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
        ctx->pc = 0x2C07A4u;
        goto label_2c07a4;
    }
    ctx->pc = 0x2C079Cu;
    SET_GPR_U32(ctx, 31, 0x2C07A4u);
    ctx->pc = 0x2C07A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C079Cu;
            // 0x2c07a0: 0x84304d96  lh          $s0, 0x4D96($at) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C07A4u; }
        if (ctx->pc != 0x2C07A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C07A4u; }
        if (ctx->pc != 0x2C07A4u) { return; }
    }
    ctx->pc = 0x2C07A4u;
label_2c07a4:
    // 0x2c07a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c07a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c07a8:
    // 0x2c07a8: 0xc0670b0  jal         func_19C2C0
label_2c07ac:
    if (ctx->pc == 0x2C07ACu) {
        ctx->pc = 0x2C07ACu;
            // 0x2c07ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C07B0u;
        goto label_2c07b0;
    }
    ctx->pc = 0x2C07A8u;
    SET_GPR_U32(ctx, 31, 0x2C07B0u);
    ctx->pc = 0x2C07ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C07A8u;
            // 0x2c07ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C2C0u;
    if (runtime->hasFunction(0x19C2C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C07B0u; }
        if (ctx->pc != 0x2C07B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaStatusAttirbute__16CUserDataManagerFi_0x19c2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C07B0u; }
        if (ctx->pc != 0x2C07B0u) { return; }
    }
    ctx->pc = 0x2C07B0u;
label_2c07b0:
    // 0x2c07b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c07b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c07b4:
    // 0x2c07b4: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
label_2c07b8:
    if (ctx->pc == 0x2C07B8u) {
        ctx->pc = 0x2C07BCu;
        goto label_2c07bc;
    }
    ctx->pc = 0x2C07B4u;
    {
        const bool branch_taken_0x2c07b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c07b4) {
            ctx->pc = 0x2C07C4u;
            goto label_2c07c4;
        }
    }
    ctx->pc = 0x2C07BCu;
label_2c07bc:
    // 0x2c07bc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_2c07c0:
    if (ctx->pc == 0x2C07C0u) {
        ctx->pc = 0x2C07C4u;
        goto label_2c07c4;
    }
    ctx->pc = 0x2C07BCu;
    {
        const bool branch_taken_0x2c07bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c07bc) {
            ctx->pc = 0x2C07D8u;
            goto label_2c07d8;
        }
    }
    ctx->pc = 0x2C07C4u;
label_2c07c4:
    // 0x2c07c4: 0x30420028  andi        $v0, $v0, 0x28
    ctx->pc = 0x2c07c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)40);
label_2c07c8:
    // 0x2c07c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2c07cc:
    if (ctx->pc == 0x2C07CCu) {
        ctx->pc = 0x2C07CCu;
            // 0x2c07cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C07D0u;
        goto label_2c07d0;
    }
    ctx->pc = 0x2C07C8u;
    {
        const bool branch_taken_0x2c07c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C07CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C07C8u;
            // 0x2c07cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c07c8) {
            ctx->pc = 0x2C07D8u;
            goto label_2c07d8;
        }
    }
    ctx->pc = 0x2C07D0u;
label_2c07d0:
    // 0x2c07d0: 0xc05c470  jal         func_1711C0
label_2c07d4:
    if (ctx->pc == 0x2C07D4u) {
        ctx->pc = 0x2C07D8u;
        goto label_2c07d8;
    }
    ctx->pc = 0x2C07D0u;
    SET_GPR_U32(ctx, 31, 0x2C07D8u);
    ctx->pc = 0x1711C0u;
    if (runtime->hasFunction(0x1711C0u)) {
        auto targetFn = runtime->lookupFunction(0x1711C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C07D8u; }
        if (ctx->pc != 0x2C07D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHold__12CActionCharaFv_0x1711c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C07D8u; }
        if (ctx->pc != 0x2C07D8u) { return; }
    }
    ctx->pc = 0x2C07D8u;
label_2c07d8:
    // 0x2c07d8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2c07d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c07dc:
    // 0x2c07dc: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x2c07dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_2c07e0:
    // 0x2c07e0: 0x320f809  jalr        $t9
label_2c07e4:
    if (ctx->pc == 0x2C07E4u) {
        ctx->pc = 0x2C07E4u;
            // 0x2c07e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C07E8u;
        goto label_2c07e8;
    }
    ctx->pc = 0x2C07E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C07E8u);
        ctx->pc = 0x2C07E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C07E0u;
            // 0x2c07e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C07E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C07E8u; }
            if (ctx->pc != 0x2C07E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2C07E8u;
label_2c07e8:
    // 0x2c07e8: 0xc08cb08  jal         func_232C20
label_2c07ec:
    if (ctx->pc == 0x2C07ECu) {
        ctx->pc = 0x2C07ECu;
            // 0x2c07ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C07F0u;
        goto label_2c07f0;
    }
    ctx->pc = 0x2C07E8u;
    SET_GPR_U32(ctx, 31, 0x2C07F0u);
    ctx->pc = 0x2C07ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C07E8u;
            // 0x2c07ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232C20u;
    if (runtime->hasFunction(0x232C20u)) {
        auto targetFn = runtime->lookupFunction(0x232C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C07F0u; }
        if (ctx->pc != 0x2C07F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuEtcFlag__Fi_0x232c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C07F0u; }
        if (ctx->pc != 0x2C07F0u) { return; }
    }
    ctx->pc = 0x2C07F0u;
label_2c07f0:
    // 0x2c07f0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c07f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2c07f4:
    // 0x2c07f4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2c07f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2c07f8:
    // 0x2c07f8: 0xac20d5b4  sw          $zero, -0x2A4C($at)
    ctx->pc = 0x2c07f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956468), GPR_U32(ctx, 0));
label_2c07fc:
    // 0x2c07fc: 0x2484f920  addiu       $a0, $a0, -0x6E0
    ctx->pc = 0x2c07fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
label_2c0800:
    // 0x2c0800: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c0800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2c0804:
    // 0x2c0804: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c0804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c0808:
    // 0x2c0808: 0xac20d5ac  sw          $zero, -0x2A54($at)
    ctx->pc = 0x2c0808u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956460), GPR_U32(ctx, 0));
label_2c080c:
    // 0x2c080c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c080cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2c0810:
    // 0x2c0810: 0x8c23d5b4  lw          $v1, -0x2A4C($at)
    ctx->pc = 0x2c0810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956468)));
label_2c0814:
    // 0x2c0814: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c0814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2c0818:
    // 0x2c0818: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2c0818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2c081c:
    // 0x2c081c: 0x8c22d5b0  lw          $v0, -0x2A50($at)
    ctx->pc = 0x2c081cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956464)));
label_2c0820:
    // 0x2c0820: 0xc094440  jal         func_251100
label_2c0824:
    if (ctx->pc == 0x2C0824u) {
        ctx->pc = 0x2C0824u;
            // 0x2c0824: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2C0828u;
        goto label_2c0828;
    }
    ctx->pc = 0x2C0820u;
    SET_GPR_U32(ctx, 31, 0x2C0828u);
    ctx->pc = 0x2C0824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0820u;
            // 0x2c0824: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0828u; }
        if (ctx->pc != 0x2C0828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0828u; }
        if (ctx->pc != 0x2C0828u) { return; }
    }
    ctx->pc = 0x2C0828u;
label_2c0828:
    // 0x2c0828: 0x10000004  b           . + 4 + (0x4 << 2)
label_2c082c:
    if (ctx->pc == 0x2C082Cu) {
        ctx->pc = 0x2C082Cu;
            // 0x2c082c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C0830u;
        goto label_2c0830;
    }
    ctx->pc = 0x2C0828u;
    {
        const bool branch_taken_0x2c0828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C082Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0828u;
            // 0x2c082c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0828) {
            ctx->pc = 0x2C083Cu;
            goto label_2c083c;
        }
    }
    ctx->pc = 0x2C0830u;
label_2c0830:
    // 0x2c0830: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2c0830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_2c0834:
    // 0x2c0834: 0xc08ad0c  jal         func_22B430
label_2c0838:
    if (ctx->pc == 0x2C0838u) {
        ctx->pc = 0x2C083Cu;
        goto label_2c083c;
    }
    ctx->pc = 0x2C0834u;
    SET_GPR_U32(ctx, 31, 0x2C083Cu);
    ctx->pc = 0x22B430u;
    if (runtime->hasFunction(0x22B430u)) {
        auto targetFn = runtime->lookupFunction(0x22B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C083Cu; }
        if (ctx->pc != 0x2C083Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormDraw__14CPosDataManageFv_0x22b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C083Cu; }
        if (ctx->pc != 0x2C083Cu) { return; }
    }
    ctx->pc = 0x2C083Cu;
label_2c083c:
    // 0x2c083c: 0x8f839520  lw          $v1, -0x6AE0($gp)
    ctx->pc = 0x2c083cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
label_2c0840:
    // 0x2c0840: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_2c0844:
    if (ctx->pc == 0x2C0844u) {
        ctx->pc = 0x2C0844u;
            // 0x2c0844: 0x3c0341c0  lui         $v1, 0x41C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
        ctx->pc = 0x2C0848u;
        goto label_2c0848;
    }
    ctx->pc = 0x2C0840u;
    {
        const bool branch_taken_0x2c0840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0840u;
            // 0x2c0844: 0x3c0341c0  lui         $v1, 0x41C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0840) {
            ctx->pc = 0x2C0898u;
            goto label_2c0898;
        }
    }
    ctx->pc = 0x2C0848u;
label_2c0848:
    // 0x2c0848: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2c0848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_2c084c:
    // 0x2c084c: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x2c084cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2c0850:
    // 0x2c0850: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2c0850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2c0854:
    // 0x2c0854: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c0854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c0858:
    // 0x2c0858: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c0858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c085c:
    // 0x2c085c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2c085cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2c0860:
    // 0x2c0860: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c0860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0864:
    // 0x2c0864: 0x3c02439b  lui         $v0, 0x439B
    ctx->pc = 0x2c0864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17307 << 16));
label_2c0868:
    // 0x2c0868: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2c0868u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2c086c:
    // 0x2c086c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2c086cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2c0870:
    // 0x2c0870: 0xc0887b8  jal         func_221EE0
label_2c0874:
    if (ctx->pc == 0x2C0874u) {
        ctx->pc = 0x2C0874u;
            // 0x2c0874: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0878u;
        goto label_2c0878;
    }
    ctx->pc = 0x2C0870u;
    SET_GPR_U32(ctx, 31, 0x2C0878u);
    ctx->pc = 0x2C0874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0870u;
            // 0x2c0874: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0878u; }
        if (ctx->pc != 0x2C0878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0878u; }
        if (ctx->pc != 0x2C0878u) { return; }
    }
    ctx->pc = 0x2C0878u;
label_2c0878:
    // 0x2c0878: 0xc0873cc  jal         func_21CF30
label_2c087c:
    if (ctx->pc == 0x2C087Cu) {
        ctx->pc = 0x2C087Cu;
            // 0x2c087c: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x2C0880u;
        goto label_2c0880;
    }
    ctx->pc = 0x2C0878u;
    SET_GPR_U32(ctx, 31, 0x2C0880u);
    ctx->pc = 0x2C087Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0878u;
            // 0x2c087c: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0880u; }
        if (ctx->pc != 0x2C0880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0880u; }
        if (ctx->pc != 0x2C0880u) { return; }
    }
    ctx->pc = 0x2C0880u;
label_2c0880:
    // 0x2c0880: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c0880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2c0884:
    // 0x2c0884: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2c0884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2c0888:
    // 0x2c0888: 0x24a5f928  addiu       $a1, $a1, -0x6D8
    ctx->pc = 0x2c0888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965544));
label_2c088c:
    // 0x2c088c: 0x2406012c  addiu       $a2, $zero, 0x12C
    ctx->pc = 0x2c088cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_2c0890:
    // 0x2c0890: 0xc0b5688  jal         func_2D5A20
label_2c0894:
    if (ctx->pc == 0x2C0894u) {
        ctx->pc = 0x2C0894u;
            // 0x2c0894: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2C0898u;
        goto label_2c0898;
    }
    ctx->pc = 0x2C0890u;
    SET_GPR_U32(ctx, 31, 0x2C0898u);
    ctx->pc = 0x2C0894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0890u;
            // 0x2c0894: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0898u; }
        if (ctx->pc != 0x2C0898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0898u; }
        if (ctx->pc != 0x2C0898u) { return; }
    }
    ctx->pc = 0x2C0898u;
label_2c0898:
    // 0x2c0898: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
label_2c089c:
    if (ctx->pc == 0x2C089Cu) {
        ctx->pc = 0x2C089Cu;
            // 0x2c089c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C08A0u;
        goto label_2c08a0;
    }
    ctx->pc = 0x2C0898u;
    {
        const bool branch_taken_0x2c0898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C089Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0898u;
            // 0x2c089c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0898) {
            ctx->pc = 0x2C0980u;
            goto label_2c0980;
        }
    }
    ctx->pc = 0x2C08A0u;
label_2c08a0:
    // 0x2c08a0: 0xc08cb30  jal         func_232CC0
label_2c08a4:
    if (ctx->pc == 0x2C08A4u) {
        ctx->pc = 0x2C08A8u;
        goto label_2c08a8;
    }
    ctx->pc = 0x2C08A0u;
    SET_GPR_U32(ctx, 31, 0x2C08A8u);
    ctx->pc = 0x232CC0u;
    if (runtime->hasFunction(0x232CC0u)) {
        auto targetFn = runtime->lookupFunction(0x232CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C08A8u; }
        if (ctx->pc != 0x2C08A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuFrameRate__Fi_0x232cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C08A8u; }
        if (ctx->pc != 0x2C08A8u) { return; }
    }
    ctx->pc = 0x2C08A8u;
label_2c08a8:
    // 0x2c08a8: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2c08a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2c08ac:
    // 0x2c08ac: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c08acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2c08b0:
    // 0x2c08b0: 0xac20d254  sw          $zero, -0x2DAC($at)
    ctx->pc = 0x2c08b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955604), GPR_U32(ctx, 0));
label_2c08b4:
    // 0x2c08b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c08b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c08b8:
    // 0x2c08b8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c08b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2c08bc:
    // 0x2c08bc: 0xc0a98a0  jal         func_2A6280
label_2c08c0:
    if (ctx->pc == 0x2C08C0u) {
        ctx->pc = 0x2C08C0u;
            // 0x2c08c0: 0xac20d24c  sw          $zero, -0x2DB4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294955596), GPR_U32(ctx, 0));
        ctx->pc = 0x2C08C4u;
        goto label_2c08c4;
    }
    ctx->pc = 0x2C08BCu;
    SET_GPR_U32(ctx, 31, 0x2C08C4u);
    ctx->pc = 0x2C08C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C08BCu;
            // 0x2c08c0: 0xac20d24c  sw          $zero, -0x2DB4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294955596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C08C4u; }
        if (ctx->pc != 0x2C08C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C08C4u; }
        if (ctx->pc != 0x2C08C4u) { return; }
    }
    ctx->pc = 0x2C08C4u;
label_2c08c4:
    // 0x2c08c4: 0xc040cc0  jal         func_103300
label_2c08c8:
    if (ctx->pc == 0x2C08C8u) {
        ctx->pc = 0x2C08C8u;
            // 0x2c08c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C08CCu;
        goto label_2c08cc;
    }
    ctx->pc = 0x2C08C4u;
    SET_GPR_U32(ctx, 31, 0x2C08CCu);
    ctx->pc = 0x2C08C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C08C4u;
            // 0x2c08c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C08CCu; }
        if (ctx->pc != 0x2C08CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C08CCu; }
        if (ctx->pc != 0x2C08CCu) { return; }
    }
    ctx->pc = 0x2C08CCu;
label_2c08cc:
    // 0x2c08cc: 0xc040cc0  jal         func_103300
label_2c08d0:
    if (ctx->pc == 0x2C08D0u) {
        ctx->pc = 0x2C08D0u;
            // 0x2c08d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C08D4u;
        goto label_2c08d4;
    }
    ctx->pc = 0x2C08CCu;
    SET_GPR_U32(ctx, 31, 0x2C08D4u);
    ctx->pc = 0x2C08D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C08CCu;
            // 0x2c08d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C08D4u; }
        if (ctx->pc != 0x2C08D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C08D4u; }
        if (ctx->pc != 0x2C08D4u) { return; }
    }
    ctx->pc = 0x2C08D4u;
label_2c08d4:
    // 0x2c08d4: 0xc040cc0  jal         func_103300
label_2c08d8:
    if (ctx->pc == 0x2C08D8u) {
        ctx->pc = 0x2C08D8u;
            // 0x2c08d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C08DCu;
        goto label_2c08dc;
    }
    ctx->pc = 0x2C08D4u;
    SET_GPR_U32(ctx, 31, 0x2C08DCu);
    ctx->pc = 0x2C08D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C08D4u;
            // 0x2c08d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C08DCu; }
        if (ctx->pc != 0x2C08DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C08DCu; }
        if (ctx->pc != 0x2C08DCu) { return; }
    }
    ctx->pc = 0x2C08DCu;
label_2c08dc:
    // 0x2c08dc: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x2c08dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
label_2c08e0:
    // 0x2c08e0: 0xc062234  jal         func_1888D0
label_2c08e4:
    if (ctx->pc == 0x2C08E4u) {
        ctx->pc = 0x2C08E4u;
            // 0x2c08e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C08E8u;
        goto label_2c08e8;
    }
    ctx->pc = 0x2C08E0u;
    SET_GPR_U32(ctx, 31, 0x2C08E8u);
    ctx->pc = 0x2C08E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C08E0u;
            // 0x2c08e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1888D0u;
    if (runtime->hasFunction(0x1888D0u)) {
        auto targetFn = runtime->lookupFunction(0x1888D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C08E8u; }
        if (ctx->pc != 0x2C08E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SndInReverb__6CSoundFb_0x1888d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C08E8u; }
        if (ctx->pc != 0x2C08E8u) { return; }
    }
    ctx->pc = 0x2C08E8u;
label_2c08e8:
    // 0x2c08e8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c08e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2c08ec:
    // 0x2c08ec: 0x8f859c7c  lw          $a1, -0x6384($gp)
    ctx->pc = 0x2c08ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941820)));
label_2c08f0:
    // 0x2c08f0: 0x8c23d254  lw          $v1, -0x2DAC($at)
    ctx->pc = 0x2c08f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955604)));
label_2c08f4:
    // 0x2c08f4: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2c08f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2c08f8:
    // 0x2c08f8: 0x8ca5011c  lw          $a1, 0x11C($a1)
    ctx->pc = 0x2c08f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 284)));
label_2c08fc:
    // 0x2c08fc: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c08fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2c0900:
    // 0x2c0900: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2c0900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2c0904:
    // 0x2c0904: 0x8c22d250  lw          $v0, -0x2DB0($at)
    ctx->pc = 0x2c0904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955600)));
label_2c0908:
    // 0x2c0908: 0xc0a9be4  jal         func_2A6F90
label_2c090c:
    if (ctx->pc == 0x2C090Cu) {
        ctx->pc = 0x2C090Cu;
            // 0x2c090c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2C0910u;
        goto label_2c0910;
    }
    ctx->pc = 0x2C0908u;
    SET_GPR_U32(ctx, 31, 0x2C0910u);
    ctx->pc = 0x2C090Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0908u;
            // 0x2c090c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (runtime->hasFunction(0x2A6F90u)) {
        auto targetFn = runtime->lookupFunction(0x2A6F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0910u; }
        if (ctx->pc != 0x2C0910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGM__6CSceneFiP1_0x2a6f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0910u; }
        if (ctx->pc != 0x2C0910u) { return; }
    }
    ctx->pc = 0x2C0910u;
label_2c0910:
    // 0x2c0910: 0x8f829c7c  lw          $v0, -0x6384($gp)
    ctx->pc = 0x2c0910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941820)));
label_2c0914:
    // 0x2c0914: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2c0914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2c0918:
    // 0x2c0918: 0xc0a9960  jal         func_2A6580
label_2c091c:
    if (ctx->pc == 0x2C091Cu) {
        ctx->pc = 0x2C091Cu;
            // 0x2c091c: 0x24450118  addiu       $a1, $v0, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
        ctx->pc = 0x2C0920u;
        goto label_2c0920;
    }
    ctx->pc = 0x2C0918u;
    SET_GPR_U32(ctx, 31, 0x2C0920u);
    ctx->pc = 0x2C091Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0918u;
            // 0x2c091c: 0x24450118  addiu       $a1, $v0, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6580u;
    if (runtime->hasFunction(0x2A6580u)) {
        auto targetFn = runtime->lookupFunction(0x2A6580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0920u; }
        if (ctx->pc != 0x2C0920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveBgmStatus__6CSceneFPQ26CScene10BGM_STATUS_0x2a6580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0920u; }
        if (ctx->pc != 0x2C0920u) { return; }
    }
    ctx->pc = 0x2C0920u;
label_2c0920:
    // 0x2c0920: 0x87829c70  lh          $v0, -0x6390($gp)
    ctx->pc = 0x2c0920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941808)));
label_2c0924:
    // 0x2c0924: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2c0928:
    if (ctx->pc == 0x2C0928u) {
        ctx->pc = 0x2C092Cu;
        goto label_2c092c;
    }
    ctx->pc = 0x2C0924u;
    {
        const bool branch_taken_0x2c0924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0924) {
            ctx->pc = 0x2C0960u;
            goto label_2c0960;
        }
    }
    ctx->pc = 0x2C092Cu;
label_2c092c:
    // 0x2c092c: 0x87829c78  lh          $v0, -0x6388($gp)
    ctx->pc = 0x2c092cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941816)));
label_2c0930:
    // 0x2c0930: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c0934:
    if (ctx->pc == 0x2C0934u) {
        ctx->pc = 0x2C0938u;
        goto label_2c0938;
    }
    ctx->pc = 0x2C0930u;
    {
        const bool branch_taken_0x2c0930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0930) {
            ctx->pc = 0x2C094Cu;
            goto label_2c094c;
        }
    }
    ctx->pc = 0x2C0938u;
label_2c0938:
    // 0x2c0938: 0x8f8394a4  lw          $v1, -0x6B5C($gp)
    ctx->pc = 0x2c0938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2c093c:
    // 0x2c093c: 0x8c622f98  lw          $v0, 0x2F98($v1)
    ctx->pc = 0x2c093cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12184)));
label_2c0940:
    // 0x2c0940: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2c0940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_2c0944:
    // 0x2c0944: 0x10000006  b           . + 4 + (0x6 << 2)
label_2c0948:
    if (ctx->pc == 0x2C0948u) {
        ctx->pc = 0x2C0948u;
            // 0x2c0948: 0xac622f98  sw          $v0, 0x2F98($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12184), GPR_U32(ctx, 2));
        ctx->pc = 0x2C094Cu;
        goto label_2c094c;
    }
    ctx->pc = 0x2C0944u;
    {
        const bool branch_taken_0x2c0944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0944u;
            // 0x2c0948: 0xac622f98  sw          $v0, 0x2F98($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0944) {
            ctx->pc = 0x2C0960u;
            goto label_2c0960;
        }
    }
    ctx->pc = 0x2C094Cu;
label_2c094c:
    // 0x2c094c: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2c094cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2c0950:
    // 0x2c0950: 0x2402bfff  addiu       $v0, $zero, -0x4001
    ctx->pc = 0x2c0950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_2c0954:
    // 0x2c0954: 0x8c832f98  lw          $v1, 0x2F98($a0)
    ctx->pc = 0x2c0954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12184)));
label_2c0958:
    // 0x2c0958: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c0958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2c095c:
    // 0x2c095c: 0xac822f98  sw          $v0, 0x2F98($a0)
    ctx->pc = 0x2c095cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12184), GPR_U32(ctx, 2));
label_2c0960:
    // 0x2c0960: 0xc0942d4  jal         func_250B50
label_2c0964:
    if (ctx->pc == 0x2C0964u) {
        ctx->pc = 0x2C0968u;
        goto label_2c0968;
    }
    ctx->pc = 0x2C0960u;
    SET_GPR_U32(ctx, 31, 0x2C0968u);
    ctx->pc = 0x250B50u;
    if (runtime->hasFunction(0x250B50u)) {
        auto targetFn = runtime->lookupFunction(0x250B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0968u; }
        if (ctx->pc != 0x2C0968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReStartEnvSoundMenu__Fv_0x250b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0968u; }
        if (ctx->pc != 0x2C0968u) { return; }
    }
    ctx->pc = 0x2C0968u;
label_2c0968:
    // 0x2c0968: 0x8f849c7c  lw          $a0, -0x6384($gp)
    ctx->pc = 0x2c0968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941820)));
label_2c096c:
    // 0x2c096c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c096cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c0970:
    // 0x2c0970: 0xc08e88c  jal         func_23A230
label_2c0974:
    if (ctx->pc == 0x2C0974u) {
        ctx->pc = 0x2C0974u;
            // 0x2c0974: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x2C0978u;
        goto label_2c0978;
    }
    ctx->pc = 0x2C0970u;
    SET_GPR_U32(ctx, 31, 0x2C0978u);
    ctx->pc = 0x2C0974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0970u;
            // 0x2c0974: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A230u;
    if (runtime->hasFunction(0x23A230u)) {
        auto targetFn = runtime->lookupFunction(0x23A230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0978u; }
        if (ctx->pc != 0x2C0978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeInMenu__14CBaseMenuClassFif_0x23a230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0978u; }
        if (ctx->pc != 0x2C0978u) { return; }
    }
    ctx->pc = 0x2C0978u;
label_2c0978:
    // 0x2c0978: 0x8f839c7c  lw          $v1, -0x6384($gp)
    ctx->pc = 0x2c0978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941820)));
label_2c097c:
    // 0x2c097c: 0xa4600014  sh          $zero, 0x14($v1)
    ctx->pc = 0x2c097cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 0));
label_2c0980:
    // 0x2c0980: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c0980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c0984:
    // 0x2c0984: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c0984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c0988:
    // 0x2c0988: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c0988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c098c:
    // 0x2c098c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c098cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c0990:
    // 0x2c0990: 0x3e00008  jr          $ra
label_2c0994:
    if (ctx->pc == 0x2C0994u) {
        ctx->pc = 0x2C0994u;
            // 0x2c0994: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x2C0998u;
        goto label_fallthrough_0x2c0990;
    }
    ctx->pc = 0x2C0990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0990u;
            // 0x2c0994: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c0990:
    ctx->pc = 0x2C0998u;
}
