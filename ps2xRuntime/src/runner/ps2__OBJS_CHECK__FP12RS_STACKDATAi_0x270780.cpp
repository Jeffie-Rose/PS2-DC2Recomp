#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_CHECK__FP12RS_STACKDATAi
// Address: 0x270780 - 0x2707dc
void ps2__OBJS_CHECK__FP12RS_STACKDATAi_0x270780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_CHECK__FP12RS_STACKDATAi_0x270780");
#endif

    switch (ctx->pc) {
        case 0x270794u: goto label_270794;
        case 0x27079cu: goto label_27079c;
        case 0x2707b4u: goto label_2707b4;
        case 0x2707c8u: goto label_2707c8;
        default: break;
    }

    ctx->pc = 0x270780u;

    // 0x270780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x270780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x270784: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x270784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x270788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x270788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27078c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27078Cu;
    SET_GPR_U32(ctx, 31, 0x270794u);
    ctx->pc = 0x270790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27078Cu;
            // 0x270790: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270794u; }
        if (ctx->pc != 0x270794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270794u; }
        if (ctx->pc != 0x270794u) { return; }
    }
    ctx->pc = 0x270794u;
label_270794:
    // 0x270794: 0xc098a44  jal         func_262910
    ctx->pc = 0x270794u;
    SET_GPR_U32(ctx, 31, 0x27079Cu);
    ctx->pc = 0x270798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270794u;
            // 0x270798: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27079Cu; }
        if (ctx->pc != 0x27079Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27079Cu; }
        if (ctx->pc != 0x27079Cu) { return; }
    }
    ctx->pc = 0x27079Cu;
label_27079c:
    // 0x27079c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27079Cu;
    {
        const bool branch_taken_0x27079c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2707A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27079Cu;
            // 0x2707a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27079c) {
            ctx->pc = 0x2707ACu;
            goto label_2707ac;
        }
    }
    ctx->pc = 0x2707A4u;
    // 0x2707a4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2707A4u;
    {
        const bool branch_taken_0x2707a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2707A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2707A4u;
            // 0x2707a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2707a4) {
            ctx->pc = 0x2707CCu;
            goto label_2707cc;
        }
    }
    ctx->pc = 0x2707ACu;
label_2707ac:
    // 0x2707ac: 0xc0971a8  jal         func_25C6A0
    ctx->pc = 0x2707ACu;
    SET_GPR_U32(ctx, 31, 0x2707B4u);
    ctx->pc = 0x25C6A0u;
    if (runtime->hasFunction(0x25C6A0u)) {
        auto targetFn = runtime->lookupFunction(0x25C6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2707B4u; }
        if (ctx->pc != 0x2707B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnd__12CSceneObjSeqFv_0x25c6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2707B4u; }
        if (ctx->pc != 0x2707B4u) { return; }
    }
    ctx->pc = 0x2707B4u;
label_2707b4:
    // 0x2707b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2707b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2707b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2707b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2707bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2707bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2707c0: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x2707C0u;
    SET_GPR_U32(ctx, 31, 0x2707C8u);
    ctx->pc = 0x2707C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2707C0u;
            // 0x2707c4: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2707C8u; }
        if (ctx->pc != 0x2707C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2707C8u; }
        if (ctx->pc != 0x2707C8u) { return; }
    }
    ctx->pc = 0x2707C8u;
label_2707c8:
    // 0x2707c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2707c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2707cc:
    // 0x2707cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2707ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2707d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2707d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2707d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2707D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2707D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2707D4u;
            // 0x2707d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2707DCu;
}
