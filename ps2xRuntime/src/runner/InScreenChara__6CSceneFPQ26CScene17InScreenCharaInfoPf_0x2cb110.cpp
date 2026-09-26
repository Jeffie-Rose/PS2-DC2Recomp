#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InScreenChara__6CSceneFPQ26CScene17InScreenCharaInfoPf
// Address: 0x2cb110 - 0x2cb598
void InScreenChara__6CSceneFPQ26CScene17InScreenCharaInfoPf_0x2cb110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InScreenChara__6CSceneFPQ26CScene17InScreenCharaInfoPf_0x2cb110");
#endif

    switch (ctx->pc) {
        case 0x2cb110u: goto label_2cb110;
        case 0x2cb114u: goto label_2cb114;
        case 0x2cb118u: goto label_2cb118;
        case 0x2cb11cu: goto label_2cb11c;
        case 0x2cb120u: goto label_2cb120;
        case 0x2cb124u: goto label_2cb124;
        case 0x2cb128u: goto label_2cb128;
        case 0x2cb12cu: goto label_2cb12c;
        case 0x2cb130u: goto label_2cb130;
        case 0x2cb134u: goto label_2cb134;
        case 0x2cb138u: goto label_2cb138;
        case 0x2cb13cu: goto label_2cb13c;
        case 0x2cb140u: goto label_2cb140;
        case 0x2cb144u: goto label_2cb144;
        case 0x2cb148u: goto label_2cb148;
        case 0x2cb14cu: goto label_2cb14c;
        case 0x2cb150u: goto label_2cb150;
        case 0x2cb154u: goto label_2cb154;
        case 0x2cb158u: goto label_2cb158;
        case 0x2cb15cu: goto label_2cb15c;
        case 0x2cb160u: goto label_2cb160;
        case 0x2cb164u: goto label_2cb164;
        case 0x2cb168u: goto label_2cb168;
        case 0x2cb16cu: goto label_2cb16c;
        case 0x2cb170u: goto label_2cb170;
        case 0x2cb174u: goto label_2cb174;
        case 0x2cb178u: goto label_2cb178;
        case 0x2cb17cu: goto label_2cb17c;
        case 0x2cb180u: goto label_2cb180;
        case 0x2cb184u: goto label_2cb184;
        case 0x2cb188u: goto label_2cb188;
        case 0x2cb18cu: goto label_2cb18c;
        case 0x2cb190u: goto label_2cb190;
        case 0x2cb194u: goto label_2cb194;
        case 0x2cb198u: goto label_2cb198;
        case 0x2cb19cu: goto label_2cb19c;
        case 0x2cb1a0u: goto label_2cb1a0;
        case 0x2cb1a4u: goto label_2cb1a4;
        case 0x2cb1a8u: goto label_2cb1a8;
        case 0x2cb1acu: goto label_2cb1ac;
        case 0x2cb1b0u: goto label_2cb1b0;
        case 0x2cb1b4u: goto label_2cb1b4;
        case 0x2cb1b8u: goto label_2cb1b8;
        case 0x2cb1bcu: goto label_2cb1bc;
        case 0x2cb1c0u: goto label_2cb1c0;
        case 0x2cb1c4u: goto label_2cb1c4;
        case 0x2cb1c8u: goto label_2cb1c8;
        case 0x2cb1ccu: goto label_2cb1cc;
        case 0x2cb1d0u: goto label_2cb1d0;
        case 0x2cb1d4u: goto label_2cb1d4;
        case 0x2cb1d8u: goto label_2cb1d8;
        case 0x2cb1dcu: goto label_2cb1dc;
        case 0x2cb1e0u: goto label_2cb1e0;
        case 0x2cb1e4u: goto label_2cb1e4;
        case 0x2cb1e8u: goto label_2cb1e8;
        case 0x2cb1ecu: goto label_2cb1ec;
        case 0x2cb1f0u: goto label_2cb1f0;
        case 0x2cb1f4u: goto label_2cb1f4;
        case 0x2cb1f8u: goto label_2cb1f8;
        case 0x2cb1fcu: goto label_2cb1fc;
        case 0x2cb200u: goto label_2cb200;
        case 0x2cb204u: goto label_2cb204;
        case 0x2cb208u: goto label_2cb208;
        case 0x2cb20cu: goto label_2cb20c;
        case 0x2cb210u: goto label_2cb210;
        case 0x2cb214u: goto label_2cb214;
        case 0x2cb218u: goto label_2cb218;
        case 0x2cb21cu: goto label_2cb21c;
        case 0x2cb220u: goto label_2cb220;
        case 0x2cb224u: goto label_2cb224;
        case 0x2cb228u: goto label_2cb228;
        case 0x2cb22cu: goto label_2cb22c;
        case 0x2cb230u: goto label_2cb230;
        case 0x2cb234u: goto label_2cb234;
        case 0x2cb238u: goto label_2cb238;
        case 0x2cb23cu: goto label_2cb23c;
        case 0x2cb240u: goto label_2cb240;
        case 0x2cb244u: goto label_2cb244;
        case 0x2cb248u: goto label_2cb248;
        case 0x2cb24cu: goto label_2cb24c;
        case 0x2cb250u: goto label_2cb250;
        case 0x2cb254u: goto label_2cb254;
        case 0x2cb258u: goto label_2cb258;
        case 0x2cb25cu: goto label_2cb25c;
        case 0x2cb260u: goto label_2cb260;
        case 0x2cb264u: goto label_2cb264;
        case 0x2cb268u: goto label_2cb268;
        case 0x2cb26cu: goto label_2cb26c;
        case 0x2cb270u: goto label_2cb270;
        case 0x2cb274u: goto label_2cb274;
        case 0x2cb278u: goto label_2cb278;
        case 0x2cb27cu: goto label_2cb27c;
        case 0x2cb280u: goto label_2cb280;
        case 0x2cb284u: goto label_2cb284;
        case 0x2cb288u: goto label_2cb288;
        case 0x2cb28cu: goto label_2cb28c;
        case 0x2cb290u: goto label_2cb290;
        case 0x2cb294u: goto label_2cb294;
        case 0x2cb298u: goto label_2cb298;
        case 0x2cb29cu: goto label_2cb29c;
        case 0x2cb2a0u: goto label_2cb2a0;
        case 0x2cb2a4u: goto label_2cb2a4;
        case 0x2cb2a8u: goto label_2cb2a8;
        case 0x2cb2acu: goto label_2cb2ac;
        case 0x2cb2b0u: goto label_2cb2b0;
        case 0x2cb2b4u: goto label_2cb2b4;
        case 0x2cb2b8u: goto label_2cb2b8;
        case 0x2cb2bcu: goto label_2cb2bc;
        case 0x2cb2c0u: goto label_2cb2c0;
        case 0x2cb2c4u: goto label_2cb2c4;
        case 0x2cb2c8u: goto label_2cb2c8;
        case 0x2cb2ccu: goto label_2cb2cc;
        case 0x2cb2d0u: goto label_2cb2d0;
        case 0x2cb2d4u: goto label_2cb2d4;
        case 0x2cb2d8u: goto label_2cb2d8;
        case 0x2cb2dcu: goto label_2cb2dc;
        case 0x2cb2e0u: goto label_2cb2e0;
        case 0x2cb2e4u: goto label_2cb2e4;
        case 0x2cb2e8u: goto label_2cb2e8;
        case 0x2cb2ecu: goto label_2cb2ec;
        case 0x2cb2f0u: goto label_2cb2f0;
        case 0x2cb2f4u: goto label_2cb2f4;
        case 0x2cb2f8u: goto label_2cb2f8;
        case 0x2cb2fcu: goto label_2cb2fc;
        case 0x2cb300u: goto label_2cb300;
        case 0x2cb304u: goto label_2cb304;
        case 0x2cb308u: goto label_2cb308;
        case 0x2cb30cu: goto label_2cb30c;
        case 0x2cb310u: goto label_2cb310;
        case 0x2cb314u: goto label_2cb314;
        case 0x2cb318u: goto label_2cb318;
        case 0x2cb31cu: goto label_2cb31c;
        case 0x2cb320u: goto label_2cb320;
        case 0x2cb324u: goto label_2cb324;
        case 0x2cb328u: goto label_2cb328;
        case 0x2cb32cu: goto label_2cb32c;
        case 0x2cb330u: goto label_2cb330;
        case 0x2cb334u: goto label_2cb334;
        case 0x2cb338u: goto label_2cb338;
        case 0x2cb33cu: goto label_2cb33c;
        case 0x2cb340u: goto label_2cb340;
        case 0x2cb344u: goto label_2cb344;
        case 0x2cb348u: goto label_2cb348;
        case 0x2cb34cu: goto label_2cb34c;
        case 0x2cb350u: goto label_2cb350;
        case 0x2cb354u: goto label_2cb354;
        case 0x2cb358u: goto label_2cb358;
        case 0x2cb35cu: goto label_2cb35c;
        case 0x2cb360u: goto label_2cb360;
        case 0x2cb364u: goto label_2cb364;
        case 0x2cb368u: goto label_2cb368;
        case 0x2cb36cu: goto label_2cb36c;
        case 0x2cb370u: goto label_2cb370;
        case 0x2cb374u: goto label_2cb374;
        case 0x2cb378u: goto label_2cb378;
        case 0x2cb37cu: goto label_2cb37c;
        case 0x2cb380u: goto label_2cb380;
        case 0x2cb384u: goto label_2cb384;
        case 0x2cb388u: goto label_2cb388;
        case 0x2cb38cu: goto label_2cb38c;
        case 0x2cb390u: goto label_2cb390;
        case 0x2cb394u: goto label_2cb394;
        case 0x2cb398u: goto label_2cb398;
        case 0x2cb39cu: goto label_2cb39c;
        case 0x2cb3a0u: goto label_2cb3a0;
        case 0x2cb3a4u: goto label_2cb3a4;
        case 0x2cb3a8u: goto label_2cb3a8;
        case 0x2cb3acu: goto label_2cb3ac;
        case 0x2cb3b0u: goto label_2cb3b0;
        case 0x2cb3b4u: goto label_2cb3b4;
        case 0x2cb3b8u: goto label_2cb3b8;
        case 0x2cb3bcu: goto label_2cb3bc;
        case 0x2cb3c0u: goto label_2cb3c0;
        case 0x2cb3c4u: goto label_2cb3c4;
        case 0x2cb3c8u: goto label_2cb3c8;
        case 0x2cb3ccu: goto label_2cb3cc;
        case 0x2cb3d0u: goto label_2cb3d0;
        case 0x2cb3d4u: goto label_2cb3d4;
        case 0x2cb3d8u: goto label_2cb3d8;
        case 0x2cb3dcu: goto label_2cb3dc;
        case 0x2cb3e0u: goto label_2cb3e0;
        case 0x2cb3e4u: goto label_2cb3e4;
        case 0x2cb3e8u: goto label_2cb3e8;
        case 0x2cb3ecu: goto label_2cb3ec;
        case 0x2cb3f0u: goto label_2cb3f0;
        case 0x2cb3f4u: goto label_2cb3f4;
        case 0x2cb3f8u: goto label_2cb3f8;
        case 0x2cb3fcu: goto label_2cb3fc;
        case 0x2cb400u: goto label_2cb400;
        case 0x2cb404u: goto label_2cb404;
        case 0x2cb408u: goto label_2cb408;
        case 0x2cb40cu: goto label_2cb40c;
        case 0x2cb410u: goto label_2cb410;
        case 0x2cb414u: goto label_2cb414;
        case 0x2cb418u: goto label_2cb418;
        case 0x2cb41cu: goto label_2cb41c;
        case 0x2cb420u: goto label_2cb420;
        case 0x2cb424u: goto label_2cb424;
        case 0x2cb428u: goto label_2cb428;
        case 0x2cb42cu: goto label_2cb42c;
        case 0x2cb430u: goto label_2cb430;
        case 0x2cb434u: goto label_2cb434;
        case 0x2cb438u: goto label_2cb438;
        case 0x2cb43cu: goto label_2cb43c;
        case 0x2cb440u: goto label_2cb440;
        case 0x2cb444u: goto label_2cb444;
        case 0x2cb448u: goto label_2cb448;
        case 0x2cb44cu: goto label_2cb44c;
        case 0x2cb450u: goto label_2cb450;
        case 0x2cb454u: goto label_2cb454;
        case 0x2cb458u: goto label_2cb458;
        case 0x2cb45cu: goto label_2cb45c;
        case 0x2cb460u: goto label_2cb460;
        case 0x2cb464u: goto label_2cb464;
        case 0x2cb468u: goto label_2cb468;
        case 0x2cb46cu: goto label_2cb46c;
        case 0x2cb470u: goto label_2cb470;
        case 0x2cb474u: goto label_2cb474;
        case 0x2cb478u: goto label_2cb478;
        case 0x2cb47cu: goto label_2cb47c;
        case 0x2cb480u: goto label_2cb480;
        case 0x2cb484u: goto label_2cb484;
        case 0x2cb488u: goto label_2cb488;
        case 0x2cb48cu: goto label_2cb48c;
        case 0x2cb490u: goto label_2cb490;
        case 0x2cb494u: goto label_2cb494;
        case 0x2cb498u: goto label_2cb498;
        case 0x2cb49cu: goto label_2cb49c;
        case 0x2cb4a0u: goto label_2cb4a0;
        case 0x2cb4a4u: goto label_2cb4a4;
        case 0x2cb4a8u: goto label_2cb4a8;
        case 0x2cb4acu: goto label_2cb4ac;
        case 0x2cb4b0u: goto label_2cb4b0;
        case 0x2cb4b4u: goto label_2cb4b4;
        case 0x2cb4b8u: goto label_2cb4b8;
        case 0x2cb4bcu: goto label_2cb4bc;
        case 0x2cb4c0u: goto label_2cb4c0;
        case 0x2cb4c4u: goto label_2cb4c4;
        case 0x2cb4c8u: goto label_2cb4c8;
        case 0x2cb4ccu: goto label_2cb4cc;
        case 0x2cb4d0u: goto label_2cb4d0;
        case 0x2cb4d4u: goto label_2cb4d4;
        case 0x2cb4d8u: goto label_2cb4d8;
        case 0x2cb4dcu: goto label_2cb4dc;
        case 0x2cb4e0u: goto label_2cb4e0;
        case 0x2cb4e4u: goto label_2cb4e4;
        case 0x2cb4e8u: goto label_2cb4e8;
        case 0x2cb4ecu: goto label_2cb4ec;
        case 0x2cb4f0u: goto label_2cb4f0;
        case 0x2cb4f4u: goto label_2cb4f4;
        case 0x2cb4f8u: goto label_2cb4f8;
        case 0x2cb4fcu: goto label_2cb4fc;
        case 0x2cb500u: goto label_2cb500;
        case 0x2cb504u: goto label_2cb504;
        case 0x2cb508u: goto label_2cb508;
        case 0x2cb50cu: goto label_2cb50c;
        case 0x2cb510u: goto label_2cb510;
        case 0x2cb514u: goto label_2cb514;
        case 0x2cb518u: goto label_2cb518;
        case 0x2cb51cu: goto label_2cb51c;
        case 0x2cb520u: goto label_2cb520;
        case 0x2cb524u: goto label_2cb524;
        case 0x2cb528u: goto label_2cb528;
        case 0x2cb52cu: goto label_2cb52c;
        case 0x2cb530u: goto label_2cb530;
        case 0x2cb534u: goto label_2cb534;
        case 0x2cb538u: goto label_2cb538;
        case 0x2cb53cu: goto label_2cb53c;
        case 0x2cb540u: goto label_2cb540;
        case 0x2cb544u: goto label_2cb544;
        case 0x2cb548u: goto label_2cb548;
        case 0x2cb54cu: goto label_2cb54c;
        case 0x2cb550u: goto label_2cb550;
        case 0x2cb554u: goto label_2cb554;
        case 0x2cb558u: goto label_2cb558;
        case 0x2cb55cu: goto label_2cb55c;
        case 0x2cb560u: goto label_2cb560;
        case 0x2cb564u: goto label_2cb564;
        case 0x2cb568u: goto label_2cb568;
        case 0x2cb56cu: goto label_2cb56c;
        case 0x2cb570u: goto label_2cb570;
        case 0x2cb574u: goto label_2cb574;
        case 0x2cb578u: goto label_2cb578;
        case 0x2cb57cu: goto label_2cb57c;
        case 0x2cb580u: goto label_2cb580;
        case 0x2cb584u: goto label_2cb584;
        case 0x2cb588u: goto label_2cb588;
        case 0x2cb58cu: goto label_2cb58c;
        case 0x2cb590u: goto label_2cb590;
        case 0x2cb594u: goto label_2cb594;
        default: break;
    }

    ctx->pc = 0x2cb110u;

label_2cb110:
    // 0x2cb110: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x2cb110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_2cb114:
    // 0x2cb114: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2cb114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2cb118:
    // 0x2cb118: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2cb118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_2cb11c:
    // 0x2cb11c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2cb11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2cb120:
    // 0x2cb120: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2cb120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2cb124:
    // 0x2cb124: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2cb124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2cb128:
    // 0x2cb128: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2cb128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2cb12c:
    // 0x2cb12c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2cb12cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cb130:
    // 0x2cb130: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2cb130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2cb134:
    // 0x2cb134: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2cb134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2cb138:
    // 0x2cb138: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cb138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2cb13c:
    // 0x2cb13c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cb13cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cb140:
    // 0x2cb140: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cb140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2cb144:
    // 0x2cb144: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2cb144u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cb148:
    // 0x2cb148: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2cb148u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2cb14c:
    // 0x2cb14c: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x2cb14cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2cb150:
    // 0x2cb150: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2cb150u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2cb154:
    // 0x2cb154: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2cb154u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2cb158:
    // 0x2cb158: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2cb158u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2cb15c:
    // 0x2cb15c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2cb15cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2cb160:
    // 0x2cb160: 0xafa500bc  sw          $a1, 0xBC($sp)
    ctx->pc = 0x2cb160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
label_2cb164:
    // 0x2cb164: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cb164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2cb168:
    // 0x2cb168: 0xc0a0ecc  jal         func_283B30
label_2cb16c:
    if (ctx->pc == 0x2CB16Cu) {
        ctx->pc = 0x2CB16Cu;
            // 0x2cb16c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CB170u;
        goto label_2cb170;
    }
    ctx->pc = 0x2CB168u;
    SET_GPR_U32(ctx, 31, 0x2CB170u);
    ctx->pc = 0x2CB16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB168u;
            // 0x2cb16c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B30u;
    if (runtime->hasFunction(0x283B30u)) {
        auto targetFn = runtime->lookupFunction(0x283B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB170u; }
        if (ctx->pc != 0x2CB170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaNo__6CSceneFi_0x283b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB170u; }
        if (ctx->pc != 0x2CB170u) { return; }
    }
    ctx->pc = 0x2CB170u;
label_2cb170:
    // 0x2cb170: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cb170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2cb174:
    // 0x2cb174: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cb174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cb178:
    // 0x2cb178: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cb178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb17c:
    // 0x2cb17c: 0xc0a11a4  jal         func_284690
label_2cb180:
    if (ctx->pc == 0x2CB180u) {
        ctx->pc = 0x2CB180u;
            // 0x2cb180: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CB184u;
        goto label_2cb184;
    }
    ctx->pc = 0x2CB17Cu;
    SET_GPR_U32(ctx, 31, 0x2CB184u);
    ctx->pc = 0x2CB180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB17Cu;
            // 0x2cb180: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284690u;
    if (runtime->hasFunction(0x284690u)) {
        auto targetFn = runtime->lookupFunction(0x284690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB184u; }
        if (ctx->pc != 0x2CB184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsActive__6CSceneFii_0x284690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB184u; }
        if (ctx->pc != 0x2CB184u) { return; }
    }
    ctx->pc = 0x2CB184u;
label_2cb184:
    // 0x2cb184: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
label_2cb188:
    if (ctx->pc == 0x2CB188u) {
        ctx->pc = 0x2CB188u;
            // 0x2cb188: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CB18Cu;
        goto label_2cb18c;
    }
    ctx->pc = 0x2CB184u;
    {
        const bool branch_taken_0x2cb184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB184u;
            // 0x2cb188: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb184) {
            ctx->pc = 0x2CB504u;
            goto label_2cb504;
        }
    }
    ctx->pc = 0x2CB18Cu;
label_2cb18c:
    // 0x2cb18c: 0xc0a0ed8  jal         func_283B60
label_2cb190:
    if (ctx->pc == 0x2CB190u) {
        ctx->pc = 0x2CB190u;
            // 0x2cb190: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CB194u;
        goto label_2cb194;
    }
    ctx->pc = 0x2CB18Cu;
    SET_GPR_U32(ctx, 31, 0x2CB194u);
    ctx->pc = 0x2CB190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB18Cu;
            // 0x2cb190: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB194u; }
        if (ctx->pc != 0x2CB194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB194u; }
        if (ctx->pc != 0x2CB194u) { return; }
    }
    ctx->pc = 0x2CB194u;
label_2cb194:
    // 0x2cb194: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2cb194u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb198:
    // 0x2cb198: 0x128000da  beqz        $s4, . + 4 + (0xDA << 2)
label_2cb19c:
    if (ctx->pc == 0x2CB19Cu) {
        ctx->pc = 0x2CB1A0u;
        goto label_2cb1a0;
    }
    ctx->pc = 0x2CB198u;
    {
        const bool branch_taken_0x2cb198 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb198) {
            ctx->pc = 0x2CB504u;
            goto label_2cb504;
        }
    }
    ctx->pc = 0x2CB1A0u;
label_2cb1a0:
    // 0x2cb1a0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2cb1a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2cb1a4:
    // 0x2cb1a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cb1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2cb1a8:
    // 0x2cb1a8: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2cb1a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2cb1ac:
    // 0x2cb1ac: 0x320f809  jalr        $t9
label_2cb1b0:
    if (ctx->pc == 0x2CB1B0u) {
        ctx->pc = 0x2CB1B0u;
            // 0x2cb1b0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2CB1B4u;
        goto label_2cb1b4;
    }
    ctx->pc = 0x2CB1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CB1B4u);
        ctx->pc = 0x2CB1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB1ACu;
            // 0x2cb1b0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CB1B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CB1B4u; }
            if (ctx->pc != 0x2CB1B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2CB1B4u;
label_2cb1b4:
    // 0x2cb1b4: 0xc6800110  lwc1        $f0, 0x110($s4)
    ctx->pc = 0x2cb1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb1b8:
    // 0x2cb1b8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2cb1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2cb1bc:
    // 0x2cb1bc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2cb1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2cb1c0:
    // 0x2cb1c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2cb1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2cb1c4:
    // 0x2cb1c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cb1c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cb1c8:
    // 0x2cb1c8: 0x0  nop
    ctx->pc = 0x2cb1c8u;
    // NOP
label_2cb1cc:
    // 0x2cb1cc: 0x46001542  mul.s       $f21, $f2, $f0
    ctx->pc = 0x2cb1ccu;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2cb1d0:
    // 0x2cb1d0: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x2cb1d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb1d4:
    // 0x2cb1d4: 0x0  nop
    ctx->pc = 0x2cb1d4u;
    // NOP
label_2cb1d8:
    // 0x2cb1d8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2cb1dc:
    if (ctx->pc == 0x2CB1DCu) {
        ctx->pc = 0x2CB1DCu;
            // 0x2cb1dc: 0x3c024200  lui         $v0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
        ctx->pc = 0x2CB1E0u;
        goto label_2cb1e0;
    }
    ctx->pc = 0x2CB1D8u;
    {
        const bool branch_taken_0x2cb1d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CB1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB1D8u;
            // 0x2cb1dc: 0x3c024200  lui         $v0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb1d8) {
            ctx->pc = 0x2CB1E4u;
            goto label_2cb1e4;
        }
    }
    ctx->pc = 0x2CB1E0u;
label_2cb1e0:
    // 0x2cb1e0: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x2cb1e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2cb1e4:
    // 0x2cb1e4: 0x0  nop
    ctx->pc = 0x2cb1e4u;
    // NOP
label_2cb1e8:
    // 0x2cb1e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cb1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2cb1ec:
    // 0x2cb1ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cb1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cb1f0:
    // 0x2cb1f0: 0xc05d3d4  jal         func_174F50
label_2cb1f4:
    if (ctx->pc == 0x2CB1F4u) {
        ctx->pc = 0x2CB1F4u;
            // 0x2cb1f4: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2CB1F8u;
        goto label_2cb1f8;
    }
    ctx->pc = 0x2CB1F0u;
    SET_GPR_U32(ctx, 31, 0x2CB1F8u);
    ctx->pc = 0x2CB1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB1F0u;
            // 0x2cb1f4: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174F50u;
    if (runtime->hasFunction(0x174F50u)) {
        auto targetFn = runtime->lookupFunction(0x174F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB1F8u; }
        if (ctx->pc != 0x2CB1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiPf_0x174f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB1F8u; }
        if (ctx->pc != 0x2CB1F8u) { return; }
    }
    ctx->pc = 0x2CB1F8u;
label_2cb1f8:
    // 0x2cb1f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2cb1fc:
    if (ctx->pc == 0x2CB1FCu) {
        ctx->pc = 0x2CB1FCu;
            // 0x2cb1fc: 0x27a200c0  addiu       $v0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2CB200u;
        goto label_2cb200;
    }
    ctx->pc = 0x2CB1F8u;
    {
        const bool branch_taken_0x2cb1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB1F8u;
            // 0x2cb1fc: 0x27a200c0  addiu       $v0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb1f8) {
            ctx->pc = 0x2CB228u;
            goto label_2cb228;
        }
    }
    ctx->pc = 0x2CB200u;
label_2cb200:
    // 0x2cb200: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x2cb200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2cb204:
    // 0x2cb204: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2cb204u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2cb208:
    // 0x2cb208: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2cb208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_2cb20c:
    // 0x2cb20c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2cb20cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_2cb210:
    // 0x2cb210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cb214:
    // 0x2cb214: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x2cb214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb218:
    // 0x2cb218: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x2cb218u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
label_2cb21c:
    // 0x2cb21c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cb21cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2cb220:
    // 0x2cb220: 0x10000018  b           . + 4 + (0x18 << 2)
label_2cb224:
    if (ctx->pc == 0x2CB224u) {
        ctx->pc = 0x2CB224u;
            // 0x2cb224: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->pc = 0x2CB228u;
        goto label_2cb228;
    }
    ctx->pc = 0x2CB220u;
    {
        const bool branch_taken_0x2cb220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB220u;
            // 0x2cb224: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb220) {
            ctx->pc = 0x2CB284u;
            goto label_2cb284;
        }
    }
    ctx->pc = 0x2CB228u;
label_2cb228:
    // 0x2cb228: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2cb228u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2cb22c:
    // 0x2cb22c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cb22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2cb230:
    // 0x2cb230: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2cb230u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2cb234:
    // 0x2cb234: 0x320f809  jalr        $t9
label_2cb238:
    if (ctx->pc == 0x2CB238u) {
        ctx->pc = 0x2CB238u;
            // 0x2cb238: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2CB23Cu;
        goto label_2cb23c;
    }
    ctx->pc = 0x2CB234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CB23Cu);
        ctx->pc = 0x2CB238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB234u;
            // 0x2cb238: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CB23Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CB23Cu; }
            if (ctx->pc != 0x2CB23Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2CB23Cu;
label_2cb23c:
    // 0x2cb23c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2cb23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2cb240:
    // 0x2cb240: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2cb240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2cb244:
    // 0x2cb244: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x2cb244u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2cb248:
    // 0x2cb248: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x2cb248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_2cb24c:
    // 0x2cb24c: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2cb24cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
label_2cb250:
    // 0x2cb250: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x2cb250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2cb254:
    // 0x2cb254: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cb254u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cb258:
    // 0x2cb258: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x2cb258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_2cb25c:
    // 0x2cb25c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2cb25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_2cb260:
    // 0x2cb260: 0x46150882  mul.s       $f2, $f1, $f21
    ctx->pc = 0x2cb260u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_2cb264:
    // 0x2cb264: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cb268:
    // 0x2cb268: 0xc7a300f4  lwc1        $f3, 0xF4($sp)
    ctx->pc = 0x2cb268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2cb26c:
    // 0x2cb26c: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x2cb26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cb270:
    // 0x2cb270: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2cb270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_2cb274:
    // 0x2cb274: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x2cb274u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2cb278:
    // 0x2cb278: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cb278u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2cb27c:
    // 0x2cb27c: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x2cb27cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_2cb280:
    // 0x2cb280: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2cb280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2cb284:
    // 0x2cb284: 0x0  nop
    ctx->pc = 0x2cb284u;
    // NOP
label_2cb288:
    // 0x2cb288: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2cb288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2cb28c:
    // 0x2cb28c: 0xc0516cc  jal         func_145B30
label_2cb290:
    if (ctx->pc == 0x2CB290u) {
        ctx->pc = 0x2CB290u;
            // 0x2cb290: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2CB294u;
        goto label_2cb294;
    }
    ctx->pc = 0x2CB28Cu;
    SET_GPR_U32(ctx, 31, 0x2CB294u);
    ctx->pc = 0x2CB290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB28Cu;
            // 0x2cb290: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145B30u;
    if (runtime->hasFunction(0x145B30u)) {
        auto targetFn = runtime->lookupFunction(0x145B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB294u; }
        if (ctx->pc != 0x2CB294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetDirFromCamera__FPfPf_0x145b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB294u; }
        if (ctx->pc != 0x2CB294u) { return; }
    }
    ctx->pc = 0x2CB294u;
label_2cb294:
    // 0x2cb294: 0xc04bff4  jal         func_12FFD0
label_2cb298:
    if (ctx->pc == 0x2CB298u) {
        ctx->pc = 0x2CB298u;
            // 0x2cb298: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2CB29Cu;
        goto label_2cb29c;
    }
    ctx->pc = 0x2CB294u;
    SET_GPR_U32(ctx, 31, 0x2CB29Cu);
    ctx->pc = 0x2CB298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB294u;
            // 0x2cb298: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB29Cu; }
        if (ctx->pc != 0x2CB29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB29Cu; }
        if (ctx->pc != 0x2CB29Cu) { return; }
    }
    ctx->pc = 0x2CB29Cu;
label_2cb29c:
    // 0x2cb29c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2cb29cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2cb2a0:
    // 0x2cb2a0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2cb2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_2cb2a4:
    // 0x2cb2a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb2a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cb2a8:
    // 0x2cb2a8: 0x0  nop
    ctx->pc = 0x2cb2a8u;
    // NOP
label_2cb2ac:
    // 0x2cb2ac: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x2cb2acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb2b0:
    // 0x2cb2b0: 0x0  nop
    ctx->pc = 0x2cb2b0u;
    // NOP
label_2cb2b4:
    // 0x2cb2b4: 0x45000093  bc1f        . + 4 + (0x93 << 2)
label_2cb2b8:
    if (ctx->pc == 0x2CB2B8u) {
        ctx->pc = 0x2CB2B8u;
            // 0x2cb2b8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2CB2BCu;
        goto label_2cb2bc;
    }
    ctx->pc = 0x2CB2B4u;
    {
        const bool branch_taken_0x2cb2b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CB2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB2B4u;
            // 0x2cb2b8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb2b4) {
            ctx->pc = 0x2CB504u;
            goto label_2cb504;
        }
    }
    ctx->pc = 0x2CB2BCu;
label_2cb2bc:
    // 0x2cb2bc: 0xc041be0  jal         func_106F80
label_2cb2c0:
    if (ctx->pc == 0x2CB2C0u) {
        ctx->pc = 0x2CB2C0u;
            // 0x2cb2c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CB2C4u;
        goto label_2cb2c4;
    }
    ctx->pc = 0x2CB2BCu;
    SET_GPR_U32(ctx, 31, 0x2CB2C4u);
    ctx->pc = 0x2CB2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB2BCu;
            // 0x2cb2c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB2C4u; }
        if (ctx->pc != 0x2CB2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB2C4u; }
        if (ctx->pc != 0x2CB2C4u) { return; }
    }
    ctx->pc = 0x2CB2C4u;
label_2cb2c4:
    // 0x2cb2c4: 0xc04c050  jal         func_130140
label_2cb2c8:
    if (ctx->pc == 0x2CB2C8u) {
        ctx->pc = 0x2CB2C8u;
            // 0x2cb2c8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x2CB2CCu;
        goto label_2cb2cc;
    }
    ctx->pc = 0x2CB2C4u;
    SET_GPR_U32(ctx, 31, 0x2CB2CCu);
    ctx->pc = 0x2CB2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB2C4u;
            // 0x2cb2c8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB2CCu; }
        if (ctx->pc != 0x2CB2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB2CCu; }
        if (ctx->pc != 0x2CB2CCu) { return; }
    }
    ctx->pc = 0x2CB2CCu;
label_2cb2cc:
    // 0x2cb2cc: 0xc04c050  jal         func_130140
label_2cb2d0:
    if (ctx->pc == 0x2CB2D0u) {
        ctx->pc = 0x2CB2D0u;
            // 0x2cb2d0: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x2CB2D4u;
        goto label_2cb2d4;
    }
    ctx->pc = 0x2CB2CCu;
    SET_GPR_U32(ctx, 31, 0x2CB2D4u);
    ctx->pc = 0x2CB2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB2CCu;
            // 0x2cb2d0: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB2D4u; }
        if (ctx->pc != 0x2CB2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB2D4u; }
        if (ctx->pc != 0x2CB2D4u) { return; }
    }
    ctx->pc = 0x2CB2D4u;
label_2cb2d4:
    // 0x2cb2d4: 0xc7ac00d4  lwc1        $f12, 0xD4($sp)
    ctx->pc = 0x2cb2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2cb2d8:
    // 0x2cb2d8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2cb2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2cb2dc:
    // 0x2cb2dc: 0xc041cf6  jal         func_1073D8
label_2cb2e0:
    if (ctx->pc == 0x2CB2E0u) {
        ctx->pc = 0x2CB2E0u;
            // 0x2cb2e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CB2E4u;
        goto label_2cb2e4;
    }
    ctx->pc = 0x2CB2DCu;
    SET_GPR_U32(ctx, 31, 0x2CB2E4u);
    ctx->pc = 0x2CB2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB2DCu;
            // 0x2cb2e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB2E4u; }
        if (ctx->pc != 0x2CB2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB2E4u; }
        if (ctx->pc != 0x2CB2E4u) { return; }
    }
    ctx->pc = 0x2CB2E4u;
label_2cb2e4:
    // 0x2cb2e4: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x2cb2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2cb2e8:
    // 0x2cb2e8: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x2cb2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2cb2ec:
    // 0x2cb2ec: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x2cb2ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_2cb2f0:
    // 0x2cb2f0: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2cb2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2cb2f4:
    // 0x2cb2f4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2cb2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2cb2f8:
    // 0x2cb2f8: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2cb2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2cb2fc:
    // 0x2cb2fc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2cb2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2cb300:
    // 0x2cb300: 0xafa6013c  sw          $a2, 0x13C($sp)
    ctx->pc = 0x2cb300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 6));
label_2cb304:
    // 0x2cb304: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x2cb304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_2cb308:
    // 0x2cb308: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x2cb308u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_2cb30c:
    // 0x2cb30c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2cb30cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2cb310:
    // 0x2cb310: 0x27a2017c  addiu       $v0, $sp, 0x17C
    ctx->pc = 0x2cb310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_2cb314:
    // 0x2cb314: 0xc041bd6  jal         func_106F58
label_2cb318:
    if (ctx->pc == 0x2CB318u) {
        ctx->pc = 0x2CB318u;
            // 0x2cb318: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->pc = 0x2CB31Cu;
        goto label_2cb31c;
    }
    ctx->pc = 0x2CB314u;
    SET_GPR_U32(ctx, 31, 0x2CB31Cu);
    ctx->pc = 0x2CB318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB314u;
            // 0x2cb318: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB31Cu; }
        if (ctx->pc != 0x2CB31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB31Cu; }
        if (ctx->pc != 0x2CB31Cu) { return; }
    }
    ctx->pc = 0x2CB31Cu;
label_2cb31c:
    // 0x2cb31c: 0xc04bc90  jal         func_12F240
label_2cb320:
    if (ctx->pc == 0x2CB320u) {
        ctx->pc = 0x2CB320u;
            // 0x2cb320: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x2CB324u;
        goto label_2cb324;
    }
    ctx->pc = 0x2CB31Cu;
    SET_GPR_U32(ctx, 31, 0x2CB324u);
    ctx->pc = 0x2CB320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB31Cu;
            // 0x2cb320: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (runtime->hasFunction(0x12F240u)) {
        auto targetFn = runtime->lookupFunction(0x12F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB324u; }
        if (ctx->pc != 0x2CB324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVectorW__FPf_0x12f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB324u; }
        if (ctx->pc != 0x2CB324u) { return; }
    }
    ctx->pc = 0x2CB324u;
label_2cb324:
    // 0x2cb324: 0x27b40190  addiu       $s4, $sp, 0x190
    ctx->pc = 0x2cb324u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2cb328:
    // 0x2cb328: 0xc04bc90  jal         func_12F240
label_2cb32c:
    if (ctx->pc == 0x2CB32Cu) {
        ctx->pc = 0x2CB32Cu;
            // 0x2cb32c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CB330u;
        goto label_2cb330;
    }
    ctx->pc = 0x2CB328u;
    SET_GPR_U32(ctx, 31, 0x2CB330u);
    ctx->pc = 0x2CB32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB328u;
            // 0x2cb32c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (runtime->hasFunction(0x12F240u)) {
        auto targetFn = runtime->lookupFunction(0x12F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB330u; }
        if (ctx->pc != 0x2CB330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVectorW__FPf_0x12f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB330u; }
        if (ctx->pc != 0x2CB330u) { return; }
    }
    ctx->pc = 0x2CB330u;
label_2cb330:
    // 0x2cb330: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x2cb330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_2cb334:
    // 0x2cb334: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2cb334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_2cb338:
    // 0x2cb338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cb33c:
    // 0x2cb33c: 0x27be0198  addiu       $fp, $sp, 0x198
    ctx->pc = 0x2cb33cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_2cb340:
    // 0x2cb340: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2cb340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_2cb344:
    // 0x2cb344: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2cb344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2cb348:
    // 0x2cb348: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2cb348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_2cb34c:
    // 0x2cb34c: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x2cb34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
label_2cb350:
    // 0x2cb350: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x2cb350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2cb354:
    // 0x2cb354: 0x27a701b0  addiu       $a3, $sp, 0x1B0
    ctx->pc = 0x2cb354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2cb358:
    // 0x2cb358: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2cb358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2cb35c:
    // 0x2cb35c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2cb35cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2cb360:
    // 0x2cb360: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x2cb360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
label_2cb364:
    // 0x2cb364: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2cb364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2cb368:
    // 0x2cb368: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cb368u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cb36c:
    // 0x2cb36c: 0xafa30180  sw          $v1, 0x180($sp)
    ctx->pc = 0x2cb36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
label_2cb370:
    // 0x2cb370: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x2cb370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_2cb374:
    // 0x2cb374: 0x460005c7  neg.s       $f23, $f0
    ctx->pc = 0x2cb374u;
    ctx->f[23] = FPU_NEG_S(ctx->f[0]);
label_2cb378:
    // 0x2cb378: 0xe6970000  swc1        $f23, 0x0($s4)
    ctx->pc = 0x2cb378u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_2cb37c:
    // 0x2cb37c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2cb37cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2cb380:
    // 0x2cb380: 0xc04d7c8  jal         func_135F20
label_2cb384:
    if (ctx->pc == 0x2CB384u) {
        ctx->pc = 0x2CB384u;
            // 0x2cb384: 0xe7d70000  swc1        $f23, 0x0($fp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->pc = 0x2CB388u;
        goto label_2cb388;
    }
    ctx->pc = 0x2CB380u;
    SET_GPR_U32(ctx, 31, 0x2CB388u);
    ctx->pc = 0x2CB384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB380u;
            // 0x2cb384: 0xe7d70000  swc1        $f23, 0x0($fp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (runtime->hasFunction(0x135F20u)) {
        auto targetFn = runtime->lookupFunction(0x135F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB388u; }
        if (ctx->pc != 0x2CB388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInsideScreen__FP9mgVu0FBOXPA4_fPfPf_0x135f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB388u; }
        if (ctx->pc != 0x2CB388u) { return; }
    }
    ctx->pc = 0x2CB388u;
label_2cb388:
    // 0x2cb388: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_2cb38c:
    if (ctx->pc == 0x2CB38Cu) {
        ctx->pc = 0x2CB390u;
        goto label_2cb390;
    }
    ctx->pc = 0x2CB388u;
    {
        const bool branch_taken_0x2cb388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb388) {
            ctx->pc = 0x2CB504u;
            goto label_2cb504;
        }
    }
    ctx->pc = 0x2CB390u;
label_2cb390:
    // 0x2cb390: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x2cb390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb394:
    // 0x2cb394: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x2cb394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
label_2cb398:
    // 0x2cb398: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cb398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cb39c:
    // 0x2cb39c: 0x0  nop
    ctx->pc = 0x2cb39cu;
    // NOP
label_2cb3a0:
    // 0x2cb3a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cb3a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb3a4:
    // 0x2cb3a4: 0x0  nop
    ctx->pc = 0x2cb3a4u;
    // NOP
label_2cb3a8:
    // 0x2cb3a8: 0x45010056  bc1t        . + 4 + (0x56 << 2)
label_2cb3ac:
    if (ctx->pc == 0x2CB3ACu) {
        ctx->pc = 0x2CB3B0u;
        goto label_2cb3b0;
    }
    ctx->pc = 0x2CB3A8u;
    {
        const bool branch_taken_0x2cb3a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cb3a8) {
            ctx->pc = 0x2CB504u;
            goto label_2cb504;
        }
    }
    ctx->pc = 0x2CB3B0u;
label_2cb3b0:
    // 0x2cb3b0: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x2cb3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb3b4:
    // 0x2cb3b4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2cb3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_2cb3b8:
    // 0x2cb3b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2cb3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2cb3bc:
    // 0x2cb3bc: 0x0  nop
    ctx->pc = 0x2cb3bcu;
    // NOP
label_2cb3c0:
    // 0x2cb3c0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2cb3c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb3c4:
    // 0x2cb3c4: 0x0  nop
    ctx->pc = 0x2cb3c4u;
    // NOP
label_2cb3c8:
    // 0x2cb3c8: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
label_2cb3cc:
    if (ctx->pc == 0x2CB3CCu) {
        ctx->pc = 0x2CB3CCu;
            // 0x2cb3cc: 0x27b701a4  addiu       $s7, $sp, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
        ctx->pc = 0x2CB3D0u;
        goto label_2cb3d0;
    }
    ctx->pc = 0x2CB3C8u;
    {
        const bool branch_taken_0x2cb3c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CB3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB3C8u;
            // 0x2cb3cc: 0x27b701a4  addiu       $s7, $sp, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb3c8) {
            ctx->pc = 0x2CB504u;
            goto label_2cb504;
        }
    }
    ctx->pc = 0x2CB3D0u;
label_2cb3d0:
    // 0x2cb3d0: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x2cb3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb3d4:
    // 0x2cb3d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cb3d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb3d8:
    // 0x2cb3d8: 0x0  nop
    ctx->pc = 0x2cb3d8u;
    // NOP
label_2cb3dc:
    // 0x2cb3dc: 0x45010049  bc1t        . + 4 + (0x49 << 2)
label_2cb3e0:
    if (ctx->pc == 0x2CB3E0u) {
        ctx->pc = 0x2CB3E0u;
            // 0x2cb3e0: 0x27b601b4  addiu       $s6, $sp, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
        ctx->pc = 0x2CB3E4u;
        goto label_2cb3e4;
    }
    ctx->pc = 0x2CB3DCu;
    {
        const bool branch_taken_0x2cb3dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CB3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB3DCu;
            // 0x2cb3e0: 0x27b601b4  addiu       $s6, $sp, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb3dc) {
            ctx->pc = 0x2CB504u;
            goto label_2cb504;
        }
    }
    ctx->pc = 0x2CB3E4u;
label_2cb3e4:
    // 0x2cb3e4: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x2cb3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb3e8:
    // 0x2cb3e8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2cb3e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb3ec:
    // 0x2cb3ec: 0x0  nop
    ctx->pc = 0x2cb3ecu;
    // NOP
label_2cb3f0:
    // 0x2cb3f0: 0x45000044  bc1f        . + 4 + (0x44 << 2)
label_2cb3f4:
    if (ctx->pc == 0x2CB3F4u) {
        ctx->pc = 0x2CB3F4u;
            // 0x2cb3f4: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x2CB3F8u;
        goto label_2cb3f8;
    }
    ctx->pc = 0x2CB3F0u;
    {
        const bool branch_taken_0x2cb3f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CB3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB3F0u;
            // 0x2cb3f4: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb3f0) {
            ctx->pc = 0x2CB504u;
            goto label_2cb504;
        }
    }
    ctx->pc = 0x2CB3F8u;
label_2cb3f8:
    // 0x2cb3f8: 0xc04c050  jal         func_130140
label_2cb3fc:
    if (ctx->pc == 0x2CB3FCu) {
        ctx->pc = 0x2CB400u;
        goto label_2cb400;
    }
    ctx->pc = 0x2CB3F8u;
    SET_GPR_U32(ctx, 31, 0x2CB400u);
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB400u; }
        if (ctx->pc != 0x2CB400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB400u; }
        if (ctx->pc != 0x2CB400u) { return; }
    }
    ctx->pc = 0x2CB400u;
label_2cb400:
    // 0x2cb400: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x2cb400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2cb404:
    // 0x2cb404: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x2cb404u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_2cb408:
    // 0x2cb408: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x2cb408u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2cb40c:
    // 0x2cb40c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2cb40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_2cb410:
    // 0x2cb410: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2cb410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_2cb414:
    // 0x2cb414: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2cb414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2cb418:
    // 0x2cb418: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x2cb418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2cb41c:
    // 0x2cb41c: 0x27a701b0  addiu       $a3, $sp, 0x1B0
    ctx->pc = 0x2cb41cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2cb420:
    // 0x2cb420: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2cb420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_2cb424:
    // 0x2cb424: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2cb424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2cb428:
    // 0x2cb428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cb42c:
    // 0x2cb42c: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x2cb42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_2cb430:
    // 0x2cb430: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x2cb430u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
label_2cb434:
    // 0x2cb434: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2cb434u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_2cb438:
    // 0x2cb438: 0x27a2017c  addiu       $v0, $sp, 0x17C
    ctx->pc = 0x2cb438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_2cb43c:
    // 0x2cb43c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x2cb43cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
label_2cb440:
    // 0x2cb440: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x2cb440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
label_2cb444:
    // 0x2cb444: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2cb444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2cb448:
    // 0x2cb448: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2cb448u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2cb44c:
    // 0x2cb44c: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x2cb44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
label_2cb450:
    // 0x2cb450: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2cb450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2cb454:
    // 0x2cb454: 0xafa30180  sw          $v1, 0x180($sp)
    ctx->pc = 0x2cb454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
label_2cb458:
    // 0x2cb458: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x2cb458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_2cb45c:
    // 0x2cb45c: 0xe6970000  swc1        $f23, 0x0($s4)
    ctx->pc = 0x2cb45cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_2cb460:
    // 0x2cb460: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2cb460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2cb464:
    // 0x2cb464: 0xc04d7c8  jal         func_135F20
label_2cb468:
    if (ctx->pc == 0x2CB468u) {
        ctx->pc = 0x2CB468u;
            // 0x2cb468: 0xe7d70000  swc1        $f23, 0x0($fp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->pc = 0x2CB46Cu;
        goto label_2cb46c;
    }
    ctx->pc = 0x2CB464u;
    SET_GPR_U32(ctx, 31, 0x2CB46Cu);
    ctx->pc = 0x2CB468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB464u;
            // 0x2cb468: 0xe7d70000  swc1        $f23, 0x0($fp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (runtime->hasFunction(0x135F20u)) {
        auto targetFn = runtime->lookupFunction(0x135F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB46Cu; }
        if (ctx->pc != 0x2CB46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInsideScreen__FP9mgVu0FBOXPA4_fPfPf_0x135f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB46Cu; }
        if (ctx->pc != 0x2CB46Cu) { return; }
    }
    ctx->pc = 0x2CB46Cu;
label_2cb46c:
    // 0x2cb46c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2cb470:
    if (ctx->pc == 0x2CB470u) {
        ctx->pc = 0x2CB474u;
        goto label_2cb474;
    }
    ctx->pc = 0x2CB46Cu;
    {
        const bool branch_taken_0x2cb46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb46c) {
            ctx->pc = 0x2CB4E0u;
            goto label_2cb4e0;
        }
    }
    ctx->pc = 0x2CB474u;
label_2cb474:
    // 0x2cb474: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x2cb474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb478:
    // 0x2cb478: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x2cb478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
label_2cb47c:
    // 0x2cb47c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cb47cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cb480:
    // 0x2cb480: 0x0  nop
    ctx->pc = 0x2cb480u;
    // NOP
label_2cb484:
    // 0x2cb484: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cb484u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb488:
    // 0x2cb488: 0x0  nop
    ctx->pc = 0x2cb488u;
    // NOP
label_2cb48c:
    // 0x2cb48c: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_2cb490:
    if (ctx->pc == 0x2CB490u) {
        ctx->pc = 0x2CB494u;
        goto label_2cb494;
    }
    ctx->pc = 0x2CB48Cu;
    {
        const bool branch_taken_0x2cb48c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cb48c) {
            ctx->pc = 0x2CB4E0u;
            goto label_2cb4e0;
        }
    }
    ctx->pc = 0x2CB494u;
label_2cb494:
    // 0x2cb494: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x2cb494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb498:
    // 0x2cb498: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2cb498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2cb49c:
    // 0x2cb49c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2cb49cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2cb4a0:
    // 0x2cb4a0: 0x0  nop
    ctx->pc = 0x2cb4a0u;
    // NOP
label_2cb4a4:
    // 0x2cb4a4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2cb4a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb4a8:
    // 0x2cb4a8: 0x0  nop
    ctx->pc = 0x2cb4a8u;
    // NOP
label_2cb4ac:
    // 0x2cb4ac: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_2cb4b0:
    if (ctx->pc == 0x2CB4B0u) {
        ctx->pc = 0x2CB4B4u;
        goto label_2cb4b4;
    }
    ctx->pc = 0x2CB4ACu;
    {
        const bool branch_taken_0x2cb4ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cb4ac) {
            ctx->pc = 0x2CB4E0u;
            goto label_2cb4e0;
        }
    }
    ctx->pc = 0x2CB4B4u;
label_2cb4b4:
    // 0x2cb4b4: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x2cb4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb4b8:
    // 0x2cb4b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cb4b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb4bc:
    // 0x2cb4bc: 0x0  nop
    ctx->pc = 0x2cb4bcu;
    // NOP
label_2cb4c0:
    // 0x2cb4c0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_2cb4c4:
    if (ctx->pc == 0x2CB4C4u) {
        ctx->pc = 0x2CB4C8u;
        goto label_2cb4c8;
    }
    ctx->pc = 0x2CB4C0u;
    {
        const bool branch_taken_0x2cb4c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cb4c0) {
            ctx->pc = 0x2CB4E0u;
            goto label_2cb4e0;
        }
    }
    ctx->pc = 0x2CB4C8u;
label_2cb4c8:
    // 0x2cb4c8: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x2cb4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cb4cc:
    // 0x2cb4cc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2cb4ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb4d0:
    // 0x2cb4d0: 0x0  nop
    ctx->pc = 0x2cb4d0u;
    // NOP
label_2cb4d4:
    // 0x2cb4d4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2cb4d8:
    if (ctx->pc == 0x2CB4D8u) {
        ctx->pc = 0x2CB4DCu;
        goto label_2cb4dc;
    }
    ctx->pc = 0x2CB4D4u;
    {
        const bool branch_taken_0x2cb4d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cb4d4) {
            ctx->pc = 0x2CB4E0u;
            goto label_2cb4e0;
        }
    }
    ctx->pc = 0x2CB4DCu;
label_2cb4dc:
    // 0x2cb4dc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2cb4dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cb4e0:
    // 0x2cb4e0: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
label_2cb4e4:
    if (ctx->pc == 0x2CB4E4u) {
        ctx->pc = 0x2CB4E8u;
        goto label_2cb4e8;
    }
    ctx->pc = 0x2CB4E0u;
    {
        const bool branch_taken_0x2cb4e0 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x2cb4e0) {
            ctx->pc = 0x2CB4F8u;
            goto label_2cb4f8;
        }
    }
    ctx->pc = 0x2CB4E8u;
label_2cb4e8:
    // 0x2cb4e8: 0x4616a036  c.le.s      $f20, $f22
    ctx->pc = 0x2cb4e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb4ec:
    // 0x2cb4ec: 0x0  nop
    ctx->pc = 0x2cb4ecu;
    // NOP
label_2cb4f0:
    // 0x2cb4f0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_2cb4f4:
    if (ctx->pc == 0x2CB4F4u) {
        ctx->pc = 0x2CB4F8u;
        goto label_2cb4f8;
    }
    ctx->pc = 0x2CB4F0u;
    {
        const bool branch_taken_0x2cb4f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cb4f0) {
            ctx->pc = 0x2CB504u;
            goto label_2cb504;
        }
    }
    ctx->pc = 0x2CB4F8u;
label_2cb4f8:
    // 0x2cb4f8: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x2cb4f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cb4fc:
    // 0x2cb4fc: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x2cb4fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
label_2cb500:
    // 0x2cb500: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2cb500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb504:
    // 0x2cb504: 0x0  nop
    ctx->pc = 0x2cb504u;
    // NOP
label_2cb508:
    // 0x2cb508: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cb508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2cb50c:
    // 0x2cb50c: 0x2a020040  slti        $v0, $s0, 0x40
    ctx->pc = 0x2cb50cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
label_2cb510:
    // 0x2cb510: 0x1440ff15  bnez        $v0, . + 4 + (-0xEB << 2)
label_2cb514:
    if (ctx->pc == 0x2CB514u) {
        ctx->pc = 0x2CB514u;
            // 0x2cb514: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CB518u;
        goto label_2cb518;
    }
    ctx->pc = 0x2CB510u;
    {
        const bool branch_taken_0x2cb510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB510u;
            // 0x2cb514: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb510) {
            ctx->pc = 0x2CB168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cb168;
        }
    }
    ctx->pc = 0x2CB518u;
label_2cb518:
    // 0x2cb518: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cb518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2cb51c:
    // 0x2cb51c: 0xc0a0ecc  jal         func_283B30
label_2cb520:
    if (ctx->pc == 0x2CB520u) {
        ctx->pc = 0x2CB520u;
            // 0x2cb520: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CB524u;
        goto label_2cb524;
    }
    ctx->pc = 0x2CB51Cu;
    SET_GPR_U32(ctx, 31, 0x2CB524u);
    ctx->pc = 0x2CB520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB51Cu;
            // 0x2cb520: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B30u;
    if (runtime->hasFunction(0x283B30u)) {
        auto targetFn = runtime->lookupFunction(0x283B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB524u; }
        if (ctx->pc != 0x2CB524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaNo__6CSceneFi_0x283b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB524u; }
        if (ctx->pc != 0x2CB524u) { return; }
    }
    ctx->pc = 0x2CB524u;
label_2cb524:
    // 0x2cb524: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x2cb524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2cb528:
    // 0x2cb528: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2cb528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2cb52c:
    // 0x2cb52c: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2cb52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2cb530:
    // 0x2cb530: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2cb530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2cb534:
    // 0x2cb534: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cb534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cb538:
    // 0x2cb538: 0x0  nop
    ctx->pc = 0x2cb538u;
    // NOP
label_2cb53c:
    // 0x2cb53c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2cb53cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2cb540:
    // 0x2cb540: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x2cb540u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
label_2cb544:
    // 0x2cb544: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2cb544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2cb548:
    // 0x2cb548: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
label_2cb54c:
    if (ctx->pc == 0x2CB54Cu) {
        ctx->pc = 0x2CB54Cu;
            // 0x2cb54c: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->pc = 0x2CB550u;
        goto label_2cb550;
    }
    ctx->pc = 0x2CB548u;
    {
        const bool branch_taken_0x2cb548 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2CB54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB548u;
            // 0x2cb54c: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb548) {
            ctx->pc = 0x2CB554u;
            goto label_2cb554;
        }
    }
    ctx->pc = 0x2CB550u;
label_2cb550:
    // 0x2cb550: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2cb550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cb554:
    // 0x2cb554: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cb554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cb558:
    // 0x2cb558: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2cb558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2cb55c:
    // 0x2cb55c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2cb55cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2cb560:
    // 0x2cb560: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2cb560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2cb564:
    // 0x2cb564: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2cb564u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2cb568:
    // 0x2cb568: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2cb568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2cb56c:
    // 0x2cb56c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2cb56cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2cb570:
    // 0x2cb570: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2cb570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2cb574:
    // 0x2cb574: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2cb574u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2cb578:
    // 0x2cb578: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2cb578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2cb57c:
    // 0x2cb57c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2cb57cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2cb580:
    // 0x2cb580: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2cb580u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2cb584:
    // 0x2cb584: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2cb584u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cb588:
    // 0x2cb588: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cb588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cb58c:
    // 0x2cb58c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cb58cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb590:
    // 0x2cb590: 0x3e00008  jr          $ra
label_2cb594:
    if (ctx->pc == 0x2CB594u) {
        ctx->pc = 0x2CB594u;
            // 0x2cb594: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x2CB598u;
        goto label_fallthrough_0x2cb590;
    }
    ctx->pc = 0x2CB590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB590u;
            // 0x2cb594: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2cb590:
    ctx->pc = 0x2CB598u;
}
