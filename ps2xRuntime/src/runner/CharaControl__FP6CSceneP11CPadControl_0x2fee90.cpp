#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CharaControl__FP6CSceneP11CPadControl
// Address: 0x2fee90 - 0x2ff3e8
void CharaControl__FP6CSceneP11CPadControl_0x2fee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CharaControl__FP6CSceneP11CPadControl_0x2fee90");
#endif

    switch (ctx->pc) {
        case 0x2fee90u: goto label_2fee90;
        case 0x2fee94u: goto label_2fee94;
        case 0x2fee98u: goto label_2fee98;
        case 0x2fee9cu: goto label_2fee9c;
        case 0x2feea0u: goto label_2feea0;
        case 0x2feea4u: goto label_2feea4;
        case 0x2feea8u: goto label_2feea8;
        case 0x2feeacu: goto label_2feeac;
        case 0x2feeb0u: goto label_2feeb0;
        case 0x2feeb4u: goto label_2feeb4;
        case 0x2feeb8u: goto label_2feeb8;
        case 0x2feebcu: goto label_2feebc;
        case 0x2feec0u: goto label_2feec0;
        case 0x2feec4u: goto label_2feec4;
        case 0x2feec8u: goto label_2feec8;
        case 0x2feeccu: goto label_2feecc;
        case 0x2feed0u: goto label_2feed0;
        case 0x2feed4u: goto label_2feed4;
        case 0x2feed8u: goto label_2feed8;
        case 0x2feedcu: goto label_2feedc;
        case 0x2feee0u: goto label_2feee0;
        case 0x2feee4u: goto label_2feee4;
        case 0x2feee8u: goto label_2feee8;
        case 0x2feeecu: goto label_2feeec;
        case 0x2feef0u: goto label_2feef0;
        case 0x2feef4u: goto label_2feef4;
        case 0x2feef8u: goto label_2feef8;
        case 0x2feefcu: goto label_2feefc;
        case 0x2fef00u: goto label_2fef00;
        case 0x2fef04u: goto label_2fef04;
        case 0x2fef08u: goto label_2fef08;
        case 0x2fef0cu: goto label_2fef0c;
        case 0x2fef10u: goto label_2fef10;
        case 0x2fef14u: goto label_2fef14;
        case 0x2fef18u: goto label_2fef18;
        case 0x2fef1cu: goto label_2fef1c;
        case 0x2fef20u: goto label_2fef20;
        case 0x2fef24u: goto label_2fef24;
        case 0x2fef28u: goto label_2fef28;
        case 0x2fef2cu: goto label_2fef2c;
        case 0x2fef30u: goto label_2fef30;
        case 0x2fef34u: goto label_2fef34;
        case 0x2fef38u: goto label_2fef38;
        case 0x2fef3cu: goto label_2fef3c;
        case 0x2fef40u: goto label_2fef40;
        case 0x2fef44u: goto label_2fef44;
        case 0x2fef48u: goto label_2fef48;
        case 0x2fef4cu: goto label_2fef4c;
        case 0x2fef50u: goto label_2fef50;
        case 0x2fef54u: goto label_2fef54;
        case 0x2fef58u: goto label_2fef58;
        case 0x2fef5cu: goto label_2fef5c;
        case 0x2fef60u: goto label_2fef60;
        case 0x2fef64u: goto label_2fef64;
        case 0x2fef68u: goto label_2fef68;
        case 0x2fef6cu: goto label_2fef6c;
        case 0x2fef70u: goto label_2fef70;
        case 0x2fef74u: goto label_2fef74;
        case 0x2fef78u: goto label_2fef78;
        case 0x2fef7cu: goto label_2fef7c;
        case 0x2fef80u: goto label_2fef80;
        case 0x2fef84u: goto label_2fef84;
        case 0x2fef88u: goto label_2fef88;
        case 0x2fef8cu: goto label_2fef8c;
        case 0x2fef90u: goto label_2fef90;
        case 0x2fef94u: goto label_2fef94;
        case 0x2fef98u: goto label_2fef98;
        case 0x2fef9cu: goto label_2fef9c;
        case 0x2fefa0u: goto label_2fefa0;
        case 0x2fefa4u: goto label_2fefa4;
        case 0x2fefa8u: goto label_2fefa8;
        case 0x2fefacu: goto label_2fefac;
        case 0x2fefb0u: goto label_2fefb0;
        case 0x2fefb4u: goto label_2fefb4;
        case 0x2fefb8u: goto label_2fefb8;
        case 0x2fefbcu: goto label_2fefbc;
        case 0x2fefc0u: goto label_2fefc0;
        case 0x2fefc4u: goto label_2fefc4;
        case 0x2fefc8u: goto label_2fefc8;
        case 0x2fefccu: goto label_2fefcc;
        case 0x2fefd0u: goto label_2fefd0;
        case 0x2fefd4u: goto label_2fefd4;
        case 0x2fefd8u: goto label_2fefd8;
        case 0x2fefdcu: goto label_2fefdc;
        case 0x2fefe0u: goto label_2fefe0;
        case 0x2fefe4u: goto label_2fefe4;
        case 0x2fefe8u: goto label_2fefe8;
        case 0x2fefecu: goto label_2fefec;
        case 0x2feff0u: goto label_2feff0;
        case 0x2feff4u: goto label_2feff4;
        case 0x2feff8u: goto label_2feff8;
        case 0x2feffcu: goto label_2feffc;
        case 0x2ff000u: goto label_2ff000;
        case 0x2ff004u: goto label_2ff004;
        case 0x2ff008u: goto label_2ff008;
        case 0x2ff00cu: goto label_2ff00c;
        case 0x2ff010u: goto label_2ff010;
        case 0x2ff014u: goto label_2ff014;
        case 0x2ff018u: goto label_2ff018;
        case 0x2ff01cu: goto label_2ff01c;
        case 0x2ff020u: goto label_2ff020;
        case 0x2ff024u: goto label_2ff024;
        case 0x2ff028u: goto label_2ff028;
        case 0x2ff02cu: goto label_2ff02c;
        case 0x2ff030u: goto label_2ff030;
        case 0x2ff034u: goto label_2ff034;
        case 0x2ff038u: goto label_2ff038;
        case 0x2ff03cu: goto label_2ff03c;
        case 0x2ff040u: goto label_2ff040;
        case 0x2ff044u: goto label_2ff044;
        case 0x2ff048u: goto label_2ff048;
        case 0x2ff04cu: goto label_2ff04c;
        case 0x2ff050u: goto label_2ff050;
        case 0x2ff054u: goto label_2ff054;
        case 0x2ff058u: goto label_2ff058;
        case 0x2ff05cu: goto label_2ff05c;
        case 0x2ff060u: goto label_2ff060;
        case 0x2ff064u: goto label_2ff064;
        case 0x2ff068u: goto label_2ff068;
        case 0x2ff06cu: goto label_2ff06c;
        case 0x2ff070u: goto label_2ff070;
        case 0x2ff074u: goto label_2ff074;
        case 0x2ff078u: goto label_2ff078;
        case 0x2ff07cu: goto label_2ff07c;
        case 0x2ff080u: goto label_2ff080;
        case 0x2ff084u: goto label_2ff084;
        case 0x2ff088u: goto label_2ff088;
        case 0x2ff08cu: goto label_2ff08c;
        case 0x2ff090u: goto label_2ff090;
        case 0x2ff094u: goto label_2ff094;
        case 0x2ff098u: goto label_2ff098;
        case 0x2ff09cu: goto label_2ff09c;
        case 0x2ff0a0u: goto label_2ff0a0;
        case 0x2ff0a4u: goto label_2ff0a4;
        case 0x2ff0a8u: goto label_2ff0a8;
        case 0x2ff0acu: goto label_2ff0ac;
        case 0x2ff0b0u: goto label_2ff0b0;
        case 0x2ff0b4u: goto label_2ff0b4;
        case 0x2ff0b8u: goto label_2ff0b8;
        case 0x2ff0bcu: goto label_2ff0bc;
        case 0x2ff0c0u: goto label_2ff0c0;
        case 0x2ff0c4u: goto label_2ff0c4;
        case 0x2ff0c8u: goto label_2ff0c8;
        case 0x2ff0ccu: goto label_2ff0cc;
        case 0x2ff0d0u: goto label_2ff0d0;
        case 0x2ff0d4u: goto label_2ff0d4;
        case 0x2ff0d8u: goto label_2ff0d8;
        case 0x2ff0dcu: goto label_2ff0dc;
        case 0x2ff0e0u: goto label_2ff0e0;
        case 0x2ff0e4u: goto label_2ff0e4;
        case 0x2ff0e8u: goto label_2ff0e8;
        case 0x2ff0ecu: goto label_2ff0ec;
        case 0x2ff0f0u: goto label_2ff0f0;
        case 0x2ff0f4u: goto label_2ff0f4;
        case 0x2ff0f8u: goto label_2ff0f8;
        case 0x2ff0fcu: goto label_2ff0fc;
        case 0x2ff100u: goto label_2ff100;
        case 0x2ff104u: goto label_2ff104;
        case 0x2ff108u: goto label_2ff108;
        case 0x2ff10cu: goto label_2ff10c;
        case 0x2ff110u: goto label_2ff110;
        case 0x2ff114u: goto label_2ff114;
        case 0x2ff118u: goto label_2ff118;
        case 0x2ff11cu: goto label_2ff11c;
        case 0x2ff120u: goto label_2ff120;
        case 0x2ff124u: goto label_2ff124;
        case 0x2ff128u: goto label_2ff128;
        case 0x2ff12cu: goto label_2ff12c;
        case 0x2ff130u: goto label_2ff130;
        case 0x2ff134u: goto label_2ff134;
        case 0x2ff138u: goto label_2ff138;
        case 0x2ff13cu: goto label_2ff13c;
        case 0x2ff140u: goto label_2ff140;
        case 0x2ff144u: goto label_2ff144;
        case 0x2ff148u: goto label_2ff148;
        case 0x2ff14cu: goto label_2ff14c;
        case 0x2ff150u: goto label_2ff150;
        case 0x2ff154u: goto label_2ff154;
        case 0x2ff158u: goto label_2ff158;
        case 0x2ff15cu: goto label_2ff15c;
        case 0x2ff160u: goto label_2ff160;
        case 0x2ff164u: goto label_2ff164;
        case 0x2ff168u: goto label_2ff168;
        case 0x2ff16cu: goto label_2ff16c;
        case 0x2ff170u: goto label_2ff170;
        case 0x2ff174u: goto label_2ff174;
        case 0x2ff178u: goto label_2ff178;
        case 0x2ff17cu: goto label_2ff17c;
        case 0x2ff180u: goto label_2ff180;
        case 0x2ff184u: goto label_2ff184;
        case 0x2ff188u: goto label_2ff188;
        case 0x2ff18cu: goto label_2ff18c;
        case 0x2ff190u: goto label_2ff190;
        case 0x2ff194u: goto label_2ff194;
        case 0x2ff198u: goto label_2ff198;
        case 0x2ff19cu: goto label_2ff19c;
        case 0x2ff1a0u: goto label_2ff1a0;
        case 0x2ff1a4u: goto label_2ff1a4;
        case 0x2ff1a8u: goto label_2ff1a8;
        case 0x2ff1acu: goto label_2ff1ac;
        case 0x2ff1b0u: goto label_2ff1b0;
        case 0x2ff1b4u: goto label_2ff1b4;
        case 0x2ff1b8u: goto label_2ff1b8;
        case 0x2ff1bcu: goto label_2ff1bc;
        case 0x2ff1c0u: goto label_2ff1c0;
        case 0x2ff1c4u: goto label_2ff1c4;
        case 0x2ff1c8u: goto label_2ff1c8;
        case 0x2ff1ccu: goto label_2ff1cc;
        case 0x2ff1d0u: goto label_2ff1d0;
        case 0x2ff1d4u: goto label_2ff1d4;
        case 0x2ff1d8u: goto label_2ff1d8;
        case 0x2ff1dcu: goto label_2ff1dc;
        case 0x2ff1e0u: goto label_2ff1e0;
        case 0x2ff1e4u: goto label_2ff1e4;
        case 0x2ff1e8u: goto label_2ff1e8;
        case 0x2ff1ecu: goto label_2ff1ec;
        case 0x2ff1f0u: goto label_2ff1f0;
        case 0x2ff1f4u: goto label_2ff1f4;
        case 0x2ff1f8u: goto label_2ff1f8;
        case 0x2ff1fcu: goto label_2ff1fc;
        case 0x2ff200u: goto label_2ff200;
        case 0x2ff204u: goto label_2ff204;
        case 0x2ff208u: goto label_2ff208;
        case 0x2ff20cu: goto label_2ff20c;
        case 0x2ff210u: goto label_2ff210;
        case 0x2ff214u: goto label_2ff214;
        case 0x2ff218u: goto label_2ff218;
        case 0x2ff21cu: goto label_2ff21c;
        case 0x2ff220u: goto label_2ff220;
        case 0x2ff224u: goto label_2ff224;
        case 0x2ff228u: goto label_2ff228;
        case 0x2ff22cu: goto label_2ff22c;
        case 0x2ff230u: goto label_2ff230;
        case 0x2ff234u: goto label_2ff234;
        case 0x2ff238u: goto label_2ff238;
        case 0x2ff23cu: goto label_2ff23c;
        case 0x2ff240u: goto label_2ff240;
        case 0x2ff244u: goto label_2ff244;
        case 0x2ff248u: goto label_2ff248;
        case 0x2ff24cu: goto label_2ff24c;
        case 0x2ff250u: goto label_2ff250;
        case 0x2ff254u: goto label_2ff254;
        case 0x2ff258u: goto label_2ff258;
        case 0x2ff25cu: goto label_2ff25c;
        case 0x2ff260u: goto label_2ff260;
        case 0x2ff264u: goto label_2ff264;
        case 0x2ff268u: goto label_2ff268;
        case 0x2ff26cu: goto label_2ff26c;
        case 0x2ff270u: goto label_2ff270;
        case 0x2ff274u: goto label_2ff274;
        case 0x2ff278u: goto label_2ff278;
        case 0x2ff27cu: goto label_2ff27c;
        case 0x2ff280u: goto label_2ff280;
        case 0x2ff284u: goto label_2ff284;
        case 0x2ff288u: goto label_2ff288;
        case 0x2ff28cu: goto label_2ff28c;
        case 0x2ff290u: goto label_2ff290;
        case 0x2ff294u: goto label_2ff294;
        case 0x2ff298u: goto label_2ff298;
        case 0x2ff29cu: goto label_2ff29c;
        case 0x2ff2a0u: goto label_2ff2a0;
        case 0x2ff2a4u: goto label_2ff2a4;
        case 0x2ff2a8u: goto label_2ff2a8;
        case 0x2ff2acu: goto label_2ff2ac;
        case 0x2ff2b0u: goto label_2ff2b0;
        case 0x2ff2b4u: goto label_2ff2b4;
        case 0x2ff2b8u: goto label_2ff2b8;
        case 0x2ff2bcu: goto label_2ff2bc;
        case 0x2ff2c0u: goto label_2ff2c0;
        case 0x2ff2c4u: goto label_2ff2c4;
        case 0x2ff2c8u: goto label_2ff2c8;
        case 0x2ff2ccu: goto label_2ff2cc;
        case 0x2ff2d0u: goto label_2ff2d0;
        case 0x2ff2d4u: goto label_2ff2d4;
        case 0x2ff2d8u: goto label_2ff2d8;
        case 0x2ff2dcu: goto label_2ff2dc;
        case 0x2ff2e0u: goto label_2ff2e0;
        case 0x2ff2e4u: goto label_2ff2e4;
        case 0x2ff2e8u: goto label_2ff2e8;
        case 0x2ff2ecu: goto label_2ff2ec;
        case 0x2ff2f0u: goto label_2ff2f0;
        case 0x2ff2f4u: goto label_2ff2f4;
        case 0x2ff2f8u: goto label_2ff2f8;
        case 0x2ff2fcu: goto label_2ff2fc;
        case 0x2ff300u: goto label_2ff300;
        case 0x2ff304u: goto label_2ff304;
        case 0x2ff308u: goto label_2ff308;
        case 0x2ff30cu: goto label_2ff30c;
        case 0x2ff310u: goto label_2ff310;
        case 0x2ff314u: goto label_2ff314;
        case 0x2ff318u: goto label_2ff318;
        case 0x2ff31cu: goto label_2ff31c;
        case 0x2ff320u: goto label_2ff320;
        case 0x2ff324u: goto label_2ff324;
        case 0x2ff328u: goto label_2ff328;
        case 0x2ff32cu: goto label_2ff32c;
        case 0x2ff330u: goto label_2ff330;
        case 0x2ff334u: goto label_2ff334;
        case 0x2ff338u: goto label_2ff338;
        case 0x2ff33cu: goto label_2ff33c;
        case 0x2ff340u: goto label_2ff340;
        case 0x2ff344u: goto label_2ff344;
        case 0x2ff348u: goto label_2ff348;
        case 0x2ff34cu: goto label_2ff34c;
        case 0x2ff350u: goto label_2ff350;
        case 0x2ff354u: goto label_2ff354;
        case 0x2ff358u: goto label_2ff358;
        case 0x2ff35cu: goto label_2ff35c;
        case 0x2ff360u: goto label_2ff360;
        case 0x2ff364u: goto label_2ff364;
        case 0x2ff368u: goto label_2ff368;
        case 0x2ff36cu: goto label_2ff36c;
        case 0x2ff370u: goto label_2ff370;
        case 0x2ff374u: goto label_2ff374;
        case 0x2ff378u: goto label_2ff378;
        case 0x2ff37cu: goto label_2ff37c;
        case 0x2ff380u: goto label_2ff380;
        case 0x2ff384u: goto label_2ff384;
        case 0x2ff388u: goto label_2ff388;
        case 0x2ff38cu: goto label_2ff38c;
        case 0x2ff390u: goto label_2ff390;
        case 0x2ff394u: goto label_2ff394;
        case 0x2ff398u: goto label_2ff398;
        case 0x2ff39cu: goto label_2ff39c;
        case 0x2ff3a0u: goto label_2ff3a0;
        case 0x2ff3a4u: goto label_2ff3a4;
        case 0x2ff3a8u: goto label_2ff3a8;
        case 0x2ff3acu: goto label_2ff3ac;
        case 0x2ff3b0u: goto label_2ff3b0;
        case 0x2ff3b4u: goto label_2ff3b4;
        case 0x2ff3b8u: goto label_2ff3b8;
        case 0x2ff3bcu: goto label_2ff3bc;
        case 0x2ff3c0u: goto label_2ff3c0;
        case 0x2ff3c4u: goto label_2ff3c4;
        case 0x2ff3c8u: goto label_2ff3c8;
        case 0x2ff3ccu: goto label_2ff3cc;
        case 0x2ff3d0u: goto label_2ff3d0;
        case 0x2ff3d4u: goto label_2ff3d4;
        case 0x2ff3d8u: goto label_2ff3d8;
        case 0x2ff3dcu: goto label_2ff3dc;
        case 0x2ff3e0u: goto label_2ff3e0;
        case 0x2ff3e4u: goto label_2ff3e4;
        default: break;
    }

    ctx->pc = 0x2fee90u;

label_2fee90:
    // 0x2fee90: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x2fee90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
label_2fee94:
    // 0x2fee94: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2fee94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2fee98:
    // 0x2fee98: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2fee98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2fee9c:
    // 0x2fee9c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2fee9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2feea0:
    // 0x2feea0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2feea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2feea4:
    // 0x2feea4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2feea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2feea8:
    // 0x2feea8: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x2feea8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2feeac:
    // 0x2feeac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2feeacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2feeb0:
    // 0x2feeb0: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2feeb0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2feeb4:
    // 0x2feeb4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2feeb4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2feeb8:
    // 0x2feeb8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2feeb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2feebc:
    // 0x2feebc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2feebcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2feec0:
    // 0x2feec0: 0x8c852e50  lw          $a1, 0x2E50($a0)
    ctx->pc = 0x2feec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
label_2feec4:
    // 0x2feec4: 0xc0a0ed8  jal         func_283B60
label_2feec8:
    if (ctx->pc == 0x2FEEC8u) {
        ctx->pc = 0x2FEEC8u;
            // 0x2feec8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FEECCu;
        goto label_2feecc;
    }
    ctx->pc = 0x2FEEC4u;
    SET_GPR_U32(ctx, 31, 0x2FEECCu);
    ctx->pc = 0x2FEEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEEC4u;
            // 0x2feec8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEECCu; }
        if (ctx->pc != 0x2FEECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEECCu; }
        if (ctx->pc != 0x2FEECCu) { return; }
    }
    ctx->pc = 0x2FEECCu;
label_2feecc:
    // 0x2feecc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2feeccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2feed0:
    // 0x2feed0: 0x12600139  beqz        $s3, . + 4 + (0x139 << 2)
label_2feed4:
    if (ctx->pc == 0x2FEED4u) {
        ctx->pc = 0x2FEED8u;
        goto label_2feed8;
    }
    ctx->pc = 0x2FEED0u;
    {
        const bool branch_taken_0x2feed0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2feed0) {
            ctx->pc = 0x2FF3B8u;
            goto label_2ff3b8;
        }
    }
    ctx->pc = 0x2FEED8u;
label_2feed8:
    // 0x2feed8: 0x8e252e54  lw          $a1, 0x2E54($s1)
    ctx->pc = 0x2feed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11860)));
label_2feedc:
    // 0x2feedc: 0xc0a0e30  jal         func_2838C0
label_2feee0:
    if (ctx->pc == 0x2FEEE0u) {
        ctx->pc = 0x2FEEE0u;
            // 0x2feee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FEEE4u;
        goto label_2feee4;
    }
    ctx->pc = 0x2FEEDCu;
    SET_GPR_U32(ctx, 31, 0x2FEEE4u);
    ctx->pc = 0x2FEEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEEDCu;
            // 0x2feee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEEE4u; }
        if (ctx->pc != 0x2FEEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEEE4u; }
        if (ctx->pc != 0x2FEEE4u) { return; }
    }
    ctx->pc = 0x2FEEE4u;
label_2feee4:
    // 0x2feee4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2feee4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2feee8:
    // 0x2feee8: 0x12400133  beqz        $s2, . + 4 + (0x133 << 2)
label_2feeec:
    if (ctx->pc == 0x2FEEECu) {
        ctx->pc = 0x2FEEF0u;
        goto label_2feef0;
    }
    ctx->pc = 0x2FEEE8u;
    {
        const bool branch_taken_0x2feee8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2feee8) {
            ctx->pc = 0x2FF3B8u;
            goto label_2ff3b8;
        }
    }
    ctx->pc = 0x2FEEF0u;
label_2feef0:
    // 0x2feef0: 0x8e590060  lw          $t9, 0x60($s2)
    ctx->pc = 0x2feef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_2feef4:
    // 0x2feef4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2feef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2feef8:
    // 0x2feef8: 0x320f809  jalr        $t9
label_2feefc:
    if (ctx->pc == 0x2FEEFCu) {
        ctx->pc = 0x2FEEFCu;
            // 0x2feefc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FEF00u;
        goto label_2fef00;
    }
    ctx->pc = 0x2FEEF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FEF00u);
        ctx->pc = 0x2FEEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEEF8u;
            // 0x2feefc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FEF00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FEF00u; }
            if (ctx->pc != 0x2FEF00u) { return; }
        }
        }
    }
    ctx->pc = 0x2FEF00u;
label_2fef00:
    // 0x2fef00: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x2fef00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2fef04:
    // 0x2fef04: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_2fef08:
    if (ctx->pc == 0x2FEF08u) {
        ctx->pc = 0x2FEF0Cu;
        goto label_2fef0c;
    }
    ctx->pc = 0x2FEF04u;
    {
        const bool branch_taken_0x2fef04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fef04) {
            ctx->pc = 0x2FEF14u;
            goto label_2fef14;
        }
    }
    ctx->pc = 0x2FEF0Cu;
label_2fef0c:
    // 0x2fef0c: 0x1000012b  b           . + 4 + (0x12B << 2)
label_2fef10:
    if (ctx->pc == 0x2FEF10u) {
        ctx->pc = 0x2FEF10u;
            // 0x2fef10: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x2FEF14u;
        goto label_2fef14;
    }
    ctx->pc = 0x2FEF0Cu;
    {
        const bool branch_taken_0x2fef0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEF0Cu;
            // 0x2fef10: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fef0c) {
            ctx->pc = 0x2FF3BCu;
            goto label_2ff3bc;
        }
    }
    ctx->pc = 0x2FEF14u;
label_2fef14:
    // 0x2fef14: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fef14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fef18:
    // 0x2fef18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fef18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fef1c:
    // 0x2fef1c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2fef1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2fef20:
    // 0x2fef20: 0x320f809  jalr        $t9
label_2fef24:
    if (ctx->pc == 0x2FEF24u) {
        ctx->pc = 0x2FEF24u;
            // 0x2fef24: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2FEF28u;
        goto label_2fef28;
    }
    ctx->pc = 0x2FEF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FEF28u);
        ctx->pc = 0x2FEF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEF20u;
            // 0x2fef24: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FEF28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FEF28u; }
            if (ctx->pc != 0x2FEF28u) { return; }
        }
        }
    }
    ctx->pc = 0x2FEF28u;
label_2fef28:
    // 0x2fef28: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fef28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fef2c:
    // 0x2fef2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fef2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fef30:
    // 0x2fef30: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2fef30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2fef34:
    // 0x2fef34: 0x320f809  jalr        $t9
label_2fef38:
    if (ctx->pc == 0x2FEF38u) {
        ctx->pc = 0x2FEF38u;
            // 0x2fef38: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2FEF3Cu;
        goto label_2fef3c;
    }
    ctx->pc = 0x2FEF34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FEF3Cu);
        ctx->pc = 0x2FEF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEF34u;
            // 0x2fef38: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FEF3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FEF3Cu; }
            if (ctx->pc != 0x2FEF3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2FEF3Cu;
label_2fef3c:
    // 0x2fef3c: 0xc7ac0084  lwc1        $f12, 0x84($sp)
    ctx->pc = 0x2fef3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2fef40:
    // 0x2fef40: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fef40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2fef44:
    // 0x2fef44: 0xc04c154  jal         func_130550
label_2fef48:
    if (ctx->pc == 0x2FEF48u) {
        ctx->pc = 0x2FEF48u;
            // 0x2fef48: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2FEF4Cu;
        goto label_2fef4c;
    }
    ctx->pc = 0x2FEF44u;
    SET_GPR_U32(ctx, 31, 0x2FEF4Cu);
    ctx->pc = 0x2FEF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEF44u;
            // 0x2fef48: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130550u;
    if (runtime->hasFunction(0x130550u)) {
        auto targetFn = runtime->lookupFunction(0x130550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEF4Cu; }
        if (ctx->pc != 0x2FEF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCreateMatrixPY__FPA4_fPff_0x130550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEF4Cu; }
        if (ctx->pc != 0x2FEF4Cu) { return; }
    }
    ctx->pc = 0x2FEF4Cu;
label_2fef4c:
    // 0x2fef4c: 0x7a630080  lq          $v1, 0x80($s3)
    ctx->pc = 0x2fef4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 128)));
label_2fef50:
    // 0x2fef50: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x2fef50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2fef54:
    // 0x2fef54: 0x16000019  bnez        $s0, . + 4 + (0x19 << 2)
label_2fef58:
    if (ctx->pc == 0x2FEF58u) {
        ctx->pc = 0x2FEF58u;
            // 0x2fef58: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->pc = 0x2FEF5Cu;
        goto label_2fef5c;
    }
    ctx->pc = 0x2FEF54u;
    {
        const bool branch_taken_0x2fef54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEF54u;
            // 0x2fef58: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fef54) {
            ctx->pc = 0x2FEFBCu;
            goto label_2fefbc;
        }
    }
    ctx->pc = 0x2FEF5Cu;
label_2fef5c:
    // 0x2fef5c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2fef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2fef60:
    // 0x2fef60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fef60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fef64:
    // 0x2fef64: 0xc049c86  jal         func_127218
label_2fef68:
    if (ctx->pc == 0x2FEF68u) {
        ctx->pc = 0x2FEF68u;
            // 0x2fef68: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x2FEF6Cu;
        goto label_2fef6c;
    }
    ctx->pc = 0x2FEF64u;
    SET_GPR_U32(ctx, 31, 0x2FEF6Cu);
    ctx->pc = 0x2FEF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEF64u;
            // 0x2fef68: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEF6Cu; }
        if (ctx->pc != 0x2FEF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEF6Cu; }
        if (ctx->pc != 0x2FEF6Cu) { return; }
    }
    ctx->pc = 0x2FEF6Cu;
label_2fef6c:
    // 0x2fef6c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2fef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2fef70:
    // 0x2fef70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fef70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fef74:
    // 0x2fef74: 0xc049c86  jal         func_127218
label_2fef78:
    if (ctx->pc == 0x2FEF78u) {
        ctx->pc = 0x2FEF78u;
            // 0x2fef78: 0x24060130  addiu       $a2, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->pc = 0x2FEF7Cu;
        goto label_2fef7c;
    }
    ctx->pc = 0x2FEF74u;
    SET_GPR_U32(ctx, 31, 0x2FEF7Cu);
    ctx->pc = 0x2FEF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEF74u;
            // 0x2fef78: 0x24060130  addiu       $a2, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEF7Cu; }
        if (ctx->pc != 0x2FEF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEF7Cu; }
        if (ctx->pc != 0x2FEF7Cu) { return; }
    }
    ctx->pc = 0x2FEF7Cu;
label_2fef7c:
    // 0x2fef7c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2fef7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fef80:
    // 0x2fef80: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x2fef80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_2fef84:
    // 0x2fef84: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2fef84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_2fef88:
    // 0x2fef88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fef88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fef8c:
    // 0x2fef8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fef8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fef90:
    // 0x2fef90: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2fef90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2fef94:
    // 0x2fef94: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2fef94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2fef98:
    // 0x2fef98: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2fef98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2fef9c:
    // 0x2fef9c: 0xc0690dc  jal         func_1A4370
label_2fefa0:
    if (ctx->pc == 0x2FEFA0u) {
        ctx->pc = 0x2FEFA0u;
            // 0x2fefa0: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->pc = 0x2FEFA4u;
        goto label_2fefa4;
    }
    ctx->pc = 0x2FEF9Cu;
    SET_GPR_U32(ctx, 31, 0x2FEFA4u);
    ctx->pc = 0x2FEFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEF9Cu;
            // 0x2fefa0: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4370u;
    if (runtime->hasFunction(0x1A4370u)) {
        auto targetFn = runtime->lookupFunction(0x1A4370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEFA4u; }
        if (ctx->pc != 0x2FEFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditMoveChara__FP6CScenePfP17EditMoveCharaInfo_0x1a4370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEFA4u; }
        if (ctx->pc != 0x2FEFA4u) { return; }
    }
    ctx->pc = 0x2FEFA4u;
label_2fefa4:
    // 0x2fefa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fefa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fefa8:
    // 0x2fefa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fefa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fefac:
    // 0x2fefac: 0xc0693a0  jal         func_1A4E80
label_2fefb0:
    if (ctx->pc == 0x2FEFB0u) {
        ctx->pc = 0x2FEFB0u;
            // 0x2fefb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FEFB4u;
        goto label_2fefb4;
    }
    ctx->pc = 0x2FEFACu;
    SET_GPR_U32(ctx, 31, 0x2FEFB4u);
    ctx->pc = 0x2FEFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEFACu;
            // 0x2fefb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E80u;
    if (runtime->hasFunction(0x1A4E80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEFB4u; }
        if (ctx->pc != 0x2FEFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditCameraControl__FP6CSceneP11CPadControlPA4_f_0x1a4e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEFB4u; }
        if (ctx->pc != 0x2FEFB4u) { return; }
    }
    ctx->pc = 0x2FEFB4u;
label_2fefb4:
    // 0x2fefb4: 0x10000100  b           . + 4 + (0x100 << 2)
label_2fefb8:
    if (ctx->pc == 0x2FEFB8u) {
        ctx->pc = 0x2FEFBCu;
        goto label_2fefbc;
    }
    ctx->pc = 0x2FEFB4u;
    {
        const bool branch_taken_0x2fefb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fefb4) {
            ctx->pc = 0x2FF3B8u;
            goto label_2ff3b8;
        }
    }
    ctx->pc = 0x2FEFBCu;
label_2fefbc:
    // 0x2fefbc: 0xc04c678  jal         func_1319E0
label_2fefc0:
    if (ctx->pc == 0x2FEFC0u) {
        ctx->pc = 0x2FEFC0u;
            // 0x2fefc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FEFC4u;
        goto label_2fefc4;
    }
    ctx->pc = 0x2FEFBCu;
    SET_GPR_U32(ctx, 31, 0x2FEFC4u);
    ctx->pc = 0x2FEFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEFBCu;
            // 0x2fefc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319E0u;
    if (runtime->hasFunction(0x1319E0u)) {
        auto targetFn = runtime->lookupFunction(0x1319E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEFC4u; }
        if (ctx->pc != 0x2FEFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngle__15mgCCameraFollowFv_0x1319e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEFC4u; }
        if (ctx->pc != 0x2FEFC4u) { return; }
    }
    ctx->pc = 0x2FEFC4u;
label_2fefc4:
    // 0x2fefc4: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x2fefc4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_2fefc8:
    // 0x2fefc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fefc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fefcc:
    // 0x2fefcc: 0xc0bb548  jal         func_2ED520
label_2fefd0:
    if (ctx->pc == 0x2FEFD0u) {
        ctx->pc = 0x2FEFD0u;
            // 0x2fefd0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2FEFD4u;
        goto label_2fefd4;
    }
    ctx->pc = 0x2FEFCCu;
    SET_GPR_U32(ctx, 31, 0x2FEFD4u);
    ctx->pc = 0x2FEFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEFCCu;
            // 0x2fefd0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEFD4u; }
        if (ctx->pc != 0x2FEFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEFD4u; }
        if (ctx->pc != 0x2FEFD4u) { return; }
    }
    ctx->pc = 0x2FEFD4u;
label_2fefd4:
    // 0x2fefd4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2fefd4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2fefd8:
    // 0x2fefd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fefd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fefdc:
    // 0x2fefdc: 0xc0bb548  jal         func_2ED520
label_2fefe0:
    if (ctx->pc == 0x2FEFE0u) {
        ctx->pc = 0x2FEFE0u;
            // 0x2fefe0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2FEFE4u;
        goto label_2fefe4;
    }
    ctx->pc = 0x2FEFDCu;
    SET_GPR_U32(ctx, 31, 0x2FEFE4u);
    ctx->pc = 0x2FEFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEFDCu;
            // 0x2fefe0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEFE4u; }
        if (ctx->pc != 0x2FEFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEFE4u; }
        if (ctx->pc != 0x2FEFE4u) { return; }
    }
    ctx->pc = 0x2FEFE4u;
label_2fefe4:
    // 0x2fefe4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2fefe4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2fefe8:
    // 0x2fefe8: 0xc047964  jal         func_11E590
label_2fefec:
    if (ctx->pc == 0x2FEFECu) {
        ctx->pc = 0x2FEFECu;
            // 0x2fefec: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x2FEFF0u;
        goto label_2feff0;
    }
    ctx->pc = 0x2FEFE8u;
    SET_GPR_U32(ctx, 31, 0x2FEFF0u);
    ctx->pc = 0x2FEFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEFE8u;
            // 0x2fefec: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEFF0u; }
        if (ctx->pc != 0x2FEFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEFF0u; }
        if (ctx->pc != 0x2FEFF0u) { return; }
    }
    ctx->pc = 0x2FEFF0u;
label_2feff0:
    // 0x2feff0: 0x4600a582  mul.s       $f22, $f20, $f0
    ctx->pc = 0x2feff0u;
    ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2feff4:
    // 0x2feff4: 0xc047a42  jal         func_11E908
label_2feff8:
    if (ctx->pc == 0x2FEFF8u) {
        ctx->pc = 0x2FEFF8u;
            // 0x2feff8: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x2FEFFCu;
        goto label_2feffc;
    }
    ctx->pc = 0x2FEFF4u;
    SET_GPR_U32(ctx, 31, 0x2FEFFCu);
    ctx->pc = 0x2FEFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEFF4u;
            // 0x2feff8: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEFFCu; }
        if (ctx->pc != 0x2FEFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEFFCu; }
        if (ctx->pc != 0x2FEFFCu) { return; }
    }
    ctx->pc = 0x2FEFFCu;
label_2feffc:
    // 0x2feffc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2feffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_2ff000:
    // 0x2ff000: 0x4600b600  add.s       $f24, $f22, $f0
    ctx->pc = 0x2ff000u;
    ctx->f[24] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_2ff004:
    // 0x2ff004: 0xc047a42  jal         func_11E908
label_2ff008:
    if (ctx->pc == 0x2FF008u) {
        ctx->pc = 0x2FF008u;
            // 0x2ff008: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x2FF00Cu;
        goto label_2ff00c;
    }
    ctx->pc = 0x2FF004u;
    SET_GPR_U32(ctx, 31, 0x2FF00Cu);
    ctx->pc = 0x2FF008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF004u;
            // 0x2ff008: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF00Cu; }
        if (ctx->pc != 0x2FF00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF00Cu; }
        if (ctx->pc != 0x2FF00Cu) { return; }
    }
    ctx->pc = 0x2FF00Cu;
label_2ff00c:
    // 0x2ff00c: 0x4600a047  neg.s       $f1, $f20
    ctx->pc = 0x2ff00cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[20]);
label_2ff010:
    // 0x2ff010: 0x46000d82  mul.s       $f22, $f1, $f0
    ctx->pc = 0x2ff010u;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2ff014:
    // 0x2ff014: 0xc047964  jal         func_11E590
label_2ff018:
    if (ctx->pc == 0x2FF018u) {
        ctx->pc = 0x2FF018u;
            // 0x2ff018: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x2FF01Cu;
        goto label_2ff01c;
    }
    ctx->pc = 0x2FF014u;
    SET_GPR_U32(ctx, 31, 0x2FF01Cu);
    ctx->pc = 0x2FF018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF014u;
            // 0x2ff018: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF01Cu; }
        if (ctx->pc != 0x2FF01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF01Cu; }
        if (ctx->pc != 0x2FF01Cu) { return; }
    }
    ctx->pc = 0x2FF01Cu;
label_2ff01c:
    // 0x2ff01c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2ff01cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_2ff020:
    // 0x2ff020: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x2ff020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_2ff024:
    // 0x2ff024: 0x3c034060  lui         $v1, 0x4060
    ctx->pc = 0x2ff024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16480 << 16));
label_2ff028:
    // 0x2ff028: 0x8c228074  lw          $v0, -0x7F8C($at)
    ctx->pc = 0x2ff028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934644)));
label_2ff02c:
    // 0x2ff02c: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x2ff02cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_2ff030:
    // 0x2ff030: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ff030u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ff034:
    // 0x2ff034: 0x0  nop
    ctx->pc = 0x2ff034u;
    // NOP
label_2ff038:
    // 0x2ff038: 0x4600c602  mul.s       $f24, $f24, $f0
    ctx->pc = 0x2ff038u;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
label_2ff03c:
    // 0x2ff03c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2ff040:
    if (ctx->pc == 0x2FF040u) {
        ctx->pc = 0x2FF040u;
            // 0x2ff040: 0x4600b582  mul.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->pc = 0x2FF044u;
        goto label_2ff044;
    }
    ctx->pc = 0x2FF03Cu;
    {
        const bool branch_taken_0x2ff03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF03Cu;
            // 0x2ff040: 0x4600b582  mul.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff03c) {
            ctx->pc = 0x2FF08Cu;
            goto label_2ff08c;
        }
    }
    ctx->pc = 0x2FF044u;
label_2ff044:
    // 0x2ff044: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2ff044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2ff048:
    // 0x2ff048: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ff048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff04c:
    // 0x2ff04c: 0xc052cf0  jal         func_14B3C0
label_2ff050:
    if (ctx->pc == 0x2FF050u) {
        ctx->pc = 0x2FF050u;
            // 0x2ff050: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x2FF054u;
        goto label_2ff054;
    }
    ctx->pc = 0x2FF04Cu;
    SET_GPR_U32(ctx, 31, 0x2FF054u);
    ctx->pc = 0x2FF050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF04Cu;
            // 0x2ff050: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF054u; }
        if (ctx->pc != 0x2FF054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF054u; }
        if (ctx->pc != 0x2FF054u) { return; }
    }
    ctx->pc = 0x2FF054u;
label_2ff054:
    // 0x2ff054: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2ff058:
    if (ctx->pc == 0x2FF058u) {
        ctx->pc = 0x2FF058u;
            // 0x2ff058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF05Cu;
        goto label_2ff05c;
    }
    ctx->pc = 0x2FF054u;
    {
        const bool branch_taken_0x2ff054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF054u;
            // 0x2ff058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff054) {
            ctx->pc = 0x2FF074u;
            goto label_2ff074;
        }
    }
    ctx->pc = 0x2FF05Cu;
label_2ff05c:
    // 0x2ff05c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2ff05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_2ff060:
    // 0x2ff060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ff064:
    // 0x2ff064: 0x0  nop
    ctx->pc = 0x2ff064u;
    // NOP
label_2ff068:
    // 0x2ff068: 0x4600c602  mul.s       $f24, $f24, $f0
    ctx->pc = 0x2ff068u;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
label_2ff06c:
    // 0x2ff06c: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x2ff06cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_2ff070:
    // 0x2ff070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ff074:
    // 0x2ff074: 0xc0bb538  jal         func_2ED4E0
label_2ff078:
    if (ctx->pc == 0x2FF078u) {
        ctx->pc = 0x2FF078u;
            // 0x2ff078: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FF07Cu;
        goto label_2ff07c;
    }
    ctx->pc = 0x2FF074u;
    SET_GPR_U32(ctx, 31, 0x2FF07Cu);
    ctx->pc = 0x2FF078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF074u;
            // 0x2ff078: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF07Cu; }
        if (ctx->pc != 0x2FF07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF07Cu; }
        if (ctx->pc != 0x2FF07Cu) { return; }
    }
    ctx->pc = 0x2FF07Cu;
label_2ff07c:
    // 0x2ff07c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ff080:
    if (ctx->pc == 0x2FF080u) {
        ctx->pc = 0x2FF084u;
        goto label_2ff084;
    }
    ctx->pc = 0x2FF07Cu;
    {
        const bool branch_taken_0x2ff07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff07c) {
            ctx->pc = 0x2FF08Cu;
            goto label_2ff08c;
        }
    }
    ctx->pc = 0x2FF084u;
label_2ff084:
    // 0x2ff084: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2ff084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_2ff088:
    // 0x2ff088: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x2ff088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_2ff08c:
    // 0x2ff08c: 0xe7b80090  swc1        $f24, 0x90($sp)
    ctx->pc = 0x2ff08cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2ff090:
    // 0x2ff090: 0x27b20098  addiu       $s2, $sp, 0x98
    ctx->pc = 0x2ff090u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_2ff094:
    // 0x2ff094: 0xe6560000  swc1        $f22, 0x0($s2)
    ctx->pc = 0x2ff094u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2ff098:
    // 0x2ff098: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x2ff098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_2ff09c:
    // 0x2ff09c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2ff09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ff0a0:
    // 0x2ff0a0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2ff0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_2ff0a4:
    // 0x2ff0a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff0a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ff0a8:
    // 0x2ff0a8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2ff0a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2ff0ac:
    // 0x2ff0ac: 0x0  nop
    ctx->pc = 0x2ff0acu;
    // NOP
label_2ff0b0:
    // 0x2ff0b0: 0x46181032  c.eq.s      $f2, $f24
    ctx->pc = 0x2ff0b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ff0b4:
    // 0x2ff0b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2ff0b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2ff0b8:
    // 0x2ff0b8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2ff0bc:
    if (ctx->pc == 0x2FF0BCu) {
        ctx->pc = 0x2FF0BCu;
            // 0x2ff0bc: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->pc = 0x2FF0C0u;
        goto label_2ff0c0;
    }
    ctx->pc = 0x2FF0B8u;
    {
        const bool branch_taken_0x2ff0b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FF0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF0B8u;
            // 0x2ff0bc: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff0b8) {
            ctx->pc = 0x2FF0D0u;
            goto label_2ff0d0;
        }
    }
    ctx->pc = 0x2FF0C0u;
label_2ff0c0:
    // 0x2ff0c0: 0x46161032  c.eq.s      $f2, $f22
    ctx->pc = 0x2ff0c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ff0c4:
    // 0x2ff0c4: 0x0  nop
    ctx->pc = 0x2ff0c4u;
    // NOP
label_2ff0c8:
    // 0x2ff0c8: 0x45010061  bc1t        . + 4 + (0x61 << 2)
label_2ff0cc:
    if (ctx->pc == 0x2FF0CCu) {
        ctx->pc = 0x2FF0D0u;
        goto label_2ff0d0;
    }
    ctx->pc = 0x2FF0C8u;
    {
        const bool branch_taken_0x2ff0c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ff0c8) {
            ctx->pc = 0x2FF250u;
            goto label_2ff250;
        }
    }
    ctx->pc = 0x2FF0D0u;
label_2ff0d0:
    // 0x2ff0d0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2ff0d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ff0d4:
    // 0x2ff0d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ff0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ff0d8:
    // 0x2ff0d8: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2ff0d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2ff0dc:
    // 0x2ff0dc: 0x320f809  jalr        $t9
label_2ff0e0:
    if (ctx->pc == 0x2FF0E0u) {
        ctx->pc = 0x2FF0E0u;
            // 0x2ff0e0: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x2FF0E4u;
        goto label_2ff0e4;
    }
    ctx->pc = 0x2FF0DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF0E4u);
        ctx->pc = 0x2FF0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF0DCu;
            // 0x2ff0e0: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF0E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF0E4u; }
            if (ctx->pc != 0x2FF0E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF0E4u;
label_2ff0e4:
    // 0x2ff0e4: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x2ff0e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_2ff0e8:
    // 0x2ff0e8: 0xc047c76  jal         func_11F1D8
label_2ff0ec:
    if (ctx->pc == 0x2FF0ECu) {
        ctx->pc = 0x2FF0ECu;
            // 0x2ff0ec: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x2FF0F0u;
        goto label_2ff0f0;
    }
    ctx->pc = 0x2FF0E8u;
    SET_GPR_U32(ctx, 31, 0x2FF0F0u);
    ctx->pc = 0x2FF0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF0E8u;
            // 0x2ff0ec: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF0F0u; }
        if (ctx->pc != 0x2FF0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF0F0u; }
        if (ctx->pc != 0x2FF0F0u) { return; }
    }
    ctx->pc = 0x2FF0F0u;
label_2ff0f0:
    // 0x2ff0f0: 0xc7ac0214  lwc1        $f12, 0x214($sp)
    ctx->pc = 0x2ff0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ff0f4:
    // 0x2ff0f4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2ff0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_2ff0f8:
    // 0x2ff0f8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2ff0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_2ff0fc:
    // 0x2ff0fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ff0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff100:
    // 0x2ff100: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2ff100u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2ff104:
    // 0x2ff104: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2ff104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2ff108:
    // 0x2ff108: 0xc04c2d8  jal         func_130B60
label_2ff10c:
    if (ctx->pc == 0x2FF10Cu) {
        ctx->pc = 0x2FF10Cu;
            // 0x2ff10c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x2FF110u;
        goto label_2ff110;
    }
    ctx->pc = 0x2FF108u;
    SET_GPR_U32(ctx, 31, 0x2FF110u);
    ctx->pc = 0x2FF10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF108u;
            // 0x2ff10c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130B60u;
    if (runtime->hasFunction(0x130B60u)) {
        auto targetFn = runtime->lookupFunction(0x130B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF110u; }
        if (ctx->pc != 0x2FF110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleInterpolate__Ffffi_0x130b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF110u; }
        if (ctx->pc != 0x2FF110u) { return; }
    }
    ctx->pc = 0x2FF110u;
label_2ff110:
    // 0x2ff110: 0x4600b301  sub.s       $f12, $f22, $f0
    ctx->pc = 0x2ff110u;
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_2ff114:
    // 0x2ff114: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2ff114u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2ff118:
    // 0x2ff118: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ff118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ff11c:
    // 0x2ff11c: 0x0  nop
    ctx->pc = 0x2ff11cu;
    // NOP
label_2ff120:
    // 0x2ff120: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2ff120u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ff124:
    // 0x2ff124: 0x0  nop
    ctx->pc = 0x2ff124u;
    // NOP
label_2ff128:
    // 0x2ff128: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2ff12c:
    if (ctx->pc == 0x2FF12Cu) {
        ctx->pc = 0x2FF130u;
        goto label_2ff130;
    }
    ctx->pc = 0x2FF128u;
    {
        const bool branch_taken_0x2ff128 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ff128) {
            ctx->pc = 0x2FF134u;
            goto label_2ff134;
        }
    }
    ctx->pc = 0x2FF130u;
label_2ff130:
    // 0x2ff130: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x2ff130u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_2ff134:
    // 0x2ff134: 0xc0a248c  jal         func_289230
label_2ff138:
    if (ctx->pc == 0x2FF138u) {
        ctx->pc = 0x2FF13Cu;
        goto label_2ff13c;
    }
    ctx->pc = 0x2FF134u;
    SET_GPR_U32(ctx, 31, 0x2FF13Cu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF13Cu; }
        if (ctx->pc != 0x2FF13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF13Cu; }
        if (ctx->pc != 0x2FF13Cu) { return; }
    }
    ctx->pc = 0x2FF13Cu;
label_2ff13c:
    // 0x2ff13c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff13cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ff140:
    // 0x2ff140: 0x0  nop
    ctx->pc = 0x2ff140u;
    // NOP
label_2ff144:
    // 0x2ff144: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ff144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2ff148:
    // 0x2ff148: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ff148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2ff14c:
    // 0x2ff14c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff14cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ff150:
    // 0x2ff150: 0x0  nop
    ctx->pc = 0x2ff150u;
    // NOP
label_2ff154:
    // 0x2ff154: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ff154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ff158:
    // 0x2ff158: 0x0  nop
    ctx->pc = 0x2ff158u;
    // NOP
label_2ff15c:
    // 0x2ff15c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_2ff160:
    if (ctx->pc == 0x2FF160u) {
        ctx->pc = 0x2FF164u;
        goto label_2ff164;
    }
    ctx->pc = 0x2FF15Cu;
    {
        const bool branch_taken_0x2ff15c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ff15c) {
            ctx->pc = 0x2FF188u;
            goto label_2ff188;
        }
    }
    ctx->pc = 0x2FF164u;
label_2ff164:
    // 0x2ff164: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2ff164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ff168:
    // 0x2ff168: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2ff168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2ff16c:
    // 0x2ff16c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ff170:
    // 0x2ff170: 0x0  nop
    ctx->pc = 0x2ff170u;
    // NOP
label_2ff174:
    // 0x2ff174: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ff174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2ff178:
    // 0x2ff178: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2ff178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2ff17c:
    // 0x2ff17c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2ff17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ff180:
    // 0x2ff180: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ff180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2ff184:
    // 0x2ff184: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2ff184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2ff188:
    // 0x2ff188: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2ff188u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ff18c:
    // 0x2ff18c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ff18cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ff190:
    // 0x2ff190: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2ff190u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_2ff194:
    // 0x2ff194: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ff194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ff198:
    // 0x2ff198: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2ff198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2ff19c:
    // 0x2ff19c: 0x320f809  jalr        $t9
label_2ff1a0:
    if (ctx->pc == 0x2FF1A0u) {
        ctx->pc = 0x2FF1A0u;
            // 0x2ff1a0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2FF1A4u;
        goto label_2ff1a4;
    }
    ctx->pc = 0x2FF19Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF1A4u);
        ctx->pc = 0x2FF1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF19Cu;
            // 0x2ff1a0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF1A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF1A4u; }
            if (ctx->pc != 0x2FF1A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF1A4u;
label_2ff1a4:
    // 0x2ff1a4: 0x4614a01a  mula.s      $f20, $f20
    ctx->pc = 0x2ff1a4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2ff1a8:
    // 0x2ff1a8: 0xc047cc0  jal         func_11F300
label_2ff1ac:
    if (ctx->pc == 0x2FF1ACu) {
        ctx->pc = 0x2FF1ACu;
            // 0x2ff1ac: 0x4615ab1c  madd.s      $f12, $f21, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[21]));
        ctx->pc = 0x2FF1B0u;
        goto label_2ff1b0;
    }
    ctx->pc = 0x2FF1A8u;
    SET_GPR_U32(ctx, 31, 0x2FF1B0u);
    ctx->pc = 0x2FF1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF1A8u;
            // 0x2ff1ac: 0x4615ab1c  madd.s      $f12, $f21, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[21]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F300u;
    if (runtime->hasFunction(0x11F300u)) {
        auto targetFn = runtime->lookupFunction(0x11F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF1B0u; }
        if (ctx->pc != 0x2FF1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x11f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF1B0u; }
        if (ctx->pc != 0x2FF1B0u) { return; }
    }
    ctx->pc = 0x2FF1B0u;
label_2ff1b0:
    // 0x2ff1b0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2ff1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_2ff1b4:
    // 0x2ff1b4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2ff1b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2ff1b8:
    // 0x2ff1b8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ff1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2ff1bc:
    // 0x2ff1bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ff1c0:
    // 0x2ff1c0: 0x0  nop
    ctx->pc = 0x2ff1c0u;
    // NOP
label_2ff1c4:
    // 0x2ff1c4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2ff1c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ff1c8:
    // 0x2ff1c8: 0x0  nop
    ctx->pc = 0x2ff1c8u;
    // NOP
label_2ff1cc:
    // 0x2ff1cc: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_2ff1d0:
    if (ctx->pc == 0x2FF1D0u) {
        ctx->pc = 0x2FF1D4u;
        goto label_2ff1d4;
    }
    ctx->pc = 0x2FF1CCu;
    {
        const bool branch_taken_0x2ff1cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ff1cc) {
            ctx->pc = 0x2FF22Cu;
            goto label_2ff22c;
        }
    }
    ctx->pc = 0x2FF1D4u;
label_2ff1d4:
    // 0x2ff1d4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2ff1d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ff1d8:
    // 0x2ff1d8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ff1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2ff1dc:
    // 0x2ff1dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ff1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ff1e0:
    // 0x2ff1e0: 0x24a51fb0  addiu       $a1, $a1, 0x1FB0
    ctx->pc = 0x2ff1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8112));
label_2ff1e4:
    // 0x2ff1e4: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2ff1e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2ff1e8:
    // 0x2ff1e8: 0x320f809  jalr        $t9
label_2ff1ec:
    if (ctx->pc == 0x2FF1ECu) {
        ctx->pc = 0x2FF1ECu;
            // 0x2ff1ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF1F0u;
        goto label_2ff1f0;
    }
    ctx->pc = 0x2FF1E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF1F0u);
        ctx->pc = 0x2FF1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF1E8u;
            // 0x2ff1ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF1F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF1F0u; }
            if (ctx->pc != 0x2FF1F0u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF1F0u;
label_2ff1f0:
    // 0x2ff1f0: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2ff1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_2ff1f4:
    // 0x2ff1f4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2ff1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_2ff1f8:
    // 0x2ff1f8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2ff1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_2ff1fc:
    // 0x2ff1fc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ff1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2ff200:
    // 0x2ff200: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ff200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ff204:
    // 0x2ff204: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2ff204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ff208:
    // 0x2ff208: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ff208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ff20c:
    // 0x2ff20c: 0x4601a043  div.s       $f1, $f20, $f1
    ctx->pc = 0x2ff20cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
label_2ff210:
    // 0x2ff210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ff214:
    // 0x2ff214: 0x0  nop
    ctx->pc = 0x2ff214u;
    // NOP
label_2ff218:
    // 0x2ff218: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x2ff218u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_2ff21c:
    // 0x2ff21c: 0x320f809  jalr        $t9
label_2ff220:
    if (ctx->pc == 0x2FF220u) {
        ctx->pc = 0x2FF220u;
            // 0x2ff220: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x2FF224u;
        goto label_2ff224;
    }
    ctx->pc = 0x2FF21Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF224u);
        ctx->pc = 0x2FF220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF21Cu;
            // 0x2ff220: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF224u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF224u; }
            if (ctx->pc != 0x2FF224u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF224u;
label_2ff224:
    // 0x2ff224: 0x10000012  b           . + 4 + (0x12 << 2)
label_2ff228:
    if (ctx->pc == 0x2FF228u) {
        ctx->pc = 0x2FF228u;
            // 0x2ff228: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x2FF22Cu;
        goto label_2ff22c;
    }
    ctx->pc = 0x2FF224u;
    {
        const bool branch_taken_0x2ff224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF224u;
            // 0x2ff228: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff224) {
            ctx->pc = 0x2FF270u;
            goto label_2ff270;
        }
    }
    ctx->pc = 0x2FF22Cu;
label_2ff22c:
    // 0x2ff22c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2ff22cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ff230:
    // 0x2ff230: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ff230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2ff234:
    // 0x2ff234: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ff234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ff238:
    // 0x2ff238: 0x24a51fc0  addiu       $a1, $a1, 0x1FC0
    ctx->pc = 0x2ff238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8128));
label_2ff23c:
    // 0x2ff23c: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2ff23cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2ff240:
    // 0x2ff240: 0x320f809  jalr        $t9
label_2ff244:
    if (ctx->pc == 0x2FF244u) {
        ctx->pc = 0x2FF244u;
            // 0x2ff244: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF248u;
        goto label_2ff248;
    }
    ctx->pc = 0x2FF240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF248u);
        ctx->pc = 0x2FF244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF240u;
            // 0x2ff244: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF248u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF248u; }
            if (ctx->pc != 0x2FF248u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF248u;
label_2ff248:
    // 0x2ff248: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ff24c:
    if (ctx->pc == 0x2FF24Cu) {
        ctx->pc = 0x2FF250u;
        goto label_2ff250;
    }
    ctx->pc = 0x2FF248u;
    {
        const bool branch_taken_0x2ff248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff248) {
            ctx->pc = 0x2FF26Cu;
            goto label_2ff26c;
        }
    }
    ctx->pc = 0x2FF250u;
label_2ff250:
    // 0x2ff250: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2ff250u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ff254:
    // 0x2ff254: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ff254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2ff258:
    // 0x2ff258: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ff258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ff25c:
    // 0x2ff25c: 0x24a51f28  addiu       $a1, $a1, 0x1F28
    ctx->pc = 0x2ff25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7976));
label_2ff260:
    // 0x2ff260: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2ff260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2ff264:
    // 0x2ff264: 0x320f809  jalr        $t9
label_2ff268:
    if (ctx->pc == 0x2FF268u) {
        ctx->pc = 0x2FF268u;
            // 0x2ff268: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF26Cu;
        goto label_2ff26c;
    }
    ctx->pc = 0x2FF264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF26Cu);
        ctx->pc = 0x2FF268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF264u;
            // 0x2ff268: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF26Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF26Cu; }
            if (ctx->pc != 0x2FF26Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2FF26Cu;
label_2ff26c:
    // 0x2ff26c: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2ff26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_2ff270:
    // 0x2ff270: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff274:
    // 0x2ff274: 0xc049c86  jal         func_127218
label_2ff278:
    if (ctx->pc == 0x2FF278u) {
        ctx->pc = 0x2FF278u;
            // 0x2ff278: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x2FF27Cu;
        goto label_2ff27c;
    }
    ctx->pc = 0x2FF274u;
    SET_GPR_U32(ctx, 31, 0x2FF27Cu);
    ctx->pc = 0x2FF278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF274u;
            // 0x2ff278: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF27Cu; }
        if (ctx->pc != 0x2FF27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF27Cu; }
        if (ctx->pc != 0x2FF27Cu) { return; }
    }
    ctx->pc = 0x2FF27Cu;
label_2ff27c:
    // 0x2ff27c: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x2ff27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_2ff280:
    // 0x2ff280: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff284:
    // 0x2ff284: 0xc049c86  jal         func_127218
label_2ff288:
    if (ctx->pc == 0x2FF288u) {
        ctx->pc = 0x2FF288u;
            // 0x2ff288: 0x24060130  addiu       $a2, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->pc = 0x2FF28Cu;
        goto label_2ff28c;
    }
    ctx->pc = 0x2FF284u;
    SET_GPR_U32(ctx, 31, 0x2FF28Cu);
    ctx->pc = 0x2FF288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF284u;
            // 0x2ff288: 0x24060130  addiu       $a2, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF28Cu; }
        if (ctx->pc != 0x2FF28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF28Cu; }
        if (ctx->pc != 0x2FF28Cu) { return; }
    }
    ctx->pc = 0x2FF28Cu;
label_2ff28c:
    // 0x2ff28c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ff290:
    // 0x2ff290: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2ff290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2ff294:
    // 0x2ff294: 0xc0690dc  jal         func_1A4370
label_2ff298:
    if (ctx->pc == 0x2FF298u) {
        ctx->pc = 0x2FF298u;
            // 0x2ff298: 0x27a60220  addiu       $a2, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x2FF29Cu;
        goto label_2ff29c;
    }
    ctx->pc = 0x2FF294u;
    SET_GPR_U32(ctx, 31, 0x2FF29Cu);
    ctx->pc = 0x2FF298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF294u;
            // 0x2ff298: 0x27a60220  addiu       $a2, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4370u;
    if (runtime->hasFunction(0x1A4370u)) {
        auto targetFn = runtime->lookupFunction(0x1A4370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF29Cu; }
        if (ctx->pc != 0x2FF29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditMoveChara__FP6CScenePfP17EditMoveCharaInfo_0x1a4370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF29Cu; }
        if (ctx->pc != 0x2FF29Cu) { return; }
    }
    ctx->pc = 0x2FF29Cu;
label_2ff29c:
    // 0x2ff29c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ff2a0:
    // 0x2ff2a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ff2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ff2a4:
    // 0x2ff2a4: 0xc0693a0  jal         func_1A4E80
label_2ff2a8:
    if (ctx->pc == 0x2FF2A8u) {
        ctx->pc = 0x2FF2A8u;
            // 0x2ff2a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF2ACu;
        goto label_2ff2ac;
    }
    ctx->pc = 0x2FF2A4u;
    SET_GPR_U32(ctx, 31, 0x2FF2ACu);
    ctx->pc = 0x2FF2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF2A4u;
            // 0x2ff2a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E80u;
    if (runtime->hasFunction(0x1A4E80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF2ACu; }
        if (ctx->pc != 0x2FF2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditCameraControl__FP6CSceneP11CPadControlPA4_f_0x1a4e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF2ACu; }
        if (ctx->pc != 0x2FF2ACu) { return; }
    }
    ctx->pc = 0x2FF2ACu;
label_2ff2ac:
    // 0x2ff2ac: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2ff2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_2ff2b0:
    // 0x2ff2b0: 0x27a40350  addiu       $a0, $sp, 0x350
    ctx->pc = 0x2ff2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
label_2ff2b4:
    // 0x2ff2b4: 0x2442d960  addiu       $v0, $v0, -0x26A0
    ctx->pc = 0x2ff2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957408));
label_2ff2b8:
    // 0x2ff2b8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2ff2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2ff2bc:
    // 0x2ff2bc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ff2bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2ff2c0:
    // 0x2ff2c0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2ff2c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ff2c4:
    // 0x2ff2c4: 0xc041bb0  jal         func_106EC0
label_2ff2c8:
    if (ctx->pc == 0x2FF2C8u) {
        ctx->pc = 0x2FF2C8u;
            // 0x2ff2c8: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x2FF2CCu;
        goto label_2ff2cc;
    }
    ctx->pc = 0x2FF2C4u;
    SET_GPR_U32(ctx, 31, 0x2FF2CCu);
    ctx->pc = 0x2FF2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF2C4u;
            // 0x2ff2c8: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF2CCu; }
        if (ctx->pc != 0x2FF2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF2CCu; }
        if (ctx->pc != 0x2FF2CCu) { return; }
    }
    ctx->pc = 0x2FF2CCu;
label_2ff2cc:
    // 0x2ff2cc: 0xc0c3e70  jal         func_30F9C0
label_2ff2d0:
    if (ctx->pc == 0x2FF2D0u) {
        ctx->pc = 0x2FF2D0u;
            // 0x2ff2d0: 0x8fb20238  lw          $s2, 0x238($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
        ctx->pc = 0x2FF2D4u;
        goto label_2ff2d4;
    }
    ctx->pc = 0x2FF2CCu;
    SET_GPR_U32(ctx, 31, 0x2FF2D4u);
    ctx->pc = 0x2FF2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF2CCu;
            // 0x2ff2d0: 0x8fb20238  lw          $s2, 0x238($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30F9C0u;
    if (runtime->hasFunction(0x30F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF2D4u; }
        if (ctx->pc != 0x2FF2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishingMode__Fv_0x30f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF2D4u; }
        if (ctx->pc != 0x2FF2D4u) { return; }
    }
    ctx->pc = 0x2FF2D4u;
label_2ff2d4:
    // 0x2ff2d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ff2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ff2d8:
    // 0x2ff2d8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_2ff2dc:
    if (ctx->pc == 0x2FF2DCu) {
        ctx->pc = 0x2FF2E0u;
        goto label_2ff2e0;
    }
    ctx->pc = 0x2FF2D8u;
    {
        const bool branch_taken_0x2ff2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ff2d8) {
            ctx->pc = 0x2FF2F0u;
            goto label_2ff2f0;
        }
    }
    ctx->pc = 0x2FF2E0u;
label_2ff2e0:
    // 0x2ff2e0: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x2ff2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_2ff2e4:
    // 0x2ff2e4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_2ff2e8:
    if (ctx->pc == 0x2FF2E8u) {
        ctx->pc = 0x2FF2ECu;
        goto label_2ff2ec;
    }
    ctx->pc = 0x2FF2E4u;
    {
        const bool branch_taken_0x2ff2e4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2ff2e4) {
            ctx->pc = 0x2FF2F0u;
            goto label_2ff2f0;
        }
    }
    ctx->pc = 0x2FF2ECu;
label_2ff2ec:
    // 0x2ff2ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ff2ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff2f0:
    // 0x2ff2f0: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
label_2ff2f4:
    if (ctx->pc == 0x2FF2F4u) {
        ctx->pc = 0x2FF2F8u;
        goto label_2ff2f8;
    }
    ctx->pc = 0x2FF2F0u;
    {
        const bool branch_taken_0x2ff2f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff2f0) {
            ctx->pc = 0x2FF348u;
            goto label_2ff348;
        }
    }
    ctx->pc = 0x2FF2F8u;
label_2ff2f8:
    // 0x2ff2f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ff2fc:
    // 0x2ff2fc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2ff2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2ff300:
    // 0x2ff300: 0xc0c098c  jal         func_302630
label_2ff304:
    if (ctx->pc == 0x2FF304u) {
        ctx->pc = 0x2FF304u;
            // 0x2ff304: 0x27a60350  addiu       $a2, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->pc = 0x2FF308u;
        goto label_2ff308;
    }
    ctx->pc = 0x2FF300u;
    SET_GPR_U32(ctx, 31, 0x2FF308u);
    ctx->pc = 0x2FF304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF300u;
            // 0x2ff304: 0x27a60350  addiu       $a2, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302630u;
    if (runtime->hasFunction(0x302630u)) {
        auto targetFn = runtime->lookupFunction(0x302630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF308u; }
        if (ctx->pc != 0x2FF308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckCasting__FP6CScenePfPf_0x302630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF308u; }
        if (ctx->pc != 0x2FF308u) { return; }
    }
    ctx->pc = 0x2FF308u;
label_2ff308:
    // 0x2ff308: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2ff30c:
    if (ctx->pc == 0x2FF30Cu) {
        ctx->pc = 0x2FF310u;
        goto label_2ff310;
    }
    ctx->pc = 0x2FF308u;
    {
        const bool branch_taken_0x2ff308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff308) {
            ctx->pc = 0x2FF348u;
            goto label_2ff348;
        }
    }
    ctx->pc = 0x2FF310u;
label_2ff310:
    // 0x2ff310: 0x24040065  addiu       $a0, $zero, 0x65
    ctx->pc = 0x2ff310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_2ff314:
    // 0x2ff314: 0xc0c6564  jal         func_319590
label_2ff318:
    if (ctx->pc == 0x2FF318u) {
        ctx->pc = 0x2FF318u;
            // 0x2ff318: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FF31Cu;
        goto label_2ff31c;
    }
    ctx->pc = 0x2FF314u;
    SET_GPR_U32(ctx, 31, 0x2FF31Cu);
    ctx->pc = 0x2FF318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF314u;
            // 0x2ff318: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x319590u;
    if (runtime->hasFunction(0x319590u)) {
        auto targetFn = runtime->lookupFunction(0x319590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF31Cu; }
        if (ctx->pc != 0x2FF31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShowHelpMes__Fii_0x319590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF31Cu; }
        if (ctx->pc != 0x2FF31Cu) { return; }
    }
    ctx->pc = 0x2FF31Cu;
label_2ff31c:
    // 0x2ff31c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ff320:
    // 0x2ff320: 0xc0bb538  jal         func_2ED4E0
label_2ff324:
    if (ctx->pc == 0x2FF324u) {
        ctx->pc = 0x2FF324u;
            // 0x2ff324: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x2FF328u;
        goto label_2ff328;
    }
    ctx->pc = 0x2FF320u;
    SET_GPR_U32(ctx, 31, 0x2FF328u);
    ctx->pc = 0x2FF324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF320u;
            // 0x2ff324: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF328u; }
        if (ctx->pc != 0x2FF328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF328u; }
        if (ctx->pc != 0x2FF328u) { return; }
    }
    ctx->pc = 0x2FF328u;
label_2ff328:
    // 0x2ff328: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2ff32c:
    if (ctx->pc == 0x2FF32Cu) {
        ctx->pc = 0x2FF330u;
        goto label_2ff330;
    }
    ctx->pc = 0x2FF328u;
    {
        const bool branch_taken_0x2ff328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff328) {
            ctx->pc = 0x2FF348u;
            goto label_2ff348;
        }
    }
    ctx->pc = 0x2FF330u;
label_2ff330:
    // 0x2ff330: 0xc0bfcfc  jal         func_2FF3F0
label_2ff334:
    if (ctx->pc == 0x2FF334u) {
        ctx->pc = 0x2FF334u;
            // 0x2ff334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF338u;
        goto label_2ff338;
    }
    ctx->pc = 0x2FF330u;
    SET_GPR_U32(ctx, 31, 0x2FF338u);
    ctx->pc = 0x2FF334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF330u;
            // 0x2ff334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FF3F0u;
    if (runtime->hasFunction(0x2FF3F0u)) {
        auto targetFn = runtime->lookupFunction(0x2FF3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF338u; }
        if (ctx->pc != 0x2FF338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSelectCastingPoint__FP6CScene_0x2ff3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF338u; }
        if (ctx->pc != 0x2FF338u) { return; }
    }
    ctx->pc = 0x2FF338u;
label_2ff338:
    // 0x2ff338: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ff33c:
    if (ctx->pc == 0x2FF33Cu) {
        ctx->pc = 0x2FF340u;
        goto label_2ff340;
    }
    ctx->pc = 0x2FF338u;
    {
        const bool branch_taken_0x2ff338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff338) {
            ctx->pc = 0x2FF348u;
            goto label_2ff348;
        }
    }
    ctx->pc = 0x2FF340u;
label_2ff340:
    // 0x2ff340: 0xc0bf1d0  jal         func_2FC740
label_2ff344:
    if (ctx->pc == 0x2FF344u) {
        ctx->pc = 0x2FF344u;
            // 0x2ff344: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FF348u;
        goto label_2ff348;
    }
    ctx->pc = 0x2FF340u;
    SET_GPR_U32(ctx, 31, 0x2FF348u);
    ctx->pc = 0x2FF344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF340u;
            // 0x2ff344: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC740u;
    if (runtime->hasFunction(0x2FC740u)) {
        auto targetFn = runtime->lookupFunction(0x2FC740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF348u; }
        if (ctx->pc != 0x2FF348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextMode__Fi_0x2fc740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF348u; }
        if (ctx->pc != 0x2FF348u) { return; }
    }
    ctx->pc = 0x2FF348u;
label_2ff348:
    // 0x2ff348: 0xc0c0fd0  jal         func_303F40
label_2ff34c:
    if (ctx->pc == 0x2FF34Cu) {
        ctx->pc = 0x2FF350u;
        goto label_2ff350;
    }
    ctx->pc = 0x2FF348u;
    SET_GPR_U32(ctx, 31, 0x2FF350u);
    ctx->pc = 0x303F40u;
    if (runtime->hasFunction(0x303F40u)) {
        auto targetFn = runtime->lookupFunction(0x303F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF350u; }
        if (ctx->pc != 0x2FF350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowSubGameInfo__Fv_0x303f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF350u; }
        if (ctx->pc != 0x2FF350u) { return; }
    }
    ctx->pc = 0x2FF350u;
label_2ff350:
    // 0x2ff350: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2ff350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2ff354:
    // 0x2ff354: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_2ff358:
    if (ctx->pc == 0x2FF358u) {
        ctx->pc = 0x2FF35Cu;
        goto label_2ff35c;
    }
    ctx->pc = 0x2FF354u;
    {
        const bool branch_taken_0x2ff354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff354) {
            ctx->pc = 0x2FF3B8u;
            goto label_2ff3b8;
        }
    }
    ctx->pc = 0x2FF35Cu;
label_2ff35c:
    // 0x2ff35c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2ff35cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ff360:
    // 0x2ff360: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ff360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ff364:
    // 0x2ff364: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2ff364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2ff368:
    // 0x2ff368: 0x320f809  jalr        $t9
label_2ff36c:
    if (ctx->pc == 0x2FF36Cu) {
        ctx->pc = 0x2FF36Cu;
            // 0x2ff36c: 0x27a50360  addiu       $a1, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->pc = 0x2FF370u;
        goto label_2ff370;
    }
    ctx->pc = 0x2FF368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF370u);
        ctx->pc = 0x2FF36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF368u;
            // 0x2ff36c: 0x27a50360  addiu       $a1, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF370u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF370u; }
            if (ctx->pc != 0x2FF370u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF370u;
label_2ff370:
    // 0x2ff370: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x2ff370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_2ff374:
    // 0x2ff374: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff378:
    // 0x2ff378: 0xc049c86  jal         func_127218
label_2ff37c:
    if (ctx->pc == 0x2FF37Cu) {
        ctx->pc = 0x2FF37Cu;
            // 0x2ff37c: 0x240600d0  addiu       $a2, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x2FF380u;
        goto label_2ff380;
    }
    ctx->pc = 0x2FF378u;
    SET_GPR_U32(ctx, 31, 0x2FF380u);
    ctx->pc = 0x2FF37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF378u;
            // 0x2ff37c: 0x240600d0  addiu       $a2, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF380u; }
        if (ctx->pc != 0x2FF380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF380u; }
        if (ctx->pc != 0x2FF380u) { return; }
    }
    ctx->pc = 0x2FF380u;
label_2ff380:
    // 0x2ff380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ff384:
    // 0x2ff384: 0x27a50360  addiu       $a1, $sp, 0x360
    ctx->pc = 0x2ff384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
label_2ff388:
    // 0x2ff388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ff388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff38c:
    // 0x2ff38c: 0xc0b1f98  jal         func_2C7E60
label_2ff390:
    if (ctx->pc == 0x2FF390u) {
        ctx->pc = 0x2FF390u;
            // 0x2ff390: 0x27a70370  addiu       $a3, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->pc = 0x2FF394u;
        goto label_2ff394;
    }
    ctx->pc = 0x2FF38Cu;
    SET_GPR_U32(ctx, 31, 0x2FF394u);
    ctx->pc = 0x2FF390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF38Cu;
            // 0x2ff390: 0x27a70370  addiu       $a3, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7E60u;
    if (runtime->hasFunction(0x2C7E60u)) {
        auto targetFn = runtime->lookupFunction(0x2C7E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF394u; }
        if (ctx->pc != 0x2FF394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapEvent__6CSceneFPfiP15CSceneEventData_0x2c7e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF394u; }
        if (ctx->pc != 0x2FF394u) { return; }
    }
    ctx->pc = 0x2FF394u;
label_2ff394:
    // 0x2ff394: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2ff398:
    if (ctx->pc == 0x2FF398u) {
        ctx->pc = 0x2FF39Cu;
        goto label_2ff39c;
    }
    ctx->pc = 0x2FF394u;
    {
        const bool branch_taken_0x2ff394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff394) {
            ctx->pc = 0x2FF3B4u;
            goto label_2ff3b4;
        }
    }
    ctx->pc = 0x2FF39Cu;
label_2ff39c:
    // 0x2ff39c: 0x8fa50378  lw          $a1, 0x378($sp)
    ctx->pc = 0x2ff39cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 888)));
label_2ff3a0:
    // 0x2ff3a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ff3a4:
    // 0x2ff3a4: 0xc0b1f3c  jal         func_2C7CF0
label_2ff3a8:
    if (ctx->pc == 0x2FF3A8u) {
        ctx->pc = 0x2FF3A8u;
            // 0x2ff3a8: 0x27a60370  addiu       $a2, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->pc = 0x2FF3ACu;
        goto label_2ff3ac;
    }
    ctx->pc = 0x2FF3A4u;
    SET_GPR_U32(ctx, 31, 0x2FF3ACu);
    ctx->pc = 0x2FF3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF3A4u;
            // 0x2ff3a8: 0x27a60370  addiu       $a2, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7CF0u;
    if (runtime->hasFunction(0x2C7CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C7CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF3ACu; }
        if (ctx->pc != 0x2FF3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__6CSceneFiP15CSceneEventData_0x2c7cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF3ACu; }
        if (ctx->pc != 0x2FF3ACu) { return; }
    }
    ctx->pc = 0x2FF3ACu;
label_2ff3ac:
    // 0x2ff3ac: 0xc0bf1d4  jal         func_2FC750
label_2ff3b0:
    if (ctx->pc == 0x2FF3B0u) {
        ctx->pc = 0x2FF3B0u;
            // 0x2ff3b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF3B4u;
        goto label_2ff3b4;
    }
    ctx->pc = 0x2FF3ACu;
    SET_GPR_U32(ctx, 31, 0x2FF3B4u);
    ctx->pc = 0x2FF3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF3ACu;
            // 0x2ff3b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC750u;
    if (runtime->hasFunction(0x2FC750u)) {
        auto targetFn = runtime->lookupFunction(0x2FC750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF3B4u; }
        if (ctx->pc != 0x2FF3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExitFishing__FP6CScene_0x2fc750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF3B4u; }
        if (ctx->pc != 0x2FF3B4u) { return; }
    }
    ctx->pc = 0x2FF3B4u;
label_2ff3b4:
    // 0x2ff3b4: 0xae202f60  sw          $zero, 0x2F60($s1)
    ctx->pc = 0x2ff3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12128), GPR_U32(ctx, 0));
label_2ff3b8:
    // 0x2ff3b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ff3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2ff3bc:
    // 0x2ff3bc: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x2ff3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2ff3c0:
    // 0x2ff3c0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2ff3c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ff3c4:
    // 0x2ff3c4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2ff3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2ff3c8:
    // 0x2ff3c8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2ff3c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ff3cc:
    // 0x2ff3cc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2ff3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2ff3d0:
    // 0x2ff3d0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ff3d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ff3d4:
    // 0x2ff3d4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2ff3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2ff3d8:
    // 0x2ff3d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ff3d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ff3dc:
    // 0x2ff3dc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ff3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ff3e0:
    // 0x2ff3e0: 0x3e00008  jr          $ra
label_2ff3e4:
    if (ctx->pc == 0x2FF3E4u) {
        ctx->pc = 0x2FF3E4u;
            // 0x2ff3e4: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->pc = 0x2FF3E8u;
        goto label_fallthrough_0x2ff3e0;
    }
    ctx->pc = 0x2FF3E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF3E0u;
            // 0x2ff3e4: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ff3e0:
    ctx->pc = 0x2FF3E8u;
}
