#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawScreenFunc__8CEditMapFP8mgCFrame
// Address: 0x2ef630 - 0x2ef6c4
void DrawScreenFunc__8CEditMapFP8mgCFrame_0x2ef630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawScreenFunc__8CEditMapFP8mgCFrame_0x2ef630");
#endif

    switch (ctx->pc) {
        case 0x2ef630u: goto label_2ef630;
        case 0x2ef634u: goto label_2ef634;
        case 0x2ef638u: goto label_2ef638;
        case 0x2ef63cu: goto label_2ef63c;
        case 0x2ef640u: goto label_2ef640;
        case 0x2ef644u: goto label_2ef644;
        case 0x2ef648u: goto label_2ef648;
        case 0x2ef64cu: goto label_2ef64c;
        case 0x2ef650u: goto label_2ef650;
        case 0x2ef654u: goto label_2ef654;
        case 0x2ef658u: goto label_2ef658;
        case 0x2ef65cu: goto label_2ef65c;
        case 0x2ef660u: goto label_2ef660;
        case 0x2ef664u: goto label_2ef664;
        case 0x2ef668u: goto label_2ef668;
        case 0x2ef66cu: goto label_2ef66c;
        case 0x2ef670u: goto label_2ef670;
        case 0x2ef674u: goto label_2ef674;
        case 0x2ef678u: goto label_2ef678;
        case 0x2ef67cu: goto label_2ef67c;
        case 0x2ef680u: goto label_2ef680;
        case 0x2ef684u: goto label_2ef684;
        case 0x2ef688u: goto label_2ef688;
        case 0x2ef68cu: goto label_2ef68c;
        case 0x2ef690u: goto label_2ef690;
        case 0x2ef694u: goto label_2ef694;
        case 0x2ef698u: goto label_2ef698;
        case 0x2ef69cu: goto label_2ef69c;
        case 0x2ef6a0u: goto label_2ef6a0;
        case 0x2ef6a4u: goto label_2ef6a4;
        case 0x2ef6a8u: goto label_2ef6a8;
        case 0x2ef6acu: goto label_2ef6ac;
        case 0x2ef6b0u: goto label_2ef6b0;
        case 0x2ef6b4u: goto label_2ef6b4;
        case 0x2ef6b8u: goto label_2ef6b8;
        case 0x2ef6bcu: goto label_2ef6bc;
        case 0x2ef6c0u: goto label_2ef6c0;
        default: break;
    }

    ctx->pc = 0x2ef630u;

label_2ef630:
    // 0x2ef630: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ef630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2ef634:
    // 0x2ef634: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ef634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2ef638:
    // 0x2ef638: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ef638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2ef63c:
    // 0x2ef63c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ef63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ef640:
    // 0x2ef640: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ef640u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ef644:
    // 0x2ef644: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ef644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ef648:
    // 0x2ef648: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ef648u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ef64c:
    // 0x2ef64c: 0xc057f40  jal         func_15FD00
label_2ef650:
    if (ctx->pc == 0x2EF650u) {
        ctx->pc = 0x2EF650u;
            // 0x2ef650: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2EF654u;
        goto label_2ef654;
    }
    ctx->pc = 0x2EF64Cu;
    SET_GPR_U32(ctx, 31, 0x2EF654u);
    ctx->pc = 0x2EF650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF64Cu;
            // 0x2ef650: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FD00u;
    if (runtime->hasFunction(0x15FD00u)) {
        auto targetFn = runtime->lookupFunction(0x15FD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF654u; }
        if (ctx->pc != 0x2EF654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawScreenFunc__4CMapFP8mgCFrame_0x15fd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF654u; }
        if (ctx->pc != 0x2EF654u) { return; }
    }
    ctx->pc = 0x2EF654u;
label_2ef654:
    // 0x2ef654: 0x8e700d44  lw          $s0, 0xD44($s3)
    ctx->pc = 0x2ef654u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3396)));
label_2ef658:
    // 0x2ef658: 0x1000000f  b           . + 4 + (0xF << 2)
label_2ef65c:
    if (ctx->pc == 0x2EF65Cu) {
        ctx->pc = 0x2EF65Cu;
            // 0x2ef65c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EF660u;
        goto label_2ef660;
    }
    ctx->pc = 0x2EF658u;
    {
        const bool branch_taken_0x2ef658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF658u;
            // 0x2ef65c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef658) {
            ctx->pc = 0x2EF698u;
            goto label_2ef698;
        }
    }
    ctx->pc = 0x2EF660u;
label_2ef660:
    // 0x2ef660: 0xc0bb988  jal         func_2EE620
label_2ef664:
    if (ctx->pc == 0x2EF664u) {
        ctx->pc = 0x2EF664u;
            // 0x2ef664: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EF668u;
        goto label_2ef668;
    }
    ctx->pc = 0x2EF660u;
    SET_GPR_U32(ctx, 31, 0x2EF668u);
    ctx->pc = 0x2EF664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF660u;
            // 0x2ef664: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE620u;
    if (runtime->hasFunction(0x2EE620u)) {
        auto targetFn = runtime->lookupFunction(0x2EE620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF668u; }
        if (ctx->pc != 0x2EF668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNormalPlaceParts__8CEditMapFP10CEditParts_0x2ee620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF668u; }
        if (ctx->pc != 0x2EF668u) { return; }
    }
    ctx->pc = 0x2EF668u;
label_2ef668:
    // 0x2ef668: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2ef66c:
    if (ctx->pc == 0x2EF66Cu) {
        ctx->pc = 0x2EF670u;
        goto label_2ef670;
    }
    ctx->pc = 0x2EF668u;
    {
        const bool branch_taken_0x2ef668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef668) {
            ctx->pc = 0x2EF690u;
            goto label_2ef690;
        }
    }
    ctx->pc = 0x2EF670u;
label_2ef670:
    // 0x2ef670: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2ef670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ef674:
    // 0x2ef674: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x2ef674u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_2ef678:
    // 0x2ef678: 0x320f809  jalr        $t9
label_2ef67c:
    if (ctx->pc == 0x2EF67Cu) {
        ctx->pc = 0x2EF67Cu;
            // 0x2ef67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EF680u;
        goto label_2ef680;
    }
    ctx->pc = 0x2EF678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EF680u);
        ctx->pc = 0x2EF67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF678u;
            // 0x2ef67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EF680u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EF680u; }
            if (ctx->pc != 0x2EF680u) { return; }
        }
        }
    }
    ctx->pc = 0x2EF680u;
label_2ef680:
    // 0x2ef680: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ef684:
    if (ctx->pc == 0x2EF684u) {
        ctx->pc = 0x2EF684u;
            // 0x2ef684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EF688u;
        goto label_2ef688;
    }
    ctx->pc = 0x2EF680u;
    {
        const bool branch_taken_0x2ef680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF680u;
            // 0x2ef684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef680) {
            ctx->pc = 0x2EF690u;
            goto label_2ef690;
        }
    }
    ctx->pc = 0x2EF688u;
label_2ef688:
    // 0x2ef688: 0xc059dcc  jal         func_167730
label_2ef68c:
    if (ctx->pc == 0x2EF68Cu) {
        ctx->pc = 0x2EF68Cu;
            // 0x2ef68c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EF690u;
        goto label_2ef690;
    }
    ctx->pc = 0x2EF688u;
    SET_GPR_U32(ctx, 31, 0x2EF690u);
    ctx->pc = 0x2EF68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF688u;
            // 0x2ef68c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167730u;
    if (runtime->hasFunction(0x167730u)) {
        auto targetFn = runtime->lookupFunction(0x167730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF690u; }
        if (ctx->pc != 0x2EF690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawScreenFunc__9CMapPartsFP8mgCFrame_0x167730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF690u; }
        if (ctx->pc != 0x2EF690u) { return; }
    }
    ctx->pc = 0x2EF690u;
label_2ef690:
    // 0x2ef690: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ef690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2ef694:
    // 0x2ef694: 0x26100330  addiu       $s0, $s0, 0x330
    ctx->pc = 0x2ef694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
label_2ef698:
    // 0x2ef698: 0x8e630d40  lw          $v1, 0xD40($s3)
    ctx->pc = 0x2ef698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3392)));
label_2ef69c:
    // 0x2ef69c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x2ef69cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2ef6a0:
    // 0x2ef6a0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_2ef6a4:
    if (ctx->pc == 0x2EF6A4u) {
        ctx->pc = 0x2EF6A4u;
            // 0x2ef6a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EF6A8u;
        goto label_2ef6a8;
    }
    ctx->pc = 0x2EF6A0u;
    {
        const bool branch_taken_0x2ef6a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF6A0u;
            // 0x2ef6a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef6a0) {
            ctx->pc = 0x2EF660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef660;
        }
    }
    ctx->pc = 0x2EF6A8u;
label_2ef6a8:
    // 0x2ef6a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ef6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ef6ac:
    // 0x2ef6ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ef6acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ef6b0:
    // 0x2ef6b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ef6b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ef6b4:
    // 0x2ef6b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ef6b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ef6b8:
    // 0x2ef6b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ef6b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef6bc:
    // 0x2ef6bc: 0x3e00008  jr          $ra
label_2ef6c0:
    if (ctx->pc == 0x2EF6C0u) {
        ctx->pc = 0x2EF6C0u;
            // 0x2ef6c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2EF6C4u;
        goto label_fallthrough_0x2ef6bc;
    }
    ctx->pc = 0x2EF6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF6BCu;
            // 0x2ef6c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ef6bc:
    ctx->pc = 0x2EF6C4u;
}
