#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetScriptTargetId__16CEffectScriptManFiii
// Address: 0x2e2470 - 0x2e24f0
void SetScriptTargetId__16CEffectScriptManFiii_0x2e2470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetScriptTargetId__16CEffectScriptManFiii_0x2e2470");
#endif

    ctx->pc = 0x2e2470u;

    // 0x2e2470: 0x4e00016  bltz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E2470u;
    {
        const bool branch_taken_0x2e2470 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x2e2470) {
            ctx->pc = 0x2E24CCu;
            goto label_2e24cc;
        }
    }
    ctx->pc = 0x2E2478u;
    // 0x2e2478: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2478u;
    {
        const bool branch_taken_0x2e2478 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2E247Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2478u;
            // 0x2e247c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2478) {
            ctx->pc = 0x2E2498u;
            goto label_2e2498;
        }
    }
    ctx->pc = 0x2E2480u;
    // 0x2e2480: 0x28c10080  slti        $at, $a2, 0x80
    ctx->pc = 0x2e2480u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2e2484: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2484u;
    {
        const bool branch_taken_0x2e2484 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2484u;
            // 0x2e2488: 0x28e20008  slti        $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2484) {
            ctx->pc = 0x2E2494u;
            goto label_2e2494;
        }
    }
    ctx->pc = 0x2E248Cu;
    // 0x2e248c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E248Cu;
    {
        const bool branch_taken_0x2e248c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E248Cu;
            // 0x2e2490: 0x61940  sll         $v1, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e248c) {
            ctx->pc = 0x2E24A0u;
            goto label_2e24a0;
        }
    }
    ctx->pc = 0x2E2494u;
label_2e2494:
    // 0x2e2494: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e2494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2498:
    // 0x2e2498: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E2498u;
    {
        const bool branch_taken_0x2e2498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2498) {
            ctx->pc = 0x2E24E8u;
            goto label_2e24e8;
        }
    }
    ctx->pc = 0x2E24A0u;
label_2e24a0:
    // 0x2e24a0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2e24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2e24a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e24a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e24a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e24a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e24ac: 0x8c420184  lw          $v0, 0x184($v0)
    ctx->pc = 0x2e24acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x2e24b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E24B0u;
    {
        const bool branch_taken_0x2e24b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e24b0) {
            ctx->pc = 0x2E24C0u;
            goto label_2e24c0;
        }
    }
    ctx->pc = 0x2E24B8u;
    // 0x2e24b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E24B8u;
    {
        const bool branch_taken_0x2e24b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E24BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E24B8u;
            // 0x2e24bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e24b8) {
            ctx->pc = 0x2E24E8u;
            goto label_2e24e8;
        }
    }
    ctx->pc = 0x2E24C0u;
label_2e24c0:
    // 0x2e24c0: 0xac450110  sw          $a1, 0x110($v0)
    ctx->pc = 0x2e24c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 5));
    // 0x2e24c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E24C4u;
    {
        const bool branch_taken_0x2e24c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E24C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E24C4u;
            // 0x2e24c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e24c4) {
            ctx->pc = 0x2E24E8u;
            goto label_2e24e8;
        }
    }
    ctx->pc = 0x2E24CCu;
label_2e24cc:
    // 0x2e24cc: 0x8c821184  lw          $v0, 0x1184($a0)
    ctx->pc = 0x2e24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4484)));
    // 0x2e24d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E24D0u;
    {
        const bool branch_taken_0x2e24d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e24d0) {
            ctx->pc = 0x2E24E4u;
            goto label_2e24e4;
        }
    }
    ctx->pc = 0x2E24D8u;
    // 0x2e24d8: 0xac450110  sw          $a1, 0x110($v0)
    ctx->pc = 0x2e24d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 5));
    // 0x2e24dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E24DCu;
    {
        const bool branch_taken_0x2e24dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E24E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E24DCu;
            // 0x2e24e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e24dc) {
            ctx->pc = 0x2E24E8u;
            goto label_2e24e8;
        }
    }
    ctx->pc = 0x2E24E4u;
label_2e24e4:
    // 0x2e24e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e24e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e24e8:
    // 0x2e24e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E24E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E24F0u;
}
