#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SuccessLoop__FP6CSceneP11CPadControl
// Address: 0x301f90 - 0x302550
void SuccessLoop__FP6CSceneP11CPadControl_0x301f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SuccessLoop__FP6CSceneP11CPadControl_0x301f90");
#endif

    switch (ctx->pc) {
        case 0x301f90u: goto label_301f90;
        case 0x301f94u: goto label_301f94;
        case 0x301f98u: goto label_301f98;
        case 0x301f9cu: goto label_301f9c;
        case 0x301fa0u: goto label_301fa0;
        case 0x301fa4u: goto label_301fa4;
        case 0x301fa8u: goto label_301fa8;
        case 0x301facu: goto label_301fac;
        case 0x301fb0u: goto label_301fb0;
        case 0x301fb4u: goto label_301fb4;
        case 0x301fb8u: goto label_301fb8;
        case 0x301fbcu: goto label_301fbc;
        case 0x301fc0u: goto label_301fc0;
        case 0x301fc4u: goto label_301fc4;
        case 0x301fc8u: goto label_301fc8;
        case 0x301fccu: goto label_301fcc;
        case 0x301fd0u: goto label_301fd0;
        case 0x301fd4u: goto label_301fd4;
        case 0x301fd8u: goto label_301fd8;
        case 0x301fdcu: goto label_301fdc;
        case 0x301fe0u: goto label_301fe0;
        case 0x301fe4u: goto label_301fe4;
        case 0x301fe8u: goto label_301fe8;
        case 0x301fecu: goto label_301fec;
        case 0x301ff0u: goto label_301ff0;
        case 0x301ff4u: goto label_301ff4;
        case 0x301ff8u: goto label_301ff8;
        case 0x301ffcu: goto label_301ffc;
        case 0x302000u: goto label_302000;
        case 0x302004u: goto label_302004;
        case 0x302008u: goto label_302008;
        case 0x30200cu: goto label_30200c;
        case 0x302010u: goto label_302010;
        case 0x302014u: goto label_302014;
        case 0x302018u: goto label_302018;
        case 0x30201cu: goto label_30201c;
        case 0x302020u: goto label_302020;
        case 0x302024u: goto label_302024;
        case 0x302028u: goto label_302028;
        case 0x30202cu: goto label_30202c;
        case 0x302030u: goto label_302030;
        case 0x302034u: goto label_302034;
        case 0x302038u: goto label_302038;
        case 0x30203cu: goto label_30203c;
        case 0x302040u: goto label_302040;
        case 0x302044u: goto label_302044;
        case 0x302048u: goto label_302048;
        case 0x30204cu: goto label_30204c;
        case 0x302050u: goto label_302050;
        case 0x302054u: goto label_302054;
        case 0x302058u: goto label_302058;
        case 0x30205cu: goto label_30205c;
        case 0x302060u: goto label_302060;
        case 0x302064u: goto label_302064;
        case 0x302068u: goto label_302068;
        case 0x30206cu: goto label_30206c;
        case 0x302070u: goto label_302070;
        case 0x302074u: goto label_302074;
        case 0x302078u: goto label_302078;
        case 0x30207cu: goto label_30207c;
        case 0x302080u: goto label_302080;
        case 0x302084u: goto label_302084;
        case 0x302088u: goto label_302088;
        case 0x30208cu: goto label_30208c;
        case 0x302090u: goto label_302090;
        case 0x302094u: goto label_302094;
        case 0x302098u: goto label_302098;
        case 0x30209cu: goto label_30209c;
        case 0x3020a0u: goto label_3020a0;
        case 0x3020a4u: goto label_3020a4;
        case 0x3020a8u: goto label_3020a8;
        case 0x3020acu: goto label_3020ac;
        case 0x3020b0u: goto label_3020b0;
        case 0x3020b4u: goto label_3020b4;
        case 0x3020b8u: goto label_3020b8;
        case 0x3020bcu: goto label_3020bc;
        case 0x3020c0u: goto label_3020c0;
        case 0x3020c4u: goto label_3020c4;
        case 0x3020c8u: goto label_3020c8;
        case 0x3020ccu: goto label_3020cc;
        case 0x3020d0u: goto label_3020d0;
        case 0x3020d4u: goto label_3020d4;
        case 0x3020d8u: goto label_3020d8;
        case 0x3020dcu: goto label_3020dc;
        case 0x3020e0u: goto label_3020e0;
        case 0x3020e4u: goto label_3020e4;
        case 0x3020e8u: goto label_3020e8;
        case 0x3020ecu: goto label_3020ec;
        case 0x3020f0u: goto label_3020f0;
        case 0x3020f4u: goto label_3020f4;
        case 0x3020f8u: goto label_3020f8;
        case 0x3020fcu: goto label_3020fc;
        case 0x302100u: goto label_302100;
        case 0x302104u: goto label_302104;
        case 0x302108u: goto label_302108;
        case 0x30210cu: goto label_30210c;
        case 0x302110u: goto label_302110;
        case 0x302114u: goto label_302114;
        case 0x302118u: goto label_302118;
        case 0x30211cu: goto label_30211c;
        case 0x302120u: goto label_302120;
        case 0x302124u: goto label_302124;
        case 0x302128u: goto label_302128;
        case 0x30212cu: goto label_30212c;
        case 0x302130u: goto label_302130;
        case 0x302134u: goto label_302134;
        case 0x302138u: goto label_302138;
        case 0x30213cu: goto label_30213c;
        case 0x302140u: goto label_302140;
        case 0x302144u: goto label_302144;
        case 0x302148u: goto label_302148;
        case 0x30214cu: goto label_30214c;
        case 0x302150u: goto label_302150;
        case 0x302154u: goto label_302154;
        case 0x302158u: goto label_302158;
        case 0x30215cu: goto label_30215c;
        case 0x302160u: goto label_302160;
        case 0x302164u: goto label_302164;
        case 0x302168u: goto label_302168;
        case 0x30216cu: goto label_30216c;
        case 0x302170u: goto label_302170;
        case 0x302174u: goto label_302174;
        case 0x302178u: goto label_302178;
        case 0x30217cu: goto label_30217c;
        case 0x302180u: goto label_302180;
        case 0x302184u: goto label_302184;
        case 0x302188u: goto label_302188;
        case 0x30218cu: goto label_30218c;
        case 0x302190u: goto label_302190;
        case 0x302194u: goto label_302194;
        case 0x302198u: goto label_302198;
        case 0x30219cu: goto label_30219c;
        case 0x3021a0u: goto label_3021a0;
        case 0x3021a4u: goto label_3021a4;
        case 0x3021a8u: goto label_3021a8;
        case 0x3021acu: goto label_3021ac;
        case 0x3021b0u: goto label_3021b0;
        case 0x3021b4u: goto label_3021b4;
        case 0x3021b8u: goto label_3021b8;
        case 0x3021bcu: goto label_3021bc;
        case 0x3021c0u: goto label_3021c0;
        case 0x3021c4u: goto label_3021c4;
        case 0x3021c8u: goto label_3021c8;
        case 0x3021ccu: goto label_3021cc;
        case 0x3021d0u: goto label_3021d0;
        case 0x3021d4u: goto label_3021d4;
        case 0x3021d8u: goto label_3021d8;
        case 0x3021dcu: goto label_3021dc;
        case 0x3021e0u: goto label_3021e0;
        case 0x3021e4u: goto label_3021e4;
        case 0x3021e8u: goto label_3021e8;
        case 0x3021ecu: goto label_3021ec;
        case 0x3021f0u: goto label_3021f0;
        case 0x3021f4u: goto label_3021f4;
        case 0x3021f8u: goto label_3021f8;
        case 0x3021fcu: goto label_3021fc;
        case 0x302200u: goto label_302200;
        case 0x302204u: goto label_302204;
        case 0x302208u: goto label_302208;
        case 0x30220cu: goto label_30220c;
        case 0x302210u: goto label_302210;
        case 0x302214u: goto label_302214;
        case 0x302218u: goto label_302218;
        case 0x30221cu: goto label_30221c;
        case 0x302220u: goto label_302220;
        case 0x302224u: goto label_302224;
        case 0x302228u: goto label_302228;
        case 0x30222cu: goto label_30222c;
        case 0x302230u: goto label_302230;
        case 0x302234u: goto label_302234;
        case 0x302238u: goto label_302238;
        case 0x30223cu: goto label_30223c;
        case 0x302240u: goto label_302240;
        case 0x302244u: goto label_302244;
        case 0x302248u: goto label_302248;
        case 0x30224cu: goto label_30224c;
        case 0x302250u: goto label_302250;
        case 0x302254u: goto label_302254;
        case 0x302258u: goto label_302258;
        case 0x30225cu: goto label_30225c;
        case 0x302260u: goto label_302260;
        case 0x302264u: goto label_302264;
        case 0x302268u: goto label_302268;
        case 0x30226cu: goto label_30226c;
        case 0x302270u: goto label_302270;
        case 0x302274u: goto label_302274;
        case 0x302278u: goto label_302278;
        case 0x30227cu: goto label_30227c;
        case 0x302280u: goto label_302280;
        case 0x302284u: goto label_302284;
        case 0x302288u: goto label_302288;
        case 0x30228cu: goto label_30228c;
        case 0x302290u: goto label_302290;
        case 0x302294u: goto label_302294;
        case 0x302298u: goto label_302298;
        case 0x30229cu: goto label_30229c;
        case 0x3022a0u: goto label_3022a0;
        case 0x3022a4u: goto label_3022a4;
        case 0x3022a8u: goto label_3022a8;
        case 0x3022acu: goto label_3022ac;
        case 0x3022b0u: goto label_3022b0;
        case 0x3022b4u: goto label_3022b4;
        case 0x3022b8u: goto label_3022b8;
        case 0x3022bcu: goto label_3022bc;
        case 0x3022c0u: goto label_3022c0;
        case 0x3022c4u: goto label_3022c4;
        case 0x3022c8u: goto label_3022c8;
        case 0x3022ccu: goto label_3022cc;
        case 0x3022d0u: goto label_3022d0;
        case 0x3022d4u: goto label_3022d4;
        case 0x3022d8u: goto label_3022d8;
        case 0x3022dcu: goto label_3022dc;
        case 0x3022e0u: goto label_3022e0;
        case 0x3022e4u: goto label_3022e4;
        case 0x3022e8u: goto label_3022e8;
        case 0x3022ecu: goto label_3022ec;
        case 0x3022f0u: goto label_3022f0;
        case 0x3022f4u: goto label_3022f4;
        case 0x3022f8u: goto label_3022f8;
        case 0x3022fcu: goto label_3022fc;
        case 0x302300u: goto label_302300;
        case 0x302304u: goto label_302304;
        case 0x302308u: goto label_302308;
        case 0x30230cu: goto label_30230c;
        case 0x302310u: goto label_302310;
        case 0x302314u: goto label_302314;
        case 0x302318u: goto label_302318;
        case 0x30231cu: goto label_30231c;
        case 0x302320u: goto label_302320;
        case 0x302324u: goto label_302324;
        case 0x302328u: goto label_302328;
        case 0x30232cu: goto label_30232c;
        case 0x302330u: goto label_302330;
        case 0x302334u: goto label_302334;
        case 0x302338u: goto label_302338;
        case 0x30233cu: goto label_30233c;
        case 0x302340u: goto label_302340;
        case 0x302344u: goto label_302344;
        case 0x302348u: goto label_302348;
        case 0x30234cu: goto label_30234c;
        case 0x302350u: goto label_302350;
        case 0x302354u: goto label_302354;
        case 0x302358u: goto label_302358;
        case 0x30235cu: goto label_30235c;
        case 0x302360u: goto label_302360;
        case 0x302364u: goto label_302364;
        case 0x302368u: goto label_302368;
        case 0x30236cu: goto label_30236c;
        case 0x302370u: goto label_302370;
        case 0x302374u: goto label_302374;
        case 0x302378u: goto label_302378;
        case 0x30237cu: goto label_30237c;
        case 0x302380u: goto label_302380;
        case 0x302384u: goto label_302384;
        case 0x302388u: goto label_302388;
        case 0x30238cu: goto label_30238c;
        case 0x302390u: goto label_302390;
        case 0x302394u: goto label_302394;
        case 0x302398u: goto label_302398;
        case 0x30239cu: goto label_30239c;
        case 0x3023a0u: goto label_3023a0;
        case 0x3023a4u: goto label_3023a4;
        case 0x3023a8u: goto label_3023a8;
        case 0x3023acu: goto label_3023ac;
        case 0x3023b0u: goto label_3023b0;
        case 0x3023b4u: goto label_3023b4;
        case 0x3023b8u: goto label_3023b8;
        case 0x3023bcu: goto label_3023bc;
        case 0x3023c0u: goto label_3023c0;
        case 0x3023c4u: goto label_3023c4;
        case 0x3023c8u: goto label_3023c8;
        case 0x3023ccu: goto label_3023cc;
        case 0x3023d0u: goto label_3023d0;
        case 0x3023d4u: goto label_3023d4;
        case 0x3023d8u: goto label_3023d8;
        case 0x3023dcu: goto label_3023dc;
        case 0x3023e0u: goto label_3023e0;
        case 0x3023e4u: goto label_3023e4;
        case 0x3023e8u: goto label_3023e8;
        case 0x3023ecu: goto label_3023ec;
        case 0x3023f0u: goto label_3023f0;
        case 0x3023f4u: goto label_3023f4;
        case 0x3023f8u: goto label_3023f8;
        case 0x3023fcu: goto label_3023fc;
        case 0x302400u: goto label_302400;
        case 0x302404u: goto label_302404;
        case 0x302408u: goto label_302408;
        case 0x30240cu: goto label_30240c;
        case 0x302410u: goto label_302410;
        case 0x302414u: goto label_302414;
        case 0x302418u: goto label_302418;
        case 0x30241cu: goto label_30241c;
        case 0x302420u: goto label_302420;
        case 0x302424u: goto label_302424;
        case 0x302428u: goto label_302428;
        case 0x30242cu: goto label_30242c;
        case 0x302430u: goto label_302430;
        case 0x302434u: goto label_302434;
        case 0x302438u: goto label_302438;
        case 0x30243cu: goto label_30243c;
        case 0x302440u: goto label_302440;
        case 0x302444u: goto label_302444;
        case 0x302448u: goto label_302448;
        case 0x30244cu: goto label_30244c;
        case 0x302450u: goto label_302450;
        case 0x302454u: goto label_302454;
        case 0x302458u: goto label_302458;
        case 0x30245cu: goto label_30245c;
        case 0x302460u: goto label_302460;
        case 0x302464u: goto label_302464;
        case 0x302468u: goto label_302468;
        case 0x30246cu: goto label_30246c;
        case 0x302470u: goto label_302470;
        case 0x302474u: goto label_302474;
        case 0x302478u: goto label_302478;
        case 0x30247cu: goto label_30247c;
        case 0x302480u: goto label_302480;
        case 0x302484u: goto label_302484;
        case 0x302488u: goto label_302488;
        case 0x30248cu: goto label_30248c;
        case 0x302490u: goto label_302490;
        case 0x302494u: goto label_302494;
        case 0x302498u: goto label_302498;
        case 0x30249cu: goto label_30249c;
        case 0x3024a0u: goto label_3024a0;
        case 0x3024a4u: goto label_3024a4;
        case 0x3024a8u: goto label_3024a8;
        case 0x3024acu: goto label_3024ac;
        case 0x3024b0u: goto label_3024b0;
        case 0x3024b4u: goto label_3024b4;
        case 0x3024b8u: goto label_3024b8;
        case 0x3024bcu: goto label_3024bc;
        case 0x3024c0u: goto label_3024c0;
        case 0x3024c4u: goto label_3024c4;
        case 0x3024c8u: goto label_3024c8;
        case 0x3024ccu: goto label_3024cc;
        case 0x3024d0u: goto label_3024d0;
        case 0x3024d4u: goto label_3024d4;
        case 0x3024d8u: goto label_3024d8;
        case 0x3024dcu: goto label_3024dc;
        case 0x3024e0u: goto label_3024e0;
        case 0x3024e4u: goto label_3024e4;
        case 0x3024e8u: goto label_3024e8;
        case 0x3024ecu: goto label_3024ec;
        case 0x3024f0u: goto label_3024f0;
        case 0x3024f4u: goto label_3024f4;
        case 0x3024f8u: goto label_3024f8;
        case 0x3024fcu: goto label_3024fc;
        case 0x302500u: goto label_302500;
        case 0x302504u: goto label_302504;
        case 0x302508u: goto label_302508;
        case 0x30250cu: goto label_30250c;
        case 0x302510u: goto label_302510;
        case 0x302514u: goto label_302514;
        case 0x302518u: goto label_302518;
        case 0x30251cu: goto label_30251c;
        case 0x302520u: goto label_302520;
        case 0x302524u: goto label_302524;
        case 0x302528u: goto label_302528;
        case 0x30252cu: goto label_30252c;
        case 0x302530u: goto label_302530;
        case 0x302534u: goto label_302534;
        case 0x302538u: goto label_302538;
        case 0x30253cu: goto label_30253c;
        case 0x302540u: goto label_302540;
        case 0x302544u: goto label_302544;
        case 0x302548u: goto label_302548;
        case 0x30254cu: goto label_30254c;
        default: break;
    }

    ctx->pc = 0x301f90u;

label_301f90:
    // 0x301f90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x301f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_301f94:
    // 0x301f94: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x301f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_301f98:
    // 0x301f98: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x301f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_301f9c:
    // 0x301f9c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x301f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_301fa0:
    // 0x301fa0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x301fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_301fa4:
    // 0x301fa4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x301fa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_301fa8:
    // 0x301fa8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x301fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_301fac:
    // 0x301fac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x301facu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_301fb0:
    // 0x301fb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x301fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_301fb4:
    // 0x301fb4: 0x1260015d  beqz        $s3, . + 4 + (0x15D << 2)
label_301fb8:
    if (ctx->pc == 0x301FB8u) {
        ctx->pc = 0x301FB8u;
            // 0x301fb8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x301FBCu;
        goto label_301fbc;
    }
    ctx->pc = 0x301FB4u;
    {
        const bool branch_taken_0x301fb4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x301FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301FB4u;
            // 0x301fb8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301fb4) {
            ctx->pc = 0x30252Cu;
            goto label_30252c;
        }
    }
    ctx->pc = 0x301FBCu;
label_301fbc:
    // 0x301fbc: 0xc0a0ed8  jal         func_283B60
label_301fc0:
    if (ctx->pc == 0x301FC0u) {
        ctx->pc = 0x301FC0u;
            // 0x301fc0: 0x8e852e50  lw          $a1, 0x2E50($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11856)));
        ctx->pc = 0x301FC4u;
        goto label_301fc4;
    }
    ctx->pc = 0x301FBCu;
    SET_GPR_U32(ctx, 31, 0x301FC4u);
    ctx->pc = 0x301FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301FBCu;
            // 0x301fc0: 0x8e852e50  lw          $a1, 0x2E50($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301FC4u; }
        if (ctx->pc != 0x301FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301FC4u; }
        if (ctx->pc != 0x301FC4u) { return; }
    }
    ctx->pc = 0x301FC4u;
label_301fc4:
    // 0x301fc4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x301fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301fc8:
    // 0x301fc8: 0x12200158  beqz        $s1, . + 4 + (0x158 << 2)
label_301fcc:
    if (ctx->pc == 0x301FCCu) {
        ctx->pc = 0x301FD0u;
        goto label_301fd0;
    }
    ctx->pc = 0x301FC8u;
    {
        const bool branch_taken_0x301fc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x301fc8) {
            ctx->pc = 0x30252Cu;
            goto label_30252c;
        }
    }
    ctx->pc = 0x301FD0u;
label_301fd0:
    // 0x301fd0: 0x8e852e54  lw          $a1, 0x2E54($s4)
    ctx->pc = 0x301fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11860)));
label_301fd4:
    // 0x301fd4: 0xc0a0e30  jal         func_2838C0
label_301fd8:
    if (ctx->pc == 0x301FD8u) {
        ctx->pc = 0x301FD8u;
            // 0x301fd8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301FDCu;
        goto label_301fdc;
    }
    ctx->pc = 0x301FD4u;
    SET_GPR_U32(ctx, 31, 0x301FDCu);
    ctx->pc = 0x301FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301FD4u;
            // 0x301fd8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301FDCu; }
        if (ctx->pc != 0x301FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301FDCu; }
        if (ctx->pc != 0x301FDCu) { return; }
    }
    ctx->pc = 0x301FDCu;
label_301fdc:
    // 0x301fdc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x301fdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301fe0:
    // 0x301fe0: 0x12400152  beqz        $s2, . + 4 + (0x152 << 2)
label_301fe4:
    if (ctx->pc == 0x301FE4u) {
        ctx->pc = 0x301FE8u;
        goto label_301fe8;
    }
    ctx->pc = 0x301FE0u;
    {
        const bool branch_taken_0x301fe0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x301fe0) {
            ctx->pc = 0x30252Cu;
            goto label_30252c;
        }
    }
    ctx->pc = 0x301FE8u;
label_301fe8:
    // 0x301fe8: 0x8e590060  lw          $t9, 0x60($s2)
    ctx->pc = 0x301fe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_301fec:
    // 0x301fec: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x301fecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_301ff0:
    // 0x301ff0: 0x320f809  jalr        $t9
label_301ff4:
    if (ctx->pc == 0x301FF4u) {
        ctx->pc = 0x301FF4u;
            // 0x301ff4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301FF8u;
        goto label_301ff8;
    }
    ctx->pc = 0x301FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301FF8u);
        ctx->pc = 0x301FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301FF0u;
            // 0x301ff4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x301FF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301FF8u; }
            if (ctx->pc != 0x301FF8u) { return; }
        }
        }
    }
    ctx->pc = 0x301FF8u;
label_301ff8:
    // 0x301ff8: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x301ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_301ffc:
    // 0x301ffc: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_302000:
    if (ctx->pc == 0x302000u) {
        ctx->pc = 0x302000u;
            // 0x302000: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302004u;
        goto label_302004;
    }
    ctx->pc = 0x301FFCu;
    {
        const bool branch_taken_0x301ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x302000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301FFCu;
            // 0x302000: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301ffc) {
            ctx->pc = 0x302010u;
            goto label_302010;
        }
    }
    ctx->pc = 0x302004u;
label_302004:
    // 0x302004: 0x1000014a  b           . + 4 + (0x14A << 2)
label_302008:
    if (ctx->pc == 0x302008u) {
        ctx->pc = 0x302008u;
            // 0x302008: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x30200Cu;
        goto label_30200c;
    }
    ctx->pc = 0x302004u;
    {
        const bool branch_taken_0x302004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302004u;
            // 0x302008: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302004) {
            ctx->pc = 0x302530u;
            goto label_302530;
        }
    }
    ctx->pc = 0x30200Cu;
label_30200c:
    // 0x30200c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30200cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_302010:
    // 0x302010: 0xc0a0e78  jal         func_2839E0
label_302014:
    if (ctx->pc == 0x302014u) {
        ctx->pc = 0x302014u;
            // 0x302014: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x302018u;
        goto label_302018;
    }
    ctx->pc = 0x302010u;
    SET_GPR_U32(ctx, 31, 0x302018u);
    ctx->pc = 0x302014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302010u;
            // 0x302014: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2839E0u;
    if (runtime->hasFunction(0x2839E0u)) {
        auto targetFn = runtime->lookupFunction(0x2839E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302018u; }
        if (ctx->pc != 0x302018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMessage__6CSceneFi_0x2839e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302018u; }
        if (ctx->pc != 0x302018u) { return; }
    }
    ctx->pc = 0x302018u;
label_302018:
    // 0x302018: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x302018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30201c:
    // 0x30201c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30201cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302020:
    // 0x302020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302024:
    // 0x302024: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x302024u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_302028:
    // 0x302028: 0x320f809  jalr        $t9
label_30202c:
    if (ctx->pc == 0x30202Cu) {
        ctx->pc = 0x30202Cu;
            // 0x30202c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x302030u;
        goto label_302030;
    }
    ctx->pc = 0x302028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302030u);
        ctx->pc = 0x30202Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302028u;
            // 0x30202c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302030u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302030u; }
            if (ctx->pc != 0x302030u) { return; }
        }
        }
    }
    ctx->pc = 0x302030u;
label_302030:
    // 0x302030: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x302030u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_302034:
    // 0x302034: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302038:
    // 0x302038: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x302038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_30203c:
    // 0x30203c: 0x320f809  jalr        $t9
label_302040:
    if (ctx->pc == 0x302040u) {
        ctx->pc = 0x302040u;
            // 0x302040: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x302044u;
        goto label_302044;
    }
    ctx->pc = 0x30203Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302044u);
        ctx->pc = 0x302040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30203Cu;
            // 0x302040: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302044u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302044u; }
            if (ctx->pc != 0x302044u) { return; }
        }
        }
    }
    ctx->pc = 0x302044u;
label_302044:
    // 0x302044: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x302044u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_302048:
    // 0x302048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30204c:
    // 0x30204c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x30204cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_302050:
    // 0x302050: 0x320f809  jalr        $t9
label_302054:
    if (ctx->pc == 0x302054u) {
        ctx->pc = 0x302054u;
            // 0x302054: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x302058u;
        goto label_302058;
    }
    ctx->pc = 0x302050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302058u);
        ctx->pc = 0x302054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302050u;
            // 0x302054: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302058u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302058u; }
            if (ctx->pc != 0x302058u) { return; }
        }
        }
    }
    ctx->pc = 0x302058u;
label_302058:
    // 0x302058: 0xc0bafe8  jal         func_2EBFA0
label_30205c:
    if (ctx->pc == 0x30205Cu) {
        ctx->pc = 0x30205Cu;
            // 0x30205c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302060u;
        goto label_302060;
    }
    ctx->pc = 0x302058u;
    SET_GPR_U32(ctx, 31, 0x302060u);
    ctx->pc = 0x30205Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302058u;
            // 0x30205c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302060u; }
        if (ctx->pc != 0x302060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302060u; }
        if (ctx->pc != 0x302060u) { return; }
    }
    ctx->pc = 0x302060u;
label_302060:
    // 0x302060: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x302060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
label_302064:
    // 0x302064: 0x3c05c0a0  lui         $a1, 0xC0A0
    ctx->pc = 0x302064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49312 << 16));
label_302068:
    // 0x302068: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x302068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_30206c:
    // 0x30206c: 0x27b50094  addiu       $s5, $sp, 0x94
    ctx->pc = 0x30206cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_302070:
    // 0x302070: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x302070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_302074:
    // 0x302074: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x302074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_302078:
    // 0x302078: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x302078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
label_30207c:
    // 0x30207c: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x30207cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
label_302080:
    // 0x302080: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x302080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
label_302084:
    // 0x302084: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x302084u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_302088:
    // 0x302088: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x302088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
label_30208c:
    // 0x30208c: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x30208cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_302090:
    // 0x302090: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x302090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_302094:
    // 0x302094: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x302094u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_302098:
    // 0x302098: 0xc04c574  jal         func_1315D0
label_30209c:
    if (ctx->pc == 0x30209Cu) {
        ctx->pc = 0x30209Cu;
            // 0x30209c: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->pc = 0x3020A0u;
        goto label_3020a0;
    }
    ctx->pc = 0x302098u;
    SET_GPR_U32(ctx, 31, 0x3020A0u);
    ctx->pc = 0x30209Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302098u;
            // 0x30209c: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3020A0u; }
        if (ctx->pc != 0x3020A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3020A0u; }
        if (ctx->pc != 0x3020A0u) { return; }
    }
    ctx->pc = 0x3020A0u;
label_3020a0:
    // 0x3020a0: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x3020a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3020a4:
    // 0x3020a4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x3020a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_3020a8:
    // 0x3020a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3020a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3020ac:
    // 0x3020ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3020acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3020b0:
    // 0x3020b0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3020b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3020b4:
    // 0x3020b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3020b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3020b8:
    // 0x3020b8: 0xc04c518  jal         func_131460
label_3020bc:
    if (ctx->pc == 0x3020BCu) {
        ctx->pc = 0x3020BCu;
            // 0x3020bc: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->pc = 0x3020C0u;
        goto label_3020c0;
    }
    ctx->pc = 0x3020B8u;
    SET_GPR_U32(ctx, 31, 0x3020C0u);
    ctx->pc = 0x3020BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3020B8u;
            // 0x3020bc: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3020C0u; }
        if (ctx->pc != 0x3020C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFPf_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3020C0u; }
        if (ctx->pc != 0x3020C0u) { return; }
    }
    ctx->pc = 0x3020C0u;
label_3020c0:
    // 0x3020c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3020c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3020c4:
    // 0x3020c4: 0xc04c504  jal         func_131410
label_3020c8:
    if (ctx->pc == 0x3020C8u) {
        ctx->pc = 0x3020C8u;
            // 0x3020c8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3020CCu;
        goto label_3020cc;
    }
    ctx->pc = 0x3020C4u;
    SET_GPR_U32(ctx, 31, 0x3020CCu);
    ctx->pc = 0x3020C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3020C4u;
            // 0x3020c8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3020CCu; }
        if (ctx->pc != 0x3020CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3020CCu; }
        if (ctx->pc != 0x3020CCu) { return; }
    }
    ctx->pc = 0x3020CCu;
label_3020cc:
    // 0x3020cc: 0x27b50074  addiu       $s5, $sp, 0x74
    ctx->pc = 0x3020ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_3020d0:
    // 0x3020d0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x3020d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_3020d4:
    // 0x3020d4: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x3020d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3020d8:
    // 0x3020d8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3020d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3020dc:
    // 0x3020dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3020dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3020e0:
    // 0x3020e0: 0xc04c374  jal         func_130DD0
label_3020e4:
    if (ctx->pc == 0x3020E4u) {
        ctx->pc = 0x3020E4u;
            // 0x3020e4: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3020E8u;
        goto label_3020e8;
    }
    ctx->pc = 0x3020E0u;
    SET_GPR_U32(ctx, 31, 0x3020E8u);
    ctx->pc = 0x3020E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3020E0u;
            // 0x3020e4: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3020E8u; }
        if (ctx->pc != 0x3020E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3020E8u; }
        if (ctx->pc != 0x3020E8u) { return; }
    }
    ctx->pc = 0x3020E8u;
label_3020e8:
    // 0x3020e8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3020e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3020ec:
    // 0x3020ec: 0xc0bb1e4  jal         func_2EC790
label_3020f0:
    if (ctx->pc == 0x3020F0u) {
        ctx->pc = 0x3020F0u;
            // 0x3020f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3020F4u;
        goto label_3020f4;
    }
    ctx->pc = 0x3020ECu;
    SET_GPR_U32(ctx, 31, 0x3020F4u);
    ctx->pc = 0x3020F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3020ECu;
            // 0x3020f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC790u;
    if (runtime->hasFunction(0x2EC790u)) {
        auto targetFn = runtime->lookupFunction(0x2EC790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3020F4u; }
        if (ctx->pc != 0x3020F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotate__14CCameraControlFf_0x2ec790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3020F4u; }
        if (ctx->pc != 0x3020F4u) { return; }
    }
    ctx->pc = 0x3020F4u;
label_3020f4:
    // 0x3020f4: 0x8e590060  lw          $t9, 0x60($s2)
    ctx->pc = 0x3020f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_3020f8:
    // 0x3020f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3020f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3020fc:
    // 0x3020fc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3020fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_302100:
    // 0x302100: 0x320f809  jalr        $t9
label_302104:
    if (ctx->pc == 0x302104u) {
        ctx->pc = 0x302104u;
            // 0x302104: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x302108u;
        goto label_302108;
    }
    ctx->pc = 0x302100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302108u);
        ctx->pc = 0x302104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302100u;
            // 0x302104: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302108u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302108u; }
            if (ctx->pc != 0x302108u) { return; }
        }
        }
    }
    ctx->pc = 0x302108u;
label_302108:
    // 0x302108: 0x8f84a0d0  lw          $a0, -0x5F30($gp)
    ctx->pc = 0x302108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
label_30210c:
    // 0x30210c: 0x8f83a0c8  lw          $v1, -0x5F38($gp)
    ctx->pc = 0x30210cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942920)));
label_302110:
    // 0x302110: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x302110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_302114:
    // 0x302114: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_302118:
    if (ctx->pc == 0x302118u) {
        ctx->pc = 0x302118u;
            // 0x302118: 0xaf84a0d0  sw          $a0, -0x5F30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942928), GPR_U32(ctx, 4));
        ctx->pc = 0x30211Cu;
        goto label_30211c;
    }
    ctx->pc = 0x302114u;
    {
        const bool branch_taken_0x302114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x302118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302114u;
            // 0x302118: 0xaf84a0d0  sw          $a0, -0x5F30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942928), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302114) {
            ctx->pc = 0x302170u;
            goto label_302170;
        }
    }
    ctx->pc = 0x30211Cu;
label_30211c:
    // 0x30211c: 0x8f82a0d0  lw          $v0, -0x5F30($gp)
    ctx->pc = 0x30211cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
label_302120:
    // 0x302120: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_302124:
    if (ctx->pc == 0x302124u) {
        ctx->pc = 0x302128u;
        goto label_302128;
    }
    ctx->pc = 0x302120u;
    {
        const bool branch_taken_0x302120 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x302120) {
            ctx->pc = 0x302140u;
            goto label_302140;
        }
    }
    ctx->pc = 0x302128u;
label_302128:
    // 0x302128: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x302128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30212c:
    // 0x30212c: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x30212cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_302130:
    // 0x302130: 0x320f809  jalr        $t9
label_302134:
    if (ctx->pc == 0x302134u) {
        ctx->pc = 0x302134u;
            // 0x302134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302138u;
        goto label_302138;
    }
    ctx->pc = 0x302130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302138u);
        ctx->pc = 0x302134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302130u;
            // 0x302134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302138u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302138u; }
            if (ctx->pc != 0x302138u) { return; }
        }
        }
    }
    ctx->pc = 0x302138u;
label_302138:
    // 0x302138: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_30213c:
    if (ctx->pc == 0x30213Cu) {
        ctx->pc = 0x302140u;
        goto label_302140;
    }
    ctx->pc = 0x302138u;
    {
        const bool branch_taken_0x302138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302138) {
            ctx->pc = 0x302170u;
            goto label_302170;
        }
    }
    ctx->pc = 0x302140u;
label_302140:
    // 0x302140: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x302140u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_302144:
    // 0x302144: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x302144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_302148:
    // 0x302148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30214c:
    // 0x30214c: 0x24a520e8  addiu       $a1, $a1, 0x20E8
    ctx->pc = 0x30214cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8424));
label_302150:
    // 0x302150: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x302150u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_302154:
    // 0x302154: 0x320f809  jalr        $t9
label_302158:
    if (ctx->pc == 0x302158u) {
        ctx->pc = 0x302158u;
            // 0x302158: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x30215Cu;
        goto label_30215c;
    }
    ctx->pc = 0x302154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30215Cu);
        ctx->pc = 0x302158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302154u;
            // 0x302158: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30215Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30215Cu; }
            if (ctx->pc != 0x30215Cu) { return; }
        }
        }
    }
    ctx->pc = 0x30215Cu;
label_30215c:
    // 0x30215c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30215cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302160:
    // 0x302160: 0xaf80a0cc  sw          $zero, -0x5F34($gp)
    ctx->pc = 0x302160u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942924), GPR_U32(ctx, 0));
label_302164:
    // 0x302164: 0xaf83a0c8  sw          $v1, -0x5F38($gp)
    ctx->pc = 0x302164u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942920), GPR_U32(ctx, 3));
label_302168:
    // 0x302168: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x302168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_30216c:
    // 0x30216c: 0xaf83a0d0  sw          $v1, -0x5F30($gp)
    ctx->pc = 0x30216cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942928), GPR_U32(ctx, 3));
label_302170:
    // 0x302170: 0x8f83a0d0  lw          $v1, -0x5F30($gp)
    ctx->pc = 0x302170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
label_302174:
    // 0x302174: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
label_302178:
    if (ctx->pc == 0x302178u) {
        ctx->pc = 0x30217Cu;
        goto label_30217c;
    }
    ctx->pc = 0x302174u;
    {
        const bool branch_taken_0x302174 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x302174) {
            ctx->pc = 0x302180u;
            goto label_302180;
        }
    }
    ctx->pc = 0x30217Cu;
label_30217c:
    // 0x30217c: 0xaf80a0d0  sw          $zero, -0x5F30($gp)
    ctx->pc = 0x30217cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942928), GPR_U32(ctx, 0));
label_302180:
    // 0x302180: 0x8383a0e4  lb          $v1, -0x5F1C($gp)
    ctx->pc = 0x302180u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942948)));
label_302184:
    // 0x302184: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_302188:
    if (ctx->pc == 0x302188u) {
        ctx->pc = 0x30218Cu;
        goto label_30218c;
    }
    ctx->pc = 0x302184u;
    {
        const bool branch_taken_0x302184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x302184) {
            ctx->pc = 0x302198u;
            goto label_302198;
        }
    }
    ctx->pc = 0x30218Cu;
label_30218c:
    // 0x30218c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30218cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302190:
    // 0x302190: 0xaf80a0e0  sw          $zero, -0x5F20($gp)
    ctx->pc = 0x302190u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942944), GPR_U32(ctx, 0));
label_302194:
    // 0x302194: 0xa383a0e4  sb          $v1, -0x5F1C($gp)
    ctx->pc = 0x302194u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294942948), (uint8_t)GPR_U32(ctx, 3));
label_302198:
    // 0x302198: 0x8f84a0c8  lw          $a0, -0x5F38($gp)
    ctx->pc = 0x302198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942920)));
label_30219c:
    // 0x30219c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30219cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3021a0:
    // 0x3021a0: 0x1483004a  bne         $a0, $v1, . + 4 + (0x4A << 2)
label_3021a4:
    if (ctx->pc == 0x3021A4u) {
        ctx->pc = 0x3021A8u;
        goto label_3021a8;
    }
    ctx->pc = 0x3021A0u;
    {
        const bool branch_taken_0x3021a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3021a0) {
            ctx->pc = 0x3022CCu;
            goto label_3022cc;
        }
    }
    ctx->pc = 0x3021A8u;
label_3021a8:
    // 0x3021a8: 0x8f83a0d0  lw          $v1, -0x5F30($gp)
    ctx->pc = 0x3021a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
label_3021ac:
    // 0x3021ac: 0x1c600047  bgtz        $v1, . + 4 + (0x47 << 2)
label_3021b0:
    if (ctx->pc == 0x3021B0u) {
        ctx->pc = 0x3021B4u;
        goto label_3021b4;
    }
    ctx->pc = 0x3021ACu;
    {
        const bool branch_taken_0x3021ac = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x3021ac) {
            ctx->pc = 0x3022CCu;
            goto label_3022cc;
        }
    }
    ctx->pc = 0x3021B4u;
label_3021b4:
    // 0x3021b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3021b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3021b8:
    // 0x3021b8: 0xc0bb538  jal         func_2ED4E0
label_3021bc:
    if (ctx->pc == 0x3021BCu) {
        ctx->pc = 0x3021BCu;
            // 0x3021bc: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x3021C0u;
        goto label_3021c0;
    }
    ctx->pc = 0x3021B8u;
    SET_GPR_U32(ctx, 31, 0x3021C0u);
    ctx->pc = 0x3021BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3021B8u;
            // 0x3021bc: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3021C0u; }
        if (ctx->pc != 0x3021C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3021C0u; }
        if (ctx->pc != 0x3021C0u) { return; }
    }
    ctx->pc = 0x3021C0u;
label_3021c0:
    // 0x3021c0: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_3021c4:
    if (ctx->pc == 0x3021C4u) {
        ctx->pc = 0x3021C8u;
        goto label_3021c8;
    }
    ctx->pc = 0x3021C0u;
    {
        const bool branch_taken_0x3021c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3021c0) {
            ctx->pc = 0x3022CCu;
            goto label_3022cc;
        }
    }
    ctx->pc = 0x3021C8u;
label_3021c8:
    // 0x3021c8: 0x8e021ae4  lw          $v0, 0x1AE4($s0)
    ctx->pc = 0x3021c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6884)));
label_3021cc:
    // 0x3021cc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_3021d0:
    if (ctx->pc == 0x3021D0u) {
        ctx->pc = 0x3021D0u;
            // 0x3021d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3021D4u;
        goto label_3021d4;
    }
    ctx->pc = 0x3021CCu;
    {
        const bool branch_taken_0x3021cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3021D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3021CCu;
            // 0x3021d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3021cc) {
            ctx->pc = 0x3021DCu;
            goto label_3021dc;
        }
    }
    ctx->pc = 0x3021D4u;
label_3021d4:
    // 0x3021d4: 0xae001b00  sw          $zero, 0x1B00($s0)
    ctx->pc = 0x3021d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6912), GPR_U32(ctx, 0));
label_3021d8:
    // 0x3021d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3021d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3021dc:
    // 0x3021dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3021dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3021e0:
    // 0x3021e0: 0xc0547dc  jal         func_151F70
label_3021e4:
    if (ctx->pc == 0x3021E4u) {
        ctx->pc = 0x3021E4u;
            // 0x3021e4: 0xae021ae4  sw          $v0, 0x1AE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6884), GPR_U32(ctx, 2));
        ctx->pc = 0x3021E8u;
        goto label_3021e8;
    }
    ctx->pc = 0x3021E0u;
    SET_GPR_U32(ctx, 31, 0x3021E8u);
    ctx->pc = 0x3021E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3021E0u;
            // 0x3021e4: 0xae021ae4  sw          $v0, 0x1AE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6884), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3021E8u; }
        if (ctx->pc != 0x3021E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3021E8u; }
        if (ctx->pc != 0x3021E8u) { return; }
    }
    ctx->pc = 0x3021E8u;
label_3021e8:
    // 0x3021e8: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x3021e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
label_3021ec:
    // 0x3021ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3021ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3021f0:
    // 0x3021f0: 0xae0217e4  sw          $v0, 0x17E4($s0)
    ctx->pc = 0x3021f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6116), GPR_U32(ctx, 2));
label_3021f4:
    // 0x3021f4: 0xae0017e8  sw          $zero, 0x17E8($s0)
    ctx->pc = 0x3021f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6120), GPR_U32(ctx, 0));
label_3021f8:
    // 0x3021f8: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x3021f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
label_3021fc:
    // 0x3021fc: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x3021fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
label_302200:
    // 0x302200: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x302200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
label_302204:
    // 0x302204: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x302204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
label_302208:
    // 0x302208: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x302208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
label_30220c:
    // 0x30220c: 0x8f82a0dc  lw          $v0, -0x5F24($gp)
    ctx->pc = 0x30220cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942940)));
label_302210:
    // 0x302210: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
label_302214:
    if (ctx->pc == 0x302214u) {
        ctx->pc = 0x302218u;
        goto label_302218;
    }
    ctx->pc = 0x302210u;
    {
        const bool branch_taken_0x302210 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x302210) {
            ctx->pc = 0x30221Cu;
            goto label_30221c;
        }
    }
    ctx->pc = 0x302218u;
label_302218:
    // 0x302218: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x302218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_30221c:
    // 0x30221c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30221cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_302220:
    // 0x302220: 0xc064218  jal         func_190860
label_302224:
    if (ctx->pc == 0x302224u) {
        ctx->pc = 0x302224u;
            // 0x302224: 0xae02019c  sw          $v0, 0x19C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
        ctx->pc = 0x302228u;
        goto label_302228;
    }
    ctx->pc = 0x302220u;
    SET_GPR_U32(ctx, 31, 0x302228u);
    ctx->pc = 0x302224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302220u;
            // 0x302224: 0xae02019c  sw          $v0, 0x19C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302228u; }
        if (ctx->pc != 0x302228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302228u; }
        if (ctx->pc != 0x302228u) { return; }
    }
    ctx->pc = 0x302228u;
label_302228:
    // 0x302228: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x302228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30222c:
    // 0x30222c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x30222cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_302230:
    // 0x302230: 0xc063818  jal         func_18E060
label_302234:
    if (ctx->pc == 0x302234u) {
        ctx->pc = 0x302234u;
            // 0x302234: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302238u;
        goto label_302238;
    }
    ctx->pc = 0x302230u;
    SET_GPR_U32(ctx, 31, 0x302238u);
    ctx->pc = 0x302234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302230u;
            // 0x302234: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302238u; }
        if (ctx->pc != 0x302238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302238u; }
        if (ctx->pc != 0x302238u) { return; }
    }
    ctx->pc = 0x302238u;
label_302238:
    // 0x302238: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x302238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30223c:
    // 0x30223c: 0xc064220  jal         func_190880
label_302240:
    if (ctx->pc == 0x302240u) {
        ctx->pc = 0x302240u;
            // 0x302240: 0xaf82a0c8  sw          $v0, -0x5F38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942920), GPR_U32(ctx, 2));
        ctx->pc = 0x302244u;
        goto label_302244;
    }
    ctx->pc = 0x30223Cu;
    SET_GPR_U32(ctx, 31, 0x302244u);
    ctx->pc = 0x302240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30223Cu;
            // 0x302240: 0xaf82a0c8  sw          $v0, -0x5F38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942920), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302244u; }
        if (ctx->pc != 0x302244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302244u; }
        if (ctx->pc != 0x302244u) { return; }
    }
    ctx->pc = 0x302244u;
label_302244:
    // 0x302244: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x302244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302248:
    // 0x302248: 0xc0bd920  jal         func_2F6480
label_30224c:
    if (ctx->pc == 0x30224Cu) {
        ctx->pc = 0x30224Cu;
            // 0x30224c: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x302250u;
        goto label_302250;
    }
    ctx->pc = 0x302248u;
    SET_GPR_U32(ctx, 31, 0x302250u);
    ctx->pc = 0x30224Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302248u;
            // 0x30224c: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302250u; }
        if (ctx->pc != 0x302250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302250u; }
        if (ctx->pc != 0x302250u) { return; }
    }
    ctx->pc = 0x302250u;
label_302250:
    // 0x302250: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_302254:
    if (ctx->pc == 0x302254u) {
        ctx->pc = 0x302258u;
        goto label_302258;
    }
    ctx->pc = 0x302250u;
    {
        const bool branch_taken_0x302250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302250) {
            ctx->pc = 0x30226Cu;
            goto label_30226c;
        }
    }
    ctx->pc = 0x302258u;
label_302258:
    // 0x302258: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x302258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30225c:
    // 0x30225c: 0xaf80a0cc  sw          $zero, -0x5F34($gp)
    ctx->pc = 0x30225cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942924), GPR_U32(ctx, 0));
label_302260:
    // 0x302260: 0xaf82a0c8  sw          $v0, -0x5F38($gp)
    ctx->pc = 0x302260u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942920), GPR_U32(ctx, 2));
label_302264:
    // 0x302264: 0x240207d1  addiu       $v0, $zero, 0x7D1
    ctx->pc = 0x302264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2001));
label_302268:
    // 0x302268: 0xaf82a0d8  sw          $v0, -0x5F28($gp)
    ctx->pc = 0x302268u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 2));
label_30226c:
    // 0x30226c: 0xc0c0fd0  jal         func_303F40
label_302270:
    if (ctx->pc == 0x302270u) {
        ctx->pc = 0x302274u;
        goto label_302274;
    }
    ctx->pc = 0x30226Cu;
    SET_GPR_U32(ctx, 31, 0x302274u);
    ctx->pc = 0x303F40u;
    if (runtime->hasFunction(0x303F40u)) {
        auto targetFn = runtime->lookupFunction(0x303F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302274u; }
        if (ctx->pc != 0x302274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowSubGameInfo__Fv_0x303f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302274u; }
        if (ctx->pc != 0x302274u) { return; }
    }
    ctx->pc = 0x302274u;
label_302274:
    // 0x302274: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x302274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_302278:
    // 0x302278: 0x106000ac  beqz        $v1, . + 4 + (0xAC << 2)
label_30227c:
    if (ctx->pc == 0x30227Cu) {
        ctx->pc = 0x302280u;
        goto label_302280;
    }
    ctx->pc = 0x302278u;
    {
        const bool branch_taken_0x302278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x302278) {
            ctx->pc = 0x30252Cu;
            goto label_30252c;
        }
    }
    ctx->pc = 0x302280u;
label_302280:
    // 0x302280: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x302280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_302284:
    // 0x302284: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x302284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_302288:
    // 0x302288: 0xc4209d04  lwc1        $f0, -0x62FC($at)
    ctx->pc = 0x302288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30228c:
    // 0x30228c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30228cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_302290:
    // 0x302290: 0x0  nop
    ctx->pc = 0x302290u;
    // NOP
label_302294:
    // 0x302294: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x302294u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_302298:
    // 0x302298: 0x0  nop
    ctx->pc = 0x302298u;
    // NOP
label_30229c:
    // 0x30229c: 0x0  nop
    ctx->pc = 0x30229cu;
    // NOP
label_3022a0:
    // 0x3022a0: 0xc0bea30  jal         func_2FA8C0
label_3022a4:
    if (ctx->pc == 0x3022A4u) {
        ctx->pc = 0x3022A8u;
        goto label_3022a8;
    }
    ctx->pc = 0x3022A0u;
    SET_GPR_U32(ctx, 31, 0x3022A8u);
    ctx->pc = 0x2FA8C0u;
    if (runtime->hasFunction(0x2FA8C0u)) {
        auto targetFn = runtime->lookupFunction(0x2FA8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3022A8u; }
        if (ctx->pc != 0x3022A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckFishingRecord__Ff_0x2fa8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3022A8u; }
        if (ctx->pc != 0x3022A8u) { return; }
    }
    ctx->pc = 0x3022A8u;
label_3022a8:
    // 0x3022a8: 0x104000a0  beqz        $v0, . + 4 + (0xA0 << 2)
label_3022ac:
    if (ctx->pc == 0x3022ACu) {
        ctx->pc = 0x3022B0u;
        goto label_3022b0;
    }
    ctx->pc = 0x3022A8u;
    {
        const bool branch_taken_0x3022a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3022a8) {
            ctx->pc = 0x30252Cu;
            goto label_30252c;
        }
    }
    ctx->pc = 0x3022B0u;
label_3022b0:
    // 0x3022b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3022b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3022b4:
    // 0x3022b4: 0xaf80a0cc  sw          $zero, -0x5F34($gp)
    ctx->pc = 0x3022b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942924), GPR_U32(ctx, 0));
label_3022b8:
    // 0x3022b8: 0xaf83a0c8  sw          $v1, -0x5F38($gp)
    ctx->pc = 0x3022b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942920), GPR_U32(ctx, 3));
label_3022bc:
    // 0x3022bc: 0x240307d2  addiu       $v1, $zero, 0x7D2
    ctx->pc = 0x3022bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2002));
label_3022c0:
    // 0x3022c0: 0xaf83a0d8  sw          $v1, -0x5F28($gp)
    ctx->pc = 0x3022c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 3));
label_3022c4:
    // 0x3022c4: 0x10000099  b           . + 4 + (0x99 << 2)
label_3022c8:
    if (ctx->pc == 0x3022C8u) {
        ctx->pc = 0x3022CCu;
        goto label_3022cc;
    }
    ctx->pc = 0x3022C4u;
    {
        const bool branch_taken_0x3022c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3022c4) {
            ctx->pc = 0x30252Cu;
            goto label_30252c;
        }
    }
    ctx->pc = 0x3022CCu;
label_3022cc:
    // 0x3022cc: 0x8f84a0c8  lw          $a0, -0x5F38($gp)
    ctx->pc = 0x3022ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942920)));
label_3022d0:
    // 0x3022d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3022d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3022d4:
    // 0x3022d4: 0x1483006c  bne         $a0, $v1, . + 4 + (0x6C << 2)
label_3022d8:
    if (ctx->pc == 0x3022D8u) {
        ctx->pc = 0x3022DCu;
        goto label_3022dc;
    }
    ctx->pc = 0x3022D4u;
    {
        const bool branch_taken_0x3022d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3022d4) {
            ctx->pc = 0x302488u;
            goto label_302488;
        }
    }
    ctx->pc = 0x3022DCu;
label_3022dc:
    // 0x3022dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3022dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3022e0:
    // 0x3022e0: 0xc0a0e78  jal         func_2839E0
label_3022e4:
    if (ctx->pc == 0x3022E4u) {
        ctx->pc = 0x3022E4u;
            // 0x3022e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3022E8u;
        goto label_3022e8;
    }
    ctx->pc = 0x3022E0u;
    SET_GPR_U32(ctx, 31, 0x3022E8u);
    ctx->pc = 0x3022E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3022E0u;
            // 0x3022e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2839E0u;
    if (runtime->hasFunction(0x2839E0u)) {
        auto targetFn = runtime->lookupFunction(0x2839E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3022E8u; }
        if (ctx->pc != 0x3022E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMessage__6CSceneFi_0x2839e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3022E8u; }
        if (ctx->pc != 0x3022E8u) { return; }
    }
    ctx->pc = 0x3022E8u;
label_3022e8:
    // 0x3022e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3022e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3022ec:
    // 0x3022ec: 0xc054f84  jal         func_153E10
label_3022f0:
    if (ctx->pc == 0x3022F0u) {
        ctx->pc = 0x3022F0u;
            // 0x3022f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3022F4u;
        goto label_3022f4;
    }
    ctx->pc = 0x3022ECu;
    SET_GPR_U32(ctx, 31, 0x3022F4u);
    ctx->pc = 0x3022F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3022ECu;
            // 0x3022f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153E10u;
    if (runtime->hasFunction(0x153E10u)) {
        auto targetFn = runtime->lookupFunction(0x153E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3022F4u; }
        if (ctx->pc != 0x3022F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        State__6ClsMesFv_0x153e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3022F4u; }
        if (ctx->pc != 0x3022F4u) { return; }
    }
    ctx->pc = 0x3022F4u;
label_3022f4:
    // 0x3022f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3022f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3022f8:
    // 0x3022f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3022f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3022fc:
    // 0x3022fc: 0xc0bb538  jal         func_2ED4E0
label_302300:
    if (ctx->pc == 0x302300u) {
        ctx->pc = 0x302300u;
            // 0x302300: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x302304u;
        goto label_302304;
    }
    ctx->pc = 0x3022FCu;
    SET_GPR_U32(ctx, 31, 0x302304u);
    ctx->pc = 0x302300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3022FCu;
            // 0x302300: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302304u; }
        if (ctx->pc != 0x302304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302304u; }
        if (ctx->pc != 0x302304u) { return; }
    }
    ctx->pc = 0x302304u;
label_302304:
    // 0x302304: 0x8f84a0cc  lw          $a0, -0x5F34($gp)
    ctx->pc = 0x302304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942924)));
label_302308:
    // 0x302308: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x302308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30230c:
    // 0x30230c: 0x1083004b  beq         $a0, $v1, . + 4 + (0x4B << 2)
label_302310:
    if (ctx->pc == 0x302310u) {
        ctx->pc = 0x302314u;
        goto label_302314;
    }
    ctx->pc = 0x30230Cu;
    {
        const bool branch_taken_0x30230c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30230c) {
            ctx->pc = 0x30243Cu;
            goto label_30243c;
        }
    }
    ctx->pc = 0x302314u;
label_302314:
    // 0x302314: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x302314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302318:
    // 0x302318: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
label_30231c:
    if (ctx->pc == 0x30231Cu) {
        ctx->pc = 0x302320u;
        goto label_302320;
    }
    ctx->pc = 0x302318u;
    {
        const bool branch_taken_0x302318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x302318) {
            ctx->pc = 0x302384u;
            goto label_302384;
        }
    }
    ctx->pc = 0x302320u;
label_302320:
    // 0x302320: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_302324:
    if (ctx->pc == 0x302324u) {
        ctx->pc = 0x302328u;
        goto label_302328;
    }
    ctx->pc = 0x302320u;
    {
        const bool branch_taken_0x302320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x302320) {
            ctx->pc = 0x302330u;
            goto label_302330;
        }
    }
    ctx->pc = 0x302328u;
label_302328:
    // 0x302328: 0x10000058  b           . + 4 + (0x58 << 2)
label_30232c:
    if (ctx->pc == 0x30232Cu) {
        ctx->pc = 0x30232Cu;
            // 0x30232c: 0x8f83a0c8  lw          $v1, -0x5F38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942920)));
        ctx->pc = 0x302330u;
        goto label_302330;
    }
    ctx->pc = 0x302328u;
    {
        const bool branch_taken_0x302328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30232Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302328u;
            // 0x30232c: 0x8f83a0c8  lw          $v1, -0x5F38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302328) {
            ctx->pc = 0x30248Cu;
            goto label_30248c;
        }
    }
    ctx->pc = 0x302330u;
label_302330:
    // 0x302330: 0xc064220  jal         func_190880
label_302334:
    if (ctx->pc == 0x302334u) {
        ctx->pc = 0x302338u;
        goto label_302338;
    }
    ctx->pc = 0x302330u;
    SET_GPR_U32(ctx, 31, 0x302338u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302338u; }
        if (ctx->pc != 0x302338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302338u; }
        if (ctx->pc != 0x302338u) { return; }
    }
    ctx->pc = 0x302338u;
label_302338:
    // 0x302338: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x302338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30233c:
    // 0x30233c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x30233cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_302340:
    // 0x302340: 0xc0bd8f4  jal         func_2F63D0
label_302344:
    if (ctx->pc == 0x302344u) {
        ctx->pc = 0x302344u;
            // 0x302344: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x302348u;
        goto label_302348;
    }
    ctx->pc = 0x302340u;
    SET_GPR_U32(ctx, 31, 0x302348u);
    ctx->pc = 0x302344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302340u;
            // 0x302344: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302348u; }
        if (ctx->pc != 0x302348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302348u; }
        if (ctx->pc != 0x302348u) { return; }
    }
    ctx->pc = 0x302348u;
label_302348:
    // 0x302348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30234c:
    // 0x30234c: 0xc054bb4  jal         func_152ED0
label_302350:
    if (ctx->pc == 0x302350u) {
        ctx->pc = 0x302350u;
            // 0x302350: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x302354u;
        goto label_302354;
    }
    ctx->pc = 0x30234Cu;
    SET_GPR_U32(ctx, 31, 0x302354u);
    ctx->pc = 0x302350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30234Cu;
            // 0x302350: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152ED0u;
    if (runtime->hasFunction(0x152ED0u)) {
        auto targetFn = runtime->lookupFunction(0x152ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302354u; }
        if (ctx->pc != 0x302354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__6ClsMesFi_0x152ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302354u; }
        if (ctx->pc != 0x302354u) { return; }
    }
    ctx->pc = 0x302354u;
label_302354:
    // 0x302354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302358:
    // 0x302358: 0xc054cdc  jal         func_153370
label_30235c:
    if (ctx->pc == 0x30235Cu) {
        ctx->pc = 0x30235Cu;
            // 0x30235c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x302360u;
        goto label_302360;
    }
    ctx->pc = 0x302358u;
    SET_GPR_U32(ctx, 31, 0x302360u);
    ctx->pc = 0x30235Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302358u;
            // 0x30235c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302360u; }
        if (ctx->pc != 0x302360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302360u; }
        if (ctx->pc != 0x302360u) { return; }
    }
    ctx->pc = 0x302360u;
label_302360:
    // 0x302360: 0x8f85a0d8  lw          $a1, -0x5F28($gp)
    ctx->pc = 0x302360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
label_302364:
    // 0x302364: 0xc0562c8  jal         func_158B20
label_302368:
    if (ctx->pc == 0x302368u) {
        ctx->pc = 0x302368u;
            // 0x302368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30236Cu;
        goto label_30236c;
    }
    ctx->pc = 0x302364u;
    SET_GPR_U32(ctx, 31, 0x30236Cu);
    ctx->pc = 0x302368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302364u;
            // 0x302368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30236Cu; }
        if (ctx->pc != 0x30236Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30236Cu; }
        if (ctx->pc != 0x30236Cu) { return; }
    }
    ctx->pc = 0x30236Cu;
label_30236c:
    // 0x30236c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x30236cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_302370:
    // 0x302370: 0xae03014c  sw          $v1, 0x14C($s0)
    ctx->pc = 0x302370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 3));
label_302374:
    // 0x302374: 0x8f83a0cc  lw          $v1, -0x5F34($gp)
    ctx->pc = 0x302374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942924)));
label_302378:
    // 0x302378: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x302378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_30237c:
    // 0x30237c: 0x10000042  b           . + 4 + (0x42 << 2)
label_302380:
    if (ctx->pc == 0x302380u) {
        ctx->pc = 0x302380u;
            // 0x302380: 0xaf83a0cc  sw          $v1, -0x5F34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942924), GPR_U32(ctx, 3));
        ctx->pc = 0x302384u;
        goto label_302384;
    }
    ctx->pc = 0x30237Cu;
    {
        const bool branch_taken_0x30237c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30237Cu;
            // 0x302380: 0xaf83a0cc  sw          $v1, -0x5F34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942924), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30237c) {
            ctx->pc = 0x302488u;
            goto label_302488;
        }
    }
    ctx->pc = 0x302384u;
label_302384:
    // 0x302384: 0x1220002b  beqz        $s1, . + 4 + (0x2B << 2)
label_302388:
    if (ctx->pc == 0x302388u) {
        ctx->pc = 0x302388u;
            // 0x302388: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x30238Cu;
        goto label_30238c;
    }
    ctx->pc = 0x302384u;
    {
        const bool branch_taken_0x302384 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x302388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302384u;
            // 0x302388: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302384) {
            ctx->pc = 0x302434u;
            goto label_302434;
        }
    }
    ctx->pc = 0x30238Cu;
label_30238c:
    // 0x30238c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30238cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_302390:
    // 0x302390: 0x1223001c  beq         $s1, $v1, . + 4 + (0x1C << 2)
label_302394:
    if (ctx->pc == 0x302394u) {
        ctx->pc = 0x302398u;
        goto label_302398;
    }
    ctx->pc = 0x302390u;
    {
        const bool branch_taken_0x302390 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x302390) {
            ctx->pc = 0x302404u;
            goto label_302404;
        }
    }
    ctx->pc = 0x302398u;
label_302398:
    // 0x302398: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x302398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_30239c:
    // 0x30239c: 0x12230003  beq         $s1, $v1, . + 4 + (0x3 << 2)
label_3023a0:
    if (ctx->pc == 0x3023A0u) {
        ctx->pc = 0x3023A4u;
        goto label_3023a4;
    }
    ctx->pc = 0x30239Cu;
    {
        const bool branch_taken_0x30239c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x30239c) {
            ctx->pc = 0x3023ACu;
            goto label_3023ac;
        }
    }
    ctx->pc = 0x3023A4u;
label_3023a4:
    // 0x3023a4: 0x10000038  b           . + 4 + (0x38 << 2)
label_3023a8:
    if (ctx->pc == 0x3023A8u) {
        ctx->pc = 0x3023ACu;
        goto label_3023ac;
    }
    ctx->pc = 0x3023A4u;
    {
        const bool branch_taken_0x3023a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3023a4) {
            ctx->pc = 0x302488u;
            goto label_302488;
        }
    }
    ctx->pc = 0x3023ACu;
label_3023ac:
    // 0x3023ac: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_3023b0:
    if (ctx->pc == 0x3023B0u) {
        ctx->pc = 0x3023B4u;
        goto label_3023b4;
    }
    ctx->pc = 0x3023ACu;
    {
        const bool branch_taken_0x3023ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3023ac) {
            ctx->pc = 0x302488u;
            goto label_302488;
        }
    }
    ctx->pc = 0x3023B4u;
label_3023b4:
    // 0x3023b4: 0xc054fb0  jal         func_153EC0
label_3023b8:
    if (ctx->pc == 0x3023B8u) {
        ctx->pc = 0x3023B8u;
            // 0x3023b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3023BCu;
        goto label_3023bc;
    }
    ctx->pc = 0x3023B4u;
    SET_GPR_U32(ctx, 31, 0x3023BCu);
    ctx->pc = 0x3023B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3023B4u;
            // 0x3023b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153EC0u;
    if (runtime->hasFunction(0x153EC0u)) {
        auto targetFn = runtime->lookupFunction(0x153EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3023BCu; }
        if (ctx->pc != 0x3023BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GoNextPage__6ClsMesFv_0x153ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3023BCu; }
        if (ctx->pc != 0x3023BCu) { return; }
    }
    ctx->pc = 0x3023BCu;
label_3023bc:
    // 0x3023bc: 0xc064218  jal         func_190860
label_3023c0:
    if (ctx->pc == 0x3023C0u) {
        ctx->pc = 0x3023C4u;
        goto label_3023c4;
    }
    ctx->pc = 0x3023BCu;
    SET_GPR_U32(ctx, 31, 0x3023C4u);
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3023C4u; }
        if (ctx->pc != 0x3023C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3023C4u; }
        if (ctx->pc != 0x3023C4u) { return; }
    }
    ctx->pc = 0x3023C4u;
label_3023c4:
    // 0x3023c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3023c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3023c8:
    // 0x3023c8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3023c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3023cc:
    // 0x3023cc: 0xc063818  jal         func_18E060
label_3023d0:
    if (ctx->pc == 0x3023D0u) {
        ctx->pc = 0x3023D0u;
            // 0x3023d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3023D4u;
        goto label_3023d4;
    }
    ctx->pc = 0x3023CCu;
    SET_GPR_U32(ctx, 31, 0x3023D4u);
    ctx->pc = 0x3023D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3023CCu;
            // 0x3023d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3023D4u; }
        if (ctx->pc != 0x3023D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3023D4u; }
        if (ctx->pc != 0x3023D4u) { return; }
    }
    ctx->pc = 0x3023D4u;
label_3023d4:
    // 0x3023d4: 0x8f84a0d8  lw          $a0, -0x5F28($gp)
    ctx->pc = 0x3023d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
label_3023d8:
    // 0x3023d8: 0x240307d2  addiu       $v1, $zero, 0x7D2
    ctx->pc = 0x3023d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2002));
label_3023dc:
    // 0x3023dc: 0x1483002a  bne         $a0, $v1, . + 4 + (0x2A << 2)
label_3023e0:
    if (ctx->pc == 0x3023E0u) {
        ctx->pc = 0x3023E4u;
        goto label_3023e4;
    }
    ctx->pc = 0x3023DCu;
    {
        const bool branch_taken_0x3023dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3023dc) {
            ctx->pc = 0x302488u;
            goto label_302488;
        }
    }
    ctx->pc = 0x3023E4u;
label_3023e4:
    // 0x3023e4: 0xc064218  jal         func_190860
label_3023e8:
    if (ctx->pc == 0x3023E8u) {
        ctx->pc = 0x3023ECu;
        goto label_3023ec;
    }
    ctx->pc = 0x3023E4u;
    SET_GPR_U32(ctx, 31, 0x3023ECu);
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3023ECu; }
        if (ctx->pc != 0x3023ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3023ECu; }
        if (ctx->pc != 0x3023ECu) { return; }
    }
    ctx->pc = 0x3023ECu;
label_3023ec:
    // 0x3023ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3023ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3023f0:
    // 0x3023f0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x3023f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3023f4:
    // 0x3023f4: 0xc063818  jal         func_18E060
label_3023f8:
    if (ctx->pc == 0x3023F8u) {
        ctx->pc = 0x3023F8u;
            // 0x3023f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3023FCu;
        goto label_3023fc;
    }
    ctx->pc = 0x3023F4u;
    SET_GPR_U32(ctx, 31, 0x3023FCu);
    ctx->pc = 0x3023F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3023F4u;
            // 0x3023f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3023FCu; }
        if (ctx->pc != 0x3023FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3023FCu; }
        if (ctx->pc != 0x3023FCu) { return; }
    }
    ctx->pc = 0x3023FCu;
label_3023fc:
    // 0x3023fc: 0x10000022  b           . + 4 + (0x22 << 2)
label_302400:
    if (ctx->pc == 0x302400u) {
        ctx->pc = 0x302404u;
        goto label_302404;
    }
    ctx->pc = 0x3023FCu;
    {
        const bool branch_taken_0x3023fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3023fc) {
            ctx->pc = 0x302488u;
            goto label_302488;
        }
    }
    ctx->pc = 0x302404u;
label_302404:
    // 0x302404: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_302408:
    if (ctx->pc == 0x302408u) {
        ctx->pc = 0x30240Cu;
        goto label_30240c;
    }
    ctx->pc = 0x302404u;
    {
        const bool branch_taken_0x302404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302404) {
            ctx->pc = 0x302488u;
            goto label_302488;
        }
    }
    ctx->pc = 0x30240Cu;
label_30240c:
    // 0x30240c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x30240cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_302410:
    // 0x302410: 0xc064218  jal         func_190860
label_302414:
    if (ctx->pc == 0x302414u) {
        ctx->pc = 0x302414u;
            // 0x302414: 0xaf82a0cc  sw          $v0, -0x5F34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942924), GPR_U32(ctx, 2));
        ctx->pc = 0x302418u;
        goto label_302418;
    }
    ctx->pc = 0x302410u;
    SET_GPR_U32(ctx, 31, 0x302418u);
    ctx->pc = 0x302414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302410u;
            // 0x302414: 0xaf82a0cc  sw          $v0, -0x5F34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942924), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302418u; }
        if (ctx->pc != 0x302418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302418u; }
        if (ctx->pc != 0x302418u) { return; }
    }
    ctx->pc = 0x302418u;
label_302418:
    // 0x302418: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x302418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30241c:
    // 0x30241c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x30241cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_302420:
    // 0x302420: 0xc063818  jal         func_18E060
label_302424:
    if (ctx->pc == 0x302424u) {
        ctx->pc = 0x302424u;
            // 0x302424: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302428u;
        goto label_302428;
    }
    ctx->pc = 0x302420u;
    SET_GPR_U32(ctx, 31, 0x302428u);
    ctx->pc = 0x302424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302420u;
            // 0x302424: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302428u; }
        if (ctx->pc != 0x302428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302428u; }
        if (ctx->pc != 0x302428u) { return; }
    }
    ctx->pc = 0x302428u;
label_302428:
    // 0x302428: 0x10000017  b           . + 4 + (0x17 << 2)
label_30242c:
    if (ctx->pc == 0x30242Cu) {
        ctx->pc = 0x302430u;
        goto label_302430;
    }
    ctx->pc = 0x302428u;
    {
        const bool branch_taken_0x302428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302428) {
            ctx->pc = 0x302488u;
            goto label_302488;
        }
    }
    ctx->pc = 0x302430u;
label_302430:
    // 0x302430: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x302430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_302434:
    // 0x302434: 0x10000014  b           . + 4 + (0x14 << 2)
label_302438:
    if (ctx->pc == 0x302438u) {
        ctx->pc = 0x302438u;
            // 0x302438: 0xaf83a0cc  sw          $v1, -0x5F34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942924), GPR_U32(ctx, 3));
        ctx->pc = 0x30243Cu;
        goto label_30243c;
    }
    ctx->pc = 0x302434u;
    {
        const bool branch_taken_0x302434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302434u;
            // 0x302438: 0xaf83a0cc  sw          $v1, -0x5F34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942924), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302434) {
            ctx->pc = 0x302488u;
            goto label_302488;
        }
    }
    ctx->pc = 0x30243Cu;
label_30243c:
    // 0x30243c: 0x8e021ae4  lw          $v0, 0x1AE4($s0)
    ctx->pc = 0x30243cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6884)));
label_302440:
    // 0x302440: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_302444:
    if (ctx->pc == 0x302444u) {
        ctx->pc = 0x302444u;
            // 0x302444: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x302448u;
        goto label_302448;
    }
    ctx->pc = 0x302440u;
    {
        const bool branch_taken_0x302440 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x302444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302440u;
            // 0x302444: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302440) {
            ctx->pc = 0x302450u;
            goto label_302450;
        }
    }
    ctx->pc = 0x302448u;
label_302448:
    // 0x302448: 0xae001b00  sw          $zero, 0x1B00($s0)
    ctx->pc = 0x302448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6912), GPR_U32(ctx, 0));
label_30244c:
    // 0x30244c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_302450:
    // 0x302450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302454:
    // 0x302454: 0xc0547dc  jal         func_151F70
label_302458:
    if (ctx->pc == 0x302458u) {
        ctx->pc = 0x302458u;
            // 0x302458: 0xae021ae4  sw          $v0, 0x1AE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6884), GPR_U32(ctx, 2));
        ctx->pc = 0x30245Cu;
        goto label_30245c;
    }
    ctx->pc = 0x302454u;
    SET_GPR_U32(ctx, 31, 0x30245Cu);
    ctx->pc = 0x302458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302454u;
            // 0x302458: 0xae021ae4  sw          $v0, 0x1AE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6884), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30245Cu; }
        if (ctx->pc != 0x30245Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30245Cu; }
        if (ctx->pc != 0x30245Cu) { return; }
    }
    ctx->pc = 0x30245Cu;
label_30245c:
    // 0x30245c: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x30245cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
label_302460:
    // 0x302460: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x302460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_302464:
    // 0x302464: 0xae0417e4  sw          $a0, 0x17E4($s0)
    ctx->pc = 0x302464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6116), GPR_U32(ctx, 4));
label_302468:
    // 0x302468: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x302468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30246c:
    // 0x30246c: 0xae0017e8  sw          $zero, 0x17E8($s0)
    ctx->pc = 0x30246cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6120), GPR_U32(ctx, 0));
label_302470:
    // 0x302470: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x302470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
label_302474:
    // 0x302474: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x302474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
label_302478:
    // 0x302478: 0xae040134  sw          $a0, 0x134($s0)
    ctx->pc = 0x302478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 4));
label_30247c:
    // 0x30247c: 0xae040138  sw          $a0, 0x138($s0)
    ctx->pc = 0x30247cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 4));
label_302480:
    // 0x302480: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x302480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
label_302484:
    // 0x302484: 0xaf83a0c8  sw          $v1, -0x5F38($gp)
    ctx->pc = 0x302484u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942920), GPR_U32(ctx, 3));
label_302488:
    // 0x302488: 0x8f83a0c8  lw          $v1, -0x5F38($gp)
    ctx->pc = 0x302488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942920)));
label_30248c:
    // 0x30248c: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x30248cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_302490:
    // 0x302490: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
label_302494:
    if (ctx->pc == 0x302494u) {
        ctx->pc = 0x302498u;
        goto label_302498;
    }
    ctx->pc = 0x302490u;
    {
        const bool branch_taken_0x302490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x302490) {
            ctx->pc = 0x30252Cu;
            goto label_30252c;
        }
    }
    ctx->pc = 0x302498u;
label_302498:
    // 0x302498: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x302498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_30249c:
    // 0x30249c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30249cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3024a0:
    // 0x3024a0: 0xc0c3e94  jal         func_30FA50
label_3024a4:
    if (ctx->pc == 0x3024A4u) {
        ctx->pc = 0x3024A8u;
        goto label_3024a8;
    }
    ctx->pc = 0x3024A0u;
    SET_GPR_U32(ctx, 31, 0x3024A8u);
    ctx->pc = 0x30FA50u;
    if (runtime->hasFunction(0x30FA50u)) {
        auto targetFn = runtime->lookupFunction(0x30FA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3024A8u; }
        if (ctx->pc != 0x3024A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExtendLine__Ff_0x30fa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3024A8u; }
        if (ctx->pc != 0x3024A8u) { return; }
    }
    ctx->pc = 0x3024A8u;
label_3024a8:
    // 0x3024a8: 0xc0c4244  jal         func_310910
label_3024ac:
    if (ctx->pc == 0x3024ACu) {
        ctx->pc = 0x3024B0u;
        goto label_3024b0;
    }
    ctx->pc = 0x3024A8u;
    SET_GPR_U32(ctx, 31, 0x3024B0u);
    ctx->pc = 0x310910u;
    if (runtime->hasFunction(0x310910u)) {
        auto targetFn = runtime->lookupFunction(0x310910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3024B0u; }
        if (ctx->pc != 0x3024B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetLineVelo__Fv_0x310910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3024B0u; }
        if (ctx->pc != 0x3024B0u) { return; }
    }
    ctx->pc = 0x3024B0u;
label_3024b0:
    // 0x3024b0: 0xc0bfd3c  jal         func_2FF4F0
label_3024b4:
    if (ctx->pc == 0x3024B4u) {
        ctx->pc = 0x3024B4u;
            // 0x3024b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3024B8u;
        goto label_3024b8;
    }
    ctx->pc = 0x3024B0u;
    SET_GPR_U32(ctx, 31, 0x3024B8u);
    ctx->pc = 0x3024B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3024B0u;
            // 0x3024b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FF4F0u;
    if (runtime->hasFunction(0x2FF4F0u)) {
        auto targetFn = runtime->lookupFunction(0x2FF4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3024B8u; }
        if (ctx->pc != 0x3024B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndSelectCastingPoint__FP6CScene_0x2ff4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3024B8u; }
        if (ctx->pc != 0x3024B8u) { return; }
    }
    ctx->pc = 0x3024B8u;
label_3024b8:
    // 0x3024b8: 0xc0bf1d0  jal         func_2FC740
label_3024bc:
    if (ctx->pc == 0x3024BCu) {
        ctx->pc = 0x3024BCu;
            // 0x3024bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3024C0u;
        goto label_3024c0;
    }
    ctx->pc = 0x3024B8u;
    SET_GPR_U32(ctx, 31, 0x3024C0u);
    ctx->pc = 0x3024BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3024B8u;
            // 0x3024bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC740u;
    if (runtime->hasFunction(0x2FC740u)) {
        auto targetFn = runtime->lookupFunction(0x2FC740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3024C0u; }
        if (ctx->pc != 0x3024C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextMode__Fi_0x2fc740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3024C0u; }
        if (ctx->pc != 0x3024C0u) { return; }
    }
    ctx->pc = 0x3024C0u;
label_3024c0:
    // 0x3024c0: 0x8f859f94  lw          $a1, -0x606C($gp)
    ctx->pc = 0x3024c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942612)));
label_3024c4:
    // 0x3024c4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x3024c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_3024c8:
    // 0x3024c8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x3024c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_3024cc:
    // 0x3024cc: 0xc04b950  jal         func_12E540
label_3024d0:
    if (ctx->pc == 0x3024D0u) {
        ctx->pc = 0x3024D0u;
            // 0x3024d0: 0xaf809fa4  sw          $zero, -0x605C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942628), GPR_U32(ctx, 0));
        ctx->pc = 0x3024D4u;
        goto label_3024d4;
    }
    ctx->pc = 0x3024CCu;
    SET_GPR_U32(ctx, 31, 0x3024D4u);
    ctx->pc = 0x3024D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3024CCu;
            // 0x3024d0: 0xaf809fa4  sw          $zero, -0x605C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3024D4u; }
        if (ctx->pc != 0x3024D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3024D4u; }
        if (ctx->pc != 0x3024D4u) { return; }
    }
    ctx->pc = 0x3024D4u;
label_3024d4:
    // 0x3024d4: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x3024d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3024d8:
    // 0x3024d8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3024d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_3024dc:
    // 0x3024dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3024dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_3024e0:
    // 0x3024e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3024e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3024e4:
    // 0x3024e4: 0xc04c374  jal         func_130DD0
label_3024e8:
    if (ctx->pc == 0x3024E8u) {
        ctx->pc = 0x3024E8u;
            // 0x3024e8: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3024ECu;
        goto label_3024ec;
    }
    ctx->pc = 0x3024E4u;
    SET_GPR_U32(ctx, 31, 0x3024ECu);
    ctx->pc = 0x3024E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3024E4u;
            // 0x3024e8: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3024ECu; }
        if (ctx->pc != 0x3024ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3024ECu; }
        if (ctx->pc != 0x3024ECu) { return; }
    }
    ctx->pc = 0x3024ECu;
label_3024ec:
    // 0x3024ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3024ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3024f0:
    // 0x3024f0: 0xc0bb224  jal         func_2EC890
label_3024f4:
    if (ctx->pc == 0x3024F4u) {
        ctx->pc = 0x3024F4u;
            // 0x3024f4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3024F8u;
        goto label_3024f8;
    }
    ctx->pc = 0x3024F0u;
    SET_GPR_U32(ctx, 31, 0x3024F8u);
    ctx->pc = 0x3024F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3024F0u;
            // 0x3024f4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC890u;
    if (runtime->hasFunction(0x2EC890u)) {
        auto targetFn = runtime->lookupFunction(0x2EC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3024F8u; }
        if (ctx->pc != 0x3024F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RotBack__14CCameraControlFf_0x2ec890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3024F8u; }
        if (ctx->pc != 0x3024F8u) { return; }
    }
    ctx->pc = 0x3024F8u;
label_3024f8:
    // 0x3024f8: 0xc0c409c  jal         func_310270
label_3024fc:
    if (ctx->pc == 0x3024FCu) {
        ctx->pc = 0x3024FCu;
            // 0x3024fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x302500u;
        goto label_302500;
    }
    ctx->pc = 0x3024F8u;
    SET_GPR_U32(ctx, 31, 0x302500u);
    ctx->pc = 0x3024FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3024F8u;
            // 0x3024fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x310270u;
    if (runtime->hasFunction(0x310270u)) {
        auto targetFn = runtime->lookupFunction(0x310270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302500u; }
        if (ctx->pc != 0x302500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetShowHari__Fi_0x310270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302500u; }
        if (ctx->pc != 0x302500u) { return; }
    }
    ctx->pc = 0x302500u;
label_302500:
    // 0x302500: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x302500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_302504:
    // 0x302504: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x302504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_302508:
    // 0x302508: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x302508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30250c:
    // 0x30250c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30250cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_302510:
    // 0x302510: 0xc0a9844  jal         func_2A6110
label_302514:
    if (ctx->pc == 0x302514u) {
        ctx->pc = 0x302514u;
            // 0x302514: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x302518u;
        goto label_302518;
    }
    ctx->pc = 0x302510u;
    SET_GPR_U32(ctx, 31, 0x302518u);
    ctx->pc = 0x302514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302510u;
            // 0x302514: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302518u; }
        if (ctx->pc != 0x302518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBGM__6CSceneFiif_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302518u; }
        if (ctx->pc != 0x302518u) { return; }
    }
    ctx->pc = 0x302518u;
label_302518:
    // 0x302518: 0x8f83a0d4  lw          $v1, -0x5F2C($gp)
    ctx->pc = 0x302518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942932)));
label_30251c:
    // 0x30251c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_302520:
    if (ctx->pc == 0x302520u) {
        ctx->pc = 0x302524u;
        goto label_302524;
    }
    ctx->pc = 0x30251Cu;
    {
        const bool branch_taken_0x30251c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30251c) {
            ctx->pc = 0x30252Cu;
            goto label_30252c;
        }
    }
    ctx->pc = 0x302524u;
label_302524:
    // 0x302524: 0xc0c0fec  jal         func_303FB0
label_302528:
    if (ctx->pc == 0x302528u) {
        ctx->pc = 0x30252Cu;
        goto label_30252c;
    }
    ctx->pc = 0x302524u;
    SET_GPR_U32(ctx, 31, 0x30252Cu);
    ctx->pc = 0x303FB0u;
    if (runtime->hasFunction(0x303FB0u)) {
        auto targetFn = runtime->lookupFunction(0x303FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30252Cu; }
        if (ctx->pc != 0x30252Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgGetItemOverFlagOn__Fv_0x303fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30252Cu; }
        if (ctx->pc != 0x30252Cu) { return; }
    }
    ctx->pc = 0x30252Cu;
label_30252c:
    // 0x30252c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x30252cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_302530:
    // 0x302530: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x302530u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_302534:
    // 0x302534: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x302534u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_302538:
    // 0x302538: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x302538u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30253c:
    // 0x30253c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30253cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_302540:
    // 0x302540: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x302540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_302544:
    // 0x302544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x302544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_302548:
    // 0x302548: 0x3e00008  jr          $ra
label_30254c:
    if (ctx->pc == 0x30254Cu) {
        ctx->pc = 0x30254Cu;
            // 0x30254c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x302550u;
        goto label_fallthrough_0x302548;
    }
    ctx->pc = 0x302548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30254Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302548u;
            // 0x30254c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x302548:
    ctx->pc = 0x302550u;
}
