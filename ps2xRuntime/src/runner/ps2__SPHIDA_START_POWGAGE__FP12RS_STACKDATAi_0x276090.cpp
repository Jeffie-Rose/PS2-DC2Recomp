#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_START_POWGAGE__FP12RS_STACKDATAi
// Address: 0x276090 - 0x2760b4
void ps2__SPHIDA_START_POWGAGE__FP12RS_STACKDATAi_0x276090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_START_POWGAGE__FP12RS_STACKDATAi_0x276090");
#endif

    ctx->pc = 0x276090u;

    // 0x276090: 0x8f829ed4  lw          $v0, -0x612C($gp)
    ctx->pc = 0x276090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x276094: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276094u;
    {
        const bool branch_taken_0x276094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276094) {
            ctx->pc = 0x2760A4u;
            goto label_2760a4;
        }
    }
    ctx->pc = 0x27609Cu;
    // 0x27609c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27609Cu;
    {
        const bool branch_taken_0x27609c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2760A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27609Cu;
            // 0x2760a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27609c) {
            ctx->pc = 0x2760ACu;
            goto label_2760ac;
        }
    }
    ctx->pc = 0x2760A4u;
label_2760a4:
    // 0x2760a4: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2760a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x2760a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2760a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2760ac:
    // 0x2760ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2760ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2760B4u;
}
