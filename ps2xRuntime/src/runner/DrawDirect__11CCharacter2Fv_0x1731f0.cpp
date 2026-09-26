#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawDirect__11CCharacter2Fv
// Address: 0x1731f0 - 0x17360c
void DrawDirect__11CCharacter2Fv_0x1731f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawDirect__11CCharacter2Fv_0x1731f0");
#endif

    switch (ctx->pc) {
        case 0x1731f0u: goto label_1731f0;
        case 0x1731f4u: goto label_1731f4;
        case 0x1731f8u: goto label_1731f8;
        case 0x1731fcu: goto label_1731fc;
        case 0x173200u: goto label_173200;
        case 0x173204u: goto label_173204;
        case 0x173208u: goto label_173208;
        case 0x17320cu: goto label_17320c;
        case 0x173210u: goto label_173210;
        case 0x173214u: goto label_173214;
        case 0x173218u: goto label_173218;
        case 0x17321cu: goto label_17321c;
        case 0x173220u: goto label_173220;
        case 0x173224u: goto label_173224;
        case 0x173228u: goto label_173228;
        case 0x17322cu: goto label_17322c;
        case 0x173230u: goto label_173230;
        case 0x173234u: goto label_173234;
        case 0x173238u: goto label_173238;
        case 0x17323cu: goto label_17323c;
        case 0x173240u: goto label_173240;
        case 0x173244u: goto label_173244;
        case 0x173248u: goto label_173248;
        case 0x17324cu: goto label_17324c;
        case 0x173250u: goto label_173250;
        case 0x173254u: goto label_173254;
        case 0x173258u: goto label_173258;
        case 0x17325cu: goto label_17325c;
        case 0x173260u: goto label_173260;
        case 0x173264u: goto label_173264;
        case 0x173268u: goto label_173268;
        case 0x17326cu: goto label_17326c;
        case 0x173270u: goto label_173270;
        case 0x173274u: goto label_173274;
        case 0x173278u: goto label_173278;
        case 0x17327cu: goto label_17327c;
        case 0x173280u: goto label_173280;
        case 0x173284u: goto label_173284;
        case 0x173288u: goto label_173288;
        case 0x17328cu: goto label_17328c;
        case 0x173290u: goto label_173290;
        case 0x173294u: goto label_173294;
        case 0x173298u: goto label_173298;
        case 0x17329cu: goto label_17329c;
        case 0x1732a0u: goto label_1732a0;
        case 0x1732a4u: goto label_1732a4;
        case 0x1732a8u: goto label_1732a8;
        case 0x1732acu: goto label_1732ac;
        case 0x1732b0u: goto label_1732b0;
        case 0x1732b4u: goto label_1732b4;
        case 0x1732b8u: goto label_1732b8;
        case 0x1732bcu: goto label_1732bc;
        case 0x1732c0u: goto label_1732c0;
        case 0x1732c4u: goto label_1732c4;
        case 0x1732c8u: goto label_1732c8;
        case 0x1732ccu: goto label_1732cc;
        case 0x1732d0u: goto label_1732d0;
        case 0x1732d4u: goto label_1732d4;
        case 0x1732d8u: goto label_1732d8;
        case 0x1732dcu: goto label_1732dc;
        case 0x1732e0u: goto label_1732e0;
        case 0x1732e4u: goto label_1732e4;
        case 0x1732e8u: goto label_1732e8;
        case 0x1732ecu: goto label_1732ec;
        case 0x1732f0u: goto label_1732f0;
        case 0x1732f4u: goto label_1732f4;
        case 0x1732f8u: goto label_1732f8;
        case 0x1732fcu: goto label_1732fc;
        case 0x173300u: goto label_173300;
        case 0x173304u: goto label_173304;
        case 0x173308u: goto label_173308;
        case 0x17330cu: goto label_17330c;
        case 0x173310u: goto label_173310;
        case 0x173314u: goto label_173314;
        case 0x173318u: goto label_173318;
        case 0x17331cu: goto label_17331c;
        case 0x173320u: goto label_173320;
        case 0x173324u: goto label_173324;
        case 0x173328u: goto label_173328;
        case 0x17332cu: goto label_17332c;
        case 0x173330u: goto label_173330;
        case 0x173334u: goto label_173334;
        case 0x173338u: goto label_173338;
        case 0x17333cu: goto label_17333c;
        case 0x173340u: goto label_173340;
        case 0x173344u: goto label_173344;
        case 0x173348u: goto label_173348;
        case 0x17334cu: goto label_17334c;
        case 0x173350u: goto label_173350;
        case 0x173354u: goto label_173354;
        case 0x173358u: goto label_173358;
        case 0x17335cu: goto label_17335c;
        case 0x173360u: goto label_173360;
        case 0x173364u: goto label_173364;
        case 0x173368u: goto label_173368;
        case 0x17336cu: goto label_17336c;
        case 0x173370u: goto label_173370;
        case 0x173374u: goto label_173374;
        case 0x173378u: goto label_173378;
        case 0x17337cu: goto label_17337c;
        case 0x173380u: goto label_173380;
        case 0x173384u: goto label_173384;
        case 0x173388u: goto label_173388;
        case 0x17338cu: goto label_17338c;
        case 0x173390u: goto label_173390;
        case 0x173394u: goto label_173394;
        case 0x173398u: goto label_173398;
        case 0x17339cu: goto label_17339c;
        case 0x1733a0u: goto label_1733a0;
        case 0x1733a4u: goto label_1733a4;
        case 0x1733a8u: goto label_1733a8;
        case 0x1733acu: goto label_1733ac;
        case 0x1733b0u: goto label_1733b0;
        case 0x1733b4u: goto label_1733b4;
        case 0x1733b8u: goto label_1733b8;
        case 0x1733bcu: goto label_1733bc;
        case 0x1733c0u: goto label_1733c0;
        case 0x1733c4u: goto label_1733c4;
        case 0x1733c8u: goto label_1733c8;
        case 0x1733ccu: goto label_1733cc;
        case 0x1733d0u: goto label_1733d0;
        case 0x1733d4u: goto label_1733d4;
        case 0x1733d8u: goto label_1733d8;
        case 0x1733dcu: goto label_1733dc;
        case 0x1733e0u: goto label_1733e0;
        case 0x1733e4u: goto label_1733e4;
        case 0x1733e8u: goto label_1733e8;
        case 0x1733ecu: goto label_1733ec;
        case 0x1733f0u: goto label_1733f0;
        case 0x1733f4u: goto label_1733f4;
        case 0x1733f8u: goto label_1733f8;
        case 0x1733fcu: goto label_1733fc;
        case 0x173400u: goto label_173400;
        case 0x173404u: goto label_173404;
        case 0x173408u: goto label_173408;
        case 0x17340cu: goto label_17340c;
        case 0x173410u: goto label_173410;
        case 0x173414u: goto label_173414;
        case 0x173418u: goto label_173418;
        case 0x17341cu: goto label_17341c;
        case 0x173420u: goto label_173420;
        case 0x173424u: goto label_173424;
        case 0x173428u: goto label_173428;
        case 0x17342cu: goto label_17342c;
        case 0x173430u: goto label_173430;
        case 0x173434u: goto label_173434;
        case 0x173438u: goto label_173438;
        case 0x17343cu: goto label_17343c;
        case 0x173440u: goto label_173440;
        case 0x173444u: goto label_173444;
        case 0x173448u: goto label_173448;
        case 0x17344cu: goto label_17344c;
        case 0x173450u: goto label_173450;
        case 0x173454u: goto label_173454;
        case 0x173458u: goto label_173458;
        case 0x17345cu: goto label_17345c;
        case 0x173460u: goto label_173460;
        case 0x173464u: goto label_173464;
        case 0x173468u: goto label_173468;
        case 0x17346cu: goto label_17346c;
        case 0x173470u: goto label_173470;
        case 0x173474u: goto label_173474;
        case 0x173478u: goto label_173478;
        case 0x17347cu: goto label_17347c;
        case 0x173480u: goto label_173480;
        case 0x173484u: goto label_173484;
        case 0x173488u: goto label_173488;
        case 0x17348cu: goto label_17348c;
        case 0x173490u: goto label_173490;
        case 0x173494u: goto label_173494;
        case 0x173498u: goto label_173498;
        case 0x17349cu: goto label_17349c;
        case 0x1734a0u: goto label_1734a0;
        case 0x1734a4u: goto label_1734a4;
        case 0x1734a8u: goto label_1734a8;
        case 0x1734acu: goto label_1734ac;
        case 0x1734b0u: goto label_1734b0;
        case 0x1734b4u: goto label_1734b4;
        case 0x1734b8u: goto label_1734b8;
        case 0x1734bcu: goto label_1734bc;
        case 0x1734c0u: goto label_1734c0;
        case 0x1734c4u: goto label_1734c4;
        case 0x1734c8u: goto label_1734c8;
        case 0x1734ccu: goto label_1734cc;
        case 0x1734d0u: goto label_1734d0;
        case 0x1734d4u: goto label_1734d4;
        case 0x1734d8u: goto label_1734d8;
        case 0x1734dcu: goto label_1734dc;
        case 0x1734e0u: goto label_1734e0;
        case 0x1734e4u: goto label_1734e4;
        case 0x1734e8u: goto label_1734e8;
        case 0x1734ecu: goto label_1734ec;
        case 0x1734f0u: goto label_1734f0;
        case 0x1734f4u: goto label_1734f4;
        case 0x1734f8u: goto label_1734f8;
        case 0x1734fcu: goto label_1734fc;
        case 0x173500u: goto label_173500;
        case 0x173504u: goto label_173504;
        case 0x173508u: goto label_173508;
        case 0x17350cu: goto label_17350c;
        case 0x173510u: goto label_173510;
        case 0x173514u: goto label_173514;
        case 0x173518u: goto label_173518;
        case 0x17351cu: goto label_17351c;
        case 0x173520u: goto label_173520;
        case 0x173524u: goto label_173524;
        case 0x173528u: goto label_173528;
        case 0x17352cu: goto label_17352c;
        case 0x173530u: goto label_173530;
        case 0x173534u: goto label_173534;
        case 0x173538u: goto label_173538;
        case 0x17353cu: goto label_17353c;
        case 0x173540u: goto label_173540;
        case 0x173544u: goto label_173544;
        case 0x173548u: goto label_173548;
        case 0x17354cu: goto label_17354c;
        case 0x173550u: goto label_173550;
        case 0x173554u: goto label_173554;
        case 0x173558u: goto label_173558;
        case 0x17355cu: goto label_17355c;
        case 0x173560u: goto label_173560;
        case 0x173564u: goto label_173564;
        case 0x173568u: goto label_173568;
        case 0x17356cu: goto label_17356c;
        case 0x173570u: goto label_173570;
        case 0x173574u: goto label_173574;
        case 0x173578u: goto label_173578;
        case 0x17357cu: goto label_17357c;
        case 0x173580u: goto label_173580;
        case 0x173584u: goto label_173584;
        case 0x173588u: goto label_173588;
        case 0x17358cu: goto label_17358c;
        case 0x173590u: goto label_173590;
        case 0x173594u: goto label_173594;
        case 0x173598u: goto label_173598;
        case 0x17359cu: goto label_17359c;
        case 0x1735a0u: goto label_1735a0;
        case 0x1735a4u: goto label_1735a4;
        case 0x1735a8u: goto label_1735a8;
        case 0x1735acu: goto label_1735ac;
        case 0x1735b0u: goto label_1735b0;
        case 0x1735b4u: goto label_1735b4;
        case 0x1735b8u: goto label_1735b8;
        case 0x1735bcu: goto label_1735bc;
        case 0x1735c0u: goto label_1735c0;
        case 0x1735c4u: goto label_1735c4;
        case 0x1735c8u: goto label_1735c8;
        case 0x1735ccu: goto label_1735cc;
        case 0x1735d0u: goto label_1735d0;
        case 0x1735d4u: goto label_1735d4;
        case 0x1735d8u: goto label_1735d8;
        case 0x1735dcu: goto label_1735dc;
        case 0x1735e0u: goto label_1735e0;
        case 0x1735e4u: goto label_1735e4;
        case 0x1735e8u: goto label_1735e8;
        case 0x1735ecu: goto label_1735ec;
        case 0x1735f0u: goto label_1735f0;
        case 0x1735f4u: goto label_1735f4;
        case 0x1735f8u: goto label_1735f8;
        case 0x1735fcu: goto label_1735fc;
        case 0x173600u: goto label_173600;
        case 0x173604u: goto label_173604;
        case 0x173608u: goto label_173608;
        default: break;
    }

    ctx->pc = 0x1731f0u;

label_1731f0:
    // 0x1731f0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1731f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1731f4:
    // 0x1731f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1731f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1731f8:
    // 0x1731f8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1731f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1731fc:
    // 0x1731fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1731fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_173200:
    // 0x173200: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x173200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_173204:
    // 0x173204: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x173204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_173208:
    // 0x173208: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x173208u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_17320c:
    // 0x17320c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17320cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_173210:
    // 0x173210: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x173210u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_173214:
    // 0x173214: 0xc4940100  lwc1        $f20, 0x100($a0)
    ctx->pc = 0x173214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_173218:
    // 0x173218: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x173218u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_17321c:
    // 0x17321c: 0x320f809  jalr        $t9
label_173220:
    if (ctx->pc == 0x173220u) {
        ctx->pc = 0x173220u;
            // 0x173220: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173224u;
        goto label_173224;
    }
    ctx->pc = 0x17321Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x173224u);
        ctx->pc = 0x173220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17321Cu;
            // 0x173220: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x173224u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173224u; }
            if (ctx->pc != 0x173224u) { return; }
        }
        }
    }
    ctx->pc = 0x173224u;
label_173224:
    // 0x173224: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x173224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_173228:
    // 0x173228: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x173228u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_17322c:
    // 0x17322c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17322cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_173230:
    // 0x173230: 0x27a5010c  addiu       $a1, $sp, 0x10C
    ctx->pc = 0x173230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_173234:
    // 0x173234: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x173234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_173238:
    // 0x173238: 0x320f809  jalr        $t9
label_17323c:
    if (ctx->pc == 0x17323Cu) {
        ctx->pc = 0x17323Cu;
            // 0x17323c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x173240u;
        goto label_173240;
    }
    ctx->pc = 0x173238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x173240u);
        ctx->pc = 0x17323Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173238u;
            // 0x17323c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x173240u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173240u; }
            if (ctx->pc != 0x173240u) { return; }
        }
        }
    }
    ctx->pc = 0x173240u;
label_173240:
    // 0x173240: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_173244:
    if (ctx->pc == 0x173244u) {
        ctx->pc = 0x173244u;
            // 0x173244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173248u;
        goto label_173248;
    }
    ctx->pc = 0x173240u;
    {
        const bool branch_taken_0x173240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173240u;
            // 0x173244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173240) {
            ctx->pc = 0x173250u;
            goto label_173250;
        }
    }
    ctx->pc = 0x173248u;
label_173248:
    // 0x173248: 0x100000e8  b           . + 4 + (0xE8 << 2)
label_17324c:
    if (ctx->pc == 0x17324Cu) {
        ctx->pc = 0x17324Cu;
            // 0x17324c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x173250u;
        goto label_173250;
    }
    ctx->pc = 0x173248u;
    {
        const bool branch_taken_0x173248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17324Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173248u;
            // 0x17324c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173248) {
            ctx->pc = 0x1735ECu;
            goto label_1735ec;
        }
    }
    ctx->pc = 0x173250u;
label_173250:
    // 0x173250: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x173250u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_173254:
    // 0x173254: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x173254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_173258:
    // 0x173258: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x173258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17325c:
    // 0x17325c: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x17325cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_173260:
    // 0x173260: 0x320f809  jalr        $t9
label_173264:
    if (ctx->pc == 0x173264u) {
        ctx->pc = 0x173264u;
            // 0x173264: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x173268u;
        goto label_173268;
    }
    ctx->pc = 0x173260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x173268u);
        ctx->pc = 0x173264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173260u;
            // 0x173264: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x173268u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173268u; }
            if (ctx->pc != 0x173268u) { return; }
        }
        }
    }
    ctx->pc = 0x173268u;
label_173268:
    // 0x173268: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_17326c:
    if (ctx->pc == 0x17326Cu) {
        ctx->pc = 0x17326Cu;
            // 0x17326c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173270u;
        goto label_173270;
    }
    ctx->pc = 0x173268u;
    {
        const bool branch_taken_0x173268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17326Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173268u;
            // 0x17326c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173268) {
            ctx->pc = 0x173278u;
            goto label_173278;
        }
    }
    ctx->pc = 0x173270u;
label_173270:
    // 0x173270: 0x100000dd  b           . + 4 + (0xDD << 2)
label_173274:
    if (ctx->pc == 0x173274u) {
        ctx->pc = 0x173278u;
        goto label_173278;
    }
    ctx->pc = 0x173270u;
    {
        const bool branch_taken_0x173270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173270) {
            ctx->pc = 0x1735E8u;
            goto label_1735e8;
        }
    }
    ctx->pc = 0x173278u;
label_173278:
    // 0x173278: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x173278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_17327c:
    // 0x17327c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_173280:
    if (ctx->pc == 0x173280u) {
        ctx->pc = 0x173284u;
        goto label_173284;
    }
    ctx->pc = 0x17327Cu;
    {
        const bool branch_taken_0x17327c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17327c) {
            ctx->pc = 0x1732C8u;
            goto label_1732c8;
        }
    }
    ctx->pc = 0x173284u;
label_173284:
    // 0x173284: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x173284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_173288:
    // 0x173288: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x173288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_17328c:
    // 0x17328c: 0x320f809  jalr        $t9
label_173290:
    if (ctx->pc == 0x173290u) {
        ctx->pc = 0x173290u;
            // 0x173290: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x173294u;
        goto label_173294;
    }
    ctx->pc = 0x17328Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x173294u);
        ctx->pc = 0x173290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17328Cu;
            // 0x173290: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x173294u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173294u; }
            if (ctx->pc != 0x173294u) { return; }
        }
        }
    }
    ctx->pc = 0x173294u;
label_173294:
    // 0x173294: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x173294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_173298:
    // 0x173298: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x173298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17329c:
    // 0x17329c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x17329cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1732a0:
    // 0x1732a0: 0x320f809  jalr        $t9
label_1732a4:
    if (ctx->pc == 0x1732A4u) {
        ctx->pc = 0x1732A4u;
            // 0x1732a4: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x1732A8u;
        goto label_1732a8;
    }
    ctx->pc = 0x1732A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1732A8u);
        ctx->pc = 0x1732A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1732A0u;
            // 0x1732a4: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1732A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1732A8u; }
            if (ctx->pc != 0x1732A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1732A8u;
label_1732a8:
    // 0x1732a8: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x1732a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_1732ac:
    // 0x1732ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1732acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1732b0:
    // 0x1732b0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1732b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1732b4:
    // 0x1732b4: 0x320f809  jalr        $t9
label_1732b8:
    if (ctx->pc == 0x1732B8u) {
        ctx->pc = 0x1732B8u;
            // 0x1732b8: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x1732BCu;
        goto label_1732bc;
    }
    ctx->pc = 0x1732B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1732BCu);
        ctx->pc = 0x1732B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1732B4u;
            // 0x1732b8: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1732BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1732BCu; }
            if (ctx->pc != 0x1732BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1732BCu;
label_1732bc:
    // 0x1732bc: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x1732bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_1732c0:
    // 0x1732c0: 0xc04de0c  jal         func_137830
label_1732c4:
    if (ctx->pc == 0x1732C4u) {
        ctx->pc = 0x1732C4u;
            // 0x1732c4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1732C8u;
        goto label_1732c8;
    }
    ctx->pc = 0x1732C0u;
    SET_GPR_U32(ctx, 31, 0x1732C8u);
    ctx->pc = 0x1732C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1732C0u;
            // 0x1732c4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1732C8u; }
        if (ctx->pc != 0x1732C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1732C8u; }
        if (ctx->pc != 0x1732C8u) { return; }
    }
    ctx->pc = 0x1732C8u;
label_1732c8:
    // 0x1732c8: 0x8e46034c  lw          $a2, 0x34C($s2)
    ctx->pc = 0x1732c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 844)));
label_1732cc:
    // 0x1732cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1732ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1732d0:
    // 0x1732d0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1732d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1732d4:
    // 0x1732d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1732d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1732d8:
    // 0x1732d8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1732dc:
    if (ctx->pc == 0x1732DCu) {
        ctx->pc = 0x1732DCu;
            // 0x1732dc: 0x24c7ffff  addiu       $a3, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->pc = 0x1732E0u;
        goto label_1732e0;
    }
    ctx->pc = 0x1732D8u;
    {
        const bool branch_taken_0x1732d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1732DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1732D8u;
            // 0x1732dc: 0x24c7ffff  addiu       $a3, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1732d8) {
            ctx->pc = 0x173308u;
            goto label_173308;
        }
    }
    ctx->pc = 0x1732E0u;
label_1732e0:
    // 0x1732e0: 0x8e420350  lw          $v0, 0x350($s2)
    ctx->pc = 0x1732e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 848)));
label_1732e4:
    // 0x1732e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1732e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1732e8:
    // 0x1732e8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1732e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1732ec:
    // 0x1732ec: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1732ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1732f0:
    // 0x1732f0: 0x0  nop
    ctx->pc = 0x1732f0u;
    // NOP
label_1732f4:
    // 0x1732f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1732f8:
    if (ctx->pc == 0x1732F8u) {
        ctx->pc = 0x1732FCu;
        goto label_1732fc;
    }
    ctx->pc = 0x1732F4u;
    {
        const bool branch_taken_0x1732f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1732f4) {
            ctx->pc = 0x173300u;
            goto label_173300;
        }
    }
    ctx->pc = 0x1732FCu;
label_1732fc:
    // 0x1732fc: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1732fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_173300:
    // 0x173300: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x173300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_173304:
    // 0x173304: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x173304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_173308:
    // 0x173308: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x173308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_17330c:
    // 0x17330c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_173310:
    if (ctx->pc == 0x173310u) {
        ctx->pc = 0x173310u;
            // 0x173310: 0xa6102a  slt         $v0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->pc = 0x173314u;
        goto label_173314;
    }
    ctx->pc = 0x17330Cu;
    {
        const bool branch_taken_0x17330c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17330Cu;
            // 0x173310: 0xa6102a  slt         $v0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17330c) {
            ctx->pc = 0x1732E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1732e0;
        }
    }
    ctx->pc = 0x173314u;
label_173314:
    // 0x173314: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_173318:
    if (ctx->pc == 0x173318u) {
        ctx->pc = 0x173318u;
            // 0x173318: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17331Cu;
        goto label_17331c;
    }
    ctx->pc = 0x173314u;
    {
        const bool branch_taken_0x173314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173314u;
            // 0x173318: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173314) {
            ctx->pc = 0x173320u;
            goto label_173320;
        }
    }
    ctx->pc = 0x17331Cu;
label_17331c:
    // 0x17331c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x17331cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_173320:
    // 0x173320: 0xc05e298  jal         func_178A60
label_173324:
    if (ctx->pc == 0x173324u) {
        ctx->pc = 0x173328u;
        goto label_173328;
    }
    ctx->pc = 0x173320u;
    SET_GPR_U32(ctx, 31, 0x173328u);
    ctx->pc = 0x178A60u;
    if (runtime->hasFunction(0x178A60u)) {
        auto targetFn = runtime->lookupFunction(0x178A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173328u; }
        if (ctx->pc != 0x173328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChangeLOD__11CCharacter2Fi_0x178a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173328u; }
        if (ctx->pc != 0x173328u) { return; }
    }
    ctx->pc = 0x173328u;
label_173328:
    // 0x173328: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_17332c:
    if (ctx->pc == 0x17332Cu) {
        ctx->pc = 0x17332Cu;
            // 0x17332c: 0x8e510124  lw          $s1, 0x124($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
        ctx->pc = 0x173330u;
        goto label_173330;
    }
    ctx->pc = 0x173328u;
    {
        const bool branch_taken_0x173328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17332Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173328u;
            // 0x17332c: 0x8e510124  lw          $s1, 0x124($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173328) {
            ctx->pc = 0x1733F0u;
            goto label_1733f0;
        }
    }
    ctx->pc = 0x173330u;
label_173330:
    // 0x173330: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_173334:
    if (ctx->pc == 0x173334u) {
        ctx->pc = 0x173334u;
            // 0x173334: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173338u;
        goto label_173338;
    }
    ctx->pc = 0x173330u;
    {
        const bool branch_taken_0x173330 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x173334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173330u;
            // 0x173334: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173330) {
            ctx->pc = 0x173348u;
            goto label_173348;
        }
    }
    ctx->pc = 0x173338u;
label_173338:
    // 0x173338: 0xc050bf4  jal         func_142FD0
label_17333c:
    if (ctx->pc == 0x17333Cu) {
        ctx->pc = 0x173340u;
        goto label_173340;
    }
    ctx->pc = 0x173338u;
    SET_GPR_U32(ctx, 31, 0x173340u);
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173340u; }
        if (ctx->pc != 0x173340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173340u; }
        if (ctx->pc != 0x173340u) { return; }
    }
    ctx->pc = 0x173340u;
label_173340:
    // 0x173340: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_173344:
    if (ctx->pc == 0x173344u) {
        ctx->pc = 0x173348u;
        goto label_173348;
    }
    ctx->pc = 0x173340u;
    {
        const bool branch_taken_0x173340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173340) {
            ctx->pc = 0x1735E8u;
            goto label_1735e8;
        }
    }
    ctx->pc = 0x173348u;
label_173348:
    // 0x173348: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x173348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17334c:
    // 0x17334c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17334cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173350:
    // 0x173350: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x173350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_173354:
    // 0x173354: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x173354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_173358:
    // 0x173358: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x173358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_17335c:
    // 0x17335c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17335cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_173360:
    // 0x173360: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x173360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
label_173364:
    // 0x173364: 0x7a270010  lq          $a3, 0x10($s1)
    ctx->pc = 0x173364u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_173368:
    // 0x173368: 0x7a260020  lq          $a2, 0x20($s1)
    ctx->pc = 0x173368u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_17336c:
    // 0x17336c: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x17336cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
label_173370:
    // 0x173370: 0x7d060010  sq          $a2, 0x10($t0)
    ctx->pc = 0x173370u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 6));
label_173374:
    // 0x173374: 0x8e260030  lw          $a2, 0x30($s1)
    ctx->pc = 0x173374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_173378:
    // 0x173378: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x173378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
label_17337c:
    // 0x17337c: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x17337cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_173380:
    // 0x173380: 0xafa600a4  sw          $a2, 0xA4($sp)
    ctx->pc = 0x173380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 6));
label_173384:
    // 0x173384: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x173384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_173388:
    // 0x173388: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x173388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_17338c:
    // 0x17338c: 0x8e26003c  lw          $a2, 0x3C($s1)
    ctx->pc = 0x17338cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_173390:
    // 0x173390: 0xafa600ac  sw          $a2, 0xAC($sp)
    ctx->pc = 0x173390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
label_173394:
    // 0x173394: 0xc6230040  lwc1        $f3, 0x40($s1)
    ctx->pc = 0x173394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_173398:
    // 0x173398: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x173398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17339c:
    // 0x17339c: 0xc6210048  lwc1        $f1, 0x48($s1)
    ctx->pc = 0x17339cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1733a0:
    // 0x1733a0: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x1733a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1733a4:
    // 0x1733a4: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x1733a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1733a8:
    // 0x1733a8: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x1733a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1733ac:
    // 0x1733ac: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1733acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1733b0:
    // 0x1733b0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1733b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1733b4:
    // 0x1733b4: 0xc6230050  lwc1        $f3, 0x50($s1)
    ctx->pc = 0x1733b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1733b8:
    // 0x1733b8: 0xc6220054  lwc1        $f2, 0x54($s1)
    ctx->pc = 0x1733b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1733bc:
    // 0x1733bc: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x1733bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1733c0:
    // 0x1733c0: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x1733c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1733c4:
    // 0x1733c4: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1733c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1733c8:
    // 0x1733c8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1733c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1733cc:
    // 0x1733cc: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1733ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1733d0:
    // 0x1733d0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1733d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1733d4:
    // 0x1733d4: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x1733d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_1733d8:
    // 0x1733d8: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1733d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_1733dc:
    // 0x1733dc: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x1733dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_1733e0:
    // 0x1733e0: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x1733e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_1733e4:
    // 0x1733e4: 0xc05f0ac  jal         func_17C2B0
label_1733e8:
    if (ctx->pc == 0x1733E8u) {
        ctx->pc = 0x1733E8u;
            // 0x1733e8: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
        ctx->pc = 0x1733ECu;
        goto label_1733ec;
    }
    ctx->pc = 0x1733E4u;
    SET_GPR_U32(ctx, 31, 0x1733ECu);
    ctx->pc = 0x1733E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1733E4u;
            // 0x1733e8: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C2B0u;
    if (runtime->hasFunction(0x17C2B0u)) {
        auto targetFn = runtime->lookupFunction(0x17C2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1733ECu; }
        if (ctx->pc != 0x1733ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFrame__12COutLineDrawFP8mgCFrame_0x17c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1733ECu; }
        if (ctx->pc != 0x1733ECu) { return; }
    }
    ctx->pc = 0x1733ECu;
label_1733ec:
    // 0x1733ec: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x1733ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1733f0:
    // 0x1733f0: 0xc05cc2c  jal         func_1730B0
label_1733f4:
    if (ctx->pc == 0x1733F4u) {
        ctx->pc = 0x1733F4u;
            // 0x1733f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1733F8u;
        goto label_1733f8;
    }
    ctx->pc = 0x1733F0u;
    SET_GPR_U32(ctx, 31, 0x1733F8u);
    ctx->pc = 0x1733F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1733F0u;
            // 0x1733f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1730B0u;
    if (runtime->hasFunction(0x1730B0u)) {
        auto targetFn = runtime->lookupFunction(0x1730B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1733F8u; }
        if (ctx->pc != 0x1733F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDeformMesh__11CCharacter2Fv_0x1730b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1733F8u; }
        if (ctx->pc != 0x1733F8u) { return; }
    }
    ctx->pc = 0x1733F8u;
label_1733f8:
    // 0x1733f8: 0x12200064  beqz        $s1, . + 4 + (0x64 << 2)
label_1733fc:
    if (ctx->pc == 0x1733FCu) {
        ctx->pc = 0x1733FCu;
            // 0x1733fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173400u;
        goto label_173400;
    }
    ctx->pc = 0x1733F8u;
    {
        const bool branch_taken_0x1733f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1733FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1733F8u;
            // 0x1733fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1733f8) {
            ctx->pc = 0x17358Cu;
            goto label_17358c;
        }
    }
    ctx->pc = 0x173400u;
label_173400:
    // 0x173400: 0x8e420138  lw          $v0, 0x138($s2)
    ctx->pc = 0x173400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
label_173404:
    // 0x173404: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x173404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_173408:
    // 0x173408: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x173408u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_17340c:
    // 0x17340c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_173410:
    if (ctx->pc == 0x173410u) {
        ctx->pc = 0x173410u;
            // 0x173410: 0x27a30060  addiu       $v1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x173414u;
        goto label_173414;
    }
    ctx->pc = 0x17340Cu;
    {
        const bool branch_taken_0x17340c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17340Cu;
            // 0x173410: 0x27a30060  addiu       $v1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17340c) {
            ctx->pc = 0x17342Cu;
            goto label_17342c;
        }
    }
    ctx->pc = 0x173414u;
label_173414:
    // 0x173414: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x173414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_173418:
    // 0x173418: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17341c:
    // 0x17341c: 0xc05d3d4  jal         func_174F50
label_173420:
    if (ctx->pc == 0x173420u) {
        ctx->pc = 0x173420u;
            // 0x173420: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x173424u;
        goto label_173424;
    }
    ctx->pc = 0x17341Cu;
    SET_GPR_U32(ctx, 31, 0x173424u);
    ctx->pc = 0x173420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17341Cu;
            // 0x173420: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174F50u;
    if (runtime->hasFunction(0x174F50u)) {
        auto targetFn = runtime->lookupFunction(0x174F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173424u; }
        if (ctx->pc != 0x173424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiPf_0x174f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173424u; }
        if (ctx->pc != 0x173424u) { return; }
    }
    ctx->pc = 0x173424u;
label_173424:
    // 0x173424: 0x10000006  b           . + 4 + (0x6 << 2)
label_173428:
    if (ctx->pc == 0x173428u) {
        ctx->pc = 0x173428u;
            // 0x173428: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x17342Cu;
        goto label_17342c;
    }
    ctx->pc = 0x173424u;
    {
        const bool branch_taken_0x173424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173424u;
            // 0x173428: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173424) {
            ctx->pc = 0x173440u;
            goto label_173440;
        }
    }
    ctx->pc = 0x17342Cu;
label_17342c:
    // 0x17342c: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x17342cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_173430:
    // 0x173430: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x173430u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_173434:
    // 0x173434: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x173434u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_173438:
    // 0x173438: 0xe7b500ec  swc1        $f21, 0xEC($sp)
    ctx->pc = 0x173438u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_17343c:
    // 0x17343c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x17343cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_173440:
    // 0x173440: 0xc0516b4  jal         func_145AD0
label_173444:
    if (ctx->pc == 0x173444u) {
        ctx->pc = 0x173444u;
            // 0x173444: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x173448u;
        goto label_173448;
    }
    ctx->pc = 0x173440u;
    SET_GPR_U32(ctx, 31, 0x173448u);
    ctx->pc = 0x173444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173440u;
            // 0x173444: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145AD0u;
    if (runtime->hasFunction(0x145AD0u)) {
        auto targetFn = runtime->lookupFunction(0x145AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173448u; }
        if (ctx->pc != 0x173448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldView__FPfPf_0x145ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173448u; }
        if (ctx->pc != 0x173448u) { return; }
    }
    ctx->pc = 0x173448u;
label_173448:
    // 0x173448: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x173448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17344c:
    // 0x17344c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x17344cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_173450:
    // 0x173450: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x173450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_173454:
    // 0x173454: 0x0  nop
    ctx->pc = 0x173454u;
    // NOP
label_173458:
    // 0x173458: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x173458u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17345c:
    // 0x17345c: 0x0  nop
    ctx->pc = 0x17345cu;
    // NOP
label_173460:
    // 0x173460: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_173464:
    if (ctx->pc == 0x173464u) {
        ctx->pc = 0x173464u;
            // 0x173464: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x173468u;
        goto label_173468;
    }
    ctx->pc = 0x173460u;
    {
        const bool branch_taken_0x173460 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x173464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173460u;
            // 0x173464: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173460) {
            ctx->pc = 0x1734A8u;
            goto label_1734a8;
        }
    }
    ctx->pc = 0x173468u;
label_173468:
    // 0x173468: 0x46010081  sub.s       $f2, $f0, $f1
    ctx->pc = 0x173468u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_17346c:
    // 0x17346c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x17346cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_173470:
    // 0x173470: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_173474:
    // 0x173474: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x173474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_173478:
    // 0x173478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17347c:
    // 0x17347c: 0x0  nop
    ctx->pc = 0x17347cu;
    // NOP
label_173480:
    // 0x173480: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x173480u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_173484:
    // 0x173484: 0x46010541  sub.s       $f21, $f0, $f1
    ctx->pc = 0x173484u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_173488:
    // 0x173488: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17348c:
    // 0x17348c: 0x0  nop
    ctx->pc = 0x17348cu;
    // NOP
label_173490:
    // 0x173490: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x173490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_173494:
    // 0x173494: 0x0  nop
    ctx->pc = 0x173494u;
    // NOP
label_173498:
    // 0x173498: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_17349c:
    if (ctx->pc == 0x17349Cu) {
        ctx->pc = 0x1734A0u;
        goto label_1734a0;
    }
    ctx->pc = 0x173498u;
    {
        const bool branch_taken_0x173498 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x173498) {
            ctx->pc = 0x1734A4u;
            goto label_1734a4;
        }
    }
    ctx->pc = 0x1734A0u;
label_1734a0:
    // 0x1734a0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1734a0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1734a4:
    // 0x1734a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1734a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1734a8:
    // 0x1734a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1734a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1734ac:
    // 0x1734ac: 0x0  nop
    ctx->pc = 0x1734acu;
    // NOP
label_1734b0:
    // 0x1734b0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1734b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1734b4:
    // 0x1734b4: 0x0  nop
    ctx->pc = 0x1734b4u;
    // NOP
label_1734b8:
    // 0x1734b8: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_1734bc:
    if (ctx->pc == 0x1734BCu) {
        ctx->pc = 0x1734C0u;
        goto label_1734c0;
    }
    ctx->pc = 0x1734B8u;
    {
        const bool branch_taken_0x1734b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1734b8) {
            ctx->pc = 0x17355Cu;
            goto label_17355c;
        }
    }
    ctx->pc = 0x1734C0u;
label_1734c0:
    // 0x1734c0: 0x8e440124  lw          $a0, 0x124($s2)
    ctx->pc = 0x1734c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
label_1734c4:
    // 0x1734c4: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_1734c8:
    if (ctx->pc == 0x1734C8u) {
        ctx->pc = 0x1734C8u;
            // 0x1734c8: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x1734CCu;
        goto label_1734cc;
    }
    ctx->pc = 0x1734C4u;
    {
        const bool branch_taken_0x1734c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1734C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1734C4u;
            // 0x1734c8: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1734c4) {
            ctx->pc = 0x1734FCu;
            goto label_1734fc;
        }
    }
    ctx->pc = 0x1734CCu;
label_1734cc:
    // 0x1734cc: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1734ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1734d0:
    // 0x1734d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1734d4:
    if (ctx->pc == 0x1734D4u) {
        ctx->pc = 0x1734D8u;
        goto label_1734d8;
    }
    ctx->pc = 0x1734D0u;
    {
        const bool branch_taken_0x1734d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1734d0) {
            ctx->pc = 0x1734F0u;
            goto label_1734f0;
        }
    }
    ctx->pc = 0x1734D8u;
label_1734d8:
    // 0x1734d8: 0x8c4500f4  lw          $a1, 0xF4($v0)
    ctx->pc = 0x1734d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
label_1734dc:
    // 0x1734dc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_1734e0:
    if (ctx->pc == 0x1734E0u) {
        ctx->pc = 0x1734E4u;
        goto label_1734e4;
    }
    ctx->pc = 0x1734DCu;
    {
        const bool branch_taken_0x1734dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1734dc) {
            ctx->pc = 0x1734F0u;
            goto label_1734f0;
        }
    }
    ctx->pc = 0x1734E4u;
label_1734e4:
    // 0x1734e4: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1734e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1734e8:
    // 0x1734e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1734e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1734ec:
    // 0x1734ec: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x1734ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
label_1734f0:
    // 0x1734f0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1734f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1734f4:
    // 0x1734f4: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
label_1734f8:
    if (ctx->pc == 0x1734F8u) {
        ctx->pc = 0x1734FCu;
        goto label_1734fc;
    }
    ctx->pc = 0x1734F4u;
    {
        const bool branch_taken_0x1734f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1734f4) {
            ctx->pc = 0x1734CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1734cc;
        }
    }
    ctx->pc = 0x1734FCu;
label_1734fc:
    // 0x1734fc: 0x0  nop
    ctx->pc = 0x1734fcu;
    // NOP
label_173500:
    // 0x173500: 0x8e510124  lw          $s1, 0x124($s2)
    ctx->pc = 0x173500u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
label_173504:
    // 0x173504: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x173504u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_173508:
    // 0x173508: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x173508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_17350c:
    // 0x17350c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x17350cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_173510:
    // 0x173510: 0xc05f0b0  jal         func_17C2C0
label_173514:
    if (ctx->pc == 0x173514u) {
        ctx->pc = 0x173514u;
            // 0x173514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173518u;
        goto label_173518;
    }
    ctx->pc = 0x173510u;
    SET_GPR_U32(ctx, 31, 0x173518u);
    ctx->pc = 0x173514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173510u;
            // 0x173514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C2C0u;
    if (runtime->hasFunction(0x17C2C0u)) {
        auto targetFn = runtime->lookupFunction(0x17C2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173518u; }
        if (ctx->pc != 0x173518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__12COutLineDrawFPfff_0x17c2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173518u; }
        if (ctx->pc != 0x173518u) { return; }
    }
    ctx->pc = 0x173518u;
label_173518:
    // 0x173518: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
label_17351c:
    if (ctx->pc == 0x17351Cu) {
        ctx->pc = 0x17351Cu;
            // 0x17351c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x173520u;
        goto label_173520;
    }
    ctx->pc = 0x173518u;
    {
        const bool branch_taken_0x173518 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17351Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173518u;
            // 0x17351c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173518) {
            ctx->pc = 0x1735ACu;
            goto label_1735ac;
        }
    }
    ctx->pc = 0x173520u;
label_173520:
    // 0x173520: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x173520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_173524:
    // 0x173524: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_173528:
    if (ctx->pc == 0x173528u) {
        ctx->pc = 0x17352Cu;
        goto label_17352c;
    }
    ctx->pc = 0x173524u;
    {
        const bool branch_taken_0x173524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173524) {
            ctx->pc = 0x173544u;
            goto label_173544;
        }
    }
    ctx->pc = 0x17352Cu;
label_17352c:
    // 0x17352c: 0x8c4300f4  lw          $v1, 0xF4($v0)
    ctx->pc = 0x17352cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
label_173530:
    // 0x173530: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_173534:
    if (ctx->pc == 0x173534u) {
        ctx->pc = 0x173538u;
        goto label_173538;
    }
    ctx->pc = 0x173530u;
    {
        const bool branch_taken_0x173530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173530) {
            ctx->pc = 0x173544u;
            goto label_173544;
        }
    }
    ctx->pc = 0x173538u;
label_173538:
    // 0x173538: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x173538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_17353c:
    // 0x17353c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x17353cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_173540:
    // 0x173540: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x173540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_173544:
    // 0x173544: 0x0  nop
    ctx->pc = 0x173544u;
    // NOP
label_173548:
    // 0x173548: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x173548u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17354c:
    // 0x17354c: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
label_173550:
    if (ctx->pc == 0x173550u) {
        ctx->pc = 0x173554u;
        goto label_173554;
    }
    ctx->pc = 0x17354Cu;
    {
        const bool branch_taken_0x17354c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x17354c) {
            ctx->pc = 0x173520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_173520;
        }
    }
    ctx->pc = 0x173554u;
label_173554:
    // 0x173554: 0x10000016  b           . + 4 + (0x16 << 2)
label_173558:
    if (ctx->pc == 0x173558u) {
        ctx->pc = 0x173558u;
            // 0x173558: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17355Cu;
        goto label_17355c;
    }
    ctx->pc = 0x173554u;
    {
        const bool branch_taken_0x173554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173554u;
            // 0x173558: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173554) {
            ctx->pc = 0x1735B0u;
            goto label_1735b0;
        }
    }
    ctx->pc = 0x17355Cu;
label_17355c:
    // 0x17355c: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_173560:
    if (ctx->pc == 0x173560u) {
        ctx->pc = 0x173564u;
        goto label_173564;
    }
    ctx->pc = 0x17355Cu;
    {
        const bool branch_taken_0x17355c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17355c) {
            ctx->pc = 0x1735ACu;
            goto label_1735ac;
        }
    }
    ctx->pc = 0x173564u;
label_173564:
    // 0x173564: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x173564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173568:
    // 0x173568: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x173568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_17356c:
    // 0x17356c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x17356cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_173570:
    // 0x173570: 0xc05f0b0  jal         func_17C2C0
label_173574:
    if (ctx->pc == 0x173574u) {
        ctx->pc = 0x173574u;
            // 0x173574: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x173578u;
        goto label_173578;
    }
    ctx->pc = 0x173570u;
    SET_GPR_U32(ctx, 31, 0x173578u);
    ctx->pc = 0x173574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173570u;
            // 0x173574: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C2C0u;
    if (runtime->hasFunction(0x17C2C0u)) {
        auto targetFn = runtime->lookupFunction(0x17C2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173578u; }
        if (ctx->pc != 0x173578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__12COutLineDrawFPfff_0x17c2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173578u; }
        if (ctx->pc != 0x173578u) { return; }
    }
    ctx->pc = 0x173578u;
label_173578:
    // 0x173578: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x173578u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17357c:
    // 0x17357c: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
label_173580:
    if (ctx->pc == 0x173580u) {
        ctx->pc = 0x173580u;
            // 0x173580: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x173584u;
        goto label_173584;
    }
    ctx->pc = 0x17357Cu;
    {
        const bool branch_taken_0x17357c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x173580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17357Cu;
            // 0x173580: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17357c) {
            ctx->pc = 0x173564u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_173564;
        }
    }
    ctx->pc = 0x173584u;
label_173584:
    // 0x173584: 0x10000009  b           . + 4 + (0x9 << 2)
label_173588:
    if (ctx->pc == 0x173588u) {
        ctx->pc = 0x17358Cu;
        goto label_17358c;
    }
    ctx->pc = 0x173584u;
    {
        const bool branch_taken_0x173584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173584) {
            ctx->pc = 0x1735ACu;
            goto label_1735ac;
        }
    }
    ctx->pc = 0x17358Cu;
label_17358c:
    // 0x17358c: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x17358cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_173590:
    // 0x173590: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_173594:
    if (ctx->pc == 0x173594u) {
        ctx->pc = 0x173594u;
            // 0x173594: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x173598u;
        goto label_173598;
    }
    ctx->pc = 0x173590u;
    {
        const bool branch_taken_0x173590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x173594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173590u;
            // 0x173594: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173590) {
            ctx->pc = 0x1735A0u;
            goto label_1735a0;
        }
    }
    ctx->pc = 0x173598u;
label_173598:
    // 0x173598: 0xc04df4c  jal         func_137D30
label_17359c:
    if (ctx->pc == 0x17359Cu) {
        ctx->pc = 0x17359Cu;
            // 0x17359c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1735A0u;
        goto label_1735a0;
    }
    ctx->pc = 0x173598u;
    SET_GPR_U32(ctx, 31, 0x1735A0u);
    ctx->pc = 0x17359Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173598u;
            // 0x17359c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137D30u;
    if (runtime->hasFunction(0x137D30u)) {
        auto targetFn = runtime->lookupFunction(0x137D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1735A0u; }
        if (ctx->pc != 0x1735A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParamObjAlpha__8mgCFrameFfi_0x137d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1735A0u; }
        if (ctx->pc != 0x1735A0u) { return; }
    }
    ctx->pc = 0x1735A0u;
label_1735a0:
    // 0x1735a0: 0xc050bf4  jal         func_142FD0
label_1735a4:
    if (ctx->pc == 0x1735A4u) {
        ctx->pc = 0x1735A4u;
            // 0x1735a4: 0x8e440070  lw          $a0, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->pc = 0x1735A8u;
        goto label_1735a8;
    }
    ctx->pc = 0x1735A0u;
    SET_GPR_U32(ctx, 31, 0x1735A8u);
    ctx->pc = 0x1735A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1735A0u;
            // 0x1735a4: 0x8e440070  lw          $a0, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1735A8u; }
        if (ctx->pc != 0x1735A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1735A8u; }
        if (ctx->pc != 0x1735A8u) { return; }
    }
    ctx->pc = 0x1735A8u;
label_1735a8:
    // 0x1735a8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1735a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1735ac:
    // 0x1735ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1735acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1735b0:
    // 0x1735b0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1735b4:
    if (ctx->pc == 0x1735B4u) {
        ctx->pc = 0x1735B4u;
            // 0x1735b4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1735B8u;
        goto label_1735b8;
    }
    ctx->pc = 0x1735B0u;
    {
        const bool branch_taken_0x1735b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1735B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1735B0u;
            // 0x1735b4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1735b0) {
            ctx->pc = 0x1735D4u;
            goto label_1735d4;
        }
    }
    ctx->pc = 0x1735B8u;
label_1735b8:
    // 0x1735b8: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x1735b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
label_1735bc:
    // 0x1735bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1735bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1735c0:
    // 0x1735c0: 0xc05eb2c  jal         func_17ACB0
label_1735c4:
    if (ctx->pc == 0x1735C4u) {
        ctx->pc = 0x1735C4u;
            // 0x1735c4: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x1735C8u;
        goto label_1735c8;
    }
    ctx->pc = 0x1735C0u;
    SET_GPR_U32(ctx, 31, 0x1735C8u);
    ctx->pc = 0x1735C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1735C0u;
            // 0x1735c4: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17ACB0u;
    if (runtime->hasFunction(0x17ACB0u)) {
        auto targetFn = runtime->lookupFunction(0x17ACB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1735C8u; }
        if (ctx->pc != 0x1735C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSub__13CDynamicAnimeFi_0x17acb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1735C8u; }
        if (ctx->pc != 0x1735C8u) { return; }
    }
    ctx->pc = 0x1735C8u;
label_1735c8:
    // 0x1735c8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1735c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1735cc:
    // 0x1735cc: 0x26730090  addiu       $s3, $s3, 0x90
    ctx->pc = 0x1735ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_1735d0:
    // 0x1735d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1735d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1735d4:
    // 0x1735d4: 0x0  nop
    ctx->pc = 0x1735d4u;
    // NOP
label_1735d8:
    // 0x1735d8: 0x8e42012c  lw          $v0, 0x12C($s2)
    ctx->pc = 0x1735d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
label_1735dc:
    // 0x1735dc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1735dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1735e0:
    // 0x1735e0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1735e4:
    if (ctx->pc == 0x1735E4u) {
        ctx->pc = 0x1735E4u;
            // 0x1735e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1735E8u;
        goto label_1735e8;
    }
    ctx->pc = 0x1735E0u;
    {
        const bool branch_taken_0x1735e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1735E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1735E0u;
            // 0x1735e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1735e0) {
            ctx->pc = 0x1735B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1735b8;
        }
    }
    ctx->pc = 0x1735E8u;
label_1735e8:
    // 0x1735e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1735e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1735ec:
    // 0x1735ec: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1735ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1735f0:
    // 0x1735f0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1735f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1735f4:
    // 0x1735f4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1735f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1735f8:
    // 0x1735f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1735f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1735fc:
    // 0x1735fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1735fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_173600:
    // 0x173600: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x173600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_173604:
    // 0x173604: 0x3e00008  jr          $ra
label_173608:
    if (ctx->pc == 0x173608u) {
        ctx->pc = 0x173608u;
            // 0x173608: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x17360Cu;
        goto label_fallthrough_0x173604;
    }
    ctx->pc = 0x173604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173604u;
            // 0x173608: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x173604:
    ctx->pc = 0x17360Cu;
}
