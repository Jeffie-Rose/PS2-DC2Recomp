#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_TARGET_ID__FP12RS_STACKDATAi
// Address: 0x2e3ec0 - 0x2e3ef4
void ps2__GET_TARGET_ID__FP12RS_STACKDATAi_0x2e3ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_TARGET_ID__FP12RS_STACKDATAi_0x2e3ec0");
#endif

    switch (ctx->pc) {
        case 0x2e3ee4u: goto label_2e3ee4;
        default: break;
    }

    ctx->pc = 0x2e3ec0u;

    // 0x2e3ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e3ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e3ec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3ec8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3EC8u;
    {
        const bool branch_taken_0x2e3ec8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3EC8u;
            // 0x2e3ecc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3ec8) {
            ctx->pc = 0x2E3ED8u;
            goto label_2e3ed8;
        }
    }
    ctx->pc = 0x2E3ED0u;
    // 0x2e3ed0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3ED0u;
    {
        const bool branch_taken_0x2e3ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3ED0u;
            // 0x2e3ed4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3ed0) {
            ctx->pc = 0x2E3EE8u;
            goto label_2e3ee8;
        }
    }
    ctx->pc = 0x2E3ED8u;
label_2e3ed8:
    // 0x2e3ed8: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e3ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e3edc: 0xc0b8cd4  jal         func_2E3350
    ctx->pc = 0x2E3EDCu;
    SET_GPR_U32(ctx, 31, 0x2E3EE4u);
    ctx->pc = 0x2E3EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3EDCu;
            // 0x2e3ee0: 0x8c450110  lw          $a1, 0x110($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3350u;
    if (runtime->hasFunction(0x2E3350u)) {
        auto targetFn = runtime->lookupFunction(0x2E3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3EE4u; }
        if (ctx->pc != 0x2E3EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2e3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3EE4u; }
        if (ctx->pc != 0x2E3EE4u) { return; }
    }
    ctx->pc = 0x2E3EE4u;
label_2e3ee4:
    // 0x2e3ee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3ee8:
    // 0x2e3ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3eec: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3EECu;
            // 0x2e3ef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3EF4u;
}
