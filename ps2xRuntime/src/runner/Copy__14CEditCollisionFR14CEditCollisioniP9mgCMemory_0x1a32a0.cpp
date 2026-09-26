#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Copy__14CEditCollisionFR14CEditCollisioniP9mgCMemory
// Address: 0x1a32a0 - 0x1a3484
void Copy__14CEditCollisionFR14CEditCollisioniP9mgCMemory_0x1a32a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Copy__14CEditCollisionFR14CEditCollisioniP9mgCMemory_0x1a32a0");
#endif

    switch (ctx->pc) {
        case 0x1a32a0u: goto label_1a32a0;
        case 0x1a32a4u: goto label_1a32a4;
        case 0x1a32a8u: goto label_1a32a8;
        case 0x1a32acu: goto label_1a32ac;
        case 0x1a32b0u: goto label_1a32b0;
        case 0x1a32b4u: goto label_1a32b4;
        case 0x1a32b8u: goto label_1a32b8;
        case 0x1a32bcu: goto label_1a32bc;
        case 0x1a32c0u: goto label_1a32c0;
        case 0x1a32c4u: goto label_1a32c4;
        case 0x1a32c8u: goto label_1a32c8;
        case 0x1a32ccu: goto label_1a32cc;
        case 0x1a32d0u: goto label_1a32d0;
        case 0x1a32d4u: goto label_1a32d4;
        case 0x1a32d8u: goto label_1a32d8;
        case 0x1a32dcu: goto label_1a32dc;
        case 0x1a32e0u: goto label_1a32e0;
        case 0x1a32e4u: goto label_1a32e4;
        case 0x1a32e8u: goto label_1a32e8;
        case 0x1a32ecu: goto label_1a32ec;
        case 0x1a32f0u: goto label_1a32f0;
        case 0x1a32f4u: goto label_1a32f4;
        case 0x1a32f8u: goto label_1a32f8;
        case 0x1a32fcu: goto label_1a32fc;
        case 0x1a3300u: goto label_1a3300;
        case 0x1a3304u: goto label_1a3304;
        case 0x1a3308u: goto label_1a3308;
        case 0x1a330cu: goto label_1a330c;
        case 0x1a3310u: goto label_1a3310;
        case 0x1a3314u: goto label_1a3314;
        case 0x1a3318u: goto label_1a3318;
        case 0x1a331cu: goto label_1a331c;
        case 0x1a3320u: goto label_1a3320;
        case 0x1a3324u: goto label_1a3324;
        case 0x1a3328u: goto label_1a3328;
        case 0x1a332cu: goto label_1a332c;
        case 0x1a3330u: goto label_1a3330;
        case 0x1a3334u: goto label_1a3334;
        case 0x1a3338u: goto label_1a3338;
        case 0x1a333cu: goto label_1a333c;
        case 0x1a3340u: goto label_1a3340;
        case 0x1a3344u: goto label_1a3344;
        case 0x1a3348u: goto label_1a3348;
        case 0x1a334cu: goto label_1a334c;
        case 0x1a3350u: goto label_1a3350;
        case 0x1a3354u: goto label_1a3354;
        case 0x1a3358u: goto label_1a3358;
        case 0x1a335cu: goto label_1a335c;
        case 0x1a3360u: goto label_1a3360;
        case 0x1a3364u: goto label_1a3364;
        case 0x1a3368u: goto label_1a3368;
        case 0x1a336cu: goto label_1a336c;
        case 0x1a3370u: goto label_1a3370;
        case 0x1a3374u: goto label_1a3374;
        case 0x1a3378u: goto label_1a3378;
        case 0x1a337cu: goto label_1a337c;
        case 0x1a3380u: goto label_1a3380;
        case 0x1a3384u: goto label_1a3384;
        case 0x1a3388u: goto label_1a3388;
        case 0x1a338cu: goto label_1a338c;
        case 0x1a3390u: goto label_1a3390;
        case 0x1a3394u: goto label_1a3394;
        case 0x1a3398u: goto label_1a3398;
        case 0x1a339cu: goto label_1a339c;
        case 0x1a33a0u: goto label_1a33a0;
        case 0x1a33a4u: goto label_1a33a4;
        case 0x1a33a8u: goto label_1a33a8;
        case 0x1a33acu: goto label_1a33ac;
        case 0x1a33b0u: goto label_1a33b0;
        case 0x1a33b4u: goto label_1a33b4;
        case 0x1a33b8u: goto label_1a33b8;
        case 0x1a33bcu: goto label_1a33bc;
        case 0x1a33c0u: goto label_1a33c0;
        case 0x1a33c4u: goto label_1a33c4;
        case 0x1a33c8u: goto label_1a33c8;
        case 0x1a33ccu: goto label_1a33cc;
        case 0x1a33d0u: goto label_1a33d0;
        case 0x1a33d4u: goto label_1a33d4;
        case 0x1a33d8u: goto label_1a33d8;
        case 0x1a33dcu: goto label_1a33dc;
        case 0x1a33e0u: goto label_1a33e0;
        case 0x1a33e4u: goto label_1a33e4;
        case 0x1a33e8u: goto label_1a33e8;
        case 0x1a33ecu: goto label_1a33ec;
        case 0x1a33f0u: goto label_1a33f0;
        case 0x1a33f4u: goto label_1a33f4;
        case 0x1a33f8u: goto label_1a33f8;
        case 0x1a33fcu: goto label_1a33fc;
        case 0x1a3400u: goto label_1a3400;
        case 0x1a3404u: goto label_1a3404;
        case 0x1a3408u: goto label_1a3408;
        case 0x1a340cu: goto label_1a340c;
        case 0x1a3410u: goto label_1a3410;
        case 0x1a3414u: goto label_1a3414;
        case 0x1a3418u: goto label_1a3418;
        case 0x1a341cu: goto label_1a341c;
        case 0x1a3420u: goto label_1a3420;
        case 0x1a3424u: goto label_1a3424;
        case 0x1a3428u: goto label_1a3428;
        case 0x1a342cu: goto label_1a342c;
        case 0x1a3430u: goto label_1a3430;
        case 0x1a3434u: goto label_1a3434;
        case 0x1a3438u: goto label_1a3438;
        case 0x1a343cu: goto label_1a343c;
        case 0x1a3440u: goto label_1a3440;
        case 0x1a3444u: goto label_1a3444;
        case 0x1a3448u: goto label_1a3448;
        case 0x1a344cu: goto label_1a344c;
        case 0x1a3450u: goto label_1a3450;
        case 0x1a3454u: goto label_1a3454;
        case 0x1a3458u: goto label_1a3458;
        case 0x1a345cu: goto label_1a345c;
        case 0x1a3460u: goto label_1a3460;
        case 0x1a3464u: goto label_1a3464;
        case 0x1a3468u: goto label_1a3468;
        case 0x1a346cu: goto label_1a346c;
        case 0x1a3470u: goto label_1a3470;
        case 0x1a3474u: goto label_1a3474;
        case 0x1a3478u: goto label_1a3478;
        case 0x1a347cu: goto label_1a347c;
        case 0x1a3480u: goto label_1a3480;
        default: break;
    }

    ctx->pc = 0x1a32a0u;

label_1a32a0:
    // 0x1a32a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a32a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a32a4:
    // 0x1a32a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a32a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a32a8:
    // 0x1a32a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a32a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1a32ac:
    // 0x1a32ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a32acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1a32b0:
    // 0x1a32b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a32b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a32b4:
    // 0x1a32b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a32b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a32b8:
    // 0x1a32b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a32b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a32bc:
    // 0x1a32bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a32bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a32c0:
    // 0x1a32c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a32c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a32c4:
    // 0x1a32c4: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x1a32c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_1a32c8:
    // 0x1a32c8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a32c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a32cc:
    // 0x1a32cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a32ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a32d0:
    // 0x1a32d0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1a32d4:
    if (ctx->pc == 0x1A32D4u) {
        ctx->pc = 0x1A32D4u;
            // 0x1a32d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A32D8u;
        goto label_1a32d8;
    }
    ctx->pc = 0x1A32D0u;
    {
        const bool branch_taken_0x1a32d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A32D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A32D0u;
            // 0x1a32d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a32d0) {
            ctx->pc = 0x1A32F8u;
            goto label_1a32f8;
        }
    }
    ctx->pc = 0x1A32D8u;
label_1a32d8:
    // 0x1a32d8: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x1a32d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1a32dc:
    // 0x1a32dc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1a32dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1a32e0:
    // 0x1a32e0: 0x84630044  lh          $v1, 0x44($v1)
    ctx->pc = 0x1a32e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
label_1a32e4:
    // 0x1a32e4: 0x16030002  bne         $s0, $v1, . + 4 + (0x2 << 2)
label_1a32e8:
    if (ctx->pc == 0x1A32E8u) {
        ctx->pc = 0x1A32ECu;
        goto label_1a32ec;
    }
    ctx->pc = 0x1A32E4u;
    {
        const bool branch_taken_0x1a32e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a32e4) {
            ctx->pc = 0x1A32F0u;
            goto label_1a32f0;
        }
    }
    ctx->pc = 0x1A32ECu;
label_1a32ec:
    // 0x1a32ec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a32ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a32f0:
    // 0x1a32f0: 0x25080050  addiu       $t0, $t0, 0x50
    ctx->pc = 0x1a32f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
label_1a32f4:
    // 0x1a32f4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a32f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1a32f8:
    // 0x1a32f8: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x1a32f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1a32fc:
    // 0x1a32fc: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_1a3300:
    if (ctx->pc == 0x1A3300u) {
        ctx->pc = 0x1A3304u;
        goto label_1a3304;
    }
    ctx->pc = 0x1A32FCu;
    {
        const bool branch_taken_0x1a32fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a32fc) {
            ctx->pc = 0x1A32D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a32d8;
        }
    }
    ctx->pc = 0x1A3304u;
label_1a3304:
    // 0x1a3304: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
label_1a3308:
    if (ctx->pc == 0x1A3308u) {
        ctx->pc = 0x1A330Cu;
        goto label_1a330c;
    }
    ctx->pc = 0x1A3304u;
    {
        const bool branch_taken_0x1a3304 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x1a3304) {
            ctx->pc = 0x1A3314u;
            goto label_1a3314;
        }
    }
    ctx->pc = 0x1A330Cu;
label_1a330c:
    // 0x1a330c: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
label_1a3310:
    if (ctx->pc == 0x1A3310u) {
        ctx->pc = 0x1A3314u;
        goto label_1a3314;
    }
    ctx->pc = 0x1A330Cu;
    {
        const bool branch_taken_0x1a330c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a330c) {
            ctx->pc = 0x1A3320u;
            goto label_1a3320;
        }
    }
    ctx->pc = 0x1A3314u;
label_1a3314:
    // 0x1a3314: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x1a3314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_1a3318:
    // 0x1a3318: 0x10000053  b           . + 4 + (0x53 << 2)
label_1a331c:
    if (ctx->pc == 0x1A331Cu) {
        ctx->pc = 0x1A331Cu;
            // 0x1a331c: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->pc = 0x1A3320u;
        goto label_1a3320;
    }
    ctx->pc = 0x1A3318u;
    {
        const bool branch_taken_0x1a3318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A331Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3318u;
            // 0x1a331c: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3318) {
            ctx->pc = 0x1A3468u;
            goto label_1a3468;
        }
    }
    ctx->pc = 0x1A3320u;
label_1a3320:
    // 0x1a3320: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a3320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1a3324:
    // 0x1a3324: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a3324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1a3328:
    // 0x1a3328: 0x29900  sll         $s3, $v0, 4
    ctx->pc = 0x1a3328u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1a332c:
    // 0x1a332c: 0x3262000f  andi        $v0, $s3, 0xF
    ctx->pc = 0x1a332cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
label_1a3330:
    // 0x1a3330: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a3334:
    if (ctx->pc == 0x1A3334u) {
        ctx->pc = 0x1A3334u;
            // 0x1a3334: 0xae250044  sw          $a1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 5));
        ctx->pc = 0x1A3338u;
        goto label_1a3338;
    }
    ctx->pc = 0x1A3330u;
    {
        const bool branch_taken_0x1a3330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3330u;
            // 0x1a3334: 0xae250044  sw          $a1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3330) {
            ctx->pc = 0x1A3344u;
            goto label_1a3344;
        }
    }
    ctx->pc = 0x1A3338u;
label_1a3338:
    // 0x1a3338: 0x131102  srl         $v0, $s3, 4
    ctx->pc = 0x1a3338u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 4));
label_1a333c:
    // 0x1a333c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a3340:
    if (ctx->pc == 0x1A3340u) {
        ctx->pc = 0x1A3340u;
            // 0x1a3340: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1A3344u;
        goto label_1a3344;
    }
    ctx->pc = 0x1A333Cu;
    {
        const bool branch_taken_0x1a333c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A333Cu;
            // 0x1a3340: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a333c) {
            ctx->pc = 0x1A3348u;
            goto label_1a3348;
        }
    }
    ctx->pc = 0x1A3344u;
label_1a3344:
    // 0x1a3344: 0x131102  srl         $v0, $s3, 4
    ctx->pc = 0x1a3344u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 4));
label_1a3348:
    // 0x1a3348: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x1a3348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_1a334c:
    // 0x1a334c: 0xc04e748  jal         func_139D20
label_1a3350:
    if (ctx->pc == 0x1A3350u) {
        ctx->pc = 0x1A3350u;
            // 0x1a3350: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3354u;
        goto label_1a3354;
    }
    ctx->pc = 0x1A334Cu;
    SET_GPR_U32(ctx, 31, 0x1A3354u);
    ctx->pc = 0x1A3350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A334Cu;
            // 0x1a3350: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3354u; }
        if (ctx->pc != 0x1A3354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3354u; }
        if (ctx->pc != 0x1A3354u) { return; }
    }
    ctx->pc = 0x1A3354u;
label_1a3354:
    // 0x1a3354: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a3354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a3358:
    // 0x1a3358: 0xc04e63c  jal         func_1398F0
label_1a335c:
    if (ctx->pc == 0x1A335Cu) {
        ctx->pc = 0x1A335Cu;
            // 0x1a335c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3360u;
        goto label_1a3360;
    }
    ctx->pc = 0x1A3358u;
    SET_GPR_U32(ctx, 31, 0x1A3360u);
    ctx->pc = 0x1A335Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3358u;
            // 0x1a335c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3360u; }
        if (ctx->pc != 0x1A3360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3360u; }
        if (ctx->pc != 0x1A3360u) { return; }
    }
    ctx->pc = 0x1A3360u;
label_1a3360:
    // 0x1a3360: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x1a3360u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_1a3364:
    // 0x1a3364: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x1a3364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1a3368:
    // 0x1a3368: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_1a336c:
    if (ctx->pc == 0x1A336Cu) {
        ctx->pc = 0x1A336Cu;
            // 0x1a336c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3370u;
        goto label_1a3370;
    }
    ctx->pc = 0x1A3368u;
    {
        const bool branch_taken_0x1a3368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A336Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3368u;
            // 0x1a336c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3368) {
            ctx->pc = 0x1A3458u;
            goto label_1a3458;
        }
    }
    ctx->pc = 0x1A3370u;
label_1a3370:
    // 0x1a3370: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a3370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3374:
    // 0x1a3374: 0x10000034  b           . + 4 + (0x34 << 2)
label_1a3378:
    if (ctx->pc == 0x1A3378u) {
        ctx->pc = 0x1A3378u;
            // 0x1a3378: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A337Cu;
        goto label_1a337c;
    }
    ctx->pc = 0x1A3374u;
    {
        const bool branch_taken_0x1a3374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3374u;
            // 0x1a3378: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3374) {
            ctx->pc = 0x1A3448u;
            goto label_1a3448;
        }
    }
    ctx->pc = 0x1A337Cu;
label_1a337c:
    // 0x1a337c: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x1a337cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1a3380:
    // 0x1a3380: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x1a3380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a3384:
    // 0x1a3384: 0x84c20044  lh          $v0, 0x44($a2)
    ctx->pc = 0x1a3384u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 68)));
label_1a3388:
    // 0x1a3388: 0x1602002c  bne         $s0, $v0, . + 4 + (0x2C << 2)
label_1a338c:
    if (ctx->pc == 0x1A338Cu) {
        ctx->pc = 0x1A3390u;
        goto label_1a3390;
    }
    ctx->pc = 0x1A3388u;
    {
        const bool branch_taken_0x1a3388 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a3388) {
            ctx->pc = 0x1A343Cu;
            goto label_1a343c;
        }
    }
    ctx->pc = 0x1A3390u;
label_1a3390:
    // 0x1a3390: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x1a3390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1a3394:
    // 0x1a3394: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x1a3394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a3398:
    // 0x1a3398: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x1a3398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a339c:
    // 0x1a339c: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x1a339cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a33a0:
    // 0x1a33a0: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x1a33a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a33a4:
    // 0x1a33a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a33a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1a33a8:
    // 0x1a33a8: 0x24a50050  addiu       $a1, $a1, 0x50
    ctx->pc = 0x1a33a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
label_1a33ac:
    // 0x1a33ac: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1a33acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1a33b0:
    // 0x1a33b0: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1a33b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1a33b4:
    // 0x1a33b4: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1a33b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1a33b8:
    // 0x1a33b8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1a33b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1a33bc:
    // 0x1a33bc: 0xc4c30010  lwc1        $f3, 0x10($a2)
    ctx->pc = 0x1a33bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a33c0:
    // 0x1a33c0: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x1a33c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a33c4:
    // 0x1a33c4: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x1a33c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a33c8:
    // 0x1a33c8: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x1a33c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a33cc:
    // 0x1a33cc: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x1a33ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_1a33d0:
    // 0x1a33d0: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x1a33d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_1a33d4:
    // 0x1a33d4: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x1a33d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_1a33d8:
    // 0x1a33d8: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1a33d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_1a33dc:
    // 0x1a33dc: 0xc4c30020  lwc1        $f3, 0x20($a2)
    ctx->pc = 0x1a33dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a33e0:
    // 0x1a33e0: 0xc4c20024  lwc1        $f2, 0x24($a2)
    ctx->pc = 0x1a33e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a33e4:
    // 0x1a33e4: 0xc4c10028  lwc1        $f1, 0x28($a2)
    ctx->pc = 0x1a33e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a33e8:
    // 0x1a33e8: 0xc4c0002c  lwc1        $f0, 0x2C($a2)
    ctx->pc = 0x1a33e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a33ec:
    // 0x1a33ec: 0xe4430020  swc1        $f3, 0x20($v0)
    ctx->pc = 0x1a33ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_1a33f0:
    // 0x1a33f0: 0xe4420024  swc1        $f2, 0x24($v0)
    ctx->pc = 0x1a33f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_1a33f4:
    // 0x1a33f4: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x1a33f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_1a33f8:
    // 0x1a33f8: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x1a33f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_1a33fc:
    // 0x1a33fc: 0xc4c30030  lwc1        $f3, 0x30($a2)
    ctx->pc = 0x1a33fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a3400:
    // 0x1a3400: 0xc4c20034  lwc1        $f2, 0x34($a2)
    ctx->pc = 0x1a3400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a3404:
    // 0x1a3404: 0xc4c10038  lwc1        $f1, 0x38($a2)
    ctx->pc = 0x1a3404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3408:
    // 0x1a3408: 0xc4c0003c  lwc1        $f0, 0x3C($a2)
    ctx->pc = 0x1a3408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a340c:
    // 0x1a340c: 0xe4430030  swc1        $f3, 0x30($v0)
    ctx->pc = 0x1a340cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_1a3410:
    // 0x1a3410: 0xe4420034  swc1        $f2, 0x34($v0)
    ctx->pc = 0x1a3410u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_1a3414:
    // 0x1a3414: 0xe4410038  swc1        $f1, 0x38($v0)
    ctx->pc = 0x1a3414u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_1a3418:
    // 0x1a3418: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1a3418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_1a341c:
    // 0x1a341c: 0xc4c30040  lwc1        $f3, 0x40($a2)
    ctx->pc = 0x1a341cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a3420:
    // 0x1a3420: 0xc4c20044  lwc1        $f2, 0x44($a2)
    ctx->pc = 0x1a3420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a3424:
    // 0x1a3424: 0xc4c10048  lwc1        $f1, 0x48($a2)
    ctx->pc = 0x1a3424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3428:
    // 0x1a3428: 0xc4c0004c  lwc1        $f0, 0x4C($a2)
    ctx->pc = 0x1a3428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a342c:
    // 0x1a342c: 0xe4430040  swc1        $f3, 0x40($v0)
    ctx->pc = 0x1a342cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_1a3430:
    // 0x1a3430: 0xe4420044  swc1        $f2, 0x44($v0)
    ctx->pc = 0x1a3430u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
label_1a3434:
    // 0x1a3434: 0xe4410048  swc1        $f1, 0x48($v0)
    ctx->pc = 0x1a3434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
label_1a3438:
    // 0x1a3438: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x1a3438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
label_1a343c:
    // 0x1a343c: 0x0  nop
    ctx->pc = 0x1a343cu;
    // NOP
label_1a3440:
    // 0x1a3440: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x1a3440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_1a3444:
    // 0x1a3444: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a3444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a3448:
    // 0x1a3448: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x1a3448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_1a344c:
    // 0x1a344c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1a344cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a3450:
    // 0x1a3450: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
label_1a3454:
    if (ctx->pc == 0x1A3454u) {
        ctx->pc = 0x1A3458u;
        goto label_1a3458;
    }
    ctx->pc = 0x1A3450u;
    {
        const bool branch_taken_0x1a3450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3450) {
            ctx->pc = 0x1A337Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a337c;
        }
    }
    ctx->pc = 0x1A3458u;
label_1a3458:
    // 0x1a3458: 0x8e590030  lw          $t9, 0x30($s2)
    ctx->pc = 0x1a3458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1a345c:
    // 0x1a345c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a345cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a3460:
    // 0x1a3460: 0x320f809  jalr        $t9
label_1a3464:
    if (ctx->pc == 0x1A3464u) {
        ctx->pc = 0x1A3464u;
            // 0x1a3464: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3468u;
        goto label_1a3468;
    }
    ctx->pc = 0x1A3460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A3468u);
        ctx->pc = 0x1A3464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3460u;
            // 0x1a3464: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A3468u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A3468u; }
            if (ctx->pc != 0x1A3468u) { return; }
        }
        }
    }
    ctx->pc = 0x1A3468u;
label_1a3468:
    // 0x1a3468: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a3468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a346c:
    // 0x1a346c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a346cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a3470:
    // 0x1a3470: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a3470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a3474:
    // 0x1a3474: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a3474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3478:
    // 0x1a3478: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a3478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a347c:
    // 0x1a347c: 0x3e00008  jr          $ra
label_1a3480:
    if (ctx->pc == 0x1A3480u) {
        ctx->pc = 0x1A3480u;
            // 0x1a3480: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1A3484u;
        goto label_fallthrough_0x1a347c;
    }
    ctx->pc = 0x1A347Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A347Cu;
            // 0x1a3480: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a347c:
    ctx->pc = 0x1A3484u;
}
