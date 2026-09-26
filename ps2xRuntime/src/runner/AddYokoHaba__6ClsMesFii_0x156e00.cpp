#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddYokoHaba__6ClsMesFii
// Address: 0x156e00 - 0x156e20
void AddYokoHaba__6ClsMesFii_0x156e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddYokoHaba__6ClsMesFii_0x156e00");
#endif

    ctx->pc = 0x156e00u;

    // 0x156e00: 0x4c00005  bltz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x156E00u;
    {
        const bool branch_taken_0x156e00 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x156E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156E00u;
            // 0x156e04: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e00) {
            ctx->pc = 0x156E18u;
            goto label_156e18;
        }
    }
    ctx->pc = 0x156E08u;
    // 0x156e08: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x156e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x156e0c: 0x8c831e14  lw          $v1, 0x1E14($a0)
    ctx->pc = 0x156e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7700)));
    // 0x156e10: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x156e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x156e14: 0xac831e14  sw          $v1, 0x1E14($a0)
    ctx->pc = 0x156e14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7700), GPR_U32(ctx, 3));
label_156e18:
    // 0x156e18: 0x3e00008  jr          $ra
    ctx->pc = 0x156E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x156E20u;
}
