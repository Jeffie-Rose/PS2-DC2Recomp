#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadExMotionBG__FP11SubGameInfoP1
// Address: 0x2fc610 - 0x2fc678
void LoadExMotionBG__FP11SubGameInfoP1_0x2fc610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadExMotionBG__FP11SubGameInfoP1_0x2fc610");
#endif

    switch (ctx->pc) {
        case 0x2fc63cu: goto label_2fc63c;
        case 0x2fc650u: goto label_2fc650;
        default: break;
    }

    ctx->pc = 0x2fc610u;

    // 0x2fc610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fc614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fc614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fc618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fc618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fc61c: 0xaf80a024  sw          $zero, -0x5FDC($gp)
    ctx->pc = 0x2fc61cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942756), GPR_U32(ctx, 0));
    // 0x2fc620: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2fc620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2fc624: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC624u;
    {
        const bool branch_taken_0x2fc624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC624u;
            // 0x2fc628: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc624) {
            ctx->pc = 0x2FC634u;
            goto label_2fc634;
        }
    }
    ctx->pc = 0x2FC62Cu;
    // 0x2fc62c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2FC62Cu;
    {
        const bool branch_taken_0x2fc62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC62Cu;
            // 0x2fc630: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc62c) {
            ctx->pc = 0x2FC668u;
            goto label_2fc668;
        }
    }
    ctx->pc = 0x2FC634u;
label_2fc634:
    // 0x2fc634: 0xc052330  jal         func_148CC0
    ctx->pc = 0x2FC634u;
    SET_GPR_U32(ctx, 31, 0x2FC63Cu);
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC63Cu; }
        if (ctx->pc != 0x2FC63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC63Cu; }
        if (ctx->pc != 0x2FC63Cu) { return; }
    }
    ctx->pc = 0x2FC63Cu;
label_2fc63c:
    // 0x2fc63c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2fc63cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2fc640: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fc640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc644: 0x24841de0  addiu       $a0, $a0, 0x1DE0
    ctx->pc = 0x2fc644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7648));
    // 0x2fc648: 0xc05224c  jal         func_148930
    ctx->pc = 0x2FC648u;
    SET_GPR_U32(ctx, 31, 0x2FC650u);
    ctx->pc = 0x2FC64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC648u;
            // 0x2fc64c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC650u; }
        if (ctx->pc != 0x2FC650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC650u; }
        if (ctx->pc != 0x2FC650u) { return; }
    }
    ctx->pc = 0x2FC650u;
label_2fc650:
    // 0x2fc650: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC650u;
    {
        const bool branch_taken_0x2fc650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC650u;
            // 0x2fc654: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc650) {
            ctx->pc = 0x2FC660u;
            goto label_2fc660;
        }
    }
    ctx->pc = 0x2FC658u;
    // 0x2fc658: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC658u;
    {
        const bool branch_taken_0x2fc658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC658u;
            // 0x2fc65c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc658) {
            ctx->pc = 0x2FC668u;
            goto label_2fc668;
        }
    }
    ctx->pc = 0x2FC660u;
label_2fc660:
    // 0x2fc660: 0xaf90a070  sw          $s0, -0x5F90($gp)
    ctx->pc = 0x2fc660u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942832), GPR_U32(ctx, 16));
    // 0x2fc664: 0xaf82a024  sw          $v0, -0x5FDC($gp)
    ctx->pc = 0x2fc664u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942756), GPR_U32(ctx, 2));
label_2fc668:
    // 0x2fc668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fc668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc66c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fc66cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc670: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC670u;
            // 0x2fc674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC678u;
}
