#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateFaceMotionPacket__18mgCVisualMotionMDTFPUiP7mgCFaceP14mgCVMotionData
// Address: 0x28a0d0 - 0x28a65c
void CreateFaceMotionPacket__18mgCVisualMotionMDTFPUiP7mgCFaceP14mgCVMotionData_0x28a0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateFaceMotionPacket__18mgCVisualMotionMDTFPUiP7mgCFaceP14mgCVMotionData_0x28a0d0");
#endif

    switch (ctx->pc) {
        case 0x28a0d0u: goto label_28a0d0;
        case 0x28a0d4u: goto label_28a0d4;
        case 0x28a0d8u: goto label_28a0d8;
        case 0x28a0dcu: goto label_28a0dc;
        case 0x28a0e0u: goto label_28a0e0;
        case 0x28a0e4u: goto label_28a0e4;
        case 0x28a0e8u: goto label_28a0e8;
        case 0x28a0ecu: goto label_28a0ec;
        case 0x28a0f0u: goto label_28a0f0;
        case 0x28a0f4u: goto label_28a0f4;
        case 0x28a0f8u: goto label_28a0f8;
        case 0x28a0fcu: goto label_28a0fc;
        case 0x28a100u: goto label_28a100;
        case 0x28a104u: goto label_28a104;
        case 0x28a108u: goto label_28a108;
        case 0x28a10cu: goto label_28a10c;
        case 0x28a110u: goto label_28a110;
        case 0x28a114u: goto label_28a114;
        case 0x28a118u: goto label_28a118;
        case 0x28a11cu: goto label_28a11c;
        case 0x28a120u: goto label_28a120;
        case 0x28a124u: goto label_28a124;
        case 0x28a128u: goto label_28a128;
        case 0x28a12cu: goto label_28a12c;
        case 0x28a130u: goto label_28a130;
        case 0x28a134u: goto label_28a134;
        case 0x28a138u: goto label_28a138;
        case 0x28a13cu: goto label_28a13c;
        case 0x28a140u: goto label_28a140;
        case 0x28a144u: goto label_28a144;
        case 0x28a148u: goto label_28a148;
        case 0x28a14cu: goto label_28a14c;
        case 0x28a150u: goto label_28a150;
        case 0x28a154u: goto label_28a154;
        case 0x28a158u: goto label_28a158;
        case 0x28a15cu: goto label_28a15c;
        case 0x28a160u: goto label_28a160;
        case 0x28a164u: goto label_28a164;
        case 0x28a168u: goto label_28a168;
        case 0x28a16cu: goto label_28a16c;
        case 0x28a170u: goto label_28a170;
        case 0x28a174u: goto label_28a174;
        case 0x28a178u: goto label_28a178;
        case 0x28a17cu: goto label_28a17c;
        case 0x28a180u: goto label_28a180;
        case 0x28a184u: goto label_28a184;
        case 0x28a188u: goto label_28a188;
        case 0x28a18cu: goto label_28a18c;
        case 0x28a190u: goto label_28a190;
        case 0x28a194u: goto label_28a194;
        case 0x28a198u: goto label_28a198;
        case 0x28a19cu: goto label_28a19c;
        case 0x28a1a0u: goto label_28a1a0;
        case 0x28a1a4u: goto label_28a1a4;
        case 0x28a1a8u: goto label_28a1a8;
        case 0x28a1acu: goto label_28a1ac;
        case 0x28a1b0u: goto label_28a1b0;
        case 0x28a1b4u: goto label_28a1b4;
        case 0x28a1b8u: goto label_28a1b8;
        case 0x28a1bcu: goto label_28a1bc;
        case 0x28a1c0u: goto label_28a1c0;
        case 0x28a1c4u: goto label_28a1c4;
        case 0x28a1c8u: goto label_28a1c8;
        case 0x28a1ccu: goto label_28a1cc;
        case 0x28a1d0u: goto label_28a1d0;
        case 0x28a1d4u: goto label_28a1d4;
        case 0x28a1d8u: goto label_28a1d8;
        case 0x28a1dcu: goto label_28a1dc;
        case 0x28a1e0u: goto label_28a1e0;
        case 0x28a1e4u: goto label_28a1e4;
        case 0x28a1e8u: goto label_28a1e8;
        case 0x28a1ecu: goto label_28a1ec;
        case 0x28a1f0u: goto label_28a1f0;
        case 0x28a1f4u: goto label_28a1f4;
        case 0x28a1f8u: goto label_28a1f8;
        case 0x28a1fcu: goto label_28a1fc;
        case 0x28a200u: goto label_28a200;
        case 0x28a204u: goto label_28a204;
        case 0x28a208u: goto label_28a208;
        case 0x28a20cu: goto label_28a20c;
        case 0x28a210u: goto label_28a210;
        case 0x28a214u: goto label_28a214;
        case 0x28a218u: goto label_28a218;
        case 0x28a21cu: goto label_28a21c;
        case 0x28a220u: goto label_28a220;
        case 0x28a224u: goto label_28a224;
        case 0x28a228u: goto label_28a228;
        case 0x28a22cu: goto label_28a22c;
        case 0x28a230u: goto label_28a230;
        case 0x28a234u: goto label_28a234;
        case 0x28a238u: goto label_28a238;
        case 0x28a23cu: goto label_28a23c;
        case 0x28a240u: goto label_28a240;
        case 0x28a244u: goto label_28a244;
        case 0x28a248u: goto label_28a248;
        case 0x28a24cu: goto label_28a24c;
        case 0x28a250u: goto label_28a250;
        case 0x28a254u: goto label_28a254;
        case 0x28a258u: goto label_28a258;
        case 0x28a25cu: goto label_28a25c;
        case 0x28a260u: goto label_28a260;
        case 0x28a264u: goto label_28a264;
        case 0x28a268u: goto label_28a268;
        case 0x28a26cu: goto label_28a26c;
        case 0x28a270u: goto label_28a270;
        case 0x28a274u: goto label_28a274;
        case 0x28a278u: goto label_28a278;
        case 0x28a27cu: goto label_28a27c;
        case 0x28a280u: goto label_28a280;
        case 0x28a284u: goto label_28a284;
        case 0x28a288u: goto label_28a288;
        case 0x28a28cu: goto label_28a28c;
        case 0x28a290u: goto label_28a290;
        case 0x28a294u: goto label_28a294;
        case 0x28a298u: goto label_28a298;
        case 0x28a29cu: goto label_28a29c;
        case 0x28a2a0u: goto label_28a2a0;
        case 0x28a2a4u: goto label_28a2a4;
        case 0x28a2a8u: goto label_28a2a8;
        case 0x28a2acu: goto label_28a2ac;
        case 0x28a2b0u: goto label_28a2b0;
        case 0x28a2b4u: goto label_28a2b4;
        case 0x28a2b8u: goto label_28a2b8;
        case 0x28a2bcu: goto label_28a2bc;
        case 0x28a2c0u: goto label_28a2c0;
        case 0x28a2c4u: goto label_28a2c4;
        case 0x28a2c8u: goto label_28a2c8;
        case 0x28a2ccu: goto label_28a2cc;
        case 0x28a2d0u: goto label_28a2d0;
        case 0x28a2d4u: goto label_28a2d4;
        case 0x28a2d8u: goto label_28a2d8;
        case 0x28a2dcu: goto label_28a2dc;
        case 0x28a2e0u: goto label_28a2e0;
        case 0x28a2e4u: goto label_28a2e4;
        case 0x28a2e8u: goto label_28a2e8;
        case 0x28a2ecu: goto label_28a2ec;
        case 0x28a2f0u: goto label_28a2f0;
        case 0x28a2f4u: goto label_28a2f4;
        case 0x28a2f8u: goto label_28a2f8;
        case 0x28a2fcu: goto label_28a2fc;
        case 0x28a300u: goto label_28a300;
        case 0x28a304u: goto label_28a304;
        case 0x28a308u: goto label_28a308;
        case 0x28a30cu: goto label_28a30c;
        case 0x28a310u: goto label_28a310;
        case 0x28a314u: goto label_28a314;
        case 0x28a318u: goto label_28a318;
        case 0x28a31cu: goto label_28a31c;
        case 0x28a320u: goto label_28a320;
        case 0x28a324u: goto label_28a324;
        case 0x28a328u: goto label_28a328;
        case 0x28a32cu: goto label_28a32c;
        case 0x28a330u: goto label_28a330;
        case 0x28a334u: goto label_28a334;
        case 0x28a338u: goto label_28a338;
        case 0x28a33cu: goto label_28a33c;
        case 0x28a340u: goto label_28a340;
        case 0x28a344u: goto label_28a344;
        case 0x28a348u: goto label_28a348;
        case 0x28a34cu: goto label_28a34c;
        case 0x28a350u: goto label_28a350;
        case 0x28a354u: goto label_28a354;
        case 0x28a358u: goto label_28a358;
        case 0x28a35cu: goto label_28a35c;
        case 0x28a360u: goto label_28a360;
        case 0x28a364u: goto label_28a364;
        case 0x28a368u: goto label_28a368;
        case 0x28a36cu: goto label_28a36c;
        case 0x28a370u: goto label_28a370;
        case 0x28a374u: goto label_28a374;
        case 0x28a378u: goto label_28a378;
        case 0x28a37cu: goto label_28a37c;
        case 0x28a380u: goto label_28a380;
        case 0x28a384u: goto label_28a384;
        case 0x28a388u: goto label_28a388;
        case 0x28a38cu: goto label_28a38c;
        case 0x28a390u: goto label_28a390;
        case 0x28a394u: goto label_28a394;
        case 0x28a398u: goto label_28a398;
        case 0x28a39cu: goto label_28a39c;
        case 0x28a3a0u: goto label_28a3a0;
        case 0x28a3a4u: goto label_28a3a4;
        case 0x28a3a8u: goto label_28a3a8;
        case 0x28a3acu: goto label_28a3ac;
        case 0x28a3b0u: goto label_28a3b0;
        case 0x28a3b4u: goto label_28a3b4;
        case 0x28a3b8u: goto label_28a3b8;
        case 0x28a3bcu: goto label_28a3bc;
        case 0x28a3c0u: goto label_28a3c0;
        case 0x28a3c4u: goto label_28a3c4;
        case 0x28a3c8u: goto label_28a3c8;
        case 0x28a3ccu: goto label_28a3cc;
        case 0x28a3d0u: goto label_28a3d0;
        case 0x28a3d4u: goto label_28a3d4;
        case 0x28a3d8u: goto label_28a3d8;
        case 0x28a3dcu: goto label_28a3dc;
        case 0x28a3e0u: goto label_28a3e0;
        case 0x28a3e4u: goto label_28a3e4;
        case 0x28a3e8u: goto label_28a3e8;
        case 0x28a3ecu: goto label_28a3ec;
        case 0x28a3f0u: goto label_28a3f0;
        case 0x28a3f4u: goto label_28a3f4;
        case 0x28a3f8u: goto label_28a3f8;
        case 0x28a3fcu: goto label_28a3fc;
        case 0x28a400u: goto label_28a400;
        case 0x28a404u: goto label_28a404;
        case 0x28a408u: goto label_28a408;
        case 0x28a40cu: goto label_28a40c;
        case 0x28a410u: goto label_28a410;
        case 0x28a414u: goto label_28a414;
        case 0x28a418u: goto label_28a418;
        case 0x28a41cu: goto label_28a41c;
        case 0x28a420u: goto label_28a420;
        case 0x28a424u: goto label_28a424;
        case 0x28a428u: goto label_28a428;
        case 0x28a42cu: goto label_28a42c;
        case 0x28a430u: goto label_28a430;
        case 0x28a434u: goto label_28a434;
        case 0x28a438u: goto label_28a438;
        case 0x28a43cu: goto label_28a43c;
        case 0x28a440u: goto label_28a440;
        case 0x28a444u: goto label_28a444;
        case 0x28a448u: goto label_28a448;
        case 0x28a44cu: goto label_28a44c;
        case 0x28a450u: goto label_28a450;
        case 0x28a454u: goto label_28a454;
        case 0x28a458u: goto label_28a458;
        case 0x28a45cu: goto label_28a45c;
        case 0x28a460u: goto label_28a460;
        case 0x28a464u: goto label_28a464;
        case 0x28a468u: goto label_28a468;
        case 0x28a46cu: goto label_28a46c;
        case 0x28a470u: goto label_28a470;
        case 0x28a474u: goto label_28a474;
        case 0x28a478u: goto label_28a478;
        case 0x28a47cu: goto label_28a47c;
        case 0x28a480u: goto label_28a480;
        case 0x28a484u: goto label_28a484;
        case 0x28a488u: goto label_28a488;
        case 0x28a48cu: goto label_28a48c;
        case 0x28a490u: goto label_28a490;
        case 0x28a494u: goto label_28a494;
        case 0x28a498u: goto label_28a498;
        case 0x28a49cu: goto label_28a49c;
        case 0x28a4a0u: goto label_28a4a0;
        case 0x28a4a4u: goto label_28a4a4;
        case 0x28a4a8u: goto label_28a4a8;
        case 0x28a4acu: goto label_28a4ac;
        case 0x28a4b0u: goto label_28a4b0;
        case 0x28a4b4u: goto label_28a4b4;
        case 0x28a4b8u: goto label_28a4b8;
        case 0x28a4bcu: goto label_28a4bc;
        case 0x28a4c0u: goto label_28a4c0;
        case 0x28a4c4u: goto label_28a4c4;
        case 0x28a4c8u: goto label_28a4c8;
        case 0x28a4ccu: goto label_28a4cc;
        case 0x28a4d0u: goto label_28a4d0;
        case 0x28a4d4u: goto label_28a4d4;
        case 0x28a4d8u: goto label_28a4d8;
        case 0x28a4dcu: goto label_28a4dc;
        case 0x28a4e0u: goto label_28a4e0;
        case 0x28a4e4u: goto label_28a4e4;
        case 0x28a4e8u: goto label_28a4e8;
        case 0x28a4ecu: goto label_28a4ec;
        case 0x28a4f0u: goto label_28a4f0;
        case 0x28a4f4u: goto label_28a4f4;
        case 0x28a4f8u: goto label_28a4f8;
        case 0x28a4fcu: goto label_28a4fc;
        case 0x28a500u: goto label_28a500;
        case 0x28a504u: goto label_28a504;
        case 0x28a508u: goto label_28a508;
        case 0x28a50cu: goto label_28a50c;
        case 0x28a510u: goto label_28a510;
        case 0x28a514u: goto label_28a514;
        case 0x28a518u: goto label_28a518;
        case 0x28a51cu: goto label_28a51c;
        case 0x28a520u: goto label_28a520;
        case 0x28a524u: goto label_28a524;
        case 0x28a528u: goto label_28a528;
        case 0x28a52cu: goto label_28a52c;
        case 0x28a530u: goto label_28a530;
        case 0x28a534u: goto label_28a534;
        case 0x28a538u: goto label_28a538;
        case 0x28a53cu: goto label_28a53c;
        case 0x28a540u: goto label_28a540;
        case 0x28a544u: goto label_28a544;
        case 0x28a548u: goto label_28a548;
        case 0x28a54cu: goto label_28a54c;
        case 0x28a550u: goto label_28a550;
        case 0x28a554u: goto label_28a554;
        case 0x28a558u: goto label_28a558;
        case 0x28a55cu: goto label_28a55c;
        case 0x28a560u: goto label_28a560;
        case 0x28a564u: goto label_28a564;
        case 0x28a568u: goto label_28a568;
        case 0x28a56cu: goto label_28a56c;
        case 0x28a570u: goto label_28a570;
        case 0x28a574u: goto label_28a574;
        case 0x28a578u: goto label_28a578;
        case 0x28a57cu: goto label_28a57c;
        case 0x28a580u: goto label_28a580;
        case 0x28a584u: goto label_28a584;
        case 0x28a588u: goto label_28a588;
        case 0x28a58cu: goto label_28a58c;
        case 0x28a590u: goto label_28a590;
        case 0x28a594u: goto label_28a594;
        case 0x28a598u: goto label_28a598;
        case 0x28a59cu: goto label_28a59c;
        case 0x28a5a0u: goto label_28a5a0;
        case 0x28a5a4u: goto label_28a5a4;
        case 0x28a5a8u: goto label_28a5a8;
        case 0x28a5acu: goto label_28a5ac;
        case 0x28a5b0u: goto label_28a5b0;
        case 0x28a5b4u: goto label_28a5b4;
        case 0x28a5b8u: goto label_28a5b8;
        case 0x28a5bcu: goto label_28a5bc;
        case 0x28a5c0u: goto label_28a5c0;
        case 0x28a5c4u: goto label_28a5c4;
        case 0x28a5c8u: goto label_28a5c8;
        case 0x28a5ccu: goto label_28a5cc;
        case 0x28a5d0u: goto label_28a5d0;
        case 0x28a5d4u: goto label_28a5d4;
        case 0x28a5d8u: goto label_28a5d8;
        case 0x28a5dcu: goto label_28a5dc;
        case 0x28a5e0u: goto label_28a5e0;
        case 0x28a5e4u: goto label_28a5e4;
        case 0x28a5e8u: goto label_28a5e8;
        case 0x28a5ecu: goto label_28a5ec;
        case 0x28a5f0u: goto label_28a5f0;
        case 0x28a5f4u: goto label_28a5f4;
        case 0x28a5f8u: goto label_28a5f8;
        case 0x28a5fcu: goto label_28a5fc;
        case 0x28a600u: goto label_28a600;
        case 0x28a604u: goto label_28a604;
        case 0x28a608u: goto label_28a608;
        case 0x28a60cu: goto label_28a60c;
        case 0x28a610u: goto label_28a610;
        case 0x28a614u: goto label_28a614;
        case 0x28a618u: goto label_28a618;
        case 0x28a61cu: goto label_28a61c;
        case 0x28a620u: goto label_28a620;
        case 0x28a624u: goto label_28a624;
        case 0x28a628u: goto label_28a628;
        case 0x28a62cu: goto label_28a62c;
        case 0x28a630u: goto label_28a630;
        case 0x28a634u: goto label_28a634;
        case 0x28a638u: goto label_28a638;
        case 0x28a63cu: goto label_28a63c;
        case 0x28a640u: goto label_28a640;
        case 0x28a644u: goto label_28a644;
        case 0x28a648u: goto label_28a648;
        case 0x28a64cu: goto label_28a64c;
        case 0x28a650u: goto label_28a650;
        case 0x28a654u: goto label_28a654;
        case 0x28a658u: goto label_28a658;
        default: break;
    }

    ctx->pc = 0x28a0d0u;

label_28a0d0:
    // 0x28a0d0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x28a0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_28a0d4:
    // 0x28a0d4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x28a0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_28a0d8:
    // 0x28a0d8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x28a0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_28a0dc:
    // 0x28a0dc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x28a0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_28a0e0:
    // 0x28a0e0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x28a0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_28a0e4:
    // 0x28a0e4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x28a0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_28a0e8:
    // 0x28a0e8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x28a0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_28a0ec:
    // 0x28a0ec: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x28a0ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28a0f0:
    // 0x28a0f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x28a0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_28a0f4:
    // 0x28a0f4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28a0f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28a0f8:
    // 0x28a0f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28a0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_28a0fc:
    // 0x28a0fc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x28a0fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28a100:
    // 0x28a100: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28a100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_28a104:
    // 0x28a104: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_28a108:
    if (ctx->pc == 0x28A108u) {
        ctx->pc = 0x28A108u;
            // 0x28a108: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
        ctx->pc = 0x28A10Cu;
        goto label_28a10c;
    }
    ctx->pc = 0x28A104u;
    {
        const bool branch_taken_0x28a104 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A104u;
            // 0x28a108: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a104) {
            ctx->pc = 0x28A114u;
            goto label_28a114;
        }
    }
    ctx->pc = 0x28A10Cu;
label_28a10c:
    // 0x28a10c: 0x10000147  b           . + 4 + (0x147 << 2)
label_28a110:
    if (ctx->pc == 0x28A110u) {
        ctx->pc = 0x28A110u;
            // 0x28a110: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28A114u;
        goto label_28a114;
    }
    ctx->pc = 0x28A10Cu;
    {
        const bool branch_taken_0x28a10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A10Cu;
            // 0x28a110: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a10c) {
            ctx->pc = 0x28A62Cu;
            goto label_28a62c;
        }
    }
    ctx->pc = 0x28A114u;
label_28a114:
    // 0x28a114: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x28a114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_28a118:
    // 0x28a118: 0x2821824  and         $v1, $s4, $v0
    ctx->pc = 0x28a118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
label_28a11c:
    // 0x28a11c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x28a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_28a120:
    // 0x28a120: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_28a124:
    if (ctx->pc == 0x28A124u) {
        ctx->pc = 0x28A124u;
            // 0x28a124: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28A128u;
        goto label_28a128;
    }
    ctx->pc = 0x28A120u;
    {
        const bool branch_taken_0x28a120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28A124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A120u;
            // 0x28a124: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a120) {
            ctx->pc = 0x28A12Cu;
            goto label_28a12c;
        }
    }
    ctx->pc = 0x28A128u;
label_28a128:
    // 0x28a128: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x28a128u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28a12c:
    // 0x28a12c: 0xafb400bc  sw          $s4, 0xBC($sp)
    ctx->pc = 0x28a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 20));
label_28a130:
    // 0x28a130: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x28a130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_28a134:
    // 0x28a134: 0x96670000  lhu         $a3, 0x0($s3)
    ctx->pc = 0x28a134u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_28a138:
    // 0x28a138: 0x34446667  ori         $a0, $v0, 0x6667
    ctx->pc = 0x28a138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_28a13c:
    // 0x28a13c: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x28a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
label_28a140:
    // 0x28a140: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x28a140u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28a144:
    // 0x28a144: 0x34465556  ori         $a2, $v0, 0x5556
    ctx->pc = 0x28a144u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
label_28a148:
    // 0x28a148: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x28a148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_28a14c:
    // 0x28a14c: 0x30e20007  andi        $v0, $a3, 0x7
    ctx->pc = 0x28a14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
label_28a150:
    // 0x28a150: 0x86710008  lh          $s1, 0x8($s3)
    ctx->pc = 0x28a150u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
label_28a154:
    // 0x28a154: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x28a154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_28a158:
    // 0x28a158: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x28a158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_28a15c:
    // 0x28a15c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x28a15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_28a160:
    // 0x28a160: 0x24a2fffe  addiu       $v0, $a1, -0x2
    ctx->pc = 0x28a160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_28a164:
    // 0x28a164: 0xafa3012c  sw          $v1, 0x12C($sp)
    ctx->pc = 0x28a164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
label_28a168:
    // 0x28a168: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x28a168u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28a16c:
    // 0x28a16c: 0x0  nop
    ctx->pc = 0x28a16cu;
    // NOP
label_28a170:
    // 0x28a170: 0x0  nop
    ctx->pc = 0x28a170u;
    // NOP
label_28a174:
    // 0x28a174: 0x1810  mfhi        $v1
    ctx->pc = 0x28a174u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_28a178:
    // 0x28a178: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x28a178u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_28a17c:
    // 0x28a17c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x28a17cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_28a180:
    // 0x28a180: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x28a180u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_28a184:
    // 0x28a184: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x28a184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_28a188:
    // 0x28a188: 0xc40018  mult        $zero, $a2, $a0
    ctx->pc = 0x28a188u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28a18c:
    // 0x28a18c: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x28a18cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_28a190:
    // 0x28a190: 0x30430100  andi        $v1, $v0, 0x100
    ctx->pc = 0x28a190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_28a194:
    // 0x28a194: 0x2010  mfhi        $a0
    ctx->pc = 0x28a194u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_28a198:
    // 0x28a198: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x28a198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_28a19c:
    // 0x28a19c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x28a19cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_28a1a0:
    // 0x28a1a0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_28a1a4:
    if (ctx->pc == 0x28A1A4u) {
        ctx->pc = 0x28A1A4u;
            // 0x28a1a4: 0x858021  addu        $s0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->pc = 0x28A1A8u;
        goto label_28a1a8;
    }
    ctx->pc = 0x28A1A0u;
    {
        const bool branch_taken_0x28a1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A1A0u;
            // 0x28a1a4: 0x858021  addu        $s0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a1a0) {
            ctx->pc = 0x28A1F0u;
            goto label_28a1f0;
        }
    }
    ctx->pc = 0x28A1A8u;
label_28a1a8:
    // 0x28a1a8: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x28a1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_28a1ac:
    // 0x28a1ac: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x28a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
label_28a1b0:
    // 0x28a1b0: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x28a1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_28a1b4:
    // 0x28a1b4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x28a1b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_28a1b8:
    // 0x28a1b8: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x28a1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_28a1bc:
    // 0x28a1bc: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x28a1bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28a1c0:
    // 0x28a1c0: 0x0  nop
    ctx->pc = 0x28a1c0u;
    // NOP
label_28a1c4:
    // 0x28a1c4: 0x0  nop
    ctx->pc = 0x28a1c4u;
    // NOP
label_28a1c8:
    // 0x28a1c8: 0x1810  mfhi        $v1
    ctx->pc = 0x28a1c8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_28a1cc:
    // 0x28a1cc: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x28a1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_28a1d0:
    // 0x28a1d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_28a1d4:
    // 0x28a1d4: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x28a1d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28a1d8:
    // 0x28a1d8: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x28a1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_28a1dc:
    // 0x28a1dc: 0x0  nop
    ctx->pc = 0x28a1dcu;
    // NOP
label_28a1e0:
    // 0x28a1e0: 0x1810  mfhi        $v1
    ctx->pc = 0x28a1e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_28a1e4:
    // 0x28a1e4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x28a1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_28a1e8:
    // 0x28a1e8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x28a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_28a1ec:
    // 0x28a1ec: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x28a1ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_28a1f0:
    // 0x28a1f0: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x28a1f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_28a1f4:
    // 0x28a1f4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_28a1f8:
    if (ctx->pc == 0x28A1F8u) {
        ctx->pc = 0x28A1FCu;
        goto label_28a1fc;
    }
    ctx->pc = 0x28A1F4u;
    {
        const bool branch_taken_0x28a1f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a1f4) {
            ctx->pc = 0x28A200u;
            goto label_28a200;
        }
    }
    ctx->pc = 0x28A1FCu;
label_28a1fc:
    // 0x28a1fc: 0x27de0002  addiu       $fp, $fp, 0x2
    ctx->pc = 0x28a1fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
label_28a200:
    // 0x28a200: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28a200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_28a204:
    // 0x28a204: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_28a208:
    if (ctx->pc == 0x28A208u) {
        ctx->pc = 0x28A208u;
            // 0x28a208: 0x27a200f0  addiu       $v0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x28A20Cu;
        goto label_28a20c;
    }
    ctx->pc = 0x28A204u;
    {
        const bool branch_taken_0x28a204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A204u;
            // 0x28a208: 0x27a200f0  addiu       $v0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a204) {
            ctx->pc = 0x28A210u;
            goto label_28a210;
        }
    }
    ctx->pc = 0x28A20Cu;
label_28a20c:
    // 0x28a20c: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x28a20cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_28a210:
    // 0x28a210: 0x2406ff7f  addiu       $a2, $zero, -0x81
    ctx->pc = 0x28a210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_28a214:
    // 0x28a214: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x28a214u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
label_28a218:
    // 0x28a218: 0x64070080  daddiu      $a3, $zero, 0x80
    ctx->pc = 0x28a218u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
label_28a21c:
    // 0x28a21c: 0x93a800f1  lbu         $t0, 0xF1($sp)
    ctx->pc = 0x28a21cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 241)));
label_28a220:
    // 0x28a220: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x28a220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_28a224:
    // 0x28a224: 0x93a500f5  lbu         $a1, 0xF5($sp)
    ctx->pc = 0x28a224u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 245)));
label_28a228:
    // 0x28a228: 0x64040040  daddiu      $a0, $zero, 0x40
    ctx->pc = 0x28a228u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
label_28a22c:
    // 0x28a22c: 0x27a900f8  addiu       $t1, $sp, 0xF8
    ctx->pc = 0x28a22cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_28a230:
    // 0x28a230: 0x27aa0108  addiu       $t2, $sp, 0x108
    ctx->pc = 0x28a230u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_28a234:
    // 0x28a234: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x28a234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28a238:
    // 0x28a238: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x28a238u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
label_28a23c:
    // 0x28a23c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x28a23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_28a240:
    // 0x28a240: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x28a240u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_28a244:
    // 0x28a244: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x28a244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_28a248:
    // 0x28a248: 0xa3a600f1  sb          $a2, 0xF1($sp)
    ctx->pc = 0x28a248u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 241), (uint8_t)GPR_U32(ctx, 6));
label_28a24c:
    // 0x28a24c: 0xa3a200f5  sb          $v0, 0xF5($sp)
    ctx->pc = 0x28a24cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 245), (uint8_t)GPR_U32(ctx, 2));
label_28a250:
    // 0x28a250: 0xdfa200f0  ld          $v0, 0xF0($sp)
    ctx->pc = 0x28a250u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_28a254:
    // 0x28a254: 0xffa20100  sd          $v0, 0x100($sp)
    ctx->pc = 0x28a254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 2));
label_28a258:
    // 0x28a258: 0xdd220000  ld          $v0, 0x0($t1)
    ctx->pc = 0x28a258u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 0)));
label_28a25c:
    // 0x28a25c: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x28a25cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
label_28a260:
    // 0x28a260: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x28a260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_28a264:
    // 0x28a264: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_28a268:
    if (ctx->pc == 0x28A268u) {
        ctx->pc = 0x28A268u;
            // 0x28a268: 0x6402005b  daddiu      $v0, $zero, 0x5B (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)91);
        ctx->pc = 0x28A26Cu;
        goto label_28a26c;
    }
    ctx->pc = 0x28A264u;
    {
        const bool branch_taken_0x28a264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28A268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A264u;
            // 0x28a268: 0x6402005b  daddiu      $v0, $zero, 0x5B (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)91);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a264) {
            ctx->pc = 0x28A2A4u;
            goto label_28a2a4;
        }
    }
    ctx->pc = 0x28A26Cu;
label_28a26c:
    // 0x28a26c: 0x6402005c  daddiu      $v0, $zero, 0x5C
    ctx->pc = 0x28a26cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)92);
label_28a270:
    // 0x28a270: 0xdfa500f0  ld          $a1, 0xF0($sp)
    ctx->pc = 0x28a270u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_28a274:
    // 0x28a274: 0x223fc  dsll32      $a0, $v0, 15
    ctx->pc = 0x28a274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 15));
label_28a278:
    // 0x28a278: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x28a278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
label_28a27c:
    // 0x28a27c: 0x34437fff  ori         $v1, $v0, 0x7FFF
    ctx->pc = 0x28a27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_28a280:
    // 0x28a280: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x28a280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_28a284:
    // 0x28a284: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x28a284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_28a288:
    // 0x28a288: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x28a288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_28a28c:
    // 0x28a28c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x28a28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_28a290:
    // 0x28a290: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28a290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28a294:
    // 0x28a294: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x28a294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_28a298:
    // 0x28a298: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x28a298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_28a29c:
    // 0x28a29c: 0x1000000d  b           . + 4 + (0xD << 2)
label_28a2a0:
    if (ctx->pc == 0x28A2A0u) {
        ctx->pc = 0x28A2A0u;
            // 0x28a2a0: 0xffa200f0  sd          $v0, 0xF0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 2));
        ctx->pc = 0x28A2A4u;
        goto label_28a2a4;
    }
    ctx->pc = 0x28A29Cu;
    {
        const bool branch_taken_0x28a29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A29Cu;
            // 0x28a2a0: 0xffa200f0  sd          $v0, 0xF0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a29c) {
            ctx->pc = 0x28A2D4u;
            goto label_28a2d4;
        }
    }
    ctx->pc = 0x28A2A4u;
label_28a2a4:
    // 0x28a2a4: 0xdfa500f0  ld          $a1, 0xF0($sp)
    ctx->pc = 0x28a2a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_28a2a8:
    // 0x28a2a8: 0x223fc  dsll32      $a0, $v0, 15
    ctx->pc = 0x28a2a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 15));
label_28a2ac:
    // 0x28a2ac: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x28a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
label_28a2b0:
    // 0x28a2b0: 0x34437fff  ori         $v1, $v0, 0x7FFF
    ctx->pc = 0x28a2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_28a2b4:
    // 0x28a2b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x28a2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_28a2b8:
    // 0x28a2b8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x28a2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_28a2bc:
    // 0x28a2bc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x28a2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_28a2c0:
    // 0x28a2c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x28a2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_28a2c4:
    // 0x28a2c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28a2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28a2c8:
    // 0x28a2c8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x28a2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_28a2cc:
    // 0x28a2cc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x28a2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_28a2d0:
    // 0x28a2d0: 0xffa200f0  sd          $v0, 0xF0($sp)
    ctx->pc = 0x28a2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 2));
label_28a2d4:
    // 0x28a2d4: 0x93ad00f7  lbu         $t5, 0xF7($sp)
    ctx->pc = 0x28a2d4u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 247)));
label_28a2d8:
    // 0x28a2d8: 0x2407ff0f  addiu       $a3, $zero, -0xF1
    ctx->pc = 0x28a2d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
label_28a2dc:
    // 0x28a2dc: 0x3c0bfc00  lui         $t3, 0xFC00
    ctx->pc = 0x28a2dcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)64512 << 16));
label_28a2e0:
    // 0x28a2e0: 0x6402005d  daddiu      $v0, $zero, 0x5D
    ctx->pc = 0x28a2e0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)93);
label_28a2e4:
    // 0x28a2e4: 0x356c7fff  ori         $t4, $t3, 0x7FFF
    ctx->pc = 0x28a2e4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32767);
label_28a2e8:
    // 0x28a2e8: 0x64080030  daddiu      $t0, $zero, 0x30
    ctx->pc = 0x28a2e8u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)48);
label_28a2ec:
    // 0x28a2ec: 0x340bffff  ori         $t3, $zero, 0xFFFF
    ctx->pc = 0x28a2ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_28a2f0:
    // 0x28a2f0: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x28a2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_28a2f4:
    // 0x28a2f4: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x28a2f4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
label_28a2f8:
    // 0x28a2f8: 0x64060002  daddiu      $a2, $zero, 0x2
    ctx->pc = 0x28a2f8u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_28a2fc:
    // 0x28a2fc: 0x64040010  daddiu      $a0, $zero, 0x10
    ctx->pc = 0x28a2fcu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
label_28a300:
    // 0x28a300: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x28a300u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
label_28a304:
    // 0x28a304: 0x1a76824  and         $t5, $t5, $a3
    ctx->pc = 0x28a304u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 7));
label_28a308:
    // 0x28a308: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x28a308u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
label_28a30c:
    // 0x28a30c: 0x1a86825  or          $t5, $t5, $t0
    ctx->pc = 0x28a30cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 8));
label_28a310:
    // 0x28a310: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x28a310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
label_28a314:
    // 0x28a314: 0xa3ad00f7  sb          $t5, 0xF7($sp)
    ctx->pc = 0x28a314u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 247), (uint8_t)GPR_U32(ctx, 13));
label_28a318:
    // 0x28a318: 0x64030004  daddiu      $v1, $zero, 0x4
    ctx->pc = 0x28a318u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_28a31c:
    // 0x28a31c: 0x912e0000  lbu         $t6, 0x0($t1)
    ctx->pc = 0x28a31cu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_28a320:
    // 0x28a320: 0x16c6825  or          $t5, $t3, $t4
    ctx->pc = 0x28a320u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_28a324:
    // 0x28a324: 0x3c0c6c01  lui         $t4, 0x6C01
    ctx->pc = 0x28a324u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)27649 << 16));
label_28a328:
    // 0x28a328: 0x27ab0100  addiu       $t3, $sp, 0x100
    ctx->pc = 0x28a328u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_28a32c:
    // 0x28a32c: 0x358c0027  ori         $t4, $t4, 0x27
    ctx->pc = 0x28a32cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)39);
label_28a330:
    // 0x28a330: 0x1c57024  and         $t6, $t6, $a1
    ctx->pc = 0x28a330u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 5));
label_28a334:
    // 0x28a334: 0x1c67025  or          $t6, $t6, $a2
    ctx->pc = 0x28a334u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 6));
label_28a338:
    // 0x28a338: 0xa12e0000  sb          $t6, 0x0($t1)
    ctx->pc = 0x28a338u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 14));
label_28a33c:
    // 0x28a33c: 0x912e0000  lbu         $t6, 0x0($t1)
    ctx->pc = 0x28a33cu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_28a340:
    // 0x28a340: 0x1c77024  and         $t6, $t6, $a3
    ctx->pc = 0x28a340u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 7));
label_28a344:
    // 0x28a344: 0x1c47025  or          $t6, $t6, $a0
    ctx->pc = 0x28a344u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 4));
label_28a348:
    // 0x28a348: 0xa12e0000  sb          $t6, 0x0($t1)
    ctx->pc = 0x28a348u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 14));
label_28a34c:
    // 0x28a34c: 0xdfa90100  ld          $t1, 0x100($sp)
    ctx->pc = 0x28a34cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_28a350:
    // 0x28a350: 0x93ae00f9  lbu         $t6, 0xF9($sp)
    ctx->pc = 0x28a350u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 249)));
label_28a354:
    // 0x28a354: 0x12d4824  and         $t1, $t1, $t5
    ctx->pc = 0x28a354u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 13));
label_28a358:
    // 0x28a358: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x28a358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_28a35c:
    // 0x28a35c: 0x1c57024  and         $t6, $t6, $a1
    ctx->pc = 0x28a35cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 5));
label_28a360:
    // 0x28a360: 0xffa20100  sd          $v0, 0x100($sp)
    ctx->pc = 0x28a360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 2));
label_28a364:
    // 0x28a364: 0x1c36825  or          $t5, $t6, $v1
    ctx->pc = 0x28a364u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) | GPR_U64(ctx, 3));
label_28a368:
    // 0x28a368: 0x93a20107  lbu         $v0, 0x107($sp)
    ctx->pc = 0x28a368u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 263)));
label_28a36c:
    // 0x28a36c: 0xa3ad00f9  sb          $t5, 0xF9($sp)
    ctx->pc = 0x28a36cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 249), (uint8_t)GPR_U32(ctx, 13));
label_28a370:
    // 0x28a370: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x28a370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_28a374:
    // 0x28a374: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x28a374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_28a378:
    // 0x28a378: 0xa3a20107  sb          $v0, 0x107($sp)
    ctx->pc = 0x28a378u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 263), (uint8_t)GPR_U32(ctx, 2));
label_28a37c:
    // 0x28a37c: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x28a37cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_28a380:
    // 0x28a380: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x28a380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_28a384:
    // 0x28a384: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x28a384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_28a388:
    // 0x28a388: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x28a388u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
label_28a38c:
    // 0x28a38c: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x28a38cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_28a390:
    // 0x28a390: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x28a390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_28a394:
    // 0x28a394: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x28a394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_28a398:
    // 0x28a398: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x28a398u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
label_28a39c:
    // 0x28a39c: 0x93a20109  lbu         $v0, 0x109($sp)
    ctx->pc = 0x28a39cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 265)));
label_28a3a0:
    // 0x28a3a0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x28a3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_28a3a4:
    // 0x28a3a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28a3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28a3a8:
    // 0x28a3a8: 0xa3a20109  sb          $v0, 0x109($sp)
    ctx->pc = 0x28a3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 265), (uint8_t)GPR_U32(ctx, 2));
label_28a3ac:
    // 0x28a3ac: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x28a3acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_28a3b0:
    // 0x28a3b0: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x28a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_28a3b4:
    // 0x28a3b4: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x28a3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
label_28a3b8:
    // 0x28a3b8: 0xae8c000c  sw          $t4, 0xC($s4)
    ctx->pc = 0x28a3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 12));
label_28a3bc:
    // 0x28a3bc: 0x79620000  lq          $v0, 0x0($t3)
    ctx->pc = 0x28a3bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 0)));
label_28a3c0:
    // 0x28a3c0: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x28a3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
label_28a3c4:
    // 0x28a3c4: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_28a3c8:
    if (ctx->pc == 0x28A3C8u) {
        ctx->pc = 0x28A3C8u;
            // 0x28a3c8: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x28A3CCu;
        goto label_28a3cc;
    }
    ctx->pc = 0x28A3C4u;
    {
        const bool branch_taken_0x28a3c4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A3C4u;
            // 0x28a3c8: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a3c4) {
            ctx->pc = 0x28A3DCu;
            goto label_28a3dc;
        }
    }
    ctx->pc = 0x28A3CCu;
label_28a3cc:
    // 0x28a3cc: 0xc04f8ec  jal         func_13E3B0
label_28a3d0:
    if (ctx->pc == 0x28A3D0u) {
        ctx->pc = 0x28A3D4u;
        goto label_28a3d4;
    }
    ctx->pc = 0x28A3CCu;
    SET_GPR_U32(ctx, 31, 0x28A3D4u);
    ctx->pc = 0x13E3B0u;
    if (runtime->hasFunction(0x13E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x13E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A3D4u; }
        if (ctx->pc != 0x28A3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScrPad__Fv_0x13e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A3D4u; }
        if (ctx->pc != 0x28A3D4u) { return; }
    }
    ctx->pc = 0x28A3D4u;
label_28a3d4:
    // 0x28a3d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_28a3d8:
    if (ctx->pc == 0x28A3D8u) {
        ctx->pc = 0x28A3D8u;
            // 0x28a3d8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28A3DCu;
        goto label_28a3dc;
    }
    ctx->pc = 0x28A3D4u;
    {
        const bool branch_taken_0x28a3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A3D4u;
            // 0x28a3d8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a3d4) {
            ctx->pc = 0x28A3E4u;
            goto label_28a3e4;
        }
    }
    ctx->pc = 0x28A3DCu;
label_28a3dc:
    // 0x28a3dc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x28a3dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28a3e0:
    // 0x28a3e0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x28a3e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28a3e4:
    // 0x28a3e4: 0x1a20006d  blez        $s1, . + 4 + (0x6D << 2)
label_28a3e8:
    if (ctx->pc == 0x28A3E8u) {
        ctx->pc = 0x28A3ECu;
        goto label_28a3ec;
    }
    ctx->pc = 0x28A3E4u;
    {
        const bool branch_taken_0x28a3e4 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x28a3e4) {
            ctx->pc = 0x28A59Cu;
            goto label_28a59c;
        }
    }
    ctx->pc = 0x28A3ECu;
label_28a3ec:
    // 0x28a3ec: 0x230082a  slt         $at, $s1, $s0
    ctx->pc = 0x28a3ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_28a3f0:
    // 0x28a3f0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_28a3f4:
    if (ctx->pc == 0x28A3F4u) {
        ctx->pc = 0x28A3F4u;
            // 0x28a3f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28A3F8u;
        goto label_28a3f8;
    }
    ctx->pc = 0x28A3F0u;
    {
        const bool branch_taken_0x28a3f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A3F0u;
            // 0x28a3f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a3f0) {
            ctx->pc = 0x28A3FCu;
            goto label_28a3fc;
        }
    }
    ctx->pc = 0x28A3F8u;
label_28a3f8:
    // 0x28a3f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28a3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a3fc:
    // 0x28a3fc: 0x0  nop
    ctx->pc = 0x28a3fcu;
    // NOP
label_28a400:
    // 0x28a400: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28a400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_28a404:
    // 0x28a404: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x28a404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_28a408:
    // 0x28a408: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x28a408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_28a40c:
    // 0x28a40c: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x28a40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_28a410:
    // 0x28a410: 0x1e2880  sll         $a1, $fp, 2
    ctx->pc = 0x28a410u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_28a414:
    // 0x28a414: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x28a414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_28a418:
    // 0x28a418: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x28a418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_28a41c:
    // 0x28a41c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x28a41cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_28a420:
    // 0x28a420: 0x306a7fff  andi        $t2, $v1, 0x7FFF
    ctx->pc = 0x28a420u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
label_28a424:
    // 0x28a424: 0x97ab00f0  lhu         $t3, 0xF0($sp)
    ctx->pc = 0x28a424u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 240)));
label_28a428:
    // 0x28a428: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x28a428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_28a42c:
    // 0x28a42c: 0x24633ed0  addiu       $v1, $v1, 0x3ED0
    ctx->pc = 0x28a42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16080));
label_28a430:
    // 0x28a430: 0x24098000  addiu       $t1, $zero, -0x8000
    ctx->pc = 0x28a430u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_28a434:
    // 0x28a434: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x28a434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_28a438:
    // 0x28a438: 0x27a800f0  addiu       $t0, $sp, 0xF0
    ctx->pc = 0x28a438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_28a43c:
    // 0x28a43c: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x28a43cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_28a440:
    // 0x28a440: 0x24470020  addiu       $a3, $v0, 0x20
    ctx->pc = 0x28a440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_28a444:
    // 0x28a444: 0x1692824  and         $a1, $t3, $t1
    ctx->pc = 0x28a444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
label_28a448:
    // 0x28a448: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x28a448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
label_28a44c:
    // 0x28a44c: 0xa7a500f0  sh          $a1, 0xF0($sp)
    ctx->pc = 0x28a44cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 5));
label_28a450:
    // 0x28a450: 0x79050000  lq          $a1, 0x0($t0)
    ctx->pc = 0x28a450u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_28a454:
    // 0x28a454: 0x7c450010  sq          $a1, 0x10($v0)
    ctx->pc = 0x28a454u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 5));
label_28a458:
    // 0x28a458: 0x8ea20104  lw          $v0, 0x104($s5)
    ctx->pc = 0x28a458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
label_28a45c:
    // 0x28a45c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x28a45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_28a460:
    // 0x28a460: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28a460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28a464:
    // 0x28a464: 0x96650000  lhu         $a1, 0x0($s3)
    ctx->pc = 0x28a464u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_28a468:
    // 0x28a468: 0x8ea80030  lw          $t0, 0x30($s5)
    ctx->pc = 0x28a468u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_28a46c:
    // 0x28a46c: 0x8ea90034  lw          $t1, 0x34($s5)
    ctx->pc = 0x28a46cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_28a470:
    // 0x28a470: 0x8eaa003c  lw          $t2, 0x3C($s5)
    ctx->pc = 0x28a470u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_28a474:
    // 0x28a474: 0x8eab0038  lw          $t3, 0x38($s5)
    ctx->pc = 0x28a474u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
label_28a478:
    // 0x28a478: 0x40f809  jalr        $v0
label_28a47c:
    if (ctx->pc == 0x28A47Cu) {
        ctx->pc = 0x28A47Cu;
            // 0x28a47c: 0x27a6012c  addiu       $a2, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->pc = 0x28A480u;
        goto label_28a480;
    }
    ctx->pc = 0x28A478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28A480u);
        ctx->pc = 0x28A47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A478u;
            // 0x28a47c: 0x27a6012c  addiu       $a2, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28A480u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28A480u; }
            if (ctx->pc != 0x28A480u) { return; }
        }
        }
    }
    ctx->pc = 0x28A480u;
label_28a480:
    // 0x28a480: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x28a480u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_28a484:
    // 0x28a484: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_28a488:
    if (ctx->pc == 0x28A488u) {
        ctx->pc = 0x28A488u;
            // 0x28a488: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->pc = 0x28A48Cu;
        goto label_28a48c;
    }
    ctx->pc = 0x28A484u;
    {
        const bool branch_taken_0x28a484 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x28A488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A484u;
            // 0x28a488: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a484) {
            ctx->pc = 0x28A494u;
            goto label_28a494;
        }
    }
    ctx->pc = 0x28A48Cu;
label_28a48c:
    // 0x28a48c: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x28a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_28a490:
    // 0x28a490: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x28a490u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_28a494:
    // 0x28a494: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x28a494u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_28a498:
    // 0x28a498: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x28a498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
label_28a49c:
    // 0x28a49c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x28a49cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_28a4a0:
    // 0x28a4a0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x28a4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_28a4a4:
    // 0x28a4a4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x28a4a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_28a4a8:
    // 0x28a4a8: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x28a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_28a4ac:
    // 0x28a4ac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x28a4acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_28a4b0:
    // 0x28a4b0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x28a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_28a4b4:
    // 0x28a4b4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_28a4b8:
    if (ctx->pc == 0x28A4B8u) {
        ctx->pc = 0x28A4B8u;
            // 0x28a4b8: 0x3c040035  lui         $a0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
        ctx->pc = 0x28A4BCu;
        goto label_28a4bc;
    }
    ctx->pc = 0x28A4B4u;
    {
        const bool branch_taken_0x28a4b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A4B4u;
            // 0x28a4b8: 0x3c040035  lui         $a0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a4b4) {
            ctx->pc = 0x28A4D8u;
            goto label_28a4d8;
        }
    }
    ctx->pc = 0x28A4BCu;
label_28a4bc:
    // 0x28a4bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28a4c0:
    // 0x28a4c0: 0x24843ef0  addiu       $a0, $a0, 0x3EF0
    ctx->pc = 0x28a4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16112));
label_28a4c4:
    // 0x28a4c4: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x28a4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_28a4c8:
    // 0x28a4c8: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x28a4c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_28a4cc:
    // 0x28a4cc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x28a4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_28a4d0:
    // 0x28a4d0: 0x10000006  b           . + 4 + (0x6 << 2)
label_28a4d4:
    if (ctx->pc == 0x28A4D4u) {
        ctx->pc = 0x28A4D4u;
            // 0x28a4d4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x28A4D8u;
        goto label_28a4d8;
    }
    ctx->pc = 0x28A4D0u;
    {
        const bool branch_taken_0x28a4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A4D0u;
            // 0x28a4d4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a4d0) {
            ctx->pc = 0x28A4ECu;
            goto label_28a4ec;
        }
    }
    ctx->pc = 0x28A4D8u;
label_28a4d8:
    // 0x28a4d8: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x28a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_28a4dc:
    // 0x28a4dc: 0x24633f00  addiu       $v1, $v1, 0x3F00
    ctx->pc = 0x28a4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16128));
label_28a4e0:
    // 0x28a4e0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x28a4e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_28a4e4:
    // 0x28a4e4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x28a4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_28a4e8:
    // 0x28a4e8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x28a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_28a4ec:
    // 0x28a4ec: 0x0  nop
    ctx->pc = 0x28a4ecu;
    // NOP
label_28a4f0:
    // 0x28a4f0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x28a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_28a4f4:
    // 0x28a4f4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x28a4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28a4f8:
    // 0x28a4f8: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
label_28a4fc:
    if (ctx->pc == 0x28A4FCu) {
        ctx->pc = 0x28A4FCu;
            // 0x28a4fc: 0x211082a  slt         $at, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->pc = 0x28A500u;
        goto label_28a500;
    }
    ctx->pc = 0x28A4F8u;
    {
        const bool branch_taken_0x28a4f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x28A4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A4F8u;
            // 0x28a4fc: 0x211082a  slt         $at, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a4f8) {
            ctx->pc = 0x28A520u;
            goto label_28a520;
        }
    }
    ctx->pc = 0x28A500u;
label_28a500:
    // 0x28a500: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_28a504:
    if (ctx->pc == 0x28A504u) {
        ctx->pc = 0x28A508u;
        goto label_28a508;
    }
    ctx->pc = 0x28A500u;
    {
        const bool branch_taken_0x28a500 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a500) {
            ctx->pc = 0x28A520u;
            goto label_28a520;
        }
    }
    ctx->pc = 0x28A508u;
label_28a508:
    // 0x28a508: 0x86640002  lh          $a0, 0x2($s3)
    ctx->pc = 0x28a508u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_28a50c:
    // 0x28a50c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x28a50cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_28a510:
    // 0x28a510: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x28a510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_28a514:
    // 0x28a514: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x28a514u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_28a518:
    // 0x28a518: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x28a518u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_28a51c:
    // 0x28a51c: 0xafa3012c  sw          $v1, 0x12C($sp)
    ctx->pc = 0x28a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
label_28a520:
    // 0x28a520: 0x561823  subu        $v1, $v0, $s6
    ctx->pc = 0x28a520u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_28a524:
    // 0x28a524: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_28a528:
    if (ctx->pc == 0x28A528u) {
        ctx->pc = 0x28A528u;
            // 0x28a528: 0x39083  sra         $s2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 2));
        ctx->pc = 0x28A52Cu;
        goto label_28a52c;
    }
    ctx->pc = 0x28A524u;
    {
        const bool branch_taken_0x28a524 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x28A528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A524u;
            // 0x28a528: 0x39083  sra         $s2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a524) {
            ctx->pc = 0x28A534u;
            goto label_28a534;
        }
    }
    ctx->pc = 0x28A52Cu;
label_28a52c:
    // 0x28a52c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x28a52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_28a530:
    // 0x28a530: 0x39083  sra         $s2, $v1, 2
    ctx->pc = 0x28a530u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 2));
label_28a534:
    // 0x28a534: 0x2a410515  slti        $at, $s2, 0x515
    ctx->pc = 0x28a534u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)1301) ? 1 : 0);
label_28a538:
    // 0x28a538: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
label_28a53c:
    if (ctx->pc == 0x28A53Cu) {
        ctx->pc = 0x28A540u;
        goto label_28a540;
    }
    ctx->pc = 0x28A538u;
    {
        const bool branch_taken_0x28a538 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a538) {
            ctx->pc = 0x28A58Cu;
            goto label_28a58c;
        }
    }
    ctx->pc = 0x28A540u;
label_28a540:
    // 0x28a540: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
label_28a544:
    if (ctx->pc == 0x28A544u) {
        ctx->pc = 0x28A544u;
            // 0x28a544: 0x122883  sra         $a1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 18), 2));
        ctx->pc = 0x28A548u;
        goto label_28a548;
    }
    ctx->pc = 0x28A540u;
    {
        const bool branch_taken_0x28a540 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A540u;
            // 0x28a544: 0x122883  sra         $a1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a540) {
            ctx->pc = 0x28A560u;
            goto label_28a560;
        }
    }
    ctx->pc = 0x28A548u;
label_28a548:
    // 0x28a548: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
label_28a54c:
    if (ctx->pc == 0x28A54Cu) {
        ctx->pc = 0x28A54Cu;
            // 0x28a54c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28A550u;
        goto label_28a550;
    }
    ctx->pc = 0x28A548u;
    {
        const bool branch_taken_0x28a548 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x28A54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A548u;
            // 0x28a54c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a548) {
            ctx->pc = 0x28A558u;
            goto label_28a558;
        }
    }
    ctx->pc = 0x28A550u;
label_28a550:
    // 0x28a550: 0x26420003  addiu       $v0, $s2, 0x3
    ctx->pc = 0x28a550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
label_28a554:
    // 0x28a554: 0x22883  sra         $a1, $v0, 2
    ctx->pc = 0x28a554u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
label_28a558:
    // 0x28a558: 0xc04f8f4  jal         func_13E3D0
label_28a55c:
    if (ctx->pc == 0x28A55Cu) {
        ctx->pc = 0x28A560u;
        goto label_28a560;
    }
    ctx->pc = 0x28A558u;
    SET_GPR_U32(ctx, 31, 0x28A560u);
    ctx->pc = 0x13E3D0u;
    if (runtime->hasFunction(0x13E3D0u)) {
        auto targetFn = runtime->lookupFunction(0x13E3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A560u; }
        if (ctx->pc != 0x28A560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SendDMA__FPvi_0x13e3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A560u; }
        if (ctx->pc != 0x28A560u) { return; }
    }
    ctx->pc = 0x28A560u;
label_28a560:
    // 0x28a560: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x28a560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_28a564:
    // 0x28a564: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_28a568:
    if (ctx->pc == 0x28A568u) {
        ctx->pc = 0x28A568u;
            // 0x28a568: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->pc = 0x28A56Cu;
        goto label_28a56c;
    }
    ctx->pc = 0x28A564u;
    {
        const bool branch_taken_0x28a564 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A564u;
            // 0x28a568: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a564) {
            ctx->pc = 0x28A57Cu;
            goto label_28a57c;
        }
    }
    ctx->pc = 0x28A56Cu;
label_28a56c:
    // 0x28a56c: 0xc04f8ec  jal         func_13E3B0
label_28a570:
    if (ctx->pc == 0x28A570u) {
        ctx->pc = 0x28A574u;
        goto label_28a574;
    }
    ctx->pc = 0x28A56Cu;
    SET_GPR_U32(ctx, 31, 0x28A574u);
    ctx->pc = 0x13E3B0u;
    if (runtime->hasFunction(0x13E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x13E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A574u; }
        if (ctx->pc != 0x28A574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScrPad__Fv_0x13e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A574u; }
        if (ctx->pc != 0x28A574u) { return; }
    }
    ctx->pc = 0x28A574u;
label_28a574:
    // 0x28a574: 0x10000003  b           . + 4 + (0x3 << 2)
label_28a578:
    if (ctx->pc == 0x28A578u) {
        ctx->pc = 0x28A57Cu;
        goto label_28a57c;
    }
    ctx->pc = 0x28A574u;
    {
        const bool branch_taken_0x28a574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a574) {
            ctx->pc = 0x28A584u;
            goto label_28a584;
        }
    }
    ctx->pc = 0x28A57Cu;
label_28a57c:
    // 0x28a57c: 0x0  nop
    ctx->pc = 0x28a57cu;
    // NOP
label_28a580:
    // 0x28a580: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x28a580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28a584:
    // 0x28a584: 0x0  nop
    ctx->pc = 0x28a584u;
    // NOP
label_28a588:
    // 0x28a588: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x28a588u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28a58c:
    // 0x28a58c: 0x0  nop
    ctx->pc = 0x28a58cu;
    // NOP
label_28a590:
    // 0x28a590: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x28a590u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_28a594:
    // 0x28a594: 0x1e20ff96  bgtz        $s1, . + 4 + (-0x6A << 2)
label_28a598:
    if (ctx->pc == 0x28A598u) {
        ctx->pc = 0x28A598u;
            // 0x28a598: 0x230082a  slt         $at, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->pc = 0x28A59Cu;
        goto label_28a59c;
    }
    ctx->pc = 0x28A594u;
    {
        const bool branch_taken_0x28a594 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x28A598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A594u;
            // 0x28a598: 0x230082a  slt         $at, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a594) {
            ctx->pc = 0x28A3F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28a3f0;
        }
    }
    ctx->pc = 0x28A59Cu;
label_28a59c:
    // 0x28a59c: 0x0  nop
    ctx->pc = 0x28a59cu;
    // NOP
label_28a5a0:
    // 0x28a5a0: 0x561023  subu        $v0, $v0, $s6
    ctx->pc = 0x28a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_28a5a4:
    // 0x28a5a4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_28a5a8:
    if (ctx->pc == 0x28A5A8u) {
        ctx->pc = 0x28A5A8u;
            // 0x28a5a8: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->pc = 0x28A5ACu;
        goto label_28a5ac;
    }
    ctx->pc = 0x28A5A4u;
    {
        const bool branch_taken_0x28a5a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28A5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A5A4u;
            // 0x28a5a8: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a5a4) {
            ctx->pc = 0x28A5B4u;
            goto label_28a5b4;
        }
    }
    ctx->pc = 0x28A5ACu;
label_28a5ac:
    // 0x28a5ac: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x28a5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_28a5b0:
    // 0x28a5b0: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x28a5b0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
label_28a5b4:
    // 0x28a5b4: 0x12e00009  beqz        $s7, . + 4 + (0x9 << 2)
label_28a5b8:
    if (ctx->pc == 0x28A5B8u) {
        ctx->pc = 0x28A5BCu;
        goto label_28a5bc;
    }
    ctx->pc = 0x28A5B4u;
    {
        const bool branch_taken_0x28a5b4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a5b4) {
            ctx->pc = 0x28A5DCu;
            goto label_28a5dc;
        }
    }
    ctx->pc = 0x28A5BCu;
label_28a5bc:
    // 0x28a5bc: 0x1a000007  blez        $s0, . + 4 + (0x7 << 2)
label_28a5c0:
    if (ctx->pc == 0x28A5C0u) {
        ctx->pc = 0x28A5C4u;
        goto label_28a5c4;
    }
    ctx->pc = 0x28A5BCu;
    {
        const bool branch_taken_0x28a5bc = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x28a5bc) {
            ctx->pc = 0x28A5DCu;
            goto label_28a5dc;
        }
    }
    ctx->pc = 0x28A5C4u;
label_28a5c4:
    // 0x28a5c4: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
label_28a5c8:
    if (ctx->pc == 0x28A5C8u) {
        ctx->pc = 0x28A5C8u;
            // 0x28a5c8: 0x102883  sra         $a1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 16), 2));
        ctx->pc = 0x28A5CCu;
        goto label_28a5cc;
    }
    ctx->pc = 0x28A5C4u;
    {
        const bool branch_taken_0x28a5c4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x28A5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A5C4u;
            // 0x28a5c8: 0x102883  sra         $a1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a5c4) {
            ctx->pc = 0x28A5D4u;
            goto label_28a5d4;
        }
    }
    ctx->pc = 0x28A5CCu;
label_28a5cc:
    // 0x28a5cc: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x28a5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_28a5d0:
    // 0x28a5d0: 0x22883  sra         $a1, $v0, 2
    ctx->pc = 0x28a5d0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
label_28a5d4:
    // 0x28a5d4: 0xc04f8f4  jal         func_13E3D0
label_28a5d8:
    if (ctx->pc == 0x28A5D8u) {
        ctx->pc = 0x28A5D8u;
            // 0x28a5d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28A5DCu;
        goto label_28a5dc;
    }
    ctx->pc = 0x28A5D4u;
    SET_GPR_U32(ctx, 31, 0x28A5DCu);
    ctx->pc = 0x28A5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A5D4u;
            // 0x28a5d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E3D0u;
    if (runtime->hasFunction(0x13E3D0u)) {
        auto targetFn = runtime->lookupFunction(0x13E3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A5DCu; }
        if (ctx->pc != 0x28A5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SendDMA__FPvi_0x13e3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A5DCu; }
        if (ctx->pc != 0x28A5DCu) { return; }
    }
    ctx->pc = 0x28A5DCu;
label_28a5dc:
    // 0x28a5dc: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x28a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_28a5e0:
    // 0x28a5e0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x28a5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_28a5e4:
    // 0x28a5e4: 0x24423f10  addiu       $v0, $v0, 0x3F10
    ctx->pc = 0x28a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16144));
label_28a5e8:
    // 0x28a5e8: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x28a5e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_28a5ec:
    // 0x28a5ec: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x28a5ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_28a5f0:
    // 0x28a5f0: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x28a5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_28a5f4:
    // 0x28a5f4: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x28a5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_28a5f8:
    // 0x28a5f8: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x28a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_28a5fc:
    // 0x28a5fc: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x28a5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
label_28a600:
    // 0x28a600: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x28a600u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28a604:
    // 0x28a604: 0x70802628  paddub      $a0, $a0, $zero
    ctx->pc = 0x28a604u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_28a608:
    // 0x28a608: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x28a608u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_28a60c:
    // 0x28a60c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_28a610:
    if (ctx->pc == 0x28A610u) {
        ctx->pc = 0x28A610u;
            // 0x28a610: 0x7e840000  sq          $a0, 0x0($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 4));
        ctx->pc = 0x28A614u;
        goto label_28a614;
    }
    ctx->pc = 0x28A60Cu;
    {
        const bool branch_taken_0x28a60c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28A610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A60Cu;
            // 0x28a610: 0x7e840000  sq          $a0, 0x0($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a60c) {
            ctx->pc = 0x28A61Cu;
            goto label_28a61c;
        }
    }
    ctx->pc = 0x28A614u;
label_28a614:
    // 0x28a614: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x28a614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_28a618:
    // 0x28a618: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x28a618u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_28a61c:
    // 0x28a61c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_28a620:
    if (ctx->pc == 0x28A620u) {
        ctx->pc = 0x28A620u;
            // 0x28a620: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->pc = 0x28A624u;
        goto label_28a624;
    }
    ctx->pc = 0x28A61Cu;
    {
        const bool branch_taken_0x28a61c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x28A620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A61Cu;
            // 0x28a620: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a61c) {
            ctx->pc = 0x28A62Cu;
            goto label_28a62c;
        }
    }
    ctx->pc = 0x28A624u;
label_28a624:
    // 0x28a624: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x28a624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_28a628:
    // 0x28a628: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x28a628u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_28a62c:
    // 0x28a62c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x28a62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_28a630:
    // 0x28a630: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x28a630u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_28a634:
    // 0x28a634: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x28a634u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28a638:
    // 0x28a638: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x28a638u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28a63c:
    // 0x28a63c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x28a63cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28a640:
    // 0x28a640: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x28a640u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28a644:
    // 0x28a644: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x28a644u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28a648:
    // 0x28a648: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28a648u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28a64c:
    // 0x28a64c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28a64cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28a650:
    // 0x28a650: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28a650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28a654:
    // 0x28a654: 0x3e00008  jr          $ra
label_28a658:
    if (ctx->pc == 0x28A658u) {
        ctx->pc = 0x28A658u;
            // 0x28a658: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x28A65Cu;
        goto label_fallthrough_0x28a654;
    }
    ctx->pc = 0x28A654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A654u;
            // 0x28a658: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28a654:
    ctx->pc = 0x28A65Cu;
}
