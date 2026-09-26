#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __construct_new_array
// Address: 0x1002f0 - 0x10043c
void ps2___construct_new_array_0x1002f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___construct_new_array_0x1002f0");
#endif

    switch (ctx->pc) {
        case 0x1002f0u: goto label_1002f0;
        case 0x1002f4u: goto label_1002f4;
        case 0x1002f8u: goto label_1002f8;
        case 0x1002fcu: goto label_1002fc;
        case 0x100300u: goto label_100300;
        case 0x100304u: goto label_100304;
        case 0x100308u: goto label_100308;
        case 0x10030cu: goto label_10030c;
        case 0x100310u: goto label_100310;
        case 0x100314u: goto label_100314;
        case 0x100318u: goto label_100318;
        case 0x10031cu: goto label_10031c;
        case 0x100320u: goto label_100320;
        case 0x100324u: goto label_100324;
        case 0x100328u: goto label_100328;
        case 0x10032cu: goto label_10032c;
        case 0x100330u: goto label_100330;
        case 0x100334u: goto label_100334;
        case 0x100338u: goto label_100338;
        case 0x10033cu: goto label_10033c;
        case 0x100340u: goto label_100340;
        case 0x100344u: goto label_100344;
        case 0x100348u: goto label_100348;
        case 0x10034cu: goto label_10034c;
        case 0x100350u: goto label_100350;
        case 0x100354u: goto label_100354;
        case 0x100358u: goto label_100358;
        case 0x10035cu: goto label_10035c;
        case 0x100360u: goto label_100360;
        case 0x100364u: goto label_100364;
        case 0x100368u: goto label_100368;
        case 0x10036cu: goto label_10036c;
        case 0x100370u: goto label_100370;
        case 0x100374u: goto label_100374;
        case 0x100378u: goto label_100378;
        case 0x10037cu: goto label_10037c;
        case 0x100380u: goto label_100380;
        case 0x100384u: goto label_100384;
        case 0x100388u: goto label_100388;
        case 0x10038cu: goto label_10038c;
        case 0x100390u: goto label_100390;
        case 0x100394u: goto label_100394;
        case 0x100398u: goto label_100398;
        case 0x10039cu: goto label_10039c;
        case 0x1003a0u: goto label_1003a0;
        case 0x1003a4u: goto label_1003a4;
        case 0x1003a8u: goto label_1003a8;
        case 0x1003acu: goto label_1003ac;
        case 0x1003b0u: goto label_1003b0;
        case 0x1003b4u: goto label_1003b4;
        case 0x1003b8u: goto label_1003b8;
        case 0x1003bcu: goto label_1003bc;
        case 0x1003c0u: goto label_1003c0;
        case 0x1003c4u: goto label_1003c4;
        case 0x1003c8u: goto label_1003c8;
        case 0x1003ccu: goto label_1003cc;
        case 0x1003d0u: goto label_1003d0;
        case 0x1003d4u: goto label_1003d4;
        case 0x1003d8u: goto label_1003d8;
        case 0x1003dcu: goto label_1003dc;
        case 0x1003e0u: goto label_1003e0;
        case 0x1003e4u: goto label_1003e4;
        case 0x1003e8u: goto label_1003e8;
        case 0x1003ecu: goto label_1003ec;
        case 0x1003f0u: goto label_1003f0;
        case 0x1003f4u: goto label_1003f4;
        case 0x1003f8u: goto label_1003f8;
        case 0x1003fcu: goto label_1003fc;
        case 0x100400u: goto label_100400;
        case 0x100404u: goto label_100404;
        case 0x100408u: goto label_100408;
        case 0x10040cu: goto label_10040c;
        case 0x100410u: goto label_100410;
        case 0x100414u: goto label_100414;
        case 0x100418u: goto label_100418;
        case 0x10041cu: goto label_10041c;
        case 0x100420u: goto label_100420;
        case 0x100424u: goto label_100424;
        case 0x100428u: goto label_100428;
        case 0x10042cu: goto label_10042c;
        case 0x100430u: goto label_100430;
        case 0x100434u: goto label_100434;
        case 0x100438u: goto label_100438;
        default: break;
    }

    ctx->pc = 0x1002f0u;

label_1002f0:
    // 0x1002f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1002f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1002f4:
    // 0x1002f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1002f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1002f8:
    // 0x1002f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1002f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1002fc:
    // 0x1002fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1002fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_100300:
    // 0x100300: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x100300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_100304:
    // 0x100304: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x100304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_100308:
    // 0x100308: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x100308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_10030c:
    // 0x10030c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x10030cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_100310:
    // 0x100310: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x100310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_100314:
    // 0x100314: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x100314u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_100318:
    // 0x100318: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x100318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10031c:
    // 0x10031c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x10031cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_100320:
    // 0x100320: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x100320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_100324:
    // 0x100324: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_100328:
    // 0x100328: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
label_10032c:
    if (ctx->pc == 0x10032Cu) {
        ctx->pc = 0x10032Cu;
            // 0x10032c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x100330u;
        goto label_100330;
    }
    ctx->pc = 0x100328u;
    {
        const bool branch_taken_0x100328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10032Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100328u;
            // 0x10032c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100328) {
            ctx->pc = 0x100404u;
            goto label_100404;
        }
    }
    ctx->pc = 0x100330u;
label_100330:
    // 0x100330: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x100330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
label_100334:
    // 0x100334: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x100334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_100338:
    // 0x100338: 0x12a00032  beqz        $s5, . + 4 + (0x32 << 2)
label_10033c:
    if (ctx->pc == 0x10033Cu) {
        ctx->pc = 0x10033Cu;
            // 0x10033c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x100340u;
        goto label_100340;
    }
    ctx->pc = 0x100338u;
    {
        const bool branch_taken_0x100338 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x10033Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100338u;
            // 0x10033c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100338) {
            ctx->pc = 0x100404u;
            goto label_100404;
        }
    }
    ctx->pc = 0x100340u;
label_100340:
    // 0x100340: 0xafb000a0  sw          $s0, 0xA0($sp)
    ctx->pc = 0x100340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 16));
label_100344:
    // 0x100344: 0x27b600a4  addiu       $s6, $sp, 0xA4
    ctx->pc = 0x100344u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_100348:
    // 0x100348: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x100348u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
label_10034c:
    // 0x10034c: 0x27be00a8  addiu       $fp, $sp, 0xA8
    ctx->pc = 0x10034cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_100350:
    // 0x100350: 0xafd30000  sw          $s3, 0x0($fp)
    ctx->pc = 0x100350u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 19));
label_100354:
    // 0x100354: 0x27b700ac  addiu       $s7, $sp, 0xAC
    ctx->pc = 0x100354u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_100358:
    // 0x100358: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x100358u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
label_10035c:
    // 0x10035c: 0x27b200b0  addiu       $s2, $sp, 0xB0
    ctx->pc = 0x10035cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_100360:
    // 0x100360: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x100360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_100364:
    // 0x100364: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x100364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_100368:
    // 0x100368: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x100368u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_10036c:
    // 0x10036c: 0x10000008  b           . + 4 + (0x8 << 2)
label_100370:
    if (ctx->pc == 0x100370u) {
        ctx->pc = 0x100370u;
            // 0x100370: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x100374u;
        goto label_100374;
    }
    ctx->pc = 0x10036Cu;
    {
        const bool branch_taken_0x10036c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10036Cu;
            // 0x100370: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10036c) {
            ctx->pc = 0x100390u;
            goto label_100390;
        }
    }
    ctx->pc = 0x100374u;
label_100374:
    // 0x100374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x100374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_100378:
    // 0x100378: 0x2a0f809  jalr        $s5
label_10037c:
    if (ctx->pc == 0x10037Cu) {
        ctx->pc = 0x10037Cu;
            // 0x10037c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x100380u;
        goto label_100380;
    }
    ctx->pc = 0x100378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x100380u);
        ctx->pc = 0x10037Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100378u;
            // 0x10037c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x100380u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x100380u; }
            if (ctx->pc != 0x100380u) { return; }
        }
        }
    }
    ctx->pc = 0x100380u;
label_100380:
    // 0x100380: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x100380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_100384:
    // 0x100384: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x100384u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_100388:
    // 0x100388: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x100388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10038c:
    // 0x10038c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x10038cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_100390:
    // 0x100390: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x100390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_100394:
    // 0x100394: 0x93102b  sltu        $v0, $a0, $s3
    ctx->pc = 0x100394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_100398:
    // 0x100398: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_10039c:
    if (ctx->pc == 0x10039Cu) {
        ctx->pc = 0x1003A0u;
        goto label_1003a0;
    }
    ctx->pc = 0x100398u;
    {
        const bool branch_taken_0x100398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100398) {
            ctx->pc = 0x100374u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_100374;
        }
    }
    ctx->pc = 0x1003A0u;
label_1003a0:
    // 0x1003a0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1003a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1003a4:
    // 0x1003a4: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x1003a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1003a8:
    // 0x1003a8: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_1003ac:
    if (ctx->pc == 0x1003ACu) {
        ctx->pc = 0x1003B0u;
        goto label_1003b0;
    }
    ctx->pc = 0x1003A8u;
    {
        const bool branch_taken_0x1003a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1003a8) {
            ctx->pc = 0x100404u;
            goto label_100404;
        }
    }
    ctx->pc = 0x1003B0u;
label_1003b0:
    // 0x1003b0: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1003b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1003b4:
    // 0x1003b4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1003b8:
    if (ctx->pc == 0x1003B8u) {
        ctx->pc = 0x1003BCu;
        goto label_1003bc;
    }
    ctx->pc = 0x1003B4u;
    {
        const bool branch_taken_0x1003b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1003b4) {
            ctx->pc = 0x100404u;
            goto label_100404;
        }
    }
    ctx->pc = 0x1003BCu;
label_1003bc:
    // 0x1003bc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1003bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1003c0:
    // 0x1003c0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1003c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1003c4:
    // 0x1003c4: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1003c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1003c8:
    // 0x1003c8: 0x1000000a  b           . + 4 + (0xA << 2)
label_1003cc:
    if (ctx->pc == 0x1003CCu) {
        ctx->pc = 0x1003CCu;
            // 0x1003cc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1003D0u;
        goto label_1003d0;
    }
    ctx->pc = 0x1003C8u;
    {
        const bool branch_taken_0x1003c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1003CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1003C8u;
            // 0x1003cc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1003c8) {
            ctx->pc = 0x1003F4u;
            goto label_1003f4;
        }
    }
    ctx->pc = 0x1003D0u;
label_1003d0:
    // 0x1003d0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1003d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1003d4:
    // 0x1003d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1003d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1003d8:
    // 0x1003d8: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1003d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1003dc:
    // 0x1003dc: 0x2238823  subu        $s1, $s1, $v1
    ctx->pc = 0x1003dcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1003e0:
    // 0x1003e0: 0x40f809  jalr        $v0
label_1003e4:
    if (ctx->pc == 0x1003E4u) {
        ctx->pc = 0x1003E4u;
            // 0x1003e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1003E8u;
        goto label_1003e8;
    }
    ctx->pc = 0x1003E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1003E8u);
        ctx->pc = 0x1003E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1003E0u;
            // 0x1003e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1003E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1003E8u; }
            if (ctx->pc != 0x1003E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1003E8u;
label_1003e8:
    // 0x1003e8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1003e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1003ec:
    // 0x1003ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1003ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1003f0:
    // 0x1003f0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1003f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1003f4:
    // 0x1003f4: 0x0  nop
    ctx->pc = 0x1003f4u;
    // NOP
label_1003f8:
    // 0x1003f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1003f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1003fc:
    // 0x1003fc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_100400:
    if (ctx->pc == 0x100400u) {
        ctx->pc = 0x100404u;
        goto label_100404;
    }
    ctx->pc = 0x1003FCu;
    {
        const bool branch_taken_0x1003fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1003fc) {
            ctx->pc = 0x1003D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1003d0;
        }
    }
    ctx->pc = 0x100404u;
label_100404:
    // 0x100404: 0x0  nop
    ctx->pc = 0x100404u;
    // NOP
label_100408:
    // 0x100408: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x100408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10040c:
    // 0x10040c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x10040cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_100410:
    // 0x100410: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x100410u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_100414:
    // 0x100414: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x100414u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_100418:
    // 0x100418: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x100418u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10041c:
    // 0x10041c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x10041cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_100420:
    // 0x100420: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x100420u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_100424:
    // 0x100424: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x100424u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_100428:
    // 0x100428: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x100428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10042c:
    // 0x10042c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10042cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_100430:
    // 0x100430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_100434:
    // 0x100434: 0x3e00008  jr          $ra
label_100438:
    if (ctx->pc == 0x100438u) {
        ctx->pc = 0x100438u;
            // 0x100438: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x10043Cu;
        goto label_fallthrough_0x100434;
    }
    ctx->pc = 0x100434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100434u;
            // 0x100438: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x100434:
    ctx->pc = 0x10043Cu;
}
