#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__9mgCVisualFv
// Address: 0x132dc0 - 0x132ddc
void Initialize__9mgCVisualFv_0x132dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__9mgCVisualFv_0x132dc0");
#endif

    ctx->pc = 0x132dc0u;

    // 0x132dc0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x132dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x132dc4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x132dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x132dc8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x132dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x132dcc: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x132dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x132dd0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x132dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x132dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x132DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x132DDCu;
}
