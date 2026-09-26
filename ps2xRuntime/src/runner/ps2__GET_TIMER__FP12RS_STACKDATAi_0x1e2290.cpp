#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_TIMER__FP12RS_STACKDATAi
// Address: 0x1e2290 - 0x1e22c8
void ps2__GET_TIMER__FP12RS_STACKDATAi_0x1e2290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_TIMER__FP12RS_STACKDATAi_0x1e2290");
#endif

    switch (ctx->pc) {
        case 0x1e22b8u: goto label_1e22b8;
        default: break;
    }

    ctx->pc = 0x1e2290u;

    // 0x1e2290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2298: 0x8f828e6c  lw          $v0, -0x7194($gp)
    ctx->pc = 0x1e2298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
    // 0x1e229c: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x1e229cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x1e22a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E22A0u;
    {
        const bool branch_taken_0x1e22a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e22a0) {
            ctx->pc = 0x1E22B0u;
            goto label_1e22b0;
        }
    }
    ctx->pc = 0x1E22A8u;
    // 0x1e22a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E22A8u;
    {
        const bool branch_taken_0x1e22a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E22ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E22A8u;
            // 0x1e22ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e22a8) {
            ctx->pc = 0x1E22BCu;
            goto label_1e22bc;
        }
    }
    ctx->pc = 0x1E22B0u;
label_1e22b0:
    // 0x1e22b0: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E22B0u;
    SET_GPR_U32(ctx, 31, 0x1E22B8u);
    ctx->pc = 0x1E22B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E22B0u;
            // 0x1e22b4: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E22B8u; }
        if (ctx->pc != 0x1E22B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E22B8u; }
        if (ctx->pc != 0x1E22B8u) { return; }
    }
    ctx->pc = 0x1E22B8u;
label_1e22b8:
    // 0x1e22b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e22b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e22bc:
    // 0x1e22bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e22bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e22c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E22C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E22C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E22C0u;
            // 0x1e22c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E22C8u;
}
