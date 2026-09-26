#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PreDraw__7CObjectFv
// Address: 0x169db0 - 0x169dd4
void PreDraw__7CObjectFv_0x169db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PreDraw__7CObjectFv_0x169db0");
#endif

    ctx->pc = 0x169db0u;

    // 0x169db0: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x169db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x169db4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x169DB4u;
    {
        const bool branch_taken_0x169db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169DB4u;
            // 0x169db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169db4) {
            ctx->pc = 0x169DCCu;
            goto label_169dcc;
        }
    }
    ctx->pc = 0x169DBCu;
    // 0x169dbc: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x169dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x169dc0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x169DC0u;
    {
        const bool branch_taken_0x169dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169DC0u;
            // 0x169dc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169dc0) {
            ctx->pc = 0x169DCCu;
            goto label_169dcc;
        }
    }
    ctx->pc = 0x169DC8u;
    // 0x169dc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x169dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169dcc:
    // 0x169dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x169DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169DD4u;
}
