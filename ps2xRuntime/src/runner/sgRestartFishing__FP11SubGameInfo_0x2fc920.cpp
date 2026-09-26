#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgRestartFishing__FP11SubGameInfo
// Address: 0x2fc920 - 0x2fce7c
void sgRestartFishing__FP11SubGameInfo_0x2fc920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgRestartFishing__FP11SubGameInfo_0x2fc920");
#endif

    switch (ctx->pc) {
        case 0x2fc920u: goto label_2fc920;
        case 0x2fc924u: goto label_2fc924;
        case 0x2fc928u: goto label_2fc928;
        case 0x2fc92cu: goto label_2fc92c;
        case 0x2fc930u: goto label_2fc930;
        case 0x2fc934u: goto label_2fc934;
        case 0x2fc938u: goto label_2fc938;
        case 0x2fc93cu: goto label_2fc93c;
        case 0x2fc940u: goto label_2fc940;
        case 0x2fc944u: goto label_2fc944;
        case 0x2fc948u: goto label_2fc948;
        case 0x2fc94cu: goto label_2fc94c;
        case 0x2fc950u: goto label_2fc950;
        case 0x2fc954u: goto label_2fc954;
        case 0x2fc958u: goto label_2fc958;
        case 0x2fc95cu: goto label_2fc95c;
        case 0x2fc960u: goto label_2fc960;
        case 0x2fc964u: goto label_2fc964;
        case 0x2fc968u: goto label_2fc968;
        case 0x2fc96cu: goto label_2fc96c;
        case 0x2fc970u: goto label_2fc970;
        case 0x2fc974u: goto label_2fc974;
        case 0x2fc978u: goto label_2fc978;
        case 0x2fc97cu: goto label_2fc97c;
        case 0x2fc980u: goto label_2fc980;
        case 0x2fc984u: goto label_2fc984;
        case 0x2fc988u: goto label_2fc988;
        case 0x2fc98cu: goto label_2fc98c;
        case 0x2fc990u: goto label_2fc990;
        case 0x2fc994u: goto label_2fc994;
        case 0x2fc998u: goto label_2fc998;
        case 0x2fc99cu: goto label_2fc99c;
        case 0x2fc9a0u: goto label_2fc9a0;
        case 0x2fc9a4u: goto label_2fc9a4;
        case 0x2fc9a8u: goto label_2fc9a8;
        case 0x2fc9acu: goto label_2fc9ac;
        case 0x2fc9b0u: goto label_2fc9b0;
        case 0x2fc9b4u: goto label_2fc9b4;
        case 0x2fc9b8u: goto label_2fc9b8;
        case 0x2fc9bcu: goto label_2fc9bc;
        case 0x2fc9c0u: goto label_2fc9c0;
        case 0x2fc9c4u: goto label_2fc9c4;
        case 0x2fc9c8u: goto label_2fc9c8;
        case 0x2fc9ccu: goto label_2fc9cc;
        case 0x2fc9d0u: goto label_2fc9d0;
        case 0x2fc9d4u: goto label_2fc9d4;
        case 0x2fc9d8u: goto label_2fc9d8;
        case 0x2fc9dcu: goto label_2fc9dc;
        case 0x2fc9e0u: goto label_2fc9e0;
        case 0x2fc9e4u: goto label_2fc9e4;
        case 0x2fc9e8u: goto label_2fc9e8;
        case 0x2fc9ecu: goto label_2fc9ec;
        case 0x2fc9f0u: goto label_2fc9f0;
        case 0x2fc9f4u: goto label_2fc9f4;
        case 0x2fc9f8u: goto label_2fc9f8;
        case 0x2fc9fcu: goto label_2fc9fc;
        case 0x2fca00u: goto label_2fca00;
        case 0x2fca04u: goto label_2fca04;
        case 0x2fca08u: goto label_2fca08;
        case 0x2fca0cu: goto label_2fca0c;
        case 0x2fca10u: goto label_2fca10;
        case 0x2fca14u: goto label_2fca14;
        case 0x2fca18u: goto label_2fca18;
        case 0x2fca1cu: goto label_2fca1c;
        case 0x2fca20u: goto label_2fca20;
        case 0x2fca24u: goto label_2fca24;
        case 0x2fca28u: goto label_2fca28;
        case 0x2fca2cu: goto label_2fca2c;
        case 0x2fca30u: goto label_2fca30;
        case 0x2fca34u: goto label_2fca34;
        case 0x2fca38u: goto label_2fca38;
        case 0x2fca3cu: goto label_2fca3c;
        case 0x2fca40u: goto label_2fca40;
        case 0x2fca44u: goto label_2fca44;
        case 0x2fca48u: goto label_2fca48;
        case 0x2fca4cu: goto label_2fca4c;
        case 0x2fca50u: goto label_2fca50;
        case 0x2fca54u: goto label_2fca54;
        case 0x2fca58u: goto label_2fca58;
        case 0x2fca5cu: goto label_2fca5c;
        case 0x2fca60u: goto label_2fca60;
        case 0x2fca64u: goto label_2fca64;
        case 0x2fca68u: goto label_2fca68;
        case 0x2fca6cu: goto label_2fca6c;
        case 0x2fca70u: goto label_2fca70;
        case 0x2fca74u: goto label_2fca74;
        case 0x2fca78u: goto label_2fca78;
        case 0x2fca7cu: goto label_2fca7c;
        case 0x2fca80u: goto label_2fca80;
        case 0x2fca84u: goto label_2fca84;
        case 0x2fca88u: goto label_2fca88;
        case 0x2fca8cu: goto label_2fca8c;
        case 0x2fca90u: goto label_2fca90;
        case 0x2fca94u: goto label_2fca94;
        case 0x2fca98u: goto label_2fca98;
        case 0x2fca9cu: goto label_2fca9c;
        case 0x2fcaa0u: goto label_2fcaa0;
        case 0x2fcaa4u: goto label_2fcaa4;
        case 0x2fcaa8u: goto label_2fcaa8;
        case 0x2fcaacu: goto label_2fcaac;
        case 0x2fcab0u: goto label_2fcab0;
        case 0x2fcab4u: goto label_2fcab4;
        case 0x2fcab8u: goto label_2fcab8;
        case 0x2fcabcu: goto label_2fcabc;
        case 0x2fcac0u: goto label_2fcac0;
        case 0x2fcac4u: goto label_2fcac4;
        case 0x2fcac8u: goto label_2fcac8;
        case 0x2fcaccu: goto label_2fcacc;
        case 0x2fcad0u: goto label_2fcad0;
        case 0x2fcad4u: goto label_2fcad4;
        case 0x2fcad8u: goto label_2fcad8;
        case 0x2fcadcu: goto label_2fcadc;
        case 0x2fcae0u: goto label_2fcae0;
        case 0x2fcae4u: goto label_2fcae4;
        case 0x2fcae8u: goto label_2fcae8;
        case 0x2fcaecu: goto label_2fcaec;
        case 0x2fcaf0u: goto label_2fcaf0;
        case 0x2fcaf4u: goto label_2fcaf4;
        case 0x2fcaf8u: goto label_2fcaf8;
        case 0x2fcafcu: goto label_2fcafc;
        case 0x2fcb00u: goto label_2fcb00;
        case 0x2fcb04u: goto label_2fcb04;
        case 0x2fcb08u: goto label_2fcb08;
        case 0x2fcb0cu: goto label_2fcb0c;
        case 0x2fcb10u: goto label_2fcb10;
        case 0x2fcb14u: goto label_2fcb14;
        case 0x2fcb18u: goto label_2fcb18;
        case 0x2fcb1cu: goto label_2fcb1c;
        case 0x2fcb20u: goto label_2fcb20;
        case 0x2fcb24u: goto label_2fcb24;
        case 0x2fcb28u: goto label_2fcb28;
        case 0x2fcb2cu: goto label_2fcb2c;
        case 0x2fcb30u: goto label_2fcb30;
        case 0x2fcb34u: goto label_2fcb34;
        case 0x2fcb38u: goto label_2fcb38;
        case 0x2fcb3cu: goto label_2fcb3c;
        case 0x2fcb40u: goto label_2fcb40;
        case 0x2fcb44u: goto label_2fcb44;
        case 0x2fcb48u: goto label_2fcb48;
        case 0x2fcb4cu: goto label_2fcb4c;
        case 0x2fcb50u: goto label_2fcb50;
        case 0x2fcb54u: goto label_2fcb54;
        case 0x2fcb58u: goto label_2fcb58;
        case 0x2fcb5cu: goto label_2fcb5c;
        case 0x2fcb60u: goto label_2fcb60;
        case 0x2fcb64u: goto label_2fcb64;
        case 0x2fcb68u: goto label_2fcb68;
        case 0x2fcb6cu: goto label_2fcb6c;
        case 0x2fcb70u: goto label_2fcb70;
        case 0x2fcb74u: goto label_2fcb74;
        case 0x2fcb78u: goto label_2fcb78;
        case 0x2fcb7cu: goto label_2fcb7c;
        case 0x2fcb80u: goto label_2fcb80;
        case 0x2fcb84u: goto label_2fcb84;
        case 0x2fcb88u: goto label_2fcb88;
        case 0x2fcb8cu: goto label_2fcb8c;
        case 0x2fcb90u: goto label_2fcb90;
        case 0x2fcb94u: goto label_2fcb94;
        case 0x2fcb98u: goto label_2fcb98;
        case 0x2fcb9cu: goto label_2fcb9c;
        case 0x2fcba0u: goto label_2fcba0;
        case 0x2fcba4u: goto label_2fcba4;
        case 0x2fcba8u: goto label_2fcba8;
        case 0x2fcbacu: goto label_2fcbac;
        case 0x2fcbb0u: goto label_2fcbb0;
        case 0x2fcbb4u: goto label_2fcbb4;
        case 0x2fcbb8u: goto label_2fcbb8;
        case 0x2fcbbcu: goto label_2fcbbc;
        case 0x2fcbc0u: goto label_2fcbc0;
        case 0x2fcbc4u: goto label_2fcbc4;
        case 0x2fcbc8u: goto label_2fcbc8;
        case 0x2fcbccu: goto label_2fcbcc;
        case 0x2fcbd0u: goto label_2fcbd0;
        case 0x2fcbd4u: goto label_2fcbd4;
        case 0x2fcbd8u: goto label_2fcbd8;
        case 0x2fcbdcu: goto label_2fcbdc;
        case 0x2fcbe0u: goto label_2fcbe0;
        case 0x2fcbe4u: goto label_2fcbe4;
        case 0x2fcbe8u: goto label_2fcbe8;
        case 0x2fcbecu: goto label_2fcbec;
        case 0x2fcbf0u: goto label_2fcbf0;
        case 0x2fcbf4u: goto label_2fcbf4;
        case 0x2fcbf8u: goto label_2fcbf8;
        case 0x2fcbfcu: goto label_2fcbfc;
        case 0x2fcc00u: goto label_2fcc00;
        case 0x2fcc04u: goto label_2fcc04;
        case 0x2fcc08u: goto label_2fcc08;
        case 0x2fcc0cu: goto label_2fcc0c;
        case 0x2fcc10u: goto label_2fcc10;
        case 0x2fcc14u: goto label_2fcc14;
        case 0x2fcc18u: goto label_2fcc18;
        case 0x2fcc1cu: goto label_2fcc1c;
        case 0x2fcc20u: goto label_2fcc20;
        case 0x2fcc24u: goto label_2fcc24;
        case 0x2fcc28u: goto label_2fcc28;
        case 0x2fcc2cu: goto label_2fcc2c;
        case 0x2fcc30u: goto label_2fcc30;
        case 0x2fcc34u: goto label_2fcc34;
        case 0x2fcc38u: goto label_2fcc38;
        case 0x2fcc3cu: goto label_2fcc3c;
        case 0x2fcc40u: goto label_2fcc40;
        case 0x2fcc44u: goto label_2fcc44;
        case 0x2fcc48u: goto label_2fcc48;
        case 0x2fcc4cu: goto label_2fcc4c;
        case 0x2fcc50u: goto label_2fcc50;
        case 0x2fcc54u: goto label_2fcc54;
        case 0x2fcc58u: goto label_2fcc58;
        case 0x2fcc5cu: goto label_2fcc5c;
        case 0x2fcc60u: goto label_2fcc60;
        case 0x2fcc64u: goto label_2fcc64;
        case 0x2fcc68u: goto label_2fcc68;
        case 0x2fcc6cu: goto label_2fcc6c;
        case 0x2fcc70u: goto label_2fcc70;
        case 0x2fcc74u: goto label_2fcc74;
        case 0x2fcc78u: goto label_2fcc78;
        case 0x2fcc7cu: goto label_2fcc7c;
        case 0x2fcc80u: goto label_2fcc80;
        case 0x2fcc84u: goto label_2fcc84;
        case 0x2fcc88u: goto label_2fcc88;
        case 0x2fcc8cu: goto label_2fcc8c;
        case 0x2fcc90u: goto label_2fcc90;
        case 0x2fcc94u: goto label_2fcc94;
        case 0x2fcc98u: goto label_2fcc98;
        case 0x2fcc9cu: goto label_2fcc9c;
        case 0x2fcca0u: goto label_2fcca0;
        case 0x2fcca4u: goto label_2fcca4;
        case 0x2fcca8u: goto label_2fcca8;
        case 0x2fccacu: goto label_2fccac;
        case 0x2fccb0u: goto label_2fccb0;
        case 0x2fccb4u: goto label_2fccb4;
        case 0x2fccb8u: goto label_2fccb8;
        case 0x2fccbcu: goto label_2fccbc;
        case 0x2fccc0u: goto label_2fccc0;
        case 0x2fccc4u: goto label_2fccc4;
        case 0x2fccc8u: goto label_2fccc8;
        case 0x2fccccu: goto label_2fcccc;
        case 0x2fccd0u: goto label_2fccd0;
        case 0x2fccd4u: goto label_2fccd4;
        case 0x2fccd8u: goto label_2fccd8;
        case 0x2fccdcu: goto label_2fccdc;
        case 0x2fcce0u: goto label_2fcce0;
        case 0x2fcce4u: goto label_2fcce4;
        case 0x2fcce8u: goto label_2fcce8;
        case 0x2fccecu: goto label_2fccec;
        case 0x2fccf0u: goto label_2fccf0;
        case 0x2fccf4u: goto label_2fccf4;
        case 0x2fccf8u: goto label_2fccf8;
        case 0x2fccfcu: goto label_2fccfc;
        case 0x2fcd00u: goto label_2fcd00;
        case 0x2fcd04u: goto label_2fcd04;
        case 0x2fcd08u: goto label_2fcd08;
        case 0x2fcd0cu: goto label_2fcd0c;
        case 0x2fcd10u: goto label_2fcd10;
        case 0x2fcd14u: goto label_2fcd14;
        case 0x2fcd18u: goto label_2fcd18;
        case 0x2fcd1cu: goto label_2fcd1c;
        case 0x2fcd20u: goto label_2fcd20;
        case 0x2fcd24u: goto label_2fcd24;
        case 0x2fcd28u: goto label_2fcd28;
        case 0x2fcd2cu: goto label_2fcd2c;
        case 0x2fcd30u: goto label_2fcd30;
        case 0x2fcd34u: goto label_2fcd34;
        case 0x2fcd38u: goto label_2fcd38;
        case 0x2fcd3cu: goto label_2fcd3c;
        case 0x2fcd40u: goto label_2fcd40;
        case 0x2fcd44u: goto label_2fcd44;
        case 0x2fcd48u: goto label_2fcd48;
        case 0x2fcd4cu: goto label_2fcd4c;
        case 0x2fcd50u: goto label_2fcd50;
        case 0x2fcd54u: goto label_2fcd54;
        case 0x2fcd58u: goto label_2fcd58;
        case 0x2fcd5cu: goto label_2fcd5c;
        case 0x2fcd60u: goto label_2fcd60;
        case 0x2fcd64u: goto label_2fcd64;
        case 0x2fcd68u: goto label_2fcd68;
        case 0x2fcd6cu: goto label_2fcd6c;
        case 0x2fcd70u: goto label_2fcd70;
        case 0x2fcd74u: goto label_2fcd74;
        case 0x2fcd78u: goto label_2fcd78;
        case 0x2fcd7cu: goto label_2fcd7c;
        case 0x2fcd80u: goto label_2fcd80;
        case 0x2fcd84u: goto label_2fcd84;
        case 0x2fcd88u: goto label_2fcd88;
        case 0x2fcd8cu: goto label_2fcd8c;
        case 0x2fcd90u: goto label_2fcd90;
        case 0x2fcd94u: goto label_2fcd94;
        case 0x2fcd98u: goto label_2fcd98;
        case 0x2fcd9cu: goto label_2fcd9c;
        case 0x2fcda0u: goto label_2fcda0;
        case 0x2fcda4u: goto label_2fcda4;
        case 0x2fcda8u: goto label_2fcda8;
        case 0x2fcdacu: goto label_2fcdac;
        case 0x2fcdb0u: goto label_2fcdb0;
        case 0x2fcdb4u: goto label_2fcdb4;
        case 0x2fcdb8u: goto label_2fcdb8;
        case 0x2fcdbcu: goto label_2fcdbc;
        case 0x2fcdc0u: goto label_2fcdc0;
        case 0x2fcdc4u: goto label_2fcdc4;
        case 0x2fcdc8u: goto label_2fcdc8;
        case 0x2fcdccu: goto label_2fcdcc;
        case 0x2fcdd0u: goto label_2fcdd0;
        case 0x2fcdd4u: goto label_2fcdd4;
        case 0x2fcdd8u: goto label_2fcdd8;
        case 0x2fcddcu: goto label_2fcddc;
        case 0x2fcde0u: goto label_2fcde0;
        case 0x2fcde4u: goto label_2fcde4;
        case 0x2fcde8u: goto label_2fcde8;
        case 0x2fcdecu: goto label_2fcdec;
        case 0x2fcdf0u: goto label_2fcdf0;
        case 0x2fcdf4u: goto label_2fcdf4;
        case 0x2fcdf8u: goto label_2fcdf8;
        case 0x2fcdfcu: goto label_2fcdfc;
        case 0x2fce00u: goto label_2fce00;
        case 0x2fce04u: goto label_2fce04;
        case 0x2fce08u: goto label_2fce08;
        case 0x2fce0cu: goto label_2fce0c;
        case 0x2fce10u: goto label_2fce10;
        case 0x2fce14u: goto label_2fce14;
        case 0x2fce18u: goto label_2fce18;
        case 0x2fce1cu: goto label_2fce1c;
        case 0x2fce20u: goto label_2fce20;
        case 0x2fce24u: goto label_2fce24;
        case 0x2fce28u: goto label_2fce28;
        case 0x2fce2cu: goto label_2fce2c;
        case 0x2fce30u: goto label_2fce30;
        case 0x2fce34u: goto label_2fce34;
        case 0x2fce38u: goto label_2fce38;
        case 0x2fce3cu: goto label_2fce3c;
        case 0x2fce40u: goto label_2fce40;
        case 0x2fce44u: goto label_2fce44;
        case 0x2fce48u: goto label_2fce48;
        case 0x2fce4cu: goto label_2fce4c;
        case 0x2fce50u: goto label_2fce50;
        case 0x2fce54u: goto label_2fce54;
        case 0x2fce58u: goto label_2fce58;
        case 0x2fce5cu: goto label_2fce5c;
        case 0x2fce60u: goto label_2fce60;
        case 0x2fce64u: goto label_2fce64;
        case 0x2fce68u: goto label_2fce68;
        case 0x2fce6cu: goto label_2fce6c;
        case 0x2fce70u: goto label_2fce70;
        case 0x2fce74u: goto label_2fce74;
        case 0x2fce78u: goto label_2fce78;
        default: break;
    }

    ctx->pc = 0x2fc920u;

label_2fc920:
    // 0x2fc920: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2fc920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2fc924:
    // 0x2fc924: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2fc924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2fc928:
    // 0x2fc928: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2fc928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2fc92c:
    // 0x2fc92c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2fc92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2fc930:
    // 0x2fc930: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2fc930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2fc934:
    // 0x2fc934: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2fc934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fc938:
    // 0x2fc938: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fc938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2fc93c:
    // 0x2fc93c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2fc93cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2fc940:
    // 0x2fc940: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x2fc940u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fc944:
    // 0x2fc944: 0x8f859f9c  lw          $a1, -0x6064($gp)
    ctx->pc = 0x2fc944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942620)));
label_2fc948:
    // 0x2fc948: 0x8f91a01c  lw          $s1, -0x5FE4($gp)
    ctx->pc = 0x2fc948u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
label_2fc94c:
    // 0x2fc94c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2fc94cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_2fc950:
    // 0x2fc950: 0xc04b950  jal         func_12E540
label_2fc954:
    if (ctx->pc == 0x2FC954u) {
        ctx->pc = 0x2FC954u;
            // 0x2fc954: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->pc = 0x2FC958u;
        goto label_2fc958;
    }
    ctx->pc = 0x2FC950u;
    SET_GPR_U32(ctx, 31, 0x2FC958u);
    ctx->pc = 0x2FC954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC950u;
            // 0x2fc954: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC958u; }
        if (ctx->pc != 0x2FC958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC958u; }
        if (ctx->pc != 0x2FC958u) { return; }
    }
    ctx->pc = 0x2FC958u;
label_2fc958:
    // 0x2fc958: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fc958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fc95c:
    // 0x2fc95c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fc95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fc960:
    // 0x2fc960: 0xac2098a4  sw          $zero, -0x675C($at)
    ctx->pc = 0x2fc960u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940836), GPR_U32(ctx, 0));
label_2fc964:
    // 0x2fc964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fc964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fc968:
    // 0x2fc968: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fc968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fc96c:
    // 0x2fc96c: 0xaf829ffc  sw          $v0, -0x6004($gp)
    ctx->pc = 0x2fc96cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942716), GPR_U32(ctx, 2));
label_2fc970:
    // 0x2fc970: 0xac20989c  sw          $zero, -0x6764($at)
    ctx->pc = 0x2fc970u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940828), GPR_U32(ctx, 0));
label_2fc974:
    // 0x2fc974: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fc974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fc978:
    // 0x2fc978: 0xaf809fa8  sw          $zero, -0x6058($gp)
    ctx->pc = 0x2fc978u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942632), GPR_U32(ctx, 0));
label_2fc97c:
    // 0x2fc97c: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x2fc97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2fc980:
    // 0x2fc980: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2fc980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_2fc984:
    // 0x2fc984: 0x2463d260  addiu       $v1, $v1, -0x2DA0
    ctx->pc = 0x2fc984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955616));
label_2fc988:
    // 0x2fc988: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x2fc988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2fc98c:
    // 0x2fc98c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2fc98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fc990:
    // 0x2fc990: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_2fc994:
    if (ctx->pc == 0x2FC994u) {
        ctx->pc = 0x2FC998u;
        goto label_2fc998;
    }
    ctx->pc = 0x2FC990u;
    {
        const bool branch_taken_0x2fc990 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fc990) {
            ctx->pc = 0x2FC9A0u;
            goto label_2fc9a0;
        }
    }
    ctx->pc = 0x2FC998u;
label_2fc998:
    // 0x2fc998: 0x10000005  b           . + 4 + (0x5 << 2)
label_2fc99c:
    if (ctx->pc == 0x2FC99Cu) {
        ctx->pc = 0x2FC99Cu;
            // 0x2fc99c: 0xaf859ffc  sw          $a1, -0x6004($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942716), GPR_U32(ctx, 5));
        ctx->pc = 0x2FC9A0u;
        goto label_2fc9a0;
    }
    ctx->pc = 0x2FC998u;
    {
        const bool branch_taken_0x2fc998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC998u;
            // 0x2fc99c: 0xaf859ffc  sw          $a1, -0x6004($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942716), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc998) {
            ctx->pc = 0x2FC9B0u;
            goto label_2fc9b0;
        }
    }
    ctx->pc = 0x2FC9A0u;
label_2fc9a0:
    // 0x2fc9a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fc9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2fc9a4:
    // 0x2fc9a4: 0x28a20012  slti        $v0, $a1, 0x12
    ctx->pc = 0x2fc9a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18) ? 1 : 0);
label_2fc9a8:
    // 0x2fc9a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2fc9ac:
    if (ctx->pc == 0x2FC9ACu) {
        ctx->pc = 0x2FC9ACu;
            // 0x2fc9ac: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x2FC9B0u;
        goto label_2fc9b0;
    }
    ctx->pc = 0x2FC9A8u;
    {
        const bool branch_taken_0x2fc9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC9A8u;
            // 0x2fc9ac: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc9a8) {
            ctx->pc = 0x2FC988u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fc988;
        }
    }
    ctx->pc = 0x2FC9B0u;
label_2fc9b0:
    // 0x2fc9b0: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2fc9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2fc9b4:
    // 0x2fc9b4: 0x2402012f  addiu       $v0, $zero, 0x12F
    ctx->pc = 0x2fc9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
label_2fc9b8:
    // 0x2fc9b8: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
label_2fc9bc:
    if (ctx->pc == 0x2FC9BCu) {
        ctx->pc = 0x2FC9BCu;
            // 0x2fc9bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FC9C0u;
        goto label_2fc9c0;
    }
    ctx->pc = 0x2FC9B8u;
    {
        const bool branch_taken_0x2fc9b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FC9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC9B8u;
            // 0x2fc9bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc9b8) {
            ctx->pc = 0x2FCAC4u;
            goto label_2fcac4;
        }
    }
    ctx->pc = 0x2FC9C0u;
label_2fc9c0:
    // 0x2fc9c0: 0xc0c3e6c  jal         func_30F9B0
label_2fc9c4:
    if (ctx->pc == 0x2FC9C4u) {
        ctx->pc = 0x2FC9C4u;
            // 0x2fc9c4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2FC9C8u;
        goto label_2fc9c8;
    }
    ctx->pc = 0x2FC9C0u;
    SET_GPR_U32(ctx, 31, 0x2FC9C8u);
    ctx->pc = 0x2FC9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC9C0u;
            // 0x2fc9c4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30F9B0u;
    if (runtime->hasFunction(0x30F9B0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC9C8u; }
        if (ctx->pc != 0x2FC9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFishingMode__Fi_0x30f9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC9C8u; }
        if (ctx->pc != 0x2FC9C8u) { return; }
    }
    ctx->pc = 0x2FC9C8u;
label_2fc9c8:
    // 0x2fc9c8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2fc9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_2fc9cc:
    // 0x2fc9cc: 0xaf809fa8  sw          $zero, -0x6058($gp)
    ctx->pc = 0x2fc9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942632), GPR_U32(ctx, 0));
label_2fc9d0:
    // 0x2fc9d0: 0x2442d8f0  addiu       $v0, $v0, -0x2710
    ctx->pc = 0x2fc9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957296));
label_2fc9d4:
    // 0x2fc9d4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2fc9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2fc9d8:
    // 0x2fc9d8: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x2fc9d8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fc9dc:
    // 0x2fc9dc: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x2fc9dcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2fc9e0:
    // 0x2fc9e0: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x2fc9e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2fc9e4:
    // 0x2fc9e4: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x2fc9e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2fc9e8:
    // 0x2fc9e8: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x2fc9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
label_2fc9ec:
    // 0x2fc9ec: 0x7cc40010  sq          $a0, 0x10($a2)
    ctx->pc = 0x2fc9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 4));
label_2fc9f0:
    // 0x2fc9f0: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x2fc9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
label_2fc9f4:
    // 0x2fc9f4: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x2fc9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
label_2fc9f8:
    // 0x2fc9f8: 0x8f829ffc  lw          $v0, -0x6004($gp)
    ctx->pc = 0x2fc9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942716)));
label_2fc9fc:
    // 0x2fc9fc: 0x2452fff2  addiu       $s2, $v0, -0xE
    ctx->pc = 0x2fc9fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967282));
label_2fca00:
    // 0x2fca00: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x2fca00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_2fca04:
    // 0x2fca04: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2fca08:
    if (ctx->pc == 0x2FCA08u) {
        ctx->pc = 0x2FCA0Cu;
        goto label_2fca0c;
    }
    ctx->pc = 0x2FCA04u;
    {
        const bool branch_taken_0x2fca04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fca04) {
            ctx->pc = 0x2FCA10u;
            goto label_2fca10;
        }
    }
    ctx->pc = 0x2FCA0Cu;
label_2fca0c:
    // 0x2fca0c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2fca0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fca10:
    // 0x2fca10: 0x640001f  bltz        $s2, . + 4 + (0x1F << 2)
label_2fca14:
    if (ctx->pc == 0x2FCA14u) {
        ctx->pc = 0x2FCA14u;
            // 0x2fca14: 0xaf809fc0  sw          $zero, -0x6040($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942656), GPR_U32(ctx, 0));
        ctx->pc = 0x2FCA18u;
        goto label_2fca18;
    }
    ctx->pc = 0x2FCA10u;
    {
        const bool branch_taken_0x2fca10 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2FCA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCA10u;
            // 0x2fca14: 0xaf809fc0  sw          $zero, -0x6040($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca10) {
            ctx->pc = 0x2FCA90u;
            goto label_2fca90;
        }
    }
    ctx->pc = 0x2FCA18u;
label_2fca18:
    // 0x2fca18: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2fca18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_2fca1c:
    // 0x2fca1c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2fca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2fca20:
    // 0x2fca20: 0x2442d250  addiu       $v0, $v0, -0x2DB0
    ctx->pc = 0x2fca20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955600));
label_2fca24:
    // 0x2fca24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fca24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2fca28:
    // 0x2fca28: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2fca28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fca2c:
    // 0x2fca2c: 0xc04a2da  jal         func_128B68
label_2fca30:
    if (ctx->pc == 0x2FCA30u) {
        ctx->pc = 0x2FCA30u;
            // 0x2fca30: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2FCA34u;
        goto label_2fca34;
    }
    ctx->pc = 0x2FCA2Cu;
    SET_GPR_U32(ctx, 31, 0x2FCA34u);
    ctx->pc = 0x2FCA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCA2Cu;
            // 0x2fca30: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCA34u; }
        if (ctx->pc != 0x2FCA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCA34u; }
        if (ctx->pc != 0x2FCA34u) { return; }
    }
    ctx->pc = 0x2FCA34u;
label_2fca34:
    // 0x2fca34: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2fca34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2fca38:
    // 0x2fca38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fca38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fca3c:
    // 0x2fca3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fca3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fca40:
    // 0x2fca40: 0xc0524dc  jal         func_149370
label_2fca44:
    if (ctx->pc == 0x2FCA44u) {
        ctx->pc = 0x2FCA44u;
            // 0x2fca44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA48u;
        goto label_2fca48;
    }
    ctx->pc = 0x2FCA40u;
    SET_GPR_U32(ctx, 31, 0x2FCA48u);
    ctx->pc = 0x2FCA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCA40u;
            // 0x2fca44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCA48u; }
        if (ctx->pc != 0x2FCA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCA48u; }
        if (ctx->pc != 0x2FCA48u) { return; }
    }
    ctx->pc = 0x2FCA48u;
label_2fca48:
    // 0x2fca48: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2fca4c:
    if (ctx->pc == 0x2FCA4Cu) {
        ctx->pc = 0x2FCA50u;
        goto label_2fca50;
    }
    ctx->pc = 0x2FCA48u;
    {
        const bool branch_taken_0x2fca48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fca48) {
            ctx->pc = 0x2FCA84u;
            goto label_2fca84;
        }
    }
    ctx->pc = 0x2FCA50u;
label_2fca50:
    // 0x2fca50: 0x8f849f88  lw          $a0, -0x6078($gp)
    ctx->pc = 0x2fca50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942600)));
label_2fca54:
    // 0x2fca54: 0x3c0701f6  lui         $a3, 0x1F6
    ctx->pc = 0x2fca54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)502 << 16));
label_2fca58:
    // 0x2fca58: 0x24e79880  addiu       $a3, $a3, -0x6780
    ctx->pc = 0x2fca58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940800));
label_2fca5c:
    // 0x2fca5c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2fca5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_2fca60:
    // 0x2fca60: 0x8f8a9f9c  lw          $t2, -0x6064($gp)
    ctx->pc = 0x2fca60u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942620)));
label_2fca64:
    // 0x2fca64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fca64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fca68:
    // 0x2fca68: 0x24c61df8  addiu       $a2, $a2, 0x1DF8
    ctx->pc = 0x2fca68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7672));
label_2fca6c:
    // 0x2fca6c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2fca6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2fca70:
    // 0x2fca70: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2fca70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2fca74:
    // 0x2fca74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fca74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fca78:
    // 0x2fca78: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x2fca78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_2fca7c:
    // 0x2fca7c: 0x320f809  jalr        $t9
label_2fca80:
    if (ctx->pc == 0x2FCA80u) {
        ctx->pc = 0x2FCA80u;
            // 0x2fca80: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA84u;
        goto label_2fca84;
    }
    ctx->pc = 0x2FCA7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FCA84u);
        ctx->pc = 0x2FCA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCA7Cu;
            // 0x2fca80: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FCA84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FCA84u; }
            if (ctx->pc != 0x2FCA84u) { return; }
        }
        }
    }
    ctx->pc = 0x2FCA84u;
label_2fca84:
    // 0x2fca84: 0x8f829f88  lw          $v0, -0x6078($gp)
    ctx->pc = 0x2fca84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942600)));
label_2fca88:
    // 0x2fca88: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x2fca88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_2fca8c:
    // 0x2fca8c: 0xaf829fc0  sw          $v0, -0x6040($gp)
    ctx->pc = 0x2fca8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942656), GPR_U32(ctx, 2));
label_2fca90:
    // 0x2fca90: 0x8f859fc0  lw          $a1, -0x6040($gp)
    ctx->pc = 0x2fca90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942656)));
label_2fca94:
    // 0x2fca94: 0xc0c4a38  jal         func_3128E0
label_2fca98:
    if (ctx->pc == 0x2FCA98u) {
        ctx->pc = 0x2FCA98u;
            // 0x2fca98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA9Cu;
        goto label_2fca9c;
    }
    ctx->pc = 0x2FCA94u;
    SET_GPR_U32(ctx, 31, 0x2FCA9Cu);
    ctx->pc = 0x2FCA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCA94u;
            // 0x2fca98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3128E0u;
    if (runtime->hasFunction(0x3128E0u)) {
        auto targetFn = runtime->lookupFunction(0x3128E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCA9Cu; }
        if (ctx->pc != 0x2FCA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitLureObj__FiP8mgCFrame_0x3128e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCA9Cu; }
        if (ctx->pc != 0x2FCA9Cu) { return; }
    }
    ctx->pc = 0x2FCA9Cu;
label_2fca9c:
    // 0x2fca9c: 0x6410007  bgez        $s2, . + 4 + (0x7 << 2)
label_2fcaa0:
    if (ctx->pc == 0x2FCAA0u) {
        ctx->pc = 0x2FCAA4u;
        goto label_2fcaa4;
    }
    ctx->pc = 0x2FCA9Cu;
    {
        const bool branch_taken_0x2fca9c = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x2fca9c) {
            ctx->pc = 0x2FCABCu;
            goto label_2fcabc;
        }
    }
    ctx->pc = 0x2FCAA4u;
label_2fcaa4:
    // 0x2fcaa4: 0x8f849f88  lw          $a0, -0x6078($gp)
    ctx->pc = 0x2fcaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942600)));
label_2fcaa8:
    // 0x2fcaa8: 0xaf809fc0  sw          $zero, -0x6040($gp)
    ctx->pc = 0x2fcaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942656), GPR_U32(ctx, 0));
label_2fcaac:
    // 0x2fcaac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fcaacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fcab0:
    // 0x2fcab0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fcab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fcab4:
    // 0x2fcab4: 0x320f809  jalr        $t9
label_2fcab8:
    if (ctx->pc == 0x2FCAB8u) {
        ctx->pc = 0x2FCABCu;
        goto label_2fcabc;
    }
    ctx->pc = 0x2FCAB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FCABCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FCABCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FCABCu; }
            if (ctx->pc != 0x2FCABCu) { return; }
        }
        }
    }
    ctx->pc = 0x2FCABCu;
label_2fcabc:
    // 0x2fcabc: 0x10000052  b           . + 4 + (0x52 << 2)
label_2fcac0:
    if (ctx->pc == 0x2FCAC0u) {
        ctx->pc = 0x2FCAC0u;
            // 0x2fcac0: 0xaf92a004  sw          $s2, -0x5FFC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942724), GPR_U32(ctx, 18));
        ctx->pc = 0x2FCAC4u;
        goto label_2fcac4;
    }
    ctx->pc = 0x2FCABCu;
    {
        const bool branch_taken_0x2fcabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCABCu;
            // 0x2fcac0: 0xaf92a004  sw          $s2, -0x5FFC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942724), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcabc) {
            ctx->pc = 0x2FCC08u;
            goto label_2fcc08;
        }
    }
    ctx->pc = 0x2FCAC4u;
label_2fcac4:
    // 0x2fcac4: 0xc0c3e6c  jal         func_30F9B0
label_2fcac8:
    if (ctx->pc == 0x2FCAC8u) {
        ctx->pc = 0x2FCACCu;
        goto label_2fcacc;
    }
    ctx->pc = 0x2FCAC4u;
    SET_GPR_U32(ctx, 31, 0x2FCACCu);
    ctx->pc = 0x30F9B0u;
    if (runtime->hasFunction(0x30F9B0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCACCu; }
        if (ctx->pc != 0x2FCACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFishingMode__Fi_0x30f9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCACCu; }
        if (ctx->pc != 0x2FCACCu) { return; }
    }
    ctx->pc = 0x2FCACCu;
label_2fcacc:
    // 0x2fcacc: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x2fcaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2fcad0:
    // 0x2fcad0: 0xc065750  jal         func_195D40
label_2fcad4:
    if (ctx->pc == 0x2FCAD4u) {
        ctx->pc = 0x2FCAD4u;
            // 0x2fcad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCAD8u;
        goto label_2fcad8;
    }
    ctx->pc = 0x2FCAD0u;
    SET_GPR_U32(ctx, 31, 0x2FCAD8u);
    ctx->pc = 0x2FCAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCAD0u;
            // 0x2fcad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195D40u;
    if (runtime->hasFunction(0x195D40u)) {
        auto targetFn = runtime->lookupFunction(0x195D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCAD8u; }
        if (ctx->pc != 0x2FCAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFilePath__Fii_0x195d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCAD8u; }
        if (ctx->pc != 0x2FCAD8u) { return; }
    }
    ctx->pc = 0x2FCAD8u;
label_2fcad8:
    // 0x2fcad8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2fcad8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fcadc:
    // 0x2fcadc: 0x1240004b  beqz        $s2, . + 4 + (0x4B << 2)
label_2fcae0:
    if (ctx->pc == 0x2FCAE0u) {
        ctx->pc = 0x2FCAE0u;
            // 0x2fcae0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2FCAE4u;
        goto label_2fcae4;
    }
    ctx->pc = 0x2FCADCu;
    {
        const bool branch_taken_0x2fcadc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCADCu;
            // 0x2fcae0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcadc) {
            ctx->pc = 0x2FCC0Cu;
            goto label_2fcc0c;
        }
    }
    ctx->pc = 0x2FCAE4u;
label_2fcae4:
    // 0x2fcae4: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x2fcae4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2fcae8:
    // 0x2fcae8: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_2fcaec:
    if (ctx->pc == 0x2FCAECu) {
        ctx->pc = 0x2FCAF0u;
        goto label_2fcaf0;
    }
    ctx->pc = 0x2FCAE8u;
    {
        const bool branch_taken_0x2fcae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fcae8) {
            ctx->pc = 0x2FCC08u;
            goto label_2fcc08;
        }
    }
    ctx->pc = 0x2FCAF0u;
label_2fcaf0:
    // 0x2fcaf0: 0x8f829ffc  lw          $v0, -0x6004($gp)
    ctx->pc = 0x2fcaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942716)));
label_2fcaf4:
    // 0x2fcaf4: 0x4400044  bltz        $v0, . + 4 + (0x44 << 2)
label_2fcaf8:
    if (ctx->pc == 0x2FCAF8u) {
        ctx->pc = 0x2FCAF8u;
            // 0x2fcaf8: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x2FCAFCu;
        goto label_2fcafc;
    }
    ctx->pc = 0x2FCAF4u;
    {
        const bool branch_taken_0x2fcaf4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FCAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCAF4u;
            // 0x2fcaf8: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcaf4) {
            ctx->pc = 0x2FCC08u;
            goto label_2fcc08;
        }
    }
    ctx->pc = 0x2FCAFCu;
label_2fcafc:
    // 0x2fcafc: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x2fcafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_2fcb00:
    // 0x2fcb00: 0xc04e748  jal         func_139D20
label_2fcb04:
    if (ctx->pc == 0x2FCB04u) {
        ctx->pc = 0x2FCB04u;
            // 0x2fcb04: 0x24849880  addiu       $a0, $a0, -0x6780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940800));
        ctx->pc = 0x2FCB08u;
        goto label_2fcb08;
    }
    ctx->pc = 0x2FCB00u;
    SET_GPR_U32(ctx, 31, 0x2FCB08u);
    ctx->pc = 0x2FCB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCB00u;
            // 0x2fcb04: 0x24849880  addiu       $a0, $a0, -0x6780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCB08u; }
        if (ctx->pc != 0x2FCB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCB08u; }
        if (ctx->pc != 0x2FCB08u) { return; }
    }
    ctx->pc = 0x2FCB08u;
label_2fcb08:
    // 0x2fcb08: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x2fcb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_2fcb0c:
    // 0x2fcb0c: 0xc04e638  jal         func_1398E0
label_2fcb10:
    if (ctx->pc == 0x2FCB10u) {
        ctx->pc = 0x2FCB10u;
            // 0x2fcb10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCB14u;
        goto label_2fcb14;
    }
    ctx->pc = 0x2FCB0Cu;
    SET_GPR_U32(ctx, 31, 0x2FCB14u);
    ctx->pc = 0x2FCB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCB0Cu;
            // 0x2fcb10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCB14u; }
        if (ctx->pc != 0x2FCB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCB14u; }
        if (ctx->pc != 0x2FCB14u) { return; }
    }
    ctx->pc = 0x2FCB14u;
label_2fcb14:
    // 0x2fcb14: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2fcb18:
    if (ctx->pc == 0x2FCB18u) {
        ctx->pc = 0x2FCB18u;
            // 0x2fcb18: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCB1Cu;
        goto label_2fcb1c;
    }
    ctx->pc = 0x2FCB14u;
    {
        const bool branch_taken_0x2fcb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCB14u;
            // 0x2fcb18: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcb14) {
            ctx->pc = 0x2FCB98u;
            goto label_2fcb98;
        }
    }
    ctx->pc = 0x2FCB1Cu;
label_2fcb1c:
    // 0x2fcb1c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fcb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fcb20:
    // 0x2fcb20: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2fcb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2fcb24:
    // 0x2fcb24: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fcb24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fcb28:
    // 0x2fcb28: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fcb28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fcb2c:
    // 0x2fcb2c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fcb2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fcb30:
    // 0x2fcb30: 0x320f809  jalr        $t9
label_2fcb34:
    if (ctx->pc == 0x2FCB34u) {
        ctx->pc = 0x2FCB34u;
            // 0x2fcb34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCB38u;
        goto label_2fcb38;
    }
    ctx->pc = 0x2FCB30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FCB38u);
        ctx->pc = 0x2FCB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCB30u;
            // 0x2fcb34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FCB38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FCB38u; }
            if (ctx->pc != 0x2FCB38u) { return; }
        }
        }
    }
    ctx->pc = 0x2FCB38u;
label_2fcb38:
    // 0x2fcb38: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fcb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fcb3c:
    // 0x2fcb3c: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x2fcb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_2fcb40:
    // 0x2fcb40: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fcb40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fcb44:
    // 0x2fcb44: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fcb44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fcb48:
    // 0x2fcb48: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fcb48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fcb4c:
    // 0x2fcb4c: 0x320f809  jalr        $t9
label_2fcb50:
    if (ctx->pc == 0x2FCB50u) {
        ctx->pc = 0x2FCB50u;
            // 0x2fcb50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCB54u;
        goto label_2fcb54;
    }
    ctx->pc = 0x2FCB4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FCB54u);
        ctx->pc = 0x2FCB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCB4Cu;
            // 0x2fcb50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FCB54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FCB54u; }
            if (ctx->pc != 0x2FCB54u) { return; }
        }
        }
    }
    ctx->pc = 0x2FCB54u;
label_2fcb54:
    // 0x2fcb54: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fcb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fcb58:
    // 0x2fcb58: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x2fcb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_2fcb5c:
    // 0x2fcb5c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fcb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fcb60:
    // 0x2fcb60: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fcb60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fcb64:
    // 0x2fcb64: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fcb64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fcb68:
    // 0x2fcb68: 0x320f809  jalr        $t9
label_2fcb6c:
    if (ctx->pc == 0x2FCB6Cu) {
        ctx->pc = 0x2FCB6Cu;
            // 0x2fcb6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCB70u;
        goto label_2fcb70;
    }
    ctx->pc = 0x2FCB68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FCB70u);
        ctx->pc = 0x2FCB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCB68u;
            // 0x2fcb6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FCB70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FCB70u; }
            if (ctx->pc != 0x2FCB70u) { return; }
        }
        }
    }
    ctx->pc = 0x2FCB70u;
label_2fcb70:
    // 0x2fcb70: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fcb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fcb74:
    // 0x2fcb74: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x2fcb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_2fcb78:
    // 0x2fcb78: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fcb78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fcb7c:
    // 0x2fcb7c: 0xae60035c  sw          $zero, 0x35C($s3)
    ctx->pc = 0x2fcb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 860), GPR_U32(ctx, 0));
label_2fcb80:
    // 0x2fcb80: 0xae600364  sw          $zero, 0x364($s3)
    ctx->pc = 0x2fcb80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 868), GPR_U32(ctx, 0));
label_2fcb84:
    // 0x2fcb84: 0xae600360  sw          $zero, 0x360($s3)
    ctx->pc = 0x2fcb84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 864), GPR_U32(ctx, 0));
label_2fcb88:
    // 0x2fcb88: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fcb88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fcb8c:
    // 0x2fcb8c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fcb8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fcb90:
    // 0x2fcb90: 0x320f809  jalr        $t9
label_2fcb94:
    if (ctx->pc == 0x2FCB94u) {
        ctx->pc = 0x2FCB94u;
            // 0x2fcb94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCB98u;
        goto label_2fcb98;
    }
    ctx->pc = 0x2FCB90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FCB98u);
        ctx->pc = 0x2FCB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCB90u;
            // 0x2fcb94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FCB98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FCB98u; }
            if (ctx->pc != 0x2FCB98u) { return; }
        }
        }
    }
    ctx->pc = 0x2FCB98u;
label_2fcb98:
    // 0x2fcb98: 0xaf939fa8  sw          $s3, -0x6058($gp)
    ctx->pc = 0x2fcb98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942632), GPR_U32(ctx, 19));
label_2fcb9c:
    // 0x2fcb9c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fcb9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fcba0:
    // 0x2fcba0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fcba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fcba4:
    // 0x2fcba4: 0x320f809  jalr        $t9
label_2fcba8:
    if (ctx->pc == 0x2FCBA8u) {
        ctx->pc = 0x2FCBA8u;
            // 0x2fcba8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCBACu;
        goto label_2fcbac;
    }
    ctx->pc = 0x2FCBA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FCBACu);
        ctx->pc = 0x2FCBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCBA4u;
            // 0x2fcba8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FCBACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FCBACu; }
            if (ctx->pc != 0x2FCBACu) { return; }
        }
        }
    }
    ctx->pc = 0x2FCBACu;
label_2fcbac:
    // 0x2fcbac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fcbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fcbb0:
    // 0x2fcbb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fcbb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fcbb4:
    // 0x2fcbb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fcbb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fcbb8:
    // 0x2fcbb8: 0xc0524dc  jal         func_149370
label_2fcbbc:
    if (ctx->pc == 0x2FCBBCu) {
        ctx->pc = 0x2FCBBCu;
            // 0x2fcbbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCBC0u;
        goto label_2fcbc0;
    }
    ctx->pc = 0x2FCBB8u;
    SET_GPR_U32(ctx, 31, 0x2FCBC0u);
    ctx->pc = 0x2FCBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCBB8u;
            // 0x2fcbbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCBC0u; }
        if (ctx->pc != 0x2FCBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCBC0u; }
        if (ctx->pc != 0x2FCBC0u) { return; }
    }
    ctx->pc = 0x2FCBC0u;
label_2fcbc0:
    // 0x2fcbc0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2fcbc4:
    if (ctx->pc == 0x2FCBC4u) {
        ctx->pc = 0x2FCBC8u;
        goto label_2fcbc8;
    }
    ctx->pc = 0x2FCBC0u;
    {
        const bool branch_taken_0x2fcbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fcbc0) {
            ctx->pc = 0x2FCC04u;
            goto label_2fcc04;
        }
    }
    ctx->pc = 0x2FCBC8u;
label_2fcbc8:
    // 0x2fcbc8: 0x8f849fa8  lw          $a0, -0x6058($gp)
    ctx->pc = 0x2fcbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942632)));
label_2fcbcc:
    // 0x2fcbcc: 0x3c0701f6  lui         $a3, 0x1F6
    ctx->pc = 0x2fcbccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)502 << 16));
label_2fcbd0:
    // 0x2fcbd0: 0x24e79880  addiu       $a3, $a3, -0x6780
    ctx->pc = 0x2fcbd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940800));
label_2fcbd4:
    // 0x2fcbd4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2fcbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_2fcbd8:
    // 0x2fcbd8: 0x8f8a9f9c  lw          $t2, -0x6064($gp)
    ctx->pc = 0x2fcbd8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942620)));
label_2fcbdc:
    // 0x2fcbdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fcbdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fcbe0:
    // 0x2fcbe0: 0x24c61df8  addiu       $a2, $a2, 0x1DF8
    ctx->pc = 0x2fcbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7672));
label_2fcbe4:
    // 0x2fcbe4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2fcbe4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2fcbe8:
    // 0x2fcbe8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2fcbe8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2fcbec:
    // 0x2fcbec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fcbecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fcbf0:
    // 0x2fcbf0: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x2fcbf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_2fcbf4:
    // 0x2fcbf4: 0x320f809  jalr        $t9
label_2fcbf8:
    if (ctx->pc == 0x2FCBF8u) {
        ctx->pc = 0x2FCBF8u;
            // 0x2fcbf8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCBFCu;
        goto label_2fcbfc;
    }
    ctx->pc = 0x2FCBF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FCBFCu);
        ctx->pc = 0x2FCBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCBF4u;
            // 0x2fcbf8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FCBFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FCBFCu; }
            if (ctx->pc != 0x2FCBFCu) { return; }
        }
        }
    }
    ctx->pc = 0x2FCBFCu;
label_2fcbfc:
    // 0x2fcbfc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2fcc00:
    if (ctx->pc == 0x2FCC00u) {
        ctx->pc = 0x2FCC04u;
        goto label_2fcc04;
    }
    ctx->pc = 0x2FCBFCu;
    {
        const bool branch_taken_0x2fcbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fcbfc) {
            ctx->pc = 0x2FCC08u;
            goto label_2fcc08;
        }
    }
    ctx->pc = 0x2FCC04u;
label_2fcc04:
    // 0x2fcc04: 0xaf809fa8  sw          $zero, -0x6058($gp)
    ctx->pc = 0x2fcc04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942632), GPR_U32(ctx, 0));
label_2fcc08:
    // 0x2fcc08: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2fcc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2fcc0c:
    // 0x2fcc0c: 0xc0635f0  jal         func_18D7C0
label_2fcc10:
    if (ctx->pc == 0x2FCC10u) {
        ctx->pc = 0x2FCC14u;
        goto label_2fcc14;
    }
    ctx->pc = 0x2FCC0Cu;
    SET_GPR_U32(ctx, 31, 0x2FCC14u);
    ctx->pc = 0x18D7C0u;
    if (runtime->hasFunction(0x18D7C0u)) {
        auto targetFn = runtime->lookupFunction(0x18D7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCC14u; }
        if (ctx->pc != 0x2FCC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeAllStop__Fi_0x18d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCC14u; }
        if (ctx->pc != 0x2FCC14u) { return; }
    }
    ctx->pc = 0x2FCC14u;
label_2fcc14:
    // 0x2fcc14: 0xc0635f0  jal         func_18D7C0
label_2fcc18:
    if (ctx->pc == 0x2FCC18u) {
        ctx->pc = 0x2FCC18u;
            // 0x2fcc18: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2FCC1Cu;
        goto label_2fcc1c;
    }
    ctx->pc = 0x2FCC14u;
    SET_GPR_U32(ctx, 31, 0x2FCC1Cu);
    ctx->pc = 0x2FCC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCC14u;
            // 0x2fcc18: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D7C0u;
    if (runtime->hasFunction(0x18D7C0u)) {
        auto targetFn = runtime->lookupFunction(0x18D7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCC1Cu; }
        if (ctx->pc != 0x2FCC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeAllStop__Fi_0x18d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCC1Cu; }
        if (ctx->pc != 0x2FCC1Cu) { return; }
    }
    ctx->pc = 0x2FCC1Cu;
label_2fcc1c:
    // 0x2fcc1c: 0x8f849f78  lw          $a0, -0x6088($gp)
    ctx->pc = 0x2fcc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942584)));
label_2fcc20:
    // 0x2fcc20: 0xc063930  jal         func_18E4C0
label_2fcc24:
    if (ctx->pc == 0x2FCC24u) {
        ctx->pc = 0x2FCC24u;
            // 0x2fcc24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCC28u;
        goto label_2fcc28;
    }
    ctx->pc = 0x2FCC20u;
    SET_GPR_U32(ctx, 31, 0x2FCC28u);
    ctx->pc = 0x2FCC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCC20u;
            // 0x2fcc24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E4C0u;
    if (runtime->hasFunction(0x18E4C0u)) {
        auto targetFn = runtime->lookupFunction(0x18E4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCC28u; }
        if (ctx->pc != 0x2FCC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeCheck__FUii_0x18e4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCC28u; }
        if (ctx->pc != 0x2FCC28u) { return; }
    }
    ctx->pc = 0x2FCC28u;
label_2fcc28:
    // 0x2fcc28: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_2fcc2c:
    if (ctx->pc == 0x2FCC2Cu) {
        ctx->pc = 0x2FCC2Cu;
            // 0x2fcc2c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2FCC30u;
        goto label_2fcc30;
    }
    ctx->pc = 0x2FCC28u;
    {
        const bool branch_taken_0x2fcc28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCC28u;
            // 0x2fcc2c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcc28) {
            ctx->pc = 0x2FCCC8u;
            goto label_2fccc8;
        }
    }
    ctx->pc = 0x2FCC30u;
label_2fcc30:
    // 0x2fcc30: 0xc04e640  jal         func_139900
label_2fcc34:
    if (ctx->pc == 0x2FCC34u) {
        ctx->pc = 0x2FCC38u;
        goto label_2fcc38;
    }
    ctx->pc = 0x2FCC30u;
    SET_GPR_U32(ctx, 31, 0x2FCC38u);
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCC38u; }
        if (ctx->pc != 0x2FCC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCC38u; }
        if (ctx->pc != 0x2FCC38u) { return; }
    }
    ctx->pc = 0x2FCC38u;
label_2fcc38:
    // 0x2fcc38: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fcc38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fcc3c:
    // 0x2fcc3c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fcc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2fcc40:
    // 0x2fcc40: 0x8c239d58  lw          $v1, -0x62A8($at)
    ctx->pc = 0x2fcc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942040)));
label_2fcc44:
    // 0x2fcc44: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fcc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fcc48:
    // 0x2fcc48: 0x8c259d54  lw          $a1, -0x62AC($at)
    ctx->pc = 0x2fcc48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942036)));
label_2fcc4c:
    // 0x2fcc4c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fcc4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fcc50:
    // 0x2fcc50: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2fcc50u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2fcc54:
    // 0x2fcc54: 0x8c229d50  lw          $v0, -0x62B0($at)
    ctx->pc = 0x2fcc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942032)));
label_2fcc58:
    // 0x2fcc58: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2fcc58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2fcc5c:
    // 0x2fcc5c: 0xc04e79c  jal         func_139E70
label_2fcc60:
    if (ctx->pc == 0x2FCC60u) {
        ctx->pc = 0x2FCC60u;
            // 0x2fcc60: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FCC64u;
        goto label_2fcc64;
    }
    ctx->pc = 0x2FCC5Cu;
    SET_GPR_U32(ctx, 31, 0x2FCC64u);
    ctx->pc = 0x2FCC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCC5Cu;
            // 0x2fcc60: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCC64u; }
        if (ctx->pc != 0x2FCC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCC64u; }
        if (ctx->pc != 0x2FCC64u) { return; }
    }
    ctx->pc = 0x2FCC64u;
label_2fcc64:
    // 0x2fcc64: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fcc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2fcc68:
    // 0x2fcc68: 0xc04e704  jal         func_139C10
label_2fcc6c:
    if (ctx->pc == 0x2FCC6Cu) {
        ctx->pc = 0x2FCC6Cu;
            // 0x2fcc6c: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->pc = 0x2FCC70u;
        goto label_2fcc70;
    }
    ctx->pc = 0x2FCC68u;
    SET_GPR_U32(ctx, 31, 0x2FCC70u);
    ctx->pc = 0x2FCC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCC68u;
            // 0x2fcc6c: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCC70u; }
        if (ctx->pc != 0x2FCC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCC70u; }
        if (ctx->pc != 0x2FCC70u) { return; }
    }
    ctx->pc = 0x2FCC70u;
label_2fcc70:
    // 0x2fcc70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fcc70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fcc74:
    // 0x2fcc74: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_2fcc78:
    if (ctx->pc == 0x2FCC78u) {
        ctx->pc = 0x2FCC78u;
            // 0x2fcc78: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2FCC7Cu;
        goto label_2fcc7c;
    }
    ctx->pc = 0x2FCC74u;
    {
        const bool branch_taken_0x2fcc74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCC74u;
            // 0x2fcc78: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcc74) {
            ctx->pc = 0x2FCCC8u;
            goto label_2fccc8;
        }
    }
    ctx->pc = 0x2FCC7Cu;
label_2fcc7c:
    // 0x2fcc7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fcc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fcc80:
    // 0x2fcc80: 0x24841e20  addiu       $a0, $a0, 0x1E20
    ctx->pc = 0x2fcc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7712));
label_2fcc84:
    // 0x2fcc84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fcc84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fcc88:
    // 0x2fcc88: 0xc0524dc  jal         func_149370
label_2fcc8c:
    if (ctx->pc == 0x2FCC8Cu) {
        ctx->pc = 0x2FCC8Cu;
            // 0x2fcc8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCC90u;
        goto label_2fcc90;
    }
    ctx->pc = 0x2FCC88u;
    SET_GPR_U32(ctx, 31, 0x2FCC90u);
    ctx->pc = 0x2FCC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCC88u;
            // 0x2fcc8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCC90u; }
        if (ctx->pc != 0x2FCC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCC90u; }
        if (ctx->pc != 0x2FCC90u) { return; }
    }
    ctx->pc = 0x2FCC90u;
label_2fcc90:
    // 0x2fcc90: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2fcc94:
    if (ctx->pc == 0x2FCC94u) {
        ctx->pc = 0x2FCC94u;
            // 0x2fcc94: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2FCC98u;
        goto label_2fcc98;
    }
    ctx->pc = 0x2FCC90u;
    {
        const bool branch_taken_0x2fcc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCC90u;
            // 0x2fcc94: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcc90) {
            ctx->pc = 0x2FCCC8u;
            goto label_2fccc8;
        }
    }
    ctx->pc = 0x2FCC98u;
label_2fcc98:
    // 0x2fcc98: 0xc06334c  jal         func_18CD30
label_2fcc9c:
    if (ctx->pc == 0x2FCC9Cu) {
        ctx->pc = 0x2FCCA0u;
        goto label_2fcca0;
    }
    ctx->pc = 0x2FCC98u;
    SET_GPR_U32(ctx, 31, 0x2FCCA0u);
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCCA0u; }
        if (ctx->pc != 0x2FCCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCCA0u; }
        if (ctx->pc != 0x2FCCA0u) { return; }
    }
    ctx->pc = 0x2FCCA0u;
label_2fcca0:
    // 0x2fcca0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fcca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fcca4:
    // 0x2fcca4: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x2fcca4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
label_2fcca8:
    // 0x2fcca8: 0xac2098d4  sw          $zero, -0x672C($at)
    ctx->pc = 0x2fcca8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940884), GPR_U32(ctx, 0));
label_2fccac:
    // 0x2fccac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fccacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fccb0:
    // 0x2fccb0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fccb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fccb4:
    // 0x2fccb4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2fccb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2fccb8:
    // 0x2fccb8: 0x24c698b0  addiu       $a2, $a2, -0x6750
    ctx->pc = 0x2fccb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940848));
label_2fccbc:
    // 0x2fccbc: 0xc06368c  jal         func_18DA30
label_2fccc0:
    if (ctx->pc == 0x2FCCC0u) {
        ctx->pc = 0x2FCCC0u;
            // 0x2fccc0: 0xac2098cc  sw          $zero, -0x6734($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294940876), GPR_U32(ctx, 0));
        ctx->pc = 0x2FCCC4u;
        goto label_2fccc4;
    }
    ctx->pc = 0x2FCCBCu;
    SET_GPR_U32(ctx, 31, 0x2FCCC4u);
    ctx->pc = 0x2FCCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCCBCu;
            // 0x2fccc0: 0xac2098cc  sw          $zero, -0x6734($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294940876), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA30u;
    if (runtime->hasFunction(0x18DA30u)) {
        auto targetFn = runtime->lookupFunction(0x18DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCCC4u; }
        if (ctx->pc != 0x2FCCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndLoadSound__FiPUiP9mgCMemory_0x18da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCCC4u; }
        if (ctx->pc != 0x2FCCC4u) { return; }
    }
    ctx->pc = 0x2FCCC4u;
label_2fccc4:
    // 0x2fccc4: 0xaf829f78  sw          $v0, -0x6088($gp)
    ctx->pc = 0x2fccc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942584), GPR_U32(ctx, 2));
label_2fccc8:
    // 0x2fccc8: 0xaf809fd8  sw          $zero, -0x6028($gp)
    ctx->pc = 0x2fccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942680), GPR_U32(ctx, 0));
label_2fcccc:
    // 0x2fcccc: 0xc064220  jal         func_190880
label_2fccd0:
    if (ctx->pc == 0x2FCCD0u) {
        ctx->pc = 0x2FCCD0u;
            // 0x2fccd0: 0xaf809fdc  sw          $zero, -0x6024($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942684), GPR_U32(ctx, 0));
        ctx->pc = 0x2FCCD4u;
        goto label_2fccd4;
    }
    ctx->pc = 0x2FCCCCu;
    SET_GPR_U32(ctx, 31, 0x2FCCD4u);
    ctx->pc = 0x2FCCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCCCCu;
            // 0x2fccd0: 0xaf809fdc  sw          $zero, -0x6024($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942684), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCCD4u; }
        if (ctx->pc != 0x2FCCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCCD4u; }
        if (ctx->pc != 0x2FCCD4u) { return; }
    }
    ctx->pc = 0x2FCCD4u;
label_2fccd4:
    // 0x2fccd4: 0x8e032e60  lw          $v1, 0x2E60($s0)
    ctx->pc = 0x2fccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11872)));
label_2fccd8:
    // 0x2fccd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fccd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fccdc:
    // 0x2fccdc: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x2fccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_2fcce0:
    // 0x2fcce0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_2fcce4:
    if (ctx->pc == 0x2FCCE4u) {
        ctx->pc = 0x2FCCE4u;
            // 0x2fcce4: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x2FCCE8u;
        goto label_2fcce8;
    }
    ctx->pc = 0x2FCCE0u;
    {
        const bool branch_taken_0x2fcce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FCCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCCE0u;
            // 0x2fcce4: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcce0) {
            ctx->pc = 0x2FCD18u;
            goto label_2fcd18;
        }
    }
    ctx->pc = 0x2FCCE8u;
label_2fcce8:
    // 0x2fcce8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fcce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fccec:
    // 0x2fccec: 0xc0bd920  jal         func_2F6480
label_2fccf0:
    if (ctx->pc == 0x2FCCF0u) {
        ctx->pc = 0x2FCCF0u;
            // 0x2fccf0: 0x240500eb  addiu       $a1, $zero, 0xEB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
        ctx->pc = 0x2FCCF4u;
        goto label_2fccf4;
    }
    ctx->pc = 0x2FCCECu;
    SET_GPR_U32(ctx, 31, 0x2FCCF4u);
    ctx->pc = 0x2FCCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCCECu;
            // 0x2fccf0: 0x240500eb  addiu       $a1, $zero, 0xEB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCCF4u; }
        if (ctx->pc != 0x2FCCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCCF4u; }
        if (ctx->pc != 0x2FCCF4u) { return; }
    }
    ctx->pc = 0x2FCCF4u;
label_2fccf4:
    // 0x2fccf4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2fccf8:
    if (ctx->pc == 0x2FCCF8u) {
        ctx->pc = 0x2FCCF8u;
            // 0x2fccf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCCFCu;
        goto label_2fccfc;
    }
    ctx->pc = 0x2FCCF4u;
    {
        const bool branch_taken_0x2fccf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCCF4u;
            // 0x2fccf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fccf4) {
            ctx->pc = 0x2FCD14u;
            goto label_2fcd14;
        }
    }
    ctx->pc = 0x2FCCFCu;
label_2fccfc:
    // 0x2fccfc: 0xc0bd920  jal         func_2F6480
label_2fcd00:
    if (ctx->pc == 0x2FCD00u) {
        ctx->pc = 0x2FCD00u;
            // 0x2fcd00: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->pc = 0x2FCD04u;
        goto label_2fcd04;
    }
    ctx->pc = 0x2FCCFCu;
    SET_GPR_U32(ctx, 31, 0x2FCD04u);
    ctx->pc = 0x2FCD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCCFCu;
            // 0x2fcd00: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD04u; }
        if (ctx->pc != 0x2FCD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD04u; }
        if (ctx->pc != 0x2FCD04u) { return; }
    }
    ctx->pc = 0x2FCD04u;
label_2fcd04:
    // 0x2fcd04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2fcd08:
    if (ctx->pc == 0x2FCD08u) {
        ctx->pc = 0x2FCD08u;
            // 0x2fcd08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FCD0Cu;
        goto label_2fcd0c;
    }
    ctx->pc = 0x2FCD04u;
    {
        const bool branch_taken_0x2fcd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCD04u;
            // 0x2fcd08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcd04) {
            ctx->pc = 0x2FCD14u;
            goto label_2fcd14;
        }
    }
    ctx->pc = 0x2FCD0Cu;
label_2fcd0c:
    // 0x2fcd0c: 0xaf809fdc  sw          $zero, -0x6024($gp)
    ctx->pc = 0x2fcd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942684), GPR_U32(ctx, 0));
label_2fcd10:
    // 0x2fcd10: 0xaf829fd8  sw          $v0, -0x6028($gp)
    ctx->pc = 0x2fcd10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942680), GPR_U32(ctx, 2));
label_2fcd14:
    // 0x2fcd14: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2fcd14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2fcd18:
    // 0x2fcd18: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2fcd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2fcd1c:
    // 0x2fcd1c: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x2fcd1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
label_2fcd20:
    // 0x2fcd20: 0xc06749c  jal         func_19D270
label_2fcd24:
    if (ctx->pc == 0x2FCD24u) {
        ctx->pc = 0x2FCD24u;
            // 0x2fcd24: 0x2212021  addu        $a0, $s1, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
        ctx->pc = 0x2FCD28u;
        goto label_2fcd28;
    }
    ctx->pc = 0x2FCD20u;
    SET_GPR_U32(ctx, 31, 0x2FCD28u);
    ctx->pc = 0x2FCD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCD20u;
            // 0x2fcd24: 0x2212021  addu        $a0, $s1, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D270u;
    if (runtime->hasFunction(0x19D270u)) {
        auto targetFn = runtime->lookupFunction(0x19D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD28u; }
        if (ctx->pc != 0x2FCD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRodStatus__16CUserDataManagerFPi_0x19d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD28u; }
        if (ctx->pc != 0x2FCD28u) { return; }
    }
    ctx->pc = 0x2FCD28u;
label_2fcd28:
    // 0x2fcd28: 0x8faa00d0  lw          $t2, 0xD0($sp)
    ctx->pc = 0x2fcd28u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2fcd2c:
    // 0x2fcd2c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fcd2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fcd30:
    // 0x2fcd30: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2fcd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2fcd34:
    // 0x2fcd34: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2fcd34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_2fcd38:
    // 0x2fcd38: 0x8fa900d4  lw          $t1, 0xD4($sp)
    ctx->pc = 0x2fcd38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_2fcd3c:
    // 0x2fcd3c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x2fcd3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2fcd40:
    // 0x2fcd40: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2fcd40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_2fcd44:
    // 0x2fcd44: 0x8fa800d8  lw          $t0, 0xD8($sp)
    ctx->pc = 0x2fcd44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_2fcd48:
    // 0x2fcd48: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2fcd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_2fcd4c:
    // 0x2fcd4c: 0x8fa700dc  lw          $a3, 0xDC($sp)
    ctx->pc = 0x2fcd4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_2fcd50:
    // 0x2fcd50: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2fcd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2fcd54:
    // 0x2fcd54: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x2fcd54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2fcd58:
    // 0x2fcd58: 0xac2a9ce0  sw          $t2, -0x6320($at)
    ctx->pc = 0x2fcd58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941920), GPR_U32(ctx, 10));
label_2fcd5c:
    // 0x2fcd5c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2fcd5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2fcd60:
    // 0x2fcd60: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fcd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fcd64:
    // 0x2fcd64: 0xac299ce4  sw          $t1, -0x631C($at)
    ctx->pc = 0x2fcd64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941924), GPR_U32(ctx, 9));
label_2fcd68:
    // 0x2fcd68: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2fcd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2fcd6c:
    // 0x2fcd6c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fcd6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fcd70:
    // 0x2fcd70: 0xac289ce8  sw          $t0, -0x6318($at)
    ctx->pc = 0x2fcd70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941928), GPR_U32(ctx, 8));
label_2fcd74:
    // 0x2fcd74: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fcd74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2fcd78:
    // 0x2fcd78: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fcd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fcd7c:
    // 0x2fcd7c: 0xac279cec  sw          $a3, -0x6314($at)
    ctx->pc = 0x2fcd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941932), GPR_U32(ctx, 7));
label_2fcd80:
    // 0x2fcd80: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2fcd80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2fcd84:
    // 0x2fcd84: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fcd84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fcd88:
    // 0x2fcd88: 0xac269cf0  sw          $a2, -0x6310($at)
    ctx->pc = 0x2fcd88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941936), GPR_U32(ctx, 6));
label_2fcd8c:
    // 0x2fcd8c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fcd8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fcd90:
    // 0x2fcd90: 0xc4239cec  lwc1        $f3, -0x6314($at)
    ctx->pc = 0x2fcd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2fcd94:
    // 0x2fcd94: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2fcd94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_2fcd98:
    // 0x2fcd98: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fcd98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fcd9c:
    // 0x2fcd9c: 0x460518c3  div.s       $f3, $f3, $f5
    ctx->pc = 0x2fcd9cu;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[5]); }
label_2fcda0:
    // 0x2fcda0: 0xc4209ce0  lwc1        $f0, -0x6320($at)
    ctx->pc = 0x2fcda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fcda4:
    // 0x2fcda4: 0x46031502  mul.s       $f20, $f2, $f3
    ctx->pc = 0x2fcda4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_2fcda8:
    // 0x2fcda8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fcda8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2fcdac:
    // 0x2fcdac: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x2fcdacu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_2fcdb0:
    // 0x2fcdb0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2fcdb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2fcdb4:
    // 0x2fcdb4: 0xc0a248c  jal         func_289230
label_2fcdb8:
    if (ctx->pc == 0x2FCDB8u) {
        ctx->pc = 0x2FCDB8u;
            // 0x2fcdb8: 0x46002300  add.s       $f12, $f4, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->pc = 0x2FCDBCu;
        goto label_2fcdbc;
    }
    ctx->pc = 0x2FCDB4u;
    SET_GPR_U32(ctx, 31, 0x2FCDBCu);
    ctx->pc = 0x2FCDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCDB4u;
            // 0x2fcdb8: 0x46002300  add.s       $f12, $f4, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCDBCu; }
        if (ctx->pc != 0x2FCDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCDBCu; }
        if (ctx->pc != 0x2FCDBCu) { return; }
    }
    ctx->pc = 0x2FCDBCu;
label_2fcdbc:
    // 0x2fcdbc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fcdbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fcdc0:
    // 0x2fcdc0: 0xac229ce0  sw          $v0, -0x6320($at)
    ctx->pc = 0x2fcdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941920), GPR_U32(ctx, 2));
label_2fcdc4:
    // 0x2fcdc4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fcdc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fcdc8:
    // 0x2fcdc8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2fcdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2fcdcc:
    // 0x2fcdcc: 0xc4219ce4  lwc1        $f1, -0x631C($at)
    ctx->pc = 0x2fcdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fcdd0:
    // 0x2fcdd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fcdd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fcdd4:
    // 0x2fcdd4: 0x0  nop
    ctx->pc = 0x2fcdd4u;
    // NOP
label_2fcdd8:
    // 0x2fcdd8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2fcdd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2fcddc:
    // 0x2fcddc: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2fcddcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_2fcde0:
    // 0x2fcde0: 0xc0a248c  jal         func_289230
label_2fcde4:
    if (ctx->pc == 0x2FCDE4u) {
        ctx->pc = 0x2FCDE4u;
            // 0x2fcde4: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x2FCDE8u;
        goto label_2fcde8;
    }
    ctx->pc = 0x2FCDE0u;
    SET_GPR_U32(ctx, 31, 0x2FCDE8u);
    ctx->pc = 0x2FCDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCDE0u;
            // 0x2fcde4: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCDE8u; }
        if (ctx->pc != 0x2FCDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCDE8u; }
        if (ctx->pc != 0x2FCDE8u) { return; }
    }
    ctx->pc = 0x2FCDE8u;
label_2fcde8:
    // 0x2fcde8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fcde8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fcdec:
    // 0x2fcdec: 0xac229ce4  sw          $v0, -0x631C($at)
    ctx->pc = 0x2fcdecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941924), GPR_U32(ctx, 2));
label_2fcdf0:
    // 0x2fcdf0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fcdf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fcdf4:
    // 0x2fcdf4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2fcdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2fcdf8:
    // 0x2fcdf8: 0xc4219ce8  lwc1        $f1, -0x6318($at)
    ctx->pc = 0x2fcdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fcdfc:
    // 0x2fcdfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fcdfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fce00:
    // 0x2fce00: 0x0  nop
    ctx->pc = 0x2fce00u;
    // NOP
label_2fce04:
    // 0x2fce04: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2fce04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2fce08:
    // 0x2fce08: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2fce08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_2fce0c:
    // 0x2fce0c: 0xc0a248c  jal         func_289230
label_2fce10:
    if (ctx->pc == 0x2FCE10u) {
        ctx->pc = 0x2FCE10u;
            // 0x2fce10: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x2FCE14u;
        goto label_2fce14;
    }
    ctx->pc = 0x2FCE0Cu;
    SET_GPR_U32(ctx, 31, 0x2FCE14u);
    ctx->pc = 0x2FCE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCE0Cu;
            // 0x2fce10: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCE14u; }
        if (ctx->pc != 0x2FCE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCE14u; }
        if (ctx->pc != 0x2FCE14u) { return; }
    }
    ctx->pc = 0x2FCE14u;
label_2fce14:
    // 0x2fce14: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fce14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fce18:
    // 0x2fce18: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x2fce18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
label_2fce1c:
    // 0x2fce1c: 0xac229ce8  sw          $v0, -0x6318($at)
    ctx->pc = 0x2fce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941928), GPR_U32(ctx, 2));
label_2fce20:
    // 0x2fce20: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fce20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fce24:
    // 0x2fce24: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2fce24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2fce28:
    // 0x2fce28: 0xc4219cf0  lwc1        $f1, -0x6310($at)
    ctx->pc = 0x2fce28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fce2c:
    // 0x2fce2c: 0xaf83a008  sw          $v1, -0x5FF8($gp)
    ctx->pc = 0x2fce2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942728), GPR_U32(ctx, 3));
label_2fce30:
    // 0x2fce30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fce30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fce34:
    // 0x2fce34: 0x3c02c7c3  lui         $v0, 0xC7C3
    ctx->pc = 0x2fce34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51139 << 16));
label_2fce38:
    // 0x2fce38: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x2fce38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
label_2fce3c:
    // 0x2fce3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fce3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fce40:
    // 0x2fce40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2fce40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2fce44:
    // 0x2fce44: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2fce44u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2fce48:
    // 0x2fce48: 0x0  nop
    ctx->pc = 0x2fce48u;
    // NOP
label_2fce4c:
    // 0x2fce4c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fce4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fce50:
    // 0x2fce50: 0xc0c3e74  jal         func_30F9D0
label_2fce54:
    if (ctx->pc == 0x2FCE54u) {
        ctx->pc = 0x2FCE54u;
            // 0x2fce54: 0xe4209cf4  swc1        $f0, -0x630C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941940), bits); }
        ctx->pc = 0x2FCE58u;
        goto label_2fce58;
    }
    ctx->pc = 0x2FCE50u;
    SET_GPR_U32(ctx, 31, 0x2FCE58u);
    ctx->pc = 0x2FCE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCE50u;
            // 0x2fce54: 0xe4209cf4  swc1        $f0, -0x630C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941940), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x30F9D0u;
    if (runtime->hasFunction(0x30F9D0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCE58u; }
        if (ctx->pc != 0x2FCE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWaterLevel__Ff_0x30f9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCE58u; }
        if (ctx->pc != 0x2FCE58u) { return; }
    }
    ctx->pc = 0x2FCE58u;
label_2fce58:
    // 0x2fce58: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2fce58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2fce5c:
    // 0x2fce5c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2fce5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2fce60:
    // 0x2fce60: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2fce60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2fce64:
    // 0x2fce64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fce64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fce68:
    // 0x2fce68: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2fce68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2fce6c:
    // 0x2fce6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2fce6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2fce70:
    // 0x2fce70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fce70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fce74:
    // 0x2fce74: 0x3e00008  jr          $ra
label_2fce78:
    if (ctx->pc == 0x2FCE78u) {
        ctx->pc = 0x2FCE78u;
            // 0x2fce78: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x2FCE7Cu;
        goto label_fallthrough_0x2fce74;
    }
    ctx->pc = 0x2FCE74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCE74u;
            // 0x2fce78: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2fce74:
    ctx->pc = 0x2FCE7Cu;
}
