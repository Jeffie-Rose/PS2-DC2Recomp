#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitSaveDataEdit__FP9mgCMemory
// Address: 0x2d31c0 - 0x2d31c8
void InitSaveDataEdit__FP9mgCMemory_0x2d31c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSaveDataEdit__FP9mgCMemory_0x2d31c0");
#endif

    ctx->pc = 0x2d31c0u;

    // 0x2d31c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D31C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D31C8u;
}
