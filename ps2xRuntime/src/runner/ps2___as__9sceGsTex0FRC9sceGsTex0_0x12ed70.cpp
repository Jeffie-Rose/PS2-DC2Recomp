#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __as__9sceGsTex0FRC9sceGsTex0
// Address: 0x12ed70 - 0x12ed84
void ps2___as__9sceGsTex0FRC9sceGsTex0_0x12ed70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___as__9sceGsTex0FRC9sceGsTex0_0x12ed70");
#endif

    ctx->pc = 0x12ed70u;

    // 0x12ed70: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x12ed70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ed74: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x12ed74u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x12ed78: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12ed78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed7c: 0x3e00008  jr          $ra
    ctx->pc = 0x12ED7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12ED84u;
}
