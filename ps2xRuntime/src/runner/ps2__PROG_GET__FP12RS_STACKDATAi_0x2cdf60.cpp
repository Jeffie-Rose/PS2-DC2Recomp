#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _PROG_GET__FP12RS_STACKDATAi
// Address: 0x2cdf60 - 0x2cdf98
void ps2__PROG_GET__FP12RS_STACKDATAi_0x2cdf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__PROG_GET__FP12RS_STACKDATAi_0x2cdf60");
#endif

    switch (ctx->pc) {
        case 0x2cdf88u: goto label_2cdf88;
        default: break;
    }

    ctx->pc = 0x2cdf60u;

    // 0x2cdf60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cdf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cdf64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cdf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdf68: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDF68u;
    {
        const bool branch_taken_0x2cdf68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CDF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDF68u;
            // 0x2cdf6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf68) {
            ctx->pc = 0x2CDF78u;
            goto label_2cdf78;
        }
    }
    ctx->pc = 0x2CDF70u;
    // 0x2cdf70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CDF70u;
    {
        const bool branch_taken_0x2cdf70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDF70u;
            // 0x2cdf74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf70) {
            ctx->pc = 0x2CDF8Cu;
            goto label_2cdf8c;
        }
    }
    ctx->pc = 0x2CDF78u;
label_2cdf78:
    // 0x2cdf78: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cdf78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cdf7c: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cdf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cdf80: 0xc0b37ac  jal         func_2CDEB0
    ctx->pc = 0x2CDF80u;
    SET_GPR_U32(ctx, 31, 0x2CDF88u);
    ctx->pc = 0x2CDF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDF80u;
            // 0x2cdf84: 0x84450712  lh          $a1, 0x712($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1810)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDF88u; }
        if (ctx->pc != 0x2CDF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDF88u; }
        if (ctx->pc != 0x2CDF88u) { return; }
    }
    ctx->pc = 0x2CDF88u;
label_2cdf88:
    // 0x2cdf88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cdf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cdf8c:
    // 0x2cdf8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cdf8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cdf90: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDF90u;
            // 0x2cdf94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CDF98u;
}
