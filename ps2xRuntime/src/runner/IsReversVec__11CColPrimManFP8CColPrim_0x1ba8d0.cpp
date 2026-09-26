#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsReversVec__11CColPrimManFP8CColPrim
// Address: 0x1ba8d0 - 0x1ba95c
void IsReversVec__11CColPrimManFP8CColPrim_0x1ba8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsReversVec__11CColPrimManFP8CColPrim_0x1ba8d0");
#endif

    switch (ctx->pc) {
        case 0x1ba8f8u: goto label_1ba8f8;
        case 0x1ba910u: goto label_1ba910;
        default: break;
    }

    ctx->pc = 0x1ba8d0u;

    // 0x1ba8d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ba8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ba8d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ba8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ba8d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ba8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ba8dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ba8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ba8e0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ba8e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba8e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ba8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ba8e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ba8e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba8ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ba8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ba8f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ba8f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba8f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ba8f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ba8f8:
    // 0x1ba8f8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1ba8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba8fc: 0x1051000b  beq         $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BA8FCu;
    {
        const bool branch_taken_0x1ba8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1BA900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA8FCu;
            // 0x1ba900: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba8fc) {
            ctx->pc = 0x1BA92Cu;
            goto label_1ba92c;
        }
    }
    ctx->pc = 0x1BA904u;
    // 0x1ba904: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ba904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba908: 0xc06e910  jal         func_1BA440
    ctx->pc = 0x1BA908u;
    SET_GPR_U32(ctx, 31, 0x1BA910u);
    ctx->pc = 0x1BA90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA908u;
            // 0x1ba90c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA440u;
    if (runtime->hasFunction(0x1BA440u)) {
        auto targetFn = runtime->lookupFunction(0x1BA440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA910u; }
        if (ctx->pc != 0x1BA910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsReversVec__8CColPrimFP8CColPrim_0x1ba440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA910u; }
        if (ctx->pc != 0x1BA910u) { return; }
    }
    ctx->pc = 0x1BA910u;
label_1ba910:
    // 0x1ba910: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA910u;
    {
        const bool branch_taken_0x1ba910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA910u;
            // 0x1ba914: 0x111100  sll         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba910) {
            ctx->pc = 0x1BA92Cu;
            goto label_1ba92c;
        }
    }
    ctx->pc = 0x1BA918u;
    // 0x1ba918: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1ba918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ba91c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ba91cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ba920: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ba920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ba924: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA924u;
    {
        const bool branch_taken_0x1ba924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA924u;
            // 0x1ba928: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba924) {
            ctx->pc = 0x1BA940u;
            goto label_1ba940;
        }
    }
    ctx->pc = 0x1BA92Cu;
label_1ba92c:
    // 0x1ba92c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ba92cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ba930: 0x2a220040  slti        $v0, $s1, 0x40
    ctx->pc = 0x1ba930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1ba934: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1BA934u;
    {
        const bool branch_taken_0x1ba934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA934u;
            // 0x1ba938: 0x26520110  addiu       $s2, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba934) {
            ctx->pc = 0x1BA8F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ba8f8;
        }
    }
    ctx->pc = 0x1BA93Cu;
    // 0x1ba93c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ba93cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba940:
    // 0x1ba940: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ba940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba944: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ba944u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba948: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ba948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba94c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ba94cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ba950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba954: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA954u;
            // 0x1ba958: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA95Cu;
}
