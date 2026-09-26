#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Get__14CFuncPointMngrFv
// Address: 0x29d8b0 - 0x29d8d8
void Get__14CFuncPointMngrFv_0x29d8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get__14CFuncPointMngrFv_0x29d8b0");
#endif

    ctx->pc = 0x29d8b0u;

    // 0x29d8b0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x29d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x29d8b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D8B4u;
    {
        const bool branch_taken_0x29d8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d8b4) {
            ctx->pc = 0x29D8C4u;
            goto label_29d8c4;
        }
    }
    ctx->pc = 0x29D8BCu;
    // 0x29d8bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29D8BCu;
    {
        const bool branch_taken_0x29d8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D8BCu;
            // 0x29d8c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d8bc) {
            ctx->pc = 0x29D8D0u;
            goto label_29d8d0;
        }
    }
    ctx->pc = 0x29D8C4u;
label_29d8c4:
    // 0x29d8c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29d8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29d8c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x29d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29d8cc: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x29d8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
label_29d8d0:
    // 0x29d8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x29D8D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D8D8u;
}
