#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetBankNo__FUi
// Address: 0x18cb10 - 0x18cb1c
void GetBankNo__FUi_0x18cb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetBankNo__FUi_0x18cb10");
#endif

    ctx->pc = 0x18cb10u;

    // 0x18cb10: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x18cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x18cb14: 0x3e00008  jr          $ra
    ctx->pc = 0x18CB14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CB14u;
            // 0x18cb18: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18CB1Cu;
}
