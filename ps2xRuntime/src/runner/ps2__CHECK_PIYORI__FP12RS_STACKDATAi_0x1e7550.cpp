#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHECK_PIYORI__FP12RS_STACKDATAi
// Address: 0x1e7550 - 0x1e7584
void ps2__CHECK_PIYORI__FP12RS_STACKDATAi_0x1e7550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHECK_PIYORI__FP12RS_STACKDATAi_0x1e7550");
#endif

    switch (ctx->pc) {
        case 0x1e7574u: goto label_1e7574;
        default: break;
    }

    ctx->pc = 0x1e7550u;

    // 0x1e7550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7554: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7558: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7558u;
    {
        const bool branch_taken_0x1e7558 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E755Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7558u;
            // 0x1e755c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7558) {
            ctx->pc = 0x1E7568u;
            goto label_1e7568;
        }
    }
    ctx->pc = 0x1E7560u;
    // 0x1e7560: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7560u;
    {
        const bool branch_taken_0x1e7560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7560u;
            // 0x1e7564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7560) {
            ctx->pc = 0x1E7578u;
            goto label_1e7578;
        }
    }
    ctx->pc = 0x1E7568u;
label_1e7568:
    // 0x1e7568: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e7568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e756c: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E756Cu;
    SET_GPR_U32(ctx, 31, 0x1E7574u);
    ctx->pc = 0x1E7570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E756Cu;
            // 0x1e7570: 0x84451338  lh          $a1, 0x1338($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4920)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7574u; }
        if (ctx->pc != 0x1E7574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7574u; }
        if (ctx->pc != 0x1E7574u) { return; }
    }
    ctx->pc = 0x1E7574u;
label_1e7574:
    // 0x1e7574: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7578:
    // 0x1e7578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e757c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E757Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E757Cu;
            // 0x1e7580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7584u;
}
