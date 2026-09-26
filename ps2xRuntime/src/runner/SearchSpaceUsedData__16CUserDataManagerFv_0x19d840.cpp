#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchSpaceUsedData__16CUserDataManagerFv
// Address: 0x19d840 - 0x19d8a4
void SearchSpaceUsedData__16CUserDataManagerFv_0x19d840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchSpaceUsedData__16CUserDataManagerFv_0x19d840");
#endif

    switch (ctx->pc) {
        case 0x19d858u: goto label_19d858;
        case 0x19d868u: goto label_19d868;
        default: break;
    }

    ctx->pc = 0x19d840u;

    // 0x19d840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19d844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19d848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19d848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d84c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19d84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d850: 0xc068644  jal         func_1A1910
    ctx->pc = 0x19D850u;
    SET_GPR_U32(ctx, 31, 0x19D858u);
    ctx->pc = 0x19D854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D850u;
            // 0x19d854: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D858u; }
        if (ctx->pc != 0x19D858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D858u; }
        if (ctx->pc != 0x19D858u) { return; }
    }
    ctx->pc = 0x19D858u;
label_19d858:
    // 0x19d858: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x19d858u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19d85c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x19D85Cu;
    {
        const bool branch_taken_0x19d85c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D85Cu;
            // 0x19d860: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d85c) {
            ctx->pc = 0x19D890u;
            goto label_19d890;
        }
    }
    ctx->pc = 0x19D864u;
    // 0x19d864: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19d864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d868:
    // 0x19d868: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x19d868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x19d86c: 0x84630002  lh          $v1, 0x2($v1)
    ctx->pc = 0x19d86cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x19d870: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D870u;
    {
        const bool branch_taken_0x19d870 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x19d870) {
            ctx->pc = 0x19D880u;
            goto label_19d880;
        }
    }
    ctx->pc = 0x19D878u;
    // 0x19d878: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19D878u;
    {
        const bool branch_taken_0x19d878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D878u;
            // 0x19d87c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d878) {
            ctx->pc = 0x19D894u;
            goto label_19d894;
        }
    }
    ctx->pc = 0x19D880u;
label_19d880:
    // 0x19d880: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19d880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19d884: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x19d884u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19d888: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x19D888u;
    {
        const bool branch_taken_0x19d888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D888u;
            // 0x19d88c: 0x24a5006c  addiu       $a1, $a1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d888) {
            ctx->pc = 0x19D868u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19d868;
        }
    }
    ctx->pc = 0x19D890u;
label_19d890:
    // 0x19d890: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19d890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19d894:
    // 0x19d894: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19d894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d898: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d89c: 0x3e00008  jr          $ra
    ctx->pc = 0x19D89Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D89Cu;
            // 0x19d8a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D8A4u;
}
