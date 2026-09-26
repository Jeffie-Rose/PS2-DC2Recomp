#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckHit__11CColPrimManFi
// Address: 0x1ba840 - 0x1ba8c8
void CheckHit__11CColPrimManFi_0x1ba840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckHit__11CColPrimManFi_0x1ba840");
#endif

    switch (ctx->pc) {
        case 0x1ba868u: goto label_1ba868;
        case 0x1ba87cu: goto label_1ba87c;
        default: break;
    }

    ctx->pc = 0x1ba840u;

    // 0x1ba840: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ba840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ba844: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ba844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ba848: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ba848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ba84c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ba84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ba850: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ba850u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba854: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ba854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ba858: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ba858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba85c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ba85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ba860: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ba860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba864: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ba864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ba868:
    // 0x1ba868: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1ba868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ba86c: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1ba86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1ba870: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1ba870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ba874: 0xc06e7e8  jal         func_1B9FA0
    ctx->pc = 0x1BA874u;
    SET_GPR_U32(ctx, 31, 0x1BA87Cu);
    ctx->pc = 0x1BA878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA874u;
            // 0x1ba878: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9FA0u;
    if (runtime->hasFunction(0x1B9FA0u)) {
        auto targetFn = runtime->lookupFunction(0x1B9FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA87Cu; }
        if (ctx->pc != 0x1BA87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsHit__8CColPrimFP6CScenei_0x1b9fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA87Cu; }
        if (ctx->pc != 0x1BA87Cu) { return; }
    }
    ctx->pc = 0x1BA87Cu;
label_1ba87c:
    // 0x1ba87c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA87Cu;
    {
        const bool branch_taken_0x1ba87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA87Cu;
            // 0x1ba880: 0x111100  sll         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba87c) {
            ctx->pc = 0x1BA898u;
            goto label_1ba898;
        }
    }
    ctx->pc = 0x1BA884u;
    // 0x1ba884: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1ba884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ba888: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ba888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ba88c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ba88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ba890: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA890u;
    {
        const bool branch_taken_0x1ba890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA890u;
            // 0x1ba894: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba890) {
            ctx->pc = 0x1BA8ACu;
            goto label_1ba8ac;
        }
    }
    ctx->pc = 0x1BA898u;
label_1ba898:
    // 0x1ba898: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ba898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ba89c: 0x2a220040  slti        $v0, $s1, 0x40
    ctx->pc = 0x1ba89cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1ba8a0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1BA8A0u;
    {
        const bool branch_taken_0x1ba8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA8A0u;
            // 0x1ba8a4: 0x26520110  addiu       $s2, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba8a0) {
            ctx->pc = 0x1BA868u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ba868;
        }
    }
    ctx->pc = 0x1BA8A8u;
    // 0x1ba8a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ba8a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba8ac:
    // 0x1ba8ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ba8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba8b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ba8b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba8b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ba8b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba8b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ba8b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba8bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ba8bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA8C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA8C0u;
            // 0x1ba8c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA8C8u;
}
