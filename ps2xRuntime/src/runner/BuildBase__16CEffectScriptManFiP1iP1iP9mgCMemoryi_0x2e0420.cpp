#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BuildBase__16CEffectScriptManFiP1iP1iP9mgCMemoryi
// Address: 0x2e0420 - 0x2e0a50
void BuildBase__16CEffectScriptManFiP1iP1iP9mgCMemoryi_0x2e0420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BuildBase__16CEffectScriptManFiP1iP1iP9mgCMemoryi_0x2e0420");
#endif

    switch (ctx->pc) {
        case 0x2e0420u: goto label_2e0420;
        case 0x2e0424u: goto label_2e0424;
        case 0x2e0428u: goto label_2e0428;
        case 0x2e042cu: goto label_2e042c;
        case 0x2e0430u: goto label_2e0430;
        case 0x2e0434u: goto label_2e0434;
        case 0x2e0438u: goto label_2e0438;
        case 0x2e043cu: goto label_2e043c;
        case 0x2e0440u: goto label_2e0440;
        case 0x2e0444u: goto label_2e0444;
        case 0x2e0448u: goto label_2e0448;
        case 0x2e044cu: goto label_2e044c;
        case 0x2e0450u: goto label_2e0450;
        case 0x2e0454u: goto label_2e0454;
        case 0x2e0458u: goto label_2e0458;
        case 0x2e045cu: goto label_2e045c;
        case 0x2e0460u: goto label_2e0460;
        case 0x2e0464u: goto label_2e0464;
        case 0x2e0468u: goto label_2e0468;
        case 0x2e046cu: goto label_2e046c;
        case 0x2e0470u: goto label_2e0470;
        case 0x2e0474u: goto label_2e0474;
        case 0x2e0478u: goto label_2e0478;
        case 0x2e047cu: goto label_2e047c;
        case 0x2e0480u: goto label_2e0480;
        case 0x2e0484u: goto label_2e0484;
        case 0x2e0488u: goto label_2e0488;
        case 0x2e048cu: goto label_2e048c;
        case 0x2e0490u: goto label_2e0490;
        case 0x2e0494u: goto label_2e0494;
        case 0x2e0498u: goto label_2e0498;
        case 0x2e049cu: goto label_2e049c;
        case 0x2e04a0u: goto label_2e04a0;
        case 0x2e04a4u: goto label_2e04a4;
        case 0x2e04a8u: goto label_2e04a8;
        case 0x2e04acu: goto label_2e04ac;
        case 0x2e04b0u: goto label_2e04b0;
        case 0x2e04b4u: goto label_2e04b4;
        case 0x2e04b8u: goto label_2e04b8;
        case 0x2e04bcu: goto label_2e04bc;
        case 0x2e04c0u: goto label_2e04c0;
        case 0x2e04c4u: goto label_2e04c4;
        case 0x2e04c8u: goto label_2e04c8;
        case 0x2e04ccu: goto label_2e04cc;
        case 0x2e04d0u: goto label_2e04d0;
        case 0x2e04d4u: goto label_2e04d4;
        case 0x2e04d8u: goto label_2e04d8;
        case 0x2e04dcu: goto label_2e04dc;
        case 0x2e04e0u: goto label_2e04e0;
        case 0x2e04e4u: goto label_2e04e4;
        case 0x2e04e8u: goto label_2e04e8;
        case 0x2e04ecu: goto label_2e04ec;
        case 0x2e04f0u: goto label_2e04f0;
        case 0x2e04f4u: goto label_2e04f4;
        case 0x2e04f8u: goto label_2e04f8;
        case 0x2e04fcu: goto label_2e04fc;
        case 0x2e0500u: goto label_2e0500;
        case 0x2e0504u: goto label_2e0504;
        case 0x2e0508u: goto label_2e0508;
        case 0x2e050cu: goto label_2e050c;
        case 0x2e0510u: goto label_2e0510;
        case 0x2e0514u: goto label_2e0514;
        case 0x2e0518u: goto label_2e0518;
        case 0x2e051cu: goto label_2e051c;
        case 0x2e0520u: goto label_2e0520;
        case 0x2e0524u: goto label_2e0524;
        case 0x2e0528u: goto label_2e0528;
        case 0x2e052cu: goto label_2e052c;
        case 0x2e0530u: goto label_2e0530;
        case 0x2e0534u: goto label_2e0534;
        case 0x2e0538u: goto label_2e0538;
        case 0x2e053cu: goto label_2e053c;
        case 0x2e0540u: goto label_2e0540;
        case 0x2e0544u: goto label_2e0544;
        case 0x2e0548u: goto label_2e0548;
        case 0x2e054cu: goto label_2e054c;
        case 0x2e0550u: goto label_2e0550;
        case 0x2e0554u: goto label_2e0554;
        case 0x2e0558u: goto label_2e0558;
        case 0x2e055cu: goto label_2e055c;
        case 0x2e0560u: goto label_2e0560;
        case 0x2e0564u: goto label_2e0564;
        case 0x2e0568u: goto label_2e0568;
        case 0x2e056cu: goto label_2e056c;
        case 0x2e0570u: goto label_2e0570;
        case 0x2e0574u: goto label_2e0574;
        case 0x2e0578u: goto label_2e0578;
        case 0x2e057cu: goto label_2e057c;
        case 0x2e0580u: goto label_2e0580;
        case 0x2e0584u: goto label_2e0584;
        case 0x2e0588u: goto label_2e0588;
        case 0x2e058cu: goto label_2e058c;
        case 0x2e0590u: goto label_2e0590;
        case 0x2e0594u: goto label_2e0594;
        case 0x2e0598u: goto label_2e0598;
        case 0x2e059cu: goto label_2e059c;
        case 0x2e05a0u: goto label_2e05a0;
        case 0x2e05a4u: goto label_2e05a4;
        case 0x2e05a8u: goto label_2e05a8;
        case 0x2e05acu: goto label_2e05ac;
        case 0x2e05b0u: goto label_2e05b0;
        case 0x2e05b4u: goto label_2e05b4;
        case 0x2e05b8u: goto label_2e05b8;
        case 0x2e05bcu: goto label_2e05bc;
        case 0x2e05c0u: goto label_2e05c0;
        case 0x2e05c4u: goto label_2e05c4;
        case 0x2e05c8u: goto label_2e05c8;
        case 0x2e05ccu: goto label_2e05cc;
        case 0x2e05d0u: goto label_2e05d0;
        case 0x2e05d4u: goto label_2e05d4;
        case 0x2e05d8u: goto label_2e05d8;
        case 0x2e05dcu: goto label_2e05dc;
        case 0x2e05e0u: goto label_2e05e0;
        case 0x2e05e4u: goto label_2e05e4;
        case 0x2e05e8u: goto label_2e05e8;
        case 0x2e05ecu: goto label_2e05ec;
        case 0x2e05f0u: goto label_2e05f0;
        case 0x2e05f4u: goto label_2e05f4;
        case 0x2e05f8u: goto label_2e05f8;
        case 0x2e05fcu: goto label_2e05fc;
        case 0x2e0600u: goto label_2e0600;
        case 0x2e0604u: goto label_2e0604;
        case 0x2e0608u: goto label_2e0608;
        case 0x2e060cu: goto label_2e060c;
        case 0x2e0610u: goto label_2e0610;
        case 0x2e0614u: goto label_2e0614;
        case 0x2e0618u: goto label_2e0618;
        case 0x2e061cu: goto label_2e061c;
        case 0x2e0620u: goto label_2e0620;
        case 0x2e0624u: goto label_2e0624;
        case 0x2e0628u: goto label_2e0628;
        case 0x2e062cu: goto label_2e062c;
        case 0x2e0630u: goto label_2e0630;
        case 0x2e0634u: goto label_2e0634;
        case 0x2e0638u: goto label_2e0638;
        case 0x2e063cu: goto label_2e063c;
        case 0x2e0640u: goto label_2e0640;
        case 0x2e0644u: goto label_2e0644;
        case 0x2e0648u: goto label_2e0648;
        case 0x2e064cu: goto label_2e064c;
        case 0x2e0650u: goto label_2e0650;
        case 0x2e0654u: goto label_2e0654;
        case 0x2e0658u: goto label_2e0658;
        case 0x2e065cu: goto label_2e065c;
        case 0x2e0660u: goto label_2e0660;
        case 0x2e0664u: goto label_2e0664;
        case 0x2e0668u: goto label_2e0668;
        case 0x2e066cu: goto label_2e066c;
        case 0x2e0670u: goto label_2e0670;
        case 0x2e0674u: goto label_2e0674;
        case 0x2e0678u: goto label_2e0678;
        case 0x2e067cu: goto label_2e067c;
        case 0x2e0680u: goto label_2e0680;
        case 0x2e0684u: goto label_2e0684;
        case 0x2e0688u: goto label_2e0688;
        case 0x2e068cu: goto label_2e068c;
        case 0x2e0690u: goto label_2e0690;
        case 0x2e0694u: goto label_2e0694;
        case 0x2e0698u: goto label_2e0698;
        case 0x2e069cu: goto label_2e069c;
        case 0x2e06a0u: goto label_2e06a0;
        case 0x2e06a4u: goto label_2e06a4;
        case 0x2e06a8u: goto label_2e06a8;
        case 0x2e06acu: goto label_2e06ac;
        case 0x2e06b0u: goto label_2e06b0;
        case 0x2e06b4u: goto label_2e06b4;
        case 0x2e06b8u: goto label_2e06b8;
        case 0x2e06bcu: goto label_2e06bc;
        case 0x2e06c0u: goto label_2e06c0;
        case 0x2e06c4u: goto label_2e06c4;
        case 0x2e06c8u: goto label_2e06c8;
        case 0x2e06ccu: goto label_2e06cc;
        case 0x2e06d0u: goto label_2e06d0;
        case 0x2e06d4u: goto label_2e06d4;
        case 0x2e06d8u: goto label_2e06d8;
        case 0x2e06dcu: goto label_2e06dc;
        case 0x2e06e0u: goto label_2e06e0;
        case 0x2e06e4u: goto label_2e06e4;
        case 0x2e06e8u: goto label_2e06e8;
        case 0x2e06ecu: goto label_2e06ec;
        case 0x2e06f0u: goto label_2e06f0;
        case 0x2e06f4u: goto label_2e06f4;
        case 0x2e06f8u: goto label_2e06f8;
        case 0x2e06fcu: goto label_2e06fc;
        case 0x2e0700u: goto label_2e0700;
        case 0x2e0704u: goto label_2e0704;
        case 0x2e0708u: goto label_2e0708;
        case 0x2e070cu: goto label_2e070c;
        case 0x2e0710u: goto label_2e0710;
        case 0x2e0714u: goto label_2e0714;
        case 0x2e0718u: goto label_2e0718;
        case 0x2e071cu: goto label_2e071c;
        case 0x2e0720u: goto label_2e0720;
        case 0x2e0724u: goto label_2e0724;
        case 0x2e0728u: goto label_2e0728;
        case 0x2e072cu: goto label_2e072c;
        case 0x2e0730u: goto label_2e0730;
        case 0x2e0734u: goto label_2e0734;
        case 0x2e0738u: goto label_2e0738;
        case 0x2e073cu: goto label_2e073c;
        case 0x2e0740u: goto label_2e0740;
        case 0x2e0744u: goto label_2e0744;
        case 0x2e0748u: goto label_2e0748;
        case 0x2e074cu: goto label_2e074c;
        case 0x2e0750u: goto label_2e0750;
        case 0x2e0754u: goto label_2e0754;
        case 0x2e0758u: goto label_2e0758;
        case 0x2e075cu: goto label_2e075c;
        case 0x2e0760u: goto label_2e0760;
        case 0x2e0764u: goto label_2e0764;
        case 0x2e0768u: goto label_2e0768;
        case 0x2e076cu: goto label_2e076c;
        case 0x2e0770u: goto label_2e0770;
        case 0x2e0774u: goto label_2e0774;
        case 0x2e0778u: goto label_2e0778;
        case 0x2e077cu: goto label_2e077c;
        case 0x2e0780u: goto label_2e0780;
        case 0x2e0784u: goto label_2e0784;
        case 0x2e0788u: goto label_2e0788;
        case 0x2e078cu: goto label_2e078c;
        case 0x2e0790u: goto label_2e0790;
        case 0x2e0794u: goto label_2e0794;
        case 0x2e0798u: goto label_2e0798;
        case 0x2e079cu: goto label_2e079c;
        case 0x2e07a0u: goto label_2e07a0;
        case 0x2e07a4u: goto label_2e07a4;
        case 0x2e07a8u: goto label_2e07a8;
        case 0x2e07acu: goto label_2e07ac;
        case 0x2e07b0u: goto label_2e07b0;
        case 0x2e07b4u: goto label_2e07b4;
        case 0x2e07b8u: goto label_2e07b8;
        case 0x2e07bcu: goto label_2e07bc;
        case 0x2e07c0u: goto label_2e07c0;
        case 0x2e07c4u: goto label_2e07c4;
        case 0x2e07c8u: goto label_2e07c8;
        case 0x2e07ccu: goto label_2e07cc;
        case 0x2e07d0u: goto label_2e07d0;
        case 0x2e07d4u: goto label_2e07d4;
        case 0x2e07d8u: goto label_2e07d8;
        case 0x2e07dcu: goto label_2e07dc;
        case 0x2e07e0u: goto label_2e07e0;
        case 0x2e07e4u: goto label_2e07e4;
        case 0x2e07e8u: goto label_2e07e8;
        case 0x2e07ecu: goto label_2e07ec;
        case 0x2e07f0u: goto label_2e07f0;
        case 0x2e07f4u: goto label_2e07f4;
        case 0x2e07f8u: goto label_2e07f8;
        case 0x2e07fcu: goto label_2e07fc;
        case 0x2e0800u: goto label_2e0800;
        case 0x2e0804u: goto label_2e0804;
        case 0x2e0808u: goto label_2e0808;
        case 0x2e080cu: goto label_2e080c;
        case 0x2e0810u: goto label_2e0810;
        case 0x2e0814u: goto label_2e0814;
        case 0x2e0818u: goto label_2e0818;
        case 0x2e081cu: goto label_2e081c;
        case 0x2e0820u: goto label_2e0820;
        case 0x2e0824u: goto label_2e0824;
        case 0x2e0828u: goto label_2e0828;
        case 0x2e082cu: goto label_2e082c;
        case 0x2e0830u: goto label_2e0830;
        case 0x2e0834u: goto label_2e0834;
        case 0x2e0838u: goto label_2e0838;
        case 0x2e083cu: goto label_2e083c;
        case 0x2e0840u: goto label_2e0840;
        case 0x2e0844u: goto label_2e0844;
        case 0x2e0848u: goto label_2e0848;
        case 0x2e084cu: goto label_2e084c;
        case 0x2e0850u: goto label_2e0850;
        case 0x2e0854u: goto label_2e0854;
        case 0x2e0858u: goto label_2e0858;
        case 0x2e085cu: goto label_2e085c;
        case 0x2e0860u: goto label_2e0860;
        case 0x2e0864u: goto label_2e0864;
        case 0x2e0868u: goto label_2e0868;
        case 0x2e086cu: goto label_2e086c;
        case 0x2e0870u: goto label_2e0870;
        case 0x2e0874u: goto label_2e0874;
        case 0x2e0878u: goto label_2e0878;
        case 0x2e087cu: goto label_2e087c;
        case 0x2e0880u: goto label_2e0880;
        case 0x2e0884u: goto label_2e0884;
        case 0x2e0888u: goto label_2e0888;
        case 0x2e088cu: goto label_2e088c;
        case 0x2e0890u: goto label_2e0890;
        case 0x2e0894u: goto label_2e0894;
        case 0x2e0898u: goto label_2e0898;
        case 0x2e089cu: goto label_2e089c;
        case 0x2e08a0u: goto label_2e08a0;
        case 0x2e08a4u: goto label_2e08a4;
        case 0x2e08a8u: goto label_2e08a8;
        case 0x2e08acu: goto label_2e08ac;
        case 0x2e08b0u: goto label_2e08b0;
        case 0x2e08b4u: goto label_2e08b4;
        case 0x2e08b8u: goto label_2e08b8;
        case 0x2e08bcu: goto label_2e08bc;
        case 0x2e08c0u: goto label_2e08c0;
        case 0x2e08c4u: goto label_2e08c4;
        case 0x2e08c8u: goto label_2e08c8;
        case 0x2e08ccu: goto label_2e08cc;
        case 0x2e08d0u: goto label_2e08d0;
        case 0x2e08d4u: goto label_2e08d4;
        case 0x2e08d8u: goto label_2e08d8;
        case 0x2e08dcu: goto label_2e08dc;
        case 0x2e08e0u: goto label_2e08e0;
        case 0x2e08e4u: goto label_2e08e4;
        case 0x2e08e8u: goto label_2e08e8;
        case 0x2e08ecu: goto label_2e08ec;
        case 0x2e08f0u: goto label_2e08f0;
        case 0x2e08f4u: goto label_2e08f4;
        case 0x2e08f8u: goto label_2e08f8;
        case 0x2e08fcu: goto label_2e08fc;
        case 0x2e0900u: goto label_2e0900;
        case 0x2e0904u: goto label_2e0904;
        case 0x2e0908u: goto label_2e0908;
        case 0x2e090cu: goto label_2e090c;
        case 0x2e0910u: goto label_2e0910;
        case 0x2e0914u: goto label_2e0914;
        case 0x2e0918u: goto label_2e0918;
        case 0x2e091cu: goto label_2e091c;
        case 0x2e0920u: goto label_2e0920;
        case 0x2e0924u: goto label_2e0924;
        case 0x2e0928u: goto label_2e0928;
        case 0x2e092cu: goto label_2e092c;
        case 0x2e0930u: goto label_2e0930;
        case 0x2e0934u: goto label_2e0934;
        case 0x2e0938u: goto label_2e0938;
        case 0x2e093cu: goto label_2e093c;
        case 0x2e0940u: goto label_2e0940;
        case 0x2e0944u: goto label_2e0944;
        case 0x2e0948u: goto label_2e0948;
        case 0x2e094cu: goto label_2e094c;
        case 0x2e0950u: goto label_2e0950;
        case 0x2e0954u: goto label_2e0954;
        case 0x2e0958u: goto label_2e0958;
        case 0x2e095cu: goto label_2e095c;
        case 0x2e0960u: goto label_2e0960;
        case 0x2e0964u: goto label_2e0964;
        case 0x2e0968u: goto label_2e0968;
        case 0x2e096cu: goto label_2e096c;
        case 0x2e0970u: goto label_2e0970;
        case 0x2e0974u: goto label_2e0974;
        case 0x2e0978u: goto label_2e0978;
        case 0x2e097cu: goto label_2e097c;
        case 0x2e0980u: goto label_2e0980;
        case 0x2e0984u: goto label_2e0984;
        case 0x2e0988u: goto label_2e0988;
        case 0x2e098cu: goto label_2e098c;
        case 0x2e0990u: goto label_2e0990;
        case 0x2e0994u: goto label_2e0994;
        case 0x2e0998u: goto label_2e0998;
        case 0x2e099cu: goto label_2e099c;
        case 0x2e09a0u: goto label_2e09a0;
        case 0x2e09a4u: goto label_2e09a4;
        case 0x2e09a8u: goto label_2e09a8;
        case 0x2e09acu: goto label_2e09ac;
        case 0x2e09b0u: goto label_2e09b0;
        case 0x2e09b4u: goto label_2e09b4;
        case 0x2e09b8u: goto label_2e09b8;
        case 0x2e09bcu: goto label_2e09bc;
        case 0x2e09c0u: goto label_2e09c0;
        case 0x2e09c4u: goto label_2e09c4;
        case 0x2e09c8u: goto label_2e09c8;
        case 0x2e09ccu: goto label_2e09cc;
        case 0x2e09d0u: goto label_2e09d0;
        case 0x2e09d4u: goto label_2e09d4;
        case 0x2e09d8u: goto label_2e09d8;
        case 0x2e09dcu: goto label_2e09dc;
        case 0x2e09e0u: goto label_2e09e0;
        case 0x2e09e4u: goto label_2e09e4;
        case 0x2e09e8u: goto label_2e09e8;
        case 0x2e09ecu: goto label_2e09ec;
        case 0x2e09f0u: goto label_2e09f0;
        case 0x2e09f4u: goto label_2e09f4;
        case 0x2e09f8u: goto label_2e09f8;
        case 0x2e09fcu: goto label_2e09fc;
        case 0x2e0a00u: goto label_2e0a00;
        case 0x2e0a04u: goto label_2e0a04;
        case 0x2e0a08u: goto label_2e0a08;
        case 0x2e0a0cu: goto label_2e0a0c;
        case 0x2e0a10u: goto label_2e0a10;
        case 0x2e0a14u: goto label_2e0a14;
        case 0x2e0a18u: goto label_2e0a18;
        case 0x2e0a1cu: goto label_2e0a1c;
        case 0x2e0a20u: goto label_2e0a20;
        case 0x2e0a24u: goto label_2e0a24;
        case 0x2e0a28u: goto label_2e0a28;
        case 0x2e0a2cu: goto label_2e0a2c;
        case 0x2e0a30u: goto label_2e0a30;
        case 0x2e0a34u: goto label_2e0a34;
        case 0x2e0a38u: goto label_2e0a38;
        case 0x2e0a3cu: goto label_2e0a3c;
        case 0x2e0a40u: goto label_2e0a40;
        case 0x2e0a44u: goto label_2e0a44;
        case 0x2e0a48u: goto label_2e0a48;
        case 0x2e0a4cu: goto label_2e0a4c;
        default: break;
    }

    ctx->pc = 0x2e0420u;

label_2e0420:
    // 0x2e0420: 0x27bdf8c0  addiu       $sp, $sp, -0x740
    ctx->pc = 0x2e0420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965440));
label_2e0424:
    // 0x2e0424: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e0424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2e0428:
    // 0x2e0428: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2e0428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2e042c:
    // 0x2e042c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2e042cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2e0430:
    // 0x2e0430: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e0430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2e0434:
    // 0x2e0434: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x2e0434u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2e0438:
    // 0x2e0438: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e0438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2e043c:
    // 0x2e043c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2e043cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2e0440:
    // 0x2e0440: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e0440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2e0444:
    // 0x2e0444: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2e0444u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e0448:
    // 0x2e0448: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e0448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2e044c:
    // 0x2e044c: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x2e044cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2e0450:
    // 0x2e0450: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e0450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e0454:
    // 0x2e0454: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e0454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e0458:
    // 0x2e0458: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e0458u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e045c:
    // 0x2e045c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e045cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e0460:
    // 0x2e0460: 0xafa600ac  sw          $a2, 0xAC($sp)
    ctx->pc = 0x2e0460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
label_2e0464:
    // 0x2e0464: 0x15400003  bnez        $t2, . + 4 + (0x3 << 2)
label_2e0468:
    if (ctx->pc == 0x2E0468u) {
        ctx->pc = 0x2E0468u;
            // 0x2e0468: 0xafa800a8  sw          $t0, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 8));
        ctx->pc = 0x2E046Cu;
        goto label_2e046c;
    }
    ctx->pc = 0x2E0464u;
    {
        const bool branch_taken_0x2e0464 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0464u;
            // 0x2e0468: 0xafa800a8  sw          $t0, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0464) {
            ctx->pc = 0x2E0474u;
            goto label_2e0474;
        }
    }
    ctx->pc = 0x2E046Cu;
label_2e046c:
    // 0x2e046c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2e0470:
    if (ctx->pc == 0x2E0470u) {
        ctx->pc = 0x2E0470u;
            // 0x2e0470: 0x8eb00000  lw          $s0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x2E0474u;
        goto label_2e0474;
    }
    ctx->pc = 0x2E046Cu;
    {
        const bool branch_taken_0x2e046c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E046Cu;
            // 0x2e0470: 0x8eb00000  lw          $s0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e046c) {
            ctx->pc = 0x2E0478u;
            goto label_2e0478;
        }
    }
    ctx->pc = 0x2E0474u;
label_2e0474:
    // 0x2e0474: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x2e0474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2e0478:
    // 0x2e0478: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_2e047c:
    if (ctx->pc == 0x2E047Cu) {
        ctx->pc = 0x2E047Cu;
            // 0x2e047c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0480u;
        goto label_2e0480;
    }
    ctx->pc = 0x2E0478u;
    {
        const bool branch_taken_0x2e0478 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E047Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0478u;
            // 0x2e047c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0478) {
            ctx->pc = 0x2E0494u;
            goto label_2e0494;
        }
    }
    ctx->pc = 0x2E0480u;
label_2e0480:
    // 0x2e0480: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2e0480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2e0484:
    // 0x2e0484: 0xc04a0d2  jal         func_128348
label_2e0488:
    if (ctx->pc == 0x2E0488u) {
        ctx->pc = 0x2E0488u;
            // 0x2e0488: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
        ctx->pc = 0x2E048Cu;
        goto label_2e048c;
    }
    ctx->pc = 0x2E0484u;
    SET_GPR_U32(ctx, 31, 0x2E048Cu);
    ctx->pc = 0x2E0488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0484u;
            // 0x2e0488: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E048Cu; }
        if (ctx->pc != 0x2E048Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E048Cu; }
        if (ctx->pc != 0x2E048Cu) { return; }
    }
    ctx->pc = 0x2E048Cu;
label_2e048c:
    // 0x2e048c: 0x10000164  b           . + 4 + (0x164 << 2)
label_2e0490:
    if (ctx->pc == 0x2E0490u) {
        ctx->pc = 0x2E0490u;
            // 0x2e0490: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2E0494u;
        goto label_2e0494;
    }
    ctx->pc = 0x2E048Cu;
    {
        const bool branch_taken_0x2e048c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E048Cu;
            // 0x2e0490: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e048c) {
            ctx->pc = 0x2E0A20u;
            goto label_2e0a20;
        }
    }
    ctx->pc = 0x2E0494u;
label_2e0494:
    // 0x2e0494: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e0494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e0498:
    // 0x2e0498: 0x2a41021  addu        $v0, $s5, $a0
    ctx->pc = 0x2e0498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_2e049c:
    // 0x2e049c: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x2e049cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_2e04a0:
    // 0x2e04a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2e04a4:
    if (ctx->pc == 0x2E04A4u) {
        ctx->pc = 0x2E04A8u;
        goto label_2e04a8;
    }
    ctx->pc = 0x2E04A0u;
    {
        const bool branch_taken_0x2e04a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e04a0) {
            ctx->pc = 0x2E04BCu;
            goto label_2e04bc;
        }
    }
    ctx->pc = 0x2E04A8u;
label_2e04a8:
    // 0x2e04a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e04a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e04ac:
    // 0x2e04ac: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
label_2e04b0:
    if (ctx->pc == 0x2E04B0u) {
        ctx->pc = 0x2E04B0u;
            // 0x2e04b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E04B4u;
        goto label_2e04b4;
    }
    ctx->pc = 0x2E04ACu;
    {
        const bool branch_taken_0x2e04ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2E04B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E04ACu;
            // 0x2e04b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e04ac) {
            ctx->pc = 0x2E04BCu;
            goto label_2e04bc;
        }
    }
    ctx->pc = 0x2E04B4u;
label_2e04b4:
    // 0x2e04b4: 0x1000015b  b           . + 4 + (0x15B << 2)
label_2e04b8:
    if (ctx->pc == 0x2E04B8u) {
        ctx->pc = 0x2E04B8u;
            // 0x2e04b8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2E04BCu;
        goto label_2e04bc;
    }
    ctx->pc = 0x2E04B4u;
    {
        const bool branch_taken_0x2e04b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E04B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E04B4u;
            // 0x2e04b8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e04b4) {
            ctx->pc = 0x2E0A24u;
            goto label_2e0a24;
        }
    }
    ctx->pc = 0x2E04BCu;
label_2e04bc:
    // 0x2e04bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e04bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2e04c0:
    // 0x2e04c0: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x2e04c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
label_2e04c4:
    // 0x2e04c4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_2e04c8:
    if (ctx->pc == 0x2E04C8u) {
        ctx->pc = 0x2E04C8u;
            // 0x2e04c8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x2E04CCu;
        goto label_2e04cc;
    }
    ctx->pc = 0x2E04C4u;
    {
        const bool branch_taken_0x2e04c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E04C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E04C4u;
            // 0x2e04c8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e04c4) {
            ctx->pc = 0x2E0498u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e0498;
        }
    }
    ctx->pc = 0x2E04CCu;
label_2e04cc:
    // 0x2e04cc: 0xc0b8b24  jal         func_2E2C90
label_2e04d0:
    if (ctx->pc == 0x2E04D0u) {
        ctx->pc = 0x2E04D0u;
            // 0x2e04d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E04D4u;
        goto label_2e04d4;
    }
    ctx->pc = 0x2E04CCu;
    SET_GPR_U32(ctx, 31, 0x2E04D4u);
    ctx->pc = 0x2E04D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E04CCu;
            // 0x2e04d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2C90u;
    if (runtime->hasFunction(0x2E2C90u)) {
        auto targetFn = runtime->lookupFunction(0x2E2C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E04D4u; }
        if (ctx->pc != 0x2E04D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEffSptBaseDefPtr__Fi_0x2e2c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E04D4u; }
        if (ctx->pc != 0x2E04D4u) { return; }
    }
    ctx->pc = 0x2E04D4u;
label_2e04d4:
    // 0x2e04d4: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x2e04d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_2e04d8:
    // 0x2e04d8: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x2e04d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2e04dc:
    // 0x2e04dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2e04e0:
    if (ctx->pc == 0x2E04E0u) {
        ctx->pc = 0x2E04E0u;
            // 0x2e04e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E04E4u;
        goto label_2e04e4;
    }
    ctx->pc = 0x2E04DCu;
    {
        const bool branch_taken_0x2e04dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E04E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E04DCu;
            // 0x2e04e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e04dc) {
            ctx->pc = 0x2E04FCu;
            goto label_2e04fc;
        }
    }
    ctx->pc = 0x2E04E4u;
label_2e04e4:
    // 0x2e04e4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2e04e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2e04e8:
    // 0x2e04e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e04e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e04ec:
    // 0x2e04ec: 0xc04a0d2  jal         func_128348
label_2e04f0:
    if (ctx->pc == 0x2E04F0u) {
        ctx->pc = 0x2E04F0u;
            // 0x2e04f0: 0x24841010  addiu       $a0, $a0, 0x1010 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4112));
        ctx->pc = 0x2E04F4u;
        goto label_2e04f4;
    }
    ctx->pc = 0x2E04ECu;
    SET_GPR_U32(ctx, 31, 0x2E04F4u);
    ctx->pc = 0x2E04F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E04ECu;
            // 0x2e04f0: 0x24841010  addiu       $a0, $a0, 0x1010 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E04F4u; }
        if (ctx->pc != 0x2E04F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E04F4u; }
        if (ctx->pc != 0x2E04F4u) { return; }
    }
    ctx->pc = 0x2E04F4u;
label_2e04f4:
    // 0x2e04f4: 0x1000014a  b           . + 4 + (0x14A << 2)
label_2e04f8:
    if (ctx->pc == 0x2E04F8u) {
        ctx->pc = 0x2E04F8u;
            // 0x2e04f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2E04FCu;
        goto label_2e04fc;
    }
    ctx->pc = 0x2E04F4u;
    {
        const bool branch_taken_0x2e04f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E04F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E04F4u;
            // 0x2e04f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e04f4) {
            ctx->pc = 0x2E0A20u;
            goto label_2e0a20;
        }
    }
    ctx->pc = 0x2E04FCu;
label_2e04fc:
    // 0x2e04fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e04fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e0500:
    // 0x2e0500: 0x2a31021  addu        $v0, $s5, $v1
    ctx->pc = 0x2e0500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_2e0504:
    // 0x2e0504: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x2e0504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_2e0508:
    // 0x2e0508: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2e050c:
    if (ctx->pc == 0x2E050Cu) {
        ctx->pc = 0x2E0510u;
        goto label_2e0510;
    }
    ctx->pc = 0x2E0508u;
    {
        const bool branch_taken_0x2e0508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0508) {
            ctx->pc = 0x2E0520u;
            goto label_2e0520;
        }
    }
    ctx->pc = 0x2E0510u;
label_2e0510:
    // 0x2e0510: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e0510u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2e0514:
    // 0x2e0514: 0x2a620040  slti        $v0, $s3, 0x40
    ctx->pc = 0x2e0514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)64) ? 1 : 0);
label_2e0518:
    // 0x2e0518: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2e051c:
    if (ctx->pc == 0x2E051Cu) {
        ctx->pc = 0x2E051Cu;
            // 0x2e051c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x2E0520u;
        goto label_2e0520;
    }
    ctx->pc = 0x2E0518u;
    {
        const bool branch_taken_0x2e0518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E051Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0518u;
            // 0x2e051c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0518) {
            ctx->pc = 0x2E0500u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e0500;
        }
    }
    ctx->pc = 0x2E0520u;
label_2e0520:
    // 0x2e0520: 0x2a620040  slti        $v0, $s3, 0x40
    ctx->pc = 0x2e0520u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)64) ? 1 : 0);
label_2e0524:
    // 0x2e0524: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2e0528:
    if (ctx->pc == 0x2E0528u) {
        ctx->pc = 0x2E0528u;
            // 0x2e0528: 0x2a810000  slti        $at, $s4, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->pc = 0x2E052Cu;
        goto label_2e052c;
    }
    ctx->pc = 0x2E0524u;
    {
        const bool branch_taken_0x2e0524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0524u;
            // 0x2e0528: 0x2a810000  slti        $at, $s4, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0524) {
            ctx->pc = 0x2E0540u;
            goto label_2e0540;
        }
    }
    ctx->pc = 0x2E052Cu;
label_2e052c:
    // 0x2e052c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2e052cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2e0530:
    // 0x2e0530: 0xc04a0d2  jal         func_128348
label_2e0534:
    if (ctx->pc == 0x2E0534u) {
        ctx->pc = 0x2E0534u;
            // 0x2e0534: 0x24841040  addiu       $a0, $a0, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4160));
        ctx->pc = 0x2E0538u;
        goto label_2e0538;
    }
    ctx->pc = 0x2E0530u;
    SET_GPR_U32(ctx, 31, 0x2E0538u);
    ctx->pc = 0x2E0534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0530u;
            // 0x2e0534: 0x24841040  addiu       $a0, $a0, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0538u; }
        if (ctx->pc != 0x2E0538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0538u; }
        if (ctx->pc != 0x2E0538u) { return; }
    }
    ctx->pc = 0x2E0538u;
label_2e0538:
    // 0x2e0538: 0x10000139  b           . + 4 + (0x139 << 2)
label_2e053c:
    if (ctx->pc == 0x2E053Cu) {
        ctx->pc = 0x2E053Cu;
            // 0x2e053c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2E0540u;
        goto label_2e0540;
    }
    ctx->pc = 0x2E0538u;
    {
        const bool branch_taken_0x2e0538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E053Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0538u;
            // 0x2e053c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0538) {
            ctx->pc = 0x2E0A20u;
            goto label_2e0a20;
        }
    }
    ctx->pc = 0x2E0540u;
label_2e0540:
    // 0x2e0540: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_2e0544:
    if (ctx->pc == 0x2E0544u) {
        ctx->pc = 0x2E0544u;
            // 0x2e0544: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0548u;
        goto label_2e0548;
    }
    ctx->pc = 0x2E0540u;
    {
        const bool branch_taken_0x2e0540 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0540u;
            // 0x2e0544: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0540) {
            ctx->pc = 0x2E0574u;
            goto label_2e0574;
        }
    }
    ctx->pc = 0x2E0548u;
label_2e0548:
    // 0x2e0548: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x2e0548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_2e054c:
    // 0x2e054c: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x2e054cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_2e0550:
    // 0x2e0550: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2e0550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2e0554:
    // 0x2e0554: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2e0558:
    if (ctx->pc == 0x2E0558u) {
        ctx->pc = 0x2E0558u;
            // 0x2e0558: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2E055Cu;
        goto label_2e055c;
    }
    ctx->pc = 0x2E0554u;
    {
        const bool branch_taken_0x2e0554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0554u;
            // 0x2e0558: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0554) {
            ctx->pc = 0x2E056Cu;
            goto label_2e056c;
        }
    }
    ctx->pc = 0x2E055Cu;
label_2e055c:
    // 0x2e055c: 0xc04a0d2  jal         func_128348
label_2e0560:
    if (ctx->pc == 0x2E0560u) {
        ctx->pc = 0x2E0560u;
            // 0x2e0560: 0x24841070  addiu       $a0, $a0, 0x1070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4208));
        ctx->pc = 0x2E0564u;
        goto label_2e0564;
    }
    ctx->pc = 0x2E055Cu;
    SET_GPR_U32(ctx, 31, 0x2E0564u);
    ctx->pc = 0x2E0560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E055Cu;
            // 0x2e0560: 0x24841070  addiu       $a0, $a0, 0x1070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0564u; }
        if (ctx->pc != 0x2E0564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0564u; }
        if (ctx->pc != 0x2E0564u) { return; }
    }
    ctx->pc = 0x2E0564u;
label_2e0564:
    // 0x2e0564: 0x1000012e  b           . + 4 + (0x12E << 2)
label_2e0568:
    if (ctx->pc == 0x2E0568u) {
        ctx->pc = 0x2E0568u;
            // 0x2e0568: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2E056Cu;
        goto label_2e056c;
    }
    ctx->pc = 0x2E0564u;
    {
        const bool branch_taken_0x2e0564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0564u;
            // 0x2e0568: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0564) {
            ctx->pc = 0x2E0A20u;
            goto label_2e0a20;
        }
    }
    ctx->pc = 0x2E056Cu;
label_2e056c:
    // 0x2e056c: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x2e056cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_2e0570:
    // 0x2e0570: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2e0570u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e0574:
    // 0x2e0574: 0x8ea50010  lw          $a1, 0x10($s5)
    ctx->pc = 0x2e0574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_2e0578:
    // 0x2e0578: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x2e0578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2e057c:
    // 0x2e057c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2e0580:
    if (ctx->pc == 0x2E0580u) {
        ctx->pc = 0x2E0584u;
        goto label_2e0584;
    }
    ctx->pc = 0x2E057Cu;
    {
        const bool branch_taken_0x2e057c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e057c) {
            ctx->pc = 0x2E0598u;
            goto label_2e0598;
        }
    }
    ctx->pc = 0x2E0584u;
label_2e0584:
    // 0x2e0584: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x2e0584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_2e0588:
    // 0x2e0588: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2e0588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2e058c:
    // 0x2e058c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2e058cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2e0590:
    // 0x2e0590: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2e0594:
    if (ctx->pc == 0x2E0594u) {
        ctx->pc = 0x2E0594u;
            // 0x2e0594: 0x3c1e0038  lui         $fp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)56 << 16));
        ctx->pc = 0x2E0598u;
        goto label_2e0598;
    }
    ctx->pc = 0x2E0590u;
    {
        const bool branch_taken_0x2e0590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0590u;
            // 0x2e0594: 0x3c1e0038  lui         $fp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0590) {
            ctx->pc = 0x2E05B4u;
            goto label_2e05b4;
        }
    }
    ctx->pc = 0x2E0598u;
label_2e0598:
    // 0x2e0598: 0x8ea60014  lw          $a2, 0x14($s5)
    ctx->pc = 0x2e0598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_2e059c:
    // 0x2e059c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2e059cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2e05a0:
    // 0x2e05a0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2e05a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e05a4:
    // 0x2e05a4: 0xc04a0d2  jal         func_128348
label_2e05a8:
    if (ctx->pc == 0x2E05A8u) {
        ctx->pc = 0x2E05A8u;
            // 0x2e05a8: 0x248410a0  addiu       $a0, $a0, 0x10A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4256));
        ctx->pc = 0x2E05ACu;
        goto label_2e05ac;
    }
    ctx->pc = 0x2E05A4u;
    SET_GPR_U32(ctx, 31, 0x2E05ACu);
    ctx->pc = 0x2E05A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E05A4u;
            // 0x2e05a8: 0x248410a0  addiu       $a0, $a0, 0x10A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E05ACu; }
        if (ctx->pc != 0x2E05ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E05ACu; }
        if (ctx->pc != 0x2E05ACu) { return; }
    }
    ctx->pc = 0x2E05ACu;
label_2e05ac:
    // 0x2e05ac: 0x1000011c  b           . + 4 + (0x11C << 2)
label_2e05b0:
    if (ctx->pc == 0x2E05B0u) {
        ctx->pc = 0x2E05B0u;
            // 0x2e05b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2E05B4u;
        goto label_2e05b4;
    }
    ctx->pc = 0x2E05ACu;
    {
        const bool branch_taken_0x2e05ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E05B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E05ACu;
            // 0x2e05b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e05ac) {
            ctx->pc = 0x2E0A20u;
            goto label_2e0a20;
        }
    }
    ctx->pc = 0x2E05B4u;
label_2e05b4:
    // 0x2e05b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e05b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e05b8:
    // 0x2e05b8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2e05b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_2e05bc:
    // 0x2e05bc: 0xc04e780  jal         func_139E00
label_2e05c0:
    if (ctx->pc == 0x2E05C0u) {
        ctx->pc = 0x2E05C0u;
            // 0x2e05c0: 0x27de1ef0  addiu       $fp, $fp, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 7920));
        ctx->pc = 0x2E05C4u;
        goto label_2e05c4;
    }
    ctx->pc = 0x2E05BCu;
    SET_GPR_U32(ctx, 31, 0x2E05C4u);
    ctx->pc = 0x2E05C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E05BCu;
            // 0x2e05c0: 0x27de1ef0  addiu       $fp, $fp, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E05C4u; }
        if (ctx->pc != 0x2E05C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E05C4u; }
        if (ctx->pc != 0x2E05C4u) { return; }
    }
    ctx->pc = 0x2E05C4u;
label_2e05c4:
    // 0x2e05c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e05c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e05c8:
    // 0x2e05c8: 0xc04e748  jal         func_139D20
label_2e05cc:
    if (ctx->pc == 0x2E05CCu) {
        ctx->pc = 0x2E05CCu;
            // 0x2e05cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2E05D0u;
        goto label_2e05d0;
    }
    ctx->pc = 0x2E05C8u;
    SET_GPR_U32(ctx, 31, 0x2E05D0u);
    ctx->pc = 0x2E05CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E05C8u;
            // 0x2e05cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E05D0u; }
        if (ctx->pc != 0x2E05D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E05D0u; }
        if (ctx->pc != 0x2E05D0u) { return; }
    }
    ctx->pc = 0x2E05D0u;
label_2e05d0:
    // 0x2e05d0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2e05d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_2e05d4:
    // 0x2e05d4: 0xc04e638  jal         func_1398E0
label_2e05d8:
    if (ctx->pc == 0x2E05D8u) {
        ctx->pc = 0x2E05D8u;
            // 0x2e05d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E05DCu;
        goto label_2e05dc;
    }
    ctx->pc = 0x2E05D4u;
    SET_GPR_U32(ctx, 31, 0x2E05DCu);
    ctx->pc = 0x2E05D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E05D4u;
            // 0x2e05d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E05DCu; }
        if (ctx->pc != 0x2E05DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E05DCu; }
        if (ctx->pc != 0x2E05DCu) { return; }
    }
    ctx->pc = 0x2E05DCu;
label_2e05dc:
    // 0x2e05dc: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2e05dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2e05e0:
    // 0x2e05e0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x2e05e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_2e05e4:
    // 0x2e05e4: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e05e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2e05e8:
    // 0x2e05e8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e05e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_2e05ec:
    // 0x2e05ec: 0x104000f4  beqz        $v0, . + 4 + (0xF4 << 2)
label_2e05f0:
    if (ctx->pc == 0x2E05F0u) {
        ctx->pc = 0x2E05F0u;
            // 0x2e05f0: 0x24730080  addiu       $s3, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->pc = 0x2E05F4u;
        goto label_2e05f4;
    }
    ctx->pc = 0x2E05ECu;
    {
        const bool branch_taken_0x2e05ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E05F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E05ECu;
            // 0x2e05f0: 0x24730080  addiu       $s3, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e05ec) {
            ctx->pc = 0x2E09C0u;
            goto label_2e09c0;
        }
    }
    ctx->pc = 0x2E05F4u;
label_2e05f4:
    // 0x2e05f4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x2e05f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_2e05f8:
    // 0x2e05f8: 0x2404007d  addiu       $a0, $zero, 0x7D
    ctx->pc = 0x2e05f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_2e05fc:
    // 0x2e05fc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e05fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e0600:
    // 0x2e0600: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e0600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e0604:
    // 0x2e0604: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x2e0604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
label_2e0608:
    // 0x2e0608: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2e0608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e060c:
    // 0x2e060c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2e060cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2e0610:
    // 0x2e0610: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x2e0610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e0614:
    // 0x2e0614: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x2e0614u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_2e0618:
    // 0x2e0618: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e0618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e061c:
    // 0x2e061c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2e061cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_2e0620:
    // 0x2e0620: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x2e0620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2e0624:
    // 0x2e0624: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x2e0624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_2e0628:
    // 0x2e0628: 0x104300a5  beq         $v0, $v1, . + 4 + (0xA5 << 2)
label_2e062c:
    if (ctx->pc == 0x2E062Cu) {
        ctx->pc = 0x2E0630u;
        goto label_2e0630;
    }
    ctx->pc = 0x2E0628u;
    {
        const bool branch_taken_0x2e0628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e0628) {
            ctx->pc = 0x2E08C0u;
            goto label_2e08c0;
        }
    }
    ctx->pc = 0x2E0630u;
label_2e0630:
    // 0x2e0630: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2e0634:
    if (ctx->pc == 0x2E0634u) {
        ctx->pc = 0x2E0638u;
        goto label_2e0638;
    }
    ctx->pc = 0x2E0630u;
    {
        const bool branch_taken_0x2e0630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0630) {
            ctx->pc = 0x2E0640u;
            goto label_2e0640;
        }
    }
    ctx->pc = 0x2E0638u;
label_2e0638:
    // 0x2e0638: 0x100000e2  b           . + 4 + (0xE2 << 2)
label_2e063c:
    if (ctx->pc == 0x2E063Cu) {
        ctx->pc = 0x2E063Cu;
            // 0x2e063c: 0x171103  sra         $v0, $s7, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 23), 4));
        ctx->pc = 0x2E0640u;
        goto label_2e0640;
    }
    ctx->pc = 0x2E0638u;
    {
        const bool branch_taken_0x2e0638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E063Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0638u;
            // 0x2e063c: 0x171103  sra         $v0, $s7, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0638) {
            ctx->pc = 0x2E09C4u;
            goto label_2e09c4;
        }
    }
    ctx->pc = 0x2E0640u;
label_2e0640:
    // 0x2e0640: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e0640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e0644:
    // 0x2e0644: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2e0644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2e0648:
    // 0x2e0648: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2e0648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2e064c:
    // 0x2e064c: 0x104000dc  beqz        $v0, . + 4 + (0xDC << 2)
label_2e0650:
    if (ctx->pc == 0x2E0650u) {
        ctx->pc = 0x2E0650u;
            // 0x2e0650: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0654u;
        goto label_2e0654;
    }
    ctx->pc = 0x2E064Cu;
    {
        const bool branch_taken_0x2e064c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E064Cu;
            // 0x2e0650: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e064c) {
            ctx->pc = 0x2E09C0u;
            goto label_2e09c0;
        }
    }
    ctx->pc = 0x2E0654u;
label_2e0654:
    // 0x2e0654: 0xc0b80ac  jal         func_2E02B0
label_2e0658:
    if (ctx->pc == 0x2E0658u) {
        ctx->pc = 0x2E0658u;
            // 0x2e0658: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E065Cu;
        goto label_2e065c;
    }
    ctx->pc = 0x2E0654u;
    SET_GPR_U32(ctx, 31, 0x2E065Cu);
    ctx->pc = 0x2E0658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0654u;
            // 0x2e0658: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E02B0u;
    if (runtime->hasFunction(0x2E02B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E02B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E065Cu; }
        if (ctx->pc != 0x2E065Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBaseChara__16CEffectScriptManFi_0x2e02b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E065Cu; }
        if (ctx->pc != 0x2E065Cu) { return; }
    }
    ctx->pc = 0x2E065Cu;
label_2e065c:
    // 0x2e065c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2e065cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e0660:
    // 0x2e0660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e0664:
    // 0x2e0664: 0xc04e748  jal         func_139D20
label_2e0668:
    if (ctx->pc == 0x2E0668u) {
        ctx->pc = 0x2E0668u;
            // 0x2e0668: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x2E066Cu;
        goto label_2e066c;
    }
    ctx->pc = 0x2E0664u;
    SET_GPR_U32(ctx, 31, 0x2E066Cu);
    ctx->pc = 0x2E0668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0664u;
            // 0x2e0668: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E066Cu; }
        if (ctx->pc != 0x2E066Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E066Cu; }
        if (ctx->pc != 0x2E066Cu) { return; }
    }
    ctx->pc = 0x2E066Cu;
label_2e066c:
    // 0x2e066c: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x2e066cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_2e0670:
    // 0x2e0670: 0xc04e638  jal         func_1398E0
label_2e0674:
    if (ctx->pc == 0x2E0674u) {
        ctx->pc = 0x2E0674u;
            // 0x2e0674: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0678u;
        goto label_2e0678;
    }
    ctx->pc = 0x2E0670u;
    SET_GPR_U32(ctx, 31, 0x2E0678u);
    ctx->pc = 0x2E0674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0670u;
            // 0x2e0674: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0678u; }
        if (ctx->pc != 0x2E0678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0678u; }
        if (ctx->pc != 0x2E0678u) { return; }
    }
    ctx->pc = 0x2E0678u;
label_2e0678:
    // 0x2e0678: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2e067c:
    if (ctx->pc == 0x2E067Cu) {
        ctx->pc = 0x2E067Cu;
            // 0x2e067c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0680u;
        goto label_2e0680;
    }
    ctx->pc = 0x2E0678u;
    {
        const bool branch_taken_0x2e0678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E067Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0678u;
            // 0x2e067c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0678) {
            ctx->pc = 0x2E06FCu;
            goto label_2e06fc;
        }
    }
    ctx->pc = 0x2E0680u;
label_2e0680:
    // 0x2e0680: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e0680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e0684:
    // 0x2e0684: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2e0684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2e0688:
    // 0x2e0688: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2e0688u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2e068c:
    // 0x2e068c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2e068cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e0690:
    // 0x2e0690: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e0690u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e0694:
    // 0x2e0694: 0x320f809  jalr        $t9
label_2e0698:
    if (ctx->pc == 0x2E0698u) {
        ctx->pc = 0x2E0698u;
            // 0x2e0698: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E069Cu;
        goto label_2e069c;
    }
    ctx->pc = 0x2E0694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E069Cu);
        ctx->pc = 0x2E0698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0694u;
            // 0x2e0698: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E069Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E069Cu; }
            if (ctx->pc != 0x2E069Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2E069Cu;
label_2e069c:
    // 0x2e069c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e069cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e06a0:
    // 0x2e06a0: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x2e06a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_2e06a4:
    // 0x2e06a4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2e06a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2e06a8:
    // 0x2e06a8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2e06a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e06ac:
    // 0x2e06ac: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e06acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e06b0:
    // 0x2e06b0: 0x320f809  jalr        $t9
label_2e06b4:
    if (ctx->pc == 0x2E06B4u) {
        ctx->pc = 0x2E06B4u;
            // 0x2e06b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E06B8u;
        goto label_2e06b8;
    }
    ctx->pc = 0x2E06B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E06B8u);
        ctx->pc = 0x2E06B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E06B0u;
            // 0x2e06b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E06B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E06B8u; }
            if (ctx->pc != 0x2E06B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2E06B8u;
label_2e06b8:
    // 0x2e06b8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e06b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e06bc:
    // 0x2e06bc: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x2e06bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_2e06c0:
    // 0x2e06c0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2e06c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2e06c4:
    // 0x2e06c4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2e06c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e06c8:
    // 0x2e06c8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e06c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e06cc:
    // 0x2e06cc: 0x320f809  jalr        $t9
label_2e06d0:
    if (ctx->pc == 0x2E06D0u) {
        ctx->pc = 0x2E06D0u;
            // 0x2e06d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E06D4u;
        goto label_2e06d4;
    }
    ctx->pc = 0x2E06CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E06D4u);
        ctx->pc = 0x2E06D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E06CCu;
            // 0x2e06d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E06D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E06D4u; }
            if (ctx->pc != 0x2E06D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2E06D4u;
label_2e06d4:
    // 0x2e06d4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e06d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e06d8:
    // 0x2e06d8: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x2e06d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_2e06dc:
    // 0x2e06dc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2e06dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2e06e0:
    // 0x2e06e0: 0xae40035c  sw          $zero, 0x35C($s2)
    ctx->pc = 0x2e06e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 860), GPR_U32(ctx, 0));
label_2e06e4:
    // 0x2e06e4: 0xae400364  sw          $zero, 0x364($s2)
    ctx->pc = 0x2e06e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 868), GPR_U32(ctx, 0));
label_2e06e8:
    // 0x2e06e8: 0xae400360  sw          $zero, 0x360($s2)
    ctx->pc = 0x2e06e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 864), GPR_U32(ctx, 0));
label_2e06ec:
    // 0x2e06ec: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2e06ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e06f0:
    // 0x2e06f0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e06f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e06f4:
    // 0x2e06f4: 0x320f809  jalr        $t9
label_2e06f8:
    if (ctx->pc == 0x2E06F8u) {
        ctx->pc = 0x2E06F8u;
            // 0x2e06f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E06FCu;
        goto label_2e06fc;
    }
    ctx->pc = 0x2E06F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E06FCu);
        ctx->pc = 0x2E06F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E06F4u;
            // 0x2e06f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E06FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E06FCu; }
            if (ctx->pc != 0x2E06FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2E06FCu;
label_2e06fc:
    // 0x2e06fc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e06fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e0700:
    // 0x2e0700: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x2e0700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
label_2e0704:
    // 0x2e0704: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e0704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e0708:
    // 0x2e0708: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2e0708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e070c:
    // 0x2e070c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e070cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e0710:
    // 0x2e0710: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e0710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e0714:
    // 0x2e0714: 0x320f809  jalr        $t9
label_2e0718:
    if (ctx->pc == 0x2E0718u) {
        ctx->pc = 0x2E071Cu;
        goto label_2e071c;
    }
    ctx->pc = 0x2E0714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E071Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E071Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E071Cu; }
            if (ctx->pc != 0x2E071Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2E071Cu;
label_2e071c:
    // 0x2e071c: 0x12c0000e  beqz        $s6, . + 4 + (0xE << 2)
label_2e0720:
    if (ctx->pc == 0x2E0720u) {
        ctx->pc = 0x2E0724u;
        goto label_2e0724;
    }
    ctx->pc = 0x2E071Cu;
    {
        const bool branch_taken_0x2e071c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e071c) {
            ctx->pc = 0x2E0758u;
            goto label_2e0758;
        }
    }
    ctx->pc = 0x2E0724u;
label_2e0724:
    // 0x2e0724: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e0724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e0728:
    // 0x2e0728: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e0728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e072c:
    // 0x2e072c: 0x8ed90000  lw          $t9, 0x0($s6)
    ctx->pc = 0x2e072cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2e0730:
    // 0x2e0730: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2e0730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e0734:
    // 0x2e0734: 0x8f3900ec  lw          $t9, 0xEC($t9)
    ctx->pc = 0x2e0734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 236)));
label_2e0738:
    // 0x2e0738: 0x320f809  jalr        $t9
label_2e073c:
    if (ctx->pc == 0x2E073Cu) {
        ctx->pc = 0x2E073Cu;
            // 0x2e073c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0740u;
        goto label_2e0740;
    }
    ctx->pc = 0x2E0738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E0740u);
        ctx->pc = 0x2E073Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0738u;
            // 0x2e073c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E0740u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E0740u; }
            if (ctx->pc != 0x2E0740u) { return; }
        }
        }
    }
    ctx->pc = 0x2E0740u;
label_2e0740:
    // 0x2e0740: 0x8ec302e4  lw          $v1, 0x2E4($s6)
    ctx->pc = 0x2e0740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 740)));
label_2e0744:
    // 0x2e0744: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e0744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e0748:
    // 0x2e0748: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2e0748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_2e074c:
    // 0x2e074c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e074cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e0750:
    // 0x2e0750: 0x10000050  b           . + 4 + (0x50 << 2)
label_2e0754:
    if (ctx->pc == 0x2E0754u) {
        ctx->pc = 0x2E0754u;
            // 0x2e0754: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x2E0758u;
        goto label_2e0758;
    }
    ctx->pc = 0x2E0750u;
    {
        const bool branch_taken_0x2e0750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0750u;
            // 0x2e0754: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0750) {
            ctx->pc = 0x2E0894u;
            goto label_2e0894;
        }
    }
    ctx->pc = 0x2E0758u;
label_2e0758:
    // 0x2e0758: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e0758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e075c:
    // 0x2e075c: 0x2a810000  slti        $at, $s4, 0x0
    ctx->pc = 0x2e075cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
label_2e0760:
    // 0x2e0760: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_2e0764:
    if (ctx->pc == 0x2E0764u) {
        ctx->pc = 0x2E0764u;
            // 0x2e0764: 0xac510008  sw          $s1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
        ctx->pc = 0x2E0768u;
        goto label_2e0768;
    }
    ctx->pc = 0x2E0760u;
    {
        const bool branch_taken_0x2e0760 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0760u;
            // 0x2e0764: 0xac510008  sw          $s1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0760) {
            ctx->pc = 0x2E0778u;
            goto label_2e0778;
        }
    }
    ctx->pc = 0x2E0768u;
label_2e0768:
    // 0x2e0768: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e0768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e076c:
    // 0x2e076c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2e076cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e0770:
    // 0x2e0770: 0xc04b950  jal         func_12E540
label_2e0774:
    if (ctx->pc == 0x2E0774u) {
        ctx->pc = 0x2E0774u;
            // 0x2e0774: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0778u;
        goto label_2e0778;
    }
    ctx->pc = 0x2E0770u;
    SET_GPR_U32(ctx, 31, 0x2E0778u);
    ctx->pc = 0x2E0774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0770u;
            // 0x2e0774: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0778u; }
        if (ctx->pc != 0x2E0778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0778u; }
        if (ctx->pc != 0x2E0778u) { return; }
    }
    ctx->pc = 0x2E0778u;
label_2e0778:
    // 0x2e0778: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e0778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e077c:
    // 0x2e077c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2e077cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_2e0780:
    // 0x2e0780: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x2e0780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2e0784:
    // 0x2e0784: 0x24c610e0  addiu       $a2, $a2, 0x10E0
    ctx->pc = 0x2e0784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4320));
label_2e0788:
    // 0x2e0788: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e0788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e078c:
    // 0x2e078c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2e078cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e0790:
    // 0x2e0790: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2e0790u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e0794:
    // 0x2e0794: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2e0794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e0798:
    // 0x2e0798: 0x8c4a0008  lw          $t2, 0x8($v0)
    ctx->pc = 0x2e0798u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e079c:
    // 0x2e079c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e079cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e07a0:
    // 0x2e07a0: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x2e07a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_2e07a4:
    // 0x2e07a4: 0x320f809  jalr        $t9
label_2e07a8:
    if (ctx->pc == 0x2E07A8u) {
        ctx->pc = 0x2E07A8u;
            // 0x2e07a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E07ACu;
        goto label_2e07ac;
    }
    ctx->pc = 0x2E07A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E07ACu);
        ctx->pc = 0x2E07A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E07A4u;
            // 0x2e07a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E07ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E07ACu; }
            if (ctx->pc != 0x2E07ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2E07ACu;
label_2e07ac:
    // 0x2e07ac: 0x2a810000  slti        $at, $s4, 0x0
    ctx->pc = 0x2e07acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
label_2e07b0:
    // 0x2e07b0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_2e07b4:
    if (ctx->pc == 0x2E07B4u) {
        ctx->pc = 0x2E07B8u;
        goto label_2e07b8;
    }
    ctx->pc = 0x2E07B0u;
    {
        const bool branch_taken_0x2e07b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e07b0) {
            ctx->pc = 0x2E07D0u;
            goto label_2e07d0;
        }
    }
    ctx->pc = 0x2E07B8u;
label_2e07b8:
    // 0x2e07b8: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x2e07b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_2e07bc:
    // 0x2e07bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e07bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e07c0:
    // 0x2e07c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e07c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e07c4:
    // 0x2e07c4: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x2e07c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
label_2e07c8:
    // 0x2e07c8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e07c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e07cc:
    // 0x2e07cc: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x2e07ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_2e07d0:
    // 0x2e07d0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e07d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e07d4:
    // 0x2e07d4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2e07d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2e07d8:
    // 0x2e07d8: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2e07d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2e07dc:
    // 0x2e07dc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2e07dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_2e07e0:
    // 0x2e07e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e07e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e07e4:
    // 0x2e07e4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e07e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e07e8:
    // 0x2e07e8: 0x320f809  jalr        $t9
label_2e07ec:
    if (ctx->pc == 0x2E07ECu) {
        ctx->pc = 0x2E07F0u;
        goto label_2e07f0;
    }
    ctx->pc = 0x2E07E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E07F0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E07F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E07F0u; }
            if (ctx->pc != 0x2E07F0u) { return; }
        }
        }
    }
    ctx->pc = 0x2E07F0u;
label_2e07f0:
    // 0x2e07f0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e07f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e07f4:
    // 0x2e07f4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2e07f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2e07f8:
    // 0x2e07f8: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x2e07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_2e07fc:
    // 0x2e07fc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2e07fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_2e0800:
    // 0x2e0800: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e0800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e0804:
    // 0x2e0804: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e0804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e0808:
    // 0x2e0808: 0x320f809  jalr        $t9
label_2e080c:
    if (ctx->pc == 0x2E080Cu) {
        ctx->pc = 0x2E0810u;
        goto label_2e0810;
    }
    ctx->pc = 0x2E0808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E0810u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E0810u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E0810u; }
            if (ctx->pc != 0x2E0810u) { return; }
        }
        }
    }
    ctx->pc = 0x2E0810u;
label_2e0810:
    // 0x2e0810: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e0810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e0814:
    // 0x2e0814: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2e0814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2e0818:
    // 0x2e0818: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x2e0818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_2e081c:
    // 0x2e081c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2e081cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_2e0820:
    // 0x2e0820: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e0820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e0824:
    // 0x2e0824: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e0824u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e0828:
    // 0x2e0828: 0x320f809  jalr        $t9
label_2e082c:
    if (ctx->pc == 0x2E082Cu) {
        ctx->pc = 0x2E0830u;
        goto label_2e0830;
    }
    ctx->pc = 0x2E0828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E0830u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E0830u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E0830u; }
            if (ctx->pc != 0x2E0830u) { return; }
        }
        }
    }
    ctx->pc = 0x2E0830u;
label_2e0830:
    // 0x2e0830: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e0830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e0834:
    // 0x2e0834: 0xafa0040c  sw          $zero, 0x40C($sp)
    ctx->pc = 0x2e0834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1036), GPR_U32(ctx, 0));
label_2e0838:
    // 0x2e0838: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x2e0838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_2e083c:
    // 0x2e083c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2e083cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2e0840:
    // 0x2e0840: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2e0840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_2e0844:
    // 0x2e0844: 0xafa00414  sw          $zero, 0x414($sp)
    ctx->pc = 0x2e0844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1044), GPR_U32(ctx, 0));
label_2e0848:
    // 0x2e0848: 0xafa00410  sw          $zero, 0x410($sp)
    ctx->pc = 0x2e0848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1040), GPR_U32(ctx, 0));
label_2e084c:
    // 0x2e084c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e084cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e0850:
    // 0x2e0850: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e0850u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e0854:
    // 0x2e0854: 0x320f809  jalr        $t9
label_2e0858:
    if (ctx->pc == 0x2E0858u) {
        ctx->pc = 0x2E085Cu;
        goto label_2e085c;
    }
    ctx->pc = 0x2E0854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E085Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E085Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E085Cu; }
            if (ctx->pc != 0x2E085Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2E085Cu;
label_2e085c:
    // 0x2e085c: 0xc04e640  jal         func_139900
label_2e0860:
    if (ctx->pc == 0x2E0860u) {
        ctx->pc = 0x2E0860u;
            // 0x2e0860: 0x27a40710  addiu       $a0, $sp, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
        ctx->pc = 0x2E0864u;
        goto label_2e0864;
    }
    ctx->pc = 0x2E085Cu;
    SET_GPR_U32(ctx, 31, 0x2E0864u);
    ctx->pc = 0x2E0860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E085Cu;
            // 0x2e0860: 0x27a40710  addiu       $a0, $sp, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0864u; }
        if (ctx->pc != 0x2E0864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0864u; }
        if (ctx->pc != 0x2E0864u) { return; }
    }
    ctx->pc = 0x2E0864u;
label_2e0864:
    // 0x2e0864: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x2e0864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_2e0868:
    // 0x2e0868: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2e0868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_2e086c:
    // 0x2e086c: 0x27a40710  addiu       $a0, $sp, 0x710
    ctx->pc = 0x2e086cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
label_2e0870:
    // 0x2e0870: 0xc04e79c  jal         func_139E70
label_2e0874:
    if (ctx->pc == 0x2E0874u) {
        ctx->pc = 0x2E0874u;
            // 0x2e0874: 0x344693e0  ori         $a2, $v0, 0x93E0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37856);
        ctx->pc = 0x2E0878u;
        goto label_2e0878;
    }
    ctx->pc = 0x2E0870u;
    SET_GPR_U32(ctx, 31, 0x2E0878u);
    ctx->pc = 0x2E0874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0870u;
            // 0x2e0874: 0x344693e0  ori         $a2, $v0, 0x93E0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37856);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0878u; }
        if (ctx->pc != 0x2E0878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0878u; }
        if (ctx->pc != 0x2E0878u) { return; }
    }
    ctx->pc = 0x2E0878u;
label_2e0878:
    // 0x2e0878: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e0878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e087c:
    // 0x2e087c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2e087cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2e0880:
    // 0x2e0880: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2e0880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e0884:
    // 0x2e0884: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e0884u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e0888:
    // 0x2e0888: 0x8f3900ec  lw          $t9, 0xEC($t9)
    ctx->pc = 0x2e0888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 236)));
label_2e088c:
    // 0x2e088c: 0x320f809  jalr        $t9
label_2e0890:
    if (ctx->pc == 0x2E0890u) {
        ctx->pc = 0x2E0890u;
            // 0x2e0890: 0x27a60710  addiu       $a2, $sp, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
        ctx->pc = 0x2E0894u;
        goto label_2e0894;
    }
    ctx->pc = 0x2E088Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E0894u);
        ctx->pc = 0x2E0890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E088Cu;
            // 0x2e0890: 0x27a60710  addiu       $a2, $sp, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E0894u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E0894u; }
            if (ctx->pc != 0x2E0894u) { return; }
        }
        }
    }
    ctx->pc = 0x2E0894u;
label_2e0894:
    // 0x2e0894: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e0894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e0898:
    // 0x2e0898: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2e0898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e089c:
    // 0x2e089c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e089cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e08a0:
    // 0x2e08a0: 0x8f3900f0  lw          $t9, 0xF0($t9)
    ctx->pc = 0x2e08a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
label_2e08a4:
    // 0x2e08a4: 0x320f809  jalr        $t9
label_2e08a8:
    if (ctx->pc == 0x2E08A8u) {
        ctx->pc = 0x2E08ACu;
        goto label_2e08ac;
    }
    ctx->pc = 0x2E08A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E08ACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E08ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E08ACu; }
            if (ctx->pc != 0x2E08ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2E08ACu;
label_2e08ac:
    // 0x2e08ac: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2e08acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e08b0:
    // 0x2e08b0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2e08b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2e08b4:
    // 0x2e08b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e08b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e08b8:
    // 0x2e08b8: 0x10000041  b           . + 4 + (0x41 << 2)
label_2e08bc:
    if (ctx->pc == 0x2E08BCu) {
        ctx->pc = 0x2E08BCu;
            // 0x2e08bc: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x2E08C0u;
        goto label_2e08c0;
    }
    ctx->pc = 0x2E08B8u;
    {
        const bool branch_taken_0x2e08b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E08BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E08B8u;
            // 0x2e08bc: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e08b8) {
            ctx->pc = 0x2E09C0u;
            goto label_2e09c0;
        }
    }
    ctx->pc = 0x2E08C0u;
label_2e08c0:
    // 0x2e08c0: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x2e08c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2e08c4:
    // 0x2e08c4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2e08c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2e08c8:
    // 0x2e08c8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e08c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e08cc:
    // 0x2e08cc: 0x24450024  addiu       $a1, $v0, 0x24
    ctx->pc = 0x2e08ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e08d0:
    // 0x2e08d0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e08d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e08d4:
    // 0x2e08d4: 0xc04b414  jal         func_12D050
label_2e08d8:
    if (ctx->pc == 0x2E08D8u) {
        ctx->pc = 0x2E08D8u;
            // 0x2e08d8: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x2E08DCu;
        goto label_2e08dc;
    }
    ctx->pc = 0x2E08D4u;
    SET_GPR_U32(ctx, 31, 0x2E08DCu);
    ctx->pc = 0x2E08D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E08D4u;
            // 0x2e08d8: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E08DCu; }
        if (ctx->pc != 0x2E08DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E08DCu; }
        if (ctx->pc != 0x2E08DCu) { return; }
    }
    ctx->pc = 0x2E08DCu;
label_2e08dc:
    // 0x2e08dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2e08e0:
    if (ctx->pc == 0x2E08E0u) {
        ctx->pc = 0x2E08E4u;
        goto label_2e08e4;
    }
    ctx->pc = 0x2E08DCu;
    {
        const bool branch_taken_0x2e08dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e08dc) {
            ctx->pc = 0x2E08FCu;
            goto label_2e08fc;
        }
    }
    ctx->pc = 0x2E08E4u;
label_2e08e4:
    // 0x2e08e4: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2e08e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e08e8:
    // 0x2e08e8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e08e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e08ec:
    // 0x2e08ec: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2e08ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_2e08f0:
    // 0x2e08f0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e08f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e08f4:
    // 0x2e08f4: 0x10000032  b           . + 4 + (0x32 << 2)
label_2e08f8:
    if (ctx->pc == 0x2E08F8u) {
        ctx->pc = 0x2E08F8u;
            // 0x2e08f8: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x2E08FCu;
        goto label_2e08fc;
    }
    ctx->pc = 0x2E08F4u;
    {
        const bool branch_taken_0x2e08f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E08F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E08F4u;
            // 0x2e08f8: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e08f4) {
            ctx->pc = 0x2E09C0u;
            goto label_2e09c0;
        }
    }
    ctx->pc = 0x2E08FCu;
label_2e08fc:
    // 0x2e08fc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e08fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e0900:
    // 0x2e0900: 0x2a810000  slti        $at, $s4, 0x0
    ctx->pc = 0x2e0900u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
label_2e0904:
    // 0x2e0904: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_2e0908:
    if (ctx->pc == 0x2E0908u) {
        ctx->pc = 0x2E0908u;
            // 0x2e0908: 0xac510008  sw          $s1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
        ctx->pc = 0x2E090Cu;
        goto label_2e090c;
    }
    ctx->pc = 0x2E0904u;
    {
        const bool branch_taken_0x2e0904 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0904u;
            // 0x2e0908: 0xac510008  sw          $s1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0904) {
            ctx->pc = 0x2E091Cu;
            goto label_2e091c;
        }
    }
    ctx->pc = 0x2E090Cu;
label_2e090c:
    // 0x2e090c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e090cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e0910:
    // 0x2e0910: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2e0910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e0914:
    // 0x2e0914: 0xc04b950  jal         func_12E540
label_2e0918:
    if (ctx->pc == 0x2E0918u) {
        ctx->pc = 0x2E0918u;
            // 0x2e0918: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E091Cu;
        goto label_2e091c;
    }
    ctx->pc = 0x2E0914u;
    SET_GPR_U32(ctx, 31, 0x2E091Cu);
    ctx->pc = 0x2E0918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0914u;
            // 0x2e0918: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E091Cu; }
        if (ctx->pc != 0x2E091Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E091Cu; }
        if (ctx->pc != 0x2E091Cu) { return; }
    }
    ctx->pc = 0x2E091Cu;
label_2e091c:
    // 0x2e091c: 0x6c10003  bgez        $s6, . + 4 + (0x3 << 2)
label_2e0920:
    if (ctx->pc == 0x2E0920u) {
        ctx->pc = 0x2E0920u;
            // 0x2e0920: 0x161103  sra         $v0, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 22), 4));
        ctx->pc = 0x2E0924u;
        goto label_2e0924;
    }
    ctx->pc = 0x2E091Cu;
    {
        const bool branch_taken_0x2e091c = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x2E0920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E091Cu;
            // 0x2e0920: 0x161103  sra         $v0, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e091c) {
            ctx->pc = 0x2E092Cu;
            goto label_2e092c;
        }
    }
    ctx->pc = 0x2E0924u;
label_2e0924:
    // 0x2e0924: 0x26c2000f  addiu       $v0, $s6, 0xF
    ctx->pc = 0x2e0924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 15));
label_2e0928:
    // 0x2e0928: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2e0928u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2e092c:
    // 0x2e092c: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x2e092cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e0930:
    // 0x2e0930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e0934:
    // 0x2e0934: 0xc04e714  jal         func_139C50
label_2e0938:
    if (ctx->pc == 0x2E0938u) {
        ctx->pc = 0x2E0938u;
            // 0x2e0938: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E093Cu;
        goto label_2e093c;
    }
    ctx->pc = 0x2E0934u;
    SET_GPR_U32(ctx, 31, 0x2E093Cu);
    ctx->pc = 0x2E0938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0934u;
            // 0x2e0938: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (runtime->hasFunction(0x139C50u)) {
        auto targetFn = runtime->lookupFunction(0x139C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E093Cu; }
        if (ctx->pc != 0x2E093Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAllocTest__9mgCMemoryFi_0x139c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E093Cu; }
        if (ctx->pc != 0x2E093Cu) { return; }
    }
    ctx->pc = 0x2E093Cu;
label_2e093c:
    // 0x2e093c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e093cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e0940:
    // 0x2e0940: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_2e0944:
    if (ctx->pc == 0x2E0944u) {
        ctx->pc = 0x2E0944u;
            // 0x2e0944: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0948u;
        goto label_2e0948;
    }
    ctx->pc = 0x2E0940u;
    {
        const bool branch_taken_0x2e0940 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0940u;
            // 0x2e0944: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0940) {
            ctx->pc = 0x2E09A4u;
            goto label_2e09a4;
        }
    }
    ctx->pc = 0x2E0948u;
label_2e0948:
    // 0x2e0948: 0xc04e704  jal         func_139C10
label_2e094c:
    if (ctx->pc == 0x2E094Cu) {
        ctx->pc = 0x2E094Cu;
            // 0x2e094c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0950u;
        goto label_2e0950;
    }
    ctx->pc = 0x2E0948u;
    SET_GPR_U32(ctx, 31, 0x2E0950u);
    ctx->pc = 0x2E094Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0948u;
            // 0x2e094c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0950u; }
        if (ctx->pc != 0x2E0950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0950u; }
        if (ctx->pc != 0x2E0950u) { return; }
    }
    ctx->pc = 0x2E0950u;
label_2e0950:
    // 0x2e0950: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x2e0950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2e0954:
    // 0x2e0954: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2e0954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e0958:
    // 0x2e0958: 0xc049c18  jal         func_127060
label_2e095c:
    if (ctx->pc == 0x2E095Cu) {
        ctx->pc = 0x2E095Cu;
            // 0x2e095c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0960u;
        goto label_2e0960;
    }
    ctx->pc = 0x2E0958u;
    SET_GPR_U32(ctx, 31, 0x2E0960u);
    ctx->pc = 0x2E095Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0958u;
            // 0x2e095c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0960u; }
        if (ctx->pc != 0x2E0960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0960u; }
        if (ctx->pc != 0x2E0960u) { return; }
    }
    ctx->pc = 0x2E0960u;
label_2e0960:
    // 0x2e0960: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e0960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e0964:
    // 0x2e0964: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2e0964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2e0968:
    // 0x2e0968: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e0968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e096c:
    // 0x2e096c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e096cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e0970:
    // 0x2e0970: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x2e0970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e0974:
    // 0x2e0974: 0xc04b6a4  jal         func_12DA90
label_2e0978:
    if (ctx->pc == 0x2E0978u) {
        ctx->pc = 0x2E0978u;
            // 0x2e0978: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E097Cu;
        goto label_2e097c;
    }
    ctx->pc = 0x2E0974u;
    SET_GPR_U32(ctx, 31, 0x2E097Cu);
    ctx->pc = 0x2E0978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0974u;
            // 0x2e0978: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E097Cu; }
        if (ctx->pc != 0x2E097Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E097Cu; }
        if (ctx->pc != 0x2E097Cu) { return; }
    }
    ctx->pc = 0x2E097Cu;
label_2e097c:
    // 0x2e097c: 0x2a810000  slti        $at, $s4, 0x0
    ctx->pc = 0x2e097cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
label_2e0980:
    // 0x2e0980: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_2e0984:
    if (ctx->pc == 0x2E0984u) {
        ctx->pc = 0x2E0988u;
        goto label_2e0988;
    }
    ctx->pc = 0x2E0980u;
    {
        const bool branch_taken_0x2e0980 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0980) {
            ctx->pc = 0x2E09C0u;
            goto label_2e09c0;
        }
    }
    ctx->pc = 0x2E0988u;
label_2e0988:
    // 0x2e0988: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x2e0988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_2e098c:
    // 0x2e098c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e098cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e0990:
    // 0x2e0990: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e0990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e0994:
    // 0x2e0994: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x2e0994u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
label_2e0998:
    // 0x2e0998: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e0998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e099c:
    // 0x2e099c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e09a0:
    if (ctx->pc == 0x2E09A0u) {
        ctx->pc = 0x2E09A0u;
            // 0x2e09a0: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x2E09A4u;
        goto label_2e09a4;
    }
    ctx->pc = 0x2E099Cu;
    {
        const bool branch_taken_0x2e099c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E09A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E099Cu;
            // 0x2e09a0: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e099c) {
            ctx->pc = 0x2E09C0u;
            goto label_2e09c0;
        }
    }
    ctx->pc = 0x2E09A4u;
label_2e09a4:
    // 0x2e09a4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2e09a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e09a8:
    // 0x2e09a8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2e09a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e09ac:
    // 0x2e09ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e09acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e09b0:
    // 0x2e09b0: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2e09b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_2e09b4:
    // 0x2e09b4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2e09b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e09b8:
    // 0x2e09b8: 0x10000019  b           . + 4 + (0x19 << 2)
label_2e09bc:
    if (ctx->pc == 0x2E09BCu) {
        ctx->pc = 0x2E09BCu;
            // 0x2e09bc: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x2E09C0u;
        goto label_2e09c0;
    }
    ctx->pc = 0x2E09B8u;
    {
        const bool branch_taken_0x2e09b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E09BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E09B8u;
            // 0x2e09bc: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e09b8) {
            ctx->pc = 0x2E0A20u;
            goto label_2e0a20;
        }
    }
    ctx->pc = 0x2E09C0u;
label_2e09c0:
    // 0x2e09c0: 0x171103  sra         $v0, $s7, 4
    ctx->pc = 0x2e09c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 23), 4));
label_2e09c4:
    // 0x2e09c4: 0x6e10004  bgez        $s7, . + 4 + (0x4 << 2)
label_2e09c8:
    if (ctx->pc == 0x2E09C8u) {
        ctx->pc = 0x2E09C8u;
            // 0x2e09c8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2E09CCu;
        goto label_2e09cc;
    }
    ctx->pc = 0x2E09C4u;
    {
        const bool branch_taken_0x2e09c4 = (GPR_S32(ctx, 23) >= 0);
        ctx->pc = 0x2E09C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E09C4u;
            // 0x2e09c8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e09c4) {
            ctx->pc = 0x2E09D8u;
            goto label_2e09d8;
        }
    }
    ctx->pc = 0x2E09CCu;
label_2e09cc:
    // 0x2e09cc: 0x26e2000f  addiu       $v0, $s7, 0xF
    ctx->pc = 0x2e09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 15));
label_2e09d0:
    // 0x2e09d0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2e09d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2e09d4:
    // 0x2e09d4: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2e09d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e09d8:
    // 0x2e09d8: 0xc04e704  jal         func_139C10
label_2e09dc:
    if (ctx->pc == 0x2E09DCu) {
        ctx->pc = 0x2E09DCu;
            // 0x2e09dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E09E0u;
        goto label_2e09e0;
    }
    ctx->pc = 0x2E09D8u;
    SET_GPR_U32(ctx, 31, 0x2E09E0u);
    ctx->pc = 0x2E09DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E09D8u;
            // 0x2e09dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E09E0u; }
        if (ctx->pc != 0x2E09E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E09E0u; }
        if (ctx->pc != 0x2E09E0u) { return; }
    }
    ctx->pc = 0x2E09E0u;
label_2e09e0:
    // 0x2e09e0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2e09e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e09e4:
    // 0x2e09e4: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2e09e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_2e09e8:
    // 0x2e09e8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e09e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e09ec:
    // 0x2e09ec: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2e09ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e09f0:
    // 0x2e09f0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e09f4:
    if (ctx->pc == 0x2E09F4u) {
        ctx->pc = 0x2E09F8u;
        goto label_2e09f8;
    }
    ctx->pc = 0x2E09F0u;
    {
        const bool branch_taken_0x2e09f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e09f0) {
            ctx->pc = 0x2E0A04u;
            goto label_2e0a04;
        }
    }
    ctx->pc = 0x2E09F8u;
label_2e09f8:
    // 0x2e09f8: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2e09f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2e09fc:
    // 0x2e09fc: 0xc049c18  jal         func_127060
label_2e0a00:
    if (ctx->pc == 0x2E0A00u) {
        ctx->pc = 0x2E0A00u;
            // 0x2e0a00: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0A04u;
        goto label_2e0a04;
    }
    ctx->pc = 0x2E09FCu;
    SET_GPR_U32(ctx, 31, 0x2E0A04u);
    ctx->pc = 0x2E0A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E09FCu;
            // 0x2e0a00: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0A04u; }
        if (ctx->pc != 0x2E0A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0A04u; }
        if (ctx->pc != 0x2E0A04u) { return; }
    }
    ctx->pc = 0x2E0A04u;
label_2e0a04:
    // 0x2e0a04: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2e0a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e0a08:
    // 0x2e0a08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e0a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e0a0c:
    // 0x2e0a0c: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x2e0a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_2e0a10:
    // 0x2e0a10: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x2e0a10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_2e0a14:
    // 0x2e0a14: 0x8ea30180  lw          $v1, 0x180($s5)
    ctx->pc = 0x2e0a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 384)));
label_2e0a18:
    // 0x2e0a18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e0a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2e0a1c:
    // 0x2e0a1c: 0xaea30180  sw          $v1, 0x180($s5)
    ctx->pc = 0x2e0a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 384), GPR_U32(ctx, 3));
label_2e0a20:
    // 0x2e0a20: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e0a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2e0a24:
    // 0x2e0a24: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2e0a24u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2e0a28:
    // 0x2e0a28: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2e0a28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2e0a2c:
    // 0x2e0a2c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e0a2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e0a30:
    // 0x2e0a30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e0a30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e0a34:
    // 0x2e0a34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e0a34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e0a38:
    // 0x2e0a38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e0a38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e0a3c:
    // 0x2e0a3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e0a3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e0a40:
    // 0x2e0a40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e0a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e0a44:
    // 0x2e0a44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e0a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e0a48:
    // 0x2e0a48: 0x3e00008  jr          $ra
label_2e0a4c:
    if (ctx->pc == 0x2E0A4Cu) {
        ctx->pc = 0x2E0A4Cu;
            // 0x2e0a4c: 0x27bd0740  addiu       $sp, $sp, 0x740 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1856));
        ctx->pc = 0x2E0A50u;
        goto label_fallthrough_0x2e0a48;
    }
    ctx->pc = 0x2E0A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0A48u;
            // 0x2e0a4c: 0x27bd0740  addiu       $sp, $sp, 0x740 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1856));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e0a48:
    ctx->pc = 0x2E0A50u;
}
