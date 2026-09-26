#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MONS_SE_PLAY__FP12RS_STACKDATAi
// Address: 0x1e7840 - 0x1e78b8
void ps2__MONS_SE_PLAY__FP12RS_STACKDATAi_0x1e7840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MONS_SE_PLAY__FP12RS_STACKDATAi_0x1e7840");
#endif

    switch (ctx->pc) {
        case 0x1e7864u: goto label_1e7864;
        case 0x1e7870u: goto label_1e7870;
        case 0x1e78a4u: goto label_1e78a4;
        default: break;
    }

    ctx->pc = 0x1e7840u;

    // 0x1e7840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7844: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e7844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e7848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e7848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e784c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E784Cu;
    {
        const bool branch_taken_0x1e784c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E7850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E784Cu;
            // 0x1e7850: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e784c) {
            ctx->pc = 0x1E785Cu;
            goto label_1e785c;
        }
    }
    ctx->pc = 0x1E7854u;
    // 0x1e7854: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E7854u;
    {
        const bool branch_taken_0x1e7854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7854u;
            // 0x1e7858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7854) {
            ctx->pc = 0x1E78A8u;
            goto label_1e78a8;
        }
    }
    ctx->pc = 0x1E785Cu;
label_1e785c:
    // 0x1e785c: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E785Cu;
    SET_GPR_U32(ctx, 31, 0x1E7864u);
    ctx->pc = 0x1E7860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E785Cu;
            // 0x1e7860: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7864u; }
        if (ctx->pc != 0x1E7864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7864u; }
        if (ctx->pc != 0x1E7864u) { return; }
    }
    ctx->pc = 0x1E7864u;
label_1e7864:
    // 0x1e7864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7868: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E7868u;
    SET_GPR_U32(ctx, 31, 0x1E7870u);
    ctx->pc = 0x1E786Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7868u;
            // 0x1e786c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7870u; }
        if (ctx->pc != 0x1E7870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7870u; }
        if (ctx->pc != 0x1E7870u) { return; }
    }
    ctx->pc = 0x1E7870u;
label_1e7870:
    // 0x1e7870: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x1e7870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e7874: 0x2603ffe8  addiu       $v1, $s0, -0x18
    ctx->pc = 0x1e7874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
    // 0x1e7878: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e7878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e787c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e787cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e7880: 0x8c630484  lw          $v1, 0x484($v1)
    ctx->pc = 0x1e7880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
    // 0x1e7884: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7884u;
    {
        const bool branch_taken_0x1e7884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7884) {
            ctx->pc = 0x1E7894u;
            goto label_1e7894;
        }
    }
    ctx->pc = 0x1E788Cu;
    // 0x1e788c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E788Cu;
    {
        const bool branch_taken_0x1e788c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E788Cu;
            // 0x1e7890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e788c) {
            ctx->pc = 0x1E78A8u;
            goto label_1e78a8;
        }
    }
    ctx->pc = 0x1E7894u;
label_1e7894:
    // 0x1e7894: 0x8c640588  lw          $a0, 0x588($v1)
    ctx->pc = 0x1e7894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1416)));
    // 0x1e7898: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e7898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e789c: 0xc063818  jal         func_18E060
    ctx->pc = 0x1E789Cu;
    SET_GPR_U32(ctx, 31, 0x1E78A4u);
    ctx->pc = 0x1E78A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E789Cu;
            // 0x1e78a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E78A4u; }
        if (ctx->pc != 0x1E78A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E78A4u; }
        if (ctx->pc != 0x1E78A4u) { return; }
    }
    ctx->pc = 0x1E78A4u;
label_1e78a4:
    // 0x1e78a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e78a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e78a8:
    // 0x1e78a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e78a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e78ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e78acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e78b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E78B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E78B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E78B0u;
            // 0x1e78b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E78B8u;
}
