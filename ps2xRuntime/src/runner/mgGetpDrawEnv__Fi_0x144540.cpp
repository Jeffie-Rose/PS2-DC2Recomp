#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgGetpDrawEnv__Fi
// Address: 0x144540 - 0x14455c
void mgGetpDrawEnv__Fi_0x144540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgGetpDrawEnv__Fi_0x144540");
#endif

    ctx->pc = 0x144540u;

    // 0x144540: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x144540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x144544: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x144544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x144548: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x144548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x14454c: 0x24420ec0  addiu       $v0, $v0, 0xEC0
    ctx->pc = 0x14454cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3776));
    // 0x144550: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x144550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144554: 0x3e00008  jr          $ra
    ctx->pc = 0x144554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144554u;
            // 0x144558: 0x24420f20  addiu       $v0, $v0, 0xF20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14455Cu;
}
