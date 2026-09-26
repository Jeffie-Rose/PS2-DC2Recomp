#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: copysign
// Address: 0x11d9e0 - 0x11da24
void copysign_0x11d9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("copysign_0x11d9e0");
#endif

    ctx->pc = 0x11d9e0u;

    // 0x11d9e0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x11d9e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9e4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11d9e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11d9e8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x11d9e8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x11d9ec: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x11d9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9f0: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x11d9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x11d9f4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x11d9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x11d9f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11d9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11d9fc: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x11d9fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x11da00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x11da00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11da04: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x11da04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x11da08: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x11da08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x11da0c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x11da0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x11da10: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x11da10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x11da14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11da14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11da18: 0xc22025  or          $a0, $a2, $v0
    ctx->pc = 0x11da18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x11da1c: 0x3e00008  jr          $ra
    ctx->pc = 0x11DA1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DA1Cu;
            // 0x11da20: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11DA24u;
}
