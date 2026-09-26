#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatePacket__9mgCVisualFP9mgCMemoryP9mgCMemory
// Address: 0x1342f0 - 0x1342fc
void CreatePacket__9mgCVisualFP9mgCMemoryP9mgCMemory_0x1342f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatePacket__9mgCVisualFP9mgCMemoryP9mgCMemory_0x1342f0");
#endif

    ctx->pc = 0x1342f0u;

    // 0x1342f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1342f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1342f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1342F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1342FCu;
}
