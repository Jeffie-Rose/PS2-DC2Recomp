#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetLurePose__FP8mgCFrame
// Address: 0x3102e0 - 0x3103c4
void SetLurePose__FP8mgCFrame_0x3102e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetLurePose__FP8mgCFrame_0x3102e0");
#endif

    switch (ctx->pc) {
        case 0x3102e0u: goto label_3102e0;
        case 0x3102e4u: goto label_3102e4;
        case 0x3102e8u: goto label_3102e8;
        case 0x3102ecu: goto label_3102ec;
        case 0x3102f0u: goto label_3102f0;
        case 0x3102f4u: goto label_3102f4;
        case 0x3102f8u: goto label_3102f8;
        case 0x3102fcu: goto label_3102fc;
        case 0x310300u: goto label_310300;
        case 0x310304u: goto label_310304;
        case 0x310308u: goto label_310308;
        case 0x31030cu: goto label_31030c;
        case 0x310310u: goto label_310310;
        case 0x310314u: goto label_310314;
        case 0x310318u: goto label_310318;
        case 0x31031cu: goto label_31031c;
        case 0x310320u: goto label_310320;
        case 0x310324u: goto label_310324;
        case 0x310328u: goto label_310328;
        case 0x31032cu: goto label_31032c;
        case 0x310330u: goto label_310330;
        case 0x310334u: goto label_310334;
        case 0x310338u: goto label_310338;
        case 0x31033cu: goto label_31033c;
        case 0x310340u: goto label_310340;
        case 0x310344u: goto label_310344;
        case 0x310348u: goto label_310348;
        case 0x31034cu: goto label_31034c;
        case 0x310350u: goto label_310350;
        case 0x310354u: goto label_310354;
        case 0x310358u: goto label_310358;
        case 0x31035cu: goto label_31035c;
        case 0x310360u: goto label_310360;
        case 0x310364u: goto label_310364;
        case 0x310368u: goto label_310368;
        case 0x31036cu: goto label_31036c;
        case 0x310370u: goto label_310370;
        case 0x310374u: goto label_310374;
        case 0x310378u: goto label_310378;
        case 0x31037cu: goto label_31037c;
        case 0x310380u: goto label_310380;
        case 0x310384u: goto label_310384;
        case 0x310388u: goto label_310388;
        case 0x31038cu: goto label_31038c;
        case 0x310390u: goto label_310390;
        case 0x310394u: goto label_310394;
        case 0x310398u: goto label_310398;
        case 0x31039cu: goto label_31039c;
        case 0x3103a0u: goto label_3103a0;
        case 0x3103a4u: goto label_3103a4;
        case 0x3103a8u: goto label_3103a8;
        case 0x3103acu: goto label_3103ac;
        case 0x3103b0u: goto label_3103b0;
        case 0x3103b4u: goto label_3103b4;
        case 0x3103b8u: goto label_3103b8;
        case 0x3103bcu: goto label_3103bc;
        case 0x3103c0u: goto label_3103c0;
        default: break;
    }

    ctx->pc = 0x3102e0u;

label_3102e0:
    // 0x3102e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3102e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3102e4:
    // 0x3102e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3102e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3102e8:
    // 0x3102e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3102e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3102ec:
    // 0x3102ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3102ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3102f0:
    // 0x3102f0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_3102f4:
    if (ctx->pc == 0x3102F4u) {
        ctx->pc = 0x3102F4u;
            // 0x3102f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3102F8u;
        goto label_3102f8;
    }
    ctx->pc = 0x3102F0u;
    {
        const bool branch_taken_0x3102f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3102F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3102F0u;
            // 0x3102f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3102f0) {
            ctx->pc = 0x310300u;
            goto label_310300;
        }
    }
    ctx->pc = 0x3102F8u;
label_3102f8:
    // 0x3102f8: 0x1000002f  b           . + 4 + (0x2F << 2)
label_3102fc:
    if (ctx->pc == 0x3102FCu) {
        ctx->pc = 0x3102FCu;
            // 0x3102fc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x310300u;
        goto label_310300;
    }
    ctx->pc = 0x3102F8u;
    {
        const bool branch_taken_0x3102f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3102FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3102F8u;
            // 0x3102fc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3102f8) {
            ctx->pc = 0x3103B8u;
            goto label_3103b8;
        }
    }
    ctx->pc = 0x310300u;
label_310300:
    // 0x310300: 0x8f83a26c  lw          $v1, -0x5D94($gp)
    ctx->pc = 0x310300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943340)));
label_310304:
    // 0x310304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x310304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_310308:
    // 0x310308: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_31030c:
    if (ctx->pc == 0x31030Cu) {
        ctx->pc = 0x31030Cu;
            // 0x31030c: 0x3c0301f6  lui         $v1, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x310310u;
        goto label_310310;
    }
    ctx->pc = 0x310308u;
    {
        const bool branch_taken_0x310308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31030Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310308u;
            // 0x31030c: 0x3c0301f6  lui         $v1, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310308) {
            ctx->pc = 0x310318u;
            goto label_310318;
        }
    }
    ctx->pc = 0x310310u;
label_310310:
    // 0x310310: 0x10000028  b           . + 4 + (0x28 << 2)
label_310314:
    if (ctx->pc == 0x310314u) {
        ctx->pc = 0x310314u;
            // 0x310314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310318u;
        goto label_310318;
    }
    ctx->pc = 0x310310u;
    {
        const bool branch_taken_0x310310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310310u;
            // 0x310314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310310) {
            ctx->pc = 0x3103B4u;
            goto label_3103b4;
        }
    }
    ctx->pc = 0x310318u;
label_310318:
    // 0x310318: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x310318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_31031c:
    // 0x31031c: 0x2463ec70  addiu       $v1, $v1, -0x1390
    ctx->pc = 0x31031cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
label_310320:
    // 0x310320: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x310320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_310324:
    // 0x310324: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x310324u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_310328:
    // 0x310328: 0xc04c050  jal         func_130140
label_31032c:
    if (ctx->pc == 0x31032Cu) {
        ctx->pc = 0x31032Cu;
            // 0x31032c: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->pc = 0x310330u;
        goto label_310330;
    }
    ctx->pc = 0x310328u;
    SET_GPR_U32(ctx, 31, 0x310330u);
    ctx->pc = 0x31032Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310328u;
            // 0x31032c: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310330u; }
        if (ctx->pc != 0x310330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310330u; }
        if (ctx->pc != 0x310330u) { return; }
    }
    ctx->pc = 0x310330u;
label_310330:
    // 0x310330: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x310330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_310334:
    // 0x310334: 0x3c0901f6  lui         $t1, 0x1F6
    ctx->pc = 0x310334u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)502 << 16));
label_310338:
    // 0x310338: 0x2442edd0  addiu       $v0, $v0, -0x1230
    ctx->pc = 0x310338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962640));
label_31033c:
    // 0x31033c: 0x3c0701f6  lui         $a3, 0x1F6
    ctx->pc = 0x31033cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)502 << 16));
label_310340:
    // 0x310340: 0x784a0000  lq          $t2, 0x0($v0)
    ctx->pc = 0x310340u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_310344:
    // 0x310344: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x310344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_310348:
    // 0x310348: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x310348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_31034c:
    // 0x31034c: 0x2529ee00  addiu       $t1, $t1, -0x1200
    ctx->pc = 0x31034cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294962688));
label_310350:
    // 0x310350: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x310350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_310354:
    // 0x310354: 0x24e7ee30  addiu       $a3, $a3, -0x11D0
    ctx->pc = 0x310354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962736));
label_310358:
    // 0x310358: 0x2463e6d0  addiu       $v1, $v1, -0x1930
    ctx->pc = 0x310358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960848));
label_31035c:
    // 0x31035c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x31035cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_310360:
    // 0x310360: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x310360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_310364:
    // 0x310364: 0x7caa0000  sq          $t2, 0x0($a1)
    ctx->pc = 0x310364u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 10));
label_310368:
    // 0x310368: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x310368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_31036c:
    // 0x31036c: 0x79290000  lq          $t1, 0x0($t1)
    ctx->pc = 0x31036cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_310370:
    // 0x310370: 0x7d090000  sq          $t1, 0x0($t0)
    ctx->pc = 0x310370u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 9));
label_310374:
    // 0x310374: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x310374u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_310378:
    // 0x310378: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x310378u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
label_31037c:
    // 0x31037c: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x31037cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_310380:
    // 0x310380: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x310380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_310384:
    // 0x310384: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x310384u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_310388:
    // 0x310388: 0xc0c4008  jal         func_310020
label_31038c:
    if (ctx->pc == 0x31038Cu) {
        ctx->pc = 0x31038Cu;
            // 0x31038c: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->pc = 0x310390u;
        goto label_310390;
    }
    ctx->pc = 0x310388u;
    SET_GPR_U32(ctx, 31, 0x310390u);
    ctx->pc = 0x31038Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310388u;
            // 0x31038c: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x310020u;
    if (runtime->hasFunction(0x310020u)) {
        auto targetFn = runtime->lookupFunction(0x310020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310390u; }
        if (ctx->pc != 0x310390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTriPose__FPA4_fPA4_fPi_0x310020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310390u; }
        if (ctx->pc != 0x310390u) { return; }
    }
    ctx->pc = 0x310390u;
label_310390:
    // 0x310390: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x310390u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_310394:
    // 0x310394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x310394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_310398:
    // 0x310398: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x310398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_31039c:
    // 0x31039c: 0x320f809  jalr        $t9
label_3103a0:
    if (ctx->pc == 0x3103A0u) {
        ctx->pc = 0x3103A0u;
            // 0x3103a0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3103A4u;
        goto label_3103a4;
    }
    ctx->pc = 0x31039Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3103A4u);
        ctx->pc = 0x3103A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31039Cu;
            // 0x3103a0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3103A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3103A4u; }
            if (ctx->pc != 0x3103A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3103A4u;
label_3103a4:
    // 0x3103a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3103a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3103a8:
    // 0x3103a8: 0xc04dd64  jal         func_137590
label_3103ac:
    if (ctx->pc == 0x3103ACu) {
        ctx->pc = 0x3103ACu;
            // 0x3103ac: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3103B0u;
        goto label_3103b0;
    }
    ctx->pc = 0x3103A8u;
    SET_GPR_U32(ctx, 31, 0x3103B0u);
    ctx->pc = 0x3103ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3103A8u;
            // 0x3103ac: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3103B0u; }
        if (ctx->pc != 0x3103B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3103B0u; }
        if (ctx->pc != 0x3103B0u) { return; }
    }
    ctx->pc = 0x3103B0u;
label_3103b0:
    // 0x3103b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3103b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3103b4:
    // 0x3103b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3103b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3103b8:
    // 0x3103b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3103b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3103bc:
    // 0x3103bc: 0x3e00008  jr          $ra
label_3103c0:
    if (ctx->pc == 0x3103C0u) {
        ctx->pc = 0x3103C0u;
            // 0x3103c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3103C4u;
        goto label_fallthrough_0x3103bc;
    }
    ctx->pc = 0x3103BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3103C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3103BCu;
            // 0x3103c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3103bc:
    ctx->pc = 0x3103C4u;
}
