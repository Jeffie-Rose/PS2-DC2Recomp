#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_MAP_EFFECT_ID__FP12RS_STACKDATAi
// Address: 0x27d1a0 - 0x27d1e4
void ps2__GET_MAP_EFFECT_ID__FP12RS_STACKDATAi_0x27d1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_MAP_EFFECT_ID__FP12RS_STACKDATAi_0x27d1a0");
#endif

    switch (ctx->pc) {
        case 0x27d1d8u: goto label_27d1d8;
        default: break;
    }

    ctx->pc = 0x27d1a0u;

    // 0x27d1a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27d1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27d1a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27d1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27d1a8: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x27d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27d1ac: 0x24432f90  addiu       $v1, $v0, 0x2F90
    ctx->pc = 0x27d1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x27d1b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D1B0u;
    {
        const bool branch_taken_0x27d1b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D1B0u;
            // 0x27d1b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1b0) {
            ctx->pc = 0x27D1C0u;
            goto label_27d1c0;
        }
    }
    ctx->pc = 0x27D1B8u;
    // 0x27d1b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27D1B8u;
    {
        const bool branch_taken_0x27d1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D1B8u;
            // 0x27d1bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1b8) {
            ctx->pc = 0x27D1D8u;
            goto label_27d1d8;
        }
    }
    ctx->pc = 0x27D1C0u;
label_27d1c0:
    // 0x27d1c0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D1C0u;
    {
        const bool branch_taken_0x27d1c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x27d1c0) {
            ctx->pc = 0x27D1D0u;
            goto label_27d1d0;
        }
    }
    ctx->pc = 0x27D1C8u;
    // 0x27d1c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27D1C8u;
    {
        const bool branch_taken_0x27d1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D1C8u;
            // 0x27d1cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1c8) {
            ctx->pc = 0x27D1D8u;
            goto label_27d1d8;
        }
    }
    ctx->pc = 0x27D1D0u;
label_27d1d0:
    // 0x27d1d0: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27D1D0u;
    SET_GPR_U32(ctx, 31, 0x27D1D8u);
    ctx->pc = 0x27D1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D1D0u;
            // 0x27d1d4: 0x8065009c  lb          $a1, 0x9C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D1D8u; }
        if (ctx->pc != 0x27D1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D1D8u; }
        if (ctx->pc != 0x27D1D8u) { return; }
    }
    ctx->pc = 0x27D1D8u;
label_27d1d8:
    // 0x27d1d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27d1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x27D1DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D1DCu;
            // 0x27d1e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D1E4u;
}
