#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFishData__Fi
// Address: 0x320390 - 0x3203dc
void GetFishData__Fi_0x320390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFishData__Fi_0x320390");
#endif

    switch (ctx->pc) {
        case 0x3203a0u: goto label_3203a0;
        default: break;
    }

    ctx->pc = 0x320390u;

    // 0x320390: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x320390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320394: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x320394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320398: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x320398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x32039c: 0x2463e900  addiu       $v1, $v1, -0x1700
    ctx->pc = 0x32039cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961408));
label_3203a0:
    // 0x3203a0: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x3203a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3203a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3203a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3203a8: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3203A8u;
    {
        const bool branch_taken_0x3203a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3203ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3203A8u;
            // 0x3203ac: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3203a8) {
            ctx->pc = 0x3203C0u;
            goto label_3203c0;
        }
    }
    ctx->pc = 0x3203B0u;
    // 0x3203b0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3203b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3203b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3203b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3203b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3203B8u;
    {
        const bool branch_taken_0x3203b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3203BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3203B8u;
            // 0x3203bc: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3203b8) {
            ctx->pc = 0x3203D4u;
            goto label_3203d4;
        }
    }
    ctx->pc = 0x3203C0u;
label_3203c0:
    // 0x3203c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3203c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3203c4: 0x28a20012  slti        $v0, $a1, 0x12
    ctx->pc = 0x3203c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x3203c8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3203C8u;
    {
        const bool branch_taken_0x3203c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3203CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3203C8u;
            // 0x3203cc: 0x24c6001c  addiu       $a2, $a2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3203c8) {
            ctx->pc = 0x3203A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3203a0;
        }
    }
    ctx->pc = 0x3203D0u;
    // 0x3203d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3203d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3203d4:
    // 0x3203d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3203D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3203DCu;
}
