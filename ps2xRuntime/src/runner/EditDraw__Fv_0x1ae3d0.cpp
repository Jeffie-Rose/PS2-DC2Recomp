#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditDraw__Fv
// Address: 0x1ae3d0 - 0x1af13c
void EditDraw__Fv_0x1ae3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditDraw__Fv_0x1ae3d0");
#endif

    switch (ctx->pc) {
        case 0x1ae3d0u: goto label_1ae3d0;
        case 0x1ae3d4u: goto label_1ae3d4;
        case 0x1ae3d8u: goto label_1ae3d8;
        case 0x1ae3dcu: goto label_1ae3dc;
        case 0x1ae3e0u: goto label_1ae3e0;
        case 0x1ae3e4u: goto label_1ae3e4;
        case 0x1ae3e8u: goto label_1ae3e8;
        case 0x1ae3ecu: goto label_1ae3ec;
        case 0x1ae3f0u: goto label_1ae3f0;
        case 0x1ae3f4u: goto label_1ae3f4;
        case 0x1ae3f8u: goto label_1ae3f8;
        case 0x1ae3fcu: goto label_1ae3fc;
        case 0x1ae400u: goto label_1ae400;
        case 0x1ae404u: goto label_1ae404;
        case 0x1ae408u: goto label_1ae408;
        case 0x1ae40cu: goto label_1ae40c;
        case 0x1ae410u: goto label_1ae410;
        case 0x1ae414u: goto label_1ae414;
        case 0x1ae418u: goto label_1ae418;
        case 0x1ae41cu: goto label_1ae41c;
        case 0x1ae420u: goto label_1ae420;
        case 0x1ae424u: goto label_1ae424;
        case 0x1ae428u: goto label_1ae428;
        case 0x1ae42cu: goto label_1ae42c;
        case 0x1ae430u: goto label_1ae430;
        case 0x1ae434u: goto label_1ae434;
        case 0x1ae438u: goto label_1ae438;
        case 0x1ae43cu: goto label_1ae43c;
        case 0x1ae440u: goto label_1ae440;
        case 0x1ae444u: goto label_1ae444;
        case 0x1ae448u: goto label_1ae448;
        case 0x1ae44cu: goto label_1ae44c;
        case 0x1ae450u: goto label_1ae450;
        case 0x1ae454u: goto label_1ae454;
        case 0x1ae458u: goto label_1ae458;
        case 0x1ae45cu: goto label_1ae45c;
        case 0x1ae460u: goto label_1ae460;
        case 0x1ae464u: goto label_1ae464;
        case 0x1ae468u: goto label_1ae468;
        case 0x1ae46cu: goto label_1ae46c;
        case 0x1ae470u: goto label_1ae470;
        case 0x1ae474u: goto label_1ae474;
        case 0x1ae478u: goto label_1ae478;
        case 0x1ae47cu: goto label_1ae47c;
        case 0x1ae480u: goto label_1ae480;
        case 0x1ae484u: goto label_1ae484;
        case 0x1ae488u: goto label_1ae488;
        case 0x1ae48cu: goto label_1ae48c;
        case 0x1ae490u: goto label_1ae490;
        case 0x1ae494u: goto label_1ae494;
        case 0x1ae498u: goto label_1ae498;
        case 0x1ae49cu: goto label_1ae49c;
        case 0x1ae4a0u: goto label_1ae4a0;
        case 0x1ae4a4u: goto label_1ae4a4;
        case 0x1ae4a8u: goto label_1ae4a8;
        case 0x1ae4acu: goto label_1ae4ac;
        case 0x1ae4b0u: goto label_1ae4b0;
        case 0x1ae4b4u: goto label_1ae4b4;
        case 0x1ae4b8u: goto label_1ae4b8;
        case 0x1ae4bcu: goto label_1ae4bc;
        case 0x1ae4c0u: goto label_1ae4c0;
        case 0x1ae4c4u: goto label_1ae4c4;
        case 0x1ae4c8u: goto label_1ae4c8;
        case 0x1ae4ccu: goto label_1ae4cc;
        case 0x1ae4d0u: goto label_1ae4d0;
        case 0x1ae4d4u: goto label_1ae4d4;
        case 0x1ae4d8u: goto label_1ae4d8;
        case 0x1ae4dcu: goto label_1ae4dc;
        case 0x1ae4e0u: goto label_1ae4e0;
        case 0x1ae4e4u: goto label_1ae4e4;
        case 0x1ae4e8u: goto label_1ae4e8;
        case 0x1ae4ecu: goto label_1ae4ec;
        case 0x1ae4f0u: goto label_1ae4f0;
        case 0x1ae4f4u: goto label_1ae4f4;
        case 0x1ae4f8u: goto label_1ae4f8;
        case 0x1ae4fcu: goto label_1ae4fc;
        case 0x1ae500u: goto label_1ae500;
        case 0x1ae504u: goto label_1ae504;
        case 0x1ae508u: goto label_1ae508;
        case 0x1ae50cu: goto label_1ae50c;
        case 0x1ae510u: goto label_1ae510;
        case 0x1ae514u: goto label_1ae514;
        case 0x1ae518u: goto label_1ae518;
        case 0x1ae51cu: goto label_1ae51c;
        case 0x1ae520u: goto label_1ae520;
        case 0x1ae524u: goto label_1ae524;
        case 0x1ae528u: goto label_1ae528;
        case 0x1ae52cu: goto label_1ae52c;
        case 0x1ae530u: goto label_1ae530;
        case 0x1ae534u: goto label_1ae534;
        case 0x1ae538u: goto label_1ae538;
        case 0x1ae53cu: goto label_1ae53c;
        case 0x1ae540u: goto label_1ae540;
        case 0x1ae544u: goto label_1ae544;
        case 0x1ae548u: goto label_1ae548;
        case 0x1ae54cu: goto label_1ae54c;
        case 0x1ae550u: goto label_1ae550;
        case 0x1ae554u: goto label_1ae554;
        case 0x1ae558u: goto label_1ae558;
        case 0x1ae55cu: goto label_1ae55c;
        case 0x1ae560u: goto label_1ae560;
        case 0x1ae564u: goto label_1ae564;
        case 0x1ae568u: goto label_1ae568;
        case 0x1ae56cu: goto label_1ae56c;
        case 0x1ae570u: goto label_1ae570;
        case 0x1ae574u: goto label_1ae574;
        case 0x1ae578u: goto label_1ae578;
        case 0x1ae57cu: goto label_1ae57c;
        case 0x1ae580u: goto label_1ae580;
        case 0x1ae584u: goto label_1ae584;
        case 0x1ae588u: goto label_1ae588;
        case 0x1ae58cu: goto label_1ae58c;
        case 0x1ae590u: goto label_1ae590;
        case 0x1ae594u: goto label_1ae594;
        case 0x1ae598u: goto label_1ae598;
        case 0x1ae59cu: goto label_1ae59c;
        case 0x1ae5a0u: goto label_1ae5a0;
        case 0x1ae5a4u: goto label_1ae5a4;
        case 0x1ae5a8u: goto label_1ae5a8;
        case 0x1ae5acu: goto label_1ae5ac;
        case 0x1ae5b0u: goto label_1ae5b0;
        case 0x1ae5b4u: goto label_1ae5b4;
        case 0x1ae5b8u: goto label_1ae5b8;
        case 0x1ae5bcu: goto label_1ae5bc;
        case 0x1ae5c0u: goto label_1ae5c0;
        case 0x1ae5c4u: goto label_1ae5c4;
        case 0x1ae5c8u: goto label_1ae5c8;
        case 0x1ae5ccu: goto label_1ae5cc;
        case 0x1ae5d0u: goto label_1ae5d0;
        case 0x1ae5d4u: goto label_1ae5d4;
        case 0x1ae5d8u: goto label_1ae5d8;
        case 0x1ae5dcu: goto label_1ae5dc;
        case 0x1ae5e0u: goto label_1ae5e0;
        case 0x1ae5e4u: goto label_1ae5e4;
        case 0x1ae5e8u: goto label_1ae5e8;
        case 0x1ae5ecu: goto label_1ae5ec;
        case 0x1ae5f0u: goto label_1ae5f0;
        case 0x1ae5f4u: goto label_1ae5f4;
        case 0x1ae5f8u: goto label_1ae5f8;
        case 0x1ae5fcu: goto label_1ae5fc;
        case 0x1ae600u: goto label_1ae600;
        case 0x1ae604u: goto label_1ae604;
        case 0x1ae608u: goto label_1ae608;
        case 0x1ae60cu: goto label_1ae60c;
        case 0x1ae610u: goto label_1ae610;
        case 0x1ae614u: goto label_1ae614;
        case 0x1ae618u: goto label_1ae618;
        case 0x1ae61cu: goto label_1ae61c;
        case 0x1ae620u: goto label_1ae620;
        case 0x1ae624u: goto label_1ae624;
        case 0x1ae628u: goto label_1ae628;
        case 0x1ae62cu: goto label_1ae62c;
        case 0x1ae630u: goto label_1ae630;
        case 0x1ae634u: goto label_1ae634;
        case 0x1ae638u: goto label_1ae638;
        case 0x1ae63cu: goto label_1ae63c;
        case 0x1ae640u: goto label_1ae640;
        case 0x1ae644u: goto label_1ae644;
        case 0x1ae648u: goto label_1ae648;
        case 0x1ae64cu: goto label_1ae64c;
        case 0x1ae650u: goto label_1ae650;
        case 0x1ae654u: goto label_1ae654;
        case 0x1ae658u: goto label_1ae658;
        case 0x1ae65cu: goto label_1ae65c;
        case 0x1ae660u: goto label_1ae660;
        case 0x1ae664u: goto label_1ae664;
        case 0x1ae668u: goto label_1ae668;
        case 0x1ae66cu: goto label_1ae66c;
        case 0x1ae670u: goto label_1ae670;
        case 0x1ae674u: goto label_1ae674;
        case 0x1ae678u: goto label_1ae678;
        case 0x1ae67cu: goto label_1ae67c;
        case 0x1ae680u: goto label_1ae680;
        case 0x1ae684u: goto label_1ae684;
        case 0x1ae688u: goto label_1ae688;
        case 0x1ae68cu: goto label_1ae68c;
        case 0x1ae690u: goto label_1ae690;
        case 0x1ae694u: goto label_1ae694;
        case 0x1ae698u: goto label_1ae698;
        case 0x1ae69cu: goto label_1ae69c;
        case 0x1ae6a0u: goto label_1ae6a0;
        case 0x1ae6a4u: goto label_1ae6a4;
        case 0x1ae6a8u: goto label_1ae6a8;
        case 0x1ae6acu: goto label_1ae6ac;
        case 0x1ae6b0u: goto label_1ae6b0;
        case 0x1ae6b4u: goto label_1ae6b4;
        case 0x1ae6b8u: goto label_1ae6b8;
        case 0x1ae6bcu: goto label_1ae6bc;
        case 0x1ae6c0u: goto label_1ae6c0;
        case 0x1ae6c4u: goto label_1ae6c4;
        case 0x1ae6c8u: goto label_1ae6c8;
        case 0x1ae6ccu: goto label_1ae6cc;
        case 0x1ae6d0u: goto label_1ae6d0;
        case 0x1ae6d4u: goto label_1ae6d4;
        case 0x1ae6d8u: goto label_1ae6d8;
        case 0x1ae6dcu: goto label_1ae6dc;
        case 0x1ae6e0u: goto label_1ae6e0;
        case 0x1ae6e4u: goto label_1ae6e4;
        case 0x1ae6e8u: goto label_1ae6e8;
        case 0x1ae6ecu: goto label_1ae6ec;
        case 0x1ae6f0u: goto label_1ae6f0;
        case 0x1ae6f4u: goto label_1ae6f4;
        case 0x1ae6f8u: goto label_1ae6f8;
        case 0x1ae6fcu: goto label_1ae6fc;
        case 0x1ae700u: goto label_1ae700;
        case 0x1ae704u: goto label_1ae704;
        case 0x1ae708u: goto label_1ae708;
        case 0x1ae70cu: goto label_1ae70c;
        case 0x1ae710u: goto label_1ae710;
        case 0x1ae714u: goto label_1ae714;
        case 0x1ae718u: goto label_1ae718;
        case 0x1ae71cu: goto label_1ae71c;
        case 0x1ae720u: goto label_1ae720;
        case 0x1ae724u: goto label_1ae724;
        case 0x1ae728u: goto label_1ae728;
        case 0x1ae72cu: goto label_1ae72c;
        case 0x1ae730u: goto label_1ae730;
        case 0x1ae734u: goto label_1ae734;
        case 0x1ae738u: goto label_1ae738;
        case 0x1ae73cu: goto label_1ae73c;
        case 0x1ae740u: goto label_1ae740;
        case 0x1ae744u: goto label_1ae744;
        case 0x1ae748u: goto label_1ae748;
        case 0x1ae74cu: goto label_1ae74c;
        case 0x1ae750u: goto label_1ae750;
        case 0x1ae754u: goto label_1ae754;
        case 0x1ae758u: goto label_1ae758;
        case 0x1ae75cu: goto label_1ae75c;
        case 0x1ae760u: goto label_1ae760;
        case 0x1ae764u: goto label_1ae764;
        case 0x1ae768u: goto label_1ae768;
        case 0x1ae76cu: goto label_1ae76c;
        case 0x1ae770u: goto label_1ae770;
        case 0x1ae774u: goto label_1ae774;
        case 0x1ae778u: goto label_1ae778;
        case 0x1ae77cu: goto label_1ae77c;
        case 0x1ae780u: goto label_1ae780;
        case 0x1ae784u: goto label_1ae784;
        case 0x1ae788u: goto label_1ae788;
        case 0x1ae78cu: goto label_1ae78c;
        case 0x1ae790u: goto label_1ae790;
        case 0x1ae794u: goto label_1ae794;
        case 0x1ae798u: goto label_1ae798;
        case 0x1ae79cu: goto label_1ae79c;
        case 0x1ae7a0u: goto label_1ae7a0;
        case 0x1ae7a4u: goto label_1ae7a4;
        case 0x1ae7a8u: goto label_1ae7a8;
        case 0x1ae7acu: goto label_1ae7ac;
        case 0x1ae7b0u: goto label_1ae7b0;
        case 0x1ae7b4u: goto label_1ae7b4;
        case 0x1ae7b8u: goto label_1ae7b8;
        case 0x1ae7bcu: goto label_1ae7bc;
        case 0x1ae7c0u: goto label_1ae7c0;
        case 0x1ae7c4u: goto label_1ae7c4;
        case 0x1ae7c8u: goto label_1ae7c8;
        case 0x1ae7ccu: goto label_1ae7cc;
        case 0x1ae7d0u: goto label_1ae7d0;
        case 0x1ae7d4u: goto label_1ae7d4;
        case 0x1ae7d8u: goto label_1ae7d8;
        case 0x1ae7dcu: goto label_1ae7dc;
        case 0x1ae7e0u: goto label_1ae7e0;
        case 0x1ae7e4u: goto label_1ae7e4;
        case 0x1ae7e8u: goto label_1ae7e8;
        case 0x1ae7ecu: goto label_1ae7ec;
        case 0x1ae7f0u: goto label_1ae7f0;
        case 0x1ae7f4u: goto label_1ae7f4;
        case 0x1ae7f8u: goto label_1ae7f8;
        case 0x1ae7fcu: goto label_1ae7fc;
        case 0x1ae800u: goto label_1ae800;
        case 0x1ae804u: goto label_1ae804;
        case 0x1ae808u: goto label_1ae808;
        case 0x1ae80cu: goto label_1ae80c;
        case 0x1ae810u: goto label_1ae810;
        case 0x1ae814u: goto label_1ae814;
        case 0x1ae818u: goto label_1ae818;
        case 0x1ae81cu: goto label_1ae81c;
        case 0x1ae820u: goto label_1ae820;
        case 0x1ae824u: goto label_1ae824;
        case 0x1ae828u: goto label_1ae828;
        case 0x1ae82cu: goto label_1ae82c;
        case 0x1ae830u: goto label_1ae830;
        case 0x1ae834u: goto label_1ae834;
        case 0x1ae838u: goto label_1ae838;
        case 0x1ae83cu: goto label_1ae83c;
        case 0x1ae840u: goto label_1ae840;
        case 0x1ae844u: goto label_1ae844;
        case 0x1ae848u: goto label_1ae848;
        case 0x1ae84cu: goto label_1ae84c;
        case 0x1ae850u: goto label_1ae850;
        case 0x1ae854u: goto label_1ae854;
        case 0x1ae858u: goto label_1ae858;
        case 0x1ae85cu: goto label_1ae85c;
        case 0x1ae860u: goto label_1ae860;
        case 0x1ae864u: goto label_1ae864;
        case 0x1ae868u: goto label_1ae868;
        case 0x1ae86cu: goto label_1ae86c;
        case 0x1ae870u: goto label_1ae870;
        case 0x1ae874u: goto label_1ae874;
        case 0x1ae878u: goto label_1ae878;
        case 0x1ae87cu: goto label_1ae87c;
        case 0x1ae880u: goto label_1ae880;
        case 0x1ae884u: goto label_1ae884;
        case 0x1ae888u: goto label_1ae888;
        case 0x1ae88cu: goto label_1ae88c;
        case 0x1ae890u: goto label_1ae890;
        case 0x1ae894u: goto label_1ae894;
        case 0x1ae898u: goto label_1ae898;
        case 0x1ae89cu: goto label_1ae89c;
        case 0x1ae8a0u: goto label_1ae8a0;
        case 0x1ae8a4u: goto label_1ae8a4;
        case 0x1ae8a8u: goto label_1ae8a8;
        case 0x1ae8acu: goto label_1ae8ac;
        case 0x1ae8b0u: goto label_1ae8b0;
        case 0x1ae8b4u: goto label_1ae8b4;
        case 0x1ae8b8u: goto label_1ae8b8;
        case 0x1ae8bcu: goto label_1ae8bc;
        case 0x1ae8c0u: goto label_1ae8c0;
        case 0x1ae8c4u: goto label_1ae8c4;
        case 0x1ae8c8u: goto label_1ae8c8;
        case 0x1ae8ccu: goto label_1ae8cc;
        case 0x1ae8d0u: goto label_1ae8d0;
        case 0x1ae8d4u: goto label_1ae8d4;
        case 0x1ae8d8u: goto label_1ae8d8;
        case 0x1ae8dcu: goto label_1ae8dc;
        case 0x1ae8e0u: goto label_1ae8e0;
        case 0x1ae8e4u: goto label_1ae8e4;
        case 0x1ae8e8u: goto label_1ae8e8;
        case 0x1ae8ecu: goto label_1ae8ec;
        case 0x1ae8f0u: goto label_1ae8f0;
        case 0x1ae8f4u: goto label_1ae8f4;
        case 0x1ae8f8u: goto label_1ae8f8;
        case 0x1ae8fcu: goto label_1ae8fc;
        case 0x1ae900u: goto label_1ae900;
        case 0x1ae904u: goto label_1ae904;
        case 0x1ae908u: goto label_1ae908;
        case 0x1ae90cu: goto label_1ae90c;
        case 0x1ae910u: goto label_1ae910;
        case 0x1ae914u: goto label_1ae914;
        case 0x1ae918u: goto label_1ae918;
        case 0x1ae91cu: goto label_1ae91c;
        case 0x1ae920u: goto label_1ae920;
        case 0x1ae924u: goto label_1ae924;
        case 0x1ae928u: goto label_1ae928;
        case 0x1ae92cu: goto label_1ae92c;
        case 0x1ae930u: goto label_1ae930;
        case 0x1ae934u: goto label_1ae934;
        case 0x1ae938u: goto label_1ae938;
        case 0x1ae93cu: goto label_1ae93c;
        case 0x1ae940u: goto label_1ae940;
        case 0x1ae944u: goto label_1ae944;
        case 0x1ae948u: goto label_1ae948;
        case 0x1ae94cu: goto label_1ae94c;
        case 0x1ae950u: goto label_1ae950;
        case 0x1ae954u: goto label_1ae954;
        case 0x1ae958u: goto label_1ae958;
        case 0x1ae95cu: goto label_1ae95c;
        case 0x1ae960u: goto label_1ae960;
        case 0x1ae964u: goto label_1ae964;
        case 0x1ae968u: goto label_1ae968;
        case 0x1ae96cu: goto label_1ae96c;
        case 0x1ae970u: goto label_1ae970;
        case 0x1ae974u: goto label_1ae974;
        case 0x1ae978u: goto label_1ae978;
        case 0x1ae97cu: goto label_1ae97c;
        case 0x1ae980u: goto label_1ae980;
        case 0x1ae984u: goto label_1ae984;
        case 0x1ae988u: goto label_1ae988;
        case 0x1ae98cu: goto label_1ae98c;
        case 0x1ae990u: goto label_1ae990;
        case 0x1ae994u: goto label_1ae994;
        case 0x1ae998u: goto label_1ae998;
        case 0x1ae99cu: goto label_1ae99c;
        case 0x1ae9a0u: goto label_1ae9a0;
        case 0x1ae9a4u: goto label_1ae9a4;
        case 0x1ae9a8u: goto label_1ae9a8;
        case 0x1ae9acu: goto label_1ae9ac;
        case 0x1ae9b0u: goto label_1ae9b0;
        case 0x1ae9b4u: goto label_1ae9b4;
        case 0x1ae9b8u: goto label_1ae9b8;
        case 0x1ae9bcu: goto label_1ae9bc;
        case 0x1ae9c0u: goto label_1ae9c0;
        case 0x1ae9c4u: goto label_1ae9c4;
        case 0x1ae9c8u: goto label_1ae9c8;
        case 0x1ae9ccu: goto label_1ae9cc;
        case 0x1ae9d0u: goto label_1ae9d0;
        case 0x1ae9d4u: goto label_1ae9d4;
        case 0x1ae9d8u: goto label_1ae9d8;
        case 0x1ae9dcu: goto label_1ae9dc;
        case 0x1ae9e0u: goto label_1ae9e0;
        case 0x1ae9e4u: goto label_1ae9e4;
        case 0x1ae9e8u: goto label_1ae9e8;
        case 0x1ae9ecu: goto label_1ae9ec;
        case 0x1ae9f0u: goto label_1ae9f0;
        case 0x1ae9f4u: goto label_1ae9f4;
        case 0x1ae9f8u: goto label_1ae9f8;
        case 0x1ae9fcu: goto label_1ae9fc;
        case 0x1aea00u: goto label_1aea00;
        case 0x1aea04u: goto label_1aea04;
        case 0x1aea08u: goto label_1aea08;
        case 0x1aea0cu: goto label_1aea0c;
        case 0x1aea10u: goto label_1aea10;
        case 0x1aea14u: goto label_1aea14;
        case 0x1aea18u: goto label_1aea18;
        case 0x1aea1cu: goto label_1aea1c;
        case 0x1aea20u: goto label_1aea20;
        case 0x1aea24u: goto label_1aea24;
        case 0x1aea28u: goto label_1aea28;
        case 0x1aea2cu: goto label_1aea2c;
        case 0x1aea30u: goto label_1aea30;
        case 0x1aea34u: goto label_1aea34;
        case 0x1aea38u: goto label_1aea38;
        case 0x1aea3cu: goto label_1aea3c;
        case 0x1aea40u: goto label_1aea40;
        case 0x1aea44u: goto label_1aea44;
        case 0x1aea48u: goto label_1aea48;
        case 0x1aea4cu: goto label_1aea4c;
        case 0x1aea50u: goto label_1aea50;
        case 0x1aea54u: goto label_1aea54;
        case 0x1aea58u: goto label_1aea58;
        case 0x1aea5cu: goto label_1aea5c;
        case 0x1aea60u: goto label_1aea60;
        case 0x1aea64u: goto label_1aea64;
        case 0x1aea68u: goto label_1aea68;
        case 0x1aea6cu: goto label_1aea6c;
        case 0x1aea70u: goto label_1aea70;
        case 0x1aea74u: goto label_1aea74;
        case 0x1aea78u: goto label_1aea78;
        case 0x1aea7cu: goto label_1aea7c;
        case 0x1aea80u: goto label_1aea80;
        case 0x1aea84u: goto label_1aea84;
        case 0x1aea88u: goto label_1aea88;
        case 0x1aea8cu: goto label_1aea8c;
        case 0x1aea90u: goto label_1aea90;
        case 0x1aea94u: goto label_1aea94;
        case 0x1aea98u: goto label_1aea98;
        case 0x1aea9cu: goto label_1aea9c;
        case 0x1aeaa0u: goto label_1aeaa0;
        case 0x1aeaa4u: goto label_1aeaa4;
        case 0x1aeaa8u: goto label_1aeaa8;
        case 0x1aeaacu: goto label_1aeaac;
        case 0x1aeab0u: goto label_1aeab0;
        case 0x1aeab4u: goto label_1aeab4;
        case 0x1aeab8u: goto label_1aeab8;
        case 0x1aeabcu: goto label_1aeabc;
        case 0x1aeac0u: goto label_1aeac0;
        case 0x1aeac4u: goto label_1aeac4;
        case 0x1aeac8u: goto label_1aeac8;
        case 0x1aeaccu: goto label_1aeacc;
        case 0x1aead0u: goto label_1aead0;
        case 0x1aead4u: goto label_1aead4;
        case 0x1aead8u: goto label_1aead8;
        case 0x1aeadcu: goto label_1aeadc;
        case 0x1aeae0u: goto label_1aeae0;
        case 0x1aeae4u: goto label_1aeae4;
        case 0x1aeae8u: goto label_1aeae8;
        case 0x1aeaecu: goto label_1aeaec;
        case 0x1aeaf0u: goto label_1aeaf0;
        case 0x1aeaf4u: goto label_1aeaf4;
        case 0x1aeaf8u: goto label_1aeaf8;
        case 0x1aeafcu: goto label_1aeafc;
        case 0x1aeb00u: goto label_1aeb00;
        case 0x1aeb04u: goto label_1aeb04;
        case 0x1aeb08u: goto label_1aeb08;
        case 0x1aeb0cu: goto label_1aeb0c;
        case 0x1aeb10u: goto label_1aeb10;
        case 0x1aeb14u: goto label_1aeb14;
        case 0x1aeb18u: goto label_1aeb18;
        case 0x1aeb1cu: goto label_1aeb1c;
        case 0x1aeb20u: goto label_1aeb20;
        case 0x1aeb24u: goto label_1aeb24;
        case 0x1aeb28u: goto label_1aeb28;
        case 0x1aeb2cu: goto label_1aeb2c;
        case 0x1aeb30u: goto label_1aeb30;
        case 0x1aeb34u: goto label_1aeb34;
        case 0x1aeb38u: goto label_1aeb38;
        case 0x1aeb3cu: goto label_1aeb3c;
        case 0x1aeb40u: goto label_1aeb40;
        case 0x1aeb44u: goto label_1aeb44;
        case 0x1aeb48u: goto label_1aeb48;
        case 0x1aeb4cu: goto label_1aeb4c;
        case 0x1aeb50u: goto label_1aeb50;
        case 0x1aeb54u: goto label_1aeb54;
        case 0x1aeb58u: goto label_1aeb58;
        case 0x1aeb5cu: goto label_1aeb5c;
        case 0x1aeb60u: goto label_1aeb60;
        case 0x1aeb64u: goto label_1aeb64;
        case 0x1aeb68u: goto label_1aeb68;
        case 0x1aeb6cu: goto label_1aeb6c;
        case 0x1aeb70u: goto label_1aeb70;
        case 0x1aeb74u: goto label_1aeb74;
        case 0x1aeb78u: goto label_1aeb78;
        case 0x1aeb7cu: goto label_1aeb7c;
        case 0x1aeb80u: goto label_1aeb80;
        case 0x1aeb84u: goto label_1aeb84;
        case 0x1aeb88u: goto label_1aeb88;
        case 0x1aeb8cu: goto label_1aeb8c;
        case 0x1aeb90u: goto label_1aeb90;
        case 0x1aeb94u: goto label_1aeb94;
        case 0x1aeb98u: goto label_1aeb98;
        case 0x1aeb9cu: goto label_1aeb9c;
        case 0x1aeba0u: goto label_1aeba0;
        case 0x1aeba4u: goto label_1aeba4;
        case 0x1aeba8u: goto label_1aeba8;
        case 0x1aebacu: goto label_1aebac;
        case 0x1aebb0u: goto label_1aebb0;
        case 0x1aebb4u: goto label_1aebb4;
        case 0x1aebb8u: goto label_1aebb8;
        case 0x1aebbcu: goto label_1aebbc;
        case 0x1aebc0u: goto label_1aebc0;
        case 0x1aebc4u: goto label_1aebc4;
        case 0x1aebc8u: goto label_1aebc8;
        case 0x1aebccu: goto label_1aebcc;
        case 0x1aebd0u: goto label_1aebd0;
        case 0x1aebd4u: goto label_1aebd4;
        case 0x1aebd8u: goto label_1aebd8;
        case 0x1aebdcu: goto label_1aebdc;
        case 0x1aebe0u: goto label_1aebe0;
        case 0x1aebe4u: goto label_1aebe4;
        case 0x1aebe8u: goto label_1aebe8;
        case 0x1aebecu: goto label_1aebec;
        case 0x1aebf0u: goto label_1aebf0;
        case 0x1aebf4u: goto label_1aebf4;
        case 0x1aebf8u: goto label_1aebf8;
        case 0x1aebfcu: goto label_1aebfc;
        case 0x1aec00u: goto label_1aec00;
        case 0x1aec04u: goto label_1aec04;
        case 0x1aec08u: goto label_1aec08;
        case 0x1aec0cu: goto label_1aec0c;
        case 0x1aec10u: goto label_1aec10;
        case 0x1aec14u: goto label_1aec14;
        case 0x1aec18u: goto label_1aec18;
        case 0x1aec1cu: goto label_1aec1c;
        case 0x1aec20u: goto label_1aec20;
        case 0x1aec24u: goto label_1aec24;
        case 0x1aec28u: goto label_1aec28;
        case 0x1aec2cu: goto label_1aec2c;
        case 0x1aec30u: goto label_1aec30;
        case 0x1aec34u: goto label_1aec34;
        case 0x1aec38u: goto label_1aec38;
        case 0x1aec3cu: goto label_1aec3c;
        case 0x1aec40u: goto label_1aec40;
        case 0x1aec44u: goto label_1aec44;
        case 0x1aec48u: goto label_1aec48;
        case 0x1aec4cu: goto label_1aec4c;
        case 0x1aec50u: goto label_1aec50;
        case 0x1aec54u: goto label_1aec54;
        case 0x1aec58u: goto label_1aec58;
        case 0x1aec5cu: goto label_1aec5c;
        case 0x1aec60u: goto label_1aec60;
        case 0x1aec64u: goto label_1aec64;
        case 0x1aec68u: goto label_1aec68;
        case 0x1aec6cu: goto label_1aec6c;
        case 0x1aec70u: goto label_1aec70;
        case 0x1aec74u: goto label_1aec74;
        case 0x1aec78u: goto label_1aec78;
        case 0x1aec7cu: goto label_1aec7c;
        case 0x1aec80u: goto label_1aec80;
        case 0x1aec84u: goto label_1aec84;
        case 0x1aec88u: goto label_1aec88;
        case 0x1aec8cu: goto label_1aec8c;
        case 0x1aec90u: goto label_1aec90;
        case 0x1aec94u: goto label_1aec94;
        case 0x1aec98u: goto label_1aec98;
        case 0x1aec9cu: goto label_1aec9c;
        case 0x1aeca0u: goto label_1aeca0;
        case 0x1aeca4u: goto label_1aeca4;
        case 0x1aeca8u: goto label_1aeca8;
        case 0x1aecacu: goto label_1aecac;
        case 0x1aecb0u: goto label_1aecb0;
        case 0x1aecb4u: goto label_1aecb4;
        case 0x1aecb8u: goto label_1aecb8;
        case 0x1aecbcu: goto label_1aecbc;
        case 0x1aecc0u: goto label_1aecc0;
        case 0x1aecc4u: goto label_1aecc4;
        case 0x1aecc8u: goto label_1aecc8;
        case 0x1aecccu: goto label_1aeccc;
        case 0x1aecd0u: goto label_1aecd0;
        case 0x1aecd4u: goto label_1aecd4;
        case 0x1aecd8u: goto label_1aecd8;
        case 0x1aecdcu: goto label_1aecdc;
        case 0x1aece0u: goto label_1aece0;
        case 0x1aece4u: goto label_1aece4;
        case 0x1aece8u: goto label_1aece8;
        case 0x1aececu: goto label_1aecec;
        case 0x1aecf0u: goto label_1aecf0;
        case 0x1aecf4u: goto label_1aecf4;
        case 0x1aecf8u: goto label_1aecf8;
        case 0x1aecfcu: goto label_1aecfc;
        case 0x1aed00u: goto label_1aed00;
        case 0x1aed04u: goto label_1aed04;
        case 0x1aed08u: goto label_1aed08;
        case 0x1aed0cu: goto label_1aed0c;
        case 0x1aed10u: goto label_1aed10;
        case 0x1aed14u: goto label_1aed14;
        case 0x1aed18u: goto label_1aed18;
        case 0x1aed1cu: goto label_1aed1c;
        case 0x1aed20u: goto label_1aed20;
        case 0x1aed24u: goto label_1aed24;
        case 0x1aed28u: goto label_1aed28;
        case 0x1aed2cu: goto label_1aed2c;
        case 0x1aed30u: goto label_1aed30;
        case 0x1aed34u: goto label_1aed34;
        case 0x1aed38u: goto label_1aed38;
        case 0x1aed3cu: goto label_1aed3c;
        case 0x1aed40u: goto label_1aed40;
        case 0x1aed44u: goto label_1aed44;
        case 0x1aed48u: goto label_1aed48;
        case 0x1aed4cu: goto label_1aed4c;
        case 0x1aed50u: goto label_1aed50;
        case 0x1aed54u: goto label_1aed54;
        case 0x1aed58u: goto label_1aed58;
        case 0x1aed5cu: goto label_1aed5c;
        case 0x1aed60u: goto label_1aed60;
        case 0x1aed64u: goto label_1aed64;
        case 0x1aed68u: goto label_1aed68;
        case 0x1aed6cu: goto label_1aed6c;
        case 0x1aed70u: goto label_1aed70;
        case 0x1aed74u: goto label_1aed74;
        case 0x1aed78u: goto label_1aed78;
        case 0x1aed7cu: goto label_1aed7c;
        case 0x1aed80u: goto label_1aed80;
        case 0x1aed84u: goto label_1aed84;
        case 0x1aed88u: goto label_1aed88;
        case 0x1aed8cu: goto label_1aed8c;
        case 0x1aed90u: goto label_1aed90;
        case 0x1aed94u: goto label_1aed94;
        case 0x1aed98u: goto label_1aed98;
        case 0x1aed9cu: goto label_1aed9c;
        case 0x1aeda0u: goto label_1aeda0;
        case 0x1aeda4u: goto label_1aeda4;
        case 0x1aeda8u: goto label_1aeda8;
        case 0x1aedacu: goto label_1aedac;
        case 0x1aedb0u: goto label_1aedb0;
        case 0x1aedb4u: goto label_1aedb4;
        case 0x1aedb8u: goto label_1aedb8;
        case 0x1aedbcu: goto label_1aedbc;
        case 0x1aedc0u: goto label_1aedc0;
        case 0x1aedc4u: goto label_1aedc4;
        case 0x1aedc8u: goto label_1aedc8;
        case 0x1aedccu: goto label_1aedcc;
        case 0x1aedd0u: goto label_1aedd0;
        case 0x1aedd4u: goto label_1aedd4;
        case 0x1aedd8u: goto label_1aedd8;
        case 0x1aeddcu: goto label_1aeddc;
        case 0x1aede0u: goto label_1aede0;
        case 0x1aede4u: goto label_1aede4;
        case 0x1aede8u: goto label_1aede8;
        case 0x1aedecu: goto label_1aedec;
        case 0x1aedf0u: goto label_1aedf0;
        case 0x1aedf4u: goto label_1aedf4;
        case 0x1aedf8u: goto label_1aedf8;
        case 0x1aedfcu: goto label_1aedfc;
        case 0x1aee00u: goto label_1aee00;
        case 0x1aee04u: goto label_1aee04;
        case 0x1aee08u: goto label_1aee08;
        case 0x1aee0cu: goto label_1aee0c;
        case 0x1aee10u: goto label_1aee10;
        case 0x1aee14u: goto label_1aee14;
        case 0x1aee18u: goto label_1aee18;
        case 0x1aee1cu: goto label_1aee1c;
        case 0x1aee20u: goto label_1aee20;
        case 0x1aee24u: goto label_1aee24;
        case 0x1aee28u: goto label_1aee28;
        case 0x1aee2cu: goto label_1aee2c;
        case 0x1aee30u: goto label_1aee30;
        case 0x1aee34u: goto label_1aee34;
        case 0x1aee38u: goto label_1aee38;
        case 0x1aee3cu: goto label_1aee3c;
        case 0x1aee40u: goto label_1aee40;
        case 0x1aee44u: goto label_1aee44;
        case 0x1aee48u: goto label_1aee48;
        case 0x1aee4cu: goto label_1aee4c;
        case 0x1aee50u: goto label_1aee50;
        case 0x1aee54u: goto label_1aee54;
        case 0x1aee58u: goto label_1aee58;
        case 0x1aee5cu: goto label_1aee5c;
        case 0x1aee60u: goto label_1aee60;
        case 0x1aee64u: goto label_1aee64;
        case 0x1aee68u: goto label_1aee68;
        case 0x1aee6cu: goto label_1aee6c;
        case 0x1aee70u: goto label_1aee70;
        case 0x1aee74u: goto label_1aee74;
        case 0x1aee78u: goto label_1aee78;
        case 0x1aee7cu: goto label_1aee7c;
        case 0x1aee80u: goto label_1aee80;
        case 0x1aee84u: goto label_1aee84;
        case 0x1aee88u: goto label_1aee88;
        case 0x1aee8cu: goto label_1aee8c;
        case 0x1aee90u: goto label_1aee90;
        case 0x1aee94u: goto label_1aee94;
        case 0x1aee98u: goto label_1aee98;
        case 0x1aee9cu: goto label_1aee9c;
        case 0x1aeea0u: goto label_1aeea0;
        case 0x1aeea4u: goto label_1aeea4;
        case 0x1aeea8u: goto label_1aeea8;
        case 0x1aeeacu: goto label_1aeeac;
        case 0x1aeeb0u: goto label_1aeeb0;
        case 0x1aeeb4u: goto label_1aeeb4;
        case 0x1aeeb8u: goto label_1aeeb8;
        case 0x1aeebcu: goto label_1aeebc;
        case 0x1aeec0u: goto label_1aeec0;
        case 0x1aeec4u: goto label_1aeec4;
        case 0x1aeec8u: goto label_1aeec8;
        case 0x1aeeccu: goto label_1aeecc;
        case 0x1aeed0u: goto label_1aeed0;
        case 0x1aeed4u: goto label_1aeed4;
        case 0x1aeed8u: goto label_1aeed8;
        case 0x1aeedcu: goto label_1aeedc;
        case 0x1aeee0u: goto label_1aeee0;
        case 0x1aeee4u: goto label_1aeee4;
        case 0x1aeee8u: goto label_1aeee8;
        case 0x1aeeecu: goto label_1aeeec;
        case 0x1aeef0u: goto label_1aeef0;
        case 0x1aeef4u: goto label_1aeef4;
        case 0x1aeef8u: goto label_1aeef8;
        case 0x1aeefcu: goto label_1aeefc;
        case 0x1aef00u: goto label_1aef00;
        case 0x1aef04u: goto label_1aef04;
        case 0x1aef08u: goto label_1aef08;
        case 0x1aef0cu: goto label_1aef0c;
        case 0x1aef10u: goto label_1aef10;
        case 0x1aef14u: goto label_1aef14;
        case 0x1aef18u: goto label_1aef18;
        case 0x1aef1cu: goto label_1aef1c;
        case 0x1aef20u: goto label_1aef20;
        case 0x1aef24u: goto label_1aef24;
        case 0x1aef28u: goto label_1aef28;
        case 0x1aef2cu: goto label_1aef2c;
        case 0x1aef30u: goto label_1aef30;
        case 0x1aef34u: goto label_1aef34;
        case 0x1aef38u: goto label_1aef38;
        case 0x1aef3cu: goto label_1aef3c;
        case 0x1aef40u: goto label_1aef40;
        case 0x1aef44u: goto label_1aef44;
        case 0x1aef48u: goto label_1aef48;
        case 0x1aef4cu: goto label_1aef4c;
        case 0x1aef50u: goto label_1aef50;
        case 0x1aef54u: goto label_1aef54;
        case 0x1aef58u: goto label_1aef58;
        case 0x1aef5cu: goto label_1aef5c;
        case 0x1aef60u: goto label_1aef60;
        case 0x1aef64u: goto label_1aef64;
        case 0x1aef68u: goto label_1aef68;
        case 0x1aef6cu: goto label_1aef6c;
        case 0x1aef70u: goto label_1aef70;
        case 0x1aef74u: goto label_1aef74;
        case 0x1aef78u: goto label_1aef78;
        case 0x1aef7cu: goto label_1aef7c;
        case 0x1aef80u: goto label_1aef80;
        case 0x1aef84u: goto label_1aef84;
        case 0x1aef88u: goto label_1aef88;
        case 0x1aef8cu: goto label_1aef8c;
        case 0x1aef90u: goto label_1aef90;
        case 0x1aef94u: goto label_1aef94;
        case 0x1aef98u: goto label_1aef98;
        case 0x1aef9cu: goto label_1aef9c;
        case 0x1aefa0u: goto label_1aefa0;
        case 0x1aefa4u: goto label_1aefa4;
        case 0x1aefa8u: goto label_1aefa8;
        case 0x1aefacu: goto label_1aefac;
        case 0x1aefb0u: goto label_1aefb0;
        case 0x1aefb4u: goto label_1aefb4;
        case 0x1aefb8u: goto label_1aefb8;
        case 0x1aefbcu: goto label_1aefbc;
        case 0x1aefc0u: goto label_1aefc0;
        case 0x1aefc4u: goto label_1aefc4;
        case 0x1aefc8u: goto label_1aefc8;
        case 0x1aefccu: goto label_1aefcc;
        case 0x1aefd0u: goto label_1aefd0;
        case 0x1aefd4u: goto label_1aefd4;
        case 0x1aefd8u: goto label_1aefd8;
        case 0x1aefdcu: goto label_1aefdc;
        case 0x1aefe0u: goto label_1aefe0;
        case 0x1aefe4u: goto label_1aefe4;
        case 0x1aefe8u: goto label_1aefe8;
        case 0x1aefecu: goto label_1aefec;
        case 0x1aeff0u: goto label_1aeff0;
        case 0x1aeff4u: goto label_1aeff4;
        case 0x1aeff8u: goto label_1aeff8;
        case 0x1aeffcu: goto label_1aeffc;
        case 0x1af000u: goto label_1af000;
        case 0x1af004u: goto label_1af004;
        case 0x1af008u: goto label_1af008;
        case 0x1af00cu: goto label_1af00c;
        case 0x1af010u: goto label_1af010;
        case 0x1af014u: goto label_1af014;
        case 0x1af018u: goto label_1af018;
        case 0x1af01cu: goto label_1af01c;
        case 0x1af020u: goto label_1af020;
        case 0x1af024u: goto label_1af024;
        case 0x1af028u: goto label_1af028;
        case 0x1af02cu: goto label_1af02c;
        case 0x1af030u: goto label_1af030;
        case 0x1af034u: goto label_1af034;
        case 0x1af038u: goto label_1af038;
        case 0x1af03cu: goto label_1af03c;
        case 0x1af040u: goto label_1af040;
        case 0x1af044u: goto label_1af044;
        case 0x1af048u: goto label_1af048;
        case 0x1af04cu: goto label_1af04c;
        case 0x1af050u: goto label_1af050;
        case 0x1af054u: goto label_1af054;
        case 0x1af058u: goto label_1af058;
        case 0x1af05cu: goto label_1af05c;
        case 0x1af060u: goto label_1af060;
        case 0x1af064u: goto label_1af064;
        case 0x1af068u: goto label_1af068;
        case 0x1af06cu: goto label_1af06c;
        case 0x1af070u: goto label_1af070;
        case 0x1af074u: goto label_1af074;
        case 0x1af078u: goto label_1af078;
        case 0x1af07cu: goto label_1af07c;
        case 0x1af080u: goto label_1af080;
        case 0x1af084u: goto label_1af084;
        case 0x1af088u: goto label_1af088;
        case 0x1af08cu: goto label_1af08c;
        case 0x1af090u: goto label_1af090;
        case 0x1af094u: goto label_1af094;
        case 0x1af098u: goto label_1af098;
        case 0x1af09cu: goto label_1af09c;
        case 0x1af0a0u: goto label_1af0a0;
        case 0x1af0a4u: goto label_1af0a4;
        case 0x1af0a8u: goto label_1af0a8;
        case 0x1af0acu: goto label_1af0ac;
        case 0x1af0b0u: goto label_1af0b0;
        case 0x1af0b4u: goto label_1af0b4;
        case 0x1af0b8u: goto label_1af0b8;
        case 0x1af0bcu: goto label_1af0bc;
        case 0x1af0c0u: goto label_1af0c0;
        case 0x1af0c4u: goto label_1af0c4;
        case 0x1af0c8u: goto label_1af0c8;
        case 0x1af0ccu: goto label_1af0cc;
        case 0x1af0d0u: goto label_1af0d0;
        case 0x1af0d4u: goto label_1af0d4;
        case 0x1af0d8u: goto label_1af0d8;
        case 0x1af0dcu: goto label_1af0dc;
        case 0x1af0e0u: goto label_1af0e0;
        case 0x1af0e4u: goto label_1af0e4;
        case 0x1af0e8u: goto label_1af0e8;
        case 0x1af0ecu: goto label_1af0ec;
        case 0x1af0f0u: goto label_1af0f0;
        case 0x1af0f4u: goto label_1af0f4;
        case 0x1af0f8u: goto label_1af0f8;
        case 0x1af0fcu: goto label_1af0fc;
        case 0x1af100u: goto label_1af100;
        case 0x1af104u: goto label_1af104;
        case 0x1af108u: goto label_1af108;
        case 0x1af10cu: goto label_1af10c;
        case 0x1af110u: goto label_1af110;
        case 0x1af114u: goto label_1af114;
        case 0x1af118u: goto label_1af118;
        case 0x1af11cu: goto label_1af11c;
        case 0x1af120u: goto label_1af120;
        case 0x1af124u: goto label_1af124;
        case 0x1af128u: goto label_1af128;
        case 0x1af12cu: goto label_1af12c;
        case 0x1af130u: goto label_1af130;
        case 0x1af134u: goto label_1af134;
        case 0x1af138u: goto label_1af138;
        default: break;
    }

    ctx->pc = 0x1ae3d0u;

label_1ae3d0:
    // 0x1ae3d0: 0x27bdf930  addiu       $sp, $sp, -0x6D0
    ctx->pc = 0x1ae3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965552));
label_1ae3d4:
    // 0x1ae3d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ae3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1ae3d8:
    // 0x1ae3d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1ae3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1ae3dc:
    // 0x1ae3dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ae3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1ae3e0:
    // 0x1ae3e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ae3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1ae3e4:
    // 0x1ae3e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ae3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1ae3e8:
    // 0x1ae3e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ae3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ae3ec:
    // 0x1ae3ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ae3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ae3f0:
    // 0x1ae3f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ae3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ae3f4:
    // 0x1ae3f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ae3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ae3f8:
    // 0x1ae3f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ae3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ae3fc:
    // 0x1ae3fc: 0x8f828c94  lw          $v0, -0x736C($gp)
    ctx->pc = 0x1ae3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937748)));
label_1ae400:
    // 0x1ae400: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ae404:
    if (ctx->pc == 0x1AE404u) {
        ctx->pc = 0x1AE404u;
            // 0x1ae404: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x1AE408u;
        goto label_1ae408;
    }
    ctx->pc = 0x1AE400u;
    {
        const bool branch_taken_0x1ae400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE400u;
            // 0x1ae404: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae400) {
            ctx->pc = 0x1AE414u;
            goto label_1ae414;
        }
    }
    ctx->pc = 0x1AE408u;
label_1ae408:
    // 0x1ae408: 0xaf808c94  sw          $zero, -0x736C($gp)
    ctx->pc = 0x1ae408u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937748), GPR_U32(ctx, 0));
label_1ae40c:
    // 0x1ae40c: 0x1000033f  b           . + 4 + (0x33F << 2)
label_1ae410:
    if (ctx->pc == 0x1AE410u) {
        ctx->pc = 0x1AE410u;
            // 0x1ae410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE414u;
        goto label_1ae414;
    }
    ctx->pc = 0x1AE40Cu;
    {
        const bool branch_taken_0x1ae40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE40Cu;
            // 0x1ae410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae40c) {
            ctx->pc = 0x1AF10Cu;
            goto label_1af10c;
        }
    }
    ctx->pc = 0x1AE414u;
label_1ae414:
    // 0x1ae414: 0x3c1e0038  lui         $fp, 0x38
    ctx->pc = 0x1ae414u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)56 << 16));
label_1ae418:
    // 0x1ae418: 0x8c22e628  lw          $v0, -0x19D8($at)
    ctx->pc = 0x1ae418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960680)));
label_1ae41c:
    // 0x1ae41c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ae41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1ae420:
    // 0x1ae420: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ae420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae424:
    // 0x1ae424: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1ae424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ae428:
    // 0x1ae428: 0x27de1ef0  addiu       $fp, $fp, 0x1EF0
    ctx->pc = 0x1ae428u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 7920));
label_1ae42c:
    // 0x1ae42c: 0xc0a1214  jal         func_284850
label_1ae430:
    if (ctx->pc == 0x1AE430u) {
        ctx->pc = 0x1AE430u;
            // 0x1ae430: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x1AE434u;
        goto label_1ae434;
    }
    ctx->pc = 0x1AE42Cu;
    SET_GPR_U32(ctx, 31, 0x1AE434u);
    ctx->pc = 0x1AE430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE42Cu;
            // 0x1ae430: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284850u;
    if (runtime->hasFunction(0x284850u)) {
        auto targetFn = runtime->lookupFunction(0x284850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE434u; }
        if (ctx->pc != 0x1AE434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveMap__6CSceneFPP4CMapi_0x284850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE434u; }
        if (ctx->pc != 0x1AE434u) { return; }
    }
    ctx->pc = 0x1AE434u;
label_1ae434:
    // 0x1ae434: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1ae434u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae438:
    // 0x1ae438: 0xc050ebc  jal         func_143AF0
label_1ae43c:
    if (ctx->pc == 0x1AE43Cu) {
        ctx->pc = 0x1AE43Cu;
            // 0x1ae43c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE440u;
        goto label_1ae440;
    }
    ctx->pc = 0x1AE438u;
    SET_GPR_U32(ctx, 31, 0x1AE440u);
    ctx->pc = 0x1AE43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE438u;
            // 0x1ae43c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143AF0u;
    if (runtime->hasFunction(0x143AF0u)) {
        auto targetFn = runtime->lookupFunction(0x143AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE440u; }
        if (ctx->pc != 0x1AE440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkTextureRepeat__Fi_0x143af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE440u; }
        if (ctx->pc != 0x1AE440u) { return; }
    }
    ctx->pc = 0x1AE440u;
label_1ae440:
    // 0x1ae440: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ae440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae444:
    // 0x1ae444: 0xc0a0e30  jal         func_2838C0
label_1ae448:
    if (ctx->pc == 0x1AE448u) {
        ctx->pc = 0x1AE448u;
            // 0x1ae448: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->pc = 0x1AE44Cu;
        goto label_1ae44c;
    }
    ctx->pc = 0x1AE444u;
    SET_GPR_U32(ctx, 31, 0x1AE44Cu);
    ctx->pc = 0x1AE448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE444u;
            // 0x1ae448: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE44Cu; }
        if (ctx->pc != 0x1AE44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE44Cu; }
        if (ctx->pc != 0x1AE44Cu) { return; }
    }
    ctx->pc = 0x1AE44Cu;
label_1ae44c:
    // 0x1ae44c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ae44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae450:
    // 0x1ae450: 0xc0a0e30  jal         func_2838C0
label_1ae454:
    if (ctx->pc == 0x1AE454u) {
        ctx->pc = 0x1AE454u;
            // 0x1ae454: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->pc = 0x1AE458u;
        goto label_1ae458;
    }
    ctx->pc = 0x1AE450u;
    SET_GPR_U32(ctx, 31, 0x1AE458u);
    ctx->pc = 0x1AE454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE450u;
            // 0x1ae454: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE458u; }
        if (ctx->pc != 0x1AE458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE458u; }
        if (ctx->pc != 0x1AE458u) { return; }
    }
    ctx->pc = 0x1AE458u;
label_1ae458:
    // 0x1ae458: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ae458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae45c:
    // 0x1ae45c: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_1ae460:
    if (ctx->pc == 0x1AE460u) {
        ctx->pc = 0x1AE460u;
            // 0x1ae460: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->pc = 0x1AE464u;
        goto label_1ae464;
    }
    ctx->pc = 0x1AE45Cu;
    {
        const bool branch_taken_0x1ae45c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE45Cu;
            // 0x1ae460: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae45c) {
            ctx->pc = 0x1AE4C4u;
            goto label_1ae4c4;
        }
    }
    ctx->pc = 0x1AE464u;
label_1ae464:
    // 0x1ae464: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x1ae464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1ae468:
    // 0x1ae468: 0x24426970  addiu       $v0, $v0, 0x6970
    ctx->pc = 0x1ae468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26992));
label_1ae46c:
    // 0x1ae46c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae470:
    // 0x1ae470: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1ae470u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1ae474:
    // 0x1ae474: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1ae474u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1ae478:
    // 0x1ae478: 0x8e190060  lw          $t9, 0x60($s0)
    ctx->pc = 0x1ae478u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1ae47c:
    // 0x1ae47c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ae47cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ae480:
    // 0x1ae480: 0x320f809  jalr        $t9
label_1ae484:
    if (ctx->pc == 0x1AE484u) {
        ctx->pc = 0x1AE484u;
            // 0x1ae484: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x1AE488u;
        goto label_1ae488;
    }
    ctx->pc = 0x1AE480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AE488u);
        ctx->pc = 0x1AE484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE480u;
            // 0x1ae484: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AE488u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AE488u; }
            if (ctx->pc != 0x1AE488u) { return; }
        }
        }
    }
    ctx->pc = 0x1AE488u;
label_1ae488:
    // 0x1ae488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae48c:
    // 0x1ae48c: 0xc04c574  jal         func_1315D0
label_1ae490:
    if (ctx->pc == 0x1AE490u) {
        ctx->pc = 0x1AE490u;
            // 0x1ae490: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x1AE494u;
        goto label_1ae494;
    }
    ctx->pc = 0x1AE48Cu;
    SET_GPR_U32(ctx, 31, 0x1AE494u);
    ctx->pc = 0x1AE490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE48Cu;
            // 0x1ae490: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE494u; }
        if (ctx->pc != 0x1AE494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE494u; }
        if (ctx->pc != 0x1AE494u) { return; }
    }
    ctx->pc = 0x1AE494u;
label_1ae494:
    // 0x1ae494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae498:
    // 0x1ae498: 0xc04c524  jal         func_131490
label_1ae49c:
    if (ctx->pc == 0x1AE49Cu) {
        ctx->pc = 0x1AE49Cu;
            // 0x1ae49c: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x1AE4A0u;
        goto label_1ae4a0;
    }
    ctx->pc = 0x1AE498u;
    SET_GPR_U32(ctx, 31, 0x1AE4A0u);
    ctx->pc = 0x1AE49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE498u;
            // 0x1ae49c: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131490u;
    if (runtime->hasFunction(0x131490u)) {
        auto targetFn = runtime->lookupFunction(0x131490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE4A0u; }
        if (ctx->pc != 0x1AE4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDir__9mgCCameraFPf_0x131490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE4A0u; }
        if (ctx->pc != 0x1AE4A0u) { return; }
    }
    ctx->pc = 0x1AE4A0u;
label_1ae4a0:
    // 0x1ae4a0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1ae4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1ae4a4:
    // 0x1ae4a4: 0xc050e28  jal         func_1438A0
label_1ae4a8:
    if (ctx->pc == 0x1AE4A8u) {
        ctx->pc = 0x1AE4A8u;
            // 0x1ae4a8: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x1AE4ACu;
        goto label_1ae4ac;
    }
    ctx->pc = 0x1AE4A4u;
    SET_GPR_U32(ctx, 31, 0x1AE4ACu);
    ctx->pc = 0x1AE4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE4A4u;
            // 0x1ae4a8: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438A0u;
    if (runtime->hasFunction(0x1438A0u)) {
        auto targetFn = runtime->lookupFunction(0x1438A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE4ACu; }
        if (ctx->pc != 0x1AE4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetViewMatrix__FPA4_fPf_0x1438a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE4ACu; }
        if (ctx->pc != 0x1AE4ACu) { return; }
    }
    ctx->pc = 0x1AE4ACu;
label_1ae4ac:
    // 0x1ae4ac: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1ae4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1ae4b0:
    // 0x1ae4b0: 0xc063bb0  jal         func_18EEC0
label_1ae4b4:
    if (ctx->pc == 0x1AE4B4u) {
        ctx->pc = 0x1AE4B4u;
            // 0x1ae4b4: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x1AE4B8u;
        goto label_1ae4b8;
    }
    ctx->pc = 0x1AE4B0u;
    SET_GPR_U32(ctx, 31, 0x1AE4B8u);
    ctx->pc = 0x1AE4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE4B0u;
            // 0x1ae4b4: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EEC0u;
    if (runtime->hasFunction(0x18EEC0u)) {
        auto targetFn = runtime->lookupFunction(0x18EEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE4B8u; }
        if (ctx->pc != 0x1AE4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetMicPos__FPfPf_0x18eec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE4B8u; }
        if (ctx->pc != 0x1AE4B8u) { return; }
    }
    ctx->pc = 0x1AE4B8u;
label_1ae4b8:
    // 0x1ae4b8: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ae4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae4bc:
    // 0x1ae4bc: 0xc0b2048  jal         func_2C8120
label_1ae4c0:
    if (ctx->pc == 0x1AE4C0u) {
        ctx->pc = 0x1AE4C0u;
            // 0x1ae4c0: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x1AE4C4u;
        goto label_1ae4c4;
    }
    ctx->pc = 0x1AE4BCu;
    SET_GPR_U32(ctx, 31, 0x1AE4C4u);
    ctx->pc = 0x1AE4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE4BCu;
            // 0x1ae4c0: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8120u;
    if (runtime->hasFunction(0x2C8120u)) {
        auto targetFn = runtime->lookupFunction(0x2C8120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE4C4u; }
        if (ctx->pc != 0x1AE4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FixCameraPartsOnOff__6CSceneFPf_0x2c8120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE4C4u; }
        if (ctx->pc != 0x1AE4C4u) { return; }
    }
    ctx->pc = 0x1AE4C4u;
label_1ae4c4:
    // 0x1ae4c4: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ae4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae4c8:
    // 0x1ae4c8: 0xc0b20dc  jal         func_2C8370
label_1ae4cc:
    if (ctx->pc == 0x1AE4CCu) {
        ctx->pc = 0x1AE4CCu;
            // 0x1ae4cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1AE4D0u;
        goto label_1ae4d0;
    }
    ctx->pc = 0x1AE4C8u;
    SET_GPR_U32(ctx, 31, 0x1AE4D0u);
    ctx->pc = 0x1AE4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE4C8u;
            // 0x1ae4cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8370u;
    if (runtime->hasFunction(0x2C8370u)) {
        auto targetFn = runtime->lookupFunction(0x2C8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE4D0u; }
        if (ctx->pc != 0x1AE4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSky__6CSceneFi_0x2c8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE4D0u; }
        if (ctx->pc != 0x1AE4D0u) { return; }
    }
    ctx->pc = 0x1AE4D0u;
label_1ae4d0:
    // 0x1ae4d0: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ae4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae4d4:
    // 0x1ae4d4: 0xc0a0f58  jal         func_283D60
label_1ae4d8:
    if (ctx->pc == 0x1AE4D8u) {
        ctx->pc = 0x1AE4D8u;
            // 0x1ae4d8: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x1AE4DCu;
        goto label_1ae4dc;
    }
    ctx->pc = 0x1AE4D4u;
    SET_GPR_U32(ctx, 31, 0x1AE4DCu);
    ctx->pc = 0x1AE4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE4D4u;
            // 0x1ae4d8: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE4DCu; }
        if (ctx->pc != 0x1AE4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE4DCu; }
        if (ctx->pc != 0x1AE4DCu) { return; }
    }
    ctx->pc = 0x1AE4DCu;
label_1ae4dc:
    // 0x1ae4dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ae4dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae4e0:
    // 0x1ae4e0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1ae4e4:
    if (ctx->pc == 0x1AE4E4u) {
        ctx->pc = 0x1AE4E4u;
            // 0x1ae4e4: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
        ctx->pc = 0x1AE4E8u;
        goto label_1ae4e8;
    }
    ctx->pc = 0x1AE4E0u;
    {
        const bool branch_taken_0x1ae4e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE4E0u;
            // 0x1ae4e4: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4e0) {
            ctx->pc = 0x1AE514u;
            goto label_1ae514;
        }
    }
    ctx->pc = 0x1AE4E8u;
label_1ae4e8:
    // 0x1ae4e8: 0x8e190d00  lw          $t9, 0xD00($s0)
    ctx->pc = 0x1ae4e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3328)));
label_1ae4ec:
    // 0x1ae4ec: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x1ae4ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_1ae4f0:
    // 0x1ae4f0: 0x320f809  jalr        $t9
label_1ae4f4:
    if (ctx->pc == 0x1AE4F4u) {
        ctx->pc = 0x1AE4F4u;
            // 0x1ae4f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE4F8u;
        goto label_1ae4f8;
    }
    ctx->pc = 0x1AE4F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AE4F8u);
        ctx->pc = 0x1AE4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE4F0u;
            // 0x1ae4f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AE4F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AE4F8u; }
            if (ctx->pc != 0x1AE4F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1AE4F8u;
label_1ae4f8:
    // 0x1ae4f8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ae4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1ae4fc:
    // 0x1ae4fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae500:
    // 0x1ae500: 0xc04a38a  jal         func_128E28
label_1ae504:
    if (ctx->pc == 0x1AE504u) {
        ctx->pc = 0x1AE504u;
            // 0x1ae504: 0x24a56438  addiu       $a1, $a1, 0x6438 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25656));
        ctx->pc = 0x1AE508u;
        goto label_1ae508;
    }
    ctx->pc = 0x1AE500u;
    SET_GPR_U32(ctx, 31, 0x1AE508u);
    ctx->pc = 0x1AE504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE500u;
            // 0x1ae504: 0x24a56438  addiu       $a1, $a1, 0x6438 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE508u; }
        if (ctx->pc != 0x1AE508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE508u; }
        if (ctx->pc != 0x1AE508u) { return; }
    }
    ctx->pc = 0x1AE508u;
label_1ae508:
    // 0x1ae508: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1ae50c:
    if (ctx->pc == 0x1AE50Cu) {
        ctx->pc = 0x1AE510u;
        goto label_1ae510;
    }
    ctx->pc = 0x1AE508u;
    {
        const bool branch_taken_0x1ae508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae508) {
            ctx->pc = 0x1AE514u;
            goto label_1ae514;
        }
    }
    ctx->pc = 0x1AE510u;
label_1ae510:
    // 0x1ae510: 0xafb000bc  sw          $s0, 0xBC($sp)
    ctx->pc = 0x1ae510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 16));
label_1ae514:
    // 0x1ae514: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1ae514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1ae518:
    // 0x1ae518: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ae51c:
    if (ctx->pc == 0x1AE51Cu) {
        ctx->pc = 0x1AE520u;
        goto label_1ae520;
    }
    ctx->pc = 0x1AE518u;
    {
        const bool branch_taken_0x1ae518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae518) {
            ctx->pc = 0x1AE534u;
            goto label_1ae534;
        }
    }
    ctx->pc = 0x1AE520u;
label_1ae520:
    // 0x1ae520: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1ae520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1ae524:
    // 0x1ae524: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ae528:
    if (ctx->pc == 0x1AE528u) {
        ctx->pc = 0x1AE528u;
            // 0x1ae528: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE52Cu;
        goto label_1ae52c;
    }
    ctx->pc = 0x1AE524u;
    {
        const bool branch_taken_0x1ae524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE524u;
            // 0x1ae528: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae524) {
            ctx->pc = 0x1AE534u;
            goto label_1ae534;
        }
    }
    ctx->pc = 0x1AE52Cu;
label_1ae52c:
    // 0x1ae52c: 0xc0a5b8c  jal         func_296E30
label_1ae530:
    if (ctx->pc == 0x1AE530u) {
        ctx->pc = 0x1AE534u;
        goto label_1ae534;
    }
    ctx->pc = 0x1AE52Cu;
    SET_GPR_U32(ctx, 31, 0x1AE534u);
    ctx->pc = 0x296E30u;
    if (runtime->hasFunction(0x296E30u)) {
        auto targetFn = runtime->lookupFunction(0x296E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE534u; }
        if (ctx->pc != 0x1AE534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawRiverMask__8CEditMapFv_0x296e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE534u; }
        if (ctx->pc != 0x1AE534u) { return; }
    }
    ctx->pc = 0x1AE534u;
label_1ae534:
    // 0x1ae534: 0xc0c39ac  jal         func_30E6B0
label_1ae538:
    if (ctx->pc == 0x1AE538u) {
        ctx->pc = 0x1AE53Cu;
        goto label_1ae53c;
    }
    ctx->pc = 0x1AE534u;
    SET_GPR_U32(ctx, 31, 0x1AE53Cu);
    ctx->pc = 0x30E6B0u;
    if (runtime->hasFunction(0x30E6B0u)) {
        auto targetFn = runtime->lookupFunction(0x30E6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE53Cu; }
        if (ctx->pc != 0x1AE53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GhostPhotoTiming__Fv_0x30e6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE53Cu; }
        if (ctx->pc != 0x1AE53Cu) { return; }
    }
    ctx->pc = 0x1AE53Cu;
label_1ae53c:
    // 0x1ae53c: 0x8f838cb0  lw          $v1, -0x7350($gp)
    ctx->pc = 0x1ae53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae540:
    // 0x1ae540: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ae540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae544:
    // 0x1ae544: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1ae544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1ae548:
    // 0x1ae548: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1ae548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ae54c:
    // 0x1ae54c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1ae54cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1ae550:
    // 0x1ae550: 0xc0a7124  jal         func_29C490
label_1ae554:
    if (ctx->pc == 0x1AE554u) {
        ctx->pc = 0x1AE554u;
            // 0x1ae554: 0xc46c2f6c  lwc1        $f12, 0x2F6C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1AE558u;
        goto label_1ae558;
    }
    ctx->pc = 0x1AE550u;
    SET_GPR_U32(ctx, 31, 0x1AE558u);
    ctx->pc = 0x1AE554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE550u;
            // 0x1ae554: 0xc46c2f6c  lwc1        $f12, 0x2F6C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C490u;
    if (runtime->hasFunction(0x29C490u)) {
        auto targetFn = runtime->lookupFunction(0x29C490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE558u; }
        if (ctx->pc != 0x1AE558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTime__Ffff_0x29c490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE558u; }
        if (ctx->pc != 0x1AE558u) { return; }
    }
    ctx->pc = 0x1AE558u;
label_1ae558:
    // 0x1ae558: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1ae55c:
    if (ctx->pc == 0x1AE55Cu) {
        ctx->pc = 0x1AE55Cu;
            // 0x1ae55c: 0x17082a  slt         $at, $zero, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
        ctx->pc = 0x1AE560u;
        goto label_1ae560;
    }
    ctx->pc = 0x1AE558u;
    {
        const bool branch_taken_0x1ae558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE558u;
            // 0x1ae55c: 0x17082a  slt         $at, $zero, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae558) {
            ctx->pc = 0x1AE564u;
            goto label_1ae564;
        }
    }
    ctx->pc = 0x1AE560u;
label_1ae560:
    // 0x1ae560: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ae560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae564:
    // 0x1ae564: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
label_1ae568:
    if (ctx->pc == 0x1AE568u) {
        ctx->pc = 0x1AE568u;
            // 0x1ae568: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE56Cu;
        goto label_1ae56c;
    }
    ctx->pc = 0x1AE564u;
    {
        const bool branch_taken_0x1ae564 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE564u;
            // 0x1ae568: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae564) {
            ctx->pc = 0x1AE648u;
            goto label_1ae648;
        }
    }
    ctx->pc = 0x1AE56Cu;
label_1ae56c:
    // 0x1ae56c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1ae56cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae570:
    // 0x1ae570: 0x2bd1021  addu        $v0, $s5, $sp
    ctx->pc = 0x1ae570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
label_1ae574:
    // 0x1ae574: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ae574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1ae578:
    // 0x1ae578: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x1ae578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
label_1ae57c:
    // 0x1ae57c: 0xc0571d4  jal         func_15C750
label_1ae580:
    if (ctx->pc == 0x1AE580u) {
        ctx->pc = 0x1AE580u;
            // 0x1ae580: 0x24a56448  addiu       $a1, $a1, 0x6448 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25672));
        ctx->pc = 0x1AE584u;
        goto label_1ae584;
    }
    ctx->pc = 0x1AE57Cu;
    SET_GPR_U32(ctx, 31, 0x1AE584u);
    ctx->pc = 0x1AE580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE57Cu;
            // 0x1ae580: 0x24a56448  addiu       $a1, $a1, 0x6448 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C750u;
    if (runtime->hasFunction(0x15C750u)) {
        auto targetFn = runtime->lookupFunction(0x15C750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE584u; }
        if (ctx->pc != 0x1AE584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchPartsGroup__4CMapFPc_0x15c750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE584u; }
        if (ctx->pc != 0x1AE584u) { return; }
    }
    ctx->pc = 0x1AE584u;
label_1ae584:
    // 0x1ae584: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_1ae588:
    if (ctx->pc == 0x1AE588u) {
        ctx->pc = 0x1AE58Cu;
        goto label_1ae58c;
    }
    ctx->pc = 0x1AE584u;
    {
        const bool branch_taken_0x1ae584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae584) {
            ctx->pc = 0x1AE634u;
            goto label_1ae634;
        }
    }
    ctx->pc = 0x1AE58Cu;
label_1ae58c:
    // 0x1ae58c: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x1ae58cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1ae590:
    // 0x1ae590: 0x12400028  beqz        $s2, . + 4 + (0x28 << 2)
label_1ae594:
    if (ctx->pc == 0x1AE594u) {
        ctx->pc = 0x1AE598u;
        goto label_1ae598;
    }
    ctx->pc = 0x1AE590u;
    {
        const bool branch_taken_0x1ae590 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae590) {
            ctx->pc = 0x1AE634u;
            goto label_1ae634;
        }
    }
    ctx->pc = 0x1AE598u;
label_1ae598:
    // 0x1ae598: 0x8e530008  lw          $s3, 0x8($s2)
    ctx->pc = 0x1ae598u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1ae59c:
    // 0x1ae59c: 0x12600021  beqz        $s3, . + 4 + (0x21 << 2)
label_1ae5a0:
    if (ctx->pc == 0x1AE5A0u) {
        ctx->pc = 0x1AE5A4u;
        goto label_1ae5a4;
    }
    ctx->pc = 0x1AE59Cu;
    {
        const bool branch_taken_0x1ae59c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae59c) {
            ctx->pc = 0x1AE624u;
            goto label_1ae624;
        }
    }
    ctx->pc = 0x1AE5A4u;
label_1ae5a4:
    // 0x1ae5a4: 0x8e7400b0  lw          $s4, 0xB0($s3)
    ctx->pc = 0x1ae5a4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_1ae5a8:
    // 0x1ae5a8: 0x1280001e  beqz        $s4, . + 4 + (0x1E << 2)
label_1ae5ac:
    if (ctx->pc == 0x1AE5ACu) {
        ctx->pc = 0x1AE5ACu;
            // 0x1ae5ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AE5B0u;
        goto label_1ae5b0;
    }
    ctx->pc = 0x1AE5A8u;
    {
        const bool branch_taken_0x1ae5a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE5A8u;
            // 0x1ae5ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5a8) {
            ctx->pc = 0x1AE624u;
            goto label_1ae624;
        }
    }
    ctx->pc = 0x1AE5B0u;
label_1ae5b0:
    // 0x1ae5b0: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x1ae5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1ae5b4:
    // 0x1ae5b4: 0xae820064  sw          $v0, 0x64($s4)
    ctx->pc = 0x1ae5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 2));
label_1ae5b8:
    // 0x1ae5b8: 0x8e990010  lw          $t9, 0x10($s4)
    ctx->pc = 0x1ae5b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1ae5bc:
    // 0x1ae5bc: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x1ae5bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_1ae5c0:
    // 0x1ae5c0: 0x320f809  jalr        $t9
label_1ae5c4:
    if (ctx->pc == 0x1AE5C4u) {
        ctx->pc = 0x1AE5C4u;
            // 0x1ae5c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5C8u;
        goto label_1ae5c8;
    }
    ctx->pc = 0x1AE5C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AE5C8u);
        ctx->pc = 0x1AE5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE5C0u;
            // 0x1ae5c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AE5C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AE5C8u; }
            if (ctx->pc != 0x1AE5C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1AE5C8u;
label_1ae5c8:
    // 0x1ae5c8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_1ae5cc:
    if (ctx->pc == 0x1AE5CCu) {
        ctx->pc = 0x1AE5CCu;
            // 0x1ae5cc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x1AE5D0u;
        goto label_1ae5d0;
    }
    ctx->pc = 0x1AE5C8u;
    {
        const bool branch_taken_0x1ae5c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE5C8u;
            // 0x1ae5cc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5c8) {
            ctx->pc = 0x1AE5D4u;
            goto label_1ae5d4;
        }
    }
    ctx->pc = 0x1AE5D0u;
label_1ae5d0:
    // 0x1ae5d0: 0xae820068  sw          $v0, 0x68($s4)
    ctx->pc = 0x1ae5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 2));
label_1ae5d4:
    // 0x1ae5d4: 0x0  nop
    ctx->pc = 0x1ae5d4u;
    // NOP
label_1ae5d8:
    // 0x1ae5d8: 0xc0a24f0  jal         func_2893C0
label_1ae5dc:
    if (ctx->pc == 0x1AE5DCu) {
        ctx->pc = 0x1AE5DCu;
            // 0x1ae5dc: 0xc68c0068  lwc1        $f12, 0x68($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1AE5E0u;
        goto label_1ae5e0;
    }
    ctx->pc = 0x1AE5D8u;
    SET_GPR_U32(ctx, 31, 0x1AE5E0u);
    ctx->pc = 0x1AE5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE5D8u;
            // 0x1ae5dc: 0xc68c0068  lwc1        $f12, 0x68($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE5E0u; }
        if (ctx->pc != 0x1AE5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE5E0u; }
        if (ctx->pc != 0x1AE5E0u) { return; }
    }
    ctx->pc = 0x1AE5E0u;
label_1ae5e0:
    // 0x1ae5e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae5e4:
    // 0x1ae5e4: 0xc040044  jal         func_100110
label_1ae5e8:
    if (ctx->pc == 0x1AE5E8u) {
        ctx->pc = 0x1AE5E8u;
            // 0x1ae5e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5ECu;
        goto label_1ae5ec;
    }
    ctx->pc = 0x1AE5E4u;
    SET_GPR_U32(ctx, 31, 0x1AE5ECu);
    ctx->pc = 0x1AE5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE5E4u;
            // 0x1ae5e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100110u;
    if (runtime->hasFunction(0x100110u)) {
        auto targetFn = runtime->lookupFunction(0x100110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE5ECu; }
        if (ctx->pc != 0x1AE5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfle_0x100110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE5ECu; }
        if (ctx->pc != 0x1AE5ECu) { return; }
    }
    ctx->pc = 0x1AE5ECu;
label_1ae5ec:
    // 0x1ae5ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ae5f0:
    if (ctx->pc == 0x1AE5F0u) {
        ctx->pc = 0x1AE5F4u;
        goto label_1ae5f4;
    }
    ctx->pc = 0x1AE5ECu;
    {
        const bool branch_taken_0x1ae5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae5ec) {
            ctx->pc = 0x1AE610u;
            goto label_1ae610;
        }
    }
    ctx->pc = 0x1AE5F4u;
label_1ae5f4:
    // 0x1ae5f4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1ae5f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ae5f8:
    // 0x1ae5f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ae5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ae5fc:
    // 0x1ae5fc: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x1ae5fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_1ae600:
    // 0x1ae600: 0x320f809  jalr        $t9
label_1ae604:
    if (ctx->pc == 0x1AE604u) {
        ctx->pc = 0x1AE604u;
            // 0x1ae604: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE608u;
        goto label_1ae608;
    }
    ctx->pc = 0x1AE600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AE608u);
        ctx->pc = 0x1AE604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE600u;
            // 0x1ae604: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AE608u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AE608u; }
            if (ctx->pc != 0x1AE608u) { return; }
        }
        }
    }
    ctx->pc = 0x1AE608u;
label_1ae608:
    // 0x1ae608: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ae60c:
    if (ctx->pc == 0x1AE60Cu) {
        ctx->pc = 0x1AE610u;
        goto label_1ae610;
    }
    ctx->pc = 0x1AE608u;
    {
        const bool branch_taken_0x1ae608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae608) {
            ctx->pc = 0x1AE624u;
            goto label_1ae624;
        }
    }
    ctx->pc = 0x1AE610u;
label_1ae610:
    // 0x1ae610: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1ae610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ae614:
    // 0x1ae614: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ae614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ae618:
    // 0x1ae618: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x1ae618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_1ae61c:
    // 0x1ae61c: 0x320f809  jalr        $t9
label_1ae620:
    if (ctx->pc == 0x1AE620u) {
        ctx->pc = 0x1AE620u;
            // 0x1ae620: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AE624u;
        goto label_1ae624;
    }
    ctx->pc = 0x1AE61Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AE624u);
        ctx->pc = 0x1AE620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE61Cu;
            // 0x1ae620: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AE624u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AE624u; }
            if (ctx->pc != 0x1AE624u) { return; }
        }
        }
    }
    ctx->pc = 0x1AE624u;
label_1ae624:
    // 0x1ae624: 0x0  nop
    ctx->pc = 0x1ae624u;
    // NOP
label_1ae628:
    // 0x1ae628: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1ae628u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ae62c:
    // 0x1ae62c: 0x1640ffda  bnez        $s2, . + 4 + (-0x26 << 2)
label_1ae630:
    if (ctx->pc == 0x1AE630u) {
        ctx->pc = 0x1AE634u;
        goto label_1ae634;
    }
    ctx->pc = 0x1AE62Cu;
    {
        const bool branch_taken_0x1ae62c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae62c) {
            ctx->pc = 0x1AE598u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ae598;
        }
    }
    ctx->pc = 0x1AE634u;
label_1ae634:
    // 0x1ae634: 0x0  nop
    ctx->pc = 0x1ae634u;
    // NOP
label_1ae638:
    // 0x1ae638: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ae638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ae63c:
    // 0x1ae63c: 0x217102a  slt         $v0, $s0, $s7
    ctx->pc = 0x1ae63cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_1ae640:
    // 0x1ae640: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
label_1ae644:
    if (ctx->pc == 0x1AE644u) {
        ctx->pc = 0x1AE644u;
            // 0x1ae644: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x1AE648u;
        goto label_1ae648;
    }
    ctx->pc = 0x1AE640u;
    {
        const bool branch_taken_0x1ae640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE640u;
            // 0x1ae644: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae640) {
            ctx->pc = 0x1AE570u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ae570;
        }
    }
    ctx->pc = 0x1AE648u;
label_1ae648:
    // 0x1ae648: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ae648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ae64c:
    // 0x1ae64c: 0xac20e984  sw          $zero, -0x167C($at)
    ctx->pc = 0x1ae64cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961540), GPR_U32(ctx, 0));
label_1ae650:
    // 0x1ae650: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae654:
    // 0x1ae654: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ae654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ae658:
    // 0x1ae658: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ae658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae65c:
    // 0x1ae65c: 0xac20e97c  sw          $zero, -0x1684($at)
    ctx->pc = 0x1ae65cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961532), GPR_U32(ctx, 0));
label_1ae660:
    // 0x1ae660: 0xdd1821  addu        $v1, $a2, $sp
    ctx->pc = 0x1ae660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
label_1ae664:
    // 0x1ae664: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1ae664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1ae668:
    // 0x1ae668: 0x24670140  addiu       $a3, $v1, 0x140
    ctx->pc = 0x1ae668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
label_1ae66c:
    // 0x1ae66c: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x1ae66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_1ae670:
    // 0x1ae670: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1ae670u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_1ae674:
    // 0x1ae674: 0x24a30003  addiu       $v1, $a1, 0x3
    ctx->pc = 0x1ae674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_1ae678:
    // 0x1ae678: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1ae678u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_1ae67c:
    // 0x1ae67c: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x1ae67cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
label_1ae680:
    // 0x1ae680: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x1ae680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1ae684:
    // 0x1ae684: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x1ae684u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
label_1ae688:
    // 0x1ae688: 0x24a40005  addiu       $a0, $a1, 0x5
    ctx->pc = 0x1ae688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
label_1ae68c:
    // 0x1ae68c: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x1ae68cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
label_1ae690:
    // 0x1ae690: 0x24a30006  addiu       $v1, $a1, 0x6
    ctx->pc = 0x1ae690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
label_1ae694:
    // 0x1ae694: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x1ae694u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
label_1ae698:
    // 0x1ae698: 0x24a20007  addiu       $v0, $a1, 0x7
    ctx->pc = 0x1ae698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_1ae69c:
    // 0x1ae69c: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x1ae69cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_1ae6a0:
    // 0x1ae6a0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1ae6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1ae6a4:
    // 0x1ae6a4: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x1ae6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
label_1ae6a8:
    // 0x1ae6a8: 0x28a20040  slti        $v0, $a1, 0x40
    ctx->pc = 0x1ae6a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
label_1ae6ac:
    // 0x1ae6ac: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1ae6b0:
    if (ctx->pc == 0x1AE6B0u) {
        ctx->pc = 0x1AE6B0u;
            // 0x1ae6b0: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->pc = 0x1AE6B4u;
        goto label_1ae6b4;
    }
    ctx->pc = 0x1AE6ACu;
    {
        const bool branch_taken_0x1ae6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE6ACu;
            // 0x1ae6b0: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6ac) {
            ctx->pc = 0x1AE660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ae660;
        }
    }
    ctx->pc = 0x1AE6B4u;
label_1ae6b4:
    // 0x1ae6b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ae6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ae6b8:
    // 0x1ae6b8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ae6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1ae6bc:
    // 0x1ae6bc: 0x2484e960  addiu       $a0, $a0, -0x16A0
    ctx->pc = 0x1ae6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961504));
label_1ae6c0:
    // 0x1ae6c0: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x1ae6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
label_1ae6c4:
    // 0x1ae6c4: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1ae6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1ae6c8:
    // 0x1ae6c8: 0xc050940  jal         func_142500
label_1ae6cc:
    if (ctx->pc == 0x1AE6CCu) {
        ctx->pc = 0x1AE6CCu;
            // 0x1ae6cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE6D0u;
        goto label_1ae6d0;
    }
    ctx->pc = 0x1AE6C8u;
    SET_GPR_U32(ctx, 31, 0x1AE6D0u);
    ctx->pc = 0x1AE6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE6C8u;
            // 0x1ae6cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142500u;
    if (runtime->hasFunction(0x142500u)) {
        auto targetFn = runtime->lookupFunction(0x142500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE6D0u; }
        if (ctx->pc != 0x1AE6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgBeginDraw__FP9mgCMemoryPiP14mgCDrawManager_0x142500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE6D0u; }
        if (ctx->pc != 0x1AE6D0u) { return; }
    }
    ctx->pc = 0x1AE6D0u;
label_1ae6d0:
    // 0x1ae6d0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1ae6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1ae6d4:
    // 0x1ae6d4: 0x104000b6  beqz        $v0, . + 4 + (0xB6 << 2)
label_1ae6d8:
    if (ctx->pc == 0x1AE6D8u) {
        ctx->pc = 0x1AE6DCu;
        goto label_1ae6dc;
    }
    ctx->pc = 0x1AE6D4u;
    {
        const bool branch_taken_0x1ae6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae6d4) {
            ctx->pc = 0x1AE9B0u;
            goto label_1ae9b0;
        }
    }
    ctx->pc = 0x1AE6DCu;
label_1ae6dc:
    // 0x1ae6dc: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1ae6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1ae6e0:
    // 0x1ae6e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ae6e4:
    if (ctx->pc == 0x1AE6E4u) {
        ctx->pc = 0x1AE6E4u;
            // 0x1ae6e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE6E8u;
        goto label_1ae6e8;
    }
    ctx->pc = 0x1AE6E0u;
    {
        const bool branch_taken_0x1ae6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE6E0u;
            // 0x1ae6e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6e0) {
            ctx->pc = 0x1AE6F0u;
            goto label_1ae6f0;
        }
    }
    ctx->pc = 0x1AE6E8u;
label_1ae6e8:
    // 0x1ae6e8: 0xc0a5cd4  jal         func_297350
label_1ae6ec:
    if (ctx->pc == 0x1AE6ECu) {
        ctx->pc = 0x1AE6F0u;
        goto label_1ae6f0;
    }
    ctx->pc = 0x1AE6E8u;
    SET_GPR_U32(ctx, 31, 0x1AE6F0u);
    ctx->pc = 0x297350u;
    if (runtime->hasFunction(0x297350u)) {
        auto targetFn = runtime->lookupFunction(0x297350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE6F0u; }
        if (ctx->pc != 0x1AE6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawRiver__8CEditMapFv_0x297350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE6F0u; }
        if (ctx->pc != 0x1AE6F0u) { return; }
    }
    ctx->pc = 0x1AE6F0u;
label_1ae6f0:
    // 0x1ae6f0: 0xc0bef74  jal         func_2FBDD0
label_1ae6f4:
    if (ctx->pc == 0x1AE6F4u) {
        ctx->pc = 0x1AE6F8u;
        goto label_1ae6f8;
    }
    ctx->pc = 0x1AE6F0u;
    SET_GPR_U32(ctx, 31, 0x1AE6F8u);
    ctx->pc = 0x2FBDD0u;
    if (runtime->hasFunction(0x2FBDD0u)) {
        auto targetFn = runtime->lookupFunction(0x2FBDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE6F8u; }
        if (ctx->pc != 0x1AE6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditPlaceAnime__Fv_0x2fbdd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE6F8u; }
        if (ctx->pc != 0x1AE6F8u) { return; }
    }
    ctx->pc = 0x1AE6F8u;
label_1ae6f8:
    // 0x1ae6f8: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x1ae6f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_1ae6fc:
    // 0x1ae6fc: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
label_1ae700:
    if (ctx->pc == 0x1AE700u) {
        ctx->pc = 0x1AE700u;
            // 0x1ae700: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE704u;
        goto label_1ae704;
    }
    ctx->pc = 0x1AE6FCu;
    {
        const bool branch_taken_0x1ae6fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE6FCu;
            // 0x1ae700: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6fc) {
            ctx->pc = 0x1AE768u;
            goto label_1ae768;
        }
    }
    ctx->pc = 0x1AE704u;
label_1ae704:
    // 0x1ae704: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ae704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae708:
    // 0x1ae708: 0x8f848c74  lw          $a0, -0x738C($gp)
    ctx->pc = 0x1ae708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937716)));
label_1ae70c:
    // 0x1ae70c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1ae710:
    if (ctx->pc == 0x1AE710u) {
        ctx->pc = 0x1AE714u;
        goto label_1ae714;
    }
    ctx->pc = 0x1AE70Cu;
    {
        const bool branch_taken_0x1ae70c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae70c) {
            ctx->pc = 0x1AE724u;
            goto label_1ae724;
        }
    }
    ctx->pc = 0x1AE714u;
label_1ae714:
    // 0x1ae714: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ae714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ae718:
    // 0x1ae718: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ae718u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ae71c:
    // 0x1ae71c: 0x320f809  jalr        $t9
label_1ae720:
    if (ctx->pc == 0x1AE720u) {
        ctx->pc = 0x1AE720u;
            // 0x1ae720: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x1AE724u;
        goto label_1ae724;
    }
    ctx->pc = 0x1AE71Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AE724u);
        ctx->pc = 0x1AE720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE71Cu;
            // 0x1ae720: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AE724u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AE724u; }
            if (ctx->pc != 0x1AE724u) { return; }
        }
        }
    }
    ctx->pc = 0x1AE724u;
label_1ae724:
    // 0x1ae724: 0x0  nop
    ctx->pc = 0x1ae724u;
    // NOP
label_1ae728:
    // 0x1ae728: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x1ae728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
label_1ae72c:
    // 0x1ae72c: 0x245200c0  addiu       $s2, $v0, 0xC0
    ctx->pc = 0x1ae72cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_1ae730:
    // 0x1ae730: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1ae730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ae734:
    // 0x1ae734: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x1ae734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_1ae738:
    // 0x1ae738: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1ae738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1ae73c:
    // 0x1ae73c: 0x320f809  jalr        $t9
label_1ae740:
    if (ctx->pc == 0x1AE740u) {
        ctx->pc = 0x1AE740u;
            // 0x1ae740: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x1AE744u;
        goto label_1ae744;
    }
    ctx->pc = 0x1AE73Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AE744u);
        ctx->pc = 0x1AE740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE73Cu;
            // 0x1ae740: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AE744u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AE744u; }
            if (ctx->pc != 0x1AE744u) { return; }
        }
        }
    }
    ctx->pc = 0x1AE744u;
label_1ae744:
    // 0x1ae744: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1ae744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ae748:
    // 0x1ae748: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x1ae748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_1ae74c:
    // 0x1ae74c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1ae74cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1ae750:
    // 0x1ae750: 0x320f809  jalr        $t9
label_1ae754:
    if (ctx->pc == 0x1AE754u) {
        ctx->pc = 0x1AE758u;
        goto label_1ae758;
    }
    ctx->pc = 0x1AE750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AE758u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AE758u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AE758u; }
            if (ctx->pc != 0x1AE758u) { return; }
        }
        }
    }
    ctx->pc = 0x1AE758u;
label_1ae758:
    // 0x1ae758: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ae758u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ae75c:
    // 0x1ae75c: 0x237102a  slt         $v0, $s1, $s7
    ctx->pc = 0x1ae75cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_1ae760:
    // 0x1ae760: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_1ae764:
    if (ctx->pc == 0x1AE764u) {
        ctx->pc = 0x1AE764u;
            // 0x1ae764: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x1AE768u;
        goto label_1ae768;
    }
    ctx->pc = 0x1AE760u;
    {
        const bool branch_taken_0x1ae760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE760u;
            // 0x1ae764: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae760) {
            ctx->pc = 0x1AE708u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ae708;
        }
    }
    ctx->pc = 0x1AE768u;
label_1ae768:
    // 0x1ae768: 0xc050ebc  jal         func_143AF0
label_1ae76c:
    if (ctx->pc == 0x1AE76Cu) {
        ctx->pc = 0x1AE76Cu;
            // 0x1ae76c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AE770u;
        goto label_1ae770;
    }
    ctx->pc = 0x1AE768u;
    SET_GPR_U32(ctx, 31, 0x1AE770u);
    ctx->pc = 0x1AE76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE768u;
            // 0x1ae76c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143AF0u;
    if (runtime->hasFunction(0x143AF0u)) {
        auto targetFn = runtime->lookupFunction(0x143AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE770u; }
        if (ctx->pc != 0x1AE770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkTextureRepeat__Fi_0x143af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE770u; }
        if (ctx->pc != 0x1AE770u) { return; }
    }
    ctx->pc = 0x1AE770u;
label_1ae770:
    // 0x1ae770: 0xc06a6e8  jal         func_1A9BA0
label_1ae774:
    if (ctx->pc == 0x1AE774u) {
        ctx->pc = 0x1AE778u;
        goto label_1ae778;
    }
    ctx->pc = 0x1AE770u;
    SET_GPR_U32(ctx, 31, 0x1AE778u);
    ctx->pc = 0x1A9BA0u;
    if (runtime->hasFunction(0x1A9BA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A9BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE778u; }
        if (ctx->pc != 0x1AE778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsEditMode__Fv_0x1a9ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE778u; }
        if (ctx->pc != 0x1AE778u) { return; }
    }
    ctx->pc = 0x1AE778u;
label_1ae778:
    // 0x1ae778: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ae77c:
    if (ctx->pc == 0x1AE77Cu) {
        ctx->pc = 0x1AE780u;
        goto label_1ae780;
    }
    ctx->pc = 0x1AE778u;
    {
        const bool branch_taken_0x1ae778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae778) {
            ctx->pc = 0x1AE79Cu;
            goto label_1ae79c;
        }
    }
    ctx->pc = 0x1AE780u;
label_1ae780:
    // 0x1ae780: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1ae780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1ae784:
    // 0x1ae784: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ae788:
    if (ctx->pc == 0x1AE788u) {
        ctx->pc = 0x1AE78Cu;
        goto label_1ae78c;
    }
    ctx->pc = 0x1AE784u;
    {
        const bool branch_taken_0x1ae784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae784) {
            ctx->pc = 0x1AE79Cu;
            goto label_1ae79c;
        }
    }
    ctx->pc = 0x1AE78Cu;
label_1ae78c:
    // 0x1ae78c: 0xc0b70e0  jal         func_2DC380
label_1ae790:
    if (ctx->pc == 0x1AE790u) {
        ctx->pc = 0x1AE790u;
            // 0x1ae790: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AE794u;
        goto label_1ae794;
    }
    ctx->pc = 0x1AE78Cu;
    SET_GPR_U32(ctx, 31, 0x1AE794u);
    ctx->pc = 0x1AE790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE78Cu;
            // 0x1ae790: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DC380u;
    if (runtime->hasFunction(0x2DC380u)) {
        auto targetFn = runtime->lookupFunction(0x2DC380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE794u; }
        if (ctx->pc != 0x1AE794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawEditCursorParts__FP6CScene_0x2dc380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE794u; }
        if (ctx->pc != 0x1AE794u) { return; }
    }
    ctx->pc = 0x1AE794u;
label_1ae794:
    // 0x1ae794: 0xc0bef9c  jal         func_2FBE70
label_1ae798:
    if (ctx->pc == 0x1AE798u) {
        ctx->pc = 0x1AE79Cu;
        goto label_1ae79c;
    }
    ctx->pc = 0x1AE794u;
    SET_GPR_U32(ctx, 31, 0x1AE79Cu);
    ctx->pc = 0x2FBE70u;
    if (runtime->hasFunction(0x2FBE70u)) {
        auto targetFn = runtime->lookupFunction(0x2FBE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE79Cu; }
        if (ctx->pc != 0x1AE79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditPlaceAnimeDraw__Fv_0x2fbe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE79Cu; }
        if (ctx->pc != 0x1AE79Cu) { return; }
    }
    ctx->pc = 0x1AE79Cu;
label_1ae79c:
    // 0x1ae79c: 0xc0bef88  jal         func_2FBE20
label_1ae7a0:
    if (ctx->pc == 0x1AE7A0u) {
        ctx->pc = 0x1AE7A4u;
        goto label_1ae7a4;
    }
    ctx->pc = 0x1AE79Cu;
    SET_GPR_U32(ctx, 31, 0x1AE7A4u);
    ctx->pc = 0x2FBE20u;
    if (runtime->hasFunction(0x2FBE20u)) {
        auto targetFn = runtime->lookupFunction(0x2FBE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE7A4u; }
        if (ctx->pc != 0x1AE7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditPlaceAnime2__Fv_0x2fbe20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE7A4u; }
        if (ctx->pc != 0x1AE7A4u) { return; }
    }
    ctx->pc = 0x1AE7A4u;
label_1ae7a4:
    // 0x1ae7a4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ae7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1ae7a8:
    // 0x1ae7a8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1ae7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ae7ac:
    // 0x1ae7ac: 0x24a56450  addiu       $a1, $a1, 0x6450
    ctx->pc = 0x1ae7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25680));
label_1ae7b0:
    // 0x1ae7b0: 0xc04b414  jal         func_12D050
label_1ae7b4:
    if (ctx->pc == 0x1AE7B4u) {
        ctx->pc = 0x1AE7B4u;
            // 0x1ae7b4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1AE7B8u;
        goto label_1ae7b8;
    }
    ctx->pc = 0x1AE7B0u;
    SET_GPR_U32(ctx, 31, 0x1AE7B8u);
    ctx->pc = 0x1AE7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE7B0u;
            // 0x1ae7b4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE7B8u; }
        if (ctx->pc != 0x1AE7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE7B8u; }
        if (ctx->pc != 0x1AE7B8u) { return; }
    }
    ctx->pc = 0x1AE7B8u;
label_1ae7b8:
    // 0x1ae7b8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1ae7b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae7bc:
    // 0x1ae7bc: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_1ae7c0:
    if (ctx->pc == 0x1AE7C0u) {
        ctx->pc = 0x1AE7C0u;
            // 0x1ae7c0: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1AE7C4u;
        goto label_1ae7c4;
    }
    ctx->pc = 0x1AE7BCu;
    {
        const bool branch_taken_0x1ae7bc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE7BCu;
            // 0x1ae7c0: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae7bc) {
            ctx->pc = 0x1AE7D4u;
            goto label_1ae7d4;
        }
    }
    ctx->pc = 0x1AE7C4u;
label_1ae7c4:
    // 0x1ae7c4: 0x86b60000  lh          $s6, 0x0($s5)
    ctx->pc = 0x1ae7c4u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_1ae7c8:
    // 0x1ae7c8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ae7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1ae7cc:
    // 0x1ae7cc: 0xc068984  jal         func_1A2610
label_1ae7d0:
    if (ctx->pc == 0x1AE7D0u) {
        ctx->pc = 0x1AE7D0u;
            // 0x1ae7d0: 0x2484b440  addiu       $a0, $a0, -0x4BC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947904));
        ctx->pc = 0x1AE7D4u;
        goto label_1ae7d4;
    }
    ctx->pc = 0x1AE7CCu;
    SET_GPR_U32(ctx, 31, 0x1AE7D4u);
    ctx->pc = 0x1AE7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE7CCu;
            // 0x1ae7d0: 0x2484b440  addiu       $a0, $a0, -0x4BC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2610u;
    if (runtime->hasFunction(0x1A2610u)) {
        auto targetFn = runtime->lookupFunction(0x1A2610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE7D4u; }
        if (ctx->pc != 0x1AE7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEffect__10CWaveTableFv_0x1a2610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE7D4u; }
        if (ctx->pc != 0x1AE7D4u) { return; }
    }
    ctx->pc = 0x1AE7D4u;
label_1ae7d4:
    // 0x1ae7d4: 0xc050950  jal         func_142540
label_1ae7d8:
    if (ctx->pc == 0x1AE7D8u) {
        ctx->pc = 0x1AE7D8u;
            // 0x1ae7d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE7DCu;
        goto label_1ae7dc;
    }
    ctx->pc = 0x1AE7D4u;
    SET_GPR_U32(ctx, 31, 0x1AE7DCu);
    ctx->pc = 0x1AE7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE7D4u;
            // 0x1ae7d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142540u;
    if (runtime->hasFunction(0x142540u)) {
        auto targetFn = runtime->lookupFunction(0x142540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE7DCu; }
        if (ctx->pc != 0x1AE7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPreEndDraw__FP14mgCDrawManager_0x142540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE7DCu; }
        if (ctx->pc != 0x1AE7DCu) { return; }
    }
    ctx->pc = 0x1AE7DCu;
label_1ae7dc:
    // 0x1ae7dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ae7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae7e0:
    // 0x1ae7e0: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1ae7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae7e4:
    // 0x1ae7e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ae7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae7e8:
    // 0x1ae7e8: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x1ae7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_1ae7ec:
    // 0x1ae7ec: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1ae7ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ae7f0:
    // 0x1ae7f0: 0xc05a3f4  jal         func_168FD0
label_1ae7f4:
    if (ctx->pc == 0x1AE7F4u) {
        ctx->pc = 0x1AE7F4u;
            // 0x1ae7f4: 0x244423d0  addiu       $a0, $v0, 0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9168));
        ctx->pc = 0x1AE7F8u;
        goto label_1ae7f8;
    }
    ctx->pc = 0x1AE7F0u;
    SET_GPR_U32(ctx, 31, 0x1AE7F8u);
    ctx->pc = 0x1AE7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE7F0u;
            // 0x1ae7f4: 0x244423d0  addiu       $a0, $v0, 0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168FD0u;
    if (runtime->hasFunction(0x168FD0u)) {
        auto targetFn = runtime->lookupFunction(0x168FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE7F8u; }
        if (ctx->pc != 0x1AE7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextureBlockNo__11CMdsListSetFiPii_0x168fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE7F8u; }
        if (ctx->pc != 0x1AE7F8u) { return; }
    }
    ctx->pc = 0x1AE7F8u;
label_1ae7f8:
    // 0x1ae7f8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1ae7f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ae7fc:
    // 0x1ae7fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ae7fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae800:
    // 0x1ae800: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
label_1ae804:
    if (ctx->pc == 0x1AE804u) {
        ctx->pc = 0x1AE804u;
            // 0x1ae804: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE808u;
        goto label_1ae808;
    }
    ctx->pc = 0x1AE800u;
    {
        const bool branch_taken_0x1ae800 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE800u;
            // 0x1ae804: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae800) {
            ctx->pc = 0x1AE86Cu;
            goto label_1ae86c;
        }
    }
    ctx->pc = 0x1AE808u;
label_1ae808:
    // 0x1ae808: 0x2711023  subu        $v0, $s3, $s1
    ctx->pc = 0x1ae808u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_1ae80c:
    // 0x1ae80c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ae80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ae810:
    // 0x1ae810: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae814:
    // 0x1ae814: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ae818:
    // 0x1ae818: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1ae818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1ae81c:
    // 0x1ae81c: 0x24540260  addiu       $s4, $v0, 0x260
    ctx->pc = 0x1ae81cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
label_1ae820:
    // 0x1ae820: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x1ae820u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1ae824:
    // 0x1ae824: 0xc050958  jal         func_142560
label_1ae828:
    if (ctx->pc == 0x1AE828u) {
        ctx->pc = 0x1AE828u;
            // 0x1ae828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE82Cu;
        goto label_1ae82c;
    }
    ctx->pc = 0x1AE824u;
    SET_GPR_U32(ctx, 31, 0x1AE82Cu);
    ctx->pc = 0x1AE828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE824u;
            // 0x1ae828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142560u;
    if (runtime->hasFunction(0x142560u)) {
        auto targetFn = runtime->lookupFunction(0x142560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE82Cu; }
        if (ctx->pc != 0x1AE82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndDrawReloadTexture__FiP14mgCDrawManager_0x142560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE82Cu; }
        if (ctx->pc != 0x1AE82Cu) { return; }
    }
    ctx->pc = 0x1AE82Cu;
label_1ae82c:
    // 0x1ae82c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1ae830:
    if (ctx->pc == 0x1AE830u) {
        ctx->pc = 0x1AE834u;
        goto label_1ae834;
    }
    ctx->pc = 0x1AE82Cu;
    {
        const bool branch_taken_0x1ae82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae82c) {
            ctx->pc = 0x1AE84Cu;
            goto label_1ae84c;
        }
    }
    ctx->pc = 0x1AE834u;
label_1ae834:
    // 0x1ae834: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1ae834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1ae838:
    // 0x1ae838: 0x16c20004  bne         $s6, $v0, . + 4 + (0x4 << 2)
label_1ae83c:
    if (ctx->pc == 0x1AE83Cu) {
        ctx->pc = 0x1AE83Cu;
            // 0x1ae83c: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1AE840u;
        goto label_1ae840;
    }
    ctx->pc = 0x1AE838u;
    {
        const bool branch_taken_0x1ae838 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE838u;
            // 0x1ae83c: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae838) {
            ctx->pc = 0x1AE84Cu;
            goto label_1ae84c;
        }
    }
    ctx->pc = 0x1AE840u;
label_1ae840:
    // 0x1ae840: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ae840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ae844:
    // 0x1ae844: 0xc06887c  jal         func_1A21F0
label_1ae848:
    if (ctx->pc == 0x1AE848u) {
        ctx->pc = 0x1AE848u;
            // 0x1ae848: 0x2484b440  addiu       $a0, $a0, -0x4BC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947904));
        ctx->pc = 0x1AE84Cu;
        goto label_1ae84c;
    }
    ctx->pc = 0x1AE844u;
    SET_GPR_U32(ctx, 31, 0x1AE84Cu);
    ctx->pc = 0x1AE848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE844u;
            // 0x1ae848: 0x2484b440  addiu       $a0, $a0, -0x4BC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A21F0u;
    if (runtime->hasFunction(0x1A21F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A21F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE84Cu; }
        if (ctx->pc != 0x1AE84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateTexture__10CWaveTableFP10mgCTexture_0x1a21f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE84Cu; }
        if (ctx->pc != 0x1AE84Cu) { return; }
    }
    ctx->pc = 0x1AE84Cu;
label_1ae84c:
    // 0x1ae84c: 0x0  nop
    ctx->pc = 0x1ae84cu;
    // NOP
label_1ae850:
    // 0x1ae850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ae850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ae854:
    // 0x1ae854: 0xc050960  jal         func_142580
label_1ae858:
    if (ctx->pc == 0x1AE858u) {
        ctx->pc = 0x1AE858u;
            // 0x1ae858: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE85Cu;
        goto label_1ae85c;
    }
    ctx->pc = 0x1AE854u;
    SET_GPR_U32(ctx, 31, 0x1AE85Cu);
    ctx->pc = 0x1AE858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE854u;
            // 0x1ae858: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142580u;
    if (runtime->hasFunction(0x142580u)) {
        auto targetFn = runtime->lookupFunction(0x142580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE85Cu; }
        if (ctx->pc != 0x1AE85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndDraw__FiP14mgCDrawManager_0x142580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE85Cu; }
        if (ctx->pc != 0x1AE85Cu) { return; }
    }
    ctx->pc = 0x1AE85Cu;
label_1ae85c:
    // 0x1ae85c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ae85cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ae860:
    // 0x1ae860: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x1ae860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1ae864:
    // 0x1ae864: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_1ae868:
    if (ctx->pc == 0x1AE868u) {
        ctx->pc = 0x1AE86Cu;
        goto label_1ae86c;
    }
    ctx->pc = 0x1AE864u;
    {
        const bool branch_taken_0x1ae864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae864) {
            ctx->pc = 0x1AE808u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ae808;
        }
    }
    ctx->pc = 0x1AE86Cu;
label_1ae86c:
    // 0x1ae86c: 0x0  nop
    ctx->pc = 0x1ae86cu;
    // NOP
label_1ae870:
    // 0x1ae870: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ae870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ae874:
    // 0x1ae874: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x1ae874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_1ae878:
    // 0x1ae878: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_1ae87c:
    if (ctx->pc == 0x1AE87Cu) {
        ctx->pc = 0x1AE87Cu;
            // 0x1ae87c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE880u;
        goto label_1ae880;
    }
    ctx->pc = 0x1AE878u;
    {
        const bool branch_taken_0x1ae878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE878u;
            // 0x1ae87c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae878) {
            ctx->pc = 0x1AE7E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ae7e0;
        }
    }
    ctx->pc = 0x1AE880u;
label_1ae880:
    // 0x1ae880: 0xc050ebc  jal         func_143AF0
label_1ae884:
    if (ctx->pc == 0x1AE884u) {
        ctx->pc = 0x1AE888u;
        goto label_1ae888;
    }
    ctx->pc = 0x1AE880u;
    SET_GPR_U32(ctx, 31, 0x1AE888u);
    ctx->pc = 0x143AF0u;
    if (runtime->hasFunction(0x143AF0u)) {
        auto targetFn = runtime->lookupFunction(0x143AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE888u; }
        if (ctx->pc != 0x1AE888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkTextureRepeat__Fi_0x143af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE888u; }
        if (ctx->pc != 0x1AE888u) { return; }
    }
    ctx->pc = 0x1AE888u;
label_1ae888:
    // 0x1ae888: 0xc0c10f4  jal         func_3043D0
label_1ae88c:
    if (ctx->pc == 0x1AE88Cu) {
        ctx->pc = 0x1AE890u;
        goto label_1ae890;
    }
    ctx->pc = 0x1AE888u;
    SET_GPR_U32(ctx, 31, 0x1AE890u);
    ctx->pc = 0x3043D0u;
    if (runtime->hasFunction(0x3043D0u)) {
        auto targetFn = runtime->lookupFunction(0x3043D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE890u; }
        if (ctx->pc != 0x1AE890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgDrawSubGameMap__Fv_0x3043d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE890u; }
        if (ctx->pc != 0x1AE890u) { return; }
    }
    ctx->pc = 0x1AE890u;
label_1ae890:
    // 0x1ae890: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ae890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae894:
    // 0x1ae894: 0xc0a0f58  jal         func_283D60
label_1ae898:
    if (ctx->pc == 0x1AE898u) {
        ctx->pc = 0x1AE898u;
            // 0x1ae898: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x1AE89Cu;
        goto label_1ae89c;
    }
    ctx->pc = 0x1AE894u;
    SET_GPR_U32(ctx, 31, 0x1AE89Cu);
    ctx->pc = 0x1AE898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE894u;
            // 0x1ae898: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE89Cu; }
        if (ctx->pc != 0x1AE89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE89Cu; }
        if (ctx->pc != 0x1AE89Cu) { return; }
    }
    ctx->pc = 0x1AE89Cu;
label_1ae89c:
    // 0x1ae89c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ae8a0:
    if (ctx->pc == 0x1AE8A0u) {
        ctx->pc = 0x1AE8A0u;
            // 0x1ae8a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE8A4u;
        goto label_1ae8a4;
    }
    ctx->pc = 0x1AE89Cu;
    {
        const bool branch_taken_0x1ae89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE89Cu;
            // 0x1ae8a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae89c) {
            ctx->pc = 0x1AE8B0u;
            goto label_1ae8b0;
        }
    }
    ctx->pc = 0x1AE8A4u;
label_1ae8a4:
    // 0x1ae8a4: 0xc05835c  jal         func_160D70
label_1ae8a8:
    if (ctx->pc == 0x1AE8A8u) {
        ctx->pc = 0x1AE8A8u;
            // 0x1ae8a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE8ACu;
        goto label_1ae8ac;
    }
    ctx->pc = 0x1AE8A4u;
    SET_GPR_U32(ctx, 31, 0x1AE8ACu);
    ctx->pc = 0x1AE8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE8A4u;
            // 0x1ae8a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160D70u;
    if (runtime->hasFunction(0x160D70u)) {
        auto targetFn = runtime->lookupFunction(0x160D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE8ACu; }
        if (ctx->pc != 0x1AE8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowTimeBand__4CMapFv_0x160d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE8ACu; }
        if (ctx->pc != 0x1AE8ACu) { return; }
    }
    ctx->pc = 0x1AE8ACu;
label_1ae8ac:
    // 0x1ae8ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ae8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae8b0:
    // 0x1ae8b0: 0xc064220  jal         func_190880
label_1ae8b4:
    if (ctx->pc == 0x1AE8B4u) {
        ctx->pc = 0x1AE8B8u;
        goto label_1ae8b8;
    }
    ctx->pc = 0x1AE8B0u;
    SET_GPR_U32(ctx, 31, 0x1AE8B8u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE8B8u; }
        if (ctx->pc != 0x1AE8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE8B8u; }
        if (ctx->pc != 0x1AE8B8u) { return; }
    }
    ctx->pc = 0x1AE8B8u;
label_1ae8b8:
    // 0x1ae8b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ae8bc:
    if (ctx->pc == 0x1AE8BCu) {
        ctx->pc = 0x1AE8C0u;
        goto label_1ae8c0;
    }
    ctx->pc = 0x1AE8B8u;
    {
        const bool branch_taken_0x1ae8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae8b8) {
            ctx->pc = 0x1AE8DCu;
            goto label_1ae8dc;
        }
    }
    ctx->pc = 0x1AE8C0u;
label_1ae8c0:
    // 0x1ae8c0: 0xc064220  jal         func_190880
label_1ae8c4:
    if (ctx->pc == 0x1AE8C4u) {
        ctx->pc = 0x1AE8C8u;
        goto label_1ae8c8;
    }
    ctx->pc = 0x1AE8C0u;
    SET_GPR_U32(ctx, 31, 0x1AE8C8u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE8C8u; }
        if (ctx->pc != 0x1AE8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE8C8u; }
        if (ctx->pc != 0x1AE8C8u) { return; }
    }
    ctx->pc = 0x1AE8C8u;
label_1ae8c8:
    // 0x1ae8c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ae8cc:
    // 0x1ae8cc: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x1ae8ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
label_1ae8d0:
    // 0x1ae8d0: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x1ae8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1ae8d4:
    // 0x1ae8d4: 0x8c500030  lw          $s0, 0x30($v0)
    ctx->pc = 0x1ae8d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1ae8d8:
    // 0x1ae8d8: 0x0  nop
    ctx->pc = 0x1ae8d8u;
    // NOP
label_1ae8dc:
    // 0x1ae8dc: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_1ae8e0:
    if (ctx->pc == 0x1AE8E0u) {
        ctx->pc = 0x1AE8E4u;
        goto label_1ae8e4;
    }
    ctx->pc = 0x1AE8DCu;
    {
        const bool branch_taken_0x1ae8dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae8dc) {
            ctx->pc = 0x1AE948u;
            goto label_1ae948;
        }
    }
    ctx->pc = 0x1AE8E4u;
label_1ae8e4:
    // 0x1ae8e4: 0xc06a6e8  jal         func_1A9BA0
label_1ae8e8:
    if (ctx->pc == 0x1AE8E8u) {
        ctx->pc = 0x1AE8ECu;
        goto label_1ae8ec;
    }
    ctx->pc = 0x1AE8E4u;
    SET_GPR_U32(ctx, 31, 0x1AE8ECu);
    ctx->pc = 0x1A9BA0u;
    if (runtime->hasFunction(0x1A9BA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A9BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE8ECu; }
        if (ctx->pc != 0x1AE8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsEditMode__Fv_0x1a9ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE8ECu; }
        if (ctx->pc != 0x1AE8ECu) { return; }
    }
    ctx->pc = 0x1AE8ECu;
label_1ae8ec:
    // 0x1ae8ec: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_1ae8f0:
    if (ctx->pc == 0x1AE8F0u) {
        ctx->pc = 0x1AE8F4u;
        goto label_1ae8f4;
    }
    ctx->pc = 0x1AE8ECu;
    {
        const bool branch_taken_0x1ae8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae8ec) {
            ctx->pc = 0x1AE948u;
            goto label_1ae948;
        }
    }
    ctx->pc = 0x1AE8F4u;
label_1ae8f4:
    // 0x1ae8f4: 0xdf8280f8  ld          $v0, -0x7F08($gp)
    ctx->pc = 0x1ae8f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934776)));
label_1ae8f8:
    // 0x1ae8f8: 0x27a306a0  addiu       $v1, $sp, 0x6A0
    ctx->pc = 0x1ae8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
label_1ae8fc:
    // 0x1ae8fc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ae8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1ae900:
    // 0x1ae900: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1ae900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ae904:
    // 0x1ae904: 0x24a562a8  addiu       $a1, $a1, 0x62A8
    ctx->pc = 0x1ae904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25256));
label_1ae908:
    // 0x1ae908: 0x2406009c  addiu       $a2, $zero, 0x9C
    ctx->pc = 0x1ae908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
label_1ae90c:
    // 0x1ae90c: 0xc04b414  jal         func_12D050
label_1ae910:
    if (ctx->pc == 0x1AE910u) {
        ctx->pc = 0x1AE910u;
            // 0x1ae910: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->pc = 0x1AE914u;
        goto label_1ae914;
    }
    ctx->pc = 0x1AE90Cu;
    SET_GPR_U32(ctx, 31, 0x1AE914u);
    ctx->pc = 0x1AE910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE90Cu;
            // 0x1ae910: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE914u; }
        if (ctx->pc != 0x1AE914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE914u; }
        if (ctx->pc != 0x1AE914u) { return; }
    }
    ctx->pc = 0x1AE914u;
label_1ae914:
    // 0x1ae914: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ae914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae918:
    // 0x1ae918: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1ae918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ae91c:
    // 0x1ae91c: 0x2405009c  addiu       $a1, $zero, 0x9C
    ctx->pc = 0x1ae91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
label_1ae920:
    // 0x1ae920: 0xc04ba14  jal         func_12E850
label_1ae924:
    if (ctx->pc == 0x1AE924u) {
        ctx->pc = 0x1AE924u;
            // 0x1ae924: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE928u;
        goto label_1ae928;
    }
    ctx->pc = 0x1AE920u;
    SET_GPR_U32(ctx, 31, 0x1AE928u);
    ctx->pc = 0x1AE924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE920u;
            // 0x1ae924: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE928u; }
        if (ctx->pc != 0x1AE928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE928u; }
        if (ctx->pc != 0x1AE928u) { return; }
    }
    ctx->pc = 0x1AE928u;
label_1ae928:
    // 0x1ae928: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ae928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ae92c:
    // 0x1ae92c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ae92cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae930:
    // 0x1ae930: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ae930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ae934:
    // 0x1ae934: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ae934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ae938:
    // 0x1ae938: 0xc05f8c8  jal         func_17E320
label_1ae93c:
    if (ctx->pc == 0x1AE93Cu) {
        ctx->pc = 0x1AE93Cu;
            // 0x1ae93c: 0x27a506a0  addiu       $a1, $sp, 0x6A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
        ctx->pc = 0x1AE940u;
        goto label_1ae940;
    }
    ctx->pc = 0x1AE938u;
    SET_GPR_U32(ctx, 31, 0x1AE940u);
    ctx->pc = 0x1AE93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE938u;
            // 0x1ae93c: 0x27a506a0  addiu       $a1, $sp, 0x6A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E320u;
    if (runtime->hasFunction(0x17E320u)) {
        auto targetFn = runtime->lookupFunction(0x17E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE940u; }
        if (ctx->pc != 0x1AE940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthOfField__FiPfP10mgCTexturef_0x17e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE940u; }
        if (ctx->pc != 0x1AE940u) { return; }
    }
    ctx->pc = 0x1AE940u;
label_1ae940:
    // 0x1ae940: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1ae944:
    if (ctx->pc == 0x1AE944u) {
        ctx->pc = 0x1AE948u;
        goto label_1ae948;
    }
    ctx->pc = 0x1AE940u;
    {
        const bool branch_taken_0x1ae940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae940) {
            ctx->pc = 0x1AE9B0u;
            goto label_1ae9b0;
        }
    }
    ctx->pc = 0x1AE948u;
label_1ae948:
    // 0x1ae948: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ae948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae94c:
    // 0x1ae94c: 0xc0a0f58  jal         func_283D60
label_1ae950:
    if (ctx->pc == 0x1AE950u) {
        ctx->pc = 0x1AE950u;
            // 0x1ae950: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x1AE954u;
        goto label_1ae954;
    }
    ctx->pc = 0x1AE94Cu;
    SET_GPR_U32(ctx, 31, 0x1AE954u);
    ctx->pc = 0x1AE950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE94Cu;
            // 0x1ae950: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE954u; }
        if (ctx->pc != 0x1AE954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE954u; }
        if (ctx->pc != 0x1AE954u) { return; }
    }
    ctx->pc = 0x1AE954u;
label_1ae954:
    // 0x1ae954: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ae958:
    if (ctx->pc == 0x1AE958u) {
        ctx->pc = 0x1AE958u;
            // 0x1ae958: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE95Cu;
        goto label_1ae95c;
    }
    ctx->pc = 0x1AE954u;
    {
        const bool branch_taken_0x1ae954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE954u;
            // 0x1ae958: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae954) {
            ctx->pc = 0x1AE964u;
            goto label_1ae964;
        }
    }
    ctx->pc = 0x1AE95Cu;
label_1ae95c:
    // 0x1ae95c: 0xc05839c  jal         func_160E70
label_1ae960:
    if (ctx->pc == 0x1AE960u) {
        ctx->pc = 0x1AE960u;
            // 0x1ae960: 0x27a50460  addiu       $a1, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->pc = 0x1AE964u;
        goto label_1ae964;
    }
    ctx->pc = 0x1AE95Cu;
    SET_GPR_U32(ctx, 31, 0x1AE964u);
    ctx->pc = 0x1AE960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE95Cu;
            // 0x1ae960: 0x27a50460  addiu       $a1, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160E70u;
    if (runtime->hasFunction(0x160E70u)) {
        auto targetFn = runtime->lookupFunction(0x160E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE964u; }
        if (ctx->pc != 0x1AE964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightingRatio__4CMapFPf_0x160e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE964u; }
        if (ctx->pc != 0x1AE964u) { return; }
    }
    ctx->pc = 0x1AE964u;
label_1ae964:
    // 0x1ae964: 0xdf828100  ld          $v0, -0x7F00($gp)
    ctx->pc = 0x1ae964u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934784)));
label_1ae968:
    // 0x1ae968: 0x27a306a8  addiu       $v1, $sp, 0x6A8
    ctx->pc = 0x1ae968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1704));
label_1ae96c:
    // 0x1ae96c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ae96cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1ae970:
    // 0x1ae970: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1ae970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ae974:
    // 0x1ae974: 0x24a562a8  addiu       $a1, $a1, 0x62A8
    ctx->pc = 0x1ae974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25256));
label_1ae978:
    // 0x1ae978: 0x2406009c  addiu       $a2, $zero, 0x9C
    ctx->pc = 0x1ae978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
label_1ae97c:
    // 0x1ae97c: 0xc04b414  jal         func_12D050
label_1ae980:
    if (ctx->pc == 0x1AE980u) {
        ctx->pc = 0x1AE980u;
            // 0x1ae980: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->pc = 0x1AE984u;
        goto label_1ae984;
    }
    ctx->pc = 0x1AE97Cu;
    SET_GPR_U32(ctx, 31, 0x1AE984u);
    ctx->pc = 0x1AE980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE97Cu;
            // 0x1ae980: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE984u; }
        if (ctx->pc != 0x1AE984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE984u; }
        if (ctx->pc != 0x1AE984u) { return; }
    }
    ctx->pc = 0x1AE984u;
label_1ae984:
    // 0x1ae984: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ae984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae988:
    // 0x1ae988: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1ae988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ae98c:
    // 0x1ae98c: 0x2405009c  addiu       $a1, $zero, 0x9C
    ctx->pc = 0x1ae98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
label_1ae990:
    // 0x1ae990: 0xc04ba14  jal         func_12E850
label_1ae994:
    if (ctx->pc == 0x1AE994u) {
        ctx->pc = 0x1AE994u;
            // 0x1ae994: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE998u;
        goto label_1ae998;
    }
    ctx->pc = 0x1AE990u;
    SET_GPR_U32(ctx, 31, 0x1AE998u);
    ctx->pc = 0x1AE994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE990u;
            // 0x1ae994: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE998u; }
        if (ctx->pc != 0x1AE998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE998u; }
        if (ctx->pc != 0x1AE998u) { return; }
    }
    ctx->pc = 0x1AE998u;
label_1ae998:
    // 0x1ae998: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ae998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ae99c:
    // 0x1ae99c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ae99cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae9a0:
    // 0x1ae9a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ae9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ae9a4:
    // 0x1ae9a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ae9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae9a8:
    // 0x1ae9a8: 0xc05f8c8  jal         func_17E320
label_1ae9ac:
    if (ctx->pc == 0x1AE9ACu) {
        ctx->pc = 0x1AE9ACu;
            // 0x1ae9ac: 0x27a506a8  addiu       $a1, $sp, 0x6A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1704));
        ctx->pc = 0x1AE9B0u;
        goto label_1ae9b0;
    }
    ctx->pc = 0x1AE9A8u;
    SET_GPR_U32(ctx, 31, 0x1AE9B0u);
    ctx->pc = 0x1AE9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE9A8u;
            // 0x1ae9ac: 0x27a506a8  addiu       $a1, $sp, 0x6A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E320u;
    if (runtime->hasFunction(0x17E320u)) {
        auto targetFn = runtime->lookupFunction(0x17E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE9B0u; }
        if (ctx->pc != 0x1AE9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthOfField__FiPfP10mgCTexturef_0x17e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE9B0u; }
        if (ctx->pc != 0x1AE9B0u) { return; }
    }
    ctx->pc = 0x1AE9B0u;
label_1ae9b0:
    // 0x1ae9b0: 0xc098814  jal         func_262050
label_1ae9b4:
    if (ctx->pc == 0x1AE9B4u) {
        ctx->pc = 0x1AE9B8u;
        goto label_1ae9b8;
    }
    ctx->pc = 0x1AE9B0u;
    SET_GPR_U32(ctx, 31, 0x1AE9B8u);
    ctx->pc = 0x262050u;
    if (runtime->hasFunction(0x262050u)) {
        auto targetFn = runtime->lookupFunction(0x262050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE9B8u; }
        if (ctx->pc != 0x1AE9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EdEventFirstDraw__Fv_0x262050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE9B8u; }
        if (ctx->pc != 0x1AE9B8u) { return; }
    }
    ctx->pc = 0x1AE9B8u;
label_1ae9b8:
    // 0x1ae9b8: 0x8f828c54  lw          $v0, -0x73AC($gp)
    ctx->pc = 0x1ae9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
label_1ae9bc:
    // 0x1ae9bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ae9c0:
    if (ctx->pc == 0x1AE9C0u) {
        ctx->pc = 0x1AE9C4u;
        goto label_1ae9c4;
    }
    ctx->pc = 0x1AE9BCu;
    {
        const bool branch_taken_0x1ae9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae9bc) {
            ctx->pc = 0x1AE9E0u;
            goto label_1ae9e0;
        }
    }
    ctx->pc = 0x1AE9C4u;
label_1ae9c4:
    // 0x1ae9c4: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ae9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae9c8:
    // 0x1ae9c8: 0xc0a0f58  jal         func_283D60
label_1ae9cc:
    if (ctx->pc == 0x1AE9CCu) {
        ctx->pc = 0x1AE9CCu;
            // 0x1ae9cc: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x1AE9D0u;
        goto label_1ae9d0;
    }
    ctx->pc = 0x1AE9C8u;
    SET_GPR_U32(ctx, 31, 0x1AE9D0u);
    ctx->pc = 0x1AE9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE9C8u;
            // 0x1ae9cc: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE9D0u; }
        if (ctx->pc != 0x1AE9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE9D0u; }
        if (ctx->pc != 0x1AE9D0u) { return; }
    }
    ctx->pc = 0x1AE9D0u;
label_1ae9d0:
    // 0x1ae9d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ae9d4:
    if (ctx->pc == 0x1AE9D4u) {
        ctx->pc = 0x1AE9D4u;
            // 0x1ae9d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE9D8u;
        goto label_1ae9d8;
    }
    ctx->pc = 0x1AE9D0u;
    {
        const bool branch_taken_0x1ae9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE9D0u;
            // 0x1ae9d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae9d0) {
            ctx->pc = 0x1AE9E0u;
            goto label_1ae9e0;
        }
    }
    ctx->pc = 0x1AE9D8u;
label_1ae9d8:
    // 0x1ae9d8: 0xc057bdc  jal         func_15EF70
label_1ae9dc:
    if (ctx->pc == 0x1AE9DCu) {
        ctx->pc = 0x1AE9E0u;
        goto label_1ae9e0;
    }
    ctx->pc = 0x1AE9D8u;
    SET_GPR_U32(ctx, 31, 0x1AE9E0u);
    ctx->pc = 0x15EF70u;
    if (runtime->hasFunction(0x15EF70u)) {
        auto targetFn = runtime->lookupFunction(0x15EF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE9E0u; }
        if (ctx->pc != 0x1AE9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawTrBox__4CMapFv_0x15ef70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE9E0u; }
        if (ctx->pc != 0x1AE9E0u) { return; }
    }
    ctx->pc = 0x1AE9E0u;
label_1ae9e0:
    // 0x1ae9e0: 0x8f838c7c  lw          $v1, -0x7384($gp)
    ctx->pc = 0x1ae9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
label_1ae9e4:
    // 0x1ae9e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae9e8:
    // 0x1ae9e8: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
label_1ae9ec:
    if (ctx->pc == 0x1AE9ECu) {
        ctx->pc = 0x1AE9ECu;
            // 0x1ae9ec: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE9F0u;
        goto label_1ae9f0;
    }
    ctx->pc = 0x1AE9E8u;
    {
        const bool branch_taken_0x1ae9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE9E8u;
            // 0x1ae9ec: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae9e8) {
            ctx->pc = 0x1AEA88u;
            goto label_1aea88;
        }
    }
    ctx->pc = 0x1AE9F0u;
label_1ae9f0:
    // 0x1ae9f0: 0x2405009e  addiu       $a1, $zero, 0x9E
    ctx->pc = 0x1ae9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
label_1ae9f4:
    // 0x1ae9f4: 0xc04ba14  jal         func_12E850
label_1ae9f8:
    if (ctx->pc == 0x1AE9F8u) {
        ctx->pc = 0x1AE9F8u;
            // 0x1ae9f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE9FCu;
        goto label_1ae9fc;
    }
    ctx->pc = 0x1AE9F4u;
    SET_GPR_U32(ctx, 31, 0x1AE9FCu);
    ctx->pc = 0x1AE9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE9F4u;
            // 0x1ae9f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE9FCu; }
        if (ctx->pc != 0x1AE9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE9FCu; }
        if (ctx->pc != 0x1AE9FCu) { return; }
    }
    ctx->pc = 0x1AE9FCu;
label_1ae9fc:
    // 0x1ae9fc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ae9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1aea00:
    // 0x1aea00: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1aea00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1aea04:
    // 0x1aea04: 0x24a562b0  addiu       $a1, $a1, 0x62B0
    ctx->pc = 0x1aea04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25264));
label_1aea08:
    // 0x1aea08: 0xc04b414  jal         func_12D050
label_1aea0c:
    if (ctx->pc == 0x1AEA0Cu) {
        ctx->pc = 0x1AEA0Cu;
            // 0x1aea0c: 0x2406009e  addiu       $a2, $zero, 0x9E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
        ctx->pc = 0x1AEA10u;
        goto label_1aea10;
    }
    ctx->pc = 0x1AEA08u;
    SET_GPR_U32(ctx, 31, 0x1AEA10u);
    ctx->pc = 0x1AEA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEA08u;
            // 0x1aea0c: 0x2406009e  addiu       $a2, $zero, 0x9E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA10u; }
        if (ctx->pc != 0x1AEA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA10u; }
        if (ctx->pc != 0x1AEA10u) { return; }
    }
    ctx->pc = 0x1AEA10u;
label_1aea10:
    // 0x1aea10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aea10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aea14:
    // 0x1aea14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aea14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aea18:
    // 0x1aea18: 0xc050c64  jal         func_143190
label_1aea1c:
    if (ctx->pc == 0x1AEA1Cu) {
        ctx->pc = 0x1AEA1Cu;
            // 0x1aea1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEA20u;
        goto label_1aea20;
    }
    ctx->pc = 0x1AEA18u;
    SET_GPR_U32(ctx, 31, 0x1AEA20u);
    ctx->pc = 0x1AEA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEA18u;
            // 0x1aea1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143190u;
    if (runtime->hasFunction(0x143190u)) {
        auto targetFn = runtime->lookupFunction(0x143190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA20u; }
        if (ctx->pc != 0x1AEA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgBeginDrawShadow__FP10mgCTextureP10mgCTexture_0x143190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA20u; }
        if (ctx->pc != 0x1AEA20u) { return; }
    }
    ctx->pc = 0x1AEA20u;
label_1aea20:
    // 0x1aea20: 0xc069dd4  jal         func_1A7750
label_1aea24:
    if (ctx->pc == 0x1AEA24u) {
        ctx->pc = 0x1AEA24u;
            // 0x1aea24: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AEA28u;
        goto label_1aea28;
    }
    ctx->pc = 0x1AEA20u;
    SET_GPR_U32(ctx, 31, 0x1AEA28u);
    ctx->pc = 0x1AEA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEA20u;
            // 0x1aea24: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7750u;
    if (runtime->hasFunction(0x1A7750u)) {
        auto targetFn = runtime->lookupFunction(0x1A7750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA28u; }
        if (ctx->pc != 0x1AEA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditDrawShadowChara__FP6CScene_0x1a7750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA28u; }
        if (ctx->pc != 0x1AEA28u) { return; }
    }
    ctx->pc = 0x1AEA28u;
label_1aea28:
    // 0x1aea28: 0xc0c1108  jal         func_304420
label_1aea2c:
    if (ctx->pc == 0x1AEA2Cu) {
        ctx->pc = 0x1AEA30u;
        goto label_1aea30;
    }
    ctx->pc = 0x1AEA28u;
    SET_GPR_U32(ctx, 31, 0x1AEA30u);
    ctx->pc = 0x304420u;
    if (runtime->hasFunction(0x304420u)) {
        auto targetFn = runtime->lookupFunction(0x304420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA30u; }
        if (ctx->pc != 0x1AEA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgDrawSubGameCharaShadow__Fv_0x304420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA30u; }
        if (ctx->pc != 0x1AEA30u) { return; }
    }
    ctx->pc = 0x1AEA30u;
label_1aea30:
    // 0x1aea30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aea30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aea34:
    // 0x1aea34: 0xc050cb4  jal         func_1432D0
label_1aea38:
    if (ctx->pc == 0x1AEA38u) {
        ctx->pc = 0x1AEA38u;
            // 0x1aea38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEA3Cu;
        goto label_1aea3c;
    }
    ctx->pc = 0x1AEA34u;
    SET_GPR_U32(ctx, 31, 0x1AEA3Cu);
    ctx->pc = 0x1AEA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEA34u;
            // 0x1aea38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1432D0u;
    if (runtime->hasFunction(0x1432D0u)) {
        auto targetFn = runtime->lookupFunction(0x1432D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA3Cu; }
        if (ctx->pc != 0x1AEA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndDrawShadow__FP10mgCTextureP10mgCTexture_0x1432d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA3Cu; }
        if (ctx->pc != 0x1AEA3Cu) { return; }
    }
    ctx->pc = 0x1AEA3Cu;
label_1aea3c:
    // 0x1aea3c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aea40:
    // 0x1aea40: 0xc0a0ed8  jal         func_283B60
label_1aea44:
    if (ctx->pc == 0x1AEA44u) {
        ctx->pc = 0x1AEA44u;
            // 0x1aea44: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->pc = 0x1AEA48u;
        goto label_1aea48;
    }
    ctx->pc = 0x1AEA40u;
    SET_GPR_U32(ctx, 31, 0x1AEA48u);
    ctx->pc = 0x1AEA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEA40u;
            // 0x1aea44: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA48u; }
        if (ctx->pc != 0x1AEA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA48u; }
        if (ctx->pc != 0x1AEA48u) { return; }
    }
    ctx->pc = 0x1AEA48u;
label_1aea48:
    // 0x1aea48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aea48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aea4c:
    // 0x1aea4c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1aea50:
    if (ctx->pc == 0x1AEA50u) {
        ctx->pc = 0x1AEA54u;
        goto label_1aea54;
    }
    ctx->pc = 0x1AEA4Cu;
    {
        const bool branch_taken_0x1aea4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aea4c) {
            ctx->pc = 0x1AEA80u;
            goto label_1aea80;
        }
    }
    ctx->pc = 0x1AEA54u;
label_1aea54:
    // 0x1aea54: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1aea54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aea58:
    // 0x1aea58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aea58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aea5c:
    // 0x1aea5c: 0x8f3900c4  lw          $t9, 0xC4($t9)
    ctx->pc = 0x1aea5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 196)));
label_1aea60:
    // 0x1aea60: 0x320f809  jalr        $t9
label_1aea64:
    if (ctx->pc == 0x1AEA64u) {
        ctx->pc = 0x1AEA64u;
            // 0x1aea64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AEA68u;
        goto label_1aea68;
    }
    ctx->pc = 0x1AEA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AEA68u);
        ctx->pc = 0x1AEA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEA60u;
            // 0x1aea64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AEA68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA68u; }
            if (ctx->pc != 0x1AEA68u) { return; }
        }
        }
    }
    ctx->pc = 0x1AEA68u;
label_1aea68:
    // 0x1aea68: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1aea68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aea6c:
    // 0x1aea6c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x1aea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_1aea70:
    // 0x1aea70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1aea70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1aea74:
    // 0x1aea74: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x1aea74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_1aea78:
    // 0x1aea78: 0x320f809  jalr        $t9
label_1aea7c:
    if (ctx->pc == 0x1AEA7Cu) {
        ctx->pc = 0x1AEA7Cu;
            // 0x1aea7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEA80u;
        goto label_1aea80;
    }
    ctx->pc = 0x1AEA78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AEA80u);
        ctx->pc = 0x1AEA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEA78u;
            // 0x1aea7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AEA80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA80u; }
            if (ctx->pc != 0x1AEA80u) { return; }
        }
        }
    }
    ctx->pc = 0x1AEA80u;
label_1aea80:
    // 0x1aea80: 0xc069dec  jal         func_1A77B0
label_1aea84:
    if (ctx->pc == 0x1AEA84u) {
        ctx->pc = 0x1AEA84u;
            // 0x1aea84: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AEA88u;
        goto label_1aea88;
    }
    ctx->pc = 0x1AEA80u;
    SET_GPR_U32(ctx, 31, 0x1AEA88u);
    ctx->pc = 0x1AEA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEA80u;
            // 0x1aea84: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A77B0u;
    if (runtime->hasFunction(0x1A77B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A77B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA88u; }
        if (ctx->pc != 0x1AEA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditDrawChara__FP6CScene_0x1a77b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA88u; }
        if (ctx->pc != 0x1AEA88u) { return; }
    }
    ctx->pc = 0x1AEA88u;
label_1aea88:
    // 0x1aea88: 0xc0c1128  jal         func_3044A0
label_1aea8c:
    if (ctx->pc == 0x1AEA8Cu) {
        ctx->pc = 0x1AEA90u;
        goto label_1aea90;
    }
    ctx->pc = 0x1AEA88u;
    SET_GPR_U32(ctx, 31, 0x1AEA90u);
    ctx->pc = 0x3044A0u;
    if (runtime->hasFunction(0x3044A0u)) {
        auto targetFn = runtime->lookupFunction(0x3044A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA90u; }
        if (ctx->pc != 0x1AEA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgDrawSubGameChara__Fv_0x3044a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA90u; }
        if (ctx->pc != 0x1AEA90u) { return; }
    }
    ctx->pc = 0x1AEA90u;
label_1aea90:
    // 0x1aea90: 0xc050ebc  jal         func_143AF0
label_1aea94:
    if (ctx->pc == 0x1AEA94u) {
        ctx->pc = 0x1AEA94u;
            // 0x1aea94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AEA98u;
        goto label_1aea98;
    }
    ctx->pc = 0x1AEA90u;
    SET_GPR_U32(ctx, 31, 0x1AEA98u);
    ctx->pc = 0x1AEA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEA90u;
            // 0x1aea94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143AF0u;
    if (runtime->hasFunction(0x143AF0u)) {
        auto targetFn = runtime->lookupFunction(0x143AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA98u; }
        if (ctx->pc != 0x1AEA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkTextureRepeat__Fi_0x143af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA98u; }
        if (ctx->pc != 0x1AEA98u) { return; }
    }
    ctx->pc = 0x1AEA98u;
label_1aea98:
    // 0x1aea98: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1aea98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1aea9c:
    // 0x1aea9c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1aeaa0:
    if (ctx->pc == 0x1AEAA0u) {
        ctx->pc = 0x1AEAA0u;
            // 0x1aeaa0: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1AEAA4u;
        goto label_1aeaa4;
    }
    ctx->pc = 0x1AEA9Cu;
    {
        const bool branch_taken_0x1aea9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEA9Cu;
            // 0x1aeaa0: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aea9c) {
            ctx->pc = 0x1AEB10u;
            goto label_1aeb10;
        }
    }
    ctx->pc = 0x1AEAA4u;
label_1aeaa4:
    // 0x1aeaa4: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1aeaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aeaa8:
    // 0x1aeaa8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1aeaa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aeaac:
    // 0x1aeaac: 0x27a60470  addiu       $a2, $sp, 0x470
    ctx->pc = 0x1aeaacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_1aeab0:
    // 0x1aeab0: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1aeab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1aeab4:
    // 0x1aeab4: 0xc05a3f4  jal         func_168FD0
label_1aeab8:
    if (ctx->pc == 0x1AEAB8u) {
        ctx->pc = 0x1AEAB8u;
            // 0x1aeab8: 0x244423d0  addiu       $a0, $v0, 0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9168));
        ctx->pc = 0x1AEABCu;
        goto label_1aeabc;
    }
    ctx->pc = 0x1AEAB4u;
    SET_GPR_U32(ctx, 31, 0x1AEABCu);
    ctx->pc = 0x1AEAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEAB4u;
            // 0x1aeab8: 0x244423d0  addiu       $a0, $v0, 0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168FD0u;
    if (runtime->hasFunction(0x168FD0u)) {
        auto targetFn = runtime->lookupFunction(0x168FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEABCu; }
        if (ctx->pc != 0x1AEABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextureBlockNo__11CMdsListSetFiPii_0x168fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEABCu; }
        if (ctx->pc != 0x1AEABCu) { return; }
    }
    ctx->pc = 0x1AEABCu;
label_1aeabc:
    // 0x1aeabc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1aeabcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1aeac0:
    // 0x1aeac0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1aeac0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aeac4:
    // 0x1aeac4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_1aeac8:
    if (ctx->pc == 0x1AEAC8u) {
        ctx->pc = 0x1AEAC8u;
            // 0x1aeac8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEACCu;
        goto label_1aeacc;
    }
    ctx->pc = 0x1AEAC4u;
    {
        const bool branch_taken_0x1aeac4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEAC4u;
            // 0x1aeac8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeac4) {
            ctx->pc = 0x1AEB00u;
            goto label_1aeb00;
        }
    }
    ctx->pc = 0x1AEACCu;
label_1aeacc:
    // 0x1aeacc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1aeaccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aead0:
    // 0x1aead0: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x1aead0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
label_1aead4:
    // 0x1aead4: 0x8c520470  lw          $s2, 0x470($v0)
    ctx->pc = 0x1aead4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1136)));
label_1aead8:
    // 0x1aead8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aead8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aeadc:
    // 0x1aeadc: 0xc050958  jal         func_142560
label_1aeae0:
    if (ctx->pc == 0x1AEAE0u) {
        ctx->pc = 0x1AEAE0u;
            // 0x1aeae0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEAE4u;
        goto label_1aeae4;
    }
    ctx->pc = 0x1AEADCu;
    SET_GPR_U32(ctx, 31, 0x1AEAE4u);
    ctx->pc = 0x1AEAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEADCu;
            // 0x1aeae0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142560u;
    if (runtime->hasFunction(0x142560u)) {
        auto targetFn = runtime->lookupFunction(0x142560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEAE4u; }
        if (ctx->pc != 0x1AEAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndDrawReloadTexture__FiP14mgCDrawManager_0x142560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEAE4u; }
        if (ctx->pc != 0x1AEAE4u) { return; }
    }
    ctx->pc = 0x1AEAE4u;
label_1aeae4:
    // 0x1aeae4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aeae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1aeae8:
    // 0x1aeae8: 0xc050960  jal         func_142580
label_1aeaec:
    if (ctx->pc == 0x1AEAECu) {
        ctx->pc = 0x1AEAECu;
            // 0x1aeaec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEAF0u;
        goto label_1aeaf0;
    }
    ctx->pc = 0x1AEAE8u;
    SET_GPR_U32(ctx, 31, 0x1AEAF0u);
    ctx->pc = 0x1AEAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEAE8u;
            // 0x1aeaec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142580u;
    if (runtime->hasFunction(0x142580u)) {
        auto targetFn = runtime->lookupFunction(0x142580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEAF0u; }
        if (ctx->pc != 0x1AEAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndDraw__FiP14mgCDrawManager_0x142580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEAF0u; }
        if (ctx->pc != 0x1AEAF0u) { return; }
    }
    ctx->pc = 0x1AEAF0u;
label_1aeaf0:
    // 0x1aeaf0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1aeaf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1aeaf4:
    // 0x1aeaf4: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x1aeaf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1aeaf8:
    // 0x1aeaf8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1aeafc:
    if (ctx->pc == 0x1AEAFCu) {
        ctx->pc = 0x1AEAFCu;
            // 0x1aeafc: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x1AEB00u;
        goto label_1aeb00;
    }
    ctx->pc = 0x1AEAF8u;
    {
        const bool branch_taken_0x1aeaf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEAF8u;
            // 0x1aeafc: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeaf8) {
            ctx->pc = 0x1AEAD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1aead0;
        }
    }
    ctx->pc = 0x1AEB00u;
label_1aeb00:
    // 0x1aeb00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aeb00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1aeb04:
    // 0x1aeb04: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x1aeb04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_1aeb08:
    // 0x1aeb08: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_1aeb0c:
    if (ctx->pc == 0x1AEB0Cu) {
        ctx->pc = 0x1AEB10u;
        goto label_1aeb10;
    }
    ctx->pc = 0x1AEB08u;
    {
        const bool branch_taken_0x1aeb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aeb08) {
            ctx->pc = 0x1AEAA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1aeaa4;
        }
    }
    ctx->pc = 0x1AEB10u;
label_1aeb10:
    // 0x1aeb10: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aeb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aeb14:
    // 0x1aeb14: 0xc0a1180  jal         func_284600
label_1aeb18:
    if (ctx->pc == 0x1AEB18u) {
        ctx->pc = 0x1AEB18u;
            // 0x1aeb18: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1AEB1Cu;
        goto label_1aeb1c;
    }
    ctx->pc = 0x1AEB14u;
    SET_GPR_U32(ctx, 31, 0x1AEB1Cu);
    ctx->pc = 0x1AEB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB14u;
            // 0x1aeb18: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284600u;
    if (runtime->hasFunction(0x284600u)) {
        auto targetFn = runtime->lookupFunction(0x284600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB1Cu; }
        if (ctx->pc != 0x1AEB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawEffectScript__6CSceneFi_0x284600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB1Cu; }
        if (ctx->pc != 0x1AEB1Cu) { return; }
    }
    ctx->pc = 0x1AEB1Cu;
label_1aeb1c:
    // 0x1aeb1c: 0xc0b7d7c  jal         func_2DF5F0
label_1aeb20:
    if (ctx->pc == 0x1AEB20u) {
        ctx->pc = 0x1AEB24u;
        goto label_1aeb24;
    }
    ctx->pc = 0x1AEB1Cu;
    SET_GPR_U32(ctx, 31, 0x1AEB24u);
    ctx->pc = 0x2DF5F0u;
    if (runtime->hasFunction(0x2DF5F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB24u; }
        if (ctx->pc != 0x1AEB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InInterior__Fv_0x2df5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB24u; }
        if (ctx->pc != 0x1AEB24u) { return; }
    }
    ctx->pc = 0x1AEB24u;
label_1aeb24:
    // 0x1aeb24: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1aeb28:
    if (ctx->pc == 0x1AEB28u) {
        ctx->pc = 0x1AEB2Cu;
        goto label_1aeb2c;
    }
    ctx->pc = 0x1AEB24u;
    {
        const bool branch_taken_0x1aeb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aeb24) {
            ctx->pc = 0x1AEB3Cu;
            goto label_1aeb3c;
        }
    }
    ctx->pc = 0x1AEB2Cu;
label_1aeb2c:
    // 0x1aeb2c: 0xc0bdf60  jal         func_2F7D80
label_1aeb30:
    if (ctx->pc == 0x1AEB30u) {
        ctx->pc = 0x1AEB30u;
            // 0x1aeb30: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AEB34u;
        goto label_1aeb34;
    }
    ctx->pc = 0x1AEB2Cu;
    SET_GPR_U32(ctx, 31, 0x1AEB34u);
    ctx->pc = 0x1AEB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB2Cu;
            // 0x1aeb30: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7D80u;
    if (runtime->hasFunction(0x2F7D80u)) {
        auto targetFn = runtime->lookupFunction(0x2F7D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB34u; }
        if (ctx->pc != 0x1AEB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawFirePowder__FP6CScene_0x2f7d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB34u; }
        if (ctx->pc != 0x1AEB34u) { return; }
    }
    ctx->pc = 0x1AEB34u;
label_1aeb34:
    // 0x1aeb34: 0xc0be2c8  jal         func_2F8B20
label_1aeb38:
    if (ctx->pc == 0x1AEB38u) {
        ctx->pc = 0x1AEB38u;
            // 0x1aeb38: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AEB3Cu;
        goto label_1aeb3c;
    }
    ctx->pc = 0x1AEB34u;
    SET_GPR_U32(ctx, 31, 0x1AEB3Cu);
    ctx->pc = 0x1AEB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB34u;
            // 0x1aeb38: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8B20u;
    if (runtime->hasFunction(0x2F8B20u)) {
        auto targetFn = runtime->lookupFunction(0x2F8B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB3Cu; }
        if (ctx->pc != 0x1AEB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawGeyserEffect__FP6CScene_0x2f8b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB3Cu; }
        if (ctx->pc != 0x1AEB3Cu) { return; }
    }
    ctx->pc = 0x1AEB3Cu;
label_1aeb3c:
    // 0x1aeb3c: 0x8f858c4c  lw          $a1, -0x73B4($gp)
    ctx->pc = 0x1aeb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937676)));
label_1aeb40:
    // 0x1aeb40: 0xc0b24f4  jal         func_2C93D0
label_1aeb44:
    if (ctx->pc == 0x1AEB44u) {
        ctx->pc = 0x1AEB44u;
            // 0x1aeb44: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AEB48u;
        goto label_1aeb48;
    }
    ctx->pc = 0x1AEB40u;
    SET_GPR_U32(ctx, 31, 0x1AEB48u);
    ctx->pc = 0x1AEB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB40u;
            // 0x1aeb44: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C93D0u;
    if (runtime->hasFunction(0x2C93D0u)) {
        auto targetFn = runtime->lookupFunction(0x2C93D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB48u; }
        if (ctx->pc != 0x1AEB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawExclamationMark__6CSceneFP8mgCFrame_0x2c93d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB48u; }
        if (ctx->pc != 0x1AEB48u) { return; }
    }
    ctx->pc = 0x1AEB48u;
label_1aeb48:
    // 0x1aeb48: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aeb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aeb4c:
    // 0x1aeb4c: 0xc0a0ed8  jal         func_283B60
label_1aeb50:
    if (ctx->pc == 0x1AEB50u) {
        ctx->pc = 0x1AEB50u;
            // 0x1aeb50: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->pc = 0x1AEB54u;
        goto label_1aeb54;
    }
    ctx->pc = 0x1AEB4Cu;
    SET_GPR_U32(ctx, 31, 0x1AEB54u);
    ctx->pc = 0x1AEB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB4Cu;
            // 0x1aeb50: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB54u; }
        if (ctx->pc != 0x1AEB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB54u; }
        if (ctx->pc != 0x1AEB54u) { return; }
    }
    ctx->pc = 0x1AEB54u;
label_1aeb54:
    // 0x1aeb54: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_1aeb58:
    if (ctx->pc == 0x1AEB58u) {
        ctx->pc = 0x1AEB5Cu;
        goto label_1aeb5c;
    }
    ctx->pc = 0x1AEB54u;
    {
        const bool branch_taken_0x1aeb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aeb54) {
            ctx->pc = 0x1AEC18u;
            goto label_1aec18;
        }
    }
    ctx->pc = 0x1AEB5Cu;
label_1aeb5c:
    // 0x1aeb5c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1aeb5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1aeb60:
    // 0x1aeb60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aeb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aeb64:
    // 0x1aeb64: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1aeb64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1aeb68:
    // 0x1aeb68: 0x320f809  jalr        $t9
label_1aeb6c:
    if (ctx->pc == 0x1AEB6Cu) {
        ctx->pc = 0x1AEB6Cu;
            // 0x1aeb6c: 0x27a50670  addiu       $a1, $sp, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1648));
        ctx->pc = 0x1AEB70u;
        goto label_1aeb70;
    }
    ctx->pc = 0x1AEB68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AEB70u);
        ctx->pc = 0x1AEB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB68u;
            // 0x1aeb6c: 0x27a50670  addiu       $a1, $sp, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1648));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AEB70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB70u; }
            if (ctx->pc != 0x1AEB70u) { return; }
        }
        }
    }
    ctx->pc = 0x1AEB70u;
label_1aeb70:
    // 0x1aeb70: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x1aeb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
label_1aeb74:
    // 0x1aeb74: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1aeb78:
    if (ctx->pc == 0x1AEB78u) {
        ctx->pc = 0x1AEB7Cu;
        goto label_1aeb7c;
    }
    ctx->pc = 0x1AEB74u;
    {
        const bool branch_taken_0x1aeb74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aeb74) {
            ctx->pc = 0x1AEB8Cu;
            goto label_1aeb8c;
        }
    }
    ctx->pc = 0x1AEB7Cu;
label_1aeb7c:
    // 0x1aeb7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1aeb7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1aeb80:
    // 0x1aeb80: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1aeb80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1aeb84:
    // 0x1aeb84: 0x320f809  jalr        $t9
label_1aeb88:
    if (ctx->pc == 0x1AEB88u) {
        ctx->pc = 0x1AEB88u;
            // 0x1aeb88: 0x27a50670  addiu       $a1, $sp, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1648));
        ctx->pc = 0x1AEB8Cu;
        goto label_1aeb8c;
    }
    ctx->pc = 0x1AEB84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AEB8Cu);
        ctx->pc = 0x1AEB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB84u;
            // 0x1aeb88: 0x27a50670  addiu       $a1, $sp, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1648));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AEB8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB8Cu; }
            if (ctx->pc != 0x1AEB8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1AEB8Cu;
label_1aeb8c:
    // 0x1aeb8c: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1aeb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aeb90:
    // 0x1aeb90: 0x8c502f60  lw          $s0, 0x2F60($v0)
    ctx->pc = 0x1aeb90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12128)));
label_1aeb94:
    // 0x1aeb94: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1aeb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1aeb98:
    // 0x1aeb98: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1aeb9c:
    if (ctx->pc == 0x1AEB9Cu) {
        ctx->pc = 0x1AEB9Cu;
            // 0x1aeb9c: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x1AEBA0u;
        goto label_1aeba0;
    }
    ctx->pc = 0x1AEB98u;
    {
        const bool branch_taken_0x1aeb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB98u;
            // 0x1aeb9c: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb98) {
            ctx->pc = 0x1AEC08u;
            goto label_1aec08;
        }
    }
    ctx->pc = 0x1AEBA0u;
label_1aeba0:
    // 0x1aeba0: 0x8f848c4c  lw          $a0, -0x73B4($gp)
    ctx->pc = 0x1aeba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937676)));
label_1aeba4:
    // 0x1aeba4: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_1aeba8:
    if (ctx->pc == 0x1AEBA8u) {
        ctx->pc = 0x1AEBACu;
        goto label_1aebac;
    }
    ctx->pc = 0x1AEBA4u;
    {
        const bool branch_taken_0x1aeba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aeba4) {
            ctx->pc = 0x1AEBFCu;
            goto label_1aebfc;
        }
    }
    ctx->pc = 0x1AEBACu;
label_1aebac:
    // 0x1aebac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1aebacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1aebb0:
    // 0x1aebb0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1aebb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1aebb4:
    // 0x1aebb4: 0x0  nop
    ctx->pc = 0x1aebb4u;
    // NOP
label_1aebb8:
    // 0x1aebb8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1aebb8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1aebbc:
    // 0x1aebbc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1aebbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1aebc0:
    // 0x1aebc0: 0x320f809  jalr        $t9
label_1aebc4:
    if (ctx->pc == 0x1AEBC4u) {
        ctx->pc = 0x1AEBC4u;
            // 0x1aebc4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1AEBC8u;
        goto label_1aebc8;
    }
    ctx->pc = 0x1AEBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AEBC8u);
        ctx->pc = 0x1AEBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEBC0u;
            // 0x1aebc4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AEBC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AEBC8u; }
            if (ctx->pc != 0x1AEBC8u) { return; }
        }
        }
    }
    ctx->pc = 0x1AEBC8u;
label_1aebc8:
    // 0x1aebc8: 0x8f848c4c  lw          $a0, -0x73B4($gp)
    ctx->pc = 0x1aebc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937676)));
label_1aebcc:
    // 0x1aebcc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1aebccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1aebd0:
    // 0x1aebd0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1aebd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1aebd4:
    // 0x1aebd4: 0x320f809  jalr        $t9
label_1aebd8:
    if (ctx->pc == 0x1AEBD8u) {
        ctx->pc = 0x1AEBD8u;
            // 0x1aebd8: 0x27a50670  addiu       $a1, $sp, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1648));
        ctx->pc = 0x1AEBDCu;
        goto label_1aebdc;
    }
    ctx->pc = 0x1AEBD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AEBDCu);
        ctx->pc = 0x1AEBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEBD4u;
            // 0x1aebd8: 0x27a50670  addiu       $a1, $sp, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1648));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AEBDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AEBDCu; }
            if (ctx->pc != 0x1AEBDCu) { return; }
        }
        }
    }
    ctx->pc = 0x1AEBDCu;
label_1aebdc:
    // 0x1aebdc: 0x8f848c4c  lw          $a0, -0x73B4($gp)
    ctx->pc = 0x1aebdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937676)));
label_1aebe0:
    // 0x1aebe0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1aebe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1aebe4:
    // 0x1aebe4: 0x0  nop
    ctx->pc = 0x1aebe4u;
    // NOP
label_1aebe8:
    // 0x1aebe8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1aebe8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1aebec:
    // 0x1aebec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1aebecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1aebf0:
    // 0x1aebf0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1aebf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1aebf4:
    // 0x1aebf4: 0x320f809  jalr        $t9
label_1aebf8:
    if (ctx->pc == 0x1AEBF8u) {
        ctx->pc = 0x1AEBF8u;
            // 0x1aebf8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1AEBFCu;
        goto label_1aebfc;
    }
    ctx->pc = 0x1AEBF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AEBFCu);
        ctx->pc = 0x1AEBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEBF4u;
            // 0x1aebf8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AEBFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AEBFCu; }
            if (ctx->pc != 0x1AEBFCu) { return; }
        }
        }
    }
    ctx->pc = 0x1AEBFCu;
label_1aebfc:
    // 0x1aebfc: 0xc050bf4  jal         func_142FD0
label_1aec00:
    if (ctx->pc == 0x1AEC00u) {
        ctx->pc = 0x1AEC00u;
            // 0x1aec00: 0x8f848c4c  lw          $a0, -0x73B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937676)));
        ctx->pc = 0x1AEC04u;
        goto label_1aec04;
    }
    ctx->pc = 0x1AEBFCu;
    SET_GPR_U32(ctx, 31, 0x1AEC04u);
    ctx->pc = 0x1AEC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEBFCu;
            // 0x1aec00: 0x8f848c4c  lw          $a0, -0x73B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937676)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC04u; }
        if (ctx->pc != 0x1AEC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC04u; }
        if (ctx->pc != 0x1AEC04u) { return; }
    }
    ctx->pc = 0x1AEC04u;
label_1aec04:
    // 0x1aec04: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x1aec04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_1aec08:
    // 0x1aec08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1aec0c:
    if (ctx->pc == 0x1AEC0Cu) {
        ctx->pc = 0x1AEC10u;
        goto label_1aec10;
    }
    ctx->pc = 0x1AEC08u;
    {
        const bool branch_taken_0x1aec08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aec08) {
            ctx->pc = 0x1AEC18u;
            goto label_1aec18;
        }
    }
    ctx->pc = 0x1AEC10u;
label_1aec10:
    // 0x1aec10: 0xc050bf4  jal         func_142FD0
label_1aec14:
    if (ctx->pc == 0x1AEC14u) {
        ctx->pc = 0x1AEC14u;
            // 0x1aec14: 0x8f848c50  lw          $a0, -0x73B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
        ctx->pc = 0x1AEC18u;
        goto label_1aec18;
    }
    ctx->pc = 0x1AEC10u;
    SET_GPR_U32(ctx, 31, 0x1AEC18u);
    ctx->pc = 0x1AEC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEC10u;
            // 0x1aec14: 0x8f848c50  lw          $a0, -0x73B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC18u; }
        if (ctx->pc != 0x1AEC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC18u; }
        if (ctx->pc != 0x1AEC18u) { return; }
    }
    ctx->pc = 0x1AEC18u;
label_1aec18:
    // 0x1aec18: 0xc069e0c  jal         func_1A7830
label_1aec1c:
    if (ctx->pc == 0x1AEC1Cu) {
        ctx->pc = 0x1AEC1Cu;
            // 0x1aec1c: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AEC20u;
        goto label_1aec20;
    }
    ctx->pc = 0x1AEC18u;
    SET_GPR_U32(ctx, 31, 0x1AEC20u);
    ctx->pc = 0x1AEC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEC18u;
            // 0x1aec1c: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7830u;
    if (runtime->hasFunction(0x1A7830u)) {
        auto targetFn = runtime->lookupFunction(0x1A7830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC20u; }
        if (ctx->pc != 0x1AEC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditDrawEffectChara__FP6CScene_0x1a7830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC20u; }
        if (ctx->pc != 0x1AEC20u) { return; }
    }
    ctx->pc = 0x1AEC20u;
label_1aec20:
    // 0x1aec20: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1aec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1aec24:
    // 0x1aec24: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1aec28:
    if (ctx->pc == 0x1AEC28u) {
        ctx->pc = 0x1AEC28u;
            // 0x1aec28: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x1AEC2Cu;
        goto label_1aec2c;
    }
    ctx->pc = 0x1AEC24u;
    {
        const bool branch_taken_0x1aec24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEC24u;
            // 0x1aec28: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec24) {
            ctx->pc = 0x1AECA8u;
            goto label_1aeca8;
        }
    }
    ctx->pc = 0x1AEC2Cu;
label_1aec2c:
    // 0x1aec2c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1aec2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1aec30:
    // 0x1aec30: 0x24a562c0  addiu       $a1, $a1, 0x62C0
    ctx->pc = 0x1aec30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25280));
label_1aec34:
    // 0x1aec34: 0xc04b414  jal         func_12D050
label_1aec38:
    if (ctx->pc == 0x1AEC38u) {
        ctx->pc = 0x1AEC38u;
            // 0x1aec38: 0x2406009d  addiu       $a2, $zero, 0x9D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
        ctx->pc = 0x1AEC3Cu;
        goto label_1aec3c;
    }
    ctx->pc = 0x1AEC34u;
    SET_GPR_U32(ctx, 31, 0x1AEC3Cu);
    ctx->pc = 0x1AEC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEC34u;
            // 0x1aec38: 0x2406009d  addiu       $a2, $zero, 0x9D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC3Cu; }
        if (ctx->pc != 0x1AEC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC3Cu; }
        if (ctx->pc != 0x1AEC3Cu) { return; }
    }
    ctx->pc = 0x1AEC3Cu;
label_1aec3c:
    // 0x1aec3c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1aec3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1aec40:
    // 0x1aec40: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1aec40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aec44:
    // 0x1aec44: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1aec44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1aec48:
    // 0x1aec48: 0x24a56458  addiu       $a1, $a1, 0x6458
    ctx->pc = 0x1aec48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25688));
label_1aec4c:
    // 0x1aec4c: 0xc04b414  jal         func_12D050
label_1aec50:
    if (ctx->pc == 0x1AEC50u) {
        ctx->pc = 0x1AEC50u;
            // 0x1aec50: 0x2406009d  addiu       $a2, $zero, 0x9D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
        ctx->pc = 0x1AEC54u;
        goto label_1aec54;
    }
    ctx->pc = 0x1AEC4Cu;
    SET_GPR_U32(ctx, 31, 0x1AEC54u);
    ctx->pc = 0x1AEC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEC4Cu;
            // 0x1aec50: 0x2406009d  addiu       $a2, $zero, 0x9D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC54u; }
        if (ctx->pc != 0x1AEC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC54u; }
        if (ctx->pc != 0x1AEC54u) { return; }
    }
    ctx->pc = 0x1AEC54u;
label_1aec54:
    // 0x1aec54: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aec54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aec58:
    // 0x1aec58: 0x8c852e54  lw          $a1, 0x2E54($a0)
    ctx->pc = 0x1aec58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
label_1aec5c:
    // 0x1aec5c: 0xc0a0e30  jal         func_2838C0
label_1aec60:
    if (ctx->pc == 0x1AEC60u) {
        ctx->pc = 0x1AEC60u;
            // 0x1aec60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC64u;
        goto label_1aec64;
    }
    ctx->pc = 0x1AEC5Cu;
    SET_GPR_U32(ctx, 31, 0x1AEC64u);
    ctx->pc = 0x1AEC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEC5Cu;
            // 0x1aec60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC64u; }
        if (ctx->pc != 0x1AEC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC64u; }
        if (ctx->pc != 0x1AEC64u) { return; }
    }
    ctx->pc = 0x1AEC64u;
label_1aec64:
    // 0x1aec64: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x1aec64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_1aec68:
    // 0x1aec68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1aec68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aec6c:
    // 0x1aec6c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_1aec70:
    if (ctx->pc == 0x1AEC70u) {
        ctx->pc = 0x1AEC70u;
            // 0x1aec70: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC74u;
        goto label_1aec74;
    }
    ctx->pc = 0x1AEC6Cu;
    {
        const bool branch_taken_0x1aec6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEC6Cu;
            // 0x1aec70: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec6c) {
            ctx->pc = 0x1AECA8u;
            goto label_1aeca8;
        }
    }
    ctx->pc = 0x1AEC74u;
label_1aec74:
    // 0x1aec74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1aec74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aec78:
    // 0x1aec78: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x1aec78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_1aec7c:
    // 0x1aec7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1aec7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aec80:
    // 0x1aec80: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x1aec80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
label_1aec84:
    // 0x1aec84: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1aec84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1aec88:
    // 0x1aec88: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x1aec88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_1aec8c:
    // 0x1aec8c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1aec8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1aec90:
    // 0x1aec90: 0x320f809  jalr        $t9
label_1aec94:
    if (ctx->pc == 0x1AEC94u) {
        ctx->pc = 0x1AEC94u;
            // 0x1aec94: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC98u;
        goto label_1aec98;
    }
    ctx->pc = 0x1AEC90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AEC98u);
        ctx->pc = 0x1AEC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEC90u;
            // 0x1aec94: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AEC98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC98u; }
            if (ctx->pc != 0x1AEC98u) { return; }
        }
        }
    }
    ctx->pc = 0x1AEC98u;
label_1aec98:
    // 0x1aec98: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1aec98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1aec9c:
    // 0x1aec9c: 0x277102a  slt         $v0, $s3, $s7
    ctx->pc = 0x1aec9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_1aeca0:
    // 0x1aeca0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1aeca4:
    if (ctx->pc == 0x1AECA4u) {
        ctx->pc = 0x1AECA4u;
            // 0x1aeca4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x1AECA8u;
        goto label_1aeca8;
    }
    ctx->pc = 0x1AECA0u;
    {
        const bool branch_taken_0x1aeca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AECA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AECA0u;
            // 0x1aeca4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeca0) {
            ctx->pc = 0x1AEC78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1aec78;
        }
    }
    ctx->pc = 0x1AECA8u;
label_1aeca8:
    // 0x1aeca8: 0xc06a6e8  jal         func_1A9BA0
label_1aecac:
    if (ctx->pc == 0x1AECACu) {
        ctx->pc = 0x1AECB0u;
        goto label_1aecb0;
    }
    ctx->pc = 0x1AECA8u;
    SET_GPR_U32(ctx, 31, 0x1AECB0u);
    ctx->pc = 0x1A9BA0u;
    if (runtime->hasFunction(0x1A9BA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A9BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AECB0u; }
        if (ctx->pc != 0x1AECB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsEditMode__Fv_0x1a9ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AECB0u; }
        if (ctx->pc != 0x1AECB0u) { return; }
    }
    ctx->pc = 0x1AECB0u;
label_1aecb0:
    // 0x1aecb0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1aecb4:
    if (ctx->pc == 0x1AECB4u) {
        ctx->pc = 0x1AECB8u;
        goto label_1aecb8;
    }
    ctx->pc = 0x1AECB0u;
    {
        const bool branch_taken_0x1aecb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aecb0) {
            ctx->pc = 0x1AECE8u;
            goto label_1aece8;
        }
    }
    ctx->pc = 0x1AECB8u;
label_1aecb8:
    // 0x1aecb8: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1aecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1aecbc:
    // 0x1aecbc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1aecc0:
    if (ctx->pc == 0x1AECC0u) {
        ctx->pc = 0x1AECC0u;
            // 0x1aecc0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AECC4u;
        goto label_1aecc4;
    }
    ctx->pc = 0x1AECBCu;
    {
        const bool branch_taken_0x1aecbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AECC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AECBCu;
            // 0x1aecc0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aecbc) {
            ctx->pc = 0x1AECE8u;
            goto label_1aece8;
        }
    }
    ctx->pc = 0x1AECC4u;
label_1aecc4:
    // 0x1aecc4: 0x240500a2  addiu       $a1, $zero, 0xA2
    ctx->pc = 0x1aecc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
label_1aecc8:
    // 0x1aecc8: 0xc04ba14  jal         func_12E850
label_1aeccc:
    if (ctx->pc == 0x1AECCCu) {
        ctx->pc = 0x1AECCCu;
            // 0x1aeccc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AECD0u;
        goto label_1aecd0;
    }
    ctx->pc = 0x1AECC8u;
    SET_GPR_U32(ctx, 31, 0x1AECD0u);
    ctx->pc = 0x1AECCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AECC8u;
            // 0x1aeccc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AECD0u; }
        if (ctx->pc != 0x1AECD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AECD0u; }
        if (ctx->pc != 0x1AECD0u) { return; }
    }
    ctx->pc = 0x1AECD0u;
label_1aecd0:
    // 0x1aecd0: 0xc0b71b8  jal         func_2DC6E0
label_1aecd4:
    if (ctx->pc == 0x1AECD4u) {
        ctx->pc = 0x1AECD4u;
            // 0x1aecd4: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AECD8u;
        goto label_1aecd8;
    }
    ctx->pc = 0x1AECD0u;
    SET_GPR_U32(ctx, 31, 0x1AECD8u);
    ctx->pc = 0x1AECD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AECD0u;
            // 0x1aecd4: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DC6E0u;
    if (runtime->hasFunction(0x2DC6E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DC6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AECD8u; }
        if (ctx->pc != 0x1AECD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawEditCursor__FP6CScene_0x2dc6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AECD8u; }
        if (ctx->pc != 0x1AECD8u) { return; }
    }
    ctx->pc = 0x1AECD8u;
label_1aecd8:
    // 0x1aecd8: 0xc0bebcc  jal         func_2FAF30
label_1aecdc:
    if (ctx->pc == 0x1AECDCu) {
        ctx->pc = 0x1AECE0u;
        goto label_1aece0;
    }
    ctx->pc = 0x1AECD8u;
    SET_GPR_U32(ctx, 31, 0x1AECE0u);
    ctx->pc = 0x2FAF30u;
    if (runtime->hasFunction(0x2FAF30u)) {
        auto targetFn = runtime->lookupFunction(0x2FAF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AECE0u; }
        if (ctx->pc != 0x1AECE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditPEffectStep__Fv_0x2faf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AECE0u; }
        if (ctx->pc != 0x1AECE0u) { return; }
    }
    ctx->pc = 0x1AECE0u;
label_1aece0:
    // 0x1aece0: 0xc0bebec  jal         func_2FAFB0
label_1aece4:
    if (ctx->pc == 0x1AECE4u) {
        ctx->pc = 0x1AECE4u;
            // 0x1aece4: 0x240400a2  addiu       $a0, $zero, 0xA2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
        ctx->pc = 0x1AECE8u;
        goto label_1aece8;
    }
    ctx->pc = 0x1AECE0u;
    SET_GPR_U32(ctx, 31, 0x1AECE8u);
    ctx->pc = 0x1AECE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AECE0u;
            // 0x1aece4: 0x240400a2  addiu       $a0, $zero, 0xA2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FAFB0u;
    if (runtime->hasFunction(0x2FAFB0u)) {
        auto targetFn = runtime->lookupFunction(0x2FAFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AECE8u; }
        if (ctx->pc != 0x1AECE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditPEffectDraw__Fi_0x2fafb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AECE8u; }
        if (ctx->pc != 0x1AECE8u) { return; }
    }
    ctx->pc = 0x1AECE8u;
label_1aece8:
    // 0x1aece8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1aece8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1aecec:
    // 0x1aecec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1aecf0:
    if (ctx->pc == 0x1AECF0u) {
        ctx->pc = 0x1AECF4u;
        goto label_1aecf4;
    }
    ctx->pc = 0x1AECECu;
    {
        const bool branch_taken_0x1aecec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aecec) {
            ctx->pc = 0x1AED1Cu;
            goto label_1aed1c;
        }
    }
    ctx->pc = 0x1AECF4u;
label_1aecf4:
    // 0x1aecf4: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aecf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aecf8:
    // 0x1aecf8: 0xc0b2208  jal         func_2C8820
label_1aecfc:
    if (ctx->pc == 0x1AECFCu) {
        ctx->pc = 0x1AECFCu;
            // 0x1aecfc: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->pc = 0x1AED00u;
        goto label_1aed00;
    }
    ctx->pc = 0x1AECF8u;
    SET_GPR_U32(ctx, 31, 0x1AED00u);
    ctx->pc = 0x1AECFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AECF8u;
            // 0x1aecfc: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8820u;
    if (runtime->hasFunction(0x2C8820u)) {
        auto targetFn = runtime->lookupFunction(0x2C8820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED00u; }
        if (ctx->pc != 0x1AED00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawEffect__6CSceneFi_0x2c8820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED00u; }
        if (ctx->pc != 0x1AED00u) { return; }
    }
    ctx->pc = 0x1AED00u;
label_1aed00:
    // 0x1aed00: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1aed00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1aed04:
    // 0x1aed04: 0x240500a3  addiu       $a1, $zero, 0xA3
    ctx->pc = 0x1aed04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
label_1aed08:
    // 0x1aed08: 0xc04ba14  jal         func_12E850
label_1aed0c:
    if (ctx->pc == 0x1AED0Cu) {
        ctx->pc = 0x1AED0Cu;
            // 0x1aed0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AED10u;
        goto label_1aed10;
    }
    ctx->pc = 0x1AED08u;
    SET_GPR_U32(ctx, 31, 0x1AED10u);
    ctx->pc = 0x1AED0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AED08u;
            // 0x1aed0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED10u; }
        if (ctx->pc != 0x1AED10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED10u; }
        if (ctx->pc != 0x1AED10u) { return; }
    }
    ctx->pc = 0x1AED10u;
label_1aed10:
    // 0x1aed10: 0x8f858c58  lw          $a1, -0x73A8($gp)
    ctx->pc = 0x1aed10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
label_1aed14:
    // 0x1aed14: 0xc0b2ea8  jal         func_2CBAA0
label_1aed18:
    if (ctx->pc == 0x1AED18u) {
        ctx->pc = 0x1AED18u;
            // 0x1aed18: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AED1Cu;
        goto label_1aed1c;
    }
    ctx->pc = 0x1AED14u;
    SET_GPR_U32(ctx, 31, 0x1AED1Cu);
    ctx->pc = 0x1AED18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AED14u;
            // 0x1aed18: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CBAA0u;
    if (runtime->hasFunction(0x2CBAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CBAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED1Cu; }
        if (ctx->pc != 0x1AED1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawGameObject__6CSceneFi_0x2cbaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED1Cu; }
        if (ctx->pc != 0x1AED1Cu) { return; }
    }
    ctx->pc = 0x1AED1Cu;
label_1aed1c:
    // 0x1aed1c: 0xc0c1150  jal         func_304540
label_1aed20:
    if (ctx->pc == 0x1AED20u) {
        ctx->pc = 0x1AED24u;
        goto label_1aed24;
    }
    ctx->pc = 0x1AED1Cu;
    SET_GPR_U32(ctx, 31, 0x1AED24u);
    ctx->pc = 0x304540u;
    if (runtime->hasFunction(0x304540u)) {
        auto targetFn = runtime->lookupFunction(0x304540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED24u; }
        if (ctx->pc != 0x1AED24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgDrawSubGameEffect__Fv_0x304540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED24u; }
        if (ctx->pc != 0x1AED24u) { return; }
    }
    ctx->pc = 0x1AED24u;
label_1aed24:
    // 0x1aed24: 0xc0987d4  jal         func_261F50
label_1aed28:
    if (ctx->pc == 0x1AED28u) {
        ctx->pc = 0x1AED2Cu;
        goto label_1aed2c;
    }
    ctx->pc = 0x1AED24u;
    SET_GPR_U32(ctx, 31, 0x1AED2Cu);
    ctx->pc = 0x261F50u;
    if (runtime->hasFunction(0x261F50u)) {
        auto targetFn = runtime->lookupFunction(0x261F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED2Cu; }
        if (ctx->pc != 0x1AED2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EdEventDraw__Fv_0x261f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED2Cu; }
        if (ctx->pc != 0x1AED2Cu) { return; }
    }
    ctx->pc = 0x1AED2Cu;
label_1aed2c:
    // 0x1aed2c: 0xc050ebc  jal         func_143AF0
label_1aed30:
    if (ctx->pc == 0x1AED30u) {
        ctx->pc = 0x1AED30u;
            // 0x1aed30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AED34u;
        goto label_1aed34;
    }
    ctx->pc = 0x1AED2Cu;
    SET_GPR_U32(ctx, 31, 0x1AED34u);
    ctx->pc = 0x1AED30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AED2Cu;
            // 0x1aed30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143AF0u;
    if (runtime->hasFunction(0x143AF0u)) {
        auto targetFn = runtime->lookupFunction(0x143AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED34u; }
        if (ctx->pc != 0x1AED34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkTextureRepeat__Fi_0x143af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED34u; }
        if (ctx->pc != 0x1AED34u) { return; }
    }
    ctx->pc = 0x1AED34u;
label_1aed34:
    // 0x1aed34: 0xc0b7d7c  jal         func_2DF5F0
label_1aed38:
    if (ctx->pc == 0x1AED38u) {
        ctx->pc = 0x1AED3Cu;
        goto label_1aed3c;
    }
    ctx->pc = 0x1AED34u;
    SET_GPR_U32(ctx, 31, 0x1AED3Cu);
    ctx->pc = 0x2DF5F0u;
    if (runtime->hasFunction(0x2DF5F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED3Cu; }
        if (ctx->pc != 0x1AED3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InInterior__Fv_0x2df5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED3Cu; }
        if (ctx->pc != 0x1AED3Cu) { return; }
    }
    ctx->pc = 0x1AED3Cu;
label_1aed3c:
    // 0x1aed3c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1aed40:
    if (ctx->pc == 0x1AED40u) {
        ctx->pc = 0x1AED44u;
        goto label_1aed44;
    }
    ctx->pc = 0x1AED3Cu;
    {
        const bool branch_taken_0x1aed3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aed3c) {
            ctx->pc = 0x1AED60u;
            goto label_1aed60;
        }
    }
    ctx->pc = 0x1AED44u;
label_1aed44:
    // 0x1aed44: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aed44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aed48:
    // 0x1aed48: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x1aed48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_1aed4c:
    // 0x1aed4c: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x1aed4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
label_1aed50:
    // 0x1aed50: 0x2405009c  addiu       $a1, $zero, 0x9C
    ctx->pc = 0x1aed50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
label_1aed54:
    // 0x1aed54: 0x24c662a8  addiu       $a2, $a2, 0x62A8
    ctx->pc = 0x1aed54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25256));
label_1aed58:
    // 0x1aed58: 0xc0b2148  jal         func_2C8520
label_1aed5c:
    if (ctx->pc == 0x1AED5Cu) {
        ctx->pc = 0x1AED5Cu;
            // 0x1aed5c: 0x24e762e0  addiu       $a3, $a3, 0x62E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25312));
        ctx->pc = 0x1AED60u;
        goto label_1aed60;
    }
    ctx->pc = 0x1AED58u;
    SET_GPR_U32(ctx, 31, 0x1AED60u);
    ctx->pc = 0x1AED5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AED58u;
            // 0x1aed5c: 0x24e762e0  addiu       $a3, $a3, 0x62E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8520u;
    if (runtime->hasFunction(0x2C8520u)) {
        auto targetFn = runtime->lookupFunction(0x2C8520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED60u; }
        if (ctx->pc != 0x1AED60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawLensFlare__6CSceneFiPcPc_0x2c8520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED60u; }
        if (ctx->pc != 0x1AED60u) { return; }
    }
    ctx->pc = 0x1AED60u;
label_1aed60:
    // 0x1aed60: 0xc0c116c  jal         func_3045B0
label_1aed64:
    if (ctx->pc == 0x1AED64u) {
        ctx->pc = 0x1AED68u;
        goto label_1aed68;
    }
    ctx->pc = 0x1AED60u;
    SET_GPR_U32(ctx, 31, 0x1AED68u);
    ctx->pc = 0x3045B0u;
    if (runtime->hasFunction(0x3045B0u)) {
        auto targetFn = runtime->lookupFunction(0x3045B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED68u; }
        if (ctx->pc != 0x1AED68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgDrawSubGameSystem__Fv_0x3045b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED68u; }
        if (ctx->pc != 0x1AED68u) { return; }
    }
    ctx->pc = 0x1AED68u;
label_1aed68:
    // 0x1aed68: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x1aed68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
label_1aed6c:
    // 0x1aed6c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1aed70:
    if (ctx->pc == 0x1AED70u) {
        ctx->pc = 0x1AED70u;
            // 0x1aed70: 0x3c01003e  lui         $at, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
        ctx->pc = 0x1AED74u;
        goto label_1aed74;
    }
    ctx->pc = 0x1AED6Cu;
    {
        const bool branch_taken_0x1aed6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AED70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AED6Cu;
            // 0x1aed70: 0x3c01003e  lui         $at, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed6c) {
            ctx->pc = 0x1AED94u;
            goto label_1aed94;
        }
    }
    ctx->pc = 0x1AED74u;
label_1aed74:
    // 0x1aed74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aed74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aed78:
    // 0x1aed78: 0x8c238080  lw          $v1, -0x7F80($at)
    ctx->pc = 0x1aed78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934656)));
label_1aed7c:
    // 0x1aed7c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1aed80:
    if (ctx->pc == 0x1AED80u) {
        ctx->pc = 0x1AED84u;
        goto label_1aed84;
    }
    ctx->pc = 0x1AED7Cu;
    {
        const bool branch_taken_0x1aed7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aed7c) {
            ctx->pc = 0x1AED94u;
            goto label_1aed94;
        }
    }
    ctx->pc = 0x1AED84u;
label_1aed84:
    // 0x1aed84: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aed84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aed88:
    // 0x1aed88: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1aed88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1aed8c:
    // 0x1aed8c: 0xc0a10bc  jal         func_2842F0
label_1aed90:
    if (ctx->pc == 0x1AED90u) {
        ctx->pc = 0x1AED90u;
            // 0x1aed90: 0x24a5efc0  addiu       $a1, $a1, -0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963136));
        ctx->pc = 0x1AED94u;
        goto label_1aed94;
    }
    ctx->pc = 0x1AED8Cu;
    SET_GPR_U32(ctx, 31, 0x1AED94u);
    ctx->pc = 0x1AED90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AED8Cu;
            // 0x1aed90: 0x24a5efc0  addiu       $a1, $a1, -0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2842F0u;
    if (runtime->hasFunction(0x2842F0u)) {
        auto targetFn = runtime->lookupFunction(0x2842F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED94u; }
        if (ctx->pc != 0x1AED94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawScreenFunc__6CSceneFP8mgCFrame_0x2842f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED94u; }
        if (ctx->pc != 0x1AED94u) { return; }
    }
    ctx->pc = 0x1AED94u;
label_1aed94:
    // 0x1aed94: 0xc0c39a0  jal         func_30E680
label_1aed98:
    if (ctx->pc == 0x1AED98u) {
        ctx->pc = 0x1AED9Cu;
        goto label_1aed9c;
    }
    ctx->pc = 0x1AED94u;
    SET_GPR_U32(ctx, 31, 0x1AED9Cu);
    ctx->pc = 0x30E680u;
    if (runtime->hasFunction(0x30E680u)) {
        auto targetFn = runtime->lookupFunction(0x30E680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED9Cu; }
        if (ctx->pc != 0x1AED9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowTakePhoto__Fv_0x30e680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED9Cu; }
        if (ctx->pc != 0x1AED9Cu) { return; }
    }
    ctx->pc = 0x1AED9Cu;
label_1aed9c:
    // 0x1aed9c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1aeda0:
    if (ctx->pc == 0x1AEDA0u) {
        ctx->pc = 0x1AEDA0u;
            // 0x1aeda0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEDA4u;
        goto label_1aeda4;
    }
    ctx->pc = 0x1AED9Cu;
    {
        const bool branch_taken_0x1aed9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AED9Cu;
            // 0x1aeda0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed9c) {
            ctx->pc = 0x1AEDB4u;
            goto label_1aedb4;
        }
    }
    ctx->pc = 0x1AEDA4u;
label_1aeda4:
    // 0x1aeda4: 0xc0bddb0  jal         func_2F76C0
label_1aeda8:
    if (ctx->pc == 0x1AEDA8u) {
        ctx->pc = 0x1AEDACu;
        goto label_1aedac;
    }
    ctx->pc = 0x1AEDA4u;
    SET_GPR_U32(ctx, 31, 0x1AEDACu);
    ctx->pc = 0x2F76C0u;
    if (runtime->hasFunction(0x2F76C0u)) {
        auto targetFn = runtime->lookupFunction(0x2F76C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEDACu; }
        if (ctx->pc != 0x1AEDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitNpcCameraReaction__Fv_0x2f76c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEDACu; }
        if (ctx->pc != 0x1AEDACu) { return; }
    }
    ctx->pc = 0x1AEDACu;
label_1aedac:
    // 0x1aedac: 0x10000080  b           . + 4 + (0x80 << 2)
label_1aedb0:
    if (ctx->pc == 0x1AEDB0u) {
        ctx->pc = 0x1AEDB4u;
        goto label_1aedb4;
    }
    ctx->pc = 0x1AEDACu;
    {
        const bool branch_taken_0x1aedac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aedac) {
            ctx->pc = 0x1AEFB0u;
            goto label_1aefb0;
        }
    }
    ctx->pc = 0x1AEDB4u;
label_1aedb4:
    // 0x1aedb4: 0x240500a1  addiu       $a1, $zero, 0xA1
    ctx->pc = 0x1aedb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
label_1aedb8:
    // 0x1aedb8: 0xc04ba14  jal         func_12E850
label_1aedbc:
    if (ctx->pc == 0x1AEDBCu) {
        ctx->pc = 0x1AEDBCu;
            // 0x1aedbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEDC0u;
        goto label_1aedc0;
    }
    ctx->pc = 0x1AEDB8u;
    SET_GPR_U32(ctx, 31, 0x1AEDC0u);
    ctx->pc = 0x1AEDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEDB8u;
            // 0x1aedbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEDC0u; }
        if (ctx->pc != 0x1AEDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEDC0u; }
        if (ctx->pc != 0x1AEDC0u) { return; }
    }
    ctx->pc = 0x1AEDC0u;
label_1aedc0:
    // 0x1aedc0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1aedc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1aedc4:
    // 0x1aedc4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1aedc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1aedc8:
    // 0x1aedc8: 0x24a56460  addiu       $a1, $a1, 0x6460
    ctx->pc = 0x1aedc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25696));
label_1aedcc:
    // 0x1aedcc: 0xc04b414  jal         func_12D050
label_1aedd0:
    if (ctx->pc == 0x1AEDD0u) {
        ctx->pc = 0x1AEDD0u;
            // 0x1aedd0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1AEDD4u;
        goto label_1aedd4;
    }
    ctx->pc = 0x1AEDCCu;
    SET_GPR_U32(ctx, 31, 0x1AEDD4u);
    ctx->pc = 0x1AEDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEDCCu;
            // 0x1aedd0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEDD4u; }
        if (ctx->pc != 0x1AEDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEDD4u; }
        if (ctx->pc != 0x1AEDD4u) { return; }
    }
    ctx->pc = 0x1AEDD4u;
label_1aedd4:
    // 0x1aedd4: 0xc06a6c4  jal         func_1A9B10
label_1aedd8:
    if (ctx->pc == 0x1AEDD8u) {
        ctx->pc = 0x1AEDD8u;
            // 0x1aedd8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEDDCu;
        goto label_1aeddc;
    }
    ctx->pc = 0x1AEDD4u;
    SET_GPR_U32(ctx, 31, 0x1AEDDCu);
    ctx->pc = 0x1AEDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEDD4u;
            // 0x1aedd8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9B10u;
    if (runtime->hasFunction(0x1A9B10u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEDDCu; }
        if (ctx->pc != 0x1AEDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserData__Fv_0x1a9b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEDDCu; }
        if (ctx->pc != 0x1AEDDCu) { return; }
    }
    ctx->pc = 0x1AEDDCu;
label_1aeddc:
    // 0x1aeddc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1aede0:
    if (ctx->pc == 0x1AEDE0u) {
        ctx->pc = 0x1AEDE4u;
        goto label_1aede4;
    }
    ctx->pc = 0x1AEDDCu;
    {
        const bool branch_taken_0x1aeddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aeddc) {
            ctx->pc = 0x1AEDF0u;
            goto label_1aedf0;
        }
    }
    ctx->pc = 0x1AEDE4u;
label_1aede4:
    // 0x1aede4: 0xc06a6c4  jal         func_1A9B10
label_1aede8:
    if (ctx->pc == 0x1AEDE8u) {
        ctx->pc = 0x1AEDECu;
        goto label_1aedec;
    }
    ctx->pc = 0x1AEDE4u;
    SET_GPR_U32(ctx, 31, 0x1AEDECu);
    ctx->pc = 0x1A9B10u;
    if (runtime->hasFunction(0x1A9B10u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEDECu; }
        if (ctx->pc != 0x1AEDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserData__Fv_0x1a9b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEDECu; }
        if (ctx->pc != 0x1AEDECu) { return; }
    }
    ctx->pc = 0x1AEDECu;
label_1aedec:
    // 0x1aedec: 0x24537f30  addiu       $s3, $v0, 0x7F30
    ctx->pc = 0x1aedecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 32560));
label_1aedf0:
    // 0x1aedf0: 0x83828d10  lb          $v0, -0x72F0($gp)
    ctx->pc = 0x1aedf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_1aedf4:
    // 0x1aedf4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1aedf8:
    if (ctx->pc == 0x1AEDF8u) {
        ctx->pc = 0x1AEDF8u;
            // 0x1aedf8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1AEDFCu;
        goto label_1aedfc;
    }
    ctx->pc = 0x1AEDF4u;
    {
        const bool branch_taken_0x1aedf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEDF4u;
            // 0x1aedf8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aedf4) {
            ctx->pc = 0x1AEE0Cu;
            goto label_1aee0c;
        }
    }
    ctx->pc = 0x1AEDFCu;
label_1aedfc:
    // 0x1aedfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aedfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aee00:
    // 0x1aee00: 0xaf808d0c  sw          $zero, -0x72F4($gp)
    ctx->pc = 0x1aee00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937868), GPR_U32(ctx, 0));
label_1aee04:
    // 0x1aee04: 0xa3828d10  sb          $v0, -0x72F0($gp)
    ctx->pc = 0x1aee04u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937872), (uint8_t)GPR_U32(ctx, 2));
label_1aee08:
    // 0x1aee08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1aee08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1aee0c:
    // 0x1aee0c: 0x27b606b4  addiu       $s6, $sp, 0x6B4
    ctx->pc = 0x1aee0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1716));
label_1aee10:
    // 0x1aee10: 0xafa206b0  sw          $v0, 0x6B0($sp)
    ctx->pc = 0x1aee10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1712), GPR_U32(ctx, 2));
label_1aee14:
    // 0x1aee14: 0x27b506b8  addiu       $s5, $sp, 0x6B8
    ctx->pc = 0x1aee14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1720));
label_1aee18:
    // 0x1aee18: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1aee18u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_1aee1c:
    // 0x1aee1c: 0x27a506b0  addiu       $a1, $sp, 0x6B0
    ctx->pc = 0x1aee1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1712));
label_1aee20:
    // 0x1aee20: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1aee20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_1aee24:
    // 0x1aee24: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aee24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aee28:
    // 0x1aee28: 0xc0b2c44  jal         func_2CB110
label_1aee2c:
    if (ctx->pc == 0x1AEE2Cu) {
        ctx->pc = 0x1AEE2Cu;
            // 0x1aee2c: 0x27a60680  addiu       $a2, $sp, 0x680 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1664));
        ctx->pc = 0x1AEE30u;
        goto label_1aee30;
    }
    ctx->pc = 0x1AEE28u;
    SET_GPR_U32(ctx, 31, 0x1AEE30u);
    ctx->pc = 0x1AEE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEE28u;
            // 0x1aee2c: 0x27a60680  addiu       $a2, $sp, 0x680 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB110u;
    if (runtime->hasFunction(0x2CB110u)) {
        auto targetFn = runtime->lookupFunction(0x2CB110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE30u; }
        if (ctx->pc != 0x1AEE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InScreenChara__6CSceneFPQ26CScene17InScreenCharaInfoPf_0x2cb110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE30u; }
        if (ctx->pc != 0x1AEE30u) { return; }
    }
    ctx->pc = 0x1AEE30u;
label_1aee30:
    // 0x1aee30: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aee30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aee34:
    // 0x1aee34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aee34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aee38:
    // 0x1aee38: 0x8fb406b0  lw          $s4, 0x6B0($sp)
    ctx->pc = 0x1aee38u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1712)));
label_1aee3c:
    // 0x1aee3c: 0xc0a0ed8  jal         func_283B60
label_1aee40:
    if (ctx->pc == 0x1AEE40u) {
        ctx->pc = 0x1AEE40u;
            // 0x1aee40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE44u;
        goto label_1aee44;
    }
    ctx->pc = 0x1AEE3Cu;
    SET_GPR_U32(ctx, 31, 0x1AEE44u);
    ctx->pc = 0x1AEE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEE3Cu;
            // 0x1aee40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE44u; }
        if (ctx->pc != 0x1AEE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE44u; }
        if (ctx->pc != 0x1AEE44u) { return; }
    }
    ctx->pc = 0x1AEE44u;
label_1aee44:
    // 0x1aee44: 0x600000d  bltz        $s0, . + 4 + (0xD << 2)
label_1aee48:
    if (ctx->pc == 0x1AEE48u) {
        ctx->pc = 0x1AEE48u;
            // 0x1aee48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE4Cu;
        goto label_1aee4c;
    }
    ctx->pc = 0x1AEE44u;
    {
        const bool branch_taken_0x1aee44 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1AEE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEE44u;
            // 0x1aee48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee44) {
            ctx->pc = 0x1AEE7Cu;
            goto label_1aee7c;
        }
    }
    ctx->pc = 0x1AEE4Cu;
label_1aee4c:
    // 0x1aee4c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1aee50:
    if (ctx->pc == 0x1AEE50u) {
        ctx->pc = 0x1AEE50u;
            // 0x1aee50: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x1AEE54u;
        goto label_1aee54;
    }
    ctx->pc = 0x1AEE4Cu;
    {
        const bool branch_taken_0x1aee4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEE4Cu;
            // 0x1aee50: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee4c) {
            ctx->pc = 0x1AEE78u;
            goto label_1aee78;
        }
    }
    ctx->pc = 0x1AEE54u;
label_1aee54:
    // 0x1aee54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aee54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aee58:
    // 0x1aee58: 0x24a56470  addiu       $a1, $a1, 0x6470
    ctx->pc = 0x1aee58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25712));
label_1aee5c:
    // 0x1aee5c: 0xc05d2b4  jal         func_174AD0
label_1aee60:
    if (ctx->pc == 0x1AEE60u) {
        ctx->pc = 0x1AEE60u;
            // 0x1aee60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE64u;
        goto label_1aee64;
    }
    ctx->pc = 0x1AEE5Cu;
    SET_GPR_U32(ctx, 31, 0x1AEE64u);
    ctx->pc = 0x1AEE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEE5Cu;
            // 0x1aee60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174AD0u;
    if (runtime->hasFunction(0x174AD0u)) {
        auto targetFn = runtime->lookupFunction(0x174AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE64u; }
        if (ctx->pc != 0x1AEE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetKeyListPtr__11CCharacter2FPcPi_0x174ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE64u; }
        if (ctx->pc != 0x1AEE64u) { return; }
    }
    ctx->pc = 0x1AEE64u;
label_1aee64:
    // 0x1aee64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1aee68:
    if (ctx->pc == 0x1AEE68u) {
        ctx->pc = 0x1AEE6Cu;
        goto label_1aee6c;
    }
    ctx->pc = 0x1AEE64u;
    {
        const bool branch_taken_0x1aee64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aee64) {
            ctx->pc = 0x1AEE78u;
            goto label_1aee78;
        }
    }
    ctx->pc = 0x1AEE6Cu;
label_1aee6c:
    // 0x1aee6c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aee70:
    // 0x1aee70: 0xc0b2bf4  jal         func_2CAFD0
label_1aee74:
    if (ctx->pc == 0x1AEE74u) {
        ctx->pc = 0x1AEE74u;
            // 0x1aee74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE78u;
        goto label_1aee78;
    }
    ctx->pc = 0x1AEE70u;
    SET_GPR_U32(ctx, 31, 0x1AEE78u);
    ctx->pc = 0x1AEE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEE70u;
            // 0x1aee74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CAFD0u;
    if (runtime->hasFunction(0x2CAFD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CAFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE78u; }
        if (ctx->pc != 0x1AEE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExModeVillager__6CSceneFi_0x2cafd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE78u; }
        if (ctx->pc != 0x1AEE78u) { return; }
    }
    ctx->pc = 0x1AEE78u;
label_1aee78:
    // 0x1aee78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1aee78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1aee7c:
    // 0x1aee7c: 0xc07fac0  jal         func_1FEB00
label_1aee80:
    if (ctx->pc == 0x1AEE80u) {
        ctx->pc = 0x1AEE80u;
            // 0x1aee80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE84u;
        goto label_1aee84;
    }
    ctx->pc = 0x1AEE7Cu;
    SET_GPR_U32(ctx, 31, 0x1AEE84u);
    ctx->pc = 0x1AEE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEE7Cu;
            // 0x1aee80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB00u;
    if (runtime->hasFunction(0x1FEB00u)) {
        auto targetFn = runtime->lookupFunction(0x1FEB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE84u; }
        if (ctx->pc != 0x1AEE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsPhotoSpace__15CInventUserDataFPi_0x1feb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE84u; }
        if (ctx->pc != 0x1AEE84u) { return; }
    }
    ctx->pc = 0x1AEE84u;
label_1aee84:
    // 0x1aee84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aee84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aee88:
    // 0x1aee88: 0x27a506cc  addiu       $a1, $sp, 0x6CC
    ctx->pc = 0x1aee88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1740));
label_1aee8c:
    // 0x1aee8c: 0xc0c3a04  jal         func_30E810
label_1aee90:
    if (ctx->pc == 0x1AEE90u) {
        ctx->pc = 0x1AEE90u;
            // 0x1aee90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE94u;
        goto label_1aee94;
    }
    ctx->pc = 0x1AEE8Cu;
    SET_GPR_U32(ctx, 31, 0x1AEE94u);
    ctx->pc = 0x1AEE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEE8Cu;
            // 0x1aee90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E810u;
    if (runtime->hasFunction(0x30E810u)) {
        auto targetFn = runtime->lookupFunction(0x30E810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE94u; }
        if (ctx->pc != 0x1AEE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawTakePhoto__FP17USER_PICTURE_INFOPf_0x30e810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE94u; }
        if (ctx->pc != 0x1AEE94u) { return; }
    }
    ctx->pc = 0x1AEE94u;
label_1aee94:
    // 0x1aee94: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_1aee98:
    if (ctx->pc == 0x1AEE98u) {
        ctx->pc = 0x1AEE9Cu;
        goto label_1aee9c;
    }
    ctx->pc = 0x1AEE94u;
    {
        const bool branch_taken_0x1aee94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aee94) {
            ctx->pc = 0x1AEF94u;
            goto label_1aef94;
        }
    }
    ctx->pc = 0x1AEE9Cu;
label_1aee9c:
    // 0x1aee9c: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
label_1aeea0:
    if (ctx->pc == 0x1AEEA0u) {
        ctx->pc = 0x1AEEA4u;
        goto label_1aeea4;
    }
    ctx->pc = 0x1AEE9Cu;
    {
        const bool branch_taken_0x1aee9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aee9c) {
            ctx->pc = 0x1AEF94u;
            goto label_1aef94;
        }
    }
    ctx->pc = 0x1AEEA4u;
label_1aeea4:
    // 0x1aeea4: 0xc7a006cc  lwc1        $f0, 0x6CC($sp)
    ctx->pc = 0x1aeea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aeea8:
    // 0x1aeea8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1aeea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1aeeac:
    // 0x1aeeac: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aeeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aeeb0:
    // 0x1aeeb0: 0x27a506c0  addiu       $a1, $sp, 0x6C0
    ctx->pc = 0x1aeeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1728));
label_1aeeb4:
    // 0x1aeeb4: 0xafa206c0  sw          $v0, 0x6C0($sp)
    ctx->pc = 0x1aeeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1728), GPR_U32(ctx, 2));
label_1aeeb8:
    // 0x1aeeb8: 0xafa206c8  sw          $v0, 0x6C8($sp)
    ctx->pc = 0x1aeeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1736), GPR_U32(ctx, 2));
label_1aeebc:
    // 0x1aeebc: 0xafa006c4  sw          $zero, 0x6C4($sp)
    ctx->pc = 0x1aeebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1732), GPR_U32(ctx, 0));
label_1aeec0:
    // 0x1aeec0: 0xc0a0f8c  jal         func_283E30
label_1aeec4:
    if (ctx->pc == 0x1AEEC4u) {
        ctx->pc = 0x1AEEC4u;
            // 0x1aeec4: 0xe7a006c0  swc1        $f0, 0x6C0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1728), bits); }
        ctx->pc = 0x1AEEC8u;
        goto label_1aeec8;
    }
    ctx->pc = 0x1AEEC0u;
    SET_GPR_U32(ctx, 31, 0x1AEEC8u);
    ctx->pc = 0x1AEEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEEC0u;
            // 0x1aeec4: 0xe7a006c0  swc1        $f0, 0x6C0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1728), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x283E30u;
    if (runtime->hasFunction(0x283E30u)) {
        auto targetFn = runtime->lookupFunction(0x283E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEEC8u; }
        if (ctx->pc != 0x1AEEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InScreenFunc__6CSceneFP16InScreenFuncInfo_0x283e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEEC8u; }
        if (ctx->pc != 0x1AEEC8u) { return; }
    }
    ctx->pc = 0x1AEEC8u;
label_1aeec8:
    // 0x1aeec8: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aeec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aeecc:
    // 0x1aeecc: 0xc0a0f80  jal         func_283E00
label_1aeed0:
    if (ctx->pc == 0x1AEED0u) {
        ctx->pc = 0x1AEED0u;
            // 0x1aeed0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEED4u;
        goto label_1aeed4;
    }
    ctx->pc = 0x1AEECCu;
    SET_GPR_U32(ctx, 31, 0x1AEED4u);
    ctx->pc = 0x1AEED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEECCu;
            // 0x1aeed0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283E00u;
    if (runtime->hasFunction(0x283E00u)) {
        auto targetFn = runtime->lookupFunction(0x283E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEED4u; }
        if (ctx->pc != 0x1AEED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainMapNo__6CSceneFv_0x283e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEED4u; }
        if (ctx->pc != 0x1AEED4u) { return; }
    }
    ctx->pc = 0x1AEED4u;
label_1aeed4:
    // 0x1aeed4: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1aeed4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_1aeed8:
    // 0x1aeed8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1aeed8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1aeedc:
    // 0x1aeedc: 0xa612000a  sh          $s2, 0xA($s0)
    ctx->pc = 0x1aeedcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 18));
label_1aeee0:
    // 0x1aeee0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_1aeee4:
    if (ctx->pc == 0x1AEEE4u) {
        ctx->pc = 0x1AEEE4u;
            // 0x1aeee4: 0xa6120004  sh          $s2, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 18));
        ctx->pc = 0x1AEEE8u;
        goto label_1aeee8;
    }
    ctx->pc = 0x1AEEE0u;
    {
        const bool branch_taken_0x1aeee0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEEE0u;
            // 0x1aeee4: 0xa6120004  sh          $s2, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeee0) {
            ctx->pc = 0x1AEEF0u;
            goto label_1aeef0;
        }
    }
    ctx->pc = 0x1AEEE8u;
label_1aeee8:
    // 0x1aeee8: 0x8e320020  lw          $s2, 0x20($s1)
    ctx->pc = 0x1aeee8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1aeeec:
    // 0x1aeeec: 0x0  nop
    ctx->pc = 0x1aeeecu;
    // NOP
label_1aeef0:
    // 0x1aeef0: 0x240200c4  addiu       $v0, $zero, 0xC4
    ctx->pc = 0x1aeef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
label_1aeef4:
    // 0x1aeef4: 0x16420007  bne         $s2, $v0, . + 4 + (0x7 << 2)
label_1aeef8:
    if (ctx->pc == 0x1AEEF8u) {
        ctx->pc = 0x1AEEFCu;
        goto label_1aeefc;
    }
    ctx->pc = 0x1AEEF4u;
    {
        const bool branch_taken_0x1aeef4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aeef4) {
            ctx->pc = 0x1AEF14u;
            goto label_1aef14;
        }
    }
    ctx->pc = 0x1AEEFCu;
label_1aeefc:
    // 0x1aeefc: 0xc0a0f80  jal         func_283E00
label_1aef00:
    if (ctx->pc == 0x1AEF00u) {
        ctx->pc = 0x1AEF00u;
            // 0x1aef00: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AEF04u;
        goto label_1aef04;
    }
    ctx->pc = 0x1AEEFCu;
    SET_GPR_U32(ctx, 31, 0x1AEF04u);
    ctx->pc = 0x1AEF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEEFCu;
            // 0x1aef00: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283E00u;
    if (runtime->hasFunction(0x283E00u)) {
        auto targetFn = runtime->lookupFunction(0x283E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEF04u; }
        if (ctx->pc != 0x1AEF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainMapNo__6CSceneFv_0x283e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEF04u; }
        if (ctx->pc != 0x1AEF04u) { return; }
    }
    ctx->pc = 0x1AEF04u;
label_1aef04:
    // 0x1aef04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1aef04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aef08:
    // 0x1aef08: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1aef0c:
    if (ctx->pc == 0x1AEF0Cu) {
        ctx->pc = 0x1AEF10u;
        goto label_1aef10;
    }
    ctx->pc = 0x1AEF08u;
    {
        const bool branch_taken_0x1aef08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aef08) {
            ctx->pc = 0x1AEF14u;
            goto label_1aef14;
        }
    }
    ctx->pc = 0x1AEF10u;
label_1aef10:
    // 0x1aef10: 0x241207d6  addiu       $s2, $zero, 0x7D6
    ctx->pc = 0x1aef10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2006));
label_1aef14:
    // 0x1aef14: 0xc7a006cc  lwc1        $f0, 0x6CC($sp)
    ctx->pc = 0x1aef14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aef18:
    // 0x1aef18: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1aef18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1aef1c:
    // 0x1aef1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1aef1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1aef20:
    // 0x1aef20: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x1aef20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1aef24:
    // 0x1aef24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1aef24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1aef28:
    // 0x1aef28: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1aef28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aef2c:
    // 0x1aef2c: 0x0  nop
    ctx->pc = 0x1aef2cu;
    // NOP
label_1aef30:
    // 0x1aef30: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_1aef34:
    if (ctx->pc == 0x1AEF34u) {
        ctx->pc = 0x1AEF38u;
        goto label_1aef38;
    }
    ctx->pc = 0x1AEF30u;
    {
        const bool branch_taken_0x1aef30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aef30) {
            ctx->pc = 0x1AEF58u;
            goto label_1aef58;
        }
    }
    ctx->pc = 0x1AEF38u;
label_1aef38:
    // 0x1aef38: 0xa6140004  sh          $s4, 0x4($s0)
    ctx->pc = 0x1aef38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 20));
label_1aef3c:
    // 0x1aef3c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1aef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1aef40:
    // 0x1aef40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1aef44:
    if (ctx->pc == 0x1AEF44u) {
        ctx->pc = 0x1AEF44u;
            // 0x1aef44: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x1AEF48u;
        goto label_1aef48;
    }
    ctx->pc = 0x1AEF40u;
    {
        const bool branch_taken_0x1aef40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEF40u;
            // 0x1aef44: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef40) {
            ctx->pc = 0x1AEF58u;
            goto label_1aef58;
        }
    }
    ctx->pc = 0x1AEF48u;
label_1aef48:
    // 0x1aef48: 0x16820003  bne         $s4, $v0, . + 4 + (0x3 << 2)
label_1aef4c:
    if (ctx->pc == 0x1AEF4Cu) {
        ctx->pc = 0x1AEF4Cu;
            // 0x1aef4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1AEF50u;
        goto label_1aef50;
    }
    ctx->pc = 0x1AEF48u;
    {
        const bool branch_taken_0x1aef48 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AEF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEF48u;
            // 0x1aef4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef48) {
            ctx->pc = 0x1AEF58u;
            goto label_1aef58;
        }
    }
    ctx->pc = 0x1AEF50u;
label_1aef50:
    // 0x1aef50: 0x24120024  addiu       $s2, $zero, 0x24
    ctx->pc = 0x1aef50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1aef54:
    // 0x1aef54: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x1aef54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_1aef58:
    // 0x1aef58: 0x1a40000c  blez        $s2, . + 4 + (0xC << 2)
label_1aef5c:
    if (ctx->pc == 0x1AEF5Cu) {
        ctx->pc = 0x1AEF5Cu;
            // 0x1aef5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF60u;
        goto label_1aef60;
    }
    ctx->pc = 0x1AEF58u;
    {
        const bool branch_taken_0x1aef58 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1AEF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEF58u;
            // 0x1aef5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef58) {
            ctx->pc = 0x1AEF8Cu;
            goto label_1aef8c;
        }
    }
    ctx->pc = 0x1AEF60u;
label_1aef60:
    // 0x1aef60: 0xc064218  jal         func_190860
label_1aef64:
    if (ctx->pc == 0x1AEF64u) {
        ctx->pc = 0x1AEF64u;
            // 0x1aef64: 0xa612000a  sh          $s2, 0xA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 18));
        ctx->pc = 0x1AEF68u;
        goto label_1aef68;
    }
    ctx->pc = 0x1AEF60u;
    SET_GPR_U32(ctx, 31, 0x1AEF68u);
    ctx->pc = 0x1AEF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEF60u;
            // 0x1aef64: 0xa612000a  sh          $s2, 0xA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEF68u; }
        if (ctx->pc != 0x1AEF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEF68u; }
        if (ctx->pc != 0x1AEF68u) { return; }
    }
    ctx->pc = 0x1AEF68u;
label_1aef68:
    // 0x1aef68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aef68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aef6c:
    // 0x1aef6c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1aef6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1aef70:
    // 0x1aef70: 0xc063818  jal         func_18E060
label_1aef74:
    if (ctx->pc == 0x1AEF74u) {
        ctx->pc = 0x1AEF74u;
            // 0x1aef74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF78u;
        goto label_1aef78;
    }
    ctx->pc = 0x1AEF70u;
    SET_GPR_U32(ctx, 31, 0x1AEF78u);
    ctx->pc = 0x1AEF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEF70u;
            // 0x1aef74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEF78u; }
        if (ctx->pc != 0x1AEF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEF78u; }
        if (ctx->pc != 0x1AEF78u) { return; }
    }
    ctx->pc = 0x1AEF78u;
label_1aef78:
    // 0x1aef78: 0x8605000a  lh          $a1, 0xA($s0)
    ctx->pc = 0x1aef78u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_1aef7c:
    // 0x1aef7c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1aef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1aef80:
    // 0x1aef80: 0xc04a0d2  jal         func_128348
label_1aef84:
    if (ctx->pc == 0x1AEF84u) {
        ctx->pc = 0x1AEF84u;
            // 0x1aef84: 0x24846480  addiu       $a0, $a0, 0x6480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25728));
        ctx->pc = 0x1AEF88u;
        goto label_1aef88;
    }
    ctx->pc = 0x1AEF80u;
    SET_GPR_U32(ctx, 31, 0x1AEF88u);
    ctx->pc = 0x1AEF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEF80u;
            // 0x1aef84: 0x24846480  addiu       $a0, $a0, 0x6480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEF88u; }
        if (ctx->pc != 0x1AEF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEF88u; }
        if (ctx->pc != 0x1AEF88u) { return; }
    }
    ctx->pc = 0x1AEF88u;
label_1aef88:
    // 0x1aef88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aef88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aef8c:
    // 0x1aef8c: 0xc0c3d84  jal         func_30F610
label_1aef90:
    if (ctx->pc == 0x1AEF90u) {
        ctx->pc = 0x1AEF94u;
        goto label_1aef94;
    }
    ctx->pc = 0x1AEF8Cu;
    SET_GPR_U32(ctx, 31, 0x1AEF94u);
    ctx->pc = 0x30F610u;
    if (runtime->hasFunction(0x30F610u)) {
        auto targetFn = runtime->lookupFunction(0x30F610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEF94u; }
        if (ctx->pc != 0x1AEF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTookPhotoData__FP17USER_PICTURE_INFO_0x30f610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEF94u; }
        if (ctx->pc != 0x1AEF94u) { return; }
    }
    ctx->pc = 0x1AEF94u;
label_1aef94:
    // 0x1aef94: 0x8f828c90  lw          $v0, -0x7370($gp)
    ctx->pc = 0x1aef94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937744)));
label_1aef98:
    // 0x1aef98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1aef98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1aef9c:
    // 0x1aef9c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1aefa0:
    if (ctx->pc == 0x1AEFA0u) {
        ctx->pc = 0x1AEFA4u;
        goto label_1aefa4;
    }
    ctx->pc = 0x1AEF9Cu;
    {
        const bool branch_taken_0x1aef9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aef9c) {
            ctx->pc = 0x1AEFB0u;
            goto label_1aefb0;
        }
    }
    ctx->pc = 0x1AEFA4u;
label_1aefa4:
    // 0x1aefa4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1aefa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1aefa8:
    // 0x1aefa8: 0xc0c3da8  jal         func_30F6A0
label_1aefac:
    if (ctx->pc == 0x1AEFACu) {
        ctx->pc = 0x1AEFACu;
            // 0x1aefac: 0x2404009a  addiu       $a0, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->pc = 0x1AEFB0u;
        goto label_1aefb0;
    }
    ctx->pc = 0x1AEFA8u;
    SET_GPR_U32(ctx, 31, 0x1AEFB0u);
    ctx->pc = 0x1AEFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEFA8u;
            // 0x1aefac: 0x2404009a  addiu       $a0, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30F6A0u;
    if (runtime->hasFunction(0x30F6A0u)) {
        auto targetFn = runtime->lookupFunction(0x30F6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEFB0u; }
        if (ctx->pc != 0x1AEFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawTakePhotoSystem__FiP15CInventUserData_0x30f6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEFB0u; }
        if (ctx->pc != 0x1AEFB0u) { return; }
    }
    ctx->pc = 0x1AEFB0u;
label_1aefb0:
    // 0x1aefb0: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1aefb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_1aefb4:
    // 0x1aefb4: 0x8c22807c  lw          $v0, -0x7F84($at)
    ctx->pc = 0x1aefb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934652)));
label_1aefb8:
    // 0x1aefb8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1aefb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1aefbc:
    // 0x1aefbc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1aefbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1aefc0:
    // 0x1aefc0: 0xc064220  jal         func_190880
label_1aefc4:
    if (ctx->pc == 0x1AEFC4u) {
        ctx->pc = 0x1AEFC4u;
            // 0x1aefc4: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x1AEFC8u;
        goto label_1aefc8;
    }
    ctx->pc = 0x1AEFC0u;
    SET_GPR_U32(ctx, 31, 0x1AEFC8u);
    ctx->pc = 0x1AEFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEFC0u;
            // 0x1aefc4: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEFC8u; }
        if (ctx->pc != 0x1AEFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEFC8u; }
        if (ctx->pc != 0x1AEFC8u) { return; }
    }
    ctx->pc = 0x1AEFC8u;
label_1aefc8:
    // 0x1aefc8: 0xc0bda00  jal         func_2F6800
label_1aefcc:
    if (ctx->pc == 0x1AEFCCu) {
        ctx->pc = 0x1AEFCCu;
            // 0x1aefcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEFD0u;
        goto label_1aefd0;
    }
    ctx->pc = 0x1AEFC8u;
    SET_GPR_U32(ctx, 31, 0x1AEFD0u);
    ctx->pc = 0x1AEFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEFC8u;
            // 0x1aefcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6800u;
    if (runtime->hasFunction(0x2F6800u)) {
        auto targetFn = runtime->lookupFunction(0x2F6800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEFD0u; }
        if (ctx->pc != 0x1AEFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitCtrl__9CSaveDataFv_0x2f6800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEFD0u; }
        if (ctx->pc != 0x1AEFD0u) { return; }
    }
    ctx->pc = 0x1AEFD0u;
label_1aefd0:
    // 0x1aefd0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1aefd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1aefd4:
    // 0x1aefd4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1aefd8:
    if (ctx->pc == 0x1AEFD8u) {
        ctx->pc = 0x1AEFDCu;
        goto label_1aefdc;
    }
    ctx->pc = 0x1AEFD4u;
    {
        const bool branch_taken_0x1aefd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aefd4) {
            ctx->pc = 0x1AEFE0u;
            goto label_1aefe0;
        }
    }
    ctx->pc = 0x1AEFDCu;
label_1aefdc:
    // 0x1aefdc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aefdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aefe0:
    // 0x1aefe0: 0xc0a0f80  jal         func_283E00
label_1aefe4:
    if (ctx->pc == 0x1AEFE4u) {
        ctx->pc = 0x1AEFE4u;
            // 0x1aefe4: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AEFE8u;
        goto label_1aefe8;
    }
    ctx->pc = 0x1AEFE0u;
    SET_GPR_U32(ctx, 31, 0x1AEFE8u);
    ctx->pc = 0x1AEFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEFE0u;
            // 0x1aefe4: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283E00u;
    if (runtime->hasFunction(0x283E00u)) {
        auto targetFn = runtime->lookupFunction(0x283E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEFE8u; }
        if (ctx->pc != 0x1AEFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainMapNo__6CSceneFv_0x283e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEFE8u; }
        if (ctx->pc != 0x1AEFE8u) { return; }
    }
    ctx->pc = 0x1AEFE8u;
label_1aefe8:
    // 0x1aefe8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1aefec:
    if (ctx->pc == 0x1AEFECu) {
        ctx->pc = 0x1AEFF0u;
        goto label_1aeff0;
    }
    ctx->pc = 0x1AEFE8u;
    {
        const bool branch_taken_0x1aefe8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1aefe8) {
            ctx->pc = 0x1AEFFCu;
            goto label_1aeffc;
        }
    }
    ctx->pc = 0x1AEFF0u;
label_1aeff0:
    // 0x1aeff0: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x1aeff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_1aeff4:
    // 0x1aeff4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1aeff8:
    if (ctx->pc == 0x1AEFF8u) {
        ctx->pc = 0x1AEFFCu;
        goto label_1aeffc;
    }
    ctx->pc = 0x1AEFF4u;
    {
        const bool branch_taken_0x1aeff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aeff4) {
            ctx->pc = 0x1AF000u;
            goto label_1af000;
        }
    }
    ctx->pc = 0x1AEFFCu;
label_1aeffc:
    // 0x1aeffc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aeffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af000:
    // 0x1af000: 0x8f838c80  lw          $v1, -0x7380($gp)
    ctx->pc = 0x1af000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1af004:
    // 0x1af004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af008:
    // 0x1af008: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_1af00c:
    if (ctx->pc == 0x1AF00Cu) {
        ctx->pc = 0x1AF010u;
        goto label_1af010;
    }
    ctx->pc = 0x1AF008u;
    {
        const bool branch_taken_0x1af008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1af008) {
            ctx->pc = 0x1AF014u;
            goto label_1af014;
        }
    }
    ctx->pc = 0x1AF010u;
label_1af010:
    // 0x1af010: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1af010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af014:
    // 0x1af014: 0x8f838c7c  lw          $v1, -0x7384($gp)
    ctx->pc = 0x1af014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
label_1af018:
    // 0x1af018: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1af018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1af01c:
    // 0x1af01c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1af020:
    if (ctx->pc == 0x1AF020u) {
        ctx->pc = 0x1AF020u;
            // 0x1af020: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AF024u;
        goto label_1af024;
    }
    ctx->pc = 0x1AF01Cu;
    {
        const bool branch_taken_0x1af01c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AF020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF01Cu;
            // 0x1af020: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af01c) {
            ctx->pc = 0x1AF030u;
            goto label_1af030;
        }
    }
    ctx->pc = 0x1AF024u;
label_1af024:
    // 0x1af024: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_1af028:
    if (ctx->pc == 0x1AF028u) {
        ctx->pc = 0x1AF02Cu;
        goto label_1af02c;
    }
    ctx->pc = 0x1AF024u;
    {
        const bool branch_taken_0x1af024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1af024) {
            ctx->pc = 0x1AF030u;
            goto label_1af030;
        }
    }
    ctx->pc = 0x1AF02Cu;
label_1af02c:
    // 0x1af02c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1af02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af030:
    // 0x1af030: 0xc069058  jal         func_1A4160
label_1af034:
    if (ctx->pc == 0x1AF034u) {
        ctx->pc = 0x1AF038u;
        goto label_1af038;
    }
    ctx->pc = 0x1AF030u;
    SET_GPR_U32(ctx, 31, 0x1AF038u);
    ctx->pc = 0x1A4160u;
    if (runtime->hasFunction(0x1A4160u)) {
        auto targetFn = runtime->lookupFunction(0x1A4160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF038u; }
        if (ctx->pc != 0x1AF038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsWalkMode__Fv_0x1a4160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF038u; }
        if (ctx->pc != 0x1AF038u) { return; }
    }
    ctx->pc = 0x1AF038u;
label_1af038:
    // 0x1af038: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1af03c:
    if (ctx->pc == 0x1AF03Cu) {
        ctx->pc = 0x1AF040u;
        goto label_1af040;
    }
    ctx->pc = 0x1AF038u;
    {
        const bool branch_taken_0x1af038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af038) {
            ctx->pc = 0x1AF044u;
            goto label_1af044;
        }
    }
    ctx->pc = 0x1AF040u;
label_1af040:
    // 0x1af040: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1af040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af044:
    // 0x1af044: 0xc0c0fc8  jal         func_303F20
label_1af048:
    if (ctx->pc == 0x1AF048u) {
        ctx->pc = 0x1AF04Cu;
        goto label_1af04c;
    }
    ctx->pc = 0x1AF044u;
    SET_GPR_U32(ctx, 31, 0x1AF04Cu);
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF04Cu; }
        if (ctx->pc != 0x1AF04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF04Cu; }
        if (ctx->pc != 0x1AF04Cu) { return; }
    }
    ctx->pc = 0x1AF04Cu;
label_1af04c:
    // 0x1af04c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1af050:
    if (ctx->pc == 0x1AF050u) {
        ctx->pc = 0x1AF054u;
        goto label_1af054;
    }
    ctx->pc = 0x1AF04Cu;
    {
        const bool branch_taken_0x1af04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af04c) {
            ctx->pc = 0x1AF058u;
            goto label_1af058;
        }
    }
    ctx->pc = 0x1AF054u;
label_1af054:
    // 0x1af054: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1af054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af058:
    // 0x1af058: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_1af05c:
    if (ctx->pc == 0x1AF05Cu) {
        ctx->pc = 0x1AF05Cu;
            // 0x1af05c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AF060u;
        goto label_1af060;
    }
    ctx->pc = 0x1AF058u;
    {
        const bool branch_taken_0x1af058 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF058u;
            // 0x1af05c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af058) {
            ctx->pc = 0x1AF0A8u;
            goto label_1af0a8;
        }
    }
    ctx->pc = 0x1AF060u;
label_1af060:
    // 0x1af060: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1af060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1af064:
    // 0x1af064: 0xc0a0ed8  jal         func_283B60
label_1af068:
    if (ctx->pc == 0x1AF068u) {
        ctx->pc = 0x1AF068u;
            // 0x1af068: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->pc = 0x1AF06Cu;
        goto label_1af06c;
    }
    ctx->pc = 0x1AF064u;
    SET_GPR_U32(ctx, 31, 0x1AF06Cu);
    ctx->pc = 0x1AF068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF064u;
            // 0x1af068: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF06Cu; }
        if (ctx->pc != 0x1AF06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF06Cu; }
        if (ctx->pc != 0x1AF06Cu) { return; }
    }
    ctx->pc = 0x1AF06Cu;
label_1af06c:
    // 0x1af06c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1af070:
    if (ctx->pc == 0x1AF070u) {
        ctx->pc = 0x1AF074u;
        goto label_1af074;
    }
    ctx->pc = 0x1AF06Cu;
    {
        const bool branch_taken_0x1af06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af06c) {
            ctx->pc = 0x1AF088u;
            goto label_1af088;
        }
    }
    ctx->pc = 0x1AF074u;
label_1af074:
    // 0x1af074: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1af074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1af078:
    // 0x1af078: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1af078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1af07c:
    // 0x1af07c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1af07cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1af080:
    // 0x1af080: 0x320f809  jalr        $t9
label_1af084:
    if (ctx->pc == 0x1AF084u) {
        ctx->pc = 0x1AF084u;
            // 0x1af084: 0x27a50690  addiu       $a1, $sp, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1680));
        ctx->pc = 0x1AF088u;
        goto label_1af088;
    }
    ctx->pc = 0x1AF080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AF088u);
        ctx->pc = 0x1AF084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF080u;
            // 0x1af084: 0x27a50690  addiu       $a1, $sp, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1680));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AF088u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AF088u; }
            if (ctx->pc != 0x1AF088u) { return; }
        }
        }
    }
    ctx->pc = 0x1AF088u;
label_1af088:
    // 0x1af088: 0x8f828c7c  lw          $v0, -0x7384($gp)
    ctx->pc = 0x1af088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
label_1af08c:
    // 0x1af08c: 0x240400a2  addiu       $a0, $zero, 0xA2
    ctx->pc = 0x1af08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
label_1af090:
    // 0x1af090: 0x8f858cb0  lw          $a1, -0x7350($gp)
    ctx->pc = 0x1af090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1af094:
    // 0x1af094: 0x27a60690  addiu       $a2, $sp, 0x690
    ctx->pc = 0x1af094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1680));
label_1af098:
    // 0x1af098: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1af098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_1af09c:
    // 0x1af09c: 0xc0b74fc  jal         func_2DD3F0
label_1af0a0:
    if (ctx->pc == 0x1AF0A0u) {
        ctx->pc = 0x1AF0A0u;
            // 0x1af0a0: 0x2c470001  sltiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x1AF0A4u;
        goto label_1af0a4;
    }
    ctx->pc = 0x1AF09Cu;
    SET_GPR_U32(ctx, 31, 0x1AF0A4u);
    ctx->pc = 0x1AF0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF09Cu;
            // 0x1af0a0: 0x2c470001  sltiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DD3F0u;
    if (runtime->hasFunction(0x2DD3F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DD3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0A4u; }
        if (ctx->pc != 0x1AF0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawEditSystem__FiP6CScenePfi_0x2dd3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0A4u; }
        if (ctx->pc != 0x1AF0A4u) { return; }
    }
    ctx->pc = 0x1AF0A4u;
label_1af0a4:
    // 0x1af0a4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1af0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1af0a8:
    // 0x1af0a8: 0x2405009a  addiu       $a1, $zero, 0x9A
    ctx->pc = 0x1af0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_1af0ac:
    // 0x1af0ac: 0xc04ba14  jal         func_12E850
label_1af0b0:
    if (ctx->pc == 0x1AF0B0u) {
        ctx->pc = 0x1AF0B0u;
            // 0x1af0b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AF0B4u;
        goto label_1af0b4;
    }
    ctx->pc = 0x1AF0ACu;
    SET_GPR_U32(ctx, 31, 0x1AF0B4u);
    ctx->pc = 0x1AF0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF0ACu;
            // 0x1af0b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0B4u; }
        if (ctx->pc != 0x1AF0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0B4u; }
        if (ctx->pc != 0x1AF0B4u) { return; }
    }
    ctx->pc = 0x1AF0B4u;
label_1af0b4:
    // 0x1af0b4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1af0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1af0b8:
    // 0x1af0b8: 0xc056cb0  jal         func_15B2C0
label_1af0bc:
    if (ctx->pc == 0x1AF0BCu) {
        ctx->pc = 0x1AF0BCu;
            // 0x1af0bc: 0x2484c660  addiu       $a0, $a0, -0x39A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952544));
        ctx->pc = 0x1AF0C0u;
        goto label_1af0c0;
    }
    ctx->pc = 0x1AF0B8u;
    SET_GPR_U32(ctx, 31, 0x1AF0C0u);
    ctx->pc = 0x1AF0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF0B8u;
            // 0x1af0bc: 0x2484c660  addiu       $a0, $a0, -0x39A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B2C0u;
    if (runtime->hasFunction(0x15B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0C0u; }
        if (ctx->pc != 0x1AF0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMesWin__6ClsMesFv_0x15b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0C0u; }
        if (ctx->pc != 0x1AF0C0u) { return; }
    }
    ctx->pc = 0x1AF0C0u;
label_1af0c0:
    // 0x1af0c0: 0xc0659dc  jal         func_196770
label_1af0c4:
    if (ctx->pc == 0x1AF0C4u) {
        ctx->pc = 0x1AF0C8u;
        goto label_1af0c8;
    }
    ctx->pc = 0x1AF0C0u;
    SET_GPR_U32(ctx, 31, 0x1AF0C8u);
    ctx->pc = 0x196770u;
    if (runtime->hasFunction(0x196770u)) {
        auto targetFn = runtime->lookupFunction(0x196770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0C8u; }
        if (ctx->pc != 0x1AF0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fv_0x196770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0C8u; }
        if (ctx->pc != 0x1AF0C8u) { return; }
    }
    ctx->pc = 0x1AF0C8u;
label_1af0c8:
    // 0x1af0c8: 0xc056cb0  jal         func_15B2C0
label_1af0cc:
    if (ctx->pc == 0x1AF0CCu) {
        ctx->pc = 0x1AF0CCu;
            // 0x1af0cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AF0D0u;
        goto label_1af0d0;
    }
    ctx->pc = 0x1AF0C8u;
    SET_GPR_U32(ctx, 31, 0x1AF0D0u);
    ctx->pc = 0x1AF0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF0C8u;
            // 0x1af0cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B2C0u;
    if (runtime->hasFunction(0x15B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0D0u; }
        if (ctx->pc != 0x1AF0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMesWin__6ClsMesFv_0x15b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0D0u; }
        if (ctx->pc != 0x1AF0D0u) { return; }
    }
    ctx->pc = 0x1AF0D0u;
label_1af0d0:
    // 0x1af0d0: 0xc0659e0  jal         func_196780
label_1af0d4:
    if (ctx->pc == 0x1AF0D4u) {
        ctx->pc = 0x1AF0D4u;
            // 0x1af0d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AF0D8u;
        goto label_1af0d8;
    }
    ctx->pc = 0x1AF0D0u;
    SET_GPR_U32(ctx, 31, 0x1AF0D8u);
    ctx->pc = 0x1AF0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF0D0u;
            // 0x1af0d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196780u;
    if (runtime->hasFunction(0x196780u)) {
        auto targetFn = runtime->lookupFunction(0x196780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0D8u; }
        if (ctx->pc != 0x1AF0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fi_0x196780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0D8u; }
        if (ctx->pc != 0x1AF0D8u) { return; }
    }
    ctx->pc = 0x1AF0D8u;
label_1af0d8:
    // 0x1af0d8: 0xc056cb0  jal         func_15B2C0
label_1af0dc:
    if (ctx->pc == 0x1AF0DCu) {
        ctx->pc = 0x1AF0DCu;
            // 0x1af0dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AF0E0u;
        goto label_1af0e0;
    }
    ctx->pc = 0x1AF0D8u;
    SET_GPR_U32(ctx, 31, 0x1AF0E0u);
    ctx->pc = 0x1AF0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF0D8u;
            // 0x1af0dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B2C0u;
    if (runtime->hasFunction(0x15B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0E0u; }
        if (ctx->pc != 0x1AF0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMesWin__6ClsMesFv_0x15b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0E0u; }
        if (ctx->pc != 0x1AF0E0u) { return; }
    }
    ctx->pc = 0x1AF0E0u;
label_1af0e0:
    // 0x1af0e0: 0xc0659e0  jal         func_196780
label_1af0e4:
    if (ctx->pc == 0x1AF0E4u) {
        ctx->pc = 0x1AF0E4u;
            // 0x1af0e4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1AF0E8u;
        goto label_1af0e8;
    }
    ctx->pc = 0x1AF0E0u;
    SET_GPR_U32(ctx, 31, 0x1AF0E8u);
    ctx->pc = 0x1AF0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF0E0u;
            // 0x1af0e4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196780u;
    if (runtime->hasFunction(0x196780u)) {
        auto targetFn = runtime->lookupFunction(0x196780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0E8u; }
        if (ctx->pc != 0x1AF0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fi_0x196780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0E8u; }
        if (ctx->pc != 0x1AF0E8u) { return; }
    }
    ctx->pc = 0x1AF0E8u;
label_1af0e8:
    // 0x1af0e8: 0xc056cb0  jal         func_15B2C0
label_1af0ec:
    if (ctx->pc == 0x1AF0ECu) {
        ctx->pc = 0x1AF0ECu;
            // 0x1af0ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AF0F0u;
        goto label_1af0f0;
    }
    ctx->pc = 0x1AF0E8u;
    SET_GPR_U32(ctx, 31, 0x1AF0F0u);
    ctx->pc = 0x1AF0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF0E8u;
            // 0x1af0ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B2C0u;
    if (runtime->hasFunction(0x15B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0F0u; }
        if (ctx->pc != 0x1AF0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMesWin__6ClsMesFv_0x15b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0F0u; }
        if (ctx->pc != 0x1AF0F0u) { return; }
    }
    ctx->pc = 0x1AF0F0u;
label_1af0f0:
    // 0x1af0f0: 0xc0c653c  jal         func_3194F0
label_1af0f4:
    if (ctx->pc == 0x1AF0F4u) {
        ctx->pc = 0x1AF0F8u;
        goto label_1af0f8;
    }
    ctx->pc = 0x1AF0F0u;
    SET_GPR_U32(ctx, 31, 0x1AF0F8u);
    ctx->pc = 0x3194F0u;
    if (runtime->hasFunction(0x3194F0u)) {
        auto targetFn = runtime->lookupFunction(0x3194F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0F8u; }
        if (ctx->pc != 0x1AF0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawHelpMes__Fv_0x3194f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0F8u; }
        if (ctx->pc != 0x1AF0F8u) { return; }
    }
    ctx->pc = 0x1AF0F8u;
label_1af0f8:
    // 0x1af0f8: 0xc0b7324  jal         func_2DCC90
label_1af0fc:
    if (ctx->pc == 0x1AF0FCu) {
        ctx->pc = 0x1AF100u;
        goto label_1af100;
    }
    ctx->pc = 0x1AF0F8u;
    SET_GPR_U32(ctx, 31, 0x1AF100u);
    ctx->pc = 0x2DCC90u;
    if (runtime->hasFunction(0x2DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x2DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF100u; }
        if (ctx->pc != 0x1AF100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawEditHelpMes__Fv_0x2dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF100u; }
        if (ctx->pc != 0x1AF100u) { return; }
    }
    ctx->pc = 0x1AF100u;
label_1af100:
    // 0x1af100: 0xc0985ec  jal         func_2617B0
label_1af104:
    if (ctx->pc == 0x1AF104u) {
        ctx->pc = 0x1AF108u;
        goto label_1af108;
    }
    ctx->pc = 0x1AF100u;
    SET_GPR_U32(ctx, 31, 0x1AF108u);
    ctx->pc = 0x2617B0u;
    if (runtime->hasFunction(0x2617B0u)) {
        auto targetFn = runtime->lookupFunction(0x2617B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF108u; }
        if (ctx->pc != 0x1AF108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EventTimeDraw__Fv_0x2617b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF108u; }
        if (ctx->pc != 0x1AF108u) { return; }
    }
    ctx->pc = 0x1AF108u;
label_1af108:
    // 0x1af108: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1af108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af10c:
    // 0x1af10c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1af10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1af110:
    // 0x1af110: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1af110u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1af114:
    // 0x1af114: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1af114u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1af118:
    // 0x1af118: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1af118u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1af11c:
    // 0x1af11c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1af11cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1af120:
    // 0x1af120: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1af120u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1af124:
    // 0x1af124: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1af124u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1af128:
    // 0x1af128: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1af128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1af12c:
    // 0x1af12c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af12cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1af130:
    // 0x1af130: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1af134:
    // 0x1af134: 0x3e00008  jr          $ra
label_1af138:
    if (ctx->pc == 0x1AF138u) {
        ctx->pc = 0x1AF138u;
            // 0x1af138: 0x27bd06d0  addiu       $sp, $sp, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1744));
        ctx->pc = 0x1AF13Cu;
        goto label_fallthrough_0x1af134;
    }
    ctx->pc = 0x1AF134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF134u;
            // 0x1af138: 0x27bd06d0  addiu       $sp, $sp, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1744));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1af134:
    ctx->pc = 0x1AF13Cu;
}
