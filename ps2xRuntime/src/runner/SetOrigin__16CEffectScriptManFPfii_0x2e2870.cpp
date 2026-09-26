#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetOrigin__16CEffectScriptManFPfii
// Address: 0x2e2870 - 0x2e28f0
void SetOrigin__16CEffectScriptManFPfii_0x2e2870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetOrigin__16CEffectScriptManFPfii_0x2e2870");
#endif

    ctx->pc = 0x2e2870u;

    // 0x2e2870: 0x4e00017  bltz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E2870u;
    {
        const bool branch_taken_0x2e2870 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x2e2870) {
            ctx->pc = 0x2E28D0u;
            goto label_2e28d0;
        }
    }
    ctx->pc = 0x2E2878u;
    // 0x2e2878: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2878u;
    {
        const bool branch_taken_0x2e2878 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2E287Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2878u;
            // 0x2e287c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2878) {
            ctx->pc = 0x2E2898u;
            goto label_2e2898;
        }
    }
    ctx->pc = 0x2E2880u;
    // 0x2e2880: 0x28c10080  slti        $at, $a2, 0x80
    ctx->pc = 0x2e2880u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2e2884: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2884u;
    {
        const bool branch_taken_0x2e2884 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2884u;
            // 0x2e2888: 0x28e20008  slti        $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2884) {
            ctx->pc = 0x2E2894u;
            goto label_2e2894;
        }
    }
    ctx->pc = 0x2E288Cu;
    // 0x2e288c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E288Cu;
    {
        const bool branch_taken_0x2e288c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E288Cu;
            // 0x2e2890: 0x61940  sll         $v1, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e288c) {
            ctx->pc = 0x2E28A0u;
            goto label_2e28a0;
        }
    }
    ctx->pc = 0x2E2894u;
label_2e2894:
    // 0x2e2894: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e2894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2898:
    // 0x2e2898: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E2898u;
    {
        const bool branch_taken_0x2e2898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2898) {
            ctx->pc = 0x2E28E8u;
            goto label_2e28e8;
        }
    }
    ctx->pc = 0x2E28A0u;
label_2e28a0:
    // 0x2e28a0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2e28a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2e28a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e28a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e28a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e28a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e28ac: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x2e28acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x2e28b0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E28B0u;
    {
        const bool branch_taken_0x2e28b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E28B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E28B0u;
            // 0x2e28b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e28b0) {
            ctx->pc = 0x2E28C0u;
            goto label_2e28c0;
        }
    }
    ctx->pc = 0x2E28B8u;
    // 0x2e28b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E28B8u;
    {
        const bool branch_taken_0x2e28b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e28b8) {
            ctx->pc = 0x2E28E8u;
            goto label_2e28e8;
        }
    }
    ctx->pc = 0x2E28C0u;
label_2e28c0:
    // 0x2e28c0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2e28c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e28c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e28c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e28c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E28C8u;
    {
        const bool branch_taken_0x2e28c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E28CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E28C8u;
            // 0x2e28cc: 0x7c8300b0  sq          $v1, 0xB0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 176), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e28c8) {
            ctx->pc = 0x2E28E8u;
            goto label_2e28e8;
        }
    }
    ctx->pc = 0x2E28D0u;
label_2e28d0:
    // 0x2e28d0: 0x8c841184  lw          $a0, 0x1184($a0)
    ctx->pc = 0x2e28d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4484)));
    // 0x2e28d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E28D4u;
    {
        const bool branch_taken_0x2e28d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E28D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E28D4u;
            // 0x2e28d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e28d4) {
            ctx->pc = 0x2E28E8u;
            goto label_2e28e8;
        }
    }
    ctx->pc = 0x2E28DCu;
    // 0x2e28dc: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2e28dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e28e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e28e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e28e4: 0x7c8300b0  sq          $v1, 0xB0($a0)
    ctx->pc = 0x2e28e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), GPR_VEC(ctx, 3));
label_2e28e8:
    // 0x2e28e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E28E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E28F0u;
}
