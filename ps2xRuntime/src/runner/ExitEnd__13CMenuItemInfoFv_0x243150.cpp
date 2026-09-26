#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ExitEnd__13CMenuItemInfoFv
// Address: 0x243150 - 0x243484
void ExitEnd__13CMenuItemInfoFv_0x243150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExitEnd__13CMenuItemInfoFv_0x243150");
#endif

    switch (ctx->pc) {
        case 0x243150u: goto label_243150;
        case 0x243154u: goto label_243154;
        case 0x243158u: goto label_243158;
        case 0x24315cu: goto label_24315c;
        case 0x243160u: goto label_243160;
        case 0x243164u: goto label_243164;
        case 0x243168u: goto label_243168;
        case 0x24316cu: goto label_24316c;
        case 0x243170u: goto label_243170;
        case 0x243174u: goto label_243174;
        case 0x243178u: goto label_243178;
        case 0x24317cu: goto label_24317c;
        case 0x243180u: goto label_243180;
        case 0x243184u: goto label_243184;
        case 0x243188u: goto label_243188;
        case 0x24318cu: goto label_24318c;
        case 0x243190u: goto label_243190;
        case 0x243194u: goto label_243194;
        case 0x243198u: goto label_243198;
        case 0x24319cu: goto label_24319c;
        case 0x2431a0u: goto label_2431a0;
        case 0x2431a4u: goto label_2431a4;
        case 0x2431a8u: goto label_2431a8;
        case 0x2431acu: goto label_2431ac;
        case 0x2431b0u: goto label_2431b0;
        case 0x2431b4u: goto label_2431b4;
        case 0x2431b8u: goto label_2431b8;
        case 0x2431bcu: goto label_2431bc;
        case 0x2431c0u: goto label_2431c0;
        case 0x2431c4u: goto label_2431c4;
        case 0x2431c8u: goto label_2431c8;
        case 0x2431ccu: goto label_2431cc;
        case 0x2431d0u: goto label_2431d0;
        case 0x2431d4u: goto label_2431d4;
        case 0x2431d8u: goto label_2431d8;
        case 0x2431dcu: goto label_2431dc;
        case 0x2431e0u: goto label_2431e0;
        case 0x2431e4u: goto label_2431e4;
        case 0x2431e8u: goto label_2431e8;
        case 0x2431ecu: goto label_2431ec;
        case 0x2431f0u: goto label_2431f0;
        case 0x2431f4u: goto label_2431f4;
        case 0x2431f8u: goto label_2431f8;
        case 0x2431fcu: goto label_2431fc;
        case 0x243200u: goto label_243200;
        case 0x243204u: goto label_243204;
        case 0x243208u: goto label_243208;
        case 0x24320cu: goto label_24320c;
        case 0x243210u: goto label_243210;
        case 0x243214u: goto label_243214;
        case 0x243218u: goto label_243218;
        case 0x24321cu: goto label_24321c;
        case 0x243220u: goto label_243220;
        case 0x243224u: goto label_243224;
        case 0x243228u: goto label_243228;
        case 0x24322cu: goto label_24322c;
        case 0x243230u: goto label_243230;
        case 0x243234u: goto label_243234;
        case 0x243238u: goto label_243238;
        case 0x24323cu: goto label_24323c;
        case 0x243240u: goto label_243240;
        case 0x243244u: goto label_243244;
        case 0x243248u: goto label_243248;
        case 0x24324cu: goto label_24324c;
        case 0x243250u: goto label_243250;
        case 0x243254u: goto label_243254;
        case 0x243258u: goto label_243258;
        case 0x24325cu: goto label_24325c;
        case 0x243260u: goto label_243260;
        case 0x243264u: goto label_243264;
        case 0x243268u: goto label_243268;
        case 0x24326cu: goto label_24326c;
        case 0x243270u: goto label_243270;
        case 0x243274u: goto label_243274;
        case 0x243278u: goto label_243278;
        case 0x24327cu: goto label_24327c;
        case 0x243280u: goto label_243280;
        case 0x243284u: goto label_243284;
        case 0x243288u: goto label_243288;
        case 0x24328cu: goto label_24328c;
        case 0x243290u: goto label_243290;
        case 0x243294u: goto label_243294;
        case 0x243298u: goto label_243298;
        case 0x24329cu: goto label_24329c;
        case 0x2432a0u: goto label_2432a0;
        case 0x2432a4u: goto label_2432a4;
        case 0x2432a8u: goto label_2432a8;
        case 0x2432acu: goto label_2432ac;
        case 0x2432b0u: goto label_2432b0;
        case 0x2432b4u: goto label_2432b4;
        case 0x2432b8u: goto label_2432b8;
        case 0x2432bcu: goto label_2432bc;
        case 0x2432c0u: goto label_2432c0;
        case 0x2432c4u: goto label_2432c4;
        case 0x2432c8u: goto label_2432c8;
        case 0x2432ccu: goto label_2432cc;
        case 0x2432d0u: goto label_2432d0;
        case 0x2432d4u: goto label_2432d4;
        case 0x2432d8u: goto label_2432d8;
        case 0x2432dcu: goto label_2432dc;
        case 0x2432e0u: goto label_2432e0;
        case 0x2432e4u: goto label_2432e4;
        case 0x2432e8u: goto label_2432e8;
        case 0x2432ecu: goto label_2432ec;
        case 0x2432f0u: goto label_2432f0;
        case 0x2432f4u: goto label_2432f4;
        case 0x2432f8u: goto label_2432f8;
        case 0x2432fcu: goto label_2432fc;
        case 0x243300u: goto label_243300;
        case 0x243304u: goto label_243304;
        case 0x243308u: goto label_243308;
        case 0x24330cu: goto label_24330c;
        case 0x243310u: goto label_243310;
        case 0x243314u: goto label_243314;
        case 0x243318u: goto label_243318;
        case 0x24331cu: goto label_24331c;
        case 0x243320u: goto label_243320;
        case 0x243324u: goto label_243324;
        case 0x243328u: goto label_243328;
        case 0x24332cu: goto label_24332c;
        case 0x243330u: goto label_243330;
        case 0x243334u: goto label_243334;
        case 0x243338u: goto label_243338;
        case 0x24333cu: goto label_24333c;
        case 0x243340u: goto label_243340;
        case 0x243344u: goto label_243344;
        case 0x243348u: goto label_243348;
        case 0x24334cu: goto label_24334c;
        case 0x243350u: goto label_243350;
        case 0x243354u: goto label_243354;
        case 0x243358u: goto label_243358;
        case 0x24335cu: goto label_24335c;
        case 0x243360u: goto label_243360;
        case 0x243364u: goto label_243364;
        case 0x243368u: goto label_243368;
        case 0x24336cu: goto label_24336c;
        case 0x243370u: goto label_243370;
        case 0x243374u: goto label_243374;
        case 0x243378u: goto label_243378;
        case 0x24337cu: goto label_24337c;
        case 0x243380u: goto label_243380;
        case 0x243384u: goto label_243384;
        case 0x243388u: goto label_243388;
        case 0x24338cu: goto label_24338c;
        case 0x243390u: goto label_243390;
        case 0x243394u: goto label_243394;
        case 0x243398u: goto label_243398;
        case 0x24339cu: goto label_24339c;
        case 0x2433a0u: goto label_2433a0;
        case 0x2433a4u: goto label_2433a4;
        case 0x2433a8u: goto label_2433a8;
        case 0x2433acu: goto label_2433ac;
        case 0x2433b0u: goto label_2433b0;
        case 0x2433b4u: goto label_2433b4;
        case 0x2433b8u: goto label_2433b8;
        case 0x2433bcu: goto label_2433bc;
        case 0x2433c0u: goto label_2433c0;
        case 0x2433c4u: goto label_2433c4;
        case 0x2433c8u: goto label_2433c8;
        case 0x2433ccu: goto label_2433cc;
        case 0x2433d0u: goto label_2433d0;
        case 0x2433d4u: goto label_2433d4;
        case 0x2433d8u: goto label_2433d8;
        case 0x2433dcu: goto label_2433dc;
        case 0x2433e0u: goto label_2433e0;
        case 0x2433e4u: goto label_2433e4;
        case 0x2433e8u: goto label_2433e8;
        case 0x2433ecu: goto label_2433ec;
        case 0x2433f0u: goto label_2433f0;
        case 0x2433f4u: goto label_2433f4;
        case 0x2433f8u: goto label_2433f8;
        case 0x2433fcu: goto label_2433fc;
        case 0x243400u: goto label_243400;
        case 0x243404u: goto label_243404;
        case 0x243408u: goto label_243408;
        case 0x24340cu: goto label_24340c;
        case 0x243410u: goto label_243410;
        case 0x243414u: goto label_243414;
        case 0x243418u: goto label_243418;
        case 0x24341cu: goto label_24341c;
        case 0x243420u: goto label_243420;
        case 0x243424u: goto label_243424;
        case 0x243428u: goto label_243428;
        case 0x24342cu: goto label_24342c;
        case 0x243430u: goto label_243430;
        case 0x243434u: goto label_243434;
        case 0x243438u: goto label_243438;
        case 0x24343cu: goto label_24343c;
        case 0x243440u: goto label_243440;
        case 0x243444u: goto label_243444;
        case 0x243448u: goto label_243448;
        case 0x24344cu: goto label_24344c;
        case 0x243450u: goto label_243450;
        case 0x243454u: goto label_243454;
        case 0x243458u: goto label_243458;
        case 0x24345cu: goto label_24345c;
        case 0x243460u: goto label_243460;
        case 0x243464u: goto label_243464;
        case 0x243468u: goto label_243468;
        case 0x24346cu: goto label_24346c;
        case 0x243470u: goto label_243470;
        case 0x243474u: goto label_243474;
        case 0x243478u: goto label_243478;
        case 0x24347cu: goto label_24347c;
        case 0x243480u: goto label_243480;
        default: break;
    }

    ctx->pc = 0x243150u;

label_243150:
    // 0x243150: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x243150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_243154:
    // 0x243154: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x243154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_243158:
    // 0x243158: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x243158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_24315c:
    // 0x24315c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24315cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_243160:
    // 0x243160: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x243160u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_243164:
    // 0x243164: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x243164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_243168:
    // 0x243168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x243168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24316c:
    // 0x24316c: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x24316cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_243170:
    // 0x243170: 0xc0a0ed8  jal         func_283B60
label_243174:
    if (ctx->pc == 0x243174u) {
        ctx->pc = 0x243174u;
            // 0x243174: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243178u;
        goto label_243178;
    }
    ctx->pc = 0x243170u;
    SET_GPR_U32(ctx, 31, 0x243178u);
    ctx->pc = 0x243174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243170u;
            // 0x243174: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243178u; }
        if (ctx->pc != 0x243178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243178u; }
        if (ctx->pc != 0x243178u) { return; }
    }
    ctx->pc = 0x243178u;
label_243178:
    // 0x243178: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x243178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24317c:
    // 0x24317c: 0x9262016e  lbu         $v0, 0x16E($s3)
    ctx->pc = 0x24317cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 366)));
label_243180:
    // 0x243180: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_243184:
    if (ctx->pc == 0x243184u) {
        ctx->pc = 0x243188u;
        goto label_243188;
    }
    ctx->pc = 0x243180u;
    {
        const bool branch_taken_0x243180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243180) {
            ctx->pc = 0x243198u;
            goto label_243198;
        }
    }
    ctx->pc = 0x243188u;
label_243188:
    // 0x243188: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x243188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_24318c:
    // 0x24318c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24318cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_243190:
    // 0x243190: 0xc0ae808  jal         func_2BA020
label_243194:
    if (ctx->pc == 0x243194u) {
        ctx->pc = 0x243194u;
            // 0x243194: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x243198u;
        goto label_243198;
    }
    ctx->pc = 0x243190u;
    SET_GPR_U32(ctx, 31, 0x243198u);
    ctx->pc = 0x243194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243190u;
            // 0x243194: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA020u;
    if (runtime->hasFunction(0x2BA020u)) {
        auto targetFn = runtime->lookupFunction(0x2BA020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243198u; }
        if (ctx->pc != 0x243198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCharaSoundEnter__FP6CSceneP12CActionCharai_0x2ba020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243198u; }
        if (ctx->pc != 0x243198u) { return; }
    }
    ctx->pc = 0x243198u;
label_243198:
    // 0x243198: 0x86620174  lh          $v0, 0x174($s3)
    ctx->pc = 0x243198u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 372)));
label_24319c:
    // 0x24319c: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
label_2431a0:
    if (ctx->pc == 0x2431A0u) {
        ctx->pc = 0x2431A0u;
            // 0x2431a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2431A4u;
        goto label_2431a4;
    }
    ctx->pc = 0x24319Cu;
    {
        const bool branch_taken_0x24319c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2431A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24319Cu;
            // 0x2431a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24319c) {
            ctx->pc = 0x243330u;
            goto label_243330;
        }
    }
    ctx->pc = 0x2431A4u;
label_2431a4:
    // 0x2431a4: 0xc090c40  jal         func_243100
label_2431a8:
    if (ctx->pc == 0x2431A8u) {
        ctx->pc = 0x2431A8u;
            // 0x2431a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2431ACu;
        goto label_2431ac;
    }
    ctx->pc = 0x2431A4u;
    SET_GPR_U32(ctx, 31, 0x2431ACu);
    ctx->pc = 0x2431A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2431A4u;
            // 0x2431a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243100u;
    if (runtime->hasFunction(0x243100u)) {
        auto targetFn = runtime->lookupFunction(0x243100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2431ACu; }
        if (ctx->pc != 0x2431ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCharaNo__13CMenuItemInfoFv_0x243100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2431ACu; }
        if (ctx->pc != 0x2431ACu) { return; }
    }
    ctx->pc = 0x2431ACu;
label_2431ac:
    // 0x2431ac: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2431acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2431b0:
    // 0x2431b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2431b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2431b4:
    // 0x2431b4: 0xc0a0ed8  jal         func_283B60
label_2431b8:
    if (ctx->pc == 0x2431B8u) {
        ctx->pc = 0x2431B8u;
            // 0x2431b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2431BCu;
        goto label_2431bc;
    }
    ctx->pc = 0x2431B4u;
    SET_GPR_U32(ctx, 31, 0x2431BCu);
    ctx->pc = 0x2431B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2431B4u;
            // 0x2431b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2431BCu; }
        if (ctx->pc != 0x2431BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2431BCu; }
        if (ctx->pc != 0x2431BCu) { return; }
    }
    ctx->pc = 0x2431BCu;
label_2431bc:
    // 0x2431bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2431bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2431c0:
    // 0x2431c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2431c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2431c4:
    // 0x2431c4: 0xc0ae988  jal         func_2BA620
label_2431c8:
    if (ctx->pc == 0x2431C8u) {
        ctx->pc = 0x2431C8u;
            // 0x2431c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2431CCu;
        goto label_2431cc;
    }
    ctx->pc = 0x2431C4u;
    SET_GPR_U32(ctx, 31, 0x2431CCu);
    ctx->pc = 0x2431C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2431C4u;
            // 0x2431c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA620u;
    if (runtime->hasFunction(0x2BA620u)) {
        auto targetFn = runtime->lookupFunction(0x2BA620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2431CCu; }
        if (ctx->pc != 0x2431CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteOutLineMenu__FP12CActionCharai_0x2ba620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2431CCu; }
        if (ctx->pc != 0x2431CCu) { return; }
    }
    ctx->pc = 0x2431CCu;
label_2431cc:
    // 0x2431cc: 0xc05d398  jal         func_174E60
label_2431d0:
    if (ctx->pc == 0x2431D0u) {
        ctx->pc = 0x2431D0u;
            // 0x2431d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2431D4u;
        goto label_2431d4;
    }
    ctx->pc = 0x2431CCu;
    SET_GPR_U32(ctx, 31, 0x2431D4u);
    ctx->pc = 0x2431D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2431CCu;
            // 0x2431d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174E60u;
    if (runtime->hasFunction(0x174E60u)) {
        auto targetFn = runtime->lookupFunction(0x174E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2431D4u; }
        if (ctx->pc != 0x2431D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteImage__11CCharacter2Fv_0x174e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2431D4u; }
        if (ctx->pc != 0x2431D4u) { return; }
    }
    ctx->pc = 0x2431D4u;
label_2431d4:
    // 0x2431d4: 0x8f829b6c  lw          $v0, -0x6494($gp)
    ctx->pc = 0x2431d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941548)));
label_2431d8:
    // 0x2431d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2431d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2431dc:
    // 0x2431dc: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2431dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_2431e0:
    // 0x2431e0: 0xc05aa6c  jal         func_16A9B0
label_2431e4:
    if (ctx->pc == 0x2431E4u) {
        ctx->pc = 0x2431E4u;
            // 0x2431e4: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x2431E8u;
        goto label_2431e8;
    }
    ctx->pc = 0x2431E0u;
    SET_GPR_U32(ctx, 31, 0x2431E8u);
    ctx->pc = 0x2431E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2431E0u;
            // 0x2431e4: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A9B0u;
    if (runtime->hasFunction(0x16A9B0u)) {
        auto targetFn = runtime->lookupFunction(0x16A9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2431E8u; }
        if (ctx->pc != 0x2431E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AllDeleteDamage__12CActionCharaFv_0x16a9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2431E8u; }
        if (ctx->pc != 0x2431E8u) { return; }
    }
    ctx->pc = 0x2431E8u;
label_2431e8:
    // 0x2431e8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2431e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2431ec:
    // 0x2431ec: 0x8f859b6c  lw          $a1, -0x6494($gp)
    ctx->pc = 0x2431ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941548)));
label_2431f0:
    // 0x2431f0: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2431f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2431f4:
    // 0x2431f4: 0x320f809  jalr        $t9
label_2431f8:
    if (ctx->pc == 0x2431F8u) {
        ctx->pc = 0x2431F8u;
            // 0x2431f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2431FCu;
        goto label_2431fc;
    }
    ctx->pc = 0x2431F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2431FCu);
        ctx->pc = 0x2431F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2431F4u;
            // 0x2431f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2431FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2431FCu; }
            if (ctx->pc != 0x2431FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2431FCu;
label_2431fc:
    // 0x2431fc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2431fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_243200:
    // 0x243200: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x243200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
label_243204:
    // 0x243204: 0xac20f720  sw          $zero, -0x8E0($at)
    ctx->pc = 0x243204u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965024), GPR_U32(ctx, 0));
label_243208:
    // 0x243208: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x243208u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_24320c:
    // 0x24320c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x24320cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_243210:
    // 0x243210: 0x2442f720  addiu       $v0, $v0, -0x8E0
    ctx->pc = 0x243210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965024));
label_243214:
    // 0x243214: 0xac20fa40  sw          $zero, -0x5C0($at)
    ctx->pc = 0x243214u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965824), GPR_U32(ctx, 0));
label_243218:
    // 0x243218: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x243218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24321c:
    // 0x24321c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x24321cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_243220:
    // 0x243220: 0x24c6af78  addiu       $a2, $a2, -0x5088
    ctx->pc = 0x243220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946680));
label_243224:
    // 0x243224: 0xac20fa30  sw          $zero, -0x5D0($at)
    ctx->pc = 0x243224u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965808), GPR_U32(ctx, 0));
label_243228:
    // 0x243228: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x243228u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24322c:
    // 0x24322c: 0xae4207cc  sw          $v0, 0x7CC($s2)
    ctx->pc = 0x24322cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1996), GPR_U32(ctx, 2));
label_243230:
    // 0x243230: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x243230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_243234:
    // 0x243234: 0x842ad5fc  lh          $t2, -0x2A04($at)
    ctx->pc = 0x243234u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294956540)));
label_243238:
    // 0x243238: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x243238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24323c:
    // 0x24323c: 0x8f879b6c  lw          $a3, -0x6494($gp)
    ctx->pc = 0x24323cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941548)));
label_243240:
    // 0x243240: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x243240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_243244:
    // 0x243244: 0x8c25d910  lw          $a1, -0x26F0($at)
    ctx->pc = 0x243244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957328)));
label_243248:
    // 0x243248: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x243248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_24324c:
    // 0x24324c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x24324cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_243250:
    // 0x243250: 0x320f809  jalr        $t9
label_243254:
    if (ctx->pc == 0x243254u) {
        ctx->pc = 0x243254u;
            // 0x243254: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243258u;
        goto label_243258;
    }
    ctx->pc = 0x243250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x243258u);
        ctx->pc = 0x243254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243250u;
            // 0x243254: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x243258u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x243258u; }
            if (ctx->pc != 0x243258u) { return; }
        }
        }
    }
    ctx->pc = 0x243258u;
label_243258:
    // 0x243258: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x243258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_24325c:
    // 0x24325c: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x24325cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
label_243260:
    // 0x243260: 0xac20d034  sw          $zero, -0x2FCC($at)
    ctx->pc = 0x243260u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955060), GPR_U32(ctx, 0));
label_243264:
    // 0x243264: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x243264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_243268:
    // 0x243268: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x243268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_24326c:
    // 0x24326c: 0x24a5d010  addiu       $a1, $a1, -0x2FF0
    ctx->pc = 0x24326cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955024));
label_243270:
    // 0x243270: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x243270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_243274:
    // 0x243274: 0xc07a358  jal         func_1E8D60
label_243278:
    if (ctx->pc == 0x243278u) {
        ctx->pc = 0x243278u;
            // 0x243278: 0xac20d02c  sw          $zero, -0x2FD4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294955052), GPR_U32(ctx, 0));
        ctx->pc = 0x24327Cu;
        goto label_24327c;
    }
    ctx->pc = 0x243274u;
    SET_GPR_U32(ctx, 31, 0x24327Cu);
    ctx->pc = 0x243278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243274u;
            // 0x243278: 0xac20d02c  sw          $zero, -0x2FD4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294955052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8D60u;
    if (runtime->hasFunction(0x1E8D60u)) {
        auto targetFn = runtime->lookupFunction(0x1E8D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24327Cu; }
        if (ctx->pc != 0x24327Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSwordBlurEffect__FP11CCharacter2P9mgCMemoryi_0x1e8d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24327Cu; }
        if (ctx->pc != 0x24327Cu) { return; }
    }
    ctx->pc = 0x24327Cu;
label_24327c:
    // 0x24327c: 0x8f829b6c  lw          $v0, -0x6494($gp)
    ctx->pc = 0x24327cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941548)));
label_243280:
    // 0x243280: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x243280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_243284:
    // 0x243284: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x243284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_243288:
    // 0x243288: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x243288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
label_24328c:
    // 0x24328c: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x24328cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
label_243290:
    // 0x243290: 0x8425d5fc  lh          $a1, -0x2A04($at)
    ctx->pc = 0x243290u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294956540)));
label_243294:
    // 0x243294: 0xc04bc54  jal         func_12F150
label_243298:
    if (ctx->pc == 0x243298u) {
        ctx->pc = 0x243298u;
            // 0x243298: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->pc = 0x24329Cu;
        goto label_24329c;
    }
    ctx->pc = 0x243294u;
    SET_GPR_U32(ctx, 31, 0x24329Cu);
    ctx->pc = 0x243298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243294u;
            // 0x243298: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F150u;
    if (runtime->hasFunction(0x12F150u)) {
        auto targetFn = runtime->lookupFunction(0x12F150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24329Cu; }
        if (ctx->pc != 0x24329Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteTexAnime__17mgCTextureManagerFi_0x12f150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24329Cu; }
        if (ctx->pc != 0x24329Cu) { return; }
    }
    ctx->pc = 0x24329Cu;
label_24329c:
    // 0x24329c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24329cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2432a0:
    // 0x2432a0: 0x8f829b6c  lw          $v0, -0x6494($gp)
    ctx->pc = 0x2432a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941548)));
label_2432a4:
    // 0x2432a4: 0x8429d5fc  lh          $t1, -0x2A04($at)
    ctx->pc = 0x2432a4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294956540)));
label_2432a8:
    // 0x2432a8: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2432a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_2432ac:
    // 0x2432ac: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2432acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_2432b0:
    // 0x2432b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2432b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2432b4:
    // 0x2432b4: 0x24c6af78  addiu       $a2, $a2, -0x5088
    ctx->pc = 0x2432b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946680));
label_2432b8:
    // 0x2432b8: 0x24e7acc8  addiu       $a3, $a3, -0x5338
    ctx->pc = 0x2432b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945992));
label_2432bc:
    // 0x2432bc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2432bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2432c0:
    // 0x2432c0: 0x8c25d914  lw          $a1, -0x26EC($at)
    ctx->pc = 0x2432c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957332)));
label_2432c4:
    // 0x2432c4: 0xc05d470  jal         func_1751C0
label_2432c8:
    if (ctx->pc == 0x2432C8u) {
        ctx->pc = 0x2432C8u;
            // 0x2432c8: 0x24480030  addiu       $t0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->pc = 0x2432CCu;
        goto label_2432cc;
    }
    ctx->pc = 0x2432C4u;
    SET_GPR_U32(ctx, 31, 0x2432CCu);
    ctx->pc = 0x2432C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2432C4u;
            // 0x2432c8: 0x24480030  addiu       $t0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1751C0u;
    if (runtime->hasFunction(0x1751C0u)) {
        auto targetFn = runtime->lookupFunction(0x1751C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2432CCu; }
        if (ctx->pc != 0x2432CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSkin__11CCharacter2FPUiPcPcP9mgCMemoryi_0x1751c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2432CCu; }
        if (ctx->pc != 0x2432CCu) { return; }
    }
    ctx->pc = 0x2432CCu;
label_2432cc:
    // 0x2432cc: 0x8f829b6c  lw          $v0, -0x6494($gp)
    ctx->pc = 0x2432ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941548)));
label_2432d0:
    // 0x2432d0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2432d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_2432d4:
    // 0x2432d4: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2432d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_2432d8:
    // 0x2432d8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2432d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2432dc:
    // 0x2432dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2432dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2432e0:
    // 0x2432e0: 0x24c6af78  addiu       $a2, $a2, -0x5088
    ctx->pc = 0x2432e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946680));
label_2432e4:
    // 0x2432e4: 0x24e7b0a8  addiu       $a3, $a3, -0x4F58
    ctx->pc = 0x2432e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946984));
label_2432e8:
    // 0x2432e8: 0xac400114  sw          $zero, 0x114($v0)
    ctx->pc = 0x2432e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 0));
label_2432ec:
    // 0x2432ec: 0xac40010c  sw          $zero, 0x10C($v0)
    ctx->pc = 0x2432ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 268), GPR_U32(ctx, 0));
label_2432f0:
    // 0x2432f0: 0x8429d5fc  lh          $t1, -0x2A04($at)
    ctx->pc = 0x2432f0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294956540)));
label_2432f4:
    // 0x2432f4: 0x8f829b6c  lw          $v0, -0x6494($gp)
    ctx->pc = 0x2432f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941548)));
label_2432f8:
    // 0x2432f8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2432f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2432fc:
    // 0x2432fc: 0x8c25d918  lw          $a1, -0x26E8($at)
    ctx->pc = 0x2432fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957336)));
label_243300:
    // 0x243300: 0xc05d470  jal         func_1751C0
label_243304:
    if (ctx->pc == 0x243304u) {
        ctx->pc = 0x243304u;
            // 0x243304: 0x244800f0  addiu       $t0, $v0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
        ctx->pc = 0x243308u;
        goto label_243308;
    }
    ctx->pc = 0x243300u;
    SET_GPR_U32(ctx, 31, 0x243308u);
    ctx->pc = 0x243304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243300u;
            // 0x243304: 0x244800f0  addiu       $t0, $v0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1751C0u;
    if (runtime->hasFunction(0x1751C0u)) {
        auto targetFn = runtime->lookupFunction(0x1751C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243308u; }
        if (ctx->pc != 0x243308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSkin__11CCharacter2FPUiPcPcP9mgCMemoryi_0x1751c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243308u; }
        if (ctx->pc != 0x243308u) { return; }
    }
    ctx->pc = 0x243308u;
label_243308:
    // 0x243308: 0xc065af8  jal         func_196BE0
label_24330c:
    if (ctx->pc == 0x24330Cu) {
        ctx->pc = 0x243310u;
        goto label_243310;
    }
    ctx->pc = 0x243308u;
    SET_GPR_U32(ctx, 31, 0x243310u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243310u; }
        if (ctx->pc != 0x243310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243310u; }
        if (ctx->pc != 0x243310u) { return; }
    }
    ctx->pc = 0x243310u;
label_243310:
    // 0x243310: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x243310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_243314:
    // 0x243314: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x243314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_243318:
    // 0x243318: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x243318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24331c:
    // 0x24331c: 0xc07a750  jal         func_1E9D40
label_243320:
    if (ctx->pc == 0x243320u) {
        ctx->pc = 0x243320u;
            // 0x243320: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243324u;
        goto label_243324;
    }
    ctx->pc = 0x24331Cu;
    SET_GPR_U32(ctx, 31, 0x243324u);
    ctx->pc = 0x243320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24331Cu;
            // 0x243320: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9D40u;
    if (runtime->hasFunction(0x1E9D40u)) {
        auto targetFn = runtime->lookupFunction(0x1E9D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243324u; }
        if (ctx->pc != 0x243324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetupUnitMan__FP6CSceneP16CUserDataManageriP14ROBO_INFO_DATA_0x1e9d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243324u; }
        if (ctx->pc != 0x243324u) { return; }
    }
    ctx->pc = 0x243324u;
label_243324:
    // 0x243324: 0x8f828ddc  lw          $v0, -0x7224($gp)
    ctx->pc = 0x243324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_243328:
    // 0x243328: 0xae4207dc  sw          $v0, 0x7DC($s2)
    ctx->pc = 0x243328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2012), GPR_U32(ctx, 2));
label_24332c:
    // 0x24332c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24332cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_243330:
    // 0x243330: 0xc08ff70  jal         func_23FDC0
label_243334:
    if (ctx->pc == 0x243334u) {
        ctx->pc = 0x243334u;
            // 0x243334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243338u;
        goto label_243338;
    }
    ctx->pc = 0x243330u;
    SET_GPR_U32(ctx, 31, 0x243338u);
    ctx->pc = 0x243334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243330u;
            // 0x243334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23FDC0u;
    if (runtime->hasFunction(0x23FDC0u)) {
        auto targetFn = runtime->lookupFunction(0x23FDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243338u; }
        if (ctx->pc != 0x243338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEquipListNo__13CMenuItemInfoFi_0x23fdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243338u; }
        if (ctx->pc != 0x243338u) { return; }
    }
    ctx->pc = 0x243338u;
label_243338:
    // 0x243338: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x243338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24333c:
    // 0x24333c: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_243340:
    if (ctx->pc == 0x243340u) {
        ctx->pc = 0x243340u;
            // 0x243340: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243344u;
        goto label_243344;
    }
    ctx->pc = 0x24333Cu;
    {
        const bool branch_taken_0x24333c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x243340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24333Cu;
            // 0x243340: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24333c) {
            ctx->pc = 0x243358u;
            goto label_243358;
        }
    }
    ctx->pc = 0x243344u;
label_243344:
    // 0x243344: 0xc090c40  jal         func_243100
label_243348:
    if (ctx->pc == 0x243348u) {
        ctx->pc = 0x24334Cu;
        goto label_24334c;
    }
    ctx->pc = 0x243344u;
    SET_GPR_U32(ctx, 31, 0x24334Cu);
    ctx->pc = 0x243100u;
    if (runtime->hasFunction(0x243100u)) {
        auto targetFn = runtime->lookupFunction(0x243100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24334Cu; }
        if (ctx->pc != 0x24334Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCharaNo__13CMenuItemInfoFv_0x243100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24334Cu; }
        if (ctx->pc != 0x24334Cu) { return; }
    }
    ctx->pc = 0x24334Cu;
label_24334c:
    // 0x24334c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24334cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_243350:
    // 0x243350: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
label_243354:
    if (ctx->pc == 0x243354u) {
        ctx->pc = 0x243358u;
        goto label_243358;
    }
    ctx->pc = 0x243350u;
    {
        const bool branch_taken_0x243350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x243350) {
            ctx->pc = 0x2433CCu;
            goto label_2433cc;
        }
    }
    ctx->pc = 0x243358u;
label_243358:
    // 0x243358: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x243358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_24335c:
    // 0x24335c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_243360:
    if (ctx->pc == 0x243360u) {
        ctx->pc = 0x243364u;
        goto label_243364;
    }
    ctx->pc = 0x24335Cu;
    {
        const bool branch_taken_0x24335c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24335c) {
            ctx->pc = 0x2433CCu;
            goto label_2433cc;
        }
    }
    ctx->pc = 0x243364u;
label_243364:
    // 0x243364: 0xc08ca88  jal         func_232A20
label_243368:
    if (ctx->pc == 0x243368u) {
        ctx->pc = 0x24336Cu;
        goto label_24336c;
    }
    ctx->pc = 0x243364u;
    SET_GPR_U32(ctx, 31, 0x24336Cu);
    ctx->pc = 0x232A20u;
    if (runtime->hasFunction(0x232A20u)) {
        auto targetFn = runtime->lookupFunction(0x232A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24336Cu; }
        if (ctx->pc != 0x24336Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuLoopType__Fv_0x232a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24336Cu; }
        if (ctx->pc != 0x24336Cu) { return; }
    }
    ctx->pc = 0x24336Cu;
label_24336c:
    // 0x24336c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24336cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243370:
    // 0x243370: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
label_243374:
    if (ctx->pc == 0x243374u) {
        ctx->pc = 0x243378u;
        goto label_243378;
    }
    ctx->pc = 0x243370u;
    {
        const bool branch_taken_0x243370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x243370) {
            ctx->pc = 0x2433CCu;
            goto label_2433cc;
        }
    }
    ctx->pc = 0x243378u;
label_243378:
    // 0x243378: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_24337c:
    if (ctx->pc == 0x24337Cu) {
        ctx->pc = 0x24337Cu;
            // 0x24337c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243380u;
        goto label_243380;
    }
    ctx->pc = 0x243378u;
    {
        const bool branch_taken_0x243378 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24337Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243378u;
            // 0x24337c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243378) {
            ctx->pc = 0x243394u;
            goto label_243394;
        }
    }
    ctx->pc = 0x243380u;
label_243380:
    // 0x243380: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_243384:
    if (ctx->pc == 0x243384u) {
        ctx->pc = 0x243384u;
            // 0x243384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243388u;
        goto label_243388;
    }
    ctx->pc = 0x243380u;
    {
        const bool branch_taken_0x243380 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x243384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243380u;
            // 0x243384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243380) {
            ctx->pc = 0x243390u;
            goto label_243390;
        }
    }
    ctx->pc = 0x243388u;
label_243388:
    // 0x243388: 0xc05c458  jal         func_171160
label_24338c:
    if (ctx->pc == 0x24338Cu) {
        ctx->pc = 0x243390u;
        goto label_243390;
    }
    ctx->pc = 0x243388u;
    SET_GPR_U32(ctx, 31, 0x243390u);
    ctx->pc = 0x171160u;
    if (runtime->hasFunction(0x171160u)) {
        auto targetFn = runtime->lookupFunction(0x171160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243390u; }
        if (ctx->pc != 0x243390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitScript__12CActionCharaFv_0x171160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243390u; }
        if (ctx->pc != 0x243390u) { return; }
    }
    ctx->pc = 0x243390u;
label_243390:
    // 0x243390: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x243390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_243394:
    // 0x243394: 0xc090c40  jal         func_243100
label_243398:
    if (ctx->pc == 0x243398u) {
        ctx->pc = 0x24339Cu;
        goto label_24339c;
    }
    ctx->pc = 0x243394u;
    SET_GPR_U32(ctx, 31, 0x24339Cu);
    ctx->pc = 0x243100u;
    if (runtime->hasFunction(0x243100u)) {
        auto targetFn = runtime->lookupFunction(0x243100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24339Cu; }
        if (ctx->pc != 0x24339Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCharaNo__13CMenuItemInfoFv_0x243100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24339Cu; }
        if (ctx->pc != 0x24339Cu) { return; }
    }
    ctx->pc = 0x24339Cu;
label_24339c:
    // 0x24339c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24339cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2433a0:
    // 0x2433a0: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_2433a4:
    if (ctx->pc == 0x2433A4u) {
        ctx->pc = 0x2433A8u;
        goto label_2433a8;
    }
    ctx->pc = 0x2433A0u;
    {
        const bool branch_taken_0x2433a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2433a0) {
            ctx->pc = 0x2433CCu;
            goto label_2433cc;
        }
    }
    ctx->pc = 0x2433A8u;
label_2433a8:
    // 0x2433a8: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2433a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2433ac:
    // 0x2433ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2433acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2433b0:
    // 0x2433b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2433b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2433b4:
    // 0x2433b4: 0xc0ae808  jal         func_2BA020
label_2433b8:
    if (ctx->pc == 0x2433B8u) {
        ctx->pc = 0x2433B8u;
            // 0x2433b8: 0xaf809bdc  sw          $zero, -0x6424($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941660), GPR_U32(ctx, 0));
        ctx->pc = 0x2433BCu;
        goto label_2433bc;
    }
    ctx->pc = 0x2433B4u;
    SET_GPR_U32(ctx, 31, 0x2433BCu);
    ctx->pc = 0x2433B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2433B4u;
            // 0x2433b8: 0xaf809bdc  sw          $zero, -0x6424($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941660), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA020u;
    if (runtime->hasFunction(0x2BA020u)) {
        auto targetFn = runtime->lookupFunction(0x2BA020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2433BCu; }
        if (ctx->pc != 0x2433BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCharaSoundEnter__FP6CSceneP12CActionCharai_0x2ba020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2433BCu; }
        if (ctx->pc != 0x2433BCu) { return; }
    }
    ctx->pc = 0x2433BCu;
label_2433bc:
    // 0x2433bc: 0x8f8296bc  lw          $v0, -0x6944($gp)
    ctx->pc = 0x2433bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940348)));
label_2433c0:
    // 0x2433c0: 0xae020588  sw          $v0, 0x588($s0)
    ctx->pc = 0x2433c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1416), GPR_U32(ctx, 2));
label_2433c4:
    // 0x2433c4: 0x8f828ddc  lw          $v0, -0x7224($gp)
    ctx->pc = 0x2433c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_2433c8:
    // 0x2433c8: 0xae0207dc  sw          $v0, 0x7DC($s0)
    ctx->pc = 0x2433c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2012), GPR_U32(ctx, 2));
label_2433cc:
    // 0x2433cc: 0x8783958c  lh          $v1, -0x6A74($gp)
    ctx->pc = 0x2433ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940044)));
label_2433d0:
    // 0x2433d0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2433d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2433d4:
    // 0x2433d4: 0x8f8294b0  lw          $v0, -0x6B50($gp)
    ctx->pc = 0x2433d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939824)));
label_2433d8:
    // 0x2433d8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x2433d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_2433dc:
    // 0x2433dc: 0x87839588  lh          $v1, -0x6A78($gp)
    ctx->pc = 0x2433dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940040)));
label_2433e0:
    // 0x2433e0: 0x8f8294b0  lw          $v0, -0x6B50($gp)
    ctx->pc = 0x2433e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939824)));
label_2433e4:
    // 0x2433e4: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x2433e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
label_2433e8:
    // 0x2433e8: 0x8f8294b0  lw          $v0, -0x6B50($gp)
    ctx->pc = 0x2433e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939824)));
label_2433ec:
    // 0x2433ec: 0xa4400006  sh          $zero, 0x6($v0)
    ctx->pc = 0x2433ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
label_2433f0:
    // 0x2433f0: 0x8f8294b0  lw          $v0, -0x6B50($gp)
    ctx->pc = 0x2433f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939824)));
label_2433f4:
    // 0x2433f4: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x2433f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
label_2433f8:
    // 0x2433f8: 0x86630014  lh          $v1, 0x14($s3)
    ctx->pc = 0x2433f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
label_2433fc:
    // 0x2433fc: 0x8f8294b0  lw          $v0, -0x6B50($gp)
    ctx->pc = 0x2433fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939824)));
label_243400:
    // 0x243400: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x243400u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
label_243404:
    // 0x243404: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x243404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_243408:
    // 0x243408: 0x8f8294b0  lw          $v0, -0x6B50($gp)
    ctx->pc = 0x243408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939824)));
label_24340c:
    // 0x24340c: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x24340cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_243410:
    // 0x243410: 0xa443000a  sh          $v1, 0xA($v0)
    ctx->pc = 0x243410u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
label_243414:
    // 0x243414: 0x8c24d628  lw          $a0, -0x29D8($at)
    ctx->pc = 0x243414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956584)));
label_243418:
    // 0x243418: 0xc08da84  jal         func_236A10
label_24341c:
    if (ctx->pc == 0x24341Cu) {
        ctx->pc = 0x24341Cu;
            // 0x24341c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x243420u;
        goto label_243420;
    }
    ctx->pc = 0x243418u;
    SET_GPR_U32(ctx, 31, 0x243420u);
    ctx->pc = 0x24341Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243418u;
            // 0x24341c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x236A10u;
    if (runtime->hasFunction(0x236A10u)) {
        auto targetFn = runtime->lookupFunction(0x236A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243420u; }
        if (ctx->pc != 0x243420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyActiveItemAndWeapon__Fii_0x236a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243420u; }
        if (ctx->pc != 0x243420u) { return; }
    }
    ctx->pc = 0x243420u;
label_243420:
    // 0x243420: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x243420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_243424:
    // 0x243424: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x243424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_243428:
    // 0x243428: 0xc08e7cc  jal         func_239F30
label_24342c:
    if (ctx->pc == 0x24342Cu) {
        ctx->pc = 0x24342Cu;
            // 0x24342c: 0x24a5b0b0  addiu       $a1, $a1, -0x4F50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946992));
        ctx->pc = 0x243430u;
        goto label_243430;
    }
    ctx->pc = 0x243428u;
    SET_GPR_U32(ctx, 31, 0x243430u);
    ctx->pc = 0x24342Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243428u;
            // 0x24342c: 0x24a5b0b0  addiu       $a1, $a1, -0x4F50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243430u; }
        if (ctx->pc != 0x243430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243430u; }
        if (ctx->pc != 0x243430u) { return; }
    }
    ctx->pc = 0x243430u;
label_243430:
    // 0x243430: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x243430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_243434:
    // 0x243434: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x243434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_243438:
    // 0x243438: 0xc08aa38  jal         func_22A8E0
label_24343c:
    if (ctx->pc == 0x24343Cu) {
        ctx->pc = 0x24343Cu;
            // 0x24343c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x243440u;
        goto label_243440;
    }
    ctx->pc = 0x243438u;
    SET_GPR_U32(ctx, 31, 0x243440u);
    ctx->pc = 0x24343Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243438u;
            // 0x24343c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A8E0u;
    if (runtime->hasFunction(0x22A8E0u)) {
        auto targetFn = runtime->lookupFunction(0x22A8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243440u; }
        if (ctx->pc != 0x243440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TexGetInfoClear__14CPosDataManageFii_0x22a8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243440u; }
        if (ctx->pc != 0x243440u) { return; }
    }
    ctx->pc = 0x243440u;
label_243440:
    // 0x243440: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x243440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_243444:
    // 0x243444: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x243444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_243448:
    // 0x243448: 0xc08aab0  jal         func_22AAC0
label_24344c:
    if (ctx->pc == 0x24344Cu) {
        ctx->pc = 0x24344Cu;
            // 0x24344c: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x243450u;
        goto label_243450;
    }
    ctx->pc = 0x243448u;
    SET_GPR_U32(ctx, 31, 0x243450u);
    ctx->pc = 0x24344Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243448u;
            // 0x24344c: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AAC0u;
    if (runtime->hasFunction(0x22AAC0u)) {
        auto targetFn = runtime->lookupFunction(0x22AAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243450u; }
        if (ctx->pc != 0x243450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EtcTblClear__14CPosDataManageFii_0x22aac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243450u; }
        if (ctx->pc != 0x243450u) { return; }
    }
    ctx->pc = 0x243450u;
label_243450:
    // 0x243450: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x243450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_243454:
    // 0x243454: 0xc065c30  jal         func_1970C0
label_243458:
    if (ctx->pc == 0x243458u) {
        ctx->pc = 0x243458u;
            // 0x243458: 0x244400c0  addiu       $a0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x24345Cu;
        goto label_24345c;
    }
    ctx->pc = 0x243454u;
    SET_GPR_U32(ctx, 31, 0x24345Cu);
    ctx->pc = 0x243458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243454u;
            // 0x243458: 0x244400c0  addiu       $a0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24345Cu; }
        if (ctx->pc != 0x24345Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24345Cu; }
        if (ctx->pc != 0x24345Cu) { return; }
    }
    ctx->pc = 0x24345Cu;
label_24345c:
    // 0x24345c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24345cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243460:
    // 0x243460: 0xc08900c  jal         func_224030
label_243464:
    if (ctx->pc == 0x243464u) {
        ctx->pc = 0x243464u;
            // 0x243464: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243468u;
        goto label_243468;
    }
    ctx->pc = 0x243460u;
    SET_GPR_U32(ctx, 31, 0x243468u);
    ctx->pc = 0x243464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243460u;
            // 0x243464: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224030u;
    if (runtime->hasFunction(0x224030u)) {
        auto targetFn = runtime->lookupFunction(0x224030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243468u; }
        if (ctx->pc != 0x243468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainFrameModeSet__Fii_0x224030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243468u; }
        if (ctx->pc != 0x243468u) { return; }
    }
    ctx->pc = 0x243468u;
label_243468:
    // 0x243468: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x243468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24346c:
    // 0x24346c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24346cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_243470:
    // 0x243470: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x243470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_243474:
    // 0x243474: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x243474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_243478:
    // 0x243478: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x243478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24347c:
    // 0x24347c: 0x3e00008  jr          $ra
label_243480:
    if (ctx->pc == 0x243480u) {
        ctx->pc = 0x243480u;
            // 0x243480: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x243484u;
        goto label_fallthrough_0x24347c;
    }
    ctx->pc = 0x24347Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24347Cu;
            // 0x243480: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x24347c:
    ctx->pc = 0x243484u;
}
