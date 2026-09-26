#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __muldi3
// Address: 0x286fb8 - 0x287018
void ps2___muldi3_0x286fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___muldi3_0x286fb8");
#endif

    ctx->pc = 0x286fb8u;

    // 0x286fb8: 0x4303f  dsra32      $a2, $a0, 0
    ctx->pc = 0x286fb8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x286fbc: 0x5183f  dsra32      $v1, $a1, 0
    ctx->pc = 0x286fbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x286fc0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x286fc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x286fc4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x286fc4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x286fc8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x286fc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x286fcc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x286fccu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x286fd0: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x286fd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x286fd4: 0x70c53018  mult1       $a2, $a2, $a1
    ctx->pc = 0x286fd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x286fd8: 0x850019  multu       $a0, $a1
    ctx->pc = 0x286fd8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x286fdc: 0x2012  mflo        $a0
    ctx->pc = 0x286fdcu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x286fe0: 0x1010  mfhi        $v0
    ctx->pc = 0x286fe0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x286fe4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x286fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x286fe8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x286fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x286fec: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x286fecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x286ff0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x286ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x286ff4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x286ff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x286ff8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x286ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x286ffc: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x286ffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x287000: 0x4103f  dsra32      $v0, $a0, 0
    ctx->pc = 0x287000u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x287004: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x287004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x287008: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x287008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x28700c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28700cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x287010: 0x3e00008  jr          $ra
    ctx->pc = 0x287010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287010u;
            // 0x287014: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x287018u;
}
