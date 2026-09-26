#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Iam__12mgCVisualMDTFv
// Address: 0x134280 - 0x13428c
void Iam__12mgCVisualMDTFv_0x134280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Iam__12mgCVisualMDTFv_0x134280");
#endif

    ctx->pc = 0x134280u;

    // 0x134280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134284: 0x3e00008  jr          $ra
    ctx->pc = 0x134284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13428Cu;
}
