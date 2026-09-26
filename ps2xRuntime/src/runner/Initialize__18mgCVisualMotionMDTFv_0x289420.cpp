#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__18mgCVisualMotionMDTFv
// Address: 0x289420 - 0x2894a4
void Initialize__18mgCVisualMotionMDTFv_0x289420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__18mgCVisualMotionMDTFv_0x289420");
#endif

    switch (ctx->pc) {
        case 0x289434u: goto label_289434;
        case 0x289440u: goto label_289440;
        default: break;
    }

    ctx->pc = 0x289420u;

    // 0x289420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x289420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x289424: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x289424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x289428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x289428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28942c: 0xc04fab0  jal         func_13EAC0
    ctx->pc = 0x28942Cu;
    SET_GPR_U32(ctx, 31, 0x289434u);
    ctx->pc = 0x289430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28942Cu;
            // 0x289430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13EAC0u;
    if (runtime->hasFunction(0x13EAC0u)) {
        auto targetFn = runtime->lookupFunction(0x13EAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289434u; }
        if (ctx->pc != 0x289434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12mgCVisualMDTFv_0x13eac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289434u; }
        if (ctx->pc != 0x289434u) { return; }
    }
    ctx->pc = 0x289434u;
label_289434:
    // 0x289434: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x289434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289438: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x289438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28943c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x28943cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_289440:
    // 0x289440: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x289440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x289444: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x289444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x289448: 0xace40080  sw          $a0, 0x80($a3)
    ctx->pc = 0x289448u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 4));
    // 0x28944c: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x28944cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x289450: 0xace40084  sw          $a0, 0x84($a3)
    ctx->pc = 0x289450u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 4));
    // 0x289454: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x289454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x289458: 0xace40088  sw          $a0, 0x88($a3)
    ctx->pc = 0x289458u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 136), GPR_U32(ctx, 4));
    // 0x28945c: 0xace4008c  sw          $a0, 0x8C($a3)
    ctx->pc = 0x28945cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 140), GPR_U32(ctx, 4));
    // 0x289460: 0xace40090  sw          $a0, 0x90($a3)
    ctx->pc = 0x289460u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 4));
    // 0x289464: 0xace40094  sw          $a0, 0x94($a3)
    ctx->pc = 0x289464u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 4));
    // 0x289468: 0xace40098  sw          $a0, 0x98($a3)
    ctx->pc = 0x289468u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 152), GPR_U32(ctx, 4));
    // 0x28946c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x28946Cu;
    {
        const bool branch_taken_0x28946c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x289470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28946Cu;
            // 0x289470: 0xace4009c  sw          $a0, 0x9C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 156), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28946c) {
            ctx->pc = 0x289440u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289440;
        }
    }
    ctx->pc = 0x289474u;
    // 0x289474: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x289474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x289478: 0x24030094  addiu       $v1, $zero, 0x94
    ctx->pc = 0x289478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x28947c: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x28947cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x289480: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x289480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x289484: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x289484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x289488: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x289488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x28948c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x28948cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x289490: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x289490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x289494: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x289494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289498: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x289498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28949c: 0x3e00008  jr          $ra
    ctx->pc = 0x28949Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2894A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28949Cu;
            // 0x2894a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2894A4u;
}
