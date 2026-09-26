#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: KeyStep__13CMenuItemInfoFv
// Address: 0x24e3b0 - 0x24e978
void KeyStep__13CMenuItemInfoFv_0x24e3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyStep__13CMenuItemInfoFv_0x24e3b0");
#endif

    switch (ctx->pc) {
        case 0x24e3b0u: goto label_24e3b0;
        case 0x24e3b4u: goto label_24e3b4;
        case 0x24e3b8u: goto label_24e3b8;
        case 0x24e3bcu: goto label_24e3bc;
        case 0x24e3c0u: goto label_24e3c0;
        case 0x24e3c4u: goto label_24e3c4;
        case 0x24e3c8u: goto label_24e3c8;
        case 0x24e3ccu: goto label_24e3cc;
        case 0x24e3d0u: goto label_24e3d0;
        case 0x24e3d4u: goto label_24e3d4;
        case 0x24e3d8u: goto label_24e3d8;
        case 0x24e3dcu: goto label_24e3dc;
        case 0x24e3e0u: goto label_24e3e0;
        case 0x24e3e4u: goto label_24e3e4;
        case 0x24e3e8u: goto label_24e3e8;
        case 0x24e3ecu: goto label_24e3ec;
        case 0x24e3f0u: goto label_24e3f0;
        case 0x24e3f4u: goto label_24e3f4;
        case 0x24e3f8u: goto label_24e3f8;
        case 0x24e3fcu: goto label_24e3fc;
        case 0x24e400u: goto label_24e400;
        case 0x24e404u: goto label_24e404;
        case 0x24e408u: goto label_24e408;
        case 0x24e40cu: goto label_24e40c;
        case 0x24e410u: goto label_24e410;
        case 0x24e414u: goto label_24e414;
        case 0x24e418u: goto label_24e418;
        case 0x24e41cu: goto label_24e41c;
        case 0x24e420u: goto label_24e420;
        case 0x24e424u: goto label_24e424;
        case 0x24e428u: goto label_24e428;
        case 0x24e42cu: goto label_24e42c;
        case 0x24e430u: goto label_24e430;
        case 0x24e434u: goto label_24e434;
        case 0x24e438u: goto label_24e438;
        case 0x24e43cu: goto label_24e43c;
        case 0x24e440u: goto label_24e440;
        case 0x24e444u: goto label_24e444;
        case 0x24e448u: goto label_24e448;
        case 0x24e44cu: goto label_24e44c;
        case 0x24e450u: goto label_24e450;
        case 0x24e454u: goto label_24e454;
        case 0x24e458u: goto label_24e458;
        case 0x24e45cu: goto label_24e45c;
        case 0x24e460u: goto label_24e460;
        case 0x24e464u: goto label_24e464;
        case 0x24e468u: goto label_24e468;
        case 0x24e46cu: goto label_24e46c;
        case 0x24e470u: goto label_24e470;
        case 0x24e474u: goto label_24e474;
        case 0x24e478u: goto label_24e478;
        case 0x24e47cu: goto label_24e47c;
        case 0x24e480u: goto label_24e480;
        case 0x24e484u: goto label_24e484;
        case 0x24e488u: goto label_24e488;
        case 0x24e48cu: goto label_24e48c;
        case 0x24e490u: goto label_24e490;
        case 0x24e494u: goto label_24e494;
        case 0x24e498u: goto label_24e498;
        case 0x24e49cu: goto label_24e49c;
        case 0x24e4a0u: goto label_24e4a0;
        case 0x24e4a4u: goto label_24e4a4;
        case 0x24e4a8u: goto label_24e4a8;
        case 0x24e4acu: goto label_24e4ac;
        case 0x24e4b0u: goto label_24e4b0;
        case 0x24e4b4u: goto label_24e4b4;
        case 0x24e4b8u: goto label_24e4b8;
        case 0x24e4bcu: goto label_24e4bc;
        case 0x24e4c0u: goto label_24e4c0;
        case 0x24e4c4u: goto label_24e4c4;
        case 0x24e4c8u: goto label_24e4c8;
        case 0x24e4ccu: goto label_24e4cc;
        case 0x24e4d0u: goto label_24e4d0;
        case 0x24e4d4u: goto label_24e4d4;
        case 0x24e4d8u: goto label_24e4d8;
        case 0x24e4dcu: goto label_24e4dc;
        case 0x24e4e0u: goto label_24e4e0;
        case 0x24e4e4u: goto label_24e4e4;
        case 0x24e4e8u: goto label_24e4e8;
        case 0x24e4ecu: goto label_24e4ec;
        case 0x24e4f0u: goto label_24e4f0;
        case 0x24e4f4u: goto label_24e4f4;
        case 0x24e4f8u: goto label_24e4f8;
        case 0x24e4fcu: goto label_24e4fc;
        case 0x24e500u: goto label_24e500;
        case 0x24e504u: goto label_24e504;
        case 0x24e508u: goto label_24e508;
        case 0x24e50cu: goto label_24e50c;
        case 0x24e510u: goto label_24e510;
        case 0x24e514u: goto label_24e514;
        case 0x24e518u: goto label_24e518;
        case 0x24e51cu: goto label_24e51c;
        case 0x24e520u: goto label_24e520;
        case 0x24e524u: goto label_24e524;
        case 0x24e528u: goto label_24e528;
        case 0x24e52cu: goto label_24e52c;
        case 0x24e530u: goto label_24e530;
        case 0x24e534u: goto label_24e534;
        case 0x24e538u: goto label_24e538;
        case 0x24e53cu: goto label_24e53c;
        case 0x24e540u: goto label_24e540;
        case 0x24e544u: goto label_24e544;
        case 0x24e548u: goto label_24e548;
        case 0x24e54cu: goto label_24e54c;
        case 0x24e550u: goto label_24e550;
        case 0x24e554u: goto label_24e554;
        case 0x24e558u: goto label_24e558;
        case 0x24e55cu: goto label_24e55c;
        case 0x24e560u: goto label_24e560;
        case 0x24e564u: goto label_24e564;
        case 0x24e568u: goto label_24e568;
        case 0x24e56cu: goto label_24e56c;
        case 0x24e570u: goto label_24e570;
        case 0x24e574u: goto label_24e574;
        case 0x24e578u: goto label_24e578;
        case 0x24e57cu: goto label_24e57c;
        case 0x24e580u: goto label_24e580;
        case 0x24e584u: goto label_24e584;
        case 0x24e588u: goto label_24e588;
        case 0x24e58cu: goto label_24e58c;
        case 0x24e590u: goto label_24e590;
        case 0x24e594u: goto label_24e594;
        case 0x24e598u: goto label_24e598;
        case 0x24e59cu: goto label_24e59c;
        case 0x24e5a0u: goto label_24e5a0;
        case 0x24e5a4u: goto label_24e5a4;
        case 0x24e5a8u: goto label_24e5a8;
        case 0x24e5acu: goto label_24e5ac;
        case 0x24e5b0u: goto label_24e5b0;
        case 0x24e5b4u: goto label_24e5b4;
        case 0x24e5b8u: goto label_24e5b8;
        case 0x24e5bcu: goto label_24e5bc;
        case 0x24e5c0u: goto label_24e5c0;
        case 0x24e5c4u: goto label_24e5c4;
        case 0x24e5c8u: goto label_24e5c8;
        case 0x24e5ccu: goto label_24e5cc;
        case 0x24e5d0u: goto label_24e5d0;
        case 0x24e5d4u: goto label_24e5d4;
        case 0x24e5d8u: goto label_24e5d8;
        case 0x24e5dcu: goto label_24e5dc;
        case 0x24e5e0u: goto label_24e5e0;
        case 0x24e5e4u: goto label_24e5e4;
        case 0x24e5e8u: goto label_24e5e8;
        case 0x24e5ecu: goto label_24e5ec;
        case 0x24e5f0u: goto label_24e5f0;
        case 0x24e5f4u: goto label_24e5f4;
        case 0x24e5f8u: goto label_24e5f8;
        case 0x24e5fcu: goto label_24e5fc;
        case 0x24e600u: goto label_24e600;
        case 0x24e604u: goto label_24e604;
        case 0x24e608u: goto label_24e608;
        case 0x24e60cu: goto label_24e60c;
        case 0x24e610u: goto label_24e610;
        case 0x24e614u: goto label_24e614;
        case 0x24e618u: goto label_24e618;
        case 0x24e61cu: goto label_24e61c;
        case 0x24e620u: goto label_24e620;
        case 0x24e624u: goto label_24e624;
        case 0x24e628u: goto label_24e628;
        case 0x24e62cu: goto label_24e62c;
        case 0x24e630u: goto label_24e630;
        case 0x24e634u: goto label_24e634;
        case 0x24e638u: goto label_24e638;
        case 0x24e63cu: goto label_24e63c;
        case 0x24e640u: goto label_24e640;
        case 0x24e644u: goto label_24e644;
        case 0x24e648u: goto label_24e648;
        case 0x24e64cu: goto label_24e64c;
        case 0x24e650u: goto label_24e650;
        case 0x24e654u: goto label_24e654;
        case 0x24e658u: goto label_24e658;
        case 0x24e65cu: goto label_24e65c;
        case 0x24e660u: goto label_24e660;
        case 0x24e664u: goto label_24e664;
        case 0x24e668u: goto label_24e668;
        case 0x24e66cu: goto label_24e66c;
        case 0x24e670u: goto label_24e670;
        case 0x24e674u: goto label_24e674;
        case 0x24e678u: goto label_24e678;
        case 0x24e67cu: goto label_24e67c;
        case 0x24e680u: goto label_24e680;
        case 0x24e684u: goto label_24e684;
        case 0x24e688u: goto label_24e688;
        case 0x24e68cu: goto label_24e68c;
        case 0x24e690u: goto label_24e690;
        case 0x24e694u: goto label_24e694;
        case 0x24e698u: goto label_24e698;
        case 0x24e69cu: goto label_24e69c;
        case 0x24e6a0u: goto label_24e6a0;
        case 0x24e6a4u: goto label_24e6a4;
        case 0x24e6a8u: goto label_24e6a8;
        case 0x24e6acu: goto label_24e6ac;
        case 0x24e6b0u: goto label_24e6b0;
        case 0x24e6b4u: goto label_24e6b4;
        case 0x24e6b8u: goto label_24e6b8;
        case 0x24e6bcu: goto label_24e6bc;
        case 0x24e6c0u: goto label_24e6c0;
        case 0x24e6c4u: goto label_24e6c4;
        case 0x24e6c8u: goto label_24e6c8;
        case 0x24e6ccu: goto label_24e6cc;
        case 0x24e6d0u: goto label_24e6d0;
        case 0x24e6d4u: goto label_24e6d4;
        case 0x24e6d8u: goto label_24e6d8;
        case 0x24e6dcu: goto label_24e6dc;
        case 0x24e6e0u: goto label_24e6e0;
        case 0x24e6e4u: goto label_24e6e4;
        case 0x24e6e8u: goto label_24e6e8;
        case 0x24e6ecu: goto label_24e6ec;
        case 0x24e6f0u: goto label_24e6f0;
        case 0x24e6f4u: goto label_24e6f4;
        case 0x24e6f8u: goto label_24e6f8;
        case 0x24e6fcu: goto label_24e6fc;
        case 0x24e700u: goto label_24e700;
        case 0x24e704u: goto label_24e704;
        case 0x24e708u: goto label_24e708;
        case 0x24e70cu: goto label_24e70c;
        case 0x24e710u: goto label_24e710;
        case 0x24e714u: goto label_24e714;
        case 0x24e718u: goto label_24e718;
        case 0x24e71cu: goto label_24e71c;
        case 0x24e720u: goto label_24e720;
        case 0x24e724u: goto label_24e724;
        case 0x24e728u: goto label_24e728;
        case 0x24e72cu: goto label_24e72c;
        case 0x24e730u: goto label_24e730;
        case 0x24e734u: goto label_24e734;
        case 0x24e738u: goto label_24e738;
        case 0x24e73cu: goto label_24e73c;
        case 0x24e740u: goto label_24e740;
        case 0x24e744u: goto label_24e744;
        case 0x24e748u: goto label_24e748;
        case 0x24e74cu: goto label_24e74c;
        case 0x24e750u: goto label_24e750;
        case 0x24e754u: goto label_24e754;
        case 0x24e758u: goto label_24e758;
        case 0x24e75cu: goto label_24e75c;
        case 0x24e760u: goto label_24e760;
        case 0x24e764u: goto label_24e764;
        case 0x24e768u: goto label_24e768;
        case 0x24e76cu: goto label_24e76c;
        case 0x24e770u: goto label_24e770;
        case 0x24e774u: goto label_24e774;
        case 0x24e778u: goto label_24e778;
        case 0x24e77cu: goto label_24e77c;
        case 0x24e780u: goto label_24e780;
        case 0x24e784u: goto label_24e784;
        case 0x24e788u: goto label_24e788;
        case 0x24e78cu: goto label_24e78c;
        case 0x24e790u: goto label_24e790;
        case 0x24e794u: goto label_24e794;
        case 0x24e798u: goto label_24e798;
        case 0x24e79cu: goto label_24e79c;
        case 0x24e7a0u: goto label_24e7a0;
        case 0x24e7a4u: goto label_24e7a4;
        case 0x24e7a8u: goto label_24e7a8;
        case 0x24e7acu: goto label_24e7ac;
        case 0x24e7b0u: goto label_24e7b0;
        case 0x24e7b4u: goto label_24e7b4;
        case 0x24e7b8u: goto label_24e7b8;
        case 0x24e7bcu: goto label_24e7bc;
        case 0x24e7c0u: goto label_24e7c0;
        case 0x24e7c4u: goto label_24e7c4;
        case 0x24e7c8u: goto label_24e7c8;
        case 0x24e7ccu: goto label_24e7cc;
        case 0x24e7d0u: goto label_24e7d0;
        case 0x24e7d4u: goto label_24e7d4;
        case 0x24e7d8u: goto label_24e7d8;
        case 0x24e7dcu: goto label_24e7dc;
        case 0x24e7e0u: goto label_24e7e0;
        case 0x24e7e4u: goto label_24e7e4;
        case 0x24e7e8u: goto label_24e7e8;
        case 0x24e7ecu: goto label_24e7ec;
        case 0x24e7f0u: goto label_24e7f0;
        case 0x24e7f4u: goto label_24e7f4;
        case 0x24e7f8u: goto label_24e7f8;
        case 0x24e7fcu: goto label_24e7fc;
        case 0x24e800u: goto label_24e800;
        case 0x24e804u: goto label_24e804;
        case 0x24e808u: goto label_24e808;
        case 0x24e80cu: goto label_24e80c;
        case 0x24e810u: goto label_24e810;
        case 0x24e814u: goto label_24e814;
        case 0x24e818u: goto label_24e818;
        case 0x24e81cu: goto label_24e81c;
        case 0x24e820u: goto label_24e820;
        case 0x24e824u: goto label_24e824;
        case 0x24e828u: goto label_24e828;
        case 0x24e82cu: goto label_24e82c;
        case 0x24e830u: goto label_24e830;
        case 0x24e834u: goto label_24e834;
        case 0x24e838u: goto label_24e838;
        case 0x24e83cu: goto label_24e83c;
        case 0x24e840u: goto label_24e840;
        case 0x24e844u: goto label_24e844;
        case 0x24e848u: goto label_24e848;
        case 0x24e84cu: goto label_24e84c;
        case 0x24e850u: goto label_24e850;
        case 0x24e854u: goto label_24e854;
        case 0x24e858u: goto label_24e858;
        case 0x24e85cu: goto label_24e85c;
        case 0x24e860u: goto label_24e860;
        case 0x24e864u: goto label_24e864;
        case 0x24e868u: goto label_24e868;
        case 0x24e86cu: goto label_24e86c;
        case 0x24e870u: goto label_24e870;
        case 0x24e874u: goto label_24e874;
        case 0x24e878u: goto label_24e878;
        case 0x24e87cu: goto label_24e87c;
        case 0x24e880u: goto label_24e880;
        case 0x24e884u: goto label_24e884;
        case 0x24e888u: goto label_24e888;
        case 0x24e88cu: goto label_24e88c;
        case 0x24e890u: goto label_24e890;
        case 0x24e894u: goto label_24e894;
        case 0x24e898u: goto label_24e898;
        case 0x24e89cu: goto label_24e89c;
        case 0x24e8a0u: goto label_24e8a0;
        case 0x24e8a4u: goto label_24e8a4;
        case 0x24e8a8u: goto label_24e8a8;
        case 0x24e8acu: goto label_24e8ac;
        case 0x24e8b0u: goto label_24e8b0;
        case 0x24e8b4u: goto label_24e8b4;
        case 0x24e8b8u: goto label_24e8b8;
        case 0x24e8bcu: goto label_24e8bc;
        case 0x24e8c0u: goto label_24e8c0;
        case 0x24e8c4u: goto label_24e8c4;
        case 0x24e8c8u: goto label_24e8c8;
        case 0x24e8ccu: goto label_24e8cc;
        case 0x24e8d0u: goto label_24e8d0;
        case 0x24e8d4u: goto label_24e8d4;
        case 0x24e8d8u: goto label_24e8d8;
        case 0x24e8dcu: goto label_24e8dc;
        case 0x24e8e0u: goto label_24e8e0;
        case 0x24e8e4u: goto label_24e8e4;
        case 0x24e8e8u: goto label_24e8e8;
        case 0x24e8ecu: goto label_24e8ec;
        case 0x24e8f0u: goto label_24e8f0;
        case 0x24e8f4u: goto label_24e8f4;
        case 0x24e8f8u: goto label_24e8f8;
        case 0x24e8fcu: goto label_24e8fc;
        case 0x24e900u: goto label_24e900;
        case 0x24e904u: goto label_24e904;
        case 0x24e908u: goto label_24e908;
        case 0x24e90cu: goto label_24e90c;
        case 0x24e910u: goto label_24e910;
        case 0x24e914u: goto label_24e914;
        case 0x24e918u: goto label_24e918;
        case 0x24e91cu: goto label_24e91c;
        case 0x24e920u: goto label_24e920;
        case 0x24e924u: goto label_24e924;
        case 0x24e928u: goto label_24e928;
        case 0x24e92cu: goto label_24e92c;
        case 0x24e930u: goto label_24e930;
        case 0x24e934u: goto label_24e934;
        case 0x24e938u: goto label_24e938;
        case 0x24e93cu: goto label_24e93c;
        case 0x24e940u: goto label_24e940;
        case 0x24e944u: goto label_24e944;
        case 0x24e948u: goto label_24e948;
        case 0x24e94cu: goto label_24e94c;
        case 0x24e950u: goto label_24e950;
        case 0x24e954u: goto label_24e954;
        case 0x24e958u: goto label_24e958;
        case 0x24e95cu: goto label_24e95c;
        case 0x24e960u: goto label_24e960;
        case 0x24e964u: goto label_24e964;
        case 0x24e968u: goto label_24e968;
        case 0x24e96cu: goto label_24e96c;
        case 0x24e970u: goto label_24e970;
        case 0x24e974u: goto label_24e974;
        default: break;
    }

    ctx->pc = 0x24e3b0u;

label_24e3b0:
    // 0x24e3b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x24e3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_24e3b4:
    // 0x24e3b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x24e3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_24e3b8:
    // 0x24e3b8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x24e3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_24e3bc:
    // 0x24e3bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x24e3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_24e3c0:
    // 0x24e3c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24e3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_24e3c4:
    // 0x24e3c4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x24e3c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24e3c8:
    // 0x24e3c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24e3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_24e3cc:
    // 0x24e3cc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x24e3ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24e3d0:
    // 0x24e3d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24e3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24e3d4:
    // 0x24e3d4: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x24e3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_24e3d8:
    // 0x24e3d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24e3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24e3dc:
    // 0x24e3dc: 0x2484ca80  addiu       $a0, $a0, -0x3580
    ctx->pc = 0x24e3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
label_24e3e0:
    // 0x24e3e0: 0xc0abf10  jal         func_2AFC40
label_24e3e4:
    if (ctx->pc == 0x24E3E4u) {
        ctx->pc = 0x24E3E4u;
            // 0x24e3e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x24E3E8u;
        goto label_24e3e8;
    }
    ctx->pc = 0x24E3E0u;
    SET_GPR_U32(ctx, 31, 0x24E3E8u);
    ctx->pc = 0x24E3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E3E0u;
            // 0x24e3e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFC40u;
    if (runtime->hasFunction(0x2AFC40u)) {
        auto targetFn = runtime->lookupFunction(0x2AFC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E3E8u; }
        if (ctx->pc != 0x24E3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuLoadFileCheck__FPP17MENU_BGREAD_INFO2_0x2afc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E3E8u; }
        if (ctx->pc != 0x24E3E8u) { return; }
    }
    ctx->pc = 0x24E3E8u;
label_24e3e8:
    // 0x24e3e8: 0x2b63c  dsll32      $s6, $v0, 24
    ctx->pc = 0x24e3e8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 24));
label_24e3ec:
    // 0x24e3ec: 0xc05239c  jal         func_148E70
label_24e3f0:
    if (ctx->pc == 0x24E3F0u) {
        ctx->pc = 0x24E3F0u;
            // 0x24e3f0: 0x16b63f  dsra32      $s6, $s6, 24 (Delay Slot)
        SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 24));
        ctx->pc = 0x24E3F4u;
        goto label_24e3f4;
    }
    ctx->pc = 0x24E3ECu;
    SET_GPR_U32(ctx, 31, 0x24E3F4u);
    ctx->pc = 0x24E3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E3ECu;
            // 0x24e3f0: 0x16b63f  dsra32      $s6, $s6, 24 (Delay Slot)
        SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E3F4u; }
        if (ctx->pc != 0x24E3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E3F4u; }
        if (ctx->pc != 0x24E3F4u) { return; }
    }
    ctx->pc = 0x24E3F4u;
label_24e3f4:
    // 0x24e3f4: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x24e3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_24e3f8:
    // 0x24e3f8: 0xc08f80c  jal         func_23E030
label_24e3fc:
    if (ctx->pc == 0x24E3FCu) {
        ctx->pc = 0x24E3FCu;
            // 0x24e3fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E400u;
        goto label_24e400;
    }
    ctx->pc = 0x24E3F8u;
    SET_GPR_U32(ctx, 31, 0x24E400u);
    ctx->pc = 0x24E3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E3F8u;
            // 0x24e3fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E400u; }
        if (ctx->pc != 0x24E400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E400u; }
        if (ctx->pc != 0x24E400u) { return; }
    }
    ctx->pc = 0x24E400u;
label_24e400:
    // 0x24e400: 0xc08f840  jal         func_23E100
label_24e404:
    if (ctx->pc == 0x24E404u) {
        ctx->pc = 0x24E404u;
            // 0x24e404: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->pc = 0x24E408u;
        goto label_24e408;
    }
    ctx->pc = 0x24E400u;
    SET_GPR_U32(ctx, 31, 0x24E408u);
    ctx->pc = 0x24E404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E400u;
            // 0x24e404: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E100u;
    if (runtime->hasFunction(0x23E100u)) {
        auto targetFn = runtime->lookupFunction(0x23E100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E408u; }
        if (ctx->pc != 0x24E408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLRKey__12CMenuKeyFuncFv_0x23e100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E408u; }
        if (ctx->pc != 0x24E408u) { return; }
    }
    ctx->pc = 0x24E408u;
label_24e408:
    // 0x24e408: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x24e408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_24e40c:
    // 0x24e40c: 0xc08f8c8  jal         func_23E320
label_24e410:
    if (ctx->pc == 0x24E410u) {
        ctx->pc = 0x24E410u;
            // 0x24e410: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E414u;
        goto label_24e414;
    }
    ctx->pc = 0x24E40Cu;
    SET_GPR_U32(ctx, 31, 0x24E414u);
    ctx->pc = 0x24E410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E40Cu;
            // 0x24e410: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E414u; }
        if (ctx->pc != 0x24E414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E414u; }
        if (ctx->pc != 0x24E414u) { return; }
    }
    ctx->pc = 0x24E414u;
label_24e414:
    // 0x24e414: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x24e414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_24e418:
    // 0x24e418: 0xc08f91c  jal         func_23E470
label_24e41c:
    if (ctx->pc == 0x24E41Cu) {
        ctx->pc = 0x24E41Cu;
            // 0x24e41c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E420u;
        goto label_24e420;
    }
    ctx->pc = 0x24E418u;
    SET_GPR_U32(ctx, 31, 0x24E420u);
    ctx->pc = 0x24E41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E418u;
            // 0x24e41c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E470u;
    if (runtime->hasFunction(0x23E470u)) {
        auto targetFn = runtime->lookupFunction(0x23E470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E420u; }
        if (ctx->pc != 0x24E420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKeyInput__12CMenuKeyFuncFv_0x23e470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E420u; }
        if (ctx->pc != 0x24E420u) { return; }
    }
    ctx->pc = 0x24E420u;
label_24e420:
    // 0x24e420: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x24e420u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_24e424:
    // 0x24e424: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24e424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24e428:
    // 0x24e428: 0x10620093  beq         $v1, $v0, . + 4 + (0x93 << 2)
label_24e42c:
    if (ctx->pc == 0x24E42Cu) {
        ctx->pc = 0x24E42Cu;
            // 0x24e42c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x24E430u;
        goto label_24e430;
    }
    ctx->pc = 0x24E428u;
    {
        const bool branch_taken_0x24e428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E428u;
            // 0x24e42c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e428) {
            ctx->pc = 0x24E678u;
            goto label_24e678;
        }
    }
    ctx->pc = 0x24E430u;
label_24e430:
    // 0x24e430: 0x10670003  beq         $v1, $a3, . + 4 + (0x3 << 2)
label_24e434:
    if (ctx->pc == 0x24E434u) {
        ctx->pc = 0x24E438u;
        goto label_24e438;
    }
    ctx->pc = 0x24E430u;
    {
        const bool branch_taken_0x24e430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x24e430) {
            ctx->pc = 0x24E440u;
            goto label_24e440;
        }
    }
    ctx->pc = 0x24E438u;
label_24e438:
    // 0x24e438: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_24e43c:
    if (ctx->pc == 0x24E43Cu) {
        ctx->pc = 0x24E43Cu;
            // 0x24e43c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E440u;
        goto label_24e440;
    }
    ctx->pc = 0x24E438u;
    {
        const bool branch_taken_0x24e438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E438u;
            // 0x24e43c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e438) {
            ctx->pc = 0x24E74Cu;
            goto label_24e74c;
        }
    }
    ctx->pc = 0x24E440u;
label_24e440:
    // 0x24e440: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x24e440u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_24e444:
    // 0x24e444: 0x10470072  beq         $v0, $a3, . + 4 + (0x72 << 2)
label_24e448:
    if (ctx->pc == 0x24E448u) {
        ctx->pc = 0x24E44Cu;
        goto label_24e44c;
    }
    ctx->pc = 0x24E444u;
    {
        const bool branch_taken_0x24e444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x24e444) {
            ctx->pc = 0x24E610u;
            goto label_24e610;
        }
    }
    ctx->pc = 0x24E44Cu;
label_24e44c:
    // 0x24e44c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_24e450:
    if (ctx->pc == 0x24E450u) {
        ctx->pc = 0x24E454u;
        goto label_24e454;
    }
    ctx->pc = 0x24E44Cu;
    {
        const bool branch_taken_0x24e44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e44c) {
            ctx->pc = 0x24E45Cu;
            goto label_24e45c;
        }
    }
    ctx->pc = 0x24E454u;
label_24e454:
    // 0x24e454: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_24e458:
    if (ctx->pc == 0x24E458u) {
        ctx->pc = 0x24E458u;
            // 0x24e458: 0x86830000  lh          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x24E45Cu;
        goto label_24e45c;
    }
    ctx->pc = 0x24E454u;
    {
        const bool branch_taken_0x24e454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E454u;
            // 0x24e458: 0x86830000  lh          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e454) {
            ctx->pc = 0x24E75Cu;
            goto label_24e75c;
        }
    }
    ctx->pc = 0x24E45Cu;
label_24e45c:
    // 0x24e45c: 0x92820004  lbu         $v0, 0x4($s4)
    ctx->pc = 0x24e45cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
label_24e460:
    // 0x24e460: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_24e464:
    if (ctx->pc == 0x24E464u) {
        ctx->pc = 0x24E464u;
            // 0x24e464: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E468u;
        goto label_24e468;
    }
    ctx->pc = 0x24E460u;
    {
        const bool branch_taken_0x24e460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E460u;
            // 0x24e464: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e460) {
            ctx->pc = 0x24E478u;
            goto label_24e478;
        }
    }
    ctx->pc = 0x24E468u;
label_24e468:
    // 0x24e468: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
label_24e46c:
    if (ctx->pc == 0x24E46Cu) {
        ctx->pc = 0x24E470u;
        goto label_24e470;
    }
    ctx->pc = 0x24E468u;
    {
        const bool branch_taken_0x24e468 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e468) {
            ctx->pc = 0x24E474u;
            goto label_24e474;
        }
    }
    ctx->pc = 0x24E470u;
label_24e470:
    // 0x24e470: 0xa2870004  sb          $a3, 0x4($s4)
    ctx->pc = 0x24e470u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4), (uint8_t)GPR_U32(ctx, 7));
label_24e474:
    // 0x24e474: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24e474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24e478:
    // 0x24e478: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24e478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24e47c:
    // 0x24e47c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24e47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24e480:
    // 0x24e480: 0xc093860  jal         func_24E180
label_24e484:
    if (ctx->pc == 0x24E484u) {
        ctx->pc = 0x24E484u;
            // 0x24e484: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E488u;
        goto label_24e488;
    }
    ctx->pc = 0x24E480u;
    SET_GPR_U32(ctx, 31, 0x24E488u);
    ctx->pc = 0x24E484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E480u;
            // 0x24e484: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24E180u;
    if (runtime->hasFunction(0x24E180u)) {
        auto targetFn = runtime->lookupFunction(0x24E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E488u; }
        if (ctx->pc != 0x24E488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyStepLocal__13CMenuItemInfoFiii_0x24e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E488u; }
        if (ctx->pc != 0x24E488u) { return; }
    }
    ctx->pc = 0x24E488u;
label_24e488:
    // 0x24e488: 0x92820004  lbu         $v0, 0x4($s4)
    ctx->pc = 0x24e488u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
label_24e48c:
    // 0x24e48c: 0x104000b2  beqz        $v0, . + 4 + (0xB2 << 2)
label_24e490:
    if (ctx->pc == 0x24E490u) {
        ctx->pc = 0x24E494u;
        goto label_24e494;
    }
    ctx->pc = 0x24E48Cu;
    {
        const bool branch_taken_0x24e48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e48c) {
            ctx->pc = 0x24E758u;
            goto label_24e758;
        }
    }
    ctx->pc = 0x24E494u;
label_24e494:
    // 0x24e494: 0xc08791c  jal         func_21E470
label_24e498:
    if (ctx->pc == 0x24E498u) {
        ctx->pc = 0x24E498u;
            // 0x24e498: 0x8f849510  lw          $a0, -0x6AF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939920)));
        ctx->pc = 0x24E49Cu;
        goto label_24e49c;
    }
    ctx->pc = 0x24E494u;
    SET_GPR_U32(ctx, 31, 0x24E49Cu);
    ctx->pc = 0x24E498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E494u;
            // 0x24e498: 0x8f849510  lw          $a0, -0x6AF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939920)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E470u;
    if (runtime->hasFunction(0x21E470u)) {
        auto targetFn = runtime->lookupFunction(0x21E470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E49Cu; }
        if (ctx->pc != 0x24E49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachForm__13CMenuMoveItemFv_0x21e470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E49Cu; }
        if (ctx->pc != 0x24E49Cu) { return; }
    }
    ctx->pc = 0x24E49Cu;
label_24e49c:
    // 0x24e49c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24e49cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_24e4a0:
    // 0x24e4a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24e4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24e4a4:
    // 0x24e4a4: 0xc08e7cc  jal         func_239F30
label_24e4a8:
    if (ctx->pc == 0x24E4A8u) {
        ctx->pc = 0x24E4A8u;
            // 0x24e4a8: 0x24a5bb00  addiu       $a1, $a1, -0x4500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949632));
        ctx->pc = 0x24E4ACu;
        goto label_24e4ac;
    }
    ctx->pc = 0x24E4A4u;
    SET_GPR_U32(ctx, 31, 0x24E4ACu);
    ctx->pc = 0x24E4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E4A4u;
            // 0x24e4a8: 0x24a5bb00  addiu       $a1, $a1, -0x4500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E4ACu; }
        if (ctx->pc != 0x24E4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E4ACu; }
        if (ctx->pc != 0x24E4ACu) { return; }
    }
    ctx->pc = 0x24E4ACu;
label_24e4ac:
    // 0x24e4ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24e4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24e4b0:
    // 0x24e4b0: 0xa2820004  sb          $v0, 0x4($s4)
    ctx->pc = 0x24e4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4), (uint8_t)GPR_U32(ctx, 2));
label_24e4b4:
    // 0x24e4b4: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x24e4b4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
label_24e4b8:
    // 0x24e4b8: 0xa38093f8  sb          $zero, -0x6C08($gp)
    ctx->pc = 0x24e4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939640), (uint8_t)GPR_U32(ctx, 0));
label_24e4bc:
    // 0x24e4bc: 0xc08ca8c  jal         func_232A30
label_24e4c0:
    if (ctx->pc == 0x24E4C0u) {
        ctx->pc = 0x24E4C0u;
            // 0x24e4c0: 0xa38095a0  sb          $zero, -0x6A60($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294940064), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x24E4C4u;
        goto label_24e4c4;
    }
    ctx->pc = 0x24E4BCu;
    SET_GPR_U32(ctx, 31, 0x24E4C4u);
    ctx->pc = 0x24E4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E4BCu;
            // 0x24e4c0: 0xa38095a0  sb          $zero, -0x6A60($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294940064), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232A30u;
    if (runtime->hasFunction(0x232A30u)) {
        auto targetFn = runtime->lookupFunction(0x232A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E4C4u; }
        if (ctx->pc != 0x24E4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTrushMenu__Fv_0x232a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E4C4u; }
        if (ctx->pc != 0x24E4C4u) { return; }
    }
    ctx->pc = 0x24E4C4u;
label_24e4c4:
    // 0x24e4c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24e4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24e4c8:
    // 0x24e4c8: 0x144300a3  bne         $v0, $v1, . + 4 + (0xA3 << 2)
label_24e4cc:
    if (ctx->pc == 0x24E4CCu) {
        ctx->pc = 0x24E4D0u;
        goto label_24e4d0;
    }
    ctx->pc = 0x24E4C8u;
    {
        const bool branch_taken_0x24e4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24e4c8) {
            ctx->pc = 0x24E758u;
            goto label_24e758;
        }
    }
    ctx->pc = 0x24E4D0u;
label_24e4d0:
    // 0x24e4d0: 0xa38395a0  sb          $v1, -0x6A60($gp)
    ctx->pc = 0x24e4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940064), (uint8_t)GPR_U32(ctx, 3));
label_24e4d4:
    // 0x24e4d4: 0xa6830002  sh          $v1, 0x2($s4)
    ctx->pc = 0x24e4d4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 3));
label_24e4d8:
    // 0x24e4d8: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x24e4d8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
label_24e4dc:
    // 0x24e4dc: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x24e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_24e4e0:
    // 0x24e4e0: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x24e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_24e4e4:
    // 0x24e4e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_24e4e8:
    if (ctx->pc == 0x24E4E8u) {
        ctx->pc = 0x24E4ECu;
        goto label_24e4ec;
    }
    ctx->pc = 0x24E4E4u;
    {
        const bool branch_taken_0x24e4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e4e4) {
            ctx->pc = 0x24E4F0u;
            goto label_24e4f0;
        }
    }
    ctx->pc = 0x24E4ECu;
label_24e4ec:
    // 0x24e4ec: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x24e4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_24e4f0:
    // 0x24e4f0: 0xc065af8  jal         func_196BE0
label_24e4f4:
    if (ctx->pc == 0x24E4F4u) {
        ctx->pc = 0x24E4F8u;
        goto label_24e4f8;
    }
    ctx->pc = 0x24E4F0u;
    SET_GPR_U32(ctx, 31, 0x24E4F8u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E4F8u; }
        if (ctx->pc != 0x24E4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E4F8u; }
        if (ctx->pc != 0x24E4F8u) { return; }
    }
    ctx->pc = 0x24E4F8u;
label_24e4f8:
    // 0x24e4f8: 0xc0670c4  jal         func_19C310
label_24e4fc:
    if (ctx->pc == 0x24E4FCu) {
        ctx->pc = 0x24E4FCu;
            // 0x24e4fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E500u;
        goto label_24e500;
    }
    ctx->pc = 0x24E4F8u;
    SET_GPR_U32(ctx, 31, 0x24E500u);
    ctx->pc = 0x24E4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E4F8u;
            // 0x24e4fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C310u;
    if (runtime->hasFunction(0x19C310u)) {
        auto targetFn = runtime->lookupFunction(0x19C310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E500u; }
        if (ctx->pc != 0x24E500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemBoardOverNum__16CUserDataManagerFv_0x19c310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E500u; }
        if (ctx->pc != 0x24E500u) { return; }
    }
    ctx->pc = 0x24E500u;
label_24e500:
    // 0x24e500: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24e500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e504:
    // 0x24e504: 0xc04e640  jal         func_139900
label_24e508:
    if (ctx->pc == 0x24E508u) {
        ctx->pc = 0x24E508u;
            // 0x24e508: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x24E50Cu;
        goto label_24e50c;
    }
    ctx->pc = 0x24E504u;
    SET_GPR_U32(ctx, 31, 0x24E50Cu);
    ctx->pc = 0x24E508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E504u;
            // 0x24e508: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E50Cu; }
        if (ctx->pc != 0x24E50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E50Cu; }
        if (ctx->pc != 0x24E50Cu) { return; }
    }
    ctx->pc = 0x24E50Cu;
label_24e50c:
    // 0x24e50c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24e50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24e510:
    // 0x24e510: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x24e510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_24e514:
    // 0x24e514: 0x8c23dc18  lw          $v1, -0x23E8($at)
    ctx->pc = 0x24e514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958104)));
label_24e518:
    // 0x24e518: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24e518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24e51c:
    // 0x24e51c: 0x8c25dc14  lw          $a1, -0x23EC($at)
    ctx->pc = 0x24e51cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958100)));
label_24e520:
    // 0x24e520: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24e520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24e524:
    // 0x24e524: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x24e524u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_24e528:
    // 0x24e528: 0x8c22dc10  lw          $v0, -0x23F0($at)
    ctx->pc = 0x24e528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958096)));
label_24e52c:
    // 0x24e52c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x24e52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_24e530:
    // 0x24e530: 0xc04e79c  jal         func_139E70
label_24e534:
    if (ctx->pc == 0x24E534u) {
        ctx->pc = 0x24E534u;
            // 0x24e534: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x24E538u;
        goto label_24e538;
    }
    ctx->pc = 0x24E530u;
    SET_GPR_U32(ctx, 31, 0x24E538u);
    ctx->pc = 0x24E534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E530u;
            // 0x24e534: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E538u; }
        if (ctx->pc != 0x24E538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E538u; }
        if (ctx->pc != 0x24E538u) { return; }
    }
    ctx->pc = 0x24E538u;
label_24e538:
    // 0x24e538: 0xc068644  jal         func_1A1910
label_24e53c:
    if (ctx->pc == 0x24E53Cu) {
        ctx->pc = 0x24E53Cu;
            // 0x24e53c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E540u;
        goto label_24e540;
    }
    ctx->pc = 0x24E538u;
    SET_GPR_U32(ctx, 31, 0x24E540u);
    ctx->pc = 0x24E53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E538u;
            // 0x24e53c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E540u; }
        if (ctx->pc != 0x24E540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E540u; }
        if (ctx->pc != 0x24E540u) { return; }
    }
    ctx->pc = 0x24E540u;
label_24e540:
    // 0x24e540: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x24e540u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_24e544:
    // 0x24e544: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24e544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e548:
    // 0x24e548: 0x10200083  beqz        $at, . + 4 + (0x83 << 2)
label_24e54c:
    if (ctx->pc == 0x24E54Cu) {
        ctx->pc = 0x24E54Cu;
            // 0x24e54c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E550u;
        goto label_24e550;
    }
    ctx->pc = 0x24E548u;
    {
        const bool branch_taken_0x24e548 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E548u;
            // 0x24e54c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e548) {
            ctx->pc = 0x24E758u;
            goto label_24e758;
        }
    }
    ctx->pc = 0x24E550u;
label_24e550:
    // 0x24e550: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x24e550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_24e554:
    // 0x24e554: 0xc066d14  jal         func_19B450
label_24e558:
    if (ctx->pc == 0x24E558u) {
        ctx->pc = 0x24E558u;
            // 0x24e558: 0x2322821  addu        $a1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->pc = 0x24E55Cu;
        goto label_24e55c;
    }
    ctx->pc = 0x24E554u;
    SET_GPR_U32(ctx, 31, 0x24E55Cu);
    ctx->pc = 0x24E558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E554u;
            // 0x24e558: 0x2322821  addu        $a1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B450u;
    if (runtime->hasFunction(0x19B450u)) {
        auto targetFn = runtime->lookupFunction(0x19B450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E55Cu; }
        if (ctx->pc != 0x24E55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUsedDataPtr__16CUserDataManagerFi_0x19b450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E55Cu; }
        if (ctx->pc != 0x24E55Cu) { return; }
    }
    ctx->pc = 0x24E55Cu;
label_24e55c:
    // 0x24e55c: 0x84530002  lh          $s3, 0x2($v0)
    ctx->pc = 0x24e55cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_24e560:
    // 0x24e560: 0x1a600025  blez        $s3, . + 4 + (0x25 << 2)
label_24e564:
    if (ctx->pc == 0x24E564u) {
        ctx->pc = 0x24E564u;
            // 0x24e564: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x24E568u;
        goto label_24e568;
    }
    ctx->pc = 0x24E560u;
    {
        const bool branch_taken_0x24e560 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x24E564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E560u;
            // 0x24e564: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e560) {
            ctx->pc = 0x24E5F8u;
            goto label_24e5f8;
        }
    }
    ctx->pc = 0x24E568u;
label_24e568:
    // 0x24e568: 0xc04e748  jal         func_139D20
label_24e56c:
    if (ctx->pc == 0x24E56Cu) {
        ctx->pc = 0x24E56Cu;
            // 0x24e56c: 0x2405022f  addiu       $a1, $zero, 0x22F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
        ctx->pc = 0x24E570u;
        goto label_24e570;
    }
    ctx->pc = 0x24E568u;
    SET_GPR_U32(ctx, 31, 0x24E570u);
    ctx->pc = 0x24E56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E568u;
            // 0x24e56c: 0x2405022f  addiu       $a1, $zero, 0x22F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E570u; }
        if (ctx->pc != 0x24E570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E570u; }
        if (ctx->pc != 0x24E570u) { return; }
    }
    ctx->pc = 0x24E570u;
label_24e570:
    // 0x24e570: 0x240422d0  addiu       $a0, $zero, 0x22D0
    ctx->pc = 0x24e570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8912));
label_24e574:
    // 0x24e574: 0xc04e638  jal         func_1398E0
label_24e578:
    if (ctx->pc == 0x24E578u) {
        ctx->pc = 0x24E578u;
            // 0x24e578: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E57Cu;
        goto label_24e57c;
    }
    ctx->pc = 0x24E574u;
    SET_GPR_U32(ctx, 31, 0x24E57Cu);
    ctx->pc = 0x24E578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E574u;
            // 0x24e578: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E57Cu; }
        if (ctx->pc != 0x24E57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E57Cu; }
        if (ctx->pc != 0x24E57Cu) { return; }
    }
    ctx->pc = 0x24E57Cu;
label_24e57c:
    // 0x24e57c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_24e580:
    if (ctx->pc == 0x24E580u) {
        ctx->pc = 0x24E584u;
        goto label_24e584;
    }
    ctx->pc = 0x24E57Cu;
    {
        const bool branch_taken_0x24e57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e57c) {
            ctx->pc = 0x24E58Cu;
            goto label_24e58c;
        }
    }
    ctx->pc = 0x24E584u;
label_24e584:
    // 0x24e584: 0xc0874b4  jal         func_21D2D0
label_24e588:
    if (ctx->pc == 0x24E588u) {
        ctx->pc = 0x24E588u;
            // 0x24e588: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E58Cu;
        goto label_24e58c;
    }
    ctx->pc = 0x24E584u;
    SET_GPR_U32(ctx, 31, 0x24E58Cu);
    ctx->pc = 0x24E588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E584u;
            // 0x24e588: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D2D0u;
    if (runtime->hasFunction(0x21D2D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E58Cu; }
        if (ctx->pc != 0x24E58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CDC2MesFv_0x21d2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E58Cu; }
        if (ctx->pc != 0x24E58Cu) { return; }
    }
    ctx->pc = 0x24E58Cu;
label_24e58c:
    // 0x24e58c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24e58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24e590:
    // 0x24e590: 0xac22db20  sw          $v0, -0x24E0($at)
    ctx->pc = 0x24e590u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957856), GPR_U32(ctx, 2));
label_24e594:
    // 0x24e594: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24e594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24e598:
    // 0x24e598: 0xc08d1bc  jal         func_2346F0
label_24e59c:
    if (ctx->pc == 0x24E59Cu) {
        ctx->pc = 0x24E59Cu;
            // 0x24e59c: 0x8c30db20  lw          $s0, -0x24E0($at) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957856)));
        ctx->pc = 0x24E5A0u;
        goto label_24e5a0;
    }
    ctx->pc = 0x24E598u;
    SET_GPR_U32(ctx, 31, 0x24E5A0u);
    ctx->pc = 0x24E59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E598u;
            // 0x24e59c: 0x8c30db20  lw          $s0, -0x24E0($at) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E5A0u; }
        if (ctx->pc != 0x24E5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E5A0u; }
        if (ctx->pc != 0x24E5A0u) { return; }
    }
    ctx->pc = 0x24E5A0u;
label_24e5a0:
    // 0x24e5a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24e5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e5a4:
    // 0x24e5a4: 0xc054ba8  jal         func_152EA0
label_24e5a8:
    if (ctx->pc == 0x24E5A8u) {
        ctx->pc = 0x24E5A8u;
            // 0x24e5a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E5ACu;
        goto label_24e5ac;
    }
    ctx->pc = 0x24E5A4u;
    SET_GPR_U32(ctx, 31, 0x24E5ACu);
    ctx->pc = 0x24E5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E5A4u;
            // 0x24e5a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EA0u;
    if (runtime->hasFunction(0x152EA0u)) {
        auto targetFn = runtime->lookupFunction(0x152EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E5ACu; }
        if (ctx->pc != 0x24E5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff__6ClsMesFPs_0x152ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E5ACu; }
        if (ctx->pc != 0x24E5ACu) { return; }
    }
    ctx->pc = 0x24E5ACu;
label_24e5ac:
    // 0x24e5ac: 0xc065a18  jal         func_196860
label_24e5b0:
    if (ctx->pc == 0x24E5B0u) {
        ctx->pc = 0x24E5B4u;
        goto label_24e5b4;
    }
    ctx->pc = 0x24E5ACu;
    SET_GPR_U32(ctx, 31, 0x24E5B4u);
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E5B4u; }
        if (ctx->pc != 0x24E5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E5B4u; }
        if (ctx->pc != 0x24E5B4u) { return; }
    }
    ctx->pc = 0x24E5B4u;
label_24e5b4:
    // 0x24e5b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24e5b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e5b8:
    // 0x24e5b8: 0xc054bac  jal         func_152EB0
label_24e5bc:
    if (ctx->pc == 0x24E5BCu) {
        ctx->pc = 0x24E5BCu;
            // 0x24e5bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E5C0u;
        goto label_24e5c0;
    }
    ctx->pc = 0x24E5B8u;
    SET_GPR_U32(ctx, 31, 0x24E5C0u);
    ctx->pc = 0x24E5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E5B8u;
            // 0x24e5bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EB0u;
    if (runtime->hasFunction(0x152EB0u)) {
        auto targetFn = runtime->lookupFunction(0x152EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E5C0u; }
        if (ctx->pc != 0x24E5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff_system__6ClsMesFPs_0x152eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E5C0u; }
        if (ctx->pc != 0x24E5C0u) { return; }
    }
    ctx->pc = 0x24E5C0u;
label_24e5c0:
    // 0x24e5c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24e5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24e5c4:
    // 0x24e5c4: 0xc0874e8  jal         func_21D3A0
label_24e5c8:
    if (ctx->pc == 0x24E5C8u) {
        ctx->pc = 0x24E5C8u;
            // 0x24e5c8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x24E5CCu;
        goto label_24e5cc;
    }
    ctx->pc = 0x24E5C4u;
    SET_GPR_U32(ctx, 31, 0x24E5CCu);
    ctx->pc = 0x24E5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E5C4u;
            // 0x24e5c8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E5CCu; }
        if (ctx->pc != 0x24E5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E5CCu; }
        if (ctx->pc != 0x24E5CCu) { return; }
    }
    ctx->pc = 0x24E5CCu;
label_24e5cc:
    // 0x24e5cc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x24e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_24e5d0:
    // 0x24e5d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24e5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24e5d4:
    // 0x24e5d4: 0xc0684dc  jal         func_1A1370
label_24e5d8:
    if (ctx->pc == 0x24E5D8u) {
        ctx->pc = 0x24E5D8u;
            // 0x24e5d8: 0xae02014c  sw          $v0, 0x14C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
        ctx->pc = 0x24E5DCu;
        goto label_24e5dc;
    }
    ctx->pc = 0x24E5D4u;
    SET_GPR_U32(ctx, 31, 0x24E5DCu);
    ctx->pc = 0x24E5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E5D4u;
            // 0x24e5d8: 0xae02014c  sw          $v0, 0x14C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1370u;
    if (runtime->hasFunction(0x1A1370u)) {
        auto targetFn = runtime->lookupFunction(0x1A1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E5DCu; }
        if (ctx->pc != 0x24E5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserItemHaveNum__Fi_0x1a1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E5DCu; }
        if (ctx->pc != 0x24E5DCu) { return; }
    }
    ctx->pc = 0x24E5DCu;
label_24e5dc:
    // 0x24e5dc: 0xc065708  jal         func_195C20
label_24e5e0:
    if (ctx->pc == 0x24E5E0u) {
        ctx->pc = 0x24E5E0u;
            // 0x24e5e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E5E4u;
        goto label_24e5e4;
    }
    ctx->pc = 0x24E5DCu;
    SET_GPR_U32(ctx, 31, 0x24E5E4u);
    ctx->pc = 0x24E5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E5DCu;
            // 0x24e5e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C20u;
    if (runtime->hasFunction(0x195C20u)) {
        auto targetFn = runtime->lookupFunction(0x195C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E5E4u; }
        if (ctx->pc != 0x24E5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonItemData__Fi_0x195c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E5E4u; }
        if (ctx->pc != 0x24E5E4u) { return; }
    }
    ctx->pc = 0x24E5E4u;
label_24e5e4:
    // 0x24e5e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24e5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24e5e8:
    // 0x24e5e8: 0xc0877e0  jal         func_21DF80
label_24e5ec:
    if (ctx->pc == 0x24E5ECu) {
        ctx->pc = 0x24E5ECu;
            // 0x24e5ec: 0x240500a0  addiu       $a1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->pc = 0x24E5F0u;
        goto label_24e5f0;
    }
    ctx->pc = 0x24E5E8u;
    SET_GPR_U32(ctx, 31, 0x24E5F0u);
    ctx->pc = 0x24E5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E5E8u;
            // 0x24e5ec: 0x240500a0  addiu       $a1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E5F0u; }
        if (ctx->pc != 0x24E5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E5F0u; }
        if (ctx->pc != 0x24E5F0u) { return; }
    }
    ctx->pc = 0x24E5F0u;
label_24e5f0:
    // 0x24e5f0: 0x10000059  b           . + 4 + (0x59 << 2)
label_24e5f4:
    if (ctx->pc == 0x24E5F4u) {
        ctx->pc = 0x24E5F8u;
        goto label_24e5f8;
    }
    ctx->pc = 0x24E5F0u;
    {
        const bool branch_taken_0x24e5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e5f0) {
            ctx->pc = 0x24E758u;
            goto label_24e758;
        }
    }
    ctx->pc = 0x24E5F8u;
label_24e5f8:
    // 0x24e5f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24e5f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_24e5fc:
    // 0x24e5fc: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x24e5fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_24e600:
    // 0x24e600: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_24e604:
    if (ctx->pc == 0x24E604u) {
        ctx->pc = 0x24E608u;
        goto label_24e608;
    }
    ctx->pc = 0x24E600u;
    {
        const bool branch_taken_0x24e600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e600) {
            ctx->pc = 0x24E550u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24e550;
        }
    }
    ctx->pc = 0x24E608u;
label_24e608:
    // 0x24e608: 0x10000053  b           . + 4 + (0x53 << 2)
label_24e60c:
    if (ctx->pc == 0x24E60Cu) {
        ctx->pc = 0x24E610u;
        goto label_24e610;
    }
    ctx->pc = 0x24E608u;
    {
        const bool branch_taken_0x24e608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e608) {
            ctx->pc = 0x24E758u;
            goto label_24e758;
        }
    }
    ctx->pc = 0x24E610u;
label_24e610:
    // 0x24e610: 0x12400051  beqz        $s2, . + 4 + (0x51 << 2)
label_24e614:
    if (ctx->pc == 0x24E614u) {
        ctx->pc = 0x24E614u;
            // 0x24e614: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x24E618u;
        goto label_24e618;
    }
    ctx->pc = 0x24E610u;
    {
        const bool branch_taken_0x24e610 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E610u;
            // 0x24e614: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e610) {
            ctx->pc = 0x24E758u;
            goto label_24e758;
        }
    }
    ctx->pc = 0x24E618u;
label_24e618:
    // 0x24e618: 0xa38095a0  sb          $zero, -0x6A60($gp)
    ctx->pc = 0x24e618u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940064), (uint8_t)GPR_U32(ctx, 0));
label_24e61c:
    // 0x24e61c: 0xac20db20  sw          $zero, -0x24E0($at)
    ctx->pc = 0x24e61cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957856), GPR_U32(ctx, 0));
label_24e620:
    // 0x24e620: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24e620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24e624:
    // 0x24e624: 0xac20db24  sw          $zero, -0x24DC($at)
    ctx->pc = 0x24e624u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957860), GPR_U32(ctx, 0));
label_24e628:
    // 0x24e628: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24e628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24e62c:
    // 0x24e62c: 0xac20db28  sw          $zero, -0x24D8($at)
    ctx->pc = 0x24e62cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957864), GPR_U32(ctx, 0));
label_24e630:
    // 0x24e630: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24e630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24e634:
    // 0x24e634: 0xac20db2c  sw          $zero, -0x24D4($at)
    ctx->pc = 0x24e634u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957868), GPR_U32(ctx, 0));
label_24e638:
    // 0x24e638: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24e638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24e63c:
    // 0x24e63c: 0xac20db30  sw          $zero, -0x24D0($at)
    ctx->pc = 0x24e63cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957872), GPR_U32(ctx, 0));
label_24e640:
    // 0x24e640: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24e640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24e644:
    // 0x24e644: 0xac20db34  sw          $zero, -0x24CC($at)
    ctx->pc = 0x24e644u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957876), GPR_U32(ctx, 0));
label_24e648:
    // 0x24e648: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24e648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24e64c:
    // 0x24e64c: 0xac20db38  sw          $zero, -0x24C8($at)
    ctx->pc = 0x24e64cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957880), GPR_U32(ctx, 0));
label_24e650:
    // 0x24e650: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24e650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24e654:
    // 0x24e654: 0xac20db3c  sw          $zero, -0x24C4($at)
    ctx->pc = 0x24e654u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957884), GPR_U32(ctx, 0));
label_24e658:
    // 0x24e658: 0xa6800002  sh          $zero, 0x2($s4)
    ctx->pc = 0x24e658u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
label_24e65c:
    // 0x24e65c: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x24e65cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
label_24e660:
    // 0x24e660: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x24e660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_24e664:
    // 0x24e664: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x24e664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_24e668:
    // 0x24e668: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_24e66c:
    if (ctx->pc == 0x24E66Cu) {
        ctx->pc = 0x24E670u;
        goto label_24e670;
    }
    ctx->pc = 0x24E668u;
    {
        const bool branch_taken_0x24e668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e668) {
            ctx->pc = 0x24E758u;
            goto label_24e758;
        }
    }
    ctx->pc = 0x24E670u;
label_24e670:
    // 0x24e670: 0x10000039  b           . + 4 + (0x39 << 2)
label_24e674:
    if (ctx->pc == 0x24E674u) {
        ctx->pc = 0x24E674u;
            // 0x24e674: 0xa0470001  sb          $a3, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 7));
        ctx->pc = 0x24E678u;
        goto label_24e678;
    }
    ctx->pc = 0x24E670u;
    {
        const bool branch_taken_0x24e670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E670u;
            // 0x24e674: 0xa0470001  sb          $a3, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e670) {
            ctx->pc = 0x24E758u;
            goto label_24e758;
        }
    }
    ctx->pc = 0x24E678u;
label_24e678:
    // 0x24e678: 0xc08ca8c  jal         func_232A30
label_24e67c:
    if (ctx->pc == 0x24E67Cu) {
        ctx->pc = 0x24E680u;
        goto label_24e680;
    }
    ctx->pc = 0x24E678u;
    SET_GPR_U32(ctx, 31, 0x24E680u);
    ctx->pc = 0x232A30u;
    if (runtime->hasFunction(0x232A30u)) {
        auto targetFn = runtime->lookupFunction(0x232A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E680u; }
        if (ctx->pc != 0x24E680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTrushMenu__Fv_0x232a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E680u; }
        if (ctx->pc != 0x24E680u) { return; }
    }
    ctx->pc = 0x24E680u;
label_24e680:
    // 0x24e680: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_24e684:
    if (ctx->pc == 0x24E684u) {
        ctx->pc = 0x24E688u;
        goto label_24e688;
    }
    ctx->pc = 0x24E680u;
    {
        const bool branch_taken_0x24e680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e680) {
            ctx->pc = 0x24E694u;
            goto label_24e694;
        }
    }
    ctx->pc = 0x24E688u;
label_24e688:
    // 0x24e688: 0x838294f0  lb          $v0, -0x6B10($gp)
    ctx->pc = 0x24e688u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939888)));
label_24e68c:
    // 0x24e68c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_24e690:
    if (ctx->pc == 0x24E690u) {
        ctx->pc = 0x24E694u;
        goto label_24e694;
    }
    ctx->pc = 0x24E68Cu;
    {
        const bool branch_taken_0x24e68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e68c) {
            ctx->pc = 0x24E6A4u;
            goto label_24e6a4;
        }
    }
    ctx->pc = 0x24E694u;
label_24e694:
    // 0x24e694: 0x92830170  lbu         $v1, 0x170($s4)
    ctx->pc = 0x24e694u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 368)));
label_24e698:
    // 0x24e698: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24e698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24e69c:
    // 0x24e69c: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_24e6a0:
    if (ctx->pc == 0x24E6A0u) {
        ctx->pc = 0x24E6A4u;
        goto label_24e6a4;
    }
    ctx->pc = 0x24E69Cu;
    {
        const bool branch_taken_0x24e69c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24e69c) {
            ctx->pc = 0x24E704u;
            goto label_24e704;
        }
    }
    ctx->pc = 0x24E6A4u;
label_24e6a4:
    // 0x24e6a4: 0x1600002c  bnez        $s0, . + 4 + (0x2C << 2)
label_24e6a8:
    if (ctx->pc == 0x24E6A8u) {
        ctx->pc = 0x24E6A8u;
            // 0x24e6a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E6ACu;
        goto label_24e6ac;
    }
    ctx->pc = 0x24E6A4u;
    {
        const bool branch_taken_0x24e6a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E6A4u;
            // 0x24e6a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e6a4) {
            ctx->pc = 0x24E758u;
            goto label_24e758;
        }
    }
    ctx->pc = 0x24E6ACu;
label_24e6ac:
    // 0x24e6ac: 0xc08e8a8  jal         func_23A2A0
label_24e6b0:
    if (ctx->pc == 0x24E6B0u) {
        ctx->pc = 0x24E6B4u;
        goto label_24e6b4;
    }
    ctx->pc = 0x24E6ACu;
    SET_GPR_U32(ctx, 31, 0x24E6B4u);
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E6B4u; }
        if (ctx->pc != 0x24E6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E6B4u; }
        if (ctx->pc != 0x24E6B4u) { return; }
    }
    ctx->pc = 0x24E6B4u;
label_24e6b4:
    // 0x24e6b4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_24e6b8:
    if (ctx->pc == 0x24E6B8u) {
        ctx->pc = 0x24E6BCu;
        goto label_24e6bc;
    }
    ctx->pc = 0x24E6B4u;
    {
        const bool branch_taken_0x24e6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e6b4) {
            ctx->pc = 0x24E758u;
            goto label_24e758;
        }
    }
    ctx->pc = 0x24E6BCu;
label_24e6bc:
    // 0x24e6bc: 0x8e99010c  lw          $t9, 0x10C($s4)
    ctx->pc = 0x24e6bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_24e6c0:
    // 0x24e6c0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x24e6c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_24e6c4:
    // 0x24e6c4: 0x320f809  jalr        $t9
label_24e6c8:
    if (ctx->pc == 0x24E6C8u) {
        ctx->pc = 0x24E6C8u;
            // 0x24e6c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E6CCu;
        goto label_24e6cc;
    }
    ctx->pc = 0x24E6C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24E6CCu);
        ctx->pc = 0x24E6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E6C4u;
            // 0x24e6c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24E6CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24E6CCu; }
            if (ctx->pc != 0x24E6CCu) { return; }
        }
        }
    }
    ctx->pc = 0x24E6CCu;
label_24e6cc:
    // 0x24e6cc: 0x92820170  lbu         $v0, 0x170($s4)
    ctx->pc = 0x24e6ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 368)));
label_24e6d0:
    // 0x24e6d0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_24e6d4:
    if (ctx->pc == 0x24E6D4u) {
        ctx->pc = 0x24E6D4u;
            // 0x24e6d4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x24E6D8u;
        goto label_24e6d8;
    }
    ctx->pc = 0x24E6D0u;
    {
        const bool branch_taken_0x24e6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E6D0u;
            // 0x24e6d4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e6d0) {
            ctx->pc = 0x24E758u;
            goto label_24e758;
        }
    }
    ctx->pc = 0x24E6D8u;
label_24e6d8:
    // 0x24e6d8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24e6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24e6dc:
    // 0x24e6dc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x24e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_24e6e0:
    // 0x24e6e0: 0xac35d630  sw          $s5, -0x29D0($at)
    ctx->pc = 0x24e6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 21));
label_24e6e4:
    // 0x24e6e4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24e6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24e6e8:
    // 0x24e6e8: 0xac22d62c  sw          $v0, -0x29D4($at)
    ctx->pc = 0x24e6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 2));
label_24e6ec:
    // 0x24e6ec: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24e6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24e6f0:
    // 0x24e6f0: 0xac35d634  sw          $s5, -0x29CC($at)
    ctx->pc = 0x24e6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 21));
label_24e6f4:
    // 0x24e6f4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24e6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24e6f8:
    // 0x24e6f8: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x24e6f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24e6fc:
    // 0x24e6fc: 0x10000016  b           . + 4 + (0x16 << 2)
label_24e700:
    if (ctx->pc == 0x24E700u) {
        ctx->pc = 0x24E700u;
            // 0x24e700: 0xac20d638  sw          $zero, -0x29C8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956600), GPR_U32(ctx, 0));
        ctx->pc = 0x24E704u;
        goto label_24e704;
    }
    ctx->pc = 0x24E6FCu;
    {
        const bool branch_taken_0x24e6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E6FCu;
            // 0x24e700: 0xac20d638  sw          $zero, -0x29C8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e6fc) {
            ctx->pc = 0x24E758u;
            goto label_24e758;
        }
    }
    ctx->pc = 0x24E704u;
label_24e704:
    // 0x24e704: 0xc088ff8  jal         func_223FE0
label_24e708:
    if (ctx->pc == 0x24E708u) {
        ctx->pc = 0x24E70Cu;
        goto label_24e70c;
    }
    ctx->pc = 0x24E704u;
    SET_GPR_U32(ctx, 31, 0x24E70Cu);
    ctx->pc = 0x223FE0u;
    if (runtime->hasFunction(0x223FE0u)) {
        auto targetFn = runtime->lookupFunction(0x223FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E70Cu; }
        if (ctx->pc != 0x24E70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainFrameEndFlag__Fv_0x223fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E70Cu; }
        if (ctx->pc != 0x24E70Cu) { return; }
    }
    ctx->pc = 0x24E70Cu;
label_24e70c:
    // 0x24e70c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_24e710:
    if (ctx->pc == 0x24E710u) {
        ctx->pc = 0x24E714u;
        goto label_24e714;
    }
    ctx->pc = 0x24E70Cu;
    {
        const bool branch_taken_0x24e70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e70c) {
            ctx->pc = 0x24E758u;
            goto label_24e758;
        }
    }
    ctx->pc = 0x24E714u;
label_24e714:
    // 0x24e714: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
label_24e718:
    if (ctx->pc == 0x24E718u) {
        ctx->pc = 0x24E71Cu;
        goto label_24e71c;
    }
    ctx->pc = 0x24E714u;
    {
        const bool branch_taken_0x24e714 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e714) {
            ctx->pc = 0x24E758u;
            goto label_24e758;
        }
    }
    ctx->pc = 0x24E71Cu;
label_24e71c:
    // 0x24e71c: 0x838294f0  lb          $v0, -0x6B10($gp)
    ctx->pc = 0x24e71cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939888)));
label_24e720:
    // 0x24e720: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_24e724:
    if (ctx->pc == 0x24E724u) {
        ctx->pc = 0x24E728u;
        goto label_24e728;
    }
    ctx->pc = 0x24E720u;
    {
        const bool branch_taken_0x24e720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e720) {
            ctx->pc = 0x24E734u;
            goto label_24e734;
        }
    }
    ctx->pc = 0x24E728u;
label_24e728:
    // 0x24e728: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x24e728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_24e72c:
    // 0x24e72c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x24e72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24e730:
    // 0x24e730: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x24e730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
label_24e734:
    // 0x24e734: 0x8e99010c  lw          $t9, 0x10C($s4)
    ctx->pc = 0x24e734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_24e738:
    // 0x24e738: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x24e738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_24e73c:
    // 0x24e73c: 0x320f809  jalr        $t9
label_24e740:
    if (ctx->pc == 0x24E740u) {
        ctx->pc = 0x24E740u;
            // 0x24e740: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E744u;
        goto label_24e744;
    }
    ctx->pc = 0x24E73Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24E744u);
        ctx->pc = 0x24E740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E73Cu;
            // 0x24e740: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24E744u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24E744u; }
            if (ctx->pc != 0x24E744u) { return; }
        }
        }
    }
    ctx->pc = 0x24E744u;
label_24e744:
    // 0x24e744: 0x10000004  b           . + 4 + (0x4 << 2)
label_24e748:
    if (ctx->pc == 0x24E748u) {
        ctx->pc = 0x24E748u;
            // 0x24e748: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x24E74Cu;
        goto label_24e74c;
    }
    ctx->pc = 0x24E744u;
    {
        const bool branch_taken_0x24e744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E744u;
            // 0x24e748: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e744) {
            ctx->pc = 0x24E758u;
            goto label_24e758;
        }
    }
    ctx->pc = 0x24E74Cu;
label_24e74c:
    // 0x24e74c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24e74cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24e750:
    // 0x24e750: 0xc093860  jal         func_24E180
label_24e754:
    if (ctx->pc == 0x24E754u) {
        ctx->pc = 0x24E754u;
            // 0x24e754: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E758u;
        goto label_24e758;
    }
    ctx->pc = 0x24E750u;
    SET_GPR_U32(ctx, 31, 0x24E758u);
    ctx->pc = 0x24E754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E750u;
            // 0x24e754: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24E180u;
    if (runtime->hasFunction(0x24E180u)) {
        auto targetFn = runtime->lookupFunction(0x24E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E758u; }
        if (ctx->pc != 0x24E758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyStepLocal__13CMenuItemInfoFiii_0x24e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E758u; }
        if (ctx->pc != 0x24E758u) { return; }
    }
    ctx->pc = 0x24E758u;
label_24e758:
    // 0x24e758: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x24e758u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_24e75c:
    // 0x24e75c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24e760:
    // 0x24e760: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_24e764:
    if (ctx->pc == 0x24E764u) {
        ctx->pc = 0x24E764u;
            // 0x24e764: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E768u;
        goto label_24e768;
    }
    ctx->pc = 0x24E760u;
    {
        const bool branch_taken_0x24e760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24E764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E760u;
            // 0x24e764: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e760) {
            ctx->pc = 0x24E774u;
            goto label_24e774;
        }
    }
    ctx->pc = 0x24E768u;
label_24e768:
    // 0x24e768: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x24e768u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_24e76c:
    // 0x24e76c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_24e770:
    if (ctx->pc == 0x24E770u) {
        ctx->pc = 0x24E774u;
        goto label_24e774;
    }
    ctx->pc = 0x24E76Cu;
    {
        const bool branch_taken_0x24e76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e76c) {
            ctx->pc = 0x24E790u;
            goto label_24e790;
        }
    }
    ctx->pc = 0x24E774u;
label_24e774:
    // 0x24e774: 0xc0932a8  jal         func_24CAA0
label_24e778:
    if (ctx->pc == 0x24E778u) {
        ctx->pc = 0x24E77Cu;
        goto label_24e77c;
    }
    ctx->pc = 0x24E774u;
    SET_GPR_U32(ctx, 31, 0x24E77Cu);
    ctx->pc = 0x24CAA0u;
    if (runtime->hasFunction(0x24CAA0u)) {
        auto targetFn = runtime->lookupFunction(0x24CAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E77Cu; }
        if (ctx->pc != 0x24E77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ModelReadEndCheck__13CMenuItemInfoFv_0x24caa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E77Cu; }
        if (ctx->pc != 0x24E77Cu) { return; }
    }
    ctx->pc = 0x24E77Cu;
label_24e77c:
    // 0x24e77c: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x24e77cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_24e780:
    // 0x24e780: 0xc0abf10  jal         func_2AFC40
label_24e784:
    if (ctx->pc == 0x24E784u) {
        ctx->pc = 0x24E784u;
            // 0x24e784: 0x2484ca80  addiu       $a0, $a0, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
        ctx->pc = 0x24E788u;
        goto label_24e788;
    }
    ctx->pc = 0x24E780u;
    SET_GPR_U32(ctx, 31, 0x24E788u);
    ctx->pc = 0x24E784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E780u;
            // 0x24e784: 0x2484ca80  addiu       $a0, $a0, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFC40u;
    if (runtime->hasFunction(0x2AFC40u)) {
        auto targetFn = runtime->lookupFunction(0x2AFC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E788u; }
        if (ctx->pc != 0x24E788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuLoadFileCheck__FPP17MENU_BGREAD_INFO2_0x2afc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E788u; }
        if (ctx->pc != 0x24E788u) { return; }
    }
    ctx->pc = 0x24E788u;
label_24e788:
    // 0x24e788: 0x2b63c  dsll32      $s6, $v0, 24
    ctx->pc = 0x24e788u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 24));
label_24e78c:
    // 0x24e78c: 0x16b63f  dsra32      $s6, $s6, 24
    ctx->pc = 0x24e78cu;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 24));
label_24e790:
    // 0x24e790: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x24e790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_24e794:
    // 0x24e794: 0x8c22ca80  lw          $v0, -0x3580($at)
    ctx->pc = 0x24e794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953600)));
label_24e798:
    // 0x24e798: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x24e798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_24e79c:
    // 0x24e79c: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
label_24e7a0:
    if (ctx->pc == 0x24E7A0u) {
        ctx->pc = 0x24E7A0u;
            // 0x24e7a0: 0x16163c  dsll32      $v0, $s6, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 24));
        ctx->pc = 0x24E7A4u;
        goto label_24e7a4;
    }
    ctx->pc = 0x24E79Cu;
    {
        const bool branch_taken_0x24e79c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E79Cu;
            // 0x24e7a0: 0x16163c  dsll32      $v0, $s6, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e79c) {
            ctx->pc = 0x24E84Cu;
            goto label_24e84c;
        }
    }
    ctx->pc = 0x24E7A4u;
label_24e7a4:
    // 0x24e7a4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x24e7a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_24e7a8:
    // 0x24e7a8: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_24e7ac:
    if (ctx->pc == 0x24E7ACu) {
        ctx->pc = 0x24E7B0u;
        goto label_24e7b0;
    }
    ctx->pc = 0x24E7A8u;
    {
        const bool branch_taken_0x24e7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e7a8) {
            ctx->pc = 0x24E84Cu;
            goto label_24e84c;
        }
    }
    ctx->pc = 0x24E7B0u;
label_24e7b0:
    // 0x24e7b0: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x24e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_24e7b4:
    // 0x24e7b4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x24e7b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_24e7b8:
    // 0x24e7b8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_24e7bc:
    if (ctx->pc == 0x24E7BCu) {
        ctx->pc = 0x24E7C0u;
        goto label_24e7c0;
    }
    ctx->pc = 0x24E7B8u;
    {
        const bool branch_taken_0x24e7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e7b8) {
            ctx->pc = 0x24E84Cu;
            goto label_24e84c;
        }
    }
    ctx->pc = 0x24E7C0u;
label_24e7c0:
    // 0x24e7c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24e7c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24e7c4:
    // 0x24e7c4: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x24e7c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_24e7c8:
    // 0x24e7c8: 0x320f809  jalr        $t9
label_24e7cc:
    if (ctx->pc == 0x24E7CCu) {
        ctx->pc = 0x24E7D0u;
        goto label_24e7d0;
    }
    ctx->pc = 0x24E7C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24E7D0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x24E7D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24E7D0u; }
            if (ctx->pc != 0x24E7D0u) { return; }
        }
        }
    }
    ctx->pc = 0x24E7D0u;
label_24e7d0:
    // 0x24e7d0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x24e7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_24e7d4:
    // 0x24e7d4: 0x8c22ca80  lw          $v0, -0x3580($at)
    ctx->pc = 0x24e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953600)));
label_24e7d8:
    // 0x24e7d8: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x24e7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_24e7dc:
    // 0x24e7dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24e7dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24e7e0:
    // 0x24e7e0: 0x8f390114  lw          $t9, 0x114($t9)
    ctx->pc = 0x24e7e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 276)));
label_24e7e4:
    // 0x24e7e4: 0x320f809  jalr        $t9
label_24e7e8:
    if (ctx->pc == 0x24E7E8u) {
        ctx->pc = 0x24E7ECu;
        goto label_24e7ec;
    }
    ctx->pc = 0x24E7E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24E7ECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x24E7ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24E7ECu; }
            if (ctx->pc != 0x24E7ECu) { return; }
        }
        }
    }
    ctx->pc = 0x24E7ECu;
label_24e7ec:
    // 0x24e7ec: 0xc064268  jal         func_1909A0
label_24e7f0:
    if (ctx->pc == 0x24E7F0u) {
        ctx->pc = 0x24E7F4u;
        goto label_24e7f4;
    }
    ctx->pc = 0x24E7ECu;
    SET_GPR_U32(ctx, 31, 0x24E7F4u);
    ctx->pc = 0x1909A0u;
    if (runtime->hasFunction(0x1909A0u)) {
        auto targetFn = runtime->lookupFunction(0x1909A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E7F4u; }
        if (ctx->pc != 0x24E7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowLoopNo__Fv_0x1909a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E7F4u; }
        if (ctx->pc != 0x24E7F4u) { return; }
    }
    ctx->pc = 0x24E7F4u;
label_24e7f4:
    // 0x24e7f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24e7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24e7f8:
    // 0x24e7f8: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
label_24e7fc:
    if (ctx->pc == 0x24E7FCu) {
        ctx->pc = 0x24E800u;
        goto label_24e800;
    }
    ctx->pc = 0x24E7F8u;
    {
        const bool branch_taken_0x24e7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24e7f8) {
            ctx->pc = 0x24E84Cu;
            goto label_24e84c;
        }
    }
    ctx->pc = 0x24E800u;
label_24e800:
    // 0x24e800: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x24e800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_24e804:
    // 0x24e804: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_24e808:
    if (ctx->pc == 0x24E808u) {
        ctx->pc = 0x24E808u;
            // 0x24e808: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x24E80Cu;
        goto label_24e80c;
    }
    ctx->pc = 0x24E804u;
    {
        const bool branch_taken_0x24e804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E804u;
            // 0x24e808: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e804) {
            ctx->pc = 0x24E84Cu;
            goto label_24e84c;
        }
    }
    ctx->pc = 0x24E80Cu;
label_24e80c:
    // 0x24e80c: 0xc0b8884  jal         func_2E2210
label_24e810:
    if (ctx->pc == 0x24E810u) {
        ctx->pc = 0x24E810u;
            // 0x24e810: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E814u;
        goto label_24e814;
    }
    ctx->pc = 0x24E80Cu;
    SET_GPR_U32(ctx, 31, 0x24E814u);
    ctx->pc = 0x24E810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E80Cu;
            // 0x24e810: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2210u;
    if (runtime->hasFunction(0x2E2210u)) {
        auto targetFn = runtime->lookupFunction(0x2E2210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E814u; }
        if (ctx->pc != 0x24E814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseFromLevel__16CEffectScriptManFii_0x2e2210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E814u; }
        if (ctx->pc != 0x24E814u) { return; }
    }
    ctx->pc = 0x24E814u;
label_24e814:
    // 0x24e814: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x24e814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_24e818:
    // 0x24e818: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24e818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24e81c:
    // 0x24e81c: 0xc0b8884  jal         func_2E2210
label_24e820:
    if (ctx->pc == 0x24E820u) {
        ctx->pc = 0x24E820u;
            // 0x24e820: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x24E824u;
        goto label_24e824;
    }
    ctx->pc = 0x24E81Cu;
    SET_GPR_U32(ctx, 31, 0x24E824u);
    ctx->pc = 0x24E820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E81Cu;
            // 0x24e820: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2210u;
    if (runtime->hasFunction(0x2E2210u)) {
        auto targetFn = runtime->lookupFunction(0x2E2210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E824u; }
        if (ctx->pc != 0x24E824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseFromLevel__16CEffectScriptManFii_0x2e2210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E824u; }
        if (ctx->pc != 0x24E824u) { return; }
    }
    ctx->pc = 0x24E824u;
label_24e824:
    // 0x24e824: 0xc0b8580  jal         func_2E1600
label_24e828:
    if (ctx->pc == 0x24E828u) {
        ctx->pc = 0x24E828u;
            // 0x24e828: 0x8f848ddc  lw          $a0, -0x7224($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
        ctx->pc = 0x24E82Cu;
        goto label_24e82c;
    }
    ctx->pc = 0x24E824u;
    SET_GPR_U32(ctx, 31, 0x24E82Cu);
    ctx->pc = 0x24E828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E824u;
            // 0x24e828: 0x8f848ddc  lw          $a0, -0x7224($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1600u;
    if (runtime->hasFunction(0x2E1600u)) {
        auto targetFn = runtime->lookupFunction(0x2E1600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E82Cu; }
        if (ctx->pc != 0x24E82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__16CEffectScriptManFv_0x2e1600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E82Cu; }
        if (ctx->pc != 0x24E82Cu) { return; }
    }
    ctx->pc = 0x24E82Cu;
label_24e82c:
    // 0x24e82c: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x24e82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_24e830:
    // 0x24e830: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x24e830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24e834:
    // 0x24e834: 0xc0b8884  jal         func_2E2210
label_24e838:
    if (ctx->pc == 0x24E838u) {
        ctx->pc = 0x24E838u;
            // 0x24e838: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E83Cu;
        goto label_24e83c;
    }
    ctx->pc = 0x24E834u;
    SET_GPR_U32(ctx, 31, 0x24E83Cu);
    ctx->pc = 0x24E838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E834u;
            // 0x24e838: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2210u;
    if (runtime->hasFunction(0x2E2210u)) {
        auto targetFn = runtime->lookupFunction(0x2E2210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E83Cu; }
        if (ctx->pc != 0x24E83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseFromLevel__16CEffectScriptManFii_0x2e2210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E83Cu; }
        if (ctx->pc != 0x24E83Cu) { return; }
    }
    ctx->pc = 0x24E83Cu;
label_24e83c:
    // 0x24e83c: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x24e83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_24e840:
    // 0x24e840: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24e840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24e844:
    // 0x24e844: 0xc0b8884  jal         func_2E2210
label_24e848:
    if (ctx->pc == 0x24E848u) {
        ctx->pc = 0x24E848u;
            // 0x24e848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E84Cu;
        goto label_24e84c;
    }
    ctx->pc = 0x24E844u;
    SET_GPR_U32(ctx, 31, 0x24E84Cu);
    ctx->pc = 0x24E848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E844u;
            // 0x24e848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2210u;
    if (runtime->hasFunction(0x2E2210u)) {
        auto targetFn = runtime->lookupFunction(0x2E2210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E84Cu; }
        if (ctx->pc != 0x24E84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseFromLevel__16CEffectScriptManFii_0x2e2210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E84Cu; }
        if (ctx->pc != 0x24E84Cu) { return; }
    }
    ctx->pc = 0x24E84Cu;
label_24e84c:
    // 0x24e84c: 0xc08d208  jal         func_234820
label_24e850:
    if (ctx->pc == 0x24E850u) {
        ctx->pc = 0x24E854u;
        goto label_24e854;
    }
    ctx->pc = 0x24E84Cu;
    SET_GPR_U32(ctx, 31, 0x24E854u);
    ctx->pc = 0x234820u;
    if (runtime->hasFunction(0x234820u)) {
        auto targetFn = runtime->lookupFunction(0x234820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E854u; }
        if (ctx->pc != 0x24E854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonMenuModeID__Fv_0x234820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E854u; }
        if (ctx->pc != 0x24E854u) { return; }
    }
    ctx->pc = 0x24E854u;
label_24e854:
    // 0x24e854: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24e854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e858:
    // 0x24e858: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x24e858u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24e85c:
    // 0x24e85c: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x24e85cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_24e860:
    // 0x24e860: 0x14510002  bne         $v0, $s1, . + 4 + (0x2 << 2)
label_24e864:
    if (ctx->pc == 0x24E864u) {
        ctx->pc = 0x24E868u;
        goto label_24e868;
    }
    ctx->pc = 0x24E860u;
    {
        const bool branch_taken_0x24e860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x24e860) {
            ctx->pc = 0x24E86Cu;
            goto label_24e86c;
        }
    }
    ctx->pc = 0x24E868u;
label_24e868:
    // 0x24e868: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24e868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24e86c:
    // 0x24e86c: 0xc08ca8c  jal         func_232A30
label_24e870:
    if (ctx->pc == 0x24E870u) {
        ctx->pc = 0x24E874u;
        goto label_24e874;
    }
    ctx->pc = 0x24E86Cu;
    SET_GPR_U32(ctx, 31, 0x24E874u);
    ctx->pc = 0x232A30u;
    if (runtime->hasFunction(0x232A30u)) {
        auto targetFn = runtime->lookupFunction(0x232A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E874u; }
        if (ctx->pc != 0x24E874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTrushMenu__Fv_0x232a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E874u; }
        if (ctx->pc != 0x24E874u) { return; }
    }
    ctx->pc = 0x24E874u;
label_24e874:
    // 0x24e874: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_24e878:
    if (ctx->pc == 0x24E878u) {
        ctx->pc = 0x24E87Cu;
        goto label_24e87c;
    }
    ctx->pc = 0x24E874u;
    {
        const bool branch_taken_0x24e874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e874) {
            ctx->pc = 0x24E880u;
            goto label_24e880;
        }
    }
    ctx->pc = 0x24E87Cu;
label_24e87c:
    // 0x24e87c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x24e87cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24e880:
    // 0x24e880: 0x92820170  lbu         $v0, 0x170($s4)
    ctx->pc = 0x24e880u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 368)));
label_24e884:
    // 0x24e884: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_24e888:
    if (ctx->pc == 0x24E888u) {
        ctx->pc = 0x24E88Cu;
        goto label_24e88c;
    }
    ctx->pc = 0x24E884u;
    {
        const bool branch_taken_0x24e884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e884) {
            ctx->pc = 0x24E890u;
            goto label_24e890;
        }
    }
    ctx->pc = 0x24E88Cu;
label_24e88c:
    // 0x24e88c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x24e88cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24e890:
    // 0x24e890: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x24e890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_24e894:
    // 0x24e894: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24e894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24e898:
    // 0x24e898: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x24e898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24e89c:
    // 0x24e89c: 0xc08ad64  jal         func_22B590
label_24e8a0:
    if (ctx->pc == 0x24E8A0u) {
        ctx->pc = 0x24E8A0u;
            // 0x24e8a0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x24E8A4u;
        goto label_24e8a4;
    }
    ctx->pc = 0x24E89Cu;
    SET_GPR_U32(ctx, 31, 0x24E8A4u);
    ctx->pc = 0x24E8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E89Cu;
            // 0x24e8a0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B590u;
    if (runtime->hasFunction(0x22B590u)) {
        auto targetFn = runtime->lookupFunction(0x22B590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E8A4u; }
        if (ctx->pc != 0x24E8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMainMenuIconMove__18CMenuPosDataManageFPiii_0x22b590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E8A4u; }
        if (ctx->pc != 0x24E8A4u) { return; }
    }
    ctx->pc = 0x24E8A4u;
label_24e8a4:
    // 0x24e8a4: 0xc08acc8  jal         func_22B320
label_24e8a8:
    if (ctx->pc == 0x24E8A8u) {
        ctx->pc = 0x24E8A8u;
            // 0x24e8a8: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->pc = 0x24E8ACu;
        goto label_24e8ac;
    }
    ctx->pc = 0x24E8A4u;
    SET_GPR_U32(ctx, 31, 0x24E8ACu);
    ctx->pc = 0x24E8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E8A4u;
            // 0x24e8a8: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B320u;
    if (runtime->hasFunction(0x22B320u)) {
        auto targetFn = runtime->lookupFunction(0x22B320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E8ACu; }
        if (ctx->pc != 0x24E8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormStep__14CPosDataManageFv_0x22b320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E8ACu; }
        if (ctx->pc != 0x24E8ACu) { return; }
    }
    ctx->pc = 0x24E8ACu;
label_24e8ac:
    // 0x24e8ac: 0xc090f28  jal         func_243CA0
label_24e8b0:
    if (ctx->pc == 0x24E8B0u) {
        ctx->pc = 0x24E8B0u;
            // 0x24e8b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E8B4u;
        goto label_24e8b4;
    }
    ctx->pc = 0x24E8ACu;
    SET_GPR_U32(ctx, 31, 0x24E8B4u);
    ctx->pc = 0x24E8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E8ACu;
            // 0x24e8b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243CA0u;
    if (runtime->hasFunction(0x243CA0u)) {
        auto targetFn = runtime->lookupFunction(0x243CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E8B4u; }
        if (ctx->pc != 0x24E8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcTex__13CMenuItemInfoFv_0x243ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E8B4u; }
        if (ctx->pc != 0x24E8B4u) { return; }
    }
    ctx->pc = 0x24E8B4u;
label_24e8b4:
    // 0x24e8b4: 0xc091268  jal         func_2449A0
label_24e8b8:
    if (ctx->pc == 0x24E8B8u) {
        ctx->pc = 0x24E8B8u;
            // 0x24e8b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E8BCu;
        goto label_24e8bc;
    }
    ctx->pc = 0x24E8B4u;
    SET_GPR_U32(ctx, 31, 0x24E8BCu);
    ctx->pc = 0x24E8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E8B4u;
            // 0x24e8b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2449A0u;
    if (runtime->hasFunction(0x2449A0u)) {
        auto targetFn = runtime->lookupFunction(0x2449A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E8BCu; }
        if (ctx->pc != 0x24E8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcCursorPosition__13CMenuItemInfoFv_0x2449a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E8BCu; }
        if (ctx->pc != 0x24E8BCu) { return; }
    }
    ctx->pc = 0x24E8BCu;
label_24e8bc:
    // 0x24e8bc: 0xc08c258  jal         func_230960
label_24e8c0:
    if (ctx->pc == 0x24E8C0u) {
        ctx->pc = 0x24E8C0u;
            // 0x24e8c0: 0x8f8495c8  lw          $a0, -0x6A38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940104)));
        ctx->pc = 0x24E8C4u;
        goto label_24e8c4;
    }
    ctx->pc = 0x24E8BCu;
    SET_GPR_U32(ctx, 31, 0x24E8C4u);
    ctx->pc = 0x24E8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E8BCu;
            // 0x24e8c0: 0x8f8495c8  lw          $a0, -0x6A38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230960u;
    if (runtime->hasFunction(0x230960u)) {
        auto targetFn = runtime->lookupFunction(0x230960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E8C4u; }
        if (ctx->pc != 0x24E8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__11CMenuEffectFv_0x230960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E8C4u; }
        if (ctx->pc != 0x24E8C4u) { return; }
    }
    ctx->pc = 0x24E8C4u;
label_24e8c4:
    // 0x24e8c4: 0xc08c258  jal         func_230960
label_24e8c8:
    if (ctx->pc == 0x24E8C8u) {
        ctx->pc = 0x24E8C8u;
            // 0x24e8c8: 0x8f8495cc  lw          $a0, -0x6A34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940108)));
        ctx->pc = 0x24E8CCu;
        goto label_24e8cc;
    }
    ctx->pc = 0x24E8C4u;
    SET_GPR_U32(ctx, 31, 0x24E8CCu);
    ctx->pc = 0x24E8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E8C4u;
            // 0x24e8c8: 0x8f8495cc  lw          $a0, -0x6A34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230960u;
    if (runtime->hasFunction(0x230960u)) {
        auto targetFn = runtime->lookupFunction(0x230960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E8CCu; }
        if (ctx->pc != 0x24E8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__11CMenuEffectFv_0x230960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E8CCu; }
        if (ctx->pc != 0x24E8CCu) { return; }
    }
    ctx->pc = 0x24E8CCu;
label_24e8cc:
    // 0x24e8cc: 0xc08b7d8  jal         func_22DF60
label_24e8d0:
    if (ctx->pc == 0x24E8D0u) {
        ctx->pc = 0x24E8D0u;
            // 0x24e8d0: 0x8f849584  lw          $a0, -0x6A7C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940036)));
        ctx->pc = 0x24E8D4u;
        goto label_24e8d4;
    }
    ctx->pc = 0x24E8CCu;
    SET_GPR_U32(ctx, 31, 0x24E8D4u);
    ctx->pc = 0x24E8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E8CCu;
            // 0x24e8d0: 0x8f849584  lw          $a0, -0x6A7C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940036)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22DF60u;
    if (runtime->hasFunction(0x22DF60u)) {
        auto targetFn = runtime->lookupFunction(0x22DF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E8D4u; }
        if (ctx->pc != 0x24E8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__14CRepairManagerFv_0x22df60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E8D4u; }
        if (ctx->pc != 0x24E8D4u) { return; }
    }
    ctx->pc = 0x24E8D4u;
label_24e8d4:
    // 0x24e8d4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x24e8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_24e8d8:
    // 0x24e8d8: 0xc08baa8  jal         func_22EAA0
label_24e8dc:
    if (ctx->pc == 0x24E8DCu) {
        ctx->pc = 0x24E8DCu;
            // 0x24e8dc: 0x2484d920  addiu       $a0, $a0, -0x26E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957344));
        ctx->pc = 0x24E8E0u;
        goto label_24e8e0;
    }
    ctx->pc = 0x24E8D8u;
    SET_GPR_U32(ctx, 31, 0x24E8E0u);
    ctx->pc = 0x24E8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E8D8u;
            // 0x24e8dc: 0x2484d920  addiu       $a0, $a0, -0x26E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22EAA0u;
    if (runtime->hasFunction(0x22EAA0u)) {
        auto targetFn = runtime->lookupFunction(0x22EAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E8E0u; }
        if (ctx->pc != 0x24E8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__21CLevelUpEffectManagerFv_0x22eaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E8E0u; }
        if (ctx->pc != 0x24E8E0u) { return; }
    }
    ctx->pc = 0x24E8E0u;
label_24e8e0:
    // 0x24e8e0: 0xc08bd14  jal         func_22F450
label_24e8e4:
    if (ctx->pc == 0x24E8E4u) {
        ctx->pc = 0x24E8E8u;
        goto label_24e8e8;
    }
    ctx->pc = 0x24E8E0u;
    SET_GPR_U32(ctx, 31, 0x24E8E8u);
    ctx->pc = 0x22F450u;
    if (runtime->hasFunction(0x22F450u)) {
        auto targetFn = runtime->lookupFunction(0x22F450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E8E8u; }
        if (ctx->pc != 0x24E8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepBuildUpInfoEffect__Fv_0x22f450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E8E8u; }
        if (ctx->pc != 0x24E8E8u) { return; }
    }
    ctx->pc = 0x24E8E8u;
label_24e8e8:
    // 0x24e8e8: 0xc7819750  lwc1        $f1, -0x68B0($gp)
    ctx->pc = 0x24e8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24e8ec:
    // 0x24e8ec: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x24e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
label_24e8f0:
    // 0x24e8f0: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x24e8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_24e8f4:
    // 0x24e8f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24e8f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24e8f8:
    // 0x24e8f8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x24e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_24e8fc:
    // 0x24e8fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x24e8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_24e900:
    // 0x24e900: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x24e900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_24e904:
    // 0x24e904: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24e904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_24e908:
    // 0x24e908: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x24e908u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24e90c:
    // 0x24e90c: 0x0  nop
    ctx->pc = 0x24e90cu;
    // NOP
label_24e910:
    // 0x24e910: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_24e914:
    if (ctx->pc == 0x24E914u) {
        ctx->pc = 0x24E914u;
            // 0x24e914: 0xe7809750  swc1        $f0, -0x68B0($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940496), bits); }
        ctx->pc = 0x24E918u;
        goto label_24e918;
    }
    ctx->pc = 0x24E910u;
    {
        const bool branch_taken_0x24e910 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E910u;
            // 0x24e914: 0xe7809750  swc1        $f0, -0x68B0($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940496), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e910) {
            ctx->pc = 0x24E920u;
            goto label_24e920;
        }
    }
    ctx->pc = 0x24E918u;
label_24e918:
    // 0x24e918: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x24e918u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_24e91c:
    // 0x24e91c: 0xe7809750  swc1        $f0, -0x68B0($gp)
    ctx->pc = 0x24e91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940496), bits); }
label_24e920:
    // 0x24e920: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24e920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24e924:
    // 0x24e924: 0x8c22dab8  lw          $v0, -0x2548($at)
    ctx->pc = 0x24e924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957752)));
label_24e928:
    // 0x24e928: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24e928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_24e92c:
    // 0x24e92c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24e92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24e930:
    // 0x24e930: 0xac22dab8  sw          $v0, -0x2548($at)
    ctx->pc = 0x24e930u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957752), GPR_U32(ctx, 2));
label_24e934:
    // 0x24e934: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24e934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24e938:
    // 0x24e938: 0x8c22dab8  lw          $v0, -0x2548($at)
    ctx->pc = 0x24e938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957752)));
label_24e93c:
    // 0x24e93c: 0x2842001e  slti        $v0, $v0, 0x1E
    ctx->pc = 0x24e93cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
label_24e940:
    // 0x24e940: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_24e944:
    if (ctx->pc == 0x24E944u) {
        ctx->pc = 0x24E944u;
            // 0x24e944: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E948u;
        goto label_24e948;
    }
    ctx->pc = 0x24E940u;
    {
        const bool branch_taken_0x24e940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E940u;
            // 0x24e944: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e940) {
            ctx->pc = 0x24E950u;
            goto label_24e950;
        }
    }
    ctx->pc = 0x24E948u;
label_24e948:
    // 0x24e948: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24e948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24e94c:
    // 0x24e94c: 0xac20dab8  sw          $zero, -0x2548($at)
    ctx->pc = 0x24e94cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957752), GPR_U32(ctx, 0));
label_24e950:
    // 0x24e950: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x24e950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_24e954:
    // 0x24e954: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x24e954u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_24e958:
    // 0x24e958: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24e958u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24e95c:
    // 0x24e95c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24e95cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24e960:
    // 0x24e960: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24e960u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24e964:
    // 0x24e964: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24e964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24e968:
    // 0x24e968: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24e968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24e96c:
    // 0x24e96c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24e96cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24e970:
    // 0x24e970: 0x3e00008  jr          $ra
label_24e974:
    if (ctx->pc == 0x24E974u) {
        ctx->pc = 0x24E974u;
            // 0x24e974: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x24E978u;
        goto label_fallthrough_0x24e970;
    }
    ctx->pc = 0x24E970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E970u;
            // 0x24e974: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x24e970:
    ctx->pc = 0x24E978u;
}
