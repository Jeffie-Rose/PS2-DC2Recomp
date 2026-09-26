#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_BGM_STATUS_NOW_NO__FP12RS_STACKDATAi
// Address: 0x273f60 - 0x273f90
void ps2__GET_BGM_STATUS_NOW_NO__FP12RS_STACKDATAi_0x273f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_BGM_STATUS_NOW_NO__FP12RS_STACKDATAi_0x273f60");
#endif

    switch (ctx->pc) {
        case 0x273f84u: goto label_273f84;
        default: break;
    }

    ctx->pc = 0x273f60u;

    // 0x273f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x273f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x273f64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273f68: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273F68u;
    {
        const bool branch_taken_0x273f68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x273F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273F68u;
            // 0x273f6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f68) {
            ctx->pc = 0x273F78u;
            goto label_273f78;
        }
    }
    ctx->pc = 0x273F70u;
    // 0x273f70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x273F70u;
    {
        const bool branch_taken_0x273f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273F70u;
            // 0x273f74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f70) {
            ctx->pc = 0x273F84u;
            goto label_273f84;
        }
    }
    ctx->pc = 0x273F78u;
label_273f78:
    // 0x273f78: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x273f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x273f7c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x273F7Cu;
    SET_GPR_U32(ctx, 31, 0x273F84u);
    ctx->pc = 0x273F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273F7Cu;
            // 0x273f80: 0x8c25e864  lw          $a1, -0x179C($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961252)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273F84u; }
        if (ctx->pc != 0x273F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273F84u; }
        if (ctx->pc != 0x273F84u) { return; }
    }
    ctx->pc = 0x273F84u;
label_273f84:
    // 0x273f84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273f88: 0x3e00008  jr          $ra
    ctx->pc = 0x273F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273F88u;
            // 0x273f8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273F90u;
}
