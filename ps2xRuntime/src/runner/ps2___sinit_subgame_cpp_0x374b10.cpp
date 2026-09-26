#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_subgame.cpp
// Address: 0x374b10 - 0x374b4c
void ps2___sinit_subgame_cpp_0x374b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_subgame_cpp_0x374b10");
#endif

    ctx->pc = 0x374b10u;

    // 0x374b10: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x374b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x374b14: 0xac209e58  sw          $zero, -0x61A8($at)
    ctx->pc = 0x374b14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942296), GPR_U32(ctx, 0));
    // 0x374b18: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x374b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x374b1c: 0xac209e44  sw          $zero, -0x61BC($at)
    ctx->pc = 0x374b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942276), GPR_U32(ctx, 0));
    // 0x374b20: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x374b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x374b24: 0xac209e30  sw          $zero, -0x61D0($at)
    ctx->pc = 0x374b24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942256), GPR_U32(ctx, 0));
    // 0x374b28: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x374b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x374b2c: 0xac209e40  sw          $zero, -0x61C0($at)
    ctx->pc = 0x374b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942272), GPR_U32(ctx, 0));
    // 0x374b30: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x374b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x374b34: 0xac209e5c  sw          $zero, -0x61A4($at)
    ctx->pc = 0x374b34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942300), GPR_U32(ctx, 0));
    // 0x374b38: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x374b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x374b3c: 0xac209e48  sw          $zero, -0x61B8($at)
    ctx->pc = 0x374b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942280), GPR_U32(ctx, 0));
    // 0x374b40: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x374b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x374b44: 0x3e00008  jr          $ra
    ctx->pc = 0x374B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374B44u;
            // 0x374b48: 0xac209e4c  sw          $zero, -0x61B4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294942284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374B4Cu;
}
