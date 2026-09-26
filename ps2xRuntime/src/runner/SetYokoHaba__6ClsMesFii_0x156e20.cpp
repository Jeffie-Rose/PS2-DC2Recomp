#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetYokoHaba__6ClsMesFii
// Address: 0x156e20 - 0x156e38
void SetYokoHaba__6ClsMesFii_0x156e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetYokoHaba__6ClsMesFii_0x156e20");
#endif

    ctx->pc = 0x156e20u;

    // 0x156e20: 0x4c00003  bltz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x156E20u;
    {
        const bool branch_taken_0x156e20 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x156E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156E20u;
            // 0x156e24: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e20) {
            ctx->pc = 0x156E30u;
            goto label_156e30;
        }
    }
    ctx->pc = 0x156E28u;
    // 0x156e28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x156e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x156e2c: 0xac661e14  sw          $a2, 0x1E14($v1)
    ctx->pc = 0x156e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7700), GPR_U32(ctx, 6));
label_156e30:
    // 0x156e30: 0x3e00008  jr          $ra
    ctx->pc = 0x156E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x156E38u;
}
