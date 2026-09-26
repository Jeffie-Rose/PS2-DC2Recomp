#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadChara__6CSceneFiPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryii
// Address: 0x285160 - 0x2853a4
void LoadChara__6CSceneFiPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryii_0x285160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadChara__6CSceneFiPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryii_0x285160");
#endif

    switch (ctx->pc) {
        case 0x285160u: goto label_285160;
        case 0x285164u: goto label_285164;
        case 0x285168u: goto label_285168;
        case 0x28516cu: goto label_28516c;
        case 0x285170u: goto label_285170;
        case 0x285174u: goto label_285174;
        case 0x285178u: goto label_285178;
        case 0x28517cu: goto label_28517c;
        case 0x285180u: goto label_285180;
        case 0x285184u: goto label_285184;
        case 0x285188u: goto label_285188;
        case 0x28518cu: goto label_28518c;
        case 0x285190u: goto label_285190;
        case 0x285194u: goto label_285194;
        case 0x285198u: goto label_285198;
        case 0x28519cu: goto label_28519c;
        case 0x2851a0u: goto label_2851a0;
        case 0x2851a4u: goto label_2851a4;
        case 0x2851a8u: goto label_2851a8;
        case 0x2851acu: goto label_2851ac;
        case 0x2851b0u: goto label_2851b0;
        case 0x2851b4u: goto label_2851b4;
        case 0x2851b8u: goto label_2851b8;
        case 0x2851bcu: goto label_2851bc;
        case 0x2851c0u: goto label_2851c0;
        case 0x2851c4u: goto label_2851c4;
        case 0x2851c8u: goto label_2851c8;
        case 0x2851ccu: goto label_2851cc;
        case 0x2851d0u: goto label_2851d0;
        case 0x2851d4u: goto label_2851d4;
        case 0x2851d8u: goto label_2851d8;
        case 0x2851dcu: goto label_2851dc;
        case 0x2851e0u: goto label_2851e0;
        case 0x2851e4u: goto label_2851e4;
        case 0x2851e8u: goto label_2851e8;
        case 0x2851ecu: goto label_2851ec;
        case 0x2851f0u: goto label_2851f0;
        case 0x2851f4u: goto label_2851f4;
        case 0x2851f8u: goto label_2851f8;
        case 0x2851fcu: goto label_2851fc;
        case 0x285200u: goto label_285200;
        case 0x285204u: goto label_285204;
        case 0x285208u: goto label_285208;
        case 0x28520cu: goto label_28520c;
        case 0x285210u: goto label_285210;
        case 0x285214u: goto label_285214;
        case 0x285218u: goto label_285218;
        case 0x28521cu: goto label_28521c;
        case 0x285220u: goto label_285220;
        case 0x285224u: goto label_285224;
        case 0x285228u: goto label_285228;
        case 0x28522cu: goto label_28522c;
        case 0x285230u: goto label_285230;
        case 0x285234u: goto label_285234;
        case 0x285238u: goto label_285238;
        case 0x28523cu: goto label_28523c;
        case 0x285240u: goto label_285240;
        case 0x285244u: goto label_285244;
        case 0x285248u: goto label_285248;
        case 0x28524cu: goto label_28524c;
        case 0x285250u: goto label_285250;
        case 0x285254u: goto label_285254;
        case 0x285258u: goto label_285258;
        case 0x28525cu: goto label_28525c;
        case 0x285260u: goto label_285260;
        case 0x285264u: goto label_285264;
        case 0x285268u: goto label_285268;
        case 0x28526cu: goto label_28526c;
        case 0x285270u: goto label_285270;
        case 0x285274u: goto label_285274;
        case 0x285278u: goto label_285278;
        case 0x28527cu: goto label_28527c;
        case 0x285280u: goto label_285280;
        case 0x285284u: goto label_285284;
        case 0x285288u: goto label_285288;
        case 0x28528cu: goto label_28528c;
        case 0x285290u: goto label_285290;
        case 0x285294u: goto label_285294;
        case 0x285298u: goto label_285298;
        case 0x28529cu: goto label_28529c;
        case 0x2852a0u: goto label_2852a0;
        case 0x2852a4u: goto label_2852a4;
        case 0x2852a8u: goto label_2852a8;
        case 0x2852acu: goto label_2852ac;
        case 0x2852b0u: goto label_2852b0;
        case 0x2852b4u: goto label_2852b4;
        case 0x2852b8u: goto label_2852b8;
        case 0x2852bcu: goto label_2852bc;
        case 0x2852c0u: goto label_2852c0;
        case 0x2852c4u: goto label_2852c4;
        case 0x2852c8u: goto label_2852c8;
        case 0x2852ccu: goto label_2852cc;
        case 0x2852d0u: goto label_2852d0;
        case 0x2852d4u: goto label_2852d4;
        case 0x2852d8u: goto label_2852d8;
        case 0x2852dcu: goto label_2852dc;
        case 0x2852e0u: goto label_2852e0;
        case 0x2852e4u: goto label_2852e4;
        case 0x2852e8u: goto label_2852e8;
        case 0x2852ecu: goto label_2852ec;
        case 0x2852f0u: goto label_2852f0;
        case 0x2852f4u: goto label_2852f4;
        case 0x2852f8u: goto label_2852f8;
        case 0x2852fcu: goto label_2852fc;
        case 0x285300u: goto label_285300;
        case 0x285304u: goto label_285304;
        case 0x285308u: goto label_285308;
        case 0x28530cu: goto label_28530c;
        case 0x285310u: goto label_285310;
        case 0x285314u: goto label_285314;
        case 0x285318u: goto label_285318;
        case 0x28531cu: goto label_28531c;
        case 0x285320u: goto label_285320;
        case 0x285324u: goto label_285324;
        case 0x285328u: goto label_285328;
        case 0x28532cu: goto label_28532c;
        case 0x285330u: goto label_285330;
        case 0x285334u: goto label_285334;
        case 0x285338u: goto label_285338;
        case 0x28533cu: goto label_28533c;
        case 0x285340u: goto label_285340;
        case 0x285344u: goto label_285344;
        case 0x285348u: goto label_285348;
        case 0x28534cu: goto label_28534c;
        case 0x285350u: goto label_285350;
        case 0x285354u: goto label_285354;
        case 0x285358u: goto label_285358;
        case 0x28535cu: goto label_28535c;
        case 0x285360u: goto label_285360;
        case 0x285364u: goto label_285364;
        case 0x285368u: goto label_285368;
        case 0x28536cu: goto label_28536c;
        case 0x285370u: goto label_285370;
        case 0x285374u: goto label_285374;
        case 0x285378u: goto label_285378;
        case 0x28537cu: goto label_28537c;
        case 0x285380u: goto label_285380;
        case 0x285384u: goto label_285384;
        case 0x285388u: goto label_285388;
        case 0x28538cu: goto label_28538c;
        case 0x285390u: goto label_285390;
        case 0x285394u: goto label_285394;
        case 0x285398u: goto label_285398;
        case 0x28539cu: goto label_28539c;
        case 0x2853a0u: goto label_2853a0;
        default: break;
    }

    ctx->pc = 0x285160u;

label_285160:
    // 0x285160: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x285160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_285164:
    // 0x285164: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x285164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_285168:
    // 0x285168: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x285168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_28516c:
    // 0x28516c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28516cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_285170:
    // 0x285170: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x285170u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_285174:
    // 0x285174: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x285174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_285178:
    // 0x285178: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x285178u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_28517c:
    // 0x28517c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28517cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_285180:
    // 0x285180: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x285180u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_285184:
    // 0x285184: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x285184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_285188:
    // 0x285188: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x285188u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_28518c:
    // 0x28518c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28518cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_285190:
    // 0x285190: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x285190u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_285194:
    // 0x285194: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x285194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_285198:
    // 0x285198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x285198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28519c:
    // 0x28519c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28519cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2851a0:
    // 0x2851a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2851a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2851a4:
    // 0x2851a4: 0xafa70094  sw          $a3, 0x94($sp)
    ctx->pc = 0x2851a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 7));
label_2851a8:
    // 0x2851a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2851a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2851ac:
    // 0x2851ac: 0xc04e748  jal         func_139D20
label_2851b0:
    if (ctx->pc == 0x2851B0u) {
        ctx->pc = 0x2851B0u;
            // 0x2851b0: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x2851B4u;
        goto label_2851b4;
    }
    ctx->pc = 0x2851ACu;
    SET_GPR_U32(ctx, 31, 0x2851B4u);
    ctx->pc = 0x2851B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2851ACu;
            // 0x2851b0: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2851B4u; }
        if (ctx->pc != 0x2851B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2851B4u; }
        if (ctx->pc != 0x2851B4u) { return; }
    }
    ctx->pc = 0x2851B4u;
label_2851b4:
    // 0x2851b4: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x2851b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_2851b8:
    // 0x2851b8: 0xc04e638  jal         func_1398E0
label_2851bc:
    if (ctx->pc == 0x2851BCu) {
        ctx->pc = 0x2851BCu;
            // 0x2851bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2851C0u;
        goto label_2851c0;
    }
    ctx->pc = 0x2851B8u;
    SET_GPR_U32(ctx, 31, 0x2851C0u);
    ctx->pc = 0x2851BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2851B8u;
            // 0x2851bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2851C0u; }
        if (ctx->pc != 0x2851C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2851C0u; }
        if (ctx->pc != 0x2851C0u) { return; }
    }
    ctx->pc = 0x2851C0u;
label_2851c0:
    // 0x2851c0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2851c4:
    if (ctx->pc == 0x2851C4u) {
        ctx->pc = 0x2851C4u;
            // 0x2851c4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2851C8u;
        goto label_2851c8;
    }
    ctx->pc = 0x2851C0u;
    {
        const bool branch_taken_0x2851c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2851C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2851C0u;
            // 0x2851c4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2851c0) {
            ctx->pc = 0x285244u;
            goto label_285244;
        }
    }
    ctx->pc = 0x2851C8u;
label_2851c8:
    // 0x2851c8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2851c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2851cc:
    // 0x2851cc: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2851ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2851d0:
    // 0x2851d0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2851d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2851d4:
    // 0x2851d4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2851d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2851d8:
    // 0x2851d8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2851d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2851dc:
    // 0x2851dc: 0x320f809  jalr        $t9
label_2851e0:
    if (ctx->pc == 0x2851E0u) {
        ctx->pc = 0x2851E0u;
            // 0x2851e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2851E4u;
        goto label_2851e4;
    }
    ctx->pc = 0x2851DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2851E4u);
        ctx->pc = 0x2851E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2851DCu;
            // 0x2851e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2851E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2851E4u; }
            if (ctx->pc != 0x2851E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2851E4u;
label_2851e4:
    // 0x2851e4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2851e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2851e8:
    // 0x2851e8: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x2851e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_2851ec:
    // 0x2851ec: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2851ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2851f0:
    // 0x2851f0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2851f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2851f4:
    // 0x2851f4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2851f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2851f8:
    // 0x2851f8: 0x320f809  jalr        $t9
label_2851fc:
    if (ctx->pc == 0x2851FCu) {
        ctx->pc = 0x2851FCu;
            // 0x2851fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285200u;
        goto label_285200;
    }
    ctx->pc = 0x2851F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x285200u);
        ctx->pc = 0x2851FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2851F8u;
            // 0x2851fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x285200u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x285200u; }
            if (ctx->pc != 0x285200u) { return; }
        }
        }
    }
    ctx->pc = 0x285200u;
label_285200:
    // 0x285200: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x285200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_285204:
    // 0x285204: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x285204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_285208:
    // 0x285208: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x285208u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_28520c:
    // 0x28520c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x28520cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_285210:
    // 0x285210: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x285210u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_285214:
    // 0x285214: 0x320f809  jalr        $t9
label_285218:
    if (ctx->pc == 0x285218u) {
        ctx->pc = 0x285218u;
            // 0x285218: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28521Cu;
        goto label_28521c;
    }
    ctx->pc = 0x285214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28521Cu);
        ctx->pc = 0x285218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285214u;
            // 0x285218: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28521Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28521Cu; }
            if (ctx->pc != 0x28521Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28521Cu;
label_28521c:
    // 0x28521c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x28521cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_285220:
    // 0x285220: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x285220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_285224:
    // 0x285224: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x285224u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_285228:
    // 0x285228: 0xae40035c  sw          $zero, 0x35C($s2)
    ctx->pc = 0x285228u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 860), GPR_U32(ctx, 0));
label_28522c:
    // 0x28522c: 0xae400364  sw          $zero, 0x364($s2)
    ctx->pc = 0x28522cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 868), GPR_U32(ctx, 0));
label_285230:
    // 0x285230: 0xae400360  sw          $zero, 0x360($s2)
    ctx->pc = 0x285230u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 864), GPR_U32(ctx, 0));
label_285234:
    // 0x285234: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x285234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_285238:
    // 0x285238: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x285238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_28523c:
    // 0x28523c: 0x320f809  jalr        $t9
label_285240:
    if (ctx->pc == 0x285240u) {
        ctx->pc = 0x285240u;
            // 0x285240: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285244u;
        goto label_285244;
    }
    ctx->pc = 0x28523Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x285244u);
        ctx->pc = 0x285240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28523Cu;
            // 0x285240: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x285244u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x285244u; }
            if (ctx->pc != 0x285244u) { return; }
        }
        }
    }
    ctx->pc = 0x285244u;
label_285244:
    // 0x285244: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_285248:
    if (ctx->pc == 0x285248u) {
        ctx->pc = 0x285248u;
            // 0x285248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28524Cu;
        goto label_28524c;
    }
    ctx->pc = 0x285244u;
    {
        const bool branch_taken_0x285244 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x285248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285244u;
            // 0x285248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285244) {
            ctx->pc = 0x285254u;
            goto label_285254;
        }
    }
    ctx->pc = 0x28524Cu;
label_28524c:
    // 0x28524c: 0x1000004a  b           . + 4 + (0x4A << 2)
label_285250:
    if (ctx->pc == 0x285250u) {
        ctx->pc = 0x285250u;
            // 0x285250: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x285254u;
        goto label_285254;
    }
    ctx->pc = 0x28524Cu;
    {
        const bool branch_taken_0x28524c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28524Cu;
            // 0x285250: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28524c) {
            ctx->pc = 0x285378u;
            goto label_285378;
        }
    }
    ctx->pc = 0x285254u;
label_285254:
    // 0x285254: 0xc0a14ec  jal         func_2853B0
label_285258:
    if (ctx->pc == 0x285258u) {
        ctx->pc = 0x285258u;
            // 0x285258: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28525Cu;
        goto label_28525c;
    }
    ctx->pc = 0x285254u;
    SET_GPR_U32(ctx, 31, 0x28525Cu);
    ctx->pc = 0x285258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285254u;
            // 0x285258: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2853B0u;
    if (runtime->hasFunction(0x2853B0u)) {
        auto targetFn = runtime->lookupFunction(0x2853B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28525Cu; }
        if (ctx->pc != 0x28525Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteChara__6CSceneFi_0x2853b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28525Cu; }
        if (ctx->pc != 0x28525Cu) { return; }
    }
    ctx->pc = 0x28525Cu;
label_28525c:
    // 0x28525c: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x28525cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_285260:
    // 0x285260: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x285260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285264:
    // 0x285264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x285264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_285268:
    // 0x285268: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x285268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28526c:
    // 0x28526c: 0xc0a0e8c  jal         func_283A30
label_285270:
    if (ctx->pc == 0x285270u) {
        ctx->pc = 0x285270u;
            // 0x285270: 0x24e7d1c0  addiu       $a3, $a3, -0x2E40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955456));
        ctx->pc = 0x285274u;
        goto label_285274;
    }
    ctx->pc = 0x28526Cu;
    SET_GPR_U32(ctx, 31, 0x285274u);
    ctx->pc = 0x285270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28526Cu;
            // 0x285270: 0x24e7d1c0  addiu       $a3, $a3, -0x2E40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283A30u;
    if (runtime->hasFunction(0x283A30u)) {
        auto targetFn = runtime->lookupFunction(0x283A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285274u; }
        if (ctx->pc != 0x285274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignChara__6CSceneFiP11CCharacter2Pc_0x283a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285274u; }
        if (ctx->pc != 0x285274u) { return; }
    }
    ctx->pc = 0x285274u;
label_285274:
    // 0x285274: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x285274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285278:
    // 0x285278: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
label_28527c:
    if (ctx->pc == 0x28527Cu) {
        ctx->pc = 0x28527Cu;
            // 0x28527c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285280u;
        goto label_285280;
    }
    ctx->pc = 0x285278u;
    {
        const bool branch_taken_0x285278 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x28527Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285278u;
            // 0x28527c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285278) {
            ctx->pc = 0x285288u;
            goto label_285288;
        }
    }
    ctx->pc = 0x285280u;
label_285280:
    // 0x285280: 0x1000003d  b           . + 4 + (0x3D << 2)
label_285284:
    if (ctx->pc == 0x285284u) {
        ctx->pc = 0x285284u;
            // 0x285284: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x285288u;
        goto label_285288;
    }
    ctx->pc = 0x285280u;
    {
        const bool branch_taken_0x285280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285280u;
            // 0x285284: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285280) {
            ctx->pc = 0x285378u;
            goto label_285378;
        }
    }
    ctx->pc = 0x285288u;
label_285288:
    // 0x285288: 0xc0a0cd0  jal         func_283340
label_28528c:
    if (ctx->pc == 0x28528Cu) {
        ctx->pc = 0x28528Cu;
            // 0x28528c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285290u;
        goto label_285290;
    }
    ctx->pc = 0x285288u;
    SET_GPR_U32(ctx, 31, 0x285290u);
    ctx->pc = 0x28528Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285288u;
            // 0x28528c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283340u;
    if (runtime->hasFunction(0x283340u)) {
        auto targetFn = runtime->lookupFunction(0x283340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285290u; }
        if (ctx->pc != 0x285290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneCharacter__6CSceneFi_0x283340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285290u; }
        if (ctx->pc != 0x285290u) { return; }
    }
    ctx->pc = 0x285290u;
label_285290:
    // 0x285290: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_285294:
    if (ctx->pc == 0x285294u) {
        ctx->pc = 0x285298u;
        goto label_285298;
    }
    ctx->pc = 0x285290u;
    {
        const bool branch_taken_0x285290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285290) {
            ctx->pc = 0x2852A0u;
            goto label_2852a0;
        }
    }
    ctx->pc = 0x285298u;
label_285298:
    // 0x285298: 0x10000037  b           . + 4 + (0x37 << 2)
label_28529c:
    if (ctx->pc == 0x28529Cu) {
        ctx->pc = 0x28529Cu;
            // 0x28529c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2852A0u;
        goto label_2852a0;
    }
    ctx->pc = 0x285298u;
    {
        const bool branch_taken_0x285298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28529Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285298u;
            // 0x28529c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285298) {
            ctx->pc = 0x285378u;
            goto label_285378;
        }
    }
    ctx->pc = 0x2852A0u;
label_2852a0:
    // 0x2852a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2852a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2852a4:
    // 0x2852a4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2852a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_2852a8:
    // 0x2852a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2852a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2852ac:
    // 0x2852ac: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x2852acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_2852b0:
    // 0x2852b0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2852b4:
    if (ctx->pc == 0x2852B4u) {
        ctx->pc = 0x2852B4u;
            // 0x2852b4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2852B8u;
        goto label_2852b8;
    }
    ctx->pc = 0x2852B0u;
    {
        const bool branch_taken_0x2852b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2852B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2852B0u;
            // 0x2852b4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2852b0) {
            ctx->pc = 0x2852D4u;
            goto label_2852d4;
        }
    }
    ctx->pc = 0x2852B8u;
label_2852b8:
    // 0x2852b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2852b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2852bc:
    // 0x2852bc: 0x24a5d1c8  addiu       $a1, $a1, -0x2E38
    ctx->pc = 0x2852bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955464));
label_2852c0:
    // 0x2852c0: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x2852c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_2852c4:
    // 0x2852c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2852c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2852c8:
    // 0x2852c8: 0x27a8009c  addiu       $t0, $sp, 0x9C
    ctx->pc = 0x2852c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2852cc:
    // 0x2852cc: 0xc052788  jal         func_149E20
label_2852d0:
    if (ctx->pc == 0x2852D0u) {
        ctx->pc = 0x2852D0u;
            // 0x2852d0: 0x27a90094  addiu       $t1, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->pc = 0x2852D4u;
        goto label_2852d4;
    }
    ctx->pc = 0x2852CCu;
    SET_GPR_U32(ctx, 31, 0x2852D4u);
    ctx->pc = 0x2852D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2852CCu;
            // 0x2852d0: 0x27a90094  addiu       $t1, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149E20u;
    if (runtime->hasFunction(0x149E20u)) {
        auto targetFn = runtime->lookupFunction(0x149E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2852D4u; }
        if (ctx->pc != 0x2852D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFileExt__FPUiPcPPUiiPiPPc_0x149e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2852D4u; }
        if (ctx->pc != 0x2852D4u) { return; }
    }
    ctx->pc = 0x2852D4u;
label_2852d4:
    // 0x2852d4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2852d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2852d8:
    // 0x2852d8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2852d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2852dc:
    // 0x2852dc: 0x320f809  jalr        $t9
label_2852e0:
    if (ctx->pc == 0x2852E0u) {
        ctx->pc = 0x2852E0u;
            // 0x2852e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2852E4u;
        goto label_2852e4;
    }
    ctx->pc = 0x2852DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2852E4u);
        ctx->pc = 0x2852E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2852DCu;
            // 0x2852e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2852E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2852E4u; }
            if (ctx->pc != 0x2852E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2852E4u;
label_2852e4:
    // 0x2852e4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2852e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2852e8:
    // 0x2852e8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2852ec:
    if (ctx->pc == 0x2852ECu) {
        ctx->pc = 0x2852F0u;
        goto label_2852f0;
    }
    ctx->pc = 0x2852E8u;
    {
        const bool branch_taken_0x2852e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2852e8) {
            ctx->pc = 0x285324u;
            goto label_285324;
        }
    }
    ctx->pc = 0x2852F0u;
label_2852f0:
    // 0x2852f0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2852f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2852f4:
    // 0x2852f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2852f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2852f8:
    // 0x2852f8: 0x8fa60094  lw          $a2, 0x94($sp)
    ctx->pc = 0x2852f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_2852fc:
    // 0x2852fc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2852fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_285300:
    // 0x285300: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x285300u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_285304:
    // 0x285304: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x285304u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_285308:
    // 0x285308: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x285308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28530c:
    // 0x28530c: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x28530cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_285310:
    // 0x285310: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x285310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_285314:
    // 0x285314: 0x320f809  jalr        $t9
label_285318:
    if (ctx->pc == 0x285318u) {
        ctx->pc = 0x285318u;
            // 0x285318: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28531Cu;
        goto label_28531c;
    }
    ctx->pc = 0x285314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28531Cu);
        ctx->pc = 0x285318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285314u;
            // 0x285318: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28531Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28531Cu; }
            if (ctx->pc != 0x28531Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28531Cu;
label_28531c:
    // 0x28531c: 0x1000000d  b           . + 4 + (0xD << 2)
label_285320:
    if (ctx->pc == 0x285320u) {
        ctx->pc = 0x285320u;
            // 0x285320: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285324u;
        goto label_285324;
    }
    ctx->pc = 0x28531Cu;
    {
        const bool branch_taken_0x28531c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28531Cu;
            // 0x285320: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28531c) {
            ctx->pc = 0x285354u;
            goto label_285354;
        }
    }
    ctx->pc = 0x285324u;
label_285324:
    // 0x285324: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x285324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_285328:
    // 0x285328: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x285328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28532c:
    // 0x28532c: 0x8fa60094  lw          $a2, 0x94($sp)
    ctx->pc = 0x28532cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_285330:
    // 0x285330: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x285330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_285334:
    // 0x285334: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x285334u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_285338:
    // 0x285338: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x285338u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_28533c:
    // 0x28533c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28533cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_285340:
    // 0x285340: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x285340u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_285344:
    // 0x285344: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x285344u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_285348:
    // 0x285348: 0x320f809  jalr        $t9
label_28534c:
    if (ctx->pc == 0x28534Cu) {
        ctx->pc = 0x28534Cu;
            // 0x28534c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285350u;
        goto label_285350;
    }
    ctx->pc = 0x285348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x285350u);
        ctx->pc = 0x28534Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285348u;
            // 0x28534c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x285350u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x285350u; }
            if (ctx->pc != 0x285350u) { return; }
        }
        }
    }
    ctx->pc = 0x285350u;
label_285350:
    // 0x285350: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x285350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_285354:
    // 0x285354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x285354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_285358:
    // 0x285358: 0xc0a1264  jal         func_284990
label_28535c:
    if (ctx->pc == 0x28535Cu) {
        ctx->pc = 0x28535Cu;
            // 0x28535c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285360u;
        goto label_285360;
    }
    ctx->pc = 0x285358u;
    SET_GPR_U32(ctx, 31, 0x285360u);
    ctx->pc = 0x28535Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285358u;
            // 0x28535c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284990u;
    if (runtime->hasFunction(0x284990u)) {
        auto targetFn = runtime->lookupFunction(0x284990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285360u; }
        if (ctx->pc != 0x285360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaTexb__6CSceneFii_0x284990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285360u; }
        if (ctx->pc != 0x285360u) { return; }
    }
    ctx->pc = 0x285360u;
label_285360:
    // 0x285360: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x285360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_285364:
    // 0x285364: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x285364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285368:
    // 0x285368: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x285368u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_28536c:
    // 0x28536c: 0x8c23a498  lw          $v1, -0x5B68($at)
    ctx->pc = 0x28536cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943896)));
label_285370:
    // 0x285370: 0xae43057c  sw          $v1, 0x57C($s2)
    ctx->pc = 0x285370u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1404), GPR_U32(ctx, 3));
label_285374:
    // 0x285374: 0xae400580  sw          $zero, 0x580($s2)
    ctx->pc = 0x285374u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1408), GPR_U32(ctx, 0));
label_285378:
    // 0x285378: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x285378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_28537c:
    // 0x28537c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28537cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_285380:
    // 0x285380: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x285380u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_285384:
    // 0x285384: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x285384u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_285388:
    // 0x285388: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x285388u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28538c:
    // 0x28538c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28538cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_285390:
    // 0x285390: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x285390u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_285394:
    // 0x285394: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x285394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_285398:
    // 0x285398: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x285398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28539c:
    // 0x28539c: 0x3e00008  jr          $ra
label_2853a0:
    if (ctx->pc == 0x2853A0u) {
        ctx->pc = 0x2853A0u;
            // 0x2853a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2853A4u;
        goto label_fallthrough_0x28539c;
    }
    ctx->pc = 0x28539Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2853A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28539Cu;
            // 0x2853a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28539c:
    ctx->pc = 0x2853A4u;
}
