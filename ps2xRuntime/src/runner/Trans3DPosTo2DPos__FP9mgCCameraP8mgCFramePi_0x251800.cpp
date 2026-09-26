#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Trans3DPosTo2DPos__FP9mgCCameraP8mgCFramePi
// Address: 0x251800 - 0x251894
void Trans3DPosTo2DPos__FP9mgCCameraP8mgCFramePi_0x251800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Trans3DPosTo2DPos__FP9mgCCameraP8mgCFramePi_0x251800");
#endif

    switch (ctx->pc) {
        case 0x251800u: goto label_251800;
        case 0x251804u: goto label_251804;
        case 0x251808u: goto label_251808;
        case 0x25180cu: goto label_25180c;
        case 0x251810u: goto label_251810;
        case 0x251814u: goto label_251814;
        case 0x251818u: goto label_251818;
        case 0x25181cu: goto label_25181c;
        case 0x251820u: goto label_251820;
        case 0x251824u: goto label_251824;
        case 0x251828u: goto label_251828;
        case 0x25182cu: goto label_25182c;
        case 0x251830u: goto label_251830;
        case 0x251834u: goto label_251834;
        case 0x251838u: goto label_251838;
        case 0x25183cu: goto label_25183c;
        case 0x251840u: goto label_251840;
        case 0x251844u: goto label_251844;
        case 0x251848u: goto label_251848;
        case 0x25184cu: goto label_25184c;
        case 0x251850u: goto label_251850;
        case 0x251854u: goto label_251854;
        case 0x251858u: goto label_251858;
        case 0x25185cu: goto label_25185c;
        case 0x251860u: goto label_251860;
        case 0x251864u: goto label_251864;
        case 0x251868u: goto label_251868;
        case 0x25186cu: goto label_25186c;
        case 0x251870u: goto label_251870;
        case 0x251874u: goto label_251874;
        case 0x251878u: goto label_251878;
        case 0x25187cu: goto label_25187c;
        case 0x251880u: goto label_251880;
        case 0x251884u: goto label_251884;
        case 0x251888u: goto label_251888;
        case 0x25188cu: goto label_25188c;
        case 0x251890u: goto label_251890;
        default: break;
    }

    ctx->pc = 0x251800u;

label_251800:
    // 0x251800: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x251800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_251804:
    // 0x251804: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x251804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_251808:
    // 0x251808: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x251808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_25180c:
    // 0x25180c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25180cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_251810:
    // 0x251810: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x251810u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_251814:
    // 0x251814: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x251814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_251818:
    // 0x251818: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x251818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25181c:
    // 0x25181c: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
label_251820:
    if (ctx->pc == 0x251820u) {
        ctx->pc = 0x251820u;
            // 0x251820: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x251824u;
        goto label_251824;
    }
    ctx->pc = 0x25181Cu;
    {
        const bool branch_taken_0x25181c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x251820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25181Cu;
            // 0x251820: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25181c) {
            ctx->pc = 0x25187Cu;
            goto label_25187c;
        }
    }
    ctx->pc = 0x251824u;
label_251824:
    // 0x251824: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_251828:
    if (ctx->pc == 0x251828u) {
        ctx->pc = 0x25182Cu;
        goto label_25182c;
    }
    ctx->pc = 0x251824u;
    {
        const bool branch_taken_0x251824 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x251824) {
            ctx->pc = 0x251834u;
            goto label_251834;
        }
    }
    ctx->pc = 0x25182Cu;
label_25182c:
    // 0x25182c: 0x10000014  b           . + 4 + (0x14 << 2)
label_251830:
    if (ctx->pc == 0x251830u) {
        ctx->pc = 0x251830u;
            // 0x251830: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x251834u;
        goto label_251834;
    }
    ctx->pc = 0x25182Cu;
    {
        const bool branch_taken_0x25182c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25182Cu;
            // 0x251830: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25182c) {
            ctx->pc = 0x251880u;
            goto label_251880;
        }
    }
    ctx->pc = 0x251834u;
label_251834:
    // 0x251834: 0x8c990060  lw          $t9, 0x60($a0)
    ctx->pc = 0x251834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_251838:
    // 0x251838: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x251838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_25183c:
    // 0x25183c: 0x320f809  jalr        $t9
label_251840:
    if (ctx->pc == 0x251840u) {
        ctx->pc = 0x251840u;
            // 0x251840: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x251844u;
        goto label_251844;
    }
    ctx->pc = 0x25183Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x251844u);
        ctx->pc = 0x251840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25183Cu;
            // 0x251840: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x251844u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x251844u; }
            if (ctx->pc != 0x251844u) { return; }
        }
        }
    }
    ctx->pc = 0x251844u;
label_251844:
    // 0x251844: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x251844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_251848:
    // 0x251848: 0xc04c574  jal         func_1315D0
label_25184c:
    if (ctx->pc == 0x25184Cu) {
        ctx->pc = 0x25184Cu;
            // 0x25184c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x251850u;
        goto label_251850;
    }
    ctx->pc = 0x251848u;
    SET_GPR_U32(ctx, 31, 0x251850u);
    ctx->pc = 0x25184Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251848u;
            // 0x25184c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251850u; }
        if (ctx->pc != 0x251850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251850u; }
        if (ctx->pc != 0x251850u) { return; }
    }
    ctx->pc = 0x251850u;
label_251850:
    // 0x251850: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x251850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_251854:
    // 0x251854: 0xc050e28  jal         func_1438A0
label_251858:
    if (ctx->pc == 0x251858u) {
        ctx->pc = 0x251858u;
            // 0x251858: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x25185Cu;
        goto label_25185c;
    }
    ctx->pc = 0x251854u;
    SET_GPR_U32(ctx, 31, 0x25185Cu);
    ctx->pc = 0x251858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251854u;
            // 0x251858: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438A0u;
    if (runtime->hasFunction(0x1438A0u)) {
        auto targetFn = runtime->lookupFunction(0x1438A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25185Cu; }
        if (ctx->pc != 0x25185Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetViewMatrix__FPA4_fPf_0x1438a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25185Cu; }
        if (ctx->pc != 0x25185Cu) { return; }
    }
    ctx->pc = 0x25185Cu;
label_25185c:
    // 0x25185c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x25185cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_251860:
    // 0x251860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x251860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_251864:
    // 0x251864: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x251864u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_251868:
    // 0x251868: 0x320f809  jalr        $t9
label_25186c:
    if (ctx->pc == 0x25186Cu) {
        ctx->pc = 0x25186Cu;
            // 0x25186c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x251870u;
        goto label_251870;
    }
    ctx->pc = 0x251868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x251870u);
        ctx->pc = 0x25186Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251868u;
            // 0x25186c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x251870u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x251870u; }
            if (ctx->pc != 0x251870u) { return; }
        }
        }
    }
    ctx->pc = 0x251870u;
label_251870:
    // 0x251870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x251870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_251874:
    // 0x251874: 0xc05166c  jal         func_1459B0
label_251878:
    if (ctx->pc == 0x251878u) {
        ctx->pc = 0x251878u;
            // 0x251878: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x25187Cu;
        goto label_25187c;
    }
    ctx->pc = 0x251874u;
    SET_GPR_U32(ctx, 31, 0x25187Cu);
    ctx->pc = 0x251878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251874u;
            // 0x251878: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1459B0u;
    if (runtime->hasFunction(0x1459B0u)) {
        auto targetFn = runtime->lookupFunction(0x1459B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25187Cu; }
        if (ctx->pc != 0x25187Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldScreen__FPiPf_0x1459b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25187Cu; }
        if (ctx->pc != 0x25187Cu) { return; }
    }
    ctx->pc = 0x25187Cu;
label_25187c:
    // 0x25187c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25187cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_251880:
    // 0x251880: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x251880u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_251884:
    // 0x251884: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x251884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_251888:
    // 0x251888: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x251888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_25188c:
    // 0x25188c: 0x3e00008  jr          $ra
label_251890:
    if (ctx->pc == 0x251890u) {
        ctx->pc = 0x251890u;
            // 0x251890: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x251894u;
        goto label_fallthrough_0x25188c;
    }
    ctx->pc = 0x25188Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25188Cu;
            // 0x251890: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x25188c:
    ctx->pc = 0x251894u;
}
