#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_SHROW_END__FP12RS_STACKDATAi
// Address: 0x1e5ef0 - 0x1e5f14
void ps2__SET_SHROW_END__FP12RS_STACKDATAi_0x1e5ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_SHROW_END__FP12RS_STACKDATAi_0x1e5ef0");
#endif

    ctx->pc = 0x1e5ef0u;

    // 0x1e5ef0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5EF0u;
    {
        const bool branch_taken_0x1e5ef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5EF0u;
            // 0x1e5ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ef0) {
            ctx->pc = 0x1E5F00u;
            goto label_1e5f00;
        }
    }
    ctx->pc = 0x1E5EF8u;
    // 0x1e5ef8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5EF8u;
    {
        const bool branch_taken_0x1e5ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5ef8) {
            ctx->pc = 0x1E5F0Cu;
            goto label_1e5f0c;
        }
    }
    ctx->pc = 0x1E5F00u;
label_1e5f00:
    // 0x1e5f00: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e5f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e5f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5f08: 0xa4600730  sh          $zero, 0x730($v1)
    ctx->pc = 0x1e5f08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1840), (uint16_t)GPR_U32(ctx, 0));
label_1e5f0c:
    // 0x1e5f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E5F14u;
}
