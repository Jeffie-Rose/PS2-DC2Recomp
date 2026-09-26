#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__15mgCTextureBlockFv
// Address: 0x12c700 - 0x12c718
void Initialize__15mgCTextureBlockFv_0x12c700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__15mgCTextureBlockFv_0x12c700");
#endif

    ctx->pc = 0x12c700u;

    // 0x12c700: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x12c700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12c704: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12c704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12c708: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x12c708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x12c70c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x12c70cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x12c710: 0x3e00008  jr          $ra
    ctx->pc = 0x12C710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C718u;
}
