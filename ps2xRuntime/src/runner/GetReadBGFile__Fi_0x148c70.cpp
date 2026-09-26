#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetReadBGFile__Fi
// Address: 0x148c70 - 0x148cb8
void GetReadBGFile__Fi_0x148c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetReadBGFile__Fi_0x148c70");
#endif

    ctx->pc = 0x148c70u;

    // 0x148c70: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x148C70u;
    {
        const bool branch_taken_0x148c70 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x148C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148C70u;
            // 0x148c74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148c70) {
            ctx->pc = 0x148C88u;
            goto label_148c88;
        }
    }
    ctx->pc = 0x148C78u;
    // 0x148c78: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x148c78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x148c7c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x148C7Cu;
    {
        const bool branch_taken_0x148c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148C7Cu;
            // 0x148c80: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148c7c) {
            ctx->pc = 0x148C94u;
            goto label_148c94;
        }
    }
    ctx->pc = 0x148C84u;
    // 0x148c84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x148c84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_148c88:
    // 0x148c88: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x148C88u;
    {
        const bool branch_taken_0x148c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148c88) {
            ctx->pc = 0x148CB0u;
            goto label_148cb0;
        }
    }
    ctx->pc = 0x148C90u;
    // 0x148c90: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x148c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_148c94:
    // 0x148c94: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x148c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x148c98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x148c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x148c9c: 0x24428680  addiu       $v0, $v0, -0x7980
    ctx->pc = 0x148c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936192));
    // 0x148ca0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x148ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x148ca4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x148ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x148ca8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x148ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148cac: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x148cacu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
label_148cb0:
    // 0x148cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x148CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148CB8u;
}
