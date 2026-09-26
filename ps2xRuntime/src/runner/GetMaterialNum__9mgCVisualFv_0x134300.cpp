#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMaterialNum__9mgCVisualFv
// Address: 0x134300 - 0x13430c
void GetMaterialNum__9mgCVisualFv_0x134300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMaterialNum__9mgCVisualFv_0x134300");
#endif

    ctx->pc = 0x134300u;

    // 0x134300: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x134300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134304: 0x3e00008  jr          $ra
    ctx->pc = 0x134304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13430Cu;
}
