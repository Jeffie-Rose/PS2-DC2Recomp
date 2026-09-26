#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateRenderInfoPacket__9mgCVisualFPUiPA4_fP13mgRENDER_INFO
// Address: 0x134340 - 0x13434c
void CreateRenderInfoPacket__9mgCVisualFPUiPA4_fP13mgRENDER_INFO_0x134340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateRenderInfoPacket__9mgCVisualFPUiPA4_fP13mgRENDER_INFO_0x134340");
#endif

    ctx->pc = 0x134340u;

    // 0x134340: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x134340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134344: 0x3e00008  jr          $ra
    ctx->pc = 0x134344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13434Cu;
}
