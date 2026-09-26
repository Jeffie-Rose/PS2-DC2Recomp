#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_SET_PIN_COL__FP12RS_STACKDATAi
// Address: 0x275de0 - 0x275e18
void ps2__SPHIDA_SET_PIN_COL__FP12RS_STACKDATAi_0x275de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_SET_PIN_COL__FP12RS_STACKDATAi_0x275de0");
#endif

    switch (ctx->pc) {
        case 0x275df0u: goto label_275df0;
        default: break;
    }

    ctx->pc = 0x275de0u;

    // 0x275de0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x275de4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275de8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x275DE8u;
    SET_GPR_U32(ctx, 31, 0x275DF0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275DF0u; }
        if (ctx->pc != 0x275DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275DF0u; }
        if (ctx->pc != 0x275DF0u) { return; }
    }
    ctx->pc = 0x275DF0u;
label_275df0:
    // 0x275df0: 0x8f839ed4  lw          $v1, -0x612C($gp)
    ctx->pc = 0x275df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x275df4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x275DF4u;
    {
        const bool branch_taken_0x275df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x275df4) {
            ctx->pc = 0x275E04u;
            goto label_275e04;
        }
    }
    ctx->pc = 0x275DFCu;
    // 0x275dfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x275DFCu;
    {
        const bool branch_taken_0x275dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275DFCu;
            // 0x275e00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275dfc) {
            ctx->pc = 0x275E0Cu;
            goto label_275e0c;
        }
    }
    ctx->pc = 0x275E04u;
label_275e04:
    // 0x275e04: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x275e04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
    // 0x275e08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275e0c:
    // 0x275e0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275e10: 0x3e00008  jr          $ra
    ctx->pc = 0x275E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275E10u;
            // 0x275e14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275E18u;
}
