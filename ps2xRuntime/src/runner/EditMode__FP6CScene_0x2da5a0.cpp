#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditMode__FP6CScene
// Address: 0x2da5a0 - 0x2dc37c
void EditMode__FP6CScene_0x2da5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditMode__FP6CScene_0x2da5a0");
#endif

    switch (ctx->pc) {
        case 0x2da5a0u: goto label_2da5a0;
        case 0x2da5a4u: goto label_2da5a4;
        case 0x2da5a8u: goto label_2da5a8;
        case 0x2da5acu: goto label_2da5ac;
        case 0x2da5b0u: goto label_2da5b0;
        case 0x2da5b4u: goto label_2da5b4;
        case 0x2da5b8u: goto label_2da5b8;
        case 0x2da5bcu: goto label_2da5bc;
        case 0x2da5c0u: goto label_2da5c0;
        case 0x2da5c4u: goto label_2da5c4;
        case 0x2da5c8u: goto label_2da5c8;
        case 0x2da5ccu: goto label_2da5cc;
        case 0x2da5d0u: goto label_2da5d0;
        case 0x2da5d4u: goto label_2da5d4;
        case 0x2da5d8u: goto label_2da5d8;
        case 0x2da5dcu: goto label_2da5dc;
        case 0x2da5e0u: goto label_2da5e0;
        case 0x2da5e4u: goto label_2da5e4;
        case 0x2da5e8u: goto label_2da5e8;
        case 0x2da5ecu: goto label_2da5ec;
        case 0x2da5f0u: goto label_2da5f0;
        case 0x2da5f4u: goto label_2da5f4;
        case 0x2da5f8u: goto label_2da5f8;
        case 0x2da5fcu: goto label_2da5fc;
        case 0x2da600u: goto label_2da600;
        case 0x2da604u: goto label_2da604;
        case 0x2da608u: goto label_2da608;
        case 0x2da60cu: goto label_2da60c;
        case 0x2da610u: goto label_2da610;
        case 0x2da614u: goto label_2da614;
        case 0x2da618u: goto label_2da618;
        case 0x2da61cu: goto label_2da61c;
        case 0x2da620u: goto label_2da620;
        case 0x2da624u: goto label_2da624;
        case 0x2da628u: goto label_2da628;
        case 0x2da62cu: goto label_2da62c;
        case 0x2da630u: goto label_2da630;
        case 0x2da634u: goto label_2da634;
        case 0x2da638u: goto label_2da638;
        case 0x2da63cu: goto label_2da63c;
        case 0x2da640u: goto label_2da640;
        case 0x2da644u: goto label_2da644;
        case 0x2da648u: goto label_2da648;
        case 0x2da64cu: goto label_2da64c;
        case 0x2da650u: goto label_2da650;
        case 0x2da654u: goto label_2da654;
        case 0x2da658u: goto label_2da658;
        case 0x2da65cu: goto label_2da65c;
        case 0x2da660u: goto label_2da660;
        case 0x2da664u: goto label_2da664;
        case 0x2da668u: goto label_2da668;
        case 0x2da66cu: goto label_2da66c;
        case 0x2da670u: goto label_2da670;
        case 0x2da674u: goto label_2da674;
        case 0x2da678u: goto label_2da678;
        case 0x2da67cu: goto label_2da67c;
        case 0x2da680u: goto label_2da680;
        case 0x2da684u: goto label_2da684;
        case 0x2da688u: goto label_2da688;
        case 0x2da68cu: goto label_2da68c;
        case 0x2da690u: goto label_2da690;
        case 0x2da694u: goto label_2da694;
        case 0x2da698u: goto label_2da698;
        case 0x2da69cu: goto label_2da69c;
        case 0x2da6a0u: goto label_2da6a0;
        case 0x2da6a4u: goto label_2da6a4;
        case 0x2da6a8u: goto label_2da6a8;
        case 0x2da6acu: goto label_2da6ac;
        case 0x2da6b0u: goto label_2da6b0;
        case 0x2da6b4u: goto label_2da6b4;
        case 0x2da6b8u: goto label_2da6b8;
        case 0x2da6bcu: goto label_2da6bc;
        case 0x2da6c0u: goto label_2da6c0;
        case 0x2da6c4u: goto label_2da6c4;
        case 0x2da6c8u: goto label_2da6c8;
        case 0x2da6ccu: goto label_2da6cc;
        case 0x2da6d0u: goto label_2da6d0;
        case 0x2da6d4u: goto label_2da6d4;
        case 0x2da6d8u: goto label_2da6d8;
        case 0x2da6dcu: goto label_2da6dc;
        case 0x2da6e0u: goto label_2da6e0;
        case 0x2da6e4u: goto label_2da6e4;
        case 0x2da6e8u: goto label_2da6e8;
        case 0x2da6ecu: goto label_2da6ec;
        case 0x2da6f0u: goto label_2da6f0;
        case 0x2da6f4u: goto label_2da6f4;
        case 0x2da6f8u: goto label_2da6f8;
        case 0x2da6fcu: goto label_2da6fc;
        case 0x2da700u: goto label_2da700;
        case 0x2da704u: goto label_2da704;
        case 0x2da708u: goto label_2da708;
        case 0x2da70cu: goto label_2da70c;
        case 0x2da710u: goto label_2da710;
        case 0x2da714u: goto label_2da714;
        case 0x2da718u: goto label_2da718;
        case 0x2da71cu: goto label_2da71c;
        case 0x2da720u: goto label_2da720;
        case 0x2da724u: goto label_2da724;
        case 0x2da728u: goto label_2da728;
        case 0x2da72cu: goto label_2da72c;
        case 0x2da730u: goto label_2da730;
        case 0x2da734u: goto label_2da734;
        case 0x2da738u: goto label_2da738;
        case 0x2da73cu: goto label_2da73c;
        case 0x2da740u: goto label_2da740;
        case 0x2da744u: goto label_2da744;
        case 0x2da748u: goto label_2da748;
        case 0x2da74cu: goto label_2da74c;
        case 0x2da750u: goto label_2da750;
        case 0x2da754u: goto label_2da754;
        case 0x2da758u: goto label_2da758;
        case 0x2da75cu: goto label_2da75c;
        case 0x2da760u: goto label_2da760;
        case 0x2da764u: goto label_2da764;
        case 0x2da768u: goto label_2da768;
        case 0x2da76cu: goto label_2da76c;
        case 0x2da770u: goto label_2da770;
        case 0x2da774u: goto label_2da774;
        case 0x2da778u: goto label_2da778;
        case 0x2da77cu: goto label_2da77c;
        case 0x2da780u: goto label_2da780;
        case 0x2da784u: goto label_2da784;
        case 0x2da788u: goto label_2da788;
        case 0x2da78cu: goto label_2da78c;
        case 0x2da790u: goto label_2da790;
        case 0x2da794u: goto label_2da794;
        case 0x2da798u: goto label_2da798;
        case 0x2da79cu: goto label_2da79c;
        case 0x2da7a0u: goto label_2da7a0;
        case 0x2da7a4u: goto label_2da7a4;
        case 0x2da7a8u: goto label_2da7a8;
        case 0x2da7acu: goto label_2da7ac;
        case 0x2da7b0u: goto label_2da7b0;
        case 0x2da7b4u: goto label_2da7b4;
        case 0x2da7b8u: goto label_2da7b8;
        case 0x2da7bcu: goto label_2da7bc;
        case 0x2da7c0u: goto label_2da7c0;
        case 0x2da7c4u: goto label_2da7c4;
        case 0x2da7c8u: goto label_2da7c8;
        case 0x2da7ccu: goto label_2da7cc;
        case 0x2da7d0u: goto label_2da7d0;
        case 0x2da7d4u: goto label_2da7d4;
        case 0x2da7d8u: goto label_2da7d8;
        case 0x2da7dcu: goto label_2da7dc;
        case 0x2da7e0u: goto label_2da7e0;
        case 0x2da7e4u: goto label_2da7e4;
        case 0x2da7e8u: goto label_2da7e8;
        case 0x2da7ecu: goto label_2da7ec;
        case 0x2da7f0u: goto label_2da7f0;
        case 0x2da7f4u: goto label_2da7f4;
        case 0x2da7f8u: goto label_2da7f8;
        case 0x2da7fcu: goto label_2da7fc;
        case 0x2da800u: goto label_2da800;
        case 0x2da804u: goto label_2da804;
        case 0x2da808u: goto label_2da808;
        case 0x2da80cu: goto label_2da80c;
        case 0x2da810u: goto label_2da810;
        case 0x2da814u: goto label_2da814;
        case 0x2da818u: goto label_2da818;
        case 0x2da81cu: goto label_2da81c;
        case 0x2da820u: goto label_2da820;
        case 0x2da824u: goto label_2da824;
        case 0x2da828u: goto label_2da828;
        case 0x2da82cu: goto label_2da82c;
        case 0x2da830u: goto label_2da830;
        case 0x2da834u: goto label_2da834;
        case 0x2da838u: goto label_2da838;
        case 0x2da83cu: goto label_2da83c;
        case 0x2da840u: goto label_2da840;
        case 0x2da844u: goto label_2da844;
        case 0x2da848u: goto label_2da848;
        case 0x2da84cu: goto label_2da84c;
        case 0x2da850u: goto label_2da850;
        case 0x2da854u: goto label_2da854;
        case 0x2da858u: goto label_2da858;
        case 0x2da85cu: goto label_2da85c;
        case 0x2da860u: goto label_2da860;
        case 0x2da864u: goto label_2da864;
        case 0x2da868u: goto label_2da868;
        case 0x2da86cu: goto label_2da86c;
        case 0x2da870u: goto label_2da870;
        case 0x2da874u: goto label_2da874;
        case 0x2da878u: goto label_2da878;
        case 0x2da87cu: goto label_2da87c;
        case 0x2da880u: goto label_2da880;
        case 0x2da884u: goto label_2da884;
        case 0x2da888u: goto label_2da888;
        case 0x2da88cu: goto label_2da88c;
        case 0x2da890u: goto label_2da890;
        case 0x2da894u: goto label_2da894;
        case 0x2da898u: goto label_2da898;
        case 0x2da89cu: goto label_2da89c;
        case 0x2da8a0u: goto label_2da8a0;
        case 0x2da8a4u: goto label_2da8a4;
        case 0x2da8a8u: goto label_2da8a8;
        case 0x2da8acu: goto label_2da8ac;
        case 0x2da8b0u: goto label_2da8b0;
        case 0x2da8b4u: goto label_2da8b4;
        case 0x2da8b8u: goto label_2da8b8;
        case 0x2da8bcu: goto label_2da8bc;
        case 0x2da8c0u: goto label_2da8c0;
        case 0x2da8c4u: goto label_2da8c4;
        case 0x2da8c8u: goto label_2da8c8;
        case 0x2da8ccu: goto label_2da8cc;
        case 0x2da8d0u: goto label_2da8d0;
        case 0x2da8d4u: goto label_2da8d4;
        case 0x2da8d8u: goto label_2da8d8;
        case 0x2da8dcu: goto label_2da8dc;
        case 0x2da8e0u: goto label_2da8e0;
        case 0x2da8e4u: goto label_2da8e4;
        case 0x2da8e8u: goto label_2da8e8;
        case 0x2da8ecu: goto label_2da8ec;
        case 0x2da8f0u: goto label_2da8f0;
        case 0x2da8f4u: goto label_2da8f4;
        case 0x2da8f8u: goto label_2da8f8;
        case 0x2da8fcu: goto label_2da8fc;
        case 0x2da900u: goto label_2da900;
        case 0x2da904u: goto label_2da904;
        case 0x2da908u: goto label_2da908;
        case 0x2da90cu: goto label_2da90c;
        case 0x2da910u: goto label_2da910;
        case 0x2da914u: goto label_2da914;
        case 0x2da918u: goto label_2da918;
        case 0x2da91cu: goto label_2da91c;
        case 0x2da920u: goto label_2da920;
        case 0x2da924u: goto label_2da924;
        case 0x2da928u: goto label_2da928;
        case 0x2da92cu: goto label_2da92c;
        case 0x2da930u: goto label_2da930;
        case 0x2da934u: goto label_2da934;
        case 0x2da938u: goto label_2da938;
        case 0x2da93cu: goto label_2da93c;
        case 0x2da940u: goto label_2da940;
        case 0x2da944u: goto label_2da944;
        case 0x2da948u: goto label_2da948;
        case 0x2da94cu: goto label_2da94c;
        case 0x2da950u: goto label_2da950;
        case 0x2da954u: goto label_2da954;
        case 0x2da958u: goto label_2da958;
        case 0x2da95cu: goto label_2da95c;
        case 0x2da960u: goto label_2da960;
        case 0x2da964u: goto label_2da964;
        case 0x2da968u: goto label_2da968;
        case 0x2da96cu: goto label_2da96c;
        case 0x2da970u: goto label_2da970;
        case 0x2da974u: goto label_2da974;
        case 0x2da978u: goto label_2da978;
        case 0x2da97cu: goto label_2da97c;
        case 0x2da980u: goto label_2da980;
        case 0x2da984u: goto label_2da984;
        case 0x2da988u: goto label_2da988;
        case 0x2da98cu: goto label_2da98c;
        case 0x2da990u: goto label_2da990;
        case 0x2da994u: goto label_2da994;
        case 0x2da998u: goto label_2da998;
        case 0x2da99cu: goto label_2da99c;
        case 0x2da9a0u: goto label_2da9a0;
        case 0x2da9a4u: goto label_2da9a4;
        case 0x2da9a8u: goto label_2da9a8;
        case 0x2da9acu: goto label_2da9ac;
        case 0x2da9b0u: goto label_2da9b0;
        case 0x2da9b4u: goto label_2da9b4;
        case 0x2da9b8u: goto label_2da9b8;
        case 0x2da9bcu: goto label_2da9bc;
        case 0x2da9c0u: goto label_2da9c0;
        case 0x2da9c4u: goto label_2da9c4;
        case 0x2da9c8u: goto label_2da9c8;
        case 0x2da9ccu: goto label_2da9cc;
        case 0x2da9d0u: goto label_2da9d0;
        case 0x2da9d4u: goto label_2da9d4;
        case 0x2da9d8u: goto label_2da9d8;
        case 0x2da9dcu: goto label_2da9dc;
        case 0x2da9e0u: goto label_2da9e0;
        case 0x2da9e4u: goto label_2da9e4;
        case 0x2da9e8u: goto label_2da9e8;
        case 0x2da9ecu: goto label_2da9ec;
        case 0x2da9f0u: goto label_2da9f0;
        case 0x2da9f4u: goto label_2da9f4;
        case 0x2da9f8u: goto label_2da9f8;
        case 0x2da9fcu: goto label_2da9fc;
        case 0x2daa00u: goto label_2daa00;
        case 0x2daa04u: goto label_2daa04;
        case 0x2daa08u: goto label_2daa08;
        case 0x2daa0cu: goto label_2daa0c;
        case 0x2daa10u: goto label_2daa10;
        case 0x2daa14u: goto label_2daa14;
        case 0x2daa18u: goto label_2daa18;
        case 0x2daa1cu: goto label_2daa1c;
        case 0x2daa20u: goto label_2daa20;
        case 0x2daa24u: goto label_2daa24;
        case 0x2daa28u: goto label_2daa28;
        case 0x2daa2cu: goto label_2daa2c;
        case 0x2daa30u: goto label_2daa30;
        case 0x2daa34u: goto label_2daa34;
        case 0x2daa38u: goto label_2daa38;
        case 0x2daa3cu: goto label_2daa3c;
        case 0x2daa40u: goto label_2daa40;
        case 0x2daa44u: goto label_2daa44;
        case 0x2daa48u: goto label_2daa48;
        case 0x2daa4cu: goto label_2daa4c;
        case 0x2daa50u: goto label_2daa50;
        case 0x2daa54u: goto label_2daa54;
        case 0x2daa58u: goto label_2daa58;
        case 0x2daa5cu: goto label_2daa5c;
        case 0x2daa60u: goto label_2daa60;
        case 0x2daa64u: goto label_2daa64;
        case 0x2daa68u: goto label_2daa68;
        case 0x2daa6cu: goto label_2daa6c;
        case 0x2daa70u: goto label_2daa70;
        case 0x2daa74u: goto label_2daa74;
        case 0x2daa78u: goto label_2daa78;
        case 0x2daa7cu: goto label_2daa7c;
        case 0x2daa80u: goto label_2daa80;
        case 0x2daa84u: goto label_2daa84;
        case 0x2daa88u: goto label_2daa88;
        case 0x2daa8cu: goto label_2daa8c;
        case 0x2daa90u: goto label_2daa90;
        case 0x2daa94u: goto label_2daa94;
        case 0x2daa98u: goto label_2daa98;
        case 0x2daa9cu: goto label_2daa9c;
        case 0x2daaa0u: goto label_2daaa0;
        case 0x2daaa4u: goto label_2daaa4;
        case 0x2daaa8u: goto label_2daaa8;
        case 0x2daaacu: goto label_2daaac;
        case 0x2daab0u: goto label_2daab0;
        case 0x2daab4u: goto label_2daab4;
        case 0x2daab8u: goto label_2daab8;
        case 0x2daabcu: goto label_2daabc;
        case 0x2daac0u: goto label_2daac0;
        case 0x2daac4u: goto label_2daac4;
        case 0x2daac8u: goto label_2daac8;
        case 0x2daaccu: goto label_2daacc;
        case 0x2daad0u: goto label_2daad0;
        case 0x2daad4u: goto label_2daad4;
        case 0x2daad8u: goto label_2daad8;
        case 0x2daadcu: goto label_2daadc;
        case 0x2daae0u: goto label_2daae0;
        case 0x2daae4u: goto label_2daae4;
        case 0x2daae8u: goto label_2daae8;
        case 0x2daaecu: goto label_2daaec;
        case 0x2daaf0u: goto label_2daaf0;
        case 0x2daaf4u: goto label_2daaf4;
        case 0x2daaf8u: goto label_2daaf8;
        case 0x2daafcu: goto label_2daafc;
        case 0x2dab00u: goto label_2dab00;
        case 0x2dab04u: goto label_2dab04;
        case 0x2dab08u: goto label_2dab08;
        case 0x2dab0cu: goto label_2dab0c;
        case 0x2dab10u: goto label_2dab10;
        case 0x2dab14u: goto label_2dab14;
        case 0x2dab18u: goto label_2dab18;
        case 0x2dab1cu: goto label_2dab1c;
        case 0x2dab20u: goto label_2dab20;
        case 0x2dab24u: goto label_2dab24;
        case 0x2dab28u: goto label_2dab28;
        case 0x2dab2cu: goto label_2dab2c;
        case 0x2dab30u: goto label_2dab30;
        case 0x2dab34u: goto label_2dab34;
        case 0x2dab38u: goto label_2dab38;
        case 0x2dab3cu: goto label_2dab3c;
        case 0x2dab40u: goto label_2dab40;
        case 0x2dab44u: goto label_2dab44;
        case 0x2dab48u: goto label_2dab48;
        case 0x2dab4cu: goto label_2dab4c;
        case 0x2dab50u: goto label_2dab50;
        case 0x2dab54u: goto label_2dab54;
        case 0x2dab58u: goto label_2dab58;
        case 0x2dab5cu: goto label_2dab5c;
        case 0x2dab60u: goto label_2dab60;
        case 0x2dab64u: goto label_2dab64;
        case 0x2dab68u: goto label_2dab68;
        case 0x2dab6cu: goto label_2dab6c;
        case 0x2dab70u: goto label_2dab70;
        case 0x2dab74u: goto label_2dab74;
        case 0x2dab78u: goto label_2dab78;
        case 0x2dab7cu: goto label_2dab7c;
        case 0x2dab80u: goto label_2dab80;
        case 0x2dab84u: goto label_2dab84;
        case 0x2dab88u: goto label_2dab88;
        case 0x2dab8cu: goto label_2dab8c;
        case 0x2dab90u: goto label_2dab90;
        case 0x2dab94u: goto label_2dab94;
        case 0x2dab98u: goto label_2dab98;
        case 0x2dab9cu: goto label_2dab9c;
        case 0x2daba0u: goto label_2daba0;
        case 0x2daba4u: goto label_2daba4;
        case 0x2daba8u: goto label_2daba8;
        case 0x2dabacu: goto label_2dabac;
        case 0x2dabb0u: goto label_2dabb0;
        case 0x2dabb4u: goto label_2dabb4;
        case 0x2dabb8u: goto label_2dabb8;
        case 0x2dabbcu: goto label_2dabbc;
        case 0x2dabc0u: goto label_2dabc0;
        case 0x2dabc4u: goto label_2dabc4;
        case 0x2dabc8u: goto label_2dabc8;
        case 0x2dabccu: goto label_2dabcc;
        case 0x2dabd0u: goto label_2dabd0;
        case 0x2dabd4u: goto label_2dabd4;
        case 0x2dabd8u: goto label_2dabd8;
        case 0x2dabdcu: goto label_2dabdc;
        case 0x2dabe0u: goto label_2dabe0;
        case 0x2dabe4u: goto label_2dabe4;
        case 0x2dabe8u: goto label_2dabe8;
        case 0x2dabecu: goto label_2dabec;
        case 0x2dabf0u: goto label_2dabf0;
        case 0x2dabf4u: goto label_2dabf4;
        case 0x2dabf8u: goto label_2dabf8;
        case 0x2dabfcu: goto label_2dabfc;
        case 0x2dac00u: goto label_2dac00;
        case 0x2dac04u: goto label_2dac04;
        case 0x2dac08u: goto label_2dac08;
        case 0x2dac0cu: goto label_2dac0c;
        case 0x2dac10u: goto label_2dac10;
        case 0x2dac14u: goto label_2dac14;
        case 0x2dac18u: goto label_2dac18;
        case 0x2dac1cu: goto label_2dac1c;
        case 0x2dac20u: goto label_2dac20;
        case 0x2dac24u: goto label_2dac24;
        case 0x2dac28u: goto label_2dac28;
        case 0x2dac2cu: goto label_2dac2c;
        case 0x2dac30u: goto label_2dac30;
        case 0x2dac34u: goto label_2dac34;
        case 0x2dac38u: goto label_2dac38;
        case 0x2dac3cu: goto label_2dac3c;
        case 0x2dac40u: goto label_2dac40;
        case 0x2dac44u: goto label_2dac44;
        case 0x2dac48u: goto label_2dac48;
        case 0x2dac4cu: goto label_2dac4c;
        case 0x2dac50u: goto label_2dac50;
        case 0x2dac54u: goto label_2dac54;
        case 0x2dac58u: goto label_2dac58;
        case 0x2dac5cu: goto label_2dac5c;
        case 0x2dac60u: goto label_2dac60;
        case 0x2dac64u: goto label_2dac64;
        case 0x2dac68u: goto label_2dac68;
        case 0x2dac6cu: goto label_2dac6c;
        case 0x2dac70u: goto label_2dac70;
        case 0x2dac74u: goto label_2dac74;
        case 0x2dac78u: goto label_2dac78;
        case 0x2dac7cu: goto label_2dac7c;
        case 0x2dac80u: goto label_2dac80;
        case 0x2dac84u: goto label_2dac84;
        case 0x2dac88u: goto label_2dac88;
        case 0x2dac8cu: goto label_2dac8c;
        case 0x2dac90u: goto label_2dac90;
        case 0x2dac94u: goto label_2dac94;
        case 0x2dac98u: goto label_2dac98;
        case 0x2dac9cu: goto label_2dac9c;
        case 0x2daca0u: goto label_2daca0;
        case 0x2daca4u: goto label_2daca4;
        case 0x2daca8u: goto label_2daca8;
        case 0x2dacacu: goto label_2dacac;
        case 0x2dacb0u: goto label_2dacb0;
        case 0x2dacb4u: goto label_2dacb4;
        case 0x2dacb8u: goto label_2dacb8;
        case 0x2dacbcu: goto label_2dacbc;
        case 0x2dacc0u: goto label_2dacc0;
        case 0x2dacc4u: goto label_2dacc4;
        case 0x2dacc8u: goto label_2dacc8;
        case 0x2dacccu: goto label_2daccc;
        case 0x2dacd0u: goto label_2dacd0;
        case 0x2dacd4u: goto label_2dacd4;
        case 0x2dacd8u: goto label_2dacd8;
        case 0x2dacdcu: goto label_2dacdc;
        case 0x2dace0u: goto label_2dace0;
        case 0x2dace4u: goto label_2dace4;
        case 0x2dace8u: goto label_2dace8;
        case 0x2dacecu: goto label_2dacec;
        case 0x2dacf0u: goto label_2dacf0;
        case 0x2dacf4u: goto label_2dacf4;
        case 0x2dacf8u: goto label_2dacf8;
        case 0x2dacfcu: goto label_2dacfc;
        case 0x2dad00u: goto label_2dad00;
        case 0x2dad04u: goto label_2dad04;
        case 0x2dad08u: goto label_2dad08;
        case 0x2dad0cu: goto label_2dad0c;
        case 0x2dad10u: goto label_2dad10;
        case 0x2dad14u: goto label_2dad14;
        case 0x2dad18u: goto label_2dad18;
        case 0x2dad1cu: goto label_2dad1c;
        case 0x2dad20u: goto label_2dad20;
        case 0x2dad24u: goto label_2dad24;
        case 0x2dad28u: goto label_2dad28;
        case 0x2dad2cu: goto label_2dad2c;
        case 0x2dad30u: goto label_2dad30;
        case 0x2dad34u: goto label_2dad34;
        case 0x2dad38u: goto label_2dad38;
        case 0x2dad3cu: goto label_2dad3c;
        case 0x2dad40u: goto label_2dad40;
        case 0x2dad44u: goto label_2dad44;
        case 0x2dad48u: goto label_2dad48;
        case 0x2dad4cu: goto label_2dad4c;
        case 0x2dad50u: goto label_2dad50;
        case 0x2dad54u: goto label_2dad54;
        case 0x2dad58u: goto label_2dad58;
        case 0x2dad5cu: goto label_2dad5c;
        case 0x2dad60u: goto label_2dad60;
        case 0x2dad64u: goto label_2dad64;
        case 0x2dad68u: goto label_2dad68;
        case 0x2dad6cu: goto label_2dad6c;
        case 0x2dad70u: goto label_2dad70;
        case 0x2dad74u: goto label_2dad74;
        case 0x2dad78u: goto label_2dad78;
        case 0x2dad7cu: goto label_2dad7c;
        case 0x2dad80u: goto label_2dad80;
        case 0x2dad84u: goto label_2dad84;
        case 0x2dad88u: goto label_2dad88;
        case 0x2dad8cu: goto label_2dad8c;
        case 0x2dad90u: goto label_2dad90;
        case 0x2dad94u: goto label_2dad94;
        case 0x2dad98u: goto label_2dad98;
        case 0x2dad9cu: goto label_2dad9c;
        case 0x2dada0u: goto label_2dada0;
        case 0x2dada4u: goto label_2dada4;
        case 0x2dada8u: goto label_2dada8;
        case 0x2dadacu: goto label_2dadac;
        case 0x2dadb0u: goto label_2dadb0;
        case 0x2dadb4u: goto label_2dadb4;
        case 0x2dadb8u: goto label_2dadb8;
        case 0x2dadbcu: goto label_2dadbc;
        case 0x2dadc0u: goto label_2dadc0;
        case 0x2dadc4u: goto label_2dadc4;
        case 0x2dadc8u: goto label_2dadc8;
        case 0x2dadccu: goto label_2dadcc;
        case 0x2dadd0u: goto label_2dadd0;
        case 0x2dadd4u: goto label_2dadd4;
        case 0x2dadd8u: goto label_2dadd8;
        case 0x2daddcu: goto label_2daddc;
        case 0x2dade0u: goto label_2dade0;
        case 0x2dade4u: goto label_2dade4;
        case 0x2dade8u: goto label_2dade8;
        case 0x2dadecu: goto label_2dadec;
        case 0x2dadf0u: goto label_2dadf0;
        case 0x2dadf4u: goto label_2dadf4;
        case 0x2dadf8u: goto label_2dadf8;
        case 0x2dadfcu: goto label_2dadfc;
        case 0x2dae00u: goto label_2dae00;
        case 0x2dae04u: goto label_2dae04;
        case 0x2dae08u: goto label_2dae08;
        case 0x2dae0cu: goto label_2dae0c;
        case 0x2dae10u: goto label_2dae10;
        case 0x2dae14u: goto label_2dae14;
        case 0x2dae18u: goto label_2dae18;
        case 0x2dae1cu: goto label_2dae1c;
        case 0x2dae20u: goto label_2dae20;
        case 0x2dae24u: goto label_2dae24;
        case 0x2dae28u: goto label_2dae28;
        case 0x2dae2cu: goto label_2dae2c;
        case 0x2dae30u: goto label_2dae30;
        case 0x2dae34u: goto label_2dae34;
        case 0x2dae38u: goto label_2dae38;
        case 0x2dae3cu: goto label_2dae3c;
        case 0x2dae40u: goto label_2dae40;
        case 0x2dae44u: goto label_2dae44;
        case 0x2dae48u: goto label_2dae48;
        case 0x2dae4cu: goto label_2dae4c;
        case 0x2dae50u: goto label_2dae50;
        case 0x2dae54u: goto label_2dae54;
        case 0x2dae58u: goto label_2dae58;
        case 0x2dae5cu: goto label_2dae5c;
        case 0x2dae60u: goto label_2dae60;
        case 0x2dae64u: goto label_2dae64;
        case 0x2dae68u: goto label_2dae68;
        case 0x2dae6cu: goto label_2dae6c;
        case 0x2dae70u: goto label_2dae70;
        case 0x2dae74u: goto label_2dae74;
        case 0x2dae78u: goto label_2dae78;
        case 0x2dae7cu: goto label_2dae7c;
        case 0x2dae80u: goto label_2dae80;
        case 0x2dae84u: goto label_2dae84;
        case 0x2dae88u: goto label_2dae88;
        case 0x2dae8cu: goto label_2dae8c;
        case 0x2dae90u: goto label_2dae90;
        case 0x2dae94u: goto label_2dae94;
        case 0x2dae98u: goto label_2dae98;
        case 0x2dae9cu: goto label_2dae9c;
        case 0x2daea0u: goto label_2daea0;
        case 0x2daea4u: goto label_2daea4;
        case 0x2daea8u: goto label_2daea8;
        case 0x2daeacu: goto label_2daeac;
        case 0x2daeb0u: goto label_2daeb0;
        case 0x2daeb4u: goto label_2daeb4;
        case 0x2daeb8u: goto label_2daeb8;
        case 0x2daebcu: goto label_2daebc;
        case 0x2daec0u: goto label_2daec0;
        case 0x2daec4u: goto label_2daec4;
        case 0x2daec8u: goto label_2daec8;
        case 0x2daeccu: goto label_2daecc;
        case 0x2daed0u: goto label_2daed0;
        case 0x2daed4u: goto label_2daed4;
        case 0x2daed8u: goto label_2daed8;
        case 0x2daedcu: goto label_2daedc;
        case 0x2daee0u: goto label_2daee0;
        case 0x2daee4u: goto label_2daee4;
        case 0x2daee8u: goto label_2daee8;
        case 0x2daeecu: goto label_2daeec;
        case 0x2daef0u: goto label_2daef0;
        case 0x2daef4u: goto label_2daef4;
        case 0x2daef8u: goto label_2daef8;
        case 0x2daefcu: goto label_2daefc;
        case 0x2daf00u: goto label_2daf00;
        case 0x2daf04u: goto label_2daf04;
        case 0x2daf08u: goto label_2daf08;
        case 0x2daf0cu: goto label_2daf0c;
        case 0x2daf10u: goto label_2daf10;
        case 0x2daf14u: goto label_2daf14;
        case 0x2daf18u: goto label_2daf18;
        case 0x2daf1cu: goto label_2daf1c;
        case 0x2daf20u: goto label_2daf20;
        case 0x2daf24u: goto label_2daf24;
        case 0x2daf28u: goto label_2daf28;
        case 0x2daf2cu: goto label_2daf2c;
        case 0x2daf30u: goto label_2daf30;
        case 0x2daf34u: goto label_2daf34;
        case 0x2daf38u: goto label_2daf38;
        case 0x2daf3cu: goto label_2daf3c;
        case 0x2daf40u: goto label_2daf40;
        case 0x2daf44u: goto label_2daf44;
        case 0x2daf48u: goto label_2daf48;
        case 0x2daf4cu: goto label_2daf4c;
        case 0x2daf50u: goto label_2daf50;
        case 0x2daf54u: goto label_2daf54;
        case 0x2daf58u: goto label_2daf58;
        case 0x2daf5cu: goto label_2daf5c;
        case 0x2daf60u: goto label_2daf60;
        case 0x2daf64u: goto label_2daf64;
        case 0x2daf68u: goto label_2daf68;
        case 0x2daf6cu: goto label_2daf6c;
        case 0x2daf70u: goto label_2daf70;
        case 0x2daf74u: goto label_2daf74;
        case 0x2daf78u: goto label_2daf78;
        case 0x2daf7cu: goto label_2daf7c;
        case 0x2daf80u: goto label_2daf80;
        case 0x2daf84u: goto label_2daf84;
        case 0x2daf88u: goto label_2daf88;
        case 0x2daf8cu: goto label_2daf8c;
        case 0x2daf90u: goto label_2daf90;
        case 0x2daf94u: goto label_2daf94;
        case 0x2daf98u: goto label_2daf98;
        case 0x2daf9cu: goto label_2daf9c;
        case 0x2dafa0u: goto label_2dafa0;
        case 0x2dafa4u: goto label_2dafa4;
        case 0x2dafa8u: goto label_2dafa8;
        case 0x2dafacu: goto label_2dafac;
        case 0x2dafb0u: goto label_2dafb0;
        case 0x2dafb4u: goto label_2dafb4;
        case 0x2dafb8u: goto label_2dafb8;
        case 0x2dafbcu: goto label_2dafbc;
        case 0x2dafc0u: goto label_2dafc0;
        case 0x2dafc4u: goto label_2dafc4;
        case 0x2dafc8u: goto label_2dafc8;
        case 0x2dafccu: goto label_2dafcc;
        case 0x2dafd0u: goto label_2dafd0;
        case 0x2dafd4u: goto label_2dafd4;
        case 0x2dafd8u: goto label_2dafd8;
        case 0x2dafdcu: goto label_2dafdc;
        case 0x2dafe0u: goto label_2dafe0;
        case 0x2dafe4u: goto label_2dafe4;
        case 0x2dafe8u: goto label_2dafe8;
        case 0x2dafecu: goto label_2dafec;
        case 0x2daff0u: goto label_2daff0;
        case 0x2daff4u: goto label_2daff4;
        case 0x2daff8u: goto label_2daff8;
        case 0x2daffcu: goto label_2daffc;
        case 0x2db000u: goto label_2db000;
        case 0x2db004u: goto label_2db004;
        case 0x2db008u: goto label_2db008;
        case 0x2db00cu: goto label_2db00c;
        case 0x2db010u: goto label_2db010;
        case 0x2db014u: goto label_2db014;
        case 0x2db018u: goto label_2db018;
        case 0x2db01cu: goto label_2db01c;
        case 0x2db020u: goto label_2db020;
        case 0x2db024u: goto label_2db024;
        case 0x2db028u: goto label_2db028;
        case 0x2db02cu: goto label_2db02c;
        case 0x2db030u: goto label_2db030;
        case 0x2db034u: goto label_2db034;
        case 0x2db038u: goto label_2db038;
        case 0x2db03cu: goto label_2db03c;
        case 0x2db040u: goto label_2db040;
        case 0x2db044u: goto label_2db044;
        case 0x2db048u: goto label_2db048;
        case 0x2db04cu: goto label_2db04c;
        case 0x2db050u: goto label_2db050;
        case 0x2db054u: goto label_2db054;
        case 0x2db058u: goto label_2db058;
        case 0x2db05cu: goto label_2db05c;
        case 0x2db060u: goto label_2db060;
        case 0x2db064u: goto label_2db064;
        case 0x2db068u: goto label_2db068;
        case 0x2db06cu: goto label_2db06c;
        case 0x2db070u: goto label_2db070;
        case 0x2db074u: goto label_2db074;
        case 0x2db078u: goto label_2db078;
        case 0x2db07cu: goto label_2db07c;
        case 0x2db080u: goto label_2db080;
        case 0x2db084u: goto label_2db084;
        case 0x2db088u: goto label_2db088;
        case 0x2db08cu: goto label_2db08c;
        case 0x2db090u: goto label_2db090;
        case 0x2db094u: goto label_2db094;
        case 0x2db098u: goto label_2db098;
        case 0x2db09cu: goto label_2db09c;
        case 0x2db0a0u: goto label_2db0a0;
        case 0x2db0a4u: goto label_2db0a4;
        case 0x2db0a8u: goto label_2db0a8;
        case 0x2db0acu: goto label_2db0ac;
        case 0x2db0b0u: goto label_2db0b0;
        case 0x2db0b4u: goto label_2db0b4;
        case 0x2db0b8u: goto label_2db0b8;
        case 0x2db0bcu: goto label_2db0bc;
        case 0x2db0c0u: goto label_2db0c0;
        case 0x2db0c4u: goto label_2db0c4;
        case 0x2db0c8u: goto label_2db0c8;
        case 0x2db0ccu: goto label_2db0cc;
        case 0x2db0d0u: goto label_2db0d0;
        case 0x2db0d4u: goto label_2db0d4;
        case 0x2db0d8u: goto label_2db0d8;
        case 0x2db0dcu: goto label_2db0dc;
        case 0x2db0e0u: goto label_2db0e0;
        case 0x2db0e4u: goto label_2db0e4;
        case 0x2db0e8u: goto label_2db0e8;
        case 0x2db0ecu: goto label_2db0ec;
        case 0x2db0f0u: goto label_2db0f0;
        case 0x2db0f4u: goto label_2db0f4;
        case 0x2db0f8u: goto label_2db0f8;
        case 0x2db0fcu: goto label_2db0fc;
        case 0x2db100u: goto label_2db100;
        case 0x2db104u: goto label_2db104;
        case 0x2db108u: goto label_2db108;
        case 0x2db10cu: goto label_2db10c;
        case 0x2db110u: goto label_2db110;
        case 0x2db114u: goto label_2db114;
        case 0x2db118u: goto label_2db118;
        case 0x2db11cu: goto label_2db11c;
        case 0x2db120u: goto label_2db120;
        case 0x2db124u: goto label_2db124;
        case 0x2db128u: goto label_2db128;
        case 0x2db12cu: goto label_2db12c;
        case 0x2db130u: goto label_2db130;
        case 0x2db134u: goto label_2db134;
        case 0x2db138u: goto label_2db138;
        case 0x2db13cu: goto label_2db13c;
        case 0x2db140u: goto label_2db140;
        case 0x2db144u: goto label_2db144;
        case 0x2db148u: goto label_2db148;
        case 0x2db14cu: goto label_2db14c;
        case 0x2db150u: goto label_2db150;
        case 0x2db154u: goto label_2db154;
        case 0x2db158u: goto label_2db158;
        case 0x2db15cu: goto label_2db15c;
        case 0x2db160u: goto label_2db160;
        case 0x2db164u: goto label_2db164;
        case 0x2db168u: goto label_2db168;
        case 0x2db16cu: goto label_2db16c;
        case 0x2db170u: goto label_2db170;
        case 0x2db174u: goto label_2db174;
        case 0x2db178u: goto label_2db178;
        case 0x2db17cu: goto label_2db17c;
        case 0x2db180u: goto label_2db180;
        case 0x2db184u: goto label_2db184;
        case 0x2db188u: goto label_2db188;
        case 0x2db18cu: goto label_2db18c;
        case 0x2db190u: goto label_2db190;
        case 0x2db194u: goto label_2db194;
        case 0x2db198u: goto label_2db198;
        case 0x2db19cu: goto label_2db19c;
        case 0x2db1a0u: goto label_2db1a0;
        case 0x2db1a4u: goto label_2db1a4;
        case 0x2db1a8u: goto label_2db1a8;
        case 0x2db1acu: goto label_2db1ac;
        case 0x2db1b0u: goto label_2db1b0;
        case 0x2db1b4u: goto label_2db1b4;
        case 0x2db1b8u: goto label_2db1b8;
        case 0x2db1bcu: goto label_2db1bc;
        case 0x2db1c0u: goto label_2db1c0;
        case 0x2db1c4u: goto label_2db1c4;
        case 0x2db1c8u: goto label_2db1c8;
        case 0x2db1ccu: goto label_2db1cc;
        case 0x2db1d0u: goto label_2db1d0;
        case 0x2db1d4u: goto label_2db1d4;
        case 0x2db1d8u: goto label_2db1d8;
        case 0x2db1dcu: goto label_2db1dc;
        case 0x2db1e0u: goto label_2db1e0;
        case 0x2db1e4u: goto label_2db1e4;
        case 0x2db1e8u: goto label_2db1e8;
        case 0x2db1ecu: goto label_2db1ec;
        case 0x2db1f0u: goto label_2db1f0;
        case 0x2db1f4u: goto label_2db1f4;
        case 0x2db1f8u: goto label_2db1f8;
        case 0x2db1fcu: goto label_2db1fc;
        case 0x2db200u: goto label_2db200;
        case 0x2db204u: goto label_2db204;
        case 0x2db208u: goto label_2db208;
        case 0x2db20cu: goto label_2db20c;
        case 0x2db210u: goto label_2db210;
        case 0x2db214u: goto label_2db214;
        case 0x2db218u: goto label_2db218;
        case 0x2db21cu: goto label_2db21c;
        case 0x2db220u: goto label_2db220;
        case 0x2db224u: goto label_2db224;
        case 0x2db228u: goto label_2db228;
        case 0x2db22cu: goto label_2db22c;
        case 0x2db230u: goto label_2db230;
        case 0x2db234u: goto label_2db234;
        case 0x2db238u: goto label_2db238;
        case 0x2db23cu: goto label_2db23c;
        case 0x2db240u: goto label_2db240;
        case 0x2db244u: goto label_2db244;
        case 0x2db248u: goto label_2db248;
        case 0x2db24cu: goto label_2db24c;
        case 0x2db250u: goto label_2db250;
        case 0x2db254u: goto label_2db254;
        case 0x2db258u: goto label_2db258;
        case 0x2db25cu: goto label_2db25c;
        case 0x2db260u: goto label_2db260;
        case 0x2db264u: goto label_2db264;
        case 0x2db268u: goto label_2db268;
        case 0x2db26cu: goto label_2db26c;
        case 0x2db270u: goto label_2db270;
        case 0x2db274u: goto label_2db274;
        case 0x2db278u: goto label_2db278;
        case 0x2db27cu: goto label_2db27c;
        case 0x2db280u: goto label_2db280;
        case 0x2db284u: goto label_2db284;
        case 0x2db288u: goto label_2db288;
        case 0x2db28cu: goto label_2db28c;
        case 0x2db290u: goto label_2db290;
        case 0x2db294u: goto label_2db294;
        case 0x2db298u: goto label_2db298;
        case 0x2db29cu: goto label_2db29c;
        case 0x2db2a0u: goto label_2db2a0;
        case 0x2db2a4u: goto label_2db2a4;
        case 0x2db2a8u: goto label_2db2a8;
        case 0x2db2acu: goto label_2db2ac;
        case 0x2db2b0u: goto label_2db2b0;
        case 0x2db2b4u: goto label_2db2b4;
        case 0x2db2b8u: goto label_2db2b8;
        case 0x2db2bcu: goto label_2db2bc;
        case 0x2db2c0u: goto label_2db2c0;
        case 0x2db2c4u: goto label_2db2c4;
        case 0x2db2c8u: goto label_2db2c8;
        case 0x2db2ccu: goto label_2db2cc;
        case 0x2db2d0u: goto label_2db2d0;
        case 0x2db2d4u: goto label_2db2d4;
        case 0x2db2d8u: goto label_2db2d8;
        case 0x2db2dcu: goto label_2db2dc;
        case 0x2db2e0u: goto label_2db2e0;
        case 0x2db2e4u: goto label_2db2e4;
        case 0x2db2e8u: goto label_2db2e8;
        case 0x2db2ecu: goto label_2db2ec;
        case 0x2db2f0u: goto label_2db2f0;
        case 0x2db2f4u: goto label_2db2f4;
        case 0x2db2f8u: goto label_2db2f8;
        case 0x2db2fcu: goto label_2db2fc;
        case 0x2db300u: goto label_2db300;
        case 0x2db304u: goto label_2db304;
        case 0x2db308u: goto label_2db308;
        case 0x2db30cu: goto label_2db30c;
        case 0x2db310u: goto label_2db310;
        case 0x2db314u: goto label_2db314;
        case 0x2db318u: goto label_2db318;
        case 0x2db31cu: goto label_2db31c;
        case 0x2db320u: goto label_2db320;
        case 0x2db324u: goto label_2db324;
        case 0x2db328u: goto label_2db328;
        case 0x2db32cu: goto label_2db32c;
        case 0x2db330u: goto label_2db330;
        case 0x2db334u: goto label_2db334;
        case 0x2db338u: goto label_2db338;
        case 0x2db33cu: goto label_2db33c;
        case 0x2db340u: goto label_2db340;
        case 0x2db344u: goto label_2db344;
        case 0x2db348u: goto label_2db348;
        case 0x2db34cu: goto label_2db34c;
        case 0x2db350u: goto label_2db350;
        case 0x2db354u: goto label_2db354;
        case 0x2db358u: goto label_2db358;
        case 0x2db35cu: goto label_2db35c;
        case 0x2db360u: goto label_2db360;
        case 0x2db364u: goto label_2db364;
        case 0x2db368u: goto label_2db368;
        case 0x2db36cu: goto label_2db36c;
        case 0x2db370u: goto label_2db370;
        case 0x2db374u: goto label_2db374;
        case 0x2db378u: goto label_2db378;
        case 0x2db37cu: goto label_2db37c;
        case 0x2db380u: goto label_2db380;
        case 0x2db384u: goto label_2db384;
        case 0x2db388u: goto label_2db388;
        case 0x2db38cu: goto label_2db38c;
        case 0x2db390u: goto label_2db390;
        case 0x2db394u: goto label_2db394;
        case 0x2db398u: goto label_2db398;
        case 0x2db39cu: goto label_2db39c;
        case 0x2db3a0u: goto label_2db3a0;
        case 0x2db3a4u: goto label_2db3a4;
        case 0x2db3a8u: goto label_2db3a8;
        case 0x2db3acu: goto label_2db3ac;
        case 0x2db3b0u: goto label_2db3b0;
        case 0x2db3b4u: goto label_2db3b4;
        case 0x2db3b8u: goto label_2db3b8;
        case 0x2db3bcu: goto label_2db3bc;
        case 0x2db3c0u: goto label_2db3c0;
        case 0x2db3c4u: goto label_2db3c4;
        case 0x2db3c8u: goto label_2db3c8;
        case 0x2db3ccu: goto label_2db3cc;
        case 0x2db3d0u: goto label_2db3d0;
        case 0x2db3d4u: goto label_2db3d4;
        case 0x2db3d8u: goto label_2db3d8;
        case 0x2db3dcu: goto label_2db3dc;
        case 0x2db3e0u: goto label_2db3e0;
        case 0x2db3e4u: goto label_2db3e4;
        case 0x2db3e8u: goto label_2db3e8;
        case 0x2db3ecu: goto label_2db3ec;
        case 0x2db3f0u: goto label_2db3f0;
        case 0x2db3f4u: goto label_2db3f4;
        case 0x2db3f8u: goto label_2db3f8;
        case 0x2db3fcu: goto label_2db3fc;
        case 0x2db400u: goto label_2db400;
        case 0x2db404u: goto label_2db404;
        case 0x2db408u: goto label_2db408;
        case 0x2db40cu: goto label_2db40c;
        case 0x2db410u: goto label_2db410;
        case 0x2db414u: goto label_2db414;
        case 0x2db418u: goto label_2db418;
        case 0x2db41cu: goto label_2db41c;
        case 0x2db420u: goto label_2db420;
        case 0x2db424u: goto label_2db424;
        case 0x2db428u: goto label_2db428;
        case 0x2db42cu: goto label_2db42c;
        case 0x2db430u: goto label_2db430;
        case 0x2db434u: goto label_2db434;
        case 0x2db438u: goto label_2db438;
        case 0x2db43cu: goto label_2db43c;
        case 0x2db440u: goto label_2db440;
        case 0x2db444u: goto label_2db444;
        case 0x2db448u: goto label_2db448;
        case 0x2db44cu: goto label_2db44c;
        case 0x2db450u: goto label_2db450;
        case 0x2db454u: goto label_2db454;
        case 0x2db458u: goto label_2db458;
        case 0x2db45cu: goto label_2db45c;
        case 0x2db460u: goto label_2db460;
        case 0x2db464u: goto label_2db464;
        case 0x2db468u: goto label_2db468;
        case 0x2db46cu: goto label_2db46c;
        case 0x2db470u: goto label_2db470;
        case 0x2db474u: goto label_2db474;
        case 0x2db478u: goto label_2db478;
        case 0x2db47cu: goto label_2db47c;
        case 0x2db480u: goto label_2db480;
        case 0x2db484u: goto label_2db484;
        case 0x2db488u: goto label_2db488;
        case 0x2db48cu: goto label_2db48c;
        case 0x2db490u: goto label_2db490;
        case 0x2db494u: goto label_2db494;
        case 0x2db498u: goto label_2db498;
        case 0x2db49cu: goto label_2db49c;
        case 0x2db4a0u: goto label_2db4a0;
        case 0x2db4a4u: goto label_2db4a4;
        case 0x2db4a8u: goto label_2db4a8;
        case 0x2db4acu: goto label_2db4ac;
        case 0x2db4b0u: goto label_2db4b0;
        case 0x2db4b4u: goto label_2db4b4;
        case 0x2db4b8u: goto label_2db4b8;
        case 0x2db4bcu: goto label_2db4bc;
        case 0x2db4c0u: goto label_2db4c0;
        case 0x2db4c4u: goto label_2db4c4;
        case 0x2db4c8u: goto label_2db4c8;
        case 0x2db4ccu: goto label_2db4cc;
        case 0x2db4d0u: goto label_2db4d0;
        case 0x2db4d4u: goto label_2db4d4;
        case 0x2db4d8u: goto label_2db4d8;
        case 0x2db4dcu: goto label_2db4dc;
        case 0x2db4e0u: goto label_2db4e0;
        case 0x2db4e4u: goto label_2db4e4;
        case 0x2db4e8u: goto label_2db4e8;
        case 0x2db4ecu: goto label_2db4ec;
        case 0x2db4f0u: goto label_2db4f0;
        case 0x2db4f4u: goto label_2db4f4;
        case 0x2db4f8u: goto label_2db4f8;
        case 0x2db4fcu: goto label_2db4fc;
        case 0x2db500u: goto label_2db500;
        case 0x2db504u: goto label_2db504;
        case 0x2db508u: goto label_2db508;
        case 0x2db50cu: goto label_2db50c;
        case 0x2db510u: goto label_2db510;
        case 0x2db514u: goto label_2db514;
        case 0x2db518u: goto label_2db518;
        case 0x2db51cu: goto label_2db51c;
        case 0x2db520u: goto label_2db520;
        case 0x2db524u: goto label_2db524;
        case 0x2db528u: goto label_2db528;
        case 0x2db52cu: goto label_2db52c;
        case 0x2db530u: goto label_2db530;
        case 0x2db534u: goto label_2db534;
        case 0x2db538u: goto label_2db538;
        case 0x2db53cu: goto label_2db53c;
        case 0x2db540u: goto label_2db540;
        case 0x2db544u: goto label_2db544;
        case 0x2db548u: goto label_2db548;
        case 0x2db54cu: goto label_2db54c;
        case 0x2db550u: goto label_2db550;
        case 0x2db554u: goto label_2db554;
        case 0x2db558u: goto label_2db558;
        case 0x2db55cu: goto label_2db55c;
        case 0x2db560u: goto label_2db560;
        case 0x2db564u: goto label_2db564;
        case 0x2db568u: goto label_2db568;
        case 0x2db56cu: goto label_2db56c;
        case 0x2db570u: goto label_2db570;
        case 0x2db574u: goto label_2db574;
        case 0x2db578u: goto label_2db578;
        case 0x2db57cu: goto label_2db57c;
        case 0x2db580u: goto label_2db580;
        case 0x2db584u: goto label_2db584;
        case 0x2db588u: goto label_2db588;
        case 0x2db58cu: goto label_2db58c;
        case 0x2db590u: goto label_2db590;
        case 0x2db594u: goto label_2db594;
        case 0x2db598u: goto label_2db598;
        case 0x2db59cu: goto label_2db59c;
        case 0x2db5a0u: goto label_2db5a0;
        case 0x2db5a4u: goto label_2db5a4;
        case 0x2db5a8u: goto label_2db5a8;
        case 0x2db5acu: goto label_2db5ac;
        case 0x2db5b0u: goto label_2db5b0;
        case 0x2db5b4u: goto label_2db5b4;
        case 0x2db5b8u: goto label_2db5b8;
        case 0x2db5bcu: goto label_2db5bc;
        case 0x2db5c0u: goto label_2db5c0;
        case 0x2db5c4u: goto label_2db5c4;
        case 0x2db5c8u: goto label_2db5c8;
        case 0x2db5ccu: goto label_2db5cc;
        case 0x2db5d0u: goto label_2db5d0;
        case 0x2db5d4u: goto label_2db5d4;
        case 0x2db5d8u: goto label_2db5d8;
        case 0x2db5dcu: goto label_2db5dc;
        case 0x2db5e0u: goto label_2db5e0;
        case 0x2db5e4u: goto label_2db5e4;
        case 0x2db5e8u: goto label_2db5e8;
        case 0x2db5ecu: goto label_2db5ec;
        case 0x2db5f0u: goto label_2db5f0;
        case 0x2db5f4u: goto label_2db5f4;
        case 0x2db5f8u: goto label_2db5f8;
        case 0x2db5fcu: goto label_2db5fc;
        case 0x2db600u: goto label_2db600;
        case 0x2db604u: goto label_2db604;
        case 0x2db608u: goto label_2db608;
        case 0x2db60cu: goto label_2db60c;
        case 0x2db610u: goto label_2db610;
        case 0x2db614u: goto label_2db614;
        case 0x2db618u: goto label_2db618;
        case 0x2db61cu: goto label_2db61c;
        case 0x2db620u: goto label_2db620;
        case 0x2db624u: goto label_2db624;
        case 0x2db628u: goto label_2db628;
        case 0x2db62cu: goto label_2db62c;
        case 0x2db630u: goto label_2db630;
        case 0x2db634u: goto label_2db634;
        case 0x2db638u: goto label_2db638;
        case 0x2db63cu: goto label_2db63c;
        case 0x2db640u: goto label_2db640;
        case 0x2db644u: goto label_2db644;
        case 0x2db648u: goto label_2db648;
        case 0x2db64cu: goto label_2db64c;
        case 0x2db650u: goto label_2db650;
        case 0x2db654u: goto label_2db654;
        case 0x2db658u: goto label_2db658;
        case 0x2db65cu: goto label_2db65c;
        case 0x2db660u: goto label_2db660;
        case 0x2db664u: goto label_2db664;
        case 0x2db668u: goto label_2db668;
        case 0x2db66cu: goto label_2db66c;
        case 0x2db670u: goto label_2db670;
        case 0x2db674u: goto label_2db674;
        case 0x2db678u: goto label_2db678;
        case 0x2db67cu: goto label_2db67c;
        case 0x2db680u: goto label_2db680;
        case 0x2db684u: goto label_2db684;
        case 0x2db688u: goto label_2db688;
        case 0x2db68cu: goto label_2db68c;
        case 0x2db690u: goto label_2db690;
        case 0x2db694u: goto label_2db694;
        case 0x2db698u: goto label_2db698;
        case 0x2db69cu: goto label_2db69c;
        case 0x2db6a0u: goto label_2db6a0;
        case 0x2db6a4u: goto label_2db6a4;
        case 0x2db6a8u: goto label_2db6a8;
        case 0x2db6acu: goto label_2db6ac;
        case 0x2db6b0u: goto label_2db6b0;
        case 0x2db6b4u: goto label_2db6b4;
        case 0x2db6b8u: goto label_2db6b8;
        case 0x2db6bcu: goto label_2db6bc;
        case 0x2db6c0u: goto label_2db6c0;
        case 0x2db6c4u: goto label_2db6c4;
        case 0x2db6c8u: goto label_2db6c8;
        case 0x2db6ccu: goto label_2db6cc;
        case 0x2db6d0u: goto label_2db6d0;
        case 0x2db6d4u: goto label_2db6d4;
        case 0x2db6d8u: goto label_2db6d8;
        case 0x2db6dcu: goto label_2db6dc;
        case 0x2db6e0u: goto label_2db6e0;
        case 0x2db6e4u: goto label_2db6e4;
        case 0x2db6e8u: goto label_2db6e8;
        case 0x2db6ecu: goto label_2db6ec;
        case 0x2db6f0u: goto label_2db6f0;
        case 0x2db6f4u: goto label_2db6f4;
        case 0x2db6f8u: goto label_2db6f8;
        case 0x2db6fcu: goto label_2db6fc;
        case 0x2db700u: goto label_2db700;
        case 0x2db704u: goto label_2db704;
        case 0x2db708u: goto label_2db708;
        case 0x2db70cu: goto label_2db70c;
        case 0x2db710u: goto label_2db710;
        case 0x2db714u: goto label_2db714;
        case 0x2db718u: goto label_2db718;
        case 0x2db71cu: goto label_2db71c;
        case 0x2db720u: goto label_2db720;
        case 0x2db724u: goto label_2db724;
        case 0x2db728u: goto label_2db728;
        case 0x2db72cu: goto label_2db72c;
        case 0x2db730u: goto label_2db730;
        case 0x2db734u: goto label_2db734;
        case 0x2db738u: goto label_2db738;
        case 0x2db73cu: goto label_2db73c;
        case 0x2db740u: goto label_2db740;
        case 0x2db744u: goto label_2db744;
        case 0x2db748u: goto label_2db748;
        case 0x2db74cu: goto label_2db74c;
        case 0x2db750u: goto label_2db750;
        case 0x2db754u: goto label_2db754;
        case 0x2db758u: goto label_2db758;
        case 0x2db75cu: goto label_2db75c;
        case 0x2db760u: goto label_2db760;
        case 0x2db764u: goto label_2db764;
        case 0x2db768u: goto label_2db768;
        case 0x2db76cu: goto label_2db76c;
        case 0x2db770u: goto label_2db770;
        case 0x2db774u: goto label_2db774;
        case 0x2db778u: goto label_2db778;
        case 0x2db77cu: goto label_2db77c;
        case 0x2db780u: goto label_2db780;
        case 0x2db784u: goto label_2db784;
        case 0x2db788u: goto label_2db788;
        case 0x2db78cu: goto label_2db78c;
        case 0x2db790u: goto label_2db790;
        case 0x2db794u: goto label_2db794;
        case 0x2db798u: goto label_2db798;
        case 0x2db79cu: goto label_2db79c;
        case 0x2db7a0u: goto label_2db7a0;
        case 0x2db7a4u: goto label_2db7a4;
        case 0x2db7a8u: goto label_2db7a8;
        case 0x2db7acu: goto label_2db7ac;
        case 0x2db7b0u: goto label_2db7b0;
        case 0x2db7b4u: goto label_2db7b4;
        case 0x2db7b8u: goto label_2db7b8;
        case 0x2db7bcu: goto label_2db7bc;
        case 0x2db7c0u: goto label_2db7c0;
        case 0x2db7c4u: goto label_2db7c4;
        case 0x2db7c8u: goto label_2db7c8;
        case 0x2db7ccu: goto label_2db7cc;
        case 0x2db7d0u: goto label_2db7d0;
        case 0x2db7d4u: goto label_2db7d4;
        case 0x2db7d8u: goto label_2db7d8;
        case 0x2db7dcu: goto label_2db7dc;
        case 0x2db7e0u: goto label_2db7e0;
        case 0x2db7e4u: goto label_2db7e4;
        case 0x2db7e8u: goto label_2db7e8;
        case 0x2db7ecu: goto label_2db7ec;
        case 0x2db7f0u: goto label_2db7f0;
        case 0x2db7f4u: goto label_2db7f4;
        case 0x2db7f8u: goto label_2db7f8;
        case 0x2db7fcu: goto label_2db7fc;
        case 0x2db800u: goto label_2db800;
        case 0x2db804u: goto label_2db804;
        case 0x2db808u: goto label_2db808;
        case 0x2db80cu: goto label_2db80c;
        case 0x2db810u: goto label_2db810;
        case 0x2db814u: goto label_2db814;
        case 0x2db818u: goto label_2db818;
        case 0x2db81cu: goto label_2db81c;
        case 0x2db820u: goto label_2db820;
        case 0x2db824u: goto label_2db824;
        case 0x2db828u: goto label_2db828;
        case 0x2db82cu: goto label_2db82c;
        case 0x2db830u: goto label_2db830;
        case 0x2db834u: goto label_2db834;
        case 0x2db838u: goto label_2db838;
        case 0x2db83cu: goto label_2db83c;
        case 0x2db840u: goto label_2db840;
        case 0x2db844u: goto label_2db844;
        case 0x2db848u: goto label_2db848;
        case 0x2db84cu: goto label_2db84c;
        case 0x2db850u: goto label_2db850;
        case 0x2db854u: goto label_2db854;
        case 0x2db858u: goto label_2db858;
        case 0x2db85cu: goto label_2db85c;
        case 0x2db860u: goto label_2db860;
        case 0x2db864u: goto label_2db864;
        case 0x2db868u: goto label_2db868;
        case 0x2db86cu: goto label_2db86c;
        case 0x2db870u: goto label_2db870;
        case 0x2db874u: goto label_2db874;
        case 0x2db878u: goto label_2db878;
        case 0x2db87cu: goto label_2db87c;
        case 0x2db880u: goto label_2db880;
        case 0x2db884u: goto label_2db884;
        case 0x2db888u: goto label_2db888;
        case 0x2db88cu: goto label_2db88c;
        case 0x2db890u: goto label_2db890;
        case 0x2db894u: goto label_2db894;
        case 0x2db898u: goto label_2db898;
        case 0x2db89cu: goto label_2db89c;
        case 0x2db8a0u: goto label_2db8a0;
        case 0x2db8a4u: goto label_2db8a4;
        case 0x2db8a8u: goto label_2db8a8;
        case 0x2db8acu: goto label_2db8ac;
        case 0x2db8b0u: goto label_2db8b0;
        case 0x2db8b4u: goto label_2db8b4;
        case 0x2db8b8u: goto label_2db8b8;
        case 0x2db8bcu: goto label_2db8bc;
        case 0x2db8c0u: goto label_2db8c0;
        case 0x2db8c4u: goto label_2db8c4;
        case 0x2db8c8u: goto label_2db8c8;
        case 0x2db8ccu: goto label_2db8cc;
        case 0x2db8d0u: goto label_2db8d0;
        case 0x2db8d4u: goto label_2db8d4;
        case 0x2db8d8u: goto label_2db8d8;
        case 0x2db8dcu: goto label_2db8dc;
        case 0x2db8e0u: goto label_2db8e0;
        case 0x2db8e4u: goto label_2db8e4;
        case 0x2db8e8u: goto label_2db8e8;
        case 0x2db8ecu: goto label_2db8ec;
        case 0x2db8f0u: goto label_2db8f0;
        case 0x2db8f4u: goto label_2db8f4;
        case 0x2db8f8u: goto label_2db8f8;
        case 0x2db8fcu: goto label_2db8fc;
        case 0x2db900u: goto label_2db900;
        case 0x2db904u: goto label_2db904;
        case 0x2db908u: goto label_2db908;
        case 0x2db90cu: goto label_2db90c;
        case 0x2db910u: goto label_2db910;
        case 0x2db914u: goto label_2db914;
        case 0x2db918u: goto label_2db918;
        case 0x2db91cu: goto label_2db91c;
        case 0x2db920u: goto label_2db920;
        case 0x2db924u: goto label_2db924;
        case 0x2db928u: goto label_2db928;
        case 0x2db92cu: goto label_2db92c;
        case 0x2db930u: goto label_2db930;
        case 0x2db934u: goto label_2db934;
        case 0x2db938u: goto label_2db938;
        case 0x2db93cu: goto label_2db93c;
        case 0x2db940u: goto label_2db940;
        case 0x2db944u: goto label_2db944;
        case 0x2db948u: goto label_2db948;
        case 0x2db94cu: goto label_2db94c;
        case 0x2db950u: goto label_2db950;
        case 0x2db954u: goto label_2db954;
        case 0x2db958u: goto label_2db958;
        case 0x2db95cu: goto label_2db95c;
        case 0x2db960u: goto label_2db960;
        case 0x2db964u: goto label_2db964;
        case 0x2db968u: goto label_2db968;
        case 0x2db96cu: goto label_2db96c;
        case 0x2db970u: goto label_2db970;
        case 0x2db974u: goto label_2db974;
        case 0x2db978u: goto label_2db978;
        case 0x2db97cu: goto label_2db97c;
        case 0x2db980u: goto label_2db980;
        case 0x2db984u: goto label_2db984;
        case 0x2db988u: goto label_2db988;
        case 0x2db98cu: goto label_2db98c;
        case 0x2db990u: goto label_2db990;
        case 0x2db994u: goto label_2db994;
        case 0x2db998u: goto label_2db998;
        case 0x2db99cu: goto label_2db99c;
        case 0x2db9a0u: goto label_2db9a0;
        case 0x2db9a4u: goto label_2db9a4;
        case 0x2db9a8u: goto label_2db9a8;
        case 0x2db9acu: goto label_2db9ac;
        case 0x2db9b0u: goto label_2db9b0;
        case 0x2db9b4u: goto label_2db9b4;
        case 0x2db9b8u: goto label_2db9b8;
        case 0x2db9bcu: goto label_2db9bc;
        case 0x2db9c0u: goto label_2db9c0;
        case 0x2db9c4u: goto label_2db9c4;
        case 0x2db9c8u: goto label_2db9c8;
        case 0x2db9ccu: goto label_2db9cc;
        case 0x2db9d0u: goto label_2db9d0;
        case 0x2db9d4u: goto label_2db9d4;
        case 0x2db9d8u: goto label_2db9d8;
        case 0x2db9dcu: goto label_2db9dc;
        case 0x2db9e0u: goto label_2db9e0;
        case 0x2db9e4u: goto label_2db9e4;
        case 0x2db9e8u: goto label_2db9e8;
        case 0x2db9ecu: goto label_2db9ec;
        case 0x2db9f0u: goto label_2db9f0;
        case 0x2db9f4u: goto label_2db9f4;
        case 0x2db9f8u: goto label_2db9f8;
        case 0x2db9fcu: goto label_2db9fc;
        case 0x2dba00u: goto label_2dba00;
        case 0x2dba04u: goto label_2dba04;
        case 0x2dba08u: goto label_2dba08;
        case 0x2dba0cu: goto label_2dba0c;
        case 0x2dba10u: goto label_2dba10;
        case 0x2dba14u: goto label_2dba14;
        case 0x2dba18u: goto label_2dba18;
        case 0x2dba1cu: goto label_2dba1c;
        case 0x2dba20u: goto label_2dba20;
        case 0x2dba24u: goto label_2dba24;
        case 0x2dba28u: goto label_2dba28;
        case 0x2dba2cu: goto label_2dba2c;
        case 0x2dba30u: goto label_2dba30;
        case 0x2dba34u: goto label_2dba34;
        case 0x2dba38u: goto label_2dba38;
        case 0x2dba3cu: goto label_2dba3c;
        case 0x2dba40u: goto label_2dba40;
        case 0x2dba44u: goto label_2dba44;
        case 0x2dba48u: goto label_2dba48;
        case 0x2dba4cu: goto label_2dba4c;
        case 0x2dba50u: goto label_2dba50;
        case 0x2dba54u: goto label_2dba54;
        case 0x2dba58u: goto label_2dba58;
        case 0x2dba5cu: goto label_2dba5c;
        case 0x2dba60u: goto label_2dba60;
        case 0x2dba64u: goto label_2dba64;
        case 0x2dba68u: goto label_2dba68;
        case 0x2dba6cu: goto label_2dba6c;
        case 0x2dba70u: goto label_2dba70;
        case 0x2dba74u: goto label_2dba74;
        case 0x2dba78u: goto label_2dba78;
        case 0x2dba7cu: goto label_2dba7c;
        case 0x2dba80u: goto label_2dba80;
        case 0x2dba84u: goto label_2dba84;
        case 0x2dba88u: goto label_2dba88;
        case 0x2dba8cu: goto label_2dba8c;
        case 0x2dba90u: goto label_2dba90;
        case 0x2dba94u: goto label_2dba94;
        case 0x2dba98u: goto label_2dba98;
        case 0x2dba9cu: goto label_2dba9c;
        case 0x2dbaa0u: goto label_2dbaa0;
        case 0x2dbaa4u: goto label_2dbaa4;
        case 0x2dbaa8u: goto label_2dbaa8;
        case 0x2dbaacu: goto label_2dbaac;
        case 0x2dbab0u: goto label_2dbab0;
        case 0x2dbab4u: goto label_2dbab4;
        case 0x2dbab8u: goto label_2dbab8;
        case 0x2dbabcu: goto label_2dbabc;
        case 0x2dbac0u: goto label_2dbac0;
        case 0x2dbac4u: goto label_2dbac4;
        case 0x2dbac8u: goto label_2dbac8;
        case 0x2dbaccu: goto label_2dbacc;
        case 0x2dbad0u: goto label_2dbad0;
        case 0x2dbad4u: goto label_2dbad4;
        case 0x2dbad8u: goto label_2dbad8;
        case 0x2dbadcu: goto label_2dbadc;
        case 0x2dbae0u: goto label_2dbae0;
        case 0x2dbae4u: goto label_2dbae4;
        case 0x2dbae8u: goto label_2dbae8;
        case 0x2dbaecu: goto label_2dbaec;
        case 0x2dbaf0u: goto label_2dbaf0;
        case 0x2dbaf4u: goto label_2dbaf4;
        case 0x2dbaf8u: goto label_2dbaf8;
        case 0x2dbafcu: goto label_2dbafc;
        case 0x2dbb00u: goto label_2dbb00;
        case 0x2dbb04u: goto label_2dbb04;
        case 0x2dbb08u: goto label_2dbb08;
        case 0x2dbb0cu: goto label_2dbb0c;
        case 0x2dbb10u: goto label_2dbb10;
        case 0x2dbb14u: goto label_2dbb14;
        case 0x2dbb18u: goto label_2dbb18;
        case 0x2dbb1cu: goto label_2dbb1c;
        case 0x2dbb20u: goto label_2dbb20;
        case 0x2dbb24u: goto label_2dbb24;
        case 0x2dbb28u: goto label_2dbb28;
        case 0x2dbb2cu: goto label_2dbb2c;
        case 0x2dbb30u: goto label_2dbb30;
        case 0x2dbb34u: goto label_2dbb34;
        case 0x2dbb38u: goto label_2dbb38;
        case 0x2dbb3cu: goto label_2dbb3c;
        case 0x2dbb40u: goto label_2dbb40;
        case 0x2dbb44u: goto label_2dbb44;
        case 0x2dbb48u: goto label_2dbb48;
        case 0x2dbb4cu: goto label_2dbb4c;
        case 0x2dbb50u: goto label_2dbb50;
        case 0x2dbb54u: goto label_2dbb54;
        case 0x2dbb58u: goto label_2dbb58;
        case 0x2dbb5cu: goto label_2dbb5c;
        case 0x2dbb60u: goto label_2dbb60;
        case 0x2dbb64u: goto label_2dbb64;
        case 0x2dbb68u: goto label_2dbb68;
        case 0x2dbb6cu: goto label_2dbb6c;
        case 0x2dbb70u: goto label_2dbb70;
        case 0x2dbb74u: goto label_2dbb74;
        case 0x2dbb78u: goto label_2dbb78;
        case 0x2dbb7cu: goto label_2dbb7c;
        case 0x2dbb80u: goto label_2dbb80;
        case 0x2dbb84u: goto label_2dbb84;
        case 0x2dbb88u: goto label_2dbb88;
        case 0x2dbb8cu: goto label_2dbb8c;
        case 0x2dbb90u: goto label_2dbb90;
        case 0x2dbb94u: goto label_2dbb94;
        case 0x2dbb98u: goto label_2dbb98;
        case 0x2dbb9cu: goto label_2dbb9c;
        case 0x2dbba0u: goto label_2dbba0;
        case 0x2dbba4u: goto label_2dbba4;
        case 0x2dbba8u: goto label_2dbba8;
        case 0x2dbbacu: goto label_2dbbac;
        case 0x2dbbb0u: goto label_2dbbb0;
        case 0x2dbbb4u: goto label_2dbbb4;
        case 0x2dbbb8u: goto label_2dbbb8;
        case 0x2dbbbcu: goto label_2dbbbc;
        case 0x2dbbc0u: goto label_2dbbc0;
        case 0x2dbbc4u: goto label_2dbbc4;
        case 0x2dbbc8u: goto label_2dbbc8;
        case 0x2dbbccu: goto label_2dbbcc;
        case 0x2dbbd0u: goto label_2dbbd0;
        case 0x2dbbd4u: goto label_2dbbd4;
        case 0x2dbbd8u: goto label_2dbbd8;
        case 0x2dbbdcu: goto label_2dbbdc;
        case 0x2dbbe0u: goto label_2dbbe0;
        case 0x2dbbe4u: goto label_2dbbe4;
        case 0x2dbbe8u: goto label_2dbbe8;
        case 0x2dbbecu: goto label_2dbbec;
        case 0x2dbbf0u: goto label_2dbbf0;
        case 0x2dbbf4u: goto label_2dbbf4;
        case 0x2dbbf8u: goto label_2dbbf8;
        case 0x2dbbfcu: goto label_2dbbfc;
        case 0x2dbc00u: goto label_2dbc00;
        case 0x2dbc04u: goto label_2dbc04;
        case 0x2dbc08u: goto label_2dbc08;
        case 0x2dbc0cu: goto label_2dbc0c;
        case 0x2dbc10u: goto label_2dbc10;
        case 0x2dbc14u: goto label_2dbc14;
        case 0x2dbc18u: goto label_2dbc18;
        case 0x2dbc1cu: goto label_2dbc1c;
        case 0x2dbc20u: goto label_2dbc20;
        case 0x2dbc24u: goto label_2dbc24;
        case 0x2dbc28u: goto label_2dbc28;
        case 0x2dbc2cu: goto label_2dbc2c;
        case 0x2dbc30u: goto label_2dbc30;
        case 0x2dbc34u: goto label_2dbc34;
        case 0x2dbc38u: goto label_2dbc38;
        case 0x2dbc3cu: goto label_2dbc3c;
        case 0x2dbc40u: goto label_2dbc40;
        case 0x2dbc44u: goto label_2dbc44;
        case 0x2dbc48u: goto label_2dbc48;
        case 0x2dbc4cu: goto label_2dbc4c;
        case 0x2dbc50u: goto label_2dbc50;
        case 0x2dbc54u: goto label_2dbc54;
        case 0x2dbc58u: goto label_2dbc58;
        case 0x2dbc5cu: goto label_2dbc5c;
        case 0x2dbc60u: goto label_2dbc60;
        case 0x2dbc64u: goto label_2dbc64;
        case 0x2dbc68u: goto label_2dbc68;
        case 0x2dbc6cu: goto label_2dbc6c;
        case 0x2dbc70u: goto label_2dbc70;
        case 0x2dbc74u: goto label_2dbc74;
        case 0x2dbc78u: goto label_2dbc78;
        case 0x2dbc7cu: goto label_2dbc7c;
        case 0x2dbc80u: goto label_2dbc80;
        case 0x2dbc84u: goto label_2dbc84;
        case 0x2dbc88u: goto label_2dbc88;
        case 0x2dbc8cu: goto label_2dbc8c;
        case 0x2dbc90u: goto label_2dbc90;
        case 0x2dbc94u: goto label_2dbc94;
        case 0x2dbc98u: goto label_2dbc98;
        case 0x2dbc9cu: goto label_2dbc9c;
        case 0x2dbca0u: goto label_2dbca0;
        case 0x2dbca4u: goto label_2dbca4;
        case 0x2dbca8u: goto label_2dbca8;
        case 0x2dbcacu: goto label_2dbcac;
        case 0x2dbcb0u: goto label_2dbcb0;
        case 0x2dbcb4u: goto label_2dbcb4;
        case 0x2dbcb8u: goto label_2dbcb8;
        case 0x2dbcbcu: goto label_2dbcbc;
        case 0x2dbcc0u: goto label_2dbcc0;
        case 0x2dbcc4u: goto label_2dbcc4;
        case 0x2dbcc8u: goto label_2dbcc8;
        case 0x2dbcccu: goto label_2dbccc;
        case 0x2dbcd0u: goto label_2dbcd0;
        case 0x2dbcd4u: goto label_2dbcd4;
        case 0x2dbcd8u: goto label_2dbcd8;
        case 0x2dbcdcu: goto label_2dbcdc;
        case 0x2dbce0u: goto label_2dbce0;
        case 0x2dbce4u: goto label_2dbce4;
        case 0x2dbce8u: goto label_2dbce8;
        case 0x2dbcecu: goto label_2dbcec;
        case 0x2dbcf0u: goto label_2dbcf0;
        case 0x2dbcf4u: goto label_2dbcf4;
        case 0x2dbcf8u: goto label_2dbcf8;
        case 0x2dbcfcu: goto label_2dbcfc;
        case 0x2dbd00u: goto label_2dbd00;
        case 0x2dbd04u: goto label_2dbd04;
        case 0x2dbd08u: goto label_2dbd08;
        case 0x2dbd0cu: goto label_2dbd0c;
        case 0x2dbd10u: goto label_2dbd10;
        case 0x2dbd14u: goto label_2dbd14;
        case 0x2dbd18u: goto label_2dbd18;
        case 0x2dbd1cu: goto label_2dbd1c;
        case 0x2dbd20u: goto label_2dbd20;
        case 0x2dbd24u: goto label_2dbd24;
        case 0x2dbd28u: goto label_2dbd28;
        case 0x2dbd2cu: goto label_2dbd2c;
        case 0x2dbd30u: goto label_2dbd30;
        case 0x2dbd34u: goto label_2dbd34;
        case 0x2dbd38u: goto label_2dbd38;
        case 0x2dbd3cu: goto label_2dbd3c;
        case 0x2dbd40u: goto label_2dbd40;
        case 0x2dbd44u: goto label_2dbd44;
        case 0x2dbd48u: goto label_2dbd48;
        case 0x2dbd4cu: goto label_2dbd4c;
        case 0x2dbd50u: goto label_2dbd50;
        case 0x2dbd54u: goto label_2dbd54;
        case 0x2dbd58u: goto label_2dbd58;
        case 0x2dbd5cu: goto label_2dbd5c;
        case 0x2dbd60u: goto label_2dbd60;
        case 0x2dbd64u: goto label_2dbd64;
        case 0x2dbd68u: goto label_2dbd68;
        case 0x2dbd6cu: goto label_2dbd6c;
        case 0x2dbd70u: goto label_2dbd70;
        case 0x2dbd74u: goto label_2dbd74;
        case 0x2dbd78u: goto label_2dbd78;
        case 0x2dbd7cu: goto label_2dbd7c;
        case 0x2dbd80u: goto label_2dbd80;
        case 0x2dbd84u: goto label_2dbd84;
        case 0x2dbd88u: goto label_2dbd88;
        case 0x2dbd8cu: goto label_2dbd8c;
        case 0x2dbd90u: goto label_2dbd90;
        case 0x2dbd94u: goto label_2dbd94;
        case 0x2dbd98u: goto label_2dbd98;
        case 0x2dbd9cu: goto label_2dbd9c;
        case 0x2dbda0u: goto label_2dbda0;
        case 0x2dbda4u: goto label_2dbda4;
        case 0x2dbda8u: goto label_2dbda8;
        case 0x2dbdacu: goto label_2dbdac;
        case 0x2dbdb0u: goto label_2dbdb0;
        case 0x2dbdb4u: goto label_2dbdb4;
        case 0x2dbdb8u: goto label_2dbdb8;
        case 0x2dbdbcu: goto label_2dbdbc;
        case 0x2dbdc0u: goto label_2dbdc0;
        case 0x2dbdc4u: goto label_2dbdc4;
        case 0x2dbdc8u: goto label_2dbdc8;
        case 0x2dbdccu: goto label_2dbdcc;
        case 0x2dbdd0u: goto label_2dbdd0;
        case 0x2dbdd4u: goto label_2dbdd4;
        case 0x2dbdd8u: goto label_2dbdd8;
        case 0x2dbddcu: goto label_2dbddc;
        case 0x2dbde0u: goto label_2dbde0;
        case 0x2dbde4u: goto label_2dbde4;
        case 0x2dbde8u: goto label_2dbde8;
        case 0x2dbdecu: goto label_2dbdec;
        case 0x2dbdf0u: goto label_2dbdf0;
        case 0x2dbdf4u: goto label_2dbdf4;
        case 0x2dbdf8u: goto label_2dbdf8;
        case 0x2dbdfcu: goto label_2dbdfc;
        case 0x2dbe00u: goto label_2dbe00;
        case 0x2dbe04u: goto label_2dbe04;
        case 0x2dbe08u: goto label_2dbe08;
        case 0x2dbe0cu: goto label_2dbe0c;
        case 0x2dbe10u: goto label_2dbe10;
        case 0x2dbe14u: goto label_2dbe14;
        case 0x2dbe18u: goto label_2dbe18;
        case 0x2dbe1cu: goto label_2dbe1c;
        case 0x2dbe20u: goto label_2dbe20;
        case 0x2dbe24u: goto label_2dbe24;
        case 0x2dbe28u: goto label_2dbe28;
        case 0x2dbe2cu: goto label_2dbe2c;
        case 0x2dbe30u: goto label_2dbe30;
        case 0x2dbe34u: goto label_2dbe34;
        case 0x2dbe38u: goto label_2dbe38;
        case 0x2dbe3cu: goto label_2dbe3c;
        case 0x2dbe40u: goto label_2dbe40;
        case 0x2dbe44u: goto label_2dbe44;
        case 0x2dbe48u: goto label_2dbe48;
        case 0x2dbe4cu: goto label_2dbe4c;
        case 0x2dbe50u: goto label_2dbe50;
        case 0x2dbe54u: goto label_2dbe54;
        case 0x2dbe58u: goto label_2dbe58;
        case 0x2dbe5cu: goto label_2dbe5c;
        case 0x2dbe60u: goto label_2dbe60;
        case 0x2dbe64u: goto label_2dbe64;
        case 0x2dbe68u: goto label_2dbe68;
        case 0x2dbe6cu: goto label_2dbe6c;
        case 0x2dbe70u: goto label_2dbe70;
        case 0x2dbe74u: goto label_2dbe74;
        case 0x2dbe78u: goto label_2dbe78;
        case 0x2dbe7cu: goto label_2dbe7c;
        case 0x2dbe80u: goto label_2dbe80;
        case 0x2dbe84u: goto label_2dbe84;
        case 0x2dbe88u: goto label_2dbe88;
        case 0x2dbe8cu: goto label_2dbe8c;
        case 0x2dbe90u: goto label_2dbe90;
        case 0x2dbe94u: goto label_2dbe94;
        case 0x2dbe98u: goto label_2dbe98;
        case 0x2dbe9cu: goto label_2dbe9c;
        case 0x2dbea0u: goto label_2dbea0;
        case 0x2dbea4u: goto label_2dbea4;
        case 0x2dbea8u: goto label_2dbea8;
        case 0x2dbeacu: goto label_2dbeac;
        case 0x2dbeb0u: goto label_2dbeb0;
        case 0x2dbeb4u: goto label_2dbeb4;
        case 0x2dbeb8u: goto label_2dbeb8;
        case 0x2dbebcu: goto label_2dbebc;
        case 0x2dbec0u: goto label_2dbec0;
        case 0x2dbec4u: goto label_2dbec4;
        case 0x2dbec8u: goto label_2dbec8;
        case 0x2dbeccu: goto label_2dbecc;
        case 0x2dbed0u: goto label_2dbed0;
        case 0x2dbed4u: goto label_2dbed4;
        case 0x2dbed8u: goto label_2dbed8;
        case 0x2dbedcu: goto label_2dbedc;
        case 0x2dbee0u: goto label_2dbee0;
        case 0x2dbee4u: goto label_2dbee4;
        case 0x2dbee8u: goto label_2dbee8;
        case 0x2dbeecu: goto label_2dbeec;
        case 0x2dbef0u: goto label_2dbef0;
        case 0x2dbef4u: goto label_2dbef4;
        case 0x2dbef8u: goto label_2dbef8;
        case 0x2dbefcu: goto label_2dbefc;
        case 0x2dbf00u: goto label_2dbf00;
        case 0x2dbf04u: goto label_2dbf04;
        case 0x2dbf08u: goto label_2dbf08;
        case 0x2dbf0cu: goto label_2dbf0c;
        case 0x2dbf10u: goto label_2dbf10;
        case 0x2dbf14u: goto label_2dbf14;
        case 0x2dbf18u: goto label_2dbf18;
        case 0x2dbf1cu: goto label_2dbf1c;
        case 0x2dbf20u: goto label_2dbf20;
        case 0x2dbf24u: goto label_2dbf24;
        case 0x2dbf28u: goto label_2dbf28;
        case 0x2dbf2cu: goto label_2dbf2c;
        case 0x2dbf30u: goto label_2dbf30;
        case 0x2dbf34u: goto label_2dbf34;
        case 0x2dbf38u: goto label_2dbf38;
        case 0x2dbf3cu: goto label_2dbf3c;
        case 0x2dbf40u: goto label_2dbf40;
        case 0x2dbf44u: goto label_2dbf44;
        case 0x2dbf48u: goto label_2dbf48;
        case 0x2dbf4cu: goto label_2dbf4c;
        case 0x2dbf50u: goto label_2dbf50;
        case 0x2dbf54u: goto label_2dbf54;
        case 0x2dbf58u: goto label_2dbf58;
        case 0x2dbf5cu: goto label_2dbf5c;
        case 0x2dbf60u: goto label_2dbf60;
        case 0x2dbf64u: goto label_2dbf64;
        case 0x2dbf68u: goto label_2dbf68;
        case 0x2dbf6cu: goto label_2dbf6c;
        case 0x2dbf70u: goto label_2dbf70;
        case 0x2dbf74u: goto label_2dbf74;
        case 0x2dbf78u: goto label_2dbf78;
        case 0x2dbf7cu: goto label_2dbf7c;
        case 0x2dbf80u: goto label_2dbf80;
        case 0x2dbf84u: goto label_2dbf84;
        case 0x2dbf88u: goto label_2dbf88;
        case 0x2dbf8cu: goto label_2dbf8c;
        case 0x2dbf90u: goto label_2dbf90;
        case 0x2dbf94u: goto label_2dbf94;
        case 0x2dbf98u: goto label_2dbf98;
        case 0x2dbf9cu: goto label_2dbf9c;
        case 0x2dbfa0u: goto label_2dbfa0;
        case 0x2dbfa4u: goto label_2dbfa4;
        case 0x2dbfa8u: goto label_2dbfa8;
        case 0x2dbfacu: goto label_2dbfac;
        case 0x2dbfb0u: goto label_2dbfb0;
        case 0x2dbfb4u: goto label_2dbfb4;
        case 0x2dbfb8u: goto label_2dbfb8;
        case 0x2dbfbcu: goto label_2dbfbc;
        case 0x2dbfc0u: goto label_2dbfc0;
        case 0x2dbfc4u: goto label_2dbfc4;
        case 0x2dbfc8u: goto label_2dbfc8;
        case 0x2dbfccu: goto label_2dbfcc;
        case 0x2dbfd0u: goto label_2dbfd0;
        case 0x2dbfd4u: goto label_2dbfd4;
        case 0x2dbfd8u: goto label_2dbfd8;
        case 0x2dbfdcu: goto label_2dbfdc;
        case 0x2dbfe0u: goto label_2dbfe0;
        case 0x2dbfe4u: goto label_2dbfe4;
        case 0x2dbfe8u: goto label_2dbfe8;
        case 0x2dbfecu: goto label_2dbfec;
        case 0x2dbff0u: goto label_2dbff0;
        case 0x2dbff4u: goto label_2dbff4;
        case 0x2dbff8u: goto label_2dbff8;
        case 0x2dbffcu: goto label_2dbffc;
        case 0x2dc000u: goto label_2dc000;
        case 0x2dc004u: goto label_2dc004;
        case 0x2dc008u: goto label_2dc008;
        case 0x2dc00cu: goto label_2dc00c;
        case 0x2dc010u: goto label_2dc010;
        case 0x2dc014u: goto label_2dc014;
        case 0x2dc018u: goto label_2dc018;
        case 0x2dc01cu: goto label_2dc01c;
        case 0x2dc020u: goto label_2dc020;
        case 0x2dc024u: goto label_2dc024;
        case 0x2dc028u: goto label_2dc028;
        case 0x2dc02cu: goto label_2dc02c;
        case 0x2dc030u: goto label_2dc030;
        case 0x2dc034u: goto label_2dc034;
        case 0x2dc038u: goto label_2dc038;
        case 0x2dc03cu: goto label_2dc03c;
        case 0x2dc040u: goto label_2dc040;
        case 0x2dc044u: goto label_2dc044;
        case 0x2dc048u: goto label_2dc048;
        case 0x2dc04cu: goto label_2dc04c;
        case 0x2dc050u: goto label_2dc050;
        case 0x2dc054u: goto label_2dc054;
        case 0x2dc058u: goto label_2dc058;
        case 0x2dc05cu: goto label_2dc05c;
        case 0x2dc060u: goto label_2dc060;
        case 0x2dc064u: goto label_2dc064;
        case 0x2dc068u: goto label_2dc068;
        case 0x2dc06cu: goto label_2dc06c;
        case 0x2dc070u: goto label_2dc070;
        case 0x2dc074u: goto label_2dc074;
        case 0x2dc078u: goto label_2dc078;
        case 0x2dc07cu: goto label_2dc07c;
        case 0x2dc080u: goto label_2dc080;
        case 0x2dc084u: goto label_2dc084;
        case 0x2dc088u: goto label_2dc088;
        case 0x2dc08cu: goto label_2dc08c;
        case 0x2dc090u: goto label_2dc090;
        case 0x2dc094u: goto label_2dc094;
        case 0x2dc098u: goto label_2dc098;
        case 0x2dc09cu: goto label_2dc09c;
        case 0x2dc0a0u: goto label_2dc0a0;
        case 0x2dc0a4u: goto label_2dc0a4;
        case 0x2dc0a8u: goto label_2dc0a8;
        case 0x2dc0acu: goto label_2dc0ac;
        case 0x2dc0b0u: goto label_2dc0b0;
        case 0x2dc0b4u: goto label_2dc0b4;
        case 0x2dc0b8u: goto label_2dc0b8;
        case 0x2dc0bcu: goto label_2dc0bc;
        case 0x2dc0c0u: goto label_2dc0c0;
        case 0x2dc0c4u: goto label_2dc0c4;
        case 0x2dc0c8u: goto label_2dc0c8;
        case 0x2dc0ccu: goto label_2dc0cc;
        case 0x2dc0d0u: goto label_2dc0d0;
        case 0x2dc0d4u: goto label_2dc0d4;
        case 0x2dc0d8u: goto label_2dc0d8;
        case 0x2dc0dcu: goto label_2dc0dc;
        case 0x2dc0e0u: goto label_2dc0e0;
        case 0x2dc0e4u: goto label_2dc0e4;
        case 0x2dc0e8u: goto label_2dc0e8;
        case 0x2dc0ecu: goto label_2dc0ec;
        case 0x2dc0f0u: goto label_2dc0f0;
        case 0x2dc0f4u: goto label_2dc0f4;
        case 0x2dc0f8u: goto label_2dc0f8;
        case 0x2dc0fcu: goto label_2dc0fc;
        case 0x2dc100u: goto label_2dc100;
        case 0x2dc104u: goto label_2dc104;
        case 0x2dc108u: goto label_2dc108;
        case 0x2dc10cu: goto label_2dc10c;
        case 0x2dc110u: goto label_2dc110;
        case 0x2dc114u: goto label_2dc114;
        case 0x2dc118u: goto label_2dc118;
        case 0x2dc11cu: goto label_2dc11c;
        case 0x2dc120u: goto label_2dc120;
        case 0x2dc124u: goto label_2dc124;
        case 0x2dc128u: goto label_2dc128;
        case 0x2dc12cu: goto label_2dc12c;
        case 0x2dc130u: goto label_2dc130;
        case 0x2dc134u: goto label_2dc134;
        case 0x2dc138u: goto label_2dc138;
        case 0x2dc13cu: goto label_2dc13c;
        case 0x2dc140u: goto label_2dc140;
        case 0x2dc144u: goto label_2dc144;
        case 0x2dc148u: goto label_2dc148;
        case 0x2dc14cu: goto label_2dc14c;
        case 0x2dc150u: goto label_2dc150;
        case 0x2dc154u: goto label_2dc154;
        case 0x2dc158u: goto label_2dc158;
        case 0x2dc15cu: goto label_2dc15c;
        case 0x2dc160u: goto label_2dc160;
        case 0x2dc164u: goto label_2dc164;
        case 0x2dc168u: goto label_2dc168;
        case 0x2dc16cu: goto label_2dc16c;
        case 0x2dc170u: goto label_2dc170;
        case 0x2dc174u: goto label_2dc174;
        case 0x2dc178u: goto label_2dc178;
        case 0x2dc17cu: goto label_2dc17c;
        case 0x2dc180u: goto label_2dc180;
        case 0x2dc184u: goto label_2dc184;
        case 0x2dc188u: goto label_2dc188;
        case 0x2dc18cu: goto label_2dc18c;
        case 0x2dc190u: goto label_2dc190;
        case 0x2dc194u: goto label_2dc194;
        case 0x2dc198u: goto label_2dc198;
        case 0x2dc19cu: goto label_2dc19c;
        case 0x2dc1a0u: goto label_2dc1a0;
        case 0x2dc1a4u: goto label_2dc1a4;
        case 0x2dc1a8u: goto label_2dc1a8;
        case 0x2dc1acu: goto label_2dc1ac;
        case 0x2dc1b0u: goto label_2dc1b0;
        case 0x2dc1b4u: goto label_2dc1b4;
        case 0x2dc1b8u: goto label_2dc1b8;
        case 0x2dc1bcu: goto label_2dc1bc;
        case 0x2dc1c0u: goto label_2dc1c0;
        case 0x2dc1c4u: goto label_2dc1c4;
        case 0x2dc1c8u: goto label_2dc1c8;
        case 0x2dc1ccu: goto label_2dc1cc;
        case 0x2dc1d0u: goto label_2dc1d0;
        case 0x2dc1d4u: goto label_2dc1d4;
        case 0x2dc1d8u: goto label_2dc1d8;
        case 0x2dc1dcu: goto label_2dc1dc;
        case 0x2dc1e0u: goto label_2dc1e0;
        case 0x2dc1e4u: goto label_2dc1e4;
        case 0x2dc1e8u: goto label_2dc1e8;
        case 0x2dc1ecu: goto label_2dc1ec;
        case 0x2dc1f0u: goto label_2dc1f0;
        case 0x2dc1f4u: goto label_2dc1f4;
        case 0x2dc1f8u: goto label_2dc1f8;
        case 0x2dc1fcu: goto label_2dc1fc;
        case 0x2dc200u: goto label_2dc200;
        case 0x2dc204u: goto label_2dc204;
        case 0x2dc208u: goto label_2dc208;
        case 0x2dc20cu: goto label_2dc20c;
        case 0x2dc210u: goto label_2dc210;
        case 0x2dc214u: goto label_2dc214;
        case 0x2dc218u: goto label_2dc218;
        case 0x2dc21cu: goto label_2dc21c;
        case 0x2dc220u: goto label_2dc220;
        case 0x2dc224u: goto label_2dc224;
        case 0x2dc228u: goto label_2dc228;
        case 0x2dc22cu: goto label_2dc22c;
        case 0x2dc230u: goto label_2dc230;
        case 0x2dc234u: goto label_2dc234;
        case 0x2dc238u: goto label_2dc238;
        case 0x2dc23cu: goto label_2dc23c;
        case 0x2dc240u: goto label_2dc240;
        case 0x2dc244u: goto label_2dc244;
        case 0x2dc248u: goto label_2dc248;
        case 0x2dc24cu: goto label_2dc24c;
        case 0x2dc250u: goto label_2dc250;
        case 0x2dc254u: goto label_2dc254;
        case 0x2dc258u: goto label_2dc258;
        case 0x2dc25cu: goto label_2dc25c;
        case 0x2dc260u: goto label_2dc260;
        case 0x2dc264u: goto label_2dc264;
        case 0x2dc268u: goto label_2dc268;
        case 0x2dc26cu: goto label_2dc26c;
        case 0x2dc270u: goto label_2dc270;
        case 0x2dc274u: goto label_2dc274;
        case 0x2dc278u: goto label_2dc278;
        case 0x2dc27cu: goto label_2dc27c;
        case 0x2dc280u: goto label_2dc280;
        case 0x2dc284u: goto label_2dc284;
        case 0x2dc288u: goto label_2dc288;
        case 0x2dc28cu: goto label_2dc28c;
        case 0x2dc290u: goto label_2dc290;
        case 0x2dc294u: goto label_2dc294;
        case 0x2dc298u: goto label_2dc298;
        case 0x2dc29cu: goto label_2dc29c;
        case 0x2dc2a0u: goto label_2dc2a0;
        case 0x2dc2a4u: goto label_2dc2a4;
        case 0x2dc2a8u: goto label_2dc2a8;
        case 0x2dc2acu: goto label_2dc2ac;
        case 0x2dc2b0u: goto label_2dc2b0;
        case 0x2dc2b4u: goto label_2dc2b4;
        case 0x2dc2b8u: goto label_2dc2b8;
        case 0x2dc2bcu: goto label_2dc2bc;
        case 0x2dc2c0u: goto label_2dc2c0;
        case 0x2dc2c4u: goto label_2dc2c4;
        case 0x2dc2c8u: goto label_2dc2c8;
        case 0x2dc2ccu: goto label_2dc2cc;
        case 0x2dc2d0u: goto label_2dc2d0;
        case 0x2dc2d4u: goto label_2dc2d4;
        case 0x2dc2d8u: goto label_2dc2d8;
        case 0x2dc2dcu: goto label_2dc2dc;
        case 0x2dc2e0u: goto label_2dc2e0;
        case 0x2dc2e4u: goto label_2dc2e4;
        case 0x2dc2e8u: goto label_2dc2e8;
        case 0x2dc2ecu: goto label_2dc2ec;
        case 0x2dc2f0u: goto label_2dc2f0;
        case 0x2dc2f4u: goto label_2dc2f4;
        case 0x2dc2f8u: goto label_2dc2f8;
        case 0x2dc2fcu: goto label_2dc2fc;
        case 0x2dc300u: goto label_2dc300;
        case 0x2dc304u: goto label_2dc304;
        case 0x2dc308u: goto label_2dc308;
        case 0x2dc30cu: goto label_2dc30c;
        case 0x2dc310u: goto label_2dc310;
        case 0x2dc314u: goto label_2dc314;
        case 0x2dc318u: goto label_2dc318;
        case 0x2dc31cu: goto label_2dc31c;
        case 0x2dc320u: goto label_2dc320;
        case 0x2dc324u: goto label_2dc324;
        case 0x2dc328u: goto label_2dc328;
        case 0x2dc32cu: goto label_2dc32c;
        case 0x2dc330u: goto label_2dc330;
        case 0x2dc334u: goto label_2dc334;
        case 0x2dc338u: goto label_2dc338;
        case 0x2dc33cu: goto label_2dc33c;
        case 0x2dc340u: goto label_2dc340;
        case 0x2dc344u: goto label_2dc344;
        case 0x2dc348u: goto label_2dc348;
        case 0x2dc34cu: goto label_2dc34c;
        case 0x2dc350u: goto label_2dc350;
        case 0x2dc354u: goto label_2dc354;
        case 0x2dc358u: goto label_2dc358;
        case 0x2dc35cu: goto label_2dc35c;
        case 0x2dc360u: goto label_2dc360;
        case 0x2dc364u: goto label_2dc364;
        case 0x2dc368u: goto label_2dc368;
        case 0x2dc36cu: goto label_2dc36c;
        case 0x2dc370u: goto label_2dc370;
        case 0x2dc374u: goto label_2dc374;
        case 0x2dc378u: goto label_2dc378;
        default: break;
    }

    ctx->pc = 0x2da5a0u;

label_2da5a0:
    // 0x2da5a0: 0x3c01fffd  lui         $at, 0xFFFD
    ctx->pc = 0x2da5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65533 << 16));
label_2da5a4:
    // 0x2da5a4: 0x34217ac0  ori         $at, $at, 0x7AC0
    ctx->pc = 0x2da5a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31424);
label_2da5a8:
    // 0x2da5a8: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x2da5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2da5ac:
    // 0x2da5ac: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2da5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_2da5b0:
    // 0x2da5b0: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x2da5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_2da5b4:
    // 0x2da5b4: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x2da5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_2da5b8:
    // 0x2da5b8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2da5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_2da5bc:
    // 0x2da5bc: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2da5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_2da5c0:
    // 0x2da5c0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2da5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2da5c4:
    // 0x2da5c4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2da5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2da5c8:
    // 0x2da5c8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2da5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2da5cc:
    // 0x2da5cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2da5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2da5d0:
    // 0x2da5d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2da5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2da5d4:
    // 0x2da5d4: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x2da5d4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2da5d8:
    // 0x2da5d8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2da5d8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2da5dc:
    // 0x2da5dc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2da5dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2da5e0:
    // 0x2da5e0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2da5e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2da5e4:
    // 0x2da5e4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2da5e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2da5e8:
    // 0x2da5e8: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x2da5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
label_2da5ec:
    // 0x2da5ec: 0xc0a0f58  jal         func_283D60
label_2da5f0:
    if (ctx->pc == 0x2DA5F0u) {
        ctx->pc = 0x2DA5F0u;
            // 0x2da5f0: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA5F4u;
        goto label_2da5f4;
    }
    ctx->pc = 0x2DA5ECu;
    SET_GPR_U32(ctx, 31, 0x2DA5F4u);
    ctx->pc = 0x2DA5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA5ECu;
            // 0x2da5f0: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA5F4u; }
        if (ctx->pc != 0x2DA5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA5F4u; }
        if (ctx->pc != 0x2DA5F4u) { return; }
    }
    ctx->pc = 0x2DA5F4u;
label_2da5f4:
    // 0x2da5f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2da5f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da5f8:
    // 0x2da5f8: 0x1240074d  beqz        $s2, . + 4 + (0x74D << 2)
label_2da5fc:
    if (ctx->pc == 0x2DA5FCu) {
        ctx->pc = 0x2DA600u;
        goto label_2da600;
    }
    ctx->pc = 0x2DA5F8u;
    {
        const bool branch_taken_0x2da5f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da5f8) {
            ctx->pc = 0x2DC330u;
            goto label_2dc330;
        }
    }
    ctx->pc = 0x2DA600u;
label_2da600:
    // 0x2da600: 0x8e590d00  lw          $t9, 0xD00($s2)
    ctx->pc = 0x2da600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3328)));
label_2da604:
    // 0x2da604: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x2da604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_2da608:
    // 0x2da608: 0x320f809  jalr        $t9
label_2da60c:
    if (ctx->pc == 0x2DA60Cu) {
        ctx->pc = 0x2DA60Cu;
            // 0x2da60c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA610u;
        goto label_2da610;
    }
    ctx->pc = 0x2DA608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DA610u);
        ctx->pc = 0x2DA60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA608u;
            // 0x2da60c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DA610u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DA610u; }
            if (ctx->pc != 0x2DA610u) { return; }
        }
        }
    }
    ctx->pc = 0x2DA610u;
label_2da610:
    // 0x2da610: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2da610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2da614:
    // 0x2da614: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2da614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da618:
    // 0x2da618: 0xc04a38a  jal         func_128E28
label_2da61c:
    if (ctx->pc == 0x2DA61Cu) {
        ctx->pc = 0x2DA61Cu;
            // 0x2da61c: 0x24a50b18  addiu       $a1, $a1, 0xB18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2840));
        ctx->pc = 0x2DA620u;
        goto label_2da620;
    }
    ctx->pc = 0x2DA618u;
    SET_GPR_U32(ctx, 31, 0x2DA620u);
    ctx->pc = 0x2DA61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA618u;
            // 0x2da61c: 0x24a50b18  addiu       $a1, $a1, 0xB18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA620u; }
        if (ctx->pc != 0x2DA620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA620u; }
        if (ctx->pc != 0x2DA620u) { return; }
    }
    ctx->pc = 0x2DA620u;
label_2da620:
    // 0x2da620: 0x14400743  bnez        $v0, . + 4 + (0x743 << 2)
label_2da624:
    if (ctx->pc == 0x2DA624u) {
        ctx->pc = 0x2DA628u;
        goto label_2da628;
    }
    ctx->pc = 0x2DA620u;
    {
        const bool branch_taken_0x2da620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da620) {
            ctx->pc = 0x2DC330u;
            goto label_2dc330;
        }
    }
    ctx->pc = 0x2DA628u;
label_2da628:
    // 0x2da628: 0x12400741  beqz        $s2, . + 4 + (0x741 << 2)
label_2da62c:
    if (ctx->pc == 0x2DA62Cu) {
        ctx->pc = 0x2DA630u;
        goto label_2da630;
    }
    ctx->pc = 0x2DA628u;
    {
        const bool branch_taken_0x2da628 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da628) {
            ctx->pc = 0x2DC330u;
            goto label_2dc330;
        }
    }
    ctx->pc = 0x2DA630u;
label_2da630:
    // 0x2da630: 0x8f829e3c  lw          $v0, -0x61C4($gp)
    ctx->pc = 0x2da630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942268)));
label_2da634:
    // 0x2da634: 0x3c10003d  lui         $s0, 0x3D
    ctx->pc = 0x2da634u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)61 << 16));
label_2da638:
    // 0x2da638: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
label_2da63c:
    if (ctx->pc == 0x2DA63Cu) {
        ctx->pc = 0x2DA63Cu;
            // 0x2da63c: 0x26107b60  addiu       $s0, $s0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31584));
        ctx->pc = 0x2DA640u;
        goto label_2da640;
    }
    ctx->pc = 0x2DA638u;
    {
        const bool branch_taken_0x2da638 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2DA63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA638u;
            // 0x2da63c: 0x26107b60  addiu       $s0, $s0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da638) {
            ctx->pc = 0x2DA644u;
            goto label_2da644;
        }
    }
    ctx->pc = 0x2DA640u;
label_2da640:
    // 0x2da640: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2da640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2da644:
    // 0x2da644: 0x8f829e3c  lw          $v0, -0x61C4($gp)
    ctx->pc = 0x2da644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942268)));
label_2da648:
    // 0x2da648: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2da648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2da64c:
    // 0x2da64c: 0xaf829e3c  sw          $v0, -0x61C4($gp)
    ctx->pc = 0x2da64cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942268), GPR_U32(ctx, 2));
label_2da650:
    // 0x2da650: 0x8f829e3c  lw          $v0, -0x61C4($gp)
    ctx->pc = 0x2da650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942268)));
label_2da654:
    // 0x2da654: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_2da658:
    if (ctx->pc == 0x2DA658u) {
        ctx->pc = 0x2DA658u;
            // 0x2da658: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA65Cu;
        goto label_2da65c;
    }
    ctx->pc = 0x2DA654u;
    {
        const bool branch_taken_0x2da654 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2DA658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA654u;
            // 0x2da658: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da654) {
            ctx->pc = 0x2DA660u;
            goto label_2da660;
        }
    }
    ctx->pc = 0x2DA65Cu;
label_2da65c:
    // 0x2da65c: 0xaf809e3c  sw          $zero, -0x61C4($gp)
    ctx->pc = 0x2da65cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942268), GPR_U32(ctx, 0));
label_2da660:
    // 0x2da660: 0xc0b62b4  jal         func_2D8AD0
label_2da664:
    if (ctx->pc == 0x2DA664u) {
        ctx->pc = 0x2DA668u;
        goto label_2da668;
    }
    ctx->pc = 0x2DA660u;
    SET_GPR_U32(ctx, 31, 0x2DA668u);
    ctx->pc = 0x2D8AD0u;
    if (runtime->hasFunction(0x2D8AD0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA668u; }
        if (ctx->pc != 0x2DA668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SystemMesStep__FP6CScene_0x2d8ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA668u; }
        if (ctx->pc != 0x2DA668u) { return; }
    }
    ctx->pc = 0x2DA668u;
label_2da668:
    // 0x2da668: 0x8fc22e60  lw          $v0, 0x2E60($fp)
    ctx->pc = 0x2da668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11872)));
label_2da66c:
    // 0x2da66c: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x2da66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_2da670:
    // 0x2da670: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2da670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2da674:
    // 0x2da674: 0xae420f80  sw          $v0, 0xF80($s2)
    ctx->pc = 0x2da674u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3968), GPR_U32(ctx, 2));
label_2da678:
    // 0x2da678: 0x8fc52e54  lw          $a1, 0x2E54($fp)
    ctx->pc = 0x2da678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11860)));
label_2da67c:
    // 0x2da67c: 0xc0a0e30  jal         func_2838C0
label_2da680:
    if (ctx->pc == 0x2DA680u) {
        ctx->pc = 0x2DA680u;
            // 0x2da680: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA684u;
        goto label_2da684;
    }
    ctx->pc = 0x2DA67Cu;
    SET_GPR_U32(ctx, 31, 0x2DA684u);
    ctx->pc = 0x2DA680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA67Cu;
            // 0x2da680: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA684u; }
        if (ctx->pc != 0x2DA684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA684u; }
        if (ctx->pc != 0x2DA684u) { return; }
    }
    ctx->pc = 0x2DA684u;
label_2da684:
    // 0x2da684: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2da684u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da688:
    // 0x2da688: 0x12600729  beqz        $s3, . + 4 + (0x729 << 2)
label_2da68c:
    if (ctx->pc == 0x2DA68Cu) {
        ctx->pc = 0x2DA68Cu;
            // 0x2da68c: 0x3c0301f6  lui         $v1, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x2DA690u;
        goto label_2da690;
    }
    ctx->pc = 0x2DA688u;
    {
        const bool branch_taken_0x2da688 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA688u;
            // 0x2da68c: 0x3c0301f6  lui         $v1, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da688) {
            ctx->pc = 0x2DC330u;
            goto label_2dc330;
        }
    }
    ctx->pc = 0x2DA690u;
label_2da690:
    // 0x2da690: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x2da690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2da694:
    // 0x2da694: 0x246388f0  addiu       $v1, $v1, -0x7710
    ctx->pc = 0x2da694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936816));
label_2da698:
    // 0x2da698: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2da698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2da69c:
    // 0x2da69c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2da69cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2da6a0:
    // 0x2da6a0: 0xc04c678  jal         func_1319E0
label_2da6a4:
    if (ctx->pc == 0x2DA6A4u) {
        ctx->pc = 0x2DA6A4u;
            // 0x2da6a4: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->pc = 0x2DA6A8u;
        goto label_2da6a8;
    }
    ctx->pc = 0x2DA6A0u;
    SET_GPR_U32(ctx, 31, 0x2DA6A8u);
    ctx->pc = 0x2DA6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA6A0u;
            // 0x2da6a4: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319E0u;
    if (runtime->hasFunction(0x1319E0u)) {
        auto targetFn = runtime->lookupFunction(0x1319E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA6A8u; }
        if (ctx->pc != 0x2DA6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngle__15mgCCameraFollowFv_0x1319e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA6A8u; }
        if (ctx->pc != 0x2DA6A8u) { return; }
    }
    ctx->pc = 0x2DA6A8u;
label_2da6a8:
    // 0x2da6a8: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x2da6a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_2da6ac:
    // 0x2da6ac: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2da6b0:
    if (ctx->pc == 0x2DA6B0u) {
        ctx->pc = 0x2DA6B0u;
            // 0x2da6b0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2DA6B4u;
        goto label_2da6b4;
    }
    ctx->pc = 0x2DA6ACu;
    {
        const bool branch_taken_0x2da6ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA6ACu;
            // 0x2da6b0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da6ac) {
            ctx->pc = 0x2DA6C4u;
            goto label_2da6c4;
        }
    }
    ctx->pc = 0x2DA6B4u;
label_2da6b4:
    // 0x2da6b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da6b8:
    // 0x2da6b8: 0xc0bb548  jal         func_2ED520
label_2da6bc:
    if (ctx->pc == 0x2DA6BCu) {
        ctx->pc = 0x2DA6BCu;
            // 0x2da6bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA6C0u;
        goto label_2da6c0;
    }
    ctx->pc = 0x2DA6B8u;
    SET_GPR_U32(ctx, 31, 0x2DA6C0u);
    ctx->pc = 0x2DA6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA6B8u;
            // 0x2da6bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA6C0u; }
        if (ctx->pc != 0x2DA6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA6C0u; }
        if (ctx->pc != 0x2DA6C0u) { return; }
    }
    ctx->pc = 0x2DA6C0u;
label_2da6c0:
    // 0x2da6c0: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x2da6c0u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_2da6c4:
    // 0x2da6c4: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2da6c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2da6c8:
    // 0x2da6c8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2da6cc:
    if (ctx->pc == 0x2DA6CCu) {
        ctx->pc = 0x2DA6CCu;
            // 0x2da6cc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x2DA6D0u;
        goto label_2da6d0;
    }
    ctx->pc = 0x2DA6C8u;
    {
        const bool branch_taken_0x2da6c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA6C8u;
            // 0x2da6cc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da6c8) {
            ctx->pc = 0x2DA6E4u;
            goto label_2da6e4;
        }
    }
    ctx->pc = 0x2DA6D0u;
label_2da6d0:
    // 0x2da6d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da6d4:
    // 0x2da6d4: 0xc0bb548  jal         func_2ED520
label_2da6d8:
    if (ctx->pc == 0x2DA6D8u) {
        ctx->pc = 0x2DA6D8u;
            // 0x2da6d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DA6DCu;
        goto label_2da6dc;
    }
    ctx->pc = 0x2DA6D4u;
    SET_GPR_U32(ctx, 31, 0x2DA6DCu);
    ctx->pc = 0x2DA6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA6D4u;
            // 0x2da6d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA6DCu; }
        if (ctx->pc != 0x2DA6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA6DCu; }
        if (ctx->pc != 0x2DA6DCu) { return; }
    }
    ctx->pc = 0x2DA6DCu;
label_2da6dc:
    // 0x2da6dc: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2da6dcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2da6e0:
    // 0x2da6e0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2da6e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2da6e4:
    // 0x2da6e4: 0xc047964  jal         func_11E590
label_2da6e8:
    if (ctx->pc == 0x2DA6E8u) {
        ctx->pc = 0x2DA6ECu;
        goto label_2da6ec;
    }
    ctx->pc = 0x2DA6E4u;
    SET_GPR_U32(ctx, 31, 0x2DA6ECu);
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA6ECu; }
        if (ctx->pc != 0x2DA6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA6ECu; }
        if (ctx->pc != 0x2DA6ECu) { return; }
    }
    ctx->pc = 0x2DA6ECu;
label_2da6ec:
    // 0x2da6ec: 0x4600c502  mul.s       $f20, $f24, $f0
    ctx->pc = 0x2da6ecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
label_2da6f0:
    // 0x2da6f0: 0xc047a42  jal         func_11E908
label_2da6f4:
    if (ctx->pc == 0x2DA6F4u) {
        ctx->pc = 0x2DA6F4u;
            // 0x2da6f4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x2DA6F8u;
        goto label_2da6f8;
    }
    ctx->pc = 0x2DA6F0u;
    SET_GPR_U32(ctx, 31, 0x2DA6F8u);
    ctx->pc = 0x2DA6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA6F0u;
            // 0x2da6f4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA6F8u; }
        if (ctx->pc != 0x2DA6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA6F8u; }
        if (ctx->pc != 0x2DA6F8u) { return; }
    }
    ctx->pc = 0x2DA6F8u;
label_2da6f8:
    // 0x2da6f8: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x2da6f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_2da6fc:
    // 0x2da6fc: 0x4600a5c0  add.s       $f23, $f20, $f0
    ctx->pc = 0x2da6fcu;
    ctx->f[23] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2da700:
    // 0x2da700: 0xc047a42  jal         func_11E908
label_2da704:
    if (ctx->pc == 0x2DA704u) {
        ctx->pc = 0x2DA704u;
            // 0x2da704: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x2DA708u;
        goto label_2da708;
    }
    ctx->pc = 0x2DA700u;
    SET_GPR_U32(ctx, 31, 0x2DA708u);
    ctx->pc = 0x2DA704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA700u;
            // 0x2da704: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA708u; }
        if (ctx->pc != 0x2DA708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA708u; }
        if (ctx->pc != 0x2DA708u) { return; }
    }
    ctx->pc = 0x2DA708u;
label_2da708:
    // 0x2da708: 0x4600c047  neg.s       $f1, $f24
    ctx->pc = 0x2da708u;
    ctx->f[1] = FPU_NEG_S(ctx->f[24]);
label_2da70c:
    // 0x2da70c: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x2da70cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2da710:
    // 0x2da710: 0xc047964  jal         func_11E590
label_2da714:
    if (ctx->pc == 0x2DA714u) {
        ctx->pc = 0x2DA714u;
            // 0x2da714: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x2DA718u;
        goto label_2da718;
    }
    ctx->pc = 0x2DA710u;
    SET_GPR_U32(ctx, 31, 0x2DA718u);
    ctx->pc = 0x2DA714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA710u;
            // 0x2da714: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA718u; }
        if (ctx->pc != 0x2DA718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA718u; }
        if (ctx->pc != 0x2DA718u) { return; }
    }
    ctx->pc = 0x2DA718u;
label_2da718:
    // 0x2da718: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x2da718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_2da71c:
    // 0x2da71c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2da71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2da720:
    // 0x2da720: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x2da720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
label_2da724:
    // 0x2da724: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2da724u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2da728:
    // 0x2da728: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2da728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2da72c:
    // 0x2da72c: 0x0  nop
    ctx->pc = 0x2da72cu;
    // NOP
label_2da730:
    // 0x2da730: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x2da730u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_2da734:
    // 0x2da734: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2da738:
    if (ctx->pc == 0x2DA738u) {
        ctx->pc = 0x2DA738u;
            // 0x2da738: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x2DA73Cu;
        goto label_2da73c;
    }
    ctx->pc = 0x2DA734u;
    {
        const bool branch_taken_0x2da734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA734u;
            // 0x2da738: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da734) {
            ctx->pc = 0x2DA794u;
            goto label_2da794;
        }
    }
    ctx->pc = 0x2DA73Cu;
label_2da73c:
    // 0x2da73c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2da73cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2da740:
    // 0x2da740: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x2da740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2da744:
    // 0x2da744: 0xc052cf0  jal         func_14B3C0
label_2da748:
    if (ctx->pc == 0x2DA748u) {
        ctx->pc = 0x2DA748u;
            // 0x2da748: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x2DA74Cu;
        goto label_2da74c;
    }
    ctx->pc = 0x2DA744u;
    SET_GPR_U32(ctx, 31, 0x2DA74Cu);
    ctx->pc = 0x2DA748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA744u;
            // 0x2da748: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA74Cu; }
        if (ctx->pc != 0x2DA74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA74Cu; }
        if (ctx->pc != 0x2DA74Cu) { return; }
    }
    ctx->pc = 0x2DA74Cu;
label_2da74c:
    // 0x2da74c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2da750:
    if (ctx->pc == 0x2DA750u) {
        ctx->pc = 0x2DA750u;
            // 0x2da750: 0x3c024040  lui         $v0, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
        ctx->pc = 0x2DA754u;
        goto label_2da754;
    }
    ctx->pc = 0x2DA74Cu;
    {
        const bool branch_taken_0x2da74c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA74Cu;
            // 0x2da750: 0x3c024040  lui         $v0, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da74c) {
            ctx->pc = 0x2DA780u;
            goto label_2da780;
        }
    }
    ctx->pc = 0x2DA754u;
label_2da754:
    // 0x2da754: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2da754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2da758:
    // 0x2da758: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2da758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2da75c:
    // 0x2da75c: 0xc052cf0  jal         func_14B3C0
label_2da760:
    if (ctx->pc == 0x2DA760u) {
        ctx->pc = 0x2DA760u;
            // 0x2da760: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x2DA764u;
        goto label_2da764;
    }
    ctx->pc = 0x2DA75Cu;
    SET_GPR_U32(ctx, 31, 0x2DA764u);
    ctx->pc = 0x2DA760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA75Cu;
            // 0x2da760: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA764u; }
        if (ctx->pc != 0x2DA764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA764u; }
        if (ctx->pc != 0x2DA764u) { return; }
    }
    ctx->pc = 0x2DA764u;
label_2da764:
    // 0x2da764: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2da768:
    if (ctx->pc == 0x2DA768u) {
        ctx->pc = 0x2DA76Cu;
        goto label_2da76c;
    }
    ctx->pc = 0x2DA764u;
    {
        const bool branch_taken_0x2da764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da764) {
            ctx->pc = 0x2DA794u;
            goto label_2da794;
        }
    }
    ctx->pc = 0x2DA76Cu;
label_2da76c:
    // 0x2da76c: 0x8f839e0c  lw          $v1, -0x61F4($gp)
    ctx->pc = 0x2da76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942220)));
label_2da770:
    // 0x2da770: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2da770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2da774:
    // 0x2da774: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2da778:
    if (ctx->pc == 0x2DA778u) {
        ctx->pc = 0x2DA77Cu;
        goto label_2da77c;
    }
    ctx->pc = 0x2DA774u;
    {
        const bool branch_taken_0x2da774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2da774) {
            ctx->pc = 0x2DA794u;
            goto label_2da794;
        }
    }
    ctx->pc = 0x2DA77Cu;
label_2da77c:
    // 0x2da77c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2da77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_2da780:
    // 0x2da780: 0xaf809e14  sw          $zero, -0x61EC($gp)
    ctx->pc = 0x2da780u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942228), GPR_U32(ctx, 0));
label_2da784:
    // 0x2da784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2da788:
    // 0x2da788: 0x0  nop
    ctx->pc = 0x2da788u;
    // NOP
label_2da78c:
    // 0x2da78c: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x2da78cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_2da790:
    // 0x2da790: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2da790u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2da794:
    // 0x2da794: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x2da794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_2da798:
    // 0x2da798: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2da798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2da79c:
    // 0x2da79c: 0x24428ac0  addiu       $v0, $v0, -0x7540
    ctx->pc = 0x2da79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937280));
label_2da7a0:
    // 0x2da7a0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2da7a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2da7a4:
    // 0x2da7a4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2da7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_2da7a8:
    // 0x2da7a8: 0xe7b80150  swc1        $f24, 0x150($sp)
    ctx->pc = 0x2da7a8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_2da7ac:
    // 0x2da7ac: 0xc04bff4  jal         func_12FFD0
label_2da7b0:
    if (ctx->pc == 0x2DA7B0u) {
        ctx->pc = 0x2DA7B0u;
            // 0x2da7b0: 0xe7b60154  swc1        $f22, 0x154($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
        ctx->pc = 0x2DA7B4u;
        goto label_2da7b4;
    }
    ctx->pc = 0x2DA7ACu;
    SET_GPR_U32(ctx, 31, 0x2DA7B4u);
    ctx->pc = 0x2DA7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA7ACu;
            // 0x2da7b0: 0xe7b60154  swc1        $f22, 0x154($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA7B4u; }
        if (ctx->pc != 0x2DA7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA7B4u; }
        if (ctx->pc != 0x2DA7B4u) { return; }
    }
    ctx->pc = 0x2DA7B4u;
label_2da7b4:
    // 0x2da7b4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2da7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_2da7b8:
    // 0x2da7b8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2da7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_2da7bc:
    // 0x2da7bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2da7bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2da7c0:
    // 0x2da7c0: 0x0  nop
    ctx->pc = 0x2da7c0u;
    // NOP
label_2da7c4:
    // 0x2da7c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2da7c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2da7c8:
    // 0x2da7c8: 0x0  nop
    ctx->pc = 0x2da7c8u;
    // NOP
label_2da7cc:
    // 0x2da7cc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2da7d0:
    if (ctx->pc == 0x2DA7D0u) {
        ctx->pc = 0x2DA7D4u;
        goto label_2da7d4;
    }
    ctx->pc = 0x2DA7CCu;
    {
        const bool branch_taken_0x2da7cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da7cc) {
            ctx->pc = 0x2DA7E4u;
            goto label_2da7e4;
        }
    }
    ctx->pc = 0x2DA7D4u;
label_2da7d4:
    // 0x2da7d4: 0x8f829e14  lw          $v0, -0x61EC($gp)
    ctx->pc = 0x2da7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942228)));
label_2da7d8:
    // 0x2da7d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2da7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2da7dc:
    // 0x2da7dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_2da7e0:
    if (ctx->pc == 0x2DA7E0u) {
        ctx->pc = 0x2DA7E0u;
            // 0x2da7e0: 0xaf829e14  sw          $v0, -0x61EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942228), GPR_U32(ctx, 2));
        ctx->pc = 0x2DA7E4u;
        goto label_2da7e4;
    }
    ctx->pc = 0x2DA7DCu;
    {
        const bool branch_taken_0x2da7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA7DCu;
            // 0x2da7e0: 0xaf829e14  sw          $v0, -0x61EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da7dc) {
            ctx->pc = 0x2DA7F0u;
            goto label_2da7f0;
        }
    }
    ctx->pc = 0x2DA7E4u;
label_2da7e4:
    // 0x2da7e4: 0x8f829e14  lw          $v0, -0x61EC($gp)
    ctx->pc = 0x2da7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942228)));
label_2da7e8:
    // 0x2da7e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2da7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2da7ec:
    // 0x2da7ec: 0xaf829e14  sw          $v0, -0x61EC($gp)
    ctx->pc = 0x2da7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942228), GPR_U32(ctx, 2));
label_2da7f0:
    // 0x2da7f0: 0x8f839e14  lw          $v1, -0x61EC($gp)
    ctx->pc = 0x2da7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942228)));
label_2da7f4:
    // 0x2da7f4: 0x2861001f  slti        $at, $v1, 0x1F
    ctx->pc = 0x2da7f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
label_2da7f8:
    // 0x2da7f8: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_2da7fc:
    if (ctx->pc == 0x2DA7FCu) {
        ctx->pc = 0x2DA7FCu;
            // 0x2da7fc: 0x2861001f  slti        $at, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->pc = 0x2DA800u;
        goto label_2da800;
    }
    ctx->pc = 0x2DA7F8u;
    {
        const bool branch_taken_0x2da7f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA7F8u;
            // 0x2da7fc: 0x2861001f  slti        $at, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da7f8) {
            ctx->pc = 0x2DA814u;
            goto label_2da814;
        }
    }
    ctx->pc = 0x2DA800u;
label_2da800:
    // 0x2da800: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x2da800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_2da804:
    // 0x2da804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2da808:
    // 0x2da808: 0x0  nop
    ctx->pc = 0x2da808u;
    // NOP
label_2da80c:
    // 0x2da80c: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x2da80cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_2da810:
    // 0x2da810: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2da810u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2da814:
    // 0x2da814: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2da818:
    if (ctx->pc == 0x2DA818u) {
        ctx->pc = 0x2DA818u;
            // 0x2da818: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x2DA81Cu;
        goto label_2da81c;
    }
    ctx->pc = 0x2DA814u;
    {
        const bool branch_taken_0x2da814 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA814u;
            // 0x2da818: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da814) {
            ctx->pc = 0x2DA820u;
            goto label_2da820;
        }
    }
    ctx->pc = 0x2DA81Cu;
label_2da81c:
    // 0x2da81c: 0xaf829e14  sw          $v0, -0x61EC($gp)
    ctx->pc = 0x2da81cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942228), GPR_U32(ctx, 2));
label_2da820:
    // 0x2da820: 0x8f829e14  lw          $v0, -0x61EC($gp)
    ctx->pc = 0x2da820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942228)));
label_2da824:
    // 0x2da824: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_2da828:
    if (ctx->pc == 0x2DA828u) {
        ctx->pc = 0x2DA828u;
            // 0x2da828: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA82Cu;
        goto label_2da82c;
    }
    ctx->pc = 0x2DA824u;
    {
        const bool branch_taken_0x2da824 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2DA828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA824u;
            // 0x2da828: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da824) {
            ctx->pc = 0x2DA830u;
            goto label_2da830;
        }
    }
    ctx->pc = 0x2DA82Cu;
label_2da82c:
    // 0x2da82c: 0xaf809e14  sw          $zero, -0x61EC($gp)
    ctx->pc = 0x2da82cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942228), GPR_U32(ctx, 0));
label_2da830:
    // 0x2da830: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2da830u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2da834:
    // 0x2da834: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2da834u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2da838:
    // 0x2da838: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_2da83c:
    if (ctx->pc == 0x2DA83Cu) {
        ctx->pc = 0x2DA83Cu;
            // 0x2da83c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA840u;
        goto label_2da840;
    }
    ctx->pc = 0x2DA838u;
    {
        const bool branch_taken_0x2da838 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA838u;
            // 0x2da83c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da838) {
            ctx->pc = 0x2DA880u;
            goto label_2da880;
        }
    }
    ctx->pc = 0x2DA840u;
label_2da840:
    // 0x2da840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da844:
    // 0x2da844: 0xc0bb538  jal         func_2ED4E0
label_2da848:
    if (ctx->pc == 0x2DA848u) {
        ctx->pc = 0x2DA848u;
            // 0x2da848: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x2DA84Cu;
        goto label_2da84c;
    }
    ctx->pc = 0x2DA844u;
    SET_GPR_U32(ctx, 31, 0x2DA84Cu);
    ctx->pc = 0x2DA848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA844u;
            // 0x2da848: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA84Cu; }
        if (ctx->pc != 0x2DA84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA84Cu; }
        if (ctx->pc != 0x2DA84Cu) { return; }
    }
    ctx->pc = 0x2DA84Cu;
label_2da84c:
    // 0x2da84c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2da84cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da850:
    // 0x2da850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da854:
    // 0x2da854: 0xc0bb538  jal         func_2ED4E0
label_2da858:
    if (ctx->pc == 0x2DA858u) {
        ctx->pc = 0x2DA858u;
            // 0x2da858: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2DA85Cu;
        goto label_2da85c;
    }
    ctx->pc = 0x2DA854u;
    SET_GPR_U32(ctx, 31, 0x2DA85Cu);
    ctx->pc = 0x2DA858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA854u;
            // 0x2da858: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA85Cu; }
        if (ctx->pc != 0x2DA85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA85Cu; }
        if (ctx->pc != 0x2DA85Cu) { return; }
    }
    ctx->pc = 0x2DA85Cu;
label_2da85c:
    // 0x2da85c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2da85cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da860:
    // 0x2da860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da864:
    // 0x2da864: 0xc0bb538  jal         func_2ED4E0
label_2da868:
    if (ctx->pc == 0x2DA868u) {
        ctx->pc = 0x2DA868u;
            // 0x2da868: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2DA86Cu;
        goto label_2da86c;
    }
    ctx->pc = 0x2DA864u;
    SET_GPR_U32(ctx, 31, 0x2DA86Cu);
    ctx->pc = 0x2DA868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA864u;
            // 0x2da868: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA86Cu; }
        if (ctx->pc != 0x2DA86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA86Cu; }
        if (ctx->pc != 0x2DA86Cu) { return; }
    }
    ctx->pc = 0x2DA86Cu;
label_2da86c:
    // 0x2da86c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2da86cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da870:
    // 0x2da870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da874:
    // 0x2da874: 0xc0bb538  jal         func_2ED4E0
label_2da878:
    if (ctx->pc == 0x2DA878u) {
        ctx->pc = 0x2DA878u;
            // 0x2da878: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2DA87Cu;
        goto label_2da87c;
    }
    ctx->pc = 0x2DA874u;
    SET_GPR_U32(ctx, 31, 0x2DA87Cu);
    ctx->pc = 0x2DA878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA874u;
            // 0x2da878: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA87Cu; }
        if (ctx->pc != 0x2DA87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA87Cu; }
        if (ctx->pc != 0x2DA87Cu) { return; }
    }
    ctx->pc = 0x2DA87Cu;
label_2da87c:
    // 0x2da87c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2da87cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da880:
    // 0x2da880: 0x16c00007  bnez        $s6, . + 4 + (0x7 << 2)
label_2da884:
    if (ctx->pc == 0x2DA884u) {
        ctx->pc = 0x2DA888u;
        goto label_2da888;
    }
    ctx->pc = 0x2DA880u;
    {
        const bool branch_taken_0x2da880 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da880) {
            ctx->pc = 0x2DA8A0u;
            goto label_2da8a0;
        }
    }
    ctx->pc = 0x2DA888u;
label_2da888:
    // 0x2da888: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
label_2da88c:
    if (ctx->pc == 0x2DA88Cu) {
        ctx->pc = 0x2DA890u;
        goto label_2da890;
    }
    ctx->pc = 0x2DA888u;
    {
        const bool branch_taken_0x2da888 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da888) {
            ctx->pc = 0x2DA8A0u;
            goto label_2da8a0;
        }
    }
    ctx->pc = 0x2DA890u;
label_2da890:
    // 0x2da890: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_2da894:
    if (ctx->pc == 0x2DA894u) {
        ctx->pc = 0x2DA898u;
        goto label_2da898;
    }
    ctx->pc = 0x2DA890u;
    {
        const bool branch_taken_0x2da890 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da890) {
            ctx->pc = 0x2DA8A0u;
            goto label_2da8a0;
        }
    }
    ctx->pc = 0x2DA898u;
label_2da898:
    // 0x2da898: 0x12200042  beqz        $s1, . + 4 + (0x42 << 2)
label_2da89c:
    if (ctx->pc == 0x2DA89Cu) {
        ctx->pc = 0x2DA8A0u;
        goto label_2da8a0;
    }
    ctx->pc = 0x2DA898u;
    {
        const bool branch_taken_0x2da898 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da898) {
            ctx->pc = 0x2DA9A4u;
            goto label_2da9a4;
        }
    }
    ctx->pc = 0x2DA8A0u;
label_2da8a0:
    // 0x2da8a0: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2da8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_2da8a4:
    // 0x2da8a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2da8a8:
    // 0x2da8a8: 0x24a588f0  addiu       $a1, $a1, -0x7710
    ctx->pc = 0x2da8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936816));
label_2da8ac:
    // 0x2da8ac: 0xc06c408  jal         func_1B1020
label_2da8b0:
    if (ctx->pc == 0x2DA8B0u) {
        ctx->pc = 0x2DA8B0u;
            // 0x2da8b0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA8B4u;
        goto label_2da8b4;
    }
    ctx->pc = 0x2DA8ACu;
    SET_GPR_U32(ctx, 31, 0x2DA8B4u);
    ctx->pc = 0x2DA8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA8ACu;
            // 0x2da8b0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1020u;
    if (runtime->hasFunction(0x1B1020u)) {
        auto targetFn = runtime->lookupFunction(0x1B1020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA8B4u; }
        if (ctx->pc != 0x2DA8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditPos__8CEditMapFPfPf_0x1b1020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA8B4u; }
        if (ctx->pc != 0x2DA8B4u) { return; }
    }
    ctx->pc = 0x2DA8B4u;
label_2da8b4:
    // 0x2da8b4: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x2da8b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_2da8b8:
    // 0x2da8b8: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_2da8bc:
    if (ctx->pc == 0x2DA8BCu) {
        ctx->pc = 0x2DA8BCu;
            // 0x2da8bc: 0x4600c5c6  mov.s       $f23, $f24 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x2DA8C0u;
        goto label_2da8c0;
    }
    ctx->pc = 0x2DA8B8u;
    {
        const bool branch_taken_0x2da8b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA8B8u;
            // 0x2da8bc: 0x4600c5c6  mov.s       $f23, $f24 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da8b8) {
            ctx->pc = 0x2DA8C8u;
            goto label_2da8c8;
        }
    }
    ctx->pc = 0x2DA8C0u;
label_2da8c0:
    // 0x2da8c0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2da8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2da8c4:
    // 0x2da8c4: 0x4482c000  mtc1        $v0, $f24
    ctx->pc = 0x2da8c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_2da8c8:
    // 0x2da8c8: 0x12c00002  beqz        $s6, . + 4 + (0x2 << 2)
label_2da8cc:
    if (ctx->pc == 0x2DA8CCu) {
        ctx->pc = 0x2DA8CCu;
            // 0x2da8cc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x2DA8D0u;
        goto label_2da8d0;
    }
    ctx->pc = 0x2DA8C8u;
    {
        const bool branch_taken_0x2da8c8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA8C8u;
            // 0x2da8cc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da8c8) {
            ctx->pc = 0x2DA8D4u;
            goto label_2da8d4;
        }
    }
    ctx->pc = 0x2DA8D0u;
label_2da8d0:
    // 0x2da8d0: 0x4482b800  mtc1        $v0, $f23
    ctx->pc = 0x2da8d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_2da8d4:
    // 0x2da8d4: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_2da8d8:
    if (ctx->pc == 0x2DA8D8u) {
        ctx->pc = 0x2DA8D8u;
            // 0x2da8d8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x2DA8DCu;
        goto label_2da8dc;
    }
    ctx->pc = 0x2DA8D4u;
    {
        const bool branch_taken_0x2da8d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA8D4u;
            // 0x2da8d8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da8d4) {
            ctx->pc = 0x2DA8E0u;
            goto label_2da8e0;
        }
    }
    ctx->pc = 0x2DA8DCu;
label_2da8dc:
    // 0x2da8dc: 0x4482c000  mtc1        $v0, $f24
    ctx->pc = 0x2da8dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_2da8e0:
    // 0x2da8e0: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_2da8e4:
    if (ctx->pc == 0x2DA8E4u) {
        ctx->pc = 0x2DA8E4u;
            // 0x2da8e4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x2DA8E8u;
        goto label_2da8e8;
    }
    ctx->pc = 0x2DA8E0u;
    {
        const bool branch_taken_0x2da8e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA8E0u;
            // 0x2da8e4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da8e0) {
            ctx->pc = 0x2DA8F4u;
            goto label_2da8f4;
        }
    }
    ctx->pc = 0x2DA8E8u;
label_2da8e8:
    // 0x2da8e8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2da8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2da8ec:
    // 0x2da8ec: 0x4482b800  mtc1        $v0, $f23
    ctx->pc = 0x2da8ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_2da8f0:
    // 0x2da8f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2da8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2da8f4:
    // 0x2da8f4: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x2da8f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2da8f8:
    // 0x2da8f8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2da8f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2da8fc:
    // 0x2da8fc: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x2da8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_2da900:
    // 0x2da900: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x2da900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2da904:
    // 0x2da904: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2da904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_2da908:
    // 0x2da908: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2da908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2da90c:
    // 0x2da90c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2da90cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2da910:
    // 0x2da910: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2da910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2da914:
    // 0x2da914: 0xc04c344  jal         func_130D10
label_2da918:
    if (ctx->pc == 0x2DA918u) {
        ctx->pc = 0x2DA918u;
            // 0x2da918: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x2DA91Cu;
        goto label_2da91c;
    }
    ctx->pc = 0x2DA914u;
    SET_GPR_U32(ctx, 31, 0x2DA91Cu);
    ctx->pc = 0x2DA918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA914u;
            // 0x2da918: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130D10u;
    if (runtime->hasFunction(0x130D10u)) {
        auto targetFn = runtime->lookupFunction(0x130D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA91Cu; }
        if (ctx->pc != 0x2DA91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleCmp__Ffff_0x130d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA91Cu; }
        if (ctx->pc != 0x2DA91Cu) { return; }
    }
    ctx->pc = 0x2DA91Cu;
label_2da91c:
    // 0x2da91c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2da920:
    if (ctx->pc == 0x2DA920u) {
        ctx->pc = 0x2DA920u;
            // 0x2da920: 0x3c033f49  lui         $v1, 0x3F49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
        ctx->pc = 0x2DA924u;
        goto label_2da924;
    }
    ctx->pc = 0x2DA91Cu;
    {
        const bool branch_taken_0x2da91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA91Cu;
            // 0x2da920: 0x3c033f49  lui         $v1, 0x3F49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da91c) {
            ctx->pc = 0x2DA930u;
            goto label_2da930;
        }
    }
    ctx->pc = 0x2DA924u;
label_2da924:
    // 0x2da924: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2da924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2da928:
    // 0x2da928: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2da928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2da92c:
    // 0x2da92c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2da92cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2da930:
    // 0x2da930: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2da930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_2da934:
    // 0x2da934: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2da934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_2da938:
    // 0x2da938: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2da938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2da93c:
    // 0x2da93c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2da93cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2da940:
    // 0x2da940: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2da940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2da944:
    // 0x2da944: 0xc04c344  jal         func_130D10
label_2da948:
    if (ctx->pc == 0x2DA948u) {
        ctx->pc = 0x2DA948u;
            // 0x2da948: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x2DA94Cu;
        goto label_2da94c;
    }
    ctx->pc = 0x2DA944u;
    SET_GPR_U32(ctx, 31, 0x2DA94Cu);
    ctx->pc = 0x2DA948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA944u;
            // 0x2da948: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130D10u;
    if (runtime->hasFunction(0x130D10u)) {
        auto targetFn = runtime->lookupFunction(0x130D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA94Cu; }
        if (ctx->pc != 0x2DA94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleCmp__Ffff_0x130d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA94Cu; }
        if (ctx->pc != 0x2DA94Cu) { return; }
    }
    ctx->pc = 0x2DA94Cu;
label_2da94c:
    // 0x2da94c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2da950:
    if (ctx->pc == 0x2DA950u) {
        ctx->pc = 0x2DA950u;
            // 0x2da950: 0x3c023f49  lui         $v0, 0x3F49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
        ctx->pc = 0x2DA954u;
        goto label_2da954;
    }
    ctx->pc = 0x2DA94Cu;
    {
        const bool branch_taken_0x2da94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA94Cu;
            // 0x2da950: 0x3c023f49  lui         $v0, 0x3F49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da94c) {
            ctx->pc = 0x2DA964u;
            goto label_2da964;
        }
    }
    ctx->pc = 0x2DA954u;
label_2da954:
    // 0x2da954: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2da954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2da958:
    // 0x2da958: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2da958u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2da95c:
    // 0x2da95c: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x2da95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2da960:
    // 0x2da960: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x2da960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_2da964:
    // 0x2da964: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x2da964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2da968:
    // 0x2da968: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x2da968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
label_2da96c:
    // 0x2da96c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2da96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2da970:
    // 0x2da970: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2da970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2da974:
    // 0x2da974: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2da974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2da978:
    // 0x2da978: 0xc04c344  jal         func_130D10
label_2da97c:
    if (ctx->pc == 0x2DA97Cu) {
        ctx->pc = 0x2DA97Cu;
            // 0x2da97c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x2DA980u;
        goto label_2da980;
    }
    ctx->pc = 0x2DA978u;
    SET_GPR_U32(ctx, 31, 0x2DA980u);
    ctx->pc = 0x2DA97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA978u;
            // 0x2da97c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130D10u;
    if (runtime->hasFunction(0x130D10u)) {
        auto targetFn = runtime->lookupFunction(0x130D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA980u; }
        if (ctx->pc != 0x2DA980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleCmp__Ffff_0x130d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA980u; }
        if (ctx->pc != 0x2DA980u) { return; }
    }
    ctx->pc = 0x2DA980u;
label_2da980:
    // 0x2da980: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2da984:
    if (ctx->pc == 0x2DA984u) {
        ctx->pc = 0x2DA984u;
            // 0x2da984: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->pc = 0x2DA988u;
        goto label_2da988;
    }
    ctx->pc = 0x2DA980u;
    {
        const bool branch_taken_0x2da980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA980u;
            // 0x2da984: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da980) {
            ctx->pc = 0x2DA990u;
            goto label_2da990;
        }
    }
    ctx->pc = 0x2DA988u;
label_2da988:
    // 0x2da988: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2da988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2da98c:
    // 0x2da98c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2da98cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2da990:
    // 0x2da990: 0x4616b81a  mula.s      $f23, $f22
    ctx->pc = 0x2da990u;
    ctx->f[31] = FPU_MUL_S(ctx->f[23], ctx->f[22]);
label_2da994:
    // 0x2da994: 0x4600b807  neg.s       $f0, $f23
    ctx->pc = 0x2da994u;
    ctx->f[0] = FPU_NEG_S(ctx->f[23]);
label_2da998:
    // 0x2da998: 0x4614c5dc  madd.s      $f23, $f24, $f20
    ctx->pc = 0x2da998u;
    ctx->f[23] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[20]));
label_2da99c:
    // 0x2da99c: 0x4614001a  mula.s      $f0, $f20
    ctx->pc = 0x2da99cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2da9a0:
    // 0x2da9a0: 0x4616c51c  madd.s      $f20, $f24, $f22
    ctx->pc = 0x2da9a0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[22]));
label_2da9a4:
    // 0x2da9a4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2da9a8:
    if (ctx->pc == 0x2DA9A8u) {
        ctx->pc = 0x2DA9ACu;
        goto label_2da9ac;
    }
    ctx->pc = 0x2DA9A4u;
    {
        const bool branch_taken_0x2da9a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da9a4) {
            ctx->pc = 0x2DA9C8u;
            goto label_2da9c8;
        }
    }
    ctx->pc = 0x2DA9ACu;
label_2da9ac:
    // 0x2da9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da9b0:
    // 0x2da9b0: 0xc0bb538  jal         func_2ED4E0
label_2da9b4:
    if (ctx->pc == 0x2DA9B4u) {
        ctx->pc = 0x2DA9B4u;
            // 0x2da9b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DA9B8u;
        goto label_2da9b8;
    }
    ctx->pc = 0x2DA9B0u;
    SET_GPR_U32(ctx, 31, 0x2DA9B8u);
    ctx->pc = 0x2DA9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA9B0u;
            // 0x2da9b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA9B8u; }
        if (ctx->pc != 0x2DA9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA9B8u; }
        if (ctx->pc != 0x2DA9B8u) { return; }
    }
    ctx->pc = 0x2DA9B8u;
label_2da9b8:
    // 0x2da9b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2da9bc:
    if (ctx->pc == 0x2DA9BCu) {
        ctx->pc = 0x2DA9C0u;
        goto label_2da9c0;
    }
    ctx->pc = 0x2DA9B8u;
    {
        const bool branch_taken_0x2da9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da9b8) {
            ctx->pc = 0x2DA9C8u;
            goto label_2da9c8;
        }
    }
    ctx->pc = 0x2DA9C0u;
label_2da9c0:
    // 0x2da9c0: 0xc0b65d4  jal         func_2D9750
label_2da9c4:
    if (ctx->pc == 0x2DA9C4u) {
        ctx->pc = 0x2DA9C4u;
            // 0x2da9c4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA9C8u;
        goto label_2da9c8;
    }
    ctx->pc = 0x2DA9C0u;
    SET_GPR_U32(ctx, 31, 0x2DA9C8u);
    ctx->pc = 0x2DA9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA9C0u;
            // 0x2da9c4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9750u;
    if (runtime->hasFunction(0x2D9750u)) {
        auto targetFn = runtime->lookupFunction(0x2D9750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA9C8u; }
        if (ctx->pc != 0x2DA9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UndoPlaceParts__FP6CScene_0x2d9750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA9C8u; }
        if (ctx->pc != 0x2DA9C8u) { return; }
    }
    ctx->pc = 0x2DA9C8u;
label_2da9c8:
    // 0x2da9c8: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x2da9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_2da9cc:
    // 0x2da9cc: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x2da9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2da9d0:
    // 0x2da9d0: 0x24428920  addiu       $v0, $v0, -0x76E0
    ctx->pc = 0x2da9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936864));
label_2da9d4:
    // 0x2da9d4: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2da9d4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2da9d8:
    // 0x2da9d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da9d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2da9dc:
    // 0x2da9dc: 0x0  nop
    ctx->pc = 0x2da9dcu;
    // NOP
label_2da9e0:
    // 0x2da9e0: 0x46170032  c.eq.s      $f0, $f23
    ctx->pc = 0x2da9e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2da9e4:
    // 0x2da9e4: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x2da9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_2da9e8:
    // 0x2da9e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2da9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2da9ec:
    // 0x2da9ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2da9f0:
    if (ctx->pc == 0x2DA9F0u) {
        ctx->pc = 0x2DA9F0u;
            // 0x2da9f0: 0x7c640000  sq          $a0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
        ctx->pc = 0x2DA9F4u;
        goto label_2da9f4;
    }
    ctx->pc = 0x2DA9ECu;
    {
        const bool branch_taken_0x2da9ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA9ECu;
            // 0x2da9f0: 0x7c640000  sq          $a0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da9ec) {
            ctx->pc = 0x2DA9F8u;
            goto label_2da9f8;
        }
    }
    ctx->pc = 0x2DA9F4u;
label_2da9f4:
    // 0x2da9f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2da9f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2da9f8:
    // 0x2da9f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da9f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2da9fc:
    // 0x2da9fc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2da9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2daa00:
    // 0x2daa00: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x2daa00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2daa04:
    // 0x2daa04: 0x0  nop
    ctx->pc = 0x2daa04u;
    // NOP
label_2daa08:
    // 0x2daa08: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2daa0c:
    if (ctx->pc == 0x2DAA0Cu) {
        ctx->pc = 0x2DAA0Cu;
            // 0x2daa0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DAA10u;
        goto label_2daa10;
    }
    ctx->pc = 0x2DAA08u;
    {
        const bool branch_taken_0x2daa08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DAA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAA08u;
            // 0x2daa0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daa08) {
            ctx->pc = 0x2DAA14u;
            goto label_2daa14;
        }
    }
    ctx->pc = 0x2DAA10u;
label_2daa10:
    // 0x2daa10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2daa10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2daa14:
    // 0x2daa14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2daa14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2daa18:
    // 0x2daa18: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2daa18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2daa1c:
    // 0x2daa1c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2daa20:
    if (ctx->pc == 0x2DAA20u) {
        ctx->pc = 0x2DAA20u;
            // 0x2daa20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DAA24u;
        goto label_2daa24;
    }
    ctx->pc = 0x2DAA1Cu;
    {
        const bool branch_taken_0x2daa1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAA1Cu;
            // 0x2daa20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daa1c) {
            ctx->pc = 0x2DAA28u;
            goto label_2daa28;
        }
    }
    ctx->pc = 0x2DAA24u;
label_2daa24:
    // 0x2daa24: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2daa24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_2daa28:
    // 0x2daa28: 0x8f859e24  lw          $a1, -0x61DC($gp)
    ctx->pc = 0x2daa28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942244)));
label_2daa2c:
    // 0x2daa2c: 0xc06c2d4  jal         func_1B0B50
label_2daa30:
    if (ctx->pc == 0x2DAA30u) {
        ctx->pc = 0x2DAA30u;
            // 0x2daa30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAA34u;
        goto label_2daa34;
    }
    ctx->pc = 0x2DAA2Cu;
    SET_GPR_U32(ctx, 31, 0x2DAA34u);
    ctx->pc = 0x2DAA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAA2Cu;
            // 0x2daa30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B50u;
    if (runtime->hasFunction(0x1B0B50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA34u; }
        if (ctx->pc != 0x2DAA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfoAtID__8CEditMapFi_0x1b0b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA34u; }
        if (ctx->pc != 0x2DAA34u) { return; }
    }
    ctx->pc = 0x2DAA34u;
label_2daa34:
    // 0x2daa34: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2daa34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2daa38:
    // 0x2daa38: 0x1280001b  beqz        $s4, . + 4 + (0x1B << 2)
label_2daa3c:
    if (ctx->pc == 0x2DAA3Cu) {
        ctx->pc = 0x2DAA40u;
        goto label_2daa40;
    }
    ctx->pc = 0x2DAA38u;
    {
        const bool branch_taken_0x2daa38 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daa38) {
            ctx->pc = 0x2DAAA8u;
            goto label_2daaa8;
        }
    }
    ctx->pc = 0x2DAA40u;
label_2daa40:
    // 0x2daa40: 0xc0aaa44  jal         func_2AA910
label_2daa44:
    if (ctx->pc == 0x2DAA44u) {
        ctx->pc = 0x2DAA44u;
            // 0x2daa44: 0x8fa40100  lw          $a0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->pc = 0x2DAA48u;
        goto label_2daa48;
    }
    ctx->pc = 0x2DAA40u;
    SET_GPR_U32(ctx, 31, 0x2DAA48u);
    ctx->pc = 0x2DAA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAA40u;
            // 0x2daa44: 0x8fa40100  lw          $a0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA910u;
    if (runtime->hasFunction(0x2AA910u)) {
        auto targetFn = runtime->lookupFunction(0x2AA910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA48u; }
        if (ctx->pc != 0x2DAA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMaxPolyn__Fi_0x2aa910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA48u; }
        if (ctx->pc != 0x2DAA48u) { return; }
    }
    ctx->pc = 0x2DAA48u;
label_2daa48:
    // 0x2daa48: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2daa48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2daa4c:
    // 0x2daa4c: 0xc0aaa60  jal         func_2AA980
label_2daa50:
    if (ctx->pc == 0x2DAA50u) {
        ctx->pc = 0x2DAA50u;
            // 0x2daa50: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAA54u;
        goto label_2daa54;
    }
    ctx->pc = 0x2DAA4Cu;
    SET_GPR_U32(ctx, 31, 0x2DAA54u);
    ctx->pc = 0x2DAA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAA4Cu;
            // 0x2daa50: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA980u;
    if (runtime->hasFunction(0x2AA980u)) {
        auto targetFn = runtime->lookupFunction(0x2AA980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA54u; }
        if (ctx->pc != 0x2DAA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMaxDrawMem__Fi_0x2aa980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA54u; }
        if (ctx->pc != 0x2DAA54u) { return; }
    }
    ctx->pc = 0x2DAA54u;
label_2daa54:
    // 0x2daa54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2daa54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2daa58:
    // 0x2daa58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2daa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2daa5c:
    // 0x2daa5c: 0x27a50138  addiu       $a1, $sp, 0x138
    ctx->pc = 0x2daa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_2daa60:
    // 0x2daa60: 0xc06c53c  jal         func_1B14F0
label_2daa64:
    if (ctx->pc == 0x2DAA64u) {
        ctx->pc = 0x2DAA64u;
            // 0x2daa64: 0x27a60134  addiu       $a2, $sp, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
        ctx->pc = 0x2DAA68u;
        goto label_2daa68;
    }
    ctx->pc = 0x2DAA60u;
    SET_GPR_U32(ctx, 31, 0x2DAA68u);
    ctx->pc = 0x2DAA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAA60u;
            // 0x2daa64: 0x27a60134  addiu       $a2, $sp, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B14F0u;
    if (runtime->hasFunction(0x1B14F0u)) {
        auto targetFn = runtime->lookupFunction(0x1B14F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA68u; }
        if (ctx->pc != 0x2DAA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTotalPolyn__8CEditMapFPiPi_0x1b14f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA68u; }
        if (ctx->pc != 0x2DAA68u) { return; }
    }
    ctx->pc = 0x2DAA68u;
label_2daa68:
    // 0x2daa68: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x2daa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_2daa6c:
    // 0x2daa6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2daa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2daa70:
    // 0x2daa70: 0x2a2082a  slt         $at, $s5, $v0
    ctx->pc = 0x2daa70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2daa74:
    // 0x2daa74: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_2daa78:
    if (ctx->pc == 0x2DAA78u) {
        ctx->pc = 0x2DAA78u;
            // 0x2daa78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2DAA7Cu;
        goto label_2daa7c;
    }
    ctx->pc = 0x2DAA74u;
    {
        const bool branch_taken_0x2daa74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAA74u;
            // 0x2daa78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daa74) {
            ctx->pc = 0x2DAA98u;
            goto label_2daa98;
        }
    }
    ctx->pc = 0x2DAA7Cu;
label_2daa7c:
    // 0x2daa7c: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x2daa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_2daa80:
    // 0x2daa80: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x2daa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_2daa84:
    // 0x2daa84: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2daa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2daa88:
    // 0x2daa88: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x2daa88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2daa8c:
    // 0x2daa8c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_2daa90:
    if (ctx->pc == 0x2DAA90u) {
        ctx->pc = 0x2DAA94u;
        goto label_2daa94;
    }
    ctx->pc = 0x2DAA8Cu;
    {
        const bool branch_taken_0x2daa8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daa8c) {
            ctx->pc = 0x2DAAA8u;
            goto label_2daaa8;
        }
    }
    ctx->pc = 0x2DAA94u;
label_2daa94:
    // 0x2daa94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2daa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2daa98:
    // 0x2daa98: 0xaf809e28  sw          $zero, -0x61D8($gp)
    ctx->pc = 0x2daa98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942248), GPR_U32(ctx, 0));
label_2daa9c:
    // 0x2daa9c: 0xaf829e24  sw          $v0, -0x61DC($gp)
    ctx->pc = 0x2daa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942244), GPR_U32(ctx, 2));
label_2daaa0:
    // 0x2daaa0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2daaa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2daaa4:
    // 0x2daaa4: 0xaf809e2c  sw          $zero, -0x61D4($gp)
    ctx->pc = 0x2daaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942252), GPR_U32(ctx, 0));
label_2daaa8:
    // 0x2daaa8: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x2daaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_2daaac:
    // 0x2daaac: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2daaacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2daab0:
    // 0x2daab0: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_2daab4:
    if (ctx->pc == 0x2DAAB4u) {
        ctx->pc = 0x2DAAB4u;
            // 0x2daab4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAAB8u;
        goto label_2daab8;
    }
    ctx->pc = 0x2DAAB0u;
    {
        const bool branch_taken_0x2daab0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAAB0u;
            // 0x2daab4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daab0) {
            ctx->pc = 0x2DAAC0u;
            goto label_2daac0;
        }
    }
    ctx->pc = 0x2DAAB8u;
label_2daab8:
    // 0x2daab8: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x2daab8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2daabc:
    // 0x2daabc: 0x0  nop
    ctx->pc = 0x2daabcu;
    // NOP
label_2daac0:
    // 0x2daac0: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_2daac4:
    if (ctx->pc == 0x2DAAC4u) {
        ctx->pc = 0x2DAAC4u;
            // 0x2daac4: 0x32220008  andi        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x2DAAC8u;
        goto label_2daac8;
    }
    ctx->pc = 0x2DAAC0u;
    {
        const bool branch_taken_0x2daac0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAAC0u;
            // 0x2daac4: 0x32220008  andi        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daac0) {
            ctx->pc = 0x2DAAD0u;
            goto label_2daad0;
        }
    }
    ctx->pc = 0x2DAAC8u;
label_2daac8:
    // 0x2daac8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2daacc:
    if (ctx->pc == 0x2DAACCu) {
        ctx->pc = 0x2DAAD0u;
        goto label_2daad0;
    }
    ctx->pc = 0x2DAAC8u;
    {
        const bool branch_taken_0x2daac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2daac8) {
            ctx->pc = 0x2DAAE8u;
            goto label_2daae8;
        }
    }
    ctx->pc = 0x2DAAD0u;
label_2daad0:
    // 0x2daad0: 0x8f829e34  lw          $v0, -0x61CC($gp)
    ctx->pc = 0x2daad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942260)));
label_2daad4:
    // 0x2daad4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2daad8:
    if (ctx->pc == 0x2DAAD8u) {
        ctx->pc = 0x2DAAD8u;
            // 0x2daad8: 0x32220080  andi        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
        ctx->pc = 0x2DAADCu;
        goto label_2daadc;
    }
    ctx->pc = 0x2DAAD4u;
    {
        const bool branch_taken_0x2daad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAAD4u;
            // 0x2daad8: 0x32220080  andi        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daad4) {
            ctx->pc = 0x2DAAF0u;
            goto label_2daaf0;
        }
    }
    ctx->pc = 0x2DAADCu;
label_2daadc:
    // 0x2daadc: 0x32220100  andi        $v0, $s1, 0x100
    ctx->pc = 0x2daadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
label_2daae0:
    // 0x2daae0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2daae4:
    if (ctx->pc == 0x2DAAE4u) {
        ctx->pc = 0x2DAAE8u;
        goto label_2daae8;
    }
    ctx->pc = 0x2DAAE0u;
    {
        const bool branch_taken_0x2daae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2daae0) {
            ctx->pc = 0x2DAAECu;
            goto label_2daaec;
        }
    }
    ctx->pc = 0x2DAAE8u;
label_2daae8:
    // 0x2daae8: 0x24150006  addiu       $s5, $zero, 0x6
    ctx->pc = 0x2daae8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2daaec:
    // 0x2daaec: 0x32220080  andi        $v0, $s1, 0x80
    ctx->pc = 0x2daaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
label_2daaf0:
    // 0x2daaf0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2daaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2daaf4:
    // 0x2daaf4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2daaf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2daaf8:
    // 0x2daaf8: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2daaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_2daafc:
    // 0x2daafc: 0x2231024  and         $v0, $s1, $v1
    ctx->pc = 0x2daafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
label_2dab00:
    // 0x2dab00: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2dab00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2dab04:
    // 0x2dab04: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2dab08:
    if (ctx->pc == 0x2DAB08u) {
        ctx->pc = 0x2DAB08u;
            // 0x2dab08: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->pc = 0x2DAB0Cu;
        goto label_2dab0c;
    }
    ctx->pc = 0x2DAB04u;
    {
        const bool branch_taken_0x2dab04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAB04u;
            // 0x2dab08: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dab04) {
            ctx->pc = 0x2DAB2Cu;
            goto label_2dab2c;
        }
    }
    ctx->pc = 0x2DAB0Cu;
label_2dab0c:
    // 0x2dab0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dab0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dab10:
    // 0x2dab10: 0xc0bb538  jal         func_2ED4E0
label_2dab14:
    if (ctx->pc == 0x2DAB14u) {
        ctx->pc = 0x2DAB14u;
            // 0x2dab14: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x2DAB18u;
        goto label_2dab18;
    }
    ctx->pc = 0x2DAB10u;
    SET_GPR_U32(ctx, 31, 0x2DAB18u);
    ctx->pc = 0x2DAB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAB10u;
            // 0x2dab14: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB18u; }
        if (ctx->pc != 0x2DAB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB18u; }
        if (ctx->pc != 0x2DAB18u) { return; }
    }
    ctx->pc = 0x2DAB18u;
label_2dab18:
    // 0x2dab18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2dab1c:
    if (ctx->pc == 0x2DAB1Cu) {
        ctx->pc = 0x2DAB20u;
        goto label_2dab20;
    }
    ctx->pc = 0x2DAB18u;
    {
        const bool branch_taken_0x2dab18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dab18) {
            ctx->pc = 0x2DAB2Cu;
            goto label_2dab2c;
        }
    }
    ctx->pc = 0x2DAB20u;
label_2dab20:
    // 0x2dab20: 0x8f829e64  lw          $v0, -0x619C($gp)
    ctx->pc = 0x2dab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942308)));
label_2dab24:
    // 0x2dab24: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x2dab24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2dab28:
    // 0x2dab28: 0xaf829e64  sw          $v0, -0x619C($gp)
    ctx->pc = 0x2dab28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942308), GPR_U32(ctx, 2));
label_2dab2c:
    // 0x2dab2c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2dab30:
    if (ctx->pc == 0x2DAB30u) {
        ctx->pc = 0x2DAB30u;
            // 0x2dab30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAB34u;
        goto label_2dab34;
    }
    ctx->pc = 0x2DAB2Cu;
    {
        const bool branch_taken_0x2dab2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAB2Cu;
            // 0x2dab30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dab2c) {
            ctx->pc = 0x2DAB50u;
            goto label_2dab50;
        }
    }
    ctx->pc = 0x2DAB34u;
label_2dab34:
    // 0x2dab34: 0xc0bb538  jal         func_2ED4E0
label_2dab38:
    if (ctx->pc == 0x2DAB38u) {
        ctx->pc = 0x2DAB38u;
            // 0x2dab38: 0x24050065  addiu       $a1, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->pc = 0x2DAB3Cu;
        goto label_2dab3c;
    }
    ctx->pc = 0x2DAB34u;
    SET_GPR_U32(ctx, 31, 0x2DAB3Cu);
    ctx->pc = 0x2DAB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAB34u;
            // 0x2dab38: 0x24050065  addiu       $a1, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB3Cu; }
        if (ctx->pc != 0x2DAB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB3Cu; }
        if (ctx->pc != 0x2DAB3Cu) { return; }
    }
    ctx->pc = 0x2DAB3Cu;
label_2dab3c:
    // 0x2dab3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2dab40:
    if (ctx->pc == 0x2DAB40u) {
        ctx->pc = 0x2DAB44u;
        goto label_2dab44;
    }
    ctx->pc = 0x2DAB3Cu;
    {
        const bool branch_taken_0x2dab3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dab3c) {
            ctx->pc = 0x2DAB50u;
            goto label_2dab50;
        }
    }
    ctx->pc = 0x2DAB44u;
label_2dab44:
    // 0x2dab44: 0x8f829e64  lw          $v0, -0x619C($gp)
    ctx->pc = 0x2dab44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942308)));
label_2dab48:
    // 0x2dab48: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2dab48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2dab4c:
    // 0x2dab4c: 0xaf829e64  sw          $v0, -0x619C($gp)
    ctx->pc = 0x2dab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942308), GPR_U32(ctx, 2));
label_2dab50:
    // 0x2dab50: 0x8f859e64  lw          $a1, -0x619C($gp)
    ctx->pc = 0x2dab50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942308)));
label_2dab54:
    // 0x2dab54: 0xc06c3fc  jal         func_1B0FF0
label_2dab58:
    if (ctx->pc == 0x2DAB58u) {
        ctx->pc = 0x2DAB58u;
            // 0x2dab58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAB5Cu;
        goto label_2dab5c;
    }
    ctx->pc = 0x2DAB54u;
    SET_GPR_U32(ctx, 31, 0x2DAB5Cu);
    ctx->pc = 0x2DAB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAB54u;
            // 0x2dab58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FF0u;
    if (runtime->hasFunction(0x1B0FF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB5Cu; }
        if (ctx->pc != 0x2DAB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AngleLimit__8CEditMapFi_0x1b0ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB5Cu; }
        if (ctx->pc != 0x2DAB5Cu) { return; }
    }
    ctx->pc = 0x2DAB5Cu;
label_2dab5c:
    // 0x2dab5c: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_2dab60:
    if (ctx->pc == 0x2DAB60u) {
        ctx->pc = 0x2DAB60u;
            // 0x2dab60: 0xaf829e64  sw          $v0, -0x619C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942308), GPR_U32(ctx, 2));
        ctx->pc = 0x2DAB64u;
        goto label_2dab64;
    }
    ctx->pc = 0x2DAB5Cu;
    {
        const bool branch_taken_0x2dab5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAB5Cu;
            // 0x2dab60: 0xaf829e64  sw          $v0, -0x619C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dab5c) {
            ctx->pc = 0x2DAB84u;
            goto label_2dab84;
        }
    }
    ctx->pc = 0x2DAB64u;
label_2dab64:
    // 0x2dab64: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2dab64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2dab68:
    // 0x2dab68: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2dab68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2dab6c:
    // 0x2dab6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2dab70:
    if (ctx->pc == 0x2DAB70u) {
        ctx->pc = 0x2DAB70u;
            // 0x2dab70: 0x32220200  andi        $v0, $s1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)512);
        ctx->pc = 0x2DAB74u;
        goto label_2dab74;
    }
    ctx->pc = 0x2DAB6Cu;
    {
        const bool branch_taken_0x2dab6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAB6Cu;
            // 0x2dab70: 0x32220200  andi        $v0, $s1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dab6c) {
            ctx->pc = 0x2DAB88u;
            goto label_2dab88;
        }
    }
    ctx->pc = 0x2DAB74u;
label_2dab74:
    // 0x2dab74: 0x8f859e64  lw          $a1, -0x619C($gp)
    ctx->pc = 0x2dab74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942308)));
label_2dab78:
    // 0x2dab78: 0xc06c3ac  jal         func_1B0EB0
label_2dab7c:
    if (ctx->pc == 0x2DAB7Cu) {
        ctx->pc = 0x2DAB7Cu;
            // 0x2dab7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAB80u;
        goto label_2dab80;
    }
    ctx->pc = 0x2DAB78u;
    SET_GPR_U32(ctx, 31, 0x2DAB80u);
    ctx->pc = 0x2DAB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAB78u;
            // 0x2dab7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0EB0u;
    if (runtime->hasFunction(0x1B0EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB80u; }
        if (ctx->pc != 0x2DAB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditAngle90__8CEditMapFi_0x1b0eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB80u; }
        if (ctx->pc != 0x2DAB80u) { return; }
    }
    ctx->pc = 0x2DAB80u;
label_2dab80:
    // 0x2dab80: 0xaf829e64  sw          $v0, -0x619C($gp)
    ctx->pc = 0x2dab80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942308), GPR_U32(ctx, 2));
label_2dab84:
    // 0x2dab84: 0x32220200  andi        $v0, $s1, 0x200
    ctx->pc = 0x2dab84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)512);
label_2dab88:
    // 0x2dab88: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x2dab88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_2dab8c:
    // 0x2dab8c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x2dab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_2dab90:
    // 0x2dab90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2dab94:
    if (ctx->pc == 0x2DAB94u) {
        ctx->pc = 0x2DAB94u;
            // 0x2dab94: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x2DAB98u;
        goto label_2dab98;
    }
    ctx->pc = 0x2DAB90u;
    {
        const bool branch_taken_0x2dab90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAB90u;
            // 0x2dab94: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dab90) {
            ctx->pc = 0x2DABA8u;
            goto label_2daba8;
        }
    }
    ctx->pc = 0x2DAB98u;
label_2dab98:
    // 0x2dab98: 0x8f839e18  lw          $v1, -0x61E8($gp)
    ctx->pc = 0x2dab98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942232)));
label_2dab9c:
    // 0x2dab9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2daba0:
    // 0x2daba0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_2daba4:
    if (ctx->pc == 0x2DABA4u) {
        ctx->pc = 0x2DABA8u;
        goto label_2daba8;
    }
    ctx->pc = 0x2DABA0u;
    {
        const bool branch_taken_0x2daba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2daba0) {
            ctx->pc = 0x2DABCCu;
            goto label_2dabcc;
        }
    }
    ctx->pc = 0x2DABA8u;
label_2daba8:
    // 0x2daba8: 0xc42188f0  lwc1        $f1, -0x7710($at)
    ctx->pc = 0x2daba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dabac:
    // 0x2dabac: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dabacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dabb0:
    // 0x2dabb0: 0xc42088f8  lwc1        $f0, -0x7708($at)
    ctx->pc = 0x2dabb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dabb4:
    // 0x2dabb4: 0x46170840  add.s       $f1, $f1, $f23
    ctx->pc = 0x2dabb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[23]);
label_2dabb8:
    // 0x2dabb8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2dabb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2dabbc:
    // 0x2dabbc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dabbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dabc0:
    // 0x2dabc0: 0xe42188f0  swc1        $f1, -0x7710($at)
    ctx->pc = 0x2dabc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936816), bits); }
label_2dabc4:
    // 0x2dabc4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dabc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dabc8:
    // 0x2dabc8: 0xe42088f8  swc1        $f0, -0x7708($at)
    ctx->pc = 0x2dabc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936824), bits); }
label_2dabcc:
    // 0x2dabcc: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x2dabccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_2dabd0:
    // 0x2dabd0: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_2dabd4:
    if (ctx->pc == 0x2DABD4u) {
        ctx->pc = 0x2DABD4u;
            // 0x2dabd4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DABD8u;
        goto label_2dabd8;
    }
    ctx->pc = 0x2DABD0u;
    {
        const bool branch_taken_0x2dabd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DABD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DABD0u;
            // 0x2dabd4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dabd0) {
            ctx->pc = 0x2DACF4u;
            goto label_2dacf4;
        }
    }
    ctx->pc = 0x2DABD8u;
label_2dabd8:
    // 0x2dabd8: 0x12000045  beqz        $s0, . + 4 + (0x45 << 2)
label_2dabdc:
    if (ctx->pc == 0x2DABDCu) {
        ctx->pc = 0x2DABE0u;
        goto label_2dabe0;
    }
    ctx->pc = 0x2DABD8u;
    {
        const bool branch_taken_0x2dabd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dabd8) {
            ctx->pc = 0x2DACF0u;
            goto label_2dacf0;
        }
    }
    ctx->pc = 0x2DABE0u;
label_2dabe0:
    // 0x2dabe0: 0x8f829e18  lw          $v0, -0x61E8($gp)
    ctx->pc = 0x2dabe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942232)));
label_2dabe4:
    // 0x2dabe4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2dabe8:
    if (ctx->pc == 0x2DABE8u) {
        ctx->pc = 0x2DABE8u;
            // 0x2dabe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DABECu;
        goto label_2dabec;
    }
    ctx->pc = 0x2DABE4u;
    {
        const bool branch_taken_0x2dabe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DABE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DABE4u;
            // 0x2dabe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dabe4) {
            ctx->pc = 0x2DABF0u;
            goto label_2dabf0;
        }
    }
    ctx->pc = 0x2DABECu;
label_2dabec:
    // 0x2dabec: 0xaf829e18  sw          $v0, -0x61E8($gp)
    ctx->pc = 0x2dabecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942232), GPR_U32(ctx, 2));
label_2dabf0:
    // 0x2dabf0: 0x8f839e18  lw          $v1, -0x61E8($gp)
    ctx->pc = 0x2dabf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942232)));
label_2dabf4:
    // 0x2dabf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2dabf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2dabf8:
    // 0x2dabf8: 0x1462003d  bne         $v1, $v0, . + 4 + (0x3D << 2)
label_2dabfc:
    if (ctx->pc == 0x2DABFCu) {
        ctx->pc = 0x2DABFCu;
            // 0x2dabfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC00u;
        goto label_2dac00;
    }
    ctx->pc = 0x2DABF8u;
    {
        const bool branch_taken_0x2dabf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DABFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DABF8u;
            // 0x2dabfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dabf8) {
            ctx->pc = 0x2DACF0u;
            goto label_2dacf0;
        }
    }
    ctx->pc = 0x2DAC00u;
label_2dac00:
    // 0x2dac00: 0xc0bb548  jal         func_2ED520
label_2dac04:
    if (ctx->pc == 0x2DAC04u) {
        ctx->pc = 0x2DAC04u;
            // 0x2dac04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC08u;
        goto label_2dac08;
    }
    ctx->pc = 0x2DAC00u;
    SET_GPR_U32(ctx, 31, 0x2DAC08u);
    ctx->pc = 0x2DAC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAC00u;
            // 0x2dac04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAC08u; }
        if (ctx->pc != 0x2DAC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAC08u; }
        if (ctx->pc != 0x2DAC08u) { return; }
    }
    ctx->pc = 0x2DAC08u;
label_2dac08:
    // 0x2dac08: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2dac08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2dac0c:
    // 0x2dac0c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dac0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dac10:
    // 0x2dac10: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2dac10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2dac14:
    // 0x2dac14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dac14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dac18:
    // 0x2dac18: 0xc4218990  lwc1        $f1, -0x7670($at)
    ctx->pc = 0x2dac18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dac1c:
    // 0x2dac1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2dac1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dac20:
    // 0x2dac20: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2dac20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2dac24:
    // 0x2dac24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2dac24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2dac28:
    // 0x2dac28: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dac28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dac2c:
    // 0x2dac2c: 0xc0bb548  jal         func_2ED520
label_2dac30:
    if (ctx->pc == 0x2DAC30u) {
        ctx->pc = 0x2DAC30u;
            // 0x2dac30: 0xe4208990  swc1        $f0, -0x7670($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936976), bits); }
        ctx->pc = 0x2DAC34u;
        goto label_2dac34;
    }
    ctx->pc = 0x2DAC2Cu;
    SET_GPR_U32(ctx, 31, 0x2DAC34u);
    ctx->pc = 0x2DAC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAC2Cu;
            // 0x2dac30: 0xe4208990  swc1        $f0, -0x7670($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936976), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAC34u; }
        if (ctx->pc != 0x2DAC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAC34u; }
        if (ctx->pc != 0x2DAC34u) { return; }
    }
    ctx->pc = 0x2DAC34u;
label_2dac34:
    // 0x2dac34: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dac34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dac38:
    // 0x2dac38: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2dac38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2dac3c:
    // 0x2dac3c: 0xc4228994  lwc1        $f2, -0x766C($at)
    ctx->pc = 0x2dac3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dac40:
    // 0x2dac40: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2dac40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2dac44:
    // 0x2dac44: 0x0  nop
    ctx->pc = 0x2dac44u;
    // NOP
label_2dac48:
    // 0x2dac48: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2dac48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2dac4c:
    // 0x2dac4c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dac4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dac50:
    // 0x2dac50: 0xc4218990  lwc1        $f1, -0x7670($at)
    ctx->pc = 0x2dac50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dac54:
    // 0x2dac54: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2dac54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2dac58:
    // 0x2dac58: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dac58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dac5c:
    // 0x2dac5c: 0xc42489d0  lwc1        $f4, -0x7630($at)
    ctx->pc = 0x2dac5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2dac60:
    // 0x2dac60: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dac60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dac64:
    // 0x2dac64: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x2dac64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dac68:
    // 0x2dac68: 0x0  nop
    ctx->pc = 0x2dac68u;
    // NOP
label_2dac6c:
    // 0x2dac6c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2dac70:
    if (ctx->pc == 0x2DAC70u) {
        ctx->pc = 0x2DAC70u;
            // 0x2dac70: 0xe4208994  swc1        $f0, -0x766C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936980), bits); }
        ctx->pc = 0x2DAC74u;
        goto label_2dac74;
    }
    ctx->pc = 0x2DAC6Cu;
    {
        const bool branch_taken_0x2dac6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DAC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAC6Cu;
            // 0x2dac70: 0xe4208994  swc1        $f0, -0x766C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936980), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dac6c) {
            ctx->pc = 0x2DAC7Cu;
            goto label_2dac7c;
        }
    }
    ctx->pc = 0x2DAC74u;
label_2dac74:
    // 0x2dac74: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dac74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dac78:
    // 0x2dac78: 0xe4248990  swc1        $f4, -0x7670($at)
    ctx->pc = 0x2dac78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936976), bits); }
label_2dac7c:
    // 0x2dac7c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dac7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dac80:
    // 0x2dac80: 0xc4208994  lwc1        $f0, -0x766C($at)
    ctx->pc = 0x2dac80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dac84:
    // 0x2dac84: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dac84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dac88:
    // 0x2dac88: 0xc42189d4  lwc1        $f1, -0x762C($at)
    ctx->pc = 0x2dac88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dac8c:
    // 0x2dac8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2dac8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dac90:
    // 0x2dac90: 0x0  nop
    ctx->pc = 0x2dac90u;
    // NOP
label_2dac94:
    // 0x2dac94: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2dac98:
    if (ctx->pc == 0x2DAC98u) {
        ctx->pc = 0x2DAC9Cu;
        goto label_2dac9c;
    }
    ctx->pc = 0x2DAC94u;
    {
        const bool branch_taken_0x2dac94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dac94) {
            ctx->pc = 0x2DACA4u;
            goto label_2daca4;
        }
    }
    ctx->pc = 0x2DAC9Cu;
label_2dac9c:
    // 0x2dac9c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dac9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2daca0:
    // 0x2daca0: 0xe4218994  swc1        $f1, -0x766C($at)
    ctx->pc = 0x2daca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936980), bits); }
label_2daca4:
    // 0x2daca4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2daca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2daca8:
    // 0x2daca8: 0xc4208990  lwc1        $f0, -0x7670($at)
    ctx->pc = 0x2daca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dacac:
    // 0x2dacac: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dacacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dacb0:
    // 0x2dacb0: 0xc42189c0  lwc1        $f1, -0x7640($at)
    ctx->pc = 0x2dacb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dacb4:
    // 0x2dacb4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2dacb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dacb8:
    // 0x2dacb8: 0x0  nop
    ctx->pc = 0x2dacb8u;
    // NOP
label_2dacbc:
    // 0x2dacbc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_2dacc0:
    if (ctx->pc == 0x2DACC0u) {
        ctx->pc = 0x2DACC4u;
        goto label_2dacc4;
    }
    ctx->pc = 0x2DACBCu;
    {
        const bool branch_taken_0x2dacbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dacbc) {
            ctx->pc = 0x2DACCCu;
            goto label_2daccc;
        }
    }
    ctx->pc = 0x2DACC4u;
label_2dacc4:
    // 0x2dacc4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dacc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dacc8:
    // 0x2dacc8: 0xe4218990  swc1        $f1, -0x7670($at)
    ctx->pc = 0x2dacc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936976), bits); }
label_2daccc:
    // 0x2daccc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dacccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dacd0:
    // 0x2dacd0: 0xc4208994  lwc1        $f0, -0x766C($at)
    ctx->pc = 0x2dacd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dacd4:
    // 0x2dacd4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dacd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dacd8:
    // 0x2dacd8: 0xc42189c4  lwc1        $f1, -0x763C($at)
    ctx->pc = 0x2dacd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dacdc:
    // 0x2dacdc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2dacdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dace0:
    // 0x2dace0: 0x0  nop
    ctx->pc = 0x2dace0u;
    // NOP
label_2dace4:
    // 0x2dace4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2dace8:
    if (ctx->pc == 0x2DACE8u) {
        ctx->pc = 0x2DACE8u;
            // 0x2dace8: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x2DACECu;
        goto label_2dacec;
    }
    ctx->pc = 0x2DACE4u;
    {
        const bool branch_taken_0x2dace4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DACE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DACE4u;
            // 0x2dace8: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dace4) {
            ctx->pc = 0x2DACF0u;
            goto label_2dacf0;
        }
    }
    ctx->pc = 0x2DACECu;
label_2dacec:
    // 0x2dacec: 0xe4218994  swc1        $f1, -0x766C($at)
    ctx->pc = 0x2dacecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936980), bits); }
label_2dacf0:
    // 0x2dacf0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2dacf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2dacf4:
    // 0x2dacf4: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x2dacf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_2dacf8:
    // 0x2dacf8: 0xc0a1214  jal         func_284850
label_2dacfc:
    if (ctx->pc == 0x2DACFCu) {
        ctx->pc = 0x2DACFCu;
            // 0x2dacfc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2DAD00u;
        goto label_2dad00;
    }
    ctx->pc = 0x2DACF8u;
    SET_GPR_U32(ctx, 31, 0x2DAD00u);
    ctx->pc = 0x2DACFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DACF8u;
            // 0x2dacfc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284850u;
    if (runtime->hasFunction(0x284850u)) {
        auto targetFn = runtime->lookupFunction(0x284850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAD00u; }
        if (ctx->pc != 0x2DAD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveMap__6CSceneFPP4CMapi_0x284850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAD00u; }
        if (ctx->pc != 0x2DAD00u) { return; }
    }
    ctx->pc = 0x2DAD00u;
label_2dad00:
    // 0x2dad00: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dad00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dad04:
    // 0x2dad04: 0x3c0901f6  lui         $t1, 0x1F6
    ctx->pc = 0x2dad04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)502 << 16));
label_2dad08:
    // 0x2dad08: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x2dad08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_2dad0c:
    // 0x2dad0c: 0x252988f0  addiu       $t1, $t1, -0x7710
    ctx->pc = 0x2dad0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294936816));
label_2dad10:
    // 0x2dad10: 0xac2088f4  sw          $zero, -0x770C($at)
    ctx->pc = 0x2dad10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294936820), GPR_U32(ctx, 0));
label_2dad14:
    // 0x2dad14: 0x27a70190  addiu       $a3, $sp, 0x190
    ctx->pc = 0x2dad14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2dad18:
    // 0x2dad18: 0x79280000  lq          $t0, 0x0($t1)
    ctx->pc = 0x2dad18u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_2dad1c:
    // 0x2dad1c: 0x27b501a0  addiu       $s5, $sp, 0x1A0
    ctx->pc = 0x2dad1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2dad20:
    // 0x2dad20: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x2dad20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2dad24:
    // 0x2dad24: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x2dad24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2dad28:
    // 0x2dad28: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x2dad28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_2dad2c:
    // 0x2dad2c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2dad2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_2dad30:
    // 0x2dad30: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2dad30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_2dad34:
    // 0x2dad34: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x2dad34u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
label_2dad38:
    // 0x2dad38: 0x79270000  lq          $a3, 0x0($t1)
    ctx->pc = 0x2dad38u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_2dad3c:
    // 0x2dad3c: 0x7ea70000  sq          $a3, 0x0($s5)
    ctx->pc = 0x2dad3cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 7));
label_2dad40:
    // 0x2dad40: 0x79270000  lq          $a3, 0x0($t1)
    ctx->pc = 0x2dad40u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_2dad44:
    // 0x2dad44: 0x7ca70000  sq          $a3, 0x0($a1)
    ctx->pc = 0x2dad44u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 7));
label_2dad48:
    // 0x2dad48: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2dad48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2dad4c:
    // 0x2dad4c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2dad4cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_2dad50:
    // 0x2dad50: 0x27a201b4  addiu       $v0, $sp, 0x1B4
    ctx->pc = 0x2dad50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
label_2dad54:
    // 0x2dad54: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2dad54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2dad58:
    // 0x2dad58: 0xc041c3e  jal         func_1070F8
label_2dad5c:
    if (ctx->pc == 0x2DAD5Cu) {
        ctx->pc = 0x2DAD5Cu;
            // 0x2dad5c: 0xafa301d4  sw          $v1, 0x1D4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 3));
        ctx->pc = 0x2DAD60u;
        goto label_2dad60;
    }
    ctx->pc = 0x2DAD58u;
    SET_GPR_U32(ctx, 31, 0x2DAD60u);
    ctx->pc = 0x2DAD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAD58u;
            // 0x2dad5c: 0xafa301d4  sw          $v1, 0x1D4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAD60u; }
        if (ctx->pc != 0x2DAD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAD60u; }
        if (ctx->pc != 0x2DAD60u) { return; }
    }
    ctx->pc = 0x2DAD60u;
label_2dad60:
    // 0x2dad60: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x2dad60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dad64:
    // 0x2dad64: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x2dad64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_2dad68:
    // 0x2dad68: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2dad68u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dad6c:
    // 0x2dad6c: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x2dad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
label_2dad70:
    // 0x2dad70: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x2dad70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
label_2dad74:
    // 0x2dad74: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2dad74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dad78:
    // 0x2dad78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dad78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2dad7c:
    // 0x2dad7c: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x2dad7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_2dad80:
    // 0x2dad80: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2dad80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2dad84:
    // 0x2dad84: 0x27a20198  addiu       $v0, $sp, 0x198
    ctx->pc = 0x2dad84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_2dad88:
    // 0x2dad88: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2dad88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dad8c:
    // 0x2dad8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dad8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2dad90:
    // 0x2dad90: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2dad90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2dad94:
    // 0x2dad94: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x2dad94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dad98:
    // 0x2dad98: 0x27a201a4  addiu       $v0, $sp, 0x1A4
    ctx->pc = 0x2dad98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
label_2dad9c:
    // 0x2dad9c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2dad9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2dada0:
    // 0x2dada0: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x2dada0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_2dada4:
    // 0x2dada4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2dada4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2dada8:
    // 0x2dada8: 0x27a201a8  addiu       $v0, $sp, 0x1A8
    ctx->pc = 0x2dada8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_2dadac:
    // 0x2dadac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2dadacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dadb0:
    // 0x2dadb0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2dadb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2dadb4:
    // 0x2dadb4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2dadb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2dadb8:
    // 0x2dadb8: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2dadb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2dadbc:
    // 0x2dadbc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2dadc0:
    if (ctx->pc == 0x2DADC0u) {
        ctx->pc = 0x2DADC0u;
            // 0x2dadc0: 0x24110800  addiu       $s1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x2DADC4u;
        goto label_2dadc4;
    }
    ctx->pc = 0x2DADBCu;
    {
        const bool branch_taken_0x2dadbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DADC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DADBCu;
            // 0x2dadc0: 0x24110800  addiu       $s1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dadbc) {
            ctx->pc = 0x2DADD8u;
            goto label_2dadd8;
        }
    }
    ctx->pc = 0x2DADC4u;
label_2dadc4:
    // 0x2dadc4: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2dadc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2dadc8:
    // 0x2dadc8: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x2dadc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2dadcc:
    // 0x2dadcc: 0xc0b7610  jal         func_2DD840
label_2dadd0:
    if (ctx->pc == 0x2DADD0u) {
        ctx->pc = 0x2DADD0u;
            // 0x2dadd0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DADD4u;
        goto label_2dadd4;
    }
    ctx->pc = 0x2DADCCu;
    SET_GPR_U32(ctx, 31, 0x2DADD4u);
    ctx->pc = 0x2DADD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DADCCu;
            // 0x2dadd0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DD840u;
    if (runtime->hasFunction(0x2DD840u)) {
        auto targetFn = runtime->lookupFunction(0x2DD840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DADD4u; }
        if (ctx->pc != 0x2DADD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGeoCheckCol__FP4CMapR9mgVu0FBOXP6CCPolyi_0x2dd840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DADD4u; }
        if (ctx->pc != 0x2DADD4u) { return; }
    }
    ctx->pc = 0x2DADD4u;
label_2dadd4:
    // 0x2dadd4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2dadd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dadd8:
    // 0x2dadd8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2dadd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2daddc:
    // 0x2daddc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2daddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dade0:
    // 0x2dade0: 0x342181f0  ori         $at, $at, 0x81F0
    ctx->pc = 0x2dade0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33264);
label_2dade4:
    // 0x2dade4: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x2dade4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_2dade8:
    // 0x2dade8: 0xc049c86  jal         func_127218
label_2dadec:
    if (ctx->pc == 0x2DADECu) {
        ctx->pc = 0x2DADECu;
            // 0x2dadec: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DADF0u;
        goto label_2dadf0;
    }
    ctx->pc = 0x2DADE8u;
    SET_GPR_U32(ctx, 31, 0x2DADF0u);
    ctx->pc = 0x2DADECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DADE8u;
            // 0x2dadec: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DADF0u; }
        if (ctx->pc != 0x2DADF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DADF0u; }
        if (ctx->pc != 0x2DADF0u) { return; }
    }
    ctx->pc = 0x2DADF0u;
label_2dadf0:
    // 0x2dadf0: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x2dadf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
label_2dadf4:
    // 0x2dadf4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2dadf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_2dadf8:
    // 0x2dadf8: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x2dadf8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2dadfc:
    // 0x2dadfc: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x2dadfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2dae00:
    // 0x2dae00: 0xac2281f0  sw          $v0, -0x7E10($at)
    ctx->pc = 0x2dae00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935024), GPR_U32(ctx, 2));
label_2dae04:
    // 0x2dae04: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x2dae04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_2dae08:
    // 0x2dae08: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2dae08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2dae0c:
    // 0x2dae0c: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x2dae0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_2dae10:
    // 0x2dae10: 0x342181f0  ori         $at, $at, 0x81F0
    ctx->pc = 0x2dae10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33264);
label_2dae14:
    // 0x2dae14: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x2dae14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2dae18:
    // 0x2dae18: 0x3a13821  addu        $a3, $sp, $at
    ctx->pc = 0x2dae18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2dae1c:
    // 0x2dae1c: 0x27a801f0  addiu       $t0, $sp, 0x1F0
    ctx->pc = 0x2dae1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2dae20:
    // 0x2dae20: 0xc053d7c  jal         func_14F5F0
label_2dae24:
    if (ctx->pc == 0x2DAE24u) {
        ctx->pc = 0x2DAE24u;
            // 0x2dae24: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAE28u;
        goto label_2dae28;
    }
    ctx->pc = 0x2DAE20u;
    SET_GPR_U32(ctx, 31, 0x2DAE28u);
    ctx->pc = 0x2DAE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAE20u;
            // 0x2dae24: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F5F0u;
    if (runtime->hasFunction(0x14F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x14F5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE28u; }
        if (ctx->pc != 0x2DAE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveCheck__FPfPfPfP13MoveCheckInfoP6CCPolyii_0x14f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE28u; }
        if (ctx->pc != 0x2DAE28u) { return; }
    }
    ctx->pc = 0x2DAE28u;
label_2dae28:
    // 0x2dae28: 0xc7a101b0  lwc1        $f1, 0x1B0($sp)
    ctx->pc = 0x2dae28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dae2c:
    // 0x2dae2c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dae2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dae30:
    // 0x2dae30: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2dae30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_2dae34:
    // 0x2dae34: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x2dae34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dae38:
    // 0x2dae38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2dae38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dae3c:
    // 0x2dae3c: 0xe42188f0  swc1        $f1, -0x7710($at)
    ctx->pc = 0x2dae3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936816), bits); }
label_2dae40:
    // 0x2dae40: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dae40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dae44:
    // 0x2dae44: 0xc050d88  jal         func_143620
label_2dae48:
    if (ctx->pc == 0x2DAE48u) {
        ctx->pc = 0x2DAE48u;
            // 0x2dae48: 0xe42088f8  swc1        $f0, -0x7708($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936824), bits); }
        ctx->pc = 0x2DAE4Cu;
        goto label_2dae4c;
    }
    ctx->pc = 0x2DAE44u;
    SET_GPR_U32(ctx, 31, 0x2DAE4Cu);
    ctx->pc = 0x2DAE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAE44u;
            // 0x2dae48: 0xe42088f8  swc1        $f0, -0x7708($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936824), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x143620u;
    if (runtime->hasFunction(0x143620u)) {
        auto targetFn = runtime->lookupFunction(0x143620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE4Cu; }
        if (ctx->pc != 0x2DAE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetProjection__Ff_0x143620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE4Cu; }
        if (ctx->pc != 0x2DAE4Cu) { return; }
    }
    ctx->pc = 0x2DAE4Cu;
label_2dae4c:
    // 0x2dae4c: 0x12800018  beqz        $s4, . + 4 + (0x18 << 2)
label_2dae50:
    if (ctx->pc == 0x2DAE50u) {
        ctx->pc = 0x2DAE54u;
        goto label_2dae54;
    }
    ctx->pc = 0x2DAE4Cu;
    {
        const bool branch_taken_0x2dae4c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dae4c) {
            ctx->pc = 0x2DAEB0u;
            goto label_2daeb0;
        }
    }
    ctx->pc = 0x2DAE54u;
label_2dae54:
    // 0x2dae54: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x2dae54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_2dae58:
    // 0x2dae58: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x2dae58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_2dae5c:
    // 0x2dae5c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2dae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_2dae60:
    // 0x2dae60: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2dae64:
    if (ctx->pc == 0x2DAE64u) {
        ctx->pc = 0x2DAE64u;
            // 0x2dae64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2DAE68u;
        goto label_2dae68;
    }
    ctx->pc = 0x2DAE60u;
    {
        const bool branch_taken_0x2dae60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAE60u;
            // 0x2dae64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dae60) {
            ctx->pc = 0x2DAE7Cu;
            goto label_2dae7c;
        }
    }
    ctx->pc = 0x2DAE68u;
label_2dae68:
    // 0x2dae68: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2dae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2dae6c:
    // 0x2dae6c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2dae6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2dae70:
    // 0x2dae70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2dae74:
    if (ctx->pc == 0x2DAE74u) {
        ctx->pc = 0x2DAE74u;
            // 0x2dae74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAE78u;
        goto label_2dae78;
    }
    ctx->pc = 0x2DAE70u;
    {
        const bool branch_taken_0x2dae70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAE70u;
            // 0x2dae74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dae70) {
            ctx->pc = 0x2DAE88u;
            goto label_2dae88;
        }
    }
    ctx->pc = 0x2DAE78u;
label_2dae78:
    // 0x2dae78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2dae78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2dae7c:
    // 0x2dae7c: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x2dae7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_2dae80:
    // 0x2dae80: 0x1000000b  b           . + 4 + (0xB << 2)
label_2dae84:
    if (ctx->pc == 0x2DAE84u) {
        ctx->pc = 0x2DAE84u;
            // 0x2dae84: 0xaf829e24  sw          $v0, -0x61DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942244), GPR_U32(ctx, 2));
        ctx->pc = 0x2DAE88u;
        goto label_2dae88;
    }
    ctx->pc = 0x2DAE80u;
    {
        const bool branch_taken_0x2dae80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAE80u;
            // 0x2dae84: 0xaf829e24  sw          $v0, -0x61DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dae80) {
            ctx->pc = 0x2DAEB0u;
            goto label_2daeb0;
        }
    }
    ctx->pc = 0x2DAE88u;
label_2dae88:
    // 0x2dae88: 0xc06d5a8  jal         func_1B56A0
label_2dae8c:
    if (ctx->pc == 0x2DAE8Cu) {
        ctx->pc = 0x2DAE90u;
        goto label_2dae90;
    }
    ctx->pc = 0x2DAE88u;
    SET_GPR_U32(ctx, 31, 0x2DAE90u);
    ctx->pc = 0x1B56A0u;
    if (runtime->hasFunction(0x1B56A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B56A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE90u; }
        if (ctx->pc != 0x2DAE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsHeight__14CEditPartsInfoFv_0x1b56a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE90u; }
        if (ctx->pc != 0x2DAE90u) { return; }
    }
    ctx->pc = 0x2DAE90u;
label_2dae90:
    // 0x2dae90: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2dae90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2dae94:
    // 0x2dae94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dae94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2dae98:
    // 0x2dae98: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2dae98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2dae9c:
    // 0x2dae9c: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x2dae9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2daea0:
    // 0x2daea0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2daea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2daea4:
    // 0x2daea4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2daea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2daea8:
    // 0x2daea8: 0xc06d5ac  jal         func_1B56B0
label_2daeac:
    if (ctx->pc == 0x2DAEACu) {
        ctx->pc = 0x2DAEACu;
            // 0x2daeac: 0xe7a00164  swc1        $f0, 0x164($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
        ctx->pc = 0x2DAEB0u;
        goto label_2daeb0;
    }
    ctx->pc = 0x2DAEA8u;
    SET_GPR_U32(ctx, 31, 0x2DAEB0u);
    ctx->pc = 0x2DAEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAEA8u;
            // 0x2daeac: 0xe7a00164  swc1        $f0, 0x164($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B56B0u;
    if (runtime->hasFunction(0x1B56B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B56B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAEB0u; }
        if (ctx->pc != 0x2DAEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsMaxWidth__14CEditPartsInfoFv_0x1b56b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAEB0u; }
        if (ctx->pc != 0x2DAEB0u) { return; }
    }
    ctx->pc = 0x2DAEB0u;
label_2daeb0:
    // 0x2daeb0: 0x12000058  beqz        $s0, . + 4 + (0x58 << 2)
label_2daeb4:
    if (ctx->pc == 0x2DAEB4u) {
        ctx->pc = 0x2DAEB4u;
            // 0x2daeb4: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->pc = 0x2DAEB8u;
        goto label_2daeb8;
    }
    ctx->pc = 0x2DAEB0u;
    {
        const bool branch_taken_0x2daeb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAEB0u;
            // 0x2daeb4: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daeb0) {
            ctx->pc = 0x2DB014u;
            goto label_2db014;
        }
    }
    ctx->pc = 0x2DAEB8u;
label_2daeb8:
    // 0x2daeb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2daeb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2daebc:
    // 0x2daebc: 0xc0bb548  jal         func_2ED520
label_2daec0:
    if (ctx->pc == 0x2DAEC0u) {
        ctx->pc = 0x2DAEC0u;
            // 0x2daec0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2DAEC4u;
        goto label_2daec4;
    }
    ctx->pc = 0x2DAEBCu;
    SET_GPR_U32(ctx, 31, 0x2DAEC4u);
    ctx->pc = 0x2DAEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAEBCu;
            // 0x2daec0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAEC4u; }
        if (ctx->pc != 0x2DAEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAEC4u; }
        if (ctx->pc != 0x2DAEC4u) { return; }
    }
    ctx->pc = 0x2DAEC4u;
label_2daec4:
    // 0x2daec4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2daec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_2daec8:
    // 0x2daec8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2daec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2daecc:
    // 0x2daecc: 0xc7829e60  lwc1        $f2, -0x61A0($gp)
    ctx->pc = 0x2daeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2daed0:
    // 0x2daed0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2daed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2daed4:
    // 0x2daed4: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2daed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_2daed8:
    // 0x2daed8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2daed8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2daedc:
    // 0x2daedc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2daedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2daee0:
    // 0x2daee0: 0x0  nop
    ctx->pc = 0x2daee0u;
    // NOP
label_2daee4:
    // 0x2daee4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2daee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2daee8:
    // 0x2daee8: 0x0  nop
    ctx->pc = 0x2daee8u;
    // NOP
label_2daeec:
    // 0x2daeec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2daef0:
    if (ctx->pc == 0x2DAEF0u) {
        ctx->pc = 0x2DAEF0u;
            // 0x2daef0: 0xe7809e60  swc1        $f0, -0x61A0($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942304), bits); }
        ctx->pc = 0x2DAEF4u;
        goto label_2daef4;
    }
    ctx->pc = 0x2DAEECu;
    {
        const bool branch_taken_0x2daeec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DAEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAEECu;
            // 0x2daef0: 0xe7809e60  swc1        $f0, -0x61A0($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942304), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daeec) {
            ctx->pc = 0x2DAEF8u;
            goto label_2daef8;
        }
    }
    ctx->pc = 0x2DAEF4u;
label_2daef4:
    // 0x2daef4: 0xe7819e60  swc1        $f1, -0x61A0($gp)
    ctx->pc = 0x2daef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942304), bits); }
label_2daef8:
    // 0x2daef8: 0xc7809e60  lwc1        $f0, -0x61A0($gp)
    ctx->pc = 0x2daef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2daefc:
    // 0x2daefc: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2daefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
label_2daf00:
    // 0x2daf00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2daf00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2daf04:
    // 0x2daf04: 0x0  nop
    ctx->pc = 0x2daf04u;
    // NOP
label_2daf08:
    // 0x2daf08: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2daf08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2daf0c:
    // 0x2daf0c: 0x0  nop
    ctx->pc = 0x2daf0cu;
    // NOP
label_2daf10:
    // 0x2daf10: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2daf14:
    if (ctx->pc == 0x2DAF14u) {
        ctx->pc = 0x2DAF18u;
        goto label_2daf18;
    }
    ctx->pc = 0x2DAF10u;
    {
        const bool branch_taken_0x2daf10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2daf10) {
            ctx->pc = 0x2DAF1Cu;
            goto label_2daf1c;
        }
    }
    ctx->pc = 0x2DAF18u;
label_2daf18:
    // 0x2daf18: 0xe7819e60  swc1        $f1, -0x61A0($gp)
    ctx->pc = 0x2daf18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942304), bits); }
label_2daf1c:
    // 0x2daf1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2daf1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2daf20:
    // 0x2daf20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2daf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2daf24:
    // 0x2daf24: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2daf24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2daf28:
    // 0x2daf28: 0xc04c698  jal         func_131A60
label_2daf2c:
    if (ctx->pc == 0x2DAF2Cu) {
        ctx->pc = 0x2DAF2Cu;
            // 0x2daf2c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2DAF30u;
        goto label_2daf30;
    }
    ctx->pc = 0x2DAF28u;
    SET_GPR_U32(ctx, 31, 0x2DAF30u);
    ctx->pc = 0x2DAF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAF28u;
            // 0x2daf2c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A60u;
    if (runtime->hasFunction(0x131A60u)) {
        auto targetFn = runtime->lookupFunction(0x131A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF30u; }
        if (ctx->pc != 0x2DAF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFollowOffset__15mgCCameraFollowFfff_0x131a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF30u; }
        if (ctx->pc != 0x2DAF30u) { return; }
    }
    ctx->pc = 0x2DAF30u;
label_2daf30:
    // 0x2daf30: 0x8e790060  lw          $t9, 0x60($s3)
    ctx->pc = 0x2daf30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_2daf34:
    // 0x2daf34: 0xc7ac0160  lwc1        $f12, 0x160($sp)
    ctx->pc = 0x2daf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2daf38:
    // 0x2daf38: 0xc7ad0164  lwc1        $f13, 0x164($sp)
    ctx->pc = 0x2daf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2daf3c:
    // 0x2daf3c: 0xc7ae0168  lwc1        $f14, 0x168($sp)
    ctx->pc = 0x2daf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2daf40:
    // 0x2daf40: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2daf40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2daf44:
    // 0x2daf44: 0x320f809  jalr        $t9
label_2daf48:
    if (ctx->pc == 0x2DAF48u) {
        ctx->pc = 0x2DAF48u;
            // 0x2daf48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF4Cu;
        goto label_2daf4c;
    }
    ctx->pc = 0x2DAF44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DAF4Cu);
        ctx->pc = 0x2DAF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAF44u;
            // 0x2daf48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DAF4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF4Cu; }
            if (ctx->pc != 0x2DAF4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2DAF4Cu;
label_2daf4c:
    // 0x2daf4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2daf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2daf50:
    // 0x2daf50: 0xc0bb538  jal         func_2ED4E0
label_2daf54:
    if (ctx->pc == 0x2DAF54u) {
        ctx->pc = 0x2DAF54u;
            // 0x2daf54: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2DAF58u;
        goto label_2daf58;
    }
    ctx->pc = 0x2DAF50u;
    SET_GPR_U32(ctx, 31, 0x2DAF58u);
    ctx->pc = 0x2DAF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAF50u;
            // 0x2daf54: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF58u; }
        if (ctx->pc != 0x2DAF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF58u; }
        if (ctx->pc != 0x2DAF58u) { return; }
    }
    ctx->pc = 0x2DAF58u;
label_2daf58:
    // 0x2daf58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2daf5c:
    if (ctx->pc == 0x2DAF5Cu) {
        ctx->pc = 0x2DAF5Cu;
            // 0x2daf5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF60u;
        goto label_2daf60;
    }
    ctx->pc = 0x2DAF58u;
    {
        const bool branch_taken_0x2daf58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAF58u;
            // 0x2daf5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daf58) {
            ctx->pc = 0x2DAF78u;
            goto label_2daf78;
        }
    }
    ctx->pc = 0x2DAF60u;
label_2daf60:
    // 0x2daf60: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x2daf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
label_2daf64:
    // 0x2daf64: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2daf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2daf68:
    // 0x2daf68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2daf68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2daf6c:
    // 0x2daf6c: 0xc04c67c  jal         func_1319F0
label_2daf70:
    if (ctx->pc == 0x2DAF70u) {
        ctx->pc = 0x2DAF70u;
            // 0x2daf70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF74u;
        goto label_2daf74;
    }
    ctx->pc = 0x2DAF6Cu;
    SET_GPR_U32(ctx, 31, 0x2DAF74u);
    ctx->pc = 0x2DAF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAF6Cu;
            // 0x2daf70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319F0u;
    if (runtime->hasFunction(0x1319F0u)) {
        auto targetFn = runtime->lookupFunction(0x1319F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF74u; }
        if (ctx->pc != 0x2DAF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddAngle__15mgCCameraFollowFf_0x1319f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF74u; }
        if (ctx->pc != 0x2DAF74u) { return; }
    }
    ctx->pc = 0x2DAF74u;
label_2daf74:
    // 0x2daf74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2daf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2daf78:
    // 0x2daf78: 0xc0bb538  jal         func_2ED4E0
label_2daf7c:
    if (ctx->pc == 0x2DAF7Cu) {
        ctx->pc = 0x2DAF7Cu;
            // 0x2daf7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2DAF80u;
        goto label_2daf80;
    }
    ctx->pc = 0x2DAF78u;
    SET_GPR_U32(ctx, 31, 0x2DAF80u);
    ctx->pc = 0x2DAF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAF78u;
            // 0x2daf7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF80u; }
        if (ctx->pc != 0x2DAF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF80u; }
        if (ctx->pc != 0x2DAF80u) { return; }
    }
    ctx->pc = 0x2DAF80u;
label_2daf80:
    // 0x2daf80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2daf84:
    if (ctx->pc == 0x2DAF84u) {
        ctx->pc = 0x2DAF84u;
            // 0x2daf84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF88u;
        goto label_2daf88;
    }
    ctx->pc = 0x2DAF80u;
    {
        const bool branch_taken_0x2daf80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAF80u;
            // 0x2daf84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daf80) {
            ctx->pc = 0x2DAFA0u;
            goto label_2dafa0;
        }
    }
    ctx->pc = 0x2DAF88u;
label_2daf88:
    // 0x2daf88: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2daf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_2daf8c:
    // 0x2daf8c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2daf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2daf90:
    // 0x2daf90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2daf90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2daf94:
    // 0x2daf94: 0xc04c67c  jal         func_1319F0
label_2daf98:
    if (ctx->pc == 0x2DAF98u) {
        ctx->pc = 0x2DAF98u;
            // 0x2daf98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF9Cu;
        goto label_2daf9c;
    }
    ctx->pc = 0x2DAF94u;
    SET_GPR_U32(ctx, 31, 0x2DAF9Cu);
    ctx->pc = 0x2DAF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAF94u;
            // 0x2daf98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319F0u;
    if (runtime->hasFunction(0x1319F0u)) {
        auto targetFn = runtime->lookupFunction(0x1319F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF9Cu; }
        if (ctx->pc != 0x2DAF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddAngle__15mgCCameraFollowFf_0x1319f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF9Cu; }
        if (ctx->pc != 0x2DAF9Cu) { return; }
    }
    ctx->pc = 0x2DAF9Cu;
label_2daf9c:
    // 0x2daf9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2daf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dafa0:
    // 0x2dafa0: 0xc0bb548  jal         func_2ED520
label_2dafa4:
    if (ctx->pc == 0x2DAFA4u) {
        ctx->pc = 0x2DAFA4u;
            // 0x2dafa4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2DAFA8u;
        goto label_2dafa8;
    }
    ctx->pc = 0x2DAFA0u;
    SET_GPR_U32(ctx, 31, 0x2DAFA8u);
    ctx->pc = 0x2DAFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAFA0u;
            // 0x2dafa4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFA8u; }
        if (ctx->pc != 0x2DAFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFA8u; }
        if (ctx->pc != 0x2DAFA8u) { return; }
    }
    ctx->pc = 0x2DAFA8u;
label_2dafa8:
    // 0x2dafa8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2dafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_2dafac:
    // 0x2dafac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dafacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dafb0:
    // 0x2dafb0: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2dafb0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_2dafb4:
    // 0x2dafb4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2dafb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2dafb8:
    // 0x2dafb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dafb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dafbc:
    // 0x2dafbc: 0xc04c67c  jal         func_1319F0
label_2dafc0:
    if (ctx->pc == 0x2DAFC0u) {
        ctx->pc = 0x2DAFC0u;
            // 0x2dafc0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x2DAFC4u;
        goto label_2dafc4;
    }
    ctx->pc = 0x2DAFBCu;
    SET_GPR_U32(ctx, 31, 0x2DAFC4u);
    ctx->pc = 0x2DAFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAFBCu;
            // 0x2dafc0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319F0u;
    if (runtime->hasFunction(0x1319F0u)) {
        auto targetFn = runtime->lookupFunction(0x1319F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFC4u; }
        if (ctx->pc != 0x2DAFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddAngle__15mgCCameraFollowFf_0x1319f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFC4u; }
        if (ctx->pc != 0x2DAFC4u) { return; }
    }
    ctx->pc = 0x2DAFC4u;
label_2dafc4:
    // 0x2dafc4: 0xc78c9e60  lwc1        $f12, -0x61A0($gp)
    ctx->pc = 0x2dafc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dafc8:
    // 0x2dafc8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2dafc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_2dafcc:
    // 0x2dafcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dafccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dafd0:
    // 0x2dafd0: 0x0  nop
    ctx->pc = 0x2dafd0u;
    // NOP
label_2dafd4:
    // 0x2dafd4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2dafd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dafd8:
    // 0x2dafd8: 0x0  nop
    ctx->pc = 0x2dafd8u;
    // NOP
label_2dafdc:
    // 0x2dafdc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2dafe0:
    if (ctx->pc == 0x2DAFE0u) {
        ctx->pc = 0x2DAFE0u;
            // 0x2dafe0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAFE4u;
        goto label_2dafe4;
    }
    ctx->pc = 0x2DAFDCu;
    {
        const bool branch_taken_0x2dafdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DAFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAFDCu;
            // 0x2dafe0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dafdc) {
            ctx->pc = 0x2DAFE8u;
            goto label_2dafe8;
        }
    }
    ctx->pc = 0x2DAFE4u;
label_2dafe4:
    // 0x2dafe4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2dafe4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2dafe8:
    // 0x2dafe8: 0xc04c68c  jal         func_131A30
label_2dafec:
    if (ctx->pc == 0x2DAFECu) {
        ctx->pc = 0x2DAFF0u;
        goto label_2daff0;
    }
    ctx->pc = 0x2DAFE8u;
    SET_GPR_U32(ctx, 31, 0x2DAFF0u);
    ctx->pc = 0x131A30u;
    if (runtime->hasFunction(0x131A30u)) {
        auto targetFn = runtime->lookupFunction(0x131A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFF0u; }
        if (ctx->pc != 0x2DAFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__15mgCCameraFollowFf_0x131a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFF0u; }
        if (ctx->pc != 0x2DAFF0u) { return; }
    }
    ctx->pc = 0x2DAFF0u;
label_2daff0:
    // 0x2daff0: 0xc78c9e60  lwc1        $f12, -0x61A0($gp)
    ctx->pc = 0x2daff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2daff4:
    // 0x2daff4: 0xc04c680  jal         func_131A00
label_2daff8:
    if (ctx->pc == 0x2DAFF8u) {
        ctx->pc = 0x2DAFF8u;
            // 0x2daff8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAFFCu;
        goto label_2daffc;
    }
    ctx->pc = 0x2DAFF4u;
    SET_GPR_U32(ctx, 31, 0x2DAFFCu);
    ctx->pc = 0x2DAFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAFF4u;
            // 0x2daff8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A00u;
    if (runtime->hasFunction(0x131A00u)) {
        auto targetFn = runtime->lookupFunction(0x131A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFFCu; }
        if (ctx->pc != 0x2DAFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDistance__15mgCCameraFollowFf_0x131a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFFCu; }
        if (ctx->pc != 0x2DAFFCu) { return; }
    }
    ctx->pc = 0x2DAFFCu;
label_2daffc:
    // 0x2daffc: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2daffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_2db000:
    // 0x2db000: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2db000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2db004:
    // 0x2db004: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2db004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2db008:
    // 0x2db008: 0xc04c564  jal         func_131590
label_2db00c:
    if (ctx->pc == 0x2DB00Cu) {
        ctx->pc = 0x2DB00Cu;
            // 0x2db00c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2DB010u;
        goto label_2db010;
    }
    ctx->pc = 0x2DB008u;
    SET_GPR_U32(ctx, 31, 0x2DB010u);
    ctx->pc = 0x2DB00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB008u;
            // 0x2db00c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131590u;
    if (runtime->hasFunction(0x131590u)) {
        auto targetFn = runtime->lookupFunction(0x131590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB010u; }
        if (ctx->pc != 0x2DB010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpeed__9mgCCameraFff_0x131590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB010u; }
        if (ctx->pc != 0x2DB010u) { return; }
    }
    ctx->pc = 0x2DB010u;
label_2db010:
    // 0x2db010: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db014:
    // 0x2db014: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2db014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2db018:
    // 0x2db018: 0x34218300  ori         $at, $at, 0x8300
    ctx->pc = 0x2db018u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33536);
label_2db01c:
    // 0x2db01c: 0xc04c5a0  jal         func_131680
label_2db020:
    if (ctx->pc == 0x2DB020u) {
        ctx->pc = 0x2DB020u;
            // 0x2db020: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DB024u;
        goto label_2db024;
    }
    ctx->pc = 0x2DB01Cu;
    SET_GPR_U32(ctx, 31, 0x2DB024u);
    ctx->pc = 0x2DB020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB01Cu;
            // 0x2db020: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131680u;
    if (runtime->hasFunction(0x131680u)) {
        auto targetFn = runtime->lookupFunction(0x131680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB024u; }
        if (ctx->pc != 0x2DB024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFollowNextPos__15mgCCameraFollowFPf_0x131680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB024u; }
        if (ctx->pc != 0x2DB024u) { return; }
    }
    ctx->pc = 0x2DB024u;
label_2db024:
    // 0x2db024: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x2db024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
label_2db028:
    // 0x2db028: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2db028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2db02c:
    // 0x2db02c: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x2db02cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db030:
    // 0x2db030: 0xac208304  sw          $zero, -0x7CFC($at)
    ctx->pc = 0x2db030u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935300), GPR_U32(ctx, 0));
label_2db034:
    // 0x2db034: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db038:
    // 0x2db038: 0x34218310  ori         $at, $at, 0x8310
    ctx->pc = 0x2db038u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33552);
label_2db03c:
    // 0x2db03c: 0xc04c580  jal         func_131600
label_2db040:
    if (ctx->pc == 0x2DB040u) {
        ctx->pc = 0x2DB040u;
            // 0x2db040: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DB044u;
        goto label_2db044;
    }
    ctx->pc = 0x2DB03Cu;
    SET_GPR_U32(ctx, 31, 0x2DB044u);
    ctx->pc = 0x2DB040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB03Cu;
            // 0x2db040: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131600u;
    if (runtime->hasFunction(0x131600u)) {
        auto targetFn = runtime->lookupFunction(0x131600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB044u; }
        if (ctx->pc != 0x2DB044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNextRef__9mgCCameraFPf_0x131600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB044u; }
        if (ctx->pc != 0x2DB044u) { return; }
    }
    ctx->pc = 0x2DB044u;
label_2db044:
    // 0x2db044: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x2db044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
label_2db048:
    // 0x2db048: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x2db048u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db04c:
    // 0x2db04c: 0xac208314  sw          $zero, -0x7CEC($at)
    ctx->pc = 0x2db04cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935316), GPR_U32(ctx, 0));
label_2db050:
    // 0x2db050: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db054:
    // 0x2db054: 0x34218330  ori         $at, $at, 0x8330
    ctx->pc = 0x2db054u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33584);
label_2db058:
    // 0x2db058: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x2db058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db05c:
    // 0x2db05c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db060:
    // 0x2db060: 0x34218300  ori         $at, $at, 0x8300
    ctx->pc = 0x2db060u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33536);
label_2db064:
    // 0x2db064: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x2db064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db068:
    // 0x2db068: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db06c:
    // 0x2db06c: 0x34218310  ori         $at, $at, 0x8310
    ctx->pc = 0x2db06cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33552);
label_2db070:
    // 0x2db070: 0xc041c3e  jal         func_1070F8
label_2db074:
    if (ctx->pc == 0x2DB074u) {
        ctx->pc = 0x2DB074u;
            // 0x2db074: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DB078u;
        goto label_2db078;
    }
    ctx->pc = 0x2DB070u;
    SET_GPR_U32(ctx, 31, 0x2DB078u);
    ctx->pc = 0x2DB074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB070u;
            // 0x2db074: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB078u; }
        if (ctx->pc != 0x2DB078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB078u; }
        if (ctx->pc != 0x2DB078u) { return; }
    }
    ctx->pc = 0x2DB078u;
label_2db078:
    // 0x2db078: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x2db078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
label_2db07c:
    // 0x2db07c: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x2db07cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db080:
    // 0x2db080: 0xac208334  sw          $zero, -0x7CCC($at)
    ctx->pc = 0x2db080u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935348), GPR_U32(ctx, 0));
label_2db084:
    // 0x2db084: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db088:
    // 0x2db088: 0x34218330  ori         $at, $at, 0x8330
    ctx->pc = 0x2db088u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33584);
label_2db08c:
    // 0x2db08c: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x2db08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db090:
    // 0x2db090: 0xc041be0  jal         func_106F80
label_2db094:
    if (ctx->pc == 0x2DB094u) {
        ctx->pc = 0x2DB094u;
            // 0x2db094: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB098u;
        goto label_2db098;
    }
    ctx->pc = 0x2DB090u;
    SET_GPR_U32(ctx, 31, 0x2DB098u);
    ctx->pc = 0x2DB094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB090u;
            // 0x2db094: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB098u; }
        if (ctx->pc != 0x2DB098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB098u; }
        if (ctx->pc != 0x2DB098u) { return; }
    }
    ctx->pc = 0x2DB098u;
label_2db098:
    // 0x2db098: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db09c:
    // 0x2db09c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2db09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_2db0a0:
    // 0x2db0a0: 0x34218330  ori         $at, $at, 0x8330
    ctx->pc = 0x2db0a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33584);
label_2db0a4:
    // 0x2db0a4: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x2db0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db0a8:
    // 0x2db0a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2db0a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2db0ac:
    // 0x2db0ac: 0xc041c4a  jal         func_107128
label_2db0b0:
    if (ctx->pc == 0x2DB0B0u) {
        ctx->pc = 0x2DB0B0u;
            // 0x2db0b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB0B4u;
        goto label_2db0b4;
    }
    ctx->pc = 0x2DB0ACu;
    SET_GPR_U32(ctx, 31, 0x2DB0B4u);
    ctx->pc = 0x2DB0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB0ACu;
            // 0x2db0b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB0B4u; }
        if (ctx->pc != 0x2DB0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB0B4u; }
        if (ctx->pc != 0x2DB0B4u) { return; }
    }
    ctx->pc = 0x2DB0B4u;
label_2db0b4:
    // 0x2db0b4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db0b8:
    // 0x2db0b8: 0x34218300  ori         $at, $at, 0x8300
    ctx->pc = 0x2db0b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33536);
label_2db0bc:
    // 0x2db0bc: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x2db0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db0c0:
    // 0x2db0c0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db0c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db0c4:
    // 0x2db0c4: 0x34218330  ori         $at, $at, 0x8330
    ctx->pc = 0x2db0c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33584);
label_2db0c8:
    // 0x2db0c8: 0xc04bcf4  jal         func_12F3D0
label_2db0cc:
    if (ctx->pc == 0x2DB0CCu) {
        ctx->pc = 0x2DB0CCu;
            // 0x2db0cc: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DB0D0u;
        goto label_2db0d0;
    }
    ctx->pc = 0x2DB0C8u;
    SET_GPR_U32(ctx, 31, 0x2DB0D0u);
    ctx->pc = 0x2DB0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB0C8u;
            // 0x2db0cc: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB0D0u; }
        if (ctx->pc != 0x2DB0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB0D0u; }
        if (ctx->pc != 0x2DB0D0u) { return; }
    }
    ctx->pc = 0x2DB0D0u;
label_2db0d0:
    // 0x2db0d0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db0d4:
    // 0x2db0d4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2db0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2db0d8:
    // 0x2db0d8: 0x34218300  ori         $at, $at, 0x8300
    ctx->pc = 0x2db0d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33536);
label_2db0dc:
    // 0x2db0dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2db0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2db0e0:
    // 0x2db0e0: 0x3a13021  addu        $a2, $sp, $at
    ctx->pc = 0x2db0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db0e4:
    // 0x2db0e4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db0e8:
    // 0x2db0e8: 0x34218310  ori         $at, $at, 0x8310
    ctx->pc = 0x2db0e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33552);
label_2db0ec:
    // 0x2db0ec: 0xc04bd2c  jal         func_12F4B0
label_2db0f0:
    if (ctx->pc == 0x2DB0F0u) {
        ctx->pc = 0x2DB0F0u;
            // 0x2db0f0: 0x3a13821  addu        $a3, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DB0F4u;
        goto label_2db0f4;
    }
    ctx->pc = 0x2DB0ECu;
    SET_GPR_U32(ctx, 31, 0x2DB0F4u);
    ctx->pc = 0x2DB0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB0ECu;
            // 0x2db0f0: 0x3a13821  addu        $a3, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4B0u;
    if (runtime->hasFunction(0x12F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB0F4u; }
        if (ctx->pc != 0x2DB0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPf_0x12f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB0F4u; }
        if (ctx->pc != 0x2DB0F4u) { return; }
    }
    ctx->pc = 0x2DB0F4u;
label_2db0f4:
    // 0x2db0f4: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x2db0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2db0f8:
    // 0x2db0f8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2db0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2db0fc:
    // 0x2db0fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2db0fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2db100:
    // 0x2db100: 0x3c0842c8  lui         $t0, 0x42C8
    ctx->pc = 0x2db100u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17096 << 16));
label_2db104:
    // 0x2db104: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x2db104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
label_2db108:
    // 0x2db108: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2db108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2db10c:
    // 0x2db10c: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x2db10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
label_2db110:
    // 0x2db110: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2db110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2db114:
    // 0x2db114: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x2db114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2db118:
    // 0x2db118: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x2db118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2db11c:
    // 0x2db11c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2db11cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2db120:
    // 0x2db120: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x2db120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_2db124:
    // 0x2db124: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x2db124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
label_2db128:
    // 0x2db128: 0x27a20198  addiu       $v0, $sp, 0x198
    ctx->pc = 0x2db128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_2db12c:
    // 0x2db12c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2db12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2db130:
    // 0x2db130: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2db130u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2db134:
    // 0x2db134: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2db134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2db138:
    // 0x2db138: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x2db138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2db13c:
    // 0x2db13c: 0x27a201a4  addiu       $v0, $sp, 0x1A4
    ctx->pc = 0x2db13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
label_2db140:
    // 0x2db140: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2db140u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2db144:
    // 0x2db144: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x2db144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_2db148:
    // 0x2db148: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2db148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2db14c:
    // 0x2db14c: 0x27a201a8  addiu       $v0, $sp, 0x1A8
    ctx->pc = 0x2db14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_2db150:
    // 0x2db150: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2db150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2db154:
    // 0x2db154: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2db154u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2db158:
    // 0x2db158: 0xc0b763c  jal         func_2DD8F0
label_2db15c:
    if (ctx->pc == 0x2DB15Cu) {
        ctx->pc = 0x2DB15Cu;
            // 0x2db15c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->pc = 0x2DB160u;
        goto label_2db160;
    }
    ctx->pc = 0x2DB158u;
    SET_GPR_U32(ctx, 31, 0x2DB160u);
    ctx->pc = 0x2DB15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB158u;
            // 0x2db15c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DD8F0u;
    if (runtime->hasFunction(0x2DD8F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DD8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB160u; }
        if (ctx->pc != 0x2DB160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGeoCheckCamCol__FP4CMapR9mgVu0FBOXP6CCPolyi_0x2dd8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB160u; }
        if (ctx->pc != 0x2DB160u) { return; }
    }
    ctx->pc = 0x2DB160u;
label_2db160:
    // 0x2db160: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db164:
    // 0x2db164: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2db164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2db168:
    // 0x2db168: 0x34218310  ori         $at, $at, 0x8310
    ctx->pc = 0x2db168u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33552);
label_2db16c:
    // 0x2db16c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2db16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2db170:
    // 0x2db170: 0x3a13021  addu        $a2, $sp, $at
    ctx->pc = 0x2db170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db174:
    // 0x2db174: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2db174u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2db178:
    // 0x2db178: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db17c:
    // 0x2db17c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2db17cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db180:
    // 0x2db180: 0x34218300  ori         $at, $at, 0x8300
    ctx->pc = 0x2db180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33536);
label_2db184:
    // 0x2db184: 0x3a13821  addu        $a3, $sp, $at
    ctx->pc = 0x2db184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db188:
    // 0x2db188: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db18c:
    // 0x2db18c: 0x34218320  ori         $at, $at, 0x8320
    ctx->pc = 0x2db18cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33568);
label_2db190:
    // 0x2db190: 0xc053794  jal         func_14DE50
label_2db194:
    if (ctx->pc == 0x2DB194u) {
        ctx->pc = 0x2DB194u;
            // 0x2db194: 0x3a14021  addu        $t0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DB198u;
        goto label_2db198;
    }
    ctx->pc = 0x2DB190u;
    SET_GPR_U32(ctx, 31, 0x2DB198u);
    ctx->pc = 0x2DB194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB190u;
            // 0x2db194: 0x3a14021  addu        $t0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB198u; }
        if (ctx->pc != 0x2DB198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB198u; }
        if (ctx->pc != 0x2DB198u) { return; }
    }
    ctx->pc = 0x2DB198u;
label_2db198:
    // 0x2db198: 0x4400016  bltz        $v0, . + 4 + (0x16 << 2)
label_2db19c:
    if (ctx->pc == 0x2DB19Cu) {
        ctx->pc = 0x2DB19Cu;
            // 0x2db19c: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->pc = 0x2DB1A0u;
        goto label_2db1a0;
    }
    ctx->pc = 0x2DB198u;
    {
        const bool branch_taken_0x2db198 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2DB19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB198u;
            // 0x2db19c: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db198) {
            ctx->pc = 0x2DB1F4u;
            goto label_2db1f4;
        }
    }
    ctx->pc = 0x2DB1A0u;
label_2db1a0:
    // 0x2db1a0: 0x34218310  ori         $at, $at, 0x8310
    ctx->pc = 0x2db1a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33552);
label_2db1a4:
    // 0x2db1a4: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x2db1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db1a8:
    // 0x2db1a8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db1ac:
    // 0x2db1ac: 0x34218320  ori         $at, $at, 0x8320
    ctx->pc = 0x2db1acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33568);
label_2db1b0:
    // 0x2db1b0: 0xc04c028  jal         func_1300A0
label_2db1b4:
    if (ctx->pc == 0x2DB1B4u) {
        ctx->pc = 0x2DB1B4u;
            // 0x2db1b4: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DB1B8u;
        goto label_2db1b8;
    }
    ctx->pc = 0x2DB1B0u;
    SET_GPR_U32(ctx, 31, 0x2DB1B8u);
    ctx->pc = 0x2DB1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB1B0u;
            // 0x2db1b4: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB1B8u; }
        if (ctx->pc != 0x2DB1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB1B8u; }
        if (ctx->pc != 0x2DB1B8u) { return; }
    }
    ctx->pc = 0x2DB1B8u;
label_2db1b8:
    // 0x2db1b8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2db1b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2db1bc:
    // 0x2db1bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2db1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2db1c0:
    // 0x2db1c0: 0xc04c680  jal         func_131A00
label_2db1c4:
    if (ctx->pc == 0x2DB1C4u) {
        ctx->pc = 0x2DB1C4u;
            // 0x2db1c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2DB1C8u;
        goto label_2db1c8;
    }
    ctx->pc = 0x2DB1C0u;
    SET_GPR_U32(ctx, 31, 0x2DB1C8u);
    ctx->pc = 0x2DB1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB1C0u;
            // 0x2db1c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A00u;
    if (runtime->hasFunction(0x131A00u)) {
        auto targetFn = runtime->lookupFunction(0x131A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB1C8u; }
        if (ctx->pc != 0x2DB1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDistance__15mgCCameraFollowFf_0x131a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB1C8u; }
        if (ctx->pc != 0x2DB1C8u) { return; }
    }
    ctx->pc = 0x2DB1C8u;
label_2db1c8:
    // 0x2db1c8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2db1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_2db1cc:
    // 0x2db1cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2db1ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2db1d0:
    // 0x2db1d0: 0x0  nop
    ctx->pc = 0x2db1d0u;
    // NOP
label_2db1d4:
    // 0x2db1d4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2db1d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2db1d8:
    // 0x2db1d8: 0x0  nop
    ctx->pc = 0x2db1d8u;
    // NOP
label_2db1dc:
    // 0x2db1dc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2db1e0:
    if (ctx->pc == 0x2DB1E0u) {
        ctx->pc = 0x2DB1E0u;
            // 0x2db1e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2DB1E4u;
        goto label_2db1e4;
    }
    ctx->pc = 0x2DB1DCu;
    {
        const bool branch_taken_0x2db1dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DB1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB1DCu;
            // 0x2db1e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db1dc) {
            ctx->pc = 0x2DB1ECu;
            goto label_2db1ec;
        }
    }
    ctx->pc = 0x2DB1E4u;
label_2db1e4:
    // 0x2db1e4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2db1e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2db1e8:
    // 0x2db1e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2db1e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2db1ec:
    // 0x2db1ec: 0xc04c68c  jal         func_131A30
label_2db1f0:
    if (ctx->pc == 0x2DB1F0u) {
        ctx->pc = 0x2DB1F0u;
            // 0x2db1f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB1F4u;
        goto label_2db1f4;
    }
    ctx->pc = 0x2DB1ECu;
    SET_GPR_U32(ctx, 31, 0x2DB1F4u);
    ctx->pc = 0x2DB1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB1ECu;
            // 0x2db1f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A30u;
    if (runtime->hasFunction(0x131A30u)) {
        auto targetFn = runtime->lookupFunction(0x131A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB1F4u; }
        if (ctx->pc != 0x2DB1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__15mgCCameraFollowFf_0x131a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB1F4u; }
        if (ctx->pc != 0x2DB1F4u) { return; }
    }
    ctx->pc = 0x2DB1F4u;
label_2db1f4:
    // 0x2db1f4: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x2db1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_2db1f8:
    // 0x2db1f8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2db1fc:
    if (ctx->pc == 0x2DB1FCu) {
        ctx->pc = 0x2DB200u;
        goto label_2db200;
    }
    ctx->pc = 0x2DB1F8u;
    {
        const bool branch_taken_0x2db1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db1f8) {
            ctx->pc = 0x2DB22Cu;
            goto label_2db22c;
        }
    }
    ctx->pc = 0x2DB200u;
label_2db200:
    // 0x2db200: 0x8f839e18  lw          $v1, -0x61E8($gp)
    ctx->pc = 0x2db200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942232)));
label_2db204:
    // 0x2db204: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2db204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2db208:
    // 0x2db208: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_2db20c:
    if (ctx->pc == 0x2DB20Cu) {
        ctx->pc = 0x2DB20Cu;
            // 0x2db20c: 0x3c0243c8  lui         $v0, 0x43C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
        ctx->pc = 0x2DB210u;
        goto label_2db210;
    }
    ctx->pc = 0x2DB208u;
    {
        const bool branch_taken_0x2db208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DB20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB208u;
            // 0x2db20c: 0x3c0243c8  lui         $v0, 0x43C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db208) {
            ctx->pc = 0x2DB22Cu;
            goto label_2db22c;
        }
    }
    ctx->pc = 0x2DB210u;
label_2db210:
    // 0x2db210: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2db210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2db214:
    // 0x2db214: 0xc04c680  jal         func_131A00
label_2db218:
    if (ctx->pc == 0x2DB218u) {
        ctx->pc = 0x2DB218u;
            // 0x2db218: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB21Cu;
        goto label_2db21c;
    }
    ctx->pc = 0x2DB214u;
    SET_GPR_U32(ctx, 31, 0x2DB21Cu);
    ctx->pc = 0x2DB218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB214u;
            // 0x2db218: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A00u;
    if (runtime->hasFunction(0x131A00u)) {
        auto targetFn = runtime->lookupFunction(0x131A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB21Cu; }
        if (ctx->pc != 0x2DB21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDistance__15mgCCameraFollowFf_0x131a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB21Cu; }
        if (ctx->pc != 0x2DB21Cu) { return; }
    }
    ctx->pc = 0x2DB21Cu;
label_2db21c:
    // 0x2db21c: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2db21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_2db220:
    // 0x2db220: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2db220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2db224:
    // 0x2db224: 0xc04c68c  jal         func_131A30
label_2db228:
    if (ctx->pc == 0x2DB228u) {
        ctx->pc = 0x2DB228u;
            // 0x2db228: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB22Cu;
        goto label_2db22c;
    }
    ctx->pc = 0x2DB224u;
    SET_GPR_U32(ctx, 31, 0x2DB22Cu);
    ctx->pc = 0x2DB228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB224u;
            // 0x2db228: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A30u;
    if (runtime->hasFunction(0x131A30u)) {
        auto targetFn = runtime->lookupFunction(0x131A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB22Cu; }
        if (ctx->pc != 0x2DB22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__15mgCCameraFollowFf_0x131a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB22Cu; }
        if (ctx->pc != 0x2DB22Cu) { return; }
    }
    ctx->pc = 0x2DB22Cu;
label_2db22c:
    // 0x2db22c: 0xc0b694c  jal         func_2DA530
label_2db230:
    if (ctx->pc == 0x2DB230u) {
        ctx->pc = 0x2DB230u;
            // 0x2db230: 0x8fa40100  lw          $a0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->pc = 0x2DB234u;
        goto label_2db234;
    }
    ctx->pc = 0x2DB22Cu;
    SET_GPR_U32(ctx, 31, 0x2DB234u);
    ctx->pc = 0x2DB230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB22Cu;
            // 0x2db230: 0x8fa40100  lw          $a0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DA530u;
    if (runtime->hasFunction(0x2DA530u)) {
        auto targetFn = runtime->lookupFunction(0x2DA530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB234u; }
        if (ctx->pc != 0x2DB234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGeoMapLimitHeight__Fi_0x2da530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB234u; }
        if (ctx->pc != 0x2DB234u) { return; }
    }
    ctx->pc = 0x2DB234u;
label_2db234:
    // 0x2db234: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2db234u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2db238:
    // 0x2db238: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2db238u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2db23c:
    // 0x2db23c: 0x0  nop
    ctx->pc = 0x2db23cu;
    // NOP
label_2db240:
    // 0x2db240: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2db240u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2db244:
    // 0x2db244: 0x0  nop
    ctx->pc = 0x2db244u;
    // NOP
label_2db248:
    // 0x2db248: 0x45010013  bc1t        . + 4 + (0x13 << 2)
label_2db24c:
    if (ctx->pc == 0x2DB24Cu) {
        ctx->pc = 0x2DB250u;
        goto label_2db250;
    }
    ctx->pc = 0x2DB248u;
    {
        const bool branch_taken_0x2db248 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db248) {
            ctx->pc = 0x2DB298u;
            goto label_2db298;
        }
    }
    ctx->pc = 0x2DB250u;
label_2db250:
    // 0x2db250: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db254:
    // 0x2db254: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2db254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2db258:
    // 0x2db258: 0x34218340  ori         $at, $at, 0x8340
    ctx->pc = 0x2db258u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33600);
label_2db25c:
    // 0x2db25c: 0xc04c5c0  jal         func_131700
label_2db260:
    if (ctx->pc == 0x2DB260u) {
        ctx->pc = 0x2DB260u;
            // 0x2db260: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DB264u;
        goto label_2db264;
    }
    ctx->pc = 0x2DB25Cu;
    SET_GPR_U32(ctx, 31, 0x2DB264u);
    ctx->pc = 0x2DB260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB25Cu;
            // 0x2db260: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131700u;
    if (runtime->hasFunction(0x131700u)) {
        auto targetFn = runtime->lookupFunction(0x131700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB264u; }
        if (ctx->pc != 0x2DB264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFollowNext__15mgCCameraFollowFPf_0x131700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB264u; }
        if (ctx->pc != 0x2DB264u) { return; }
    }
    ctx->pc = 0x2DB264u;
label_2db264:
    // 0x2db264: 0xc04c690  jal         func_131A40
label_2db268:
    if (ctx->pc == 0x2DB268u) {
        ctx->pc = 0x2DB268u;
            // 0x2db268: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB26Cu;
        goto label_2db26c;
    }
    ctx->pc = 0x2DB264u;
    SET_GPR_U32(ctx, 31, 0x2DB26Cu);
    ctx->pc = 0x2DB268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB264u;
            // 0x2db268: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A40u;
    if (runtime->hasFunction(0x131A40u)) {
        auto targetFn = runtime->lookupFunction(0x131A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB26Cu; }
        if (ctx->pc != 0x2DB26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHeight__15mgCCameraFollowFv_0x131a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB26Cu; }
        if (ctx->pc != 0x2DB26Cu) { return; }
    }
    ctx->pc = 0x2DB26Cu;
label_2db26c:
    // 0x2db26c: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x2db26cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
label_2db270:
    // 0x2db270: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x2db270u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db274:
    // 0x2db274: 0xc4218344  lwc1        $f1, -0x7CBC($at)
    ctx->pc = 0x2db274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294935364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2db278:
    // 0x2db278: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2db278u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2db27c:
    // 0x2db27c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2db27cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2db280:
    // 0x2db280: 0x0  nop
    ctx->pc = 0x2db280u;
    // NOP
label_2db284:
    // 0x2db284: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_2db288:
    if (ctx->pc == 0x2DB288u) {
        ctx->pc = 0x2DB28Cu;
        goto label_2db28c;
    }
    ctx->pc = 0x2DB284u;
    {
        const bool branch_taken_0x2db284 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db284) {
            ctx->pc = 0x2DB298u;
            goto label_2db298;
        }
    }
    ctx->pc = 0x2DB28Cu;
label_2db28c:
    // 0x2db28c: 0x4601a301  sub.s       $f12, $f20, $f1
    ctx->pc = 0x2db28cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_2db290:
    // 0x2db290: 0xc04c68c  jal         func_131A30
label_2db294:
    if (ctx->pc == 0x2DB294u) {
        ctx->pc = 0x2DB294u;
            // 0x2db294: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB298u;
        goto label_2db298;
    }
    ctx->pc = 0x2DB290u;
    SET_GPR_U32(ctx, 31, 0x2DB298u);
    ctx->pc = 0x2DB294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB290u;
            // 0x2db294: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A30u;
    if (runtime->hasFunction(0x131A30u)) {
        auto targetFn = runtime->lookupFunction(0x131A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB298u; }
        if (ctx->pc != 0x2DB298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__15mgCCameraFollowFf_0x131a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB298u; }
        if (ctx->pc != 0x2DB298u) { return; }
    }
    ctx->pc = 0x2DB298u;
label_2db298:
    // 0x2db298: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x2db298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
label_2db29c:
    // 0x2db29c: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x2db29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_2db2a0:
    // 0x2db2a0: 0x246388f0  addiu       $v1, $v1, -0x7710
    ctx->pc = 0x2db2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936816));
label_2db2a4:
    // 0x2db2a4: 0x24428910  addiu       $v0, $v0, -0x76F0
    ctx->pc = 0x2db2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936848));
label_2db2a8:
    // 0x2db2a8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2db2a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2db2ac:
    // 0x2db2ac: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2db2acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2db2b0:
    // 0x2db2b0: 0x8f859e64  lw          $a1, -0x619C($gp)
    ctx->pc = 0x2db2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942308)));
label_2db2b4:
    // 0x2db2b4: 0xc06c3c0  jal         func_1B0F00
label_2db2b8:
    if (ctx->pc == 0x2DB2B8u) {
        ctx->pc = 0x2DB2B8u;
            // 0x2db2b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB2BCu;
        goto label_2db2bc;
    }
    ctx->pc = 0x2DB2B4u;
    SET_GPR_U32(ctx, 31, 0x2DB2BCu);
    ctx->pc = 0x2DB2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB2B4u;
            // 0x2db2b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F00u;
    if (runtime->hasFunction(0x1B0F00u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB2BCu; }
        if (ctx->pc != 0x2DB2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditAngle__8CEditMapFi_0x1b0f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB2BCu; }
        if (ctx->pc != 0x2DB2BCu) { return; }
    }
    ctx->pc = 0x2DB2BCu;
label_2db2bc:
    // 0x2db2bc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2db2bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2db2c0:
    // 0x2db2c0: 0x3c0901f6  lui         $t1, 0x1F6
    ctx->pc = 0x2db2c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)502 << 16));
label_2db2c4:
    // 0x2db2c4: 0xe4208934  swc1        $f0, -0x76CC($at)
    ctx->pc = 0x2db2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936884), bits); }
label_2db2c8:
    // 0x2db2c8: 0x252988f0  addiu       $t1, $t1, -0x7710
    ctx->pc = 0x2db2c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294936816));
label_2db2cc:
    // 0x2db2cc: 0x79280000  lq          $t0, 0x0($t1)
    ctx->pc = 0x2db2ccu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_2db2d0:
    // 0x2db2d0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2db2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2db2d4:
    // 0x2db2d4: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x2db2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_2db2d8:
    // 0x2db2d8: 0x27a70190  addiu       $a3, $sp, 0x190
    ctx->pc = 0x2db2d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2db2dc:
    // 0x2db2dc: 0x34444000  ori         $a0, $v0, 0x4000
    ctx->pc = 0x2db2dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_2db2e0:
    // 0x2db2e0: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x2db2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2db2e4:
    // 0x2db2e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2db2e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2db2e8:
    // 0x2db2e8: 0x3c02c61c  lui         $v0, 0xC61C
    ctx->pc = 0x2db2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50716 << 16));
label_2db2ec:
    // 0x2db2ec: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x2db2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
label_2db2f0:
    // 0x2db2f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2db2f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db2f4:
    // 0x2db2f4: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x2db2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_2db2f8:
    // 0x2db2f8: 0x27b701f0  addiu       $s7, $sp, 0x1F0
    ctx->pc = 0x2db2f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2db2fc:
    // 0x2db2fc: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x2db2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
label_2db300:
    // 0x2db300: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x2db300u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_2db304:
    // 0x2db304: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x2db304u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
label_2db308:
    // 0x2db308: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x2db308u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_2db30c:
    // 0x2db30c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2db30cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_2db310:
    // 0x2db310: 0x27a201b4  addiu       $v0, $sp, 0x1B4
    ctx->pc = 0x2db310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
label_2db314:
    // 0x2db314: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2db314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_2db318:
    // 0x2db318: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x2db318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2db31c:
    // 0x2db31c: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x2db31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
label_2db320:
    // 0x2db320: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2db320u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2db324:
    // 0x2db324: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x2db324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_2db328:
    // 0x2db328: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2db328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2db32c:
    // 0x2db32c: 0x27a20198  addiu       $v0, $sp, 0x198
    ctx->pc = 0x2db32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_2db330:
    // 0x2db330: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2db330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2db334:
    // 0x2db334: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2db334u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2db338:
    // 0x2db338: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2db338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2db33c:
    // 0x2db33c: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x2db33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2db340:
    // 0x2db340: 0x27a201a4  addiu       $v0, $sp, 0x1A4
    ctx->pc = 0x2db340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
label_2db344:
    // 0x2db344: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2db344u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2db348:
    // 0x2db348: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x2db348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_2db34c:
    // 0x2db34c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2db34cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2db350:
    // 0x2db350: 0x27a201a8  addiu       $v0, $sp, 0x1A8
    ctx->pc = 0x2db350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_2db354:
    // 0x2db354: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2db354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2db358:
    // 0x2db358: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2db358u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2db35c:
    // 0x2db35c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2db35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2db360:
    // 0x2db360: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x2db360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_2db364:
    // 0x2db364: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2db364u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2db368:
    // 0x2db368: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_2db36c:
    if (ctx->pc == 0x2DB36Cu) {
        ctx->pc = 0x2DB36Cu;
            // 0x2db36c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB370u;
        goto label_2db370;
    }
    ctx->pc = 0x2DB368u;
    {
        const bool branch_taken_0x2db368 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB368u;
            // 0x2db36c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db368) {
            ctx->pc = 0x2DB3C4u;
            goto label_2db3c4;
        }
    }
    ctx->pc = 0x2DB370u;
label_2db370:
    // 0x2db370: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2db370u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db374:
    // 0x2db374: 0x2bd1021  addu        $v0, $s5, $sp
    ctx->pc = 0x2db374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
label_2db378:
    // 0x2db378: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2db378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2db37c:
    // 0x2db37c: 0x8c440170  lw          $a0, 0x170($v0)
    ctx->pc = 0x2db37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 368)));
label_2db380:
    // 0x2db380: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x2db380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2db384:
    // 0x2db384: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x2db384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_2db388:
    // 0x2db388: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2db388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2db38c:
    // 0x2db38c: 0x320f809  jalr        $t9
label_2db390:
    if (ctx->pc == 0x2DB390u) {
        ctx->pc = 0x2DB390u;
            // 0x2db390: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB394u;
        goto label_2db394;
    }
    ctx->pc = 0x2DB38Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DB394u);
        ctx->pc = 0x2DB390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB38Cu;
            // 0x2db390: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DB394u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DB394u; }
            if (ctx->pc != 0x2DB394u) { return; }
        }
        }
    }
    ctx->pc = 0x2DB394u;
label_2db394:
    // 0x2db394: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2db394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2db398:
    // 0x2db398: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2db398u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2db39c:
    // 0x2db39c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2db39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2db3a0:
    // 0x2db3a0: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x2db3a0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2db3a4:
    // 0x2db3a4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2db3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2db3a8:
    // 0x2db3a8: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_2db3ac:
    if (ctx->pc == 0x2DB3ACu) {
        ctx->pc = 0x2DB3ACu;
            // 0x2db3ac: 0x2e2b821  addu        $s7, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->pc = 0x2DB3B0u;
        goto label_2db3b0;
    }
    ctx->pc = 0x2DB3A8u;
    {
        const bool branch_taken_0x2db3a8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2DB3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB3A8u;
            // 0x2db3ac: 0x2e2b821  addu        $s7, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db3a8) {
            ctx->pc = 0x2DB3C4u;
            goto label_2db3c4;
        }
    }
    ctx->pc = 0x2DB3B0u;
label_2db3b0:
    // 0x2db3b0: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x2db3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_2db3b4:
    // 0x2db3b4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2db3b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2db3b8:
    // 0x2db3b8: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x2db3b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2db3bc:
    // 0x2db3bc: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_2db3c0:
    if (ctx->pc == 0x2DB3C0u) {
        ctx->pc = 0x2DB3C0u;
            // 0x2db3c0: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x2DB3C4u;
        goto label_2db3c4;
    }
    ctx->pc = 0x2DB3BCu;
    {
        const bool branch_taken_0x2db3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB3BCu;
            // 0x2db3c0: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db3bc) {
            ctx->pc = 0x2DB374u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2db374;
        }
    }
    ctx->pc = 0x2DB3C4u;
label_2db3c4:
    // 0x2db3c4: 0x0  nop
    ctx->pc = 0x2db3c4u;
    // NOP
label_2db3c8:
    // 0x2db3c8: 0x3c02c4fa  lui         $v0, 0xC4FA
    ctx->pc = 0x2db3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50426 << 16));
label_2db3cc:
    // 0x2db3cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2db3ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2db3d0:
    // 0x2db3d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2db3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2db3d4:
    // 0x2db3d4: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2db3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2db3d8:
    // 0x2db3d8: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x2db3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2db3dc:
    // 0x2db3dc: 0x27a701c0  addiu       $a3, $sp, 0x1C0
    ctx->pc = 0x2db3dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_2db3e0:
    // 0x2db3e0: 0xc053870  jal         func_14E1C0
label_2db3e4:
    if (ctx->pc == 0x2DB3E4u) {
        ctx->pc = 0x2DB3E4u;
            // 0x2db3e4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DB3E8u;
        goto label_2db3e8;
    }
    ctx->pc = 0x2DB3E0u;
    SET_GPR_U32(ctx, 31, 0x2DB3E8u);
    ctx->pc = 0x2DB3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB3E0u;
            // 0x2db3e4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E1C0u;
    if (runtime->hasFunction(0x14E1C0u)) {
        auto targetFn = runtime->lookupFunction(0x14E1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB3E8u; }
        if (ctx->pc != 0x2DB3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHitVertical__FP6CCPolyiPffPfi_0x14e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB3E8u; }
        if (ctx->pc != 0x2DB3E8u) { return; }
    }
    ctx->pc = 0x2DB3E8u;
label_2db3e8:
    // 0x2db3e8: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_2db3ec:
    if (ctx->pc == 0x2DB3ECu) {
        ctx->pc = 0x2DB3ECu;
            // 0x2db3ec: 0x27a301c0  addiu       $v1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x2DB3F0u;
        goto label_2db3f0;
    }
    ctx->pc = 0x2DB3E8u;
    {
        const bool branch_taken_0x2db3e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2DB3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB3E8u;
            // 0x2db3ec: 0x27a301c0  addiu       $v1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db3e8) {
            ctx->pc = 0x2DB40Cu;
            goto label_2db40c;
        }
    }
    ctx->pc = 0x2DB3F0u;
label_2db3f0:
    // 0x2db3f0: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x2db3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_2db3f4:
    // 0x2db3f4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2db3f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2db3f8:
    // 0x2db3f8: 0x244288f0  addiu       $v0, $v0, -0x7710
    ctx->pc = 0x2db3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936816));
label_2db3fc:
    // 0x2db3fc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2db3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2db400:
    // 0x2db400: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2db400u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2db404:
    // 0x2db404: 0xc7a001c4  lwc1        $f0, 0x1C4($sp)
    ctx->pc = 0x2db404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2db408:
    // 0x2db408: 0xe4208914  swc1        $f0, -0x76EC($at)
    ctx->pc = 0x2db408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936852), bits); }
label_2db40c:
    // 0x2db40c: 0xc0b62e4  jal         func_2D8B90
label_2db410:
    if (ctx->pc == 0x2DB410u) {
        ctx->pc = 0x2DB414u;
        goto label_2db414;
    }
    ctx->pc = 0x2DB40Cu;
    SET_GPR_U32(ctx, 31, 0x2DB414u);
    ctx->pc = 0x2D8B90u;
    if (runtime->hasFunction(0x2D8B90u)) {
        auto targetFn = runtime->lookupFunction(0x2D8B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB414u; }
        if (ctx->pc != 0x2DB414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditEndPlaceEffect__Fv_0x2d8b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB414u; }
        if (ctx->pc != 0x2DB414u) { return; }
    }
    ctx->pc = 0x2DB414u;
label_2db414:
    // 0x2db414: 0xc0b66e4  jal         func_2D9B90
label_2db418:
    if (ctx->pc == 0x2DB418u) {
        ctx->pc = 0x2DB418u;
            // 0x2db418: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB41Cu;
        goto label_2db41c;
    }
    ctx->pc = 0x2DB414u;
    SET_GPR_U32(ctx, 31, 0x2DB41Cu);
    ctx->pc = 0x2DB418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB414u;
            // 0x2db418: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9B90u;
    if (runtime->hasFunction(0x2D9B90u)) {
        auto targetFn = runtime->lookupFunction(0x2D9B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB41Cu; }
        if (ctx->pc != 0x2DB41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaceRiverStep__FP8CEditMap_0x2d9b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB41Cu; }
        if (ctx->pc != 0x2DB41Cu) { return; }
    }
    ctx->pc = 0x2DB41Cu;
label_2db41c:
    // 0x2db41c: 0xc0b6740  jal         func_2D9D00
label_2db420:
    if (ctx->pc == 0x2DB420u) {
        ctx->pc = 0x2DB420u;
            // 0x2db420: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB424u;
        goto label_2db424;
    }
    ctx->pc = 0x2DB41Cu;
    SET_GPR_U32(ctx, 31, 0x2DB424u);
    ctx->pc = 0x2DB420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB41Cu;
            // 0x2db420: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D00u;
    if (runtime->hasFunction(0x2D9D00u)) {
        auto targetFn = runtime->lookupFunction(0x2D9D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB424u; }
        if (ctx->pc != 0x2DB424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveMtnStep__FP6CScene_0x2d9d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB424u; }
        if (ctx->pc != 0x2DB424u) { return; }
    }
    ctx->pc = 0x2DB424u;
label_2db424:
    // 0x2db424: 0xc0b61fc  jal         func_2D87F0
label_2db428:
    if (ctx->pc == 0x2DB428u) {
        ctx->pc = 0x2DB42Cu;
        goto label_2db42c;
    }
    ctx->pc = 0x2DB424u;
    SET_GPR_U32(ctx, 31, 0x2DB42Cu);
    ctx->pc = 0x2D87F0u;
    if (runtime->hasFunction(0x2D87F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D87F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB42Cu; }
        if (ctx->pc != 0x2DB42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckControl__Fv_0x2d87f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB42Cu; }
        if (ctx->pc != 0x2DB42Cu) { return; }
    }
    ctx->pc = 0x2DB42Cu;
label_2db42c:
    // 0x2db42c: 0x1440032f  bnez        $v0, . + 4 + (0x32F << 2)
label_2db430:
    if (ctx->pc == 0x2DB430u) {
        ctx->pc = 0x2DB430u;
            // 0x2db430: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->pc = 0x2DB434u;
        goto label_2db434;
    }
    ctx->pc = 0x2DB42Cu;
    {
        const bool branch_taken_0x2db42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB42Cu;
            // 0x2db430: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db42c) {
            ctx->pc = 0x2DC0ECu;
            goto label_2dc0ec;
        }
    }
    ctx->pc = 0x2DB434u;
label_2db434:
    // 0x2db434: 0x1200032c  beqz        $s0, . + 4 + (0x32C << 2)
label_2db438:
    if (ctx->pc == 0x2DB438u) {
        ctx->pc = 0x2DB438u;
            // 0x2db438: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2DB43Cu;
        goto label_2db43c;
    }
    ctx->pc = 0x2DB434u;
    {
        const bool branch_taken_0x2db434 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB434u;
            // 0x2db438: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db434) {
            ctx->pc = 0x2DC0E8u;
            goto label_2dc0e8;
        }
    }
    ctx->pc = 0x2DB43Cu;
label_2db43c:
    // 0x2db43c: 0xae420f64  sw          $v0, 0xF64($s2)
    ctx->pc = 0x2db43cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3940), GPR_U32(ctx, 2));
label_2db440:
    // 0x2db440: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x2db440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_2db444:
    // 0x2db444: 0x14400258  bnez        $v0, . + 4 + (0x258 << 2)
label_2db448:
    if (ctx->pc == 0x2DB448u) {
        ctx->pc = 0x2DB44Cu;
        goto label_2db44c;
    }
    ctx->pc = 0x2DB444u;
    {
        const bool branch_taken_0x2db444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db444) {
            ctx->pc = 0x2DBDA8u;
            goto label_2dbda8;
        }
    }
    ctx->pc = 0x2DB44Cu;
label_2db44c:
    // 0x2db44c: 0x8f839e0c  lw          $v1, -0x61F4($gp)
    ctx->pc = 0x2db44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942220)));
label_2db450:
    // 0x2db450: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2db450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2db454:
    // 0x2db454: 0x14620130  bne         $v1, $v0, . + 4 + (0x130 << 2)
label_2db458:
    if (ctx->pc == 0x2DB458u) {
        ctx->pc = 0x2DB45Cu;
        goto label_2db45c;
    }
    ctx->pc = 0x2DB454u;
    {
        const bool branch_taken_0x2db454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2db454) {
            ctx->pc = 0x2DB918u;
            goto label_2db918;
        }
    }
    ctx->pc = 0x2DB45Cu;
label_2db45c:
    // 0x2db45c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2db45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_2db460:
    // 0x2db460: 0x1440012a  bnez        $v0, . + 4 + (0x12A << 2)
label_2db464:
    if (ctx->pc == 0x2DB464u) {
        ctx->pc = 0x2DB468u;
        goto label_2db468;
    }
    ctx->pc = 0x2DB460u;
    {
        const bool branch_taken_0x2db460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db460) {
            ctx->pc = 0x2DB90Cu;
            goto label_2db90c;
        }
    }
    ctx->pc = 0x2DB468u;
label_2db468:
    // 0x2db468: 0xc0b65c8  jal         func_2D9720
label_2db46c:
    if (ctx->pc == 0x2DB46Cu) {
        ctx->pc = 0x2DB470u;
        goto label_2db470;
    }
    ctx->pc = 0x2DB468u;
    SET_GPR_U32(ctx, 31, 0x2DB470u);
    ctx->pc = 0x2D9720u;
    if (runtime->hasFunction(0x2D9720u)) {
        auto targetFn = runtime->lookupFunction(0x2D9720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB470u; }
        if (ctx->pc != 0x2DB470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UndoEnable__Fv_0x2d9720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB470u; }
        if (ctx->pc != 0x2DB470u) { return; }
    }
    ctx->pc = 0x2DB470u;
label_2db470:
    // 0x2db470: 0x10400126  beqz        $v0, . + 4 + (0x126 << 2)
label_2db474:
    if (ctx->pc == 0x2DB474u) {
        ctx->pc = 0x2DB474u;
            // 0x2db474: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x2DB478u;
        goto label_2db478;
    }
    ctx->pc = 0x2DB470u;
    {
        const bool branch_taken_0x2db470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB470u;
            // 0x2db474: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db470) {
            ctx->pc = 0x2DB90Cu;
            goto label_2db90c;
        }
    }
    ctx->pc = 0x2DB478u;
label_2db478:
    // 0x2db478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2db478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db47c:
    // 0x2db47c: 0xc0b6210  jal         func_2D8840
label_2db480:
    if (ctx->pc == 0x2DB480u) {
        ctx->pc = 0x2DB480u;
            // 0x2db480: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB484u;
        goto label_2db484;
    }
    ctx->pc = 0x2DB47Cu;
    SET_GPR_U32(ctx, 31, 0x2DB484u);
    ctx->pc = 0x2DB480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB47Cu;
            // 0x2db480: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8840u;
    if (runtime->hasFunction(0x2D8840u)) {
        auto targetFn = runtime->lookupFunction(0x2D8840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB484u; }
        if (ctx->pc != 0x2DB484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHelpMes__Fiii_0x2d8840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB484u; }
        if (ctx->pc != 0x2DB484u) { return; }
    }
    ctx->pc = 0x2DB484u;
label_2db484:
    // 0x2db484: 0x10000122  b           . + 4 + (0x122 << 2)
label_2db488:
    if (ctx->pc == 0x2DB488u) {
        ctx->pc = 0x2DB488u;
            // 0x2db488: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->pc = 0x2DB48Cu;
        goto label_2db48c;
    }
    ctx->pc = 0x2DB484u;
    {
        const bool branch_taken_0x2db484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB484u;
            // 0x2db488: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db484) {
            ctx->pc = 0x2DB910u;
            goto label_2db910;
        }
    }
    ctx->pc = 0x2DB48Cu;
label_2db48c:
    // 0x2db48c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db490:
    // 0x2db490: 0x24428ad0  addiu       $v0, $v0, -0x7530
    ctx->pc = 0x2db490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937296));
label_2db494:
    // 0x2db494: 0x34218350  ori         $at, $at, 0x8350
    ctx->pc = 0x2db494u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33616);
label_2db498:
    // 0x2db498: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2db498u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2db49c:
    // 0x2db49c: 0x3a11821  addu        $v1, $sp, $at
    ctx->pc = 0x2db49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db4a0:
    // 0x2db4a0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2db4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2db4a4:
    // 0x2db4a4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2db4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_2db4a8:
    // 0x2db4a8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2db4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2db4ac:
    // 0x2db4ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2db4b0:
    if (ctx->pc == 0x2DB4B0u) {
        ctx->pc = 0x2DB4B0u;
            // 0x2db4b0: 0xc43488f4  lwc1        $f20, -0x770C($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x2DB4B4u;
        goto label_2db4b4;
    }
    ctx->pc = 0x2DB4ACu;
    {
        const bool branch_taken_0x2db4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB4ACu;
            // 0x2db4b0: 0xc43488f4  lwc1        $f20, -0x770C($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db4ac) {
            ctx->pc = 0x2DB4C0u;
            goto label_2db4c0;
        }
    }
    ctx->pc = 0x2DB4B4u;
label_2db4b4:
    // 0x2db4b4: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x2db4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_2db4b8:
    // 0x2db4b8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2db4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2db4bc:
    // 0x2db4bc: 0xac2288f4  sw          $v0, -0x770C($at)
    ctx->pc = 0x2db4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294936820), GPR_U32(ctx, 2));
label_2db4c0:
    // 0x2db4c0: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2db4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_2db4c4:
    // 0x2db4c4: 0xc06c2d0  jal         func_1B0B40
label_2db4c8:
    if (ctx->pc == 0x2DB4C8u) {
        ctx->pc = 0x2DB4C8u;
            // 0x2db4c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB4CCu;
        goto label_2db4cc;
    }
    ctx->pc = 0x2DB4C4u;
    SET_GPR_U32(ctx, 31, 0x2DB4CCu);
    ctx->pc = 0x2DB4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB4C4u;
            // 0x2db4c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B40u;
    if (runtime->hasFunction(0x1B0B40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB4CCu; }
        if (ctx->pc != 0x2DB4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfo__8CEditMapFPc_0x1b0b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB4CCu; }
        if (ctx->pc != 0x2DB4CCu) { return; }
    }
    ctx->pc = 0x2DB4CCu;
label_2db4cc:
    // 0x2db4cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2db4ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2db4d0:
    // 0x2db4d0: 0x12200111  beqz        $s1, . + 4 + (0x111 << 2)
label_2db4d4:
    if (ctx->pc == 0x2DB4D4u) {
        ctx->pc = 0x2DB4D8u;
        goto label_2db4d8;
    }
    ctx->pc = 0x2DB4D0u;
    {
        const bool branch_taken_0x2db4d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db4d0) {
            ctx->pc = 0x2DB918u;
            goto label_2db918;
        }
    }
    ctx->pc = 0x2DB4D8u;
label_2db4d8:
    // 0x2db4d8: 0x8f859e64  lw          $a1, -0x619C($gp)
    ctx->pc = 0x2db4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942308)));
label_2db4dc:
    // 0x2db4dc: 0xc06c3c0  jal         func_1B0F00
label_2db4e0:
    if (ctx->pc == 0x2DB4E0u) {
        ctx->pc = 0x2DB4E0u;
            // 0x2db4e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB4E4u;
        goto label_2db4e4;
    }
    ctx->pc = 0x2DB4DCu;
    SET_GPR_U32(ctx, 31, 0x2DB4E4u);
    ctx->pc = 0x2DB4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB4DCu;
            // 0x2db4e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F00u;
    if (runtime->hasFunction(0x1B0F00u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB4E4u; }
        if (ctx->pc != 0x2DB4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditAngle__8CEditMapFi_0x1b0f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB4E4u; }
        if (ctx->pc != 0x2DB4E4u) { return; }
    }
    ctx->pc = 0x2DB4E4u;
label_2db4e4:
    // 0x2db4e4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db4e8:
    // 0x2db4e8: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x2db4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
label_2db4ec:
    // 0x2db4ec: 0x34218354  ori         $at, $at, 0x8354
    ctx->pc = 0x2db4ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33620);
label_2db4f0:
    // 0x2db4f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2db4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2db4f4:
    // 0x2db4f4: 0x3a1b021  addu        $s6, $sp, $at
    ctx->pc = 0x2db4f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db4f8:
    // 0x2db4f8: 0x24c688f0  addiu       $a2, $a2, -0x7710
    ctx->pc = 0x2db4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936816));
label_2db4fc:
    // 0x2db4fc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db500:
    // 0x2db500: 0x34218360  ori         $at, $at, 0x8360
    ctx->pc = 0x2db500u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33632);
label_2db504:
    // 0x2db504: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x2db504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_2db508:
    // 0x2db508: 0xc06c408  jal         func_1B1020
label_2db50c:
    if (ctx->pc == 0x2DB50Cu) {
        ctx->pc = 0x2DB50Cu;
            // 0x2db50c: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DB510u;
        goto label_2db510;
    }
    ctx->pc = 0x2DB508u;
    SET_GPR_U32(ctx, 31, 0x2DB510u);
    ctx->pc = 0x2DB50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB508u;
            // 0x2db50c: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1020u;
    if (runtime->hasFunction(0x1B1020u)) {
        auto targetFn = runtime->lookupFunction(0x1B1020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB510u; }
        if (ctx->pc != 0x2DB510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditPos__8CEditMapFPfPf_0x1b1020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB510u; }
        if (ctx->pc != 0x2DB510u) { return; }
    }
    ctx->pc = 0x2DB510u;
label_2db510:
    // 0x2db510: 0xc6cc0000  lwc1        $f12, 0x0($s6)
    ctx->pc = 0x2db510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2db514:
    // 0x2db514: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db518:
    // 0x2db518: 0x34218360  ori         $at, $at, 0x8360
    ctx->pc = 0x2db518u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33632);
label_2db51c:
    // 0x2db51c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2db51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2db520:
    // 0x2db520: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2db520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2db524:
    // 0x2db524: 0xc06cab8  jal         func_1B2AE0
label_2db528:
    if (ctx->pc == 0x2DB528u) {
        ctx->pc = 0x2DB528u;
            // 0x2db528: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DB52Cu;
        goto label_2db52c;
    }
    ctx->pc = 0x2DB524u;
    SET_GPR_U32(ctx, 31, 0x2DB52Cu);
    ctx->pc = 0x2DB528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB524u;
            // 0x2db528: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2AE0u;
    if (runtime->hasFunction(0x1B2AE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B2AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB52Cu; }
        if (ctx->pc != 0x2DB52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditPartsAlt__8CEditMapFP14CEditPartsInfoPff_0x1b2ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB52Cu; }
        if (ctx->pc != 0x2DB52Cu) { return; }
    }
    ctx->pc = 0x2DB52Cu;
label_2db52c:
    // 0x2db52c: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x2db52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
label_2db530:
    // 0x2db530: 0x8f829e10  lw          $v0, -0x61F0($gp)
    ctx->pc = 0x2db530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942224)));
label_2db534:
    // 0x2db534: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x2db534u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db538:
    // 0x2db538: 0xe4208364  swc1        $f0, -0x7C9C($at)
    ctx->pc = 0x2db538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294935396), bits); }
label_2db53c:
    // 0x2db53c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2db53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2db540:
    // 0x2db540: 0xe42088f4  swc1        $f0, -0x770C($at)
    ctx->pc = 0x2db540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936820), bits); }
label_2db544:
    // 0x2db544: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2db544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2db548:
    // 0x2db548: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_2db54c:
    if (ctx->pc == 0x2DB54Cu) {
        ctx->pc = 0x2DB54Cu;
            // 0x2db54c: 0xe4208914  swc1        $f0, -0x76EC($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936852), bits); }
        ctx->pc = 0x2DB550u;
        goto label_2db550;
    }
    ctx->pc = 0x2DB548u;
    {
        const bool branch_taken_0x2db548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB548u;
            // 0x2db54c: 0xe4208914  swc1        $f0, -0x76EC($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936852), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db548) {
            ctx->pc = 0x2DB664u;
            goto label_2db664;
        }
    }
    ctx->pc = 0x2DB550u;
label_2db550:
    // 0x2db550: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db554:
    // 0x2db554: 0x34218360  ori         $at, $at, 0x8360
    ctx->pc = 0x2db554u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33632);
label_2db558:
    // 0x2db558: 0x3a11821  addu        $v1, $sp, $at
    ctx->pc = 0x2db558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db55c:
    // 0x2db55c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2db55cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2db560:
    // 0x2db560: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db564:
    // 0x2db564: 0x34218370  ori         $at, $at, 0x8370
    ctx->pc = 0x2db564u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33648);
label_2db568:
    // 0x2db568: 0x3a11021  addu        $v0, $sp, $at
    ctx->pc = 0x2db568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db56c:
    // 0x2db56c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2db56cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2db570:
    // 0x2db570: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x2db570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2db574:
    // 0x2db574: 0x8f949e34  lw          $s4, -0x61CC($gp)
    ctx->pc = 0x2db574u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942260)));
label_2db578:
    // 0x2db578: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x2db578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_2db57c:
    // 0x2db57c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2db57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2db580:
    // 0x2db580: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2db580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_2db584:
    // 0x2db584: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x2db584u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2db588:
    // 0x2db588: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_2db58c:
    if (ctx->pc == 0x2DB58Cu) {
        ctx->pc = 0x2DB58Cu;
            // 0x2db58c: 0xaf809e34  sw          $zero, -0x61CC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942260), GPR_U32(ctx, 0));
        ctx->pc = 0x2DB590u;
        goto label_2db590;
    }
    ctx->pc = 0x2DB588u;
    {
        const bool branch_taken_0x2db588 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB588u;
            // 0x2db58c: 0xaf809e34  sw          $zero, -0x61CC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db588) {
            ctx->pc = 0x2DB5A4u;
            goto label_2db5a4;
        }
    }
    ctx->pc = 0x2DB590u;
label_2db590:
    // 0x2db590: 0x12600029  beqz        $s3, . + 4 + (0x29 << 2)
label_2db594:
    if (ctx->pc == 0x2DB594u) {
        ctx->pc = 0x2DB598u;
        goto label_2db598;
    }
    ctx->pc = 0x2DB590u;
    {
        const bool branch_taken_0x2db590 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db590) {
            ctx->pc = 0x2DB638u;
            goto label_2db638;
        }
    }
    ctx->pc = 0x2DB598u;
label_2db598:
    // 0x2db598: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2db598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2db59c:
    // 0x2db59c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_2db5a0:
    if (ctx->pc == 0x2DB5A0u) {
        ctx->pc = 0x2DB5A4u;
        goto label_2db5a4;
    }
    ctx->pc = 0x2DB59Cu;
    {
        const bool branch_taken_0x2db59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db59c) {
            ctx->pc = 0x2DB638u;
            goto label_2db638;
        }
    }
    ctx->pc = 0x2DB5A4u;
label_2db5a4:
    // 0x2db5a4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db5a8:
    // 0x2db5a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2db5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2db5ac:
    // 0x2db5ac: 0x34218370  ori         $at, $at, 0x8370
    ctx->pc = 0x2db5acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33648);
label_2db5b0:
    // 0x2db5b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2db5b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2db5b4:
    // 0x2db5b4: 0x3a13021  addu        $a2, $sp, $at
    ctx->pc = 0x2db5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db5b8:
    // 0x2db5b8: 0xc06cea4  jal         func_1B3A90
label_2db5bc:
    if (ctx->pc == 0x2DB5BCu) {
        ctx->pc = 0x2DB5BCu;
            // 0x2db5bc: 0x27a7013c  addiu       $a3, $sp, 0x13C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
        ctx->pc = 0x2DB5C0u;
        goto label_2db5c0;
    }
    ctx->pc = 0x2DB5B8u;
    SET_GPR_U32(ctx, 31, 0x2DB5C0u);
    ctx->pc = 0x2DB5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB5B8u;
            // 0x2db5bc: 0x27a7013c  addiu       $a3, $sp, 0x13C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A90u;
    if (runtime->hasFunction(0x1B3A90u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB5C0u; }
        if (ctx->pc != 0x2DB5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MagnetParts__8CEditMapFP14CEditPartsInfoPfPf_0x1b3a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB5C0u; }
        if (ctx->pc != 0x2DB5C0u) { return; }
    }
    ctx->pc = 0x2DB5C0u;
label_2db5c0:
    // 0x2db5c0: 0xaf829e34  sw          $v0, -0x61CC($gp)
    ctx->pc = 0x2db5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942260), GPR_U32(ctx, 2));
label_2db5c4:
    // 0x2db5c4: 0x8f829e34  lw          $v0, -0x61CC($gp)
    ctx->pc = 0x2db5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942260)));
label_2db5c8:
    // 0x2db5c8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2db5cc:
    if (ctx->pc == 0x2DB5CCu) {
        ctx->pc = 0x2DB5D0u;
        goto label_2db5d0;
    }
    ctx->pc = 0x2DB5C8u;
    {
        const bool branch_taken_0x2db5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db5c8) {
            ctx->pc = 0x2DB638u;
            goto label_2db638;
        }
    }
    ctx->pc = 0x2DB5D0u;
label_2db5d0:
    // 0x2db5d0: 0xc7ac013c  lwc1        $f12, 0x13C($sp)
    ctx->pc = 0x2db5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2db5d4:
    // 0x2db5d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2db5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2db5d8:
    // 0x2db5d8: 0xc06c3d4  jal         func_1B0F50
label_2db5dc:
    if (ctx->pc == 0x2DB5DCu) {
        ctx->pc = 0x2DB5DCu;
            // 0x2db5dc: 0xe6cc0000  swc1        $f12, 0x0($s6) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->pc = 0x2DB5E0u;
        goto label_2db5e0;
    }
    ctx->pc = 0x2DB5D8u;
    SET_GPR_U32(ctx, 31, 0x2DB5E0u);
    ctx->pc = 0x2DB5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB5D8u;
            // 0x2db5dc: 0xe6cc0000  swc1        $f12, 0x0($s6) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F50u;
    if (runtime->hasFunction(0x1B0F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB5E0u; }
        if (ctx->pc != 0x2DB5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvEditAngle__8CEditMapFf_0x1b0f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB5E0u; }
        if (ctx->pc != 0x2DB5E0u) { return; }
    }
    ctx->pc = 0x2DB5E0u;
label_2db5e0:
    // 0x2db5e0: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x2db5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
label_2db5e4:
    // 0x2db5e4: 0xaf829e64  sw          $v0, -0x619C($gp)
    ctx->pc = 0x2db5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942308), GPR_U32(ctx, 2));
label_2db5e8:
    // 0x2db5e8: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x2db5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db5ec:
    // 0x2db5ec: 0xc4208370  lwc1        $f0, -0x7C90($at)
    ctx->pc = 0x2db5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294935408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2db5f0:
    // 0x2db5f0: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x2db5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
label_2db5f4:
    // 0x2db5f4: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x2db5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db5f8:
    // 0x2db5f8: 0xc4218378  lwc1        $f1, -0x7C88($at)
    ctx->pc = 0x2db5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294935416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2db5fc:
    // 0x2db5fc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2db5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2db600:
    // 0x2db600: 0xe4208910  swc1        $f0, -0x76F0($at)
    ctx->pc = 0x2db600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936848), bits); }
label_2db604:
    // 0x2db604: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x2db604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
label_2db608:
    // 0x2db608: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x2db608u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db60c:
    // 0x2db60c: 0xe4208360  swc1        $f0, -0x7CA0($at)
    ctx->pc = 0x2db60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294935392), bits); }
label_2db610:
    // 0x2db610: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2db610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2db614:
    // 0x2db614: 0xe4218918  swc1        $f1, -0x76E8($at)
    ctx->pc = 0x2db614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936856), bits); }
label_2db618:
    // 0x2db618: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x2db618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
label_2db61c:
    // 0x2db61c: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x2db61cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db620:
    // 0x2db620: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_2db624:
    if (ctx->pc == 0x2DB624u) {
        ctx->pc = 0x2DB624u;
            // 0x2db624: 0xe4218368  swc1        $f1, -0x7C98($at) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294935400), bits); }
        ctx->pc = 0x2DB628u;
        goto label_2db628;
    }
    ctx->pc = 0x2DB620u;
    {
        const bool branch_taken_0x2db620 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB620u;
            // 0x2db624: 0xe4218368  swc1        $f1, -0x7C98($at) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294935400), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db620) {
            ctx->pc = 0x2DB638u;
            goto label_2db638;
        }
    }
    ctx->pc = 0x2DB628u;
label_2db628:
    // 0x2db628: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2db628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2db62c:
    // 0x2db62c: 0xe42088f0  swc1        $f0, -0x7710($at)
    ctx->pc = 0x2db62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936816), bits); }
label_2db630:
    // 0x2db630: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2db630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2db634:
    // 0x2db634: 0xe42188f8  swc1        $f1, -0x7708($at)
    ctx->pc = 0x2db634u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936824), bits); }
label_2db638:
    // 0x2db638: 0x8f829e34  lw          $v0, -0x61CC($gp)
    ctx->pc = 0x2db638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942260)));
label_2db63c:
    // 0x2db63c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2db640:
    if (ctx->pc == 0x2DB640u) {
        ctx->pc = 0x2DB644u;
        goto label_2db644;
    }
    ctx->pc = 0x2DB63Cu;
    {
        const bool branch_taken_0x2db63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db63c) {
            ctx->pc = 0x2DB664u;
            goto label_2db664;
        }
    }
    ctx->pc = 0x2DB644u;
label_2db644:
    // 0x2db644: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
label_2db648:
    if (ctx->pc == 0x2DB648u) {
        ctx->pc = 0x2DB64Cu;
        goto label_2db64c;
    }
    ctx->pc = 0x2DB644u;
    {
        const bool branch_taken_0x2db644 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db644) {
            ctx->pc = 0x2DB664u;
            goto label_2db664;
        }
    }
    ctx->pc = 0x2DB64Cu;
label_2db64c:
    // 0x2db64c: 0xc064218  jal         func_190860
label_2db650:
    if (ctx->pc == 0x2DB650u) {
        ctx->pc = 0x2DB654u;
        goto label_2db654;
    }
    ctx->pc = 0x2DB64Cu;
    SET_GPR_U32(ctx, 31, 0x2DB654u);
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB654u; }
        if (ctx->pc != 0x2DB654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB654u; }
        if (ctx->pc != 0x2DB654u) { return; }
    }
    ctx->pc = 0x2DB654u;
label_2db654:
    // 0x2db654: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2db654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2db658:
    // 0x2db658: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2db658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2db65c:
    // 0x2db65c: 0xc063818  jal         func_18E060
label_2db660:
    if (ctx->pc == 0x2DB660u) {
        ctx->pc = 0x2DB660u;
            // 0x2db660: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB664u;
        goto label_2db664;
    }
    ctx->pc = 0x2DB65Cu;
    SET_GPR_U32(ctx, 31, 0x2DB664u);
    ctx->pc = 0x2DB660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB65Cu;
            // 0x2db660: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB664u; }
        if (ctx->pc != 0x2DB664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB664u; }
        if (ctx->pc != 0x2DB664u) { return; }
    }
    ctx->pc = 0x2DB664u;
label_2db664:
    // 0x2db664: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2db664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2db668:
    // 0x2db668: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2db668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2db66c:
    // 0x2db66c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2db670:
    if (ctx->pc == 0x2DB670u) {
        ctx->pc = 0x2DB674u;
        goto label_2db674;
    }
    ctx->pc = 0x2DB66Cu;
    {
        const bool branch_taken_0x2db66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db66c) {
            ctx->pc = 0x2DB694u;
            goto label_2db694;
        }
    }
    ctx->pc = 0x2DB674u;
label_2db674:
    // 0x2db674: 0xc0b65c8  jal         func_2D9720
label_2db678:
    if (ctx->pc == 0x2DB678u) {
        ctx->pc = 0x2DB67Cu;
        goto label_2db67c;
    }
    ctx->pc = 0x2DB674u;
    SET_GPR_U32(ctx, 31, 0x2DB67Cu);
    ctx->pc = 0x2D9720u;
    if (runtime->hasFunction(0x2D9720u)) {
        auto targetFn = runtime->lookupFunction(0x2D9720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB67Cu; }
        if (ctx->pc != 0x2DB67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UndoEnable__Fv_0x2d9720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB67Cu; }
        if (ctx->pc != 0x2DB67Cu) { return; }
    }
    ctx->pc = 0x2DB67Cu;
label_2db67c:
    // 0x2db67c: 0x8f859e10  lw          $a1, -0x61F0($gp)
    ctx->pc = 0x2db67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942224)));
label_2db680:
    // 0x2db680: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2db680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2db684:
    // 0x2db684: 0xc0b6210  jal         func_2D8840
label_2db688:
    if (ctx->pc == 0x2DB688u) {
        ctx->pc = 0x2DB688u;
            // 0x2db688: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2DB68Cu;
        goto label_2db68c;
    }
    ctx->pc = 0x2DB684u;
    SET_GPR_U32(ctx, 31, 0x2DB68Cu);
    ctx->pc = 0x2DB688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB684u;
            // 0x2db688: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8840u;
    if (runtime->hasFunction(0x2D8840u)) {
        auto targetFn = runtime->lookupFunction(0x2D8840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB68Cu; }
        if (ctx->pc != 0x2DB68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHelpMes__Fiii_0x2d8840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB68Cu; }
        if (ctx->pc != 0x2DB68Cu) { return; }
    }
    ctx->pc = 0x2DB68Cu;
label_2db68c:
    // 0x2db68c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2db690:
    if (ctx->pc == 0x2DB690u) {
        ctx->pc = 0x2DB690u;
            // 0x2db690: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2DB694u;
        goto label_2db694;
    }
    ctx->pc = 0x2DB68Cu;
    {
        const bool branch_taken_0x2db68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB68Cu;
            // 0x2db690: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db68c) {
            ctx->pc = 0x2DB6B0u;
            goto label_2db6b0;
        }
    }
    ctx->pc = 0x2DB694u;
label_2db694:
    // 0x2db694: 0xc0b65c8  jal         func_2D9720
label_2db698:
    if (ctx->pc == 0x2DB698u) {
        ctx->pc = 0x2DB69Cu;
        goto label_2db69c;
    }
    ctx->pc = 0x2DB694u;
    SET_GPR_U32(ctx, 31, 0x2DB69Cu);
    ctx->pc = 0x2D9720u;
    if (runtime->hasFunction(0x2D9720u)) {
        auto targetFn = runtime->lookupFunction(0x2D9720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB69Cu; }
        if (ctx->pc != 0x2DB69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UndoEnable__Fv_0x2d9720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB69Cu; }
        if (ctx->pc != 0x2DB69Cu) { return; }
    }
    ctx->pc = 0x2DB69Cu;
label_2db69c:
    // 0x2db69c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2db69cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2db6a0:
    // 0x2db6a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2db6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db6a4:
    // 0x2db6a4: 0xc0b6210  jal         func_2D8840
label_2db6a8:
    if (ctx->pc == 0x2DB6A8u) {
        ctx->pc = 0x2DB6A8u;
            // 0x2db6a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB6ACu;
        goto label_2db6ac;
    }
    ctx->pc = 0x2DB6A4u;
    SET_GPR_U32(ctx, 31, 0x2DB6ACu);
    ctx->pc = 0x2DB6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB6A4u;
            // 0x2db6a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8840u;
    if (runtime->hasFunction(0x2D8840u)) {
        auto targetFn = runtime->lookupFunction(0x2D8840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB6ACu; }
        if (ctx->pc != 0x2DB6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHelpMes__Fiii_0x2d8840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB6ACu; }
        if (ctx->pc != 0x2DB6ACu) { return; }
    }
    ctx->pc = 0x2DB6ACu;
label_2db6ac:
    // 0x2db6ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2db6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2db6b0:
    // 0x2db6b0: 0x24020055  addiu       $v0, $zero, 0x55
    ctx->pc = 0x2db6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_2db6b4:
    // 0x2db6b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2db6b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db6b8:
    // 0x2db6b8: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
label_2db6bc:
    if (ctx->pc == 0x2DB6BCu) {
        ctx->pc = 0x2DB6BCu;
            // 0x2db6bc: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2DB6C0u;
        goto label_2db6c0;
    }
    ctx->pc = 0x2DB6B8u;
    {
        const bool branch_taken_0x2db6b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DB6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB6B8u;
            // 0x2db6bc: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db6b8) {
            ctx->pc = 0x2DB738u;
            goto label_2db738;
        }
    }
    ctx->pc = 0x2DB6C0u;
label_2db6c0:
    // 0x2db6c0: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x2db6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_2db6c4:
    // 0x2db6c4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db6c8:
    // 0x2db6c8: 0xaf809e2c  sw          $zero, -0x61D4($gp)
    ctx->pc = 0x2db6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942252), GPR_U32(ctx, 0));
label_2db6cc:
    // 0x2db6cc: 0x244288f0  addiu       $v0, $v0, -0x7710
    ctx->pc = 0x2db6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936816));
label_2db6d0:
    // 0x2db6d0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2db6d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2db6d4:
    // 0x2db6d4: 0x342183d0  ori         $at, $at, 0x83D0
    ctx->pc = 0x2db6d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33744);
label_2db6d8:
    // 0x2db6d8: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x2db6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db6dc:
    // 0x2db6dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2db6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2db6e0:
    // 0x2db6e0: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x2db6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
label_2db6e4:
    // 0x2db6e4: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x2db6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db6e8:
    // 0x2db6e8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2db6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2db6ec:
    // 0x2db6ec: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2db6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_2db6f0:
    // 0x2db6f0: 0xc06c99c  jal         func_1B2670
label_2db6f4:
    if (ctx->pc == 0x2DB6F4u) {
        ctx->pc = 0x2DB6F4u;
            // 0x2db6f4: 0xac2283dc  sw          $v0, -0x7C24($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294935516), GPR_U32(ctx, 2));
        ctx->pc = 0x2DB6F8u;
        goto label_2db6f8;
    }
    ctx->pc = 0x2DB6F0u;
    SET_GPR_U32(ctx, 31, 0x2DB6F8u);
    ctx->pc = 0x2DB6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB6F0u;
            // 0x2db6f4: 0xac2283dc  sw          $v0, -0x7C24($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294935516), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2670u;
    if (runtime->hasFunction(0x1B2670u)) {
        auto targetFn = runtime->lookupFunction(0x1B2670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB6F8u; }
        if (ctx->pc != 0x2DB6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFPf_0x1b2670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB6F8u; }
        if (ctx->pc != 0x2DB6F8u) { return; }
    }
    ctx->pc = 0x2DB6F8u;
label_2db6f8:
    // 0x2db6f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2db6f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2db6fc:
    // 0x2db6fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2db6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2db700:
    // 0x2db700: 0xc06c310  jal         func_1B0C40
label_2db704:
    if (ctx->pc == 0x2DB704u) {
        ctx->pc = 0x2DB704u;
            // 0x2db704: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB708u;
        goto label_2db708;
    }
    ctx->pc = 0x2DB700u;
    SET_GPR_U32(ctx, 31, 0x2DB708u);
    ctx->pc = 0x2DB704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB700u;
            // 0x2db704: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB708u; }
        if (ctx->pc != 0x2DB708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB708u; }
        if (ctx->pc != 0x2DB708u) { return; }
    }
    ctx->pc = 0x2DB708u;
label_2db708:
    // 0x2db708: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2db70c:
    if (ctx->pc == 0x2DB70Cu) {
        ctx->pc = 0x2DB70Cu;
            // 0x2db70c: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->pc = 0x2DB710u;
        goto label_2db710;
    }
    ctx->pc = 0x2DB708u;
    {
        const bool branch_taken_0x2db708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB708u;
            // 0x2db70c: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db708) {
            ctx->pc = 0x2DB73Cu;
            goto label_2db73c;
        }
    }
    ctx->pc = 0x2DB710u;
label_2db710:
    // 0x2db710: 0xc06d694  jal         func_1B5A50
label_2db714:
    if (ctx->pc == 0x2DB714u) {
        ctx->pc = 0x2DB714u;
            // 0x2db714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB718u;
        goto label_2db718;
    }
    ctx->pc = 0x2DB710u;
    SET_GPR_U32(ctx, 31, 0x2DB718u);
    ctx->pc = 0x2DB714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB710u;
            // 0x2db714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5A50u;
    if (runtime->hasFunction(0x1B5A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B5A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB718u; }
        if (ctx->pc != 0x2DB718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInfoID__10CEditPartsFv_0x1b5a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB718u; }
        if (ctx->pc != 0x2DB718u) { return; }
    }
    ctx->pc = 0x2DB718u;
label_2db718:
    // 0x2db718: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x2db718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_2db71c:
    // 0x2db71c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_2db720:
    if (ctx->pc == 0x2DB720u) {
        ctx->pc = 0x2DB720u;
            // 0x2db720: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x2DB724u;
        goto label_2db724;
    }
    ctx->pc = 0x2DB71Cu;
    {
        const bool branch_taken_0x2db71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DB720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB71Cu;
            // 0x2db720: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db71c) {
            ctx->pc = 0x2DB738u;
            goto label_2db738;
        }
    }
    ctx->pc = 0x2DB724u;
label_2db724:
    // 0x2db724: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2db724u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2db728:
    // 0x2db728: 0xe43488f4  swc1        $f20, -0x770C($at)
    ctx->pc = 0x2db728u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936820), bits); }
label_2db72c:
    // 0x2db72c: 0xaf939e2c  sw          $s3, -0x61D4($gp)
    ctx->pc = 0x2db72cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942252), GPR_U32(ctx, 19));
label_2db730:
    // 0x2db730: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2db730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2db734:
    // 0x2db734: 0xe4348914  swc1        $f20, -0x76EC($at)
    ctx->pc = 0x2db734u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936852), bits); }
label_2db738:
    // 0x2db738: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db73c:
    // 0x2db73c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2db73cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db740:
    // 0x2db740: 0x342183c4  ori         $at, $at, 0x83C4
    ctx->pc = 0x2db740u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33732);
label_2db744:
    // 0x2db744: 0x3a1b821  addu        $s7, $sp, $at
    ctx->pc = 0x2db744u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db748:
    // 0x2db748: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x2db748u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
label_2db74c:
    // 0x2db74c: 0x16600023  bnez        $s3, . + 4 + (0x23 << 2)
label_2db750:
    if (ctx->pc == 0x2DB750u) {
        ctx->pc = 0x2DB750u;
            // 0x2db750: 0xaf809e30  sw          $zero, -0x61D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942256), GPR_U32(ctx, 0));
        ctx->pc = 0x2DB754u;
        goto label_2db754;
    }
    ctx->pc = 0x2DB74Cu;
    {
        const bool branch_taken_0x2db74c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB74Cu;
            // 0x2db750: 0xaf809e30  sw          $zero, -0x61D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db74c) {
            ctx->pc = 0x2DB7DCu;
            goto label_2db7dc;
        }
    }
    ctx->pc = 0x2DB754u;
label_2db754:
    // 0x2db754: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2db754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2db758:
    // 0x2db758: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2db75c:
    if (ctx->pc == 0x2DB75Cu) {
        ctx->pc = 0x2DB75Cu;
            // 0x2db75c: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->pc = 0x2DB760u;
        goto label_2db760;
    }
    ctx->pc = 0x2DB758u;
    {
        const bool branch_taken_0x2db758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB758u;
            // 0x2db75c: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db758) {
            ctx->pc = 0x2DB77Cu;
            goto label_2db77c;
        }
    }
    ctx->pc = 0x2DB760u;
label_2db760:
    // 0x2db760: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db764:
    // 0x2db764: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2db764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2db768:
    // 0x2db768: 0x34218360  ori         $at, $at, 0x8360
    ctx->pc = 0x2db768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33632);
label_2db76c:
    // 0x2db76c: 0xc0bb8a0  jal         func_2EE280
label_2db770:
    if (ctx->pc == 0x2DB770u) {
        ctx->pc = 0x2DB770u;
            // 0x2db770: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DB774u;
        goto label_2db774;
    }
    ctx->pc = 0x2DB76Cu;
    SET_GPR_U32(ctx, 31, 0x2DB774u);
    ctx->pc = 0x2DB770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB76Cu;
            // 0x2db770: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE280u;
    if (runtime->hasFunction(0x2EE280u)) {
        auto targetFn = runtime->lookupFunction(0x2EE280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB774u; }
        if (ctx->pc != 0x2DB774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckRiverParts__8CEditMapFPf_0x2ee280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB774u; }
        if (ctx->pc != 0x2DB774u) { return; }
    }
    ctx->pc = 0x2DB774u;
label_2db774:
    // 0x2db774: 0x10000019  b           . + 4 + (0x19 << 2)
label_2db778:
    if (ctx->pc == 0x2DB778u) {
        ctx->pc = 0x2DB778u;
            // 0x2db778: 0xaf829e2c  sw          $v0, -0x61D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942252), GPR_U32(ctx, 2));
        ctx->pc = 0x2DB77Cu;
        goto label_2db77c;
    }
    ctx->pc = 0x2DB774u;
    {
        const bool branch_taken_0x2db774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB774u;
            // 0x2db778: 0xaf829e2c  sw          $v0, -0x61D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db774) {
            ctx->pc = 0x2DB7DCu;
            goto label_2db7dc;
        }
    }
    ctx->pc = 0x2DB77Cu;
label_2db77c:
    // 0x2db77c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2db77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2db780:
    // 0x2db780: 0x34218360  ori         $at, $at, 0x8360
    ctx->pc = 0x2db780u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33632);
label_2db784:
    // 0x2db784: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2db784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2db788:
    // 0x2db788: 0x3a13021  addu        $a2, $sp, $at
    ctx->pc = 0x2db788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db78c:
    // 0x2db78c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db790:
    // 0x2db790: 0x34218380  ori         $at, $at, 0x8380
    ctx->pc = 0x2db790u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33664);
label_2db794:
    // 0x2db794: 0xc6cc0000  lwc1        $f12, 0x0($s6)
    ctx->pc = 0x2db794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2db798:
    // 0x2db798: 0xc06ca94  jal         func_1B2A50
label_2db79c:
    if (ctx->pc == 0x2DB79Cu) {
        ctx->pc = 0x2DB79Cu;
            // 0x2db79c: 0x3a13821  addu        $a3, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DB7A0u;
        goto label_2db7a0;
    }
    ctx->pc = 0x2DB798u;
    SET_GPR_U32(ctx, 31, 0x2DB7A0u);
    ctx->pc = 0x2DB79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB798u;
            // 0x2db79c: 0x3a13821  addu        $a3, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2A50u;
    if (runtime->hasFunction(0x1B2A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B2A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB7A0u; }
        if (ctx->pc != 0x2DB7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEditParts__8CEditMapFP14CEditPartsInfoPffP13EP_PLACE_INFO_0x1b2a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB7A0u; }
        if (ctx->pc != 0x2DB7A0u) { return; }
    }
    ctx->pc = 0x2DB7A0u;
label_2db7a0:
    // 0x2db7a0: 0xaf829e2c  sw          $v0, -0x61D4($gp)
    ctx->pc = 0x2db7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942252), GPR_U32(ctx, 2));
label_2db7a4:
    // 0x2db7a4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2db7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2db7a8:
    // 0x2db7a8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2db7ac:
    if (ctx->pc == 0x2DB7ACu) {
        ctx->pc = 0x2DB7ACu;
            // 0x2db7ac: 0x8ef50000  lw          $s5, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->pc = 0x2DB7B0u;
        goto label_2db7b0;
    }
    ctx->pc = 0x2DB7A8u;
    {
        const bool branch_taken_0x2db7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB7A8u;
            // 0x2db7ac: 0x8ef50000  lw          $s5, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db7a8) {
            ctx->pc = 0x2DB7DCu;
            goto label_2db7dc;
        }
    }
    ctx->pc = 0x2DB7B0u;
label_2db7b0:
    // 0x2db7b0: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2db7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2db7b4:
    // 0x2db7b4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db7b8:
    // 0x2db7b8: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2db7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2db7bc:
    // 0x2db7bc: 0x34218360  ori         $at, $at, 0x8360
    ctx->pc = 0x2db7bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33632);
label_2db7c0:
    // 0x2db7c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2db7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2db7c4:
    // 0x2db7c4: 0x3a13021  addu        $a2, $sp, $at
    ctx->pc = 0x2db7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db7c8:
    // 0x2db7c8: 0xc0b6900  jal         func_2DA400
label_2db7cc:
    if (ctx->pc == 0x2DB7CCu) {
        ctx->pc = 0x2DB7CCu;
            // 0x2db7cc: 0x27889e30  addiu       $t0, $gp, -0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942256));
        ctx->pc = 0x2DB7D0u;
        goto label_2db7d0;
    }
    ctx->pc = 0x2DB7C8u;
    SET_GPR_U32(ctx, 31, 0x2DB7D0u);
    ctx->pc = 0x2DB7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB7C8u;
            // 0x2db7cc: 0x27889e30  addiu       $t0, $gp, -0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DA400u;
    if (runtime->hasFunction(0x2DA400u)) {
        auto targetFn = runtime->lookupFunction(0x2DA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB7D0u; }
        if (ctx->pc != 0x2DB7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPlaceAlt__FiP8CEditMapPfiPf_0x2da400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB7D0u; }
        if (ctx->pc != 0x2DB7D0u) { return; }
    }
    ctx->pc = 0x2DB7D0u;
label_2db7d0:
    // 0x2db7d0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2db7d4:
    if (ctx->pc == 0x2DB7D4u) {
        ctx->pc = 0x2DB7D8u;
        goto label_2db7d8;
    }
    ctx->pc = 0x2DB7D0u;
    {
        const bool branch_taken_0x2db7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db7d0) {
            ctx->pc = 0x2DB7DCu;
            goto label_2db7dc;
        }
    }
    ctx->pc = 0x2DB7D8u;
label_2db7d8:
    // 0x2db7d8: 0xaf809e2c  sw          $zero, -0x61D4($gp)
    ctx->pc = 0x2db7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942252), GPR_U32(ctx, 0));
label_2db7dc:
    // 0x2db7dc: 0x8f829e2c  lw          $v0, -0x61D4($gp)
    ctx->pc = 0x2db7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942252)));
label_2db7e0:
    // 0x2db7e0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2db7e4:
    if (ctx->pc == 0x2DB7E4u) {
        ctx->pc = 0x2DB7E4u;
            // 0x2db7e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB7E8u;
        goto label_2db7e8;
    }
    ctx->pc = 0x2DB7E0u;
    {
        const bool branch_taken_0x2db7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB7E0u;
            // 0x2db7e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db7e0) {
            ctx->pc = 0x2DB810u;
            goto label_2db810;
        }
    }
    ctx->pc = 0x2DB7E8u;
label_2db7e8:
    // 0x2db7e8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2db7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2db7ec:
    // 0x2db7ec: 0xc42088f4  lwc1        $f0, -0x770C($at)
    ctx->pc = 0x2db7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2db7f0:
    // 0x2db7f0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2db7f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2db7f4:
    // 0x2db7f4: 0x0  nop
    ctx->pc = 0x2db7f4u;
    // NOP
label_2db7f8:
    // 0x2db7f8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2db7fc:
    if (ctx->pc == 0x2DB7FCu) {
        ctx->pc = 0x2DB7FCu;
            // 0x2db7fc: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x2DB800u;
        goto label_2db800;
    }
    ctx->pc = 0x2DB7F8u;
    {
        const bool branch_taken_0x2db7f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DB7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB7F8u;
            // 0x2db7fc: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db7f8) {
            ctx->pc = 0x2DB80Cu;
            goto label_2db80c;
        }
    }
    ctx->pc = 0x2DB800u;
label_2db800:
    // 0x2db800: 0xe43488f4  swc1        $f20, -0x770C($at)
    ctx->pc = 0x2db800u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936820), bits); }
label_2db804:
    // 0x2db804: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2db804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2db808:
    // 0x2db808: 0xe4348914  swc1        $f20, -0x76EC($at)
    ctx->pc = 0x2db808u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936852), bits); }
label_2db80c:
    // 0x2db80c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2db80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2db810:
    // 0x2db810: 0xc0bb538  jal         func_2ED4E0
label_2db814:
    if (ctx->pc == 0x2DB814u) {
        ctx->pc = 0x2DB814u;
            // 0x2db814: 0x24050066  addiu       $a1, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->pc = 0x2DB818u;
        goto label_2db818;
    }
    ctx->pc = 0x2DB810u;
    SET_GPR_U32(ctx, 31, 0x2DB818u);
    ctx->pc = 0x2DB814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB810u;
            // 0x2db814: 0x24050066  addiu       $a1, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB818u; }
        if (ctx->pc != 0x2DB818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB818u; }
        if (ctx->pc != 0x2DB818u) { return; }
    }
    ctx->pc = 0x2DB818u;
label_2db818:
    // 0x2db818: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_2db81c:
    if (ctx->pc == 0x2DB81Cu) {
        ctx->pc = 0x2DB81Cu;
            // 0x2db81c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB820u;
        goto label_2db820;
    }
    ctx->pc = 0x2DB818u;
    {
        const bool branch_taken_0x2db818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB818u;
            // 0x2db81c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db818) {
            ctx->pc = 0x2DB8E0u;
            goto label_2db8e0;
        }
    }
    ctx->pc = 0x2DB820u;
label_2db820:
    // 0x2db820: 0x8f829e28  lw          $v0, -0x61D8($gp)
    ctx->pc = 0x2db820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942248)));
label_2db824:
    // 0x2db824: 0x1840002d  blez        $v0, . + 4 + (0x2D << 2)
label_2db828:
    if (ctx->pc == 0x2DB828u) {
        ctx->pc = 0x2DB82Cu;
        goto label_2db82c;
    }
    ctx->pc = 0x2DB824u;
    {
        const bool branch_taken_0x2db824 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2db824) {
            ctx->pc = 0x2DB8DCu;
            goto label_2db8dc;
        }
    }
    ctx->pc = 0x2DB82Cu;
label_2db82c:
    // 0x2db82c: 0x8f829e2c  lw          $v0, -0x61D4($gp)
    ctx->pc = 0x2db82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942252)));
label_2db830:
    // 0x2db830: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_2db834:
    if (ctx->pc == 0x2DB834u) {
        ctx->pc = 0x2DB838u;
        goto label_2db838;
    }
    ctx->pc = 0x2DB830u;
    {
        const bool branch_taken_0x2db830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db830) {
            ctx->pc = 0x2DB8C8u;
            goto label_2db8c8;
        }
    }
    ctx->pc = 0x2DB838u;
label_2db838:
    // 0x2db838: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2db838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2db83c:
    // 0x2db83c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2db840:
    if (ctx->pc == 0x2DB840u) {
        ctx->pc = 0x2DB844u;
        goto label_2db844;
    }
    ctx->pc = 0x2DB83Cu;
    {
        const bool branch_taken_0x2db83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db83c) {
            ctx->pc = 0x2DB86Cu;
            goto label_2db86c;
        }
    }
    ctx->pc = 0x2DB844u;
label_2db844:
    // 0x2db844: 0xc0b671c  jal         func_2D9C70
label_2db848:
    if (ctx->pc == 0x2DB848u) {
        ctx->pc = 0x2DB84Cu;
        goto label_2db84c;
    }
    ctx->pc = 0x2DB844u;
    SET_GPR_U32(ctx, 31, 0x2DB84Cu);
    ctx->pc = 0x2D9C70u;
    if (runtime->hasFunction(0x2D9C70u)) {
        auto targetFn = runtime->lookupFunction(0x2D9C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB84Cu; }
        if (ctx->pc != 0x2DB84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowPlaceRiver__Fv_0x2d9c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB84Cu; }
        if (ctx->pc != 0x2DB84Cu) { return; }
    }
    ctx->pc = 0x2DB84Cu;
label_2db84c:
    // 0x2db84c: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_2db850:
    if (ctx->pc == 0x2DB850u) {
        ctx->pc = 0x2DB850u;
            // 0x2db850: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->pc = 0x2DB854u;
        goto label_2db854;
    }
    ctx->pc = 0x2DB84Cu;
    {
        const bool branch_taken_0x2db84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB84Cu;
            // 0x2db850: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db84c) {
            ctx->pc = 0x2DB8DCu;
            goto label_2db8dc;
        }
    }
    ctx->pc = 0x2DB854u;
label_2db854:
    // 0x2db854: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2db854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2db858:
    // 0x2db858: 0x34218360  ori         $at, $at, 0x8360
    ctx->pc = 0x2db858u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33632);
label_2db85c:
    // 0x2db85c: 0xc0b66cc  jal         func_2D9B30
label_2db860:
    if (ctx->pc == 0x2DB860u) {
        ctx->pc = 0x2DB860u;
            // 0x2db860: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DB864u;
        goto label_2db864;
    }
    ctx->pc = 0x2DB85Cu;
    SET_GPR_U32(ctx, 31, 0x2DB864u);
    ctx->pc = 0x2DB860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB85Cu;
            // 0x2db860: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9B30u;
    if (runtime->hasFunction(0x2D9B30u)) {
        auto targetFn = runtime->lookupFunction(0x2D9B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB864u; }
        if (ctx->pc != 0x2DB864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaceRiverStart__FP8CEditMapPf_0x2d9b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB864u; }
        if (ctx->pc != 0x2DB864u) { return; }
    }
    ctx->pc = 0x2DB864u;
label_2db864:
    // 0x2db864: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2db868:
    if (ctx->pc == 0x2DB868u) {
        ctx->pc = 0x2DB86Cu;
        goto label_2db86c;
    }
    ctx->pc = 0x2DB864u;
    {
        const bool branch_taken_0x2db864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db864) {
            ctx->pc = 0x2DB8DCu;
            goto label_2db8dc;
        }
    }
    ctx->pc = 0x2DB86Cu;
label_2db86c:
    // 0x2db86c: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
label_2db870:
    if (ctx->pc == 0x2DB870u) {
        ctx->pc = 0x2DB870u;
            // 0x2db870: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->pc = 0x2DB874u;
        goto label_2db874;
    }
    ctx->pc = 0x2DB86Cu;
    {
        const bool branch_taken_0x2db86c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB86Cu;
            // 0x2db870: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db86c) {
            ctx->pc = 0x2DB898u;
            goto label_2db898;
        }
    }
    ctx->pc = 0x2DB874u;
label_2db874:
    // 0x2db874: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db878:
    // 0x2db878: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2db878u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2db87c:
    // 0x2db87c: 0x34218360  ori         $at, $at, 0x8360
    ctx->pc = 0x2db87cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33632);
label_2db880:
    // 0x2db880: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2db880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2db884:
    // 0x2db884: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2db884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2db888:
    // 0x2db888: 0xc0b6804  jal         func_2DA010
label_2db88c:
    if (ctx->pc == 0x2DB88Cu) {
        ctx->pc = 0x2DB88Cu;
            // 0x2db88c: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DB890u;
        goto label_2db890;
    }
    ctx->pc = 0x2DB888u;
    SET_GPR_U32(ctx, 31, 0x2DB890u);
    ctx->pc = 0x2DB88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB888u;
            // 0x2db88c: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DA010u;
    if (runtime->hasFunction(0x2DA010u)) {
        auto targetFn = runtime->lookupFunction(0x2DA010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB890u; }
        if (ctx->pc != 0x2DB890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteKanketuParts__FP6CSceneP8CEditMapPfi_0x2da010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB890u; }
        if (ctx->pc != 0x2DB890u) { return; }
    }
    ctx->pc = 0x2DB890u;
label_2db890:
    // 0x2db890: 0x10000012  b           . + 4 + (0x12 << 2)
label_2db894:
    if (ctx->pc == 0x2DB894u) {
        ctx->pc = 0x2DB898u;
        goto label_2db898;
    }
    ctx->pc = 0x2DB890u;
    {
        const bool branch_taken_0x2db890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db890) {
            ctx->pc = 0x2DB8DCu;
            goto label_2db8dc;
        }
    }
    ctx->pc = 0x2DB898u;
label_2db898:
    // 0x2db898: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2db898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2db89c:
    // 0x2db89c: 0x34218360  ori         $at, $at, 0x8360
    ctx->pc = 0x2db89cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33632);
label_2db8a0:
    // 0x2db8a0: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x2db8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db8a4:
    // 0x2db8a4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db8a8:
    // 0x2db8a8: 0x34218350  ori         $at, $at, 0x8350
    ctx->pc = 0x2db8a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33616);
label_2db8ac:
    // 0x2db8ac: 0x3a13021  addu        $a2, $sp, $at
    ctx->pc = 0x2db8acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db8b0:
    // 0x2db8b0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db8b4:
    // 0x2db8b4: 0x34218380  ori         $at, $at, 0x8380
    ctx->pc = 0x2db8b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33664);
label_2db8b8:
    // 0x2db8b8: 0xc0b665c  jal         func_2D9970
label_2db8bc:
    if (ctx->pc == 0x2DB8BCu) {
        ctx->pc = 0x2DB8BCu;
            // 0x2db8bc: 0x3a13821  addu        $a3, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DB8C0u;
        goto label_2db8c0;
    }
    ctx->pc = 0x2DB8B8u;
    SET_GPR_U32(ctx, 31, 0x2DB8C0u);
    ctx->pc = 0x2DB8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB8B8u;
            // 0x2db8bc: 0x3a13821  addu        $a3, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9970u;
    if (runtime->hasFunction(0x2D9970u)) {
        auto targetFn = runtime->lookupFunction(0x2D9970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB8C0u; }
        if (ctx->pc != 0x2DB8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaceEditParts__FP8CEditMapPfPfP13EP_PLACE_INFO_0x2d9970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB8C0u; }
        if (ctx->pc != 0x2DB8C0u) { return; }
    }
    ctx->pc = 0x2DB8C0u;
label_2db8c0:
    // 0x2db8c0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2db8c4:
    if (ctx->pc == 0x2DB8C4u) {
        ctx->pc = 0x2DB8C8u;
        goto label_2db8c8;
    }
    ctx->pc = 0x2DB8C0u;
    {
        const bool branch_taken_0x2db8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db8c0) {
            ctx->pc = 0x2DB8DCu;
            goto label_2db8dc;
        }
    }
    ctx->pc = 0x2DB8C8u;
label_2db8c8:
    // 0x2db8c8: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_2db8cc:
    if (ctx->pc == 0x2DB8CCu) {
        ctx->pc = 0x2DB8CCu;
            // 0x2db8cc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB8D0u;
        goto label_2db8d0;
    }
    ctx->pc = 0x2DB8C8u;
    {
        const bool branch_taken_0x2db8c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB8C8u;
            // 0x2db8cc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db8c8) {
            ctx->pc = 0x2DB8DCu;
            goto label_2db8dc;
        }
    }
    ctx->pc = 0x2DB8D0u;
label_2db8d0:
    // 0x2db8d0: 0x240503fd  addiu       $a1, $zero, 0x3FD
    ctx->pc = 0x2db8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1021));
label_2db8d4:
    // 0x2db8d4: 0xc0b6278  jal         func_2D89E0
label_2db8d8:
    if (ctx->pc == 0x2DB8D8u) {
        ctx->pc = 0x2DB8D8u;
            // 0x2db8d8: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x2DB8DCu;
        goto label_2db8dc;
    }
    ctx->pc = 0x2DB8D4u;
    SET_GPR_U32(ctx, 31, 0x2DB8DCu);
    ctx->pc = 0x2DB8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB8D4u;
            // 0x2db8d8: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D89E0u;
    if (runtime->hasFunction(0x2D89E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D89E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB8DCu; }
        if (ctx->pc != 0x2DB8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        OpenSystemMes__FP6CSceneii_0x2d89e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB8DCu; }
        if (ctx->pc != 0x2DB8DCu) { return; }
    }
    ctx->pc = 0x2DB8DCu;
label_2db8dc:
    // 0x2db8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2db8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2db8e0:
    // 0x2db8e0: 0xc0bb538  jal         func_2ED4E0
label_2db8e4:
    if (ctx->pc == 0x2DB8E4u) {
        ctx->pc = 0x2DB8E4u;
            // 0x2db8e4: 0x2405006d  addiu       $a1, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->pc = 0x2DB8E8u;
        goto label_2db8e8;
    }
    ctx->pc = 0x2DB8E0u;
    SET_GPR_U32(ctx, 31, 0x2DB8E8u);
    ctx->pc = 0x2DB8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB8E0u;
            // 0x2db8e4: 0x2405006d  addiu       $a1, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB8E8u; }
        if (ctx->pc != 0x2DB8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB8E8u; }
        if (ctx->pc != 0x2DB8E8u) { return; }
    }
    ctx->pc = 0x2DB8E8u;
label_2db8e8:
    // 0x2db8e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2db8ec:
    if (ctx->pc == 0x2DB8ECu) {
        ctx->pc = 0x2DB8F0u;
        goto label_2db8f0;
    }
    ctx->pc = 0x2DB8E8u;
    {
        const bool branch_taken_0x2db8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db8e8) {
            ctx->pc = 0x2DB918u;
            goto label_2db918;
        }
    }
    ctx->pc = 0x2DB8F0u;
label_2db8f0:
    // 0x2db8f0: 0x8f829e10  lw          $v0, -0x61F0($gp)
    ctx->pc = 0x2db8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942224)));
label_2db8f4:
    // 0x2db8f4: 0xaf809e34  sw          $zero, -0x61CC($gp)
    ctx->pc = 0x2db8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942260), GPR_U32(ctx, 0));
label_2db8f8:
    // 0x2db8f8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2db8f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2db8fc:
    // 0x2db8fc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2db8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2db900:
    // 0x2db900: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2db900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2db904:
    // 0x2db904: 0x10000004  b           . + 4 + (0x4 << 2)
label_2db908:
    if (ctx->pc == 0x2DB908u) {
        ctx->pc = 0x2DB908u;
            // 0x2db908: 0xaf829e10  sw          $v0, -0x61F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942224), GPR_U32(ctx, 2));
        ctx->pc = 0x2DB90Cu;
        goto label_2db90c;
    }
    ctx->pc = 0x2DB904u;
    {
        const bool branch_taken_0x2db904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB904u;
            // 0x2db908: 0xaf829e10  sw          $v0, -0x61F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db904) {
            ctx->pc = 0x2DB918u;
            goto label_2db918;
        }
    }
    ctx->pc = 0x2DB90Cu;
label_2db90c:
    // 0x2db90c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2db90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_2db910:
    // 0x2db910: 0x1440fede  bnez        $v0, . + 4 + (-0x122 << 2)
label_2db914:
    if (ctx->pc == 0x2DB914u) {
        ctx->pc = 0x2DB914u;
            // 0x2db914: 0x3c0201f6  lui         $v0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x2DB918u;
        goto label_2db918;
    }
    ctx->pc = 0x2DB910u;
    {
        const bool branch_taken_0x2db910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB910u;
            // 0x2db914: 0x3c0201f6  lui         $v0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db910) {
            ctx->pc = 0x2DB48Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2db48c;
        }
    }
    ctx->pc = 0x2DB918u;
label_2db918:
    // 0x2db918: 0x8f829e0c  lw          $v0, -0x61F4($gp)
    ctx->pc = 0x2db918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942220)));
label_2db91c:
    // 0x2db91c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2db91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2db920:
    // 0x2db920: 0x14440118  bne         $v0, $a0, . + 4 + (0x118 << 2)
label_2db924:
    if (ctx->pc == 0x2DB924u) {
        ctx->pc = 0x2DB924u;
            // 0x2db924: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB928u;
        goto label_2db928;
    }
    ctx->pc = 0x2DB920u;
    {
        const bool branch_taken_0x2db920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2DB924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB920u;
            // 0x2db924: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db920) {
            ctx->pc = 0x2DBD84u;
            goto label_2dbd84;
        }
    }
    ctx->pc = 0x2DB928u;
label_2db928:
    // 0x2db928: 0xc0b6210  jal         func_2D8840
label_2db92c:
    if (ctx->pc == 0x2DB92Cu) {
        ctx->pc = 0x2DB92Cu;
            // 0x2db92c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB930u;
        goto label_2db930;
    }
    ctx->pc = 0x2DB928u;
    SET_GPR_U32(ctx, 31, 0x2DB930u);
    ctx->pc = 0x2DB92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB928u;
            // 0x2db92c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8840u;
    if (runtime->hasFunction(0x2D8840u)) {
        auto targetFn = runtime->lookupFunction(0x2D8840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB930u; }
        if (ctx->pc != 0x2DB930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHelpMes__Fiii_0x2d8840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB930u; }
        if (ctx->pc != 0x2DB930u) { return; }
    }
    ctx->pc = 0x2DB930u;
label_2db930:
    // 0x2db930: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x2db930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_2db934:
    // 0x2db934: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db938:
    // 0x2db938: 0x244288f0  addiu       $v0, $v0, -0x7710
    ctx->pc = 0x2db938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936816));
label_2db93c:
    // 0x2db93c: 0x342183e0  ori         $at, $at, 0x83E0
    ctx->pc = 0x2db93cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33760);
label_2db940:
    // 0x2db940: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2db940u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2db944:
    // 0x2db944: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x2db944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db948:
    // 0x2db948: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x2db948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
label_2db94c:
    // 0x2db94c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2db94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2db950:
    // 0x2db950: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x2db950u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db954:
    // 0x2db954: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2db954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2db958:
    // 0x2db958: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2db958u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_2db95c:
    // 0x2db95c: 0xc06c99c  jal         func_1B2670
label_2db960:
    if (ctx->pc == 0x2DB960u) {
        ctx->pc = 0x2DB960u;
            // 0x2db960: 0xac2283ec  sw          $v0, -0x7C14($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294935532), GPR_U32(ctx, 2));
        ctx->pc = 0x2DB964u;
        goto label_2db964;
    }
    ctx->pc = 0x2DB95Cu;
    SET_GPR_U32(ctx, 31, 0x2DB964u);
    ctx->pc = 0x2DB960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB95Cu;
            // 0x2db960: 0xac2283ec  sw          $v0, -0x7C14($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294935532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2670u;
    if (runtime->hasFunction(0x1B2670u)) {
        auto targetFn = runtime->lookupFunction(0x1B2670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB964u; }
        if (ctx->pc != 0x2DB964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFPf_0x1b2670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB964u; }
        if (ctx->pc != 0x2DB964u) { return; }
    }
    ctx->pc = 0x2DB964u;
label_2db964:
    // 0x2db964: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2db964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2db968:
    // 0x2db968: 0xc42088f4  lwc1        $f0, -0x770C($at)
    ctx->pc = 0x2db968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2db96c:
    // 0x2db96c: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x2db96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
label_2db970:
    // 0x2db970: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x2db970u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db974:
    // 0x2db974: 0xc42183e4  lwc1        $f1, -0x7C1C($at)
    ctx->pc = 0x2db974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294935524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2db978:
    // 0x2db978: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2db978u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2db97c:
    // 0x2db97c: 0x0  nop
    ctx->pc = 0x2db97cu;
    // NOP
label_2db980:
    // 0x2db980: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_2db984:
    if (ctx->pc == 0x2DB984u) {
        ctx->pc = 0x2DB984u;
            // 0x2db984: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB988u;
        goto label_2db988;
    }
    ctx->pc = 0x2DB980u;
    {
        const bool branch_taken_0x2db980 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DB984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB980u;
            // 0x2db984: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db980) {
            ctx->pc = 0x2DB990u;
            goto label_2db990;
        }
    }
    ctx->pc = 0x2DB988u;
label_2db988:
    // 0x2db988: 0x10000002  b           . + 4 + (0x2 << 2)
label_2db98c:
    if (ctx->pc == 0x2DB98Cu) {
        ctx->pc = 0x2DB990u;
        goto label_2db990;
    }
    ctx->pc = 0x2DB988u;
    {
        const bool branch_taken_0x2db988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db988) {
            ctx->pc = 0x2DB994u;
            goto label_2db994;
        }
    }
    ctx->pc = 0x2DB990u;
label_2db990:
    // 0x2db990: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2db990u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_2db994:
    // 0x2db994: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2db994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2db998:
    // 0x2db998: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2db998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2db99c:
    // 0x2db99c: 0xe42088f4  swc1        $f0, -0x770C($at)
    ctx->pc = 0x2db99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936820), bits); }
label_2db9a0:
    // 0x2db9a0: 0xc06c2dc  jal         func_1B0B70
label_2db9a4:
    if (ctx->pc == 0x2DB9A4u) {
        ctx->pc = 0x2DB9A4u;
            // 0x2db9a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB9A8u;
        goto label_2db9a8;
    }
    ctx->pc = 0x2DB9A0u;
    SET_GPR_U32(ctx, 31, 0x2DB9A8u);
    ctx->pc = 0x2DB9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB9A0u;
            // 0x2db9a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B70u;
    if (runtime->hasFunction(0x1B0B70u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB9A8u; }
        if (ctx->pc != 0x2DB9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfoAtPlaceID__8CEditMapFi_0x1b0b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB9A8u; }
        if (ctx->pc != 0x2DB9A8u) { return; }
    }
    ctx->pc = 0x2DB9A8u;
label_2db9a8:
    // 0x2db9a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2db9ac:
    if (ctx->pc == 0x2DB9ACu) {
        ctx->pc = 0x2DB9ACu;
            // 0x2db9ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB9B0u;
        goto label_2db9b0;
    }
    ctx->pc = 0x2DB9A8u;
    {
        const bool branch_taken_0x2db9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB9A8u;
            // 0x2db9ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db9a8) {
            ctx->pc = 0x2DB9C8u;
            goto label_2db9c8;
        }
    }
    ctx->pc = 0x2DB9B0u;
label_2db9b0:
    // 0x2db9b0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2db9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2db9b4:
    // 0x2db9b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2db9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2db9b8:
    // 0x2db9b8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2db9bc:
    if (ctx->pc == 0x2DB9BCu) {
        ctx->pc = 0x2DB9C0u;
        goto label_2db9c0;
    }
    ctx->pc = 0x2DB9B8u;
    {
        const bool branch_taken_0x2db9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db9b8) {
            ctx->pc = 0x2DB9C4u;
            goto label_2db9c4;
        }
    }
    ctx->pc = 0x2DB9C0u;
label_2db9c0:
    // 0x2db9c0: 0xae510f64  sw          $s1, 0xF64($s2)
    ctx->pc = 0x2db9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3940), GPR_U32(ctx, 17));
label_2db9c4:
    // 0x2db9c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2db9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2db9c8:
    // 0x2db9c8: 0xc0bb538  jal         func_2ED4E0
label_2db9cc:
    if (ctx->pc == 0x2DB9CCu) {
        ctx->pc = 0x2DB9CCu;
            // 0x2db9cc: 0x24050067  addiu       $a1, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->pc = 0x2DB9D0u;
        goto label_2db9d0;
    }
    ctx->pc = 0x2DB9C8u;
    SET_GPR_U32(ctx, 31, 0x2DB9D0u);
    ctx->pc = 0x2DB9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB9C8u;
            // 0x2db9cc: 0x24050067  addiu       $a1, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB9D0u; }
        if (ctx->pc != 0x2DB9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB9D0u; }
        if (ctx->pc != 0x2DB9D0u) { return; }
    }
    ctx->pc = 0x2DB9D0u;
label_2db9d0:
    // 0x2db9d0: 0x104000ec  beqz        $v0, . + 4 + (0xEC << 2)
label_2db9d4:
    if (ctx->pc == 0x2DB9D4u) {
        ctx->pc = 0x2DB9D4u;
            // 0x2db9d4: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x2DB9D8u;
        goto label_2db9d8;
    }
    ctx->pc = 0x2DB9D0u;
    {
        const bool branch_taken_0x2db9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB9D0u;
            // 0x2db9d4: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db9d0) {
            ctx->pc = 0x2DBD84u;
            goto label_2dbd84;
        }
    }
    ctx->pc = 0x2DB9D8u;
label_2db9d8:
    // 0x2db9d8: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x2db9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
label_2db9dc:
    // 0x2db9dc: 0xc42088f4  lwc1        $f0, -0x770C($at)
    ctx->pc = 0x2db9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2db9e0:
    // 0x2db9e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2db9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2db9e4:
    // 0x2db9e4: 0x24c688f0  addiu       $a2, $a2, -0x7710
    ctx->pc = 0x2db9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936816));
label_2db9e8:
    // 0x2db9e8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2db9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2db9ec:
    // 0x2db9ec: 0x342183e0  ori         $at, $at, 0x83E0
    ctx->pc = 0x2db9ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33760);
label_2db9f0:
    // 0x2db9f0: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x2db9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2db9f4:
    // 0x2db9f4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2db9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2db9f8:
    // 0x2db9f8: 0xc0b6720  jal         func_2D9C80
label_2db9fc:
    if (ctx->pc == 0x2DB9FCu) {
        ctx->pc = 0x2DB9FCu;
            // 0x2db9fc: 0xe4208904  swc1        $f0, -0x76FC($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936836), bits); }
        ctx->pc = 0x2DBA00u;
        goto label_2dba00;
    }
    ctx->pc = 0x2DB9F8u;
    SET_GPR_U32(ctx, 31, 0x2DBA00u);
    ctx->pc = 0x2DB9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB9F8u;
            // 0x2db9fc: 0xe4208904  swc1        $f0, -0x76FC($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936836), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9C80u;
    if (runtime->hasFunction(0x2D9C80u)) {
        auto targetFn = runtime->lookupFunction(0x2D9C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBA00u; }
        if (ctx->pc != 0x2DBA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveMtnStart__FP8CEditMapPfPf_0x2d9c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBA00u; }
        if (ctx->pc != 0x2DBA00u) { return; }
    }
    ctx->pc = 0x2DBA00u;
label_2dba00:
    // 0x2dba00: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_2dba04:
    if (ctx->pc == 0x2DBA04u) {
        ctx->pc = 0x2DBA04u;
            // 0x2dba04: 0x8f839e0c  lw          $v1, -0x61F4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942220)));
        ctx->pc = 0x2DBA08u;
        goto label_2dba08;
    }
    ctx->pc = 0x2DBA00u;
    {
        const bool branch_taken_0x2dba00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBA00u;
            // 0x2dba04: 0x8f839e0c  lw          $v1, -0x61F4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba00) {
            ctx->pc = 0x2DBD88u;
            goto label_2dbd88;
        }
    }
    ctx->pc = 0x2DBA08u;
label_2dba08:
    // 0x2dba08: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x2dba08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_2dba0c:
    // 0x2dba0c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2dba0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2dba10:
    // 0x2dba10: 0x244288f0  addiu       $v0, $v0, -0x7710
    ctx->pc = 0x2dba10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936816));
label_2dba14:
    // 0x2dba14: 0x342183f0  ori         $at, $at, 0x83F0
    ctx->pc = 0x2dba14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33776);
label_2dba18:
    // 0x2dba18: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2dba18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2dba1c:
    // 0x2dba1c: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x2dba1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2dba20:
    // 0x2dba20: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x2dba20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
label_2dba24:
    // 0x2dba24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dba24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dba28:
    // 0x2dba28: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x2dba28u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2dba2c:
    // 0x2dba2c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2dba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2dba30:
    // 0x2dba30: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2dba30u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_2dba34:
    // 0x2dba34: 0xc06c99c  jal         func_1B2670
label_2dba38:
    if (ctx->pc == 0x2DBA38u) {
        ctx->pc = 0x2DBA38u;
            // 0x2dba38: 0xac2283fc  sw          $v0, -0x7C04($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294935548), GPR_U32(ctx, 2));
        ctx->pc = 0x2DBA3Cu;
        goto label_2dba3c;
    }
    ctx->pc = 0x2DBA34u;
    SET_GPR_U32(ctx, 31, 0x2DBA3Cu);
    ctx->pc = 0x2DBA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBA34u;
            // 0x2dba38: 0xac2283fc  sw          $v0, -0x7C04($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294935548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2670u;
    if (runtime->hasFunction(0x1B2670u)) {
        auto targetFn = runtime->lookupFunction(0x1B2670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBA3Cu; }
        if (ctx->pc != 0x2DBA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFPf_0x1b2670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBA3Cu; }
        if (ctx->pc != 0x2DBA3Cu) { return; }
    }
    ctx->pc = 0x2DBA3Cu;
label_2dba3c:
    // 0x2dba3c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2dba3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dba40:
    // 0x2dba40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dba40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dba44:
    // 0x2dba44: 0xc06c310  jal         func_1B0C40
label_2dba48:
    if (ctx->pc == 0x2DBA48u) {
        ctx->pc = 0x2DBA48u;
            // 0x2dba48: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBA4Cu;
        goto label_2dba4c;
    }
    ctx->pc = 0x2DBA44u;
    SET_GPR_U32(ctx, 31, 0x2DBA4Cu);
    ctx->pc = 0x2DBA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBA44u;
            // 0x2dba48: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBA4Cu; }
        if (ctx->pc != 0x2DBA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBA4Cu; }
        if (ctx->pc != 0x2DBA4Cu) { return; }
    }
    ctx->pc = 0x2DBA4Cu;
label_2dba4c:
    // 0x2dba4c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2dba4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dba50:
    // 0x2dba50: 0x128001a5  beqz        $s4, . + 4 + (0x1A5 << 2)
label_2dba54:
    if (ctx->pc == 0x2DBA54u) {
        ctx->pc = 0x2DBA58u;
        goto label_2dba58;
    }
    ctx->pc = 0x2DBA50u;
    {
        const bool branch_taken_0x2dba50 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dba50) {
            ctx->pc = 0x2DC0E8u;
            goto label_2dc0e8;
        }
    }
    ctx->pc = 0x2DBA58u;
label_2dba58:
    // 0x2dba58: 0x8e910324  lw          $s1, 0x324($s4)
    ctx->pc = 0x2dba58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 804)));
label_2dba5c:
    // 0x2dba5c: 0x122001a2  beqz        $s1, . + 4 + (0x1A2 << 2)
label_2dba60:
    if (ctx->pc == 0x2DBA60u) {
        ctx->pc = 0x2DBA64u;
        goto label_2dba64;
    }
    ctx->pc = 0x2DBA5Cu;
    {
        const bool branch_taken_0x2dba5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dba5c) {
            ctx->pc = 0x2DC0E8u;
            goto label_2dc0e8;
        }
    }
    ctx->pc = 0x2DBA64u;
label_2dba64:
    // 0x2dba64: 0x8f829e0c  lw          $v0, -0x61F4($gp)
    ctx->pc = 0x2dba64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942220)));
label_2dba68:
    // 0x2dba68: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2dba68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2dba6c:
    // 0x2dba6c: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x2dba6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
label_2dba70:
    // 0x2dba70: 0xc0b6214  jal         func_2D8850
label_2dba74:
    if (ctx->pc == 0x2DBA74u) {
        ctx->pc = 0x2DBA74u;
            // 0x2dba74: 0x2c570001  sltiu       $s7, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x2DBA78u;
        goto label_2dba78;
    }
    ctx->pc = 0x2DBA70u;
    SET_GPR_U32(ctx, 31, 0x2DBA78u);
    ctx->pc = 0x2DBA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBA70u;
            // 0x2dba74: 0x2c570001  sltiu       $s7, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8850u;
    if (runtime->hasFunction(0x2D8850u)) {
        auto targetFn = runtime->lookupFunction(0x2D8850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBA78u; }
        if (ctx->pc != 0x2DBA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserData__Fv_0x2d8850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBA78u; }
        if (ctx->pc != 0x2DBA78u) { return; }
    }
    ctx->pc = 0x2DBA78u;
label_2dba78:
    // 0x2dba78: 0x8f859e38  lw          $a1, -0x61C8($gp)
    ctx->pc = 0x2dba78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942264)));
label_2dba7c:
    // 0x2dba7c: 0xc067778  jal         func_19DDE0
label_2dba80:
    if (ctx->pc == 0x2DBA80u) {
        ctx->pc = 0x2DBA80u;
            // 0x2dba80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBA84u;
        goto label_2dba84;
    }
    ctx->pc = 0x2DBA7Cu;
    SET_GPR_U32(ctx, 31, 0x2DBA84u);
    ctx->pc = 0x2DBA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBA7Cu;
            // 0x2dba80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DDE0u;
    if (runtime->hasFunction(0x19DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x19DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBA84u; }
        if (ctx->pc != 0x2DBA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumSameItem__16CUserDataManagerFi_0x19dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBA84u; }
        if (ctx->pc != 0x2DBA84u) { return; }
    }
    ctx->pc = 0x2DBA84u;
label_2dba84:
    // 0x2dba84: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2dba84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dba88:
    // 0x2dba88: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2dba88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2dba8c:
    // 0x2dba8c: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
label_2dba90:
    if (ctx->pc == 0x2DBA90u) {
        ctx->pc = 0x2DBA90u;
            // 0x2dba90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBA94u;
        goto label_2dba94;
    }
    ctx->pc = 0x2DBA8Cu;
    {
        const bool branch_taken_0x2dba8c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2DBA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBA8Cu;
            // 0x2dba90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba8c) {
            ctx->pc = 0x2DBA98u;
            goto label_2dba98;
        }
    }
    ctx->pc = 0x2DBA94u;
label_2dba94:
    // 0x2dba94: 0xae560f64  sw          $s6, 0xF64($s2)
    ctx->pc = 0x2dba94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3940), GPR_U32(ctx, 22));
label_2dba98:
    // 0x2dba98: 0xc06d6b0  jal         func_1B5AC0
label_2dba9c:
    if (ctx->pc == 0x2DBA9Cu) {
        ctx->pc = 0x2DBAA0u;
        goto label_2dbaa0;
    }
    ctx->pc = 0x2DBA98u;
    SET_GPR_U32(ctx, 31, 0x2DBAA0u);
    ctx->pc = 0x1B5AC0u;
    if (runtime->hasFunction(0x1B5AC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBAA0u; }
        if (ctx->pc != 0x2DBAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFence__10CEditPartsFv_0x1b5ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBAA0u; }
        if (ctx->pc != 0x2DBAA0u) { return; }
    }
    ctx->pc = 0x2DBAA0u;
label_2dbaa0:
    // 0x2dbaa0: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_2dbaa4:
    if (ctx->pc == 0x2DBAA4u) {
        ctx->pc = 0x2DBAA8u;
        goto label_2dbaa8;
    }
    ctx->pc = 0x2DBAA0u;
    {
        const bool branch_taken_0x2dbaa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbaa0) {
            ctx->pc = 0x2DBB68u;
            goto label_2dbb68;
        }
    }
    ctx->pc = 0x2DBAA8u;
label_2dbaa8:
    // 0x2dbaa8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2dbaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2dbaac:
    // 0x2dbaac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dbaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dbab0:
    // 0x2dbab0: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_2dbab4:
    if (ctx->pc == 0x2DBAB4u) {
        ctx->pc = 0x2DBAB8u;
        goto label_2dbab8;
    }
    ctx->pc = 0x2DBAB0u;
    {
        const bool branch_taken_0x2dbab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dbab0) {
            ctx->pc = 0x2DBAFCu;
            goto label_2dbafc;
        }
    }
    ctx->pc = 0x2DBAB8u;
label_2dbab8:
    // 0x2dbab8: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
label_2dbabc:
    if (ctx->pc == 0x2DBABCu) {
        ctx->pc = 0x2DBABCu;
            // 0x2dbabc: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2DBAC0u;
        goto label_2dbac0;
    }
    ctx->pc = 0x2DBAB8u;
    {
        const bool branch_taken_0x2dbab8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBAB8u;
            // 0x2dbabc: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbab8) {
            ctx->pc = 0x2DBAD4u;
            goto label_2dbad4;
        }
    }
    ctx->pc = 0x2DBAC0u;
label_2dbac0:
    // 0x2dbac0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dbac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dbac4:
    // 0x2dbac4: 0xc0b6210  jal         func_2D8840
label_2dbac8:
    if (ctx->pc == 0x2DBAC8u) {
        ctx->pc = 0x2DBAC8u;
            // 0x2dbac8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBACCu;
        goto label_2dbacc;
    }
    ctx->pc = 0x2DBAC4u;
    SET_GPR_U32(ctx, 31, 0x2DBACCu);
    ctx->pc = 0x2DBAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBAC4u;
            // 0x2dbac8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8840u;
    if (runtime->hasFunction(0x2D8840u)) {
        auto targetFn = runtime->lookupFunction(0x2D8840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBACCu; }
        if (ctx->pc != 0x2DBACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHelpMes__Fiii_0x2d8840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBACCu; }
        if (ctx->pc != 0x2DBACCu) { return; }
    }
    ctx->pc = 0x2DBACCu;
label_2dbacc:
    // 0x2dbacc: 0x10000006  b           . + 4 + (0x6 << 2)
label_2dbad0:
    if (ctx->pc == 0x2DBAD0u) {
        ctx->pc = 0x2DBAD0u;
            // 0x2dbad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBAD4u;
        goto label_2dbad4;
    }
    ctx->pc = 0x2DBACCu;
    {
        const bool branch_taken_0x2dbacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBACCu;
            // 0x2dbad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbacc) {
            ctx->pc = 0x2DBAE8u;
            goto label_2dbae8;
        }
    }
    ctx->pc = 0x2DBAD4u;
label_2dbad4:
    // 0x2dbad4: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x2dbad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2dbad8:
    // 0x2dbad8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2dbad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2dbadc:
    // 0x2dbadc: 0xc0b6210  jal         func_2D8840
label_2dbae0:
    if (ctx->pc == 0x2DBAE0u) {
        ctx->pc = 0x2DBAE0u;
            // 0x2dbae0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBAE4u;
        goto label_2dbae4;
    }
    ctx->pc = 0x2DBADCu;
    SET_GPR_U32(ctx, 31, 0x2DBAE4u);
    ctx->pc = 0x2DBAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBADCu;
            // 0x2dbae0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8840u;
    if (runtime->hasFunction(0x2D8840u)) {
        auto targetFn = runtime->lookupFunction(0x2D8840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBAE4u; }
        if (ctx->pc != 0x2DBAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHelpMes__Fiii_0x2d8840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBAE4u; }
        if (ctx->pc != 0x2DBAE4u) { return; }
    }
    ctx->pc = 0x2DBAE4u;
label_2dbae4:
    // 0x2dbae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dbae8:
    // 0x2dbae8: 0xc0bb538  jal         func_2ED4E0
label_2dbaec:
    if (ctx->pc == 0x2DBAECu) {
        ctx->pc = 0x2DBAECu;
            // 0x2dbaec: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x2DBAF0u;
        goto label_2dbaf0;
    }
    ctx->pc = 0x2DBAE8u;
    SET_GPR_U32(ctx, 31, 0x2DBAF0u);
    ctx->pc = 0x2DBAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBAE8u;
            // 0x2dbaec: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBAF0u; }
        if (ctx->pc != 0x2DBAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBAF0u; }
        if (ctx->pc != 0x2DBAF0u) { return; }
    }
    ctx->pc = 0x2DBAF0u;
label_2dbaf0:
    // 0x2dbaf0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2dbaf4:
    if (ctx->pc == 0x2DBAF4u) {
        ctx->pc = 0x2DBAF8u;
        goto label_2dbaf8;
    }
    ctx->pc = 0x2DBAF0u;
    {
        const bool branch_taken_0x2dbaf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbaf0) {
            ctx->pc = 0x2DBAFCu;
            goto label_2dbafc;
        }
    }
    ctx->pc = 0x2DBAF8u;
label_2dbaf8:
    // 0x2dbaf8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2dbaf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dbafc:
    // 0x2dbafc: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2dbafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2dbb00:
    // 0x2dbb00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2dbb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2dbb04:
    // 0x2dbb04: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
label_2dbb08:
    if (ctx->pc == 0x2DBB08u) {
        ctx->pc = 0x2DBB0Cu;
        goto label_2dbb0c;
    }
    ctx->pc = 0x2DBB04u;
    {
        const bool branch_taken_0x2dbb04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dbb04) {
            ctx->pc = 0x2DBBC0u;
            goto label_2dbbc0;
        }
    }
    ctx->pc = 0x2DBB0Cu;
label_2dbb0c:
    // 0x2dbb0c: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
label_2dbb10:
    if (ctx->pc == 0x2DBB10u) {
        ctx->pc = 0x2DBB10u;
            // 0x2dbb10: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x2DBB14u;
        goto label_2dbb14;
    }
    ctx->pc = 0x2DBB0Cu;
    {
        const bool branch_taken_0x2dbb0c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBB0Cu;
            // 0x2dbb10: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb0c) {
            ctx->pc = 0x2DBB28u;
            goto label_2dbb28;
        }
    }
    ctx->pc = 0x2DBB14u;
label_2dbb14:
    // 0x2dbb14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dbb14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dbb18:
    // 0x2dbb18: 0xc0b6210  jal         func_2D8840
label_2dbb1c:
    if (ctx->pc == 0x2DBB1Cu) {
        ctx->pc = 0x2DBB1Cu;
            // 0x2dbb1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB20u;
        goto label_2dbb20;
    }
    ctx->pc = 0x2DBB18u;
    SET_GPR_U32(ctx, 31, 0x2DBB20u);
    ctx->pc = 0x2DBB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBB18u;
            // 0x2dbb1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8840u;
    if (runtime->hasFunction(0x2D8840u)) {
        auto targetFn = runtime->lookupFunction(0x2D8840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBB20u; }
        if (ctx->pc != 0x2DBB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHelpMes__Fiii_0x2d8840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBB20u; }
        if (ctx->pc != 0x2DBB20u) { return; }
    }
    ctx->pc = 0x2DBB20u;
label_2dbb20:
    // 0x2dbb20: 0x10000006  b           . + 4 + (0x6 << 2)
label_2dbb24:
    if (ctx->pc == 0x2DBB24u) {
        ctx->pc = 0x2DBB24u;
            // 0x2dbb24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB28u;
        goto label_2dbb28;
    }
    ctx->pc = 0x2DBB20u;
    {
        const bool branch_taken_0x2dbb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBB20u;
            // 0x2dbb24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb20) {
            ctx->pc = 0x2DBB3Cu;
            goto label_2dbb3c;
        }
    }
    ctx->pc = 0x2DBB28u;
label_2dbb28:
    // 0x2dbb28: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x2dbb28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2dbb2c:
    // 0x2dbb2c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2dbb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2dbb30:
    // 0x2dbb30: 0xc0b6210  jal         func_2D8840
label_2dbb34:
    if (ctx->pc == 0x2DBB34u) {
        ctx->pc = 0x2DBB34u;
            // 0x2dbb34: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB38u;
        goto label_2dbb38;
    }
    ctx->pc = 0x2DBB30u;
    SET_GPR_U32(ctx, 31, 0x2DBB38u);
    ctx->pc = 0x2DBB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBB30u;
            // 0x2dbb34: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8840u;
    if (runtime->hasFunction(0x2D8840u)) {
        auto targetFn = runtime->lookupFunction(0x2D8840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBB38u; }
        if (ctx->pc != 0x2DBB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHelpMes__Fiii_0x2d8840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBB38u; }
        if (ctx->pc != 0x2DBB38u) { return; }
    }
    ctx->pc = 0x2DBB38u;
label_2dbb38:
    // 0x2dbb38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dbb3c:
    // 0x2dbb3c: 0xc0bb538  jal         func_2ED4E0
label_2dbb40:
    if (ctx->pc == 0x2DBB40u) {
        ctx->pc = 0x2DBB40u;
            // 0x2dbb40: 0x2405006b  addiu       $a1, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->pc = 0x2DBB44u;
        goto label_2dbb44;
    }
    ctx->pc = 0x2DBB3Cu;
    SET_GPR_U32(ctx, 31, 0x2DBB44u);
    ctx->pc = 0x2DBB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBB3Cu;
            // 0x2dbb40: 0x2405006b  addiu       $a1, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBB44u; }
        if (ctx->pc != 0x2DBB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBB44u; }
        if (ctx->pc != 0x2DBB44u) { return; }
    }
    ctx->pc = 0x2DBB44u;
label_2dbb44:
    // 0x2dbb44: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2dbb48:
    if (ctx->pc == 0x2DBB48u) {
        ctx->pc = 0x2DBB48u;
            // 0x2dbb48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB4Cu;
        goto label_2dbb4c;
    }
    ctx->pc = 0x2DBB44u;
    {
        const bool branch_taken_0x2dbb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBB44u;
            // 0x2dbb48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb44) {
            ctx->pc = 0x2DBB50u;
            goto label_2dbb50;
        }
    }
    ctx->pc = 0x2DBB4Cu;
label_2dbb4c:
    // 0x2dbb4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2dbb4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dbb50:
    // 0x2dbb50: 0xc0bb538  jal         func_2ED4E0
label_2dbb54:
    if (ctx->pc == 0x2DBB54u) {
        ctx->pc = 0x2DBB54u;
            // 0x2dbb54: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x2DBB58u;
        goto label_2dbb58;
    }
    ctx->pc = 0x2DBB50u;
    SET_GPR_U32(ctx, 31, 0x2DBB58u);
    ctx->pc = 0x2DBB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBB50u;
            // 0x2dbb54: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBB58u; }
        if (ctx->pc != 0x2DBB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBB58u; }
        if (ctx->pc != 0x2DBB58u) { return; }
    }
    ctx->pc = 0x2DBB58u;
label_2dbb58:
    // 0x2dbb58: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2dbb5c:
    if (ctx->pc == 0x2DBB5Cu) {
        ctx->pc = 0x2DBB60u;
        goto label_2dbb60;
    }
    ctx->pc = 0x2DBB58u;
    {
        const bool branch_taken_0x2dbb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbb58) {
            ctx->pc = 0x2DBBC0u;
            goto label_2dbbc0;
        }
    }
    ctx->pc = 0x2DBB60u;
label_2dbb60:
    // 0x2dbb60: 0x10000017  b           . + 4 + (0x17 << 2)
label_2dbb64:
    if (ctx->pc == 0x2DBB64u) {
        ctx->pc = 0x2DBB64u;
            // 0x2dbb64: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DBB68u;
        goto label_2dbb68;
    }
    ctx->pc = 0x2DBB60u;
    {
        const bool branch_taken_0x2dbb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBB60u;
            // 0x2dbb64: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb60) {
            ctx->pc = 0x2DBBC0u;
            goto label_2dbbc0;
        }
    }
    ctx->pc = 0x2DBB68u;
label_2dbb68:
    // 0x2dbb68: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
label_2dbb6c:
    if (ctx->pc == 0x2DBB6Cu) {
        ctx->pc = 0x2DBB6Cu;
            // 0x2dbb6c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2DBB70u;
        goto label_2dbb70;
    }
    ctx->pc = 0x2DBB68u;
    {
        const bool branch_taken_0x2dbb68 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBB68u;
            // 0x2dbb6c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb68) {
            ctx->pc = 0x2DBB84u;
            goto label_2dbb84;
        }
    }
    ctx->pc = 0x2DBB70u;
label_2dbb70:
    // 0x2dbb70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dbb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dbb74:
    // 0x2dbb74: 0xc0b6210  jal         func_2D8840
label_2dbb78:
    if (ctx->pc == 0x2DBB78u) {
        ctx->pc = 0x2DBB78u;
            // 0x2dbb78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB7Cu;
        goto label_2dbb7c;
    }
    ctx->pc = 0x2DBB74u;
    SET_GPR_U32(ctx, 31, 0x2DBB7Cu);
    ctx->pc = 0x2DBB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBB74u;
            // 0x2dbb78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8840u;
    if (runtime->hasFunction(0x2D8840u)) {
        auto targetFn = runtime->lookupFunction(0x2D8840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBB7Cu; }
        if (ctx->pc != 0x2DBB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHelpMes__Fiii_0x2d8840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBB7Cu; }
        if (ctx->pc != 0x2DBB7Cu) { return; }
    }
    ctx->pc = 0x2DBB7Cu;
label_2dbb7c:
    // 0x2dbb7c: 0x10000006  b           . + 4 + (0x6 << 2)
label_2dbb80:
    if (ctx->pc == 0x2DBB80u) {
        ctx->pc = 0x2DBB80u;
            // 0x2dbb80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB84u;
        goto label_2dbb84;
    }
    ctx->pc = 0x2DBB7Cu;
    {
        const bool branch_taken_0x2dbb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBB7Cu;
            // 0x2dbb80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb7c) {
            ctx->pc = 0x2DBB98u;
            goto label_2dbb98;
        }
    }
    ctx->pc = 0x2DBB84u;
label_2dbb84:
    // 0x2dbb84: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x2dbb84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2dbb88:
    // 0x2dbb88: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2dbb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2dbb8c:
    // 0x2dbb8c: 0xc0b6210  jal         func_2D8840
label_2dbb90:
    if (ctx->pc == 0x2DBB90u) {
        ctx->pc = 0x2DBB90u;
            // 0x2dbb90: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB94u;
        goto label_2dbb94;
    }
    ctx->pc = 0x2DBB8Cu;
    SET_GPR_U32(ctx, 31, 0x2DBB94u);
    ctx->pc = 0x2DBB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBB8Cu;
            // 0x2dbb90: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8840u;
    if (runtime->hasFunction(0x2D8840u)) {
        auto targetFn = runtime->lookupFunction(0x2D8840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBB94u; }
        if (ctx->pc != 0x2DBB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHelpMes__Fiii_0x2d8840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBB94u; }
        if (ctx->pc != 0x2DBB94u) { return; }
    }
    ctx->pc = 0x2DBB94u;
label_2dbb94:
    // 0x2dbb94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dbb98:
    // 0x2dbb98: 0xc0bb538  jal         func_2ED4E0
label_2dbb9c:
    if (ctx->pc == 0x2DBB9Cu) {
        ctx->pc = 0x2DBB9Cu;
            // 0x2dbb9c: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x2DBBA0u;
        goto label_2dbba0;
    }
    ctx->pc = 0x2DBB98u;
    SET_GPR_U32(ctx, 31, 0x2DBBA0u);
    ctx->pc = 0x2DBB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBB98u;
            // 0x2dbb9c: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBBA0u; }
        if (ctx->pc != 0x2DBBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBBA0u; }
        if (ctx->pc != 0x2DBBA0u) { return; }
    }
    ctx->pc = 0x2DBBA0u;
label_2dbba0:
    // 0x2dbba0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2dbba4:
    if (ctx->pc == 0x2DBBA4u) {
        ctx->pc = 0x2DBBA4u;
            // 0x2dbba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBBA8u;
        goto label_2dbba8;
    }
    ctx->pc = 0x2DBBA0u;
    {
        const bool branch_taken_0x2dbba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBBA0u;
            // 0x2dbba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbba0) {
            ctx->pc = 0x2DBBACu;
            goto label_2dbbac;
        }
    }
    ctx->pc = 0x2DBBA8u;
label_2dbba8:
    // 0x2dbba8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2dbba8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dbbac:
    // 0x2dbbac: 0xc0bb538  jal         func_2ED4E0
label_2dbbb0:
    if (ctx->pc == 0x2DBBB0u) {
        ctx->pc = 0x2DBBB0u;
            // 0x2dbbb0: 0x2405006b  addiu       $a1, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->pc = 0x2DBBB4u;
        goto label_2dbbb4;
    }
    ctx->pc = 0x2DBBACu;
    SET_GPR_U32(ctx, 31, 0x2DBBB4u);
    ctx->pc = 0x2DBBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBBACu;
            // 0x2dbbb0: 0x2405006b  addiu       $a1, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBBB4u; }
        if (ctx->pc != 0x2DBBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBBB4u; }
        if (ctx->pc != 0x2DBBB4u) { return; }
    }
    ctx->pc = 0x2DBBB4u;
label_2dbbb4:
    // 0x2dbbb4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2dbbb8:
    if (ctx->pc == 0x2DBBB8u) {
        ctx->pc = 0x2DBBBCu;
        goto label_2dbbbc;
    }
    ctx->pc = 0x2DBBB4u;
    {
        const bool branch_taken_0x2dbbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbbb4) {
            ctx->pc = 0x2DBBC0u;
            goto label_2dbbc0;
        }
    }
    ctx->pc = 0x2DBBBCu;
label_2dbbbc:
    // 0x2dbbbc: 0x24130063  addiu       $s3, $zero, 0x63
    ctx->pc = 0x2dbbbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_2dbbc0:
    // 0x2dbbc0: 0x6600149  bltz        $s3, . + 4 + (0x149 << 2)
label_2dbbc4:
    if (ctx->pc == 0x2DBBC4u) {
        ctx->pc = 0x2DBBC8u;
        goto label_2dbbc8;
    }
    ctx->pc = 0x2DBBC0u;
    {
        const bool branch_taken_0x2dbbc0 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x2dbbc0) {
            ctx->pc = 0x2DC0E8u;
            goto label_2dc0e8;
        }
    }
    ctx->pc = 0x2DBBC8u;
label_2dbbc8:
    // 0x2dbbc8: 0x8f839e0c  lw          $v1, -0x61F4($gp)
    ctx->pc = 0x2dbbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942220)));
label_2dbbcc:
    // 0x2dbbcc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2dbbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2dbbd0:
    // 0x2dbbd0: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
label_2dbbd4:
    if (ctx->pc == 0x2DBBD4u) {
        ctx->pc = 0x2DBBD8u;
        goto label_2dbbd8;
    }
    ctx->pc = 0x2DBBD0u;
    {
        const bool branch_taken_0x2dbbd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dbbd0) {
            ctx->pc = 0x2DBC90u;
            goto label_2dbc90;
        }
    }
    ctx->pc = 0x2DBBD8u;
label_2dbbd8:
    // 0x2dbbd8: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x2dbbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2dbbdc:
    // 0x2dbbdc: 0xc0bbabc  jal         func_2EEAF0
label_2dbbe0:
    if (ctx->pc == 0x2DBBE0u) {
        ctx->pc = 0x2DBBE0u;
            // 0x2dbbe0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBBE4u;
        goto label_2dbbe4;
    }
    ctx->pc = 0x2DBBDCu;
    SET_GPR_U32(ctx, 31, 0x2DBBE4u);
    ctx->pc = 0x2DBBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBBDCu;
            // 0x2dbbe0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EEAF0u;
    if (runtime->hasFunction(0x2EEAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2EEAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBBE4u; }
        if (ctx->pc != 0x2DBBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RePaintNum__8CEditMapFi_0x2eeaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBBE4u; }
        if (ctx->pc != 0x2DBBE4u) { return; }
    }
    ctx->pc = 0x2DBBE4u;
label_2dbbe4:
    // 0x2dbbe4: 0x2a610003  slti        $at, $s3, 0x3
    ctx->pc = 0x2dbbe4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_2dbbe8:
    // 0x2dbbe8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2dbbec:
    if (ctx->pc == 0x2DBBECu) {
        ctx->pc = 0x2DBBECu;
            // 0x2dbbec: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBBF0u;
        goto label_2dbbf0;
    }
    ctx->pc = 0x2DBBE8u;
    {
        const bool branch_taken_0x2dbbe8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBBE8u;
            // 0x2dbbec: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbbe8) {
            ctx->pc = 0x2DBBF4u;
            goto label_2dbbf4;
        }
    }
    ctx->pc = 0x2DBBF0u;
label_2dbbf0:
    // 0x2dbbf0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2dbbf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dbbf4:
    // 0x2dbbf4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2dbbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2dbbf8:
    // 0x2dbbf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dbbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dbbfc:
    // 0x2dbbfc: 0x34218400  ori         $at, $at, 0x8400
    ctx->pc = 0x2dbbfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33792);
label_2dbc00:
    // 0x2dbc00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dbc00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dbc04:
    // 0x2dbc04: 0xc06d5d8  jal         func_1B5760
label_2dbc08:
    if (ctx->pc == 0x2DBC08u) {
        ctx->pc = 0x2DBC08u;
            // 0x2dbc08: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DBC0Cu;
        goto label_2dbc0c;
    }
    ctx->pc = 0x2DBC04u;
    SET_GPR_U32(ctx, 31, 0x2DBC0Cu);
    ctx->pc = 0x2DBC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBC04u;
            // 0x2dbc08: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5760u;
    if (runtime->hasFunction(0x1B5760u)) {
        auto targetFn = runtime->lookupFunction(0x1B5760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBC0Cu; }
        if (ctx->pc != 0x2DBC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDefColor__14CEditPartsInfoFiPf_0x1b5760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBC0Cu; }
        if (ctx->pc != 0x2DBC0Cu) { return; }
    }
    ctx->pc = 0x2DBC0Cu;
label_2dbc0c:
    // 0x2dbc0c: 0x10400136  beqz        $v0, . + 4 + (0x136 << 2)
label_2dbc10:
    if (ctx->pc == 0x2DBC10u) {
        ctx->pc = 0x2DBC10u;
            // 0x2dbc10: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->pc = 0x2DBC14u;
        goto label_2dbc14;
    }
    ctx->pc = 0x2DBC0Cu;
    {
        const bool branch_taken_0x2dbc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBC0Cu;
            // 0x2dbc10: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc0c) {
            ctx->pc = 0x2DC0E8u;
            goto label_2dc0e8;
        }
    }
    ctx->pc = 0x2DBC14u;
label_2dbc14:
    // 0x2dbc14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dbc14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dbc18:
    // 0x2dbc18: 0x34218410  ori         $at, $at, 0x8410
    ctx->pc = 0x2dbc18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33808);
label_2dbc1c:
    // 0x2dbc1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dbc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2dbc20:
    // 0x2dbc20: 0xc0599ec  jal         func_1667B0
label_2dbc24:
    if (ctx->pc == 0x2DBC24u) {
        ctx->pc = 0x2DBC24u;
            // 0x2dbc24: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DBC28u;
        goto label_2dbc28;
    }
    ctx->pc = 0x2DBC20u;
    SET_GPR_U32(ctx, 31, 0x2DBC28u);
    ctx->pc = 0x2DBC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBC20u;
            // 0x2dbc24: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1667B0u;
    if (runtime->hasFunction(0x1667B0u)) {
        auto targetFn = runtime->lookupFunction(0x1667B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBC28u; }
        if (ctx->pc != 0x2DBC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColor__9CMapPartsFiPf_0x1667b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBC28u; }
        if (ctx->pc != 0x2DBC28u) { return; }
    }
    ctx->pc = 0x2DBC28u;
label_2dbc28:
    // 0x2dbc28: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2dbc28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2dbc2c:
    // 0x2dbc2c: 0x34218410  ori         $at, $at, 0x8410
    ctx->pc = 0x2dbc2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33808);
label_2dbc30:
    // 0x2dbc30: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x2dbc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2dbc34:
    // 0x2dbc34: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2dbc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2dbc38:
    // 0x2dbc38: 0x34218400  ori         $at, $at, 0x8400
    ctx->pc = 0x2dbc38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33792);
label_2dbc3c:
    // 0x2dbc3c: 0xc06d7e4  jal         func_1B5F90
label_2dbc40:
    if (ctx->pc == 0x2DBC40u) {
        ctx->pc = 0x2DBC40u;
            // 0x2dbc40: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DBC44u;
        goto label_2dbc44;
    }
    ctx->pc = 0x2DBC3Cu;
    SET_GPR_U32(ctx, 31, 0x2DBC44u);
    ctx->pc = 0x2DBC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBC3Cu;
            // 0x2dbc40: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5F90u;
    if (runtime->hasFunction(0x1B5F90u)) {
        auto targetFn = runtime->lookupFunction(0x1B5F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBC44u; }
        if (ctx->pc != 0x2DBC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditPartsCmpColor__FPfPf_0x1b5f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBC44u; }
        if (ctx->pc != 0x2DBC44u) { return; }
    }
    ctx->pc = 0x2DBC44u;
label_2dbc44:
    // 0x2dbc44: 0x14400128  bnez        $v0, . + 4 + (0x128 << 2)
label_2dbc48:
    if (ctx->pc == 0x2DBC48u) {
        ctx->pc = 0x2DBC48u;
            // 0x2dbc48: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->pc = 0x2DBC4Cu;
        goto label_2dbc4c;
    }
    ctx->pc = 0x2DBC44u;
    {
        const bool branch_taken_0x2dbc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBC44u;
            // 0x2dbc48: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc44) {
            ctx->pc = 0x2DC0E8u;
            goto label_2dc0e8;
        }
    }
    ctx->pc = 0x2DBC4Cu;
label_2dbc4c:
    // 0x2dbc4c: 0x34218410  ori         $at, $at, 0x8410
    ctx->pc = 0x2dbc4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33808);
label_2dbc50:
    // 0x2dbc50: 0xc0b6268  jal         func_2D89A0
label_2dbc54:
    if (ctx->pc == 0x2DBC54u) {
        ctx->pc = 0x2DBC54u;
            // 0x2dbc54: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DBC58u;
        goto label_2dbc58;
    }
    ctx->pc = 0x2DBC50u;
    SET_GPR_U32(ctx, 31, 0x2DBC58u);
    ctx->pc = 0x2DBC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBC50u;
            // 0x2dbc54: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D89A0u;
    if (runtime->hasFunction(0x2D89A0u)) {
        auto targetFn = runtime->lookupFunction(0x2D89A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBC58u; }
        if (ctx->pc != 0x2DBC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        emGetPenkiItemNo__FPf_0x2d89a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBC58u; }
        if (ctx->pc != 0x2DBC58u) { return; }
    }
    ctx->pc = 0x2DBC58u;
label_2dbc58:
    // 0x2dbc58: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2dbc58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2dbc5c:
    // 0x2dbc5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2dbc5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dbc60:
    // 0x2dbc60: 0xc04a0d2  jal         func_128348
label_2dbc64:
    if (ctx->pc == 0x2DBC64u) {
        ctx->pc = 0x2DBC64u;
            // 0x2dbc64: 0x24840b30  addiu       $a0, $a0, 0xB30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2864));
        ctx->pc = 0x2DBC68u;
        goto label_2dbc68;
    }
    ctx->pc = 0x2DBC60u;
    SET_GPR_U32(ctx, 31, 0x2DBC68u);
    ctx->pc = 0x2DBC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBC60u;
            // 0x2dbc64: 0x24840b30  addiu       $a0, $a0, 0xB30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBC68u; }
        if (ctx->pc != 0x2DBC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBC68u; }
        if (ctx->pc != 0x2DBC68u) { return; }
    }
    ctx->pc = 0x2DBC68u;
label_2dbc68:
    // 0x2dbc68: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2dbc68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2dbc6c:
    // 0x2dbc6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dbc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dbc70:
    // 0x2dbc70: 0x34218400  ori         $at, $at, 0x8400
    ctx->pc = 0x2dbc70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33792);
label_2dbc74:
    // 0x2dbc74: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2dbc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2dbc78:
    // 0x2dbc78: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2dbc78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dbc7c:
    // 0x2dbc7c: 0xc0b68b8  jal         func_2DA2E0
label_2dbc80:
    if (ctx->pc == 0x2DBC80u) {
        ctx->pc = 0x2DBC80u;
            // 0x2dbc80: 0x3a13821  addu        $a3, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DBC84u;
        goto label_2dbc84;
    }
    ctx->pc = 0x2DBC7Cu;
    SET_GPR_U32(ctx, 31, 0x2DBC84u);
    ctx->pc = 0x2DBC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBC7Cu;
            // 0x2dbc80: 0x3a13821  addu        $a3, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2E0u;
    if (runtime->hasFunction(0x2DA2E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DA2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBC84u; }
        if (ctx->pc != 0x2DBC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PaintEditParts__FP8CEditMapiiPf_0x2da2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBC84u; }
        if (ctx->pc != 0x2DBC84u) { return; }
    }
    ctx->pc = 0x2DBC84u;
label_2dbc84:
    // 0x2dbc84: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2dbc88:
    if (ctx->pc == 0x2DBC88u) {
        ctx->pc = 0x2DBC88u;
            // 0x2dbc88: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x2DBC8Cu;
        goto label_2dbc8c;
    }
    ctx->pc = 0x2DBC84u;
    {
        const bool branch_taken_0x2dbc84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBC84u;
            // 0x2dbc88: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc84) {
            ctx->pc = 0x2DBC90u;
            goto label_2dbc90;
        }
    }
    ctx->pc = 0x2DBC8Cu;
label_2dbc8c:
    // 0x2dbc8c: 0xaf829e3c  sw          $v0, -0x61C4($gp)
    ctx->pc = 0x2dbc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942268), GPR_U32(ctx, 2));
label_2dbc90:
    // 0x2dbc90: 0x8f839e0c  lw          $v1, -0x61F4($gp)
    ctx->pc = 0x2dbc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942220)));
label_2dbc94:
    // 0x2dbc94: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2dbc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2dbc98:
    // 0x2dbc98: 0x14620113  bne         $v1, $v0, . + 4 + (0x113 << 2)
label_2dbc9c:
    if (ctx->pc == 0x2DBC9Cu) {
        ctx->pc = 0x2DBCA0u;
        goto label_2dbca0;
    }
    ctx->pc = 0x2DBC98u;
    {
        const bool branch_taken_0x2dbc98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dbc98) {
            ctx->pc = 0x2DC0E8u;
            goto label_2dc0e8;
        }
    }
    ctx->pc = 0x2DBCA0u;
label_2dbca0:
    // 0x2dbca0: 0x8e300020  lw          $s0, 0x20($s1)
    ctx->pc = 0x2dbca0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2dbca4:
    // 0x2dbca4: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x2dbca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_2dbca8:
    // 0x2dbca8: 0x2b0882a  slt         $s1, $s5, $s0
    ctx->pc = 0x2dbca8u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2dbcac:
    // 0x2dbcac: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
label_2dbcb0:
    if (ctx->pc == 0x2DBCB0u) {
        ctx->pc = 0x2DBCB0u;
            // 0x2dbcb0: 0x3a310001  xori        $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
        ctx->pc = 0x2DBCB4u;
        goto label_2dbcb4;
    }
    ctx->pc = 0x2DBCACu;
    {
        const bool branch_taken_0x2dbcac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DBCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBCACu;
            // 0x2dbcb0: 0x3a310001  xori        $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbcac) {
            ctx->pc = 0x2DBCBCu;
            goto label_2dbcbc;
        }
    }
    ctx->pc = 0x2DBCB4u;
label_2dbcb4:
    // 0x2dbcb4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2dbcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2dbcb8:
    // 0x2dbcb8: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x2dbcb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2dbcbc:
    // 0x2dbcbc: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x2dbcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
label_2dbcc0:
    // 0x2dbcc0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2dbcc4:
    if (ctx->pc == 0x2DBCC4u) {
        ctx->pc = 0x2DBCC4u;
            // 0x2dbcc4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x2DBCC8u;
        goto label_2dbcc8;
    }
    ctx->pc = 0x2DBCC0u;
    {
        const bool branch_taken_0x2dbcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBCC0u;
            // 0x2dbcc4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbcc0) {
            ctx->pc = 0x2DBCE0u;
            goto label_2dbce0;
        }
    }
    ctx->pc = 0x2DBCC8u;
label_2dbcc8:
    // 0x2dbcc8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2dbcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2dbccc:
    // 0x2dbccc: 0xc052cf0  jal         func_14B3C0
label_2dbcd0:
    if (ctx->pc == 0x2DBCD0u) {
        ctx->pc = 0x2DBCD0u;
            // 0x2dbcd0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x2DBCD4u;
        goto label_2dbcd4;
    }
    ctx->pc = 0x2DBCCCu;
    SET_GPR_U32(ctx, 31, 0x2DBCD4u);
    ctx->pc = 0x2DBCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBCCCu;
            // 0x2dbcd0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBCD4u; }
        if (ctx->pc != 0x2DBCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBCD4u; }
        if (ctx->pc != 0x2DBCD4u) { return; }
    }
    ctx->pc = 0x2DBCD4u;
label_2dbcd4:
    // 0x2dbcd4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2dbcd8:
    if (ctx->pc == 0x2DBCD8u) {
        ctx->pc = 0x2DBCDCu;
        goto label_2dbcdc;
    }
    ctx->pc = 0x2DBCD4u;
    {
        const bool branch_taken_0x2dbcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbcd4) {
            ctx->pc = 0x2DBCE0u;
            goto label_2dbce0;
        }
    }
    ctx->pc = 0x2DBCDCu;
label_2dbcdc:
    // 0x2dbcdc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2dbcdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dbce0:
    // 0x2dbce0: 0x6600011  bltz        $s3, . + 4 + (0x11 << 2)
label_2dbce4:
    if (ctx->pc == 0x2DBCE4u) {
        ctx->pc = 0x2DBCE4u;
            // 0x2dbce4: 0x2a610002  slti        $at, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x2DBCE8u;
        goto label_2dbce8;
    }
    ctx->pc = 0x2DBCE0u;
    {
        const bool branch_taken_0x2dbce0 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x2DBCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBCE0u;
            // 0x2dbce4: 0x2a610002  slti        $at, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbce0) {
            ctx->pc = 0x2DBD28u;
            goto label_2dbd28;
        }
    }
    ctx->pc = 0x2DBCE8u;
label_2dbce8:
    // 0x2dbce8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_2dbcec:
    if (ctx->pc == 0x2DBCECu) {
        ctx->pc = 0x2DBCECu;
            // 0x2dbcec: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->pc = 0x2DBCF0u;
        goto label_2dbcf0;
    }
    ctx->pc = 0x2DBCE8u;
    {
        const bool branch_taken_0x2dbce8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBCE8u;
            // 0x2dbcec: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbce8) {
            ctx->pc = 0x2DBD28u;
            goto label_2dbd28;
        }
    }
    ctx->pc = 0x2DBCF0u;
label_2dbcf0:
    // 0x2dbcf0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dbcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2dbcf4:
    // 0x2dbcf4: 0x34218420  ori         $at, $at, 0x8420
    ctx->pc = 0x2dbcf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33824);
label_2dbcf8:
    // 0x2dbcf8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2dbcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dbcfc:
    // 0x2dbcfc: 0xc0599ec  jal         func_1667B0
label_2dbd00:
    if (ctx->pc == 0x2DBD00u) {
        ctx->pc = 0x2DBD00u;
            // 0x2dbd00: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DBD04u;
        goto label_2dbd04;
    }
    ctx->pc = 0x2DBCFCu;
    SET_GPR_U32(ctx, 31, 0x2DBD04u);
    ctx->pc = 0x2DBD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBCFCu;
            // 0x2dbd00: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1667B0u;
    if (runtime->hasFunction(0x1667B0u)) {
        auto targetFn = runtime->lookupFunction(0x1667B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD04u; }
        if (ctx->pc != 0x2DBD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColor__9CMapPartsFiPf_0x1667b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD04u; }
        if (ctx->pc != 0x2DBD04u) { return; }
    }
    ctx->pc = 0x2DBD04u;
label_2dbd04:
    // 0x2dbd04: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2dbd04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2dbd08:
    // 0x2dbd08: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2dbd08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_2dbd0c:
    // 0x2dbd0c: 0x34218420  ori         $at, $at, 0x8420
    ctx->pc = 0x2dbd0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33824);
label_2dbd10:
    // 0x2dbd10: 0x24a588e0  addiu       $a1, $a1, -0x7720
    ctx->pc = 0x2dbd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936800));
label_2dbd14:
    // 0x2dbd14: 0xc06d7e4  jal         func_1B5F90
label_2dbd18:
    if (ctx->pc == 0x2DBD18u) {
        ctx->pc = 0x2DBD18u;
            // 0x2dbd18: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DBD1Cu;
        goto label_2dbd1c;
    }
    ctx->pc = 0x2DBD14u;
    SET_GPR_U32(ctx, 31, 0x2DBD1Cu);
    ctx->pc = 0x2DBD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBD14u;
            // 0x2dbd18: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5F90u;
    if (runtime->hasFunction(0x1B5F90u)) {
        auto targetFn = runtime->lookupFunction(0x1B5F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD1Cu; }
        if (ctx->pc != 0x2DBD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditPartsCmpColor__FPfPf_0x1b5f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD1Cu; }
        if (ctx->pc != 0x2DBD1Cu) { return; }
    }
    ctx->pc = 0x2DBD1Cu;
label_2dbd1c:
    // 0x2dbd1c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2dbd20:
    if (ctx->pc == 0x2DBD20u) {
        ctx->pc = 0x2DBD24u;
        goto label_2dbd24;
    }
    ctx->pc = 0x2DBD1Cu;
    {
        const bool branch_taken_0x2dbd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbd1c) {
            ctx->pc = 0x2DBD28u;
            goto label_2dbd28;
        }
    }
    ctx->pc = 0x2DBD24u;
label_2dbd24:
    // 0x2dbd24: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2dbd24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dbd28:
    // 0x2dbd28: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_2dbd2c:
    if (ctx->pc == 0x2DBD2Cu) {
        ctx->pc = 0x2DBD2Cu;
            // 0x2dbd2c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBD30u;
        goto label_2dbd30;
    }
    ctx->pc = 0x2DBD28u;
    {
        const bool branch_taken_0x2dbd28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBD28u;
            // 0x2dbd2c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbd28) {
            ctx->pc = 0x2DBD70u;
            goto label_2dbd70;
        }
    }
    ctx->pc = 0x2DBD30u;
label_2dbd30:
    // 0x2dbd30: 0x1a0000ed  blez        $s0, . + 4 + (0xED << 2)
label_2dbd34:
    if (ctx->pc == 0x2DBD34u) {
        ctx->pc = 0x2DBD34u;
            // 0x2dbd34: 0x3c0701f6  lui         $a3, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x2DBD38u;
        goto label_2dbd38;
    }
    ctx->pc = 0x2DBD30u;
    {
        const bool branch_taken_0x2dbd30 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2DBD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBD30u;
            // 0x2dbd34: 0x3c0701f6  lui         $a3, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbd30) {
            ctx->pc = 0x2DC0E8u;
            goto label_2dc0e8;
        }
    }
    ctx->pc = 0x2DBD38u;
label_2dbd38:
    // 0x2dbd38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dbd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dbd3c:
    // 0x2dbd3c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2dbd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2dbd40:
    // 0x2dbd40: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2dbd40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dbd44:
    // 0x2dbd44: 0xc0b68b8  jal         func_2DA2E0
label_2dbd48:
    if (ctx->pc == 0x2DBD48u) {
        ctx->pc = 0x2DBD48u;
            // 0x2dbd48: 0x24e788e0  addiu       $a3, $a3, -0x7720 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936800));
        ctx->pc = 0x2DBD4Cu;
        goto label_2dbd4c;
    }
    ctx->pc = 0x2DBD44u;
    SET_GPR_U32(ctx, 31, 0x2DBD4Cu);
    ctx->pc = 0x2DBD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBD44u;
            // 0x2dbd48: 0x24e788e0  addiu       $a3, $a3, -0x7720 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2E0u;
    if (runtime->hasFunction(0x2DA2E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DA2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD4Cu; }
        if (ctx->pc != 0x2DBD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PaintEditParts__FP8CEditMapiiPf_0x2da2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD4Cu; }
        if (ctx->pc != 0x2DBD4Cu) { return; }
    }
    ctx->pc = 0x2DBD4Cu;
label_2dbd4c:
    // 0x2dbd4c: 0xc0b6214  jal         func_2D8850
label_2dbd50:
    if (ctx->pc == 0x2DBD50u) {
        ctx->pc = 0x2DBD54u;
        goto label_2dbd54;
    }
    ctx->pc = 0x2DBD4Cu;
    SET_GPR_U32(ctx, 31, 0x2DBD54u);
    ctx->pc = 0x2D8850u;
    if (runtime->hasFunction(0x2D8850u)) {
        auto targetFn = runtime->lookupFunction(0x2D8850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD54u; }
        if (ctx->pc != 0x2DBD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserData__Fv_0x2d8850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD54u; }
        if (ctx->pc != 0x2DBD54u) { return; }
    }
    ctx->pc = 0x2DBD54u;
label_2dbd54:
    // 0x2dbd54: 0x8f859e38  lw          $a1, -0x61C8($gp)
    ctx->pc = 0x2dbd54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942264)));
label_2dbd58:
    // 0x2dbd58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dbd5c:
    // 0x2dbd5c: 0xc067a30  jal         func_19E8C0
label_2dbd60:
    if (ctx->pc == 0x2DBD60u) {
        ctx->pc = 0x2DBD60u;
            // 0x2dbd60: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBD64u;
        goto label_2dbd64;
    }
    ctx->pc = 0x2DBD5Cu;
    SET_GPR_U32(ctx, 31, 0x2DBD64u);
    ctx->pc = 0x2DBD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBD5Cu;
            // 0x2dbd60: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E8C0u;
    if (runtime->hasFunction(0x19E8C0u)) {
        auto targetFn = runtime->lookupFunction(0x19E8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD64u; }
        if (ctx->pc != 0x2DBD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteItem__16CUserDataManagerFii_0x19e8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD64u; }
        if (ctx->pc != 0x2DBD64u) { return; }
    }
    ctx->pc = 0x2DBD64u;
label_2dbd64:
    // 0x2dbd64: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2dbd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2dbd68:
    // 0x2dbd68: 0x100000df  b           . + 4 + (0xDF << 2)
label_2dbd6c:
    if (ctx->pc == 0x2DBD6Cu) {
        ctx->pc = 0x2DBD6Cu;
            // 0x2dbd6c: 0xaf829e3c  sw          $v0, -0x61C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942268), GPR_U32(ctx, 2));
        ctx->pc = 0x2DBD70u;
        goto label_2dbd70;
    }
    ctx->pc = 0x2DBD68u;
    {
        const bool branch_taken_0x2dbd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBD68u;
            // 0x2dbd6c: 0xaf829e3c  sw          $v0, -0x61C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbd68) {
            ctx->pc = 0x2DC0E8u;
            goto label_2dc0e8;
        }
    }
    ctx->pc = 0x2DBD70u;
label_2dbd70:
    // 0x2dbd70: 0x240503fc  addiu       $a1, $zero, 0x3FC
    ctx->pc = 0x2dbd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1020));
label_2dbd74:
    // 0x2dbd74: 0xc0b6278  jal         func_2D89E0
label_2dbd78:
    if (ctx->pc == 0x2DBD78u) {
        ctx->pc = 0x2DBD78u;
            // 0x2dbd78: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x2DBD7Cu;
        goto label_2dbd7c;
    }
    ctx->pc = 0x2DBD74u;
    SET_GPR_U32(ctx, 31, 0x2DBD7Cu);
    ctx->pc = 0x2DBD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBD74u;
            // 0x2dbd78: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D89E0u;
    if (runtime->hasFunction(0x2D89E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D89E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD7Cu; }
        if (ctx->pc != 0x2DBD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        OpenSystemMes__FP6CSceneii_0x2d89e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD7Cu; }
        if (ctx->pc != 0x2DBD7Cu) { return; }
    }
    ctx->pc = 0x2DBD7Cu;
label_2dbd7c:
    // 0x2dbd7c: 0x100000da  b           . + 4 + (0xDA << 2)
label_2dbd80:
    if (ctx->pc == 0x2DBD80u) {
        ctx->pc = 0x2DBD84u;
        goto label_2dbd84;
    }
    ctx->pc = 0x2DBD7Cu;
    {
        const bool branch_taken_0x2dbd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbd7c) {
            ctx->pc = 0x2DC0E8u;
            goto label_2dc0e8;
        }
    }
    ctx->pc = 0x2DBD84u;
label_2dbd84:
    // 0x2dbd84: 0x8f839e0c  lw          $v1, -0x61F4($gp)
    ctx->pc = 0x2dbd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942220)));
label_2dbd88:
    // 0x2dbd88: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2dbd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2dbd8c:
    // 0x2dbd8c: 0x1062ff1e  beq         $v1, $v0, . + 4 + (-0xE2 << 2)
label_2dbd90:
    if (ctx->pc == 0x2DBD90u) {
        ctx->pc = 0x2DBD94u;
        goto label_2dbd94;
    }
    ctx->pc = 0x2DBD8Cu;
    {
        const bool branch_taken_0x2dbd8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2dbd8c) {
            ctx->pc = 0x2DBA08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dba08;
        }
    }
    ctx->pc = 0x2DBD94u;
label_2dbd94:
    // 0x2dbd94: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2dbd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2dbd98:
    // 0x2dbd98: 0x1062ff1b  beq         $v1, $v0, . + 4 + (-0xE5 << 2)
label_2dbd9c:
    if (ctx->pc == 0x2DBD9Cu) {
        ctx->pc = 0x2DBDA0u;
        goto label_2dbda0;
    }
    ctx->pc = 0x2DBD98u;
    {
        const bool branch_taken_0x2dbd98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2dbd98) {
            ctx->pc = 0x2DBA08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dba08;
        }
    }
    ctx->pc = 0x2DBDA0u;
label_2dbda0:
    // 0x2dbda0: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_2dbda4:
    if (ctx->pc == 0x2DBDA4u) {
        ctx->pc = 0x2DBDA8u;
        goto label_2dbda8;
    }
    ctx->pc = 0x2DBDA0u;
    {
        const bool branch_taken_0x2dbda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbda0) {
            ctx->pc = 0x2DC0E8u;
            goto label_2dc0e8;
        }
    }
    ctx->pc = 0x2DBDA8u;
label_2dbda8:
    // 0x2dbda8: 0x8f949e18  lw          $s4, -0x61E8($gp)
    ctx->pc = 0x2dbda8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942232)));
label_2dbdac:
    // 0x2dbdac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dbdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dbdb0:
    // 0x2dbdb0: 0x1682003d  bne         $s4, $v0, . + 4 + (0x3D << 2)
label_2dbdb4:
    if (ctx->pc == 0x2DBDB4u) {
        ctx->pc = 0x2DBDB4u;
            // 0x2dbdb4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2DBDB8u;
        goto label_2dbdb8;
    }
    ctx->pc = 0x2DBDB0u;
    {
        const bool branch_taken_0x2dbdb0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DBDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBDB0u;
            // 0x2dbdb4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbdb0) {
            ctx->pc = 0x2DBEA8u;
            goto label_2dbea8;
        }
    }
    ctx->pc = 0x2DBDB8u;
label_2dbdb8:
    // 0x2dbdb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dbdb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dbdbc:
    // 0x2dbdbc: 0xc0b6210  jal         func_2D8840
label_2dbdc0:
    if (ctx->pc == 0x2DBDC0u) {
        ctx->pc = 0x2DBDC0u;
            // 0x2dbdc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBDC4u;
        goto label_2dbdc4;
    }
    ctx->pc = 0x2DBDBCu;
    SET_GPR_U32(ctx, 31, 0x2DBDC4u);
    ctx->pc = 0x2DBDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBDBCu;
            // 0x2dbdc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8840u;
    if (runtime->hasFunction(0x2D8840u)) {
        auto targetFn = runtime->lookupFunction(0x2D8840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBDC4u; }
        if (ctx->pc != 0x2DBDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHelpMes__Fiii_0x2d8840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBDC4u; }
        if (ctx->pc != 0x2DBDC4u) { return; }
    }
    ctx->pc = 0x2DBDC4u;
label_2dbdc4:
    // 0x2dbdc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dbdc8:
    // 0x2dbdc8: 0xc0bb538  jal         func_2ED4E0
label_2dbdcc:
    if (ctx->pc == 0x2DBDCCu) {
        ctx->pc = 0x2DBDCCu;
            // 0x2dbdcc: 0x24050066  addiu       $a1, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->pc = 0x2DBDD0u;
        goto label_2dbdd0;
    }
    ctx->pc = 0x2DBDC8u;
    SET_GPR_U32(ctx, 31, 0x2DBDD0u);
    ctx->pc = 0x2DBDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBDC8u;
            // 0x2dbdcc: 0x24050066  addiu       $a1, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBDD0u; }
        if (ctx->pc != 0x2DBDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBDD0u; }
        if (ctx->pc != 0x2DBDD0u) { return; }
    }
    ctx->pc = 0x2DBDD0u;
label_2dbdd0:
    // 0x2dbdd0: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_2dbdd4:
    if (ctx->pc == 0x2DBDD4u) {
        ctx->pc = 0x2DBDD4u;
            // 0x2dbdd4: 0x3c0201f6  lui         $v0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x2DBDD8u;
        goto label_2dbdd8;
    }
    ctx->pc = 0x2DBDD0u;
    {
        const bool branch_taken_0x2dbdd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBDD0u;
            // 0x2dbdd4: 0x3c0201f6  lui         $v0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbdd0) {
            ctx->pc = 0x2DBEA8u;
            goto label_2dbea8;
        }
    }
    ctx->pc = 0x2DBDD8u;
label_2dbdd8:
    // 0x2dbdd8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2dbdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2dbddc:
    // 0x2dbddc: 0x244288f0  addiu       $v0, $v0, -0x7710
    ctx->pc = 0x2dbddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936816));
label_2dbde0:
    // 0x2dbde0: 0x34218430  ori         $at, $at, 0x8430
    ctx->pc = 0x2dbde0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33840);
label_2dbde4:
    // 0x2dbde4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2dbde4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2dbde8:
    // 0x2dbde8: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x2dbde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2dbdec:
    // 0x2dbdec: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x2dbdecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
label_2dbdf0:
    // 0x2dbdf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dbdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dbdf4:
    // 0x2dbdf4: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x2dbdf4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2dbdf8:
    // 0x2dbdf8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2dbdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2dbdfc:
    // 0x2dbdfc: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2dbdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_2dbe00:
    // 0x2dbe00: 0xc06c99c  jal         func_1B2670
label_2dbe04:
    if (ctx->pc == 0x2DBE04u) {
        ctx->pc = 0x2DBE04u;
            // 0x2dbe04: 0xac22843c  sw          $v0, -0x7BC4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294935612), GPR_U32(ctx, 2));
        ctx->pc = 0x2DBE08u;
        goto label_2dbe08;
    }
    ctx->pc = 0x2DBE00u;
    SET_GPR_U32(ctx, 31, 0x2DBE08u);
    ctx->pc = 0x2DBE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBE00u;
            // 0x2dbe04: 0xac22843c  sw          $v0, -0x7BC4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294935612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2670u;
    if (runtime->hasFunction(0x1B2670u)) {
        auto targetFn = runtime->lookupFunction(0x1B2670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE08u; }
        if (ctx->pc != 0x2DBE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFPf_0x1b2670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE08u; }
        if (ctx->pc != 0x2DBE08u) { return; }
    }
    ctx->pc = 0x2DBE08u;
label_2dbe08:
    // 0x2dbe08: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2dbe08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dbe0c:
    // 0x2dbe0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dbe0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dbe10:
    // 0x2dbe10: 0xc06c310  jal         func_1B0C40
label_2dbe14:
    if (ctx->pc == 0x2DBE14u) {
        ctx->pc = 0x2DBE14u;
            // 0x2dbe14: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBE18u;
        goto label_2dbe18;
    }
    ctx->pc = 0x2DBE10u;
    SET_GPR_U32(ctx, 31, 0x2DBE18u);
    ctx->pc = 0x2DBE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBE10u;
            // 0x2dbe14: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE18u; }
        if (ctx->pc != 0x2DBE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE18u; }
        if (ctx->pc != 0x2DBE18u) { return; }
    }
    ctx->pc = 0x2DBE18u;
label_2dbe18:
    // 0x2dbe18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dbe18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dbe1c:
    // 0x2dbe1c: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
label_2dbe20:
    if (ctx->pc == 0x2DBE20u) {
        ctx->pc = 0x2DBE20u;
            // 0x2dbe20: 0xaf809e50  sw          $zero, -0x61B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942288), GPR_U32(ctx, 0));
        ctx->pc = 0x2DBE24u;
        goto label_2dbe24;
    }
    ctx->pc = 0x2DBE1Cu;
    {
        const bool branch_taken_0x2dbe1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBE1Cu;
            // 0x2dbe20: 0xaf809e50  sw          $zero, -0x61B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbe1c) {
            ctx->pc = 0x2DBEA8u;
            goto label_2dbea8;
        }
    }
    ctx->pc = 0x2DBE24u;
label_2dbe24:
    // 0x2dbe24: 0xc06d6a4  jal         func_1B5A90
label_2dbe28:
    if (ctx->pc == 0x2DBE28u) {
        ctx->pc = 0x2DBE28u;
            // 0x2dbe28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBE2Cu;
        goto label_2dbe2c;
    }
    ctx->pc = 0x2DBE24u;
    SET_GPR_U32(ctx, 31, 0x2DBE2Cu);
    ctx->pc = 0x2DBE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBE24u;
            // 0x2dbe28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5A90u;
    if (runtime->hasFunction(0x1B5A90u)) {
        auto targetFn = runtime->lookupFunction(0x1B5A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE2Cu; }
        if (ctx->pc != 0x2DBE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsWallParts__10CEditPartsFv_0x1b5a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE2Cu; }
        if (ctx->pc != 0x2DBE2Cu) { return; }
    }
    ctx->pc = 0x2DBE2Cu;
label_2dbe2c:
    // 0x2dbe2c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_2dbe30:
    if (ctx->pc == 0x2DBE30u) {
        ctx->pc = 0x2DBE34u;
        goto label_2dbe34;
    }
    ctx->pc = 0x2DBE2Cu;
    {
        const bool branch_taken_0x2dbe2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbe2c) {
            ctx->pc = 0x2DBEA8u;
            goto label_2dbea8;
        }
    }
    ctx->pc = 0x2DBE34u;
label_2dbe34:
    // 0x2dbe34: 0x8f859e50  lw          $a1, -0x61B0($gp)
    ctx->pc = 0x2dbe34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942288)));
label_2dbe38:
    // 0x2dbe38: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2dbe38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2dbe3c:
    // 0x2dbe3c: 0x34218440  ori         $at, $at, 0x8440
    ctx->pc = 0x2dbe3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33856);
label_2dbe40:
    // 0x2dbe40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dbe40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dbe44:
    // 0x2dbe44: 0xc06d6f4  jal         func_1B5BD0
label_2dbe48:
    if (ctx->pc == 0x2DBE48u) {
        ctx->pc = 0x2DBE48u;
            // 0x2dbe48: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DBE4Cu;
        goto label_2dbe4c;
    }
    ctx->pc = 0x2DBE44u;
    SET_GPR_U32(ctx, 31, 0x2DBE4Cu);
    ctx->pc = 0x2DBE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBE44u;
            // 0x2dbe48: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5BD0u;
    if (runtime->hasFunction(0x1B5BD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE4Cu; }
        if (ctx->pc != 0x2DBE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWallPlane__10CEditPartsFiPQ210CEditParts8WallInfo_0x1b5bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE4Cu; }
        if (ctx->pc != 0x2DBE4Cu) { return; }
    }
    ctx->pc = 0x2DBE4Cu;
label_2dbe4c:
    // 0x2dbe4c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2dbe50:
    if (ctx->pc == 0x2DBE50u) {
        ctx->pc = 0x2DBE50u;
            // 0x2dbe50: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->pc = 0x2DBE54u;
        goto label_2dbe54;
    }
    ctx->pc = 0x2DBE4Cu;
    {
        const bool branch_taken_0x2dbe4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBE4Cu;
            // 0x2dbe50: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbe4c) {
            ctx->pc = 0x2DBEA8u;
            goto label_2dbea8;
        }
    }
    ctx->pc = 0x2DBE54u;
label_2dbe54:
    // 0x2dbe54: 0x34218440  ori         $at, $at, 0x8440
    ctx->pc = 0x2dbe54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33856);
label_2dbe58:
    // 0x2dbe58: 0xc0b6638  jal         func_2D98E0
label_2dbe5c:
    if (ctx->pc == 0x2DBE5Cu) {
        ctx->pc = 0x2DBE5Cu;
            // 0x2dbe5c: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DBE60u;
        goto label_2dbe60;
    }
    ctx->pc = 0x2DBE58u;
    SET_GPR_U32(ctx, 31, 0x2DBE60u);
    ctx->pc = 0x2DBE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBE58u;
            // 0x2dbe5c: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D98E0u;
    if (runtime->hasFunction(0x2D98E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D98E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE60u; }
        if (ctx->pc != 0x2DBE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartEditPutWall__FPQ210CEditParts8WallInfo_0x2d98e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE60u; }
        if (ctx->pc != 0x2DBE60u) { return; }
    }
    ctx->pc = 0x2DBE60u;
label_2dbe60:
    // 0x2dbe60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dbe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dbe64:
    // 0x2dbe64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dbe64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dbe68:
    // 0x2dbe68: 0xaf829e1c  sw          $v0, -0x61E4($gp)
    ctx->pc = 0x2dbe68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942236), GPR_U32(ctx, 2));
label_2dbe6c:
    // 0x2dbe6c: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x2dbe6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2dbe70:
    // 0x2dbe70: 0xaf959e4c  sw          $s5, -0x61B4($gp)
    ctx->pc = 0x2dbe70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942284), GPR_U32(ctx, 21));
label_2dbe74:
    // 0x2dbe74: 0xc04c678  jal         func_1319E0
label_2dbe78:
    if (ctx->pc == 0x2DBE78u) {
        ctx->pc = 0x2DBE78u;
            // 0x2dbe78: 0xaf809e50  sw          $zero, -0x61B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942288), GPR_U32(ctx, 0));
        ctx->pc = 0x2DBE7Cu;
        goto label_2dbe7c;
    }
    ctx->pc = 0x2DBE74u;
    SET_GPR_U32(ctx, 31, 0x2DBE7Cu);
    ctx->pc = 0x2DBE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBE74u;
            // 0x2dbe78: 0xaf809e50  sw          $zero, -0x61B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319E0u;
    if (runtime->hasFunction(0x1319E0u)) {
        auto targetFn = runtime->lookupFunction(0x1319E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE7Cu; }
        if (ctx->pc != 0x2DBE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngle__15mgCCameraFollowFv_0x1319e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE7Cu; }
        if (ctx->pc != 0x2DBE7Cu) { return; }
    }
    ctx->pc = 0x2DBE7Cu;
label_2dbe7c:
    // 0x2dbe7c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2dbe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_2dbe80:
    // 0x2dbe80: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2dbe80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2dbe84:
    // 0x2dbe84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dbe84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dbe88:
    // 0x2dbe88: 0xc04c374  jal         func_130DD0
label_2dbe8c:
    if (ctx->pc == 0x2DBE8Cu) {
        ctx->pc = 0x2DBE8Cu;
            // 0x2dbe8c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2DBE90u;
        goto label_2dbe90;
    }
    ctx->pc = 0x2DBE88u;
    SET_GPR_U32(ctx, 31, 0x2DBE90u);
    ctx->pc = 0x2DBE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBE88u;
            // 0x2dbe8c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE90u; }
        if (ctx->pc != 0x2DBE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE90u; }
        if (ctx->pc != 0x2DBE90u) { return; }
    }
    ctx->pc = 0x2DBE90u;
label_2dbe90:
    // 0x2dbe90: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dbe90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dbe94:
    // 0x2dbe94: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2dbe94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_2dbe98:
    // 0x2dbe98: 0xe4208984  swc1        $f0, -0x767C($at)
    ctx->pc = 0x2dbe98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936964), bits); }
label_2dbe9c:
    // 0x2dbe9c: 0xaf829e48  sw          $v0, -0x61B8($gp)
    ctx->pc = 0x2dbe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942280), GPR_U32(ctx, 2));
label_2dbea0:
    // 0x2dbea0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dbea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dbea4:
    // 0x2dbea4: 0xac208980  sw          $zero, -0x7680($at)
    ctx->pc = 0x2dbea4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294936960), GPR_U32(ctx, 0));
label_2dbea8:
    // 0x2dbea8: 0x8f839e18  lw          $v1, -0x61E8($gp)
    ctx->pc = 0x2dbea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942232)));
label_2dbeac:
    // 0x2dbeac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2dbeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2dbeb0:
    // 0x2dbeb0: 0x1462008c  bne         $v1, $v0, . + 4 + (0x8C << 2)
label_2dbeb4:
    if (ctx->pc == 0x2DBEB4u) {
        ctx->pc = 0x2DBEB4u;
            // 0x2dbeb4: 0x3c0201f6  lui         $v0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x2DBEB8u;
        goto label_2dbeb8;
    }
    ctx->pc = 0x2DBEB0u;
    {
        const bool branch_taken_0x2dbeb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DBEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBEB0u;
            // 0x2dbeb4: 0x3c0201f6  lui         $v0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbeb0) {
            ctx->pc = 0x2DC0E4u;
            goto label_2dc0e4;
        }
    }
    ctx->pc = 0x2DBEB8u;
label_2dbeb8:
    // 0x2dbeb8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2dbeb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2dbebc:
    // 0x2dbebc: 0x24428990  addiu       $v0, $v0, -0x7670
    ctx->pc = 0x2dbebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936976));
label_2dbec0:
    // 0x2dbec0: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2dbec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_2dbec4:
    // 0x2dbec4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2dbec4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2dbec8:
    // 0x2dbec8: 0x34218480  ori         $at, $at, 0x8480
    ctx->pc = 0x2dbec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33920);
label_2dbecc:
    // 0x2dbecc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dbeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dbed0:
    // 0x2dbed0: 0x3a11021  addu        $v0, $sp, $at
    ctx->pc = 0x2dbed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2dbed4:
    // 0x2dbed4: 0xc06c2d0  jal         func_1B0B40
label_2dbed8:
    if (ctx->pc == 0x2DBED8u) {
        ctx->pc = 0x2DBED8u;
            // 0x2dbed8: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->pc = 0x2DBEDCu;
        goto label_2dbedc;
    }
    ctx->pc = 0x2DBED4u;
    SET_GPR_U32(ctx, 31, 0x2DBEDCu);
    ctx->pc = 0x2DBED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBED4u;
            // 0x2dbed8: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B40u;
    if (runtime->hasFunction(0x1B0B40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBEDCu; }
        if (ctx->pc != 0x2DBEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfo__8CEditMapFPc_0x1b0b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBEDCu; }
        if (ctx->pc != 0x2DBEDCu) { return; }
    }
    ctx->pc = 0x2DBEDCu;
label_2dbedc:
    // 0x2dbedc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2dbedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2dbee0:
    // 0x2dbee0: 0x8f879e50  lw          $a3, -0x61B0($gp)
    ctx->pc = 0x2dbee0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942288)));
label_2dbee4:
    // 0x2dbee4: 0x34218480  ori         $at, $at, 0x8480
    ctx->pc = 0x2dbee4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33920);
label_2dbee8:
    // 0x2dbee8: 0x8f889e4c  lw          $t0, -0x61B4($gp)
    ctx->pc = 0x2dbee8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942284)));
label_2dbeec:
    // 0x2dbeec: 0x3a13021  addu        $a2, $sp, $at
    ctx->pc = 0x2dbeecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2dbef0:
    // 0x2dbef0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dbef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dbef4:
    // 0x2dbef4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2dbef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2dbef8:
    // 0x2dbef8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2dbef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dbefc:
    // 0x2dbefc: 0x34218490  ori         $at, $at, 0x8490
    ctx->pc = 0x2dbefcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33936);
label_2dbf00:
    // 0x2dbf00: 0xc06cec0  jal         func_1B3B00
label_2dbf04:
    if (ctx->pc == 0x2DBF04u) {
        ctx->pc = 0x2DBF04u;
            // 0x2dbf04: 0x3a14821  addu        $t1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DBF08u;
        goto label_2dbf08;
    }
    ctx->pc = 0x2DBF00u;
    SET_GPR_U32(ctx, 31, 0x2DBF08u);
    ctx->pc = 0x2DBF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBF00u;
            // 0x2dbf04: 0x3a14821  addu        $t1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3B00u;
    if (runtime->hasFunction(0x1B3B00u)) {
        auto targetFn = runtime->lookupFunction(0x1B3B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBF08u; }
        if (ctx->pc != 0x2DBF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckWallEditParts__8CEditMapFP14CEditPartsInfoPfiiP13EP_PLACE_INFO_0x1b3b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBF08u; }
        if (ctx->pc != 0x2DBF08u) { return; }
    }
    ctx->pc = 0x2DBF08u;
label_2dbf08:
    // 0x2dbf08: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x2dbf08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
label_2dbf0c:
    // 0x2dbf0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dbf0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dbf10:
    // 0x2dbf10: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x2dbf10u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2dbf14:
    // 0x2dbf14: 0x8f829e1c  lw          $v0, -0x61E4($gp)
    ctx->pc = 0x2dbf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942236)));
label_2dbf18:
    // 0x2dbf18: 0xc4228480  lwc1        $f2, -0x7B80($at)
    ctx->pc = 0x2dbf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294935680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dbf1c:
    // 0x2dbf1c: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x2dbf1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
label_2dbf20:
    // 0x2dbf20: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x2dbf20u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2dbf24:
    // 0x2dbf24: 0xc4218484  lwc1        $f1, -0x7B7C($at)
    ctx->pc = 0x2dbf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294935684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dbf28:
    // 0x2dbf28: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2dbf28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2dbf2c:
    // 0x2dbf2c: 0x3421848c  ori         $at, $at, 0x848C
    ctx->pc = 0x2dbf2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33932);
label_2dbf30:
    // 0x2dbf30: 0x3a1a821  addu        $s5, $sp, $at
    ctx->pc = 0x2dbf30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2dbf34:
    // 0x2dbf34: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x2dbf34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
label_2dbf38:
    // 0x2dbf38: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x2dbf38u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2dbf3c:
    // 0x2dbf3c: 0xc4208488  lwc1        $f0, -0x7B78($at)
    ctx->pc = 0x2dbf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294935688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dbf40:
    // 0x2dbf40: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dbf40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dbf44:
    // 0x2dbf44: 0xe4228910  swc1        $f2, -0x76F0($at)
    ctx->pc = 0x2dbf44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936848), bits); }
label_2dbf48:
    // 0x2dbf48: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dbf48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dbf4c:
    // 0x2dbf4c: 0xe4218914  swc1        $f1, -0x76EC($at)
    ctx->pc = 0x2dbf4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936852), bits); }
label_2dbf50:
    // 0x2dbf50: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dbf50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dbf54:
    // 0x2dbf54: 0xe4208918  swc1        $f0, -0x76E8($at)
    ctx->pc = 0x2dbf54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936856), bits); }
label_2dbf58:
    // 0x2dbf58: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x2dbf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dbf5c:
    // 0x2dbf5c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dbf5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dbf60:
    // 0x2dbf60: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2dbf64:
    if (ctx->pc == 0x2DBF64u) {
        ctx->pc = 0x2DBF64u;
            // 0x2dbf64: 0xe4208934  swc1        $f0, -0x76CC($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936884), bits); }
        ctx->pc = 0x2DBF68u;
        goto label_2dbf68;
    }
    ctx->pc = 0x2DBF60u;
    {
        const bool branch_taken_0x2dbf60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBF60u;
            // 0x2dbf64: 0xe4208934  swc1        $f0, -0x76CC($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936884), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbf60) {
            ctx->pc = 0x2DBF7Cu;
            goto label_2dbf7c;
        }
    }
    ctx->pc = 0x2DBF68u;
label_2dbf68:
    // 0x2dbf68: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dbf68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dbf6c:
    // 0x2dbf6c: 0xc42c8934  lwc1        $f12, -0x76CC($at)
    ctx->pc = 0x2dbf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dbf70:
    // 0x2dbf70: 0xc04c670  jal         func_1319C0
label_2dbf74:
    if (ctx->pc == 0x2DBF74u) {
        ctx->pc = 0x2DBF74u;
            // 0x2dbf74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBF78u;
        goto label_2dbf78;
    }
    ctx->pc = 0x2DBF70u;
    SET_GPR_U32(ctx, 31, 0x2DBF78u);
    ctx->pc = 0x2DBF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBF70u;
            // 0x2dbf74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319C0u;
    if (runtime->hasFunction(0x1319C0u)) {
        auto targetFn = runtime->lookupFunction(0x1319C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBF78u; }
        if (ctx->pc != 0x2DBF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAngle__15mgCCameraFollowFf_0x1319c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBF78u; }
        if (ctx->pc != 0x2DBF78u) { return; }
    }
    ctx->pc = 0x2DBF78u;
label_2dbf78:
    // 0x2dbf78: 0xaf809e1c  sw          $zero, -0x61E4($gp)
    ctx->pc = 0x2dbf78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942236), GPR_U32(ctx, 0));
label_2dbf7c:
    // 0x2dbf7c: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_2dbf80:
    if (ctx->pc == 0x2DBF80u) {
        ctx->pc = 0x2DBF80u;
            // 0x2dbf80: 0xaf809e2c  sw          $zero, -0x61D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942252), GPR_U32(ctx, 0));
        ctx->pc = 0x2DBF84u;
        goto label_2dbf84;
    }
    ctx->pc = 0x2DBF7Cu;
    {
        const bool branch_taken_0x2dbf7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBF7Cu;
            // 0x2dbf80: 0xaf809e2c  sw          $zero, -0x61D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbf7c) {
            ctx->pc = 0x2DBFF0u;
            goto label_2dbff0;
        }
    }
    ctx->pc = 0x2DBF84u;
label_2dbf84:
    // 0x2dbf84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dbf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dbf88:
    // 0x2dbf88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbf88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dbf8c:
    // 0x2dbf8c: 0xaf829e2c  sw          $v0, -0x61D4($gp)
    ctx->pc = 0x2dbf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942252), GPR_U32(ctx, 2));
label_2dbf90:
    // 0x2dbf90: 0xc0bb538  jal         func_2ED4E0
label_2dbf94:
    if (ctx->pc == 0x2DBF94u) {
        ctx->pc = 0x2DBF94u;
            // 0x2dbf94: 0x24050066  addiu       $a1, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->pc = 0x2DBF98u;
        goto label_2dbf98;
    }
    ctx->pc = 0x2DBF90u;
    SET_GPR_U32(ctx, 31, 0x2DBF98u);
    ctx->pc = 0x2DBF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBF90u;
            // 0x2dbf94: 0x24050066  addiu       $a1, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBF98u; }
        if (ctx->pc != 0x2DBF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBF98u; }
        if (ctx->pc != 0x2DBF98u) { return; }
    }
    ctx->pc = 0x2DBF98u;
label_2dbf98:
    // 0x2dbf98: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_2dbf9c:
    if (ctx->pc == 0x2DBF9Cu) {
        ctx->pc = 0x2DBF9Cu;
            // 0x2dbf9c: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->pc = 0x2DBFA0u;
        goto label_2dbfa0;
    }
    ctx->pc = 0x2DBF98u;
    {
        const bool branch_taken_0x2dbf98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBF98u;
            // 0x2dbf9c: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbf98) {
            ctx->pc = 0x2DBFF0u;
            goto label_2dbff0;
        }
    }
    ctx->pc = 0x2DBFA0u;
label_2dbfa0:
    // 0x2dbfa0: 0x342184e0  ori         $at, $at, 0x84E0
    ctx->pc = 0x2dbfa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34016);
label_2dbfa4:
    // 0x2dbfa4: 0xc04bc8c  jal         func_12F230
label_2dbfa8:
    if (ctx->pc == 0x2DBFA8u) {
        ctx->pc = 0x2DBFA8u;
            // 0x2dbfa8: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DBFACu;
        goto label_2dbfac;
    }
    ctx->pc = 0x2DBFA4u;
    SET_GPR_U32(ctx, 31, 0x2DBFACu);
    ctx->pc = 0x2DBFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBFA4u;
            // 0x2dbfa8: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBFACu; }
        if (ctx->pc != 0x2DBFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBFACu; }
        if (ctx->pc != 0x2DBFACu) { return; }
    }
    ctx->pc = 0x2DBFACu;
label_2dbfac:
    // 0x2dbfac: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2dbfacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2dbfb0:
    // 0x2dbfb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dbfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dbfb4:
    // 0x2dbfb4: 0x34218480  ori         $at, $at, 0x8480
    ctx->pc = 0x2dbfb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33920);
label_2dbfb8:
    // 0x2dbfb8: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x2dbfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2dbfbc:
    // 0x2dbfbc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2dbfbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2dbfc0:
    // 0x2dbfc0: 0x342184e0  ori         $at, $at, 0x84E0
    ctx->pc = 0x2dbfc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34016);
label_2dbfc4:
    // 0x2dbfc4: 0x3a13021  addu        $a2, $sp, $at
    ctx->pc = 0x2dbfc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2dbfc8:
    // 0x2dbfc8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2dbfc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2dbfcc:
    // 0x2dbfcc: 0x34218490  ori         $at, $at, 0x8490
    ctx->pc = 0x2dbfccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33936);
label_2dbfd0:
    // 0x2dbfd0: 0x3a13821  addu        $a3, $sp, $at
    ctx->pc = 0x2dbfd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2dbfd4:
    // 0x2dbfd4: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x2dbfd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
label_2dbfd8:
    // 0x2dbfd8: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x2dbfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dbfdc:
    // 0x2dbfdc: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x2dbfdcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2dbfe0:
    // 0x2dbfe0: 0xc0b665c  jal         func_2D9970
label_2dbfe4:
    if (ctx->pc == 0x2DBFE4u) {
        ctx->pc = 0x2DBFE4u;
            // 0x2dbfe4: 0xe42084e4  swc1        $f0, -0x7B1C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294935780), bits); }
        ctx->pc = 0x2DBFE8u;
        goto label_2dbfe8;
    }
    ctx->pc = 0x2DBFE0u;
    SET_GPR_U32(ctx, 31, 0x2DBFE8u);
    ctx->pc = 0x2DBFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBFE0u;
            // 0x2dbfe4: 0xe42084e4  swc1        $f0, -0x7B1C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294935780), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9970u;
    if (runtime->hasFunction(0x2D9970u)) {
        auto targetFn = runtime->lookupFunction(0x2D9970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBFE8u; }
        if (ctx->pc != 0x2DBFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaceEditParts__FP8CEditMapPfPfP13EP_PLACE_INFO_0x2d9970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBFE8u; }
        if (ctx->pc != 0x2DBFE8u) { return; }
    }
    ctx->pc = 0x2DBFE8u;
label_2dbfe8:
    // 0x2dbfe8: 0xaf809e18  sw          $zero, -0x61E8($gp)
    ctx->pc = 0x2dbfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942232), GPR_U32(ctx, 0));
label_2dbfec:
    // 0x2dbfec: 0xaf809e2c  sw          $zero, -0x61D4($gp)
    ctx->pc = 0x2dbfecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942252), GPR_U32(ctx, 0));
label_2dbff0:
    // 0x2dbff0: 0x8f859e4c  lw          $a1, -0x61B4($gp)
    ctx->pc = 0x2dbff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942284)));
label_2dbff4:
    // 0x2dbff4: 0xc06c310  jal         func_1B0C40
label_2dbff8:
    if (ctx->pc == 0x2DBFF8u) {
        ctx->pc = 0x2DBFF8u;
            // 0x2dbff8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBFFCu;
        goto label_2dbffc;
    }
    ctx->pc = 0x2DBFF4u;
    SET_GPR_U32(ctx, 31, 0x2DBFFCu);
    ctx->pc = 0x2DBFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBFF4u;
            // 0x2dbff8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBFFCu; }
        if (ctx->pc != 0x2DBFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBFFCu; }
        if (ctx->pc != 0x2DBFFCu) { return; }
    }
    ctx->pc = 0x2DBFFCu;
label_2dbffc:
    // 0x2dbffc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dbffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc000:
    // 0x2dc000: 0x12200038  beqz        $s1, . + 4 + (0x38 << 2)
label_2dc004:
    if (ctx->pc == 0x2DC004u) {
        ctx->pc = 0x2DC004u;
            // 0x2dc004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC008u;
        goto label_2dc008;
    }
    ctx->pc = 0x2DC000u;
    {
        const bool branch_taken_0x2dc000 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC000u;
            // 0x2dc004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc000) {
            ctx->pc = 0x2DC0E4u;
            goto label_2dc0e4;
        }
    }
    ctx->pc = 0x2DC008u;
label_2dc008:
    // 0x2dc008: 0xc06d770  jal         func_1B5DC0
label_2dc00c:
    if (ctx->pc == 0x2DC00Cu) {
        ctx->pc = 0x2DC010u;
        goto label_2dc010;
    }
    ctx->pc = 0x2DC008u;
    SET_GPR_U32(ctx, 31, 0x2DC010u);
    ctx->pc = 0x1B5DC0u;
    if (runtime->hasFunction(0x1B5DC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC010u; }
        if (ctx->pc != 0x2DC010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWallGroupNum__10CEditPartsFv_0x1b5dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC010u; }
        if (ctx->pc != 0x2DC010u) { return; }
    }
    ctx->pc = 0x2DC010u;
label_2dc010:
    // 0x2dc010: 0x18400034  blez        $v0, . + 4 + (0x34 << 2)
label_2dc014:
    if (ctx->pc == 0x2DC014u) {
        ctx->pc = 0x2DC014u;
            // 0x2dc014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC018u;
        goto label_2dc018;
    }
    ctx->pc = 0x2DC010u;
    {
        const bool branch_taken_0x2dc010 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2DC014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC010u;
            // 0x2dc014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc010) {
            ctx->pc = 0x2DC0E4u;
            goto label_2dc0e4;
        }
    }
    ctx->pc = 0x2DC018u;
label_2dc018:
    // 0x2dc018: 0xc06d770  jal         func_1B5DC0
label_2dc01c:
    if (ctx->pc == 0x2DC01Cu) {
        ctx->pc = 0x2DC020u;
        goto label_2dc020;
    }
    ctx->pc = 0x2DC018u;
    SET_GPR_U32(ctx, 31, 0x2DC020u);
    ctx->pc = 0x1B5DC0u;
    if (runtime->hasFunction(0x1B5DC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC020u; }
        if (ctx->pc != 0x2DC020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWallGroupNum__10CEditPartsFv_0x1b5dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC020u; }
        if (ctx->pc != 0x2DC020u) { return; }
    }
    ctx->pc = 0x2DC020u;
label_2dc020:
    // 0x2dc020: 0xc0b65c8  jal         func_2D9720
label_2dc024:
    if (ctx->pc == 0x2DC024u) {
        ctx->pc = 0x2DC024u;
            // 0x2dc024: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC028u;
        goto label_2dc028;
    }
    ctx->pc = 0x2DC020u;
    SET_GPR_U32(ctx, 31, 0x2DC028u);
    ctx->pc = 0x2DC024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC020u;
            // 0x2dc024: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9720u;
    if (runtime->hasFunction(0x2D9720u)) {
        auto targetFn = runtime->lookupFunction(0x2D9720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC028u; }
        if (ctx->pc != 0x2DC028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UndoEnable__Fv_0x2d9720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC028u; }
        if (ctx->pc != 0x2DC028u) { return; }
    }
    ctx->pc = 0x2DC028u;
label_2dc028:
    // 0x2dc028: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2dc028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc02c:
    // 0x2dc02c: 0xc0b6210  jal         func_2D8840
label_2dc030:
    if (ctx->pc == 0x2DC030u) {
        ctx->pc = 0x2DC030u;
            // 0x2dc030: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DC034u;
        goto label_2dc034;
    }
    ctx->pc = 0x2DC02Cu;
    SET_GPR_U32(ctx, 31, 0x2DC034u);
    ctx->pc = 0x2DC030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC02Cu;
            // 0x2dc030: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8840u;
    if (runtime->hasFunction(0x2D8840u)) {
        auto targetFn = runtime->lookupFunction(0x2D8840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC034u; }
        if (ctx->pc != 0x2DC034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHelpMes__Fiii_0x2d8840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC034u; }
        if (ctx->pc != 0x2DC034u) { return; }
    }
    ctx->pc = 0x2DC034u;
label_2dc034:
    // 0x2dc034: 0x8f929e50  lw          $s2, -0x61B0($gp)
    ctx->pc = 0x2dc034u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942288)));
label_2dc038:
    // 0x2dc038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dc03c:
    // 0x2dc03c: 0xc0bb538  jal         func_2ED4E0
label_2dc040:
    if (ctx->pc == 0x2DC040u) {
        ctx->pc = 0x2DC040u;
            // 0x2dc040: 0x24050069  addiu       $a1, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->pc = 0x2DC044u;
        goto label_2dc044;
    }
    ctx->pc = 0x2DC03Cu;
    SET_GPR_U32(ctx, 31, 0x2DC044u);
    ctx->pc = 0x2DC040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC03Cu;
            // 0x2dc040: 0x24050069  addiu       $a1, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC044u; }
        if (ctx->pc != 0x2DC044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC044u; }
        if (ctx->pc != 0x2DC044u) { return; }
    }
    ctx->pc = 0x2DC044u;
label_2dc044:
    // 0x2dc044: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2dc048:
    if (ctx->pc == 0x2DC048u) {
        ctx->pc = 0x2DC048u;
            // 0x2dc048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC04Cu;
        goto label_2dc04c;
    }
    ctx->pc = 0x2DC044u;
    {
        const bool branch_taken_0x2dc044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC044u;
            // 0x2dc048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc044) {
            ctx->pc = 0x2DC058u;
            goto label_2dc058;
        }
    }
    ctx->pc = 0x2DC04Cu;
label_2dc04c:
    // 0x2dc04c: 0x8f829e50  lw          $v0, -0x61B0($gp)
    ctx->pc = 0x2dc04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942288)));
label_2dc050:
    // 0x2dc050: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dc050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2dc054:
    // 0x2dc054: 0xaf829e50  sw          $v0, -0x61B0($gp)
    ctx->pc = 0x2dc054u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942288), GPR_U32(ctx, 2));
label_2dc058:
    // 0x2dc058: 0xc0bb538  jal         func_2ED4E0
label_2dc05c:
    if (ctx->pc == 0x2DC05Cu) {
        ctx->pc = 0x2DC05Cu;
            // 0x2dc05c: 0x2405006a  addiu       $a1, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->pc = 0x2DC060u;
        goto label_2dc060;
    }
    ctx->pc = 0x2DC058u;
    SET_GPR_U32(ctx, 31, 0x2DC060u);
    ctx->pc = 0x2DC05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC058u;
            // 0x2dc05c: 0x2405006a  addiu       $a1, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC060u; }
        if (ctx->pc != 0x2DC060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC060u; }
        if (ctx->pc != 0x2DC060u) { return; }
    }
    ctx->pc = 0x2DC060u;
label_2dc060:
    // 0x2dc060: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2dc064:
    if (ctx->pc == 0x2DC064u) {
        ctx->pc = 0x2DC068u;
        goto label_2dc068;
    }
    ctx->pc = 0x2DC060u;
    {
        const bool branch_taken_0x2dc060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc060) {
            ctx->pc = 0x2DC074u;
            goto label_2dc074;
        }
    }
    ctx->pc = 0x2DC068u;
label_2dc068:
    // 0x2dc068: 0x8f829e50  lw          $v0, -0x61B0($gp)
    ctx->pc = 0x2dc068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942288)));
label_2dc06c:
    // 0x2dc06c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2dc06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2dc070:
    // 0x2dc070: 0xaf829e50  sw          $v0, -0x61B0($gp)
    ctx->pc = 0x2dc070u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942288), GPR_U32(ctx, 2));
label_2dc074:
    // 0x2dc074: 0x8f829e50  lw          $v0, -0x61B0($gp)
    ctx->pc = 0x2dc074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942288)));
label_2dc078:
    // 0x2dc078: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
label_2dc07c:
    if (ctx->pc == 0x2DC07Cu) {
        ctx->pc = 0x2DC07Cu;
            // 0x2dc07c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC080u;
        goto label_2dc080;
    }
    ctx->pc = 0x2DC078u;
    {
        const bool branch_taken_0x2dc078 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2DC07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC078u;
            // 0x2dc07c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc078) {
            ctx->pc = 0x2DC090u;
            goto label_2dc090;
        }
    }
    ctx->pc = 0x2DC080u;
label_2dc080:
    // 0x2dc080: 0xc06d770  jal         func_1B5DC0
label_2dc084:
    if (ctx->pc == 0x2DC084u) {
        ctx->pc = 0x2DC088u;
        goto label_2dc088;
    }
    ctx->pc = 0x2DC080u;
    SET_GPR_U32(ctx, 31, 0x2DC088u);
    ctx->pc = 0x1B5DC0u;
    if (runtime->hasFunction(0x1B5DC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC088u; }
        if (ctx->pc != 0x2DC088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWallGroupNum__10CEditPartsFv_0x1b5dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC088u; }
        if (ctx->pc != 0x2DC088u) { return; }
    }
    ctx->pc = 0x2DC088u;
label_2dc088:
    // 0x2dc088: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2dc088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2dc08c:
    // 0x2dc08c: 0xaf829e50  sw          $v0, -0x61B0($gp)
    ctx->pc = 0x2dc08cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942288), GPR_U32(ctx, 2));
label_2dc090:
    // 0x2dc090: 0x8f909e50  lw          $s0, -0x61B0($gp)
    ctx->pc = 0x2dc090u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942288)));
label_2dc094:
    // 0x2dc094: 0xc06d770  jal         func_1B5DC0
label_2dc098:
    if (ctx->pc == 0x2DC098u) {
        ctx->pc = 0x2DC098u;
            // 0x2dc098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC09Cu;
        goto label_2dc09c;
    }
    ctx->pc = 0x2DC094u;
    SET_GPR_U32(ctx, 31, 0x2DC09Cu);
    ctx->pc = 0x2DC098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC094u;
            // 0x2dc098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5DC0u;
    if (runtime->hasFunction(0x1B5DC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC09Cu; }
        if (ctx->pc != 0x2DC09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWallGroupNum__10CEditPartsFv_0x1b5dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC09Cu; }
        if (ctx->pc != 0x2DC09Cu) { return; }
    }
    ctx->pc = 0x2DC09Cu;
label_2dc09c:
    // 0x2dc09c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2dc09cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2dc0a0:
    // 0x2dc0a0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2dc0a4:
    if (ctx->pc == 0x2DC0A4u) {
        ctx->pc = 0x2DC0A8u;
        goto label_2dc0a8;
    }
    ctx->pc = 0x2DC0A0u;
    {
        const bool branch_taken_0x2dc0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc0a0) {
            ctx->pc = 0x2DC0ACu;
            goto label_2dc0ac;
        }
    }
    ctx->pc = 0x2DC0A8u;
label_2dc0a8:
    // 0x2dc0a8: 0xaf809e50  sw          $zero, -0x61B0($gp)
    ctx->pc = 0x2dc0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942288), GPR_U32(ctx, 0));
label_2dc0ac:
    // 0x2dc0ac: 0x8f859e50  lw          $a1, -0x61B0($gp)
    ctx->pc = 0x2dc0acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942288)));
label_2dc0b0:
    // 0x2dc0b0: 0x1245000c  beq         $s2, $a1, . + 4 + (0xC << 2)
label_2dc0b4:
    if (ctx->pc == 0x2DC0B4u) {
        ctx->pc = 0x2DC0B4u;
            // 0x2dc0b4: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->pc = 0x2DC0B8u;
        goto label_2dc0b8;
    }
    ctx->pc = 0x2DC0B0u;
    {
        const bool branch_taken_0x2dc0b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        ctx->pc = 0x2DC0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC0B0u;
            // 0x2dc0b4: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc0b0) {
            ctx->pc = 0x2DC0E4u;
            goto label_2dc0e4;
        }
    }
    ctx->pc = 0x2DC0B8u;
label_2dc0b8:
    // 0x2dc0b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dc0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dc0bc:
    // 0x2dc0bc: 0x342184f0  ori         $at, $at, 0x84F0
    ctx->pc = 0x2dc0bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34032);
label_2dc0c0:
    // 0x2dc0c0: 0xc06d6f4  jal         func_1B5BD0
label_2dc0c4:
    if (ctx->pc == 0x2DC0C4u) {
        ctx->pc = 0x2DC0C4u;
            // 0x2dc0c4: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DC0C8u;
        goto label_2dc0c8;
    }
    ctx->pc = 0x2DC0C0u;
    SET_GPR_U32(ctx, 31, 0x2DC0C8u);
    ctx->pc = 0x2DC0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC0C0u;
            // 0x2dc0c4: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5BD0u;
    if (runtime->hasFunction(0x1B5BD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC0C8u; }
        if (ctx->pc != 0x2DC0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWallPlane__10CEditPartsFiPQ210CEditParts8WallInfo_0x1b5bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC0C8u; }
        if (ctx->pc != 0x2DC0C8u) { return; }
    }
    ctx->pc = 0x2DC0C8u;
label_2dc0c8:
    // 0x2dc0c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2dc0cc:
    if (ctx->pc == 0x2DC0CCu) {
        ctx->pc = 0x2DC0CCu;
            // 0x2dc0cc: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->pc = 0x2DC0D0u;
        goto label_2dc0d0;
    }
    ctx->pc = 0x2DC0C8u;
    {
        const bool branch_taken_0x2dc0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC0C8u;
            // 0x2dc0cc: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc0c8) {
            ctx->pc = 0x2DC0E4u;
            goto label_2dc0e4;
        }
    }
    ctx->pc = 0x2DC0D0u;
label_2dc0d0:
    // 0x2dc0d0: 0x342184f0  ori         $at, $at, 0x84F0
    ctx->pc = 0x2dc0d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34032);
label_2dc0d4:
    // 0x2dc0d4: 0xc0b6638  jal         func_2D98E0
label_2dc0d8:
    if (ctx->pc == 0x2DC0D8u) {
        ctx->pc = 0x2DC0D8u;
            // 0x2dc0d8: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DC0DCu;
        goto label_2dc0dc;
    }
    ctx->pc = 0x2DC0D4u;
    SET_GPR_U32(ctx, 31, 0x2DC0DCu);
    ctx->pc = 0x2DC0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC0D4u;
            // 0x2dc0d8: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D98E0u;
    if (runtime->hasFunction(0x2D98E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D98E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC0DCu; }
        if (ctx->pc != 0x2DC0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartEditPutWall__FPQ210CEditParts8WallInfo_0x2d98e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC0DCu; }
        if (ctx->pc != 0x2DC0DCu) { return; }
    }
    ctx->pc = 0x2DC0DCu;
label_2dc0dc:
    // 0x2dc0dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dc0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dc0e0:
    // 0x2dc0e0: 0xaf829e1c  sw          $v0, -0x61E4($gp)
    ctx->pc = 0x2dc0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942236), GPR_U32(ctx, 2));
label_2dc0e4:
    // 0x2dc0e4: 0xaf949e18  sw          $s4, -0x61E8($gp)
    ctx->pc = 0x2dc0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942232), GPR_U32(ctx, 20));
label_2dc0e8:
    // 0x2dc0e8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2dc0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2dc0ec:
    // 0x2dc0ec: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2dc0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_2dc0f0:
    // 0x2dc0f0: 0x34218530  ori         $at, $at, 0x8530
    ctx->pc = 0x2dc0f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34096);
label_2dc0f4:
    // 0x2dc0f4: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x2dc0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
label_2dc0f8:
    // 0x2dc0f8: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x2dc0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2dc0fc:
    // 0x2dc0fc: 0x24a58910  addiu       $a1, $a1, -0x76F0
    ctx->pc = 0x2dc0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936848));
label_2dc100:
    // 0x2dc100: 0xc041c3e  jal         func_1070F8
label_2dc104:
    if (ctx->pc == 0x2DC104u) {
        ctx->pc = 0x2DC104u;
            // 0x2dc104: 0x24c68920  addiu       $a2, $a2, -0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936864));
        ctx->pc = 0x2DC108u;
        goto label_2dc108;
    }
    ctx->pc = 0x2DC100u;
    SET_GPR_U32(ctx, 31, 0x2DC108u);
    ctx->pc = 0x2DC104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC100u;
            // 0x2dc104: 0x24c68920  addiu       $a2, $a2, -0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC108u; }
        if (ctx->pc != 0x2DC108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC108u; }
        if (ctx->pc != 0x2DC108u) { return; }
    }
    ctx->pc = 0x2DC108u;
label_2dc108:
    // 0x2dc108: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2dc108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2dc10c:
    // 0x2dc10c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2dc10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2dc110:
    // 0x2dc110: 0x34218530  ori         $at, $at, 0x8530
    ctx->pc = 0x2dc110u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34096);
label_2dc114:
    // 0x2dc114: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x2dc114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2dc118:
    // 0x2dc118: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2dc118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dc11c:
    // 0x2dc11c: 0xc041c4a  jal         func_107128
label_2dc120:
    if (ctx->pc == 0x2DC120u) {
        ctx->pc = 0x2DC120u;
            // 0x2dc120: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC124u;
        goto label_2dc124;
    }
    ctx->pc = 0x2DC11Cu;
    SET_GPR_U32(ctx, 31, 0x2DC124u);
    ctx->pc = 0x2DC120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC11Cu;
            // 0x2dc120: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC124u; }
        if (ctx->pc != 0x2DC124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC124u; }
        if (ctx->pc != 0x2DC124u) { return; }
    }
    ctx->pc = 0x2DC124u;
label_2dc124:
    // 0x2dc124: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2dc124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_2dc128:
    // 0x2dc128: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2dc128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2dc12c:
    // 0x2dc12c: 0x24848920  addiu       $a0, $a0, -0x76E0
    ctx->pc = 0x2dc12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936864));
label_2dc130:
    // 0x2dc130: 0x34218530  ori         $at, $at, 0x8530
    ctx->pc = 0x2dc130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34096);
label_2dc134:
    // 0x2dc134: 0x3a13021  addu        $a2, $sp, $at
    ctx->pc = 0x2dc134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2dc138:
    // 0x2dc138: 0xc041c38  jal         func_1070E0
label_2dc13c:
    if (ctx->pc == 0x2DC13Cu) {
        ctx->pc = 0x2DC13Cu;
            // 0x2dc13c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC140u;
        goto label_2dc140;
    }
    ctx->pc = 0x2DC138u;
    SET_GPR_U32(ctx, 31, 0x2DC140u);
    ctx->pc = 0x2DC13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC138u;
            // 0x2dc13c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC140u; }
        if (ctx->pc != 0x2DC140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC140u; }
        if (ctx->pc != 0x2DC140u) { return; }
    }
    ctx->pc = 0x2DC140u;
label_2dc140:
    // 0x2dc140: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dc140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dc144:
    // 0x2dc144: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2dc144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2dc148:
    // 0x2dc148: 0xc42c8944  lwc1        $f12, -0x76BC($at)
    ctx->pc = 0x2dc148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dc14c:
    // 0x2dc14c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2dc14cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2dc150:
    // 0x2dc150: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dc150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dc154:
    // 0x2dc154: 0xc42d8934  lwc1        $f13, -0x76CC($at)
    ctx->pc = 0x2dc154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2dc158:
    // 0x2dc158: 0xc04c2d8  jal         func_130B60
label_2dc15c:
    if (ctx->pc == 0x2DC15Cu) {
        ctx->pc = 0x2DC15Cu;
            // 0x2dc15c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DC160u;
        goto label_2dc160;
    }
    ctx->pc = 0x2DC158u;
    SET_GPR_U32(ctx, 31, 0x2DC160u);
    ctx->pc = 0x2DC15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC158u;
            // 0x2dc15c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130B60u;
    if (runtime->hasFunction(0x130B60u)) {
        auto targetFn = runtime->lookupFunction(0x130B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC160u; }
        if (ctx->pc != 0x2DC160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleInterpolate__Ffffi_0x130b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC160u; }
        if (ctx->pc != 0x2DC160u) { return; }
    }
    ctx->pc = 0x2DC160u;
label_2dc160:
    // 0x2dc160: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dc160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dc164:
    // 0x2dc164: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2dc164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_2dc168:
    // 0x2dc168: 0xe4208944  swc1        $f0, -0x76BC($at)
    ctx->pc = 0x2dc168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936900), bits); }
label_2dc16c:
    // 0x2dc16c: 0x8f849e74  lw          $a0, -0x618C($gp)
    ctx->pc = 0x2dc16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942324)));
label_2dc170:
    // 0x2dc170: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dc170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dc174:
    // 0x2dc174: 0xc42488f0  lwc1        $f4, -0x7710($at)
    ctx->pc = 0x2dc174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2dc178:
    // 0x2dc178: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dc178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dc17c:
    // 0x2dc17c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dc17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dc180:
    // 0x2dc180: 0xc42288f4  lwc1        $f2, -0x770C($at)
    ctx->pc = 0x2dc180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dc184:
    // 0x2dc184: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dc184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dc188:
    // 0x2dc188: 0xc4238904  lwc1        $f3, -0x76FC($at)
    ctx->pc = 0x2dc188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2dc18c:
    // 0x2dc18c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dc18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dc190:
    // 0x2dc190: 0xc42088f8  lwc1        $f0, -0x7708($at)
    ctx->pc = 0x2dc190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dc194:
    // 0x2dc194: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2dc194u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_2dc198:
    // 0x2dc198: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dc198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dc19c:
    // 0x2dc19c: 0xe4248900  swc1        $f4, -0x7700($at)
    ctx->pc = 0x2dc19cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936832), bits); }
label_2dc1a0:
    // 0x2dc1a0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dc1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dc1a4:
    // 0x2dc1a4: 0xe4208908  swc1        $f0, -0x76F8($at)
    ctx->pc = 0x2dc1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936840), bits); }
label_2dc1a8:
    // 0x2dc1a8: 0x46011003  div.s       $f0, $f2, $f1
    ctx->pc = 0x2dc1a8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_2dc1ac:
    // 0x2dc1ac: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dc1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dc1b0:
    // 0x2dc1b0: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2dc1b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2dc1b4:
    // 0x2dc1b4: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
label_2dc1b8:
    if (ctx->pc == 0x2DC1B8u) {
        ctx->pc = 0x2DC1B8u;
            // 0x2dc1b8: 0xe4208904  swc1        $f0, -0x76FC($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936836), bits); }
        ctx->pc = 0x2DC1BCu;
        goto label_2dc1bc;
    }
    ctx->pc = 0x2DC1B4u;
    {
        const bool branch_taken_0x2dc1b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC1B4u;
            // 0x2dc1b8: 0xe4208904  swc1        $f0, -0x76FC($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936836), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc1b4) {
            ctx->pc = 0x2DC230u;
            goto label_2dc230;
        }
    }
    ctx->pc = 0x2DC1BCu;
label_2dc1bc:
    // 0x2dc1bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2dc1bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dc1c0:
    // 0x2dc1c0: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x2dc1c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_2dc1c4:
    // 0x2dc1c4: 0x320f809  jalr        $t9
label_2dc1c8:
    if (ctx->pc == 0x2DC1C8u) {
        ctx->pc = 0x2DC1CCu;
        goto label_2dc1cc;
    }
    ctx->pc = 0x2DC1C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC1CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC1CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC1CCu; }
            if (ctx->pc != 0x2DC1CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2DC1CCu;
label_2dc1cc:
    // 0x2dc1cc: 0x8f849e74  lw          $a0, -0x618C($gp)
    ctx->pc = 0x2dc1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942324)));
label_2dc1d0:
    // 0x2dc1d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2dc1d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dc1d4:
    // 0x2dc1d4: 0x8f39008c  lw          $t9, 0x8C($t9)
    ctx->pc = 0x2dc1d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 140)));
label_2dc1d8:
    // 0x2dc1d8: 0x320f809  jalr        $t9
label_2dc1dc:
    if (ctx->pc == 0x2DC1DCu) {
        ctx->pc = 0x2DC1E0u;
        goto label_2dc1e0;
    }
    ctx->pc = 0x2DC1D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC1E0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC1E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC1E0u; }
            if (ctx->pc != 0x2DC1E0u) { return; }
        }
        }
    }
    ctx->pc = 0x2DC1E0u;
label_2dc1e0:
    // 0x2dc1e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc1e4:
    // 0x2dc1e4: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_2dc1e8:
    if (ctx->pc == 0x2DC1E8u) {
        ctx->pc = 0x2DC1E8u;
            // 0x2dc1e8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2DC1ECu;
        goto label_2dc1ec;
    }
    ctx->pc = 0x2DC1E4u;
    {
        const bool branch_taken_0x2dc1e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC1E4u;
            // 0x2dc1e8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc1e4) {
            ctx->pc = 0x2DC230u;
            goto label_2dc230;
        }
    }
    ctx->pc = 0x2DC1ECu;
label_2dc1ec:
    // 0x2dc1ec: 0xc04a38a  jal         func_128E28
label_2dc1f0:
    if (ctx->pc == 0x2DC1F0u) {
        ctx->pc = 0x2DC1F0u;
            // 0x2dc1f0: 0x24a50b10  addiu       $a1, $a1, 0xB10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2832));
        ctx->pc = 0x2DC1F4u;
        goto label_2dc1f4;
    }
    ctx->pc = 0x2DC1ECu;
    SET_GPR_U32(ctx, 31, 0x2DC1F4u);
    ctx->pc = 0x2DC1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC1ECu;
            // 0x2dc1f0: 0x24a50b10  addiu       $a1, $a1, 0xB10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC1F4u; }
        if (ctx->pc != 0x2DC1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC1F4u; }
        if (ctx->pc != 0x2DC1F4u) { return; }
    }
    ctx->pc = 0x2DC1F4u;
label_2dc1f4:
    // 0x2dc1f4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_2dc1f8:
    if (ctx->pc == 0x2DC1F8u) {
        ctx->pc = 0x2DC1FCu;
        goto label_2dc1fc;
    }
    ctx->pc = 0x2DC1F4u;
    {
        const bool branch_taken_0x2dc1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc1f4) {
            ctx->pc = 0x2DC230u;
            goto label_2dc230;
        }
    }
    ctx->pc = 0x2DC1FCu;
label_2dc1fc:
    // 0x2dc1fc: 0x8f849e74  lw          $a0, -0x618C($gp)
    ctx->pc = 0x2dc1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942324)));
label_2dc200:
    // 0x2dc200: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2dc200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dc204:
    // 0x2dc204: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x2dc204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_2dc208:
    // 0x2dc208: 0x320f809  jalr        $t9
label_2dc20c:
    if (ctx->pc == 0x2DC20Cu) {
        ctx->pc = 0x2DC210u;
        goto label_2dc210;
    }
    ctx->pc = 0x2DC208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC210u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC210u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC210u; }
            if (ctx->pc != 0x2DC210u) { return; }
        }
        }
    }
    ctx->pc = 0x2DC210u;
label_2dc210:
    // 0x2dc210: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2dc214:
    if (ctx->pc == 0x2DC214u) {
        ctx->pc = 0x2DC218u;
        goto label_2dc218;
    }
    ctx->pc = 0x2DC210u;
    {
        const bool branch_taken_0x2dc210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc210) {
            ctx->pc = 0x2DC230u;
            goto label_2dc230;
        }
    }
    ctx->pc = 0x2DC218u;
label_2dc218:
    // 0x2dc218: 0x8f849e74  lw          $a0, -0x618C($gp)
    ctx->pc = 0x2dc218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942324)));
label_2dc21c:
    // 0x2dc21c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc220:
    // 0x2dc220: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2dc220u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dc224:
    // 0x2dc224: 0x8f3900ac  lw          $t9, 0xAC($t9)
    ctx->pc = 0x2dc224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 172)));
label_2dc228:
    // 0x2dc228: 0x320f809  jalr        $t9
label_2dc22c:
    if (ctx->pc == 0x2DC22Cu) {
        ctx->pc = 0x2DC22Cu;
            // 0x2dc22c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC230u;
        goto label_2dc230;
    }
    ctx->pc = 0x2DC228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC230u);
        ctx->pc = 0x2DC22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC228u;
            // 0x2dc22c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC230u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC230u; }
            if (ctx->pc != 0x2DC230u) { return; }
        }
        }
    }
    ctx->pc = 0x2DC230u;
label_2dc230:
    // 0x2dc230: 0x8f849e80  lw          $a0, -0x6180($gp)
    ctx->pc = 0x2dc230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942336)));
label_2dc234:
    // 0x2dc234: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
label_2dc238:
    if (ctx->pc == 0x2DC238u) {
        ctx->pc = 0x2DC23Cu;
        goto label_2dc23c;
    }
    ctx->pc = 0x2DC234u;
    {
        const bool branch_taken_0x2dc234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc234) {
            ctx->pc = 0x2DC2B0u;
            goto label_2dc2b0;
        }
    }
    ctx->pc = 0x2DC23Cu;
label_2dc23c:
    // 0x2dc23c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2dc23cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dc240:
    // 0x2dc240: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x2dc240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_2dc244:
    // 0x2dc244: 0x320f809  jalr        $t9
label_2dc248:
    if (ctx->pc == 0x2DC248u) {
        ctx->pc = 0x2DC24Cu;
        goto label_2dc24c;
    }
    ctx->pc = 0x2DC244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC24Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC24Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC24Cu; }
            if (ctx->pc != 0x2DC24Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2DC24Cu;
label_2dc24c:
    // 0x2dc24c: 0x8f849e80  lw          $a0, -0x6180($gp)
    ctx->pc = 0x2dc24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942336)));
label_2dc250:
    // 0x2dc250: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2dc250u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dc254:
    // 0x2dc254: 0x8f39008c  lw          $t9, 0x8C($t9)
    ctx->pc = 0x2dc254u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 140)));
label_2dc258:
    // 0x2dc258: 0x320f809  jalr        $t9
label_2dc25c:
    if (ctx->pc == 0x2DC25Cu) {
        ctx->pc = 0x2DC260u;
        goto label_2dc260;
    }
    ctx->pc = 0x2DC258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC260u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC260u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC260u; }
            if (ctx->pc != 0x2DC260u) { return; }
        }
        }
    }
    ctx->pc = 0x2DC260u;
label_2dc260:
    // 0x2dc260: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc264:
    // 0x2dc264: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_2dc268:
    if (ctx->pc == 0x2DC268u) {
        ctx->pc = 0x2DC268u;
            // 0x2dc268: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2DC26Cu;
        goto label_2dc26c;
    }
    ctx->pc = 0x2DC264u;
    {
        const bool branch_taken_0x2dc264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC264u;
            // 0x2dc268: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc264) {
            ctx->pc = 0x2DC2B0u;
            goto label_2dc2b0;
        }
    }
    ctx->pc = 0x2DC26Cu;
label_2dc26c:
    // 0x2dc26c: 0xc04a38a  jal         func_128E28
label_2dc270:
    if (ctx->pc == 0x2DC270u) {
        ctx->pc = 0x2DC270u;
            // 0x2dc270: 0x24a50af0  addiu       $a1, $a1, 0xAF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2800));
        ctx->pc = 0x2DC274u;
        goto label_2dc274;
    }
    ctx->pc = 0x2DC26Cu;
    SET_GPR_U32(ctx, 31, 0x2DC274u);
    ctx->pc = 0x2DC270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC26Cu;
            // 0x2dc270: 0x24a50af0  addiu       $a1, $a1, 0xAF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC274u; }
        if (ctx->pc != 0x2DC274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC274u; }
        if (ctx->pc != 0x2DC274u) { return; }
    }
    ctx->pc = 0x2DC274u;
label_2dc274:
    // 0x2dc274: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_2dc278:
    if (ctx->pc == 0x2DC278u) {
        ctx->pc = 0x2DC27Cu;
        goto label_2dc27c;
    }
    ctx->pc = 0x2DC274u;
    {
        const bool branch_taken_0x2dc274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc274) {
            ctx->pc = 0x2DC2B0u;
            goto label_2dc2b0;
        }
    }
    ctx->pc = 0x2DC27Cu;
label_2dc27c:
    // 0x2dc27c: 0x8f849e80  lw          $a0, -0x6180($gp)
    ctx->pc = 0x2dc27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942336)));
label_2dc280:
    // 0x2dc280: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2dc280u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dc284:
    // 0x2dc284: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x2dc284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_2dc288:
    // 0x2dc288: 0x320f809  jalr        $t9
label_2dc28c:
    if (ctx->pc == 0x2DC28Cu) {
        ctx->pc = 0x2DC290u;
        goto label_2dc290;
    }
    ctx->pc = 0x2DC288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC290u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC290u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC290u; }
            if (ctx->pc != 0x2DC290u) { return; }
        }
        }
    }
    ctx->pc = 0x2DC290u;
label_2dc290:
    // 0x2dc290: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2dc294:
    if (ctx->pc == 0x2DC294u) {
        ctx->pc = 0x2DC298u;
        goto label_2dc298;
    }
    ctx->pc = 0x2DC290u;
    {
        const bool branch_taken_0x2dc290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc290) {
            ctx->pc = 0x2DC2B0u;
            goto label_2dc2b0;
        }
    }
    ctx->pc = 0x2DC298u;
label_2dc298:
    // 0x2dc298: 0x8f849e80  lw          $a0, -0x6180($gp)
    ctx->pc = 0x2dc298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942336)));
label_2dc29c:
    // 0x2dc29c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc29cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc2a0:
    // 0x2dc2a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2dc2a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dc2a4:
    // 0x2dc2a4: 0x8f3900ac  lw          $t9, 0xAC($t9)
    ctx->pc = 0x2dc2a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 172)));
label_2dc2a8:
    // 0x2dc2a8: 0x320f809  jalr        $t9
label_2dc2ac:
    if (ctx->pc == 0x2DC2ACu) {
        ctx->pc = 0x2DC2ACu;
            // 0x2dc2ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC2B0u;
        goto label_2dc2b0;
    }
    ctx->pc = 0x2DC2A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC2B0u);
        ctx->pc = 0x2DC2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC2A8u;
            // 0x2dc2ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC2B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC2B0u; }
            if (ctx->pc != 0x2DC2B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2DC2B0u;
label_2dc2b0:
    // 0x2dc2b0: 0x8f849e84  lw          $a0, -0x617C($gp)
    ctx->pc = 0x2dc2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942340)));
label_2dc2b4:
    // 0x2dc2b4: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
label_2dc2b8:
    if (ctx->pc == 0x2DC2B8u) {
        ctx->pc = 0x2DC2BCu;
        goto label_2dc2bc;
    }
    ctx->pc = 0x2DC2B4u;
    {
        const bool branch_taken_0x2dc2b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc2b4) {
            ctx->pc = 0x2DC330u;
            goto label_2dc330;
        }
    }
    ctx->pc = 0x2DC2BCu;
label_2dc2bc:
    // 0x2dc2bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2dc2bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dc2c0:
    // 0x2dc2c0: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x2dc2c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_2dc2c4:
    // 0x2dc2c4: 0x320f809  jalr        $t9
label_2dc2c8:
    if (ctx->pc == 0x2DC2C8u) {
        ctx->pc = 0x2DC2CCu;
        goto label_2dc2cc;
    }
    ctx->pc = 0x2DC2C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC2CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC2CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC2CCu; }
            if (ctx->pc != 0x2DC2CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2DC2CCu;
label_2dc2cc:
    // 0x2dc2cc: 0x8f849e84  lw          $a0, -0x617C($gp)
    ctx->pc = 0x2dc2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942340)));
label_2dc2d0:
    // 0x2dc2d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2dc2d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dc2d4:
    // 0x2dc2d4: 0x8f39008c  lw          $t9, 0x8C($t9)
    ctx->pc = 0x2dc2d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 140)));
label_2dc2d8:
    // 0x2dc2d8: 0x320f809  jalr        $t9
label_2dc2dc:
    if (ctx->pc == 0x2DC2DCu) {
        ctx->pc = 0x2DC2E0u;
        goto label_2dc2e0;
    }
    ctx->pc = 0x2DC2D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC2E0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC2E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC2E0u; }
            if (ctx->pc != 0x2DC2E0u) { return; }
        }
        }
    }
    ctx->pc = 0x2DC2E0u;
label_2dc2e0:
    // 0x2dc2e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc2e4:
    // 0x2dc2e4: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_2dc2e8:
    if (ctx->pc == 0x2DC2E8u) {
        ctx->pc = 0x2DC2E8u;
            // 0x2dc2e8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2DC2ECu;
        goto label_2dc2ec;
    }
    ctx->pc = 0x2DC2E4u;
    {
        const bool branch_taken_0x2dc2e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC2E4u;
            // 0x2dc2e8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc2e4) {
            ctx->pc = 0x2DC330u;
            goto label_2dc330;
        }
    }
    ctx->pc = 0x2DC2ECu;
label_2dc2ec:
    // 0x2dc2ec: 0xc04a38a  jal         func_128E28
label_2dc2f0:
    if (ctx->pc == 0x2DC2F0u) {
        ctx->pc = 0x2DC2F0u;
            // 0x2dc2f0: 0x24a50af8  addiu       $a1, $a1, 0xAF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2808));
        ctx->pc = 0x2DC2F4u;
        goto label_2dc2f4;
    }
    ctx->pc = 0x2DC2ECu;
    SET_GPR_U32(ctx, 31, 0x2DC2F4u);
    ctx->pc = 0x2DC2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC2ECu;
            // 0x2dc2f0: 0x24a50af8  addiu       $a1, $a1, 0xAF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC2F4u; }
        if (ctx->pc != 0x2DC2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC2F4u; }
        if (ctx->pc != 0x2DC2F4u) { return; }
    }
    ctx->pc = 0x2DC2F4u;
label_2dc2f4:
    // 0x2dc2f4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_2dc2f8:
    if (ctx->pc == 0x2DC2F8u) {
        ctx->pc = 0x2DC2FCu;
        goto label_2dc2fc;
    }
    ctx->pc = 0x2DC2F4u;
    {
        const bool branch_taken_0x2dc2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc2f4) {
            ctx->pc = 0x2DC330u;
            goto label_2dc330;
        }
    }
    ctx->pc = 0x2DC2FCu;
label_2dc2fc:
    // 0x2dc2fc: 0x8f849e84  lw          $a0, -0x617C($gp)
    ctx->pc = 0x2dc2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942340)));
label_2dc300:
    // 0x2dc300: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2dc300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dc304:
    // 0x2dc304: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x2dc304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_2dc308:
    // 0x2dc308: 0x320f809  jalr        $t9
label_2dc30c:
    if (ctx->pc == 0x2DC30Cu) {
        ctx->pc = 0x2DC310u;
        goto label_2dc310;
    }
    ctx->pc = 0x2DC308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC310u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC310u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC310u; }
            if (ctx->pc != 0x2DC310u) { return; }
        }
        }
    }
    ctx->pc = 0x2DC310u;
label_2dc310:
    // 0x2dc310: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2dc314:
    if (ctx->pc == 0x2DC314u) {
        ctx->pc = 0x2DC318u;
        goto label_2dc318;
    }
    ctx->pc = 0x2DC310u;
    {
        const bool branch_taken_0x2dc310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc310) {
            ctx->pc = 0x2DC330u;
            goto label_2dc330;
        }
    }
    ctx->pc = 0x2DC318u;
label_2dc318:
    // 0x2dc318: 0x8f849e84  lw          $a0, -0x617C($gp)
    ctx->pc = 0x2dc318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942340)));
label_2dc31c:
    // 0x2dc31c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc320:
    // 0x2dc320: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2dc320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dc324:
    // 0x2dc324: 0x8f3900ac  lw          $t9, 0xAC($t9)
    ctx->pc = 0x2dc324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 172)));
label_2dc328:
    // 0x2dc328: 0x320f809  jalr        $t9
label_2dc32c:
    if (ctx->pc == 0x2DC32Cu) {
        ctx->pc = 0x2DC32Cu;
            // 0x2dc32c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC330u;
        goto label_2dc330;
    }
    ctx->pc = 0x2DC328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC330u);
        ctx->pc = 0x2DC32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC328u;
            // 0x2dc32c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC330u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC330u; }
            if (ctx->pc != 0x2DC330u) { return; }
        }
        }
    }
    ctx->pc = 0x2DC330u;
label_2dc330:
    // 0x2dc330: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2dc330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2dc334:
    // 0x2dc334: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x2dc334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2dc338:
    // 0x2dc338: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x2dc338u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2dc33c:
    // 0x2dc33c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2dc33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2dc340:
    // 0x2dc340: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2dc340u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2dc344:
    // 0x2dc344: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2dc344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2dc348:
    // 0x2dc348: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2dc348u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2dc34c:
    // 0x2dc34c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2dc34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2dc350:
    // 0x2dc350: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2dc350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2dc354:
    // 0x2dc354: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2dc354u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2dc358:
    // 0x2dc358: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2dc358u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2dc35c:
    // 0x2dc35c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2dc35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2dc360:
    // 0x2dc360: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2dc360u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2dc364:
    // 0x2dc364: 0x34218540  ori         $at, $at, 0x8540
    ctx->pc = 0x2dc364u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34112);
label_2dc368:
    // 0x2dc368: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2dc368u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2dc36c:
    // 0x2dc36c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2dc36cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2dc370:
    // 0x2dc370: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dc370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dc374:
    // 0x2dc374: 0x3e00008  jr          $ra
label_2dc378:
    if (ctx->pc == 0x2DC378u) {
        ctx->pc = 0x2DC378u;
            // 0x2dc378: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2DC37Cu;
        goto label_fallthrough_0x2dc374;
    }
    ctx->pc = 0x2DC374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC374u;
            // 0x2dc378: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2dc374:
    ctx->pc = 0x2DC37Cu;
}
