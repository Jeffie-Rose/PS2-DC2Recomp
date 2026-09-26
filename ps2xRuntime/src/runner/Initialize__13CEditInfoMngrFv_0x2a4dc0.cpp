#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__13CEditInfoMngrFv
// Address: 0x2a4dc0 - 0x2a4ddc
void Initialize__13CEditInfoMngrFv_0x2a4dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__13CEditInfoMngrFv_0x2a4dc0");
#endif

    ctx->pc = 0x2a4dc0u;

    // 0x2a4dc0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a4dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2a4dc4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a4dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a4dc8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2a4dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2a4dcc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2a4dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2a4dd0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2a4dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2a4dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4DD4u;
            // 0x2a4dd8: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4DDCu;
}
