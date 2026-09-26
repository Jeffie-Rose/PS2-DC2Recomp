#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GroundBalance__8CEditMapFi
// Address: 0x2ef0b0 - 0x2ef480
void GroundBalance__8CEditMapFi_0x2ef0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GroundBalance__8CEditMapFi_0x2ef0b0");
#endif

    switch (ctx->pc) {
        case 0x2ef0b0u: goto label_2ef0b0;
        case 0x2ef0b4u: goto label_2ef0b4;
        case 0x2ef0b8u: goto label_2ef0b8;
        case 0x2ef0bcu: goto label_2ef0bc;
        case 0x2ef0c0u: goto label_2ef0c0;
        case 0x2ef0c4u: goto label_2ef0c4;
        case 0x2ef0c8u: goto label_2ef0c8;
        case 0x2ef0ccu: goto label_2ef0cc;
        case 0x2ef0d0u: goto label_2ef0d0;
        case 0x2ef0d4u: goto label_2ef0d4;
        case 0x2ef0d8u: goto label_2ef0d8;
        case 0x2ef0dcu: goto label_2ef0dc;
        case 0x2ef0e0u: goto label_2ef0e0;
        case 0x2ef0e4u: goto label_2ef0e4;
        case 0x2ef0e8u: goto label_2ef0e8;
        case 0x2ef0ecu: goto label_2ef0ec;
        case 0x2ef0f0u: goto label_2ef0f0;
        case 0x2ef0f4u: goto label_2ef0f4;
        case 0x2ef0f8u: goto label_2ef0f8;
        case 0x2ef0fcu: goto label_2ef0fc;
        case 0x2ef100u: goto label_2ef100;
        case 0x2ef104u: goto label_2ef104;
        case 0x2ef108u: goto label_2ef108;
        case 0x2ef10cu: goto label_2ef10c;
        case 0x2ef110u: goto label_2ef110;
        case 0x2ef114u: goto label_2ef114;
        case 0x2ef118u: goto label_2ef118;
        case 0x2ef11cu: goto label_2ef11c;
        case 0x2ef120u: goto label_2ef120;
        case 0x2ef124u: goto label_2ef124;
        case 0x2ef128u: goto label_2ef128;
        case 0x2ef12cu: goto label_2ef12c;
        case 0x2ef130u: goto label_2ef130;
        case 0x2ef134u: goto label_2ef134;
        case 0x2ef138u: goto label_2ef138;
        case 0x2ef13cu: goto label_2ef13c;
        case 0x2ef140u: goto label_2ef140;
        case 0x2ef144u: goto label_2ef144;
        case 0x2ef148u: goto label_2ef148;
        case 0x2ef14cu: goto label_2ef14c;
        case 0x2ef150u: goto label_2ef150;
        case 0x2ef154u: goto label_2ef154;
        case 0x2ef158u: goto label_2ef158;
        case 0x2ef15cu: goto label_2ef15c;
        case 0x2ef160u: goto label_2ef160;
        case 0x2ef164u: goto label_2ef164;
        case 0x2ef168u: goto label_2ef168;
        case 0x2ef16cu: goto label_2ef16c;
        case 0x2ef170u: goto label_2ef170;
        case 0x2ef174u: goto label_2ef174;
        case 0x2ef178u: goto label_2ef178;
        case 0x2ef17cu: goto label_2ef17c;
        case 0x2ef180u: goto label_2ef180;
        case 0x2ef184u: goto label_2ef184;
        case 0x2ef188u: goto label_2ef188;
        case 0x2ef18cu: goto label_2ef18c;
        case 0x2ef190u: goto label_2ef190;
        case 0x2ef194u: goto label_2ef194;
        case 0x2ef198u: goto label_2ef198;
        case 0x2ef19cu: goto label_2ef19c;
        case 0x2ef1a0u: goto label_2ef1a0;
        case 0x2ef1a4u: goto label_2ef1a4;
        case 0x2ef1a8u: goto label_2ef1a8;
        case 0x2ef1acu: goto label_2ef1ac;
        case 0x2ef1b0u: goto label_2ef1b0;
        case 0x2ef1b4u: goto label_2ef1b4;
        case 0x2ef1b8u: goto label_2ef1b8;
        case 0x2ef1bcu: goto label_2ef1bc;
        case 0x2ef1c0u: goto label_2ef1c0;
        case 0x2ef1c4u: goto label_2ef1c4;
        case 0x2ef1c8u: goto label_2ef1c8;
        case 0x2ef1ccu: goto label_2ef1cc;
        case 0x2ef1d0u: goto label_2ef1d0;
        case 0x2ef1d4u: goto label_2ef1d4;
        case 0x2ef1d8u: goto label_2ef1d8;
        case 0x2ef1dcu: goto label_2ef1dc;
        case 0x2ef1e0u: goto label_2ef1e0;
        case 0x2ef1e4u: goto label_2ef1e4;
        case 0x2ef1e8u: goto label_2ef1e8;
        case 0x2ef1ecu: goto label_2ef1ec;
        case 0x2ef1f0u: goto label_2ef1f0;
        case 0x2ef1f4u: goto label_2ef1f4;
        case 0x2ef1f8u: goto label_2ef1f8;
        case 0x2ef1fcu: goto label_2ef1fc;
        case 0x2ef200u: goto label_2ef200;
        case 0x2ef204u: goto label_2ef204;
        case 0x2ef208u: goto label_2ef208;
        case 0x2ef20cu: goto label_2ef20c;
        case 0x2ef210u: goto label_2ef210;
        case 0x2ef214u: goto label_2ef214;
        case 0x2ef218u: goto label_2ef218;
        case 0x2ef21cu: goto label_2ef21c;
        case 0x2ef220u: goto label_2ef220;
        case 0x2ef224u: goto label_2ef224;
        case 0x2ef228u: goto label_2ef228;
        case 0x2ef22cu: goto label_2ef22c;
        case 0x2ef230u: goto label_2ef230;
        case 0x2ef234u: goto label_2ef234;
        case 0x2ef238u: goto label_2ef238;
        case 0x2ef23cu: goto label_2ef23c;
        case 0x2ef240u: goto label_2ef240;
        case 0x2ef244u: goto label_2ef244;
        case 0x2ef248u: goto label_2ef248;
        case 0x2ef24cu: goto label_2ef24c;
        case 0x2ef250u: goto label_2ef250;
        case 0x2ef254u: goto label_2ef254;
        case 0x2ef258u: goto label_2ef258;
        case 0x2ef25cu: goto label_2ef25c;
        case 0x2ef260u: goto label_2ef260;
        case 0x2ef264u: goto label_2ef264;
        case 0x2ef268u: goto label_2ef268;
        case 0x2ef26cu: goto label_2ef26c;
        case 0x2ef270u: goto label_2ef270;
        case 0x2ef274u: goto label_2ef274;
        case 0x2ef278u: goto label_2ef278;
        case 0x2ef27cu: goto label_2ef27c;
        case 0x2ef280u: goto label_2ef280;
        case 0x2ef284u: goto label_2ef284;
        case 0x2ef288u: goto label_2ef288;
        case 0x2ef28cu: goto label_2ef28c;
        case 0x2ef290u: goto label_2ef290;
        case 0x2ef294u: goto label_2ef294;
        case 0x2ef298u: goto label_2ef298;
        case 0x2ef29cu: goto label_2ef29c;
        case 0x2ef2a0u: goto label_2ef2a0;
        case 0x2ef2a4u: goto label_2ef2a4;
        case 0x2ef2a8u: goto label_2ef2a8;
        case 0x2ef2acu: goto label_2ef2ac;
        case 0x2ef2b0u: goto label_2ef2b0;
        case 0x2ef2b4u: goto label_2ef2b4;
        case 0x2ef2b8u: goto label_2ef2b8;
        case 0x2ef2bcu: goto label_2ef2bc;
        case 0x2ef2c0u: goto label_2ef2c0;
        case 0x2ef2c4u: goto label_2ef2c4;
        case 0x2ef2c8u: goto label_2ef2c8;
        case 0x2ef2ccu: goto label_2ef2cc;
        case 0x2ef2d0u: goto label_2ef2d0;
        case 0x2ef2d4u: goto label_2ef2d4;
        case 0x2ef2d8u: goto label_2ef2d8;
        case 0x2ef2dcu: goto label_2ef2dc;
        case 0x2ef2e0u: goto label_2ef2e0;
        case 0x2ef2e4u: goto label_2ef2e4;
        case 0x2ef2e8u: goto label_2ef2e8;
        case 0x2ef2ecu: goto label_2ef2ec;
        case 0x2ef2f0u: goto label_2ef2f0;
        case 0x2ef2f4u: goto label_2ef2f4;
        case 0x2ef2f8u: goto label_2ef2f8;
        case 0x2ef2fcu: goto label_2ef2fc;
        case 0x2ef300u: goto label_2ef300;
        case 0x2ef304u: goto label_2ef304;
        case 0x2ef308u: goto label_2ef308;
        case 0x2ef30cu: goto label_2ef30c;
        case 0x2ef310u: goto label_2ef310;
        case 0x2ef314u: goto label_2ef314;
        case 0x2ef318u: goto label_2ef318;
        case 0x2ef31cu: goto label_2ef31c;
        case 0x2ef320u: goto label_2ef320;
        case 0x2ef324u: goto label_2ef324;
        case 0x2ef328u: goto label_2ef328;
        case 0x2ef32cu: goto label_2ef32c;
        case 0x2ef330u: goto label_2ef330;
        case 0x2ef334u: goto label_2ef334;
        case 0x2ef338u: goto label_2ef338;
        case 0x2ef33cu: goto label_2ef33c;
        case 0x2ef340u: goto label_2ef340;
        case 0x2ef344u: goto label_2ef344;
        case 0x2ef348u: goto label_2ef348;
        case 0x2ef34cu: goto label_2ef34c;
        case 0x2ef350u: goto label_2ef350;
        case 0x2ef354u: goto label_2ef354;
        case 0x2ef358u: goto label_2ef358;
        case 0x2ef35cu: goto label_2ef35c;
        case 0x2ef360u: goto label_2ef360;
        case 0x2ef364u: goto label_2ef364;
        case 0x2ef368u: goto label_2ef368;
        case 0x2ef36cu: goto label_2ef36c;
        case 0x2ef370u: goto label_2ef370;
        case 0x2ef374u: goto label_2ef374;
        case 0x2ef378u: goto label_2ef378;
        case 0x2ef37cu: goto label_2ef37c;
        case 0x2ef380u: goto label_2ef380;
        case 0x2ef384u: goto label_2ef384;
        case 0x2ef388u: goto label_2ef388;
        case 0x2ef38cu: goto label_2ef38c;
        case 0x2ef390u: goto label_2ef390;
        case 0x2ef394u: goto label_2ef394;
        case 0x2ef398u: goto label_2ef398;
        case 0x2ef39cu: goto label_2ef39c;
        case 0x2ef3a0u: goto label_2ef3a0;
        case 0x2ef3a4u: goto label_2ef3a4;
        case 0x2ef3a8u: goto label_2ef3a8;
        case 0x2ef3acu: goto label_2ef3ac;
        case 0x2ef3b0u: goto label_2ef3b0;
        case 0x2ef3b4u: goto label_2ef3b4;
        case 0x2ef3b8u: goto label_2ef3b8;
        case 0x2ef3bcu: goto label_2ef3bc;
        case 0x2ef3c0u: goto label_2ef3c0;
        case 0x2ef3c4u: goto label_2ef3c4;
        case 0x2ef3c8u: goto label_2ef3c8;
        case 0x2ef3ccu: goto label_2ef3cc;
        case 0x2ef3d0u: goto label_2ef3d0;
        case 0x2ef3d4u: goto label_2ef3d4;
        case 0x2ef3d8u: goto label_2ef3d8;
        case 0x2ef3dcu: goto label_2ef3dc;
        case 0x2ef3e0u: goto label_2ef3e0;
        case 0x2ef3e4u: goto label_2ef3e4;
        case 0x2ef3e8u: goto label_2ef3e8;
        case 0x2ef3ecu: goto label_2ef3ec;
        case 0x2ef3f0u: goto label_2ef3f0;
        case 0x2ef3f4u: goto label_2ef3f4;
        case 0x2ef3f8u: goto label_2ef3f8;
        case 0x2ef3fcu: goto label_2ef3fc;
        case 0x2ef400u: goto label_2ef400;
        case 0x2ef404u: goto label_2ef404;
        case 0x2ef408u: goto label_2ef408;
        case 0x2ef40cu: goto label_2ef40c;
        case 0x2ef410u: goto label_2ef410;
        case 0x2ef414u: goto label_2ef414;
        case 0x2ef418u: goto label_2ef418;
        case 0x2ef41cu: goto label_2ef41c;
        case 0x2ef420u: goto label_2ef420;
        case 0x2ef424u: goto label_2ef424;
        case 0x2ef428u: goto label_2ef428;
        case 0x2ef42cu: goto label_2ef42c;
        case 0x2ef430u: goto label_2ef430;
        case 0x2ef434u: goto label_2ef434;
        case 0x2ef438u: goto label_2ef438;
        case 0x2ef43cu: goto label_2ef43c;
        case 0x2ef440u: goto label_2ef440;
        case 0x2ef444u: goto label_2ef444;
        case 0x2ef448u: goto label_2ef448;
        case 0x2ef44cu: goto label_2ef44c;
        case 0x2ef450u: goto label_2ef450;
        case 0x2ef454u: goto label_2ef454;
        case 0x2ef458u: goto label_2ef458;
        case 0x2ef45cu: goto label_2ef45c;
        case 0x2ef460u: goto label_2ef460;
        case 0x2ef464u: goto label_2ef464;
        case 0x2ef468u: goto label_2ef468;
        case 0x2ef46cu: goto label_2ef46c;
        case 0x2ef470u: goto label_2ef470;
        case 0x2ef474u: goto label_2ef474;
        case 0x2ef478u: goto label_2ef478;
        case 0x2ef47cu: goto label_2ef47c;
        default: break;
    }

    ctx->pc = 0x2ef0b0u;

label_2ef0b0:
    // 0x2ef0b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2ef0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2ef0b4:
    // 0x2ef0b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ef0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef0b8:
    // 0x2ef0b8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2ef0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2ef0bc:
    // 0x2ef0bc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2ef0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2ef0c0:
    // 0x2ef0c0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2ef0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2ef0c4:
    // 0x2ef0c4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ef0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2ef0c8:
    // 0x2ef0c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ef0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2ef0cc:
    // 0x2ef0cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ef0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2ef0d0:
    // 0x2ef0d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ef0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2ef0d4:
    // 0x2ef0d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ef0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ef0d8:
    // 0x2ef0d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ef0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ef0dc:
    // 0x2ef0dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ef0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ef0e0:
    // 0x2ef0e0: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x2ef0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
label_2ef0e4:
    // 0x2ef0e4: 0x8c850f80  lw          $a1, 0xF80($a0)
    ctx->pc = 0x2ef0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3968)));
label_2ef0e8:
    // 0x2ef0e8: 0x14a300d9  bne         $a1, $v1, . + 4 + (0xD9 << 2)
label_2ef0ec:
    if (ctx->pc == 0x2EF0ECu) {
        ctx->pc = 0x2EF0ECu;
            // 0x2ef0ec: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EF0F0u;
        goto label_2ef0f0;
    }
    ctx->pc = 0x2EF0E8u;
    {
        const bool branch_taken_0x2ef0e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EF0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF0E8u;
            // 0x2ef0ec: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef0e8) {
            ctx->pc = 0x2EF450u;
            goto label_2ef450;
        }
    }
    ctx->pc = 0x2EF0F0u;
label_2ef0f0:
    // 0x2ef0f0: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x2ef0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_2ef0f4:
    // 0x2ef0f4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ef0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2ef0f8:
    // 0x2ef0f8: 0x24429350  addiu       $v0, $v0, -0x6CB0
    ctx->pc = 0x2ef0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939472));
label_2ef0fc:
    // 0x2ef0fc: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x2ef0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2ef100:
    // 0x2ef100: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ef100u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2ef104:
    // 0x2ef104: 0x24a51518  addiu       $a1, $a1, 0x1518
    ctx->pc = 0x2ef104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5400));
label_2ef108:
    // 0x2ef108: 0xc057508  jal         func_15D420
label_2ef10c:
    if (ctx->pc == 0x2EF10Cu) {
        ctx->pc = 0x2EF10Cu;
            // 0x2ef10c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x2EF110u;
        goto label_2ef110;
    }
    ctx->pc = 0x2EF108u;
    SET_GPR_U32(ctx, 31, 0x2EF110u);
    ctx->pc = 0x2EF10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF108u;
            // 0x2ef10c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF110u; }
        if (ctx->pc != 0x2EF110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF110u; }
        if (ctx->pc != 0x2EF110u) { return; }
    }
    ctx->pc = 0x2EF110u;
label_2ef110:
    // 0x2ef110: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ef110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2ef114:
    // 0x2ef114: 0xaea21054  sw          $v0, 0x1054($s5)
    ctx->pc = 0x2ef114u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4180), GPR_U32(ctx, 2));
label_2ef118:
    // 0x2ef118: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ef118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ef11c:
    // 0x2ef11c: 0xc057508  jal         func_15D420
label_2ef120:
    if (ctx->pc == 0x2EF120u) {
        ctx->pc = 0x2EF120u;
            // 0x2ef120: 0x24a51528  addiu       $a1, $a1, 0x1528 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5416));
        ctx->pc = 0x2EF124u;
        goto label_2ef124;
    }
    ctx->pc = 0x2EF11Cu;
    SET_GPR_U32(ctx, 31, 0x2EF124u);
    ctx->pc = 0x2EF120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF11Cu;
            // 0x2ef120: 0x24a51528  addiu       $a1, $a1, 0x1528 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF124u; }
        if (ctx->pc != 0x2EF124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF124u; }
        if (ctx->pc != 0x2EF124u) { return; }
    }
    ctx->pc = 0x2EF124u;
label_2ef124:
    // 0x2ef124: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ef124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2ef128:
    // 0x2ef128: 0xaea21058  sw          $v0, 0x1058($s5)
    ctx->pc = 0x2ef128u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4184), GPR_U32(ctx, 2));
label_2ef12c:
    // 0x2ef12c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ef12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ef130:
    // 0x2ef130: 0xc057508  jal         func_15D420
label_2ef134:
    if (ctx->pc == 0x2EF134u) {
        ctx->pc = 0x2EF134u;
            // 0x2ef134: 0x24a51538  addiu       $a1, $a1, 0x1538 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5432));
        ctx->pc = 0x2EF138u;
        goto label_2ef138;
    }
    ctx->pc = 0x2EF130u;
    SET_GPR_U32(ctx, 31, 0x2EF138u);
    ctx->pc = 0x2EF134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF130u;
            // 0x2ef134: 0x24a51538  addiu       $a1, $a1, 0x1538 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF138u; }
        if (ctx->pc != 0x2EF138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF138u; }
        if (ctx->pc != 0x2EF138u) { return; }
    }
    ctx->pc = 0x2EF138u;
label_2ef138:
    // 0x2ef138: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ef138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2ef13c:
    // 0x2ef13c: 0xaea2105c  sw          $v0, 0x105C($s5)
    ctx->pc = 0x2ef13cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4188), GPR_U32(ctx, 2));
label_2ef140:
    // 0x2ef140: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ef140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ef144:
    // 0x2ef144: 0xc057508  jal         func_15D420
label_2ef148:
    if (ctx->pc == 0x2EF148u) {
        ctx->pc = 0x2EF148u;
            // 0x2ef148: 0x24a51548  addiu       $a1, $a1, 0x1548 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5448));
        ctx->pc = 0x2EF14Cu;
        goto label_2ef14c;
    }
    ctx->pc = 0x2EF144u;
    SET_GPR_U32(ctx, 31, 0x2EF14Cu);
    ctx->pc = 0x2EF148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF144u;
            // 0x2ef148: 0x24a51548  addiu       $a1, $a1, 0x1548 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF14Cu; }
        if (ctx->pc != 0x2EF14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF14Cu; }
        if (ctx->pc != 0x2EF14Cu) { return; }
    }
    ctx->pc = 0x2EF14Cu;
label_2ef14c:
    // 0x2ef14c: 0xaea21060  sw          $v0, 0x1060($s5)
    ctx->pc = 0x2ef14cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4192), GPR_U32(ctx, 2));
label_2ef150:
    // 0x2ef150: 0x8ea31054  lw          $v1, 0x1054($s5)
    ctx->pc = 0x2ef150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4180)));
label_2ef154:
    // 0x2ef154: 0x106000be  beqz        $v1, . + 4 + (0xBE << 2)
label_2ef158:
    if (ctx->pc == 0x2EF158u) {
        ctx->pc = 0x2EF15Cu;
        goto label_2ef15c;
    }
    ctx->pc = 0x2EF154u;
    {
        const bool branch_taken_0x2ef154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef154) {
            ctx->pc = 0x2EF450u;
            goto label_2ef450;
        }
    }
    ctx->pc = 0x2EF15Cu;
label_2ef15c:
    // 0x2ef15c: 0x8ea31058  lw          $v1, 0x1058($s5)
    ctx->pc = 0x2ef15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4184)));
label_2ef160:
    // 0x2ef160: 0x106000bb  beqz        $v1, . + 4 + (0xBB << 2)
label_2ef164:
    if (ctx->pc == 0x2EF164u) {
        ctx->pc = 0x2EF168u;
        goto label_2ef168;
    }
    ctx->pc = 0x2EF160u;
    {
        const bool branch_taken_0x2ef160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef160) {
            ctx->pc = 0x2EF450u;
            goto label_2ef450;
        }
    }
    ctx->pc = 0x2EF168u;
label_2ef168:
    // 0x2ef168: 0x8ea3105c  lw          $v1, 0x105C($s5)
    ctx->pc = 0x2ef168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4188)));
label_2ef16c:
    // 0x2ef16c: 0x106000b8  beqz        $v1, . + 4 + (0xB8 << 2)
label_2ef170:
    if (ctx->pc == 0x2EF170u) {
        ctx->pc = 0x2EF174u;
        goto label_2ef174;
    }
    ctx->pc = 0x2EF16Cu;
    {
        const bool branch_taken_0x2ef16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef16c) {
            ctx->pc = 0x2EF450u;
            goto label_2ef450;
        }
    }
    ctx->pc = 0x2EF174u;
label_2ef174:
    // 0x2ef174: 0x8ea31060  lw          $v1, 0x1060($s5)
    ctx->pc = 0x2ef174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4192)));
label_2ef178:
    // 0x2ef178: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2ef17c:
    if (ctx->pc == 0x2EF17Cu) {
        ctx->pc = 0x2EF180u;
        goto label_2ef180;
    }
    ctx->pc = 0x2EF178u;
    {
        const bool branch_taken_0x2ef178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef178) {
            ctx->pc = 0x2EF188u;
            goto label_2ef188;
        }
    }
    ctx->pc = 0x2EF180u;
label_2ef180:
    // 0x2ef180: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_2ef184:
    if (ctx->pc == 0x2EF184u) {
        ctx->pc = 0x2EF184u;
            // 0x2ef184: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2EF188u;
        goto label_2ef188;
    }
    ctx->pc = 0x2EF180u;
    {
        const bool branch_taken_0x2ef180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF180u;
            // 0x2ef184: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef180) {
            ctx->pc = 0x2EF454u;
            goto label_2ef454;
        }
    }
    ctx->pc = 0x2EF188u;
label_2ef188:
    // 0x2ef188: 0x8eb00d44  lw          $s0, 0xD44($s5)
    ctx->pc = 0x2ef188u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3396)));
label_2ef18c:
    // 0x2ef18c: 0x10000020  b           . + 4 + (0x20 << 2)
label_2ef190:
    if (ctx->pc == 0x2EF190u) {
        ctx->pc = 0x2EF190u;
            // 0x2ef190: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EF194u;
        goto label_2ef194;
    }
    ctx->pc = 0x2EF18Cu;
    {
        const bool branch_taken_0x2ef18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF18Cu;
            // 0x2ef190: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef18c) {
            ctx->pc = 0x2EF210u;
            goto label_2ef210;
        }
    }
    ctx->pc = 0x2EF194u;
label_2ef194:
    // 0x2ef194: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ef194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ef198:
    // 0x2ef198: 0xc0bb988  jal         func_2EE620
label_2ef19c:
    if (ctx->pc == 0x2EF19Cu) {
        ctx->pc = 0x2EF19Cu;
            // 0x2ef19c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EF1A0u;
        goto label_2ef1a0;
    }
    ctx->pc = 0x2EF198u;
    SET_GPR_U32(ctx, 31, 0x2EF1A0u);
    ctx->pc = 0x2EF19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF198u;
            // 0x2ef19c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE620u;
    if (runtime->hasFunction(0x2EE620u)) {
        auto targetFn = runtime->lookupFunction(0x2EE620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF1A0u; }
        if (ctx->pc != 0x2EF1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNormalPlaceParts__8CEditMapFP10CEditParts_0x2ee620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF1A0u; }
        if (ctx->pc != 0x2EF1A0u) { return; }
    }
    ctx->pc = 0x2EF1A0u;
label_2ef1a0:
    // 0x2ef1a0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2ef1a4:
    if (ctx->pc == 0x2EF1A4u) {
        ctx->pc = 0x2EF1A8u;
        goto label_2ef1a8;
    }
    ctx->pc = 0x2EF1A0u;
    {
        const bool branch_taken_0x2ef1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef1a0) {
            ctx->pc = 0x2EF208u;
            goto label_2ef208;
        }
    }
    ctx->pc = 0x2EF1A8u;
label_2ef1a8:
    // 0x2ef1a8: 0x8e040314  lw          $a0, 0x314($s0)
    ctx->pc = 0x2ef1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
label_2ef1ac:
    // 0x2ef1ac: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_2ef1b0:
    if (ctx->pc == 0x2EF1B0u) {
        ctx->pc = 0x2EF1B4u;
        goto label_2ef1b4;
    }
    ctx->pc = 0x2EF1ACu;
    {
        const bool branch_taken_0x2ef1ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef1ac) {
            ctx->pc = 0x2EF208u;
            goto label_2ef208;
        }
    }
    ctx->pc = 0x2EF1B4u;
label_2ef1b4:
    // 0x2ef1b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ef1b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef1b8:
    // 0x2ef1b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ef1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef1bc:
    // 0x2ef1bc: 0x0  nop
    ctx->pc = 0x2ef1bcu;
    // NOP
label_2ef1c0:
    // 0x2ef1c0: 0x2a51021  addu        $v0, $s5, $a1
    ctx->pc = 0x2ef1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_2ef1c4:
    // 0x2ef1c4: 0x8c421054  lw          $v0, 0x1054($v0)
    ctx->pc = 0x2ef1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4180)));
label_2ef1c8:
    // 0x2ef1c8: 0x1482000b  bne         $a0, $v0, . + 4 + (0xB << 2)
label_2ef1cc:
    if (ctx->pc == 0x2EF1CCu) {
        ctx->pc = 0x2EF1D0u;
        goto label_2ef1d0;
    }
    ctx->pc = 0x2EF1C8u;
    {
        const bool branch_taken_0x2ef1c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ef1c8) {
            ctx->pc = 0x2EF1F8u;
            goto label_2ef1f8;
        }
    }
    ctx->pc = 0x2EF1D0u;
label_2ef1d0:
    // 0x2ef1d0: 0x8e020324  lw          $v0, 0x324($s0)
    ctx->pc = 0x2ef1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
label_2ef1d4:
    // 0x2ef1d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2ef1d8:
    if (ctx->pc == 0x2EF1D8u) {
        ctx->pc = 0x2EF1DCu;
        goto label_2ef1dc;
    }
    ctx->pc = 0x2EF1D4u;
    {
        const bool branch_taken_0x2ef1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef1d4) {
            ctx->pc = 0x2EF208u;
            goto label_2ef208;
        }
    }
    ctx->pc = 0x2EF1DCu;
label_2ef1dc:
    // 0x2ef1dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ef1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2ef1e0:
    // 0x2ef1e0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2ef1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2ef1e4:
    // 0x2ef1e4: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x2ef1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_2ef1e8:
    // 0x2ef1e8: 0x8c8300b0  lw          $v1, 0xB0($a0)
    ctx->pc = 0x2ef1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_2ef1ec:
    // 0x2ef1ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ef1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ef1f0:
    // 0x2ef1f0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2ef1f4:
    if (ctx->pc == 0x2EF1F4u) {
        ctx->pc = 0x2EF1F4u;
            // 0x2ef1f4: 0xac8200b0  sw          $v0, 0xB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x2EF1F8u;
        goto label_2ef1f8;
    }
    ctx->pc = 0x2EF1F0u;
    {
        const bool branch_taken_0x2ef1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF1F0u;
            // 0x2ef1f4: 0xac8200b0  sw          $v0, 0xB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef1f0) {
            ctx->pc = 0x2EF208u;
            goto label_2ef208;
        }
    }
    ctx->pc = 0x2EF1F8u;
label_2ef1f8:
    // 0x2ef1f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ef1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2ef1fc:
    // 0x2ef1fc: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x2ef1fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_2ef200:
    // 0x2ef200: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_2ef204:
    if (ctx->pc == 0x2EF204u) {
        ctx->pc = 0x2EF204u;
            // 0x2ef204: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x2EF208u;
        goto label_2ef208;
    }
    ctx->pc = 0x2EF200u;
    {
        const bool branch_taken_0x2ef200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF200u;
            // 0x2ef204: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef200) {
            ctx->pc = 0x2EF1BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef1bc;
        }
    }
    ctx->pc = 0x2EF208u;
label_2ef208:
    // 0x2ef208: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ef208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2ef20c:
    // 0x2ef20c: 0x26100330  addiu       $s0, $s0, 0x330
    ctx->pc = 0x2ef20cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
label_2ef210:
    // 0x2ef210: 0x8ea20d40  lw          $v0, 0xD40($s5)
    ctx->pc = 0x2ef210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3392)));
label_2ef214:
    // 0x2ef214: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2ef214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2ef218:
    // 0x2ef218: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_2ef21c:
    if (ctx->pc == 0x2EF21Cu) {
        ctx->pc = 0x2EF21Cu;
            // 0x2ef21c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EF220u;
        goto label_2ef220;
    }
    ctx->pc = 0x2EF218u;
    {
        const bool branch_taken_0x2ef218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF218u;
            // 0x2ef21c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef218) {
            ctx->pc = 0x2EF198u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef198;
        }
    }
    ctx->pc = 0x2EF220u;
label_2ef220:
    // 0x2ef220: 0x8fbe00b4  lw          $fp, 0xB4($sp)
    ctx->pc = 0x2ef220u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_2ef224:
    // 0x2ef224: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ef224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2ef228:
    // 0x2ef228: 0x3c28023  subu        $s0, $fp, $v0
    ctx->pc = 0x2ef228u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_2ef22c:
    // 0x2ef22c: 0x2a010004  slti        $at, $s0, 0x4
    ctx->pc = 0x2ef22cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_2ef230:
    // 0x2ef230: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_2ef234:
    if (ctx->pc == 0x2EF234u) {
        ctx->pc = 0x2EF234u;
            // 0x2ef234: 0x2a01fffd  slti        $at, $s0, -0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294967293) ? 1 : 0);
        ctx->pc = 0x2EF238u;
        goto label_2ef238;
    }
    ctx->pc = 0x2EF230u;
    {
        const bool branch_taken_0x2ef230 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF230u;
            // 0x2ef234: 0x2a01fffd  slti        $at, $s0, -0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294967293) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef230) {
            ctx->pc = 0x2EF248u;
            goto label_2ef248;
        }
    }
    ctx->pc = 0x2EF238u;
label_2ef238:
    // 0x2ef238: 0x1a000002  blez        $s0, . + 4 + (0x2 << 2)
label_2ef23c:
    if (ctx->pc == 0x2EF23Cu) {
        ctx->pc = 0x2EF240u;
        goto label_2ef240;
    }
    ctx->pc = 0x2EF238u;
    {
        const bool branch_taken_0x2ef238 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2ef238) {
            ctx->pc = 0x2EF244u;
            goto label_2ef244;
        }
    }
    ctx->pc = 0x2EF240u;
label_2ef240:
    // 0x2ef240: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ef240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef244:
    // 0x2ef244: 0x2a01fffd  slti        $at, $s0, -0x3
    ctx->pc = 0x2ef244u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294967293) ? 1 : 0);
label_2ef248:
    // 0x2ef248: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_2ef24c:
    if (ctx->pc == 0x2EF24Cu) {
        ctx->pc = 0x2EF250u;
        goto label_2ef250;
    }
    ctx->pc = 0x2EF248u;
    {
        const bool branch_taken_0x2ef248 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef248) {
            ctx->pc = 0x2EF25Cu;
            goto label_2ef25c;
        }
    }
    ctx->pc = 0x2EF250u;
label_2ef250:
    // 0x2ef250: 0x6010002  bgez        $s0, . + 4 + (0x2 << 2)
label_2ef254:
    if (ctx->pc == 0x2EF254u) {
        ctx->pc = 0x2EF258u;
        goto label_2ef258;
    }
    ctx->pc = 0x2EF250u;
    {
        const bool branch_taken_0x2ef250 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2ef250) {
            ctx->pc = 0x2EF25Cu;
            goto label_2ef25c;
        }
    }
    ctx->pc = 0x2EF258u;
label_2ef258:
    // 0x2ef258: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ef258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef25c:
    // 0x2ef25c: 0x8fb600bc  lw          $s6, 0xBC($sp)
    ctx->pc = 0x2ef25cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2ef260:
    // 0x2ef260: 0x8fb700b8  lw          $s7, 0xB8($sp)
    ctx->pc = 0x2ef260u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2ef264:
    // 0x2ef264: 0x2d78823  subu        $s1, $s6, $s7
    ctx->pc = 0x2ef264u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
label_2ef268:
    // 0x2ef268: 0x2a210004  slti        $at, $s1, 0x4
    ctx->pc = 0x2ef268u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_2ef26c:
    // 0x2ef26c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_2ef270:
    if (ctx->pc == 0x2EF270u) {
        ctx->pc = 0x2EF270u;
            // 0x2ef270: 0x2a21fffd  slti        $at, $s1, -0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967293) ? 1 : 0);
        ctx->pc = 0x2EF274u;
        goto label_2ef274;
    }
    ctx->pc = 0x2EF26Cu;
    {
        const bool branch_taken_0x2ef26c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF26Cu;
            // 0x2ef270: 0x2a21fffd  slti        $at, $s1, -0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967293) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef26c) {
            ctx->pc = 0x2EF284u;
            goto label_2ef284;
        }
    }
    ctx->pc = 0x2EF274u;
label_2ef274:
    // 0x2ef274: 0x1a200002  blez        $s1, . + 4 + (0x2 << 2)
label_2ef278:
    if (ctx->pc == 0x2EF278u) {
        ctx->pc = 0x2EF27Cu;
        goto label_2ef27c;
    }
    ctx->pc = 0x2EF274u;
    {
        const bool branch_taken_0x2ef274 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2ef274) {
            ctx->pc = 0x2EF280u;
            goto label_2ef280;
        }
    }
    ctx->pc = 0x2EF27Cu;
label_2ef27c:
    // 0x2ef27c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ef27cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef280:
    // 0x2ef280: 0x2a21fffd  slti        $at, $s1, -0x3
    ctx->pc = 0x2ef280u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967293) ? 1 : 0);
label_2ef284:
    // 0x2ef284: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_2ef288:
    if (ctx->pc == 0x2EF288u) {
        ctx->pc = 0x2EF288u;
            // 0x2ef288: 0x2a01001f  slti        $at, $s0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->pc = 0x2EF28Cu;
        goto label_2ef28c;
    }
    ctx->pc = 0x2EF284u;
    {
        const bool branch_taken_0x2ef284 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF284u;
            // 0x2ef288: 0x2a01001f  slti        $at, $s0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef284) {
            ctx->pc = 0x2EF29Cu;
            goto label_2ef29c;
        }
    }
    ctx->pc = 0x2EF28Cu;
label_2ef28c:
    // 0x2ef28c: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
label_2ef290:
    if (ctx->pc == 0x2EF290u) {
        ctx->pc = 0x2EF294u;
        goto label_2ef294;
    }
    ctx->pc = 0x2EF28Cu;
    {
        const bool branch_taken_0x2ef28c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x2ef28c) {
            ctx->pc = 0x2EF298u;
            goto label_2ef298;
        }
    }
    ctx->pc = 0x2EF294u;
label_2ef294:
    // 0x2ef294: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ef294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef298:
    // 0x2ef298: 0x2a01001f  slti        $at, $s0, 0x1F
    ctx->pc = 0x2ef298u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)31) ? 1 : 0);
label_2ef29c:
    // 0x2ef29c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2ef2a0:
    if (ctx->pc == 0x2EF2A0u) {
        ctx->pc = 0x2EF2A0u;
            // 0x2ef2a0: 0x2a01ffe2  slti        $at, $s0, -0x1E (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294967266) ? 1 : 0);
        ctx->pc = 0x2EF2A4u;
        goto label_2ef2a4;
    }
    ctx->pc = 0x2EF29Cu;
    {
        const bool branch_taken_0x2ef29c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF29Cu;
            // 0x2ef2a0: 0x2a01ffe2  slti        $at, $s0, -0x1E (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294967266) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef29c) {
            ctx->pc = 0x2EF2ACu;
            goto label_2ef2ac;
        }
    }
    ctx->pc = 0x2EF2A4u;
label_2ef2a4:
    // 0x2ef2a4: 0x2410001e  addiu       $s0, $zero, 0x1E
    ctx->pc = 0x2ef2a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2ef2a8:
    // 0x2ef2a8: 0x2a01ffe2  slti        $at, $s0, -0x1E
    ctx->pc = 0x2ef2a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294967266) ? 1 : 0);
label_2ef2ac:
    // 0x2ef2ac: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2ef2b0:
    if (ctx->pc == 0x2EF2B0u) {
        ctx->pc = 0x2EF2B0u;
            // 0x2ef2b0: 0x2a21001f  slti        $at, $s1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->pc = 0x2EF2B4u;
        goto label_2ef2b4;
    }
    ctx->pc = 0x2EF2ACu;
    {
        const bool branch_taken_0x2ef2ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF2ACu;
            // 0x2ef2b0: 0x2a21001f  slti        $at, $s1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef2ac) {
            ctx->pc = 0x2EF2BCu;
            goto label_2ef2bc;
        }
    }
    ctx->pc = 0x2EF2B4u;
label_2ef2b4:
    // 0x2ef2b4: 0x2410ffe2  addiu       $s0, $zero, -0x1E
    ctx->pc = 0x2ef2b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
label_2ef2b8:
    // 0x2ef2b8: 0x2a21001f  slti        $at, $s1, 0x1F
    ctx->pc = 0x2ef2b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
label_2ef2bc:
    // 0x2ef2bc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2ef2c0:
    if (ctx->pc == 0x2EF2C0u) {
        ctx->pc = 0x2EF2C0u;
            // 0x2ef2c0: 0x2a21ffe2  slti        $at, $s1, -0x1E (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967266) ? 1 : 0);
        ctx->pc = 0x2EF2C4u;
        goto label_2ef2c4;
    }
    ctx->pc = 0x2EF2BCu;
    {
        const bool branch_taken_0x2ef2bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF2BCu;
            // 0x2ef2c0: 0x2a21ffe2  slti        $at, $s1, -0x1E (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967266) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef2bc) {
            ctx->pc = 0x2EF2CCu;
            goto label_2ef2cc;
        }
    }
    ctx->pc = 0x2EF2C4u;
label_2ef2c4:
    // 0x2ef2c4: 0x2411001e  addiu       $s1, $zero, 0x1E
    ctx->pc = 0x2ef2c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2ef2c8:
    // 0x2ef2c8: 0x2a21ffe2  slti        $at, $s1, -0x1E
    ctx->pc = 0x2ef2c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967266) ? 1 : 0);
label_2ef2cc:
    // 0x2ef2cc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2ef2d0:
    if (ctx->pc == 0x2EF2D0u) {
        ctx->pc = 0x2EF2D4u;
        goto label_2ef2d4;
    }
    ctx->pc = 0x2EF2CCu;
    {
        const bool branch_taken_0x2ef2cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef2cc) {
            ctx->pc = 0x2EF2D8u;
            goto label_2ef2d8;
        }
    }
    ctx->pc = 0x2EF2D4u;
label_2ef2d4:
    // 0x2ef2d4: 0x2411ffe2  addiu       $s1, $zero, -0x1E
    ctx->pc = 0x2ef2d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
label_2ef2d8:
    // 0x2ef2d8: 0x8ea21050  lw          $v0, 0x1050($s5)
    ctx->pc = 0x2ef2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4176)));
label_2ef2dc:
    // 0x2ef2dc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_2ef2e0:
    if (ctx->pc == 0x2EF2E0u) {
        ctx->pc = 0x2EF2E4u;
        goto label_2ef2e4;
    }
    ctx->pc = 0x2EF2DCu;
    {
        const bool branch_taken_0x2ef2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef2dc) {
            ctx->pc = 0x2EF328u;
            goto label_2ef328;
        }
    }
    ctx->pc = 0x2EF2E4u;
label_2ef2e4:
    // 0x2ef2e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ef2e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef2e8:
    // 0x2ef2e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ef2e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef2ec:
    // 0x2ef2ec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ef2ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef2f0:
    // 0x2ef2f0: 0x2b41821  addu        $v1, $s5, $s4
    ctx->pc = 0x2ef2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_2ef2f4:
    // 0x2ef2f4: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x2ef2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_2ef2f8:
    // 0x2ef2f8: 0x8c641054  lw          $a0, 0x1054($v1)
    ctx->pc = 0x2ef2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4180)));
label_2ef2fc:
    // 0x2ef2fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ef2fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ef300:
    // 0x2ef300: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2ef300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2ef304:
    // 0x2ef304: 0x320f809  jalr        $t9
label_2ef308:
    if (ctx->pc == 0x2EF308u) {
        ctx->pc = 0x2EF308u;
            // 0x2ef308: 0x244510b0  addiu       $a1, $v0, 0x10B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
        ctx->pc = 0x2EF30Cu;
        goto label_2ef30c;
    }
    ctx->pc = 0x2EF304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EF30Cu);
        ctx->pc = 0x2EF308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF304u;
            // 0x2ef308: 0x244510b0  addiu       $a1, $v0, 0x10B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EF30Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EF30Cu; }
            if (ctx->pc != 0x2EF30Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2EF30Cu;
label_2ef30c:
    // 0x2ef30c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ef30cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2ef310:
    // 0x2ef310: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x2ef310u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_2ef314:
    // 0x2ef314: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x2ef314u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_2ef318:
    // 0x2ef318: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_2ef31c:
    if (ctx->pc == 0x2EF31Cu) {
        ctx->pc = 0x2EF31Cu;
            // 0x2ef31c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x2EF320u;
        goto label_2ef320;
    }
    ctx->pc = 0x2EF318u;
    {
        const bool branch_taken_0x2ef318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF318u;
            // 0x2ef31c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef318) {
            ctx->pc = 0x2EF2F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef2f0;
        }
    }
    ctx->pc = 0x2EF320u;
label_2ef320:
    // 0x2ef320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ef320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef324:
    // 0x2ef324: 0xaea21050  sw          $v0, 0x1050($s5)
    ctx->pc = 0x2ef324u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4176), GPR_U32(ctx, 2));
label_2ef328:
    // 0x2ef328: 0x8ea41054  lw          $a0, 0x1054($s5)
    ctx->pc = 0x2ef328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4180)));
label_2ef32c:
    // 0x2ef32c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ef32cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ef330:
    // 0x2ef330: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2ef330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2ef334:
    // 0x2ef334: 0x320f809  jalr        $t9
label_2ef338:
    if (ctx->pc == 0x2EF338u) {
        ctx->pc = 0x2EF338u;
            // 0x2ef338: 0x26a51070  addiu       $a1, $s5, 0x1070 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4208));
        ctx->pc = 0x2EF33Cu;
        goto label_2ef33c;
    }
    ctx->pc = 0x2EF334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EF33Cu);
        ctx->pc = 0x2EF338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF334u;
            // 0x2ef338: 0x26a51070  addiu       $a1, $s5, 0x1070 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EF33Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EF33Cu; }
            if (ctx->pc != 0x2EF33Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2EF33Cu;
label_2ef33c:
    // 0x2ef33c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2ef33cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ef340:
    // 0x2ef340: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2ef340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_2ef344:
    // 0x2ef344: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ef344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ef348:
    // 0x2ef348: 0x0  nop
    ctx->pc = 0x2ef348u;
    // NOP
label_2ef34c:
    // 0x2ef34c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ef34cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ef350:
    // 0x2ef350: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ef350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2ef354:
    // 0x2ef354: 0xe6a01074  swc1        $f0, 0x1074($s5)
    ctx->pc = 0x2ef354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4212), bits); }
label_2ef358:
    // 0x2ef358: 0x8ea41058  lw          $a0, 0x1058($s5)
    ctx->pc = 0x2ef358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4184)));
label_2ef35c:
    // 0x2ef35c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ef35cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ef360:
    // 0x2ef360: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2ef360u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2ef364:
    // 0x2ef364: 0x320f809  jalr        $t9
label_2ef368:
    if (ctx->pc == 0x2EF368u) {
        ctx->pc = 0x2EF368u;
            // 0x2ef368: 0x26a51080  addiu       $a1, $s5, 0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4224));
        ctx->pc = 0x2EF36Cu;
        goto label_2ef36c;
    }
    ctx->pc = 0x2EF364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EF36Cu);
        ctx->pc = 0x2EF368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF364u;
            // 0x2ef368: 0x26a51080  addiu       $a1, $s5, 0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EF36Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EF36Cu; }
            if (ctx->pc != 0x2EF36Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2EF36Cu;
label_2ef36c:
    // 0x2ef36c: 0x101823  negu        $v1, $s0
    ctx->pc = 0x2ef36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_2ef370:
    // 0x2ef370: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2ef370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_2ef374:
    // 0x2ef374: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ef374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ef378:
    // 0x2ef378: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ef37c:
    // 0x2ef37c: 0x0  nop
    ctx->pc = 0x2ef37cu;
    // NOP
label_2ef380:
    // 0x2ef380: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ef380u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2ef384:
    // 0x2ef384: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ef384u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2ef388:
    // 0x2ef388: 0xe6a01084  swc1        $f0, 0x1084($s5)
    ctx->pc = 0x2ef388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4228), bits); }
label_2ef38c:
    // 0x2ef38c: 0x8ea4105c  lw          $a0, 0x105C($s5)
    ctx->pc = 0x2ef38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4188)));
label_2ef390:
    // 0x2ef390: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ef390u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ef394:
    // 0x2ef394: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2ef394u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2ef398:
    // 0x2ef398: 0x320f809  jalr        $t9
label_2ef39c:
    if (ctx->pc == 0x2EF39Cu) {
        ctx->pc = 0x2EF39Cu;
            // 0x2ef39c: 0x26a51090  addiu       $a1, $s5, 0x1090 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4240));
        ctx->pc = 0x2EF3A0u;
        goto label_2ef3a0;
    }
    ctx->pc = 0x2EF398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EF3A0u);
        ctx->pc = 0x2EF39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF398u;
            // 0x2ef39c: 0x26a51090  addiu       $a1, $s5, 0x1090 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4240));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EF3A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EF3A0u; }
            if (ctx->pc != 0x2EF3A0u) { return; }
        }
        }
    }
    ctx->pc = 0x2EF3A0u;
label_2ef3a0:
    // 0x2ef3a0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2ef3a0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ef3a4:
    // 0x2ef3a4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2ef3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_2ef3a8:
    // 0x2ef3a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ef3a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ef3ac:
    // 0x2ef3ac: 0x0  nop
    ctx->pc = 0x2ef3acu;
    // NOP
label_2ef3b0:
    // 0x2ef3b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ef3b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ef3b4:
    // 0x2ef3b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ef3b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2ef3b8:
    // 0x2ef3b8: 0xe6a01094  swc1        $f0, 0x1094($s5)
    ctx->pc = 0x2ef3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4244), bits); }
label_2ef3bc:
    // 0x2ef3bc: 0x8ea41060  lw          $a0, 0x1060($s5)
    ctx->pc = 0x2ef3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4192)));
label_2ef3c0:
    // 0x2ef3c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ef3c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ef3c4:
    // 0x2ef3c4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2ef3c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2ef3c8:
    // 0x2ef3c8: 0x320f809  jalr        $t9
label_2ef3cc:
    if (ctx->pc == 0x2EF3CCu) {
        ctx->pc = 0x2EF3CCu;
            // 0x2ef3cc: 0x26a510a0  addiu       $a1, $s5, 0x10A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4256));
        ctx->pc = 0x2EF3D0u;
        goto label_2ef3d0;
    }
    ctx->pc = 0x2EF3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EF3D0u);
        ctx->pc = 0x2EF3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF3C8u;
            // 0x2ef3cc: 0x26a510a0  addiu       $a1, $s5, 0x10A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EF3D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EF3D0u; }
            if (ctx->pc != 0x2EF3D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2EF3D0u;
label_2ef3d0:
    // 0x2ef3d0: 0x111823  negu        $v1, $s1
    ctx->pc = 0x2ef3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_2ef3d4:
    // 0x2ef3d4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2ef3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_2ef3d8:
    // 0x2ef3d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ef3d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ef3dc:
    // 0x2ef3dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef3dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ef3e0:
    // 0x2ef3e0: 0x0  nop
    ctx->pc = 0x2ef3e0u;
    // NOP
label_2ef3e4:
    // 0x2ef3e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ef3e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2ef3e8:
    // 0x2ef3e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ef3e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2ef3ec:
    // 0x2ef3ec: 0xe6a010a4  swc1        $f0, 0x10A4($s5)
    ctx->pc = 0x2ef3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4260), bits); }
label_2ef3f0:
    // 0x2ef3f0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2ef3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2ef3f4:
    // 0x2ef3f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2ef3f8:
    if (ctx->pc == 0x2EF3F8u) {
        ctx->pc = 0x2EF3F8u;
            // 0x2ef3f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EF3FCu;
        goto label_2ef3fc;
    }
    ctx->pc = 0x2EF3F4u;
    {
        const bool branch_taken_0x2ef3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF3F4u;
            // 0x2ef3f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef3f4) {
            ctx->pc = 0x2EF404u;
            goto label_2ef404;
        }
    }
    ctx->pc = 0x2EF3FCu;
label_2ef3fc:
    // 0x2ef3fc: 0xaea01050  sw          $zero, 0x1050($s5)
    ctx->pc = 0x2ef3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4176), GPR_U32(ctx, 0));
label_2ef400:
    // 0x2ef400: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ef400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef404:
    // 0x2ef404: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ef404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef408:
    // 0x2ef408: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ef408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef40c:
    // 0x2ef40c: 0x2b21821  addu        $v1, $s5, $s2
    ctx->pc = 0x2ef40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_2ef410:
    // 0x2ef410: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x2ef410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_2ef414:
    // 0x2ef414: 0x8c641054  lw          $a0, 0x1054($v1)
    ctx->pc = 0x2ef414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4180)));
label_2ef418:
    // 0x2ef418: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ef418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ef41c:
    // 0x2ef41c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2ef41cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2ef420:
    // 0x2ef420: 0x320f809  jalr        $t9
label_2ef424:
    if (ctx->pc == 0x2EF424u) {
        ctx->pc = 0x2EF424u;
            // 0x2ef424: 0x24451070  addiu       $a1, $v0, 0x1070 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4208));
        ctx->pc = 0x2EF428u;
        goto label_2ef428;
    }
    ctx->pc = 0x2EF420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EF428u);
        ctx->pc = 0x2EF424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF420u;
            // 0x2ef424: 0x24451070  addiu       $a1, $v0, 0x1070 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EF428u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EF428u; }
            if (ctx->pc != 0x2EF428u) { return; }
        }
        }
    }
    ctx->pc = 0x2EF428u;
label_2ef428:
    // 0x2ef428: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ef428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2ef42c:
    // 0x2ef42c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2ef42cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2ef430:
    // 0x2ef430: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x2ef430u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_2ef434:
    // 0x2ef434: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_2ef438:
    if (ctx->pc == 0x2EF438u) {
        ctx->pc = 0x2EF438u;
            // 0x2ef438: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x2EF43Cu;
        goto label_2ef43c;
    }
    ctx->pc = 0x2EF434u;
    {
        const bool branch_taken_0x2ef434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF434u;
            // 0x2ef438: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef434) {
            ctx->pc = 0x2EF40Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef40c;
        }
    }
    ctx->pc = 0x2EF43Cu;
label_2ef43c:
    // 0x2ef43c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2ef43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2ef440:
    // 0x2ef440: 0xaea30f84  sw          $v1, 0xF84($s5)
    ctx->pc = 0x2ef440u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3972), GPR_U32(ctx, 3));
label_2ef444:
    // 0x2ef444: 0xaebe0f88  sw          $fp, 0xF88($s5)
    ctx->pc = 0x2ef444u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3976), GPR_U32(ctx, 30));
label_2ef448:
    // 0x2ef448: 0xaeb70f8c  sw          $s7, 0xF8C($s5)
    ctx->pc = 0x2ef448u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3980), GPR_U32(ctx, 23));
label_2ef44c:
    // 0x2ef44c: 0xaeb60f90  sw          $s6, 0xF90($s5)
    ctx->pc = 0x2ef44cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3984), GPR_U32(ctx, 22));
label_2ef450:
    // 0x2ef450: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2ef450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2ef454:
    // 0x2ef454: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2ef454u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2ef458:
    // 0x2ef458: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2ef458u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ef45c:
    // 0x2ef45c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ef45cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ef460:
    // 0x2ef460: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ef460u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ef464:
    // 0x2ef464: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ef464u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ef468:
    // 0x2ef468: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ef468u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ef46c:
    // 0x2ef46c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ef46cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ef470:
    // 0x2ef470: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ef470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ef474:
    // 0x2ef474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ef474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef478:
    // 0x2ef478: 0x3e00008  jr          $ra
label_2ef47c:
    if (ctx->pc == 0x2EF47Cu) {
        ctx->pc = 0x2EF47Cu;
            // 0x2ef47c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2EF480u;
        goto label_fallthrough_0x2ef478;
    }
    ctx->pc = 0x2EF478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF478u;
            // 0x2ef47c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ef478:
    ctx->pc = 0x2EF480u;
}
