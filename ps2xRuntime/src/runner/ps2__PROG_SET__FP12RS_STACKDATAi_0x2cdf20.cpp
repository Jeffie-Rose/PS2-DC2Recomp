#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _PROG_SET__FP12RS_STACKDATAi
// Address: 0x2cdf20 - 0x2cdf5c
void ps2__PROG_SET__FP12RS_STACKDATAi_0x2cdf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__PROG_SET__FP12RS_STACKDATAi_0x2cdf20");
#endif

    switch (ctx->pc) {
        case 0x2cdf40u: goto label_2cdf40;
        default: break;
    }

    ctx->pc = 0x2cdf20u;

    // 0x2cdf20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cdf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cdf24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cdf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdf28: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDF28u;
    {
        const bool branch_taken_0x2cdf28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CDF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDF28u;
            // 0x2cdf2c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf28) {
            ctx->pc = 0x2CDF38u;
            goto label_2cdf38;
        }
    }
    ctx->pc = 0x2CDF30u;
    // 0x2cdf30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CDF30u;
    {
        const bool branch_taken_0x2cdf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDF30u;
            // 0x2cdf34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf30) {
            ctx->pc = 0x2CDF50u;
            goto label_2cdf50;
        }
    }
    ctx->pc = 0x2CDF38u;
label_2cdf38:
    // 0x2cdf38: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CDF38u;
    SET_GPR_U32(ctx, 31, 0x2CDF40u);
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDF40u; }
        if (ctx->pc != 0x2CDF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDF40u; }
        if (ctx->pc != 0x2CDF40u) { return; }
    }
    ctx->pc = 0x2CDF40u;
label_2cdf40:
    // 0x2cdf40: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cdf40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cdf44: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2cdf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cdf48: 0xa4620712  sh          $v0, 0x712($v1)
    ctx->pc = 0x2cdf48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1810), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cdf4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cdf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cdf50:
    // 0x2cdf50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cdf50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cdf54: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDF54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDF54u;
            // 0x2cdf58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CDF5Cu;
}
