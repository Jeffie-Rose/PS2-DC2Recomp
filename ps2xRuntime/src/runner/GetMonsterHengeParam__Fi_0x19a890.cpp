#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMonsterHengeParam__Fi
// Address: 0x19a890 - 0x19a8dc
void GetMonsterHengeParam__Fi_0x19a890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMonsterHengeParam__Fi_0x19a890");
#endif

    switch (ctx->pc) {
        case 0x19a8a0u: goto label_19a8a0;
        default: break;
    }

    ctx->pc = 0x19a890u;

    // 0x19a890: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19a890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19a894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a898: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x19a898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x19a89c: 0x24635b90  addiu       $v1, $v1, 0x5B90
    ctx->pc = 0x19a89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23440));
label_19a8a0:
    // 0x19a8a0: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x19a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x19a8a4: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x19a8a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a8a8: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19A8A8u;
    {
        const bool branch_taken_0x19a8a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x19A8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A8A8u;
            // 0x19a8ac: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a8a8) {
            ctx->pc = 0x19A8C0u;
            goto label_19a8c0;
        }
    }
    ctx->pc = 0x19A8B0u;
    // 0x19a8b0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x19a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19a8b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19a8b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19A8B8u;
    {
        const bool branch_taken_0x19a8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A8B8u;
            // 0x19a8bc: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a8b8) {
            ctx->pc = 0x19A8D4u;
            goto label_19a8d4;
        }
    }
    ctx->pc = 0x19A8C0u;
label_19a8c0:
    // 0x19a8c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19a8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19a8c4: 0x28a20039  slti        $v0, $a1, 0x39
    ctx->pc = 0x19a8c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x19a8c8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x19A8C8u;
    {
        const bool branch_taken_0x19a8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A8C8u;
            // 0x19a8cc: 0x24c6001c  addiu       $a2, $a2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a8c8) {
            ctx->pc = 0x19A8A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19a8a0;
        }
    }
    ctx->pc = 0x19A8D0u;
    // 0x19a8d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19a8d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a8d4:
    // 0x19a8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x19A8D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A8DCu;
}
