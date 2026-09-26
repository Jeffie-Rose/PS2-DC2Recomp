#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetpMaterial__12mgCVisualMDTFv
// Address: 0x1342a0 - 0x1342ac
void GetpMaterial__12mgCVisualMDTFv_0x1342a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetpMaterial__12mgCVisualMDTFv_0x1342a0");
#endif

    ctx->pc = 0x1342a0u;

    // 0x1342a0: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x1342a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1342a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1342A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1342ACu;
}
