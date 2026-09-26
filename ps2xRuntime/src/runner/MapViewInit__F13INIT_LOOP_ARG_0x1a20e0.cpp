#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MapViewInit__F13INIT_LOOP_ARG
// Address: 0x1a20e0 - 0x1a20e8
void MapViewInit__F13INIT_LOOP_ARG_0x1a20e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MapViewInit__F13INIT_LOOP_ARG_0x1a20e0");
#endif

    ctx->pc = 0x1a20e0u;

    // 0x1a20e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A20E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A20E8u;
}
