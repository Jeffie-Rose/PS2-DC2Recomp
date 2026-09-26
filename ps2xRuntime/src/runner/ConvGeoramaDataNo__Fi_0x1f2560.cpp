#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ConvGeoramaDataNo__Fi
// Address: 0x1f2560 - 0x1f2578
void ConvGeoramaDataNo__Fi_0x1f2560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ConvGeoramaDataNo__Fi_0x1f2560");
#endif

    ctx->pc = 0x1f2560u;

    // 0x1f2560: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1f2560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x1f2564: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1f2564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1f2568: 0x2442e708  addiu       $v0, $v0, -0x18F8
    ctx->pc = 0x1f2568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960904));
    // 0x1f256c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f256cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f2570: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2570u;
            // 0x1f2574: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F2578u;
}
