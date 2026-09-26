#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Iam__9mgCVisualFv
// Address: 0x133740 - 0x13374c
void Iam__9mgCVisualFv_0x133740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Iam__9mgCVisualFv_0x133740");
#endif

    ctx->pc = 0x133740u;

    // 0x133740: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x133740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133744: 0x3e00008  jr          $ra
    ctx->pc = 0x133744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13374Cu;
}
