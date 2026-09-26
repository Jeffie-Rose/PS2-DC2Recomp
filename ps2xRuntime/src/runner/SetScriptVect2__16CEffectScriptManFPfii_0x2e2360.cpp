#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetScriptVect2__16CEffectScriptManFPfii
// Address: 0x2e2360 - 0x2e23e0
void SetScriptVect2__16CEffectScriptManFPfii_0x2e2360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetScriptVect2__16CEffectScriptManFPfii_0x2e2360");
#endif

    ctx->pc = 0x2e2360u;

    // 0x2e2360: 0x4e00017  bltz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E2360u;
    {
        const bool branch_taken_0x2e2360 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x2e2360) {
            ctx->pc = 0x2E23C0u;
            goto label_2e23c0;
        }
    }
    ctx->pc = 0x2E2368u;
    // 0x2e2368: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2368u;
    {
        const bool branch_taken_0x2e2368 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2E236Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2368u;
            // 0x2e236c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2368) {
            ctx->pc = 0x2E2388u;
            goto label_2e2388;
        }
    }
    ctx->pc = 0x2E2370u;
    // 0x2e2370: 0x28c10080  slti        $at, $a2, 0x80
    ctx->pc = 0x2e2370u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2e2374: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2374u;
    {
        const bool branch_taken_0x2e2374 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2374u;
            // 0x2e2378: 0x28e20008  slti        $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2374) {
            ctx->pc = 0x2E2384u;
            goto label_2e2384;
        }
    }
    ctx->pc = 0x2E237Cu;
    // 0x2e237c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E237Cu;
    {
        const bool branch_taken_0x2e237c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E237Cu;
            // 0x2e2380: 0x61940  sll         $v1, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e237c) {
            ctx->pc = 0x2E2390u;
            goto label_2e2390;
        }
    }
    ctx->pc = 0x2E2384u;
label_2e2384:
    // 0x2e2384: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e2384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2388:
    // 0x2e2388: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E2388u;
    {
        const bool branch_taken_0x2e2388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2388) {
            ctx->pc = 0x2E23D8u;
            goto label_2e23d8;
        }
    }
    ctx->pc = 0x2E2390u;
label_2e2390:
    // 0x2e2390: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2e2390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2e2394: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2398: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e239c: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x2e239cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x2e23a0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E23A0u;
    {
        const bool branch_taken_0x2e23a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E23A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E23A0u;
            // 0x2e23a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e23a0) {
            ctx->pc = 0x2E23B0u;
            goto label_2e23b0;
        }
    }
    ctx->pc = 0x2E23A8u;
    // 0x2e23a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E23A8u;
    {
        const bool branch_taken_0x2e23a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e23a8) {
            ctx->pc = 0x2E23D8u;
            goto label_2e23d8;
        }
    }
    ctx->pc = 0x2E23B0u;
label_2e23b0:
    // 0x2e23b0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2e23b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e23b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e23b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e23b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E23B8u;
    {
        const bool branch_taken_0x2e23b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E23BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E23B8u;
            // 0x2e23bc: 0x7c830100  sq          $v1, 0x100($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 256), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e23b8) {
            ctx->pc = 0x2E23D8u;
            goto label_2e23d8;
        }
    }
    ctx->pc = 0x2E23C0u;
label_2e23c0:
    // 0x2e23c0: 0x8c841184  lw          $a0, 0x1184($a0)
    ctx->pc = 0x2e23c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4484)));
    // 0x2e23c4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E23C4u;
    {
        const bool branch_taken_0x2e23c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E23C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E23C4u;
            // 0x2e23c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e23c4) {
            ctx->pc = 0x2E23D8u;
            goto label_2e23d8;
        }
    }
    ctx->pc = 0x2E23CCu;
    // 0x2e23cc: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2e23ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e23d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e23d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e23d4: 0x7c830100  sq          $v1, 0x100($a0)
    ctx->pc = 0x2e23d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 256), GPR_VEC(ctx, 3));
label_2e23d8:
    // 0x2e23d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E23D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E23E0u;
}
