#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_DEBUG_FLAG__FP12RS_STACKDATAi
// Address: 0x27bc30 - 0x27bc5c
void ps2__GET_DEBUG_FLAG__FP12RS_STACKDATAi_0x27bc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_DEBUG_FLAG__FP12RS_STACKDATAi_0x27bc30");
#endif

    switch (ctx->pc) {
        case 0x27bc50u: goto label_27bc50;
        default: break;
    }

    ctx->pc = 0x27bc30u;

    // 0x27bc30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27bc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27bc34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27bc38: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BC38u;
    {
        const bool branch_taken_0x27bc38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27BC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BC38u;
            // 0x27bc3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bc38) {
            ctx->pc = 0x27BC48u;
            goto label_27bc48;
        }
    }
    ctx->pc = 0x27BC40u;
    // 0x27bc40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27BC40u;
    {
        const bool branch_taken_0x27bc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BC40u;
            // 0x27bc44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bc40) {
            ctx->pc = 0x27BC50u;
            goto label_27bc50;
        }
    }
    ctx->pc = 0x27BC48u;
label_27bc48:
    // 0x27bc48: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27BC48u;
    SET_GPR_U32(ctx, 31, 0x27BC50u);
    ctx->pc = 0x27BC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BC48u;
            // 0x27bc4c: 0x8f858ac8  lw          $a1, -0x7538($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BC50u; }
        if (ctx->pc != 0x27BC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BC50u; }
        if (ctx->pc != 0x27BC50u) { return; }
    }
    ctx->pc = 0x27BC50u;
label_27bc50:
    // 0x27bc50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27bc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bc54: 0x3e00008  jr          $ra
    ctx->pc = 0x27BC54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BC54u;
            // 0x27bc58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27BC5Cu;
}
