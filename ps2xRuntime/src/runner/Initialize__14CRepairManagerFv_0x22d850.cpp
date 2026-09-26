#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__14CRepairManagerFv
// Address: 0x22d850 - 0x22d8e4
void Initialize__14CRepairManagerFv_0x22d850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__14CRepairManagerFv_0x22d850");
#endif

    switch (ctx->pc) {
        case 0x22d894u: goto label_22d894;
        case 0x22d8b0u: goto label_22d8b0;
        default: break;
    }

    ctx->pc = 0x22d850u;

    // 0x22d850: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22d850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22d854: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22d854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22d858: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22d858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22d85c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22d85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22d860: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22d860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22d864: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22d864u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22d868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22d86c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22d86cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d870: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22d870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22d874: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22d874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d878: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x22d878u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x22d87c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22d87cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d880: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x22d880u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x22d884: 0xac8001a4  sw          $zero, 0x1A4($a0)
    ctx->pc = 0x22d884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 420), GPR_U32(ctx, 0));
    // 0x22d888: 0xac8001a8  sw          $zero, 0x1A8($a0)
    ctx->pc = 0x22d888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 424), GPR_U32(ctx, 0));
    // 0x22d88c: 0xac8001b0  sw          $zero, 0x1B0($a0)
    ctx->pc = 0x22d88cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 432), GPR_U32(ctx, 0));
    // 0x22d890: 0xac8001ac  sw          $zero, 0x1AC($a0)
    ctx->pc = 0x22d890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 428), GPR_U32(ctx, 0));
label_22d894:
    // 0x22d894: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x22d894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x22d898: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x22d898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x22d89c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x22d89cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x22d8a0: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x22d8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x22d8a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22d8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d8a8: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x22D8A8u;
    SET_GPR_U32(ctx, 31, 0x22D8B0u);
    ctx->pc = 0x22D8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D8A8u;
            // 0x22d8ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D8B0u; }
        if (ctx->pc != 0x22D8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D8B0u; }
        if (ctx->pc != 0x22D8B0u) { return; }
    }
    ctx->pc = 0x22D8B0u;
label_22d8b0:
    // 0x22d8b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22d8b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22d8b4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x22d8b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x22d8b8: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x22d8b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x22d8bc: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x22D8BCu;
    {
        const bool branch_taken_0x22d8bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D8BCu;
            // 0x22d8c0: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d8bc) {
            ctx->pc = 0x22D894u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22d894;
        }
    }
    ctx->pc = 0x22D8C4u;
    // 0x22d8c4: 0xa20001e8  sb          $zero, 0x1E8($s0)
    ctx->pc = 0x22d8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 488), (uint8_t)GPR_U32(ctx, 0));
    // 0x22d8c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22d8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d8cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22d8ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d8d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22d8d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d8d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22d8d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d8d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d8d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x22D8DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D8DCu;
            // 0x22d8e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D8E4u;
}
