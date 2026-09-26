#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AntiAliasing__11mgCDrawPrimFi
// Address: 0x1350f0 - 0x135110
void AntiAliasing__11mgCDrawPrimFi_0x1350f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AntiAliasing__11mgCDrawPrimFi_0x1350f0");
#endif

    ctx->pc = 0x1350f0u;

    // 0x1350f0: 0x90860050  lbu         $a2, 0x50($a0)
    ctx->pc = 0x1350f0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1350f4: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1350f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1350f8: 0x329c0  sll         $a1, $v1, 7
    ctx->pc = 0x1350f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x1350fc: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x1350fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x135100: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x135100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x135104: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x135104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x135108: 0x3e00008  jr          $ra
    ctx->pc = 0x135108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13510Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135108u;
            // 0x13510c: 0xa0830050  sb          $v1, 0x50($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135110u;
}
