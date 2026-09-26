#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetScriptTargetId__16CEffectScriptManFRiii
// Address: 0x2e24f0 - 0x2e2578
void GetScriptTargetId__16CEffectScriptManFRiii_0x2e24f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetScriptTargetId__16CEffectScriptManFRiii_0x2e24f0");
#endif

    ctx->pc = 0x2e24f0u;

    // 0x2e24f0: 0x4e00017  bltz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E24F0u;
    {
        const bool branch_taken_0x2e24f0 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x2e24f0) {
            ctx->pc = 0x2E2550u;
            goto label_2e2550;
        }
    }
    ctx->pc = 0x2E24F8u;
    // 0x2e24f8: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E24F8u;
    {
        const bool branch_taken_0x2e24f8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2E24FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E24F8u;
            // 0x2e24fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e24f8) {
            ctx->pc = 0x2E2518u;
            goto label_2e2518;
        }
    }
    ctx->pc = 0x2E2500u;
    // 0x2e2500: 0x28c10080  slti        $at, $a2, 0x80
    ctx->pc = 0x2e2500u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2e2504: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2504u;
    {
        const bool branch_taken_0x2e2504 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2504u;
            // 0x2e2508: 0x28e20008  slti        $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2504) {
            ctx->pc = 0x2E2514u;
            goto label_2e2514;
        }
    }
    ctx->pc = 0x2E250Cu;
    // 0x2e250c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E250Cu;
    {
        const bool branch_taken_0x2e250c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E250Cu;
            // 0x2e2510: 0x61940  sll         $v1, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e250c) {
            ctx->pc = 0x2E2520u;
            goto label_2e2520;
        }
    }
    ctx->pc = 0x2E2514u;
label_2e2514:
    // 0x2e2514: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e2514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2518:
    // 0x2e2518: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E2518u;
    {
        const bool branch_taken_0x2e2518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2518) {
            ctx->pc = 0x2E2570u;
            goto label_2e2570;
        }
    }
    ctx->pc = 0x2E2520u;
label_2e2520:
    // 0x2e2520: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2e2520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2e2524: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e252c: 0x8c420184  lw          $v0, 0x184($v0)
    ctx->pc = 0x2e252cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x2e2530: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2530u;
    {
        const bool branch_taken_0x2e2530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2530) {
            ctx->pc = 0x2E2540u;
            goto label_2e2540;
        }
    }
    ctx->pc = 0x2E2538u;
    // 0x2e2538: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E2538u;
    {
        const bool branch_taken_0x2e2538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E253Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2538u;
            // 0x2e253c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2538) {
            ctx->pc = 0x2E2570u;
            goto label_2e2570;
        }
    }
    ctx->pc = 0x2E2540u;
label_2e2540:
    // 0x2e2540: 0x8c430110  lw          $v1, 0x110($v0)
    ctx->pc = 0x2e2540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x2e2544: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e2544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2548: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E2548u;
    {
        const bool branch_taken_0x2e2548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E254Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2548u;
            // 0x2e254c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2548) {
            ctx->pc = 0x2E2570u;
            goto label_2e2570;
        }
    }
    ctx->pc = 0x2E2550u;
label_2e2550:
    // 0x2e2550: 0x8c821184  lw          $v0, 0x1184($a0)
    ctx->pc = 0x2e2550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4484)));
    // 0x2e2554: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2554u;
    {
        const bool branch_taken_0x2e2554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2554) {
            ctx->pc = 0x2E256Cu;
            goto label_2e256c;
        }
    }
    ctx->pc = 0x2E255Cu;
    // 0x2e255c: 0x8c430110  lw          $v1, 0x110($v0)
    ctx->pc = 0x2e255cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x2e2560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e2560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2564: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E2564u;
    {
        const bool branch_taken_0x2e2564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2564u;
            // 0x2e2568: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2564) {
            ctx->pc = 0x2E2570u;
            goto label_2e2570;
        }
    }
    ctx->pc = 0x2E256Cu;
label_2e256c:
    // 0x2e256c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e256cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2570:
    // 0x2e2570: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E2578u;
}
