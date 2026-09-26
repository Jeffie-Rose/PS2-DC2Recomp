#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuMonsterLoadBGCheck__FPP17MENU_BGREAD_INFO2PP12CActionCharaii
// Address: 0x2bb100 - 0x2bb440
void MenuMonsterLoadBGCheck__FPP17MENU_BGREAD_INFO2PP12CActionCharaii_0x2bb100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuMonsterLoadBGCheck__FPP17MENU_BGREAD_INFO2PP12CActionCharaii_0x2bb100");
#endif

    switch (ctx->pc) {
        case 0x2bb100u: goto label_2bb100;
        case 0x2bb104u: goto label_2bb104;
        case 0x2bb108u: goto label_2bb108;
        case 0x2bb10cu: goto label_2bb10c;
        case 0x2bb110u: goto label_2bb110;
        case 0x2bb114u: goto label_2bb114;
        case 0x2bb118u: goto label_2bb118;
        case 0x2bb11cu: goto label_2bb11c;
        case 0x2bb120u: goto label_2bb120;
        case 0x2bb124u: goto label_2bb124;
        case 0x2bb128u: goto label_2bb128;
        case 0x2bb12cu: goto label_2bb12c;
        case 0x2bb130u: goto label_2bb130;
        case 0x2bb134u: goto label_2bb134;
        case 0x2bb138u: goto label_2bb138;
        case 0x2bb13cu: goto label_2bb13c;
        case 0x2bb140u: goto label_2bb140;
        case 0x2bb144u: goto label_2bb144;
        case 0x2bb148u: goto label_2bb148;
        case 0x2bb14cu: goto label_2bb14c;
        case 0x2bb150u: goto label_2bb150;
        case 0x2bb154u: goto label_2bb154;
        case 0x2bb158u: goto label_2bb158;
        case 0x2bb15cu: goto label_2bb15c;
        case 0x2bb160u: goto label_2bb160;
        case 0x2bb164u: goto label_2bb164;
        case 0x2bb168u: goto label_2bb168;
        case 0x2bb16cu: goto label_2bb16c;
        case 0x2bb170u: goto label_2bb170;
        case 0x2bb174u: goto label_2bb174;
        case 0x2bb178u: goto label_2bb178;
        case 0x2bb17cu: goto label_2bb17c;
        case 0x2bb180u: goto label_2bb180;
        case 0x2bb184u: goto label_2bb184;
        case 0x2bb188u: goto label_2bb188;
        case 0x2bb18cu: goto label_2bb18c;
        case 0x2bb190u: goto label_2bb190;
        case 0x2bb194u: goto label_2bb194;
        case 0x2bb198u: goto label_2bb198;
        case 0x2bb19cu: goto label_2bb19c;
        case 0x2bb1a0u: goto label_2bb1a0;
        case 0x2bb1a4u: goto label_2bb1a4;
        case 0x2bb1a8u: goto label_2bb1a8;
        case 0x2bb1acu: goto label_2bb1ac;
        case 0x2bb1b0u: goto label_2bb1b0;
        case 0x2bb1b4u: goto label_2bb1b4;
        case 0x2bb1b8u: goto label_2bb1b8;
        case 0x2bb1bcu: goto label_2bb1bc;
        case 0x2bb1c0u: goto label_2bb1c0;
        case 0x2bb1c4u: goto label_2bb1c4;
        case 0x2bb1c8u: goto label_2bb1c8;
        case 0x2bb1ccu: goto label_2bb1cc;
        case 0x2bb1d0u: goto label_2bb1d0;
        case 0x2bb1d4u: goto label_2bb1d4;
        case 0x2bb1d8u: goto label_2bb1d8;
        case 0x2bb1dcu: goto label_2bb1dc;
        case 0x2bb1e0u: goto label_2bb1e0;
        case 0x2bb1e4u: goto label_2bb1e4;
        case 0x2bb1e8u: goto label_2bb1e8;
        case 0x2bb1ecu: goto label_2bb1ec;
        case 0x2bb1f0u: goto label_2bb1f0;
        case 0x2bb1f4u: goto label_2bb1f4;
        case 0x2bb1f8u: goto label_2bb1f8;
        case 0x2bb1fcu: goto label_2bb1fc;
        case 0x2bb200u: goto label_2bb200;
        case 0x2bb204u: goto label_2bb204;
        case 0x2bb208u: goto label_2bb208;
        case 0x2bb20cu: goto label_2bb20c;
        case 0x2bb210u: goto label_2bb210;
        case 0x2bb214u: goto label_2bb214;
        case 0x2bb218u: goto label_2bb218;
        case 0x2bb21cu: goto label_2bb21c;
        case 0x2bb220u: goto label_2bb220;
        case 0x2bb224u: goto label_2bb224;
        case 0x2bb228u: goto label_2bb228;
        case 0x2bb22cu: goto label_2bb22c;
        case 0x2bb230u: goto label_2bb230;
        case 0x2bb234u: goto label_2bb234;
        case 0x2bb238u: goto label_2bb238;
        case 0x2bb23cu: goto label_2bb23c;
        case 0x2bb240u: goto label_2bb240;
        case 0x2bb244u: goto label_2bb244;
        case 0x2bb248u: goto label_2bb248;
        case 0x2bb24cu: goto label_2bb24c;
        case 0x2bb250u: goto label_2bb250;
        case 0x2bb254u: goto label_2bb254;
        case 0x2bb258u: goto label_2bb258;
        case 0x2bb25cu: goto label_2bb25c;
        case 0x2bb260u: goto label_2bb260;
        case 0x2bb264u: goto label_2bb264;
        case 0x2bb268u: goto label_2bb268;
        case 0x2bb26cu: goto label_2bb26c;
        case 0x2bb270u: goto label_2bb270;
        case 0x2bb274u: goto label_2bb274;
        case 0x2bb278u: goto label_2bb278;
        case 0x2bb27cu: goto label_2bb27c;
        case 0x2bb280u: goto label_2bb280;
        case 0x2bb284u: goto label_2bb284;
        case 0x2bb288u: goto label_2bb288;
        case 0x2bb28cu: goto label_2bb28c;
        case 0x2bb290u: goto label_2bb290;
        case 0x2bb294u: goto label_2bb294;
        case 0x2bb298u: goto label_2bb298;
        case 0x2bb29cu: goto label_2bb29c;
        case 0x2bb2a0u: goto label_2bb2a0;
        case 0x2bb2a4u: goto label_2bb2a4;
        case 0x2bb2a8u: goto label_2bb2a8;
        case 0x2bb2acu: goto label_2bb2ac;
        case 0x2bb2b0u: goto label_2bb2b0;
        case 0x2bb2b4u: goto label_2bb2b4;
        case 0x2bb2b8u: goto label_2bb2b8;
        case 0x2bb2bcu: goto label_2bb2bc;
        case 0x2bb2c0u: goto label_2bb2c0;
        case 0x2bb2c4u: goto label_2bb2c4;
        case 0x2bb2c8u: goto label_2bb2c8;
        case 0x2bb2ccu: goto label_2bb2cc;
        case 0x2bb2d0u: goto label_2bb2d0;
        case 0x2bb2d4u: goto label_2bb2d4;
        case 0x2bb2d8u: goto label_2bb2d8;
        case 0x2bb2dcu: goto label_2bb2dc;
        case 0x2bb2e0u: goto label_2bb2e0;
        case 0x2bb2e4u: goto label_2bb2e4;
        case 0x2bb2e8u: goto label_2bb2e8;
        case 0x2bb2ecu: goto label_2bb2ec;
        case 0x2bb2f0u: goto label_2bb2f0;
        case 0x2bb2f4u: goto label_2bb2f4;
        case 0x2bb2f8u: goto label_2bb2f8;
        case 0x2bb2fcu: goto label_2bb2fc;
        case 0x2bb300u: goto label_2bb300;
        case 0x2bb304u: goto label_2bb304;
        case 0x2bb308u: goto label_2bb308;
        case 0x2bb30cu: goto label_2bb30c;
        case 0x2bb310u: goto label_2bb310;
        case 0x2bb314u: goto label_2bb314;
        case 0x2bb318u: goto label_2bb318;
        case 0x2bb31cu: goto label_2bb31c;
        case 0x2bb320u: goto label_2bb320;
        case 0x2bb324u: goto label_2bb324;
        case 0x2bb328u: goto label_2bb328;
        case 0x2bb32cu: goto label_2bb32c;
        case 0x2bb330u: goto label_2bb330;
        case 0x2bb334u: goto label_2bb334;
        case 0x2bb338u: goto label_2bb338;
        case 0x2bb33cu: goto label_2bb33c;
        case 0x2bb340u: goto label_2bb340;
        case 0x2bb344u: goto label_2bb344;
        case 0x2bb348u: goto label_2bb348;
        case 0x2bb34cu: goto label_2bb34c;
        case 0x2bb350u: goto label_2bb350;
        case 0x2bb354u: goto label_2bb354;
        case 0x2bb358u: goto label_2bb358;
        case 0x2bb35cu: goto label_2bb35c;
        case 0x2bb360u: goto label_2bb360;
        case 0x2bb364u: goto label_2bb364;
        case 0x2bb368u: goto label_2bb368;
        case 0x2bb36cu: goto label_2bb36c;
        case 0x2bb370u: goto label_2bb370;
        case 0x2bb374u: goto label_2bb374;
        case 0x2bb378u: goto label_2bb378;
        case 0x2bb37cu: goto label_2bb37c;
        case 0x2bb380u: goto label_2bb380;
        case 0x2bb384u: goto label_2bb384;
        case 0x2bb388u: goto label_2bb388;
        case 0x2bb38cu: goto label_2bb38c;
        case 0x2bb390u: goto label_2bb390;
        case 0x2bb394u: goto label_2bb394;
        case 0x2bb398u: goto label_2bb398;
        case 0x2bb39cu: goto label_2bb39c;
        case 0x2bb3a0u: goto label_2bb3a0;
        case 0x2bb3a4u: goto label_2bb3a4;
        case 0x2bb3a8u: goto label_2bb3a8;
        case 0x2bb3acu: goto label_2bb3ac;
        case 0x2bb3b0u: goto label_2bb3b0;
        case 0x2bb3b4u: goto label_2bb3b4;
        case 0x2bb3b8u: goto label_2bb3b8;
        case 0x2bb3bcu: goto label_2bb3bc;
        case 0x2bb3c0u: goto label_2bb3c0;
        case 0x2bb3c4u: goto label_2bb3c4;
        case 0x2bb3c8u: goto label_2bb3c8;
        case 0x2bb3ccu: goto label_2bb3cc;
        case 0x2bb3d0u: goto label_2bb3d0;
        case 0x2bb3d4u: goto label_2bb3d4;
        case 0x2bb3d8u: goto label_2bb3d8;
        case 0x2bb3dcu: goto label_2bb3dc;
        case 0x2bb3e0u: goto label_2bb3e0;
        case 0x2bb3e4u: goto label_2bb3e4;
        case 0x2bb3e8u: goto label_2bb3e8;
        case 0x2bb3ecu: goto label_2bb3ec;
        case 0x2bb3f0u: goto label_2bb3f0;
        case 0x2bb3f4u: goto label_2bb3f4;
        case 0x2bb3f8u: goto label_2bb3f8;
        case 0x2bb3fcu: goto label_2bb3fc;
        case 0x2bb400u: goto label_2bb400;
        case 0x2bb404u: goto label_2bb404;
        case 0x2bb408u: goto label_2bb408;
        case 0x2bb40cu: goto label_2bb40c;
        case 0x2bb410u: goto label_2bb410;
        case 0x2bb414u: goto label_2bb414;
        case 0x2bb418u: goto label_2bb418;
        case 0x2bb41cu: goto label_2bb41c;
        case 0x2bb420u: goto label_2bb420;
        case 0x2bb424u: goto label_2bb424;
        case 0x2bb428u: goto label_2bb428;
        case 0x2bb42cu: goto label_2bb42c;
        case 0x2bb430u: goto label_2bb430;
        case 0x2bb434u: goto label_2bb434;
        case 0x2bb438u: goto label_2bb438;
        case 0x2bb43cu: goto label_2bb43c;
        default: break;
    }

    ctx->pc = 0x2bb100u;

label_2bb100:
    // 0x2bb100: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x2bb100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_2bb104:
    // 0x2bb104: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bb104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2bb108:
    // 0x2bb108: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2bb108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2bb10c:
    // 0x2bb10c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2bb10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2bb110:
    // 0x2bb110: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2bb110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2bb114:
    // 0x2bb114: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2bb114u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2bb118:
    // 0x2bb118: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2bb118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2bb11c:
    // 0x2bb11c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2bb11cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2bb120:
    // 0x2bb120: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2bb120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2bb124:
    // 0x2bb124: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2bb124u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bb128:
    // 0x2bb128: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bb128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2bb12c:
    // 0x2bb12c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2bb12cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bb130:
    // 0x2bb130: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bb130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2bb134:
    // 0x2bb134: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bb134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bb138:
    // 0x2bb138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bb138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bb13c:
    // 0x2bb13c: 0x83839b70  lb          $v1, -0x6490($gp)
    ctx->pc = 0x2bb13cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
label_2bb140:
    // 0x2bb140: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2bb140u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_2bb144:
    // 0x2bb144: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_2bb148:
    if (ctx->pc == 0x2BB148u) {
        ctx->pc = 0x2BB148u;
            // 0x2bb148: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->pc = 0x2BB14Cu;
        goto label_2bb14c;
    }
    ctx->pc = 0x2BB144u;
    {
        const bool branch_taken_0x2bb144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BB148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB144u;
            // 0x2bb148: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb144) {
            ctx->pc = 0x2BB160u;
            goto label_2bb160;
        }
    }
    ctx->pc = 0x2BB14Cu;
label_2bb14c:
    // 0x2bb14c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb150:
    // 0x2bb150: 0xc04b950  jal         func_12E540
label_2bb154:
    if (ctx->pc == 0x2BB154u) {
        ctx->pc = 0x2BB154u;
            // 0x2bb154: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB158u;
        goto label_2bb158;
    }
    ctx->pc = 0x2BB150u;
    SET_GPR_U32(ctx, 31, 0x2BB158u);
    ctx->pc = 0x2BB154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB150u;
            // 0x2bb154: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB158u; }
        if (ctx->pc != 0x2BB158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB158u; }
        if (ctx->pc != 0x2BB158u) { return; }
    }
    ctx->pc = 0x2BB158u;
label_2bb158:
    // 0x2bb158: 0x10000007  b           . + 4 + (0x7 << 2)
label_2bb15c:
    if (ctx->pc == 0x2BB15Cu) {
        ctx->pc = 0x2BB160u;
        goto label_2bb160;
    }
    ctx->pc = 0x2BB158u;
    {
        const bool branch_taken_0x2bb158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb158) {
            ctx->pc = 0x2BB178u;
            goto label_2bb178;
        }
    }
    ctx->pc = 0x2BB160u;
label_2bb160:
    // 0x2bb160: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x2bb160u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_2bb164:
    // 0x2bb164: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_2bb168:
    if (ctx->pc == 0x2BB168u) {
        ctx->pc = 0x2BB16Cu;
        goto label_2bb16c;
    }
    ctx->pc = 0x2BB164u;
    {
        const bool branch_taken_0x2bb164 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb164) {
            ctx->pc = 0x2BB178u;
            goto label_2bb178;
        }
    }
    ctx->pc = 0x2BB16Cu;
label_2bb16c:
    // 0x2bb16c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb170:
    // 0x2bb170: 0xc04b950  jal         func_12E540
label_2bb174:
    if (ctx->pc == 0x2BB174u) {
        ctx->pc = 0x2BB174u;
            // 0x2bb174: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB178u;
        goto label_2bb178;
    }
    ctx->pc = 0x2BB170u;
    SET_GPR_U32(ctx, 31, 0x2BB178u);
    ctx->pc = 0x2BB174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB170u;
            // 0x2bb174: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB178u; }
        if (ctx->pc != 0x2BB178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB178u; }
        if (ctx->pc != 0x2BB178u) { return; }
    }
    ctx->pc = 0x2BB178u;
label_2bb178:
    // 0x2bb178: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2bb178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
label_2bb17c:
    // 0x2bb17c: 0x8f9294a4  lw          $s2, -0x6B5C($gp)
    ctx->pc = 0x2bb17cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2bb180:
    // 0x2bb180: 0x24a5d120  addiu       $a1, $a1, -0x2EE0
    ctx->pc = 0x2bb180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955296));
label_2bb184:
    // 0x2bb184: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2bb184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2bb188:
    // 0x2bb188: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2bb188u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2bb18c:
    // 0x2bb18c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2bb18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bb190:
    // 0x2bb190: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x2bb190u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_2bb194:
    // 0x2bb194: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2bb194u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_2bb198:
    // 0x2bb198: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x2bb198u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
label_2bb19c:
    // 0x2bb19c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2bb19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_2bb1a0:
    // 0x2bb1a0: 0x83829b77  lb          $v0, -0x6489($gp)
    ctx->pc = 0x2bb1a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941559)));
label_2bb1a4:
    // 0x2bb1a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2bb1a8:
    if (ctx->pc == 0x2BB1A8u) {
        ctx->pc = 0x2BB1A8u;
            // 0x2bb1a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB1ACu;
        goto label_2bb1ac;
    }
    ctx->pc = 0x2BB1A4u;
    {
        const bool branch_taken_0x2bb1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB1A4u;
            // 0x2bb1a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb1a4) {
            ctx->pc = 0x2BB1BCu;
            goto label_2bb1bc;
        }
    }
    ctx->pc = 0x2BB1ACu;
label_2bb1ac:
    // 0x2bb1ac: 0x83839b70  lb          $v1, -0x6490($gp)
    ctx->pc = 0x2bb1acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
label_2bb1b0:
    // 0x2bb1b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bb1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2bb1b4:
    // 0x2bb1b4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_2bb1b8:
    if (ctx->pc == 0x2BB1B8u) {
        ctx->pc = 0x2BB1BCu;
        goto label_2bb1bc;
    }
    ctx->pc = 0x2BB1B4u;
    {
        const bool branch_taken_0x2bb1b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bb1b4) {
            ctx->pc = 0x2BB1E4u;
            goto label_2bb1e4;
        }
    }
    ctx->pc = 0x2BB1BCu;
label_2bb1bc:
    // 0x2bb1bc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2bb1bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb1c0:
    // 0x2bb1c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bb1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bb1c4:
    // 0x2bb1c4: 0xc0a0ed8  jal         func_283B60
label_2bb1c8:
    if (ctx->pc == 0x2BB1C8u) {
        ctx->pc = 0x2BB1C8u;
            // 0x2bb1c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB1CCu;
        goto label_2bb1cc;
    }
    ctx->pc = 0x2BB1C4u;
    SET_GPR_U32(ctx, 31, 0x2BB1CCu);
    ctx->pc = 0x2BB1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB1C4u;
            // 0x2bb1c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB1CCu; }
        if (ctx->pc != 0x2BB1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB1CCu; }
        if (ctx->pc != 0x2BB1CCu) { return; }
    }
    ctx->pc = 0x2BB1CCu;
label_2bb1cc:
    // 0x2bb1cc: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x2bb1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_2bb1d0:
    // 0x2bb1d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2bb1d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2bb1d4:
    // 0x2bb1d4: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x2bb1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
label_2bb1d8:
    // 0x2bb1d8: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x2bb1d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
label_2bb1dc:
    // 0x2bb1dc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_2bb1e0:
    if (ctx->pc == 0x2BB1E0u) {
        ctx->pc = 0x2BB1E0u;
            // 0x2bb1e0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x2BB1E4u;
        goto label_2bb1e4;
    }
    ctx->pc = 0x2BB1DCu;
    {
        const bool branch_taken_0x2bb1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB1DCu;
            // 0x2bb1e0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb1dc) {
            ctx->pc = 0x2BB1C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bb1c0;
        }
    }
    ctx->pc = 0x2BB1E4u;
label_2bb1e4:
    // 0x2bb1e4: 0x0  nop
    ctx->pc = 0x2bb1e4u;
    // NOP
label_2bb1e8:
    // 0x2bb1e8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2bb1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2bb1ec:
    // 0x2bb1ec: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x2bb1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
label_2bb1f0:
    // 0x2bb1f0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2bb1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2bb1f4:
    // 0x2bb1f4: 0xc094504  jal         func_251410
label_2bb1f8:
    if (ctx->pc == 0x2BB1F8u) {
        ctx->pc = 0x2BB1F8u;
            // 0x2bb1f8: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x2BB1FCu;
        goto label_2bb1fc;
    }
    ctx->pc = 0x2BB1F4u;
    SET_GPR_U32(ctx, 31, 0x2BB1FCu);
    ctx->pc = 0x2BB1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB1F4u;
            // 0x2bb1f8: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251410u;
    if (runtime->hasFunction(0x251410u)) {
        auto targetFn = runtime->lookupFunction(0x251410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB1FCu; }
        if (ctx->pc != 0x2BB1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGInfo__FPc_0x251410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB1FCu; }
        if (ctx->pc != 0x2BB1FCu) { return; }
    }
    ctx->pc = 0x2BB1FCu;
label_2bb1fc:
    // 0x2bb1fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2bb200:
    if (ctx->pc == 0x2BB200u) {
        ctx->pc = 0x2BB204u;
        goto label_2bb204;
    }
    ctx->pc = 0x2BB1FCu;
    {
        const bool branch_taken_0x2bb1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb1fc) {
            ctx->pc = 0x2BB20Cu;
            goto label_2bb20c;
        }
    }
    ctx->pc = 0x2BB204u;
label_2bb204:
    // 0x2bb204: 0x10000083  b           . + 4 + (0x83 << 2)
label_2bb208:
    if (ctx->pc == 0x2BB208u) {
        ctx->pc = 0x2BB208u;
            // 0x2bb208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB20Cu;
        goto label_2bb20c;
    }
    ctx->pc = 0x2BB204u;
    {
        const bool branch_taken_0x2bb204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB204u;
            // 0x2bb208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb204) {
            ctx->pc = 0x2BB414u;
            goto label_2bb414;
        }
    }
    ctx->pc = 0x2BB20Cu;
label_2bb20c:
    // 0x2bb20c: 0x8c520110  lw          $s2, 0x110($v0)
    ctx->pc = 0x2bb20cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_2bb210:
    // 0x2bb210: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2bb210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2bb214:
    // 0x2bb214: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2bb214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2bb218:
    // 0x2bb218: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2bb218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2bb21c:
    // 0x2bb21c: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x2bb21cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
label_2bb220:
    // 0x2bb220: 0x878484e8  lh          $a0, -0x7B18($gp)
    ctx->pc = 0x2bb220u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935784)));
label_2bb224:
    // 0x2bb224: 0xc0ad77c  jal         func_2B5DF0
label_2bb228:
    if (ctx->pc == 0x2BB228u) {
        ctx->pc = 0x2BB228u;
            // 0x2bb228: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x2BB22Cu;
        goto label_2bb22c;
    }
    ctx->pc = 0x2BB224u;
    SET_GPR_U32(ctx, 31, 0x2BB22Cu);
    ctx->pc = 0x2BB228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB224u;
            // 0x2bb228: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5DF0u;
    if (runtime->hasFunction(0x2B5DF0u)) {
        auto targetFn = runtime->lookupFunction(0x2B5DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB22Cu; }
        if (ctx->pc != 0x2BB22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterModelFile__FiiPc_0x2b5df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB22Cu; }
        if (ctx->pc != 0x2BB22Cu) { return; }
    }
    ctx->pc = 0x2BB22Cu;
label_2bb22c:
    // 0x2bb22c: 0x83839b70  lb          $v1, -0x6490($gp)
    ctx->pc = 0x2bb22cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
label_2bb230:
    // 0x2bb230: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bb230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2bb234:
    // 0x2bb234: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
label_2bb238:
    if (ctx->pc == 0x2BB238u) {
        ctx->pc = 0x2BB238u;
            // 0x2bb238: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x2BB23Cu;
        goto label_2bb23c;
    }
    ctx->pc = 0x2BB234u;
    {
        const bool branch_taken_0x2bb234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB234u;
            // 0x2bb238: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb234) {
            ctx->pc = 0x2BB2B0u;
            goto label_2bb2b0;
        }
    }
    ctx->pc = 0x2BB23Cu;
label_2bb23c:
    // 0x2bb23c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2bb23cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2bb240:
    // 0x2bb240: 0xac20cae4  sw          $zero, -0x351C($at)
    ctx->pc = 0x2bb240u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953700), GPR_U32(ctx, 0));
label_2bb244:
    // 0x2bb244: 0x3c1101f1  lui         $s1, 0x1F1
    ctx->pc = 0x2bb244u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)497 << 16));
label_2bb248:
    // 0x2bb248: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2bb248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2bb24c:
    // 0x2bb24c: 0x260401d8  addiu       $a0, $s0, 0x1D8
    ctx->pc = 0x2bb24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 472));
label_2bb250:
    // 0x2bb250: 0x24a5f488  addiu       $a1, $a1, -0xB78
    ctx->pc = 0x2bb250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964360));
label_2bb254:
    // 0x2bb254: 0x2631cac0  addiu       $s1, $s1, -0x3540
    ctx->pc = 0x2bb254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953664));
label_2bb258:
    // 0x2bb258: 0xc04a3dc  jal         func_128F70
label_2bb25c:
    if (ctx->pc == 0x2BB25Cu) {
        ctx->pc = 0x2BB25Cu;
            // 0x2bb25c: 0xac20cadc  sw          $zero, -0x3524($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294953692), GPR_U32(ctx, 0));
        ctx->pc = 0x2BB260u;
        goto label_2bb260;
    }
    ctx->pc = 0x2BB258u;
    SET_GPR_U32(ctx, 31, 0x2BB260u);
    ctx->pc = 0x2BB25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB258u;
            // 0x2bb25c: 0xac20cadc  sw          $zero, -0x3524($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294953692), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB260u; }
        if (ctx->pc != 0x2BB260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB260u; }
        if (ctx->pc != 0x2BB260u) { return; }
    }
    ctx->pc = 0x2BB260u;
label_2bb260:
    // 0x2bb260: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2bb260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2bb264:
    // 0x2bb264: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_2bb268:
    if (ctx->pc == 0x2BB268u) {
        ctx->pc = 0x2BB26Cu;
        goto label_2bb26c;
    }
    ctx->pc = 0x2BB264u;
    {
        const bool branch_taken_0x2bb264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb264) {
            ctx->pc = 0x2BB2A8u;
            goto label_2bb2a8;
        }
    }
    ctx->pc = 0x2BB26Cu;
label_2bb26c:
    // 0x2bb26c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bb26cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bb270:
    // 0x2bb270: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2bb270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2bb274:
    // 0x2bb274: 0x320f809  jalr        $t9
label_2bb278:
    if (ctx->pc == 0x2BB278u) {
        ctx->pc = 0x2BB278u;
            // 0x2bb278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB27Cu;
        goto label_2bb27c;
    }
    ctx->pc = 0x2BB274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BB27Cu);
        ctx->pc = 0x2BB278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB274u;
            // 0x2bb278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BB27Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BB27Cu; }
            if (ctx->pc != 0x2BB27Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2BB27Cu;
label_2bb27c:
    // 0x2bb27c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2bb27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2bb280:
    // 0x2bb280: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bb280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bb284:
    // 0x2bb284: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x2bb284u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2bb288:
    // 0x2bb288: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x2bb288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2bb28c:
    // 0x2bb28c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2bb28cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bb290:
    // 0x2bb290: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2bb290u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bb294:
    // 0x2bb294: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2bb294u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bb298:
    // 0x2bb298: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bb298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bb29c:
    // 0x2bb29c: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x2bb29cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_2bb2a0:
    // 0x2bb2a0: 0x320f809  jalr        $t9
label_2bb2a4:
    if (ctx->pc == 0x2BB2A4u) {
        ctx->pc = 0x2BB2A4u;
            // 0x2bb2a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB2A8u;
        goto label_2bb2a8;
    }
    ctx->pc = 0x2BB2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BB2A8u);
        ctx->pc = 0x2BB2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB2A0u;
            // 0x2bb2a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BB2A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BB2A8u; }
            if (ctx->pc != 0x2BB2A8u) { return; }
        }
        }
    }
    ctx->pc = 0x2BB2A8u;
label_2bb2a8:
    // 0x2bb2a8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2bb2ac:
    if (ctx->pc == 0x2BB2ACu) {
        ctx->pc = 0x2BB2ACu;
            // 0x2bb2ac: 0xa20001d8  sb          $zero, 0x1D8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 472), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2BB2B0u;
        goto label_2bb2b0;
    }
    ctx->pc = 0x2BB2A8u;
    {
        const bool branch_taken_0x2bb2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB2A8u;
            // 0x2bb2ac: 0xa20001d8  sb          $zero, 0x1D8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 472), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb2a8) {
            ctx->pc = 0x2BB328u;
            goto label_2bb328;
        }
    }
    ctx->pc = 0x2BB2B0u;
label_2bb2b0:
    // 0x2bb2b0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2bb2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2bb2b4:
    // 0x2bb2b4: 0xac400074  sw          $zero, 0x74($v0)
    ctx->pc = 0x2bb2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
label_2bb2b8:
    // 0x2bb2b8: 0x8f909b6c  lw          $s0, -0x6494($gp)
    ctx->pc = 0x2bb2b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941548)));
label_2bb2bc:
    // 0x2bb2bc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2bb2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_2bb2c0:
    // 0x2bb2c0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2bb2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_2bb2c4:
    // 0x2bb2c4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2bb2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2bb2c8:
    // 0x2bb2c8: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
label_2bb2cc:
    if (ctx->pc == 0x2BB2CCu) {
        ctx->pc = 0x2BB2D0u;
        goto label_2bb2d0;
    }
    ctx->pc = 0x2BB2C8u;
    {
        const bool branch_taken_0x2bb2c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb2c8) {
            ctx->pc = 0x2BB328u;
            goto label_2bb328;
        }
    }
    ctx->pc = 0x2BB2D0u;
label_2bb2d0:
    // 0x2bb2d0: 0xc05aa6c  jal         func_16A9B0
label_2bb2d4:
    if (ctx->pc == 0x2BB2D4u) {
        ctx->pc = 0x2BB2D8u;
        goto label_2bb2d8;
    }
    ctx->pc = 0x2BB2D0u;
    SET_GPR_U32(ctx, 31, 0x2BB2D8u);
    ctx->pc = 0x16A9B0u;
    if (runtime->hasFunction(0x16A9B0u)) {
        auto targetFn = runtime->lookupFunction(0x16A9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB2D8u; }
        if (ctx->pc != 0x2BB2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AllDeleteDamage__12CActionCharaFv_0x16a9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB2D8u; }
        if (ctx->pc != 0x2BB2D8u) { return; }
    }
    ctx->pc = 0x2BB2D8u;
label_2bb2d8:
    // 0x2bb2d8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2bb2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2bb2dc:
    // 0x2bb2dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bb2dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bb2e0:
    // 0x2bb2e0: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2bb2e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2bb2e4:
    // 0x2bb2e4: 0x320f809  jalr        $t9
label_2bb2e8:
    if (ctx->pc == 0x2BB2E8u) {
        ctx->pc = 0x2BB2E8u;
            // 0x2bb2e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB2ECu;
        goto label_2bb2ec;
    }
    ctx->pc = 0x2BB2E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BB2ECu);
        ctx->pc = 0x2BB2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB2E4u;
            // 0x2bb2e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BB2ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BB2ECu; }
            if (ctx->pc != 0x2BB2ECu) { return; }
        }
        }
    }
    ctx->pc = 0x2BB2ECu;
label_2bb2ec:
    // 0x2bb2ec: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2bb2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2bb2f0:
    // 0x2bb2f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bb2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bb2f4:
    // 0x2bb2f4: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x2bb2f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2bb2f8:
    // 0x2bb2f8: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x2bb2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2bb2fc:
    // 0x2bb2fc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2bb2fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb300:
    // 0x2bb300: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2bb300u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb304:
    // 0x2bb304: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2bb304u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb308:
    // 0x2bb308: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bb308u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bb30c:
    // 0x2bb30c: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x2bb30cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_2bb310:
    // 0x2bb310: 0x320f809  jalr        $t9
label_2bb314:
    if (ctx->pc == 0x2BB314u) {
        ctx->pc = 0x2BB314u;
            // 0x2bb314: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB318u;
        goto label_2bb318;
    }
    ctx->pc = 0x2BB310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BB318u);
        ctx->pc = 0x2BB314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB310u;
            // 0x2bb314: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BB318u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BB318u; }
            if (ctx->pc != 0x2BB318u) { return; }
        }
        }
    }
    ctx->pc = 0x2BB318u;
label_2bb318:
    // 0x2bb318: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2bb318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2bb31c:
    // 0x2bb31c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bb31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb320:
    // 0x2bb320: 0xc07a358  jal         func_1E8D60
label_2bb324:
    if (ctx->pc == 0x2BB324u) {
        ctx->pc = 0x2BB324u;
            // 0x2bb324: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2BB328u;
        goto label_2bb328;
    }
    ctx->pc = 0x2BB320u;
    SET_GPR_U32(ctx, 31, 0x2BB328u);
    ctx->pc = 0x2BB324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB320u;
            // 0x2bb324: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8D60u;
    if (runtime->hasFunction(0x1E8D60u)) {
        auto targetFn = runtime->lookupFunction(0x1E8D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB328u; }
        if (ctx->pc != 0x2BB328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSwordBlurEffect__FP11CCharacter2P9mgCMemoryi_0x1e8d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB328u; }
        if (ctx->pc != 0x2BB328u) { return; }
    }
    ctx->pc = 0x2BB328u;
label_2bb328:
    // 0x2bb328: 0xc0521f0  jal         func_1487C0
label_2bb32c:
    if (ctx->pc == 0x2BB32Cu) {
        ctx->pc = 0x2BB32Cu;
            // 0x2bb32c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2BB330u;
        goto label_2bb330;
    }
    ctx->pc = 0x2BB328u;
    SET_GPR_U32(ctx, 31, 0x2BB330u);
    ctx->pc = 0x2BB32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB328u;
            // 0x2bb32c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1487C0u;
    if (runtime->hasFunction(0x1487C0u)) {
        auto targetFn = runtime->lookupFunction(0x1487C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB330u; }
        if (ctx->pc != 0x2BB330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCurrentDir__FPc_0x1487c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB330u; }
        if (ctx->pc != 0x2BB330u) { return; }
    }
    ctx->pc = 0x2BB330u;
label_2bb330:
    // 0x2bb330: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2bb330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2bb334:
    // 0x2bb334: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2bb334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2bb338:
    // 0x2bb338: 0xc04a2da  jal         func_128B68
label_2bb33c:
    if (ctx->pc == 0x2BB33Cu) {
        ctx->pc = 0x2BB33Cu;
            // 0x2bb33c: 0x24a5f540  addiu       $a1, $a1, -0xAC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964544));
        ctx->pc = 0x2BB340u;
        goto label_2bb340;
    }
    ctx->pc = 0x2BB338u;
    SET_GPR_U32(ctx, 31, 0x2BB340u);
    ctx->pc = 0x2BB33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB338u;
            // 0x2bb33c: 0x24a5f540  addiu       $a1, $a1, -0xAC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB340u; }
        if (ctx->pc != 0x2BB340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB340u; }
        if (ctx->pc != 0x2BB340u) { return; }
    }
    ctx->pc = 0x2BB340u;
label_2bb340:
    // 0x2bb340: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2bb340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
label_2bb344:
    // 0x2bb344: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2bb344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2bb348:
    // 0x2bb348: 0xc04a2da  jal         func_128B68
label_2bb34c:
    if (ctx->pc == 0x2BB34Cu) {
        ctx->pc = 0x2BB34Cu;
            // 0x2bb34c: 0x24a5d100  addiu       $a1, $a1, -0x2F00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955264));
        ctx->pc = 0x2BB350u;
        goto label_2bb350;
    }
    ctx->pc = 0x2BB348u;
    SET_GPR_U32(ctx, 31, 0x2BB350u);
    ctx->pc = 0x2BB34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB348u;
            // 0x2bb34c: 0x24a5d100  addiu       $a1, $a1, -0x2F00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB350u; }
        if (ctx->pc != 0x2BB350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB350u; }
        if (ctx->pc != 0x2BB350u) { return; }
    }
    ctx->pc = 0x2BB350u;
label_2bb350:
    // 0x2bb350: 0xc0522fc  jal         func_148BF0
label_2bb354:
    if (ctx->pc == 0x2BB354u) {
        ctx->pc = 0x2BB354u;
            // 0x2bb354: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2BB358u;
        goto label_2bb358;
    }
    ctx->pc = 0x2BB350u;
    SET_GPR_U32(ctx, 31, 0x2BB358u);
    ctx->pc = 0x2BB354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB350u;
            // 0x2bb354: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148BF0u;
    if (runtime->hasFunction(0x148BF0u)) {
        auto targetFn = runtime->lookupFunction(0x148BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB358u; }
        if (ctx->pc != 0x2BB358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGFile__FPc_0x148bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB358u; }
        if (ctx->pc != 0x2BB358u) { return; }
    }
    ctx->pc = 0x2BB358u;
label_2bb358:
    // 0x2bb358: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_2bb35c:
    if (ctx->pc == 0x2BB35Cu) {
        ctx->pc = 0x2BB35Cu;
            // 0x2bb35c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB360u;
        goto label_2bb360;
    }
    ctx->pc = 0x2BB358u;
    {
        const bool branch_taken_0x2bb358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB358u;
            // 0x2bb35c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb358) {
            ctx->pc = 0x2BB400u;
            goto label_2bb400;
        }
    }
    ctx->pc = 0x2BB360u;
label_2bb360:
    // 0x2bb360: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2bb360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2bb364:
    // 0x2bb364: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x2bb364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_2bb368:
    // 0x2bb368: 0x2484d140  addiu       $a0, $a0, -0x2EC0
    ctx->pc = 0x2bb368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955328));
label_2bb36c:
    // 0x2bb36c: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x2bb36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2bb370:
    // 0x2bb370: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x2bb370u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_2bb374:
    // 0x2bb374: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2bb374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bb378:
    // 0x2bb378: 0x24a54c68  addiu       $a1, $a1, 0x4C68
    ctx->pc = 0x2bb378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19560));
label_2bb37c:
    // 0x2bb37c: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x2bb37cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_2bb380:
    // 0x2bb380: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2bb380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2bb384:
    // 0x2bb384: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2bb384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_2bb388:
    // 0x2bb388: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x2bb388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2bb38c:
    // 0x2bb38c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2bb38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2bb390:
    // 0x2bb390: 0x8cc60074  lw          $a2, 0x74($a2)
    ctx->pc = 0x2bb390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_2bb394:
    // 0x2bb394: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x2bb394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
label_2bb398:
    // 0x2bb398: 0xafa60150  sw          $a2, 0x150($sp)
    ctx->pc = 0x2bb398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 6));
label_2bb39c:
    // 0x2bb39c: 0xafa60154  sw          $a2, 0x154($sp)
    ctx->pc = 0x2bb39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 6));
label_2bb3a0:
    // 0x2bb3a0: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2bb3a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_2bb3a4:
    // 0x2bb3a4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2bb3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bb3a8:
    // 0x2bb3a8: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x2bb3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_2bb3ac:
    // 0x2bb3ac: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2bb3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2bb3b0:
    // 0x2bb3b0: 0x8f849b6c  lw          $a0, -0x6494($gp)
    ctx->pc = 0x2bb3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941548)));
label_2bb3b4:
    // 0x2bb3b4: 0x83839b70  lb          $v1, -0x6490($gp)
    ctx->pc = 0x2bb3b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
label_2bb3b8:
    // 0x2bb3b8: 0x248400f0  addiu       $a0, $a0, 0xF0
    ctx->pc = 0x2bb3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
label_2bb3bc:
    // 0x2bb3bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bb3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2bb3c0:
    // 0x2bb3c0: 0xafa40168  sw          $a0, 0x168($sp)
    ctx->pc = 0x2bb3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 4));
label_2bb3c4:
    // 0x2bb3c4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2bb3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_2bb3c8:
    // 0x2bb3c8: 0x8c670160  lw          $a3, 0x160($v1)
    ctx->pc = 0x2bb3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
label_2bb3cc:
    // 0x2bb3cc: 0x8c640150  lw          $a0, 0x150($v1)
    ctx->pc = 0x2bb3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2bb3d0:
    // 0x2bb3d0: 0xace00024  sw          $zero, 0x24($a3)
    ctx->pc = 0x2bb3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
label_2bb3d4:
    // 0x2bb3d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2bb3d8:
    if (ctx->pc == 0x2BB3D8u) {
        ctx->pc = 0x2BB3D8u;
            // 0x2bb3d8: 0xace0001c  sw          $zero, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x2BB3DCu;
        goto label_2bb3dc;
    }
    ctx->pc = 0x2BB3D4u;
    {
        const bool branch_taken_0x2bb3d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB3D4u;
            // 0x2bb3d8: 0xace0001c  sw          $zero, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb3d4) {
            ctx->pc = 0x2BB3E8u;
            goto label_2bb3e8;
        }
    }
    ctx->pc = 0x2BB3DCu;
label_2bb3dc:
    // 0x2bb3dc: 0x8c460114  lw          $a2, 0x114($v0)
    ctx->pc = 0x2bb3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
label_2bb3e0:
    // 0x2bb3e0: 0xc05c430  jal         func_1710C0
label_2bb3e4:
    if (ctx->pc == 0x2BB3E4u) {
        ctx->pc = 0x2BB3E4u;
            // 0x2bb3e4: 0x8c450110  lw          $a1, 0x110($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
        ctx->pc = 0x2BB3E8u;
        goto label_2bb3e8;
    }
    ctx->pc = 0x2BB3E0u;
    SET_GPR_U32(ctx, 31, 0x2BB3E8u);
    ctx->pc = 0x2BB3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB3E0u;
            // 0x2bb3e4: 0x8c450110  lw          $a1, 0x110($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1710C0u;
    if (runtime->hasFunction(0x1710C0u)) {
        auto targetFn = runtime->lookupFunction(0x1710C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB3E8u; }
        if (ctx->pc != 0x2BB3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadActionFile__12CActionCharaFPciP9mgCMemory_0x1710c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB3E8u; }
        if (ctx->pc != 0x2BB3E8u) { return; }
    }
    ctx->pc = 0x2BB3E8u;
label_2bb3e8:
    // 0x2bb3e8: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x2bb3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_2bb3ec:
    // 0x2bb3ec: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x2bb3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
label_2bb3f0:
    // 0x2bb3f0: 0x83829b75  lb          $v0, -0x648B($gp)
    ctx->pc = 0x2bb3f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941557)));
label_2bb3f4:
    // 0x2bb3f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bb3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bb3f8:
    // 0x2bb3f8: 0xa3829b75  sb          $v0, -0x648B($gp)
    ctx->pc = 0x2bb3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 2));
label_2bb3fc:
    // 0x2bb3fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bb3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bb400:
    // 0x2bb400: 0xc0aed10  jal         func_2BB440
label_2bb404:
    if (ctx->pc == 0x2BB404u) {
        ctx->pc = 0x2BB404u;
            // 0x2bb404: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2BB408u;
        goto label_2bb408;
    }
    ctx->pc = 0x2BB400u;
    SET_GPR_U32(ctx, 31, 0x2BB408u);
    ctx->pc = 0x2BB404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB400u;
            // 0x2bb404: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB440u;
    if (runtime->hasFunction(0x2BB440u)) {
        auto targetFn = runtime->lookupFunction(0x2BB440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB408u; }
        if (ctx->pc != 0x2BB408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoadEndCheckAfter__FPP17MENU_BGREAD_INFO2i_0x2bb440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB408u; }
        if (ctx->pc != 0x2BB408u) { return; }
    }
    ctx->pc = 0x2BB408u;
label_2bb408:
    // 0x2bb408: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2bb408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2bb40c:
    // 0x2bb40c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bb40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bb410:
    // 0x2bb410: 0xa3839b74  sb          $v1, -0x648C($gp)
    ctx->pc = 0x2bb410u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 3));
label_2bb414:
    // 0x2bb414: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2bb414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2bb418:
    // 0x2bb418: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2bb418u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2bb41c:
    // 0x2bb41c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2bb41cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2bb420:
    // 0x2bb420: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2bb420u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2bb424:
    // 0x2bb424: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2bb424u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2bb428:
    // 0x2bb428: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bb428u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bb42c:
    // 0x2bb42c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bb42cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bb430:
    // 0x2bb430: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bb430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bb434:
    // 0x2bb434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bb434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bb438:
    // 0x2bb438: 0x3e00008  jr          $ra
label_2bb43c:
    if (ctx->pc == 0x2BB43Cu) {
        ctx->pc = 0x2BB43Cu;
            // 0x2bb43c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x2BB440u;
        goto label_fallthrough_0x2bb438;
    }
    ctx->pc = 0x2BB438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB438u;
            // 0x2bb43c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2bb438:
    ctx->pc = 0x2BB440u;
}
