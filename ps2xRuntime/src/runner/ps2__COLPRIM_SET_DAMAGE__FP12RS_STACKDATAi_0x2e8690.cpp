#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _COLPRIM_SET_DAMAGE__FP12RS_STACKDATAi
// Address: 0x2e8690 - 0x2e86d4
void ps2__COLPRIM_SET_DAMAGE__FP12RS_STACKDATAi_0x2e8690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__COLPRIM_SET_DAMAGE__FP12RS_STACKDATAi_0x2e8690");
#endif

    switch (ctx->pc) {
        case 0x2e86b8u: goto label_2e86b8;
        default: break;
    }

    ctx->pc = 0x2e8690u;

    // 0x2e8690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e8690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e8694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e8698: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e8698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e869c: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x2e869cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x2e86a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E86A0u;
    {
        const bool branch_taken_0x2e86a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E86A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E86A0u;
            // 0x2e86a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e86a0) {
            ctx->pc = 0x2E86B0u;
            goto label_2e86b0;
        }
    }
    ctx->pc = 0x2E86A8u;
    // 0x2e86a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E86A8u;
    {
        const bool branch_taken_0x2e86a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E86ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E86A8u;
            // 0x2e86ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e86a8) {
            ctx->pc = 0x2E86CCu;
            goto label_2e86cc;
        }
    }
    ctx->pc = 0x2E86B0u;
label_2e86b0:
    // 0x2e86b0: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E86B0u;
    SET_GPR_U32(ctx, 31, 0x2E86B8u);
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E86B8u; }
        if (ctx->pc != 0x2E86B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E86B8u; }
        if (ctx->pc != 0x2E86B8u) { return; }
    }
    ctx->pc = 0x2E86B8u;
label_2e86b8:
    // 0x2e86b8: 0x8f839ed0  lw          $v1, -0x6130($gp)
    ctx->pc = 0x2e86b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e86bc: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x2e86bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x2e86c0: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x2e86c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
    // 0x2e86c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e86c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e86c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e86c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e86cc:
    // 0x2e86cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E86CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E86D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E86CCu;
            // 0x2e86d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E86D4u;
}
