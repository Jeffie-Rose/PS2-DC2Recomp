#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndGetReverbDepth__Fi
// Address: 0x18c9b0 - 0x18c9e4
void sndGetReverbDepth__Fi_0x18c9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndGetReverbDepth__Fi_0x18c9b0");
#endif

    ctx->pc = 0x18c9b0u;

    // 0x18c9b0: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C9B0u;
    {
        const bool branch_taken_0x18c9b0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x18C9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C9B0u;
            // 0x18c9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c9b0) {
            ctx->pc = 0x18C9C4u;
            goto label_18c9c4;
        }
    }
    ctx->pc = 0x18C9B8u;
    // 0x18c9b8: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x18c9b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18c9bc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C9BCu;
    {
        const bool branch_taken_0x18c9bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C9BCu;
            // 0x18c9c0: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c9bc) {
            ctx->pc = 0x18C9CCu;
            goto label_18c9cc;
        }
    }
    ctx->pc = 0x18C9C4u;
label_18c9c4:
    // 0x18c9c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18C9C4u;
    {
        const bool branch_taken_0x18c9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c9c4) {
            ctx->pc = 0x18C9DCu;
            goto label_18c9dc;
        }
    }
    ctx->pc = 0x18C9CCu;
label_18c9cc:
    // 0x18c9cc: 0x27828a98  addiu       $v0, $gp, -0x7568
    ctx->pc = 0x18c9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937240));
    // 0x18c9d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c9d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c9d8: 0x0  nop
    ctx->pc = 0x18c9d8u;
    // NOP
label_18c9dc:
    // 0x18c9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x18C9DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C9E4u;
}
