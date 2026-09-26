#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetVlgrPlaceInfo__Fi
// Address: 0x3196b0 - 0x3196e8
void GetVlgrPlaceInfo__Fi_0x3196b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetVlgrPlaceInfo__Fi_0x3196b0");
#endif

    ctx->pc = 0x3196b0u;

    // 0x3196b0: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3196B0u;
    {
        const bool branch_taken_0x3196b0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3196B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3196B0u;
            // 0x3196b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3196b0) {
            ctx->pc = 0x3196CCu;
            goto label_3196cc;
        }
    }
    ctx->pc = 0x3196B8u;
    // 0x3196b8: 0x8f82a330  lw          $v0, -0x5CD0($gp)
    ctx->pc = 0x3196b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943536)));
    // 0x3196bc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x3196bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3196c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3196C0u;
    {
        const bool branch_taken_0x3196c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3196c0) {
            ctx->pc = 0x3196D4u;
            goto label_3196d4;
        }
    }
    ctx->pc = 0x3196C8u;
    // 0x3196c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3196c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3196cc:
    // 0x3196cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3196CCu;
    {
        const bool branch_taken_0x3196cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3196cc) {
            ctx->pc = 0x3196E0u;
            goto label_3196e0;
        }
    }
    ctx->pc = 0x3196D4u;
label_3196d4:
    // 0x3196d4: 0x8f82a334  lw          $v0, -0x5CCC($gp)
    ctx->pc = 0x3196d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943540)));
    // 0x3196d8: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x3196d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x3196dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3196dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3196e0:
    // 0x3196e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3196E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3196E8u;
}
