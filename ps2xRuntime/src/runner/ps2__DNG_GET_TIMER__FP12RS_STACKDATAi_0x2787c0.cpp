#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DNG_GET_TIMER__FP12RS_STACKDATAi
// Address: 0x2787c0 - 0x2787f8
void ps2__DNG_GET_TIMER__FP12RS_STACKDATAi_0x2787c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DNG_GET_TIMER__FP12RS_STACKDATAi_0x2787c0");
#endif

    switch (ctx->pc) {
        case 0x2787e8u: goto label_2787e8;
        default: break;
    }

    ctx->pc = 0x2787c0u;

    // 0x2787c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2787c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2787c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2787c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2787c8: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x2787c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2787cc: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x2787ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x2787d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2787D0u;
    {
        const bool branch_taken_0x2787d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2787d0) {
            ctx->pc = 0x2787E0u;
            goto label_2787e0;
        }
    }
    ctx->pc = 0x2787D8u;
    // 0x2787d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2787D8u;
    {
        const bool branch_taken_0x2787d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2787DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2787D8u;
            // 0x2787dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2787d8) {
            ctx->pc = 0x2787ECu;
            goto label_2787ec;
        }
    }
    ctx->pc = 0x2787E0u;
label_2787e0:
    // 0x2787e0: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x2787E0u;
    SET_GPR_U32(ctx, 31, 0x2787E8u);
    ctx->pc = 0x2787E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2787E0u;
            // 0x2787e4: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2787E8u; }
        if (ctx->pc != 0x2787E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2787E8u; }
        if (ctx->pc != 0x2787E8u) { return; }
    }
    ctx->pc = 0x2787E8u;
label_2787e8:
    // 0x2787e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2787e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2787ec:
    // 0x2787ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2787ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2787f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2787F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2787F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2787F0u;
            // 0x2787f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2787F8u;
}
