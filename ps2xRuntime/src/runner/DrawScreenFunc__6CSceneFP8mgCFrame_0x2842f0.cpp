#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawScreenFunc__6CSceneFP8mgCFrame
// Address: 0x2842f0 - 0x28438c
void DrawScreenFunc__6CSceneFP8mgCFrame_0x2842f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawScreenFunc__6CSceneFP8mgCFrame_0x2842f0");
#endif

    switch (ctx->pc) {
        case 0x2842f0u: goto label_2842f0;
        case 0x2842f4u: goto label_2842f4;
        case 0x2842f8u: goto label_2842f8;
        case 0x2842fcu: goto label_2842fc;
        case 0x284300u: goto label_284300;
        case 0x284304u: goto label_284304;
        case 0x284308u: goto label_284308;
        case 0x28430cu: goto label_28430c;
        case 0x284310u: goto label_284310;
        case 0x284314u: goto label_284314;
        case 0x284318u: goto label_284318;
        case 0x28431cu: goto label_28431c;
        case 0x284320u: goto label_284320;
        case 0x284324u: goto label_284324;
        case 0x284328u: goto label_284328;
        case 0x28432cu: goto label_28432c;
        case 0x284330u: goto label_284330;
        case 0x284334u: goto label_284334;
        case 0x284338u: goto label_284338;
        case 0x28433cu: goto label_28433c;
        case 0x284340u: goto label_284340;
        case 0x284344u: goto label_284344;
        case 0x284348u: goto label_284348;
        case 0x28434cu: goto label_28434c;
        case 0x284350u: goto label_284350;
        case 0x284354u: goto label_284354;
        case 0x284358u: goto label_284358;
        case 0x28435cu: goto label_28435c;
        case 0x284360u: goto label_284360;
        case 0x284364u: goto label_284364;
        case 0x284368u: goto label_284368;
        case 0x28436cu: goto label_28436c;
        case 0x284370u: goto label_284370;
        case 0x284374u: goto label_284374;
        case 0x284378u: goto label_284378;
        case 0x28437cu: goto label_28437c;
        case 0x284380u: goto label_284380;
        case 0x284384u: goto label_284384;
        case 0x284388u: goto label_284388;
        default: break;
    }

    ctx->pc = 0x2842f0u;

label_2842f0:
    // 0x2842f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2842f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2842f4:
    // 0x2842f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2842f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2842f8:
    // 0x2842f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2842f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2842fc:
    // 0x2842fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2842fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_284300:
    // 0x284300: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x284300u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_284304:
    // 0x284304: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x284304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_284308:
    // 0x284308: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x284308u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28430c:
    // 0x28430c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28430cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_284310:
    // 0x284310: 0x10000012  b           . + 4 + (0x12 << 2)
label_284314:
    if (ctx->pc == 0x284314u) {
        ctx->pc = 0x284314u;
            // 0x284314: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x284318u;
        goto label_284318;
    }
    ctx->pc = 0x284310u;
    {
        const bool branch_taken_0x284310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284310u;
            // 0x284314: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284310) {
            ctx->pc = 0x28435Cu;
            goto label_28435c;
        }
    }
    ctx->pc = 0x284318u;
label_284318:
    // 0x284318: 0xc0a0f58  jal         func_283D60
label_28431c:
    if (ctx->pc == 0x28431Cu) {
        ctx->pc = 0x28431Cu;
            // 0x28431c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x284320u;
        goto label_284320;
    }
    ctx->pc = 0x284318u;
    SET_GPR_U32(ctx, 31, 0x284320u);
    ctx->pc = 0x28431Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284318u;
            // 0x28431c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284320u; }
        if (ctx->pc != 0x284320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284320u; }
        if (ctx->pc != 0x284320u) { return; }
    }
    ctx->pc = 0x284320u;
label_284320:
    // 0x284320: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x284320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_284324:
    // 0x284324: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x284324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_284328:
    // 0x284328: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x284328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28432c:
    // 0x28432c: 0xc0a11a4  jal         func_284690
label_284330:
    if (ctx->pc == 0x284330u) {
        ctx->pc = 0x284330u;
            // 0x284330: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x284334u;
        goto label_284334;
    }
    ctx->pc = 0x28432Cu;
    SET_GPR_U32(ctx, 31, 0x284334u);
    ctx->pc = 0x284330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28432Cu;
            // 0x284330: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284690u;
    if (runtime->hasFunction(0x284690u)) {
        auto targetFn = runtime->lookupFunction(0x284690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284334u; }
        if (ctx->pc != 0x284334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsActive__6CSceneFii_0x284690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284334u; }
        if (ctx->pc != 0x284334u) { return; }
    }
    ctx->pc = 0x284334u;
label_284334:
    // 0x284334: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_284338:
    if (ctx->pc == 0x284338u) {
        ctx->pc = 0x28433Cu;
        goto label_28433c;
    }
    ctx->pc = 0x284334u;
    {
        const bool branch_taken_0x284334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284334) {
            ctx->pc = 0x284358u;
            goto label_284358;
        }
    }
    ctx->pc = 0x28433Cu;
label_28433c:
    // 0x28433c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_284340:
    if (ctx->pc == 0x284340u) {
        ctx->pc = 0x284344u;
        goto label_284344;
    }
    ctx->pc = 0x28433Cu;
    {
        const bool branch_taken_0x28433c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x28433c) {
            ctx->pc = 0x284358u;
            goto label_284358;
        }
    }
    ctx->pc = 0x284344u;
label_284344:
    // 0x284344: 0x8e390d00  lw          $t9, 0xD00($s1)
    ctx->pc = 0x284344u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3328)));
label_284348:
    // 0x284348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28434c:
    // 0x28434c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x28434cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_284350:
    // 0x284350: 0x320f809  jalr        $t9
label_284354:
    if (ctx->pc == 0x284354u) {
        ctx->pc = 0x284354u;
            // 0x284354: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x284358u;
        goto label_284358;
    }
    ctx->pc = 0x284350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x284358u);
        ctx->pc = 0x284354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284350u;
            // 0x284354: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x284358u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x284358u; }
            if (ctx->pc != 0x284358u) { return; }
        }
        }
    }
    ctx->pc = 0x284358u;
label_284358:
    // 0x284358: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x284358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28435c:
    // 0x28435c: 0x0  nop
    ctx->pc = 0x28435cu;
    // NOP
label_284360:
    // 0x284360: 0x8e6327e0  lw          $v1, 0x27E0($s3)
    ctx->pc = 0x284360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10208)));
label_284364:
    // 0x284364: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x284364u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_284368:
    // 0x284368: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_28436c:
    if (ctx->pc == 0x28436Cu) {
        ctx->pc = 0x28436Cu;
            // 0x28436c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x284370u;
        goto label_284370;
    }
    ctx->pc = 0x284368u;
    {
        const bool branch_taken_0x284368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28436Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284368u;
            // 0x28436c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284368) {
            ctx->pc = 0x284318u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_284318;
        }
    }
    ctx->pc = 0x284370u;
label_284370:
    // 0x284370: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x284370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_284374:
    // 0x284374: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x284374u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_284378:
    // 0x284378: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x284378u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28437c:
    // 0x28437c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28437cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_284380:
    // 0x284380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x284380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_284384:
    // 0x284384: 0x3e00008  jr          $ra
label_284388:
    if (ctx->pc == 0x284388u) {
        ctx->pc = 0x284388u;
            // 0x284388: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x28438Cu;
        goto label_fallthrough_0x284384;
    }
    ctx->pc = 0x284384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284384u;
            // 0x284388: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x284384:
    ctx->pc = 0x28438Cu;
}
