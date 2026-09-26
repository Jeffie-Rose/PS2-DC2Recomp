#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetScriptUserId__16CEffectScriptManFiii
// Address: 0x2e2580 - 0x2e2600
void SetScriptUserId__16CEffectScriptManFiii_0x2e2580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetScriptUserId__16CEffectScriptManFiii_0x2e2580");
#endif

    ctx->pc = 0x2e2580u;

    // 0x2e2580: 0x4e00016  bltz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E2580u;
    {
        const bool branch_taken_0x2e2580 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x2e2580) {
            ctx->pc = 0x2E25DCu;
            goto label_2e25dc;
        }
    }
    ctx->pc = 0x2E2588u;
    // 0x2e2588: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2588u;
    {
        const bool branch_taken_0x2e2588 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2E258Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2588u;
            // 0x2e258c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2588) {
            ctx->pc = 0x2E25A8u;
            goto label_2e25a8;
        }
    }
    ctx->pc = 0x2E2590u;
    // 0x2e2590: 0x28c10080  slti        $at, $a2, 0x80
    ctx->pc = 0x2e2590u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2e2594: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2594u;
    {
        const bool branch_taken_0x2e2594 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2594u;
            // 0x2e2598: 0x28e20008  slti        $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2594) {
            ctx->pc = 0x2E25A4u;
            goto label_2e25a4;
        }
    }
    ctx->pc = 0x2E259Cu;
    // 0x2e259c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E259Cu;
    {
        const bool branch_taken_0x2e259c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E25A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E259Cu;
            // 0x2e25a0: 0x61940  sll         $v1, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e259c) {
            ctx->pc = 0x2E25B0u;
            goto label_2e25b0;
        }
    }
    ctx->pc = 0x2E25A4u;
label_2e25a4:
    // 0x2e25a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e25a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e25a8:
    // 0x2e25a8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E25A8u;
    {
        const bool branch_taken_0x2e25a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e25a8) {
            ctx->pc = 0x2E25F8u;
            goto label_2e25f8;
        }
    }
    ctx->pc = 0x2E25B0u;
label_2e25b0:
    // 0x2e25b0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2e25b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2e25b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e25b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e25b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e25b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e25bc: 0x8c420184  lw          $v0, 0x184($v0)
    ctx->pc = 0x2e25bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x2e25c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E25C0u;
    {
        const bool branch_taken_0x2e25c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e25c0) {
            ctx->pc = 0x2E25D0u;
            goto label_2e25d0;
        }
    }
    ctx->pc = 0x2E25C8u;
    // 0x2e25c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E25C8u;
    {
        const bool branch_taken_0x2e25c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E25CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E25C8u;
            // 0x2e25cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e25c8) {
            ctx->pc = 0x2E25F8u;
            goto label_2e25f8;
        }
    }
    ctx->pc = 0x2E25D0u;
label_2e25d0:
    // 0x2e25d0: 0xac4500a8  sw          $a1, 0xA8($v0)
    ctx->pc = 0x2e25d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 5));
    // 0x2e25d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E25D4u;
    {
        const bool branch_taken_0x2e25d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E25D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E25D4u;
            // 0x2e25d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e25d4) {
            ctx->pc = 0x2E25F8u;
            goto label_2e25f8;
        }
    }
    ctx->pc = 0x2E25DCu;
label_2e25dc:
    // 0x2e25dc: 0x8c821184  lw          $v0, 0x1184($a0)
    ctx->pc = 0x2e25dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4484)));
    // 0x2e25e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E25E0u;
    {
        const bool branch_taken_0x2e25e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e25e0) {
            ctx->pc = 0x2E25F4u;
            goto label_2e25f4;
        }
    }
    ctx->pc = 0x2E25E8u;
    // 0x2e25e8: 0xac4500a8  sw          $a1, 0xA8($v0)
    ctx->pc = 0x2e25e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 5));
    // 0x2e25ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E25ECu;
    {
        const bool branch_taken_0x2e25ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E25F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E25ECu;
            // 0x2e25f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e25ec) {
            ctx->pc = 0x2E25F8u;
            goto label_2e25f8;
        }
    }
    ctx->pc = 0x2E25F4u;
label_2e25f4:
    // 0x2e25f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e25f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e25f8:
    // 0x2e25f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E25F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E2600u;
}
