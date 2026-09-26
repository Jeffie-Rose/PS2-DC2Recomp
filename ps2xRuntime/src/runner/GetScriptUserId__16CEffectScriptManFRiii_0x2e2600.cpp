#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetScriptUserId__16CEffectScriptManFRiii
// Address: 0x2e2600 - 0x2e2688
void GetScriptUserId__16CEffectScriptManFRiii_0x2e2600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetScriptUserId__16CEffectScriptManFRiii_0x2e2600");
#endif

    ctx->pc = 0x2e2600u;

    // 0x2e2600: 0x4e00017  bltz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E2600u;
    {
        const bool branch_taken_0x2e2600 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x2e2600) {
            ctx->pc = 0x2E2660u;
            goto label_2e2660;
        }
    }
    ctx->pc = 0x2E2608u;
    // 0x2e2608: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2608u;
    {
        const bool branch_taken_0x2e2608 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2E260Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2608u;
            // 0x2e260c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2608) {
            ctx->pc = 0x2E2628u;
            goto label_2e2628;
        }
    }
    ctx->pc = 0x2E2610u;
    // 0x2e2610: 0x28c10080  slti        $at, $a2, 0x80
    ctx->pc = 0x2e2610u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2e2614: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2614u;
    {
        const bool branch_taken_0x2e2614 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2614u;
            // 0x2e2618: 0x28e20008  slti        $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2614) {
            ctx->pc = 0x2E2624u;
            goto label_2e2624;
        }
    }
    ctx->pc = 0x2E261Cu;
    // 0x2e261c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E261Cu;
    {
        const bool branch_taken_0x2e261c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E261Cu;
            // 0x2e2620: 0x61940  sll         $v1, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e261c) {
            ctx->pc = 0x2E2630u;
            goto label_2e2630;
        }
    }
    ctx->pc = 0x2E2624u;
label_2e2624:
    // 0x2e2624: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e2624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2628:
    // 0x2e2628: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E2628u;
    {
        const bool branch_taken_0x2e2628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2628) {
            ctx->pc = 0x2E2680u;
            goto label_2e2680;
        }
    }
    ctx->pc = 0x2E2630u;
label_2e2630:
    // 0x2e2630: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2e2630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2e2634: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e263c: 0x8c420184  lw          $v0, 0x184($v0)
    ctx->pc = 0x2e263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x2e2640: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2640u;
    {
        const bool branch_taken_0x2e2640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2640) {
            ctx->pc = 0x2E2650u;
            goto label_2e2650;
        }
    }
    ctx->pc = 0x2E2648u;
    // 0x2e2648: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E2648u;
    {
        const bool branch_taken_0x2e2648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E264Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2648u;
            // 0x2e264c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2648) {
            ctx->pc = 0x2E2680u;
            goto label_2e2680;
        }
    }
    ctx->pc = 0x2E2650u;
label_2e2650:
    // 0x2e2650: 0x8c4300a8  lw          $v1, 0xA8($v0)
    ctx->pc = 0x2e2650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2e2654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e2654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2658: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E2658u;
    {
        const bool branch_taken_0x2e2658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E265Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2658u;
            // 0x2e265c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2658) {
            ctx->pc = 0x2E2680u;
            goto label_2e2680;
        }
    }
    ctx->pc = 0x2E2660u;
label_2e2660:
    // 0x2e2660: 0x8c821184  lw          $v0, 0x1184($a0)
    ctx->pc = 0x2e2660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4484)));
    // 0x2e2664: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2664u;
    {
        const bool branch_taken_0x2e2664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2664) {
            ctx->pc = 0x2E267Cu;
            goto label_2e267c;
        }
    }
    ctx->pc = 0x2E266Cu;
    // 0x2e266c: 0x8c4300a8  lw          $v1, 0xA8($v0)
    ctx->pc = 0x2e266cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2e2670: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e2670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2674: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E2674u;
    {
        const bool branch_taken_0x2e2674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2674u;
            // 0x2e2678: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2674) {
            ctx->pc = 0x2E2680u;
            goto label_2e2680;
        }
    }
    ctx->pc = 0x2E267Cu;
label_2e267c:
    // 0x2e267c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e267cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2680:
    // 0x2e2680: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E2688u;
}
