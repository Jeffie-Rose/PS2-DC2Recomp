#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TitleMapDraw__Fv
// Address: 0x2a2280 - 0x2a2944
void TitleMapDraw__Fv_0x2a2280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TitleMapDraw__Fv_0x2a2280");
#endif

    switch (ctx->pc) {
        case 0x2a2280u: goto label_2a2280;
        case 0x2a2284u: goto label_2a2284;
        case 0x2a2288u: goto label_2a2288;
        case 0x2a228cu: goto label_2a228c;
        case 0x2a2290u: goto label_2a2290;
        case 0x2a2294u: goto label_2a2294;
        case 0x2a2298u: goto label_2a2298;
        case 0x2a229cu: goto label_2a229c;
        case 0x2a22a0u: goto label_2a22a0;
        case 0x2a22a4u: goto label_2a22a4;
        case 0x2a22a8u: goto label_2a22a8;
        case 0x2a22acu: goto label_2a22ac;
        case 0x2a22b0u: goto label_2a22b0;
        case 0x2a22b4u: goto label_2a22b4;
        case 0x2a22b8u: goto label_2a22b8;
        case 0x2a22bcu: goto label_2a22bc;
        case 0x2a22c0u: goto label_2a22c0;
        case 0x2a22c4u: goto label_2a22c4;
        case 0x2a22c8u: goto label_2a22c8;
        case 0x2a22ccu: goto label_2a22cc;
        case 0x2a22d0u: goto label_2a22d0;
        case 0x2a22d4u: goto label_2a22d4;
        case 0x2a22d8u: goto label_2a22d8;
        case 0x2a22dcu: goto label_2a22dc;
        case 0x2a22e0u: goto label_2a22e0;
        case 0x2a22e4u: goto label_2a22e4;
        case 0x2a22e8u: goto label_2a22e8;
        case 0x2a22ecu: goto label_2a22ec;
        case 0x2a22f0u: goto label_2a22f0;
        case 0x2a22f4u: goto label_2a22f4;
        case 0x2a22f8u: goto label_2a22f8;
        case 0x2a22fcu: goto label_2a22fc;
        case 0x2a2300u: goto label_2a2300;
        case 0x2a2304u: goto label_2a2304;
        case 0x2a2308u: goto label_2a2308;
        case 0x2a230cu: goto label_2a230c;
        case 0x2a2310u: goto label_2a2310;
        case 0x2a2314u: goto label_2a2314;
        case 0x2a2318u: goto label_2a2318;
        case 0x2a231cu: goto label_2a231c;
        case 0x2a2320u: goto label_2a2320;
        case 0x2a2324u: goto label_2a2324;
        case 0x2a2328u: goto label_2a2328;
        case 0x2a232cu: goto label_2a232c;
        case 0x2a2330u: goto label_2a2330;
        case 0x2a2334u: goto label_2a2334;
        case 0x2a2338u: goto label_2a2338;
        case 0x2a233cu: goto label_2a233c;
        case 0x2a2340u: goto label_2a2340;
        case 0x2a2344u: goto label_2a2344;
        case 0x2a2348u: goto label_2a2348;
        case 0x2a234cu: goto label_2a234c;
        case 0x2a2350u: goto label_2a2350;
        case 0x2a2354u: goto label_2a2354;
        case 0x2a2358u: goto label_2a2358;
        case 0x2a235cu: goto label_2a235c;
        case 0x2a2360u: goto label_2a2360;
        case 0x2a2364u: goto label_2a2364;
        case 0x2a2368u: goto label_2a2368;
        case 0x2a236cu: goto label_2a236c;
        case 0x2a2370u: goto label_2a2370;
        case 0x2a2374u: goto label_2a2374;
        case 0x2a2378u: goto label_2a2378;
        case 0x2a237cu: goto label_2a237c;
        case 0x2a2380u: goto label_2a2380;
        case 0x2a2384u: goto label_2a2384;
        case 0x2a2388u: goto label_2a2388;
        case 0x2a238cu: goto label_2a238c;
        case 0x2a2390u: goto label_2a2390;
        case 0x2a2394u: goto label_2a2394;
        case 0x2a2398u: goto label_2a2398;
        case 0x2a239cu: goto label_2a239c;
        case 0x2a23a0u: goto label_2a23a0;
        case 0x2a23a4u: goto label_2a23a4;
        case 0x2a23a8u: goto label_2a23a8;
        case 0x2a23acu: goto label_2a23ac;
        case 0x2a23b0u: goto label_2a23b0;
        case 0x2a23b4u: goto label_2a23b4;
        case 0x2a23b8u: goto label_2a23b8;
        case 0x2a23bcu: goto label_2a23bc;
        case 0x2a23c0u: goto label_2a23c0;
        case 0x2a23c4u: goto label_2a23c4;
        case 0x2a23c8u: goto label_2a23c8;
        case 0x2a23ccu: goto label_2a23cc;
        case 0x2a23d0u: goto label_2a23d0;
        case 0x2a23d4u: goto label_2a23d4;
        case 0x2a23d8u: goto label_2a23d8;
        case 0x2a23dcu: goto label_2a23dc;
        case 0x2a23e0u: goto label_2a23e0;
        case 0x2a23e4u: goto label_2a23e4;
        case 0x2a23e8u: goto label_2a23e8;
        case 0x2a23ecu: goto label_2a23ec;
        case 0x2a23f0u: goto label_2a23f0;
        case 0x2a23f4u: goto label_2a23f4;
        case 0x2a23f8u: goto label_2a23f8;
        case 0x2a23fcu: goto label_2a23fc;
        case 0x2a2400u: goto label_2a2400;
        case 0x2a2404u: goto label_2a2404;
        case 0x2a2408u: goto label_2a2408;
        case 0x2a240cu: goto label_2a240c;
        case 0x2a2410u: goto label_2a2410;
        case 0x2a2414u: goto label_2a2414;
        case 0x2a2418u: goto label_2a2418;
        case 0x2a241cu: goto label_2a241c;
        case 0x2a2420u: goto label_2a2420;
        case 0x2a2424u: goto label_2a2424;
        case 0x2a2428u: goto label_2a2428;
        case 0x2a242cu: goto label_2a242c;
        case 0x2a2430u: goto label_2a2430;
        case 0x2a2434u: goto label_2a2434;
        case 0x2a2438u: goto label_2a2438;
        case 0x2a243cu: goto label_2a243c;
        case 0x2a2440u: goto label_2a2440;
        case 0x2a2444u: goto label_2a2444;
        case 0x2a2448u: goto label_2a2448;
        case 0x2a244cu: goto label_2a244c;
        case 0x2a2450u: goto label_2a2450;
        case 0x2a2454u: goto label_2a2454;
        case 0x2a2458u: goto label_2a2458;
        case 0x2a245cu: goto label_2a245c;
        case 0x2a2460u: goto label_2a2460;
        case 0x2a2464u: goto label_2a2464;
        case 0x2a2468u: goto label_2a2468;
        case 0x2a246cu: goto label_2a246c;
        case 0x2a2470u: goto label_2a2470;
        case 0x2a2474u: goto label_2a2474;
        case 0x2a2478u: goto label_2a2478;
        case 0x2a247cu: goto label_2a247c;
        case 0x2a2480u: goto label_2a2480;
        case 0x2a2484u: goto label_2a2484;
        case 0x2a2488u: goto label_2a2488;
        case 0x2a248cu: goto label_2a248c;
        case 0x2a2490u: goto label_2a2490;
        case 0x2a2494u: goto label_2a2494;
        case 0x2a2498u: goto label_2a2498;
        case 0x2a249cu: goto label_2a249c;
        case 0x2a24a0u: goto label_2a24a0;
        case 0x2a24a4u: goto label_2a24a4;
        case 0x2a24a8u: goto label_2a24a8;
        case 0x2a24acu: goto label_2a24ac;
        case 0x2a24b0u: goto label_2a24b0;
        case 0x2a24b4u: goto label_2a24b4;
        case 0x2a24b8u: goto label_2a24b8;
        case 0x2a24bcu: goto label_2a24bc;
        case 0x2a24c0u: goto label_2a24c0;
        case 0x2a24c4u: goto label_2a24c4;
        case 0x2a24c8u: goto label_2a24c8;
        case 0x2a24ccu: goto label_2a24cc;
        case 0x2a24d0u: goto label_2a24d0;
        case 0x2a24d4u: goto label_2a24d4;
        case 0x2a24d8u: goto label_2a24d8;
        case 0x2a24dcu: goto label_2a24dc;
        case 0x2a24e0u: goto label_2a24e0;
        case 0x2a24e4u: goto label_2a24e4;
        case 0x2a24e8u: goto label_2a24e8;
        case 0x2a24ecu: goto label_2a24ec;
        case 0x2a24f0u: goto label_2a24f0;
        case 0x2a24f4u: goto label_2a24f4;
        case 0x2a24f8u: goto label_2a24f8;
        case 0x2a24fcu: goto label_2a24fc;
        case 0x2a2500u: goto label_2a2500;
        case 0x2a2504u: goto label_2a2504;
        case 0x2a2508u: goto label_2a2508;
        case 0x2a250cu: goto label_2a250c;
        case 0x2a2510u: goto label_2a2510;
        case 0x2a2514u: goto label_2a2514;
        case 0x2a2518u: goto label_2a2518;
        case 0x2a251cu: goto label_2a251c;
        case 0x2a2520u: goto label_2a2520;
        case 0x2a2524u: goto label_2a2524;
        case 0x2a2528u: goto label_2a2528;
        case 0x2a252cu: goto label_2a252c;
        case 0x2a2530u: goto label_2a2530;
        case 0x2a2534u: goto label_2a2534;
        case 0x2a2538u: goto label_2a2538;
        case 0x2a253cu: goto label_2a253c;
        case 0x2a2540u: goto label_2a2540;
        case 0x2a2544u: goto label_2a2544;
        case 0x2a2548u: goto label_2a2548;
        case 0x2a254cu: goto label_2a254c;
        case 0x2a2550u: goto label_2a2550;
        case 0x2a2554u: goto label_2a2554;
        case 0x2a2558u: goto label_2a2558;
        case 0x2a255cu: goto label_2a255c;
        case 0x2a2560u: goto label_2a2560;
        case 0x2a2564u: goto label_2a2564;
        case 0x2a2568u: goto label_2a2568;
        case 0x2a256cu: goto label_2a256c;
        case 0x2a2570u: goto label_2a2570;
        case 0x2a2574u: goto label_2a2574;
        case 0x2a2578u: goto label_2a2578;
        case 0x2a257cu: goto label_2a257c;
        case 0x2a2580u: goto label_2a2580;
        case 0x2a2584u: goto label_2a2584;
        case 0x2a2588u: goto label_2a2588;
        case 0x2a258cu: goto label_2a258c;
        case 0x2a2590u: goto label_2a2590;
        case 0x2a2594u: goto label_2a2594;
        case 0x2a2598u: goto label_2a2598;
        case 0x2a259cu: goto label_2a259c;
        case 0x2a25a0u: goto label_2a25a0;
        case 0x2a25a4u: goto label_2a25a4;
        case 0x2a25a8u: goto label_2a25a8;
        case 0x2a25acu: goto label_2a25ac;
        case 0x2a25b0u: goto label_2a25b0;
        case 0x2a25b4u: goto label_2a25b4;
        case 0x2a25b8u: goto label_2a25b8;
        case 0x2a25bcu: goto label_2a25bc;
        case 0x2a25c0u: goto label_2a25c0;
        case 0x2a25c4u: goto label_2a25c4;
        case 0x2a25c8u: goto label_2a25c8;
        case 0x2a25ccu: goto label_2a25cc;
        case 0x2a25d0u: goto label_2a25d0;
        case 0x2a25d4u: goto label_2a25d4;
        case 0x2a25d8u: goto label_2a25d8;
        case 0x2a25dcu: goto label_2a25dc;
        case 0x2a25e0u: goto label_2a25e0;
        case 0x2a25e4u: goto label_2a25e4;
        case 0x2a25e8u: goto label_2a25e8;
        case 0x2a25ecu: goto label_2a25ec;
        case 0x2a25f0u: goto label_2a25f0;
        case 0x2a25f4u: goto label_2a25f4;
        case 0x2a25f8u: goto label_2a25f8;
        case 0x2a25fcu: goto label_2a25fc;
        case 0x2a2600u: goto label_2a2600;
        case 0x2a2604u: goto label_2a2604;
        case 0x2a2608u: goto label_2a2608;
        case 0x2a260cu: goto label_2a260c;
        case 0x2a2610u: goto label_2a2610;
        case 0x2a2614u: goto label_2a2614;
        case 0x2a2618u: goto label_2a2618;
        case 0x2a261cu: goto label_2a261c;
        case 0x2a2620u: goto label_2a2620;
        case 0x2a2624u: goto label_2a2624;
        case 0x2a2628u: goto label_2a2628;
        case 0x2a262cu: goto label_2a262c;
        case 0x2a2630u: goto label_2a2630;
        case 0x2a2634u: goto label_2a2634;
        case 0x2a2638u: goto label_2a2638;
        case 0x2a263cu: goto label_2a263c;
        case 0x2a2640u: goto label_2a2640;
        case 0x2a2644u: goto label_2a2644;
        case 0x2a2648u: goto label_2a2648;
        case 0x2a264cu: goto label_2a264c;
        case 0x2a2650u: goto label_2a2650;
        case 0x2a2654u: goto label_2a2654;
        case 0x2a2658u: goto label_2a2658;
        case 0x2a265cu: goto label_2a265c;
        case 0x2a2660u: goto label_2a2660;
        case 0x2a2664u: goto label_2a2664;
        case 0x2a2668u: goto label_2a2668;
        case 0x2a266cu: goto label_2a266c;
        case 0x2a2670u: goto label_2a2670;
        case 0x2a2674u: goto label_2a2674;
        case 0x2a2678u: goto label_2a2678;
        case 0x2a267cu: goto label_2a267c;
        case 0x2a2680u: goto label_2a2680;
        case 0x2a2684u: goto label_2a2684;
        case 0x2a2688u: goto label_2a2688;
        case 0x2a268cu: goto label_2a268c;
        case 0x2a2690u: goto label_2a2690;
        case 0x2a2694u: goto label_2a2694;
        case 0x2a2698u: goto label_2a2698;
        case 0x2a269cu: goto label_2a269c;
        case 0x2a26a0u: goto label_2a26a0;
        case 0x2a26a4u: goto label_2a26a4;
        case 0x2a26a8u: goto label_2a26a8;
        case 0x2a26acu: goto label_2a26ac;
        case 0x2a26b0u: goto label_2a26b0;
        case 0x2a26b4u: goto label_2a26b4;
        case 0x2a26b8u: goto label_2a26b8;
        case 0x2a26bcu: goto label_2a26bc;
        case 0x2a26c0u: goto label_2a26c0;
        case 0x2a26c4u: goto label_2a26c4;
        case 0x2a26c8u: goto label_2a26c8;
        case 0x2a26ccu: goto label_2a26cc;
        case 0x2a26d0u: goto label_2a26d0;
        case 0x2a26d4u: goto label_2a26d4;
        case 0x2a26d8u: goto label_2a26d8;
        case 0x2a26dcu: goto label_2a26dc;
        case 0x2a26e0u: goto label_2a26e0;
        case 0x2a26e4u: goto label_2a26e4;
        case 0x2a26e8u: goto label_2a26e8;
        case 0x2a26ecu: goto label_2a26ec;
        case 0x2a26f0u: goto label_2a26f0;
        case 0x2a26f4u: goto label_2a26f4;
        case 0x2a26f8u: goto label_2a26f8;
        case 0x2a26fcu: goto label_2a26fc;
        case 0x2a2700u: goto label_2a2700;
        case 0x2a2704u: goto label_2a2704;
        case 0x2a2708u: goto label_2a2708;
        case 0x2a270cu: goto label_2a270c;
        case 0x2a2710u: goto label_2a2710;
        case 0x2a2714u: goto label_2a2714;
        case 0x2a2718u: goto label_2a2718;
        case 0x2a271cu: goto label_2a271c;
        case 0x2a2720u: goto label_2a2720;
        case 0x2a2724u: goto label_2a2724;
        case 0x2a2728u: goto label_2a2728;
        case 0x2a272cu: goto label_2a272c;
        case 0x2a2730u: goto label_2a2730;
        case 0x2a2734u: goto label_2a2734;
        case 0x2a2738u: goto label_2a2738;
        case 0x2a273cu: goto label_2a273c;
        case 0x2a2740u: goto label_2a2740;
        case 0x2a2744u: goto label_2a2744;
        case 0x2a2748u: goto label_2a2748;
        case 0x2a274cu: goto label_2a274c;
        case 0x2a2750u: goto label_2a2750;
        case 0x2a2754u: goto label_2a2754;
        case 0x2a2758u: goto label_2a2758;
        case 0x2a275cu: goto label_2a275c;
        case 0x2a2760u: goto label_2a2760;
        case 0x2a2764u: goto label_2a2764;
        case 0x2a2768u: goto label_2a2768;
        case 0x2a276cu: goto label_2a276c;
        case 0x2a2770u: goto label_2a2770;
        case 0x2a2774u: goto label_2a2774;
        case 0x2a2778u: goto label_2a2778;
        case 0x2a277cu: goto label_2a277c;
        case 0x2a2780u: goto label_2a2780;
        case 0x2a2784u: goto label_2a2784;
        case 0x2a2788u: goto label_2a2788;
        case 0x2a278cu: goto label_2a278c;
        case 0x2a2790u: goto label_2a2790;
        case 0x2a2794u: goto label_2a2794;
        case 0x2a2798u: goto label_2a2798;
        case 0x2a279cu: goto label_2a279c;
        case 0x2a27a0u: goto label_2a27a0;
        case 0x2a27a4u: goto label_2a27a4;
        case 0x2a27a8u: goto label_2a27a8;
        case 0x2a27acu: goto label_2a27ac;
        case 0x2a27b0u: goto label_2a27b0;
        case 0x2a27b4u: goto label_2a27b4;
        case 0x2a27b8u: goto label_2a27b8;
        case 0x2a27bcu: goto label_2a27bc;
        case 0x2a27c0u: goto label_2a27c0;
        case 0x2a27c4u: goto label_2a27c4;
        case 0x2a27c8u: goto label_2a27c8;
        case 0x2a27ccu: goto label_2a27cc;
        case 0x2a27d0u: goto label_2a27d0;
        case 0x2a27d4u: goto label_2a27d4;
        case 0x2a27d8u: goto label_2a27d8;
        case 0x2a27dcu: goto label_2a27dc;
        case 0x2a27e0u: goto label_2a27e0;
        case 0x2a27e4u: goto label_2a27e4;
        case 0x2a27e8u: goto label_2a27e8;
        case 0x2a27ecu: goto label_2a27ec;
        case 0x2a27f0u: goto label_2a27f0;
        case 0x2a27f4u: goto label_2a27f4;
        case 0x2a27f8u: goto label_2a27f8;
        case 0x2a27fcu: goto label_2a27fc;
        case 0x2a2800u: goto label_2a2800;
        case 0x2a2804u: goto label_2a2804;
        case 0x2a2808u: goto label_2a2808;
        case 0x2a280cu: goto label_2a280c;
        case 0x2a2810u: goto label_2a2810;
        case 0x2a2814u: goto label_2a2814;
        case 0x2a2818u: goto label_2a2818;
        case 0x2a281cu: goto label_2a281c;
        case 0x2a2820u: goto label_2a2820;
        case 0x2a2824u: goto label_2a2824;
        case 0x2a2828u: goto label_2a2828;
        case 0x2a282cu: goto label_2a282c;
        case 0x2a2830u: goto label_2a2830;
        case 0x2a2834u: goto label_2a2834;
        case 0x2a2838u: goto label_2a2838;
        case 0x2a283cu: goto label_2a283c;
        case 0x2a2840u: goto label_2a2840;
        case 0x2a2844u: goto label_2a2844;
        case 0x2a2848u: goto label_2a2848;
        case 0x2a284cu: goto label_2a284c;
        case 0x2a2850u: goto label_2a2850;
        case 0x2a2854u: goto label_2a2854;
        case 0x2a2858u: goto label_2a2858;
        case 0x2a285cu: goto label_2a285c;
        case 0x2a2860u: goto label_2a2860;
        case 0x2a2864u: goto label_2a2864;
        case 0x2a2868u: goto label_2a2868;
        case 0x2a286cu: goto label_2a286c;
        case 0x2a2870u: goto label_2a2870;
        case 0x2a2874u: goto label_2a2874;
        case 0x2a2878u: goto label_2a2878;
        case 0x2a287cu: goto label_2a287c;
        case 0x2a2880u: goto label_2a2880;
        case 0x2a2884u: goto label_2a2884;
        case 0x2a2888u: goto label_2a2888;
        case 0x2a288cu: goto label_2a288c;
        case 0x2a2890u: goto label_2a2890;
        case 0x2a2894u: goto label_2a2894;
        case 0x2a2898u: goto label_2a2898;
        case 0x2a289cu: goto label_2a289c;
        case 0x2a28a0u: goto label_2a28a0;
        case 0x2a28a4u: goto label_2a28a4;
        case 0x2a28a8u: goto label_2a28a8;
        case 0x2a28acu: goto label_2a28ac;
        case 0x2a28b0u: goto label_2a28b0;
        case 0x2a28b4u: goto label_2a28b4;
        case 0x2a28b8u: goto label_2a28b8;
        case 0x2a28bcu: goto label_2a28bc;
        case 0x2a28c0u: goto label_2a28c0;
        case 0x2a28c4u: goto label_2a28c4;
        case 0x2a28c8u: goto label_2a28c8;
        case 0x2a28ccu: goto label_2a28cc;
        case 0x2a28d0u: goto label_2a28d0;
        case 0x2a28d4u: goto label_2a28d4;
        case 0x2a28d8u: goto label_2a28d8;
        case 0x2a28dcu: goto label_2a28dc;
        case 0x2a28e0u: goto label_2a28e0;
        case 0x2a28e4u: goto label_2a28e4;
        case 0x2a28e8u: goto label_2a28e8;
        case 0x2a28ecu: goto label_2a28ec;
        case 0x2a28f0u: goto label_2a28f0;
        case 0x2a28f4u: goto label_2a28f4;
        case 0x2a28f8u: goto label_2a28f8;
        case 0x2a28fcu: goto label_2a28fc;
        case 0x2a2900u: goto label_2a2900;
        case 0x2a2904u: goto label_2a2904;
        case 0x2a2908u: goto label_2a2908;
        case 0x2a290cu: goto label_2a290c;
        case 0x2a2910u: goto label_2a2910;
        case 0x2a2914u: goto label_2a2914;
        case 0x2a2918u: goto label_2a2918;
        case 0x2a291cu: goto label_2a291c;
        case 0x2a2920u: goto label_2a2920;
        case 0x2a2924u: goto label_2a2924;
        case 0x2a2928u: goto label_2a2928;
        case 0x2a292cu: goto label_2a292c;
        case 0x2a2930u: goto label_2a2930;
        case 0x2a2934u: goto label_2a2934;
        case 0x2a2938u: goto label_2a2938;
        case 0x2a293cu: goto label_2a293c;
        case 0x2a2940u: goto label_2a2940;
        default: break;
    }

    ctx->pc = 0x2a2280u;

label_2a2280:
    // 0x2a2280: 0x27bdf7d0  addiu       $sp, $sp, -0x830
    ctx->pc = 0x2a2280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965200));
label_2a2284:
    // 0x2a2284: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a2284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a2288:
    // 0x2a2288: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2a2288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2a228c:
    // 0x2a228c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2a228cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_2a2290:
    // 0x2a2290: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2a2290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2a2294:
    // 0x2a2294: 0x3c1e0038  lui         $fp, 0x38
    ctx->pc = 0x2a2294u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)56 << 16));
label_2a2298:
    // 0x2a2298: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2a2298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2a229c:
    // 0x2a229c: 0x27de1ef0  addiu       $fp, $fp, 0x1EF0
    ctx->pc = 0x2a229cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 7920));
label_2a22a0:
    // 0x2a22a0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2a22a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2a22a4:
    // 0x2a22a4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2a22a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2a22a8:
    // 0x2a22a8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a22a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2a22ac:
    // 0x2a22ac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a22acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2a22b0:
    // 0x2a22b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a22b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2a22b4:
    // 0x2a22b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a22b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2a22b8:
    // 0x2a22b8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2a22b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2a22bc:
    // 0x2a22bc: 0xc050e38  jal         func_1438E0
label_2a22c0:
    if (ctx->pc == 0x2A22C0u) {
        ctx->pc = 0x2A22C0u;
            // 0x2a22c0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x2A22C4u;
        goto label_2a22c4;
    }
    ctx->pc = 0x2A22BCu;
    SET_GPR_U32(ctx, 31, 0x2A22C4u);
    ctx->pc = 0x2A22C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A22BCu;
            // 0x2a22c0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438E0u;
    if (runtime->hasFunction(0x1438E0u)) {
        auto targetFn = runtime->lookupFunction(0x1438E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A22C4u; }
        if (ctx->pc != 0x2A22C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgFogEnable__Fi_0x1438e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A22C4u; }
        if (ctx->pc != 0x2A22C4u) { return; }
    }
    ctx->pc = 0x2A22C4u;
label_2a22c4:
    // 0x2a22c4: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x2a22c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_2a22c8:
    // 0x2a22c8: 0xc0a0e30  jal         func_2838C0
label_2a22cc:
    if (ctx->pc == 0x2A22CCu) {
        ctx->pc = 0x2A22CCu;
            // 0x2a22cc: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->pc = 0x2A22D0u;
        goto label_2a22d0;
    }
    ctx->pc = 0x2A22C8u;
    SET_GPR_U32(ctx, 31, 0x2A22D0u);
    ctx->pc = 0x2A22CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A22C8u;
            // 0x2a22cc: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A22D0u; }
        if (ctx->pc != 0x2A22D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A22D0u; }
        if (ctx->pc != 0x2A22D0u) { return; }
    }
    ctx->pc = 0x2A22D0u;
label_2a22d0:
    // 0x2a22d0: 0x8c590060  lw          $t9, 0x60($v0)
    ctx->pc = 0x2a22d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_2a22d4:
    // 0x2a22d4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2a22d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a22d8:
    // 0x2a22d8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2a22d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a22dc:
    // 0x2a22dc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2a22dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2a22e0:
    // 0x2a22e0: 0x320f809  jalr        $t9
label_2a22e4:
    if (ctx->pc == 0x2A22E4u) {
        ctx->pc = 0x2A22E4u;
            // 0x2a22e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A22E8u;
        goto label_2a22e8;
    }
    ctx->pc = 0x2A22E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A22E8u);
        ctx->pc = 0x2A22E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A22E0u;
            // 0x2a22e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A22E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A22E8u; }
            if (ctx->pc != 0x2A22E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2A22E8u;
label_2a22e8:
    // 0x2a22e8: 0x8ef90060  lw          $t9, 0x60($s7)
    ctx->pc = 0x2a22e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 96)));
label_2a22ec:
    // 0x2a22ec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2a22ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a22f0:
    // 0x2a22f0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2a22f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2a22f4:
    // 0x2a22f4: 0x320f809  jalr        $t9
label_2a22f8:
    if (ctx->pc == 0x2A22F8u) {
        ctx->pc = 0x2A22F8u;
            // 0x2a22f8: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2A22FCu;
        goto label_2a22fc;
    }
    ctx->pc = 0x2A22F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A22FCu);
        ctx->pc = 0x2A22F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A22F4u;
            // 0x2a22f8: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A22FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A22FCu; }
            if (ctx->pc != 0x2A22FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2A22FCu;
label_2a22fc:
    // 0x2a22fc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2a22fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a2300:
    // 0x2a2300: 0xc04c574  jal         func_1315D0
label_2a2304:
    if (ctx->pc == 0x2A2304u) {
        ctx->pc = 0x2A2304u;
            // 0x2a2304: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2A2308u;
        goto label_2a2308;
    }
    ctx->pc = 0x2A2300u;
    SET_GPR_U32(ctx, 31, 0x2A2308u);
    ctx->pc = 0x2A2304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2300u;
            // 0x2a2304: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2308u; }
        if (ctx->pc != 0x2A2308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2308u; }
        if (ctx->pc != 0x2A2308u) { return; }
    }
    ctx->pc = 0x2A2308u;
label_2a2308:
    // 0x2a2308: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2a2308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a230c:
    // 0x2a230c: 0xc04c578  jal         func_1315E0
label_2a2310:
    if (ctx->pc == 0x2A2310u) {
        ctx->pc = 0x2A2310u;
            // 0x2a2310: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2A2314u;
        goto label_2a2314;
    }
    ctx->pc = 0x2A230Cu;
    SET_GPR_U32(ctx, 31, 0x2A2314u);
    ctx->pc = 0x2A2310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A230Cu;
            // 0x2a2310: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315E0u;
    if (runtime->hasFunction(0x1315E0u)) {
        auto targetFn = runtime->lookupFunction(0x1315E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2314u; }
        if (ctx->pc != 0x2A2314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRef__9mgCCameraFPf_0x1315e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2314u; }
        if (ctx->pc != 0x2A2314u) { return; }
    }
    ctx->pc = 0x2A2314u;
label_2a2314:
    // 0x2a2314: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2a2314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2a2318:
    // 0x2a2318: 0xc050e28  jal         func_1438A0
label_2a231c:
    if (ctx->pc == 0x2A231Cu) {
        ctx->pc = 0x2A231Cu;
            // 0x2a231c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2A2320u;
        goto label_2a2320;
    }
    ctx->pc = 0x2A2318u;
    SET_GPR_U32(ctx, 31, 0x2A2320u);
    ctx->pc = 0x2A231Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2318u;
            // 0x2a231c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438A0u;
    if (runtime->hasFunction(0x1438A0u)) {
        auto targetFn = runtime->lookupFunction(0x1438A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2320u; }
        if (ctx->pc != 0x2A2320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetViewMatrix__FPA4_fPf_0x1438a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2320u; }
        if (ctx->pc != 0x2A2320u) { return; }
    }
    ctx->pc = 0x2A2320u;
label_2a2320:
    // 0x2a2320: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2a2320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2a2324:
    // 0x2a2324: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2328:
    // 0x2a2328: 0xc049c86  jal         func_127218
label_2a232c:
    if (ctx->pc == 0x2A232Cu) {
        ctx->pc = 0x2A232Cu;
            // 0x2a232c: 0x240601d0  addiu       $a2, $zero, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
        ctx->pc = 0x2A2330u;
        goto label_2a2330;
    }
    ctx->pc = 0x2A2328u;
    SET_GPR_U32(ctx, 31, 0x2A2330u);
    ctx->pc = 0x2A232Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2328u;
            // 0x2a232c: 0x240601d0  addiu       $a2, $zero, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2330u; }
        if (ctx->pc != 0x2A2330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2330u; }
        if (ctx->pc != 0x2A2330u) { return; }
    }
    ctx->pc = 0x2A2330u;
label_2a2330:
    // 0x2a2330: 0x8f849944  lw          $a0, -0x66BC($gp)
    ctx->pc = 0x2a2330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940996)));
label_2a2334:
    // 0x2a2334: 0x10800050  beqz        $a0, . + 4 + (0x50 << 2)
label_2a2338:
    if (ctx->pc == 0x2A2338u) {
        ctx->pc = 0x2A2338u;
            // 0x2a2338: 0x27b00110  addiu       $s0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x2A233Cu;
        goto label_2a233c;
    }
    ctx->pc = 0x2A2334u;
    {
        const bool branch_taken_0x2a2334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2334u;
            // 0x2a2338: 0x27b00110  addiu       $s0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2334) {
            ctx->pc = 0x2A2478u;
            goto label_2a2478;
        }
    }
    ctx->pc = 0x2A233Cu;
label_2a233c:
    // 0x2a233c: 0xc058524  jal         func_161490
label_2a2340:
    if (ctx->pc == 0x2A2340u) {
        ctx->pc = 0x2A2340u;
            // 0x2a2340: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A2344u;
        goto label_2a2344;
    }
    ctx->pc = 0x2A233Cu;
    SET_GPR_U32(ctx, 31, 0x2A2344u);
    ctx->pc = 0x2A2340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A233Cu;
            // 0x2a2340: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161490u;
    if (runtime->hasFunction(0x161490u)) {
        auto targetFn = runtime->lookupFunction(0x161490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2344u; }
        if (ctx->pc != 0x2A2344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightInfo__4CMapFP16CMapLightingInfo_0x161490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2344u; }
        if (ctx->pc != 0x2A2344u) { return; }
    }
    ctx->pc = 0x2A2344u;
label_2a2344:
    // 0x2a2344: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_2a2348:
    if (ctx->pc == 0x2A2348u) {
        ctx->pc = 0x2A234Cu;
        goto label_2a234c;
    }
    ctx->pc = 0x2A2344u;
    {
        const bool branch_taken_0x2a2344 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2344) {
            ctx->pc = 0x2A23E0u;
            goto label_2a23e0;
        }
    }
    ctx->pc = 0x2A234Cu;
label_2a234c:
    // 0x2a234c: 0xc6000180  lwc1        $f0, 0x180($s0)
    ctx->pc = 0x2a234cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a2350:
    // 0x2a2350: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2a2350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_2a2354:
    // 0x2a2354: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a2354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a2358:
    // 0x2a2358: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2a2358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_2a235c:
    // 0x2a235c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2a235cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2a2360:
    // 0x2a2360: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a2360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a2364:
    // 0x2a2364: 0xe6000180  swc1        $f0, 0x180($s0)
    ctx->pc = 0x2a2364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 384), bits); }
label_2a2368:
    // 0x2a2368: 0xc6000184  lwc1        $f0, 0x184($s0)
    ctx->pc = 0x2a2368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a236c:
    // 0x2a236c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a236cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a2370:
    // 0x2a2370: 0xe6000184  swc1        $f0, 0x184($s0)
    ctx->pc = 0x2a2370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 388), bits); }
label_2a2374:
    // 0x2a2374: 0xc6000188  lwc1        $f0, 0x188($s0)
    ctx->pc = 0x2a2374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a2378:
    // 0x2a2378: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a2378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a237c:
    // 0x2a237c: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x2a237cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
label_2a2380:
    // 0x2a2380: 0xc6000180  lwc1        $f0, 0x180($s0)
    ctx->pc = 0x2a2380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a2384:
    // 0x2a2384: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2a2384u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a2388:
    // 0x2a2388: 0x0  nop
    ctx->pc = 0x2a2388u;
    // NOP
label_2a238c:
    // 0x2a238c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2a2390:
    if (ctx->pc == 0x2A2390u) {
        ctx->pc = 0x2A2394u;
        goto label_2a2394;
    }
    ctx->pc = 0x2A238Cu;
    {
        const bool branch_taken_0x2a238c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a238c) {
            ctx->pc = 0x2A2398u;
            goto label_2a2398;
        }
    }
    ctx->pc = 0x2A2394u;
label_2a2394:
    // 0x2a2394: 0xe6020180  swc1        $f2, 0x180($s0)
    ctx->pc = 0x2a2394u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 384), bits); }
label_2a2398:
    // 0x2a2398: 0xc6010184  lwc1        $f1, 0x184($s0)
    ctx->pc = 0x2a2398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a239c:
    // 0x2a239c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2a239cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_2a23a0:
    // 0x2a23a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a23a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a23a4:
    // 0x2a23a4: 0x0  nop
    ctx->pc = 0x2a23a4u;
    // NOP
label_2a23a8:
    // 0x2a23a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a23a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a23ac:
    // 0x2a23ac: 0x0  nop
    ctx->pc = 0x2a23acu;
    // NOP
label_2a23b0:
    // 0x2a23b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2a23b4:
    if (ctx->pc == 0x2A23B4u) {
        ctx->pc = 0x2A23B8u;
        goto label_2a23b8;
    }
    ctx->pc = 0x2A23B0u;
    {
        const bool branch_taken_0x2a23b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a23b0) {
            ctx->pc = 0x2A23BCu;
            goto label_2a23bc;
        }
    }
    ctx->pc = 0x2A23B8u;
label_2a23b8:
    // 0x2a23b8: 0xe6000184  swc1        $f0, 0x184($s0)
    ctx->pc = 0x2a23b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 388), bits); }
label_2a23bc:
    // 0x2a23bc: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x2a23bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a23c0:
    // 0x2a23c0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2a23c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_2a23c4:
    // 0x2a23c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a23c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a23c8:
    // 0x2a23c8: 0x0  nop
    ctx->pc = 0x2a23c8u;
    // NOP
label_2a23cc:
    // 0x2a23cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a23ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a23d0:
    // 0x2a23d0: 0x0  nop
    ctx->pc = 0x2a23d0u;
    // NOP
label_2a23d4:
    // 0x2a23d4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2a23d8:
    if (ctx->pc == 0x2A23D8u) {
        ctx->pc = 0x2A23DCu;
        goto label_2a23dc;
    }
    ctx->pc = 0x2A23D4u;
    {
        const bool branch_taken_0x2a23d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a23d4) {
            ctx->pc = 0x2A23E0u;
            goto label_2a23e0;
        }
    }
    ctx->pc = 0x2A23DCu;
label_2a23dc:
    // 0x2a23dc: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x2a23dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
label_2a23e0:
    // 0x2a23e0: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
label_2a23e4:
    if (ctx->pc == 0x2A23E4u) {
        ctx->pc = 0x2A23E8u;
        goto label_2a23e8;
    }
    ctx->pc = 0x2A23E0u;
    {
        const bool branch_taken_0x2a23e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a23e0) {
            ctx->pc = 0x2A2478u;
            goto label_2a2478;
        }
    }
    ctx->pc = 0x2A23E8u;
label_2a23e8:
    // 0x2a23e8: 0xc050e38  jal         func_1438E0
label_2a23ec:
    if (ctx->pc == 0x2A23ECu) {
        ctx->pc = 0x2A23ECu;
            // 0x2a23ec: 0x8e040190  lw          $a0, 0x190($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
        ctx->pc = 0x2A23F0u;
        goto label_2a23f0;
    }
    ctx->pc = 0x2A23E8u;
    SET_GPR_U32(ctx, 31, 0x2A23F0u);
    ctx->pc = 0x2A23ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A23E8u;
            // 0x2a23ec: 0x8e040190  lw          $a0, 0x190($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438E0u;
    if (runtime->hasFunction(0x1438E0u)) {
        auto targetFn = runtime->lookupFunction(0x1438E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A23F0u; }
        if (ctx->pc != 0x2A23F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgFogEnable__Fi_0x1438e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A23F0u; }
        if (ctx->pc != 0x2A23F0u) { return; }
    }
    ctx->pc = 0x2A23F0u;
label_2a23f0:
    // 0x2a23f0: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x2a23f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_2a23f4:
    // 0x2a23f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2a23f8:
    if (ctx->pc == 0x2A23F8u) {
        ctx->pc = 0x2A23F8u;
            // 0x2a23f8: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x2A23FCu;
        goto label_2a23fc;
    }
    ctx->pc = 0x2A23F4u;
    {
        const bool branch_taken_0x2a23f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A23F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A23F4u;
            // 0x2a23f8: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a23f4) {
            ctx->pc = 0x2A2420u;
            goto label_2a2420;
        }
    }
    ctx->pc = 0x2A23FCu;
label_2a23fc:
    // 0x2a23fc: 0x920401a8  lbu         $a0, 0x1A8($s0)
    ctx->pc = 0x2a23fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 424)));
label_2a2400:
    // 0x2a2400: 0xc60d01a4  lwc1        $f13, 0x1A4($s0)
    ctx->pc = 0x2a2400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2a2404:
    // 0x2a2404: 0x920501a9  lbu         $a1, 0x1A9($s0)
    ctx->pc = 0x2a2404u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 425)));
label_2a2408:
    // 0x2a2408: 0x920601aa  lbu         $a2, 0x1AA($s0)
    ctx->pc = 0x2a2408u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 426)));
label_2a240c:
    // 0x2a240c: 0xc60e01b0  lwc1        $f14, 0x1B0($s0)
    ctx->pc = 0x2a240cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2a2410:
    // 0x2a2410: 0xc60f01b4  lwc1        $f15, 0x1B4($s0)
    ctx->pc = 0x2a2410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_2a2414:
    // 0x2a2414: 0xc050e48  jal         func_143920
label_2a2418:
    if (ctx->pc == 0x2A2418u) {
        ctx->pc = 0x2A2418u;
            // 0x2a2418: 0xc60c01a0  lwc1        $f12, 0x1A0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2A241Cu;
        goto label_2a241c;
    }
    ctx->pc = 0x2A2414u;
    SET_GPR_U32(ctx, 31, 0x2A241Cu);
    ctx->pc = 0x2A2418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2414u;
            // 0x2a2418: 0xc60c01a0  lwc1        $f12, 0x1A0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x143920u;
    if (runtime->hasFunction(0x143920u)) {
        auto targetFn = runtime->lookupFunction(0x143920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A241Cu; }
        if (ctx->pc != 0x2A241Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetFogParam__FffUcUcUcff_0x143920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A241Cu; }
        if (ctx->pc != 0x2A241Cu) { return; }
    }
    ctx->pc = 0x2A241Cu;
label_2a241c:
    // 0x2a241c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2a241cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2a2420:
    // 0x2a2420: 0xc050dd0  jal         func_143740
label_2a2424:
    if (ctx->pc == 0x2A2424u) {
        ctx->pc = 0x2A2424u;
            // 0x2a2424: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x2A2428u;
        goto label_2a2428;
    }
    ctx->pc = 0x2A2420u;
    SET_GPR_U32(ctx, 31, 0x2A2428u);
    ctx->pc = 0x2A2424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2420u;
            // 0x2a2424: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143740u;
    if (runtime->hasFunction(0x143740u)) {
        auto targetFn = runtime->lookupFunction(0x143740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2428u; }
        if (ctx->pc != 0x2A2428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetLight__FPA4_fPA4_f_0x143740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2428u; }
        if (ctx->pc != 0x2A2428u) { return; }
    }
    ctx->pc = 0x2A2428u;
label_2a2428:
    // 0x2a2428: 0xc050dec  jal         func_1437B0
label_2a242c:
    if (ctx->pc == 0x2A242Cu) {
        ctx->pc = 0x2A242Cu;
            // 0x2a242c: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->pc = 0x2A2430u;
        goto label_2a2430;
    }
    ctx->pc = 0x2A2428u;
    SET_GPR_U32(ctx, 31, 0x2A2430u);
    ctx->pc = 0x2A242Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2428u;
            // 0x2a242c: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2430u; }
        if (ctx->pc != 0x2A2430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2430u; }
        if (ctx->pc != 0x2A2430u) { return; }
    }
    ctx->pc = 0x2A2430u;
label_2a2430:
    // 0x2a2430: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2a2430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_2a2434:
    // 0x2a2434: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2a2438:
    if (ctx->pc == 0x2A2438u) {
        ctx->pc = 0x2A2438u;
            // 0x2a2438: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A243Cu;
        goto label_2a243c;
    }
    ctx->pc = 0x2A2434u;
    {
        const bool branch_taken_0x2a2434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2434u;
            // 0x2a2438: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2434) {
            ctx->pc = 0x2A246Cu;
            goto label_2a246c;
        }
    }
    ctx->pc = 0x2A243Cu;
label_2a243c:
    // 0x2a243c: 0xc050e40  jal         func_143900
label_2a2440:
    if (ctx->pc == 0x2A2440u) {
        ctx->pc = 0x2A2444u;
        goto label_2a2444;
    }
    ctx->pc = 0x2A243Cu;
    SET_GPR_U32(ctx, 31, 0x2A2444u);
    ctx->pc = 0x143900u;
    if (runtime->hasFunction(0x143900u)) {
        auto targetFn = runtime->lookupFunction(0x143900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2444u; }
        if (ctx->pc != 0x2A2444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlightEnable__Fi_0x143900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2444u; }
        if (ctx->pc != 0x2A2444u) { return; }
    }
    ctx->pc = 0x2A2444u;
label_2a2444:
    // 0x2a2444: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a2444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2448:
    // 0x2a2448: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a2448u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a244c:
    // 0x2a244c: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x2a244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2a2450:
    // 0x2a2450: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a2450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a2454:
    // 0x2a2454: 0xc050e04  jal         func_143810
label_2a2458:
    if (ctx->pc == 0x2A2458u) {
        ctx->pc = 0x2A2458u;
            // 0x2a2458: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x2A245Cu;
        goto label_2a245c;
    }
    ctx->pc = 0x2A2454u;
    SET_GPR_U32(ctx, 31, 0x2A245Cu);
    ctx->pc = 0x2A2458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2454u;
            // 0x2a2458: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143810u;
    if (runtime->hasFunction(0x143810u)) {
        auto targetFn = runtime->lookupFunction(0x143810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A245Cu; }
        if (ctx->pc != 0x2A245Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPlight__FiP13mgPOINT_LIGHT_0x143810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A245Cu; }
        if (ctx->pc != 0x2A245Cu) { return; }
    }
    ctx->pc = 0x2A245Cu;
label_2a245c:
    // 0x2a245c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a245cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a2460:
    // 0x2a2460: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x2a2460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_2a2464:
    // 0x2a2464: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2a2468:
    if (ctx->pc == 0x2A2468u) {
        ctx->pc = 0x2A2468u;
            // 0x2a2468: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x2A246Cu;
        goto label_2a246c;
    }
    ctx->pc = 0x2A2464u;
    {
        const bool branch_taken_0x2a2464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2464u;
            // 0x2a2468: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2464) {
            ctx->pc = 0x2A244Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a244c;
        }
    }
    ctx->pc = 0x2A246Cu;
label_2a246c:
    // 0x2a246c: 0x0  nop
    ctx->pc = 0x2a246cu;
    // NOP
label_2a2470:
    // 0x2a2470: 0xc050d9c  jal         func_143670
label_2a2474:
    if (ctx->pc == 0x2A2474u) {
        ctx->pc = 0x2A2474u;
            // 0x2a2474: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x2A2478u;
        goto label_2a2478;
    }
    ctx->pc = 0x2A2470u;
    SET_GPR_U32(ctx, 31, 0x2A2478u);
    ctx->pc = 0x2A2474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2470u;
            // 0x2a2474: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143670u;
    if (runtime->hasFunction(0x143670u)) {
        auto targetFn = runtime->lookupFunction(0x143670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2478u; }
        if (ctx->pc != 0x2A2478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetBackGround__FPf_0x143670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2478u; }
        if (ctx->pc != 0x2A2478u) { return; }
    }
    ctx->pc = 0x2A2478u;
label_2a2478:
    // 0x2a2478: 0x8f829944  lw          $v0, -0x66BC($gp)
    ctx->pc = 0x2a2478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940996)));
label_2a247c:
    // 0x2a247c: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
label_2a2480:
    if (ctx->pc == 0x2A2480u) {
        ctx->pc = 0x2A2480u;
            // 0x2a2480: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2A2484u;
        goto label_2a2484;
    }
    ctx->pc = 0x2A247Cu;
    {
        const bool branch_taken_0x2a247c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A247Cu;
            // 0x2a2480: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a247c) {
            ctx->pc = 0x2A262Cu;
            goto label_2a262c;
        }
    }
    ctx->pc = 0x2A2484u;
label_2a2484:
    // 0x2a2484: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a2484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_2a2488:
    // 0x2a2488: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a248c:
    // 0x2a248c: 0xac2060f4  sw          $zero, 0x60F4($at)
    ctx->pc = 0x2a248cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24820), GPR_U32(ctx, 0));
label_2a2490:
    // 0x2a2490: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a2490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2494:
    // 0x2a2494: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a2494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_2a2498:
    // 0x2a2498: 0xac2060ec  sw          $zero, 0x60EC($at)
    ctx->pc = 0x2a2498u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24812), GPR_U32(ctx, 0));
label_2a249c:
    // 0x2a249c: 0xdd1821  addu        $v1, $a2, $sp
    ctx->pc = 0x2a249cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
label_2a24a0:
    // 0x2a24a0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2a24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2a24a4:
    // 0x2a24a4: 0x246702e0  addiu       $a3, $v1, 0x2E0
    ctx->pc = 0x2a24a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
label_2a24a8:
    // 0x2a24a8: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x2a24a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_2a24ac:
    // 0x2a24ac: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x2a24acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_2a24b0:
    // 0x2a24b0: 0x24a30003  addiu       $v1, $a1, 0x3
    ctx->pc = 0x2a24b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_2a24b4:
    // 0x2a24b4: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x2a24b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_2a24b8:
    // 0x2a24b8: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x2a24b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
label_2a24bc:
    // 0x2a24bc: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x2a24bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2a24c0:
    // 0x2a24c0: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x2a24c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
label_2a24c4:
    // 0x2a24c4: 0x24a40005  addiu       $a0, $a1, 0x5
    ctx->pc = 0x2a24c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
label_2a24c8:
    // 0x2a24c8: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x2a24c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
label_2a24cc:
    // 0x2a24cc: 0x24a30006  addiu       $v1, $a1, 0x6
    ctx->pc = 0x2a24ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
label_2a24d0:
    // 0x2a24d0: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x2a24d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
label_2a24d4:
    // 0x2a24d4: 0x24a20007  addiu       $v0, $a1, 0x7
    ctx->pc = 0x2a24d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_2a24d8:
    // 0x2a24d8: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x2a24d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_2a24dc:
    // 0x2a24dc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2a24dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_2a24e0:
    // 0x2a24e0: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x2a24e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
label_2a24e4:
    // 0x2a24e4: 0x28a20040  slti        $v0, $a1, 0x40
    ctx->pc = 0x2a24e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
label_2a24e8:
    // 0x2a24e8: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_2a24ec:
    if (ctx->pc == 0x2A24ECu) {
        ctx->pc = 0x2A24ECu;
            // 0x2a24ec: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->pc = 0x2A24F0u;
        goto label_2a24f0;
    }
    ctx->pc = 0x2A24E8u;
    {
        const bool branch_taken_0x2a24e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A24ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A24E8u;
            // 0x2a24ec: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a24e8) {
            ctx->pc = 0x2A249Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a249c;
        }
    }
    ctx->pc = 0x2A24F0u;
label_2a24f0:
    // 0x2a24f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a24f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a24f4:
    // 0x2a24f4: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x2a24f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_2a24f8:
    // 0x2a24f8: 0x248460d0  addiu       $a0, $a0, 0x60D0
    ctx->pc = 0x2a24f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24784));
label_2a24fc:
    // 0x2a24fc: 0xafa203e0  sw          $v0, 0x3E0($sp)
    ctx->pc = 0x2a24fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 992), GPR_U32(ctx, 2));
label_2a2500:
    // 0x2a2500: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x2a2500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_2a2504:
    // 0x2a2504: 0xc050940  jal         func_142500
label_2a2508:
    if (ctx->pc == 0x2A2508u) {
        ctx->pc = 0x2A2508u;
            // 0x2a2508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A250Cu;
        goto label_2a250c;
    }
    ctx->pc = 0x2A2504u;
    SET_GPR_U32(ctx, 31, 0x2A250Cu);
    ctx->pc = 0x2A2508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2504u;
            // 0x2a2508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142500u;
    if (runtime->hasFunction(0x142500u)) {
        auto targetFn = runtime->lookupFunction(0x142500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A250Cu; }
        if (ctx->pc != 0x2A250Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgBeginDraw__FP9mgCMemoryPiP14mgCDrawManager_0x142500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A250Cu; }
        if (ctx->pc != 0x2A250Cu) { return; }
    }
    ctx->pc = 0x2A250Cu;
label_2a250c:
    // 0x2a250c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2a250cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2a2510:
    // 0x2a2510: 0x27a50400  addiu       $a1, $sp, 0x400
    ctx->pc = 0x2a2510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_2a2514:
    // 0x2a2514: 0x24424340  addiu       $v0, $v0, 0x4340
    ctx->pc = 0x2a2514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17216));
label_2a2518:
    // 0x2a2518: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2a2518u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2a251c:
    // 0x2a251c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x2a251cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_2a2520:
    // 0x2a2520: 0x8f849944  lw          $a0, -0x66BC($gp)
    ctx->pc = 0x2a2520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940996)));
label_2a2524:
    // 0x2a2524: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x2a2524u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_2a2528:
    // 0x2a2528: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2a2528u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2a252c:
    // 0x2a252c: 0x320f809  jalr        $t9
label_2a2530:
    if (ctx->pc == 0x2A2530u) {
        ctx->pc = 0x2A2534u;
        goto label_2a2534;
    }
    ctx->pc = 0x2A252Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A2534u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A2534u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A2534u; }
            if (ctx->pc != 0x2A2534u) { return; }
        }
        }
    }
    ctx->pc = 0x2A2534u;
label_2a2534:
    // 0x2a2534: 0x8f849944  lw          $a0, -0x66BC($gp)
    ctx->pc = 0x2a2534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940996)));
label_2a2538:
    // 0x2a2538: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x2a2538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_2a253c:
    // 0x2a253c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2a253cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2a2540:
    // 0x2a2540: 0x320f809  jalr        $t9
label_2a2544:
    if (ctx->pc == 0x2A2544u) {
        ctx->pc = 0x2A2548u;
        goto label_2a2548;
    }
    ctx->pc = 0x2A2540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A2548u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A2548u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A2548u; }
            if (ctx->pc != 0x2A2548u) { return; }
        }
        }
    }
    ctx->pc = 0x2A2548u;
label_2a2548:
    // 0x2a2548: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2a2548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2a254c:
    // 0x2a254c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a254cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2a2550:
    // 0x2a2550: 0x24a5e1e8  addiu       $a1, $a1, -0x1E18
    ctx->pc = 0x2a2550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959592));
label_2a2554:
    // 0x2a2554: 0xc04b414  jal         func_12D050
label_2a2558:
    if (ctx->pc == 0x2A2558u) {
        ctx->pc = 0x2A2558u;
            // 0x2a2558: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2A255Cu;
        goto label_2a255c;
    }
    ctx->pc = 0x2A2554u;
    SET_GPR_U32(ctx, 31, 0x2A255Cu);
    ctx->pc = 0x2A2558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2554u;
            // 0x2a2558: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A255Cu; }
        if (ctx->pc != 0x2A255Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A255Cu; }
        if (ctx->pc != 0x2A255Cu) { return; }
    }
    ctx->pc = 0x2A255Cu;
label_2a255c:
    // 0x2a255c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a255cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2560:
    // 0x2a2560: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_2a2564:
    if (ctx->pc == 0x2A2564u) {
        ctx->pc = 0x2A2564u;
            // 0x2a2564: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2A2568u;
        goto label_2a2568;
    }
    ctx->pc = 0x2A2560u;
    {
        const bool branch_taken_0x2a2560 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2560u;
            // 0x2a2564: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2560) {
            ctx->pc = 0x2A2574u;
            goto label_2a2574;
        }
    }
    ctx->pc = 0x2A2568u;
label_2a2568:
    // 0x2a2568: 0x86b60000  lh          $s6, 0x0($s5)
    ctx->pc = 0x2a2568u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_2a256c:
    // 0x2a256c: 0xc068984  jal         func_1A2610
label_2a2570:
    if (ctx->pc == 0x2A2570u) {
        ctx->pc = 0x2A2570u;
            // 0x2a2570: 0x8f849950  lw          $a0, -0x66B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941008)));
        ctx->pc = 0x2A2574u;
        goto label_2a2574;
    }
    ctx->pc = 0x2A256Cu;
    SET_GPR_U32(ctx, 31, 0x2A2574u);
    ctx->pc = 0x2A2570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A256Cu;
            // 0x2a2570: 0x8f849950  lw          $a0, -0x66B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941008)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2610u;
    if (runtime->hasFunction(0x1A2610u)) {
        auto targetFn = runtime->lookupFunction(0x1A2610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2574u; }
        if (ctx->pc != 0x2A2574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEffect__10CWaveTableFv_0x1a2610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2574u; }
        if (ctx->pc != 0x2A2574u) { return; }
    }
    ctx->pc = 0x2A2574u;
label_2a2574:
    // 0x2a2574: 0xc050950  jal         func_142540
label_2a2578:
    if (ctx->pc == 0x2A2578u) {
        ctx->pc = 0x2A2578u;
            // 0x2a2578: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A257Cu;
        goto label_2a257c;
    }
    ctx->pc = 0x2A2574u;
    SET_GPR_U32(ctx, 31, 0x2A257Cu);
    ctx->pc = 0x2A2578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2574u;
            // 0x2a2578: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142540u;
    if (runtime->hasFunction(0x142540u)) {
        auto targetFn = runtime->lookupFunction(0x142540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A257Cu; }
        if (ctx->pc != 0x2A257Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPreEndDraw__FP14mgCDrawManager_0x142540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A257Cu; }
        if (ctx->pc != 0x2A257Cu) { return; }
    }
    ctx->pc = 0x2A257Cu;
label_2a257c:
    // 0x2a257c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a257cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2580:
    // 0x2a2580: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a2580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_2a2584:
    // 0x2a2584: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a2584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a2588:
    // 0x2a2588: 0x27a60410  addiu       $a2, $sp, 0x410
    ctx->pc = 0x2a2588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_2a258c:
    // 0x2a258c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2a258cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2a2590:
    // 0x2a2590: 0xc05a3f4  jal         func_168FD0
label_2a2594:
    if (ctx->pc == 0x2A2594u) {
        ctx->pc = 0x2A2594u;
            // 0x2a2594: 0x244423d0  addiu       $a0, $v0, 0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9168));
        ctx->pc = 0x2A2598u;
        goto label_2a2598;
    }
    ctx->pc = 0x2A2590u;
    SET_GPR_U32(ctx, 31, 0x2A2598u);
    ctx->pc = 0x2A2594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2590u;
            // 0x2a2594: 0x244423d0  addiu       $a0, $v0, 0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168FD0u;
    if (runtime->hasFunction(0x168FD0u)) {
        auto targetFn = runtime->lookupFunction(0x168FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2598u; }
        if (ctx->pc != 0x2A2598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextureBlockNo__11CMdsListSetFiPii_0x168fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2598u; }
        if (ctx->pc != 0x2A2598u) { return; }
    }
    ctx->pc = 0x2A2598u;
label_2a2598:
    // 0x2a2598: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2a2598u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2a259c:
    // 0x2a259c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a259cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a25a0:
    // 0x2a25a0: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
label_2a25a4:
    if (ctx->pc == 0x2A25A4u) {
        ctx->pc = 0x2A25A4u;
            // 0x2a25a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A25A8u;
        goto label_2a25a8;
    }
    ctx->pc = 0x2A25A0u;
    {
        const bool branch_taken_0x2a25a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A25A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A25A0u;
            // 0x2a25a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a25a0) {
            ctx->pc = 0x2A260Cu;
            goto label_2a260c;
        }
    }
    ctx->pc = 0x2A25A8u;
label_2a25a8:
    // 0x2a25a8: 0x2711023  subu        $v0, $s3, $s1
    ctx->pc = 0x2a25a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_2a25ac:
    // 0x2a25ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a25acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a25b0:
    // 0x2a25b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a25b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a25b4:
    // 0x2a25b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a25b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a25b8:
    // 0x2a25b8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a25b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2a25bc:
    // 0x2a25bc: 0x24540410  addiu       $s4, $v0, 0x410
    ctx->pc = 0x2a25bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1040));
label_2a25c0:
    // 0x2a25c0: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x2a25c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2a25c4:
    // 0x2a25c4: 0xc050958  jal         func_142560
label_2a25c8:
    if (ctx->pc == 0x2A25C8u) {
        ctx->pc = 0x2A25C8u;
            // 0x2a25c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A25CCu;
        goto label_2a25cc;
    }
    ctx->pc = 0x2A25C4u;
    SET_GPR_U32(ctx, 31, 0x2A25CCu);
    ctx->pc = 0x2A25C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A25C4u;
            // 0x2a25c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142560u;
    if (runtime->hasFunction(0x142560u)) {
        auto targetFn = runtime->lookupFunction(0x142560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A25CCu; }
        if (ctx->pc != 0x2A25CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndDrawReloadTexture__FiP14mgCDrawManager_0x142560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A25CCu; }
        if (ctx->pc != 0x2A25CCu) { return; }
    }
    ctx->pc = 0x2A25CCu;
label_2a25cc:
    // 0x2a25cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2a25d0:
    if (ctx->pc == 0x2A25D0u) {
        ctx->pc = 0x2A25D4u;
        goto label_2a25d4;
    }
    ctx->pc = 0x2A25CCu;
    {
        const bool branch_taken_0x2a25cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a25cc) {
            ctx->pc = 0x2A25ECu;
            goto label_2a25ec;
        }
    }
    ctx->pc = 0x2A25D4u;
label_2a25d4:
    // 0x2a25d4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2a25d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2a25d8:
    // 0x2a25d8: 0x16c20004  bne         $s6, $v0, . + 4 + (0x4 << 2)
label_2a25dc:
    if (ctx->pc == 0x2A25DCu) {
        ctx->pc = 0x2A25E0u;
        goto label_2a25e0;
    }
    ctx->pc = 0x2A25D8u;
    {
        const bool branch_taken_0x2a25d8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a25d8) {
            ctx->pc = 0x2A25ECu;
            goto label_2a25ec;
        }
    }
    ctx->pc = 0x2A25E0u;
label_2a25e0:
    // 0x2a25e0: 0x8f849950  lw          $a0, -0x66B0($gp)
    ctx->pc = 0x2a25e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941008)));
label_2a25e4:
    // 0x2a25e4: 0xc06887c  jal         func_1A21F0
label_2a25e8:
    if (ctx->pc == 0x2A25E8u) {
        ctx->pc = 0x2A25E8u;
            // 0x2a25e8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A25ECu;
        goto label_2a25ec;
    }
    ctx->pc = 0x2A25E4u;
    SET_GPR_U32(ctx, 31, 0x2A25ECu);
    ctx->pc = 0x2A25E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A25E4u;
            // 0x2a25e8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A21F0u;
    if (runtime->hasFunction(0x1A21F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A21F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A25ECu; }
        if (ctx->pc != 0x2A25ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateTexture__10CWaveTableFP10mgCTexture_0x1a21f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A25ECu; }
        if (ctx->pc != 0x2A25ECu) { return; }
    }
    ctx->pc = 0x2A25ECu;
label_2a25ec:
    // 0x2a25ec: 0x0  nop
    ctx->pc = 0x2a25ecu;
    // NOP
label_2a25f0:
    // 0x2a25f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a25f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a25f4:
    // 0x2a25f4: 0xc050960  jal         func_142580
label_2a25f8:
    if (ctx->pc == 0x2A25F8u) {
        ctx->pc = 0x2A25F8u;
            // 0x2a25f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A25FCu;
        goto label_2a25fc;
    }
    ctx->pc = 0x2A25F4u;
    SET_GPR_U32(ctx, 31, 0x2A25FCu);
    ctx->pc = 0x2A25F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A25F4u;
            // 0x2a25f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142580u;
    if (runtime->hasFunction(0x142580u)) {
        auto targetFn = runtime->lookupFunction(0x142580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A25FCu; }
        if (ctx->pc != 0x2A25FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndDraw__FiP14mgCDrawManager_0x142580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A25FCu; }
        if (ctx->pc != 0x2A25FCu) { return; }
    }
    ctx->pc = 0x2A25FCu;
label_2a25fc:
    // 0x2a25fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a25fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a2600:
    // 0x2a2600: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x2a2600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2a2604:
    // 0x2a2604: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_2a2608:
    if (ctx->pc == 0x2A2608u) {
        ctx->pc = 0x2A260Cu;
        goto label_2a260c;
    }
    ctx->pc = 0x2A2604u;
    {
        const bool branch_taken_0x2a2604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2604) {
            ctx->pc = 0x2A25A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a25a8;
        }
    }
    ctx->pc = 0x2A260Cu;
label_2a260c:
    // 0x2a260c: 0x0  nop
    ctx->pc = 0x2a260cu;
    // NOP
label_2a2610:
    // 0x2a2610: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a2610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2a2614:
    // 0x2a2614: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x2a2614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_2a2618:
    // 0x2a2618: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_2a261c:
    if (ctx->pc == 0x2A261Cu) {
        ctx->pc = 0x2A261Cu;
            // 0x2a261c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A2620u;
        goto label_2a2620;
    }
    ctx->pc = 0x2A2618u;
    {
        const bool branch_taken_0x2a2618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A261Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2618u;
            // 0x2a261c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2618) {
            ctx->pc = 0x2A2580u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a2580;
        }
    }
    ctx->pc = 0x2A2620u;
label_2a2620:
    // 0x2a2620: 0xc050ebc  jal         func_143AF0
label_2a2624:
    if (ctx->pc == 0x2A2624u) {
        ctx->pc = 0x2A2628u;
        goto label_2a2628;
    }
    ctx->pc = 0x2A2620u;
    SET_GPR_U32(ctx, 31, 0x2A2628u);
    ctx->pc = 0x143AF0u;
    if (runtime->hasFunction(0x143AF0u)) {
        auto targetFn = runtime->lookupFunction(0x143AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2628u; }
        if (ctx->pc != 0x2A2628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkTextureRepeat__Fi_0x143af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2628u; }
        if (ctx->pc != 0x2A2628u) { return; }
    }
    ctx->pc = 0x2A2628u;
label_2a2628:
    // 0x2a2628: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x2a2628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a262c:
    // 0x2a262c: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a262cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_2a2630:
    // 0x2a2630: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a2630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a2634:
    // 0x2a2634: 0x27a60610  addiu       $a2, $sp, 0x610
    ctx->pc = 0x2a2634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
label_2a2638:
    // 0x2a2638: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2a2638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2a263c:
    // 0x2a263c: 0xc05a3f4  jal         func_168FD0
label_2a2640:
    if (ctx->pc == 0x2A2640u) {
        ctx->pc = 0x2A2640u;
            // 0x2a2640: 0x244423d0  addiu       $a0, $v0, 0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9168));
        ctx->pc = 0x2A2644u;
        goto label_2a2644;
    }
    ctx->pc = 0x2A263Cu;
    SET_GPR_U32(ctx, 31, 0x2A2644u);
    ctx->pc = 0x2A2640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A263Cu;
            // 0x2a2640: 0x244423d0  addiu       $a0, $v0, 0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168FD0u;
    if (runtime->hasFunction(0x168FD0u)) {
        auto targetFn = runtime->lookupFunction(0x168FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2644u; }
        if (ctx->pc != 0x2A2644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextureBlockNo__11CMdsListSetFiPii_0x168fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2644u; }
        if (ctx->pc != 0x2A2644u) { return; }
    }
    ctx->pc = 0x2A2644u;
label_2a2644:
    // 0x2a2644: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2a2644u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2a2648:
    // 0x2a2648: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a2648u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a264c:
    // 0x2a264c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_2a2650:
    if (ctx->pc == 0x2A2650u) {
        ctx->pc = 0x2A2650u;
            // 0x2a2650: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A2654u;
        goto label_2a2654;
    }
    ctx->pc = 0x2A264Cu;
    {
        const bool branch_taken_0x2a264c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A264Cu;
            // 0x2a2650: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a264c) {
            ctx->pc = 0x2A2688u;
            goto label_2a2688;
        }
    }
    ctx->pc = 0x2A2654u;
label_2a2654:
    // 0x2a2654: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a2654u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2658:
    // 0x2a2658: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x2a2658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
label_2a265c:
    // 0x2a265c: 0x8c520610  lw          $s2, 0x610($v0)
    ctx->pc = 0x2a265cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1552)));
label_2a2660:
    // 0x2a2660: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2664:
    // 0x2a2664: 0xc050958  jal         func_142560
label_2a2668:
    if (ctx->pc == 0x2A2668u) {
        ctx->pc = 0x2A2668u;
            // 0x2a2668: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A266Cu;
        goto label_2a266c;
    }
    ctx->pc = 0x2A2664u;
    SET_GPR_U32(ctx, 31, 0x2A266Cu);
    ctx->pc = 0x2A2668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2664u;
            // 0x2a2668: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142560u;
    if (runtime->hasFunction(0x142560u)) {
        auto targetFn = runtime->lookupFunction(0x142560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A266Cu; }
        if (ctx->pc != 0x2A266Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndDrawReloadTexture__FiP14mgCDrawManager_0x142560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A266Cu; }
        if (ctx->pc != 0x2A266Cu) { return; }
    }
    ctx->pc = 0x2A266Cu;
label_2a266c:
    // 0x2a266c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a266cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a2670:
    // 0x2a2670: 0xc050960  jal         func_142580
label_2a2674:
    if (ctx->pc == 0x2A2674u) {
        ctx->pc = 0x2A2674u;
            // 0x2a2674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A2678u;
        goto label_2a2678;
    }
    ctx->pc = 0x2A2670u;
    SET_GPR_U32(ctx, 31, 0x2A2678u);
    ctx->pc = 0x2A2674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2670u;
            // 0x2a2674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142580u;
    if (runtime->hasFunction(0x142580u)) {
        auto targetFn = runtime->lookupFunction(0x142580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2678u; }
        if (ctx->pc != 0x2A2678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndDraw__FiP14mgCDrawManager_0x142580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2678u; }
        if (ctx->pc != 0x2A2678u) { return; }
    }
    ctx->pc = 0x2A2678u;
label_2a2678:
    // 0x2a2678: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a2678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a267c:
    // 0x2a267c: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x2a267cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2a2680:
    // 0x2a2680: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_2a2684:
    if (ctx->pc == 0x2A2684u) {
        ctx->pc = 0x2A2684u;
            // 0x2a2684: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x2A2688u;
        goto label_2a2688;
    }
    ctx->pc = 0x2A2680u;
    {
        const bool branch_taken_0x2a2680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2680u;
            // 0x2a2684: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2680) {
            ctx->pc = 0x2A2658u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a2658;
        }
    }
    ctx->pc = 0x2A2688u;
label_2a2688:
    // 0x2a2688: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a2688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2a268c:
    // 0x2a268c: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x2a268cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_2a2690:
    // 0x2a2690: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_2a2694:
    if (ctx->pc == 0x2A2694u) {
        ctx->pc = 0x2A2694u;
            // 0x2a2694: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A2698u;
        goto label_2a2698;
    }
    ctx->pc = 0x2A2690u;
    {
        const bool branch_taken_0x2a2690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2690u;
            // 0x2a2694: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2690) {
            ctx->pc = 0x2A262Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a262c;
        }
    }
    ctx->pc = 0x2A2698u;
label_2a2698:
    // 0x2a2698: 0xc050ebc  jal         func_143AF0
label_2a269c:
    if (ctx->pc == 0x2A269Cu) {
        ctx->pc = 0x2A26A0u;
        goto label_2a26a0;
    }
    ctx->pc = 0x2A2698u;
    SET_GPR_U32(ctx, 31, 0x2A26A0u);
    ctx->pc = 0x143AF0u;
    if (runtime->hasFunction(0x143AF0u)) {
        auto targetFn = runtime->lookupFunction(0x143AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A26A0u; }
        if (ctx->pc != 0x2A26A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkTextureRepeat__Fi_0x143af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A26A0u; }
        if (ctx->pc != 0x2A26A0u) { return; }
    }
    ctx->pc = 0x2A26A0u;
label_2a26a0:
    // 0x2a26a0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2a26a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2a26a4:
    // 0x2a26a4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a26a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2a26a8:
    // 0x2a26a8: 0x24a5e028  addiu       $a1, $a1, -0x1FD8
    ctx->pc = 0x2a26a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959144));
label_2a26ac:
    // 0x2a26ac: 0xc04b414  jal         func_12D050
label_2a26b0:
    if (ctx->pc == 0x2A26B0u) {
        ctx->pc = 0x2A26B0u;
            // 0x2a26b0: 0x2406006a  addiu       $a2, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->pc = 0x2A26B4u;
        goto label_2a26b4;
    }
    ctx->pc = 0x2A26ACu;
    SET_GPR_U32(ctx, 31, 0x2A26B4u);
    ctx->pc = 0x2A26B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A26ACu;
            // 0x2a26b0: 0x2406006a  addiu       $a2, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A26B4u; }
        if (ctx->pc != 0x2A26B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A26B4u; }
        if (ctx->pc != 0x2A26B4u) { return; }
    }
    ctx->pc = 0x2A26B4u;
label_2a26b4:
    // 0x2a26b4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2a26b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2a26b8:
    // 0x2a26b8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a26b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2a26bc:
    // 0x2a26bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a26bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a26c0:
    // 0x2a26c0: 0x24a5e1f0  addiu       $a1, $a1, -0x1E10
    ctx->pc = 0x2a26c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959600));
label_2a26c4:
    // 0x2a26c4: 0xc04b414  jal         func_12D050
label_2a26c8:
    if (ctx->pc == 0x2A26C8u) {
        ctx->pc = 0x2A26C8u;
            // 0x2a26c8: 0x2406006a  addiu       $a2, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->pc = 0x2A26CCu;
        goto label_2a26cc;
    }
    ctx->pc = 0x2A26C4u;
    SET_GPR_U32(ctx, 31, 0x2A26CCu);
    ctx->pc = 0x2A26C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A26C4u;
            // 0x2a26c8: 0x2406006a  addiu       $a2, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A26CCu; }
        if (ctx->pc != 0x2A26CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A26CCu; }
        if (ctx->pc != 0x2A26CCu) { return; }
    }
    ctx->pc = 0x2A26CCu;
label_2a26cc:
    // 0x2a26cc: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x2a26ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_2a26d0:
    // 0x2a26d0: 0x8c852e54  lw          $a1, 0x2E54($a0)
    ctx->pc = 0x2a26d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
label_2a26d4:
    // 0x2a26d4: 0xc0a0e30  jal         func_2838C0
label_2a26d8:
    if (ctx->pc == 0x2A26D8u) {
        ctx->pc = 0x2A26D8u;
            // 0x2a26d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A26DCu;
        goto label_2a26dc;
    }
    ctx->pc = 0x2A26D4u;
    SET_GPR_U32(ctx, 31, 0x2A26DCu);
    ctx->pc = 0x2A26D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A26D4u;
            // 0x2a26d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A26DCu; }
        if (ctx->pc != 0x2A26DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A26DCu; }
        if (ctx->pc != 0x2A26DCu) { return; }
    }
    ctx->pc = 0x2A26DCu;
label_2a26dc:
    // 0x2a26dc: 0x8f849944  lw          $a0, -0x66BC($gp)
    ctx->pc = 0x2a26dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940996)));
label_2a26e0:
    // 0x2a26e0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2a26e4:
    if (ctx->pc == 0x2A26E4u) {
        ctx->pc = 0x2A26E4u;
            // 0x2a26e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A26E8u;
        goto label_2a26e8;
    }
    ctx->pc = 0x2A26E0u;
    {
        const bool branch_taken_0x2a26e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A26E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A26E0u;
            // 0x2a26e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a26e0) {
            ctx->pc = 0x2A26FCu;
            goto label_2a26fc;
        }
    }
    ctx->pc = 0x2A26E8u;
label_2a26e8:
    // 0x2a26e8: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x2a26e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_2a26ec:
    // 0x2a26ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a26ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a26f0:
    // 0x2a26f0: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2a26f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2a26f4:
    // 0x2a26f4: 0x320f809  jalr        $t9
label_2a26f8:
    if (ctx->pc == 0x2A26F8u) {
        ctx->pc = 0x2A26F8u;
            // 0x2a26f8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A26FCu;
        goto label_2a26fc;
    }
    ctx->pc = 0x2A26F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A26FCu);
        ctx->pc = 0x2A26F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A26F4u;
            // 0x2a26f8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A26FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A26FCu; }
            if (ctx->pc != 0x2A26FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2A26FCu;
label_2a26fc:
    // 0x2a26fc: 0x8f849954  lw          $a0, -0x66AC($gp)
    ctx->pc = 0x2a26fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941012)));
label_2a2700:
    // 0x2a2700: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a2700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a2704:
    // 0x2a2704: 0x1083004f  beq         $a0, $v1, . + 4 + (0x4F << 2)
label_2a2708:
    if (ctx->pc == 0x2A2708u) {
        ctx->pc = 0x2A2708u;
            // 0x2a2708: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A270Cu;
        goto label_2a270c;
    }
    ctx->pc = 0x2A2704u;
    {
        const bool branch_taken_0x2a2704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A2708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2704u;
            // 0x2a2708: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2704) {
            ctx->pc = 0x2A2844u;
            goto label_2a2844;
        }
    }
    ctx->pc = 0x2A270Cu;
label_2a270c:
    // 0x2a270c: 0x1083003e  beq         $a0, $v1, . + 4 + (0x3E << 2)
label_2a2710:
    if (ctx->pc == 0x2A2710u) {
        ctx->pc = 0x2A2714u;
        goto label_2a2714;
    }
    ctx->pc = 0x2A270Cu;
    {
        const bool branch_taken_0x2a270c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a270c) {
            ctx->pc = 0x2A2808u;
            goto label_2a2808;
        }
    }
    ctx->pc = 0x2A2714u;
label_2a2714:
    // 0x2a2714: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2a2718:
    if (ctx->pc == 0x2A2718u) {
        ctx->pc = 0x2A271Cu;
        goto label_2a271c;
    }
    ctx->pc = 0x2A2714u;
    {
        const bool branch_taken_0x2a2714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2714) {
            ctx->pc = 0x2A2724u;
            goto label_2a2724;
        }
    }
    ctx->pc = 0x2A271Cu;
label_2a271c:
    // 0x2a271c: 0x1000007c  b           . + 4 + (0x7C << 2)
label_2a2720:
    if (ctx->pc == 0x2A2720u) {
        ctx->pc = 0x2A2720u;
            // 0x2a2720: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x2A2724u;
        goto label_2a2724;
    }
    ctx->pc = 0x2A271Cu;
    {
        const bool branch_taken_0x2a271c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A271Cu;
            // 0x2a2720: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a271c) {
            ctx->pc = 0x2A2910u;
            goto label_2a2910;
        }
    }
    ctx->pc = 0x2A2724u;
label_2a2724:
    // 0x2a2724: 0x3c02be80  lui         $v0, 0xBE80
    ctx->pc = 0x2a2724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48768 << 16));
label_2a2728:
    // 0x2a2728: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a2728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a272c:
    // 0x2a272c: 0xc04c688  jal         func_131A20
label_2a2730:
    if (ctx->pc == 0x2A2730u) {
        ctx->pc = 0x2A2730u;
            // 0x2a2730: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A2734u;
        goto label_2a2734;
    }
    ctx->pc = 0x2A272Cu;
    SET_GPR_U32(ctx, 31, 0x2A2734u);
    ctx->pc = 0x2A2730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A272Cu;
            // 0x2a2730: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A20u;
    if (runtime->hasFunction(0x131A20u)) {
        auto targetFn = runtime->lookupFunction(0x131A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2734u; }
        if (ctx->pc != 0x2A2734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddDistance__15mgCCameraFollowFf_0x131a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2734u; }
        if (ctx->pc != 0x2A2734u) { return; }
    }
    ctx->pc = 0x2A2734u;
label_2a2734:
    // 0x2a2734: 0xc04c684  jal         func_131A10
label_2a2738:
    if (ctx->pc == 0x2A2738u) {
        ctx->pc = 0x2A2738u;
            // 0x2a2738: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A273Cu;
        goto label_2a273c;
    }
    ctx->pc = 0x2A2734u;
    SET_GPR_U32(ctx, 31, 0x2A273Cu);
    ctx->pc = 0x2A2738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2734u;
            // 0x2a2738: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A10u;
    if (runtime->hasFunction(0x131A10u)) {
        auto targetFn = runtime->lookupFunction(0x131A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A273Cu; }
        if (ctx->pc != 0x2A273Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDistance__15mgCCameraFollowFv_0x131a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A273Cu; }
        if (ctx->pc != 0x2A273Cu) { return; }
    }
    ctx->pc = 0x2A273Cu;
label_2a273c:
    // 0x2a273c: 0x3c034489  lui         $v1, 0x4489
    ctx->pc = 0x2a273cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17545 << 16));
label_2a2740:
    // 0x2a2740: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2a2740u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2a2744:
    // 0x2a2744: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2a2744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_2a2748:
    // 0x2a2748: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a2748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a274c:
    // 0x2a274c: 0x0  nop
    ctx->pc = 0x2a274cu;
    // NOP
label_2a2750:
    // 0x2a2750: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2a2750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a2754:
    // 0x2a2754: 0x0  nop
    ctx->pc = 0x2a2754u;
    // NOP
label_2a2758:
    // 0x2a2758: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2a275c:
    if (ctx->pc == 0x2A275Cu) {
        ctx->pc = 0x2A275Cu;
            // 0x2a275c: 0x3c03447a  lui         $v1, 0x447A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
        ctx->pc = 0x2A2760u;
        goto label_2a2760;
    }
    ctx->pc = 0x2A2758u;
    {
        const bool branch_taken_0x2a2758 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A275Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2758u;
            // 0x2a275c: 0x3c03447a  lui         $v1, 0x447A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2758) {
            ctx->pc = 0x2A2778u;
            goto label_2a2778;
        }
    }
    ctx->pc = 0x2A2760u;
label_2a2760:
    // 0x2a2760: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x2a2760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_2a2764:
    // 0x2a2764: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a2764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_2a2768:
    // 0x2a2768: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a2768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a276c:
    // 0x2a276c: 0xc04c694  jal         func_131A50
label_2a2770:
    if (ctx->pc == 0x2A2770u) {
        ctx->pc = 0x2A2770u;
            // 0x2a2770: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A2774u;
        goto label_2a2774;
    }
    ctx->pc = 0x2A276Cu;
    SET_GPR_U32(ctx, 31, 0x2A2774u);
    ctx->pc = 0x2A2770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A276Cu;
            // 0x2a2770: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A50u;
    if (runtime->hasFunction(0x131A50u)) {
        auto targetFn = runtime->lookupFunction(0x131A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2774u; }
        if (ctx->pc != 0x2A2774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddHeight__15mgCCameraFollowFf_0x131a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2774u; }
        if (ctx->pc != 0x2A2774u) { return; }
    }
    ctx->pc = 0x2A2774u;
label_2a2774:
    // 0x2a2774: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x2a2774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_2a2778:
    // 0x2a2778: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a2778u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a277c:
    // 0x2a277c: 0x0  nop
    ctx->pc = 0x2a277cu;
    // NOP
label_2a2780:
    // 0x2a2780: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2a2780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a2784:
    // 0x2a2784: 0x0  nop
    ctx->pc = 0x2a2784u;
    // NOP
label_2a2788:
    // 0x2a2788: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2a278c:
    if (ctx->pc == 0x2A278Cu) {
        ctx->pc = 0x2A278Cu;
            // 0x2a278c: 0x3c034461  lui         $v1, 0x4461 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
        ctx->pc = 0x2A2790u;
        goto label_2a2790;
    }
    ctx->pc = 0x2A2788u;
    {
        const bool branch_taken_0x2a2788 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A278Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2788u;
            // 0x2a278c: 0x3c034461  lui         $v1, 0x4461 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2788) {
            ctx->pc = 0x2A27A8u;
            goto label_2a27a8;
        }
    }
    ctx->pc = 0x2A2790u;
label_2a2790:
    // 0x2a2790: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2a2790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_2a2794:
    // 0x2a2794: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2a2794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2a2798:
    // 0x2a2798: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a2798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a279c:
    // 0x2a279c: 0xc04c694  jal         func_131A50
label_2a27a0:
    if (ctx->pc == 0x2A27A0u) {
        ctx->pc = 0x2A27A0u;
            // 0x2a27a0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A27A4u;
        goto label_2a27a4;
    }
    ctx->pc = 0x2A279Cu;
    SET_GPR_U32(ctx, 31, 0x2A27A4u);
    ctx->pc = 0x2A27A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A279Cu;
            // 0x2a27a0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A50u;
    if (runtime->hasFunction(0x131A50u)) {
        auto targetFn = runtime->lookupFunction(0x131A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A27A4u; }
        if (ctx->pc != 0x2A27A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddHeight__15mgCCameraFollowFf_0x131a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A27A4u; }
        if (ctx->pc != 0x2A27A4u) { return; }
    }
    ctx->pc = 0x2A27A4u;
label_2a27a4:
    // 0x2a27a4: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x2a27a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
label_2a27a8:
    // 0x2a27a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a27a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a27ac:
    // 0x2a27ac: 0x0  nop
    ctx->pc = 0x2a27acu;
    // NOP
label_2a27b0:
    // 0x2a27b0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2a27b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a27b4:
    // 0x2a27b4: 0x0  nop
    ctx->pc = 0x2a27b4u;
    // NOP
label_2a27b8:
    // 0x2a27b8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2a27bc:
    if (ctx->pc == 0x2A27BCu) {
        ctx->pc = 0x2A27BCu;
            // 0x2a27bc: 0x3c034448  lui         $v1, 0x4448 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
        ctx->pc = 0x2A27C0u;
        goto label_2a27c0;
    }
    ctx->pc = 0x2A27B8u;
    {
        const bool branch_taken_0x2a27b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A27BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A27B8u;
            // 0x2a27bc: 0x3c034448  lui         $v1, 0x4448 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a27b8) {
            ctx->pc = 0x2A27D8u;
            goto label_2a27d8;
        }
    }
    ctx->pc = 0x2A27C0u;
label_2a27c0:
    // 0x2a27c0: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2a27c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_2a27c4:
    // 0x2a27c4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2a27c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2a27c8:
    // 0x2a27c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a27c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a27cc:
    // 0x2a27cc: 0xc04c694  jal         func_131A50
label_2a27d0:
    if (ctx->pc == 0x2A27D0u) {
        ctx->pc = 0x2A27D0u;
            // 0x2a27d0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A27D4u;
        goto label_2a27d4;
    }
    ctx->pc = 0x2A27CCu;
    SET_GPR_U32(ctx, 31, 0x2A27D4u);
    ctx->pc = 0x2A27D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A27CCu;
            // 0x2a27d0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A50u;
    if (runtime->hasFunction(0x131A50u)) {
        auto targetFn = runtime->lookupFunction(0x131A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A27D4u; }
        if (ctx->pc != 0x2A27D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddHeight__15mgCCameraFollowFf_0x131a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A27D4u; }
        if (ctx->pc != 0x2A27D4u) { return; }
    }
    ctx->pc = 0x2A27D4u;
label_2a27d4:
    // 0x2a27d4: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x2a27d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
label_2a27d8:
    // 0x2a27d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a27d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a27dc:
    // 0x2a27dc: 0x0  nop
    ctx->pc = 0x2a27dcu;
    // NOP
label_2a27e0:
    // 0x2a27e0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2a27e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a27e4:
    // 0x2a27e4: 0x0  nop
    ctx->pc = 0x2a27e4u;
    // NOP
label_2a27e8:
    // 0x2a27e8: 0x45000048  bc1f        . + 4 + (0x48 << 2)
label_2a27ec:
    if (ctx->pc == 0x2A27ECu) {
        ctx->pc = 0x2A27F0u;
        goto label_2a27f0;
    }
    ctx->pc = 0x2A27E8u;
    {
        const bool branch_taken_0x2a27e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a27e8) {
            ctx->pc = 0x2A290Cu;
            goto label_2a290c;
        }
    }
    ctx->pc = 0x2A27F0u;
label_2a27f0:
    // 0x2a27f0: 0x8f839954  lw          $v1, -0x66AC($gp)
    ctx->pc = 0x2a27f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941012)));
label_2a27f4:
    // 0x2a27f4: 0xaf809958  sw          $zero, -0x66A8($gp)
    ctx->pc = 0x2a27f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941016), GPR_U32(ctx, 0));
label_2a27f8:
    // 0x2a27f8: 0xaf80995c  sw          $zero, -0x66A4($gp)
    ctx->pc = 0x2a27f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941020), GPR_U32(ctx, 0));
label_2a27fc:
    // 0x2a27fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a27fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a2800:
    // 0x2a2800: 0x10000042  b           . + 4 + (0x42 << 2)
label_2a2804:
    if (ctx->pc == 0x2A2804u) {
        ctx->pc = 0x2A2804u;
            // 0x2a2804: 0xaf839954  sw          $v1, -0x66AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941012), GPR_U32(ctx, 3));
        ctx->pc = 0x2A2808u;
        goto label_2a2808;
    }
    ctx->pc = 0x2A2800u;
    {
        const bool branch_taken_0x2a2800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2800u;
            // 0x2a2804: 0xaf839954  sw          $v1, -0x66AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941012), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2800) {
            ctx->pc = 0x2A290Cu;
            goto label_2a290c;
        }
    }
    ctx->pc = 0x2A2808u;
label_2a2808:
    // 0x2a2808: 0x8f839958  lw          $v1, -0x66A8($gp)
    ctx->pc = 0x2a2808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941016)));
label_2a280c:
    // 0x2a280c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a280cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a2810:
    // 0x2a2810: 0xaf839958  sw          $v1, -0x66A8($gp)
    ctx->pc = 0x2a2810u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941016), GPR_U32(ctx, 3));
label_2a2814:
    // 0x2a2814: 0x8f839958  lw          $v1, -0x66A8($gp)
    ctx->pc = 0x2a2814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941016)));
label_2a2818:
    // 0x2a2818: 0x2c61012d  sltiu       $at, $v1, 0x12D
    ctx->pc = 0x2a2818u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)301) ? 1 : 0);
label_2a281c:
    // 0x2a281c: 0x1420003b  bnez        $at, . + 4 + (0x3B << 2)
label_2a2820:
    if (ctx->pc == 0x2A2820u) {
        ctx->pc = 0x2A2820u;
            // 0x2a2820: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A2824u;
        goto label_2a2824;
    }
    ctx->pc = 0x2A281Cu;
    {
        const bool branch_taken_0x2a281c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A281Cu;
            // 0x2a2820: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a281c) {
            ctx->pc = 0x2A290Cu;
            goto label_2a290c;
        }
    }
    ctx->pc = 0x2A2824u;
label_2a2824:
    // 0x2a2824: 0xc04c66c  jal         func_1319B0
label_2a2828:
    if (ctx->pc == 0x2A2828u) {
        ctx->pc = 0x2A282Cu;
        goto label_2a282c;
    }
    ctx->pc = 0x2A2824u;
    SET_GPR_U32(ctx, 31, 0x2A282Cu);
    ctx->pc = 0x1319B0u;
    if (runtime->hasFunction(0x1319B0u)) {
        auto targetFn = runtime->lookupFunction(0x1319B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A282Cu; }
        if (ctx->pc != 0x2A282Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOff__15mgCCameraFollowFv_0x1319b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A282Cu; }
        if (ctx->pc != 0x2A282Cu) { return; }
    }
    ctx->pc = 0x2A282Cu;
label_2a282c:
    // 0x2a282c: 0x8f839954  lw          $v1, -0x66AC($gp)
    ctx->pc = 0x2a282cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941012)));
label_2a2830:
    // 0x2a2830: 0xaf809958  sw          $zero, -0x66A8($gp)
    ctx->pc = 0x2a2830u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941016), GPR_U32(ctx, 0));
label_2a2834:
    // 0x2a2834: 0xaf80995c  sw          $zero, -0x66A4($gp)
    ctx->pc = 0x2a2834u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941020), GPR_U32(ctx, 0));
label_2a2838:
    // 0x2a2838: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a2838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a283c:
    // 0x2a283c: 0x10000033  b           . + 4 + (0x33 << 2)
label_2a2840:
    if (ctx->pc == 0x2A2840u) {
        ctx->pc = 0x2A2840u;
            // 0x2a2840: 0xaf839954  sw          $v1, -0x66AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941012), GPR_U32(ctx, 3));
        ctx->pc = 0x2A2844u;
        goto label_2a2844;
    }
    ctx->pc = 0x2A283Cu;
    {
        const bool branch_taken_0x2a283c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A283Cu;
            // 0x2a2840: 0xaf839954  sw          $v1, -0x66AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941012), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a283c) {
            ctx->pc = 0x2A290Cu;
            goto label_2a290c;
        }
    }
    ctx->pc = 0x2A2844u;
label_2a2844:
    // 0x2a2844: 0xc04c684  jal         func_131A10
label_2a2848:
    if (ctx->pc == 0x2A2848u) {
        ctx->pc = 0x2A2848u;
            // 0x2a2848: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A284Cu;
        goto label_2a284c;
    }
    ctx->pc = 0x2A2844u;
    SET_GPR_U32(ctx, 31, 0x2A284Cu);
    ctx->pc = 0x2A2848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2844u;
            // 0x2a2848: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A10u;
    if (runtime->hasFunction(0x131A10u)) {
        auto targetFn = runtime->lookupFunction(0x131A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A284Cu; }
        if (ctx->pc != 0x2A284Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDistance__15mgCCameraFollowFv_0x131a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A284Cu; }
        if (ctx->pc != 0x2A284Cu) { return; }
    }
    ctx->pc = 0x2A284Cu;
label_2a284c:
    // 0x2a284c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2a284cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2a2850:
    // 0x2a2850: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2a2850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a2854:
    // 0x2a2854: 0xc04c574  jal         func_1315D0
label_2a2858:
    if (ctx->pc == 0x2A2858u) {
        ctx->pc = 0x2A2858u;
            // 0x2a2858: 0x27a50810  addiu       $a1, $sp, 0x810 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2064));
        ctx->pc = 0x2A285Cu;
        goto label_2a285c;
    }
    ctx->pc = 0x2A2854u;
    SET_GPR_U32(ctx, 31, 0x2A285Cu);
    ctx->pc = 0x2A2858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2854u;
            // 0x2a2858: 0x27a50810  addiu       $a1, $sp, 0x810 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A285Cu; }
        if (ctx->pc != 0x2A285Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A285Cu; }
        if (ctx->pc != 0x2A285Cu) { return; }
    }
    ctx->pc = 0x2A285Cu;
label_2a285c:
    // 0x2a285c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2a285cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a2860:
    // 0x2a2860: 0xc04c578  jal         func_1315E0
label_2a2864:
    if (ctx->pc == 0x2A2864u) {
        ctx->pc = 0x2A2864u;
            // 0x2a2864: 0x27a50820  addiu       $a1, $sp, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2080));
        ctx->pc = 0x2A2868u;
        goto label_2a2868;
    }
    ctx->pc = 0x2A2860u;
    SET_GPR_U32(ctx, 31, 0x2A2868u);
    ctx->pc = 0x2A2864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2860u;
            // 0x2a2864: 0x27a50820  addiu       $a1, $sp, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315E0u;
    if (runtime->hasFunction(0x1315E0u)) {
        auto targetFn = runtime->lookupFunction(0x1315E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2868u; }
        if (ctx->pc != 0x2A2868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRef__9mgCCameraFPf_0x1315e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2868u; }
        if (ctx->pc != 0x2A2868u) { return; }
    }
    ctx->pc = 0x2A2868u;
label_2a2868:
    // 0x2a2868: 0xc04c374  jal         func_130DD0
label_2a286c:
    if (ctx->pc == 0x2A286Cu) {
        ctx->pc = 0x2A286Cu;
            // 0x2a286c: 0xc78c995c  lwc1        $f12, -0x66A4($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2A2870u;
        goto label_2a2870;
    }
    ctx->pc = 0x2A2868u;
    SET_GPR_U32(ctx, 31, 0x2A2870u);
    ctx->pc = 0x2A286Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2868u;
            // 0x2a286c: 0xc78c995c  lwc1        $f12, -0x66A4($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2870u; }
        if (ctx->pc != 0x2A2870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2870u; }
        if (ctx->pc != 0x2A2870u) { return; }
    }
    ctx->pc = 0x2A2870u;
label_2a2870:
    // 0x2a2870: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2a2870u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2a2874:
    // 0x2a2874: 0xc047a42  jal         func_11E908
label_2a2878:
    if (ctx->pc == 0x2A2878u) {
        ctx->pc = 0x2A2878u;
            // 0x2a2878: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x2A287Cu;
        goto label_2a287c;
    }
    ctx->pc = 0x2A2874u;
    SET_GPR_U32(ctx, 31, 0x2A287Cu);
    ctx->pc = 0x2A2878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2874u;
            // 0x2a2878: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A287Cu; }
        if (ctx->pc != 0x2A287Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A287Cu; }
        if (ctx->pc != 0x2A287Cu) { return; }
    }
    ctx->pc = 0x2A287Cu;
label_2a287c:
    // 0x2a287c: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x2a287cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2a2880:
    // 0x2a2880: 0xc7a00810  lwc1        $f0, 0x810($sp)
    ctx->pc = 0x2a2880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a2884:
    // 0x2a2884: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2a2884u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2a2888:
    // 0x2a2888: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a2888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a288c:
    // 0x2a288c: 0xc047964  jal         func_11E590
label_2a2890:
    if (ctx->pc == 0x2A2890u) {
        ctx->pc = 0x2A2890u;
            // 0x2a2890: 0xe7a00820  swc1        $f0, 0x820($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2080), bits); }
        ctx->pc = 0x2A2894u;
        goto label_2a2894;
    }
    ctx->pc = 0x2A288Cu;
    SET_GPR_U32(ctx, 31, 0x2A2894u);
    ctx->pc = 0x2A2890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A288Cu;
            // 0x2a2890: 0xe7a00820  swc1        $f0, 0x820($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2080), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2894u; }
        if (ctx->pc != 0x2A2894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2894u; }
        if (ctx->pc != 0x2A2894u) { return; }
    }
    ctx->pc = 0x2A2894u;
label_2a2894:
    // 0x2a2894: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x2a2894u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2a2898:
    // 0x2a2898: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2a2898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a289c:
    // 0x2a289c: 0xc7a00818  lwc1        $f0, 0x818($sp)
    ctx->pc = 0x2a289cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a28a0:
    // 0x2a28a0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2a28a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2a28a4:
    // 0x2a28a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a28a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2a28a8:
    // 0x2a28a8: 0xc04c670  jal         func_1319C0
label_2a28ac:
    if (ctx->pc == 0x2A28ACu) {
        ctx->pc = 0x2A28ACu;
            // 0x2a28ac: 0xe7a00828  swc1        $f0, 0x828($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2088), bits); }
        ctx->pc = 0x2A28B0u;
        goto label_2a28b0;
    }
    ctx->pc = 0x2A28A8u;
    SET_GPR_U32(ctx, 31, 0x2A28B0u);
    ctx->pc = 0x2A28ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A28A8u;
            // 0x2a28ac: 0xe7a00828  swc1        $f0, 0x828($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2088), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319C0u;
    if (runtime->hasFunction(0x1319C0u)) {
        auto targetFn = runtime->lookupFunction(0x1319C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A28B0u; }
        if (ctx->pc != 0x2A28B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAngle__15mgCCameraFollowFf_0x1319c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A28B0u; }
        if (ctx->pc != 0x2A28B0u) { return; }
    }
    ctx->pc = 0x2A28B0u;
label_2a28b0:
    // 0x2a28b0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2a28b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a28b4:
    // 0x2a28b4: 0xc04c518  jal         func_131460
label_2a28b8:
    if (ctx->pc == 0x2A28B8u) {
        ctx->pc = 0x2A28B8u;
            // 0x2a28b8: 0x27a50820  addiu       $a1, $sp, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2080));
        ctx->pc = 0x2A28BCu;
        goto label_2a28bc;
    }
    ctx->pc = 0x2A28B4u;
    SET_GPR_U32(ctx, 31, 0x2A28BCu);
    ctx->pc = 0x2A28B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A28B4u;
            // 0x2a28b8: 0x27a50820  addiu       $a1, $sp, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A28BCu; }
        if (ctx->pc != 0x2A28BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFPf_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A28BCu; }
        if (ctx->pc != 0x2A28BCu) { return; }
    }
    ctx->pc = 0x2A28BCu;
label_2a28bc:
    // 0x2a28bc: 0xc782995c  lwc1        $f2, -0x66A4($gp)
    ctx->pc = 0x2a28bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a28c0:
    // 0x2a28c0: 0x3c033a64  lui         $v1, 0x3A64
    ctx->pc = 0x2a28c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14948 << 16));
label_2a28c4:
    // 0x2a28c4: 0x3464c389  ori         $a0, $v1, 0xC389
    ctx->pc = 0x2a28c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)50057);
label_2a28c8:
    // 0x2a28c8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a28c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a28cc:
    // 0x2a28cc: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x2a28ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_2a28d0:
    // 0x2a28d0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2a28d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_2a28d4:
    // 0x2a28d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a28d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a28d8:
    // 0x2a28d8: 0x0  nop
    ctx->pc = 0x2a28d8u;
    // NOP
label_2a28dc:
    // 0x2a28dc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2a28dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2a28e0:
    // 0x2a28e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a28e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a28e4:
    // 0x2a28e4: 0x0  nop
    ctx->pc = 0x2a28e4u;
    // NOP
label_2a28e8:
    // 0x2a28e8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_2a28ec:
    if (ctx->pc == 0x2A28ECu) {
        ctx->pc = 0x2A28ECu;
            // 0x2a28ec: 0xe781995c  swc1        $f1, -0x66A4($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294941020), bits); }
        ctx->pc = 0x2A28F0u;
        goto label_2a28f0;
    }
    ctx->pc = 0x2A28E8u;
    {
        const bool branch_taken_0x2a28e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A28ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A28E8u;
            // 0x2a28ec: 0xe781995c  swc1        $f1, -0x66A4($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294941020), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a28e8) {
            ctx->pc = 0x2A290Cu;
            goto label_2a290c;
        }
    }
    ctx->pc = 0x2A28F0u;
label_2a28f0:
    // 0x2a28f0: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a28f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_2a28f4:
    // 0x2a28f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a28f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a28f8:
    // 0x2a28f8: 0xaf809958  sw          $zero, -0x66A8($gp)
    ctx->pc = 0x2a28f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941016), GPR_U32(ctx, 0));
label_2a28fc:
    // 0x2a28fc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2a28fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a2900:
    // 0x2a2900: 0xaf839954  sw          $v1, -0x66AC($gp)
    ctx->pc = 0x2a2900u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941012), GPR_U32(ctx, 3));
label_2a2904:
    // 0x2a2904: 0xc04c668  jal         func_1319A0
label_2a2908:
    if (ctx->pc == 0x2A2908u) {
        ctx->pc = 0x2A2908u;
            // 0x2a2908: 0xac402e54  sw          $zero, 0x2E54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11860), GPR_U32(ctx, 0));
        ctx->pc = 0x2A290Cu;
        goto label_2a290c;
    }
    ctx->pc = 0x2A2904u;
    SET_GPR_U32(ctx, 31, 0x2A290Cu);
    ctx->pc = 0x2A2908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2904u;
            // 0x2a2908: 0xac402e54  sw          $zero, 0x2E54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11860), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319A0u;
    if (runtime->hasFunction(0x1319A0u)) {
        auto targetFn = runtime->lookupFunction(0x1319A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A290Cu; }
        if (ctx->pc != 0x2A290Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOn__15mgCCameraFollowFv_0x1319a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A290Cu; }
        if (ctx->pc != 0x2A290Cu) { return; }
    }
    ctx->pc = 0x2A290Cu;
label_2a290c:
    // 0x2a290c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2a290cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2a2910:
    // 0x2a2910: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2a2910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2a2914:
    // 0x2a2914: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2a2914u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2a2918:
    // 0x2a2918: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2a2918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a291c:
    // 0x2a291c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2a291cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a2920:
    // 0x2a2920: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2a2920u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a2924:
    // 0x2a2924: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2a2924u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a2928:
    // 0x2a2928: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2a2928u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2a292c:
    // 0x2a292c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a292cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a2930:
    // 0x2a2930: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a2930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a2934:
    // 0x2a2934: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a2934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a2938:
    // 0x2a2938: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a2938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a293c:
    // 0x2a293c: 0x3e00008  jr          $ra
label_2a2940:
    if (ctx->pc == 0x2A2940u) {
        ctx->pc = 0x2A2940u;
            // 0x2a2940: 0x27bd0830  addiu       $sp, $sp, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
        ctx->pc = 0x2A2944u;
        goto label_fallthrough_0x2a293c;
    }
    ctx->pc = 0x2A293Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A293Cu;
            // 0x2a2940: 0x27bd0830  addiu       $sp, $sp, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2a293c:
    ctx->pc = 0x2A2944u;
}
