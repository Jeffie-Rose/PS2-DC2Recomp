#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitSplineKey__FP10SPLINE_KEY
// Address: 0x255b80 - 0x255bbc
void InitSplineKey__FP10SPLINE_KEY_0x255b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSplineKey__FP10SPLINE_KEY_0x255b80");
#endif

    ctx->pc = 0x255b80u;

    // 0x255b80: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x255b80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x255b84: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x255b84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x255b88: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x255b88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x255b8c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x255b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x255b90: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x255b90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x255b94: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x255b94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x255b98: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x255b98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x255b9c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x255b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x255ba0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x255ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x255ba4: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x255ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x255ba8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x255ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x255bac: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x255bacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x255bb0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x255bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x255bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x255BB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255BB4u;
            // 0x255bb8: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x255BBCu;
}
