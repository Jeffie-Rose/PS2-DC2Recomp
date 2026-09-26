#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawRiver__8CEditMapFv
// Address: 0x297350 - 0x297770
void DrawRiver__8CEditMapFv_0x297350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawRiver__8CEditMapFv_0x297350");
#endif

    switch (ctx->pc) {
        case 0x297350u: goto label_297350;
        case 0x297354u: goto label_297354;
        case 0x297358u: goto label_297358;
        case 0x29735cu: goto label_29735c;
        case 0x297360u: goto label_297360;
        case 0x297364u: goto label_297364;
        case 0x297368u: goto label_297368;
        case 0x29736cu: goto label_29736c;
        case 0x297370u: goto label_297370;
        case 0x297374u: goto label_297374;
        case 0x297378u: goto label_297378;
        case 0x29737cu: goto label_29737c;
        case 0x297380u: goto label_297380;
        case 0x297384u: goto label_297384;
        case 0x297388u: goto label_297388;
        case 0x29738cu: goto label_29738c;
        case 0x297390u: goto label_297390;
        case 0x297394u: goto label_297394;
        case 0x297398u: goto label_297398;
        case 0x29739cu: goto label_29739c;
        case 0x2973a0u: goto label_2973a0;
        case 0x2973a4u: goto label_2973a4;
        case 0x2973a8u: goto label_2973a8;
        case 0x2973acu: goto label_2973ac;
        case 0x2973b0u: goto label_2973b0;
        case 0x2973b4u: goto label_2973b4;
        case 0x2973b8u: goto label_2973b8;
        case 0x2973bcu: goto label_2973bc;
        case 0x2973c0u: goto label_2973c0;
        case 0x2973c4u: goto label_2973c4;
        case 0x2973c8u: goto label_2973c8;
        case 0x2973ccu: goto label_2973cc;
        case 0x2973d0u: goto label_2973d0;
        case 0x2973d4u: goto label_2973d4;
        case 0x2973d8u: goto label_2973d8;
        case 0x2973dcu: goto label_2973dc;
        case 0x2973e0u: goto label_2973e0;
        case 0x2973e4u: goto label_2973e4;
        case 0x2973e8u: goto label_2973e8;
        case 0x2973ecu: goto label_2973ec;
        case 0x2973f0u: goto label_2973f0;
        case 0x2973f4u: goto label_2973f4;
        case 0x2973f8u: goto label_2973f8;
        case 0x2973fcu: goto label_2973fc;
        case 0x297400u: goto label_297400;
        case 0x297404u: goto label_297404;
        case 0x297408u: goto label_297408;
        case 0x29740cu: goto label_29740c;
        case 0x297410u: goto label_297410;
        case 0x297414u: goto label_297414;
        case 0x297418u: goto label_297418;
        case 0x29741cu: goto label_29741c;
        case 0x297420u: goto label_297420;
        case 0x297424u: goto label_297424;
        case 0x297428u: goto label_297428;
        case 0x29742cu: goto label_29742c;
        case 0x297430u: goto label_297430;
        case 0x297434u: goto label_297434;
        case 0x297438u: goto label_297438;
        case 0x29743cu: goto label_29743c;
        case 0x297440u: goto label_297440;
        case 0x297444u: goto label_297444;
        case 0x297448u: goto label_297448;
        case 0x29744cu: goto label_29744c;
        case 0x297450u: goto label_297450;
        case 0x297454u: goto label_297454;
        case 0x297458u: goto label_297458;
        case 0x29745cu: goto label_29745c;
        case 0x297460u: goto label_297460;
        case 0x297464u: goto label_297464;
        case 0x297468u: goto label_297468;
        case 0x29746cu: goto label_29746c;
        case 0x297470u: goto label_297470;
        case 0x297474u: goto label_297474;
        case 0x297478u: goto label_297478;
        case 0x29747cu: goto label_29747c;
        case 0x297480u: goto label_297480;
        case 0x297484u: goto label_297484;
        case 0x297488u: goto label_297488;
        case 0x29748cu: goto label_29748c;
        case 0x297490u: goto label_297490;
        case 0x297494u: goto label_297494;
        case 0x297498u: goto label_297498;
        case 0x29749cu: goto label_29749c;
        case 0x2974a0u: goto label_2974a0;
        case 0x2974a4u: goto label_2974a4;
        case 0x2974a8u: goto label_2974a8;
        case 0x2974acu: goto label_2974ac;
        case 0x2974b0u: goto label_2974b0;
        case 0x2974b4u: goto label_2974b4;
        case 0x2974b8u: goto label_2974b8;
        case 0x2974bcu: goto label_2974bc;
        case 0x2974c0u: goto label_2974c0;
        case 0x2974c4u: goto label_2974c4;
        case 0x2974c8u: goto label_2974c8;
        case 0x2974ccu: goto label_2974cc;
        case 0x2974d0u: goto label_2974d0;
        case 0x2974d4u: goto label_2974d4;
        case 0x2974d8u: goto label_2974d8;
        case 0x2974dcu: goto label_2974dc;
        case 0x2974e0u: goto label_2974e0;
        case 0x2974e4u: goto label_2974e4;
        case 0x2974e8u: goto label_2974e8;
        case 0x2974ecu: goto label_2974ec;
        case 0x2974f0u: goto label_2974f0;
        case 0x2974f4u: goto label_2974f4;
        case 0x2974f8u: goto label_2974f8;
        case 0x2974fcu: goto label_2974fc;
        case 0x297500u: goto label_297500;
        case 0x297504u: goto label_297504;
        case 0x297508u: goto label_297508;
        case 0x29750cu: goto label_29750c;
        case 0x297510u: goto label_297510;
        case 0x297514u: goto label_297514;
        case 0x297518u: goto label_297518;
        case 0x29751cu: goto label_29751c;
        case 0x297520u: goto label_297520;
        case 0x297524u: goto label_297524;
        case 0x297528u: goto label_297528;
        case 0x29752cu: goto label_29752c;
        case 0x297530u: goto label_297530;
        case 0x297534u: goto label_297534;
        case 0x297538u: goto label_297538;
        case 0x29753cu: goto label_29753c;
        case 0x297540u: goto label_297540;
        case 0x297544u: goto label_297544;
        case 0x297548u: goto label_297548;
        case 0x29754cu: goto label_29754c;
        case 0x297550u: goto label_297550;
        case 0x297554u: goto label_297554;
        case 0x297558u: goto label_297558;
        case 0x29755cu: goto label_29755c;
        case 0x297560u: goto label_297560;
        case 0x297564u: goto label_297564;
        case 0x297568u: goto label_297568;
        case 0x29756cu: goto label_29756c;
        case 0x297570u: goto label_297570;
        case 0x297574u: goto label_297574;
        case 0x297578u: goto label_297578;
        case 0x29757cu: goto label_29757c;
        case 0x297580u: goto label_297580;
        case 0x297584u: goto label_297584;
        case 0x297588u: goto label_297588;
        case 0x29758cu: goto label_29758c;
        case 0x297590u: goto label_297590;
        case 0x297594u: goto label_297594;
        case 0x297598u: goto label_297598;
        case 0x29759cu: goto label_29759c;
        case 0x2975a0u: goto label_2975a0;
        case 0x2975a4u: goto label_2975a4;
        case 0x2975a8u: goto label_2975a8;
        case 0x2975acu: goto label_2975ac;
        case 0x2975b0u: goto label_2975b0;
        case 0x2975b4u: goto label_2975b4;
        case 0x2975b8u: goto label_2975b8;
        case 0x2975bcu: goto label_2975bc;
        case 0x2975c0u: goto label_2975c0;
        case 0x2975c4u: goto label_2975c4;
        case 0x2975c8u: goto label_2975c8;
        case 0x2975ccu: goto label_2975cc;
        case 0x2975d0u: goto label_2975d0;
        case 0x2975d4u: goto label_2975d4;
        case 0x2975d8u: goto label_2975d8;
        case 0x2975dcu: goto label_2975dc;
        case 0x2975e0u: goto label_2975e0;
        case 0x2975e4u: goto label_2975e4;
        case 0x2975e8u: goto label_2975e8;
        case 0x2975ecu: goto label_2975ec;
        case 0x2975f0u: goto label_2975f0;
        case 0x2975f4u: goto label_2975f4;
        case 0x2975f8u: goto label_2975f8;
        case 0x2975fcu: goto label_2975fc;
        case 0x297600u: goto label_297600;
        case 0x297604u: goto label_297604;
        case 0x297608u: goto label_297608;
        case 0x29760cu: goto label_29760c;
        case 0x297610u: goto label_297610;
        case 0x297614u: goto label_297614;
        case 0x297618u: goto label_297618;
        case 0x29761cu: goto label_29761c;
        case 0x297620u: goto label_297620;
        case 0x297624u: goto label_297624;
        case 0x297628u: goto label_297628;
        case 0x29762cu: goto label_29762c;
        case 0x297630u: goto label_297630;
        case 0x297634u: goto label_297634;
        case 0x297638u: goto label_297638;
        case 0x29763cu: goto label_29763c;
        case 0x297640u: goto label_297640;
        case 0x297644u: goto label_297644;
        case 0x297648u: goto label_297648;
        case 0x29764cu: goto label_29764c;
        case 0x297650u: goto label_297650;
        case 0x297654u: goto label_297654;
        case 0x297658u: goto label_297658;
        case 0x29765cu: goto label_29765c;
        case 0x297660u: goto label_297660;
        case 0x297664u: goto label_297664;
        case 0x297668u: goto label_297668;
        case 0x29766cu: goto label_29766c;
        case 0x297670u: goto label_297670;
        case 0x297674u: goto label_297674;
        case 0x297678u: goto label_297678;
        case 0x29767cu: goto label_29767c;
        case 0x297680u: goto label_297680;
        case 0x297684u: goto label_297684;
        case 0x297688u: goto label_297688;
        case 0x29768cu: goto label_29768c;
        case 0x297690u: goto label_297690;
        case 0x297694u: goto label_297694;
        case 0x297698u: goto label_297698;
        case 0x29769cu: goto label_29769c;
        case 0x2976a0u: goto label_2976a0;
        case 0x2976a4u: goto label_2976a4;
        case 0x2976a8u: goto label_2976a8;
        case 0x2976acu: goto label_2976ac;
        case 0x2976b0u: goto label_2976b0;
        case 0x2976b4u: goto label_2976b4;
        case 0x2976b8u: goto label_2976b8;
        case 0x2976bcu: goto label_2976bc;
        case 0x2976c0u: goto label_2976c0;
        case 0x2976c4u: goto label_2976c4;
        case 0x2976c8u: goto label_2976c8;
        case 0x2976ccu: goto label_2976cc;
        case 0x2976d0u: goto label_2976d0;
        case 0x2976d4u: goto label_2976d4;
        case 0x2976d8u: goto label_2976d8;
        case 0x2976dcu: goto label_2976dc;
        case 0x2976e0u: goto label_2976e0;
        case 0x2976e4u: goto label_2976e4;
        case 0x2976e8u: goto label_2976e8;
        case 0x2976ecu: goto label_2976ec;
        case 0x2976f0u: goto label_2976f0;
        case 0x2976f4u: goto label_2976f4;
        case 0x2976f8u: goto label_2976f8;
        case 0x2976fcu: goto label_2976fc;
        case 0x297700u: goto label_297700;
        case 0x297704u: goto label_297704;
        case 0x297708u: goto label_297708;
        case 0x29770cu: goto label_29770c;
        case 0x297710u: goto label_297710;
        case 0x297714u: goto label_297714;
        case 0x297718u: goto label_297718;
        case 0x29771cu: goto label_29771c;
        case 0x297720u: goto label_297720;
        case 0x297724u: goto label_297724;
        case 0x297728u: goto label_297728;
        case 0x29772cu: goto label_29772c;
        case 0x297730u: goto label_297730;
        case 0x297734u: goto label_297734;
        case 0x297738u: goto label_297738;
        case 0x29773cu: goto label_29773c;
        case 0x297740u: goto label_297740;
        case 0x297744u: goto label_297744;
        case 0x297748u: goto label_297748;
        case 0x29774cu: goto label_29774c;
        case 0x297750u: goto label_297750;
        case 0x297754u: goto label_297754;
        case 0x297758u: goto label_297758;
        case 0x29775cu: goto label_29775c;
        case 0x297760u: goto label_297760;
        case 0x297764u: goto label_297764;
        case 0x297768u: goto label_297768;
        case 0x29776cu: goto label_29776c;
        default: break;
    }

    ctx->pc = 0x297350u;

label_297350:
    // 0x297350: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x297350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_297354:
    // 0x297354: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_297358:
    // 0x297358: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x297358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_29735c:
    // 0x29735c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x29735cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_297360:
    // 0x297360: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x297360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_297364:
    // 0x297364: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x297364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_297368:
    // 0x297368: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x297368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_29736c:
    // 0x29736c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x29736cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_297370:
    // 0x297370: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x297370u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_297374:
    // 0x297374: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x297374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_297378:
    // 0x297378: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x297378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29737c:
    // 0x29737c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x29737cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_297380:
    // 0x297380: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x297380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_297384:
    // 0x297384: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x297384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_297388:
    // 0x297388: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x297388u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_29738c:
    // 0x29738c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x29738cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_297390:
    // 0x297390: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x297390u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_297394:
    // 0x297394: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x297394u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_297398:
    // 0x297398: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x297398u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_29739c:
    // 0x29739c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x29739cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2973a0:
    // 0x2973a0: 0x2a51821  addu        $v1, $s5, $a1
    ctx->pc = 0x2973a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_2973a4:
    // 0x2973a4: 0x8c630fac  lw          $v1, 0xFAC($v1)
    ctx->pc = 0x2973a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4012)));
label_2973a8:
    // 0x2973a8: 0x106000df  beqz        $v1, . + 4 + (0xDF << 2)
label_2973ac:
    if (ctx->pc == 0x2973ACu) {
        ctx->pc = 0x2973B0u;
        goto label_2973b0;
    }
    ctx->pc = 0x2973A8u;
    {
        const bool branch_taken_0x2973a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2973a8) {
            ctx->pc = 0x297728u;
            goto label_297728;
        }
    }
    ctx->pc = 0x2973B0u;
label_2973b0:
    // 0x2973b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2973b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2973b4:
    // 0x2973b4: 0x28830008  slti        $v1, $a0, 0x8
    ctx->pc = 0x2973b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
label_2973b8:
    // 0x2973b8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_2973bc:
    if (ctx->pc == 0x2973BCu) {
        ctx->pc = 0x2973BCu;
            // 0x2973bc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x2973C0u;
        goto label_2973c0;
    }
    ctx->pc = 0x2973B8u;
    {
        const bool branch_taken_0x2973b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2973BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2973B8u;
            // 0x2973bc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2973b8) {
            ctx->pc = 0x2973A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2973a0;
        }
    }
    ctx->pc = 0x2973C0u;
label_2973c0:
    // 0x2973c0: 0x8ea30ff0  lw          $v1, 0xFF0($s5)
    ctx->pc = 0x2973c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4080)));
label_2973c4:
    // 0x2973c4: 0x106000d8  beqz        $v1, . + 4 + (0xD8 << 2)
label_2973c8:
    if (ctx->pc == 0x2973C8u) {
        ctx->pc = 0x2973C8u;
            // 0x2973c8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2973CCu;
        goto label_2973cc;
    }
    ctx->pc = 0x2973C4u;
    {
        const bool branch_taken_0x2973c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2973C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2973C4u;
            // 0x2973c8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2973c4) {
            ctx->pc = 0x297728u;
            goto label_297728;
        }
    }
    ctx->pc = 0x2973CCu;
label_2973cc:
    // 0x2973cc: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_2973d0:
    if (ctx->pc == 0x2973D0u) {
        ctx->pc = 0x2973D0u;
            // 0x2973d0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2973D4u;
        goto label_2973d4;
    }
    ctx->pc = 0x2973CCu;
    {
        const bool branch_taken_0x2973cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2973D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2973CCu;
            // 0x2973d0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2973cc) {
            ctx->pc = 0x297718u;
            goto label_297718;
        }
    }
    ctx->pc = 0x2973D4u;
label_2973d4:
    // 0x2973d4: 0x8c700f54  lw          $s0, 0xF54($v1)
    ctx->pc = 0x2973d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3924)));
label_2973d8:
    // 0x2973d8: 0x120000cc  beqz        $s0, . + 4 + (0xCC << 2)
label_2973dc:
    if (ctx->pc == 0x2973DCu) {
        ctx->pc = 0x2973DCu;
            // 0x2973dc: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->pc = 0x2973E0u;
        goto label_2973e0;
    }
    ctx->pc = 0x2973D8u;
    {
        const bool branch_taken_0x2973d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2973DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2973D8u;
            // 0x2973dc: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2973d8) {
            ctx->pc = 0x29770Cu;
            goto label_29770c;
        }
    }
    ctx->pc = 0x2973E0u;
label_2973e0:
    // 0x2973e0: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2973e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2973e4:
    // 0x2973e4: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2973e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2973e8:
    // 0x2973e8: 0x8e160004  lw          $s6, 0x4($s0)
    ctx->pc = 0x2973e8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2973ec:
    // 0x2973ec: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2973ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2973f0:
    // 0x2973f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2973f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2973f4:
    // 0x2973f4: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2973f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_2973f8:
    // 0x2973f8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2973f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2973fc:
    // 0x2973fc: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x2973fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_297400:
    // 0x297400: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x297400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_297404:
    // 0x297404: 0xc6180024  lwc1        $f24, 0x24($s0)
    ctx->pc = 0x297404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_297408:
    // 0x297408: 0x46040503  div.s       $f20, $f0, $f4
    ctx->pc = 0x297408u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
label_29740c:
    // 0x29740c: 0x46020583  div.s       $f22, $f0, $f2
    ctx->pc = 0x29740cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_297410:
    // 0x297410: 0x46041803  div.s       $f0, $f3, $f4
    ctx->pc = 0x297410u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[4]); }
label_297414:
    // 0x297414: 0x46021d43  div.s       $f21, $f3, $f2
    ctx->pc = 0x297414u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
label_297418:
    // 0x297418: 0x0  nop
    ctx->pc = 0x297418u;
    // NOP
label_29741c:
    // 0x29741c: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x29741cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_297420:
    // 0x297420: 0x102000ba  beqz        $at, . + 4 + (0xBA << 2)
label_297424:
    if (ctx->pc == 0x297424u) {
        ctx->pc = 0x297424u;
            // 0x297424: 0x46000dc0  add.s       $f23, $f1, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x297428u;
        goto label_297428;
    }
    ctx->pc = 0x297420u;
    {
        const bool branch_taken_0x297420 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x297424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297420u;
            // 0x297424: 0x46000dc0  add.s       $f23, $f1, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297420) {
            ctx->pc = 0x29770Cu;
            goto label_29770c;
        }
    }
    ctx->pc = 0x297428u;
label_297428:
    // 0x297428: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x297428u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_29742c:
    // 0x29742c: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x29742cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_297430:
    // 0x297430: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x297430u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_297434:
    // 0x297434: 0x102000af  beqz        $at, . + 4 + (0xAF << 2)
label_297438:
    if (ctx->pc == 0x297438u) {
        ctx->pc = 0x297438u;
            // 0x297438: 0x46140640  add.s       $f25, $f0, $f20 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x29743Cu;
        goto label_29743c;
    }
    ctx->pc = 0x297434u;
    {
        const bool branch_taken_0x297434 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x297438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297434u;
            // 0x297438: 0x46140640  add.s       $f25, $f0, $f20 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297434) {
            ctx->pc = 0x2976F4u;
            goto label_2976f4;
        }
    }
    ctx->pc = 0x29743Cu;
label_29743c:
    // 0x29743c: 0x0  nop
    ctx->pc = 0x29743cu;
    // NOP
label_297440:
    // 0x297440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_297444:
    // 0x297444: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x297444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_297448:
    // 0x297448: 0xc0a5e58  jal         func_297960
label_29744c:
    if (ctx->pc == 0x29744Cu) {
        ctx->pc = 0x29744Cu;
            // 0x29744c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x297450u;
        goto label_297450;
    }
    ctx->pc = 0x297448u;
    SET_GPR_U32(ctx, 31, 0x297450u);
    ctx->pc = 0x29744Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297448u;
            // 0x29744c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297960u;
    if (runtime->hasFunction(0x297960u)) {
        auto targetFn = runtime->lookupFunction(0x297960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297450u; }
        if (ctx->pc != 0x297450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFast__9CEditGridFii_0x297960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297450u; }
        if (ctx->pc != 0x297450u) { return; }
    }
    ctx->pc = 0x297450u;
label_297450:
    // 0x297450: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x297450u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_297454:
    // 0x297454: 0x128000a2  beqz        $s4, . + 4 + (0xA2 << 2)
label_297458:
    if (ctx->pc == 0x297458u) {
        ctx->pc = 0x29745Cu;
        goto label_29745c;
    }
    ctx->pc = 0x297454u;
    {
        const bool branch_taken_0x297454 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x297454) {
            ctx->pc = 0x2976E0u;
            goto label_2976e0;
        }
    }
    ctx->pc = 0x29745Cu;
label_29745c:
    // 0x29745c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x29745cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_297460:
    // 0x297460: 0x1060009f  beqz        $v1, . + 4 + (0x9F << 2)
label_297464:
    if (ctx->pc == 0x297464u) {
        ctx->pc = 0x297468u;
        goto label_297468;
    }
    ctx->pc = 0x297460u;
    {
        const bool branch_taken_0x297460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x297460) {
            ctx->pc = 0x2976E0u;
            goto label_2976e0;
        }
    }
    ctx->pc = 0x297468u;
label_297468:
    // 0x297468: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x297468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_29746c:
    // 0x29746c: 0x3c090035  lui         $t1, 0x35
    ctx->pc = 0x29746cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)53 << 16));
label_297470:
    // 0x297470: 0x244241c0  addiu       $v0, $v0, 0x41C0
    ctx->pc = 0x297470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16832));
label_297474:
    // 0x297474: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x297474u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
label_297478:
    // 0x297478: 0x784a0000  lq          $t2, 0x0($v0)
    ctx->pc = 0x297478u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_29747c:
    // 0x29747c: 0x27ab00c0  addiu       $t3, $sp, 0xC0
    ctx->pc = 0x29747cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_297480:
    // 0x297480: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x297480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_297484:
    // 0x297484: 0x252941d0  addiu       $t1, $t1, 0x41D0
    ctx->pc = 0x297484u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16848));
label_297488:
    // 0x297488: 0x4615b881  sub.s       $f2, $f23, $f21
    ctx->pc = 0x297488u;
    ctx->f[2] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
label_29748c:
    // 0x29748c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x29748cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_297490:
    // 0x297490: 0x24e741e0  addiu       $a3, $a3, 0x41E0
    ctx->pc = 0x297490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16864));
label_297494:
    // 0x297494: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x297494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_297498:
    // 0x297498: 0x248441f0  addiu       $a0, $a0, 0x41F0
    ctx->pc = 0x297498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16880));
label_29749c:
    // 0x29749c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x29749cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2974a0:
    // 0x2974a0: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x2974a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2974a4:
    // 0x2974a4: 0x7d6a0000  sq          $t2, 0x0($t3)
    ctx->pc = 0x2974a4u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 10));
label_2974a8:
    // 0x2974a8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2974a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2974ac:
    // 0x2974ac: 0xe7b700c0  swc1        $f23, 0xC0($sp)
    ctx->pc = 0x2974acu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2974b0:
    // 0x2974b0: 0x24424200  addiu       $v0, $v0, 0x4200
    ctx->pc = 0x2974b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16896));
label_2974b4:
    // 0x2974b4: 0xe7b800c4  swc1        $f24, 0xC4($sp)
    ctx->pc = 0x2974b4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2974b8:
    // 0x2974b8: 0xe7b900c8  swc1        $f25, 0xC8($sp)
    ctx->pc = 0x2974b8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2974bc:
    // 0x2974bc: 0x79290000  lq          $t1, 0x0($t1)
    ctx->pc = 0x2974bcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_2974c0:
    // 0x2974c0: 0x4616c801  sub.s       $f0, $f25, $f22
    ctx->pc = 0x2974c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[25], ctx->f[22]);
label_2974c4:
    // 0x2974c4: 0x4615b840  add.s       $f1, $f23, $f21
    ctx->pc = 0x2974c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
label_2974c8:
    // 0x2974c8: 0x7ca90000  sq          $t1, 0x0($a1)
    ctx->pc = 0x2974c8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 9));
label_2974cc:
    // 0x2974cc: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x2974ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2974d0:
    // 0x2974d0: 0xe7b800d4  swc1        $f24, 0xD4($sp)
    ctx->pc = 0x2974d0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_2974d4:
    // 0x2974d4: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2974d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2974d8:
    // 0x2974d8: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x2974d8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_2974dc:
    // 0x2974dc: 0x4616c8c0  add.s       $f3, $f25, $f22
    ctx->pc = 0x2974dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[25], ctx->f[22]);
label_2974e0:
    // 0x2974e0: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x2974e0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
label_2974e4:
    // 0x2974e4: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2974e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_2974e8:
    // 0x2974e8: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x2974e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2974ec:
    // 0x2974ec: 0xe7b800e4  swc1        $f24, 0xE4($sp)
    ctx->pc = 0x2974ecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_2974f0:
    // 0x2974f0: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x2974f0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2974f4:
    // 0x2974f4: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x2974f4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
label_2974f8:
    // 0x2974f8: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x2974f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2974fc:
    // 0x2974fc: 0xe7b800f4  swc1        $f24, 0xF4($sp)
    ctx->pc = 0x2974fcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_297500:
    // 0x297500: 0xe7a300f8  swc1        $f3, 0xF8($sp)
    ctx->pc = 0x297500u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_297504:
    // 0x297504: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x297504u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_297508:
    // 0x297508: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x297508u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_29750c:
    // 0x29750c: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x29750cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_297510:
    // 0x297510: 0xe7a30108  swc1        $f3, 0x108($sp)
    ctx->pc = 0x297510u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_297514:
    // 0x297514: 0xe7b80104  swc1        $f24, 0x104($sp)
    ctx->pc = 0x297514u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_297518:
    // 0x297518: 0x86820004  lh          $v0, 0x4($s4)
    ctx->pc = 0x297518u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_29751c:
    // 0x29751c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29751cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_297520:
    // 0x297520: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x297520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_297524:
    // 0x297524: 0x8c440fac  lw          $a0, 0xFAC($v0)
    ctx->pc = 0x297524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4012)));
label_297528:
    // 0x297528: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x297528u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29752c:
    // 0x29752c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x29752cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_297530:
    // 0x297530: 0x320f809  jalr        $t9
label_297534:
    if (ctx->pc == 0x297534u) {
        ctx->pc = 0x297538u;
        goto label_297538;
    }
    ctx->pc = 0x297530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x297538u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x297538u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x297538u; }
            if (ctx->pc != 0x297538u) { return; }
        }
        }
    }
    ctx->pc = 0x297538u;
label_297538:
    // 0x297538: 0x86830004  lh          $v1, 0x4($s4)
    ctx->pc = 0x297538u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_29753c:
    // 0x29753c: 0x8682000c  lh          $v0, 0xC($s4)
    ctx->pc = 0x29753cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_297540:
    // 0x297540: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x297540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_297544:
    // 0x297544: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x297544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_297548:
    // 0x297548: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x297548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_29754c:
    // 0x29754c: 0x8c630fac  lw          $v1, 0xFAC($v1)
    ctx->pc = 0x29754cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4012)));
label_297550:
    // 0x297550: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x297550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_297554:
    // 0x297554: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x297554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_297558:
    // 0x297558: 0xc04dd64  jal         func_137590
label_29755c:
    if (ctx->pc == 0x29755Cu) {
        ctx->pc = 0x29755Cu;
            // 0x29755c: 0x246400c0  addiu       $a0, $v1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
        ctx->pc = 0x297560u;
        goto label_297560;
    }
    ctx->pc = 0x297558u;
    SET_GPR_U32(ctx, 31, 0x297560u);
    ctx->pc = 0x29755Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297558u;
            // 0x29755c: 0x246400c0  addiu       $a0, $v1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297560u; }
        if (ctx->pc != 0x297560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297560u; }
        if (ctx->pc != 0x297560u) { return; }
    }
    ctx->pc = 0x297560u;
label_297560:
    // 0x297560: 0x86820004  lh          $v0, 0x4($s4)
    ctx->pc = 0x297560u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_297564:
    // 0x297564: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x297564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_297568:
    // 0x297568: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x297568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_29756c:
    // 0x29756c: 0x8c440fac  lw          $a0, 0xFAC($v0)
    ctx->pc = 0x29756cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4012)));
label_297570:
    // 0x297570: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x297570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_297574:
    // 0x297574: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x297574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_297578:
    // 0x297578: 0x320f809  jalr        $t9
label_29757c:
    if (ctx->pc == 0x29757Cu) {
        ctx->pc = 0x297580u;
        goto label_297580;
    }
    ctx->pc = 0x297578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x297580u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x297580u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x297580u; }
            if (ctx->pc != 0x297580u) { return; }
        }
        }
    }
    ctx->pc = 0x297580u;
label_297580:
    // 0x297580: 0x86820006  lh          $v0, 0x6($s4)
    ctx->pc = 0x297580u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
label_297584:
    // 0x297584: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x297584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_297588:
    // 0x297588: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x297588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_29758c:
    // 0x29758c: 0x8c440fac  lw          $a0, 0xFAC($v0)
    ctx->pc = 0x29758cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4012)));
label_297590:
    // 0x297590: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x297590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_297594:
    // 0x297594: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x297594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_297598:
    // 0x297598: 0x320f809  jalr        $t9
label_29759c:
    if (ctx->pc == 0x29759Cu) {
        ctx->pc = 0x29759Cu;
            // 0x29759c: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2975A0u;
        goto label_2975a0;
    }
    ctx->pc = 0x297598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2975A0u);
        ctx->pc = 0x29759Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297598u;
            // 0x29759c: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2975A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2975A0u; }
            if (ctx->pc != 0x2975A0u) { return; }
        }
        }
    }
    ctx->pc = 0x2975A0u;
label_2975a0:
    // 0x2975a0: 0x86830006  lh          $v1, 0x6($s4)
    ctx->pc = 0x2975a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
label_2975a4:
    // 0x2975a4: 0x8682000e  lh          $v0, 0xE($s4)
    ctx->pc = 0x2975a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_2975a8:
    // 0x2975a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2975a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2975ac:
    // 0x2975ac: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2975acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_2975b0:
    // 0x2975b0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2975b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2975b4:
    // 0x2975b4: 0x8c630fac  lw          $v1, 0xFAC($v1)
    ctx->pc = 0x2975b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4012)));
label_2975b8:
    // 0x2975b8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2975b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2975bc:
    // 0x2975bc: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x2975bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2975c0:
    // 0x2975c0: 0xc04dd64  jal         func_137590
label_2975c4:
    if (ctx->pc == 0x2975C4u) {
        ctx->pc = 0x2975C4u;
            // 0x2975c4: 0x246400c0  addiu       $a0, $v1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
        ctx->pc = 0x2975C8u;
        goto label_2975c8;
    }
    ctx->pc = 0x2975C0u;
    SET_GPR_U32(ctx, 31, 0x2975C8u);
    ctx->pc = 0x2975C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2975C0u;
            // 0x2975c4: 0x246400c0  addiu       $a0, $v1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2975C8u; }
        if (ctx->pc != 0x2975C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2975C8u; }
        if (ctx->pc != 0x2975C8u) { return; }
    }
    ctx->pc = 0x2975C8u;
label_2975c8:
    // 0x2975c8: 0x86820006  lh          $v0, 0x6($s4)
    ctx->pc = 0x2975c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
label_2975cc:
    // 0x2975cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2975ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2975d0:
    // 0x2975d0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2975d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2975d4:
    // 0x2975d4: 0x8c440fac  lw          $a0, 0xFAC($v0)
    ctx->pc = 0x2975d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4012)));
label_2975d8:
    // 0x2975d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2975d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2975dc:
    // 0x2975dc: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x2975dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_2975e0:
    // 0x2975e0: 0x320f809  jalr        $t9
label_2975e4:
    if (ctx->pc == 0x2975E4u) {
        ctx->pc = 0x2975E8u;
        goto label_2975e8;
    }
    ctx->pc = 0x2975E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2975E8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2975E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2975E8u; }
            if (ctx->pc != 0x2975E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2975E8u;
label_2975e8:
    // 0x2975e8: 0x86820008  lh          $v0, 0x8($s4)
    ctx->pc = 0x2975e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
label_2975ec:
    // 0x2975ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2975ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2975f0:
    // 0x2975f0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2975f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2975f4:
    // 0x2975f4: 0x8c440fac  lw          $a0, 0xFAC($v0)
    ctx->pc = 0x2975f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4012)));
label_2975f8:
    // 0x2975f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2975f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2975fc:
    // 0x2975fc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2975fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_297600:
    // 0x297600: 0x320f809  jalr        $t9
label_297604:
    if (ctx->pc == 0x297604u) {
        ctx->pc = 0x297604u;
            // 0x297604: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x297608u;
        goto label_297608;
    }
    ctx->pc = 0x297600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x297608u);
        ctx->pc = 0x297604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297600u;
            // 0x297604: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x297608u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x297608u; }
            if (ctx->pc != 0x297608u) { return; }
        }
        }
    }
    ctx->pc = 0x297608u;
label_297608:
    // 0x297608: 0x86830008  lh          $v1, 0x8($s4)
    ctx->pc = 0x297608u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
label_29760c:
    // 0x29760c: 0x86820010  lh          $v0, 0x10($s4)
    ctx->pc = 0x29760cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
label_297610:
    // 0x297610: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x297610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_297614:
    // 0x297614: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x297614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_297618:
    // 0x297618: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x297618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_29761c:
    // 0x29761c: 0x8c630fac  lw          $v1, 0xFAC($v1)
    ctx->pc = 0x29761cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4012)));
label_297620:
    // 0x297620: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x297620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_297624:
    // 0x297624: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x297624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_297628:
    // 0x297628: 0xc04dd64  jal         func_137590
label_29762c:
    if (ctx->pc == 0x29762Cu) {
        ctx->pc = 0x29762Cu;
            // 0x29762c: 0x246400c0  addiu       $a0, $v1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
        ctx->pc = 0x297630u;
        goto label_297630;
    }
    ctx->pc = 0x297628u;
    SET_GPR_U32(ctx, 31, 0x297630u);
    ctx->pc = 0x29762Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297628u;
            // 0x29762c: 0x246400c0  addiu       $a0, $v1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297630u; }
        if (ctx->pc != 0x297630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297630u; }
        if (ctx->pc != 0x297630u) { return; }
    }
    ctx->pc = 0x297630u;
label_297630:
    // 0x297630: 0x86820008  lh          $v0, 0x8($s4)
    ctx->pc = 0x297630u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
label_297634:
    // 0x297634: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x297634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_297638:
    // 0x297638: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x297638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_29763c:
    // 0x29763c: 0x8c440fac  lw          $a0, 0xFAC($v0)
    ctx->pc = 0x29763cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4012)));
label_297640:
    // 0x297640: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x297640u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_297644:
    // 0x297644: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x297644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_297648:
    // 0x297648: 0x320f809  jalr        $t9
label_29764c:
    if (ctx->pc == 0x29764Cu) {
        ctx->pc = 0x297650u;
        goto label_297650;
    }
    ctx->pc = 0x297648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x297650u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x297650u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x297650u; }
            if (ctx->pc != 0x297650u) { return; }
        }
        }
    }
    ctx->pc = 0x297650u;
label_297650:
    // 0x297650: 0x8682000a  lh          $v0, 0xA($s4)
    ctx->pc = 0x297650u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
label_297654:
    // 0x297654: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x297654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_297658:
    // 0x297658: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x297658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_29765c:
    // 0x29765c: 0x8c440fac  lw          $a0, 0xFAC($v0)
    ctx->pc = 0x29765cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4012)));
label_297660:
    // 0x297660: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x297660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_297664:
    // 0x297664: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x297664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_297668:
    // 0x297668: 0x320f809  jalr        $t9
label_29766c:
    if (ctx->pc == 0x29766Cu) {
        ctx->pc = 0x29766Cu;
            // 0x29766c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x297670u;
        goto label_297670;
    }
    ctx->pc = 0x297668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x297670u);
        ctx->pc = 0x29766Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297668u;
            // 0x29766c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x297670u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x297670u; }
            if (ctx->pc != 0x297670u) { return; }
        }
        }
    }
    ctx->pc = 0x297670u;
label_297670:
    // 0x297670: 0x8683000a  lh          $v1, 0xA($s4)
    ctx->pc = 0x297670u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
label_297674:
    // 0x297674: 0x86820012  lh          $v0, 0x12($s4)
    ctx->pc = 0x297674u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
label_297678:
    // 0x297678: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x297678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_29767c:
    // 0x29767c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x29767cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_297680:
    // 0x297680: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x297680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_297684:
    // 0x297684: 0x8c630fac  lw          $v1, 0xFAC($v1)
    ctx->pc = 0x297684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4012)));
label_297688:
    // 0x297688: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x297688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_29768c:
    // 0x29768c: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x29768cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_297690:
    // 0x297690: 0xc04dd64  jal         func_137590
label_297694:
    if (ctx->pc == 0x297694u) {
        ctx->pc = 0x297694u;
            // 0x297694: 0x246400c0  addiu       $a0, $v1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
        ctx->pc = 0x297698u;
        goto label_297698;
    }
    ctx->pc = 0x297690u;
    SET_GPR_U32(ctx, 31, 0x297698u);
    ctx->pc = 0x297694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297690u;
            // 0x297694: 0x246400c0  addiu       $a0, $v1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297698u; }
        if (ctx->pc != 0x297698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297698u; }
        if (ctx->pc != 0x297698u) { return; }
    }
    ctx->pc = 0x297698u;
label_297698:
    // 0x297698: 0x8682000a  lh          $v0, 0xA($s4)
    ctx->pc = 0x297698u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
label_29769c:
    // 0x29769c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29769cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2976a0:
    // 0x2976a0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2976a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2976a4:
    // 0x2976a4: 0x8c440fac  lw          $a0, 0xFAC($v0)
    ctx->pc = 0x2976a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4012)));
label_2976a8:
    // 0x2976a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2976a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2976ac:
    // 0x2976ac: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x2976acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_2976b0:
    // 0x2976b0: 0x320f809  jalr        $t9
label_2976b4:
    if (ctx->pc == 0x2976B4u) {
        ctx->pc = 0x2976B8u;
        goto label_2976b8;
    }
    ctx->pc = 0x2976B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2976B8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2976B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2976B8u; }
            if (ctx->pc != 0x2976B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2976B8u;
label_2976b8:
    // 0x2976b8: 0x8ea40ff0  lw          $a0, 0xFF0($s5)
    ctx->pc = 0x2976b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4080)));
label_2976bc:
    // 0x2976bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2976bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2976c0:
    // 0x2976c0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2976c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2976c4:
    // 0x2976c4: 0x320f809  jalr        $t9
label_2976c8:
    if (ctx->pc == 0x2976C8u) {
        ctx->pc = 0x2976C8u;
            // 0x2976c8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2976CCu;
        goto label_2976cc;
    }
    ctx->pc = 0x2976C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2976CCu);
        ctx->pc = 0x2976C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2976C4u;
            // 0x2976c8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2976CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2976CCu; }
            if (ctx->pc != 0x2976CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2976CCu;
label_2976cc:
    // 0x2976cc: 0x8ea40ff0  lw          $a0, 0xFF0($s5)
    ctx->pc = 0x2976ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4080)));
label_2976d0:
    // 0x2976d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2976d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2976d4:
    // 0x2976d4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x2976d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_2976d8:
    // 0x2976d8: 0x320f809  jalr        $t9
label_2976dc:
    if (ctx->pc == 0x2976DCu) {
        ctx->pc = 0x2976E0u;
        goto label_2976e0;
    }
    ctx->pc = 0x2976D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2976E0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2976E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2976E0u; }
            if (ctx->pc != 0x2976E0u) { return; }
        }
        }
    }
    ctx->pc = 0x2976E0u;
label_2976e0:
    // 0x2976e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2976e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2976e4:
    // 0x2976e4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2976e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2976e8:
    // 0x2976e8: 0x276182a  slt         $v1, $s3, $s6
    ctx->pc = 0x2976e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_2976ec:
    // 0x2976ec: 0x1460ff53  bnez        $v1, . + 4 + (-0xAD << 2)
label_2976f0:
    if (ctx->pc == 0x2976F0u) {
        ctx->pc = 0x2976F0u;
            // 0x2976f0: 0x4600ce40  add.s       $f25, $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
        ctx->pc = 0x2976F4u;
        goto label_2976f4;
    }
    ctx->pc = 0x2976ECu;
    {
        const bool branch_taken_0x2976ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2976F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2976ECu;
            // 0x2976f0: 0x4600ce40  add.s       $f25, $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2976ec) {
            ctx->pc = 0x29743Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29743c;
        }
    }
    ctx->pc = 0x2976F4u;
label_2976f4:
    // 0x2976f4: 0x0  nop
    ctx->pc = 0x2976f4u;
    // NOP
label_2976f8:
    // 0x2976f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2976f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2976fc:
    // 0x2976fc: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2976fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_297700:
    // 0x297700: 0x251182a  slt         $v1, $s2, $s1
    ctx->pc = 0x297700u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_297704:
    // 0x297704: 0x1460ff48  bnez        $v1, . + 4 + (-0xB8 << 2)
label_297708:
    if (ctx->pc == 0x297708u) {
        ctx->pc = 0x297708u;
            // 0x297708: 0x4600bdc0  add.s       $f23, $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
        ctx->pc = 0x29770Cu;
        goto label_29770c;
    }
    ctx->pc = 0x297704u;
    {
        const bool branch_taken_0x297704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x297708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297704u;
            // 0x297708: 0x4600bdc0  add.s       $f23, $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297704) {
            ctx->pc = 0x297428u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_297428;
        }
    }
    ctx->pc = 0x29770Cu;
label_29770c:
    // 0x29770c: 0x0  nop
    ctx->pc = 0x29770cu;
    // NOP
label_297710:
    // 0x297710: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x297710u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_297714:
    // 0x297714: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x297714u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_297718:
    // 0x297718: 0x8ea30f50  lw          $v1, 0xF50($s5)
    ctx->pc = 0x297718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3920)));
label_29771c:
    // 0x29771c: 0x3c3182a  slt         $v1, $fp, $v1
    ctx->pc = 0x29771cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_297720:
    // 0x297720: 0x1460ff2c  bnez        $v1, . + 4 + (-0xD4 << 2)
label_297724:
    if (ctx->pc == 0x297724u) {
        ctx->pc = 0x297724u;
            // 0x297724: 0x2b71821  addu        $v1, $s5, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
        ctx->pc = 0x297728u;
        goto label_297728;
    }
    ctx->pc = 0x297720u;
    {
        const bool branch_taken_0x297720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x297724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297720u;
            // 0x297724: 0x2b71821  addu        $v1, $s5, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297720) {
            ctx->pc = 0x2973D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2973d4;
        }
    }
    ctx->pc = 0x297728u;
label_297728:
    // 0x297728: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x297728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_29772c:
    // 0x29772c: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x29772cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_297730:
    // 0x297730: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x297730u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_297734:
    // 0x297734: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x297734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_297738:
    // 0x297738: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x297738u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_29773c:
    // 0x29773c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x29773cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_297740:
    // 0x297740: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x297740u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_297744:
    // 0x297744: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x297744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_297748:
    // 0x297748: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x297748u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_29774c:
    // 0x29774c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x29774cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_297750:
    // 0x297750: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x297750u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_297754:
    // 0x297754: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x297754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_297758:
    // 0x297758: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x297758u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_29775c:
    // 0x29775c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x29775cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_297760:
    // 0x297760: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x297760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_297764:
    // 0x297764: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x297764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_297768:
    // 0x297768: 0x3e00008  jr          $ra
label_29776c:
    if (ctx->pc == 0x29776Cu) {
        ctx->pc = 0x29776Cu;
            // 0x29776c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x297770u;
        goto label_fallthrough_0x297768;
    }
    ctx->pc = 0x297768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29776Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297768u;
            // 0x29776c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x297768:
    ctx->pc = 0x297770u;
}
