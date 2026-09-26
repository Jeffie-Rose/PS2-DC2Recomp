#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DungeonFloorFinish__Fv
// Address: 0x28f330 - 0x28f338
void DungeonFloorFinish__Fv_0x28f330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DungeonFloorFinish__Fv_0x28f330");
#endif

    ctx->pc = 0x28f330u;

    // 0x28f330: 0x3e00008  jr          $ra
    ctx->pc = 0x28F330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F338u;
}
