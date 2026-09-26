#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitMenuDl__FP10mgCTexturei
// Address: 0x222470 - 0x222480
void InitMenuDl__FP10mgCTexturei_0x222470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitMenuDl__FP10mgCTexturei_0x222470");
#endif

    ctx->pc = 0x222470u;

    // 0x222470: 0xaf849394  sw          $a0, -0x6C6C($gp)
    ctx->pc = 0x222470u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939540), GPR_U32(ctx, 4));
    // 0x222474: 0xaf859398  sw          $a1, -0x6C68($gp)
    ctx->pc = 0x222474u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939544), GPR_U32(ctx, 5));
    // 0x222478: 0x3e00008  jr          $ra
    ctx->pc = 0x222478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22247Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222478u;
            // 0x22247c: 0xaf80939c  sw          $zero, -0x6C64($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x222480u;
}
