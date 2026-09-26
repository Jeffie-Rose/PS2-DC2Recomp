#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMaterialNum__12mgCVisualMDTFv
// Address: 0x134290 - 0x13429c
void GetMaterialNum__12mgCVisualMDTFv_0x134290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMaterialNum__12mgCVisualMDTFv_0x134290");
#endif

    ctx->pc = 0x134290u;

    // 0x134290: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x134290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x134294: 0x3e00008  jr          $ra
    ctx->pc = 0x134294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13429Cu;
}
