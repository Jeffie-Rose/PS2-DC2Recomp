#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RemakeBBox__8mgCFrameFPfPf
// Address: 0x136800 - 0x136890
void RemakeBBox__8mgCFrameFPfPf_0x136800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RemakeBBox__8mgCFrameFPfPf_0x136800");
#endif

    switch (ctx->pc) {
        case 0x136800u: goto label_136800;
        case 0x136804u: goto label_136804;
        case 0x136808u: goto label_136808;
        case 0x13680cu: goto label_13680c;
        case 0x136810u: goto label_136810;
        case 0x136814u: goto label_136814;
        case 0x136818u: goto label_136818;
        case 0x13681cu: goto label_13681c;
        case 0x136820u: goto label_136820;
        case 0x136824u: goto label_136824;
        case 0x136828u: goto label_136828;
        case 0x13682cu: goto label_13682c;
        case 0x136830u: goto label_136830;
        case 0x136834u: goto label_136834;
        case 0x136838u: goto label_136838;
        case 0x13683cu: goto label_13683c;
        case 0x136840u: goto label_136840;
        case 0x136844u: goto label_136844;
        case 0x136848u: goto label_136848;
        case 0x13684cu: goto label_13684c;
        case 0x136850u: goto label_136850;
        case 0x136854u: goto label_136854;
        case 0x136858u: goto label_136858;
        case 0x13685cu: goto label_13685c;
        case 0x136860u: goto label_136860;
        case 0x136864u: goto label_136864;
        case 0x136868u: goto label_136868;
        case 0x13686cu: goto label_13686c;
        case 0x136870u: goto label_136870;
        case 0x136874u: goto label_136874;
        case 0x136878u: goto label_136878;
        case 0x13687cu: goto label_13687c;
        case 0x136880u: goto label_136880;
        case 0x136884u: goto label_136884;
        case 0x136888u: goto label_136888;
        case 0x13688cu: goto label_13688c;
        default: break;
    }

    ctx->pc = 0x136800u;

label_136800:
    // 0x136800: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x136800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_136804:
    // 0x136804: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x136804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_136808:
    // 0x136808: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x136808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_13680c:
    // 0x13680c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13680cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_136810:
    // 0x136810: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x136810u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_136814:
    // 0x136814: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x136814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_136818:
    // 0x136818: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x136818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13681c:
    // 0x13681c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13681cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_136820:
    // 0x136820: 0x8c9000f8  lw          $s0, 0xF8($a0)
    ctx->pc = 0x136820u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
label_136824:
    // 0x136824: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_136828:
    if (ctx->pc == 0x136828u) {
        ctx->pc = 0x136828u;
            // 0x136828: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13682Cu;
        goto label_13682c;
    }
    ctx->pc = 0x136824u;
    {
        const bool branch_taken_0x136824 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x136828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136824u;
            // 0x136828: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136824) {
            ctx->pc = 0x136834u;
            goto label_136834;
        }
    }
    ctx->pc = 0x13682Cu;
label_13682c:
    // 0x13682c: 0x10000011  b           . + 4 + (0x11 << 2)
label_136830:
    if (ctx->pc == 0x136830u) {
        ctx->pc = 0x136830u;
            // 0x136830: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x136834u;
        goto label_136834;
    }
    ctx->pc = 0x13682Cu;
    {
        const bool branch_taken_0x13682c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13682Cu;
            // 0x136830: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13682c) {
            ctx->pc = 0x136874u;
            goto label_136874;
        }
    }
    ctx->pc = 0x136834u;
label_136834:
    // 0x136834: 0xc04dc0c  jal         func_137030
label_136838:
    if (ctx->pc == 0x136838u) {
        ctx->pc = 0x136838u;
            // 0x136838: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x13683Cu;
        goto label_13683c;
    }
    ctx->pc = 0x136834u;
    SET_GPR_U32(ctx, 31, 0x13683Cu);
    ctx->pc = 0x136838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136834u;
            // 0x136838: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13683Cu; }
        if (ctx->pc != 0x13683Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13683Cu; }
        if (ctx->pc != 0x13683Cu) { return; }
    }
    ctx->pc = 0x13683Cu;
label_13683c:
    // 0x13683c: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x13683cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_136840:
    // 0x136840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136844:
    // 0x136844: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x136844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_136848:
    // 0x136848: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x136848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13684c:
    // 0x13684c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x13684cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_136850:
    // 0x136850: 0x320f809  jalr        $t9
label_136854:
    if (ctx->pc == 0x136854u) {
        ctx->pc = 0x136854u;
            // 0x136854: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x136858u;
        goto label_136858;
    }
    ctx->pc = 0x136850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x136858u);
        ctx->pc = 0x136854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136850u;
            // 0x136854: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x136858u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x136858u; }
            if (ctx->pc != 0x136858u) { return; }
        }
        }
    }
    ctx->pc = 0x136858u;
label_136858:
    // 0x136858: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_13685c:
    if (ctx->pc == 0x13685Cu) {
        ctx->pc = 0x13685Cu;
            // 0x13685c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x136860u;
        goto label_136860;
    }
    ctx->pc = 0x136858u;
    {
        const bool branch_taken_0x136858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13685Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136858u;
            // 0x13685c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136858) {
            ctx->pc = 0x136874u;
            goto label_136874;
        }
    }
    ctx->pc = 0x136860u;
label_136860:
    // 0x136860: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x136860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_136864:
    // 0x136864: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x136864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_136868:
    // 0x136868: 0xc04d97c  jal         func_1365F0
label_13686c:
    if (ctx->pc == 0x13686Cu) {
        ctx->pc = 0x13686Cu;
            // 0x13686c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x136870u;
        goto label_136870;
    }
    ctx->pc = 0x136868u;
    SET_GPR_U32(ctx, 31, 0x136870u);
    ctx->pc = 0x13686Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136868u;
            // 0x13686c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1365F0u;
    if (runtime->hasFunction(0x1365F0u)) {
        auto targetFn = runtime->lookupFunction(0x1365F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136870u; }
        if (ctx->pc != 0x136870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBBox__8mgCFrameFPfPf_0x1365f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136870u; }
        if (ctx->pc != 0x136870u) { return; }
    }
    ctx->pc = 0x136870u;
label_136870:
    // 0x136870: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x136870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_136874:
    // 0x136874: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x136874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_136878:
    // 0x136878: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x136878u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13687c:
    // 0x13687c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13687cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_136880:
    // 0x136880: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x136880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_136884:
    // 0x136884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_136888:
    // 0x136888: 0x3e00008  jr          $ra
label_13688c:
    if (ctx->pc == 0x13688Cu) {
        ctx->pc = 0x13688Cu;
            // 0x13688c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x136890u;
        goto label_fallthrough_0x136888;
    }
    ctx->pc = 0x136888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13688Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136888u;
            // 0x13688c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x136888:
    ctx->pc = 0x136890u;
}
