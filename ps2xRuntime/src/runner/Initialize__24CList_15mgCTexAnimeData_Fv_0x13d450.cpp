#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__24CList<15mgCTexAnimeData>Fv
// Address: 0x13d450 - 0x13d460
void Initialize__24CList_15mgCTexAnimeData_Fv_0x13d450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__24CList_15mgCTexAnimeData_Fv_0x13d450");
#endif

    ctx->pc = 0x13d450u;

    // 0x13d450: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x13d450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x13d454: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x13d454u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x13d458: 0x3e00008  jr          $ra
    ctx->pc = 0x13D458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D460u;
}
