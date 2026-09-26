#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPortNo__FUi
// Address: 0x18cb00 - 0x18cb0c
void GetPortNo__FUi_0x18cb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPortNo__FUi_0x18cb00");
#endif

    ctx->pc = 0x18cb00u;

    // 0x18cb00: 0x41602  srl         $v0, $a0, 24
    ctx->pc = 0x18cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x18cb04: 0x3e00008  jr          $ra
    ctx->pc = 0x18CB04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CB04u;
            // 0x18cb08: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18CB0Cu;
}
