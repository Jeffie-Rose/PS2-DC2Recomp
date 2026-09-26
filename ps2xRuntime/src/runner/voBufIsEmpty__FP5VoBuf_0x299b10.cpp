#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: voBufIsEmpty__FP5VoBuf
// Address: 0x299b10 - 0x299b20
void voBufIsEmpty__FP5VoBuf_0x299b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("voBufIsEmpty__FP5VoBuf_0x299b10");
#endif

    ctx->pc = 0x299b10u;

    // 0x299b10: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x299b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x299b14: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x299b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x299b18: 0x3e00008  jr          $ra
    ctx->pc = 0x299B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299B18u;
            // 0x299b1c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299B20u;
}
