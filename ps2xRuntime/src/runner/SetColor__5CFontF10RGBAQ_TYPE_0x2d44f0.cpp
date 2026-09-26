#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetColor__5CFontF10RGBAQ_TYPE
// Address: 0x2d44f0 - 0x2d4520
void SetColor__5CFontF10RGBAQ_TYPE_0x2d44f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetColor__5CFontF10RGBAQ_TYPE_0x2d44f0");
#endif

    ctx->pc = 0x2d44f0u;

    // 0x2d44f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d44f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d44f4: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x2d44f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x2d44f8: 0x93a30008  lbu         $v1, 0x8($sp)
    ctx->pc = 0x2d44f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d44fc: 0xa0830088  sb          $v1, 0x88($a0)
    ctx->pc = 0x2d44fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 136), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d4500: 0x93a30009  lbu         $v1, 0x9($sp)
    ctx->pc = 0x2d4500u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9)));
    // 0x2d4504: 0xa0830089  sb          $v1, 0x89($a0)
    ctx->pc = 0x2d4504u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 137), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d4508: 0x93a3000a  lbu         $v1, 0xA($sp)
    ctx->pc = 0x2d4508u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 10)));
    // 0x2d450c: 0xa083008a  sb          $v1, 0x8A($a0)
    ctx->pc = 0x2d450cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 138), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d4510: 0x93a3000b  lbu         $v1, 0xB($sp)
    ctx->pc = 0x2d4510u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 11)));
    // 0x2d4514: 0xa083008b  sb          $v1, 0x8B($a0)
    ctx->pc = 0x2d4514u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 139), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d4518: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D451Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4518u;
            // 0x2d451c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D4520u;
}
