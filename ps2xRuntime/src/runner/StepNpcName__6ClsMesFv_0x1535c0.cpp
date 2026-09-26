#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepNpcName__6ClsMesFv
// Address: 0x1535c0 - 0x1538b8
void StepNpcName__6ClsMesFv_0x1535c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepNpcName__6ClsMesFv_0x1535c0");
#endif

    switch (ctx->pc) {
        case 0x1535c0u: goto label_1535c0;
        case 0x1535c4u: goto label_1535c4;
        case 0x1535c8u: goto label_1535c8;
        case 0x1535ccu: goto label_1535cc;
        case 0x1535d0u: goto label_1535d0;
        case 0x1535d4u: goto label_1535d4;
        case 0x1535d8u: goto label_1535d8;
        case 0x1535dcu: goto label_1535dc;
        case 0x1535e0u: goto label_1535e0;
        case 0x1535e4u: goto label_1535e4;
        case 0x1535e8u: goto label_1535e8;
        case 0x1535ecu: goto label_1535ec;
        case 0x1535f0u: goto label_1535f0;
        case 0x1535f4u: goto label_1535f4;
        case 0x1535f8u: goto label_1535f8;
        case 0x1535fcu: goto label_1535fc;
        case 0x153600u: goto label_153600;
        case 0x153604u: goto label_153604;
        case 0x153608u: goto label_153608;
        case 0x15360cu: goto label_15360c;
        case 0x153610u: goto label_153610;
        case 0x153614u: goto label_153614;
        case 0x153618u: goto label_153618;
        case 0x15361cu: goto label_15361c;
        case 0x153620u: goto label_153620;
        case 0x153624u: goto label_153624;
        case 0x153628u: goto label_153628;
        case 0x15362cu: goto label_15362c;
        case 0x153630u: goto label_153630;
        case 0x153634u: goto label_153634;
        case 0x153638u: goto label_153638;
        case 0x15363cu: goto label_15363c;
        case 0x153640u: goto label_153640;
        case 0x153644u: goto label_153644;
        case 0x153648u: goto label_153648;
        case 0x15364cu: goto label_15364c;
        case 0x153650u: goto label_153650;
        case 0x153654u: goto label_153654;
        case 0x153658u: goto label_153658;
        case 0x15365cu: goto label_15365c;
        case 0x153660u: goto label_153660;
        case 0x153664u: goto label_153664;
        case 0x153668u: goto label_153668;
        case 0x15366cu: goto label_15366c;
        case 0x153670u: goto label_153670;
        case 0x153674u: goto label_153674;
        case 0x153678u: goto label_153678;
        case 0x15367cu: goto label_15367c;
        case 0x153680u: goto label_153680;
        case 0x153684u: goto label_153684;
        case 0x153688u: goto label_153688;
        case 0x15368cu: goto label_15368c;
        case 0x153690u: goto label_153690;
        case 0x153694u: goto label_153694;
        case 0x153698u: goto label_153698;
        case 0x15369cu: goto label_15369c;
        case 0x1536a0u: goto label_1536a0;
        case 0x1536a4u: goto label_1536a4;
        case 0x1536a8u: goto label_1536a8;
        case 0x1536acu: goto label_1536ac;
        case 0x1536b0u: goto label_1536b0;
        case 0x1536b4u: goto label_1536b4;
        case 0x1536b8u: goto label_1536b8;
        case 0x1536bcu: goto label_1536bc;
        case 0x1536c0u: goto label_1536c0;
        case 0x1536c4u: goto label_1536c4;
        case 0x1536c8u: goto label_1536c8;
        case 0x1536ccu: goto label_1536cc;
        case 0x1536d0u: goto label_1536d0;
        case 0x1536d4u: goto label_1536d4;
        case 0x1536d8u: goto label_1536d8;
        case 0x1536dcu: goto label_1536dc;
        case 0x1536e0u: goto label_1536e0;
        case 0x1536e4u: goto label_1536e4;
        case 0x1536e8u: goto label_1536e8;
        case 0x1536ecu: goto label_1536ec;
        case 0x1536f0u: goto label_1536f0;
        case 0x1536f4u: goto label_1536f4;
        case 0x1536f8u: goto label_1536f8;
        case 0x1536fcu: goto label_1536fc;
        case 0x153700u: goto label_153700;
        case 0x153704u: goto label_153704;
        case 0x153708u: goto label_153708;
        case 0x15370cu: goto label_15370c;
        case 0x153710u: goto label_153710;
        case 0x153714u: goto label_153714;
        case 0x153718u: goto label_153718;
        case 0x15371cu: goto label_15371c;
        case 0x153720u: goto label_153720;
        case 0x153724u: goto label_153724;
        case 0x153728u: goto label_153728;
        case 0x15372cu: goto label_15372c;
        case 0x153730u: goto label_153730;
        case 0x153734u: goto label_153734;
        case 0x153738u: goto label_153738;
        case 0x15373cu: goto label_15373c;
        case 0x153740u: goto label_153740;
        case 0x153744u: goto label_153744;
        case 0x153748u: goto label_153748;
        case 0x15374cu: goto label_15374c;
        case 0x153750u: goto label_153750;
        case 0x153754u: goto label_153754;
        case 0x153758u: goto label_153758;
        case 0x15375cu: goto label_15375c;
        case 0x153760u: goto label_153760;
        case 0x153764u: goto label_153764;
        case 0x153768u: goto label_153768;
        case 0x15376cu: goto label_15376c;
        case 0x153770u: goto label_153770;
        case 0x153774u: goto label_153774;
        case 0x153778u: goto label_153778;
        case 0x15377cu: goto label_15377c;
        case 0x153780u: goto label_153780;
        case 0x153784u: goto label_153784;
        case 0x153788u: goto label_153788;
        case 0x15378cu: goto label_15378c;
        case 0x153790u: goto label_153790;
        case 0x153794u: goto label_153794;
        case 0x153798u: goto label_153798;
        case 0x15379cu: goto label_15379c;
        case 0x1537a0u: goto label_1537a0;
        case 0x1537a4u: goto label_1537a4;
        case 0x1537a8u: goto label_1537a8;
        case 0x1537acu: goto label_1537ac;
        case 0x1537b0u: goto label_1537b0;
        case 0x1537b4u: goto label_1537b4;
        case 0x1537b8u: goto label_1537b8;
        case 0x1537bcu: goto label_1537bc;
        case 0x1537c0u: goto label_1537c0;
        case 0x1537c4u: goto label_1537c4;
        case 0x1537c8u: goto label_1537c8;
        case 0x1537ccu: goto label_1537cc;
        case 0x1537d0u: goto label_1537d0;
        case 0x1537d4u: goto label_1537d4;
        case 0x1537d8u: goto label_1537d8;
        case 0x1537dcu: goto label_1537dc;
        case 0x1537e0u: goto label_1537e0;
        case 0x1537e4u: goto label_1537e4;
        case 0x1537e8u: goto label_1537e8;
        case 0x1537ecu: goto label_1537ec;
        case 0x1537f0u: goto label_1537f0;
        case 0x1537f4u: goto label_1537f4;
        case 0x1537f8u: goto label_1537f8;
        case 0x1537fcu: goto label_1537fc;
        case 0x153800u: goto label_153800;
        case 0x153804u: goto label_153804;
        case 0x153808u: goto label_153808;
        case 0x15380cu: goto label_15380c;
        case 0x153810u: goto label_153810;
        case 0x153814u: goto label_153814;
        case 0x153818u: goto label_153818;
        case 0x15381cu: goto label_15381c;
        case 0x153820u: goto label_153820;
        case 0x153824u: goto label_153824;
        case 0x153828u: goto label_153828;
        case 0x15382cu: goto label_15382c;
        case 0x153830u: goto label_153830;
        case 0x153834u: goto label_153834;
        case 0x153838u: goto label_153838;
        case 0x15383cu: goto label_15383c;
        case 0x153840u: goto label_153840;
        case 0x153844u: goto label_153844;
        case 0x153848u: goto label_153848;
        case 0x15384cu: goto label_15384c;
        case 0x153850u: goto label_153850;
        case 0x153854u: goto label_153854;
        case 0x153858u: goto label_153858;
        case 0x15385cu: goto label_15385c;
        case 0x153860u: goto label_153860;
        case 0x153864u: goto label_153864;
        case 0x153868u: goto label_153868;
        case 0x15386cu: goto label_15386c;
        case 0x153870u: goto label_153870;
        case 0x153874u: goto label_153874;
        case 0x153878u: goto label_153878;
        case 0x15387cu: goto label_15387c;
        case 0x153880u: goto label_153880;
        case 0x153884u: goto label_153884;
        case 0x153888u: goto label_153888;
        case 0x15388cu: goto label_15388c;
        case 0x153890u: goto label_153890;
        case 0x153894u: goto label_153894;
        case 0x153898u: goto label_153898;
        case 0x15389cu: goto label_15389c;
        case 0x1538a0u: goto label_1538a0;
        case 0x1538a4u: goto label_1538a4;
        case 0x1538a8u: goto label_1538a8;
        case 0x1538acu: goto label_1538ac;
        case 0x1538b0u: goto label_1538b0;
        case 0x1538b4u: goto label_1538b4;
        default: break;
    }

    ctx->pc = 0x1535c0u;

label_1535c0:
    // 0x1535c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1535c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1535c4:
    // 0x1535c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1535c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1535c8:
    // 0x1535c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1535c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1535cc:
    // 0x1535cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1535ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1535d0:
    // 0x1535d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1535d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1535d4:
    // 0x1535d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1535d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1535d8:
    // 0x1535d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1535d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1535dc:
    // 0x1535dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1535dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1535e0:
    // 0x1535e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1535e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1535e4:
    // 0x1535e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1535e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1535e8:
    // 0x1535e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1535e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1535ec:
    // 0x1535ec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1535ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1535f0:
    // 0x1535f0: 0x2654021  addu        $t0, $s3, $a1
    ctx->pc = 0x1535f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_1535f4:
    // 0x1535f4: 0x2663821  addu        $a3, $s3, $a2
    ctx->pc = 0x1535f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_1535f8:
    // 0x1535f8: 0xad001b44  sw          $zero, 0x1B44($t0)
    ctx->pc = 0x1535f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 6980), GPR_U32(ctx, 0));
label_1535fc:
    // 0x1535fc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1535fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_153600:
    // 0x153600: 0xace01b94  sw          $zero, 0x1B94($a3)
    ctx->pc = 0x153600u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7060), GPR_U32(ctx, 0));
label_153604:
    // 0x153604: 0x2882000c  slti        $v0, $a0, 0xC
    ctx->pc = 0x153604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
label_153608:
    // 0x153608: 0xace01b98  sw          $zero, 0x1B98($a3)
    ctx->pc = 0x153608u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7064), GPR_U32(ctx, 0));
label_15360c:
    // 0x15360c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x15360cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_153610:
    // 0x153610: 0xad001c34  sw          $zero, 0x1C34($t0)
    ctx->pc = 0x153610u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7220), GPR_U32(ctx, 0));
label_153614:
    // 0x153614: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x153614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_153618:
    // 0x153618: 0xad031c84  sw          $v1, 0x1C84($t0)
    ctx->pc = 0x153618u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7300), GPR_U32(ctx, 3));
label_15361c:
    // 0x15361c: 0xad001b48  sw          $zero, 0x1B48($t0)
    ctx->pc = 0x15361cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 6984), GPR_U32(ctx, 0));
label_153620:
    // 0x153620: 0xace01b9c  sw          $zero, 0x1B9C($a3)
    ctx->pc = 0x153620u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7068), GPR_U32(ctx, 0));
label_153624:
    // 0x153624: 0xace01ba0  sw          $zero, 0x1BA0($a3)
    ctx->pc = 0x153624u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7072), GPR_U32(ctx, 0));
label_153628:
    // 0x153628: 0xad001c38  sw          $zero, 0x1C38($t0)
    ctx->pc = 0x153628u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7224), GPR_U32(ctx, 0));
label_15362c:
    // 0x15362c: 0xad031c88  sw          $v1, 0x1C88($t0)
    ctx->pc = 0x15362cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7304), GPR_U32(ctx, 3));
label_153630:
    // 0x153630: 0xad001b4c  sw          $zero, 0x1B4C($t0)
    ctx->pc = 0x153630u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 6988), GPR_U32(ctx, 0));
label_153634:
    // 0x153634: 0xace01ba4  sw          $zero, 0x1BA4($a3)
    ctx->pc = 0x153634u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7076), GPR_U32(ctx, 0));
label_153638:
    // 0x153638: 0xace01ba8  sw          $zero, 0x1BA8($a3)
    ctx->pc = 0x153638u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7080), GPR_U32(ctx, 0));
label_15363c:
    // 0x15363c: 0xad001c3c  sw          $zero, 0x1C3C($t0)
    ctx->pc = 0x15363cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7228), GPR_U32(ctx, 0));
label_153640:
    // 0x153640: 0xad031c8c  sw          $v1, 0x1C8C($t0)
    ctx->pc = 0x153640u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7308), GPR_U32(ctx, 3));
label_153644:
    // 0x153644: 0xad001b50  sw          $zero, 0x1B50($t0)
    ctx->pc = 0x153644u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 6992), GPR_U32(ctx, 0));
label_153648:
    // 0x153648: 0xace01bac  sw          $zero, 0x1BAC($a3)
    ctx->pc = 0x153648u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7084), GPR_U32(ctx, 0));
label_15364c:
    // 0x15364c: 0xace01bb0  sw          $zero, 0x1BB0($a3)
    ctx->pc = 0x15364cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7088), GPR_U32(ctx, 0));
label_153650:
    // 0x153650: 0xad001c40  sw          $zero, 0x1C40($t0)
    ctx->pc = 0x153650u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7232), GPR_U32(ctx, 0));
label_153654:
    // 0x153654: 0xad031c90  sw          $v1, 0x1C90($t0)
    ctx->pc = 0x153654u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7312), GPR_U32(ctx, 3));
label_153658:
    // 0x153658: 0xad001b54  sw          $zero, 0x1B54($t0)
    ctx->pc = 0x153658u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 6996), GPR_U32(ctx, 0));
label_15365c:
    // 0x15365c: 0xace01bb4  sw          $zero, 0x1BB4($a3)
    ctx->pc = 0x15365cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7092), GPR_U32(ctx, 0));
label_153660:
    // 0x153660: 0xace01bb8  sw          $zero, 0x1BB8($a3)
    ctx->pc = 0x153660u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7096), GPR_U32(ctx, 0));
label_153664:
    // 0x153664: 0xad001c44  sw          $zero, 0x1C44($t0)
    ctx->pc = 0x153664u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7236), GPR_U32(ctx, 0));
label_153668:
    // 0x153668: 0xad031c94  sw          $v1, 0x1C94($t0)
    ctx->pc = 0x153668u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7316), GPR_U32(ctx, 3));
label_15366c:
    // 0x15366c: 0xad001b58  sw          $zero, 0x1B58($t0)
    ctx->pc = 0x15366cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7000), GPR_U32(ctx, 0));
label_153670:
    // 0x153670: 0xace01bbc  sw          $zero, 0x1BBC($a3)
    ctx->pc = 0x153670u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7100), GPR_U32(ctx, 0));
label_153674:
    // 0x153674: 0xace01bc0  sw          $zero, 0x1BC0($a3)
    ctx->pc = 0x153674u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7104), GPR_U32(ctx, 0));
label_153678:
    // 0x153678: 0xad001c48  sw          $zero, 0x1C48($t0)
    ctx->pc = 0x153678u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7240), GPR_U32(ctx, 0));
label_15367c:
    // 0x15367c: 0xad031c98  sw          $v1, 0x1C98($t0)
    ctx->pc = 0x15367cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7320), GPR_U32(ctx, 3));
label_153680:
    // 0x153680: 0xad001b5c  sw          $zero, 0x1B5C($t0)
    ctx->pc = 0x153680u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7004), GPR_U32(ctx, 0));
label_153684:
    // 0x153684: 0xace01bc4  sw          $zero, 0x1BC4($a3)
    ctx->pc = 0x153684u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7108), GPR_U32(ctx, 0));
label_153688:
    // 0x153688: 0xace01bc8  sw          $zero, 0x1BC8($a3)
    ctx->pc = 0x153688u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7112), GPR_U32(ctx, 0));
label_15368c:
    // 0x15368c: 0xad001c4c  sw          $zero, 0x1C4C($t0)
    ctx->pc = 0x15368cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7244), GPR_U32(ctx, 0));
label_153690:
    // 0x153690: 0xad031c9c  sw          $v1, 0x1C9C($t0)
    ctx->pc = 0x153690u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7324), GPR_U32(ctx, 3));
label_153694:
    // 0x153694: 0xad001b60  sw          $zero, 0x1B60($t0)
    ctx->pc = 0x153694u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7008), GPR_U32(ctx, 0));
label_153698:
    // 0x153698: 0xace01bcc  sw          $zero, 0x1BCC($a3)
    ctx->pc = 0x153698u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7116), GPR_U32(ctx, 0));
label_15369c:
    // 0x15369c: 0xace01bd0  sw          $zero, 0x1BD0($a3)
    ctx->pc = 0x15369cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7120), GPR_U32(ctx, 0));
label_1536a0:
    // 0x1536a0: 0xad001c50  sw          $zero, 0x1C50($t0)
    ctx->pc = 0x1536a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7248), GPR_U32(ctx, 0));
label_1536a4:
    // 0x1536a4: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_1536a8:
    if (ctx->pc == 0x1536A8u) {
        ctx->pc = 0x1536A8u;
            // 0x1536a8: 0xad031ca0  sw          $v1, 0x1CA0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 7328), GPR_U32(ctx, 3));
        ctx->pc = 0x1536ACu;
        goto label_1536ac;
    }
    ctx->pc = 0x1536A4u;
    {
        const bool branch_taken_0x1536a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1536A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1536A4u;
            // 0x1536a8: 0xad031ca0  sw          $v1, 0x1CA0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 7328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1536a4) {
            ctx->pc = 0x1535F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1535f0;
        }
    }
    ctx->pc = 0x1536ACu;
label_1536ac:
    // 0x1536ac: 0x28810014  slti        $at, $a0, 0x14
    ctx->pc = 0x1536acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
label_1536b0:
    // 0x1536b0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_1536b4:
    if (ctx->pc == 0x1536B4u) {
        ctx->pc = 0x1536B4u;
            // 0x1536b4: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x1536B8u;
        goto label_1536b8;
    }
    ctx->pc = 0x1536B0u;
    {
        const bool branch_taken_0x1536b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1536B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1536B0u;
            // 0x1536b4: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1536b0) {
            ctx->pc = 0x1536F0u;
            goto label_1536f0;
        }
    }
    ctx->pc = 0x1536B8u;
label_1536b8:
    // 0x1536b8: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x1536b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1536bc:
    // 0x1536bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1536bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1536c0:
    // 0x1536c0: 0x2653821  addu        $a3, $s3, $a1
    ctx->pc = 0x1536c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_1536c4:
    // 0x1536c4: 0x2661021  addu        $v0, $s3, $a2
    ctx->pc = 0x1536c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_1536c8:
    // 0x1536c8: 0xace01b44  sw          $zero, 0x1B44($a3)
    ctx->pc = 0x1536c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6980), GPR_U32(ctx, 0));
label_1536cc:
    // 0x1536cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1536ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1536d0:
    // 0x1536d0: 0xac401b94  sw          $zero, 0x1B94($v0)
    ctx->pc = 0x1536d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7060), GPR_U32(ctx, 0));
label_1536d4:
    // 0x1536d4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1536d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1536d8:
    // 0x1536d8: 0xac401b98  sw          $zero, 0x1B98($v0)
    ctx->pc = 0x1536d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7064), GPR_U32(ctx, 0));
label_1536dc:
    // 0x1536dc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1536dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_1536e0:
    // 0x1536e0: 0xace01c34  sw          $zero, 0x1C34($a3)
    ctx->pc = 0x1536e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7220), GPR_U32(ctx, 0));
label_1536e4:
    // 0x1536e4: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x1536e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
label_1536e8:
    // 0x1536e8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1536ec:
    if (ctx->pc == 0x1536ECu) {
        ctx->pc = 0x1536ECu;
            // 0x1536ec: 0xace31c84  sw          $v1, 0x1C84($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 7300), GPR_U32(ctx, 3));
        ctx->pc = 0x1536F0u;
        goto label_1536f0;
    }
    ctx->pc = 0x1536E8u;
    {
        const bool branch_taken_0x1536e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1536ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1536E8u;
            // 0x1536ec: 0xace31c84  sw          $v1, 0x1C84($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 7300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1536e8) {
            ctx->pc = 0x1536C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1536c0;
        }
    }
    ctx->pc = 0x1536F0u;
label_1536f0:
    // 0x1536f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1536f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1536f4:
    // 0x1536f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1536f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1536f8:
    // 0x1536f8: 0xc098434  jal         func_2610D0
label_1536fc:
    if (ctx->pc == 0x1536FCu) {
        ctx->pc = 0x1536FCu;
            // 0x1536fc: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x153700u;
        goto label_153700;
    }
    ctx->pc = 0x1536F8u;
    SET_GPR_U32(ctx, 31, 0x153700u);
    ctx->pc = 0x1536FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1536F8u;
            // 0x1536fc: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2610D0u;
    if (runtime->hasFunction(0x2610D0u)) {
        auto targetFn = runtime->lookupFunction(0x2610D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153700u; }
        if (ctx->pc != 0x153700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLocalCnt__Fi_0x2610d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153700u; }
        if (ctx->pc != 0x153700u) { return; }
    }
    ctx->pc = 0x153700u;
label_153700:
    // 0x153700: 0xc0aacf4  jal         func_2AB3D0
label_153704:
    if (ctx->pc == 0x153704u) {
        ctx->pc = 0x153704u;
            // 0x153704: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x153708u;
        goto label_153708;
    }
    ctx->pc = 0x153700u;
    SET_GPR_U32(ctx, 31, 0x153708u);
    ctx->pc = 0x153704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153700u;
            // 0x153704: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB3D0u;
    if (runtime->hasFunction(0x2AB3D0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153708u; }
        if (ctx->pc != 0x153708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNPCName__Fi_0x2ab3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153708u; }
        if (ctx->pc != 0x153708u) { return; }
    }
    ctx->pc = 0x153708u;
label_153708:
    // 0x153708: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_15370c:
    if (ctx->pc == 0x15370Cu) {
        ctx->pc = 0x15370Cu;
            // 0x15370c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x153710u;
        goto label_153710;
    }
    ctx->pc = 0x153708u;
    {
        const bool branch_taken_0x153708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15370Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153708u;
            // 0x15370c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153708) {
            ctx->pc = 0x15371Cu;
            goto label_15371c;
        }
    }
    ctx->pc = 0x153710u;
label_153710:
    // 0x153710: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x153710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_153714:
    // 0x153714: 0xc04a3dc  jal         func_128F70
label_153718:
    if (ctx->pc == 0x153718u) {
        ctx->pc = 0x153718u;
            // 0x153718: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->pc = 0x15371Cu;
        goto label_15371c;
    }
    ctx->pc = 0x153714u;
    SET_GPR_U32(ctx, 31, 0x15371Cu);
    ctx->pc = 0x153718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153714u;
            // 0x153718: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15371Cu; }
        if (ctx->pc != 0x15371Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15371Cu; }
        if (ctx->pc != 0x15371Cu) { return; }
    }
    ctx->pc = 0x15371Cu;
label_15371c:
    // 0x15371c: 0x0  nop
    ctx->pc = 0x15371cu;
    // NOP
label_153720:
    // 0x153720: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x153720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_153724:
    // 0x153724: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x153724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_153728:
    // 0x153728: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_15372c:
    if (ctx->pc == 0x15372Cu) {
        ctx->pc = 0x15372Cu;
            // 0x15372c: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x153730u;
        goto label_153730;
    }
    ctx->pc = 0x153728u;
    {
        const bool branch_taken_0x153728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15372Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153728u;
            // 0x15372c: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153728) {
            ctx->pc = 0x1536F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1536f8;
        }
    }
    ctx->pc = 0x153730u;
label_153730:
    // 0x153730: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x153730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_153734:
    // 0x153734: 0xc0562c8  jal         func_158B20
label_153738:
    if (ctx->pc == 0x153738u) {
        ctx->pc = 0x153738u;
            // 0x153738: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x15373Cu;
        goto label_15373c;
    }
    ctx->pc = 0x153734u;
    SET_GPR_U32(ctx, 31, 0x15373Cu);
    ctx->pc = 0x153738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153734u;
            // 0x153738: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15373Cu; }
        if (ctx->pc != 0x15373Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15373Cu; }
        if (ctx->pc != 0x15373Cu) { return; }
    }
    ctx->pc = 0x15373Cu;
label_15373c:
    // 0x15373c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15373cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_153740:
    // 0x153740: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x153740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_153744:
    // 0x153744: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x153744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_153748:
    // 0x153748: 0xc06421c  jal         func_190870
label_15374c:
    if (ctx->pc == 0x15374Cu) {
        ctx->pc = 0x153750u;
        goto label_153750;
    }
    ctx->pc = 0x153748u;
    SET_GPR_U32(ctx, 31, 0x153750u);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153750u; }
        if (ctx->pc != 0x153750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153750u; }
        if (ctx->pc != 0x153750u) { return; }
    }
    ctx->pc = 0x153750u;
label_153750:
    // 0x153750: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x153750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_153754:
    // 0x153754: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x153754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_153758:
    // 0x153758: 0xc0a11a4  jal         func_284690
label_15375c:
    if (ctx->pc == 0x15375Cu) {
        ctx->pc = 0x15375Cu;
            // 0x15375c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x153760u;
        goto label_153760;
    }
    ctx->pc = 0x153758u;
    SET_GPR_U32(ctx, 31, 0x153760u);
    ctx->pc = 0x15375Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153758u;
            // 0x15375c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284690u;
    if (runtime->hasFunction(0x284690u)) {
        auto targetFn = runtime->lookupFunction(0x284690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153760u; }
        if (ctx->pc != 0x153760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsActive__6CSceneFii_0x284690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153760u; }
        if (ctx->pc != 0x153760u) { return; }
    }
    ctx->pc = 0x153760u;
label_153760:
    // 0x153760: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_153764:
    if (ctx->pc == 0x153764u) {
        ctx->pc = 0x153768u;
        goto label_153768;
    }
    ctx->pc = 0x153760u;
    {
        const bool branch_taken_0x153760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153760) {
            ctx->pc = 0x15387Cu;
            goto label_15387c;
        }
    }
    ctx->pc = 0x153768u;
label_153768:
    // 0x153768: 0xc06421c  jal         func_190870
label_15376c:
    if (ctx->pc == 0x15376Cu) {
        ctx->pc = 0x153770u;
        goto label_153770;
    }
    ctx->pc = 0x153768u;
    SET_GPR_U32(ctx, 31, 0x153770u);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153770u; }
        if (ctx->pc != 0x153770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153770u; }
        if (ctx->pc != 0x153770u) { return; }
    }
    ctx->pc = 0x153770u;
label_153770:
    // 0x153770: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x153770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_153774:
    // 0x153774: 0xc0a0ed8  jal         func_283B60
label_153778:
    if (ctx->pc == 0x153778u) {
        ctx->pc = 0x153778u;
            // 0x153778: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15377Cu;
        goto label_15377c;
    }
    ctx->pc = 0x153774u;
    SET_GPR_U32(ctx, 31, 0x15377Cu);
    ctx->pc = 0x153778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153774u;
            // 0x153778: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15377Cu; }
        if (ctx->pc != 0x15377Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15377Cu; }
        if (ctx->pc != 0x15377Cu) { return; }
    }
    ctx->pc = 0x15377Cu;
label_15377c:
    // 0x15377c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x15377cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_153780:
    // 0x153780: 0x1280003e  beqz        $s4, . + 4 + (0x3E << 2)
label_153784:
    if (ctx->pc == 0x153784u) {
        ctx->pc = 0x153788u;
        goto label_153788;
    }
    ctx->pc = 0x153780u;
    {
        const bool branch_taken_0x153780 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x153780) {
            ctx->pc = 0x15387Cu;
            goto label_15387c;
        }
    }
    ctx->pc = 0x153788u;
label_153788:
    // 0x153788: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x153788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15378c:
    // 0x15378c: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x15378cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_153790:
    // 0x153790: 0x320f809  jalr        $t9
label_153794:
    if (ctx->pc == 0x153794u) {
        ctx->pc = 0x153794u;
            // 0x153794: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x153798u;
        goto label_153798;
    }
    ctx->pc = 0x153790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x153798u);
        ctx->pc = 0x153794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153790u;
            // 0x153794: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x153798u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x153798u; }
            if (ctx->pc != 0x153798u) { return; }
        }
        }
    }
    ctx->pc = 0x153798u;
label_153798:
    // 0x153798: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_15379c:
    if (ctx->pc == 0x15379Cu) {
        ctx->pc = 0x1537A0u;
        goto label_1537a0;
    }
    ctx->pc = 0x153798u;
    {
        const bool branch_taken_0x153798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153798) {
            ctx->pc = 0x15387Cu;
            goto label_15387c;
        }
    }
    ctx->pc = 0x1537A0u;
label_1537a0:
    // 0x1537a0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x1537a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1537a4:
    // 0x1537a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1537a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1537a8:
    // 0x1537a8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1537a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1537ac:
    // 0x1537ac: 0x320f809  jalr        $t9
label_1537b0:
    if (ctx->pc == 0x1537B0u) {
        ctx->pc = 0x1537B0u;
            // 0x1537b0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1537B4u;
        goto label_1537b4;
    }
    ctx->pc = 0x1537ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1537B4u);
        ctx->pc = 0x1537B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1537ACu;
            // 0x1537b0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1537B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1537B4u; }
            if (ctx->pc != 0x1537B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1537B4u;
label_1537b4:
    // 0x1537b4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1537b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1537b8:
    // 0x1537b8: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x1537b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_1537bc:
    // 0x1537bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1537bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1537c0:
    // 0x1537c0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1537c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1537c4:
    // 0x1537c4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1537c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1537c8:
    // 0x1537c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1537c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1537cc:
    // 0x1537cc: 0xc05166c  jal         func_1459B0
label_1537d0:
    if (ctx->pc == 0x1537D0u) {
        ctx->pc = 0x1537D0u;
            // 0x1537d0: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->pc = 0x1537D4u;
        goto label_1537d4;
    }
    ctx->pc = 0x1537CCu;
    SET_GPR_U32(ctx, 31, 0x1537D4u);
    ctx->pc = 0x1537D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1537CCu;
            // 0x1537d0: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1459B0u;
    if (runtime->hasFunction(0x1459B0u)) {
        auto targetFn = runtime->lookupFunction(0x1459B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1537D4u; }
        if (ctx->pc != 0x1537D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldScreen__FPiPf_0x1459b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1537D4u; }
        if (ctx->pc != 0x1537D4u) { return; }
    }
    ctx->pc = 0x1537D4u;
label_1537d4:
    // 0x1537d4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_1537d8:
    if (ctx->pc == 0x1537D8u) {
        ctx->pc = 0x1537DCu;
        goto label_1537dc;
    }
    ctx->pc = 0x1537D4u;
    {
        const bool branch_taken_0x1537d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1537d4) {
            ctx->pc = 0x15387Cu;
            goto label_15387c;
        }
    }
    ctx->pc = 0x1537DCu;
label_1537dc:
    // 0x1537dc: 0x6000027  bltz        $s0, . + 4 + (0x27 << 2)
label_1537e0:
    if (ctx->pc == 0x1537E0u) {
        ctx->pc = 0x1537E0u;
            // 0x1537e0: 0x2a010010  slti        $at, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->pc = 0x1537E4u;
        goto label_1537e4;
    }
    ctx->pc = 0x1537DCu;
    {
        const bool branch_taken_0x1537dc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1537E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1537DCu;
            // 0x1537e0: 0x2a010010  slti        $at, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1537dc) {
            ctx->pc = 0x15387Cu;
            goto label_15387c;
        }
    }
    ctx->pc = 0x1537E4u;
label_1537e4:
    // 0x1537e4: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
label_1537e8:
    if (ctx->pc == 0x1537E8u) {
        ctx->pc = 0x1537E8u;
            // 0x1537e8: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x1537ECu;
        goto label_1537ec;
    }
    ctx->pc = 0x1537E4u;
    {
        const bool branch_taken_0x1537e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1537E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1537E4u;
            // 0x1537e8: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1537e4) {
            ctx->pc = 0x15387Cu;
            goto label_15387c;
        }
    }
    ctx->pc = 0x1537ECu;
label_1537ec:
    // 0x1537ec: 0xc098434  jal         func_2610D0
label_1537f0:
    if (ctx->pc == 0x1537F0u) {
        ctx->pc = 0x1537F4u;
        goto label_1537f4;
    }
    ctx->pc = 0x1537ECu;
    SET_GPR_U32(ctx, 31, 0x1537F4u);
    ctx->pc = 0x2610D0u;
    if (runtime->hasFunction(0x2610D0u)) {
        auto targetFn = runtime->lookupFunction(0x2610D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1537F4u; }
        if (ctx->pc != 0x1537F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLocalCnt__Fi_0x2610d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1537F4u; }
        if (ctx->pc != 0x1537F4u) { return; }
    }
    ctx->pc = 0x1537F4u;
label_1537f4:
    // 0x1537f4: 0xc0aacf4  jal         func_2AB3D0
label_1537f8:
    if (ctx->pc == 0x1537F8u) {
        ctx->pc = 0x1537F8u;
            // 0x1537f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1537FCu;
        goto label_1537fc;
    }
    ctx->pc = 0x1537F4u;
    SET_GPR_U32(ctx, 31, 0x1537FCu);
    ctx->pc = 0x1537F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1537F4u;
            // 0x1537f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB3D0u;
    if (runtime->hasFunction(0x2AB3D0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1537FCu; }
        if (ctx->pc != 0x1537FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNPCName__Fi_0x2ab3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1537FCu; }
        if (ctx->pc != 0x1537FCu) { return; }
    }
    ctx->pc = 0x1537FCu;
label_1537fc:
    // 0x1537fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1537fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_153800:
    // 0x153800: 0xc05484c  jal         func_152130
label_153804:
    if (ctx->pc == 0x153804u) {
        ctx->pc = 0x153804u;
            // 0x153804: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x153808u;
        goto label_153808;
    }
    ctx->pc = 0x153800u;
    SET_GPR_U32(ctx, 31, 0x153808u);
    ctx->pc = 0x153804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153800u;
            // 0x153804: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152130u;
    if (runtime->hasFunction(0x152130u)) {
        auto targetFn = runtime->lookupFunction(0x152130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153808u; }
        if (ctx->pc != 0x153808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStrWidth__6ClsMesFPc_0x152130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153808u; }
        if (ctx->pc != 0x153808u) { return; }
    }
    ctx->pc = 0x153808u;
label_153808:
    // 0x153808: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x153808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_15380c:
    // 0x15380c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x15380cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_153810:
    // 0x153810: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_153814:
    if (ctx->pc == 0x153814u) {
        ctx->pc = 0x153814u;
            // 0x153814: 0x42103  sra         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
        ctx->pc = 0x153818u;
        goto label_153818;
    }
    ctx->pc = 0x153810u;
    {
        const bool branch_taken_0x153810 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x153814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153810u;
            // 0x153814: 0x42103  sra         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153810) {
            ctx->pc = 0x153820u;
            goto label_153820;
        }
    }
    ctx->pc = 0x153818u;
label_153818:
    // 0x153818: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x153818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15381c:
    // 0x15381c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x15381cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_153820:
    // 0x153820: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x153820u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_153824:
    // 0x153824: 0x8e6600c4  lw          $a2, 0xC4($s3)
    ctx->pc = 0x153824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_153828:
    // 0x153828: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x153828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_15382c:
    // 0x15382c: 0x32903  sra         $a1, $v1, 4
    ctx->pc = 0x15382cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 4));
label_153830:
    // 0x153830: 0x4800012  bltz        $a0, . + 4 + (0x12 << 2)
label_153834:
    if (ctx->pc == 0x153834u) {
        ctx->pc = 0x153834u;
            // 0x153834: 0xa62823  subu        $a1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->pc = 0x153838u;
        goto label_153838;
    }
    ctx->pc = 0x153830u;
    {
        const bool branch_taken_0x153830 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x153834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153830u;
            // 0x153834: 0xa62823  subu        $a1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153830) {
            ctx->pc = 0x15387Cu;
            goto label_15387c;
        }
    }
    ctx->pc = 0x153838u;
label_153838:
    // 0x153838: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x153838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_15383c:
    // 0x15383c: 0x28610201  slti        $at, $v1, 0x201
    ctx->pc = 0x15383cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)513) ? 1 : 0);
label_153840:
    // 0x153840: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_153844:
    if (ctx->pc == 0x153844u) {
        ctx->pc = 0x153848u;
        goto label_153848;
    }
    ctx->pc = 0x153840u;
    {
        const bool branch_taken_0x153840 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x153840) {
            ctx->pc = 0x15387Cu;
            goto label_15387c;
        }
    }
    ctx->pc = 0x153848u;
label_153848:
    // 0x153848: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_15384c:
    if (ctx->pc == 0x15384Cu) {
        ctx->pc = 0x15384Cu;
            // 0x15384c: 0xa61821  addu        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->pc = 0x153850u;
        goto label_153850;
    }
    ctx->pc = 0x153848u;
    {
        const bool branch_taken_0x153848 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x15384Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153848u;
            // 0x15384c: 0xa61821  addu        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153848) {
            ctx->pc = 0x15387Cu;
            goto label_15387c;
        }
    }
    ctx->pc = 0x153850u;
label_153850:
    // 0x153850: 0x286101a1  slti        $at, $v1, 0x1A1
    ctx->pc = 0x153850u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)417) ? 1 : 0);
label_153854:
    // 0x153854: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_153858:
    if (ctx->pc == 0x153858u) {
        ctx->pc = 0x153858u;
            // 0x153858: 0x2a010014  slti        $at, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->pc = 0x15385Cu;
        goto label_15385c;
    }
    ctx->pc = 0x153854u;
    {
        const bool branch_taken_0x153854 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x153858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153854u;
            // 0x153858: 0x2a010014  slti        $at, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153854) {
            ctx->pc = 0x15387Cu;
            goto label_15387c;
        }
    }
    ctx->pc = 0x15385Cu;
label_15385c:
    // 0x15385c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_153860:
    if (ctx->pc == 0x153860u) {
        ctx->pc = 0x153860u;
            // 0x153860: 0x2713021  addu        $a2, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->pc = 0x153864u;
        goto label_153864;
    }
    ctx->pc = 0x15385Cu;
    {
        const bool branch_taken_0x15385c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x153860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15385Cu;
            // 0x153860: 0x2713021  addu        $a2, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15385c) {
            ctx->pc = 0x153894u;
            goto label_153894;
        }
    }
    ctx->pc = 0x153864u;
label_153864:
    // 0x153864: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_153868:
    // 0x153868: 0xacc41b94  sw          $a0, 0x1B94($a2)
    ctx->pc = 0x153868u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7060), GPR_U32(ctx, 4));
label_15386c:
    // 0x15386c: 0x2722021  addu        $a0, $s3, $s2
    ctx->pc = 0x15386cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_153870:
    // 0x153870: 0xacc51b98  sw          $a1, 0x1B98($a2)
    ctx->pc = 0x153870u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7064), GPR_U32(ctx, 5));
label_153874:
    // 0x153874: 0xac831c34  sw          $v1, 0x1C34($a0)
    ctx->pc = 0x153874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7220), GPR_U32(ctx, 3));
label_153878:
    // 0x153878: 0xac801c84  sw          $zero, 0x1C84($a0)
    ctx->pc = 0x153878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7300), GPR_U32(ctx, 0));
label_15387c:
    // 0x15387c: 0x0  nop
    ctx->pc = 0x15387cu;
    // NOP
label_153880:
    // 0x153880: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x153880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_153884:
    // 0x153884: 0x2a030038  slti        $v1, $s0, 0x38
    ctx->pc = 0x153884u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)56) ? 1 : 0);
label_153888:
    // 0x153888: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x153888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_15388c:
    // 0x15388c: 0x1460ffae  bnez        $v1, . + 4 + (-0x52 << 2)
label_153890:
    if (ctx->pc == 0x153890u) {
        ctx->pc = 0x153890u;
            // 0x153890: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x153894u;
        goto label_153894;
    }
    ctx->pc = 0x15388Cu;
    {
        const bool branch_taken_0x15388c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x153890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15388Cu;
            // 0x153890: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15388c) {
            ctx->pc = 0x153748u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_153748;
        }
    }
    ctx->pc = 0x153894u;
label_153894:
    // 0x153894: 0x0  nop
    ctx->pc = 0x153894u;
    // NOP
label_153898:
    // 0x153898: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x153898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15389c:
    // 0x15389c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15389cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1538a0:
    // 0x1538a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1538a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1538a4:
    // 0x1538a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1538a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1538a8:
    // 0x1538a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1538a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1538ac:
    // 0x1538ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1538acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1538b0:
    // 0x1538b0: 0x3e00008  jr          $ra
label_1538b4:
    if (ctx->pc == 0x1538B4u) {
        ctx->pc = 0x1538B4u;
            // 0x1538b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1538B8u;
        goto label_fallthrough_0x1538b0;
    }
    ctx->pc = 0x1538B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1538B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1538B0u;
            // 0x1538b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1538b0:
    ctx->pc = 0x1538B8u;
}
