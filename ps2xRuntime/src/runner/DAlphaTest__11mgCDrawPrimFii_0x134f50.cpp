#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DAlphaTest__11mgCDrawPrimFii
// Address: 0x134f50 - 0x134f8c
void DAlphaTest__11mgCDrawPrimFii_0x134f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DAlphaTest__11mgCDrawPrimFii_0x134f50");
#endif

    ctx->pc = 0x134f50u;

    // 0x134f50: 0x90880021  lbu         $t0, 0x21($a0)
    ctx->pc = 0x134f50u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 33)));
    // 0x134f54: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x134f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x134f58: 0x33980  sll         $a3, $v1, 6
    ctx->pc = 0x134f58u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x134f5c: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x134f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x134f60: 0x2406ffbf  addiu       $a2, $zero, -0x41
    ctx->pc = 0x134f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x134f64: 0x329c0  sll         $a1, $v1, 7
    ctx->pc = 0x134f64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x134f68: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x134f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x134f6c: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x134f6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x134f70: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x134f70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x134f74: 0xa0860021  sb          $a2, 0x21($a0)
    ctx->pc = 0x134f74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 6));
    // 0x134f78: 0x90860021  lbu         $a2, 0x21($a0)
    ctx->pc = 0x134f78u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 33)));
    // 0x134f7c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x134f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x134f80: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x134f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x134f84: 0x3e00008  jr          $ra
    ctx->pc = 0x134F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134F84u;
            // 0x134f88: 0xa0830021  sb          $v1, 0x21($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134F8Cu;
}
