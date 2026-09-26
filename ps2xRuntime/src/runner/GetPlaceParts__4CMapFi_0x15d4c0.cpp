#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPlaceParts__4CMapFi
// Address: 0x15d4c0 - 0x15d508
void GetPlaceParts__4CMapFi_0x15d4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPlaceParts__4CMapFi_0x15d4c0");
#endif

    ctx->pc = 0x15d4c0u;

    // 0x15d4c0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15D4C0u;
    {
        const bool branch_taken_0x15d4c0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x15D4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D4C0u;
            // 0x15d4c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d4c0) {
            ctx->pc = 0x15D4DCu;
            goto label_15d4dc;
        }
    }
    ctx->pc = 0x15D4C8u;
    // 0x15d4c8: 0x8c820330  lw          $v0, 0x330($a0)
    ctx->pc = 0x15d4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 816)));
    // 0x15d4cc: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x15d4ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x15d4d0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15D4D0u;
    {
        const bool branch_taken_0x15d4d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d4d0) {
            ctx->pc = 0x15D4E4u;
            goto label_15d4e4;
        }
    }
    ctx->pc = 0x15D4D8u;
    // 0x15d4d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15d4d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d4dc:
    // 0x15d4dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15D4DCu;
    {
        const bool branch_taken_0x15d4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d4dc) {
            ctx->pc = 0x15D500u;
            goto label_15d500;
        }
    }
    ctx->pc = 0x15D4E4u;
label_15d4e4:
    // 0x15d4e4: 0x8c82032c  lw          $v0, 0x32C($a0)
    ctx->pc = 0x15d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 812)));
    // 0x15d4e8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x15d4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x15d4ec: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x15d4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15d4f0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x15d4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x15d4f4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x15d4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15d4f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15d4fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15d500:
    // 0x15d500: 0x3e00008  jr          $ra
    ctx->pc = 0x15D500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D508u;
}
