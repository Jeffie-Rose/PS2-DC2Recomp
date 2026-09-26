#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__10CPowerLineFv
// Address: 0x1c32d0 - 0x1c33d0
void Step__10CPowerLineFv_0x1c32d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__10CPowerLineFv_0x1c32d0");
#endif

    switch (ctx->pc) {
        case 0x1c32d0u: goto label_1c32d0;
        case 0x1c32d4u: goto label_1c32d4;
        case 0x1c32d8u: goto label_1c32d8;
        case 0x1c32dcu: goto label_1c32dc;
        case 0x1c32e0u: goto label_1c32e0;
        case 0x1c32e4u: goto label_1c32e4;
        case 0x1c32e8u: goto label_1c32e8;
        case 0x1c32ecu: goto label_1c32ec;
        case 0x1c32f0u: goto label_1c32f0;
        case 0x1c32f4u: goto label_1c32f4;
        case 0x1c32f8u: goto label_1c32f8;
        case 0x1c32fcu: goto label_1c32fc;
        case 0x1c3300u: goto label_1c3300;
        case 0x1c3304u: goto label_1c3304;
        case 0x1c3308u: goto label_1c3308;
        case 0x1c330cu: goto label_1c330c;
        case 0x1c3310u: goto label_1c3310;
        case 0x1c3314u: goto label_1c3314;
        case 0x1c3318u: goto label_1c3318;
        case 0x1c331cu: goto label_1c331c;
        case 0x1c3320u: goto label_1c3320;
        case 0x1c3324u: goto label_1c3324;
        case 0x1c3328u: goto label_1c3328;
        case 0x1c332cu: goto label_1c332c;
        case 0x1c3330u: goto label_1c3330;
        case 0x1c3334u: goto label_1c3334;
        case 0x1c3338u: goto label_1c3338;
        case 0x1c333cu: goto label_1c333c;
        case 0x1c3340u: goto label_1c3340;
        case 0x1c3344u: goto label_1c3344;
        case 0x1c3348u: goto label_1c3348;
        case 0x1c334cu: goto label_1c334c;
        case 0x1c3350u: goto label_1c3350;
        case 0x1c3354u: goto label_1c3354;
        case 0x1c3358u: goto label_1c3358;
        case 0x1c335cu: goto label_1c335c;
        case 0x1c3360u: goto label_1c3360;
        case 0x1c3364u: goto label_1c3364;
        case 0x1c3368u: goto label_1c3368;
        case 0x1c336cu: goto label_1c336c;
        case 0x1c3370u: goto label_1c3370;
        case 0x1c3374u: goto label_1c3374;
        case 0x1c3378u: goto label_1c3378;
        case 0x1c337cu: goto label_1c337c;
        case 0x1c3380u: goto label_1c3380;
        case 0x1c3384u: goto label_1c3384;
        case 0x1c3388u: goto label_1c3388;
        case 0x1c338cu: goto label_1c338c;
        case 0x1c3390u: goto label_1c3390;
        case 0x1c3394u: goto label_1c3394;
        case 0x1c3398u: goto label_1c3398;
        case 0x1c339cu: goto label_1c339c;
        case 0x1c33a0u: goto label_1c33a0;
        case 0x1c33a4u: goto label_1c33a4;
        case 0x1c33a8u: goto label_1c33a8;
        case 0x1c33acu: goto label_1c33ac;
        case 0x1c33b0u: goto label_1c33b0;
        case 0x1c33b4u: goto label_1c33b4;
        case 0x1c33b8u: goto label_1c33b8;
        case 0x1c33bcu: goto label_1c33bc;
        case 0x1c33c0u: goto label_1c33c0;
        case 0x1c33c4u: goto label_1c33c4;
        case 0x1c33c8u: goto label_1c33c8;
        case 0x1c33ccu: goto label_1c33cc;
        default: break;
    }

    ctx->pc = 0x1c32d0u;

label_1c32d0:
    // 0x1c32d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c32d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c32d4:
    // 0x1c32d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c32d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c32d8:
    // 0x1c32d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c32d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c32dc:
    // 0x1c32dc: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1c32dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1c32e0:
    // 0x1c32e0: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
label_1c32e4:
    if (ctx->pc == 0x1C32E4u) {
        ctx->pc = 0x1C32E4u;
            // 0x1c32e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C32E8u;
        goto label_1c32e8;
    }
    ctx->pc = 0x1C32E0u;
    {
        const bool branch_taken_0x1c32e0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1C32E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32E0u;
            // 0x1c32e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32e0) {
            ctx->pc = 0x1C32F4u;
            goto label_1c32f4;
        }
    }
    ctx->pc = 0x1C32E8u;
label_1c32e8:
    // 0x1c32e8: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x1c32e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1c32ec:
    // 0x1c32ec: 0x18600034  blez        $v1, . + 4 + (0x34 << 2)
label_1c32f0:
    if (ctx->pc == 0x1C32F0u) {
        ctx->pc = 0x1C32F4u;
        goto label_1c32f4;
    }
    ctx->pc = 0x1C32ECu;
    {
        const bool branch_taken_0x1c32ec = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c32ec) {
            ctx->pc = 0x1C33C0u;
            goto label_1c33c0;
        }
    }
    ctx->pc = 0x1C32F4u;
label_1c32f4:
    // 0x1c32f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c32f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c32f8:
    // 0x1c32f8: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_1c32fc:
    if (ctx->pc == 0x1C32FCu) {
        ctx->pc = 0x1C3300u;
        goto label_1c3300;
    }
    ctx->pc = 0x1C32F8u;
    {
        const bool branch_taken_0x1c32f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c32f8) {
            ctx->pc = 0x1C33C0u;
            goto label_1c33c0;
        }
    }
    ctx->pc = 0x1C3300u;
label_1c3300:
    // 0x1c3300: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1c3300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_1c3304:
    // 0x1c3304: 0x10000014  b           . + 4 + (0x14 << 2)
label_1c3308:
    if (ctx->pc == 0x1C3308u) {
        ctx->pc = 0x1C3308u;
            // 0x1c3308: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C330Cu;
        goto label_1c330c;
    }
    ctx->pc = 0x1C3304u;
    {
        const bool branch_taken_0x1c3304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3304u;
            // 0x1c3308: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3304) {
            ctx->pc = 0x1C3358u;
            goto label_1c3358;
        }
    }
    ctx->pc = 0x1C330Cu;
label_1c330c:
    // 0x1c330c: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1c330cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1c3310:
    // 0x1c3310: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
label_1c3314:
    if (ctx->pc == 0x1C3314u) {
        ctx->pc = 0x1C3318u;
        goto label_1c3318;
    }
    ctx->pc = 0x1C3310u;
    {
        const bool branch_taken_0x1c3310 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c3310) {
            ctx->pc = 0x1C334Cu;
            goto label_1c334c;
        }
    }
    ctx->pc = 0x1C3318u;
label_1c3318:
    // 0x1c3318: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x1c3318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c331c:
    // 0x1c331c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1c331cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c3320:
    // 0x1c3320: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c3320u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c3324:
    // 0x1c3324: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x1c3324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_1c3328:
    // 0x1c3328: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1c3328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1c332c:
    // 0x1c332c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c332cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c3330:
    // 0x1c3330: 0xac62003c  sw          $v0, 0x3C($v1)
    ctx->pc = 0x1c3330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
label_1c3334:
    // 0x1c3334: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1c3334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1c3338:
    // 0x1c3338: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
label_1c333c:
    if (ctx->pc == 0x1C333Cu) {
        ctx->pc = 0x1C3340u;
        goto label_1c3340;
    }
    ctx->pc = 0x1C3338u;
    {
        const bool branch_taken_0x1c3338 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1c3338) {
            ctx->pc = 0x1C334Cu;
            goto label_1c334c;
        }
    }
    ctx->pc = 0x1C3340u;
label_1c3340:
    // 0x1c3340: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1c3340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1c3344:
    // 0x1c3344: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c3344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c3348:
    // 0x1c3348: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x1c3348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
label_1c334c:
    // 0x1c334c: 0x0  nop
    ctx->pc = 0x1c334cu;
    // NOP
label_1c3350:
    // 0x1c3350: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x1c3350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_1c3354:
    // 0x1c3354: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c3354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1c3358:
    // 0x1c3358: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x1c3358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1c335c:
    // 0x1c335c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1c335cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c3360:
    // 0x1c3360: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_1c3364:
    if (ctx->pc == 0x1C3364u) {
        ctx->pc = 0x1C3368u;
        goto label_1c3368;
    }
    ctx->pc = 0x1C3360u;
    {
        const bool branch_taken_0x1c3360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3360) {
            ctx->pc = 0x1C330Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c330c;
        }
    }
    ctx->pc = 0x1C3368u;
label_1c3368:
    // 0x1c3368: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c3368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c336c:
    // 0x1c336c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1c336cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c3370:
    // 0x1c3370: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1c3370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1c3374:
    // 0x1c3374: 0x320f809  jalr        $t9
label_1c3378:
    if (ctx->pc == 0x1C3378u) {
        ctx->pc = 0x1C3378u;
            // 0x1c3378: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x1C337Cu;
        goto label_1c337c;
    }
    ctx->pc = 0x1C3374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1C337Cu);
        ctx->pc = 0x1C3378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3374u;
            // 0x1c3378: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C337Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C337Cu; }
            if (ctx->pc != 0x1C337Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1C337Cu;
label_1c337c:
    // 0x1c337c: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x1c337cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1c3380:
    // 0x1c3380: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
label_1c3384:
    if (ctx->pc == 0x1C3384u) {
        ctx->pc = 0x1C3388u;
        goto label_1c3388;
    }
    ctx->pc = 0x1C3380u;
    {
        const bool branch_taken_0x1c3380 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1c3380) {
            ctx->pc = 0x1C33C0u;
            goto label_1c33c0;
        }
    }
    ctx->pc = 0x1C3388u;
label_1c3388:
    // 0x1c3388: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1c3388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1c338c:
    // 0x1c338c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1c338cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1c3390:
    // 0x1c3390: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_1c3394:
    if (ctx->pc == 0x1C3394u) {
        ctx->pc = 0x1C3398u;
        goto label_1c3398;
    }
    ctx->pc = 0x1C3390u;
    {
        const bool branch_taken_0x1c3390 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3390) {
            ctx->pc = 0x1C33C0u;
            goto label_1c33c0;
        }
    }
    ctx->pc = 0x1C3398u;
label_1c3398:
    // 0x1c3398: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1c3398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c339c:
    // 0x1c339c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1c339cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_1c33a0:
    // 0x1c33a0: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1c33a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1c33a4:
    // 0x1c33a4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1c33a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1c33a8:
    // 0x1c33a8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1c33a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c33ac:
    // 0x1c33ac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1c33b0:
    if (ctx->pc == 0x1C33B0u) {
        ctx->pc = 0x1C33B0u;
            // 0x1c33b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C33B4u;
        goto label_1c33b4;
    }
    ctx->pc = 0x1C33ACu;
    {
        const bool branch_taken_0x1c33ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C33B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C33ACu;
            // 0x1c33b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c33ac) {
            ctx->pc = 0x1C33B8u;
            goto label_1c33b8;
        }
    }
    ctx->pc = 0x1C33B4u;
label_1c33b4:
    // 0x1c33b4: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1c33b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1c33b8:
    // 0x1c33b8: 0xc070c6c  jal         func_1C31B0
label_1c33bc:
    if (ctx->pc == 0x1C33BCu) {
        ctx->pc = 0x1C33C0u;
        goto label_1c33c0;
    }
    ctx->pc = 0x1C33B8u;
    SET_GPR_U32(ctx, 31, 0x1C33C0u);
    ctx->pc = 0x1C31B0u;
    if (runtime->hasFunction(0x1C31B0u)) {
        auto targetFn = runtime->lookupFunction(0x1C31B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C33C0u; }
        if (ctx->pc != 0x1C33C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatPrim__10CPowerLineFv_0x1c31b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C33C0u; }
        if (ctx->pc != 0x1C33C0u) { return; }
    }
    ctx->pc = 0x1C33C0u;
label_1c33c0:
    // 0x1c33c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c33c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c33c4:
    // 0x1c33c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c33c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c33c8:
    // 0x1c33c8: 0x3e00008  jr          $ra
label_1c33cc:
    if (ctx->pc == 0x1C33CCu) {
        ctx->pc = 0x1C33CCu;
            // 0x1c33cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C33D0u;
        goto label_fallthrough_0x1c33c8;
    }
    ctx->pc = 0x1C33C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C33CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C33C8u;
            // 0x1c33cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1c33c8:
    ctx->pc = 0x1C33D0u;
}
