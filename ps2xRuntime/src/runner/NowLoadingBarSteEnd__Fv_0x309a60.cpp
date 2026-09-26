#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NowLoadingBarSteEnd__Fv
// Address: 0x309a60 - 0x309a7c
void NowLoadingBarSteEnd__Fv_0x309a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NowLoadingBarSteEnd__Fv_0x309a60");
#endif

    ctx->pc = 0x309a60u;

    // 0x309a60: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x309a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x309a64: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x309a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x309a68: 0x8c24b4b8  lw          $a0, -0x4B48($at)
    ctx->pc = 0x309a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948024)));
    // 0x309a6c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x309a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x309a70: 0xaf83a190  sw          $v1, -0x5E70($gp)
    ctx->pc = 0x309a70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943120), GPR_U32(ctx, 3));
    // 0x309a74: 0x3e00008  jr          $ra
    ctx->pc = 0x309A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309A74u;
            // 0x309a78: 0xaf84a198  sw          $a0, -0x5E68($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943128), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x309A7Cu;
}
