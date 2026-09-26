#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__15CRocketLauncherFv
// Address: 0x1b60b0 - 0x1b655c
void Step__15CRocketLauncherFv_0x1b60b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__15CRocketLauncherFv_0x1b60b0");
#endif

    switch (ctx->pc) {
        case 0x1b60b0u: goto label_1b60b0;
        case 0x1b60b4u: goto label_1b60b4;
        case 0x1b60b8u: goto label_1b60b8;
        case 0x1b60bcu: goto label_1b60bc;
        case 0x1b60c0u: goto label_1b60c0;
        case 0x1b60c4u: goto label_1b60c4;
        case 0x1b60c8u: goto label_1b60c8;
        case 0x1b60ccu: goto label_1b60cc;
        case 0x1b60d0u: goto label_1b60d0;
        case 0x1b60d4u: goto label_1b60d4;
        case 0x1b60d8u: goto label_1b60d8;
        case 0x1b60dcu: goto label_1b60dc;
        case 0x1b60e0u: goto label_1b60e0;
        case 0x1b60e4u: goto label_1b60e4;
        case 0x1b60e8u: goto label_1b60e8;
        case 0x1b60ecu: goto label_1b60ec;
        case 0x1b60f0u: goto label_1b60f0;
        case 0x1b60f4u: goto label_1b60f4;
        case 0x1b60f8u: goto label_1b60f8;
        case 0x1b60fcu: goto label_1b60fc;
        case 0x1b6100u: goto label_1b6100;
        case 0x1b6104u: goto label_1b6104;
        case 0x1b6108u: goto label_1b6108;
        case 0x1b610cu: goto label_1b610c;
        case 0x1b6110u: goto label_1b6110;
        case 0x1b6114u: goto label_1b6114;
        case 0x1b6118u: goto label_1b6118;
        case 0x1b611cu: goto label_1b611c;
        case 0x1b6120u: goto label_1b6120;
        case 0x1b6124u: goto label_1b6124;
        case 0x1b6128u: goto label_1b6128;
        case 0x1b612cu: goto label_1b612c;
        case 0x1b6130u: goto label_1b6130;
        case 0x1b6134u: goto label_1b6134;
        case 0x1b6138u: goto label_1b6138;
        case 0x1b613cu: goto label_1b613c;
        case 0x1b6140u: goto label_1b6140;
        case 0x1b6144u: goto label_1b6144;
        case 0x1b6148u: goto label_1b6148;
        case 0x1b614cu: goto label_1b614c;
        case 0x1b6150u: goto label_1b6150;
        case 0x1b6154u: goto label_1b6154;
        case 0x1b6158u: goto label_1b6158;
        case 0x1b615cu: goto label_1b615c;
        case 0x1b6160u: goto label_1b6160;
        case 0x1b6164u: goto label_1b6164;
        case 0x1b6168u: goto label_1b6168;
        case 0x1b616cu: goto label_1b616c;
        case 0x1b6170u: goto label_1b6170;
        case 0x1b6174u: goto label_1b6174;
        case 0x1b6178u: goto label_1b6178;
        case 0x1b617cu: goto label_1b617c;
        case 0x1b6180u: goto label_1b6180;
        case 0x1b6184u: goto label_1b6184;
        case 0x1b6188u: goto label_1b6188;
        case 0x1b618cu: goto label_1b618c;
        case 0x1b6190u: goto label_1b6190;
        case 0x1b6194u: goto label_1b6194;
        case 0x1b6198u: goto label_1b6198;
        case 0x1b619cu: goto label_1b619c;
        case 0x1b61a0u: goto label_1b61a0;
        case 0x1b61a4u: goto label_1b61a4;
        case 0x1b61a8u: goto label_1b61a8;
        case 0x1b61acu: goto label_1b61ac;
        case 0x1b61b0u: goto label_1b61b0;
        case 0x1b61b4u: goto label_1b61b4;
        case 0x1b61b8u: goto label_1b61b8;
        case 0x1b61bcu: goto label_1b61bc;
        case 0x1b61c0u: goto label_1b61c0;
        case 0x1b61c4u: goto label_1b61c4;
        case 0x1b61c8u: goto label_1b61c8;
        case 0x1b61ccu: goto label_1b61cc;
        case 0x1b61d0u: goto label_1b61d0;
        case 0x1b61d4u: goto label_1b61d4;
        case 0x1b61d8u: goto label_1b61d8;
        case 0x1b61dcu: goto label_1b61dc;
        case 0x1b61e0u: goto label_1b61e0;
        case 0x1b61e4u: goto label_1b61e4;
        case 0x1b61e8u: goto label_1b61e8;
        case 0x1b61ecu: goto label_1b61ec;
        case 0x1b61f0u: goto label_1b61f0;
        case 0x1b61f4u: goto label_1b61f4;
        case 0x1b61f8u: goto label_1b61f8;
        case 0x1b61fcu: goto label_1b61fc;
        case 0x1b6200u: goto label_1b6200;
        case 0x1b6204u: goto label_1b6204;
        case 0x1b6208u: goto label_1b6208;
        case 0x1b620cu: goto label_1b620c;
        case 0x1b6210u: goto label_1b6210;
        case 0x1b6214u: goto label_1b6214;
        case 0x1b6218u: goto label_1b6218;
        case 0x1b621cu: goto label_1b621c;
        case 0x1b6220u: goto label_1b6220;
        case 0x1b6224u: goto label_1b6224;
        case 0x1b6228u: goto label_1b6228;
        case 0x1b622cu: goto label_1b622c;
        case 0x1b6230u: goto label_1b6230;
        case 0x1b6234u: goto label_1b6234;
        case 0x1b6238u: goto label_1b6238;
        case 0x1b623cu: goto label_1b623c;
        case 0x1b6240u: goto label_1b6240;
        case 0x1b6244u: goto label_1b6244;
        case 0x1b6248u: goto label_1b6248;
        case 0x1b624cu: goto label_1b624c;
        case 0x1b6250u: goto label_1b6250;
        case 0x1b6254u: goto label_1b6254;
        case 0x1b6258u: goto label_1b6258;
        case 0x1b625cu: goto label_1b625c;
        case 0x1b6260u: goto label_1b6260;
        case 0x1b6264u: goto label_1b6264;
        case 0x1b6268u: goto label_1b6268;
        case 0x1b626cu: goto label_1b626c;
        case 0x1b6270u: goto label_1b6270;
        case 0x1b6274u: goto label_1b6274;
        case 0x1b6278u: goto label_1b6278;
        case 0x1b627cu: goto label_1b627c;
        case 0x1b6280u: goto label_1b6280;
        case 0x1b6284u: goto label_1b6284;
        case 0x1b6288u: goto label_1b6288;
        case 0x1b628cu: goto label_1b628c;
        case 0x1b6290u: goto label_1b6290;
        case 0x1b6294u: goto label_1b6294;
        case 0x1b6298u: goto label_1b6298;
        case 0x1b629cu: goto label_1b629c;
        case 0x1b62a0u: goto label_1b62a0;
        case 0x1b62a4u: goto label_1b62a4;
        case 0x1b62a8u: goto label_1b62a8;
        case 0x1b62acu: goto label_1b62ac;
        case 0x1b62b0u: goto label_1b62b0;
        case 0x1b62b4u: goto label_1b62b4;
        case 0x1b62b8u: goto label_1b62b8;
        case 0x1b62bcu: goto label_1b62bc;
        case 0x1b62c0u: goto label_1b62c0;
        case 0x1b62c4u: goto label_1b62c4;
        case 0x1b62c8u: goto label_1b62c8;
        case 0x1b62ccu: goto label_1b62cc;
        case 0x1b62d0u: goto label_1b62d0;
        case 0x1b62d4u: goto label_1b62d4;
        case 0x1b62d8u: goto label_1b62d8;
        case 0x1b62dcu: goto label_1b62dc;
        case 0x1b62e0u: goto label_1b62e0;
        case 0x1b62e4u: goto label_1b62e4;
        case 0x1b62e8u: goto label_1b62e8;
        case 0x1b62ecu: goto label_1b62ec;
        case 0x1b62f0u: goto label_1b62f0;
        case 0x1b62f4u: goto label_1b62f4;
        case 0x1b62f8u: goto label_1b62f8;
        case 0x1b62fcu: goto label_1b62fc;
        case 0x1b6300u: goto label_1b6300;
        case 0x1b6304u: goto label_1b6304;
        case 0x1b6308u: goto label_1b6308;
        case 0x1b630cu: goto label_1b630c;
        case 0x1b6310u: goto label_1b6310;
        case 0x1b6314u: goto label_1b6314;
        case 0x1b6318u: goto label_1b6318;
        case 0x1b631cu: goto label_1b631c;
        case 0x1b6320u: goto label_1b6320;
        case 0x1b6324u: goto label_1b6324;
        case 0x1b6328u: goto label_1b6328;
        case 0x1b632cu: goto label_1b632c;
        case 0x1b6330u: goto label_1b6330;
        case 0x1b6334u: goto label_1b6334;
        case 0x1b6338u: goto label_1b6338;
        case 0x1b633cu: goto label_1b633c;
        case 0x1b6340u: goto label_1b6340;
        case 0x1b6344u: goto label_1b6344;
        case 0x1b6348u: goto label_1b6348;
        case 0x1b634cu: goto label_1b634c;
        case 0x1b6350u: goto label_1b6350;
        case 0x1b6354u: goto label_1b6354;
        case 0x1b6358u: goto label_1b6358;
        case 0x1b635cu: goto label_1b635c;
        case 0x1b6360u: goto label_1b6360;
        case 0x1b6364u: goto label_1b6364;
        case 0x1b6368u: goto label_1b6368;
        case 0x1b636cu: goto label_1b636c;
        case 0x1b6370u: goto label_1b6370;
        case 0x1b6374u: goto label_1b6374;
        case 0x1b6378u: goto label_1b6378;
        case 0x1b637cu: goto label_1b637c;
        case 0x1b6380u: goto label_1b6380;
        case 0x1b6384u: goto label_1b6384;
        case 0x1b6388u: goto label_1b6388;
        case 0x1b638cu: goto label_1b638c;
        case 0x1b6390u: goto label_1b6390;
        case 0x1b6394u: goto label_1b6394;
        case 0x1b6398u: goto label_1b6398;
        case 0x1b639cu: goto label_1b639c;
        case 0x1b63a0u: goto label_1b63a0;
        case 0x1b63a4u: goto label_1b63a4;
        case 0x1b63a8u: goto label_1b63a8;
        case 0x1b63acu: goto label_1b63ac;
        case 0x1b63b0u: goto label_1b63b0;
        case 0x1b63b4u: goto label_1b63b4;
        case 0x1b63b8u: goto label_1b63b8;
        case 0x1b63bcu: goto label_1b63bc;
        case 0x1b63c0u: goto label_1b63c0;
        case 0x1b63c4u: goto label_1b63c4;
        case 0x1b63c8u: goto label_1b63c8;
        case 0x1b63ccu: goto label_1b63cc;
        case 0x1b63d0u: goto label_1b63d0;
        case 0x1b63d4u: goto label_1b63d4;
        case 0x1b63d8u: goto label_1b63d8;
        case 0x1b63dcu: goto label_1b63dc;
        case 0x1b63e0u: goto label_1b63e0;
        case 0x1b63e4u: goto label_1b63e4;
        case 0x1b63e8u: goto label_1b63e8;
        case 0x1b63ecu: goto label_1b63ec;
        case 0x1b63f0u: goto label_1b63f0;
        case 0x1b63f4u: goto label_1b63f4;
        case 0x1b63f8u: goto label_1b63f8;
        case 0x1b63fcu: goto label_1b63fc;
        case 0x1b6400u: goto label_1b6400;
        case 0x1b6404u: goto label_1b6404;
        case 0x1b6408u: goto label_1b6408;
        case 0x1b640cu: goto label_1b640c;
        case 0x1b6410u: goto label_1b6410;
        case 0x1b6414u: goto label_1b6414;
        case 0x1b6418u: goto label_1b6418;
        case 0x1b641cu: goto label_1b641c;
        case 0x1b6420u: goto label_1b6420;
        case 0x1b6424u: goto label_1b6424;
        case 0x1b6428u: goto label_1b6428;
        case 0x1b642cu: goto label_1b642c;
        case 0x1b6430u: goto label_1b6430;
        case 0x1b6434u: goto label_1b6434;
        case 0x1b6438u: goto label_1b6438;
        case 0x1b643cu: goto label_1b643c;
        case 0x1b6440u: goto label_1b6440;
        case 0x1b6444u: goto label_1b6444;
        case 0x1b6448u: goto label_1b6448;
        case 0x1b644cu: goto label_1b644c;
        case 0x1b6450u: goto label_1b6450;
        case 0x1b6454u: goto label_1b6454;
        case 0x1b6458u: goto label_1b6458;
        case 0x1b645cu: goto label_1b645c;
        case 0x1b6460u: goto label_1b6460;
        case 0x1b6464u: goto label_1b6464;
        case 0x1b6468u: goto label_1b6468;
        case 0x1b646cu: goto label_1b646c;
        case 0x1b6470u: goto label_1b6470;
        case 0x1b6474u: goto label_1b6474;
        case 0x1b6478u: goto label_1b6478;
        case 0x1b647cu: goto label_1b647c;
        case 0x1b6480u: goto label_1b6480;
        case 0x1b6484u: goto label_1b6484;
        case 0x1b6488u: goto label_1b6488;
        case 0x1b648cu: goto label_1b648c;
        case 0x1b6490u: goto label_1b6490;
        case 0x1b6494u: goto label_1b6494;
        case 0x1b6498u: goto label_1b6498;
        case 0x1b649cu: goto label_1b649c;
        case 0x1b64a0u: goto label_1b64a0;
        case 0x1b64a4u: goto label_1b64a4;
        case 0x1b64a8u: goto label_1b64a8;
        case 0x1b64acu: goto label_1b64ac;
        case 0x1b64b0u: goto label_1b64b0;
        case 0x1b64b4u: goto label_1b64b4;
        case 0x1b64b8u: goto label_1b64b8;
        case 0x1b64bcu: goto label_1b64bc;
        case 0x1b64c0u: goto label_1b64c0;
        case 0x1b64c4u: goto label_1b64c4;
        case 0x1b64c8u: goto label_1b64c8;
        case 0x1b64ccu: goto label_1b64cc;
        case 0x1b64d0u: goto label_1b64d0;
        case 0x1b64d4u: goto label_1b64d4;
        case 0x1b64d8u: goto label_1b64d8;
        case 0x1b64dcu: goto label_1b64dc;
        case 0x1b64e0u: goto label_1b64e0;
        case 0x1b64e4u: goto label_1b64e4;
        case 0x1b64e8u: goto label_1b64e8;
        case 0x1b64ecu: goto label_1b64ec;
        case 0x1b64f0u: goto label_1b64f0;
        case 0x1b64f4u: goto label_1b64f4;
        case 0x1b64f8u: goto label_1b64f8;
        case 0x1b64fcu: goto label_1b64fc;
        case 0x1b6500u: goto label_1b6500;
        case 0x1b6504u: goto label_1b6504;
        case 0x1b6508u: goto label_1b6508;
        case 0x1b650cu: goto label_1b650c;
        case 0x1b6510u: goto label_1b6510;
        case 0x1b6514u: goto label_1b6514;
        case 0x1b6518u: goto label_1b6518;
        case 0x1b651cu: goto label_1b651c;
        case 0x1b6520u: goto label_1b6520;
        case 0x1b6524u: goto label_1b6524;
        case 0x1b6528u: goto label_1b6528;
        case 0x1b652cu: goto label_1b652c;
        case 0x1b6530u: goto label_1b6530;
        case 0x1b6534u: goto label_1b6534;
        case 0x1b6538u: goto label_1b6538;
        case 0x1b653cu: goto label_1b653c;
        case 0x1b6540u: goto label_1b6540;
        case 0x1b6544u: goto label_1b6544;
        case 0x1b6548u: goto label_1b6548;
        case 0x1b654cu: goto label_1b654c;
        case 0x1b6550u: goto label_1b6550;
        case 0x1b6554u: goto label_1b6554;
        case 0x1b6558u: goto label_1b6558;
        default: break;
    }

    ctx->pc = 0x1b60b0u;

label_1b60b0:
    // 0x1b60b0: 0x27bdd740  addiu       $sp, $sp, -0x28C0
    ctx->pc = 0x1b60b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294956864));
label_1b60b4:
    // 0x1b60b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b60b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1b60b8:
    // 0x1b60b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b60b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b60bc:
    // 0x1b60bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b60bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b60c0:
    // 0x1b60c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b60c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b60c4:
    // 0x1b60c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b60c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b60c8:
    // 0x1b60c8: 0x8c840174  lw          $a0, 0x174($a0)
    ctx->pc = 0x1b60c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
label_1b60cc:
    // 0x1b60cc: 0x1080011d  beqz        $a0, . + 4 + (0x11D << 2)
label_1b60d0:
    if (ctx->pc == 0x1B60D0u) {
        ctx->pc = 0x1B60D0u;
            // 0x1b60d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B60D4u;
        goto label_1b60d4;
    }
    ctx->pc = 0x1B60CCu;
    {
        const bool branch_taken_0x1b60cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B60D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B60CCu;
            // 0x1b60d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b60cc) {
            ctx->pc = 0x1B6544u;
            goto label_1b6544;
        }
    }
    ctx->pc = 0x1B60D4u;
label_1b60d4:
    // 0x1b60d4: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_1b60d8:
    if (ctx->pc == 0x1B60D8u) {
        ctx->pc = 0x1B60D8u;
            // 0x1b60d8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1B60DCu;
        goto label_1b60dc;
    }
    ctx->pc = 0x1B60D4u;
    {
        const bool branch_taken_0x1b60d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B60D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B60D4u;
            // 0x1b60d8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b60d4) {
            ctx->pc = 0x1B60E0u;
            goto label_1b60e0;
        }
    }
    ctx->pc = 0x1B60DCu;
label_1b60dc:
    // 0x1b60dc: 0xae430174  sw          $v1, 0x174($s2)
    ctx->pc = 0x1b60dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 372), GPR_U32(ctx, 3));
label_1b60e0:
    // 0x1b60e0: 0x8e440174  lw          $a0, 0x174($s2)
    ctx->pc = 0x1b60e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_1b60e4:
    // 0x1b60e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b60e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b60e8:
    // 0x1b60e8: 0x1483010a  bne         $a0, $v1, . + 4 + (0x10A << 2)
label_1b60ec:
    if (ctx->pc == 0x1B60ECu) {
        ctx->pc = 0x1B60F0u;
        goto label_1b60f0;
    }
    ctx->pc = 0x1B60E8u;
    {
        const bool branch_taken_0x1b60e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b60e8) {
            ctx->pc = 0x1B6514u;
            goto label_1b6514;
        }
    }
    ctx->pc = 0x1B60F0u;
label_1b60f0:
    // 0x1b60f0: 0x8e450160  lw          $a1, 0x160($s2)
    ctx->pc = 0x1b60f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
label_1b60f4:
    // 0x1b60f4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1b60f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1b60f8:
    // 0x1b60f8: 0xc06e9d4  jal         func_1BA750
label_1b60fc:
    if (ctx->pc == 0x1B60FCu) {
        ctx->pc = 0x1B60FCu;
            // 0x1b60fc: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->pc = 0x1B6100u;
        goto label_1b6100;
    }
    ctx->pc = 0x1B60F8u;
    SET_GPR_U32(ctx, 31, 0x1B6100u);
    ctx->pc = 0x1B60FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B60F8u;
            // 0x1b60fc: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA750u;
    if (runtime->hasFunction(0x1BA750u)) {
        auto targetFn = runtime->lookupFunction(0x1BA750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6100u; }
        if (ctx->pc != 0x1B6100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetID2Prim__11CColPrimManFi_0x1ba750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6100u; }
        if (ctx->pc != 0x1B6100u) { return; }
    }
    ctx->pc = 0x1B6100u;
label_1b6100:
    // 0x1b6100: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b6100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6104:
    // 0x1b6104: 0x8e420168  lw          $v0, 0x168($s2)
    ctx->pc = 0x1b6104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 360)));
label_1b6108:
    // 0x1b6108: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1b610c:
    if (ctx->pc == 0x1B610Cu) {
        ctx->pc = 0x1B6110u;
        goto label_1b6110;
    }
    ctx->pc = 0x1B6108u;
    {
        const bool branch_taken_0x1b6108 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b6108) {
            ctx->pc = 0x1B6118u;
            goto label_1b6118;
        }
    }
    ctx->pc = 0x1B6110u;
label_1b6110:
    // 0x1b6110: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b6110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b6114:
    // 0x1b6114: 0xae420168  sw          $v0, 0x168($s2)
    ctx->pc = 0x1b6114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 360), GPR_U32(ctx, 2));
label_1b6118:
    // 0x1b6118: 0x8e42016c  lw          $v0, 0x16C($s2)
    ctx->pc = 0x1b6118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 364)));
label_1b611c:
    // 0x1b611c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1b6120:
    if (ctx->pc == 0x1B6120u) {
        ctx->pc = 0x1B6124u;
        goto label_1b6124;
    }
    ctx->pc = 0x1B611Cu;
    {
        const bool branch_taken_0x1b611c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b611c) {
            ctx->pc = 0x1B612Cu;
            goto label_1b612c;
        }
    }
    ctx->pc = 0x1B6124u;
label_1b6124:
    // 0x1b6124: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b6124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b6128:
    // 0x1b6128: 0xae42016c  sw          $v0, 0x16C($s2)
    ctx->pc = 0x1b6128u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 364), GPR_U32(ctx, 2));
label_1b612c:
    // 0x1b612c: 0x8e420170  lw          $v0, 0x170($s2)
    ctx->pc = 0x1b612cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
label_1b6130:
    // 0x1b6130: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b6130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b6134:
    // 0x1b6134: 0xae420170  sw          $v0, 0x170($s2)
    ctx->pc = 0x1b6134u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 368), GPR_U32(ctx, 2));
label_1b6138:
    // 0x1b6138: 0x8e420168  lw          $v0, 0x168($s2)
    ctx->pc = 0x1b6138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 360)));
label_1b613c:
    // 0x1b613c: 0x1c400020  bgtz        $v0, . + 4 + (0x20 << 2)
label_1b6140:
    if (ctx->pc == 0x1B6140u) {
        ctx->pc = 0x1B6140u;
            // 0x1b6140: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1B6144u;
        goto label_1b6144;
    }
    ctx->pc = 0x1B613Cu;
    {
        const bool branch_taken_0x1b613c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1B6140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B613Cu;
            // 0x1b6140: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b613c) {
            ctx->pc = 0x1B61C0u;
            goto label_1b61c0;
        }
    }
    ctx->pc = 0x1B6144u;
label_1b6144:
    // 0x1b6144: 0x8e42016c  lw          $v0, 0x16C($s2)
    ctx->pc = 0x1b6144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 364)));
label_1b6148:
    // 0x1b6148: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
label_1b614c:
    if (ctx->pc == 0x1B614Cu) {
        ctx->pc = 0x1B6150u;
        goto label_1b6150;
    }
    ctx->pc = 0x1B6148u;
    {
        const bool branch_taken_0x1b6148 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b6148) {
            ctx->pc = 0x1B61BCu;
            goto label_1b61bc;
        }
    }
    ctx->pc = 0x1B6150u;
label_1b6150:
    // 0x1b6150: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1b6150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b6154:
    // 0x1b6154: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b6154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b6158:
    // 0x1b6158: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
label_1b615c:
    if (ctx->pc == 0x1B615Cu) {
        ctx->pc = 0x1B615Cu;
            // 0x1b615c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1B6160u;
        goto label_1b6160;
    }
    ctx->pc = 0x1B6158u;
    {
        const bool branch_taken_0x1b6158 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B615Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6158u;
            // 0x1b615c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6158) {
            ctx->pc = 0x1B6184u;
            goto label_1b6184;
        }
    }
    ctx->pc = 0x1B6160u;
label_1b6160:
    // 0x1b6160: 0xc0a0ed8  jal         func_283B60
label_1b6164:
    if (ctx->pc == 0x1B6164u) {
        ctx->pc = 0x1B6164u;
            // 0x1b6164: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->pc = 0x1B6168u;
        goto label_1b6168;
    }
    ctx->pc = 0x1B6160u;
    SET_GPR_U32(ctx, 31, 0x1B6168u);
    ctx->pc = 0x1B6164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6160u;
            // 0x1b6164: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6168u; }
        if (ctx->pc != 0x1B6168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6168u; }
        if (ctx->pc != 0x1B6168u) { return; }
    }
    ctx->pc = 0x1B6168u;
label_1b6168:
    // 0x1b6168: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b616c:
    if (ctx->pc == 0x1B616Cu) {
        ctx->pc = 0x1B616Cu;
            // 0x1b616c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6170u;
        goto label_1b6170;
    }
    ctx->pc = 0x1B6168u;
    {
        const bool branch_taken_0x1b6168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B616Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6168u;
            // 0x1b616c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6168) {
            ctx->pc = 0x1B6180u;
            goto label_1b6180;
        }
    }
    ctx->pc = 0x1B6170u;
label_1b6170:
    // 0x1b6170: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6174:
    // 0x1b6174: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b6174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6178:
    // 0x1b6178: 0xc05d420  jal         func_175080
label_1b617c:
    if (ctx->pc == 0x1B617Cu) {
        ctx->pc = 0x1B617Cu;
            // 0x1b617c: 0x26470030  addiu       $a3, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x1B6180u;
        goto label_1b6180;
    }
    ctx->pc = 0x1B6178u;
    SET_GPR_U32(ctx, 31, 0x1B6180u);
    ctx->pc = 0x1B617Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6178u;
            // 0x1b617c: 0x26470030  addiu       $a3, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6180u; }
        if (ctx->pc != 0x1B6180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6180u; }
        if (ctx->pc != 0x1B6180u) { return; }
    }
    ctx->pc = 0x1B6180u;
label_1b6180:
    // 0x1b6180: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b6180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b6184:
    // 0x1b6184: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x1b6184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_1b6188:
    // 0x1b6188: 0xc041c3e  jal         func_1070F8
label_1b618c:
    if (ctx->pc == 0x1B618Cu) {
        ctx->pc = 0x1B618Cu;
            // 0x1b618c: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x1B6190u;
        goto label_1b6190;
    }
    ctx->pc = 0x1B6188u;
    SET_GPR_U32(ctx, 31, 0x1B6190u);
    ctx->pc = 0x1B618Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6188u;
            // 0x1b618c: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6190u; }
        if (ctx->pc != 0x1B6190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6190u; }
        if (ctx->pc != 0x1B6190u) { return; }
    }
    ctx->pc = 0x1B6190u;
label_1b6190:
    // 0x1b6190: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b6190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b6194:
    // 0x1b6194: 0xc041be0  jal         func_106F80
label_1b6198:
    if (ctx->pc == 0x1B6198u) {
        ctx->pc = 0x1B6198u;
            // 0x1b6198: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B619Cu;
        goto label_1b619c;
    }
    ctx->pc = 0x1B6194u;
    SET_GPR_U32(ctx, 31, 0x1B619Cu);
    ctx->pc = 0x1B6198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6194u;
            // 0x1b6198: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B619Cu; }
        if (ctx->pc != 0x1B619Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B619Cu; }
        if (ctx->pc != 0x1B619Cu) { return; }
    }
    ctx->pc = 0x1B619Cu;
label_1b619c:
    // 0x1b619c: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x1b619cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
label_1b61a0:
    // 0x1b61a0: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1b61a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1b61a4:
    // 0x1b61a4: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x1b61a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_1b61a8:
    // 0x1b61a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b61a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b61ac:
    // 0x1b61ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b61acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b61b0:
    // 0x1b61b0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1b61b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b61b4:
    // 0x1b61b4: 0xc04c294  jal         func_130A50
label_1b61b8:
    if (ctx->pc == 0x1B61B8u) {
        ctx->pc = 0x1B61B8u;
            // 0x1b61b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B61BCu;
        goto label_1b61bc;
    }
    ctx->pc = 0x1B61B4u;
    SET_GPR_U32(ctx, 31, 0x1B61BCu);
    ctx->pc = 0x1B61B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B61B4u;
            // 0x1b61b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130A50u;
    if (runtime->hasFunction(0x130A50u)) {
        auto targetFn = runtime->lookupFunction(0x130A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B61BCu; }
        if (ctx->pc != 0x1B61BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorInterpolate__FPfPfPffi_0x130a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B61BCu; }
        if (ctx->pc != 0x1B61BCu) { return; }
    }
    ctx->pc = 0x1B61BCu;
label_1b61bc:
    // 0x1b61bc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b61bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1b61c0:
    // 0x1b61c0: 0xc041c5c  jal         func_107170
label_1b61c4:
    if (ctx->pc == 0x1B61C4u) {
        ctx->pc = 0x1B61C4u;
            // 0x1b61c4: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x1B61C8u;
        goto label_1b61c8;
    }
    ctx->pc = 0x1B61C0u;
    SET_GPR_U32(ctx, 31, 0x1B61C8u);
    ctx->pc = 0x1B61C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B61C0u;
            // 0x1b61c4: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B61C8u; }
        if (ctx->pc != 0x1B61C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B61C8u; }
        if (ctx->pc != 0x1B61C8u) { return; }
    }
    ctx->pc = 0x1B61C8u;
label_1b61c8:
    // 0x1b61c8: 0xc64c015c  lwc1        $f12, 0x15C($s2)
    ctx->pc = 0x1b61c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b61cc:
    // 0x1b61cc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b61ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b61d0:
    // 0x1b61d0: 0xc041c4a  jal         func_107128
label_1b61d4:
    if (ctx->pc == 0x1B61D4u) {
        ctx->pc = 0x1B61D4u;
            // 0x1b61d4: 0x26450040  addiu       $a1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->pc = 0x1B61D8u;
        goto label_1b61d8;
    }
    ctx->pc = 0x1B61D0u;
    SET_GPR_U32(ctx, 31, 0x1B61D8u);
    ctx->pc = 0x1B61D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B61D0u;
            // 0x1b61d4: 0x26450040  addiu       $a1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B61D8u; }
        if (ctx->pc != 0x1B61D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B61D8u; }
        if (ctx->pc != 0x1B61D8u) { return; }
    }
    ctx->pc = 0x1B61D8u;
label_1b61d8:
    // 0x1b61d8: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1b61d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1b61dc:
    // 0x1b61dc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1b61dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b61e0:
    // 0x1b61e0: 0xc041c38  jal         func_1070E0
label_1b61e4:
    if (ctx->pc == 0x1B61E4u) {
        ctx->pc = 0x1B61E4u;
            // 0x1b61e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B61E8u;
        goto label_1b61e8;
    }
    ctx->pc = 0x1B61E0u;
    SET_GPR_U32(ctx, 31, 0x1B61E8u);
    ctx->pc = 0x1B61E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B61E0u;
            // 0x1b61e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B61E8u; }
        if (ctx->pc != 0x1B61E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B61E8u; }
        if (ctx->pc != 0x1B61E8u) { return; }
    }
    ctx->pc = 0x1B61E8u;
label_1b61e8:
    // 0x1b61e8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1b61ec:
    if (ctx->pc == 0x1B61ECu) {
        ctx->pc = 0x1B61ECu;
            // 0x1b61ec: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x1B61F0u;
        goto label_1b61f0;
    }
    ctx->pc = 0x1B61E8u;
    {
        const bool branch_taken_0x1b61e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B61ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B61E8u;
            // 0x1b61ec: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b61e8) {
            ctx->pc = 0x1B6208u;
            goto label_1b6208;
        }
    }
    ctx->pc = 0x1B61F0u;
label_1b61f0:
    // 0x1b61f0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1b61f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1b61f4:
    // 0x1b61f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b61f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b61f8:
    // 0x1b61f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b61f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b61fc:
    // 0x1b61fc: 0xc06e760  jal         func_1B9D80
label_1b6200:
    if (ctx->pc == 0x1B6200u) {
        ctx->pc = 0x1B6200u;
            // 0x1b6200: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x1B6204u;
        goto label_1b6204;
    }
    ctx->pc = 0x1B61FCu;
    SET_GPR_U32(ctx, 31, 0x1B6204u);
    ctx->pc = 0x1B6200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B61FCu;
            // 0x1b6200: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D80u;
    if (runtime->hasFunction(0x1B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x1B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6204u; }
        if (ctx->pc != 0x1B6204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCoord__8CColPrimFPff_0x1b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6204u; }
        if (ctx->pc != 0x1B6204u) { return; }
    }
    ctx->pc = 0x1B6204u;
label_1b6204:
    // 0x1b6204: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b6204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1b6208:
    // 0x1b6208: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1b6208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1b620c:
    // 0x1b620c: 0xafa3287c  sw          $v1, 0x287C($sp)
    ctx->pc = 0x1b620cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10364), GPR_U32(ctx, 3));
label_1b6210:
    // 0x1b6210: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b6210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b6214:
    // 0x1b6214: 0xafa3288c  sw          $v1, 0x288C($sp)
    ctx->pc = 0x1b6214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10380), GPR_U32(ctx, 3));
label_1b6218:
    // 0x1b6218: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1b6218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1b621c:
    // 0x1b621c: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x1b621cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6220:
    // 0x1b6220: 0x8f848db4  lw          $a0, -0x724C($gp)
    ctx->pc = 0x1b6220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938036)));
label_1b6224:
    // 0x1b6224: 0xc640015c  lwc1        $f0, 0x15C($s2)
    ctx->pc = 0x1b6224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6228:
    // 0x1b6228: 0x27a62870  addiu       $a2, $sp, 0x2870
    ctx->pc = 0x1b6228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 10352));
label_1b622c:
    // 0x1b622c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b622cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b6230:
    // 0x1b6230: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b6230u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1b6234:
    // 0x1b6234: 0xe7a02870  swc1        $f0, 0x2870($sp)
    ctx->pc = 0x1b6234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10352), bits); }
label_1b6238:
    // 0x1b6238: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x1b6238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b623c:
    // 0x1b623c: 0xc640015c  lwc1        $f0, 0x15C($s2)
    ctx->pc = 0x1b623cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6240:
    // 0x1b6240: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b6240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b6244:
    // 0x1b6244: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b6244u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b6248:
    // 0x1b6248: 0xe7a02880  swc1        $f0, 0x2880($sp)
    ctx->pc = 0x1b6248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10368), bits); }
label_1b624c:
    // 0x1b624c: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x1b624cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6250:
    // 0x1b6250: 0xc640015c  lwc1        $f0, 0x15C($s2)
    ctx->pc = 0x1b6250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6254:
    // 0x1b6254: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b6254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b6258:
    // 0x1b6258: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b6258u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1b625c:
    // 0x1b625c: 0xe7a02874  swc1        $f0, 0x2874($sp)
    ctx->pc = 0x1b625cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10356), bits); }
label_1b6260:
    // 0x1b6260: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x1b6260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6264:
    // 0x1b6264: 0xc640015c  lwc1        $f0, 0x15C($s2)
    ctx->pc = 0x1b6264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6268:
    // 0x1b6268: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b6268u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b626c:
    // 0x1b626c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b626cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b6270:
    // 0x1b6270: 0xe7a02884  swc1        $f0, 0x2884($sp)
    ctx->pc = 0x1b6270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10372), bits); }
label_1b6274:
    // 0x1b6274: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x1b6274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6278:
    // 0x1b6278: 0xc640015c  lwc1        $f0, 0x15C($s2)
    ctx->pc = 0x1b6278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b627c:
    // 0x1b627c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b627cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b6280:
    // 0x1b6280: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b6280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1b6284:
    // 0x1b6284: 0xe7a02878  swc1        $f0, 0x2878($sp)
    ctx->pc = 0x1b6284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10360), bits); }
label_1b6288:
    // 0x1b6288: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x1b6288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b628c:
    // 0x1b628c: 0xc640015c  lwc1        $f0, 0x15C($s2)
    ctx->pc = 0x1b628cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6290:
    // 0x1b6290: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b6290u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b6294:
    // 0x1b6294: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b6294u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b6298:
    // 0x1b6298: 0xe7a02888  swc1        $f0, 0x2888($sp)
    ctx->pc = 0x1b6298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10376), bits); }
label_1b629c:
    // 0x1b629c: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x1b629cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_1b62a0:
    // 0x1b62a0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1b62a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1b62a4:
    // 0x1b62a4: 0x320f809  jalr        $t9
label_1b62a8:
    if (ctx->pc == 0x1B62A8u) {
        ctx->pc = 0x1B62A8u;
            // 0x1b62a8: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x1B62ACu;
        goto label_1b62ac;
    }
    ctx->pc = 0x1B62A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B62ACu);
        ctx->pc = 0x1B62A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B62A4u;
            // 0x1b62a8: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B62ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B62ACu; }
            if (ctx->pc != 0x1B62ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1B62ACu;
label_1b62ac:
    // 0x1b62ac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1b62acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1b62b0:
    // 0x1b62b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b62b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b62b4:
    // 0x1b62b4: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x1b62b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1b62b8:
    // 0x1b62b8: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1b62b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1b62bc:
    // 0x1b62bc: 0x27a82890  addiu       $t0, $sp, 0x2890
    ctx->pc = 0x1b62bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 10384));
label_1b62c0:
    // 0x1b62c0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1b62c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b62c4:
    // 0x1b62c4: 0xc053794  jal         func_14DE50
label_1b62c8:
    if (ctx->pc == 0x1B62C8u) {
        ctx->pc = 0x1B62C8u;
            // 0x1b62c8: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1B62CCu;
        goto label_1b62cc;
    }
    ctx->pc = 0x1B62C4u;
    SET_GPR_U32(ctx, 31, 0x1B62CCu);
    ctx->pc = 0x1B62C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B62C4u;
            // 0x1b62c8: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B62CCu; }
        if (ctx->pc != 0x1B62CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B62CCu; }
        if (ctx->pc != 0x1B62CCu) { return; }
    }
    ctx->pc = 0x1B62CCu;
label_1b62cc:
    // 0x1b62cc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1b62d0:
    if (ctx->pc == 0x1B62D0u) {
        ctx->pc = 0x1B62D0u;
            // 0x1b62d0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1B62D4u;
        goto label_1b62d4;
    }
    ctx->pc = 0x1B62CCu;
    {
        const bool branch_taken_0x1b62cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B62D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B62CCu;
            // 0x1b62d0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b62cc) {
            ctx->pc = 0x1B62E8u;
            goto label_1b62e8;
        }
    }
    ctx->pc = 0x1B62D4u;
label_1b62d4:
    // 0x1b62d4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1b62d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1b62d8:
    // 0x1b62d8: 0xae440174  sw          $a0, 0x174($s2)
    ctx->pc = 0x1b62d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 372), GPR_U32(ctx, 4));
label_1b62dc:
    // 0x1b62dc: 0x8e440164  lw          $a0, 0x164($s2)
    ctx->pc = 0x1b62dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 356)));
label_1b62e0:
    // 0x1b62e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b62e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1b62e4:
    // 0x1b62e4: 0xae430164  sw          $v1, 0x164($s2)
    ctx->pc = 0x1b62e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 356), GPR_U32(ctx, 3));
label_1b62e8:
    // 0x1b62e8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_1b62ec:
    if (ctx->pc == 0x1B62ECu) {
        ctx->pc = 0x1B62F0u;
        goto label_1b62f0;
    }
    ctx->pc = 0x1B62E8u;
    {
        const bool branch_taken_0x1b62e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b62e8) {
            ctx->pc = 0x1B6310u;
            goto label_1b6310;
        }
    }
    ctx->pc = 0x1B62F0u;
label_1b62f0:
    // 0x1b62f0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1b62f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1b62f4:
    // 0x1b62f4: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
label_1b62f8:
    if (ctx->pc == 0x1B62F8u) {
        ctx->pc = 0x1B62F8u;
            // 0x1b62f8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1B62FCu;
        goto label_1b62fc;
    }
    ctx->pc = 0x1B62F4u;
    {
        const bool branch_taken_0x1b62f4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1B62F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B62F4u;
            // 0x1b62f8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b62f4) {
            ctx->pc = 0x1B6310u;
            goto label_1b6310;
        }
    }
    ctx->pc = 0x1B62FCu;
label_1b62fc:
    // 0x1b62fc: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1b62fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1b6300:
    // 0x1b6300: 0xae440174  sw          $a0, 0x174($s2)
    ctx->pc = 0x1b6300u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 372), GPR_U32(ctx, 4));
label_1b6304:
    // 0x1b6304: 0x8e440164  lw          $a0, 0x164($s2)
    ctx->pc = 0x1b6304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 356)));
label_1b6308:
    // 0x1b6308: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b6308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1b630c:
    // 0x1b630c: 0xae430164  sw          $v1, 0x164($s2)
    ctx->pc = 0x1b630cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 356), GPR_U32(ctx, 3));
label_1b6310:
    // 0x1b6310: 0x8e430170  lw          $v1, 0x170($s2)
    ctx->pc = 0x1b6310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
label_1b6314:
    // 0x1b6314: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
label_1b6318:
    if (ctx->pc == 0x1B6318u) {
        ctx->pc = 0x1B6318u;
            // 0x1b6318: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1B631Cu;
        goto label_1b631c;
    }
    ctx->pc = 0x1B6314u;
    {
        const bool branch_taken_0x1b6314 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1B6318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6314u;
            // 0x1b6318: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6314) {
            ctx->pc = 0x1B6330u;
            goto label_1b6330;
        }
    }
    ctx->pc = 0x1B631Cu;
label_1b631c:
    // 0x1b631c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1b631cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1b6320:
    // 0x1b6320: 0xae440174  sw          $a0, 0x174($s2)
    ctx->pc = 0x1b6320u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 372), GPR_U32(ctx, 4));
label_1b6324:
    // 0x1b6324: 0x8e440164  lw          $a0, 0x164($s2)
    ctx->pc = 0x1b6324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 356)));
label_1b6328:
    // 0x1b6328: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b6328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1b632c:
    // 0x1b632c: 0xae430164  sw          $v1, 0x164($s2)
    ctx->pc = 0x1b632cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 356), GPR_U32(ctx, 3));
label_1b6330:
    // 0x1b6330: 0x8e440174  lw          $a0, 0x174($s2)
    ctx->pc = 0x1b6330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_1b6334:
    // 0x1b6334: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b6334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b6338:
    // 0x1b6338: 0x1483005d  bne         $a0, $v1, . + 4 + (0x5D << 2)
label_1b633c:
    if (ctx->pc == 0x1B633Cu) {
        ctx->pc = 0x1B6340u;
        goto label_1b6340;
    }
    ctx->pc = 0x1B6338u;
    {
        const bool branch_taken_0x1b6338 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b6338) {
            ctx->pc = 0x1B64B0u;
            goto label_1b64b0;
        }
    }
    ctx->pc = 0x1B6340u;
label_1b6340:
    // 0x1b6340: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1b6340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1b6344:
    // 0x1b6344: 0xc0a0e30  jal         func_2838C0
label_1b6348:
    if (ctx->pc == 0x1B6348u) {
        ctx->pc = 0x1B6348u;
            // 0x1b6348: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->pc = 0x1B634Cu;
        goto label_1b634c;
    }
    ctx->pc = 0x1B6344u;
    SET_GPR_U32(ctx, 31, 0x1B634Cu);
    ctx->pc = 0x1B6348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6344u;
            // 0x1b6348: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B634Cu; }
        if (ctx->pc != 0x1B634Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B634Cu; }
        if (ctx->pc != 0x1B634Cu) { return; }
    }
    ctx->pc = 0x1B634Cu;
label_1b634c:
    // 0x1b634c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1b6350:
    if (ctx->pc == 0x1B6350u) {
        ctx->pc = 0x1B6350u;
            // 0x1b6350: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6354u;
        goto label_1b6354;
    }
    ctx->pc = 0x1B634Cu;
    {
        const bool branch_taken_0x1b634c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B634Cu;
            // 0x1b6350: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b634c) {
            ctx->pc = 0x1B639Cu;
            goto label_1b639c;
        }
    }
    ctx->pc = 0x1B6354u;
label_1b6354:
    // 0x1b6354: 0xc04c574  jal         func_1315D0
label_1b6358:
    if (ctx->pc == 0x1B6358u) {
        ctx->pc = 0x1B6358u;
            // 0x1b6358: 0x27a528a0  addiu       $a1, $sp, 0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10400));
        ctx->pc = 0x1B635Cu;
        goto label_1b635c;
    }
    ctx->pc = 0x1B6354u;
    SET_GPR_U32(ctx, 31, 0x1B635Cu);
    ctx->pc = 0x1B6358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6354u;
            // 0x1b6358: 0x27a528a0  addiu       $a1, $sp, 0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B635Cu; }
        if (ctx->pc != 0x1B635Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B635Cu; }
        if (ctx->pc != 0x1B635Cu) { return; }
    }
    ctx->pc = 0x1B635Cu;
label_1b635c:
    // 0x1b635c: 0x27a428a0  addiu       $a0, $sp, 0x28A0
    ctx->pc = 0x1b635cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10400));
label_1b6360:
    // 0x1b6360: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x1b6360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1b6364:
    // 0x1b6364: 0xc041c3e  jal         func_1070F8
label_1b6368:
    if (ctx->pc == 0x1B6368u) {
        ctx->pc = 0x1B6368u;
            // 0x1b6368: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B636Cu;
        goto label_1b636c;
    }
    ctx->pc = 0x1B6364u;
    SET_GPR_U32(ctx, 31, 0x1B636Cu);
    ctx->pc = 0x1B6368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6364u;
            // 0x1b6368: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B636Cu; }
        if (ctx->pc != 0x1B636Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B636Cu; }
        if (ctx->pc != 0x1B636Cu) { return; }
    }
    ctx->pc = 0x1B636Cu;
label_1b636c:
    // 0x1b636c: 0x27a428a0  addiu       $a0, $sp, 0x28A0
    ctx->pc = 0x1b636cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10400));
label_1b6370:
    // 0x1b6370: 0xc041be0  jal         func_106F80
label_1b6374:
    if (ctx->pc == 0x1B6374u) {
        ctx->pc = 0x1B6374u;
            // 0x1b6374: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6378u;
        goto label_1b6378;
    }
    ctx->pc = 0x1B6370u;
    SET_GPR_U32(ctx, 31, 0x1B6378u);
    ctx->pc = 0x1B6374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6370u;
            // 0x1b6374: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6378u; }
        if (ctx->pc != 0x1B6378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6378u; }
        if (ctx->pc != 0x1B6378u) { return; }
    }
    ctx->pc = 0x1B6378u;
label_1b6378:
    // 0x1b6378: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1b6378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1b637c:
    // 0x1b637c: 0x27a428a0  addiu       $a0, $sp, 0x28A0
    ctx->pc = 0x1b637cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10400));
label_1b6380:
    // 0x1b6380: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b6380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b6384:
    // 0x1b6384: 0xc041c4a  jal         func_107128
label_1b6388:
    if (ctx->pc == 0x1B6388u) {
        ctx->pc = 0x1B6388u;
            // 0x1b6388: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B638Cu;
        goto label_1b638c;
    }
    ctx->pc = 0x1B6384u;
    SET_GPR_U32(ctx, 31, 0x1B638Cu);
    ctx->pc = 0x1B6388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6384u;
            // 0x1b6388: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B638Cu; }
        if (ctx->pc != 0x1B638Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B638Cu; }
        if (ctx->pc != 0x1B638Cu) { return; }
    }
    ctx->pc = 0x1B638Cu;
label_1b638c:
    // 0x1b638c: 0x27a428a0  addiu       $a0, $sp, 0x28A0
    ctx->pc = 0x1b638cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10400));
label_1b6390:
    // 0x1b6390: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x1b6390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1b6394:
    // 0x1b6394: 0xc041c38  jal         func_1070E0
label_1b6398:
    if (ctx->pc == 0x1B6398u) {
        ctx->pc = 0x1B6398u;
            // 0x1b6398: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B639Cu;
        goto label_1b639c;
    }
    ctx->pc = 0x1B6394u;
    SET_GPR_U32(ctx, 31, 0x1B639Cu);
    ctx->pc = 0x1B6398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6394u;
            // 0x1b6398: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B639Cu; }
        if (ctx->pc != 0x1B639Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B639Cu; }
        if (ctx->pc != 0x1B639Cu) { return; }
    }
    ctx->pc = 0x1B639Cu;
label_1b639c:
    // 0x1b639c: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1b639cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1b63a0:
    // 0x1b63a0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1b63a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1b63a4:
    // 0x1b63a4: 0x24a56670  addiu       $a1, $a1, 0x6670
    ctx->pc = 0x1b63a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26224));
label_1b63a8:
    // 0x1b63a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b63a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b63ac:
    // 0x1b63ac: 0xc0b8498  jal         func_2E1260
label_1b63b0:
    if (ctx->pc == 0x1B63B0u) {
        ctx->pc = 0x1B63B0u;
            // 0x1b63b0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1B63B4u;
        goto label_1b63b4;
    }
    ctx->pc = 0x1B63ACu;
    SET_GPR_U32(ctx, 31, 0x1B63B4u);
    ctx->pc = 0x1B63B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B63ACu;
            // 0x1b63b0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B63B4u; }
        if (ctx->pc != 0x1B63B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B63B4u; }
        if (ctx->pc != 0x1B63B4u) { return; }
    }
    ctx->pc = 0x1B63B4u;
label_1b63b4:
    // 0x1b63b4: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1b63b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1b63b8:
    // 0x1b63b8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1b63b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b63bc:
    // 0x1b63bc: 0x27a528a0  addiu       $a1, $sp, 0x28A0
    ctx->pc = 0x1b63bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10400));
label_1b63c0:
    // 0x1b63c0: 0xc0b8894  jal         func_2E2250
label_1b63c4:
    if (ctx->pc == 0x1B63C4u) {
        ctx->pc = 0x1B63C4u;
            // 0x1b63c4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B63C8u;
        goto label_1b63c8;
    }
    ctx->pc = 0x1B63C0u;
    SET_GPR_U32(ctx, 31, 0x1B63C8u);
    ctx->pc = 0x1B63C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B63C0u;
            // 0x1b63c4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B63C8u; }
        if (ctx->pc != 0x1B63C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B63C8u; }
        if (ctx->pc != 0x1B63C8u) { return; }
    }
    ctx->pc = 0x1B63C8u;
label_1b63c8:
    // 0x1b63c8: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1b63c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1b63cc:
    // 0x1b63cc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1b63ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1b63d0:
    // 0x1b63d0: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x1b63d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1b63d4:
    // 0x1b63d4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1b63d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1b63d8:
    // 0x1b63d8: 0x8c24c4d0  lw          $a0, -0x3B30($at)
    ctx->pc = 0x1b63d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
label_1b63dc:
    // 0x1b63dc: 0xc063818  jal         func_18E060
label_1b63e0:
    if (ctx->pc == 0x1B63E0u) {
        ctx->pc = 0x1B63E0u;
            // 0x1b63e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B63E4u;
        goto label_1b63e4;
    }
    ctx->pc = 0x1B63DCu;
    SET_GPR_U32(ctx, 31, 0x1B63E4u);
    ctx->pc = 0x1B63E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B63DCu;
            // 0x1b63e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B63E4u; }
        if (ctx->pc != 0x1B63E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B63E4u; }
        if (ctx->pc != 0x1B63E4u) { return; }
    }
    ctx->pc = 0x1B63E4u;
label_1b63e4:
    // 0x1b63e4: 0x8e430170  lw          $v1, 0x170($s2)
    ctx->pc = 0x1b63e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
label_1b63e8:
    // 0x1b63e8: 0x1860002d  blez        $v1, . + 4 + (0x2D << 2)
label_1b63ec:
    if (ctx->pc == 0x1B63ECu) {
        ctx->pc = 0x1B63ECu;
            // 0x1b63ec: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->pc = 0x1B63F0u;
        goto label_1b63f0;
    }
    ctx->pc = 0x1B63E8u;
    {
        const bool branch_taken_0x1b63e8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1B63ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B63E8u;
            // 0x1b63ec: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b63e8) {
            ctx->pc = 0x1B64A0u;
            goto label_1b64a0;
        }
    }
    ctx->pc = 0x1B63F0u;
label_1b63f0:
    // 0x1b63f0: 0x27a428b0  addiu       $a0, $sp, 0x28B0
    ctx->pc = 0x1b63f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10416));
label_1b63f4:
    // 0x1b63f4: 0x24636a60  addiu       $v1, $v1, 0x6A60
    ctx->pc = 0x1b63f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27232));
label_1b63f8:
    // 0x1b63f8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1b63f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1b63fc:
    // 0x1b63fc: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1b63fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1b6400:
    // 0x1b6400: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1b6400u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_1b6404:
    // 0x1b6404: 0x8c270324  lw          $a3, 0x324($at)
    ctx->pc = 0x1b6404u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 804)));
label_1b6408:
    // 0x1b6408: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_1b640c:
    if (ctx->pc == 0x1B640Cu) {
        ctx->pc = 0x1B640Cu;
            // 0x1b640c: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1B6410u;
        goto label_1b6410;
    }
    ctx->pc = 0x1B6408u;
    {
        const bool branch_taken_0x1b6408 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B640Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6408u;
            // 0x1b640c: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6408) {
            ctx->pc = 0x1B6418u;
            goto label_1b6418;
        }
    }
    ctx->pc = 0x1B6410u;
label_1b6410:
    // 0x1b6410: 0x10000011  b           . + 4 + (0x11 << 2)
label_1b6414:
    if (ctx->pc == 0x1B6414u) {
        ctx->pc = 0x1B6414u;
            // 0x1b6414: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6418u;
        goto label_1b6418;
    }
    ctx->pc = 0x1B6410u;
    {
        const bool branch_taken_0x1b6410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6410u;
            // 0x1b6414: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6410) {
            ctx->pc = 0x1B6458u;
            goto label_1b6458;
        }
    }
    ctx->pc = 0x1B6418u;
label_1b6418:
    // 0x1b6418: 0x8c26032c  lw          $a2, 0x32C($at)
    ctx->pc = 0x1b6418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 812)));
label_1b641c:
    // 0x1b641c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1b641cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1b6420:
    // 0x1b6420: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1b6420u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1b6424:
    // 0x1b6424: 0x8c230328  lw          $v1, 0x328($at)
    ctx->pc = 0x1b6424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 808)));
label_1b6428:
    // 0x1b6428: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1b6428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1b642c:
    // 0x1b642c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1b642cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1b6430:
    // 0x1b6430: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x1b6430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1b6434:
    // 0x1b6434: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1b6434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1b6438:
    // 0x1b6438: 0xac24032c  sw          $a0, 0x32C($at)
    ctx->pc = 0x1b6438u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 812), GPR_U32(ctx, 4));
label_1b643c:
    // 0x1b643c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1b643cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1b6440:
    // 0x1b6440: 0x8c24032c  lw          $a0, 0x32C($at)
    ctx->pc = 0x1b6440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 812)));
label_1b6444:
    // 0x1b6444: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1b6444u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b6448:
    // 0x1b6448: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1b644c:
    if (ctx->pc == 0x1B644Cu) {
        ctx->pc = 0x1B644Cu;
            // 0x1b644c: 0xe58821  addu        $s1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->pc = 0x1B6450u;
        goto label_1b6450;
    }
    ctx->pc = 0x1B6448u;
    {
        const bool branch_taken_0x1b6448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B644Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6448u;
            // 0x1b644c: 0xe58821  addu        $s1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6448) {
            ctx->pc = 0x1B6458u;
            goto label_1b6458;
        }
    }
    ctx->pc = 0x1B6450u;
label_1b6450:
    // 0x1b6450: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1b6450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1b6454:
    // 0x1b6454: 0xac20032c  sw          $zero, 0x32C($at)
    ctx->pc = 0x1b6454u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 812), GPR_U32(ctx, 0));
label_1b6458:
    // 0x1b6458: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_1b645c:
    if (ctx->pc == 0x1B645Cu) {
        ctx->pc = 0x1B6460u;
        goto label_1b6460;
    }
    ctx->pc = 0x1B6458u;
    {
        const bool branch_taken_0x1b6458 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6458) {
            ctx->pc = 0x1B64A0u;
            goto label_1b64a0;
        }
    }
    ctx->pc = 0x1B6460u;
label_1b6460:
    // 0x1b6460: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1b6460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1b6464:
    // 0x1b6464: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x1b6464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_1b6468:
    // 0x1b6468: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b6468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b646c:
    // 0x1b646c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b646cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6470:
    // 0x1b6470: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1b6470u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b6474:
    // 0x1b6474: 0x27a528a0  addiu       $a1, $sp, 0x28A0
    ctx->pc = 0x1b6474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10400));
label_1b6478:
    // 0x1b6478: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1b6478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1b647c:
    // 0x1b647c: 0x27a628b0  addiu       $a2, $sp, 0x28B0
    ctx->pc = 0x1b647cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 10416));
label_1b6480:
    // 0x1b6480: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b6480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1b6484:
    // 0x1b6484: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x1b6484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b6488:
    // 0x1b6488: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1b6488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1b648c:
    // 0x1b648c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1b648cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1b6490:
    // 0x1b6490: 0xc07098c  jal         func_1C2630
label_1b6494:
    if (ctx->pc == 0x1B6494u) {
        ctx->pc = 0x1B6494u;
            // 0x1b6494: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x1B6498u;
        goto label_1b6498;
    }
    ctx->pc = 0x1B6490u;
    SET_GPR_U32(ctx, 31, 0x1B6498u);
    ctx->pc = 0x1B6494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6490u;
            // 0x1b6494: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2630u;
    if (runtime->hasFunction(0x1C2630u)) {
        auto targetFn = runtime->lookupFunction(0x1C2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6498u; }
        if (ctx->pc != 0x1B6498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SethitEffect__15CHitEffectImageFPfPfffffii_0x1c2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6498u; }
        if (ctx->pc != 0x1B6498u) { return; }
    }
    ctx->pc = 0x1B6498u;
label_1b6498:
    // 0x1b6498: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b6498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b649c:
    // 0x1b649c: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x1b649cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
label_1b64a0:
    // 0x1b64a0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1b64a4:
    if (ctx->pc == 0x1B64A4u) {
        ctx->pc = 0x1B64A4u;
            // 0x1b64a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B64A8u;
        goto label_1b64a8;
    }
    ctx->pc = 0x1B64A0u;
    {
        const bool branch_taken_0x1b64a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B64A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B64A0u;
            // 0x1b64a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b64a0) {
            ctx->pc = 0x1B64B0u;
            goto label_1b64b0;
        }
    }
    ctx->pc = 0x1B64A8u;
label_1b64a8:
    // 0x1b64a8: 0xc06e9a0  jal         func_1BA680
label_1b64ac:
    if (ctx->pc == 0x1B64ACu) {
        ctx->pc = 0x1B64ACu;
            // 0x1b64ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1B64B0u;
        goto label_1b64b0;
    }
    ctx->pc = 0x1B64A8u;
    SET_GPR_U32(ctx, 31, 0x1B64B0u);
    ctx->pc = 0x1B64ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B64A8u;
            // 0x1b64ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA680u;
    if (runtime->hasFunction(0x1BA680u)) {
        auto targetFn = runtime->lookupFunction(0x1BA680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B64B0u; }
        if (ctx->pc != 0x1B64B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Delete__8CColPrimFi_0x1ba680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B64B0u; }
        if (ctx->pc != 0x1B64B0u) { return; }
    }
    ctx->pc = 0x1B64B0u;
label_1b64b0:
    // 0x1b64b0: 0x8e430158  lw          $v1, 0x158($s2)
    ctx->pc = 0x1b64b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_1b64b4:
    // 0x1b64b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b64b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b64b8:
    // 0x1b64b8: 0xae430158  sw          $v1, 0x158($s2)
    ctx->pc = 0x1b64b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 3));
label_1b64bc:
    // 0x1b64bc: 0x8e430158  lw          $v1, 0x158($s2)
    ctx->pc = 0x1b64bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_1b64c0:
    // 0x1b64c0: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x1b64c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_1b64c4:
    // 0x1b64c4: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_1b64c8:
    if (ctx->pc == 0x1B64C8u) {
        ctx->pc = 0x1B64CCu;
        goto label_1b64cc;
    }
    ctx->pc = 0x1B64C4u;
    {
        const bool branch_taken_0x1b64c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b64c4) {
            ctx->pc = 0x1B6514u;
            goto label_1b6514;
        }
    }
    ctx->pc = 0x1B64CCu;
label_1b64cc:
    // 0x1b64cc: 0x8e420154  lw          $v0, 0x154($s2)
    ctx->pc = 0x1b64ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
label_1b64d0:
    // 0x1b64d0: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x1b64d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1b64d4:
    // 0x1b64d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b64d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1b64d8:
    // 0x1b64d8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b64d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1b64dc:
    // 0x1b64dc: 0xc041c5c  jal         func_107170
label_1b64e0:
    if (ctx->pc == 0x1B64E0u) {
        ctx->pc = 0x1B64E0u;
            // 0x1b64e0: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->pc = 0x1B64E4u;
        goto label_1b64e4;
    }
    ctx->pc = 0x1B64DCu;
    SET_GPR_U32(ctx, 31, 0x1B64E4u);
    ctx->pc = 0x1B64E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B64DCu;
            // 0x1b64e0: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B64E4u; }
        if (ctx->pc != 0x1B64E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B64E4u; }
        if (ctx->pc != 0x1B64E4u) { return; }
    }
    ctx->pc = 0x1B64E4u;
label_1b64e4:
    // 0x1b64e4: 0x8e430154  lw          $v1, 0x154($s2)
    ctx->pc = 0x1b64e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
label_1b64e8:
    // 0x1b64e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b64e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b64ec:
    // 0x1b64ec: 0xae430154  sw          $v1, 0x154($s2)
    ctx->pc = 0x1b64ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 3));
label_1b64f0:
    // 0x1b64f0: 0x8e430154  lw          $v1, 0x154($s2)
    ctx->pc = 0x1b64f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
label_1b64f4:
    // 0x1b64f4: 0x28630010  slti        $v1, $v1, 0x10
    ctx->pc = 0x1b64f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
label_1b64f8:
    // 0x1b64f8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1b64fc:
    if (ctx->pc == 0x1B64FCu) {
        ctx->pc = 0x1B6500u;
        goto label_1b6500;
    }
    ctx->pc = 0x1B64F8u;
    {
        const bool branch_taken_0x1b64f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b64f8) {
            ctx->pc = 0x1B6504u;
            goto label_1b6504;
        }
    }
    ctx->pc = 0x1B6500u;
label_1b6500:
    // 0x1b6500: 0xae400154  sw          $zero, 0x154($s2)
    ctx->pc = 0x1b6500u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 0));
label_1b6504:
    // 0x1b6504: 0xae400158  sw          $zero, 0x158($s2)
    ctx->pc = 0x1b6504u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 0));
label_1b6508:
    // 0x1b6508: 0x8e430150  lw          $v1, 0x150($s2)
    ctx->pc = 0x1b6508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
label_1b650c:
    // 0x1b650c: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x1b650cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_1b6510:
    // 0x1b6510: 0xae430150  sw          $v1, 0x150($s2)
    ctx->pc = 0x1b6510u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 3));
label_1b6514:
    // 0x1b6514: 0x8e440174  lw          $a0, 0x174($s2)
    ctx->pc = 0x1b6514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_1b6518:
    // 0x1b6518: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b6518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b651c:
    // 0x1b651c: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
label_1b6520:
    if (ctx->pc == 0x1B6520u) {
        ctx->pc = 0x1B6524u;
        goto label_1b6524;
    }
    ctx->pc = 0x1B651Cu;
    {
        const bool branch_taken_0x1b651c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b651c) {
            ctx->pc = 0x1B6544u;
            goto label_1b6544;
        }
    }
    ctx->pc = 0x1B6524u;
label_1b6524:
    // 0x1b6524: 0x8e430150  lw          $v1, 0x150($s2)
    ctx->pc = 0x1b6524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
label_1b6528:
    // 0x1b6528: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b6528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1b652c:
    // 0x1b652c: 0xae430150  sw          $v1, 0x150($s2)
    ctx->pc = 0x1b652cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 3));
label_1b6530:
    // 0x1b6530: 0x8e430150  lw          $v1, 0x150($s2)
    ctx->pc = 0x1b6530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
label_1b6534:
    // 0x1b6534: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x1b6534u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_1b6538:
    // 0x1b6538: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1b653c:
    if (ctx->pc == 0x1B653Cu) {
        ctx->pc = 0x1B6540u;
        goto label_1b6540;
    }
    ctx->pc = 0x1B6538u;
    {
        const bool branch_taken_0x1b6538 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6538) {
            ctx->pc = 0x1B6544u;
            goto label_1b6544;
        }
    }
    ctx->pc = 0x1B6540u;
label_1b6540:
    // 0x1b6540: 0xae400174  sw          $zero, 0x174($s2)
    ctx->pc = 0x1b6540u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 372), GPR_U32(ctx, 0));
label_1b6544:
    // 0x1b6544: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b6544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b6548:
    // 0x1b6548: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b6548u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b654c:
    // 0x1b654c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b654cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b6550:
    // 0x1b6550: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b6550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b6554:
    // 0x1b6554: 0x3e00008  jr          $ra
label_1b6558:
    if (ctx->pc == 0x1B6558u) {
        ctx->pc = 0x1B6558u;
            // 0x1b6558: 0x27bd28c0  addiu       $sp, $sp, 0x28C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
        ctx->pc = 0x1B655Cu;
        goto label_fallthrough_0x1b6554;
    }
    ctx->pc = 0x1B6554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6554u;
            // 0x1b6558: 0x27bd28c0  addiu       $sp, $sp, 0x28C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b6554:
    ctx->pc = 0x1B655Cu;
}
