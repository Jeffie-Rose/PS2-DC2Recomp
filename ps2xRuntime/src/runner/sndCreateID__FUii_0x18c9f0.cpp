#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndCreateID__FUii
// Address: 0x18c9f0 - 0x18ca04
void sndCreateID__FUii_0x18c9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndCreateID__FUii_0x18c9f0");
#endif

    ctx->pc = 0x18c9f0u;

    // 0x18c9f0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x18c9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x18c9f4: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x18c9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x18c9f8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18c9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x18c9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x18C9FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C9FCu;
            // 0x18ca00: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18CA04u;
}
