#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGaijiImgPtr__Fv
// Address: 0x2d8760 - 0x2d876c
void GetGaijiImgPtr__Fv_0x2d8760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGaijiImgPtr__Fv_0x2d8760");
#endif

    ctx->pc = 0x2d8760u;

    // 0x2d8760: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2d8760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2d8764: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8764u;
            // 0x2d8768: 0x244268b0  addiu       $v0, $v0, 0x68B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D876Cu;
}
