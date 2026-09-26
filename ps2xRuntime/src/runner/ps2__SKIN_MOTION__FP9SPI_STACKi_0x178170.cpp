#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SKIN_MOTION__FP9SPI_STACKi
// Address: 0x178170 - 0x178618
void ps2__SKIN_MOTION__FP9SPI_STACKi_0x178170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SKIN_MOTION__FP9SPI_STACKi_0x178170");
#endif

    switch (ctx->pc) {
        case 0x178170u: goto label_178170;
        case 0x178174u: goto label_178174;
        case 0x178178u: goto label_178178;
        case 0x17817cu: goto label_17817c;
        case 0x178180u: goto label_178180;
        case 0x178184u: goto label_178184;
        case 0x178188u: goto label_178188;
        case 0x17818cu: goto label_17818c;
        case 0x178190u: goto label_178190;
        case 0x178194u: goto label_178194;
        case 0x178198u: goto label_178198;
        case 0x17819cu: goto label_17819c;
        case 0x1781a0u: goto label_1781a0;
        case 0x1781a4u: goto label_1781a4;
        case 0x1781a8u: goto label_1781a8;
        case 0x1781acu: goto label_1781ac;
        case 0x1781b0u: goto label_1781b0;
        case 0x1781b4u: goto label_1781b4;
        case 0x1781b8u: goto label_1781b8;
        case 0x1781bcu: goto label_1781bc;
        case 0x1781c0u: goto label_1781c0;
        case 0x1781c4u: goto label_1781c4;
        case 0x1781c8u: goto label_1781c8;
        case 0x1781ccu: goto label_1781cc;
        case 0x1781d0u: goto label_1781d0;
        case 0x1781d4u: goto label_1781d4;
        case 0x1781d8u: goto label_1781d8;
        case 0x1781dcu: goto label_1781dc;
        case 0x1781e0u: goto label_1781e0;
        case 0x1781e4u: goto label_1781e4;
        case 0x1781e8u: goto label_1781e8;
        case 0x1781ecu: goto label_1781ec;
        case 0x1781f0u: goto label_1781f0;
        case 0x1781f4u: goto label_1781f4;
        case 0x1781f8u: goto label_1781f8;
        case 0x1781fcu: goto label_1781fc;
        case 0x178200u: goto label_178200;
        case 0x178204u: goto label_178204;
        case 0x178208u: goto label_178208;
        case 0x17820cu: goto label_17820c;
        case 0x178210u: goto label_178210;
        case 0x178214u: goto label_178214;
        case 0x178218u: goto label_178218;
        case 0x17821cu: goto label_17821c;
        case 0x178220u: goto label_178220;
        case 0x178224u: goto label_178224;
        case 0x178228u: goto label_178228;
        case 0x17822cu: goto label_17822c;
        case 0x178230u: goto label_178230;
        case 0x178234u: goto label_178234;
        case 0x178238u: goto label_178238;
        case 0x17823cu: goto label_17823c;
        case 0x178240u: goto label_178240;
        case 0x178244u: goto label_178244;
        case 0x178248u: goto label_178248;
        case 0x17824cu: goto label_17824c;
        case 0x178250u: goto label_178250;
        case 0x178254u: goto label_178254;
        case 0x178258u: goto label_178258;
        case 0x17825cu: goto label_17825c;
        case 0x178260u: goto label_178260;
        case 0x178264u: goto label_178264;
        case 0x178268u: goto label_178268;
        case 0x17826cu: goto label_17826c;
        case 0x178270u: goto label_178270;
        case 0x178274u: goto label_178274;
        case 0x178278u: goto label_178278;
        case 0x17827cu: goto label_17827c;
        case 0x178280u: goto label_178280;
        case 0x178284u: goto label_178284;
        case 0x178288u: goto label_178288;
        case 0x17828cu: goto label_17828c;
        case 0x178290u: goto label_178290;
        case 0x178294u: goto label_178294;
        case 0x178298u: goto label_178298;
        case 0x17829cu: goto label_17829c;
        case 0x1782a0u: goto label_1782a0;
        case 0x1782a4u: goto label_1782a4;
        case 0x1782a8u: goto label_1782a8;
        case 0x1782acu: goto label_1782ac;
        case 0x1782b0u: goto label_1782b0;
        case 0x1782b4u: goto label_1782b4;
        case 0x1782b8u: goto label_1782b8;
        case 0x1782bcu: goto label_1782bc;
        case 0x1782c0u: goto label_1782c0;
        case 0x1782c4u: goto label_1782c4;
        case 0x1782c8u: goto label_1782c8;
        case 0x1782ccu: goto label_1782cc;
        case 0x1782d0u: goto label_1782d0;
        case 0x1782d4u: goto label_1782d4;
        case 0x1782d8u: goto label_1782d8;
        case 0x1782dcu: goto label_1782dc;
        case 0x1782e0u: goto label_1782e0;
        case 0x1782e4u: goto label_1782e4;
        case 0x1782e8u: goto label_1782e8;
        case 0x1782ecu: goto label_1782ec;
        case 0x1782f0u: goto label_1782f0;
        case 0x1782f4u: goto label_1782f4;
        case 0x1782f8u: goto label_1782f8;
        case 0x1782fcu: goto label_1782fc;
        case 0x178300u: goto label_178300;
        case 0x178304u: goto label_178304;
        case 0x178308u: goto label_178308;
        case 0x17830cu: goto label_17830c;
        case 0x178310u: goto label_178310;
        case 0x178314u: goto label_178314;
        case 0x178318u: goto label_178318;
        case 0x17831cu: goto label_17831c;
        case 0x178320u: goto label_178320;
        case 0x178324u: goto label_178324;
        case 0x178328u: goto label_178328;
        case 0x17832cu: goto label_17832c;
        case 0x178330u: goto label_178330;
        case 0x178334u: goto label_178334;
        case 0x178338u: goto label_178338;
        case 0x17833cu: goto label_17833c;
        case 0x178340u: goto label_178340;
        case 0x178344u: goto label_178344;
        case 0x178348u: goto label_178348;
        case 0x17834cu: goto label_17834c;
        case 0x178350u: goto label_178350;
        case 0x178354u: goto label_178354;
        case 0x178358u: goto label_178358;
        case 0x17835cu: goto label_17835c;
        case 0x178360u: goto label_178360;
        case 0x178364u: goto label_178364;
        case 0x178368u: goto label_178368;
        case 0x17836cu: goto label_17836c;
        case 0x178370u: goto label_178370;
        case 0x178374u: goto label_178374;
        case 0x178378u: goto label_178378;
        case 0x17837cu: goto label_17837c;
        case 0x178380u: goto label_178380;
        case 0x178384u: goto label_178384;
        case 0x178388u: goto label_178388;
        case 0x17838cu: goto label_17838c;
        case 0x178390u: goto label_178390;
        case 0x178394u: goto label_178394;
        case 0x178398u: goto label_178398;
        case 0x17839cu: goto label_17839c;
        case 0x1783a0u: goto label_1783a0;
        case 0x1783a4u: goto label_1783a4;
        case 0x1783a8u: goto label_1783a8;
        case 0x1783acu: goto label_1783ac;
        case 0x1783b0u: goto label_1783b0;
        case 0x1783b4u: goto label_1783b4;
        case 0x1783b8u: goto label_1783b8;
        case 0x1783bcu: goto label_1783bc;
        case 0x1783c0u: goto label_1783c0;
        case 0x1783c4u: goto label_1783c4;
        case 0x1783c8u: goto label_1783c8;
        case 0x1783ccu: goto label_1783cc;
        case 0x1783d0u: goto label_1783d0;
        case 0x1783d4u: goto label_1783d4;
        case 0x1783d8u: goto label_1783d8;
        case 0x1783dcu: goto label_1783dc;
        case 0x1783e0u: goto label_1783e0;
        case 0x1783e4u: goto label_1783e4;
        case 0x1783e8u: goto label_1783e8;
        case 0x1783ecu: goto label_1783ec;
        case 0x1783f0u: goto label_1783f0;
        case 0x1783f4u: goto label_1783f4;
        case 0x1783f8u: goto label_1783f8;
        case 0x1783fcu: goto label_1783fc;
        case 0x178400u: goto label_178400;
        case 0x178404u: goto label_178404;
        case 0x178408u: goto label_178408;
        case 0x17840cu: goto label_17840c;
        case 0x178410u: goto label_178410;
        case 0x178414u: goto label_178414;
        case 0x178418u: goto label_178418;
        case 0x17841cu: goto label_17841c;
        case 0x178420u: goto label_178420;
        case 0x178424u: goto label_178424;
        case 0x178428u: goto label_178428;
        case 0x17842cu: goto label_17842c;
        case 0x178430u: goto label_178430;
        case 0x178434u: goto label_178434;
        case 0x178438u: goto label_178438;
        case 0x17843cu: goto label_17843c;
        case 0x178440u: goto label_178440;
        case 0x178444u: goto label_178444;
        case 0x178448u: goto label_178448;
        case 0x17844cu: goto label_17844c;
        case 0x178450u: goto label_178450;
        case 0x178454u: goto label_178454;
        case 0x178458u: goto label_178458;
        case 0x17845cu: goto label_17845c;
        case 0x178460u: goto label_178460;
        case 0x178464u: goto label_178464;
        case 0x178468u: goto label_178468;
        case 0x17846cu: goto label_17846c;
        case 0x178470u: goto label_178470;
        case 0x178474u: goto label_178474;
        case 0x178478u: goto label_178478;
        case 0x17847cu: goto label_17847c;
        case 0x178480u: goto label_178480;
        case 0x178484u: goto label_178484;
        case 0x178488u: goto label_178488;
        case 0x17848cu: goto label_17848c;
        case 0x178490u: goto label_178490;
        case 0x178494u: goto label_178494;
        case 0x178498u: goto label_178498;
        case 0x17849cu: goto label_17849c;
        case 0x1784a0u: goto label_1784a0;
        case 0x1784a4u: goto label_1784a4;
        case 0x1784a8u: goto label_1784a8;
        case 0x1784acu: goto label_1784ac;
        case 0x1784b0u: goto label_1784b0;
        case 0x1784b4u: goto label_1784b4;
        case 0x1784b8u: goto label_1784b8;
        case 0x1784bcu: goto label_1784bc;
        case 0x1784c0u: goto label_1784c0;
        case 0x1784c4u: goto label_1784c4;
        case 0x1784c8u: goto label_1784c8;
        case 0x1784ccu: goto label_1784cc;
        case 0x1784d0u: goto label_1784d0;
        case 0x1784d4u: goto label_1784d4;
        case 0x1784d8u: goto label_1784d8;
        case 0x1784dcu: goto label_1784dc;
        case 0x1784e0u: goto label_1784e0;
        case 0x1784e4u: goto label_1784e4;
        case 0x1784e8u: goto label_1784e8;
        case 0x1784ecu: goto label_1784ec;
        case 0x1784f0u: goto label_1784f0;
        case 0x1784f4u: goto label_1784f4;
        case 0x1784f8u: goto label_1784f8;
        case 0x1784fcu: goto label_1784fc;
        case 0x178500u: goto label_178500;
        case 0x178504u: goto label_178504;
        case 0x178508u: goto label_178508;
        case 0x17850cu: goto label_17850c;
        case 0x178510u: goto label_178510;
        case 0x178514u: goto label_178514;
        case 0x178518u: goto label_178518;
        case 0x17851cu: goto label_17851c;
        case 0x178520u: goto label_178520;
        case 0x178524u: goto label_178524;
        case 0x178528u: goto label_178528;
        case 0x17852cu: goto label_17852c;
        case 0x178530u: goto label_178530;
        case 0x178534u: goto label_178534;
        case 0x178538u: goto label_178538;
        case 0x17853cu: goto label_17853c;
        case 0x178540u: goto label_178540;
        case 0x178544u: goto label_178544;
        case 0x178548u: goto label_178548;
        case 0x17854cu: goto label_17854c;
        case 0x178550u: goto label_178550;
        case 0x178554u: goto label_178554;
        case 0x178558u: goto label_178558;
        case 0x17855cu: goto label_17855c;
        case 0x178560u: goto label_178560;
        case 0x178564u: goto label_178564;
        case 0x178568u: goto label_178568;
        case 0x17856cu: goto label_17856c;
        case 0x178570u: goto label_178570;
        case 0x178574u: goto label_178574;
        case 0x178578u: goto label_178578;
        case 0x17857cu: goto label_17857c;
        case 0x178580u: goto label_178580;
        case 0x178584u: goto label_178584;
        case 0x178588u: goto label_178588;
        case 0x17858cu: goto label_17858c;
        case 0x178590u: goto label_178590;
        case 0x178594u: goto label_178594;
        case 0x178598u: goto label_178598;
        case 0x17859cu: goto label_17859c;
        case 0x1785a0u: goto label_1785a0;
        case 0x1785a4u: goto label_1785a4;
        case 0x1785a8u: goto label_1785a8;
        case 0x1785acu: goto label_1785ac;
        case 0x1785b0u: goto label_1785b0;
        case 0x1785b4u: goto label_1785b4;
        case 0x1785b8u: goto label_1785b8;
        case 0x1785bcu: goto label_1785bc;
        case 0x1785c0u: goto label_1785c0;
        case 0x1785c4u: goto label_1785c4;
        case 0x1785c8u: goto label_1785c8;
        case 0x1785ccu: goto label_1785cc;
        case 0x1785d0u: goto label_1785d0;
        case 0x1785d4u: goto label_1785d4;
        case 0x1785d8u: goto label_1785d8;
        case 0x1785dcu: goto label_1785dc;
        case 0x1785e0u: goto label_1785e0;
        case 0x1785e4u: goto label_1785e4;
        case 0x1785e8u: goto label_1785e8;
        case 0x1785ecu: goto label_1785ec;
        case 0x1785f0u: goto label_1785f0;
        case 0x1785f4u: goto label_1785f4;
        case 0x1785f8u: goto label_1785f8;
        case 0x1785fcu: goto label_1785fc;
        case 0x178600u: goto label_178600;
        case 0x178604u: goto label_178604;
        case 0x178608u: goto label_178608;
        case 0x17860cu: goto label_17860c;
        case 0x178610u: goto label_178610;
        case 0x178614u: goto label_178614;
        default: break;
    }

    ctx->pc = 0x178170u;

label_178170:
    // 0x178170: 0x3c01fffe  lui         $at, 0xFFFE
    ctx->pc = 0x178170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65534 << 16));
label_178174:
    // 0x178174: 0x34216c70  ori         $at, $at, 0x6C70
    ctx->pc = 0x178174u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27760);
label_178178:
    // 0x178178: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x178178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_17817c:
    // 0x17817c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x17817cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_178180:
    // 0x178180: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x178180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_178184:
    // 0x178184: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x178184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_178188:
    // 0x178188: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x178188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_17818c:
    // 0x17818c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17818cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_178190:
    // 0x178190: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x178190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_178194:
    // 0x178194: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_178198:
    // 0x178198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17819c:
    // 0x17819c: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x17819cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
label_1781a0:
    // 0x1781a0: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x1781a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_1781a4:
    // 0x1781a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1781a8:
    if (ctx->pc == 0x1781A8u) {
        ctx->pc = 0x1781A8u;
            // 0x1781a8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1781ACu;
        goto label_1781ac;
    }
    ctx->pc = 0x1781A4u;
    {
        const bool branch_taken_0x1781a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1781A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1781A4u;
            // 0x1781a8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1781a4) {
            ctx->pc = 0x1781B4u;
            goto label_1781b4;
        }
    }
    ctx->pc = 0x1781ACu;
label_1781ac:
    // 0x1781ac: 0x1000010e  b           . + 4 + (0x10E << 2)
label_1781b0:
    if (ctx->pc == 0x1781B0u) {
        ctx->pc = 0x1781B0u;
            // 0x1781b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1781B4u;
        goto label_1781b4;
    }
    ctx->pc = 0x1781ACu;
    {
        const bool branch_taken_0x1781ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1781B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1781ACu;
            // 0x1781b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1781ac) {
            ctx->pc = 0x1785E8u;
            goto label_1785e8;
        }
    }
    ctx->pc = 0x1781B4u;
label_1781b4:
    // 0x1781b4: 0xc0518f8  jal         func_1463E0
label_1781b8:
    if (ctx->pc == 0x1781B8u) {
        ctx->pc = 0x1781BCu;
        goto label_1781bc;
    }
    ctx->pc = 0x1781B4u;
    SET_GPR_U32(ctx, 31, 0x1781BCu);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1781BCu; }
        if (ctx->pc != 0x1781BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1781BCu; }
        if (ctx->pc != 0x1781BCu) { return; }
    }
    ctx->pc = 0x1781BCu;
label_1781bc:
    // 0x1781bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1781bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1781c0:
    // 0x1781c0: 0xaf8289b4  sw          $v0, -0x764C($gp)
    ctx->pc = 0x1781c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937012), GPR_U32(ctx, 2));
label_1781c4:
    // 0x1781c4: 0xc05191c  jal         func_146470
label_1781c8:
    if (ctx->pc == 0x1781C8u) {
        ctx->pc = 0x1781C8u;
            // 0x1781c8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1781CCu;
        goto label_1781cc;
    }
    ctx->pc = 0x1781C4u;
    SET_GPR_U32(ctx, 31, 0x1781CCu);
    ctx->pc = 0x1781C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1781C4u;
            // 0x1781c8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1781CCu; }
        if (ctx->pc != 0x1781CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1781CCu; }
        if (ctx->pc != 0x1781CCu) { return; }
    }
    ctx->pc = 0x1781CCu;
label_1781cc:
    // 0x1781cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1781ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1781d0:
    // 0x1781d0: 0xc05191c  jal         func_146470
label_1781d4:
    if (ctx->pc == 0x1781D4u) {
        ctx->pc = 0x1781D4u;
            // 0x1781d4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1781D8u;
        goto label_1781d8;
    }
    ctx->pc = 0x1781D0u;
    SET_GPR_U32(ctx, 31, 0x1781D8u);
    ctx->pc = 0x1781D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1781D0u;
            // 0x1781d4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1781D8u; }
        if (ctx->pc != 0x1781D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1781D8u; }
        if (ctx->pc != 0x1781D8u) { return; }
    }
    ctx->pc = 0x1781D8u;
label_1781d8:
    // 0x1781d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1781d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1781dc:
    // 0x1781dc: 0xc05191c  jal         func_146470
label_1781e0:
    if (ctx->pc == 0x1781E0u) {
        ctx->pc = 0x1781E0u;
            // 0x1781e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1781E4u;
        goto label_1781e4;
    }
    ctx->pc = 0x1781DCu;
    SET_GPR_U32(ctx, 31, 0x1781E4u);
    ctx->pc = 0x1781E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1781DCu;
            // 0x1781e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1781E4u; }
        if (ctx->pc != 0x1781E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1781E4u; }
        if (ctx->pc != 0x1781E4u) { return; }
    }
    ctx->pc = 0x1781E4u;
label_1781e4:
    // 0x1781e4: 0x8f8489f0  lw          $a0, -0x7610($gp)
    ctx->pc = 0x1781e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
label_1781e8:
    // 0x1781e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1781e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1781ec:
    // 0x1781ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1781ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1781f0:
    // 0x1781f0: 0xc052734  jal         func_149CD0
label_1781f4:
    if (ctx->pc == 0x1781F4u) {
        ctx->pc = 0x1781F4u;
            // 0x1781f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1781F8u;
        goto label_1781f8;
    }
    ctx->pc = 0x1781F0u;
    SET_GPR_U32(ctx, 31, 0x1781F8u);
    ctx->pc = 0x1781F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1781F0u;
            // 0x1781f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1781F8u; }
        if (ctx->pc != 0x1781F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1781F8u; }
        if (ctx->pc != 0x1781F8u) { return; }
    }
    ctx->pc = 0x1781F8u;
label_1781f8:
    // 0x1781f8: 0x8f8489f0  lw          $a0, -0x7610($gp)
    ctx->pc = 0x1781f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
label_1781fc:
    // 0x1781fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1781fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_178200:
    // 0x178200: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x178200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_178204:
    // 0x178204: 0xc052734  jal         func_149CD0
label_178208:
    if (ctx->pc == 0x178208u) {
        ctx->pc = 0x178208u;
            // 0x178208: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17820Cu;
        goto label_17820c;
    }
    ctx->pc = 0x178204u;
    SET_GPR_U32(ctx, 31, 0x17820Cu);
    ctx->pc = 0x178208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178204u;
            // 0x178208: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17820Cu; }
        if (ctx->pc != 0x17820Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17820Cu; }
        if (ctx->pc != 0x17820Cu) { return; }
    }
    ctx->pc = 0x17820Cu;
label_17820c:
    // 0x17820c: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_178210:
    if (ctx->pc == 0x178210u) {
        ctx->pc = 0x178210u;
            // 0x178210: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178214u;
        goto label_178214;
    }
    ctx->pc = 0x17820Cu;
    {
        const bool branch_taken_0x17820c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x178210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17820Cu;
            // 0x178210: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17820c) {
            ctx->pc = 0x17822Cu;
            goto label_17822c;
        }
    }
    ctx->pc = 0x178214u;
label_178214:
    // 0x178214: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x178214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_178218:
    // 0x178218: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x178218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17821c:
    // 0x17821c: 0xc04a0d2  jal         func_128348
label_178220:
    if (ctx->pc == 0x178220u) {
        ctx->pc = 0x178220u;
            // 0x178220: 0x24843960  addiu       $a0, $a0, 0x3960 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14688));
        ctx->pc = 0x178224u;
        goto label_178224;
    }
    ctx->pc = 0x17821Cu;
    SET_GPR_U32(ctx, 31, 0x178224u);
    ctx->pc = 0x178220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17821Cu;
            // 0x178220: 0x24843960  addiu       $a0, $a0, 0x3960 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178224u; }
        if (ctx->pc != 0x178224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178224u; }
        if (ctx->pc != 0x178224u) { return; }
    }
    ctx->pc = 0x178224u;
label_178224:
    // 0x178224: 0x100000f0  b           . + 4 + (0xF0 << 2)
label_178228:
    if (ctx->pc == 0x178228u) {
        ctx->pc = 0x178228u;
            // 0x178228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17822Cu;
        goto label_17822c;
    }
    ctx->pc = 0x178224u;
    {
        const bool branch_taken_0x178224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178224u;
            // 0x178228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178224) {
            ctx->pc = 0x1785E8u;
            goto label_1785e8;
        }
    }
    ctx->pc = 0x17822Cu;
label_17822c:
    // 0x17822c: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x17822cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
label_178230:
    // 0x178230: 0x8c620134  lw          $v0, 0x134($v1)
    ctx->pc = 0x178230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
label_178234:
    // 0x178234: 0x144000cc  bnez        $v0, . + 4 + (0xCC << 2)
label_178238:
    if (ctx->pc == 0x178238u) {
        ctx->pc = 0x17823Cu;
        goto label_17823c;
    }
    ctx->pc = 0x178234u;
    {
        const bool branch_taken_0x178234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178234) {
            ctx->pc = 0x178568u;
            goto label_178568;
        }
    }
    ctx->pc = 0x17823Cu;
label_17823c:
    // 0x17823c: 0x8f8489f0  lw          $a0, -0x7610($gp)
    ctx->pc = 0x17823cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
label_178240:
    // 0x178240: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x178240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
label_178244:
    // 0x178244: 0x24a50690  addiu       $a1, $a1, 0x690
    ctx->pc = 0x178244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1680));
label_178248:
    // 0x178248: 0xc052734  jal         func_149CD0
label_17824c:
    if (ctx->pc == 0x17824Cu) {
        ctx->pc = 0x17824Cu;
            // 0x17824c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178250u;
        goto label_178250;
    }
    ctx->pc = 0x178248u;
    SET_GPR_U32(ctx, 31, 0x178250u);
    ctx->pc = 0x17824Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178248u;
            // 0x17824c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178250u; }
        if (ctx->pc != 0x178250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178250u; }
        if (ctx->pc != 0x178250u) { return; }
    }
    ctx->pc = 0x178250u;
label_178250:
    // 0x178250: 0x8f8889a8  lw          $t0, -0x7658($gp)
    ctx->pc = 0x178250u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
label_178254:
    // 0x178254: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x178254u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_178258:
    // 0x178258: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x178258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17825c:
    // 0x17825c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17825cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178260:
    // 0x178260: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x178260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178264:
    // 0x178264: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x178264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178268:
    // 0x178268: 0x1000000e  b           . + 4 + (0xE << 2)
label_17826c:
    if (ctx->pc == 0x17826Cu) {
        ctx->pc = 0x17826Cu;
            // 0x17826c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x178270u;
        goto label_178270;
    }
    ctx->pc = 0x178268u;
    {
        const bool branch_taken_0x178268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17826Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178268u;
            // 0x17826c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178268) {
            ctx->pc = 0x1782A4u;
            goto label_1782a4;
        }
    }
    ctx->pc = 0x178270u;
label_178270:
    // 0x178270: 0x244902e8  addiu       $t1, $v0, 0x2E8
    ctx->pc = 0x178270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 744));
label_178274:
    // 0x178274: 0x8c4202e8  lw          $v0, 0x2E8($v0)
    ctx->pc = 0x178274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 744)));
label_178278:
    // 0x178278: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_17827c:
    if (ctx->pc == 0x17827Cu) {
        ctx->pc = 0x17827Cu;
            // 0x17827c: 0xfd1021  addu        $v0, $a3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
        ctx->pc = 0x178280u;
        goto label_178280;
    }
    ctx->pc = 0x178278u;
    {
        const bool branch_taken_0x178278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17827Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178278u;
            // 0x17827c: 0xfd1021  addu        $v0, $a3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178278) {
            ctx->pc = 0x1782A0u;
            goto label_1782a0;
        }
    }
    ctx->pc = 0x178280u;
label_178280:
    // 0x178280: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x178280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_178284:
    // 0x178284: 0x244a0080  addiu       $t2, $v0, 0x80
    ctx->pc = 0x178284u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_178288:
    // 0x178288: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x178288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_17828c:
    // 0x17828c: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x17828cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
label_178290:
    // 0x178290: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x178290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_178294:
    // 0x178294: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x178294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_178298:
    // 0x178298: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x178298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_17829c:
    // 0x17829c: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x17829cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
label_1782a0:
    // 0x1782a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1782a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1782a4:
    // 0x1782a4: 0x0  nop
    ctx->pc = 0x1782a4u;
    // NOP
label_1782a8:
    // 0x1782a8: 0x8d020348  lw          $v0, 0x348($t0)
    ctx->pc = 0x1782a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 840)));
label_1782ac:
    // 0x1782ac: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1782acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1782b0:
    // 0x1782b0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1782b4:
    if (ctx->pc == 0x1782B4u) {
        ctx->pc = 0x1782B4u;
            // 0x1782b4: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->pc = 0x1782B8u;
        goto label_1782b8;
    }
    ctx->pc = 0x1782B0u;
    {
        const bool branch_taken_0x1782b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1782B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1782B0u;
            // 0x1782b4: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1782b0) {
            ctx->pc = 0x178270u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_178270;
        }
    }
    ctx->pc = 0x1782B8u;
label_1782b8:
    // 0x1782b8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1782b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1782bc:
    // 0x1782bc: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x1782bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1782c0:
    // 0x1782c0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1782c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1782c4:
    // 0x1782c4: 0x8f828a08  lw          $v0, -0x75F8($gp)
    ctx->pc = 0x1782c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937096)));
label_1782c8:
    // 0x1782c8: 0xac640080  sw          $a0, 0x80($v1)
    ctx->pc = 0x1782c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 4));
label_1782cc:
    // 0x1782cc: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_1782d0:
    if (ctx->pc == 0x1782D0u) {
        ctx->pc = 0x1782D0u;
            // 0x1782d0: 0xac600084  sw          $zero, 0x84($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x1782D4u;
        goto label_1782d4;
    }
    ctx->pc = 0x1782CCu;
    {
        const bool branch_taken_0x1782cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1782D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1782CCu;
            // 0x1782d0: 0xac600084  sw          $zero, 0x84($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1782cc) {
            ctx->pc = 0x178420u;
            goto label_178420;
        }
    }
    ctx->pc = 0x1782D4u;
label_1782d4:
    // 0x1782d4: 0x8f838a0c  lw          $v1, -0x75F4($gp)
    ctx->pc = 0x1782d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
label_1782d8:
    // 0x1782d8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1782dc:
    if (ctx->pc == 0x1782DCu) {
        ctx->pc = 0x1782DCu;
            // 0x1782dc: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x1782E0u;
        goto label_1782e0;
    }
    ctx->pc = 0x1782D8u;
    {
        const bool branch_taken_0x1782d8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1782DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1782D8u;
            // 0x1782dc: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1782d8) {
            ctx->pc = 0x1782E8u;
            goto label_1782e8;
        }
    }
    ctx->pc = 0x1782E0u;
label_1782e0:
    // 0x1782e0: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1782e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1782e4:
    // 0x1782e4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1782e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1782e8:
    // 0x1782e8: 0x8f8489dc  lw          $a0, -0x7624($gp)
    ctx->pc = 0x1782e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
label_1782ec:
    // 0x1782ec: 0xc04e704  jal         func_139C10
label_1782f0:
    if (ctx->pc == 0x1782F0u) {
        ctx->pc = 0x1782F0u;
            // 0x1782f0: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1782F4u;
        goto label_1782f4;
    }
    ctx->pc = 0x1782ECu;
    SET_GPR_U32(ctx, 31, 0x1782F4u);
    ctx->pc = 0x1782F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1782ECu;
            // 0x1782f0: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1782F4u; }
        if (ctx->pc != 0x1782F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1782F4u; }
        if (ctx->pc != 0x1782F4u) { return; }
    }
    ctx->pc = 0x1782F4u;
label_1782f4:
    // 0x1782f4: 0x8f858a08  lw          $a1, -0x75F8($gp)
    ctx->pc = 0x1782f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937096)));
label_1782f8:
    // 0x1782f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1782f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1782fc:
    // 0x1782fc: 0x8f868a0c  lw          $a2, -0x75F4($gp)
    ctx->pc = 0x1782fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
label_178300:
    // 0x178300: 0xc049c18  jal         func_127060
label_178304:
    if (ctx->pc == 0x178304u) {
        ctx->pc = 0x178304u;
            // 0x178304: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178308u;
        goto label_178308;
    }
    ctx->pc = 0x178300u;
    SET_GPR_U32(ctx, 31, 0x178308u);
    ctx->pc = 0x178304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178300u;
            // 0x178304: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178308u; }
        if (ctx->pc != 0x178308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178308u; }
        if (ctx->pc != 0x178308u) { return; }
    }
    ctx->pc = 0x178308u;
label_178308:
    // 0x178308: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x178308u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
label_17830c:
    // 0x17830c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17830cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_178310:
    // 0x178310: 0xc04b838  jal         func_12E0E0
label_178314:
    if (ctx->pc == 0x178314u) {
        ctx->pc = 0x178314u;
            // 0x178314: 0x26311ef0  addiu       $s1, $s1, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7920));
        ctx->pc = 0x178318u;
        goto label_178318;
    }
    ctx->pc = 0x178310u;
    SET_GPR_U32(ctx, 31, 0x178318u);
    ctx->pc = 0x178314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178310u;
            // 0x178314: 0x26311ef0  addiu       $s1, $s1, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E0E0u;
    if (runtime->hasFunction(0x12E0E0u)) {
        auto targetFn = runtime->lookupFunction(0x12E0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178318u; }
        if (ctx->pc != 0x178318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetIMGHeaderNum__FPc_0x12e0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178318u; }
        if (ctx->pc != 0x178318u) { return; }
    }
    ctx->pc = 0x178318u;
label_178318:
    // 0x178318: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x178318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17831c:
    // 0x17831c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x17831cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_178320:
    // 0x178320: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
label_178324:
    if (ctx->pc == 0x178324u) {
        ctx->pc = 0x178324u;
            // 0x178324: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178328u;
        goto label_178328;
    }
    ctx->pc = 0x178320u;
    {
        const bool branch_taken_0x178320 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x178324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178320u;
            // 0x178324: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178320) {
            ctx->pc = 0x1783ACu;
            goto label_1783ac;
        }
    }
    ctx->pc = 0x178328u;
label_178328:
    // 0x178328: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x178328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_17832c:
    // 0x17832c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17832cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_178330:
    // 0x178330: 0x34219350  ori         $at, $at, 0x9350
    ctx->pc = 0x178330u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37712);
label_178334:
    // 0x178334: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x178334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_178338:
    // 0x178338: 0xc04b860  jal         func_12E180
label_17833c:
    if (ctx->pc == 0x17833Cu) {
        ctx->pc = 0x17833Cu;
            // 0x17833c: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x178340u;
        goto label_178340;
    }
    ctx->pc = 0x178338u;
    SET_GPR_U32(ctx, 31, 0x178340u);
    ctx->pc = 0x17833Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178338u;
            // 0x17833c: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E180u;
    if (runtime->hasFunction(0x12E180u)) {
        auto targetFn = runtime->lookupFunction(0x12E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178340u; }
        if (ctx->pc != 0x178340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetIMGHeader__FPci_0x12e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178340u; }
        if (ctx->pc != 0x178340u) { return; }
    }
    ctx->pc = 0x178340u;
label_178340:
    // 0x178340: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x178340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_178344:
    // 0x178344: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x178344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_178348:
    // 0x178348: 0x34219350  ori         $at, $at, 0x9350
    ctx->pc = 0x178348u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37712);
label_17834c:
    // 0x17834c: 0x3a14021  addu        $t0, $sp, $at
    ctx->pc = 0x17834cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_178350:
    // 0x178350: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x178350u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
label_178354:
    // 0x178354: 0xdd060008  ld          $a2, 0x8($t0)
    ctx->pc = 0x178354u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 8)));
label_178358:
    // 0x178358: 0xdd030010  ld          $v1, 0x10($t0)
    ctx->pc = 0x178358u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 16)));
label_17835c:
    // 0x17835c: 0xdd020018  ld          $v0, 0x18($t0)
    ctx->pc = 0x17835cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 24)));
label_178360:
    // 0x178360: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x178360u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
label_178364:
    // 0x178364: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x178364u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
label_178368:
    // 0x178368: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x178368u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
label_17836c:
    // 0x17836c: 0xfca20018  sd          $v0, 0x18($a1)
    ctx->pc = 0x17836cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 2));
label_178370:
    // 0x178370: 0xdd070020  ld          $a3, 0x20($t0)
    ctx->pc = 0x178370u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 32)));
label_178374:
    // 0x178374: 0xdd060028  ld          $a2, 0x28($t0)
    ctx->pc = 0x178374u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 40)));
label_178378:
    // 0x178378: 0xdd030030  ld          $v1, 0x30($t0)
    ctx->pc = 0x178378u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 48)));
label_17837c:
    // 0x17837c: 0xdd020038  ld          $v0, 0x38($t0)
    ctx->pc = 0x17837cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 56)));
label_178380:
    // 0x178380: 0xfca70020  sd          $a3, 0x20($a1)
    ctx->pc = 0x178380u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 7));
label_178384:
    // 0x178384: 0xfca60028  sd          $a2, 0x28($a1)
    ctx->pc = 0x178384u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 6));
label_178388:
    // 0x178388: 0xfca30030  sd          $v1, 0x30($a1)
    ctx->pc = 0x178388u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 3));
label_17838c:
    // 0x17838c: 0xfca20038  sd          $v0, 0x38($a1)
    ctx->pc = 0x17838cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 2));
label_178390:
    // 0x178390: 0x8f8689ec  lw          $a2, -0x7614($gp)
    ctx->pc = 0x178390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937068)));
label_178394:
    // 0x178394: 0xc04b93c  jal         func_12E4F0
label_178398:
    if (ctx->pc == 0x178398u) {
        ctx->pc = 0x178398u;
            // 0x178398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17839Cu;
        goto label_17839c;
    }
    ctx->pc = 0x178394u;
    SET_GPR_U32(ctx, 31, 0x17839Cu);
    ctx->pc = 0x178398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178394u;
            // 0x178398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E4F0u;
    if (runtime->hasFunction(0x12E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x12E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17839Cu; }
        if (ctx->pc != 0x17839Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteTexture__17mgCTextureManagerFPci_0x12e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17839Cu; }
        if (ctx->pc != 0x17839Cu) { return; }
    }
    ctx->pc = 0x17839Cu;
label_17839c:
    // 0x17839c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x17839cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1783a0:
    // 0x1783a0: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x1783a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1783a4:
    // 0x1783a4: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_1783a8:
    if (ctx->pc == 0x1783A8u) {
        ctx->pc = 0x1783A8u;
            // 0x1783a8: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x1783ACu;
        goto label_1783ac;
    }
    ctx->pc = 0x1783A4u;
    {
        const bool branch_taken_0x1783a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1783A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1783A4u;
            // 0x1783a8: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1783a4) {
            ctx->pc = 0x17832Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17832c;
        }
    }
    ctx->pc = 0x1783ACu;
label_1783ac:
    // 0x1783ac: 0x0  nop
    ctx->pc = 0x1783acu;
    // NOP
label_1783b0:
    // 0x1783b0: 0x8f8689ec  lw          $a2, -0x7614($gp)
    ctx->pc = 0x1783b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937068)));
label_1783b4:
    // 0x1783b4: 0x8f8789dc  lw          $a3, -0x7624($gp)
    ctx->pc = 0x1783b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
label_1783b8:
    // 0x1783b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1783b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1783bc:
    // 0x1783bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1783bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1783c0:
    // 0x1783c0: 0xc04b6a4  jal         func_12DA90
label_1783c4:
    if (ctx->pc == 0x1783C4u) {
        ctx->pc = 0x1783C4u;
            // 0x1783c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1783C8u;
        goto label_1783c8;
    }
    ctx->pc = 0x1783C0u;
    SET_GPR_U32(ctx, 31, 0x1783C8u);
    ctx->pc = 0x1783C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1783C0u;
            // 0x1783c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1783C8u; }
        if (ctx->pc != 0x1783C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1783C8u; }
        if (ctx->pc != 0x1783C8u) { return; }
    }
    ctx->pc = 0x1783C8u;
label_1783c8:
    // 0x1783c8: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x1783c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
label_1783cc:
    // 0x1783cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1783ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1783d0:
    // 0x1783d0: 0x8f8589ec  lw          $a1, -0x7614($gp)
    ctx->pc = 0x1783d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937068)));
label_1783d4:
    // 0x1783d4: 0xc04bc24  jal         func_12F090
label_1783d8:
    if (ctx->pc == 0x1783D8u) {
        ctx->pc = 0x1783D8u;
            // 0x1783d8: 0x244602dc  addiu       $a2, $v0, 0x2DC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 732));
        ctx->pc = 0x1783DCu;
        goto label_1783dc;
    }
    ctx->pc = 0x1783D4u;
    SET_GPR_U32(ctx, 31, 0x1783DCu);
    ctx->pc = 0x1783D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1783D4u;
            // 0x1783d8: 0x244602dc  addiu       $a2, $v0, 0x2DC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 732));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F090u;
    if (runtime->hasFunction(0x12F090u)) {
        auto targetFn = runtime->lookupFunction(0x12F090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1783DCu; }
        if (ctx->pc != 0x1783DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGroupNameList__17mgCTextureManagerFiPi_0x12f090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1783DCu; }
        if (ctx->pc != 0x1783DCu) { return; }
    }
    ctx->pc = 0x1783DCu;
label_1783dc:
    // 0x1783dc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1783e0:
    if (ctx->pc == 0x1783E0u) {
        ctx->pc = 0x1783E4u;
        goto label_1783e4;
    }
    ctx->pc = 0x1783DCu;
    {
        const bool branch_taken_0x1783dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1783dc) {
            ctx->pc = 0x178420u;
            goto label_178420;
        }
    }
    ctx->pc = 0x1783E4u;
label_1783e4:
    // 0x1783e4: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x1783e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
label_1783e8:
    // 0x1783e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1783ec:
    if (ctx->pc == 0x1783ECu) {
        ctx->pc = 0x1783ECu;
            // 0x1783ec: 0xac6002e0  sw          $zero, 0x2E0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 736), GPR_U32(ctx, 0));
        ctx->pc = 0x1783F0u;
        goto label_1783f0;
    }
    ctx->pc = 0x1783E8u;
    {
        const bool branch_taken_0x1783e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1783ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1783E8u;
            // 0x1783ec: 0xac6002e0  sw          $zero, 0x2E0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 736), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1783e8) {
            ctx->pc = 0x1783FCu;
            goto label_1783fc;
        }
    }
    ctx->pc = 0x1783F0u;
label_1783f0:
    // 0x1783f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1783f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1783f4:
    // 0x1783f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1783f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1783f8:
    // 0x1783f8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1783f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1783fc:
    // 0x1783fc: 0x0  nop
    ctx->pc = 0x1783fcu;
    // NOP
label_178400:
    // 0x178400: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x178400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
label_178404:
    // 0x178404: 0x246402e0  addiu       $a0, $v1, 0x2E0
    ctx->pc = 0x178404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
label_178408:
    // 0x178408: 0x8c6302e0  lw          $v1, 0x2E0($v1)
    ctx->pc = 0x178408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 736)));
label_17840c:
    // 0x17840c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17840cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_178410:
    // 0x178410: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x178410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_178414:
    // 0x178414: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x178414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_178418:
    // 0x178418: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_17841c:
    if (ctx->pc == 0x17841Cu) {
        ctx->pc = 0x178420u;
        goto label_178420;
    }
    ctx->pc = 0x178418u;
    {
        const bool branch_taken_0x178418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x178418) {
            ctx->pc = 0x1783F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1783f0;
        }
    }
    ctx->pc = 0x178420u;
label_178420:
    // 0x178420: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x178420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_178424:
    // 0x178424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178428:
    // 0x178428: 0xc049c86  jal         func_127218
label_17842c:
    if (ctx->pc == 0x17842Cu) {
        ctx->pc = 0x17842Cu;
            // 0x17842c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x178430u;
        goto label_178430;
    }
    ctx->pc = 0x178428u;
    SET_GPR_U32(ctx, 31, 0x178430u);
    ctx->pc = 0x17842Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178428u;
            // 0x17842c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178430u; }
        if (ctx->pc != 0x178430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178430u; }
        if (ctx->pc != 0x178430u) { return; }
    }
    ctx->pc = 0x178430u;
label_178430:
    // 0x178430: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x178430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_178434:
    // 0x178434: 0x34219300  ori         $at, $at, 0x9300
    ctx->pc = 0x178434u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37632);
label_178438:
    // 0x178438: 0xc04e640  jal         func_139900
label_17843c:
    if (ctx->pc == 0x17843Cu) {
        ctx->pc = 0x17843Cu;
            // 0x17843c: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x178440u;
        goto label_178440;
    }
    ctx->pc = 0x178438u;
    SET_GPR_U32(ctx, 31, 0x178440u);
    ctx->pc = 0x17843Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178438u;
            // 0x17843c: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178440u; }
        if (ctx->pc != 0x178440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178440u; }
        if (ctx->pc != 0x178440u) { return; }
    }
    ctx->pc = 0x178440u;
label_178440:
    // 0x178440: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x178440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_178444:
    // 0x178444: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x178444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_178448:
    // 0x178448: 0x34219300  ori         $at, $at, 0x9300
    ctx->pc = 0x178448u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37632);
label_17844c:
    // 0x17844c: 0x24061900  addiu       $a2, $zero, 0x1900
    ctx->pc = 0x17844cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6400));
label_178450:
    // 0x178450: 0xc04e79c  jal         func_139E70
label_178454:
    if (ctx->pc == 0x178454u) {
        ctx->pc = 0x178454u;
            // 0x178454: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x178458u;
        goto label_178458;
    }
    ctx->pc = 0x178450u;
    SET_GPR_U32(ctx, 31, 0x178458u);
    ctx->pc = 0x178454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178450u;
            // 0x178454: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178458u; }
        if (ctx->pc != 0x178458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178458u; }
        if (ctx->pc != 0x178458u) { return; }
    }
    ctx->pc = 0x178458u;
label_178458:
    // 0x178458: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x178458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_17845c:
    // 0x17845c: 0x8f8389dc  lw          $v1, -0x7624($gp)
    ctx->pc = 0x17845cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
label_178460:
    // 0x178460: 0x34219300  ori         $at, $at, 0x9300
    ctx->pc = 0x178460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37632);
label_178464:
    // 0x178464: 0xafb502c0  sw          $s5, 0x2C0($sp)
    ctx->pc = 0x178464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 21));
label_178468:
    // 0x178468: 0x3a11021  addu        $v0, $sp, $at
    ctx->pc = 0x178468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_17846c:
    // 0x17846c: 0xafb002d4  sw          $s0, 0x2D4($sp)
    ctx->pc = 0x17846cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 16));
label_178470:
    // 0x178470: 0xafa202c8  sw          $v0, 0x2C8($sp)
    ctx->pc = 0x178470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 2));
label_178474:
    // 0x178474: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x178474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_178478:
    // 0x178478: 0xafb602d8  sw          $s6, 0x2D8($sp)
    ctx->pc = 0x178478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 22));
label_17847c:
    // 0x17847c: 0xafa202cc  sw          $v0, 0x2CC($sp)
    ctx->pc = 0x17847cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 2));
label_178480:
    // 0x178480: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x178480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
label_178484:
    // 0x178484: 0xafa302c4  sw          $v1, 0x2C4($sp)
    ctx->pc = 0x178484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 3));
label_178488:
    // 0x178488: 0x8c450070  lw          $a1, 0x70($v0)
    ctx->pc = 0x178488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_17848c:
    // 0x17848c: 0xc05e004  jal         func_178010
label_178490:
    if (ctx->pc == 0x178490u) {
        ctx->pc = 0x178490u;
            // 0x178490: 0x27a402c0  addiu       $a0, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->pc = 0x178494u;
        goto label_178494;
    }
    ctx->pc = 0x17848Cu;
    SET_GPR_U32(ctx, 31, 0x178494u);
    ctx->pc = 0x178490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17848Cu;
            // 0x178490: 0x27a402c0  addiu       $a0, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178010u;
    if (runtime->hasFunction(0x178010u)) {
        auto targetFn = runtime->lookupFunction(0x178010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178494u; }
        if (ctx->pc != 0x178494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChangeFrame__FP10mgLoadDataP8mgCFrame_0x178010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178494u; }
        if (ctx->pc != 0x178494u) { return; }
    }
    ctx->pc = 0x178494u;
label_178494:
    // 0x178494: 0xaf82899c  sw          $v0, -0x7664($gp)
    ctx->pc = 0x178494u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936988), GPR_U32(ctx, 2));
label_178498:
    // 0x178498: 0x8f83899c  lw          $v1, -0x7664($gp)
    ctx->pc = 0x178498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936988)));
label_17849c:
    // 0x17849c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1784a0:
    if (ctx->pc == 0x1784A0u) {
        ctx->pc = 0x1784A0u;
            // 0x1784a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1784A4u;
        goto label_1784a4;
    }
    ctx->pc = 0x17849Cu;
    {
        const bool branch_taken_0x17849c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1784A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17849Cu;
            // 0x1784a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17849c) {
            ctx->pc = 0x1784ACu;
            goto label_1784ac;
        }
    }
    ctx->pc = 0x1784A4u;
label_1784a4:
    // 0x1784a4: 0x10000051  b           . + 4 + (0x51 << 2)
label_1784a8:
    if (ctx->pc == 0x1784A8u) {
        ctx->pc = 0x1784A8u;
            // 0x1784a8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x1784ACu;
        goto label_1784ac;
    }
    ctx->pc = 0x1784A4u;
    {
        const bool branch_taken_0x1784a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1784A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1784A4u;
            // 0x1784a8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1784a4) {
            ctx->pc = 0x1785ECu;
            goto label_1785ec;
        }
    }
    ctx->pc = 0x1784ACu;
label_1784ac:
    // 0x1784ac: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x1784acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
label_1784b0:
    // 0x1784b0: 0x8c740064  lw          $s4, 0x64($v1)
    ctx->pc = 0x1784b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_1784b4:
    // 0x1784b4: 0x8c730068  lw          $s3, 0x68($v1)
    ctx->pc = 0x1784b4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_1784b8:
    // 0x1784b8: 0x8c560070  lw          $s6, 0x70($v0)
    ctx->pc = 0x1784b8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_1784bc:
    // 0x1784bc: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x1784bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_1784c0:
    // 0x1784c0: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
label_1784c4:
    if (ctx->pc == 0x1784C4u) {
        ctx->pc = 0x1784C4u;
            // 0x1784c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1784C8u;
        goto label_1784c8;
    }
    ctx->pc = 0x1784C0u;
    {
        const bool branch_taken_0x1784c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1784C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1784C0u;
            // 0x1784c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1784c0) {
            ctx->pc = 0x1785E4u;
            goto label_1785e4;
        }
    }
    ctx->pc = 0x1784C8u;
label_1784c8:
    // 0x1784c8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1784c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1784cc:
    // 0x1784cc: 0x2751021  addu        $v0, $s3, $s5
    ctx->pc = 0x1784ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_1784d0:
    // 0x1784d0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1784d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1784d4:
    // 0x1784d4: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
label_1784d8:
    if (ctx->pc == 0x1784D8u) {
        ctx->pc = 0x1784DCu;
        goto label_1784dc;
    }
    ctx->pc = 0x1784D4u;
    {
        const bool branch_taken_0x1784d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1784d4) {
            ctx->pc = 0x178550u;
            goto label_178550;
        }
    }
    ctx->pc = 0x1784DCu;
label_1784dc:
    // 0x1784dc: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x1784dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_1784e0:
    // 0x1784e0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1784e4:
    if (ctx->pc == 0x1784E4u) {
        ctx->pc = 0x1784E4u;
            // 0x1784e4: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x1784E8u;
        goto label_1784e8;
    }
    ctx->pc = 0x1784E0u;
    {
        const bool branch_taken_0x1784e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1784E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1784E0u;
            // 0x1784e4: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1784e0) {
            ctx->pc = 0x178550u;
            goto label_178550;
        }
    }
    ctx->pc = 0x1784E8u;
label_1784e8:
    // 0x1784e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1784e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1784ec:
    // 0x1784ec: 0x34219330  ori         $at, $at, 0x9330
    ctx->pc = 0x1784ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37680);
label_1784f0:
    // 0x1784f0: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x1784f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1784f4:
    // 0x1784f4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1784f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1784f8:
    // 0x1784f8: 0x34219340  ori         $at, $at, 0x9340
    ctx->pc = 0x1784f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37696);
label_1784fc:
    // 0x1784fc: 0xc04d9bc  jal         func_1366F0
label_178500:
    if (ctx->pc == 0x178500u) {
        ctx->pc = 0x178500u;
            // 0x178500: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x178504u;
        goto label_178504;
    }
    ctx->pc = 0x1784FCu;
    SET_GPR_U32(ctx, 31, 0x178504u);
    ctx->pc = 0x178500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1784FCu;
            // 0x178500: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1366F0u;
    if (runtime->hasFunction(0x1366F0u)) {
        auto targetFn = runtime->lookupFunction(0x1366F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178504u; }
        if (ctx->pc != 0x178504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBBox__8mgCFrameFPfPf_0x1366f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178504u; }
        if (ctx->pc != 0x178504u) { return; }
    }
    ctx->pc = 0x178504u;
label_178504:
    // 0x178504: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x178504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_178508:
    // 0x178508: 0xc04ddb4  jal         func_1376D0
label_17850c:
    if (ctx->pc == 0x17850Cu) {
        ctx->pc = 0x17850Cu;
            // 0x17850c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178510u;
        goto label_178510;
    }
    ctx->pc = 0x178508u;
    SET_GPR_U32(ctx, 31, 0x178510u);
    ctx->pc = 0x17850Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178508u;
            // 0x17850c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178510u; }
        if (ctx->pc != 0x178510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178510u; }
        if (ctx->pc != 0x178510u) { return; }
    }
    ctx->pc = 0x178510u;
label_178510:
    // 0x178510: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x178510u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_178514:
    // 0x178514: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
label_178518:
    if (ctx->pc == 0x178518u) {
        ctx->pc = 0x17851Cu;
        goto label_17851c;
    }
    ctx->pc = 0x178514u;
    {
        const bool branch_taken_0x178514 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x178514) {
            ctx->pc = 0x178550u;
            goto label_178550;
        }
    }
    ctx->pc = 0x17851Cu;
label_17851c:
    // 0x17851c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x17851cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_178520:
    // 0x178520: 0x8e2500f8  lw          $a1, 0xF8($s1)
    ctx->pc = 0x178520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_178524:
    // 0x178524: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x178524u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_178528:
    // 0x178528: 0x320f809  jalr        $t9
label_17852c:
    if (ctx->pc == 0x17852Cu) {
        ctx->pc = 0x17852Cu;
            // 0x17852c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178530u;
        goto label_178530;
    }
    ctx->pc = 0x178528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x178530u);
        ctx->pc = 0x17852Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178528u;
            // 0x17852c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x178530u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x178530u; }
            if (ctx->pc != 0x178530u) { return; }
        }
        }
    }
    ctx->pc = 0x178530u;
label_178530:
    // 0x178530: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x178530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_178534:
    // 0x178534: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x178534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_178538:
    // 0x178538: 0x34219330  ori         $at, $at, 0x9330
    ctx->pc = 0x178538u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37680);
label_17853c:
    // 0x17853c: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x17853cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_178540:
    // 0x178540: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x178540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_178544:
    // 0x178544: 0x34219340  ori         $at, $at, 0x9340
    ctx->pc = 0x178544u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37696);
label_178548:
    // 0x178548: 0xc04d97c  jal         func_1365F0
label_17854c:
    if (ctx->pc == 0x17854Cu) {
        ctx->pc = 0x17854Cu;
            // 0x17854c: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x178550u;
        goto label_178550;
    }
    ctx->pc = 0x178548u;
    SET_GPR_U32(ctx, 31, 0x178550u);
    ctx->pc = 0x17854Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178548u;
            // 0x17854c: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1365F0u;
    if (runtime->hasFunction(0x1365F0u)) {
        auto targetFn = runtime->lookupFunction(0x1365F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178550u; }
        if (ctx->pc != 0x178550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBBox__8mgCFrameFPfPf_0x1365f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178550u; }
        if (ctx->pc != 0x178550u) { return; }
    }
    ctx->pc = 0x178550u;
label_178550:
    // 0x178550: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x178550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_178554:
    // 0x178554: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x178554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_178558:
    // 0x178558: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_17855c:
    if (ctx->pc == 0x17855Cu) {
        ctx->pc = 0x17855Cu;
            // 0x17855c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x178560u;
        goto label_178560;
    }
    ctx->pc = 0x178558u;
    {
        const bool branch_taken_0x178558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17855Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178558u;
            // 0x17855c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178558) {
            ctx->pc = 0x1784CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1784cc;
        }
    }
    ctx->pc = 0x178560u;
label_178560:
    // 0x178560: 0x10000021  b           . + 4 + (0x21 << 2)
label_178564:
    if (ctx->pc == 0x178564u) {
        ctx->pc = 0x178564u;
            // 0x178564: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x178568u;
        goto label_178568;
    }
    ctx->pc = 0x178560u;
    {
        const bool branch_taken_0x178560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178560u;
            // 0x178564: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178560) {
            ctx->pc = 0x1785E8u;
            goto label_1785e8;
        }
    }
    ctx->pc = 0x178568u;
label_178568:
    // 0x178568: 0x8f8289a0  lw          $v0, -0x7660($gp)
    ctx->pc = 0x178568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936992)));
label_17856c:
    // 0x17856c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_178570:
    if (ctx->pc == 0x178570u) {
        ctx->pc = 0x178574u;
        goto label_178574;
    }
    ctx->pc = 0x17856Cu;
    {
        const bool branch_taken_0x17856c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17856c) {
            ctx->pc = 0x1785E4u;
            goto label_1785e4;
        }
    }
    ctx->pc = 0x178574u;
label_178574:
    // 0x178574: 0x8c710070  lw          $s1, 0x70($v1)
    ctx->pc = 0x178574u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_178578:
    // 0x178578: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_17857c:
    if (ctx->pc == 0x17857Cu) {
        ctx->pc = 0x178580u;
        goto label_178580;
    }
    ctx->pc = 0x178578u;
    {
        const bool branch_taken_0x178578 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x178578) {
            ctx->pc = 0x1785E4u;
            goto label_1785e4;
        }
    }
    ctx->pc = 0x178580u;
label_178580:
    // 0x178580: 0x8f8589a4  lw          $a1, -0x765C($gp)
    ctx->pc = 0x178580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936996)));
label_178584:
    // 0x178584: 0xc04ddd4  jal         func_137750
label_178588:
    if (ctx->pc == 0x178588u) {
        ctx->pc = 0x178588u;
            // 0x178588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17858Cu;
        goto label_17858c;
    }
    ctx->pc = 0x178584u;
    SET_GPR_U32(ctx, 31, 0x17858Cu);
    ctx->pc = 0x178588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178584u;
            // 0x178588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137750u;
    if (runtime->hasFunction(0x137750u)) {
        auto targetFn = runtime->lookupFunction(0x137750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17858Cu; }
        if (ctx->pc != 0x17858Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrameID__8mgCFrameFPc_0x137750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17858Cu; }
        if (ctx->pc != 0x17858Cu) { return; }
    }
    ctx->pc = 0x17858Cu;
label_17858c:
    // 0x17858c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x17858cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_178590:
    // 0x178590: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x178590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
label_178594:
    // 0x178594: 0x8f8289a0  lw          $v0, -0x7660($gp)
    ctx->pc = 0x178594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936992)));
label_178598:
    // 0x178598: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x178598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17859c:
    // 0x17859c: 0x8f8589dc  lw          $a1, -0x7624($gp)
    ctx->pc = 0x17859cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
label_1785a0:
    // 0x1785a0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1785a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1785a4:
    // 0x1785a4: 0x8f8b899c  lw          $t3, -0x7664($gp)
    ctx->pc = 0x1785a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936988)));
label_1785a8:
    // 0x1785a8: 0x8c6403c8  lw          $a0, 0x3C8($v1)
    ctx->pc = 0x1785a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 968)));
label_1785ac:
    // 0x1785ac: 0x8c5000f8  lw          $s0, 0xF8($v0)
    ctx->pc = 0x1785acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
label_1785b0:
    // 0x1785b0: 0x8c6803d0  lw          $t0, 0x3D0($v1)
    ctx->pc = 0x1785b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 976)));
label_1785b4:
    // 0x1785b4: 0xc053544  jal         func_14D510
label_1785b8:
    if (ctx->pc == 0x1785B8u) {
        ctx->pc = 0x1785B8u;
            // 0x1785b8: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1785BCu;
        goto label_1785bc;
    }
    ctx->pc = 0x1785B4u;
    SET_GPR_U32(ctx, 31, 0x1785BCu);
    ctx->pc = 0x1785B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1785B4u;
            // 0x1785b8: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D510u;
    if (runtime->hasFunction(0x14D510u)) {
        auto targetFn = runtime->lookupFunction(0x14D510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1785BCu; }
        if (ctx->pc != 0x1785BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChangeWeight__FP8Mot_ListP9mgCMemoryPUciP12tagFRAME_INFP12mgCVisualMDTP8mgCFrameP8mgCFrame_0x14d510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1785BCu; }
        if (ctx->pc != 0x1785BCu) { return; }
    }
    ctx->pc = 0x1785BCu;
label_1785bc:
    // 0x1785bc: 0x8f8589a4  lw          $a1, -0x765C($gp)
    ctx->pc = 0x1785bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936996)));
label_1785c0:
    // 0x1785c0: 0xc04ddb4  jal         func_1376D0
label_1785c4:
    if (ctx->pc == 0x1785C4u) {
        ctx->pc = 0x1785C4u;
            // 0x1785c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1785C8u;
        goto label_1785c8;
    }
    ctx->pc = 0x1785C0u;
    SET_GPR_U32(ctx, 31, 0x1785C8u);
    ctx->pc = 0x1785C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1785C0u;
            // 0x1785c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1785C8u; }
        if (ctx->pc != 0x1785C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1785C8u; }
        if (ctx->pc != 0x1785C8u) { return; }
    }
    ctx->pc = 0x1785C8u;
label_1785c8:
    // 0x1785c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1785cc:
    if (ctx->pc == 0x1785CCu) {
        ctx->pc = 0x1785D0u;
        goto label_1785d0;
    }
    ctx->pc = 0x1785C8u;
    {
        const bool branch_taken_0x1785c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1785c8) {
            ctx->pc = 0x1785E4u;
            goto label_1785e4;
        }
    }
    ctx->pc = 0x1785D0u;
label_1785d0:
    // 0x1785d0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1785d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1785d4:
    // 0x1785d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1785d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1785d8:
    // 0x1785d8: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x1785d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_1785dc:
    // 0x1785dc: 0x320f809  jalr        $t9
label_1785e0:
    if (ctx->pc == 0x1785E0u) {
        ctx->pc = 0x1785E0u;
            // 0x1785e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1785E4u;
        goto label_1785e4;
    }
    ctx->pc = 0x1785DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1785E4u);
        ctx->pc = 0x1785E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1785DCu;
            // 0x1785e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1785E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1785E4u; }
            if (ctx->pc != 0x1785E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1785E4u;
label_1785e4:
    // 0x1785e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1785e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1785e8:
    // 0x1785e8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1785e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1785ec:
    // 0x1785ec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1785ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1785f0:
    // 0x1785f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1785f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1785f4:
    // 0x1785f4: 0x34219390  ori         $at, $at, 0x9390
    ctx->pc = 0x1785f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37776);
label_1785f8:
    // 0x1785f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1785f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1785fc:
    // 0x1785fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1785fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_178600:
    // 0x178600: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x178600u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_178604:
    // 0x178604: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178604u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_178608:
    // 0x178608: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17860c:
    // 0x17860c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17860cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_178610:
    // 0x178610: 0x3e00008  jr          $ra
label_178614:
    if (ctx->pc == 0x178614u) {
        ctx->pc = 0x178614u;
            // 0x178614: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x178618u;
        goto label_fallthrough_0x178610;
    }
    ctx->pc = 0x178610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178610u;
            // 0x178614: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x178610:
    ctx->pc = 0x178618u;
}
