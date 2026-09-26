#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetValue__16CEffectScriptManFiiii
// Address: 0x2e2710 - 0x2e27b4
void SetValue__16CEffectScriptManFiiii_0x2e2710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetValue__16CEffectScriptManFiiii_0x2e2710");
#endif

    ctx->pc = 0x2e2710u;

    // 0x2e2710: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2710u;
    {
        const bool branch_taken_0x2e2710 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2E2714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2710u;
            // 0x2e2714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2710) {
            ctx->pc = 0x2E2728u;
            goto label_2e2728;
        }
    }
    ctx->pc = 0x2E2718u;
    // 0x2e2718: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x2e2718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e271c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E271Cu;
    {
        const bool branch_taken_0x2e271c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e271c) {
            ctx->pc = 0x2E2730u;
            goto label_2e2730;
        }
    }
    ctx->pc = 0x2E2724u;
    // 0x2e2724: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e2724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2728:
    // 0x2e2728: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2E2728u;
    {
        const bool branch_taken_0x2e2728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2728) {
            ctx->pc = 0x2E27ACu;
            goto label_2e27ac;
        }
    }
    ctx->pc = 0x2E2730u;
label_2e2730:
    // 0x2e2730: 0x5000017  bltz        $t0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E2730u;
    {
        const bool branch_taken_0x2e2730 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x2e2730) {
            ctx->pc = 0x2E2790u;
            goto label_2e2790;
        }
    }
    ctx->pc = 0x2E2738u;
    // 0x2e2738: 0x4e00007  bltz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2738u;
    {
        const bool branch_taken_0x2e2738 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2E273Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2738u;
            // 0x2e273c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2738) {
            ctx->pc = 0x2E2758u;
            goto label_2e2758;
        }
    }
    ctx->pc = 0x2E2740u;
    // 0x2e2740: 0x28e10080  slti        $at, $a3, 0x80
    ctx->pc = 0x2e2740u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2e2744: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2744u;
    {
        const bool branch_taken_0x2e2744 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2744u;
            // 0x2e2748: 0x29020008  slti        $v0, $t0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2744) {
            ctx->pc = 0x2E2754u;
            goto label_2e2754;
        }
    }
    ctx->pc = 0x2E274Cu;
    // 0x2e274c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E274Cu;
    {
        const bool branch_taken_0x2e274c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E274Cu;
            // 0x2e2750: 0x71940  sll         $v1, $a3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e274c) {
            ctx->pc = 0x2E2760u;
            goto label_2e2760;
        }
    }
    ctx->pc = 0x2E2754u;
label_2e2754:
    // 0x2e2754: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e2754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2758:
    // 0x2e2758: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E2758u;
    {
        const bool branch_taken_0x2e2758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2758) {
            ctx->pc = 0x2E27ACu;
            goto label_2e27ac;
        }
    }
    ctx->pc = 0x2E2760u;
label_2e2760:
    // 0x2e2760: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2e2760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2e2764: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2768: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e276c: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x2e276cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x2e2770: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2770u;
    {
        const bool branch_taken_0x2e2770 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2770u;
            // 0x2e2774: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2770) {
            ctx->pc = 0x2E2780u;
            goto label_2e2780;
        }
    }
    ctx->pc = 0x2E2778u;
    // 0x2e2778: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E2778u;
    {
        const bool branch_taken_0x2e2778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E277Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2778u;
            // 0x2e277c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2778) {
            ctx->pc = 0x2E27ACu;
            goto label_2e27ac;
        }
    }
    ctx->pc = 0x2E2780u;
label_2e2780:
    // 0x2e2780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e2780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2784: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2788: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E2788u;
    {
        const bool branch_taken_0x2e2788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E278Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2788u;
            // 0x2e278c: 0xac660114  sw          $a2, 0x114($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2788) {
            ctx->pc = 0x2E27ACu;
            goto label_2e27ac;
        }
    }
    ctx->pc = 0x2E2790u;
label_2e2790:
    // 0x2e2790: 0x8c841184  lw          $a0, 0x1184($a0)
    ctx->pc = 0x2e2790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4484)));
    // 0x2e2794: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2794u;
    {
        const bool branch_taken_0x2e2794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2794u;
            // 0x2e2798: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2794) {
            ctx->pc = 0x2E27ACu;
            goto label_2e27ac;
        }
    }
    ctx->pc = 0x2E279Cu;
    // 0x2e279c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2e279cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2e27a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e27a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e27a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e27a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e27a8: 0xac660114  sw          $a2, 0x114($v1)
    ctx->pc = 0x2e27a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 6));
label_2e27ac:
    // 0x2e27ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2E27ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E27B4u;
}
