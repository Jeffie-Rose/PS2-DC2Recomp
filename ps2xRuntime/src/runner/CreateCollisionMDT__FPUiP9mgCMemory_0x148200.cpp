#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateCollisionMDT__FPUiP9mgCMemory
// Address: 0x148200 - 0x1485a0
void CreateCollisionMDT__FPUiP9mgCMemory_0x148200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateCollisionMDT__FPUiP9mgCMemory_0x148200");
#endif

    switch (ctx->pc) {
        case 0x148200u: goto label_148200;
        case 0x148204u: goto label_148204;
        case 0x148208u: goto label_148208;
        case 0x14820cu: goto label_14820c;
        case 0x148210u: goto label_148210;
        case 0x148214u: goto label_148214;
        case 0x148218u: goto label_148218;
        case 0x14821cu: goto label_14821c;
        case 0x148220u: goto label_148220;
        case 0x148224u: goto label_148224;
        case 0x148228u: goto label_148228;
        case 0x14822cu: goto label_14822c;
        case 0x148230u: goto label_148230;
        case 0x148234u: goto label_148234;
        case 0x148238u: goto label_148238;
        case 0x14823cu: goto label_14823c;
        case 0x148240u: goto label_148240;
        case 0x148244u: goto label_148244;
        case 0x148248u: goto label_148248;
        case 0x14824cu: goto label_14824c;
        case 0x148250u: goto label_148250;
        case 0x148254u: goto label_148254;
        case 0x148258u: goto label_148258;
        case 0x14825cu: goto label_14825c;
        case 0x148260u: goto label_148260;
        case 0x148264u: goto label_148264;
        case 0x148268u: goto label_148268;
        case 0x14826cu: goto label_14826c;
        case 0x148270u: goto label_148270;
        case 0x148274u: goto label_148274;
        case 0x148278u: goto label_148278;
        case 0x14827cu: goto label_14827c;
        case 0x148280u: goto label_148280;
        case 0x148284u: goto label_148284;
        case 0x148288u: goto label_148288;
        case 0x14828cu: goto label_14828c;
        case 0x148290u: goto label_148290;
        case 0x148294u: goto label_148294;
        case 0x148298u: goto label_148298;
        case 0x14829cu: goto label_14829c;
        case 0x1482a0u: goto label_1482a0;
        case 0x1482a4u: goto label_1482a4;
        case 0x1482a8u: goto label_1482a8;
        case 0x1482acu: goto label_1482ac;
        case 0x1482b0u: goto label_1482b0;
        case 0x1482b4u: goto label_1482b4;
        case 0x1482b8u: goto label_1482b8;
        case 0x1482bcu: goto label_1482bc;
        case 0x1482c0u: goto label_1482c0;
        case 0x1482c4u: goto label_1482c4;
        case 0x1482c8u: goto label_1482c8;
        case 0x1482ccu: goto label_1482cc;
        case 0x1482d0u: goto label_1482d0;
        case 0x1482d4u: goto label_1482d4;
        case 0x1482d8u: goto label_1482d8;
        case 0x1482dcu: goto label_1482dc;
        case 0x1482e0u: goto label_1482e0;
        case 0x1482e4u: goto label_1482e4;
        case 0x1482e8u: goto label_1482e8;
        case 0x1482ecu: goto label_1482ec;
        case 0x1482f0u: goto label_1482f0;
        case 0x1482f4u: goto label_1482f4;
        case 0x1482f8u: goto label_1482f8;
        case 0x1482fcu: goto label_1482fc;
        case 0x148300u: goto label_148300;
        case 0x148304u: goto label_148304;
        case 0x148308u: goto label_148308;
        case 0x14830cu: goto label_14830c;
        case 0x148310u: goto label_148310;
        case 0x148314u: goto label_148314;
        case 0x148318u: goto label_148318;
        case 0x14831cu: goto label_14831c;
        case 0x148320u: goto label_148320;
        case 0x148324u: goto label_148324;
        case 0x148328u: goto label_148328;
        case 0x14832cu: goto label_14832c;
        case 0x148330u: goto label_148330;
        case 0x148334u: goto label_148334;
        case 0x148338u: goto label_148338;
        case 0x14833cu: goto label_14833c;
        case 0x148340u: goto label_148340;
        case 0x148344u: goto label_148344;
        case 0x148348u: goto label_148348;
        case 0x14834cu: goto label_14834c;
        case 0x148350u: goto label_148350;
        case 0x148354u: goto label_148354;
        case 0x148358u: goto label_148358;
        case 0x14835cu: goto label_14835c;
        case 0x148360u: goto label_148360;
        case 0x148364u: goto label_148364;
        case 0x148368u: goto label_148368;
        case 0x14836cu: goto label_14836c;
        case 0x148370u: goto label_148370;
        case 0x148374u: goto label_148374;
        case 0x148378u: goto label_148378;
        case 0x14837cu: goto label_14837c;
        case 0x148380u: goto label_148380;
        case 0x148384u: goto label_148384;
        case 0x148388u: goto label_148388;
        case 0x14838cu: goto label_14838c;
        case 0x148390u: goto label_148390;
        case 0x148394u: goto label_148394;
        case 0x148398u: goto label_148398;
        case 0x14839cu: goto label_14839c;
        case 0x1483a0u: goto label_1483a0;
        case 0x1483a4u: goto label_1483a4;
        case 0x1483a8u: goto label_1483a8;
        case 0x1483acu: goto label_1483ac;
        case 0x1483b0u: goto label_1483b0;
        case 0x1483b4u: goto label_1483b4;
        case 0x1483b8u: goto label_1483b8;
        case 0x1483bcu: goto label_1483bc;
        case 0x1483c0u: goto label_1483c0;
        case 0x1483c4u: goto label_1483c4;
        case 0x1483c8u: goto label_1483c8;
        case 0x1483ccu: goto label_1483cc;
        case 0x1483d0u: goto label_1483d0;
        case 0x1483d4u: goto label_1483d4;
        case 0x1483d8u: goto label_1483d8;
        case 0x1483dcu: goto label_1483dc;
        case 0x1483e0u: goto label_1483e0;
        case 0x1483e4u: goto label_1483e4;
        case 0x1483e8u: goto label_1483e8;
        case 0x1483ecu: goto label_1483ec;
        case 0x1483f0u: goto label_1483f0;
        case 0x1483f4u: goto label_1483f4;
        case 0x1483f8u: goto label_1483f8;
        case 0x1483fcu: goto label_1483fc;
        case 0x148400u: goto label_148400;
        case 0x148404u: goto label_148404;
        case 0x148408u: goto label_148408;
        case 0x14840cu: goto label_14840c;
        case 0x148410u: goto label_148410;
        case 0x148414u: goto label_148414;
        case 0x148418u: goto label_148418;
        case 0x14841cu: goto label_14841c;
        case 0x148420u: goto label_148420;
        case 0x148424u: goto label_148424;
        case 0x148428u: goto label_148428;
        case 0x14842cu: goto label_14842c;
        case 0x148430u: goto label_148430;
        case 0x148434u: goto label_148434;
        case 0x148438u: goto label_148438;
        case 0x14843cu: goto label_14843c;
        case 0x148440u: goto label_148440;
        case 0x148444u: goto label_148444;
        case 0x148448u: goto label_148448;
        case 0x14844cu: goto label_14844c;
        case 0x148450u: goto label_148450;
        case 0x148454u: goto label_148454;
        case 0x148458u: goto label_148458;
        case 0x14845cu: goto label_14845c;
        case 0x148460u: goto label_148460;
        case 0x148464u: goto label_148464;
        case 0x148468u: goto label_148468;
        case 0x14846cu: goto label_14846c;
        case 0x148470u: goto label_148470;
        case 0x148474u: goto label_148474;
        case 0x148478u: goto label_148478;
        case 0x14847cu: goto label_14847c;
        case 0x148480u: goto label_148480;
        case 0x148484u: goto label_148484;
        case 0x148488u: goto label_148488;
        case 0x14848cu: goto label_14848c;
        case 0x148490u: goto label_148490;
        case 0x148494u: goto label_148494;
        case 0x148498u: goto label_148498;
        case 0x14849cu: goto label_14849c;
        case 0x1484a0u: goto label_1484a0;
        case 0x1484a4u: goto label_1484a4;
        case 0x1484a8u: goto label_1484a8;
        case 0x1484acu: goto label_1484ac;
        case 0x1484b0u: goto label_1484b0;
        case 0x1484b4u: goto label_1484b4;
        case 0x1484b8u: goto label_1484b8;
        case 0x1484bcu: goto label_1484bc;
        case 0x1484c0u: goto label_1484c0;
        case 0x1484c4u: goto label_1484c4;
        case 0x1484c8u: goto label_1484c8;
        case 0x1484ccu: goto label_1484cc;
        case 0x1484d0u: goto label_1484d0;
        case 0x1484d4u: goto label_1484d4;
        case 0x1484d8u: goto label_1484d8;
        case 0x1484dcu: goto label_1484dc;
        case 0x1484e0u: goto label_1484e0;
        case 0x1484e4u: goto label_1484e4;
        case 0x1484e8u: goto label_1484e8;
        case 0x1484ecu: goto label_1484ec;
        case 0x1484f0u: goto label_1484f0;
        case 0x1484f4u: goto label_1484f4;
        case 0x1484f8u: goto label_1484f8;
        case 0x1484fcu: goto label_1484fc;
        case 0x148500u: goto label_148500;
        case 0x148504u: goto label_148504;
        case 0x148508u: goto label_148508;
        case 0x14850cu: goto label_14850c;
        case 0x148510u: goto label_148510;
        case 0x148514u: goto label_148514;
        case 0x148518u: goto label_148518;
        case 0x14851cu: goto label_14851c;
        case 0x148520u: goto label_148520;
        case 0x148524u: goto label_148524;
        case 0x148528u: goto label_148528;
        case 0x14852cu: goto label_14852c;
        case 0x148530u: goto label_148530;
        case 0x148534u: goto label_148534;
        case 0x148538u: goto label_148538;
        case 0x14853cu: goto label_14853c;
        case 0x148540u: goto label_148540;
        case 0x148544u: goto label_148544;
        case 0x148548u: goto label_148548;
        case 0x14854cu: goto label_14854c;
        case 0x148550u: goto label_148550;
        case 0x148554u: goto label_148554;
        case 0x148558u: goto label_148558;
        case 0x14855cu: goto label_14855c;
        case 0x148560u: goto label_148560;
        case 0x148564u: goto label_148564;
        case 0x148568u: goto label_148568;
        case 0x14856cu: goto label_14856c;
        case 0x148570u: goto label_148570;
        case 0x148574u: goto label_148574;
        case 0x148578u: goto label_148578;
        case 0x14857cu: goto label_14857c;
        case 0x148580u: goto label_148580;
        case 0x148584u: goto label_148584;
        case 0x148588u: goto label_148588;
        case 0x14858cu: goto label_14858c;
        case 0x148590u: goto label_148590;
        case 0x148594u: goto label_148594;
        case 0x148598u: goto label_148598;
        case 0x14859cu: goto label_14859c;
        default: break;
    }

    ctx->pc = 0x148200u;

label_148200:
    // 0x148200: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x148200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_148204:
    // 0x148204: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x148204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_148208:
    // 0x148208: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x148208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_14820c:
    // 0x14820c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14820cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_148210:
    // 0x148210: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x148210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_148214:
    // 0x148214: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x148214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_148218:
    // 0x148218: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x148218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_14821c:
    // 0x14821c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14821cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_148220:
    // 0x148220: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x148220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_148224:
    // 0x148224: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x148224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_148228:
    // 0x148228: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x148228u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14822c:
    // 0x14822c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14822cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_148230:
    // 0x148230: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x148230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_148234:
    // 0x148234: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x148234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_148238:
    // 0x148238: 0xc04e748  jal         func_139D20
label_14823c:
    if (ctx->pc == 0x14823Cu) {
        ctx->pc = 0x14823Cu;
            // 0x14823c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x148240u;
        goto label_148240;
    }
    ctx->pc = 0x148238u;
    SET_GPR_U32(ctx, 31, 0x148240u);
    ctx->pc = 0x14823Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148238u;
            // 0x14823c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148240u; }
        if (ctx->pc != 0x148240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148240u; }
        if (ctx->pc != 0x148240u) { return; }
    }
    ctx->pc = 0x148240u;
label_148240:
    // 0x148240: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x148240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_148244:
    // 0x148244: 0xc04e638  jal         func_1398E0
label_148248:
    if (ctx->pc == 0x148248u) {
        ctx->pc = 0x148248u;
            // 0x148248: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14824Cu;
        goto label_14824c;
    }
    ctx->pc = 0x148244u;
    SET_GPR_U32(ctx, 31, 0x14824Cu);
    ctx->pc = 0x148248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148244u;
            // 0x148248: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14824Cu; }
        if (ctx->pc != 0x14824Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14824Cu; }
        if (ctx->pc != 0x14824Cu) { return; }
    }
    ctx->pc = 0x14824Cu;
label_14824c:
    // 0x14824c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_148250:
    if (ctx->pc == 0x148250u) {
        ctx->pc = 0x148250u;
            // 0x148250: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->pc = 0x148254u;
        goto label_148254;
    }
    ctx->pc = 0x14824Cu;
    {
        const bool branch_taken_0x14824c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14824Cu;
            // 0x148250: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14824c) {
            ctx->pc = 0x1482B4u;
            goto label_1482b4;
        }
    }
    ctx->pc = 0x148254u;
label_148254:
    // 0x148254: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x148254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_148258:
    // 0x148258: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x148258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_14825c:
    // 0x14825c: 0x24635270  addiu       $v1, $v1, 0x5270
    ctx->pc = 0x14825cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21104));
label_148260:
    // 0x148260: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x148260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_148264:
    // 0x148264: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x148264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_148268:
    // 0x148268: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x148268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14826c:
    // 0x14826c: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x14826cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_148270:
    // 0x148270: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x148270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_148274:
    // 0x148274: 0xc049c86  jal         func_127218
label_148278:
    if (ctx->pc == 0x148278u) {
        ctx->pc = 0x148278u;
            // 0x148278: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x14827Cu;
        goto label_14827c;
    }
    ctx->pc = 0x148274u;
    SET_GPR_U32(ctx, 31, 0x14827Cu);
    ctx->pc = 0x148278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148274u;
            // 0x148278: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14827Cu; }
        if (ctx->pc != 0x14827Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14827Cu; }
        if (ctx->pc != 0x14827Cu) { return; }
    }
    ctx->pc = 0x14827Cu;
label_14827c:
    // 0x14827c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x14827cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_148280:
    // 0x148280: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x148280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_148284:
    // 0x148284: 0x24635240  addiu       $v1, $v1, 0x5240
    ctx->pc = 0x148284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21056));
label_148288:
    // 0x148288: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x148288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14828c:
    // 0x14828c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x14828cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_148290:
    // 0x148290: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x148290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_148294:
    // 0x148294: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x148294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_148298:
    // 0x148298: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x148298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_14829c:
    // 0x14829c: 0xc049c86  jal         func_127218
label_1482a0:
    if (ctx->pc == 0x1482A0u) {
        ctx->pc = 0x1482A0u;
            // 0x1482a0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1482A4u;
        goto label_1482a4;
    }
    ctx->pc = 0x14829Cu;
    SET_GPR_U32(ctx, 31, 0x1482A4u);
    ctx->pc = 0x1482A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14829Cu;
            // 0x1482a0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1482A4u; }
        if (ctx->pc != 0x1482A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1482A4u; }
        if (ctx->pc != 0x1482A4u) { return; }
    }
    ctx->pc = 0x1482A4u;
label_1482a4:
    // 0x1482a4: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1482a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1482a8:
    // 0x1482a8: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1482a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_1482ac:
    // 0x1482ac: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1482acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1482b0:
    // 0x1482b0: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x1482b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_1482b4:
    // 0x1482b4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1482b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1482b8:
    // 0x1482b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1482b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1482bc:
    // 0x1482bc: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1482bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_1482c0:
    // 0x1482c0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1482c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1482c4:
    // 0x1482c4: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x1482c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1482c8:
    // 0x1482c8: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x1482c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1482cc:
    // 0x1482cc: 0x2248021  addu        $s0, $s1, $a0
    ctx->pc = 0x1482ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1482d0:
    // 0x1482d0: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1482d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_1482d4:
    // 0x1482d4: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1482d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1482d8:
    // 0x1482d8: 0x8c5e0008  lw          $fp, 0x8($v0)
    ctx->pc = 0x1482d8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1482dc:
    // 0x1482dc: 0x24560010  addiu       $s6, $v0, 0x10
    ctx->pc = 0x1482dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1482e0:
    // 0x1482e0: 0x1e082a  slt         $at, $zero, $fp
    ctx->pc = 0x1482e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_1482e4:
    // 0x1482e4: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_1482e8:
    if (ctx->pc == 0x1482E8u) {
        ctx->pc = 0x1482E8u;
            // 0x1482e8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1482ECu;
        goto label_1482ec;
    }
    ctx->pc = 0x1482E4u;
    {
        const bool branch_taken_0x1482e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1482E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1482E4u;
            // 0x1482e8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1482e4) {
            ctx->pc = 0x14835Cu;
            goto label_14835c;
        }
    }
    ctx->pc = 0x1482ECu;
label_1482ec:
    // 0x1482ec: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x1482ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
label_1482f0:
    // 0x1482f0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1482f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1482f4:
    // 0x1482f4: 0x34455556  ori         $a1, $v0, 0x5556
    ctx->pc = 0x1482f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
label_1482f8:
    // 0x1482f8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1482f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1482fc:
    // 0x1482fc: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1482fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_148300:
    // 0x148300: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
label_148304:
    if (ctx->pc == 0x148304u) {
        ctx->pc = 0x148304u;
            // 0x148304: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->pc = 0x148308u;
        goto label_148308;
    }
    ctx->pc = 0x148300u;
    {
        const bool branch_taken_0x148300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x148304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148300u;
            // 0x148304: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x148300) {
            ctx->pc = 0x148310u;
            goto label_148310;
        }
    }
    ctx->pc = 0x148308u;
label_148308:
    // 0x148308: 0x10000099  b           . + 4 + (0x99 << 2)
label_14830c:
    if (ctx->pc == 0x14830Cu) {
        ctx->pc = 0x14830Cu;
            // 0x14830c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x148310u;
        goto label_148310;
    }
    ctx->pc = 0x148308u;
    {
        const bool branch_taken_0x148308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14830Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148308u;
            // 0x14830c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148308) {
            ctx->pc = 0x148570u;
            goto label_148570;
        }
    }
    ctx->pc = 0x148310u;
label_148310:
    // 0x148310: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_148314:
    if (ctx->pc == 0x148314u) {
        ctx->pc = 0x148314u;
            // 0x148314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x148318u;
        goto label_148318;
    }
    ctx->pc = 0x148310u;
    {
        const bool branch_taken_0x148310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148310u;
            // 0x148314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148310) {
            ctx->pc = 0x148320u;
            goto label_148320;
        }
    }
    ctx->pc = 0x148318u;
label_148318:
    // 0x148318: 0x10000096  b           . + 4 + (0x96 << 2)
label_14831c:
    if (ctx->pc == 0x14831Cu) {
        ctx->pc = 0x14831Cu;
            // 0x14831c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x148320u;
        goto label_148320;
    }
    ctx->pc = 0x148318u;
    {
        const bool branch_taken_0x148318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14831Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148318u;
            // 0x14831c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148318) {
            ctx->pc = 0x148574u;
            goto label_148574;
        }
    }
    ctx->pc = 0x148320u;
label_148320:
    // 0x148320: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x148320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_148324:
    // 0x148324: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x148324u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_148328:
    // 0x148328: 0x11e182a  slt         $v1, $t0, $fp
    ctx->pc = 0x148328u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_14832c:
    // 0x14832c: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x14832cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_148330:
    // 0x148330: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x148330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_148334:
    // 0x148334: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x148334u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_148338:
    // 0x148338: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x148338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_14833c:
    // 0x14833c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14833cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_148340:
    // 0x148340: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x148340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_148344:
    // 0x148344: 0x1010  mfhi        $v0
    ctx->pc = 0x148344u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_148348:
    // 0x148348: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x148348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_14834c:
    // 0x14834c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x14834cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_148350:
    // 0x148350: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x148350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_148354:
    // 0x148354: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_148358:
    if (ctx->pc == 0x148358u) {
        ctx->pc = 0x148358u;
            // 0x148358: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x14835Cu;
        goto label_14835c;
    }
    ctx->pc = 0x148354u;
    {
        const bool branch_taken_0x148354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x148358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148354u;
            // 0x148358: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148354) {
            ctx->pc = 0x1482F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1482f8;
        }
    }
    ctx->pc = 0x14835Cu;
label_14835c:
    // 0x14835c: 0x0  nop
    ctx->pc = 0x14835cu;
    // NOP
label_148360:
    // 0x148360: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x148360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_148364:
    // 0x148364: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x148364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_148368:
    // 0x148368: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x148368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14836c:
    // 0x14836c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14836cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_148370:
    // 0x148370: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x148370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_148374:
    // 0x148374: 0xc04e748  jal         func_139D20
label_148378:
    if (ctx->pc == 0x148378u) {
        ctx->pc = 0x148378u;
            // 0x148378: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x14837Cu;
        goto label_14837c;
    }
    ctx->pc = 0x148374u;
    SET_GPR_U32(ctx, 31, 0x14837Cu);
    ctx->pc = 0x148378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148374u;
            // 0x148378: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14837Cu; }
        if (ctx->pc != 0x14837Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14837Cu; }
        if (ctx->pc != 0x14837Cu) { return; }
    }
    ctx->pc = 0x14837Cu;
label_14837c:
    // 0x14837c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x14837cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_148380:
    // 0x148380: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x148380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_148384:
    // 0x148384: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_148388:
    if (ctx->pc == 0x148388u) {
        ctx->pc = 0x148388u;
            // 0x148388: 0x1e082a  slt         $at, $zero, $fp (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
        ctx->pc = 0x14838Cu;
        goto label_14838c;
    }
    ctx->pc = 0x148384u;
    {
        const bool branch_taken_0x148384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148384u;
            // 0x148388: 0x1e082a  slt         $at, $zero, $fp (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x148384) {
            ctx->pc = 0x148394u;
            goto label_148394;
        }
    }
    ctx->pc = 0x14838Cu;
label_14838c:
    // 0x14838c: 0x10000078  b           . + 4 + (0x78 << 2)
label_148390:
    if (ctx->pc == 0x148390u) {
        ctx->pc = 0x148390u;
            // 0x148390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x148394u;
        goto label_148394;
    }
    ctx->pc = 0x14838Cu;
    {
        const bool branch_taken_0x14838c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14838Cu;
            // 0x148390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14838c) {
            ctx->pc = 0x148570u;
            goto label_148570;
        }
    }
    ctx->pc = 0x148394u;
label_148394:
    // 0x148394: 0x10200068  beqz        $at, . + 4 + (0x68 << 2)
label_148398:
    if (ctx->pc == 0x148398u) {
        ctx->pc = 0x148398u;
            // 0x148398: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14839Cu;
        goto label_14839c;
    }
    ctx->pc = 0x148394u;
    {
        const bool branch_taken_0x148394 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x148398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148394u;
            // 0x148398: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148394) {
            ctx->pc = 0x148538u;
            goto label_148538;
        }
    }
    ctx->pc = 0x14839Cu;
label_14839c:
    // 0x14839c: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x14839cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_1483a0:
    // 0x1483a0: 0x8ed70004  lw          $s7, 0x4($s6)
    ctx->pc = 0x1483a0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1483a4:
    // 0x1483a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1483a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1483a8:
    // 0x1483a8: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1483a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_1483ac:
    // 0x1483ac: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x1483acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_1483b0:
    // 0x1483b0: 0x8ed20000  lw          $s2, 0x0($s6)
    ctx->pc = 0x1483b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1483b4:
    // 0x1483b4: 0x1020005b  beqz        $at, . + 4 + (0x5B << 2)
label_1483b8:
    if (ctx->pc == 0x1483B8u) {
        ctx->pc = 0x1483B8u;
            // 0x1483b8: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x1483BCu;
        goto label_1483bc;
    }
    ctx->pc = 0x1483B4u;
    {
        const bool branch_taken_0x1483b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1483B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1483B4u;
            // 0x1483b8: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1483b4) {
            ctx->pc = 0x148524u;
            goto label_148524;
        }
    }
    ctx->pc = 0x1483BCu;
label_1483bc:
    // 0x1483bc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1483bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1483c0:
    // 0x1483c0: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1483c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1483c4:
    // 0x1483c4: 0x0  nop
    ctx->pc = 0x1483c4u;
    // NOP
label_1483c8:
    // 0x1483c8: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1483c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1483cc:
    // 0x1483cc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1483ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1483d0:
    // 0x1483d0: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x1483d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1483d4:
    // 0x1483d4: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1483d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_1483d8:
    // 0x1483d8: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1483d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1483dc:
    // 0x1483dc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1483dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1483e0:
    // 0x1483e0: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1483e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_1483e4:
    // 0x1483e4: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1483e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_1483e8:
    // 0x1483e8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1483e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1483ec:
    // 0x1483ec: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1483ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1483f0:
    // 0x1483f0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1483f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1483f4:
    // 0x1483f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1483f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1483f8:
    // 0x1483f8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1483f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1483fc:
    // 0x1483fc: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x1483fcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
label_148400:
    // 0x148400: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x148400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_148404:
    // 0x148404: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x148404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_148408:
    // 0x148408: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x148408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_14840c:
    // 0x14840c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14840cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_148410:
    // 0x148410: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x148410u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_148414:
    // 0x148414: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x148414u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
label_148418:
    // 0x148418: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x148418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_14841c:
    // 0x14841c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x14841cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_148420:
    // 0x148420: 0x26d6000c  addiu       $s6, $s6, 0xC
    ctx->pc = 0x148420u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
label_148424:
    // 0x148424: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x148424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_148428:
    // 0x148428: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x148428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14842c:
    // 0x14842c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x14842cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_148430:
    // 0x148430: 0x640002e  bltz        $s2, . + 4 + (0x2E << 2)
label_148434:
    if (ctx->pc == 0x148434u) {
        ctx->pc = 0x148434u;
            // 0x148434: 0x7e620020  sq          $v0, 0x20($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 2));
        ctx->pc = 0x148438u;
        goto label_148438;
    }
    ctx->pc = 0x148430u;
    {
        const bool branch_taken_0x148430 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x148434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148430u;
            // 0x148434: 0x7e620020  sq          $v0, 0x20($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148430) {
            ctx->pc = 0x1484ECu;
            goto label_1484ec;
        }
    }
    ctx->pc = 0x148438u;
label_148438:
    // 0x148438: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
label_14843c:
    if (ctx->pc == 0x14843Cu) {
        ctx->pc = 0x14843Cu;
            // 0x14843c: 0x121840  sll         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x148440u;
        goto label_148440;
    }
    ctx->pc = 0x148438u;
    {
        const bool branch_taken_0x148438 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14843Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148438u;
            // 0x14843c: 0x121840  sll         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148438) {
            ctx->pc = 0x1484ECu;
            goto label_1484ec;
        }
    }
    ctx->pc = 0x148440u;
label_148440:
    // 0x148440: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x148440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_148444:
    // 0x148444: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x148444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_148448:
    // 0x148448: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x148448u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_14844c:
    // 0x14844c: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x14844cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_148450:
    // 0x148450: 0x204a021  addu        $s4, $s0, $a0
    ctx->pc = 0x148450u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_148454:
    // 0x148454: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x148454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_148458:
    // 0x148458: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x148458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14845c:
    // 0x14845c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x14845cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_148460:
    // 0x148460: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x148460u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_148464:
    // 0x148464: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x148464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_148468:
    // 0x148468: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x148468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_14846c:
    // 0x14846c: 0xc0a248c  jal         func_289230
label_148470:
    if (ctx->pc == 0x148470u) {
        ctx->pc = 0x148470u;
            // 0x148470: 0x46001300  add.s       $f12, $f2, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x148474u;
        goto label_148474;
    }
    ctx->pc = 0x14846Cu;
    SET_GPR_U32(ctx, 31, 0x148474u);
    ctx->pc = 0x148470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14846Cu;
            // 0x148470: 0x46001300  add.s       $f12, $f2, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148474u; }
        if (ctx->pc != 0x148474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148474u; }
        if (ctx->pc != 0x148474u) { return; }
    }
    ctx->pc = 0x148474u;
label_148474:
    // 0x148474: 0xa6620040  sh          $v0, 0x40($s3)
    ctx->pc = 0x148474u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 64), (uint16_t)GPR_U32(ctx, 2));
label_148478:
    // 0x148478: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x148478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14847c:
    // 0x14847c: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x14847cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_148480:
    // 0x148480: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x148480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_148484:
    // 0x148484: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x148484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_148488:
    // 0x148488: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x148488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_14848c:
    // 0x14848c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x14848cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_148490:
    // 0x148490: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x148490u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_148494:
    // 0x148494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_148498:
    // 0x148498: 0xc0a248c  jal         func_289230
label_14849c:
    if (ctx->pc == 0x14849Cu) {
        ctx->pc = 0x14849Cu;
            // 0x14849c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1484A0u;
        goto label_1484a0;
    }
    ctx->pc = 0x148498u;
    SET_GPR_U32(ctx, 31, 0x1484A0u);
    ctx->pc = 0x14849Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148498u;
            // 0x14849c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1484A0u; }
        if (ctx->pc != 0x1484A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1484A0u; }
        if (ctx->pc != 0x1484A0u) { return; }
    }
    ctx->pc = 0x1484A0u;
label_1484a0:
    // 0x1484a0: 0xa6620042  sh          $v0, 0x42($s3)
    ctx->pc = 0x1484a0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 66), (uint16_t)GPR_U32(ctx, 2));
label_1484a4:
    // 0x1484a4: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x1484a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1484a8:
    // 0x1484a8: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1484a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_1484ac:
    // 0x1484ac: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1484acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_1484b0:
    // 0x1484b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1484b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1484b4:
    // 0x1484b4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1484b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1484b8:
    // 0x1484b8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1484b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1484bc:
    // 0x1484bc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1484bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1484c0:
    // 0x1484c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1484c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1484c4:
    // 0x1484c4: 0xc0a248c  jal         func_289230
label_1484c8:
    if (ctx->pc == 0x1484C8u) {
        ctx->pc = 0x1484C8u;
            // 0x1484c8: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1484CCu;
        goto label_1484cc;
    }
    ctx->pc = 0x1484C4u;
    SET_GPR_U32(ctx, 31, 0x1484CCu);
    ctx->pc = 0x1484C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1484C4u;
            // 0x1484c8: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1484CCu; }
        if (ctx->pc != 0x1484CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1484CCu; }
        if (ctx->pc != 0x1484CCu) { return; }
    }
    ctx->pc = 0x1484CCu;
label_1484cc:
    // 0x1484cc: 0xa6620044  sh          $v0, 0x44($s3)
    ctx->pc = 0x1484ccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 68), (uint16_t)GPR_U32(ctx, 2));
label_1484d0:
    // 0x1484d0: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x1484d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1484d4:
    // 0x1484d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1484d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1484d8:
    // 0x1484d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1484d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1484dc:
    // 0x1484dc: 0xc0a248c  jal         func_289230
label_1484e0:
    if (ctx->pc == 0x1484E0u) {
        ctx->pc = 0x1484E0u;
            // 0x1484e0: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1484E4u;
        goto label_1484e4;
    }
    ctx->pc = 0x1484DCu;
    SET_GPR_U32(ctx, 31, 0x1484E4u);
    ctx->pc = 0x1484E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1484DCu;
            // 0x1484e0: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1484E4u; }
        if (ctx->pc != 0x1484E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1484E4u; }
        if (ctx->pc != 0x1484E4u) { return; }
    }
    ctx->pc = 0x1484E4u;
label_1484e4:
    // 0x1484e4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1484e8:
    if (ctx->pc == 0x1484E8u) {
        ctx->pc = 0x1484E8u;
            // 0x1484e8: 0xa6620046  sh          $v0, 0x46($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 70), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1484ECu;
        goto label_1484ec;
    }
    ctx->pc = 0x1484E4u;
    {
        const bool branch_taken_0x1484e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1484E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1484E4u;
            // 0x1484e8: 0xa6620046  sh          $v0, 0x46($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 70), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1484e4) {
            ctx->pc = 0x148500u;
            goto label_148500;
        }
    }
    ctx->pc = 0x1484ECu;
label_1484ec:
    // 0x1484ec: 0x0  nop
    ctx->pc = 0x1484ecu;
    // NOP
label_1484f0:
    // 0x1484f0: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x1484f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_1484f4:
    // 0x1484f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1484f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1484f8:
    // 0x1484f8: 0xc049c86  jal         func_127218
label_1484fc:
    if (ctx->pc == 0x1484FCu) {
        ctx->pc = 0x1484FCu;
            // 0x1484fc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x148500u;
        goto label_148500;
    }
    ctx->pc = 0x1484F8u;
    SET_GPR_U32(ctx, 31, 0x148500u);
    ctx->pc = 0x1484FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1484F8u;
            // 0x1484fc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148500u; }
        if (ctx->pc != 0x148500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148500u; }
        if (ctx->pc != 0x148500u) { return; }
    }
    ctx->pc = 0x148500u;
label_148500:
    // 0x148500: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x148500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_148504:
    // 0x148504: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x148504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_148508:
    // 0x148508: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x148508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_14850c:
    // 0x14850c: 0xc04bd60  jal         func_12F580
label_148510:
    if (ctx->pc == 0x148510u) {
        ctx->pc = 0x148510u;
            // 0x148510: 0x26670020  addiu       $a3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x148514u;
        goto label_148514;
    }
    ctx->pc = 0x14850Cu;
    SET_GPR_U32(ctx, 31, 0x148514u);
    ctx->pc = 0x148510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14850Cu;
            // 0x148510: 0x26670020  addiu       $a3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F580u;
    if (runtime->hasFunction(0x12F580u)) {
        auto targetFn = runtime->lookupFunction(0x12F580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148514u; }
        if (ctx->pc != 0x148514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlaneNormal__FPfPfPfPf_0x12f580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148514u; }
        if (ctx->pc != 0x148514u) { return; }
    }
    ctx->pc = 0x148514u;
label_148514:
    // 0x148514: 0x26310003  addiu       $s1, $s1, 0x3
    ctx->pc = 0x148514u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
label_148518:
    // 0x148518: 0x237102a  slt         $v0, $s1, $s7
    ctx->pc = 0x148518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_14851c:
    // 0x14851c: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
label_148520:
    if (ctx->pc == 0x148520u) {
        ctx->pc = 0x148524u;
        goto label_148524;
    }
    ctx->pc = 0x14851Cu;
    {
        const bool branch_taken_0x14851c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14851c) {
            ctx->pc = 0x1483C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1483c4;
        }
    }
    ctx->pc = 0x148524u;
label_148524:
    // 0x148524: 0x0  nop
    ctx->pc = 0x148524u;
    // NOP
label_148528:
    // 0x148528: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x148528u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_14852c:
    // 0x14852c: 0x2be102a  slt         $v0, $s5, $fp
    ctx->pc = 0x14852cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_148530:
    // 0x148530: 0x1440ff9b  bnez        $v0, . + 4 + (-0x65 << 2)
label_148534:
    if (ctx->pc == 0x148534u) {
        ctx->pc = 0x148538u;
        goto label_148538;
    }
    ctx->pc = 0x148530u;
    {
        const bool branch_taken_0x148530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148530) {
            ctx->pc = 0x1483A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1483a0;
        }
    }
    ctx->pc = 0x148538u;
label_148538:
    // 0x148538: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x148538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_14853c:
    // 0x14853c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x14853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_148540:
    // 0x148540: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x148540u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_148544:
    // 0x148544: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x148544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_148548:
    // 0x148548: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x148548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_14854c:
    // 0x14854c: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x14854cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
label_148550:
    // 0x148550: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x148550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_148554:
    // 0x148554: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x148554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_148558:
    // 0x148558: 0x8c590030  lw          $t9, 0x30($v0)
    ctx->pc = 0x148558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_14855c:
    // 0x14855c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x14855cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_148560:
    // 0x148560: 0x320f809  jalr        $t9
label_148564:
    if (ctx->pc == 0x148564u) {
        ctx->pc = 0x148568u;
        goto label_148568;
    }
    ctx->pc = 0x148560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x148568u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x148568u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x148568u; }
            if (ctx->pc != 0x148568u) { return; }
        }
        }
    }
    ctx->pc = 0x148568u;
label_148568:
    // 0x148568: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x148568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_14856c:
    // 0x14856c: 0x0  nop
    ctx->pc = 0x14856cu;
    // NOP
label_148570:
    // 0x148570: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x148570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_148574:
    // 0x148574: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x148574u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_148578:
    // 0x148578: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x148578u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_14857c:
    // 0x14857c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14857cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_148580:
    // 0x148580: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x148580u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_148584:
    // 0x148584: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x148584u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_148588:
    // 0x148588: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x148588u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14858c:
    // 0x14858c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14858cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_148590:
    // 0x148590: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x148590u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_148594:
    // 0x148594: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_148598:
    // 0x148598: 0x3e00008  jr          $ra
label_14859c:
    if (ctx->pc == 0x14859Cu) {
        ctx->pc = 0x14859Cu;
            // 0x14859c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x1485A0u;
        goto label_fallthrough_0x148598;
    }
    ctx->pc = 0x148598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14859Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148598u;
            // 0x14859c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x148598:
    ctx->pc = 0x1485A0u;
}
