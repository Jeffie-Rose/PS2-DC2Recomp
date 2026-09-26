#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RoboWalkMoveIF__12CActionCharaFi
// Address: 0x16dd80 - 0x16e294
void RoboWalkMoveIF__12CActionCharaFi_0x16dd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RoboWalkMoveIF__12CActionCharaFi_0x16dd80");
#endif

    switch (ctx->pc) {
        case 0x16dd80u: goto label_16dd80;
        case 0x16dd84u: goto label_16dd84;
        case 0x16dd88u: goto label_16dd88;
        case 0x16dd8cu: goto label_16dd8c;
        case 0x16dd90u: goto label_16dd90;
        case 0x16dd94u: goto label_16dd94;
        case 0x16dd98u: goto label_16dd98;
        case 0x16dd9cu: goto label_16dd9c;
        case 0x16dda0u: goto label_16dda0;
        case 0x16dda4u: goto label_16dda4;
        case 0x16dda8u: goto label_16dda8;
        case 0x16ddacu: goto label_16ddac;
        case 0x16ddb0u: goto label_16ddb0;
        case 0x16ddb4u: goto label_16ddb4;
        case 0x16ddb8u: goto label_16ddb8;
        case 0x16ddbcu: goto label_16ddbc;
        case 0x16ddc0u: goto label_16ddc0;
        case 0x16ddc4u: goto label_16ddc4;
        case 0x16ddc8u: goto label_16ddc8;
        case 0x16ddccu: goto label_16ddcc;
        case 0x16ddd0u: goto label_16ddd0;
        case 0x16ddd4u: goto label_16ddd4;
        case 0x16ddd8u: goto label_16ddd8;
        case 0x16dddcu: goto label_16dddc;
        case 0x16dde0u: goto label_16dde0;
        case 0x16dde4u: goto label_16dde4;
        case 0x16dde8u: goto label_16dde8;
        case 0x16ddecu: goto label_16ddec;
        case 0x16ddf0u: goto label_16ddf0;
        case 0x16ddf4u: goto label_16ddf4;
        case 0x16ddf8u: goto label_16ddf8;
        case 0x16ddfcu: goto label_16ddfc;
        case 0x16de00u: goto label_16de00;
        case 0x16de04u: goto label_16de04;
        case 0x16de08u: goto label_16de08;
        case 0x16de0cu: goto label_16de0c;
        case 0x16de10u: goto label_16de10;
        case 0x16de14u: goto label_16de14;
        case 0x16de18u: goto label_16de18;
        case 0x16de1cu: goto label_16de1c;
        case 0x16de20u: goto label_16de20;
        case 0x16de24u: goto label_16de24;
        case 0x16de28u: goto label_16de28;
        case 0x16de2cu: goto label_16de2c;
        case 0x16de30u: goto label_16de30;
        case 0x16de34u: goto label_16de34;
        case 0x16de38u: goto label_16de38;
        case 0x16de3cu: goto label_16de3c;
        case 0x16de40u: goto label_16de40;
        case 0x16de44u: goto label_16de44;
        case 0x16de48u: goto label_16de48;
        case 0x16de4cu: goto label_16de4c;
        case 0x16de50u: goto label_16de50;
        case 0x16de54u: goto label_16de54;
        case 0x16de58u: goto label_16de58;
        case 0x16de5cu: goto label_16de5c;
        case 0x16de60u: goto label_16de60;
        case 0x16de64u: goto label_16de64;
        case 0x16de68u: goto label_16de68;
        case 0x16de6cu: goto label_16de6c;
        case 0x16de70u: goto label_16de70;
        case 0x16de74u: goto label_16de74;
        case 0x16de78u: goto label_16de78;
        case 0x16de7cu: goto label_16de7c;
        case 0x16de80u: goto label_16de80;
        case 0x16de84u: goto label_16de84;
        case 0x16de88u: goto label_16de88;
        case 0x16de8cu: goto label_16de8c;
        case 0x16de90u: goto label_16de90;
        case 0x16de94u: goto label_16de94;
        case 0x16de98u: goto label_16de98;
        case 0x16de9cu: goto label_16de9c;
        case 0x16dea0u: goto label_16dea0;
        case 0x16dea4u: goto label_16dea4;
        case 0x16dea8u: goto label_16dea8;
        case 0x16deacu: goto label_16deac;
        case 0x16deb0u: goto label_16deb0;
        case 0x16deb4u: goto label_16deb4;
        case 0x16deb8u: goto label_16deb8;
        case 0x16debcu: goto label_16debc;
        case 0x16dec0u: goto label_16dec0;
        case 0x16dec4u: goto label_16dec4;
        case 0x16dec8u: goto label_16dec8;
        case 0x16deccu: goto label_16decc;
        case 0x16ded0u: goto label_16ded0;
        case 0x16ded4u: goto label_16ded4;
        case 0x16ded8u: goto label_16ded8;
        case 0x16dedcu: goto label_16dedc;
        case 0x16dee0u: goto label_16dee0;
        case 0x16dee4u: goto label_16dee4;
        case 0x16dee8u: goto label_16dee8;
        case 0x16deecu: goto label_16deec;
        case 0x16def0u: goto label_16def0;
        case 0x16def4u: goto label_16def4;
        case 0x16def8u: goto label_16def8;
        case 0x16defcu: goto label_16defc;
        case 0x16df00u: goto label_16df00;
        case 0x16df04u: goto label_16df04;
        case 0x16df08u: goto label_16df08;
        case 0x16df0cu: goto label_16df0c;
        case 0x16df10u: goto label_16df10;
        case 0x16df14u: goto label_16df14;
        case 0x16df18u: goto label_16df18;
        case 0x16df1cu: goto label_16df1c;
        case 0x16df20u: goto label_16df20;
        case 0x16df24u: goto label_16df24;
        case 0x16df28u: goto label_16df28;
        case 0x16df2cu: goto label_16df2c;
        case 0x16df30u: goto label_16df30;
        case 0x16df34u: goto label_16df34;
        case 0x16df38u: goto label_16df38;
        case 0x16df3cu: goto label_16df3c;
        case 0x16df40u: goto label_16df40;
        case 0x16df44u: goto label_16df44;
        case 0x16df48u: goto label_16df48;
        case 0x16df4cu: goto label_16df4c;
        case 0x16df50u: goto label_16df50;
        case 0x16df54u: goto label_16df54;
        case 0x16df58u: goto label_16df58;
        case 0x16df5cu: goto label_16df5c;
        case 0x16df60u: goto label_16df60;
        case 0x16df64u: goto label_16df64;
        case 0x16df68u: goto label_16df68;
        case 0x16df6cu: goto label_16df6c;
        case 0x16df70u: goto label_16df70;
        case 0x16df74u: goto label_16df74;
        case 0x16df78u: goto label_16df78;
        case 0x16df7cu: goto label_16df7c;
        case 0x16df80u: goto label_16df80;
        case 0x16df84u: goto label_16df84;
        case 0x16df88u: goto label_16df88;
        case 0x16df8cu: goto label_16df8c;
        case 0x16df90u: goto label_16df90;
        case 0x16df94u: goto label_16df94;
        case 0x16df98u: goto label_16df98;
        case 0x16df9cu: goto label_16df9c;
        case 0x16dfa0u: goto label_16dfa0;
        case 0x16dfa4u: goto label_16dfa4;
        case 0x16dfa8u: goto label_16dfa8;
        case 0x16dfacu: goto label_16dfac;
        case 0x16dfb0u: goto label_16dfb0;
        case 0x16dfb4u: goto label_16dfb4;
        case 0x16dfb8u: goto label_16dfb8;
        case 0x16dfbcu: goto label_16dfbc;
        case 0x16dfc0u: goto label_16dfc0;
        case 0x16dfc4u: goto label_16dfc4;
        case 0x16dfc8u: goto label_16dfc8;
        case 0x16dfccu: goto label_16dfcc;
        case 0x16dfd0u: goto label_16dfd0;
        case 0x16dfd4u: goto label_16dfd4;
        case 0x16dfd8u: goto label_16dfd8;
        case 0x16dfdcu: goto label_16dfdc;
        case 0x16dfe0u: goto label_16dfe0;
        case 0x16dfe4u: goto label_16dfe4;
        case 0x16dfe8u: goto label_16dfe8;
        case 0x16dfecu: goto label_16dfec;
        case 0x16dff0u: goto label_16dff0;
        case 0x16dff4u: goto label_16dff4;
        case 0x16dff8u: goto label_16dff8;
        case 0x16dffcu: goto label_16dffc;
        case 0x16e000u: goto label_16e000;
        case 0x16e004u: goto label_16e004;
        case 0x16e008u: goto label_16e008;
        case 0x16e00cu: goto label_16e00c;
        case 0x16e010u: goto label_16e010;
        case 0x16e014u: goto label_16e014;
        case 0x16e018u: goto label_16e018;
        case 0x16e01cu: goto label_16e01c;
        case 0x16e020u: goto label_16e020;
        case 0x16e024u: goto label_16e024;
        case 0x16e028u: goto label_16e028;
        case 0x16e02cu: goto label_16e02c;
        case 0x16e030u: goto label_16e030;
        case 0x16e034u: goto label_16e034;
        case 0x16e038u: goto label_16e038;
        case 0x16e03cu: goto label_16e03c;
        case 0x16e040u: goto label_16e040;
        case 0x16e044u: goto label_16e044;
        case 0x16e048u: goto label_16e048;
        case 0x16e04cu: goto label_16e04c;
        case 0x16e050u: goto label_16e050;
        case 0x16e054u: goto label_16e054;
        case 0x16e058u: goto label_16e058;
        case 0x16e05cu: goto label_16e05c;
        case 0x16e060u: goto label_16e060;
        case 0x16e064u: goto label_16e064;
        case 0x16e068u: goto label_16e068;
        case 0x16e06cu: goto label_16e06c;
        case 0x16e070u: goto label_16e070;
        case 0x16e074u: goto label_16e074;
        case 0x16e078u: goto label_16e078;
        case 0x16e07cu: goto label_16e07c;
        case 0x16e080u: goto label_16e080;
        case 0x16e084u: goto label_16e084;
        case 0x16e088u: goto label_16e088;
        case 0x16e08cu: goto label_16e08c;
        case 0x16e090u: goto label_16e090;
        case 0x16e094u: goto label_16e094;
        case 0x16e098u: goto label_16e098;
        case 0x16e09cu: goto label_16e09c;
        case 0x16e0a0u: goto label_16e0a0;
        case 0x16e0a4u: goto label_16e0a4;
        case 0x16e0a8u: goto label_16e0a8;
        case 0x16e0acu: goto label_16e0ac;
        case 0x16e0b0u: goto label_16e0b0;
        case 0x16e0b4u: goto label_16e0b4;
        case 0x16e0b8u: goto label_16e0b8;
        case 0x16e0bcu: goto label_16e0bc;
        case 0x16e0c0u: goto label_16e0c0;
        case 0x16e0c4u: goto label_16e0c4;
        case 0x16e0c8u: goto label_16e0c8;
        case 0x16e0ccu: goto label_16e0cc;
        case 0x16e0d0u: goto label_16e0d0;
        case 0x16e0d4u: goto label_16e0d4;
        case 0x16e0d8u: goto label_16e0d8;
        case 0x16e0dcu: goto label_16e0dc;
        case 0x16e0e0u: goto label_16e0e0;
        case 0x16e0e4u: goto label_16e0e4;
        case 0x16e0e8u: goto label_16e0e8;
        case 0x16e0ecu: goto label_16e0ec;
        case 0x16e0f0u: goto label_16e0f0;
        case 0x16e0f4u: goto label_16e0f4;
        case 0x16e0f8u: goto label_16e0f8;
        case 0x16e0fcu: goto label_16e0fc;
        case 0x16e100u: goto label_16e100;
        case 0x16e104u: goto label_16e104;
        case 0x16e108u: goto label_16e108;
        case 0x16e10cu: goto label_16e10c;
        case 0x16e110u: goto label_16e110;
        case 0x16e114u: goto label_16e114;
        case 0x16e118u: goto label_16e118;
        case 0x16e11cu: goto label_16e11c;
        case 0x16e120u: goto label_16e120;
        case 0x16e124u: goto label_16e124;
        case 0x16e128u: goto label_16e128;
        case 0x16e12cu: goto label_16e12c;
        case 0x16e130u: goto label_16e130;
        case 0x16e134u: goto label_16e134;
        case 0x16e138u: goto label_16e138;
        case 0x16e13cu: goto label_16e13c;
        case 0x16e140u: goto label_16e140;
        case 0x16e144u: goto label_16e144;
        case 0x16e148u: goto label_16e148;
        case 0x16e14cu: goto label_16e14c;
        case 0x16e150u: goto label_16e150;
        case 0x16e154u: goto label_16e154;
        case 0x16e158u: goto label_16e158;
        case 0x16e15cu: goto label_16e15c;
        case 0x16e160u: goto label_16e160;
        case 0x16e164u: goto label_16e164;
        case 0x16e168u: goto label_16e168;
        case 0x16e16cu: goto label_16e16c;
        case 0x16e170u: goto label_16e170;
        case 0x16e174u: goto label_16e174;
        case 0x16e178u: goto label_16e178;
        case 0x16e17cu: goto label_16e17c;
        case 0x16e180u: goto label_16e180;
        case 0x16e184u: goto label_16e184;
        case 0x16e188u: goto label_16e188;
        case 0x16e18cu: goto label_16e18c;
        case 0x16e190u: goto label_16e190;
        case 0x16e194u: goto label_16e194;
        case 0x16e198u: goto label_16e198;
        case 0x16e19cu: goto label_16e19c;
        case 0x16e1a0u: goto label_16e1a0;
        case 0x16e1a4u: goto label_16e1a4;
        case 0x16e1a8u: goto label_16e1a8;
        case 0x16e1acu: goto label_16e1ac;
        case 0x16e1b0u: goto label_16e1b0;
        case 0x16e1b4u: goto label_16e1b4;
        case 0x16e1b8u: goto label_16e1b8;
        case 0x16e1bcu: goto label_16e1bc;
        case 0x16e1c0u: goto label_16e1c0;
        case 0x16e1c4u: goto label_16e1c4;
        case 0x16e1c8u: goto label_16e1c8;
        case 0x16e1ccu: goto label_16e1cc;
        case 0x16e1d0u: goto label_16e1d0;
        case 0x16e1d4u: goto label_16e1d4;
        case 0x16e1d8u: goto label_16e1d8;
        case 0x16e1dcu: goto label_16e1dc;
        case 0x16e1e0u: goto label_16e1e0;
        case 0x16e1e4u: goto label_16e1e4;
        case 0x16e1e8u: goto label_16e1e8;
        case 0x16e1ecu: goto label_16e1ec;
        case 0x16e1f0u: goto label_16e1f0;
        case 0x16e1f4u: goto label_16e1f4;
        case 0x16e1f8u: goto label_16e1f8;
        case 0x16e1fcu: goto label_16e1fc;
        case 0x16e200u: goto label_16e200;
        case 0x16e204u: goto label_16e204;
        case 0x16e208u: goto label_16e208;
        case 0x16e20cu: goto label_16e20c;
        case 0x16e210u: goto label_16e210;
        case 0x16e214u: goto label_16e214;
        case 0x16e218u: goto label_16e218;
        case 0x16e21cu: goto label_16e21c;
        case 0x16e220u: goto label_16e220;
        case 0x16e224u: goto label_16e224;
        case 0x16e228u: goto label_16e228;
        case 0x16e22cu: goto label_16e22c;
        case 0x16e230u: goto label_16e230;
        case 0x16e234u: goto label_16e234;
        case 0x16e238u: goto label_16e238;
        case 0x16e23cu: goto label_16e23c;
        case 0x16e240u: goto label_16e240;
        case 0x16e244u: goto label_16e244;
        case 0x16e248u: goto label_16e248;
        case 0x16e24cu: goto label_16e24c;
        case 0x16e250u: goto label_16e250;
        case 0x16e254u: goto label_16e254;
        case 0x16e258u: goto label_16e258;
        case 0x16e25cu: goto label_16e25c;
        case 0x16e260u: goto label_16e260;
        case 0x16e264u: goto label_16e264;
        case 0x16e268u: goto label_16e268;
        case 0x16e26cu: goto label_16e26c;
        case 0x16e270u: goto label_16e270;
        case 0x16e274u: goto label_16e274;
        case 0x16e278u: goto label_16e278;
        case 0x16e27cu: goto label_16e27c;
        case 0x16e280u: goto label_16e280;
        case 0x16e284u: goto label_16e284;
        case 0x16e288u: goto label_16e288;
        case 0x16e28cu: goto label_16e28c;
        case 0x16e290u: goto label_16e290;
        default: break;
    }

    ctx->pc = 0x16dd80u;

label_16dd80:
    // 0x16dd80: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x16dd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_16dd84:
    // 0x16dd84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x16dd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_16dd88:
    // 0x16dd88: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x16dd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_16dd8c:
    // 0x16dd8c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16dd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_16dd90:
    // 0x16dd90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16dd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_16dd94:
    // 0x16dd94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16dd94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16dd98:
    // 0x16dd98: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x16dd98u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_16dd9c:
    // 0x16dd9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16dd9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16dda0:
    // 0x16dda0: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x16dda0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_16dda4:
    // 0x16dda4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x16dda4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_16dda8:
    // 0x16dda8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16dda8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_16ddac:
    // 0x16ddac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16ddacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_16ddb0:
    // 0x16ddb0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16ddb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16ddb4:
    // 0x16ddb4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16ddb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16ddb8:
    // 0x16ddb8: 0x320f809  jalr        $t9
label_16ddbc:
    if (ctx->pc == 0x16DDBCu) {
        ctx->pc = 0x16DDBCu;
            // 0x16ddbc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x16DDC0u;
        goto label_16ddc0;
    }
    ctx->pc = 0x16DDB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16DDC0u);
        ctx->pc = 0x16DDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DDB8u;
            // 0x16ddbc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16DDC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16DDC0u; }
            if (ctx->pc != 0x16DDC0u) { return; }
        }
        }
    }
    ctx->pc = 0x16DDC0u;
label_16ddc0:
    // 0x16ddc0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x16ddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_16ddc4:
    // 0x16ddc4: 0xc041c5c  jal         func_107170
label_16ddc8:
    if (ctx->pc == 0x16DDC8u) {
        ctx->pc = 0x16DDC8u;
            // 0x16ddc8: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->pc = 0x16DDCCu;
        goto label_16ddcc;
    }
    ctx->pc = 0x16DDC4u;
    SET_GPR_U32(ctx, 31, 0x16DDCCu);
    ctx->pc = 0x16DDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DDC4u;
            // 0x16ddc8: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DDCCu; }
        if (ctx->pc != 0x16DDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DDCCu; }
        if (ctx->pc != 0x16DDCCu) { return; }
    }
    ctx->pc = 0x16DDCCu;
label_16ddcc:
    // 0x16ddcc: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x16ddccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_16ddd0:
    // 0x16ddd0: 0xc04c678  jal         func_1319E0
label_16ddd4:
    if (ctx->pc == 0x16DDD4u) {
        ctx->pc = 0x16DDD4u;
            // 0x16ddd4: 0x8c24d434  lw          $a0, -0x2BCC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956084)));
        ctx->pc = 0x16DDD8u;
        goto label_16ddd8;
    }
    ctx->pc = 0x16DDD0u;
    SET_GPR_U32(ctx, 31, 0x16DDD8u);
    ctx->pc = 0x16DDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DDD0u;
            // 0x16ddd4: 0x8c24d434  lw          $a0, -0x2BCC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956084)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319E0u;
    if (runtime->hasFunction(0x1319E0u)) {
        auto targetFn = runtime->lookupFunction(0x1319E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DDD8u; }
        if (ctx->pc != 0x16DDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngle__15mgCCameraFollowFv_0x1319e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DDD8u; }
        if (ctx->pc != 0x16DDD8u) { return; }
    }
    ctx->pc = 0x16DDD8u;
label_16ddd8:
    // 0x16ddd8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x16ddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_16dddc:
    // 0x16dddc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x16dddcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_16dde0:
    // 0x16dde0: 0xc052cc0  jal         func_14B300
label_16dde4:
    if (ctx->pc == 0x16DDE4u) {
        ctx->pc = 0x16DDE4u;
            // 0x16dde4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x16DDE8u;
        goto label_16dde8;
    }
    ctx->pc = 0x16DDE0u;
    SET_GPR_U32(ctx, 31, 0x16DDE8u);
    ctx->pc = 0x16DDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DDE0u;
            // 0x16dde4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B300u;
    if (runtime->hasFunction(0x14B300u)) {
        auto targetFn = runtime->lookupFunction(0x14B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DDE8u; }
        if (ctx->pc != 0x16DDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLXf__8CGamePadFv_0x14b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DDE8u; }
        if (ctx->pc != 0x16DDE8u) { return; }
    }
    ctx->pc = 0x16DDE8u;
label_16dde8:
    // 0x16dde8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x16dde8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_16ddec:
    // 0x16ddec: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x16ddecu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_16ddf0:
    // 0x16ddf0: 0xc052cd0  jal         func_14B340
label_16ddf4:
    if (ctx->pc == 0x16DDF4u) {
        ctx->pc = 0x16DDF4u;
            // 0x16ddf4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x16DDF8u;
        goto label_16ddf8;
    }
    ctx->pc = 0x16DDF0u;
    SET_GPR_U32(ctx, 31, 0x16DDF8u);
    ctx->pc = 0x16DDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DDF0u;
            // 0x16ddf4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B340u;
    if (runtime->hasFunction(0x14B340u)) {
        auto targetFn = runtime->lookupFunction(0x14B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DDF8u; }
        if (ctx->pc != 0x16DDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLYf__8CGamePadFv_0x14b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DDF8u; }
        if (ctx->pc != 0x16DDF8u) { return; }
    }
    ctx->pc = 0x16DDF8u;
label_16ddf8:
    // 0x16ddf8: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x16ddf8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_16ddfc:
    // 0x16ddfc: 0xc047964  jal         func_11E590
label_16de00:
    if (ctx->pc == 0x16DE00u) {
        ctx->pc = 0x16DE00u;
            // 0x16de00: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16DE04u;
        goto label_16de04;
    }
    ctx->pc = 0x16DDFCu;
    SET_GPR_U32(ctx, 31, 0x16DE04u);
    ctx->pc = 0x16DE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DDFCu;
            // 0x16de00: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE04u; }
        if (ctx->pc != 0x16DE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE04u; }
        if (ctx->pc != 0x16DE04u) { return; }
    }
    ctx->pc = 0x16DE04u;
label_16de04:
    // 0x16de04: 0x4600b502  mul.s       $f20, $f22, $f0
    ctx->pc = 0x16de04u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_16de08:
    // 0x16de08: 0xc047a42  jal         func_11E908
label_16de0c:
    if (ctx->pc == 0x16DE0Cu) {
        ctx->pc = 0x16DE0Cu;
            // 0x16de0c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16DE10u;
        goto label_16de10;
    }
    ctx->pc = 0x16DE08u;
    SET_GPR_U32(ctx, 31, 0x16DE10u);
    ctx->pc = 0x16DE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DE08u;
            // 0x16de0c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE10u; }
        if (ctx->pc != 0x16DE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE10u; }
        if (ctx->pc != 0x16DE10u) { return; }
    }
    ctx->pc = 0x16DE10u;
label_16de10:
    // 0x16de10: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x16de10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_16de14:
    // 0x16de14: 0x4600a600  add.s       $f24, $f20, $f0
    ctx->pc = 0x16de14u;
    ctx->f[24] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_16de18:
    // 0x16de18: 0xc047a42  jal         func_11E908
label_16de1c:
    if (ctx->pc == 0x16DE1Cu) {
        ctx->pc = 0x16DE1Cu;
            // 0x16de1c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16DE20u;
        goto label_16de20;
    }
    ctx->pc = 0x16DE18u;
    SET_GPR_U32(ctx, 31, 0x16DE20u);
    ctx->pc = 0x16DE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DE18u;
            // 0x16de1c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE20u; }
        if (ctx->pc != 0x16DE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE20u; }
        if (ctx->pc != 0x16DE20u) { return; }
    }
    ctx->pc = 0x16DE20u;
label_16de20:
    // 0x16de20: 0x4600b047  neg.s       $f1, $f22
    ctx->pc = 0x16de20u;
    ctx->f[1] = FPU_NEG_S(ctx->f[22]);
label_16de24:
    // 0x16de24: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x16de24u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16de28:
    // 0x16de28: 0xc047964  jal         func_11E590
label_16de2c:
    if (ctx->pc == 0x16DE2Cu) {
        ctx->pc = 0x16DE2Cu;
            // 0x16de2c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16DE30u;
        goto label_16de30;
    }
    ctx->pc = 0x16DE28u;
    SET_GPR_U32(ctx, 31, 0x16DE30u);
    ctx->pc = 0x16DE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DE28u;
            // 0x16de2c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE30u; }
        if (ctx->pc != 0x16DE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE30u; }
        if (ctx->pc != 0x16DE30u) { return; }
    }
    ctx->pc = 0x16DE30u;
label_16de30:
    // 0x16de30: 0x4600b842  mul.s       $f1, $f23, $f0
    ctx->pc = 0x16de30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_16de34:
    // 0x16de34: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16de34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_16de38:
    // 0x16de38: 0xc7808760  lwc1        $f0, -0x78A0($gp)
    ctx->pc = 0x16de38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16de3c:
    // 0x16de3c: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x16de3cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_16de40:
    // 0x16de40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16de40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16de44:
    // 0x16de44: 0x0  nop
    ctx->pc = 0x16de44u;
    // NOP
label_16de48:
    // 0x16de48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16de48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_16de4c:
    // 0x16de4c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16de4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16de50:
    // 0x16de50: 0x4600c602  mul.s       $f24, $f24, $f0
    ctx->pc = 0x16de50u;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
label_16de54:
    // 0x16de54: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x16de54u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_16de58:
    // 0x16de58: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x16de58u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_16de5c:
    // 0x16de5c: 0xe7b40078  swc1        $f20, 0x78($sp)
    ctx->pc = 0x16de5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_16de60:
    // 0x16de60: 0xa220076d  sb          $zero, 0x76D($s1)
    ctx->pc = 0x16de60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1901), (uint8_t)GPR_U32(ctx, 0));
label_16de64:
    // 0x16de64: 0x86220772  lh          $v0, 0x772($s1)
    ctx->pc = 0x16de64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1906)));
label_16de68:
    // 0x16de68: 0x10400098  beqz        $v0, . + 4 + (0x98 << 2)
label_16de6c:
    if (ctx->pc == 0x16DE6Cu) {
        ctx->pc = 0x16DE6Cu;
            // 0x16de6c: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x16DE70u;
        goto label_16de70;
    }
    ctx->pc = 0x16DE68u;
    {
        const bool branch_taken_0x16de68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DE68u;
            // 0x16de6c: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de68) {
            ctx->pc = 0x16E0CCu;
            goto label_16e0cc;
        }
    }
    ctx->pc = 0x16DE70u;
label_16de70:
    // 0x16de70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16de70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16de74:
    // 0x16de74: 0x0  nop
    ctx->pc = 0x16de74u;
    // NOP
label_16de78:
    // 0x16de78: 0x46180032  c.eq.s      $f0, $f24
    ctx->pc = 0x16de78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16de7c:
    // 0x16de7c: 0x0  nop
    ctx->pc = 0x16de7cu;
    // NOP
label_16de80:
    // 0x16de80: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16de84:
    if (ctx->pc == 0x16DE84u) {
        ctx->pc = 0x16DE84u;
            // 0x16de84: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x16DE88u;
        goto label_16de88;
    }
    ctx->pc = 0x16DE80u;
    {
        const bool branch_taken_0x16de80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16DE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DE80u;
            // 0x16de84: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de80) {
            ctx->pc = 0x16DE98u;
            goto label_16de98;
        }
    }
    ctx->pc = 0x16DE88u;
label_16de88:
    // 0x16de88: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x16de88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16de8c:
    // 0x16de8c: 0x0  nop
    ctx->pc = 0x16de8cu;
    // NOP
label_16de90:
    // 0x16de90: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
label_16de94:
    if (ctx->pc == 0x16DE94u) {
        ctx->pc = 0x16DE98u;
        goto label_16de98;
    }
    ctx->pc = 0x16DE90u;
    {
        const bool branch_taken_0x16de90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16de90) {
            ctx->pc = 0x16DF80u;
            goto label_16df80;
        }
    }
    ctx->pc = 0x16DE98u;
label_16de98:
    // 0x16de98: 0xc047c76  jal         func_11F1D8
label_16de9c:
    if (ctx->pc == 0x16DE9Cu) {
        ctx->pc = 0x16DE9Cu;
            // 0x16de9c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x16DEA0u;
        goto label_16dea0;
    }
    ctx->pc = 0x16DE98u;
    SET_GPR_U32(ctx, 31, 0x16DEA0u);
    ctx->pc = 0x16DE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DE98u;
            // 0x16de9c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEA0u; }
        if (ctx->pc != 0x16DEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEA0u; }
        if (ctx->pc != 0x16DEA0u) { return; }
    }
    ctx->pc = 0x16DEA0u;
label_16dea0:
    // 0x16dea0: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x16dea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_16dea4:
    // 0x16dea4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x16dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_16dea8:
    // 0x16dea8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16dea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16deac:
    // 0x16deac: 0xc072408  jal         func_1C9020
label_16deb0:
    if (ctx->pc == 0x16DEB0u) {
        ctx->pc = 0x16DEB0u;
            // 0x16deb0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x16DEB4u;
        goto label_16deb4;
    }
    ctx->pc = 0x16DEACu;
    SET_GPR_U32(ctx, 31, 0x16DEB4u);
    ctx->pc = 0x16DEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DEACu;
            // 0x16deb0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9020u;
    if (runtime->hasFunction(0x1C9020u)) {
        auto targetFn = runtime->lookupFunction(0x1C9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEB4u; }
        if (ctx->pc != 0x16DEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unitRotation__FP8mgCFrameff_0x1c9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEB4u; }
        if (ctx->pc != 0x16DEB4u) { return; }
    }
    ctx->pc = 0x16DEB4u;
label_16deb4:
    // 0x16deb4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16deb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16deb8:
    // 0x16deb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16deb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16debc:
    // 0x16debc: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x16debcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_16dec0:
    // 0x16dec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16dec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16dec4:
    // 0x16dec4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16dec4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16dec8:
    // 0x16dec8: 0x320f809  jalr        $t9
label_16decc:
    if (ctx->pc == 0x16DECCu) {
        ctx->pc = 0x16DECCu;
            // 0x16decc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x16DED0u;
        goto label_16ded0;
    }
    ctx->pc = 0x16DEC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16DED0u);
        ctx->pc = 0x16DECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DEC8u;
            // 0x16decc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16DED0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16DED0u; }
            if (ctx->pc != 0x16DED0u) { return; }
        }
        }
    }
    ctx->pc = 0x16DED0u;
label_16ded0:
    // 0x16ded0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x16ded0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_16ded4:
    // 0x16ded4: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x16ded4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_16ded8:
    // 0x16ded8: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x16ded8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_16dedc:
    // 0x16dedc: 0xc04bff4  jal         func_12FFD0
label_16dee0:
    if (ctx->pc == 0x16DEE0u) {
        ctx->pc = 0x16DEE0u;
            // 0x16dee0: 0xe7b40088  swc1        $f20, 0x88($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x16DEE4u;
        goto label_16dee4;
    }
    ctx->pc = 0x16DEDCu;
    SET_GPR_U32(ctx, 31, 0x16DEE4u);
    ctx->pc = 0x16DEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DEDCu;
            // 0x16dee0: 0xe7b40088  swc1        $f20, 0x88($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEE4u; }
        if (ctx->pc != 0x16DEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEE4u; }
        if (ctx->pc != 0x16DEE4u) { return; }
    }
    ctx->pc = 0x16DEE4u;
label_16dee4:
    // 0x16dee4: 0xc62106ac  lwc1        $f1, 0x6AC($s1)
    ctx->pc = 0x16dee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16dee8:
    // 0x16dee8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16deec:
    // 0x16deec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16deecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16def0:
    // 0x16def0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x16def0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_16def4:
    // 0x16def4: 0x0  nop
    ctx->pc = 0x16def4u;
    // NOP
label_16def8:
    // 0x16def8: 0x0  nop
    ctx->pc = 0x16def8u;
    // NOP
label_16defc:
    // 0x16defc: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x16defcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16df00:
    // 0x16df00: 0x0  nop
    ctx->pc = 0x16df00u;
    // NOP
label_16df04:
    // 0x16df04: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_16df08:
    if (ctx->pc == 0x16DF08u) {
        ctx->pc = 0x16DF08u;
            // 0x16df08: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->pc = 0x16DF0Cu;
        goto label_16df0c;
    }
    ctx->pc = 0x16DF04u;
    {
        const bool branch_taken_0x16df04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16DF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DF04u;
            // 0x16df08: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16df04) {
            ctx->pc = 0x16DF14u;
            goto label_16df14;
        }
    }
    ctx->pc = 0x16DF0Cu;
label_16df0c:
    // 0x16df0c: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x16df0cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_16df10:
    // 0x16df10: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x16df10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_16df14:
    // 0x16df14: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16df14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_16df18:
    // 0x16df18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16df18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16df1c:
    // 0x16df1c: 0x0  nop
    ctx->pc = 0x16df1cu;
    // NOP
label_16df20:
    // 0x16df20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16df20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16df24:
    // 0x16df24: 0x0  nop
    ctx->pc = 0x16df24u;
    // NOP
label_16df28:
    // 0x16df28: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_16df2c:
    if (ctx->pc == 0x16DF2Cu) {
        ctx->pc = 0x16DF30u;
        goto label_16df30;
    }
    ctx->pc = 0x16DF28u;
    {
        const bool branch_taken_0x16df28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16df28) {
            ctx->pc = 0x16DF58u;
            goto label_16df58;
        }
    }
    ctx->pc = 0x16DF30u;
label_16df30:
    // 0x16df30: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16df30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16df34:
    // 0x16df34: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16df34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16df38:
    // 0x16df38: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x16df38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16df3c:
    // 0x16df3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16df3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16df40:
    // 0x16df40: 0x24a53660  addiu       $a1, $a1, 0x3660
    ctx->pc = 0x16df40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13920));
label_16df44:
    // 0x16df44: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16df44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16df48:
    // 0x16df48: 0x320f809  jalr        $t9
label_16df4c:
    if (ctx->pc == 0x16DF4Cu) {
        ctx->pc = 0x16DF4Cu;
            // 0x16df4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16DF50u;
        goto label_16df50;
    }
    ctx->pc = 0x16DF48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16DF50u);
        ctx->pc = 0x16DF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DF48u;
            // 0x16df4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16DF50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16DF50u; }
            if (ctx->pc != 0x16DF50u) { return; }
        }
        }
    }
    ctx->pc = 0x16DF50u;
label_16df50:
    // 0x16df50: 0x10000014  b           . + 4 + (0x14 << 2)
label_16df54:
    if (ctx->pc == 0x16DF54u) {
        ctx->pc = 0x16DF54u;
            // 0x16df54: 0x86250770  lh          $a1, 0x770($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
        ctx->pc = 0x16DF58u;
        goto label_16df58;
    }
    ctx->pc = 0x16DF50u;
    {
        const bool branch_taken_0x16df50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DF50u;
            // 0x16df54: 0x86250770  lh          $a1, 0x770($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16df50) {
            ctx->pc = 0x16DFA4u;
            goto label_16dfa4;
        }
    }
    ctx->pc = 0x16DF58u;
label_16df58:
    // 0x16df58: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16df58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16df5c:
    // 0x16df5c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16df5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16df60:
    // 0x16df60: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x16df60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16df64:
    // 0x16df64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16df64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16df68:
    // 0x16df68: 0x24a53668  addiu       $a1, $a1, 0x3668
    ctx->pc = 0x16df68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13928));
label_16df6c:
    // 0x16df6c: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16df6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16df70:
    // 0x16df70: 0x320f809  jalr        $t9
label_16df74:
    if (ctx->pc == 0x16DF74u) {
        ctx->pc = 0x16DF74u;
            // 0x16df74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16DF78u;
        goto label_16df78;
    }
    ctx->pc = 0x16DF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16DF78u);
        ctx->pc = 0x16DF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DF70u;
            // 0x16df74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16DF78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16DF78u; }
            if (ctx->pc != 0x16DF78u) { return; }
        }
        }
    }
    ctx->pc = 0x16DF78u;
label_16df78:
    // 0x16df78: 0x10000009  b           . + 4 + (0x9 << 2)
label_16df7c:
    if (ctx->pc == 0x16DF7Cu) {
        ctx->pc = 0x16DF80u;
        goto label_16df80;
    }
    ctx->pc = 0x16DF78u;
    {
        const bool branch_taken_0x16df78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16df78) {
            ctx->pc = 0x16DFA0u;
            goto label_16dfa0;
        }
    }
    ctx->pc = 0x16DF80u;
label_16df80:
    // 0x16df80: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16df80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16df84:
    // 0x16df84: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16df84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16df88:
    // 0x16df88: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x16df88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16df8c:
    // 0x16df8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16df8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16df90:
    // 0x16df90: 0x24a53670  addiu       $a1, $a1, 0x3670
    ctx->pc = 0x16df90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13936));
label_16df94:
    // 0x16df94: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16df94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16df98:
    // 0x16df98: 0x320f809  jalr        $t9
label_16df9c:
    if (ctx->pc == 0x16DF9Cu) {
        ctx->pc = 0x16DF9Cu;
            // 0x16df9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16DFA0u;
        goto label_16dfa0;
    }
    ctx->pc = 0x16DF98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16DFA0u);
        ctx->pc = 0x16DF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DF98u;
            // 0x16df9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16DFA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16DFA0u; }
            if (ctx->pc != 0x16DFA0u) { return; }
        }
        }
    }
    ctx->pc = 0x16DFA0u;
label_16dfa0:
    // 0x16dfa0: 0x86250770  lh          $a1, 0x770($s1)
    ctx->pc = 0x16dfa0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
label_16dfa4:
    // 0x16dfa4: 0xc0a0ed8  jal         func_283B60
label_16dfa8:
    if (ctx->pc == 0x16DFA8u) {
        ctx->pc = 0x16DFA8u;
            // 0x16dfa8: 0x8f849da4  lw          $a0, -0x625C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
        ctx->pc = 0x16DFACu;
        goto label_16dfac;
    }
    ctx->pc = 0x16DFA4u;
    SET_GPR_U32(ctx, 31, 0x16DFACu);
    ctx->pc = 0x16DFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DFA4u;
            // 0x16dfa8: 0x8f849da4  lw          $a0, -0x625C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DFACu; }
        if (ctx->pc != 0x16DFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DFACu; }
        if (ctx->pc != 0x16DFACu) { return; }
    }
    ctx->pc = 0x16DFACu;
label_16dfac:
    // 0x16dfac: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
label_16dfb0:
    if (ctx->pc == 0x16DFB0u) {
        ctx->pc = 0x16DFB0u;
            // 0x16dfb0: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->pc = 0x16DFB4u;
        goto label_16dfb4;
    }
    ctx->pc = 0x16DFACu;
    {
        const bool branch_taken_0x16dfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DFACu;
            // 0x16dfb0: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dfac) {
            ctx->pc = 0x16E24Cu;
            goto label_16e24c;
        }
    }
    ctx->pc = 0x16DFB4u;
label_16dfb4:
    // 0x16dfb4: 0x8444068a  lh          $a0, 0x68A($v0)
    ctx->pc = 0x16dfb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1674)));
label_16dfb8:
    // 0x16dfb8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16dfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16dfbc:
    // 0x16dfbc: 0x148300a2  bne         $a0, $v1, . + 4 + (0xA2 << 2)
label_16dfc0:
    if (ctx->pc == 0x16DFC0u) {
        ctx->pc = 0x16DFC4u;
        goto label_16dfc4;
    }
    ctx->pc = 0x16DFBCu;
    {
        const bool branch_taken_0x16dfbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16dfbc) {
            ctx->pc = 0x16E248u;
            goto label_16e248;
        }
    }
    ctx->pc = 0x16DFC4u;
label_16dfc4:
    // 0x16dfc4: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x16dfc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16dfc8:
    // 0x16dfc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16dfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16dfcc:
    // 0x16dfcc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16dfccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16dfd0:
    // 0x16dfd0: 0x320f809  jalr        $t9
label_16dfd4:
    if (ctx->pc == 0x16DFD4u) {
        ctx->pc = 0x16DFD4u;
            // 0x16dfd4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x16DFD8u;
        goto label_16dfd8;
    }
    ctx->pc = 0x16DFD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16DFD8u);
        ctx->pc = 0x16DFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DFD0u;
            // 0x16dfd4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16DFD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16DFD8u; }
            if (ctx->pc != 0x16DFD8u) { return; }
        }
        }
    }
    ctx->pc = 0x16DFD8u;
label_16dfd8:
    // 0x16dfd8: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x16dfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16dfdc:
    // 0x16dfdc: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x16dfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16dfe0:
    // 0x16dfe0: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x16dfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16dfe4:
    // 0x16dfe4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x16dfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16dfe8:
    // 0x16dfe8: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x16dfe8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_16dfec:
    // 0x16dfec: 0xc047c76  jal         func_11F1D8
label_16dff0:
    if (ctx->pc == 0x16DFF0u) {
        ctx->pc = 0x16DFF0u;
            // 0x16dff0: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x16DFF4u;
        goto label_16dff4;
    }
    ctx->pc = 0x16DFECu;
    SET_GPR_U32(ctx, 31, 0x16DFF4u);
    ctx->pc = 0x16DFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DFECu;
            // 0x16dff0: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DFF4u; }
        if (ctx->pc != 0x16DFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DFF4u; }
        if (ctx->pc != 0x16DFF4u) { return; }
    }
    ctx->pc = 0x16DFF4u;
label_16dff4:
    // 0x16dff4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16dff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16dff8:
    // 0x16dff8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16dff8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16dffc:
    // 0x16dffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16dffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e000:
    // 0x16e000: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x16e000u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_16e004:
    // 0x16e004: 0x320f809  jalr        $t9
label_16e008:
    if (ctx->pc == 0x16E008u) {
        ctx->pc = 0x16E008u;
            // 0x16e008: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x16E00Cu;
        goto label_16e00c;
    }
    ctx->pc = 0x16E004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E00Cu);
        ctx->pc = 0x16E008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E004u;
            // 0x16e008: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E00Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E00Cu; }
            if (ctx->pc != 0x16E00Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16E00Cu;
label_16e00c:
    // 0x16e00c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x16e00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16e010:
    // 0x16e010: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x16e010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_16e014:
    // 0x16e014: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16e014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16e018:
    // 0x16e018: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16e018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16e01c:
    // 0x16e01c: 0x0  nop
    ctx->pc = 0x16e01cu;
    // NOP
label_16e020:
    // 0x16e020: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x16e020u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_16e024:
    // 0x16e024: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16e024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e028:
    // 0x16e028: 0x0  nop
    ctx->pc = 0x16e028u;
    // NOP
label_16e02c:
    // 0x16e02c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_16e030:
    if (ctx->pc == 0x16E030u) {
        ctx->pc = 0x16E030u;
            // 0x16e030: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->pc = 0x16E034u;
        goto label_16e034;
    }
    ctx->pc = 0x16E02Cu;
    {
        const bool branch_taken_0x16e02c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E02Cu;
            // 0x16e030: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e02c) {
            ctx->pc = 0x16E04Cu;
            goto label_16e04c;
        }
    }
    ctx->pc = 0x16E034u;
label_16e034:
    // 0x16e034: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16e034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_16e038:
    // 0x16e038: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16e038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16e03c:
    // 0x16e03c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16e03cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16e040:
    // 0x16e040: 0x0  nop
    ctx->pc = 0x16e040u;
    // NOP
label_16e044:
    // 0x16e044: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x16e044u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_16e048:
    // 0x16e048: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x16e048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_16e04c:
    // 0x16e04c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16e04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16e050:
    // 0x16e050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16e050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16e054:
    // 0x16e054: 0x0  nop
    ctx->pc = 0x16e054u;
    // NOP
label_16e058:
    // 0x16e058: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x16e058u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e05c:
    // 0x16e05c: 0x0  nop
    ctx->pc = 0x16e05cu;
    // NOP
label_16e060:
    // 0x16e060: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_16e064:
    if (ctx->pc == 0x16E064u) {
        ctx->pc = 0x16E064u;
            // 0x16e064: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x16E068u;
        goto label_16e068;
    }
    ctx->pc = 0x16E060u;
    {
        const bool branch_taken_0x16e060 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E060u;
            // 0x16e064: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e060) {
            ctx->pc = 0x16E07Cu;
            goto label_16e07c;
        }
    }
    ctx->pc = 0x16E068u;
label_16e068:
    // 0x16e068: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16e068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_16e06c:
    // 0x16e06c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16e06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16e070:
    // 0x16e070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16e070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16e074:
    // 0x16e074: 0x0  nop
    ctx->pc = 0x16e074u;
    // NOP
label_16e078:
    // 0x16e078: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x16e078u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_16e07c:
    // 0x16e07c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e080:
    // 0x16e080: 0xc05af24  jal         func_16BC90
label_16e084:
    if (ctx->pc == 0x16E084u) {
        ctx->pc = 0x16E084u;
            // 0x16e084: 0x24a53678  addiu       $a1, $a1, 0x3678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13944));
        ctx->pc = 0x16E088u;
        goto label_16e088;
    }
    ctx->pc = 0x16E080u;
    SET_GPR_U32(ctx, 31, 0x16E088u);
    ctx->pc = 0x16E084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E080u;
            // 0x16e084: 0x24a53678  addiu       $a1, $a1, 0x3678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BC90u;
    if (runtime->hasFunction(0x16BC90u)) {
        auto targetFn = runtime->lookupFunction(0x16BC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E088u; }
        if (ctx->pc != 0x16E088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchChara__12CActionCharaFPc_0x16bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E088u; }
        if (ctx->pc != 0x16E088u) { return; }
    }
    ctx->pc = 0x16E088u;
label_16e088:
    // 0x16e088: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16e088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e08c:
    // 0x16e08c: 0x1200006e  beqz        $s0, . + 4 + (0x6E << 2)
label_16e090:
    if (ctx->pc == 0x16E090u) {
        ctx->pc = 0x16E094u;
        goto label_16e094;
    }
    ctx->pc = 0x16E08Cu;
    {
        const bool branch_taken_0x16e08c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e08c) {
            ctx->pc = 0x16E248u;
            goto label_16e248;
        }
    }
    ctx->pc = 0x16E094u;
label_16e094:
    // 0x16e094: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x16e094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_16e098:
    // 0x16e098: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x16e098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_16e09c:
    // 0x16e09c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16e09cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16e0a0:
    // 0x16e0a0: 0xc072408  jal         func_1C9020
label_16e0a4:
    if (ctx->pc == 0x16E0A4u) {
        ctx->pc = 0x16E0A4u;
            // 0x16e0a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x16E0A8u;
        goto label_16e0a8;
    }
    ctx->pc = 0x16E0A0u;
    SET_GPR_U32(ctx, 31, 0x16E0A8u);
    ctx->pc = 0x16E0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E0A0u;
            // 0x16e0a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9020u;
    if (runtime->hasFunction(0x1C9020u)) {
        auto targetFn = runtime->lookupFunction(0x1C9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E0A8u; }
        if (ctx->pc != 0x16E0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unitRotation__FP8mgCFrameff_0x1c9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E0A8u; }
        if (ctx->pc != 0x16E0A8u) { return; }
    }
    ctx->pc = 0x16E0A8u;
label_16e0a8:
    // 0x16e0a8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x16e0a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16e0ac:
    // 0x16e0ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16e0acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16e0b0:
    // 0x16e0b0: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x16e0b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_16e0b4:
    // 0x16e0b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e0b8:
    // 0x16e0b8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16e0b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16e0bc:
    // 0x16e0bc: 0x320f809  jalr        $t9
label_16e0c0:
    if (ctx->pc == 0x16E0C0u) {
        ctx->pc = 0x16E0C0u;
            // 0x16e0c0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x16E0C4u;
        goto label_16e0c4;
    }
    ctx->pc = 0x16E0BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E0C4u);
        ctx->pc = 0x16E0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E0BCu;
            // 0x16e0c0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E0C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E0C4u; }
            if (ctx->pc != 0x16E0C4u) { return; }
        }
        }
    }
    ctx->pc = 0x16E0C4u;
label_16e0c4:
    // 0x16e0c4: 0x10000060  b           . + 4 + (0x60 << 2)
label_16e0c8:
    if (ctx->pc == 0x16E0C8u) {
        ctx->pc = 0x16E0CCu;
        goto label_16e0cc;
    }
    ctx->pc = 0x16E0C4u;
    {
        const bool branch_taken_0x16e0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e0c4) {
            ctx->pc = 0x16E248u;
            goto label_16e248;
        }
    }
    ctx->pc = 0x16E0CCu;
label_16e0cc:
    // 0x16e0cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e0d0:
    // 0x16e0d0: 0xc05af24  jal         func_16BC90
label_16e0d4:
    if (ctx->pc == 0x16E0D4u) {
        ctx->pc = 0x16E0D4u;
            // 0x16e0d4: 0x24a53678  addiu       $a1, $a1, 0x3678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13944));
        ctx->pc = 0x16E0D8u;
        goto label_16e0d8;
    }
    ctx->pc = 0x16E0D0u;
    SET_GPR_U32(ctx, 31, 0x16E0D8u);
    ctx->pc = 0x16E0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E0D0u;
            // 0x16e0d4: 0x24a53678  addiu       $a1, $a1, 0x3678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BC90u;
    if (runtime->hasFunction(0x16BC90u)) {
        auto targetFn = runtime->lookupFunction(0x16BC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E0D8u; }
        if (ctx->pc != 0x16E0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchChara__12CActionCharaFPc_0x16bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E0D8u; }
        if (ctx->pc != 0x16E0D8u) { return; }
    }
    ctx->pc = 0x16E0D8u;
label_16e0d8:
    // 0x16e0d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16e0d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e0dc:
    // 0x16e0dc: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
label_16e0e0:
    if (ctx->pc == 0x16E0E0u) {
        ctx->pc = 0x16E0E4u;
        goto label_16e0e4;
    }
    ctx->pc = 0x16E0DCu;
    {
        const bool branch_taken_0x16e0dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e0dc) {
            ctx->pc = 0x16E118u;
            goto label_16e118;
        }
    }
    ctx->pc = 0x16E0E4u;
label_16e0e4:
    // 0x16e0e4: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x16e0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_16e0e8:
    // 0x16e0e8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x16e0e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_16e0ec:
    // 0x16e0ec: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x16e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_16e0f0:
    // 0x16e0f0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16e0f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16e0f4:
    // 0x16e0f4: 0xc072408  jal         func_1C9020
label_16e0f8:
    if (ctx->pc == 0x16E0F8u) {
        ctx->pc = 0x16E0F8u;
            // 0x16e0f8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16E0FCu;
        goto label_16e0fc;
    }
    ctx->pc = 0x16E0F4u;
    SET_GPR_U32(ctx, 31, 0x16E0FCu);
    ctx->pc = 0x16E0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E0F4u;
            // 0x16e0f8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9020u;
    if (runtime->hasFunction(0x1C9020u)) {
        auto targetFn = runtime->lookupFunction(0x1C9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E0FCu; }
        if (ctx->pc != 0x16E0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unitRotation__FP8mgCFrameff_0x1c9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E0FCu; }
        if (ctx->pc != 0x16E0FCu) { return; }
    }
    ctx->pc = 0x16E0FCu;
label_16e0fc:
    // 0x16e0fc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16e0fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16e100:
    // 0x16e100: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16e100u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_16e104:
    // 0x16e104: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x16e104u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_16e108:
    // 0x16e108: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16e108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16e10c:
    // 0x16e10c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16e10cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16e110:
    // 0x16e110: 0x320f809  jalr        $t9
label_16e114:
    if (ctx->pc == 0x16E114u) {
        ctx->pc = 0x16E114u;
            // 0x16e114: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16E118u;
        goto label_16e118;
    }
    ctx->pc = 0x16E110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E118u);
        ctx->pc = 0x16E114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E110u;
            // 0x16e114: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E118u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E118u; }
            if (ctx->pc != 0x16E118u) { return; }
        }
        }
    }
    ctx->pc = 0x16E118u;
label_16e118:
    // 0x16e118: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16e11c:
    // 0x16e11c: 0x0  nop
    ctx->pc = 0x16e11cu;
    // NOP
label_16e120:
    // 0x16e120: 0x46180032  c.eq.s      $f0, $f24
    ctx->pc = 0x16e120u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e124:
    // 0x16e124: 0x0  nop
    ctx->pc = 0x16e124u;
    // NOP
label_16e128:
    // 0x16e128: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16e12c:
    if (ctx->pc == 0x16E12Cu) {
        ctx->pc = 0x16E12Cu;
            // 0x16e12c: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x16E130u;
        goto label_16e130;
    }
    ctx->pc = 0x16E128u;
    {
        const bool branch_taken_0x16e128 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E128u;
            // 0x16e12c: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e128) {
            ctx->pc = 0x16E140u;
            goto label_16e140;
        }
    }
    ctx->pc = 0x16E130u;
label_16e130:
    // 0x16e130: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x16e130u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e134:
    // 0x16e134: 0x0  nop
    ctx->pc = 0x16e134u;
    // NOP
label_16e138:
    // 0x16e138: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
label_16e13c:
    if (ctx->pc == 0x16E13Cu) {
        ctx->pc = 0x16E140u;
        goto label_16e140;
    }
    ctx->pc = 0x16E138u;
    {
        const bool branch_taken_0x16e138 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e138) {
            ctx->pc = 0x16E228u;
            goto label_16e228;
        }
    }
    ctx->pc = 0x16E140u;
label_16e140:
    // 0x16e140: 0xc047c76  jal         func_11F1D8
label_16e144:
    if (ctx->pc == 0x16E144u) {
        ctx->pc = 0x16E144u;
            // 0x16e144: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x16E148u;
        goto label_16e148;
    }
    ctx->pc = 0x16E140u;
    SET_GPR_U32(ctx, 31, 0x16E148u);
    ctx->pc = 0x16E144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E140u;
            // 0x16e144: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E148u; }
        if (ctx->pc != 0x16E148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E148u; }
        if (ctx->pc != 0x16E148u) { return; }
    }
    ctx->pc = 0x16E148u;
label_16e148:
    // 0x16e148: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x16e148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_16e14c:
    // 0x16e14c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x16e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_16e150:
    // 0x16e150: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16e150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16e154:
    // 0x16e154: 0xc072408  jal         func_1C9020
label_16e158:
    if (ctx->pc == 0x16E158u) {
        ctx->pc = 0x16E158u;
            // 0x16e158: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x16E15Cu;
        goto label_16e15c;
    }
    ctx->pc = 0x16E154u;
    SET_GPR_U32(ctx, 31, 0x16E15Cu);
    ctx->pc = 0x16E158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E154u;
            // 0x16e158: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9020u;
    if (runtime->hasFunction(0x1C9020u)) {
        auto targetFn = runtime->lookupFunction(0x1C9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E15Cu; }
        if (ctx->pc != 0x16E15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unitRotation__FP8mgCFrameff_0x1c9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E15Cu; }
        if (ctx->pc != 0x16E15Cu) { return; }
    }
    ctx->pc = 0x16E15Cu;
label_16e15c:
    // 0x16e15c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16e15cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16e160:
    // 0x16e160: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16e160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16e164:
    // 0x16e164: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x16e164u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_16e168:
    // 0x16e168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e16c:
    // 0x16e16c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16e16cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16e170:
    // 0x16e170: 0x320f809  jalr        $t9
label_16e174:
    if (ctx->pc == 0x16E174u) {
        ctx->pc = 0x16E174u;
            // 0x16e174: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x16E178u;
        goto label_16e178;
    }
    ctx->pc = 0x16E170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E178u);
        ctx->pc = 0x16E174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E170u;
            // 0x16e174: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E178u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E178u; }
            if (ctx->pc != 0x16E178u) { return; }
        }
        }
    }
    ctx->pc = 0x16E178u;
label_16e178:
    // 0x16e178: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16e178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_16e17c:
    // 0x16e17c: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x16e17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
label_16e180:
    // 0x16e180: 0xe7b800b0  swc1        $f24, 0xB0($sp)
    ctx->pc = 0x16e180u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_16e184:
    // 0x16e184: 0xc04bff4  jal         func_12FFD0
label_16e188:
    if (ctx->pc == 0x16E188u) {
        ctx->pc = 0x16E188u;
            // 0x16e188: 0xe7b400b8  swc1        $f20, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->pc = 0x16E18Cu;
        goto label_16e18c;
    }
    ctx->pc = 0x16E184u;
    SET_GPR_U32(ctx, 31, 0x16E18Cu);
    ctx->pc = 0x16E188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E184u;
            // 0x16e188: 0xe7b400b8  swc1        $f20, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E18Cu; }
        if (ctx->pc != 0x16E18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E18Cu; }
        if (ctx->pc != 0x16E18Cu) { return; }
    }
    ctx->pc = 0x16E18Cu;
label_16e18c:
    // 0x16e18c: 0xc62106ac  lwc1        $f1, 0x6AC($s1)
    ctx->pc = 0x16e18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16e190:
    // 0x16e190: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16e190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16e194:
    // 0x16e194: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16e194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16e198:
    // 0x16e198: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x16e198u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_16e19c:
    // 0x16e19c: 0x0  nop
    ctx->pc = 0x16e19cu;
    // NOP
label_16e1a0:
    // 0x16e1a0: 0x0  nop
    ctx->pc = 0x16e1a0u;
    // NOP
label_16e1a4:
    // 0x16e1a4: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x16e1a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e1a8:
    // 0x16e1a8: 0x0  nop
    ctx->pc = 0x16e1a8u;
    // NOP
label_16e1ac:
    // 0x16e1ac: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_16e1b0:
    if (ctx->pc == 0x16E1B0u) {
        ctx->pc = 0x16E1B0u;
            // 0x16e1b0: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->pc = 0x16E1B4u;
        goto label_16e1b4;
    }
    ctx->pc = 0x16E1ACu;
    {
        const bool branch_taken_0x16e1ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E1ACu;
            // 0x16e1b0: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e1ac) {
            ctx->pc = 0x16E1BCu;
            goto label_16e1bc;
        }
    }
    ctx->pc = 0x16E1B4u;
label_16e1b4:
    // 0x16e1b4: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x16e1b4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_16e1b8:
    // 0x16e1b8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x16e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_16e1bc:
    // 0x16e1bc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16e1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_16e1c0:
    // 0x16e1c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16e1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16e1c4:
    // 0x16e1c4: 0x0  nop
    ctx->pc = 0x16e1c4u;
    // NOP
label_16e1c8:
    // 0x16e1c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16e1c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e1cc:
    // 0x16e1cc: 0x0  nop
    ctx->pc = 0x16e1ccu;
    // NOP
label_16e1d0:
    // 0x16e1d0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_16e1d4:
    if (ctx->pc == 0x16E1D4u) {
        ctx->pc = 0x16E1D8u;
        goto label_16e1d8;
    }
    ctx->pc = 0x16E1D0u;
    {
        const bool branch_taken_0x16e1d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e1d0) {
            ctx->pc = 0x16E200u;
            goto label_16e200;
        }
    }
    ctx->pc = 0x16E1D8u;
label_16e1d8:
    // 0x16e1d8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16e1d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16e1dc:
    // 0x16e1dc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16e1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16e1e0:
    // 0x16e1e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x16e1e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e1e4:
    // 0x16e1e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e1e8:
    // 0x16e1e8: 0x24a53660  addiu       $a1, $a1, 0x3660
    ctx->pc = 0x16e1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13920));
label_16e1ec:
    // 0x16e1ec: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16e1ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16e1f0:
    // 0x16e1f0: 0x320f809  jalr        $t9
label_16e1f4:
    if (ctx->pc == 0x16E1F4u) {
        ctx->pc = 0x16E1F4u;
            // 0x16e1f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E1F8u;
        goto label_16e1f8;
    }
    ctx->pc = 0x16E1F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E1F8u);
        ctx->pc = 0x16E1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E1F0u;
            // 0x16e1f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E1F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E1F8u; }
            if (ctx->pc != 0x16E1F8u) { return; }
        }
        }
    }
    ctx->pc = 0x16E1F8u;
label_16e1f8:
    // 0x16e1f8: 0x10000013  b           . + 4 + (0x13 << 2)
label_16e1fc:
    if (ctx->pc == 0x16E1FCu) {
        ctx->pc = 0x16E200u;
        goto label_16e200;
    }
    ctx->pc = 0x16E1F8u;
    {
        const bool branch_taken_0x16e1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e1f8) {
            ctx->pc = 0x16E248u;
            goto label_16e248;
        }
    }
    ctx->pc = 0x16E200u;
label_16e200:
    // 0x16e200: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16e200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16e204:
    // 0x16e204: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16e204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16e208:
    // 0x16e208: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x16e208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e20c:
    // 0x16e20c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e210:
    // 0x16e210: 0x24a53668  addiu       $a1, $a1, 0x3668
    ctx->pc = 0x16e210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13928));
label_16e214:
    // 0x16e214: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16e214u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16e218:
    // 0x16e218: 0x320f809  jalr        $t9
label_16e21c:
    if (ctx->pc == 0x16E21Cu) {
        ctx->pc = 0x16E21Cu;
            // 0x16e21c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E220u;
        goto label_16e220;
    }
    ctx->pc = 0x16E218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E220u);
        ctx->pc = 0x16E21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E218u;
            // 0x16e21c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E220u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E220u; }
            if (ctx->pc != 0x16E220u) { return; }
        }
        }
    }
    ctx->pc = 0x16E220u;
label_16e220:
    // 0x16e220: 0x10000009  b           . + 4 + (0x9 << 2)
label_16e224:
    if (ctx->pc == 0x16E224u) {
        ctx->pc = 0x16E228u;
        goto label_16e228;
    }
    ctx->pc = 0x16E220u;
    {
        const bool branch_taken_0x16e220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e220) {
            ctx->pc = 0x16E248u;
            goto label_16e248;
        }
    }
    ctx->pc = 0x16E228u;
label_16e228:
    // 0x16e228: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16e228u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16e22c:
    // 0x16e22c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16e22cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16e230:
    // 0x16e230: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x16e230u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e234:
    // 0x16e234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e238:
    // 0x16e238: 0x24a53670  addiu       $a1, $a1, 0x3670
    ctx->pc = 0x16e238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13936));
label_16e23c:
    // 0x16e23c: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16e23cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16e240:
    // 0x16e240: 0x320f809  jalr        $t9
label_16e244:
    if (ctx->pc == 0x16E244u) {
        ctx->pc = 0x16E244u;
            // 0x16e244: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E248u;
        goto label_16e248;
    }
    ctx->pc = 0x16E240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E248u);
        ctx->pc = 0x16E244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E240u;
            // 0x16e244: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E248u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E248u; }
            if (ctx->pc != 0x16E248u) { return; }
        }
        }
    }
    ctx->pc = 0x16E248u;
label_16e248:
    // 0x16e248: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x16e248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_16e24c:
    // 0x16e24c: 0xc041c5c  jal         func_107170
label_16e250:
    if (ctx->pc == 0x16E250u) {
        ctx->pc = 0x16E250u;
            // 0x16e250: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x16E254u;
        goto label_16e254;
    }
    ctx->pc = 0x16E24Cu;
    SET_GPR_U32(ctx, 31, 0x16E254u);
    ctx->pc = 0x16E250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E24Cu;
            // 0x16e250: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E254u; }
        if (ctx->pc != 0x16E254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E254u; }
        if (ctx->pc != 0x16E254u) { return; }
    }
    ctx->pc = 0x16E254u;
label_16e254:
    // 0x16e254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e258:
    // 0x16e258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e25c:
    // 0x16e25c: 0xc05b1e8  jal         func_16C7A0
label_16e260:
    if (ctx->pc == 0x16E260u) {
        ctx->pc = 0x16E260u;
            // 0x16e260: 0xa222076c  sb          $v0, 0x76C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1900), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x16E264u;
        goto label_16e264;
    }
    ctx->pc = 0x16E25Cu;
    SET_GPR_U32(ctx, 31, 0x16E264u);
    ctx->pc = 0x16E260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E25Cu;
            // 0x16e260: 0xa222076c  sb          $v0, 0x76C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1900), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C7A0u;
    if (runtime->hasFunction(0x16C7A0u)) {
        auto targetFn = runtime->lookupFunction(0x16C7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E264u; }
        if (ctx->pc != 0x16E264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RockOn__12CActionCharaFv_0x16c7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E264u; }
        if (ctx->pc != 0x16E264u) { return; }
    }
    ctx->pc = 0x16E264u;
label_16e264:
    // 0x16e264: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16e264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16e268:
    // 0x16e268: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x16e268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_16e26c:
    // 0x16e26c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x16e26cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16e270:
    // 0x16e270: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x16e270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_16e274:
    // 0x16e274: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16e274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16e278:
    // 0x16e278: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x16e278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_16e27c:
    // 0x16e27c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16e27cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16e280:
    // 0x16e280: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16e280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_16e284:
    // 0x16e284: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16e284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16e288:
    // 0x16e288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e28c:
    // 0x16e28c: 0x3e00008  jr          $ra
label_16e290:
    if (ctx->pc == 0x16E290u) {
        ctx->pc = 0x16E290u;
            // 0x16e290: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x16E294u;
        goto label_fallthrough_0x16e28c;
    }
    ctx->pc = 0x16E28Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E28Cu;
            // 0x16e290: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16e28c:
    ctx->pc = 0x16E294u;
}
