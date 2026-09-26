#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AlphaTest__11mgCDrawPrimFii
// Address: 0x134f10 - 0x134f4c
void AlphaTest__11mgCDrawPrimFii_0x134f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AlphaTest__11mgCDrawPrimFii_0x134f10");
#endif

    ctx->pc = 0x134f10u;

    // 0x134f10: 0x90880020  lbu         $t0, 0x20($a0)
    ctx->pc = 0x134f10u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x134f14: 0x30a30007  andi        $v1, $a1, 0x7
    ctx->pc = 0x134f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x134f18: 0x33840  sll         $a3, $v1, 1
    ctx->pc = 0x134f18u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x134f1c: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x134f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x134f20: 0x2406fff1  addiu       $a2, $zero, -0xF
    ctx->pc = 0x134f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x134f24: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x134f24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x134f28: 0x2403f00f  addiu       $v1, $zero, -0xFF1
    ctx->pc = 0x134f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x134f2c: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x134f2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x134f30: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x134f30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x134f34: 0xa0860020  sb          $a2, 0x20($a0)
    ctx->pc = 0x134f34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 6));
    // 0x134f38: 0x94860020  lhu         $a2, 0x20($a0)
    ctx->pc = 0x134f38u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x134f3c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x134f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x134f40: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x134f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x134f44: 0x3e00008  jr          $ra
    ctx->pc = 0x134F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134F44u;
            // 0x134f48: 0xa4830020  sh          $v1, 0x20($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134F4Cu;
}
