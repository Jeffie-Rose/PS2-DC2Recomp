#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__8CPowGageFv
// Address: 0x2e8ef0 - 0x2e8f20
void Initialize__8CPowGageFv_0x2e8ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__8CPowGageFv_0x2e8ef0");
#endif

    ctx->pc = 0x2e8ef0u;

    // 0x2e8ef0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e8ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e8ef4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2e8ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e8ef8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e8ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e8efc: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x2e8efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x2e8f00: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2e8f00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2e8f04: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e8f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e8f08: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2e8f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2e8f0c: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2e8f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2e8f10: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x2e8f10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x2e8f14: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x2e8f14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x2e8f18: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8F18u;
            // 0x2e8f1c: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8F20u;
}
