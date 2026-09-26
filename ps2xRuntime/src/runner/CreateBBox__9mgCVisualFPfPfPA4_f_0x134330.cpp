#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateBBox__9mgCVisualFPfPfPA4_f
// Address: 0x134330 - 0x13433c
void CreateBBox__9mgCVisualFPfPfPA4_f_0x134330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateBBox__9mgCVisualFPfPfPA4_f_0x134330");
#endif

    ctx->pc = 0x134330u;

    // 0x134330: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x134330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134334: 0x3e00008  jr          $ra
    ctx->pc = 0x134334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13433Cu;
}
