#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__7CRasterFv
// Address: 0x25ff00 - 0x25ff34
void Initialize__7CRasterFv_0x25ff00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__7CRasterFv_0x25ff00");
#endif

    ctx->pc = 0x25ff00u;

    // 0x25ff00: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x25ff00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x25ff04: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x25ff04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25ff08: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x25ff08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x25ff0c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x25ff0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x25ff10: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x25ff10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x25ff14: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x25ff14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x25ff18: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x25ff18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x25ff1c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x25ff1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x25ff20: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x25ff20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x25ff24: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x25ff24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x25ff28: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x25ff28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x25ff2c: 0x3e00008  jr          $ra
    ctx->pc = 0x25FF2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FF2Cu;
            // 0x25ff30: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25FF34u;
}
