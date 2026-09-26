#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Copy__9mgCVisualFP9mgCMemory
// Address: 0x133750 - 0x13375c
void Copy__9mgCVisualFP9mgCMemory_0x133750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Copy__9mgCVisualFP9mgCMemory_0x133750");
#endif

    ctx->pc = 0x133750u;

    // 0x133750: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x133750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133754: 0x3e00008  jr          $ra
    ctx->pc = 0x133754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13375Cu;
}
