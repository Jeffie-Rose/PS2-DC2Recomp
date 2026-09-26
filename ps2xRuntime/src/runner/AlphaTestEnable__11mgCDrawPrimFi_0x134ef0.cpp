#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AlphaTestEnable__11mgCDrawPrimFi
// Address: 0x134ef0 - 0x134f0c
void AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AlphaTestEnable__11mgCDrawPrimFi_0x134ef0");
#endif

    ctx->pc = 0x134ef0u;

    // 0x134ef0: 0x90860020  lbu         $a2, 0x20($a0)
    ctx->pc = 0x134ef0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x134ef4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x134ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x134ef8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x134ef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x134efc: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x134efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x134f00: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x134f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x134f04: 0x3e00008  jr          $ra
    ctx->pc = 0x134F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134F04u;
            // 0x134f08: 0xa0830020  sb          $v1, 0x20($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134F0Cu;
}
