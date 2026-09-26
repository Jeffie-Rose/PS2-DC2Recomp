#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_SET_LAST_CHALLENGE__FP12RS_STACKDATAi
// Address: 0x2764d0 - 0x27650c
void ps2__SPHIDA_SET_LAST_CHALLENGE__FP12RS_STACKDATAi_0x2764d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_SET_LAST_CHALLENGE__FP12RS_STACKDATAi_0x2764d0");
#endif

    switch (ctx->pc) {
        case 0x2764f4u: goto label_2764f4;
        default: break;
    }

    ctx->pc = 0x2764d0u;

    // 0x2764d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2764d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2764d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2764d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2764d8: 0x8f829ed4  lw          $v0, -0x612C($gp)
    ctx->pc = 0x2764d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x2764dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2764DCu;
    {
        const bool branch_taken_0x2764dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2764E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2764DCu;
            // 0x2764e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2764dc) {
            ctx->pc = 0x2764ECu;
            goto label_2764ec;
        }
    }
    ctx->pc = 0x2764E4u;
    // 0x2764e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2764E4u;
    {
        const bool branch_taken_0x2764e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2764E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2764E4u;
            // 0x2764e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2764e4) {
            ctx->pc = 0x276504u;
            goto label_276504;
        }
    }
    ctx->pc = 0x2764ECu;
label_2764ec:
    // 0x2764ec: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2764ECu;
    SET_GPR_U32(ctx, 31, 0x2764F4u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2764F4u; }
        if (ctx->pc != 0x2764F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2764F4u; }
        if (ctx->pc != 0x2764F4u) { return; }
    }
    ctx->pc = 0x2764F4u;
label_2764f4:
    // 0x2764f4: 0x8f839ed4  lw          $v1, -0x612C($gp)
    ctx->pc = 0x2764f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x2764f8: 0xac620204  sw          $v0, 0x204($v1)
    ctx->pc = 0x2764f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 516), GPR_U32(ctx, 2));
    // 0x2764fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2764fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_276504:
    // 0x276504: 0x3e00008  jr          $ra
    ctx->pc = 0x276504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276504u;
            // 0x276508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27650Cu;
}
