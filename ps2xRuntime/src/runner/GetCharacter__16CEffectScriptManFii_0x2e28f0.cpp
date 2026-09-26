#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCharacter__16CEffectScriptManFii
// Address: 0x2e28f0 - 0x2e296c
void GetCharacter__16CEffectScriptManFii_0x2e28f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCharacter__16CEffectScriptManFii_0x2e28f0");
#endif

    ctx->pc = 0x2e28f0u;

    // 0x2e28f0: 0x4c00016  bltz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E28F0u;
    {
        const bool branch_taken_0x2e28f0 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x2e28f0) {
            ctx->pc = 0x2E294Cu;
            goto label_2e294c;
        }
    }
    ctx->pc = 0x2E28F8u;
    // 0x2e28f8: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E28F8u;
    {
        const bool branch_taken_0x2e28f8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2E28FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E28F8u;
            // 0x2e28fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e28f8) {
            ctx->pc = 0x2E2918u;
            goto label_2e2918;
        }
    }
    ctx->pc = 0x2E2900u;
    // 0x2e2900: 0x28a10080  slti        $at, $a1, 0x80
    ctx->pc = 0x2e2900u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2e2904: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2904u;
    {
        const bool branch_taken_0x2e2904 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2904u;
            // 0x2e2908: 0x28c20008  slti        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2904) {
            ctx->pc = 0x2E2914u;
            goto label_2e2914;
        }
    }
    ctx->pc = 0x2E290Cu;
    // 0x2e290c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E290Cu;
    {
        const bool branch_taken_0x2e290c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E290Cu;
            // 0x2e2910: 0x51940  sll         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e290c) {
            ctx->pc = 0x2E2920u;
            goto label_2e2920;
        }
    }
    ctx->pc = 0x2E2914u;
label_2e2914:
    // 0x2e2914: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e2914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2918:
    // 0x2e2918: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2E2918u;
    {
        const bool branch_taken_0x2e2918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2918) {
            ctx->pc = 0x2E2964u;
            goto label_2e2964;
        }
    }
    ctx->pc = 0x2E2920u;
label_2e2920:
    // 0x2e2920: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2e2920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2e2924: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e292c: 0x8c420184  lw          $v0, 0x184($v0)
    ctx->pc = 0x2e292cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x2e2930: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2930u;
    {
        const bool branch_taken_0x2e2930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2930) {
            ctx->pc = 0x2E2940u;
            goto label_2e2940;
        }
    }
    ctx->pc = 0x2E2938u;
    // 0x2e2938: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E2938u;
    {
        const bool branch_taken_0x2e2938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E293Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2938u;
            // 0x2e293c: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2938) {
            ctx->pc = 0x2E2944u;
            goto label_2e2944;
        }
    }
    ctx->pc = 0x2E2940u;
label_2e2940:
    // 0x2e2940: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e2940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2944:
    // 0x2e2944: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2944u;
    {
        const bool branch_taken_0x2e2944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2944) {
            ctx->pc = 0x2E2964u;
            goto label_2e2964;
        }
    }
    ctx->pc = 0x2E294Cu;
label_2e294c:
    // 0x2e294c: 0x8c821184  lw          $v0, 0x1184($a0)
    ctx->pc = 0x2e294cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4484)));
    // 0x2e2950: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2950u;
    {
        const bool branch_taken_0x2e2950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2950) {
            ctx->pc = 0x2E2960u;
            goto label_2e2960;
        }
    }
    ctx->pc = 0x2E2958u;
    // 0x2e2958: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E2958u;
    {
        const bool branch_taken_0x2e2958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E295Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2958u;
            // 0x2e295c: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2958) {
            ctx->pc = 0x2E2964u;
            goto label_2e2964;
        }
    }
    ctx->pc = 0x2E2960u;
label_2e2960:
    // 0x2e2960: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e2960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2964:
    // 0x2e2964: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E296Cu;
}
