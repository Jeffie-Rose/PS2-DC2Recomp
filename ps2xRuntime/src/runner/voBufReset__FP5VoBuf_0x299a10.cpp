#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: voBufReset__FP5VoBuf
// Address: 0x299a10 - 0x299a1c
void voBufReset__FP5VoBuf_0x299a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("voBufReset__FP5VoBuf_0x299a10");
#endif

    ctx->pc = 0x299a10u;

    // 0x299a10: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x299a10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x299a14: 0x3e00008  jr          $ra
    ctx->pc = 0x299A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299A14u;
            // 0x299a18: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299A1Cu;
}
