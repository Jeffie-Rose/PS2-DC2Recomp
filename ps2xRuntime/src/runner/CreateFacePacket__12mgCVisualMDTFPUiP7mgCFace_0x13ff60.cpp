#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateFacePacket__12mgCVisualMDTFPUiP7mgCFace
// Address: 0x13ff60 - 0x1404cc
void CreateFacePacket__12mgCVisualMDTFPUiP7mgCFace_0x13ff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateFacePacket__12mgCVisualMDTFPUiP7mgCFace_0x13ff60");
#endif

    switch (ctx->pc) {
        case 0x13ff60u: goto label_13ff60;
        case 0x13ff64u: goto label_13ff64;
        case 0x13ff68u: goto label_13ff68;
        case 0x13ff6cu: goto label_13ff6c;
        case 0x13ff70u: goto label_13ff70;
        case 0x13ff74u: goto label_13ff74;
        case 0x13ff78u: goto label_13ff78;
        case 0x13ff7cu: goto label_13ff7c;
        case 0x13ff80u: goto label_13ff80;
        case 0x13ff84u: goto label_13ff84;
        case 0x13ff88u: goto label_13ff88;
        case 0x13ff8cu: goto label_13ff8c;
        case 0x13ff90u: goto label_13ff90;
        case 0x13ff94u: goto label_13ff94;
        case 0x13ff98u: goto label_13ff98;
        case 0x13ff9cu: goto label_13ff9c;
        case 0x13ffa0u: goto label_13ffa0;
        case 0x13ffa4u: goto label_13ffa4;
        case 0x13ffa8u: goto label_13ffa8;
        case 0x13ffacu: goto label_13ffac;
        case 0x13ffb0u: goto label_13ffb0;
        case 0x13ffb4u: goto label_13ffb4;
        case 0x13ffb8u: goto label_13ffb8;
        case 0x13ffbcu: goto label_13ffbc;
        case 0x13ffc0u: goto label_13ffc0;
        case 0x13ffc4u: goto label_13ffc4;
        case 0x13ffc8u: goto label_13ffc8;
        case 0x13ffccu: goto label_13ffcc;
        case 0x13ffd0u: goto label_13ffd0;
        case 0x13ffd4u: goto label_13ffd4;
        case 0x13ffd8u: goto label_13ffd8;
        case 0x13ffdcu: goto label_13ffdc;
        case 0x13ffe0u: goto label_13ffe0;
        case 0x13ffe4u: goto label_13ffe4;
        case 0x13ffe8u: goto label_13ffe8;
        case 0x13ffecu: goto label_13ffec;
        case 0x13fff0u: goto label_13fff0;
        case 0x13fff4u: goto label_13fff4;
        case 0x13fff8u: goto label_13fff8;
        case 0x13fffcu: goto label_13fffc;
        case 0x140000u: goto label_140000;
        case 0x140004u: goto label_140004;
        case 0x140008u: goto label_140008;
        case 0x14000cu: goto label_14000c;
        case 0x140010u: goto label_140010;
        case 0x140014u: goto label_140014;
        case 0x140018u: goto label_140018;
        case 0x14001cu: goto label_14001c;
        case 0x140020u: goto label_140020;
        case 0x140024u: goto label_140024;
        case 0x140028u: goto label_140028;
        case 0x14002cu: goto label_14002c;
        case 0x140030u: goto label_140030;
        case 0x140034u: goto label_140034;
        case 0x140038u: goto label_140038;
        case 0x14003cu: goto label_14003c;
        case 0x140040u: goto label_140040;
        case 0x140044u: goto label_140044;
        case 0x140048u: goto label_140048;
        case 0x14004cu: goto label_14004c;
        case 0x140050u: goto label_140050;
        case 0x140054u: goto label_140054;
        case 0x140058u: goto label_140058;
        case 0x14005cu: goto label_14005c;
        case 0x140060u: goto label_140060;
        case 0x140064u: goto label_140064;
        case 0x140068u: goto label_140068;
        case 0x14006cu: goto label_14006c;
        case 0x140070u: goto label_140070;
        case 0x140074u: goto label_140074;
        case 0x140078u: goto label_140078;
        case 0x14007cu: goto label_14007c;
        case 0x140080u: goto label_140080;
        case 0x140084u: goto label_140084;
        case 0x140088u: goto label_140088;
        case 0x14008cu: goto label_14008c;
        case 0x140090u: goto label_140090;
        case 0x140094u: goto label_140094;
        case 0x140098u: goto label_140098;
        case 0x14009cu: goto label_14009c;
        case 0x1400a0u: goto label_1400a0;
        case 0x1400a4u: goto label_1400a4;
        case 0x1400a8u: goto label_1400a8;
        case 0x1400acu: goto label_1400ac;
        case 0x1400b0u: goto label_1400b0;
        case 0x1400b4u: goto label_1400b4;
        case 0x1400b8u: goto label_1400b8;
        case 0x1400bcu: goto label_1400bc;
        case 0x1400c0u: goto label_1400c0;
        case 0x1400c4u: goto label_1400c4;
        case 0x1400c8u: goto label_1400c8;
        case 0x1400ccu: goto label_1400cc;
        case 0x1400d0u: goto label_1400d0;
        case 0x1400d4u: goto label_1400d4;
        case 0x1400d8u: goto label_1400d8;
        case 0x1400dcu: goto label_1400dc;
        case 0x1400e0u: goto label_1400e0;
        case 0x1400e4u: goto label_1400e4;
        case 0x1400e8u: goto label_1400e8;
        case 0x1400ecu: goto label_1400ec;
        case 0x1400f0u: goto label_1400f0;
        case 0x1400f4u: goto label_1400f4;
        case 0x1400f8u: goto label_1400f8;
        case 0x1400fcu: goto label_1400fc;
        case 0x140100u: goto label_140100;
        case 0x140104u: goto label_140104;
        case 0x140108u: goto label_140108;
        case 0x14010cu: goto label_14010c;
        case 0x140110u: goto label_140110;
        case 0x140114u: goto label_140114;
        case 0x140118u: goto label_140118;
        case 0x14011cu: goto label_14011c;
        case 0x140120u: goto label_140120;
        case 0x140124u: goto label_140124;
        case 0x140128u: goto label_140128;
        case 0x14012cu: goto label_14012c;
        case 0x140130u: goto label_140130;
        case 0x140134u: goto label_140134;
        case 0x140138u: goto label_140138;
        case 0x14013cu: goto label_14013c;
        case 0x140140u: goto label_140140;
        case 0x140144u: goto label_140144;
        case 0x140148u: goto label_140148;
        case 0x14014cu: goto label_14014c;
        case 0x140150u: goto label_140150;
        case 0x140154u: goto label_140154;
        case 0x140158u: goto label_140158;
        case 0x14015cu: goto label_14015c;
        case 0x140160u: goto label_140160;
        case 0x140164u: goto label_140164;
        case 0x140168u: goto label_140168;
        case 0x14016cu: goto label_14016c;
        case 0x140170u: goto label_140170;
        case 0x140174u: goto label_140174;
        case 0x140178u: goto label_140178;
        case 0x14017cu: goto label_14017c;
        case 0x140180u: goto label_140180;
        case 0x140184u: goto label_140184;
        case 0x140188u: goto label_140188;
        case 0x14018cu: goto label_14018c;
        case 0x140190u: goto label_140190;
        case 0x140194u: goto label_140194;
        case 0x140198u: goto label_140198;
        case 0x14019cu: goto label_14019c;
        case 0x1401a0u: goto label_1401a0;
        case 0x1401a4u: goto label_1401a4;
        case 0x1401a8u: goto label_1401a8;
        case 0x1401acu: goto label_1401ac;
        case 0x1401b0u: goto label_1401b0;
        case 0x1401b4u: goto label_1401b4;
        case 0x1401b8u: goto label_1401b8;
        case 0x1401bcu: goto label_1401bc;
        case 0x1401c0u: goto label_1401c0;
        case 0x1401c4u: goto label_1401c4;
        case 0x1401c8u: goto label_1401c8;
        case 0x1401ccu: goto label_1401cc;
        case 0x1401d0u: goto label_1401d0;
        case 0x1401d4u: goto label_1401d4;
        case 0x1401d8u: goto label_1401d8;
        case 0x1401dcu: goto label_1401dc;
        case 0x1401e0u: goto label_1401e0;
        case 0x1401e4u: goto label_1401e4;
        case 0x1401e8u: goto label_1401e8;
        case 0x1401ecu: goto label_1401ec;
        case 0x1401f0u: goto label_1401f0;
        case 0x1401f4u: goto label_1401f4;
        case 0x1401f8u: goto label_1401f8;
        case 0x1401fcu: goto label_1401fc;
        case 0x140200u: goto label_140200;
        case 0x140204u: goto label_140204;
        case 0x140208u: goto label_140208;
        case 0x14020cu: goto label_14020c;
        case 0x140210u: goto label_140210;
        case 0x140214u: goto label_140214;
        case 0x140218u: goto label_140218;
        case 0x14021cu: goto label_14021c;
        case 0x140220u: goto label_140220;
        case 0x140224u: goto label_140224;
        case 0x140228u: goto label_140228;
        case 0x14022cu: goto label_14022c;
        case 0x140230u: goto label_140230;
        case 0x140234u: goto label_140234;
        case 0x140238u: goto label_140238;
        case 0x14023cu: goto label_14023c;
        case 0x140240u: goto label_140240;
        case 0x140244u: goto label_140244;
        case 0x140248u: goto label_140248;
        case 0x14024cu: goto label_14024c;
        case 0x140250u: goto label_140250;
        case 0x140254u: goto label_140254;
        case 0x140258u: goto label_140258;
        case 0x14025cu: goto label_14025c;
        case 0x140260u: goto label_140260;
        case 0x140264u: goto label_140264;
        case 0x140268u: goto label_140268;
        case 0x14026cu: goto label_14026c;
        case 0x140270u: goto label_140270;
        case 0x140274u: goto label_140274;
        case 0x140278u: goto label_140278;
        case 0x14027cu: goto label_14027c;
        case 0x140280u: goto label_140280;
        case 0x140284u: goto label_140284;
        case 0x140288u: goto label_140288;
        case 0x14028cu: goto label_14028c;
        case 0x140290u: goto label_140290;
        case 0x140294u: goto label_140294;
        case 0x140298u: goto label_140298;
        case 0x14029cu: goto label_14029c;
        case 0x1402a0u: goto label_1402a0;
        case 0x1402a4u: goto label_1402a4;
        case 0x1402a8u: goto label_1402a8;
        case 0x1402acu: goto label_1402ac;
        case 0x1402b0u: goto label_1402b0;
        case 0x1402b4u: goto label_1402b4;
        case 0x1402b8u: goto label_1402b8;
        case 0x1402bcu: goto label_1402bc;
        case 0x1402c0u: goto label_1402c0;
        case 0x1402c4u: goto label_1402c4;
        case 0x1402c8u: goto label_1402c8;
        case 0x1402ccu: goto label_1402cc;
        case 0x1402d0u: goto label_1402d0;
        case 0x1402d4u: goto label_1402d4;
        case 0x1402d8u: goto label_1402d8;
        case 0x1402dcu: goto label_1402dc;
        case 0x1402e0u: goto label_1402e0;
        case 0x1402e4u: goto label_1402e4;
        case 0x1402e8u: goto label_1402e8;
        case 0x1402ecu: goto label_1402ec;
        case 0x1402f0u: goto label_1402f0;
        case 0x1402f4u: goto label_1402f4;
        case 0x1402f8u: goto label_1402f8;
        case 0x1402fcu: goto label_1402fc;
        case 0x140300u: goto label_140300;
        case 0x140304u: goto label_140304;
        case 0x140308u: goto label_140308;
        case 0x14030cu: goto label_14030c;
        case 0x140310u: goto label_140310;
        case 0x140314u: goto label_140314;
        case 0x140318u: goto label_140318;
        case 0x14031cu: goto label_14031c;
        case 0x140320u: goto label_140320;
        case 0x140324u: goto label_140324;
        case 0x140328u: goto label_140328;
        case 0x14032cu: goto label_14032c;
        case 0x140330u: goto label_140330;
        case 0x140334u: goto label_140334;
        case 0x140338u: goto label_140338;
        case 0x14033cu: goto label_14033c;
        case 0x140340u: goto label_140340;
        case 0x140344u: goto label_140344;
        case 0x140348u: goto label_140348;
        case 0x14034cu: goto label_14034c;
        case 0x140350u: goto label_140350;
        case 0x140354u: goto label_140354;
        case 0x140358u: goto label_140358;
        case 0x14035cu: goto label_14035c;
        case 0x140360u: goto label_140360;
        case 0x140364u: goto label_140364;
        case 0x140368u: goto label_140368;
        case 0x14036cu: goto label_14036c;
        case 0x140370u: goto label_140370;
        case 0x140374u: goto label_140374;
        case 0x140378u: goto label_140378;
        case 0x14037cu: goto label_14037c;
        case 0x140380u: goto label_140380;
        case 0x140384u: goto label_140384;
        case 0x140388u: goto label_140388;
        case 0x14038cu: goto label_14038c;
        case 0x140390u: goto label_140390;
        case 0x140394u: goto label_140394;
        case 0x140398u: goto label_140398;
        case 0x14039cu: goto label_14039c;
        case 0x1403a0u: goto label_1403a0;
        case 0x1403a4u: goto label_1403a4;
        case 0x1403a8u: goto label_1403a8;
        case 0x1403acu: goto label_1403ac;
        case 0x1403b0u: goto label_1403b0;
        case 0x1403b4u: goto label_1403b4;
        case 0x1403b8u: goto label_1403b8;
        case 0x1403bcu: goto label_1403bc;
        case 0x1403c0u: goto label_1403c0;
        case 0x1403c4u: goto label_1403c4;
        case 0x1403c8u: goto label_1403c8;
        case 0x1403ccu: goto label_1403cc;
        case 0x1403d0u: goto label_1403d0;
        case 0x1403d4u: goto label_1403d4;
        case 0x1403d8u: goto label_1403d8;
        case 0x1403dcu: goto label_1403dc;
        case 0x1403e0u: goto label_1403e0;
        case 0x1403e4u: goto label_1403e4;
        case 0x1403e8u: goto label_1403e8;
        case 0x1403ecu: goto label_1403ec;
        case 0x1403f0u: goto label_1403f0;
        case 0x1403f4u: goto label_1403f4;
        case 0x1403f8u: goto label_1403f8;
        case 0x1403fcu: goto label_1403fc;
        case 0x140400u: goto label_140400;
        case 0x140404u: goto label_140404;
        case 0x140408u: goto label_140408;
        case 0x14040cu: goto label_14040c;
        case 0x140410u: goto label_140410;
        case 0x140414u: goto label_140414;
        case 0x140418u: goto label_140418;
        case 0x14041cu: goto label_14041c;
        case 0x140420u: goto label_140420;
        case 0x140424u: goto label_140424;
        case 0x140428u: goto label_140428;
        case 0x14042cu: goto label_14042c;
        case 0x140430u: goto label_140430;
        case 0x140434u: goto label_140434;
        case 0x140438u: goto label_140438;
        case 0x14043cu: goto label_14043c;
        case 0x140440u: goto label_140440;
        case 0x140444u: goto label_140444;
        case 0x140448u: goto label_140448;
        case 0x14044cu: goto label_14044c;
        case 0x140450u: goto label_140450;
        case 0x140454u: goto label_140454;
        case 0x140458u: goto label_140458;
        case 0x14045cu: goto label_14045c;
        case 0x140460u: goto label_140460;
        case 0x140464u: goto label_140464;
        case 0x140468u: goto label_140468;
        case 0x14046cu: goto label_14046c;
        case 0x140470u: goto label_140470;
        case 0x140474u: goto label_140474;
        case 0x140478u: goto label_140478;
        case 0x14047cu: goto label_14047c;
        case 0x140480u: goto label_140480;
        case 0x140484u: goto label_140484;
        case 0x140488u: goto label_140488;
        case 0x14048cu: goto label_14048c;
        case 0x140490u: goto label_140490;
        case 0x140494u: goto label_140494;
        case 0x140498u: goto label_140498;
        case 0x14049cu: goto label_14049c;
        case 0x1404a0u: goto label_1404a0;
        case 0x1404a4u: goto label_1404a4;
        case 0x1404a8u: goto label_1404a8;
        case 0x1404acu: goto label_1404ac;
        case 0x1404b0u: goto label_1404b0;
        case 0x1404b4u: goto label_1404b4;
        case 0x1404b8u: goto label_1404b8;
        case 0x1404bcu: goto label_1404bc;
        case 0x1404c0u: goto label_1404c0;
        case 0x1404c4u: goto label_1404c4;
        case 0x1404c8u: goto label_1404c8;
        default: break;
    }

    ctx->pc = 0x13ff60u;

label_13ff60:
    // 0x13ff60: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x13ff60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_13ff64:
    // 0x13ff64: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x13ff64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_13ff68:
    // 0x13ff68: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x13ff68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_13ff6c:
    // 0x13ff6c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13ff6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_13ff70:
    // 0x13ff70: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13ff70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_13ff74:
    // 0x13ff74: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13ff74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_13ff78:
    // 0x13ff78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13ff78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_13ff7c:
    // 0x13ff7c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x13ff7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13ff80:
    // 0x13ff80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13ff80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_13ff84:
    // 0x13ff84: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13ff84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13ff88:
    // 0x13ff88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13ff88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_13ff8c:
    // 0x13ff8c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x13ff8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13ff90:
    // 0x13ff90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13ff90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13ff94:
    // 0x13ff94: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_13ff98:
    if (ctx->pc == 0x13FF98u) {
        ctx->pc = 0x13FF98u;
            // 0x13ff98: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x13FF9Cu;
        goto label_13ff9c;
    }
    ctx->pc = 0x13FF94u;
    {
        const bool branch_taken_0x13ff94 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x13FF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FF94u;
            // 0x13ff98: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ff94) {
            ctx->pc = 0x13FFA4u;
            goto label_13ffa4;
        }
    }
    ctx->pc = 0x13FF9Cu;
label_13ff9c:
    // 0x13ff9c: 0x1000013f  b           . + 4 + (0x13F << 2)
label_13ffa0:
    if (ctx->pc == 0x13FFA0u) {
        ctx->pc = 0x13FFA0u;
            // 0x13ffa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13FFA4u;
        goto label_13ffa4;
    }
    ctx->pc = 0x13FF9Cu;
    {
        const bool branch_taken_0x13ff9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FF9Cu;
            // 0x13ffa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ff9c) {
            ctx->pc = 0x14049Cu;
            goto label_14049c;
        }
    }
    ctx->pc = 0x13FFA4u;
label_13ffa4:
    // 0x13ffa4: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x13ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_13ffa8:
    // 0x13ffa8: 0x2821824  and         $v1, $s4, $v0
    ctx->pc = 0x13ffa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
label_13ffac:
    // 0x13ffac: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x13ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_13ffb0:
    // 0x13ffb0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_13ffb4:
    if (ctx->pc == 0x13FFB4u) {
        ctx->pc = 0x13FFB4u;
            // 0x13ffb4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13FFB8u;
        goto label_13ffb8;
    }
    ctx->pc = 0x13FFB0u;
    {
        const bool branch_taken_0x13ffb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13FFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FFB0u;
            // 0x13ffb4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ffb0) {
            ctx->pc = 0x13FFBCu;
            goto label_13ffbc;
        }
    }
    ctx->pc = 0x13FFB8u;
label_13ffb8:
    // 0x13ffb8: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x13ffb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13ffbc:
    // 0x13ffbc: 0xafb400ac  sw          $s4, 0xAC($sp)
    ctx->pc = 0x13ffbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 20));
label_13ffc0:
    // 0x13ffc0: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x13ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
label_13ffc4:
    // 0x13ffc4: 0x96660000  lhu         $a2, 0x0($s3)
    ctx->pc = 0x13ffc4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_13ffc8:
    // 0x13ffc8: 0x34455556  ori         $a1, $v0, 0x5556
    ctx->pc = 0x13ffc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
label_13ffcc:
    // 0x13ffcc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x13ffccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13ffd0:
    // 0x13ffd0: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x13ffd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_13ffd4:
    // 0x13ffd4: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x13ffd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
label_13ffd8:
    // 0x13ffd8: 0x86710008  lh          $s1, 0x8($s3)
    ctx->pc = 0x13ffd8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
label_13ffdc:
    // 0x13ffdc: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x13ffdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_13ffe0:
    // 0x13ffe0: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x13ffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_13ffe4:
    // 0x13ffe4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x13ffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_13ffe8:
    // 0x13ffe8: 0x2482fffe  addiu       $v0, $a0, -0x2
    ctx->pc = 0x13ffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_13ffec:
    // 0x13ffec: 0xafa3011c  sw          $v1, 0x11C($sp)
    ctx->pc = 0x13ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
label_13fff0:
    // 0x13fff0: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x13fff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_13fff4:
    // 0x13fff4: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x13fff4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_13fff8:
    // 0x13fff8: 0x0  nop
    ctx->pc = 0x13fff8u;
    // NOP
label_13fffc:
    // 0x13fffc: 0x1810  mfhi        $v1
    ctx->pc = 0x13fffcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_140000:
    // 0x140000: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x140000u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_140004:
    // 0x140004: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x140004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_140008:
    // 0x140008: 0xa40018  mult        $zero, $a1, $a0
    ctx->pc = 0x140008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_14000c:
    // 0x14000c: 0x30430100  andi        $v1, $v0, 0x100
    ctx->pc = 0x14000cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_140010:
    // 0x140010: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x140010u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_140014:
    // 0x140014: 0x2010  mfhi        $a0
    ctx->pc = 0x140014u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_140018:
    // 0x140018: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x140018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_14001c:
    // 0x14001c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x14001cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_140020:
    // 0x140020: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_140024:
    if (ctx->pc == 0x140024u) {
        ctx->pc = 0x140024u;
            // 0x140024: 0x858021  addu        $s0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->pc = 0x140028u;
        goto label_140028;
    }
    ctx->pc = 0x140020u;
    {
        const bool branch_taken_0x140020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x140024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140020u;
            // 0x140024: 0x858021  addu        $s0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140020) {
            ctx->pc = 0x14006Cu;
            goto label_14006c;
        }
    }
    ctx->pc = 0x140028u;
label_140028:
    // 0x140028: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x140028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_14002c:
    // 0x14002c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x14002cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_140030:
    // 0x140030: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x140030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_140034:
    // 0x140034: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_140038:
    if (ctx->pc == 0x140038u) {
        ctx->pc = 0x140038u;
            // 0x140038: 0x32883  sra         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 2));
        ctx->pc = 0x14003Cu;
        goto label_14003c;
    }
    ctx->pc = 0x140034u;
    {
        const bool branch_taken_0x140034 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x140038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140034u;
            // 0x140038: 0x32883  sra         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140034) {
            ctx->pc = 0x140044u;
            goto label_140044;
        }
    }
    ctx->pc = 0x14003Cu;
label_14003c:
    // 0x14003c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x14003cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_140040:
    // 0x140040: 0x32883  sra         $a1, $v1, 2
    ctx->pc = 0x140040u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 2));
label_140044:
    // 0x140044: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x140044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
label_140048:
    // 0x140048: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x140048u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_14004c:
    // 0x14004c: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x14004cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
label_140050:
    // 0x140050: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x140050u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_140054:
    // 0x140054: 0x0  nop
    ctx->pc = 0x140054u;
    // NOP
label_140058:
    // 0x140058: 0x0  nop
    ctx->pc = 0x140058u;
    // NOP
label_14005c:
    // 0x14005c: 0x1810  mfhi        $v1
    ctx->pc = 0x14005cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_140060:
    // 0x140060: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x140060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_140064:
    // 0x140064: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x140064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_140068:
    // 0x140068: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x140068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14006c:
    // 0x14006c: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x14006cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_140070:
    // 0x140070: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_140074:
    if (ctx->pc == 0x140074u) {
        ctx->pc = 0x140078u;
        goto label_140078;
    }
    ctx->pc = 0x140070u;
    {
        const bool branch_taken_0x140070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x140070) {
            ctx->pc = 0x14007Cu;
            goto label_14007c;
        }
    }
    ctx->pc = 0x140078u;
label_140078:
    // 0x140078: 0x27de0002  addiu       $fp, $fp, 0x2
    ctx->pc = 0x140078u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
label_14007c:
    // 0x14007c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x14007cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_140080:
    // 0x140080: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_140084:
    if (ctx->pc == 0x140084u) {
        ctx->pc = 0x140084u;
            // 0x140084: 0x27a200e0  addiu       $v0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x140088u;
        goto label_140088;
    }
    ctx->pc = 0x140080u;
    {
        const bool branch_taken_0x140080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140080u;
            // 0x140084: 0x27a200e0  addiu       $v0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140080) {
            ctx->pc = 0x14008Cu;
            goto label_14008c;
        }
    }
    ctx->pc = 0x140088u;
label_140088:
    // 0x140088: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x140088u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_14008c:
    // 0x14008c: 0x2406ff7f  addiu       $a2, $zero, -0x81
    ctx->pc = 0x14008cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_140090:
    // 0x140090: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x140090u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
label_140094:
    // 0x140094: 0x64070080  daddiu      $a3, $zero, 0x80
    ctx->pc = 0x140094u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
label_140098:
    // 0x140098: 0x93a800e1  lbu         $t0, 0xE1($sp)
    ctx->pc = 0x140098u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 225)));
label_14009c:
    // 0x14009c: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x14009cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_1400a0:
    // 0x1400a0: 0x93a500e5  lbu         $a1, 0xE5($sp)
    ctx->pc = 0x1400a0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 229)));
label_1400a4:
    // 0x1400a4: 0x64040040  daddiu      $a0, $zero, 0x40
    ctx->pc = 0x1400a4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
label_1400a8:
    // 0x1400a8: 0x27a900e8  addiu       $t1, $sp, 0xE8
    ctx->pc = 0x1400a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_1400ac:
    // 0x1400ac: 0x27aa00f8  addiu       $t2, $sp, 0xF8
    ctx->pc = 0x1400acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_1400b0:
    // 0x1400b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1400b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1400b4:
    // 0x1400b4: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x1400b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
label_1400b8:
    // 0x1400b8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1400b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1400bc:
    // 0x1400bc: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1400bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1400c0:
    // 0x1400c0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1400c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1400c4:
    // 0x1400c4: 0xa3a600e1  sb          $a2, 0xE1($sp)
    ctx->pc = 0x1400c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 225), (uint8_t)GPR_U32(ctx, 6));
label_1400c8:
    // 0x1400c8: 0xa3a200e5  sb          $v0, 0xE5($sp)
    ctx->pc = 0x1400c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 229), (uint8_t)GPR_U32(ctx, 2));
label_1400cc:
    // 0x1400cc: 0xdfa200e0  ld          $v0, 0xE0($sp)
    ctx->pc = 0x1400ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_1400d0:
    // 0x1400d0: 0xffa200f0  sd          $v0, 0xF0($sp)
    ctx->pc = 0x1400d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 2));
label_1400d4:
    // 0x1400d4: 0xdd220000  ld          $v0, 0x0($t1)
    ctx->pc = 0x1400d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 0)));
label_1400d8:
    // 0x1400d8: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x1400d8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
label_1400dc:
    // 0x1400dc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1400dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1400e0:
    // 0x1400e0: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_1400e4:
    if (ctx->pc == 0x1400E4u) {
        ctx->pc = 0x1400E4u;
            // 0x1400e4: 0x6402005b  daddiu      $v0, $zero, 0x5B (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)91);
        ctx->pc = 0x1400E8u;
        goto label_1400e8;
    }
    ctx->pc = 0x1400E0u;
    {
        const bool branch_taken_0x1400e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1400E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1400E0u;
            // 0x1400e4: 0x6402005b  daddiu      $v0, $zero, 0x5B (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)91);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1400e0) {
            ctx->pc = 0x140120u;
            goto label_140120;
        }
    }
    ctx->pc = 0x1400E8u;
label_1400e8:
    // 0x1400e8: 0x6402005c  daddiu      $v0, $zero, 0x5C
    ctx->pc = 0x1400e8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)92);
label_1400ec:
    // 0x1400ec: 0xdfa500e0  ld          $a1, 0xE0($sp)
    ctx->pc = 0x1400ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_1400f0:
    // 0x1400f0: 0x223fc  dsll32      $a0, $v0, 15
    ctx->pc = 0x1400f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 15));
label_1400f4:
    // 0x1400f4: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x1400f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
label_1400f8:
    // 0x1400f8: 0x34437fff  ori         $v1, $v0, 0x7FFF
    ctx->pc = 0x1400f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_1400fc:
    // 0x1400fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1400fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_140100:
    // 0x140100: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x140100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_140104:
    // 0x140104: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x140104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_140108:
    // 0x140108: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x140108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_14010c:
    // 0x14010c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14010cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_140110:
    // 0x140110: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x140110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_140114:
    // 0x140114: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x140114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_140118:
    // 0x140118: 0x1000000d  b           . + 4 + (0xD << 2)
label_14011c:
    if (ctx->pc == 0x14011Cu) {
        ctx->pc = 0x14011Cu;
            // 0x14011c: 0xffa200e0  sd          $v0, 0xE0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 2));
        ctx->pc = 0x140120u;
        goto label_140120;
    }
    ctx->pc = 0x140118u;
    {
        const bool branch_taken_0x140118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14011Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140118u;
            // 0x14011c: 0xffa200e0  sd          $v0, 0xE0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140118) {
            ctx->pc = 0x140150u;
            goto label_140150;
        }
    }
    ctx->pc = 0x140120u;
label_140120:
    // 0x140120: 0xdfa500e0  ld          $a1, 0xE0($sp)
    ctx->pc = 0x140120u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_140124:
    // 0x140124: 0x223fc  dsll32      $a0, $v0, 15
    ctx->pc = 0x140124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 15));
label_140128:
    // 0x140128: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x140128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
label_14012c:
    // 0x14012c: 0x34437fff  ori         $v1, $v0, 0x7FFF
    ctx->pc = 0x14012cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_140130:
    // 0x140130: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x140130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_140134:
    // 0x140134: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x140134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_140138:
    // 0x140138: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x140138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_14013c:
    // 0x14013c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14013cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_140140:
    // 0x140140: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x140140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_140144:
    // 0x140144: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x140144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_140148:
    // 0x140148: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x140148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_14014c:
    // 0x14014c: 0xffa200e0  sd          $v0, 0xE0($sp)
    ctx->pc = 0x14014cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 2));
label_140150:
    // 0x140150: 0x93ad00e7  lbu         $t5, 0xE7($sp)
    ctx->pc = 0x140150u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 231)));
label_140154:
    // 0x140154: 0x2407ff0f  addiu       $a3, $zero, -0xF1
    ctx->pc = 0x140154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
label_140158:
    // 0x140158: 0x3c0bfc00  lui         $t3, 0xFC00
    ctx->pc = 0x140158u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)64512 << 16));
label_14015c:
    // 0x14015c: 0x6402005d  daddiu      $v0, $zero, 0x5D
    ctx->pc = 0x14015cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)93);
label_140160:
    // 0x140160: 0x356c7fff  ori         $t4, $t3, 0x7FFF
    ctx->pc = 0x140160u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32767);
label_140164:
    // 0x140164: 0x64080030  daddiu      $t0, $zero, 0x30
    ctx->pc = 0x140164u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)48);
label_140168:
    // 0x140168: 0x340bffff  ori         $t3, $zero, 0xFFFF
    ctx->pc = 0x140168u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_14016c:
    // 0x14016c: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x14016cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_140170:
    // 0x140170: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x140170u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
label_140174:
    // 0x140174: 0x64060002  daddiu      $a2, $zero, 0x2
    ctx->pc = 0x140174u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_140178:
    // 0x140178: 0x64040010  daddiu      $a0, $zero, 0x10
    ctx->pc = 0x140178u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
label_14017c:
    // 0x14017c: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x14017cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
label_140180:
    // 0x140180: 0x1a76824  and         $t5, $t5, $a3
    ctx->pc = 0x140180u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 7));
label_140184:
    // 0x140184: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x140184u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
label_140188:
    // 0x140188: 0x1a86825  or          $t5, $t5, $t0
    ctx->pc = 0x140188u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 8));
label_14018c:
    // 0x14018c: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x14018cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
label_140190:
    // 0x140190: 0xa3ad00e7  sb          $t5, 0xE7($sp)
    ctx->pc = 0x140190u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 231), (uint8_t)GPR_U32(ctx, 13));
label_140194:
    // 0x140194: 0x64030004  daddiu      $v1, $zero, 0x4
    ctx->pc = 0x140194u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_140198:
    // 0x140198: 0x912e0000  lbu         $t6, 0x0($t1)
    ctx->pc = 0x140198u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_14019c:
    // 0x14019c: 0x16c6825  or          $t5, $t3, $t4
    ctx->pc = 0x14019cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_1401a0:
    // 0x1401a0: 0x3c0c6c01  lui         $t4, 0x6C01
    ctx->pc = 0x1401a0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)27649 << 16));
label_1401a4:
    // 0x1401a4: 0x27ab00f0  addiu       $t3, $sp, 0xF0
    ctx->pc = 0x1401a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1401a8:
    // 0x1401a8: 0x358c0027  ori         $t4, $t4, 0x27
    ctx->pc = 0x1401a8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)39);
label_1401ac:
    // 0x1401ac: 0x1c57024  and         $t6, $t6, $a1
    ctx->pc = 0x1401acu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 5));
label_1401b0:
    // 0x1401b0: 0x1c67025  or          $t6, $t6, $a2
    ctx->pc = 0x1401b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 6));
label_1401b4:
    // 0x1401b4: 0xa12e0000  sb          $t6, 0x0($t1)
    ctx->pc = 0x1401b4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 14));
label_1401b8:
    // 0x1401b8: 0x912e0000  lbu         $t6, 0x0($t1)
    ctx->pc = 0x1401b8u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_1401bc:
    // 0x1401bc: 0x1c77024  and         $t6, $t6, $a3
    ctx->pc = 0x1401bcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 7));
label_1401c0:
    // 0x1401c0: 0x1c47025  or          $t6, $t6, $a0
    ctx->pc = 0x1401c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 4));
label_1401c4:
    // 0x1401c4: 0xa12e0000  sb          $t6, 0x0($t1)
    ctx->pc = 0x1401c4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 14));
label_1401c8:
    // 0x1401c8: 0xdfa900f0  ld          $t1, 0xF0($sp)
    ctx->pc = 0x1401c8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_1401cc:
    // 0x1401cc: 0x93ae00e9  lbu         $t6, 0xE9($sp)
    ctx->pc = 0x1401ccu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 233)));
label_1401d0:
    // 0x1401d0: 0x12d4824  and         $t1, $t1, $t5
    ctx->pc = 0x1401d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 13));
label_1401d4:
    // 0x1401d4: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x1401d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1401d8:
    // 0x1401d8: 0x1c57024  and         $t6, $t6, $a1
    ctx->pc = 0x1401d8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 5));
label_1401dc:
    // 0x1401dc: 0xffa200f0  sd          $v0, 0xF0($sp)
    ctx->pc = 0x1401dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 2));
label_1401e0:
    // 0x1401e0: 0x1c36825  or          $t5, $t6, $v1
    ctx->pc = 0x1401e0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) | GPR_U64(ctx, 3));
label_1401e4:
    // 0x1401e4: 0x93a200f7  lbu         $v0, 0xF7($sp)
    ctx->pc = 0x1401e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 247)));
label_1401e8:
    // 0x1401e8: 0xa3ad00e9  sb          $t5, 0xE9($sp)
    ctx->pc = 0x1401e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 233), (uint8_t)GPR_U32(ctx, 13));
label_1401ec:
    // 0x1401ec: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1401ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_1401f0:
    // 0x1401f0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1401f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_1401f4:
    // 0x1401f4: 0xa3a200f7  sb          $v0, 0xF7($sp)
    ctx->pc = 0x1401f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 247), (uint8_t)GPR_U32(ctx, 2));
label_1401f8:
    // 0x1401f8: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x1401f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1401fc:
    // 0x1401fc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1401fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_140200:
    // 0x140200: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x140200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_140204:
    // 0x140204: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x140204u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
label_140208:
    // 0x140208: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x140208u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_14020c:
    // 0x14020c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x14020cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_140210:
    // 0x140210: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x140210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_140214:
    // 0x140214: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x140214u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
label_140218:
    // 0x140218: 0x93a200f9  lbu         $v0, 0xF9($sp)
    ctx->pc = 0x140218u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 249)));
label_14021c:
    // 0x14021c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x14021cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_140220:
    // 0x140220: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x140220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_140224:
    // 0x140224: 0xa3a200f9  sb          $v0, 0xF9($sp)
    ctx->pc = 0x140224u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 249), (uint8_t)GPR_U32(ctx, 2));
label_140228:
    // 0x140228: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x140228u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_14022c:
    // 0x14022c: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x14022cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_140230:
    // 0x140230: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x140230u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
label_140234:
    // 0x140234: 0xae8c000c  sw          $t4, 0xC($s4)
    ctx->pc = 0x140234u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 12));
label_140238:
    // 0x140238: 0x79620000  lq          $v0, 0x0($t3)
    ctx->pc = 0x140238u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 0)));
label_14023c:
    // 0x14023c: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x14023cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
label_140240:
    // 0x140240: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_140244:
    if (ctx->pc == 0x140244u) {
        ctx->pc = 0x140244u;
            // 0x140244: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x140248u;
        goto label_140248;
    }
    ctx->pc = 0x140240u;
    {
        const bool branch_taken_0x140240 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x140244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140240u;
            // 0x140244: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140240) {
            ctx->pc = 0x140258u;
            goto label_140258;
        }
    }
    ctx->pc = 0x140248u;
label_140248:
    // 0x140248: 0xc04f8ec  jal         func_13E3B0
label_14024c:
    if (ctx->pc == 0x14024Cu) {
        ctx->pc = 0x140250u;
        goto label_140250;
    }
    ctx->pc = 0x140248u;
    SET_GPR_U32(ctx, 31, 0x140250u);
    ctx->pc = 0x13E3B0u;
    if (runtime->hasFunction(0x13E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x13E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140250u; }
        if (ctx->pc != 0x140250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScrPad__Fv_0x13e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140250u; }
        if (ctx->pc != 0x140250u) { return; }
    }
    ctx->pc = 0x140250u;
label_140250:
    // 0x140250: 0x10000003  b           . + 4 + (0x3 << 2)
label_140254:
    if (ctx->pc == 0x140254u) {
        ctx->pc = 0x140254u;
            // 0x140254: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140258u;
        goto label_140258;
    }
    ctx->pc = 0x140250u;
    {
        const bool branch_taken_0x140250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140250u;
            // 0x140254: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140250) {
            ctx->pc = 0x140260u;
            goto label_140260;
        }
    }
    ctx->pc = 0x140258u;
label_140258:
    // 0x140258: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x140258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14025c:
    // 0x14025c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x14025cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140260:
    // 0x140260: 0x1a20006a  blez        $s1, . + 4 + (0x6A << 2)
label_140264:
    if (ctx->pc == 0x140264u) {
        ctx->pc = 0x140268u;
        goto label_140268;
    }
    ctx->pc = 0x140260u;
    {
        const bool branch_taken_0x140260 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x140260) {
            ctx->pc = 0x14040Cu;
            goto label_14040c;
        }
    }
    ctx->pc = 0x140268u;
label_140268:
    // 0x140268: 0x230082a  slt         $at, $s1, $s0
    ctx->pc = 0x140268u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_14026c:
    // 0x14026c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_140270:
    if (ctx->pc == 0x140270u) {
        ctx->pc = 0x140270u;
            // 0x140270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140274u;
        goto label_140274;
    }
    ctx->pc = 0x14026Cu;
    {
        const bool branch_taken_0x14026c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x140270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14026Cu;
            // 0x140270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14026c) {
            ctx->pc = 0x140278u;
            goto label_140278;
        }
    }
    ctx->pc = 0x140274u;
label_140274:
    // 0x140274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_140278:
    // 0x140278: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x140278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_14027c:
    // 0x14027c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x14027cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_140280:
    // 0x140280: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x140280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_140284:
    // 0x140284: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x140284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_140288:
    // 0x140288: 0x1e2880  sll         $a1, $fp, 2
    ctx->pc = 0x140288u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_14028c:
    // 0x14028c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x14028cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_140290:
    // 0x140290: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x140290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_140294:
    // 0x140294: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x140294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_140298:
    // 0x140298: 0x306a7fff  andi        $t2, $v1, 0x7FFF
    ctx->pc = 0x140298u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
label_14029c:
    // 0x14029c: 0x97ab00e0  lhu         $t3, 0xE0($sp)
    ctx->pc = 0x14029cu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
label_1402a0:
    // 0x1402a0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1402a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1402a4:
    // 0x1402a4: 0x246341f0  addiu       $v1, $v1, 0x41F0
    ctx->pc = 0x1402a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16880));
label_1402a8:
    // 0x1402a8: 0x24098000  addiu       $t1, $zero, -0x8000
    ctx->pc = 0x1402a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_1402ac:
    // 0x1402ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1402acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1402b0:
    // 0x1402b0: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x1402b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1402b4:
    // 0x1402b4: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x1402b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1402b8:
    // 0x1402b8: 0x24470020  addiu       $a3, $v0, 0x20
    ctx->pc = 0x1402b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1402bc:
    // 0x1402bc: 0x1692824  and         $a1, $t3, $t1
    ctx->pc = 0x1402bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
label_1402c0:
    // 0x1402c0: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x1402c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
label_1402c4:
    // 0x1402c4: 0xa7a500e0  sh          $a1, 0xE0($sp)
    ctx->pc = 0x1402c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 5));
label_1402c8:
    // 0x1402c8: 0x79050000  lq          $a1, 0x0($t0)
    ctx->pc = 0x1402c8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_1402cc:
    // 0x1402cc: 0x7c450010  sq          $a1, 0x10($v0)
    ctx->pc = 0x1402ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 5));
label_1402d0:
    // 0x1402d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1402d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1402d4:
    // 0x1402d4: 0x96650000  lhu         $a1, 0x0($s3)
    ctx->pc = 0x1402d4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_1402d8:
    // 0x1402d8: 0x8ea80030  lw          $t0, 0x30($s5)
    ctx->pc = 0x1402d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_1402dc:
    // 0x1402dc: 0x8ea90034  lw          $t1, 0x34($s5)
    ctx->pc = 0x1402dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_1402e0:
    // 0x1402e0: 0x8eaa003c  lw          $t2, 0x3C($s5)
    ctx->pc = 0x1402e0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_1402e4:
    // 0x1402e4: 0x8eab0038  lw          $t3, 0x38($s5)
    ctx->pc = 0x1402e4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
label_1402e8:
    // 0x1402e8: 0x40f809  jalr        $v0
label_1402ec:
    if (ctx->pc == 0x1402ECu) {
        ctx->pc = 0x1402ECu;
            // 0x1402ec: 0x27a6011c  addiu       $a2, $sp, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
        ctx->pc = 0x1402F0u;
        goto label_1402f0;
    }
    ctx->pc = 0x1402E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1402F0u);
        ctx->pc = 0x1402ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1402E8u;
            // 0x1402ec: 0x27a6011c  addiu       $a2, $sp, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1402F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1402F0u; }
            if (ctx->pc != 0x1402F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1402F0u;
label_1402f0:
    // 0x1402f0: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x1402f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1402f4:
    // 0x1402f4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1402f8:
    if (ctx->pc == 0x1402F8u) {
        ctx->pc = 0x1402F8u;
            // 0x1402f8: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->pc = 0x1402FCu;
        goto label_1402fc;
    }
    ctx->pc = 0x1402F4u;
    {
        const bool branch_taken_0x1402f4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1402F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1402F4u;
            // 0x1402f8: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1402f4) {
            ctx->pc = 0x140304u;
            goto label_140304;
        }
    }
    ctx->pc = 0x1402FCu;
label_1402fc:
    // 0x1402fc: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x1402fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_140300:
    // 0x140300: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x140300u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_140304:
    // 0x140304: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x140304u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_140308:
    // 0x140308: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x140308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
label_14030c:
    // 0x14030c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x14030cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_140310:
    // 0x140310: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x140310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_140314:
    // 0x140314: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x140314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_140318:
    // 0x140318: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x140318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_14031c:
    // 0x14031c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x14031cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_140320:
    // 0x140320: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x140320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_140324:
    // 0x140324: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_140328:
    if (ctx->pc == 0x140328u) {
        ctx->pc = 0x140328u;
            // 0x140328: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->pc = 0x14032Cu;
        goto label_14032c;
    }
    ctx->pc = 0x140324u;
    {
        const bool branch_taken_0x140324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x140328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140324u;
            // 0x140328: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140324) {
            ctx->pc = 0x140348u;
            goto label_140348;
        }
    }
    ctx->pc = 0x14032Cu;
label_14032c:
    // 0x14032c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14032cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_140330:
    // 0x140330: 0x24844210  addiu       $a0, $a0, 0x4210
    ctx->pc = 0x140330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16912));
label_140334:
    // 0x140334: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x140334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_140338:
    // 0x140338: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x140338u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_14033c:
    // 0x14033c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x14033cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_140340:
    // 0x140340: 0x10000006  b           . + 4 + (0x6 << 2)
label_140344:
    if (ctx->pc == 0x140344u) {
        ctx->pc = 0x140344u;
            // 0x140344: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x140348u;
        goto label_140348;
    }
    ctx->pc = 0x140340u;
    {
        const bool branch_taken_0x140340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140340u;
            // 0x140344: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140340) {
            ctx->pc = 0x14035Cu;
            goto label_14035c;
        }
    }
    ctx->pc = 0x140348u;
label_140348:
    // 0x140348: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x140348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_14034c:
    // 0x14034c: 0x24634220  addiu       $v1, $v1, 0x4220
    ctx->pc = 0x14034cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16928));
label_140350:
    // 0x140350: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x140350u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_140354:
    // 0x140354: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x140354u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_140358:
    // 0x140358: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x140358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14035c:
    // 0x14035c: 0x0  nop
    ctx->pc = 0x14035cu;
    // NOP
label_140360:
    // 0x140360: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x140360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_140364:
    // 0x140364: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x140364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_140368:
    // 0x140368: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
label_14036c:
    if (ctx->pc == 0x14036Cu) {
        ctx->pc = 0x14036Cu;
            // 0x14036c: 0x211082a  slt         $at, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->pc = 0x140370u;
        goto label_140370;
    }
    ctx->pc = 0x140368u;
    {
        const bool branch_taken_0x140368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x14036Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140368u;
            // 0x14036c: 0x211082a  slt         $at, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x140368) {
            ctx->pc = 0x140390u;
            goto label_140390;
        }
    }
    ctx->pc = 0x140370u;
label_140370:
    // 0x140370: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_140374:
    if (ctx->pc == 0x140374u) {
        ctx->pc = 0x140378u;
        goto label_140378;
    }
    ctx->pc = 0x140370u;
    {
        const bool branch_taken_0x140370 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140370) {
            ctx->pc = 0x140390u;
            goto label_140390;
        }
    }
    ctx->pc = 0x140378u;
label_140378:
    // 0x140378: 0x86640002  lh          $a0, 0x2($s3)
    ctx->pc = 0x140378u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_14037c:
    // 0x14037c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x14037cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_140380:
    // 0x140380: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x140380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_140384:
    // 0x140384: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x140384u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_140388:
    // 0x140388: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x140388u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14038c:
    // 0x14038c: 0xafa3011c  sw          $v1, 0x11C($sp)
    ctx->pc = 0x14038cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
label_140390:
    // 0x140390: 0x561823  subu        $v1, $v0, $s6
    ctx->pc = 0x140390u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_140394:
    // 0x140394: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_140398:
    if (ctx->pc == 0x140398u) {
        ctx->pc = 0x140398u;
            // 0x140398: 0x39083  sra         $s2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 2));
        ctx->pc = 0x14039Cu;
        goto label_14039c;
    }
    ctx->pc = 0x140394u;
    {
        const bool branch_taken_0x140394 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x140398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140394u;
            // 0x140398: 0x39083  sra         $s2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140394) {
            ctx->pc = 0x1403A4u;
            goto label_1403a4;
        }
    }
    ctx->pc = 0x14039Cu;
label_14039c:
    // 0x14039c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x14039cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_1403a0:
    // 0x1403a0: 0x39083  sra         $s2, $v1, 2
    ctx->pc = 0x1403a0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 2));
label_1403a4:
    // 0x1403a4: 0x2a410515  slti        $at, $s2, 0x515
    ctx->pc = 0x1403a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)1301) ? 1 : 0);
label_1403a8:
    // 0x1403a8: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
label_1403ac:
    if (ctx->pc == 0x1403ACu) {
        ctx->pc = 0x1403B0u;
        goto label_1403b0;
    }
    ctx->pc = 0x1403A8u;
    {
        const bool branch_taken_0x1403a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1403a8) {
            ctx->pc = 0x1403FCu;
            goto label_1403fc;
        }
    }
    ctx->pc = 0x1403B0u;
label_1403b0:
    // 0x1403b0: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
label_1403b4:
    if (ctx->pc == 0x1403B4u) {
        ctx->pc = 0x1403B4u;
            // 0x1403b4: 0x122883  sra         $a1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 18), 2));
        ctx->pc = 0x1403B8u;
        goto label_1403b8;
    }
    ctx->pc = 0x1403B0u;
    {
        const bool branch_taken_0x1403b0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1403B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1403B0u;
            // 0x1403b4: 0x122883  sra         $a1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1403b0) {
            ctx->pc = 0x1403D0u;
            goto label_1403d0;
        }
    }
    ctx->pc = 0x1403B8u;
label_1403b8:
    // 0x1403b8: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
label_1403bc:
    if (ctx->pc == 0x1403BCu) {
        ctx->pc = 0x1403BCu;
            // 0x1403bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1403C0u;
        goto label_1403c0;
    }
    ctx->pc = 0x1403B8u;
    {
        const bool branch_taken_0x1403b8 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1403BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1403B8u;
            // 0x1403bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1403b8) {
            ctx->pc = 0x1403C8u;
            goto label_1403c8;
        }
    }
    ctx->pc = 0x1403C0u;
label_1403c0:
    // 0x1403c0: 0x26420003  addiu       $v0, $s2, 0x3
    ctx->pc = 0x1403c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
label_1403c4:
    // 0x1403c4: 0x22883  sra         $a1, $v0, 2
    ctx->pc = 0x1403c4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
label_1403c8:
    // 0x1403c8: 0xc04f8f4  jal         func_13E3D0
label_1403cc:
    if (ctx->pc == 0x1403CCu) {
        ctx->pc = 0x1403D0u;
        goto label_1403d0;
    }
    ctx->pc = 0x1403C8u;
    SET_GPR_U32(ctx, 31, 0x1403D0u);
    ctx->pc = 0x13E3D0u;
    if (runtime->hasFunction(0x13E3D0u)) {
        auto targetFn = runtime->lookupFunction(0x13E3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1403D0u; }
        if (ctx->pc != 0x1403D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SendDMA__FPvi_0x13e3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1403D0u; }
        if (ctx->pc != 0x1403D0u) { return; }
    }
    ctx->pc = 0x1403D0u;
label_1403d0:
    // 0x1403d0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1403d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1403d4:
    // 0x1403d4: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_1403d8:
    if (ctx->pc == 0x1403D8u) {
        ctx->pc = 0x1403D8u;
            // 0x1403d8: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->pc = 0x1403DCu;
        goto label_1403dc;
    }
    ctx->pc = 0x1403D4u;
    {
        const bool branch_taken_0x1403d4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1403D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1403D4u;
            // 0x1403d8: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1403d4) {
            ctx->pc = 0x1403ECu;
            goto label_1403ec;
        }
    }
    ctx->pc = 0x1403DCu;
label_1403dc:
    // 0x1403dc: 0xc04f8ec  jal         func_13E3B0
label_1403e0:
    if (ctx->pc == 0x1403E0u) {
        ctx->pc = 0x1403E4u;
        goto label_1403e4;
    }
    ctx->pc = 0x1403DCu;
    SET_GPR_U32(ctx, 31, 0x1403E4u);
    ctx->pc = 0x13E3B0u;
    if (runtime->hasFunction(0x13E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x13E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1403E4u; }
        if (ctx->pc != 0x1403E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScrPad__Fv_0x13e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1403E4u; }
        if (ctx->pc != 0x1403E4u) { return; }
    }
    ctx->pc = 0x1403E4u;
label_1403e4:
    // 0x1403e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1403e8:
    if (ctx->pc == 0x1403E8u) {
        ctx->pc = 0x1403ECu;
        goto label_1403ec;
    }
    ctx->pc = 0x1403E4u;
    {
        const bool branch_taken_0x1403e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1403e4) {
            ctx->pc = 0x1403F4u;
            goto label_1403f4;
        }
    }
    ctx->pc = 0x1403ECu;
label_1403ec:
    // 0x1403ec: 0x0  nop
    ctx->pc = 0x1403ecu;
    // NOP
label_1403f0:
    // 0x1403f0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1403f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1403f4:
    // 0x1403f4: 0x0  nop
    ctx->pc = 0x1403f4u;
    // NOP
label_1403f8:
    // 0x1403f8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1403f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1403fc:
    // 0x1403fc: 0x0  nop
    ctx->pc = 0x1403fcu;
    // NOP
label_140400:
    // 0x140400: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x140400u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_140404:
    // 0x140404: 0x1e20ff99  bgtz        $s1, . + 4 + (-0x67 << 2)
label_140408:
    if (ctx->pc == 0x140408u) {
        ctx->pc = 0x140408u;
            // 0x140408: 0x230082a  slt         $at, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->pc = 0x14040Cu;
        goto label_14040c;
    }
    ctx->pc = 0x140404u;
    {
        const bool branch_taken_0x140404 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x140408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140404u;
            // 0x140408: 0x230082a  slt         $at, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x140404) {
            ctx->pc = 0x14026Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14026c;
        }
    }
    ctx->pc = 0x14040Cu;
label_14040c:
    // 0x14040c: 0x0  nop
    ctx->pc = 0x14040cu;
    // NOP
label_140410:
    // 0x140410: 0x561023  subu        $v0, $v0, $s6
    ctx->pc = 0x140410u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_140414:
    // 0x140414: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_140418:
    if (ctx->pc == 0x140418u) {
        ctx->pc = 0x140418u;
            // 0x140418: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->pc = 0x14041Cu;
        goto label_14041c;
    }
    ctx->pc = 0x140414u;
    {
        const bool branch_taken_0x140414 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x140418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140414u;
            // 0x140418: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140414) {
            ctx->pc = 0x140424u;
            goto label_140424;
        }
    }
    ctx->pc = 0x14041Cu;
label_14041c:
    // 0x14041c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14041cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_140420:
    // 0x140420: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x140420u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
label_140424:
    // 0x140424: 0x12e00009  beqz        $s7, . + 4 + (0x9 << 2)
label_140428:
    if (ctx->pc == 0x140428u) {
        ctx->pc = 0x14042Cu;
        goto label_14042c;
    }
    ctx->pc = 0x140424u;
    {
        const bool branch_taken_0x140424 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x140424) {
            ctx->pc = 0x14044Cu;
            goto label_14044c;
        }
    }
    ctx->pc = 0x14042Cu;
label_14042c:
    // 0x14042c: 0x1a000007  blez        $s0, . + 4 + (0x7 << 2)
label_140430:
    if (ctx->pc == 0x140430u) {
        ctx->pc = 0x140434u;
        goto label_140434;
    }
    ctx->pc = 0x14042Cu;
    {
        const bool branch_taken_0x14042c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x14042c) {
            ctx->pc = 0x14044Cu;
            goto label_14044c;
        }
    }
    ctx->pc = 0x140434u;
label_140434:
    // 0x140434: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
label_140438:
    if (ctx->pc == 0x140438u) {
        ctx->pc = 0x140438u;
            // 0x140438: 0x102883  sra         $a1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 16), 2));
        ctx->pc = 0x14043Cu;
        goto label_14043c;
    }
    ctx->pc = 0x140434u;
    {
        const bool branch_taken_0x140434 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x140438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140434u;
            // 0x140438: 0x102883  sra         $a1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140434) {
            ctx->pc = 0x140444u;
            goto label_140444;
        }
    }
    ctx->pc = 0x14043Cu;
label_14043c:
    // 0x14043c: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x14043cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_140440:
    // 0x140440: 0x22883  sra         $a1, $v0, 2
    ctx->pc = 0x140440u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
label_140444:
    // 0x140444: 0xc04f8f4  jal         func_13E3D0
label_140448:
    if (ctx->pc == 0x140448u) {
        ctx->pc = 0x140448u;
            // 0x140448: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14044Cu;
        goto label_14044c;
    }
    ctx->pc = 0x140444u;
    SET_GPR_U32(ctx, 31, 0x14044Cu);
    ctx->pc = 0x140448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140444u;
            // 0x140448: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E3D0u;
    if (runtime->hasFunction(0x13E3D0u)) {
        auto targetFn = runtime->lookupFunction(0x13E3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14044Cu; }
        if (ctx->pc != 0x14044Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SendDMA__FPvi_0x13e3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14044Cu; }
        if (ctx->pc != 0x14044Cu) { return; }
    }
    ctx->pc = 0x14044Cu;
label_14044c:
    // 0x14044c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14044cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_140450:
    // 0x140450: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x140450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_140454:
    // 0x140454: 0x24424230  addiu       $v0, $v0, 0x4230
    ctx->pc = 0x140454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16944));
label_140458:
    // 0x140458: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x140458u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_14045c:
    // 0x14045c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x14045cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_140460:
    // 0x140460: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x140460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_140464:
    // 0x140464: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x140464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_140468:
    // 0x140468: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x140468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_14046c:
    // 0x14046c: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x14046cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
label_140470:
    // 0x140470: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x140470u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_140474:
    // 0x140474: 0x70802628  paddub      $a0, $a0, $zero
    ctx->pc = 0x140474u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_140478:
    // 0x140478: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x140478u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_14047c:
    // 0x14047c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_140480:
    if (ctx->pc == 0x140480u) {
        ctx->pc = 0x140480u;
            // 0x140480: 0x7e840000  sq          $a0, 0x0($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 4));
        ctx->pc = 0x140484u;
        goto label_140484;
    }
    ctx->pc = 0x14047Cu;
    {
        const bool branch_taken_0x14047c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x140480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14047Cu;
            // 0x140480: 0x7e840000  sq          $a0, 0x0($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14047c) {
            ctx->pc = 0x14048Cu;
            goto label_14048c;
        }
    }
    ctx->pc = 0x140484u;
label_140484:
    // 0x140484: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x140484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_140488:
    // 0x140488: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x140488u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_14048c:
    // 0x14048c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_140490:
    if (ctx->pc == 0x140490u) {
        ctx->pc = 0x140490u;
            // 0x140490: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->pc = 0x140494u;
        goto label_140494;
    }
    ctx->pc = 0x14048Cu;
    {
        const bool branch_taken_0x14048c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x140490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14048Cu;
            // 0x140490: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14048c) {
            ctx->pc = 0x14049Cu;
            goto label_14049c;
        }
    }
    ctx->pc = 0x140494u;
label_140494:
    // 0x140494: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x140494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_140498:
    // 0x140498: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x140498u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_14049c:
    // 0x14049c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x14049cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1404a0:
    // 0x1404a0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1404a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1404a4:
    // 0x1404a4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1404a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1404a8:
    // 0x1404a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1404a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1404ac:
    // 0x1404ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1404acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1404b0:
    // 0x1404b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1404b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1404b4:
    // 0x1404b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1404b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1404b8:
    // 0x1404b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1404b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1404bc:
    // 0x1404bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1404bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1404c0:
    // 0x1404c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1404c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1404c4:
    // 0x1404c4: 0x3e00008  jr          $ra
label_1404c8:
    if (ctx->pc == 0x1404C8u) {
        ctx->pc = 0x1404C8u;
            // 0x1404c8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x1404CCu;
        goto label_fallthrough_0x1404c4;
    }
    ctx->pc = 0x1404C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1404C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1404C4u;
            // 0x1404c8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1404c4:
    ctx->pc = 0x1404CCu;
}
