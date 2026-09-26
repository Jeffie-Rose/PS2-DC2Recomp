#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgDrawFishing__FP11SubGameInfo
// Address: 0x2fe150 - 0x2fe4e4
void sgDrawFishing__FP11SubGameInfo_0x2fe150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgDrawFishing__FP11SubGameInfo_0x2fe150");
#endif

    switch (ctx->pc) {
        case 0x2fe150u: goto label_2fe150;
        case 0x2fe154u: goto label_2fe154;
        case 0x2fe158u: goto label_2fe158;
        case 0x2fe15cu: goto label_2fe15c;
        case 0x2fe160u: goto label_2fe160;
        case 0x2fe164u: goto label_2fe164;
        case 0x2fe168u: goto label_2fe168;
        case 0x2fe16cu: goto label_2fe16c;
        case 0x2fe170u: goto label_2fe170;
        case 0x2fe174u: goto label_2fe174;
        case 0x2fe178u: goto label_2fe178;
        case 0x2fe17cu: goto label_2fe17c;
        case 0x2fe180u: goto label_2fe180;
        case 0x2fe184u: goto label_2fe184;
        case 0x2fe188u: goto label_2fe188;
        case 0x2fe18cu: goto label_2fe18c;
        case 0x2fe190u: goto label_2fe190;
        case 0x2fe194u: goto label_2fe194;
        case 0x2fe198u: goto label_2fe198;
        case 0x2fe19cu: goto label_2fe19c;
        case 0x2fe1a0u: goto label_2fe1a0;
        case 0x2fe1a4u: goto label_2fe1a4;
        case 0x2fe1a8u: goto label_2fe1a8;
        case 0x2fe1acu: goto label_2fe1ac;
        case 0x2fe1b0u: goto label_2fe1b0;
        case 0x2fe1b4u: goto label_2fe1b4;
        case 0x2fe1b8u: goto label_2fe1b8;
        case 0x2fe1bcu: goto label_2fe1bc;
        case 0x2fe1c0u: goto label_2fe1c0;
        case 0x2fe1c4u: goto label_2fe1c4;
        case 0x2fe1c8u: goto label_2fe1c8;
        case 0x2fe1ccu: goto label_2fe1cc;
        case 0x2fe1d0u: goto label_2fe1d0;
        case 0x2fe1d4u: goto label_2fe1d4;
        case 0x2fe1d8u: goto label_2fe1d8;
        case 0x2fe1dcu: goto label_2fe1dc;
        case 0x2fe1e0u: goto label_2fe1e0;
        case 0x2fe1e4u: goto label_2fe1e4;
        case 0x2fe1e8u: goto label_2fe1e8;
        case 0x2fe1ecu: goto label_2fe1ec;
        case 0x2fe1f0u: goto label_2fe1f0;
        case 0x2fe1f4u: goto label_2fe1f4;
        case 0x2fe1f8u: goto label_2fe1f8;
        case 0x2fe1fcu: goto label_2fe1fc;
        case 0x2fe200u: goto label_2fe200;
        case 0x2fe204u: goto label_2fe204;
        case 0x2fe208u: goto label_2fe208;
        case 0x2fe20cu: goto label_2fe20c;
        case 0x2fe210u: goto label_2fe210;
        case 0x2fe214u: goto label_2fe214;
        case 0x2fe218u: goto label_2fe218;
        case 0x2fe21cu: goto label_2fe21c;
        case 0x2fe220u: goto label_2fe220;
        case 0x2fe224u: goto label_2fe224;
        case 0x2fe228u: goto label_2fe228;
        case 0x2fe22cu: goto label_2fe22c;
        case 0x2fe230u: goto label_2fe230;
        case 0x2fe234u: goto label_2fe234;
        case 0x2fe238u: goto label_2fe238;
        case 0x2fe23cu: goto label_2fe23c;
        case 0x2fe240u: goto label_2fe240;
        case 0x2fe244u: goto label_2fe244;
        case 0x2fe248u: goto label_2fe248;
        case 0x2fe24cu: goto label_2fe24c;
        case 0x2fe250u: goto label_2fe250;
        case 0x2fe254u: goto label_2fe254;
        case 0x2fe258u: goto label_2fe258;
        case 0x2fe25cu: goto label_2fe25c;
        case 0x2fe260u: goto label_2fe260;
        case 0x2fe264u: goto label_2fe264;
        case 0x2fe268u: goto label_2fe268;
        case 0x2fe26cu: goto label_2fe26c;
        case 0x2fe270u: goto label_2fe270;
        case 0x2fe274u: goto label_2fe274;
        case 0x2fe278u: goto label_2fe278;
        case 0x2fe27cu: goto label_2fe27c;
        case 0x2fe280u: goto label_2fe280;
        case 0x2fe284u: goto label_2fe284;
        case 0x2fe288u: goto label_2fe288;
        case 0x2fe28cu: goto label_2fe28c;
        case 0x2fe290u: goto label_2fe290;
        case 0x2fe294u: goto label_2fe294;
        case 0x2fe298u: goto label_2fe298;
        case 0x2fe29cu: goto label_2fe29c;
        case 0x2fe2a0u: goto label_2fe2a0;
        case 0x2fe2a4u: goto label_2fe2a4;
        case 0x2fe2a8u: goto label_2fe2a8;
        case 0x2fe2acu: goto label_2fe2ac;
        case 0x2fe2b0u: goto label_2fe2b0;
        case 0x2fe2b4u: goto label_2fe2b4;
        case 0x2fe2b8u: goto label_2fe2b8;
        case 0x2fe2bcu: goto label_2fe2bc;
        case 0x2fe2c0u: goto label_2fe2c0;
        case 0x2fe2c4u: goto label_2fe2c4;
        case 0x2fe2c8u: goto label_2fe2c8;
        case 0x2fe2ccu: goto label_2fe2cc;
        case 0x2fe2d0u: goto label_2fe2d0;
        case 0x2fe2d4u: goto label_2fe2d4;
        case 0x2fe2d8u: goto label_2fe2d8;
        case 0x2fe2dcu: goto label_2fe2dc;
        case 0x2fe2e0u: goto label_2fe2e0;
        case 0x2fe2e4u: goto label_2fe2e4;
        case 0x2fe2e8u: goto label_2fe2e8;
        case 0x2fe2ecu: goto label_2fe2ec;
        case 0x2fe2f0u: goto label_2fe2f0;
        case 0x2fe2f4u: goto label_2fe2f4;
        case 0x2fe2f8u: goto label_2fe2f8;
        case 0x2fe2fcu: goto label_2fe2fc;
        case 0x2fe300u: goto label_2fe300;
        case 0x2fe304u: goto label_2fe304;
        case 0x2fe308u: goto label_2fe308;
        case 0x2fe30cu: goto label_2fe30c;
        case 0x2fe310u: goto label_2fe310;
        case 0x2fe314u: goto label_2fe314;
        case 0x2fe318u: goto label_2fe318;
        case 0x2fe31cu: goto label_2fe31c;
        case 0x2fe320u: goto label_2fe320;
        case 0x2fe324u: goto label_2fe324;
        case 0x2fe328u: goto label_2fe328;
        case 0x2fe32cu: goto label_2fe32c;
        case 0x2fe330u: goto label_2fe330;
        case 0x2fe334u: goto label_2fe334;
        case 0x2fe338u: goto label_2fe338;
        case 0x2fe33cu: goto label_2fe33c;
        case 0x2fe340u: goto label_2fe340;
        case 0x2fe344u: goto label_2fe344;
        case 0x2fe348u: goto label_2fe348;
        case 0x2fe34cu: goto label_2fe34c;
        case 0x2fe350u: goto label_2fe350;
        case 0x2fe354u: goto label_2fe354;
        case 0x2fe358u: goto label_2fe358;
        case 0x2fe35cu: goto label_2fe35c;
        case 0x2fe360u: goto label_2fe360;
        case 0x2fe364u: goto label_2fe364;
        case 0x2fe368u: goto label_2fe368;
        case 0x2fe36cu: goto label_2fe36c;
        case 0x2fe370u: goto label_2fe370;
        case 0x2fe374u: goto label_2fe374;
        case 0x2fe378u: goto label_2fe378;
        case 0x2fe37cu: goto label_2fe37c;
        case 0x2fe380u: goto label_2fe380;
        case 0x2fe384u: goto label_2fe384;
        case 0x2fe388u: goto label_2fe388;
        case 0x2fe38cu: goto label_2fe38c;
        case 0x2fe390u: goto label_2fe390;
        case 0x2fe394u: goto label_2fe394;
        case 0x2fe398u: goto label_2fe398;
        case 0x2fe39cu: goto label_2fe39c;
        case 0x2fe3a0u: goto label_2fe3a0;
        case 0x2fe3a4u: goto label_2fe3a4;
        case 0x2fe3a8u: goto label_2fe3a8;
        case 0x2fe3acu: goto label_2fe3ac;
        case 0x2fe3b0u: goto label_2fe3b0;
        case 0x2fe3b4u: goto label_2fe3b4;
        case 0x2fe3b8u: goto label_2fe3b8;
        case 0x2fe3bcu: goto label_2fe3bc;
        case 0x2fe3c0u: goto label_2fe3c0;
        case 0x2fe3c4u: goto label_2fe3c4;
        case 0x2fe3c8u: goto label_2fe3c8;
        case 0x2fe3ccu: goto label_2fe3cc;
        case 0x2fe3d0u: goto label_2fe3d0;
        case 0x2fe3d4u: goto label_2fe3d4;
        case 0x2fe3d8u: goto label_2fe3d8;
        case 0x2fe3dcu: goto label_2fe3dc;
        case 0x2fe3e0u: goto label_2fe3e0;
        case 0x2fe3e4u: goto label_2fe3e4;
        case 0x2fe3e8u: goto label_2fe3e8;
        case 0x2fe3ecu: goto label_2fe3ec;
        case 0x2fe3f0u: goto label_2fe3f0;
        case 0x2fe3f4u: goto label_2fe3f4;
        case 0x2fe3f8u: goto label_2fe3f8;
        case 0x2fe3fcu: goto label_2fe3fc;
        case 0x2fe400u: goto label_2fe400;
        case 0x2fe404u: goto label_2fe404;
        case 0x2fe408u: goto label_2fe408;
        case 0x2fe40cu: goto label_2fe40c;
        case 0x2fe410u: goto label_2fe410;
        case 0x2fe414u: goto label_2fe414;
        case 0x2fe418u: goto label_2fe418;
        case 0x2fe41cu: goto label_2fe41c;
        case 0x2fe420u: goto label_2fe420;
        case 0x2fe424u: goto label_2fe424;
        case 0x2fe428u: goto label_2fe428;
        case 0x2fe42cu: goto label_2fe42c;
        case 0x2fe430u: goto label_2fe430;
        case 0x2fe434u: goto label_2fe434;
        case 0x2fe438u: goto label_2fe438;
        case 0x2fe43cu: goto label_2fe43c;
        case 0x2fe440u: goto label_2fe440;
        case 0x2fe444u: goto label_2fe444;
        case 0x2fe448u: goto label_2fe448;
        case 0x2fe44cu: goto label_2fe44c;
        case 0x2fe450u: goto label_2fe450;
        case 0x2fe454u: goto label_2fe454;
        case 0x2fe458u: goto label_2fe458;
        case 0x2fe45cu: goto label_2fe45c;
        case 0x2fe460u: goto label_2fe460;
        case 0x2fe464u: goto label_2fe464;
        case 0x2fe468u: goto label_2fe468;
        case 0x2fe46cu: goto label_2fe46c;
        case 0x2fe470u: goto label_2fe470;
        case 0x2fe474u: goto label_2fe474;
        case 0x2fe478u: goto label_2fe478;
        case 0x2fe47cu: goto label_2fe47c;
        case 0x2fe480u: goto label_2fe480;
        case 0x2fe484u: goto label_2fe484;
        case 0x2fe488u: goto label_2fe488;
        case 0x2fe48cu: goto label_2fe48c;
        case 0x2fe490u: goto label_2fe490;
        case 0x2fe494u: goto label_2fe494;
        case 0x2fe498u: goto label_2fe498;
        case 0x2fe49cu: goto label_2fe49c;
        case 0x2fe4a0u: goto label_2fe4a0;
        case 0x2fe4a4u: goto label_2fe4a4;
        case 0x2fe4a8u: goto label_2fe4a8;
        case 0x2fe4acu: goto label_2fe4ac;
        case 0x2fe4b0u: goto label_2fe4b0;
        case 0x2fe4b4u: goto label_2fe4b4;
        case 0x2fe4b8u: goto label_2fe4b8;
        case 0x2fe4bcu: goto label_2fe4bc;
        case 0x2fe4c0u: goto label_2fe4c0;
        case 0x2fe4c4u: goto label_2fe4c4;
        case 0x2fe4c8u: goto label_2fe4c8;
        case 0x2fe4ccu: goto label_2fe4cc;
        case 0x2fe4d0u: goto label_2fe4d0;
        case 0x2fe4d4u: goto label_2fe4d4;
        case 0x2fe4d8u: goto label_2fe4d8;
        case 0x2fe4dcu: goto label_2fe4dc;
        case 0x2fe4e0u: goto label_2fe4e0;
        default: break;
    }

    ctx->pc = 0x2fe150u;

label_2fe150:
    // 0x2fe150: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2fe150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_2fe154:
    // 0x2fe154: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2fe154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2fe158:
    // 0x2fe158: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fe158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2fe15c:
    // 0x2fe15c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fe15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fe160:
    // 0x2fe160: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fe164:
    // 0x2fe164: 0x8f829fe8  lw          $v0, -0x6018($gp)
    ctx->pc = 0x2fe164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942696)));
label_2fe168:
    // 0x2fe168: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2fe16c:
    if (ctx->pc == 0x2FE16Cu) {
        ctx->pc = 0x2FE16Cu;
            // 0x2fe16c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE170u;
        goto label_2fe170;
    }
    ctx->pc = 0x2FE168u;
    {
        const bool branch_taken_0x2fe168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE168u;
            // 0x2fe16c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe168) {
            ctx->pc = 0x2FE178u;
            goto label_2fe178;
        }
    }
    ctx->pc = 0x2FE170u;
label_2fe170:
    // 0x2fe170: 0x100000d7  b           . + 4 + (0xD7 << 2)
label_2fe174:
    if (ctx->pc == 0x2FE174u) {
        ctx->pc = 0x2FE174u;
            // 0x2fe174: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x2FE178u;
        goto label_2fe178;
    }
    ctx->pc = 0x2FE170u;
    {
        const bool branch_taken_0x2fe170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE170u;
            // 0x2fe174: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe170) {
            ctx->pc = 0x2FE4D0u;
            goto label_2fe4d0;
        }
    }
    ctx->pc = 0x2FE178u;
label_2fe178:
    // 0x2fe178: 0x8f859f90  lw          $a1, -0x6070($gp)
    ctx->pc = 0x2fe178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942608)));
label_2fe17c:
    // 0x2fe17c: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2fe17cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_2fe180:
    // 0x2fe180: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x2fe180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
label_2fe184:
    // 0x2fe184: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fe184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fe188:
    // 0x2fe188: 0xc04ba14  jal         func_12E850
label_2fe18c:
    if (ctx->pc == 0x2FE18Cu) {
        ctx->pc = 0x2FE18Cu;
            // 0x2fe18c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE190u;
        goto label_2fe190;
    }
    ctx->pc = 0x2FE188u;
    SET_GPR_U32(ctx, 31, 0x2FE190u);
    ctx->pc = 0x2FE18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE188u;
            // 0x2fe18c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE190u; }
        if (ctx->pc != 0x2FE190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE190u; }
        if (ctx->pc != 0x2FE190u) { return; }
    }
    ctx->pc = 0x2FE190u;
label_2fe190:
    // 0x2fe190: 0x8f849f7c  lw          $a0, -0x6084($gp)
    ctx->pc = 0x2fe190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942588)));
label_2fe194:
    // 0x2fe194: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fe194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fe198:
    // 0x2fe198: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x2fe198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_2fe19c:
    // 0x2fe19c: 0x320f809  jalr        $t9
label_2fe1a0:
    if (ctx->pc == 0x2FE1A0u) {
        ctx->pc = 0x2FE1A4u;
        goto label_2fe1a4;
    }
    ctx->pc = 0x2FE19Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FE1A4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FE1A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FE1A4u; }
            if (ctx->pc != 0x2FE1A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2FE1A4u;
label_2fe1a4:
    // 0x2fe1a4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2fe1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_2fe1a8:
    // 0x2fe1a8: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x2fe1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2fe1ac:
    // 0x2fe1ac: 0x2442d930  addiu       $v0, $v0, -0x26D0
    ctx->pc = 0x2fe1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957360));
label_2fe1b0:
    // 0x2fe1b0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2fe1b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fe1b4:
    // 0x2fe1b4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2fe1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_2fe1b8:
    // 0x2fe1b8: 0x8f849fc0  lw          $a0, -0x6040($gp)
    ctx->pc = 0x2fe1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942656)));
label_2fe1bc:
    // 0x2fe1bc: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
label_2fe1c0:
    if (ctx->pc == 0x2FE1C0u) {
        ctx->pc = 0x2FE1C4u;
        goto label_2fe1c4;
    }
    ctx->pc = 0x2FE1BCu;
    {
        const bool branch_taken_0x2fe1bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe1bc) {
            ctx->pc = 0x2FE288u;
            goto label_2fe288;
        }
    }
    ctx->pc = 0x2FE1C4u;
label_2fe1c4:
    // 0x2fe1c4: 0xc0c40b8  jal         func_3102E0
label_2fe1c8:
    if (ctx->pc == 0x2FE1C8u) {
        ctx->pc = 0x2FE1CCu;
        goto label_2fe1cc;
    }
    ctx->pc = 0x2FE1C4u;
    SET_GPR_U32(ctx, 31, 0x2FE1CCu);
    ctx->pc = 0x3102E0u;
    if (runtime->hasFunction(0x3102E0u)) {
        auto targetFn = runtime->lookupFunction(0x3102E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE1CCu; }
        if (ctx->pc != 0x2FE1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetLurePose__FP8mgCFrame_0x3102e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE1CCu; }
        if (ctx->pc != 0x2FE1CCu) { return; }
    }
    ctx->pc = 0x2FE1CCu;
label_2fe1cc:
    // 0x2fe1cc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_2fe1d0:
    if (ctx->pc == 0x2FE1D0u) {
        ctx->pc = 0x2FE1D4u;
        goto label_2fe1d4;
    }
    ctx->pc = 0x2FE1CCu;
    {
        const bool branch_taken_0x2fe1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe1cc) {
            ctx->pc = 0x2FE288u;
            goto label_2fe288;
        }
    }
    ctx->pc = 0x2FE1D4u;
label_2fe1d4:
    // 0x2fe1d4: 0xc0c40a0  jal         func_310280
label_2fe1d8:
    if (ctx->pc == 0x2FE1D8u) {
        ctx->pc = 0x2FE1DCu;
        goto label_2fe1dc;
    }
    ctx->pc = 0x2FE1D4u;
    SET_GPR_U32(ctx, 31, 0x2FE1DCu);
    ctx->pc = 0x310280u;
    if (runtime->hasFunction(0x310280u)) {
        auto targetFn = runtime->lookupFunction(0x310280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE1DCu; }
        if (ctx->pc != 0x2FE1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetShowHari__Fv_0x310280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE1DCu; }
        if (ctx->pc != 0x2FE1DCu) { return; }
    }
    ctx->pc = 0x2FE1DCu;
label_2fe1dc:
    // 0x2fe1dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2fe1e0:
    if (ctx->pc == 0x2FE1E0u) {
        ctx->pc = 0x2FE1E4u;
        goto label_2fe1e4;
    }
    ctx->pc = 0x2FE1DCu;
    {
        const bool branch_taken_0x2fe1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe1dc) {
            ctx->pc = 0x2FE1FCu;
            goto label_2fe1fc;
        }
    }
    ctx->pc = 0x2FE1E4u;
label_2fe1e4:
    // 0x2fe1e4: 0x8f859f9c  lw          $a1, -0x6064($gp)
    ctx->pc = 0x2fe1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942620)));
label_2fe1e8:
    // 0x2fe1e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fe1ec:
    // 0x2fe1ec: 0xc04ba14  jal         func_12E850
label_2fe1f0:
    if (ctx->pc == 0x2FE1F0u) {
        ctx->pc = 0x2FE1F0u;
            // 0x2fe1f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE1F4u;
        goto label_2fe1f4;
    }
    ctx->pc = 0x2FE1ECu;
    SET_GPR_U32(ctx, 31, 0x2FE1F4u);
    ctx->pc = 0x2FE1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE1ECu;
            // 0x2fe1f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE1F4u; }
        if (ctx->pc != 0x2FE1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE1F4u; }
        if (ctx->pc != 0x2FE1F4u) { return; }
    }
    ctx->pc = 0x2FE1F4u;
label_2fe1f4:
    // 0x2fe1f4: 0xc050bf4  jal         func_142FD0
label_2fe1f8:
    if (ctx->pc == 0x2FE1F8u) {
        ctx->pc = 0x2FE1F8u;
            // 0x2fe1f8: 0x8f849fc0  lw          $a0, -0x6040($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942656)));
        ctx->pc = 0x2FE1FCu;
        goto label_2fe1fc;
    }
    ctx->pc = 0x2FE1F4u;
    SET_GPR_U32(ctx, 31, 0x2FE1FCu);
    ctx->pc = 0x2FE1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE1F4u;
            // 0x2fe1f8: 0x8f849fc0  lw          $a0, -0x6040($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE1FCu; }
        if (ctx->pc != 0x2FE1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE1FCu; }
        if (ctx->pc != 0x2FE1FCu) { return; }
    }
    ctx->pc = 0x2FE1FCu;
label_2fe1fc:
    // 0x2fe1fc: 0x8f849fc0  lw          $a0, -0x6040($gp)
    ctx->pc = 0x2fe1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942656)));
label_2fe200:
    // 0x2fe200: 0xc04dc0c  jal         func_137030
label_2fe204:
    if (ctx->pc == 0x2FE204u) {
        ctx->pc = 0x2FE204u;
            // 0x2fe204: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2FE208u;
        goto label_2fe208;
    }
    ctx->pc = 0x2FE200u;
    SET_GPR_U32(ctx, 31, 0x2FE208u);
    ctx->pc = 0x2FE204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE200u;
            // 0x2fe204: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE208u; }
        if (ctx->pc != 0x2FE208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE208u; }
        if (ctx->pc != 0x2FE208u) { return; }
    }
    ctx->pc = 0x2FE208u;
label_2fe208:
    // 0x2fe208: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2fe208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2fe20c:
    // 0x2fe20c: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x2fe20cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2fe210:
    // 0x2fe210: 0x78e60000  lq          $a2, 0x0($a3)
    ctx->pc = 0x2fe210u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_2fe214:
    // 0x2fe214: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2fe214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2fe218:
    // 0x2fe218: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2fe218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2fe21c:
    // 0x2fe21c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fe220:
    // 0x2fe220: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fe220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fe224:
    // 0x2fe224: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fe224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fe228:
    // 0x2fe228: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x2fe228u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
label_2fe22c:
    // 0x2fe22c: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x2fe22cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2fe230:
    // 0x2fe230: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x2fe230u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_2fe234:
    // 0x2fe234: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2fe234u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2fe238:
    // 0x2fe238: 0xc041c4a  jal         func_107128
label_2fe23c:
    if (ctx->pc == 0x2FE23Cu) {
        ctx->pc = 0x2FE23Cu;
            // 0x2fe23c: 0x7e220000  sq          $v0, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x2FE240u;
        goto label_2fe240;
    }
    ctx->pc = 0x2FE238u;
    SET_GPR_U32(ctx, 31, 0x2FE240u);
    ctx->pc = 0x2FE23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE238u;
            // 0x2fe23c: 0x7e220000  sq          $v0, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE240u; }
        if (ctx->pc != 0x2FE240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE240u; }
        if (ctx->pc != 0x2FE240u) { return; }
    }
    ctx->pc = 0x2FE240u;
label_2fe240:
    // 0x2fe240: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2fe240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2fe244:
    // 0x2fe244: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x2fe244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2fe248:
    // 0x2fe248: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x2fe248u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fe24c:
    // 0x2fe24c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2fe24cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2fe250:
    // 0x2fe250: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2fe250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2fe254:
    // 0x2fe254: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fe254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2fe258:
    // 0x2fe258: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2fe258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2fe25c:
    // 0x2fe25c: 0x7d090000  sq          $t1, 0x0($t0)
    ctx->pc = 0x2fe25cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 9));
label_2fe260:
    // 0x2fe260: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2fe260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2fe264:
    // 0x2fe264: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x2fe264u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_2fe268:
    // 0x2fe268: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x2fe268u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
label_2fe26c:
    // 0x2fe26c: 0x7a240000  lq          $a0, 0x0($s1)
    ctx->pc = 0x2fe26cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2fe270:
    // 0x2fe270: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fe270u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_2fe274:
    // 0x2fe274: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2fe274u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fe278:
    // 0x2fe278: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x2fe278u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_2fe27c:
    // 0x2fe27c: 0x8f849fc0  lw          $a0, -0x6040($gp)
    ctx->pc = 0x2fe27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942656)));
label_2fe280:
    // 0x2fe280: 0xc04ddf8  jal         func_1377E0
label_2fe284:
    if (ctx->pc == 0x2FE284u) {
        ctx->pc = 0x2FE284u;
            // 0x2fe284: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2FE288u;
        goto label_2fe288;
    }
    ctx->pc = 0x2FE280u;
    SET_GPR_U32(ctx, 31, 0x2FE288u);
    ctx->pc = 0x2FE284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE280u;
            // 0x2fe284: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1377E0u;
    if (runtime->hasFunction(0x1377E0u)) {
        auto targetFn = runtime->lookupFunction(0x1377E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE288u; }
        if (ctx->pc != 0x2FE288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition__8mgCFrameFPfPf_0x1377e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE288u; }
        if (ctx->pc != 0x2FE288u) { return; }
    }
    ctx->pc = 0x2FE288u;
label_2fe288:
    // 0x2fe288: 0x8f859f90  lw          $a1, -0x6070($gp)
    ctx->pc = 0x2fe288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942608)));
label_2fe28c:
    // 0x2fe28c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fe290:
    // 0x2fe290: 0xc04ba14  jal         func_12E850
label_2fe294:
    if (ctx->pc == 0x2FE294u) {
        ctx->pc = 0x2FE294u;
            // 0x2fe294: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE298u;
        goto label_2fe298;
    }
    ctx->pc = 0x2FE290u;
    SET_GPR_U32(ctx, 31, 0x2FE298u);
    ctx->pc = 0x2FE294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE290u;
            // 0x2fe294: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE298u; }
        if (ctx->pc != 0x2FE298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE298u; }
        if (ctx->pc != 0x2FE298u) { return; }
    }
    ctx->pc = 0x2FE298u;
label_2fe298:
    // 0x2fe298: 0x8f859fc4  lw          $a1, -0x603C($gp)
    ctx->pc = 0x2fe298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942660)));
label_2fe29c:
    // 0x2fe29c: 0xc0c40f4  jal         func_3103D0
label_2fe2a0:
    if (ctx->pc == 0x2FE2A0u) {
        ctx->pc = 0x2FE2A0u;
            // 0x2fe2a0: 0x8f849fbc  lw          $a0, -0x6044($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942652)));
        ctx->pc = 0x2FE2A4u;
        goto label_2fe2a4;
    }
    ctx->pc = 0x2FE29Cu;
    SET_GPR_U32(ctx, 31, 0x2FE2A4u);
    ctx->pc = 0x2FE2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE29Cu;
            // 0x2fe2a0: 0x8f849fbc  lw          $a0, -0x6044($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942652)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3103D0u;
    if (runtime->hasFunction(0x3103D0u)) {
        auto targetFn = runtime->lookupFunction(0x3103D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE2A4u; }
        if (ctx->pc != 0x2FE2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetUkiPose__FP8mgCFrameP8mgCFrame_0x3103d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE2A4u; }
        if (ctx->pc != 0x2FE2A4u) { return; }
    }
    ctx->pc = 0x2FE2A4u;
label_2fe2a4:
    // 0x2fe2a4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_2fe2a8:
    if (ctx->pc == 0x2FE2A8u) {
        ctx->pc = 0x2FE2ACu;
        goto label_2fe2ac;
    }
    ctx->pc = 0x2FE2A4u;
    {
        const bool branch_taken_0x2fe2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe2a4) {
            ctx->pc = 0x2FE354u;
            goto label_2fe354;
        }
    }
    ctx->pc = 0x2FE2ACu;
label_2fe2ac:
    // 0x2fe2ac: 0xc050bf4  jal         func_142FD0
label_2fe2b0:
    if (ctx->pc == 0x2FE2B0u) {
        ctx->pc = 0x2FE2B0u;
            // 0x2fe2b0: 0x8f849fbc  lw          $a0, -0x6044($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942652)));
        ctx->pc = 0x2FE2B4u;
        goto label_2fe2b4;
    }
    ctx->pc = 0x2FE2ACu;
    SET_GPR_U32(ctx, 31, 0x2FE2B4u);
    ctx->pc = 0x2FE2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE2ACu;
            // 0x2fe2b0: 0x8f849fbc  lw          $a0, -0x6044($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942652)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE2B4u; }
        if (ctx->pc != 0x2FE2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE2B4u; }
        if (ctx->pc != 0x2FE2B4u) { return; }
    }
    ctx->pc = 0x2FE2B4u;
label_2fe2b4:
    // 0x2fe2b4: 0xc0c40a0  jal         func_310280
label_2fe2b8:
    if (ctx->pc == 0x2FE2B8u) {
        ctx->pc = 0x2FE2BCu;
        goto label_2fe2bc;
    }
    ctx->pc = 0x2FE2B4u;
    SET_GPR_U32(ctx, 31, 0x2FE2BCu);
    ctx->pc = 0x310280u;
    if (runtime->hasFunction(0x310280u)) {
        auto targetFn = runtime->lookupFunction(0x310280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE2BCu; }
        if (ctx->pc != 0x2FE2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetShowHari__Fv_0x310280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE2BCu; }
        if (ctx->pc != 0x2FE2BCu) { return; }
    }
    ctx->pc = 0x2FE2BCu;
label_2fe2bc:
    // 0x2fe2bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fe2c0:
    if (ctx->pc == 0x2FE2C0u) {
        ctx->pc = 0x2FE2C4u;
        goto label_2fe2c4;
    }
    ctx->pc = 0x2FE2BCu;
    {
        const bool branch_taken_0x2fe2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe2bc) {
            ctx->pc = 0x2FE2CCu;
            goto label_2fe2cc;
        }
    }
    ctx->pc = 0x2FE2C4u;
label_2fe2c4:
    // 0x2fe2c4: 0xc050bf4  jal         func_142FD0
label_2fe2c8:
    if (ctx->pc == 0x2FE2C8u) {
        ctx->pc = 0x2FE2C8u;
            // 0x2fe2c8: 0x8f849fc4  lw          $a0, -0x603C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942660)));
        ctx->pc = 0x2FE2CCu;
        goto label_2fe2cc;
    }
    ctx->pc = 0x2FE2C4u;
    SET_GPR_U32(ctx, 31, 0x2FE2CCu);
    ctx->pc = 0x2FE2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE2C4u;
            // 0x2fe2c8: 0x8f849fc4  lw          $a0, -0x603C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942660)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE2CCu; }
        if (ctx->pc != 0x2FE2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE2CCu; }
        if (ctx->pc != 0x2FE2CCu) { return; }
    }
    ctx->pc = 0x2FE2CCu;
label_2fe2cc:
    // 0x2fe2cc: 0x8f849fc4  lw          $a0, -0x603C($gp)
    ctx->pc = 0x2fe2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942660)));
label_2fe2d0:
    // 0x2fe2d0: 0xc04dc0c  jal         func_137030
label_2fe2d4:
    if (ctx->pc == 0x2FE2D4u) {
        ctx->pc = 0x2FE2D4u;
            // 0x2fe2d4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2FE2D8u;
        goto label_2fe2d8;
    }
    ctx->pc = 0x2FE2D0u;
    SET_GPR_U32(ctx, 31, 0x2FE2D8u);
    ctx->pc = 0x2FE2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE2D0u;
            // 0x2fe2d4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE2D8u; }
        if (ctx->pc != 0x2FE2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE2D8u; }
        if (ctx->pc != 0x2FE2D8u) { return; }
    }
    ctx->pc = 0x2FE2D8u;
label_2fe2d8:
    // 0x2fe2d8: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x2fe2d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2fe2dc:
    // 0x2fe2dc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2fe2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2fe2e0:
    // 0x2fe2e0: 0x7a260000  lq          $a2, 0x0($s1)
    ctx->pc = 0x2fe2e0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2fe2e4:
    // 0x2fe2e4: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x2fe2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2fe2e8:
    // 0x2fe2e8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2fe2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2fe2ec:
    // 0x2fe2ec: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x2fe2ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2fe2f0:
    // 0x2fe2f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fe2f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fe2f4:
    // 0x2fe2f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2fe2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fe2f8:
    // 0x2fe2f8: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x2fe2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
label_2fe2fc:
    // 0x2fe2fc: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x2fe2fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_2fe300:
    // 0x2fe300: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x2fe300u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_2fe304:
    // 0x2fe304: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2fe304u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2fe308:
    // 0x2fe308: 0xc041c4a  jal         func_107128
label_2fe30c:
    if (ctx->pc == 0x2FE30Cu) {
        ctx->pc = 0x2FE30Cu;
            // 0x2fe30c: 0x7e420000  sq          $v0, 0x0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x2FE310u;
        goto label_2fe310;
    }
    ctx->pc = 0x2FE308u;
    SET_GPR_U32(ctx, 31, 0x2FE310u);
    ctx->pc = 0x2FE30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE308u;
            // 0x2fe30c: 0x7e420000  sq          $v0, 0x0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE310u; }
        if (ctx->pc != 0x2FE310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE310u; }
        if (ctx->pc != 0x2FE310u) { return; }
    }
    ctx->pc = 0x2FE310u;
label_2fe310:
    // 0x2fe310: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2fe310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2fe314:
    // 0x2fe314: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x2fe314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2fe318:
    // 0x2fe318: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x2fe318u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fe31c:
    // 0x2fe31c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2fe31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2fe320:
    // 0x2fe320: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fe320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2fe324:
    // 0x2fe324: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2fe324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2fe328:
    // 0x2fe328: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x2fe328u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
label_2fe32c:
    // 0x2fe32c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2fe32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2fe330:
    // 0x2fe330: 0x7a270000  lq          $a3, 0x0($s1)
    ctx->pc = 0x2fe330u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2fe334:
    // 0x2fe334: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x2fe334u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
label_2fe338:
    // 0x2fe338: 0x7a440000  lq          $a0, 0x0($s2)
    ctx->pc = 0x2fe338u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_2fe33c:
    // 0x2fe33c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fe33cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_2fe340:
    // 0x2fe340: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2fe340u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fe344:
    // 0x2fe344: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x2fe344u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_2fe348:
    // 0x2fe348: 0x8f849fc4  lw          $a0, -0x603C($gp)
    ctx->pc = 0x2fe348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942660)));
label_2fe34c:
    // 0x2fe34c: 0xc04ddf8  jal         func_1377E0
label_2fe350:
    if (ctx->pc == 0x2FE350u) {
        ctx->pc = 0x2FE350u;
            // 0x2fe350: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2FE354u;
        goto label_2fe354;
    }
    ctx->pc = 0x2FE34Cu;
    SET_GPR_U32(ctx, 31, 0x2FE354u);
    ctx->pc = 0x2FE350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE34Cu;
            // 0x2fe350: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1377E0u;
    if (runtime->hasFunction(0x1377E0u)) {
        auto targetFn = runtime->lookupFunction(0x1377E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE354u; }
        if (ctx->pc != 0x2FE354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition__8mgCFrameFPfPf_0x1377e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE354u; }
        if (ctx->pc != 0x2FE354u) { return; }
    }
    ctx->pc = 0x2FE354u;
label_2fe354:
    // 0x2fe354: 0x8f839fe0  lw          $v1, -0x6020($gp)
    ctx->pc = 0x2fe354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942688)));
label_2fe358:
    // 0x2fe358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fe358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fe35c:
    // 0x2fe35c: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
label_2fe360:
    if (ctx->pc == 0x2FE360u) {
        ctx->pc = 0x2FE364u;
        goto label_2fe364;
    }
    ctx->pc = 0x2FE35Cu;
    {
        const bool branch_taken_0x2fe35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fe35c) {
            ctx->pc = 0x2FE3D4u;
            goto label_2fe3d4;
        }
    }
    ctx->pc = 0x2FE364u;
label_2fe364:
    // 0x2fe364: 0xdf8285e8  ld          $v0, -0x7A18($gp)
    ctx->pc = 0x2fe364u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936040)));
label_2fe368:
    // 0x2fe368: 0x27a300f8  addiu       $v1, $sp, 0xF8
    ctx->pc = 0x2fe368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_2fe36c:
    // 0x2fe36c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2fe36cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_2fe370:
    // 0x2fe370: 0x8f849fb0  lw          $a0, -0x6050($gp)
    ctx->pc = 0x2fe370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942640)));
label_2fe374:
    // 0x2fe374: 0x8f829fd0  lw          $v0, -0x6030($gp)
    ctx->pc = 0x2fe374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942672)));
label_2fe378:
    // 0x2fe378: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fe378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fe37c:
    // 0x2fe37c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2fe37cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2fe380:
    // 0x2fe380: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2fe380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2fe384:
    // 0x2fe384: 0x8c4500f8  lw          $a1, 0xF8($v0)
    ctx->pc = 0x2fe384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
label_2fe388:
    // 0x2fe388: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2fe388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2fe38c:
    // 0x2fe38c: 0x320f809  jalr        $t9
label_2fe390:
    if (ctx->pc == 0x2FE390u) {
        ctx->pc = 0x2FE390u;
            // 0x2fe390: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE394u;
        goto label_2fe394;
    }
    ctx->pc = 0x2FE38Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FE394u);
        ctx->pc = 0x2FE390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE38Cu;
            // 0x2fe390: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FE394u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FE394u; }
            if (ctx->pc != 0x2FE394u) { return; }
        }
        }
    }
    ctx->pc = 0x2FE394u;
label_2fe394:
    // 0x2fe394: 0x8f849fb0  lw          $a0, -0x6050($gp)
    ctx->pc = 0x2fe394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942640)));
label_2fe398:
    // 0x2fe398: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2fe398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_2fe39c:
    // 0x2fe39c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fe39cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fe3a0:
    // 0x2fe3a0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2fe3a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2fe3a4:
    // 0x2fe3a4: 0x320f809  jalr        $t9
label_2fe3a8:
    if (ctx->pc == 0x2FE3A8u) {
        ctx->pc = 0x2FE3A8u;
            // 0x2fe3a8: 0x24a59cd0  addiu       $a1, $a1, -0x6330 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941904));
        ctx->pc = 0x2FE3ACu;
        goto label_2fe3ac;
    }
    ctx->pc = 0x2FE3A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FE3ACu);
        ctx->pc = 0x2FE3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE3A4u;
            // 0x2fe3a8: 0x24a59cd0  addiu       $a1, $a1, -0x6330 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941904));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FE3ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FE3ACu; }
            if (ctx->pc != 0x2FE3ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2FE3ACu;
label_2fe3ac:
    // 0x2fe3ac: 0x8f849fb0  lw          $a0, -0x6050($gp)
    ctx->pc = 0x2fe3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942640)));
label_2fe3b0:
    // 0x2fe3b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fe3b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fe3b4:
    // 0x2fe3b4: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x2fe3b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_2fe3b8:
    // 0x2fe3b8: 0x320f809  jalr        $t9
label_2fe3bc:
    if (ctx->pc == 0x2FE3BCu) {
        ctx->pc = 0x2FE3C0u;
        goto label_2fe3c0;
    }
    ctx->pc = 0x2FE3B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FE3C0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FE3C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FE3C0u; }
            if (ctx->pc != 0x2FE3C0u) { return; }
        }
        }
    }
    ctx->pc = 0x2FE3C0u;
label_2fe3c0:
    // 0x2fe3c0: 0x8f849fb0  lw          $a0, -0x6050($gp)
    ctx->pc = 0x2fe3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942640)));
label_2fe3c4:
    // 0x2fe3c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fe3c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fe3c8:
    // 0x2fe3c8: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x2fe3c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_2fe3cc:
    // 0x2fe3cc: 0x320f809  jalr        $t9
label_2fe3d0:
    if (ctx->pc == 0x2FE3D0u) {
        ctx->pc = 0x2FE3D4u;
        goto label_2fe3d4;
    }
    ctx->pc = 0x2FE3CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FE3D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FE3D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FE3D4u; }
            if (ctx->pc != 0x2FE3D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2FE3D4u;
label_2fe3d4:
    // 0x2fe3d4: 0x8f829fa8  lw          $v0, -0x6058($gp)
    ctx->pc = 0x2fe3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942632)));
label_2fe3d8:
    // 0x2fe3d8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_2fe3dc:
    if (ctx->pc == 0x2FE3DCu) {
        ctx->pc = 0x2FE3E0u;
        goto label_2fe3e0;
    }
    ctx->pc = 0x2FE3D8u;
    {
        const bool branch_taken_0x2fe3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe3d8) {
            ctx->pc = 0x2FE458u;
            goto label_2fe458;
        }
    }
    ctx->pc = 0x2FE3E0u;
label_2fe3e0:
    // 0x2fe3e0: 0x8f829fa4  lw          $v0, -0x605C($gp)
    ctx->pc = 0x2fe3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942628)));
label_2fe3e4:
    // 0x2fe3e4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_2fe3e8:
    if (ctx->pc == 0x2FE3E8u) {
        ctx->pc = 0x2FE3ECu;
        goto label_2fe3ec;
    }
    ctx->pc = 0x2FE3E4u;
    {
        const bool branch_taken_0x2fe3e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fe3e4) {
            ctx->pc = 0x2FE458u;
            goto label_2fe458;
        }
    }
    ctx->pc = 0x2FE3ECu;
label_2fe3ec:
    // 0x2fe3ec: 0x8f859f9c  lw          $a1, -0x6064($gp)
    ctx->pc = 0x2fe3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942620)));
label_2fe3f0:
    // 0x2fe3f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fe3f4:
    // 0x2fe3f4: 0xc04ba14  jal         func_12E850
label_2fe3f8:
    if (ctx->pc == 0x2FE3F8u) {
        ctx->pc = 0x2FE3F8u;
            // 0x2fe3f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE3FCu;
        goto label_2fe3fc;
    }
    ctx->pc = 0x2FE3F4u;
    SET_GPR_U32(ctx, 31, 0x2FE3FCu);
    ctx->pc = 0x2FE3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE3F4u;
            // 0x2fe3f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE3FCu; }
        if (ctx->pc != 0x2FE3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE3FCu; }
        if (ctx->pc != 0x2FE3FCu) { return; }
    }
    ctx->pc = 0x2FE3FCu;
label_2fe3fc:
    // 0x2fe3fc: 0x8f849fa8  lw          $a0, -0x6058($gp)
    ctx->pc = 0x2fe3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942632)));
label_2fe400:
    // 0x2fe400: 0x27b100b0  addiu       $s1, $sp, 0xB0
    ctx->pc = 0x2fe400u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2fe404:
    // 0x2fe404: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fe404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fe408:
    // 0x2fe408: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2fe408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2fe40c:
    // 0x2fe40c: 0x320f809  jalr        $t9
label_2fe410:
    if (ctx->pc == 0x2FE410u) {
        ctx->pc = 0x2FE410u;
            // 0x2fe410: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE414u;
        goto label_2fe414;
    }
    ctx->pc = 0x2FE40Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FE414u);
        ctx->pc = 0x2FE410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE40Cu;
            // 0x2fe410: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FE414u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FE414u; }
            if (ctx->pc != 0x2FE414u) { return; }
        }
        }
    }
    ctx->pc = 0x2FE414u;
label_2fe414:
    // 0x2fe414: 0xc04bc90  jal         func_12F240
label_2fe418:
    if (ctx->pc == 0x2FE418u) {
        ctx->pc = 0x2FE418u;
            // 0x2fe418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE41Cu;
        goto label_2fe41c;
    }
    ctx->pc = 0x2FE414u;
    SET_GPR_U32(ctx, 31, 0x2FE41Cu);
    ctx->pc = 0x2FE418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE414u;
            // 0x2fe418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (runtime->hasFunction(0x12F240u)) {
        auto targetFn = runtime->lookupFunction(0x12F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE41Cu; }
        if (ctx->pc != 0x2FE41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVectorW__FPf_0x12f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE41Cu; }
        if (ctx->pc != 0x2FE41Cu) { return; }
    }
    ctx->pc = 0x2FE41Cu;
label_2fe41c:
    // 0x2fe41c: 0x8f829fa8  lw          $v0, -0x6058($gp)
    ctx->pc = 0x2fe41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942632)));
label_2fe420:
    // 0x2fe420: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x2fe420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_2fe424:
    // 0x2fe424: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2fe428:
    if (ctx->pc == 0x2FE428u) {
        ctx->pc = 0x2FE428u;
            // 0x2fe428: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2FE42Cu;
        goto label_2fe42c;
    }
    ctx->pc = 0x2FE424u;
    {
        const bool branch_taken_0x2fe424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE424u;
            // 0x2fe428: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe424) {
            ctx->pc = 0x2FE434u;
            goto label_2fe434;
        }
    }
    ctx->pc = 0x2FE42Cu;
label_2fe42c:
    // 0x2fe42c: 0xc04dd64  jal         func_137590
label_2fe430:
    if (ctx->pc == 0x2FE430u) {
        ctx->pc = 0x2FE434u;
        goto label_2fe434;
    }
    ctx->pc = 0x2FE42Cu;
    SET_GPR_U32(ctx, 31, 0x2FE434u);
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE434u; }
        if (ctx->pc != 0x2FE434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE434u; }
        if (ctx->pc != 0x2FE434u) { return; }
    }
    ctx->pc = 0x2FE434u;
label_2fe434:
    // 0x2fe434: 0xc0c40a0  jal         func_310280
label_2fe438:
    if (ctx->pc == 0x2FE438u) {
        ctx->pc = 0x2FE43Cu;
        goto label_2fe43c;
    }
    ctx->pc = 0x2FE434u;
    SET_GPR_U32(ctx, 31, 0x2FE43Cu);
    ctx->pc = 0x310280u;
    if (runtime->hasFunction(0x310280u)) {
        auto targetFn = runtime->lookupFunction(0x310280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE43Cu; }
        if (ctx->pc != 0x2FE43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetShowHari__Fv_0x310280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE43Cu; }
        if (ctx->pc != 0x2FE43Cu) { return; }
    }
    ctx->pc = 0x2FE43Cu;
label_2fe43c:
    // 0x2fe43c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2fe440:
    if (ctx->pc == 0x2FE440u) {
        ctx->pc = 0x2FE444u;
        goto label_2fe444;
    }
    ctx->pc = 0x2FE43Cu;
    {
        const bool branch_taken_0x2fe43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe43c) {
            ctx->pc = 0x2FE458u;
            goto label_2fe458;
        }
    }
    ctx->pc = 0x2FE444u;
label_2fe444:
    // 0x2fe444: 0x8f849fa8  lw          $a0, -0x6058($gp)
    ctx->pc = 0x2fe444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942632)));
label_2fe448:
    // 0x2fe448: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fe448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fe44c:
    // 0x2fe44c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x2fe44cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_2fe450:
    // 0x2fe450: 0x320f809  jalr        $t9
label_2fe454:
    if (ctx->pc == 0x2FE454u) {
        ctx->pc = 0x2FE458u;
        goto label_2fe458;
    }
    ctx->pc = 0x2FE450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FE458u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FE458u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FE458u; }
            if (ctx->pc != 0x2FE458u) { return; }
        }
        }
    }
    ctx->pc = 0x2FE458u;
label_2fe458:
    // 0x2fe458: 0x8f829fa4  lw          $v0, -0x605C($gp)
    ctx->pc = 0x2fe458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942628)));
label_2fe45c:
    // 0x2fe45c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2fe460:
    if (ctx->pc == 0x2FE460u) {
        ctx->pc = 0x2FE464u;
        goto label_2fe464;
    }
    ctx->pc = 0x2FE45Cu;
    {
        const bool branch_taken_0x2fe45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe45c) {
            ctx->pc = 0x2FE4C0u;
            goto label_2fe4c0;
        }
    }
    ctx->pc = 0x2FE464u;
label_2fe464:
    // 0x2fe464: 0x8f859f94  lw          $a1, -0x606C($gp)
    ctx->pc = 0x2fe464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942612)));
label_2fe468:
    // 0x2fe468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fe46c:
    // 0x2fe46c: 0xc04ba14  jal         func_12E850
label_2fe470:
    if (ctx->pc == 0x2FE470u) {
        ctx->pc = 0x2FE470u;
            // 0x2fe470: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE474u;
        goto label_2fe474;
    }
    ctx->pc = 0x2FE46Cu;
    SET_GPR_U32(ctx, 31, 0x2FE474u);
    ctx->pc = 0x2FE470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE46Cu;
            // 0x2fe470: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE474u; }
        if (ctx->pc != 0x2FE474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE474u; }
        if (ctx->pc != 0x2FE474u) { return; }
    }
    ctx->pc = 0x2FE474u;
label_2fe474:
    // 0x2fe474: 0x8f849fa4  lw          $a0, -0x605C($gp)
    ctx->pc = 0x2fe474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942628)));
label_2fe478:
    // 0x2fe478: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x2fe478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2fe47c:
    // 0x2fe47c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fe47cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fe480:
    // 0x2fe480: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2fe480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2fe484:
    // 0x2fe484: 0x320f809  jalr        $t9
label_2fe488:
    if (ctx->pc == 0x2FE488u) {
        ctx->pc = 0x2FE488u;
            // 0x2fe488: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE48Cu;
        goto label_2fe48c;
    }
    ctx->pc = 0x2FE484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FE48Cu);
        ctx->pc = 0x2FE488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE484u;
            // 0x2fe488: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FE48Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FE48Cu; }
            if (ctx->pc != 0x2FE48Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2FE48Cu;
label_2fe48c:
    // 0x2fe48c: 0xc04bc90  jal         func_12F240
label_2fe490:
    if (ctx->pc == 0x2FE490u) {
        ctx->pc = 0x2FE490u;
            // 0x2fe490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE494u;
        goto label_2fe494;
    }
    ctx->pc = 0x2FE48Cu;
    SET_GPR_U32(ctx, 31, 0x2FE494u);
    ctx->pc = 0x2FE490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE48Cu;
            // 0x2fe490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (runtime->hasFunction(0x12F240u)) {
        auto targetFn = runtime->lookupFunction(0x12F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE494u; }
        if (ctx->pc != 0x2FE494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVectorW__FPf_0x12f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE494u; }
        if (ctx->pc != 0x2FE494u) { return; }
    }
    ctx->pc = 0x2FE494u;
label_2fe494:
    // 0x2fe494: 0x8f829fa4  lw          $v0, -0x605C($gp)
    ctx->pc = 0x2fe494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942628)));
label_2fe498:
    // 0x2fe498: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x2fe498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_2fe49c:
    // 0x2fe49c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2fe4a0:
    if (ctx->pc == 0x2FE4A0u) {
        ctx->pc = 0x2FE4A0u;
            // 0x2fe4a0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2FE4A4u;
        goto label_2fe4a4;
    }
    ctx->pc = 0x2FE49Cu;
    {
        const bool branch_taken_0x2fe49c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE49Cu;
            // 0x2fe4a0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe49c) {
            ctx->pc = 0x2FE4ACu;
            goto label_2fe4ac;
        }
    }
    ctx->pc = 0x2FE4A4u;
label_2fe4a4:
    // 0x2fe4a4: 0xc04dd64  jal         func_137590
label_2fe4a8:
    if (ctx->pc == 0x2FE4A8u) {
        ctx->pc = 0x2FE4ACu;
        goto label_2fe4ac;
    }
    ctx->pc = 0x2FE4A4u;
    SET_GPR_U32(ctx, 31, 0x2FE4ACu);
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE4ACu; }
        if (ctx->pc != 0x2FE4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE4ACu; }
        if (ctx->pc != 0x2FE4ACu) { return; }
    }
    ctx->pc = 0x2FE4ACu;
label_2fe4ac:
    // 0x2fe4ac: 0x8f849fa4  lw          $a0, -0x605C($gp)
    ctx->pc = 0x2fe4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942628)));
label_2fe4b0:
    // 0x2fe4b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fe4b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fe4b4:
    // 0x2fe4b4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x2fe4b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_2fe4b8:
    // 0x2fe4b8: 0x320f809  jalr        $t9
label_2fe4bc:
    if (ctx->pc == 0x2FE4BCu) {
        ctx->pc = 0x2FE4C0u;
        goto label_2fe4c0;
    }
    ctx->pc = 0x2FE4B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FE4C0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FE4C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FE4C0u; }
            if (ctx->pc != 0x2FE4C0u) { return; }
        }
        }
    }
    ctx->pc = 0x2FE4C0u;
label_2fe4c0:
    // 0x2fe4c0: 0xc0c48b8  jal         func_3122E0
label_2fe4c4:
    if (ctx->pc == 0x2FE4C4u) {
        ctx->pc = 0x2FE4C8u;
        goto label_2fe4c8;
    }
    ctx->pc = 0x2FE4C0u;
    SET_GPR_U32(ctx, 31, 0x2FE4C8u);
    ctx->pc = 0x3122E0u;
    if (runtime->hasFunction(0x3122E0u)) {
        auto targetFn = runtime->lookupFunction(0x3122E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE4C8u; }
        if (ctx->pc != 0x2FE4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawFishingLine__Fv_0x3122e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE4C8u; }
        if (ctx->pc != 0x2FE4C8u) { return; }
    }
    ctx->pc = 0x2FE4C8u;
label_2fe4c8:
    // 0x2fe4c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fe4c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fe4cc:
    // 0x2fe4cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2fe4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2fe4d0:
    // 0x2fe4d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fe4d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2fe4d4:
    // 0x2fe4d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fe4d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fe4d8:
    // 0x2fe4d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe4d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fe4dc:
    // 0x2fe4dc: 0x3e00008  jr          $ra
label_2fe4e0:
    if (ctx->pc == 0x2FE4E0u) {
        ctx->pc = 0x2FE4E0u;
            // 0x2fe4e0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x2FE4E4u;
        goto label_fallthrough_0x2fe4dc;
    }
    ctx->pc = 0x2FE4DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE4DCu;
            // 0x2fe4e0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2fe4dc:
    ctx->pc = 0x2FE4E4u;
}
