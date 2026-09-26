#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__9mgCVisualFPUiPA4_fP14mgCDrawManager
// Address: 0x134350 - 0x13435c
void Draw__9mgCVisualFPUiPA4_fP14mgCDrawManager_0x134350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__9mgCVisualFPUiPA4_fP14mgCDrawManager_0x134350");
#endif

    ctx->pc = 0x134350u;

    // 0x134350: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x134350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134354: 0x3e00008  jr          $ra
    ctx->pc = 0x134354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13435Cu;
}
