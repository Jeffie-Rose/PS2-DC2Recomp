#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: isnan
// Address: 0x11dda8 - 0x11dde0
void isnan_0x11dda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isnan_0x11dda8");
#endif

    ctx->pc = 0x11dda8u;

    // 0x11dda8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x11dda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11ddac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11ddacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11ddb0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x11ddb0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11ddb4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x11ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x11ddb8: 0x22823  negu        $a1, $v0
    ctx->pc = 0x11ddb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11ddbc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11ddbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11ddc0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x11ddc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x11ddc4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x11ddc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x11ddc8: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x11ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x11ddcc: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x11ddccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x11ddd0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x11ddd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x11ddd4: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x11ddd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11ddd8: 0x3e00008  jr          $ra
    ctx->pc = 0x11DDD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DDD8u;
            // 0x11dddc: 0x417c2  srl         $v0, $a0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11DDE0u;
}
