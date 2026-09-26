#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetScrPad__Fv
// Address: 0x13e3b0 - 0x13e3c4
void GetScrPad__Fv_0x13e3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetScrPad__Fv_0x13e3b0");
#endif

    ctx->pc = 0x13e3b0u;

    // 0x13e3b0: 0x8f848754  lw          $a0, -0x78AC($gp)
    ctx->pc = 0x13e3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936404)));
    // 0x13e3b4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13e3b8: 0x34622000  ori         $v0, $v1, 0x2000
    ctx->pc = 0x13e3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x13e3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x13E3BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E3BCu;
            // 0x13e3c0: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E3C4u;
}
