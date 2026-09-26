#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetScriptVect2__16CEffectScriptManFPfii
// Address: 0x2e23e0 - 0x2e2468
void GetScriptVect2__16CEffectScriptManFPfii_0x2e23e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetScriptVect2__16CEffectScriptManFPfii_0x2e23e0");
#endif

    ctx->pc = 0x2e23e0u;

    // 0x2e23e0: 0x4e00017  bltz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E23E0u;
    {
        const bool branch_taken_0x2e23e0 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x2e23e0) {
            ctx->pc = 0x2E2440u;
            goto label_2e2440;
        }
    }
    ctx->pc = 0x2E23E8u;
    // 0x2e23e8: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E23E8u;
    {
        const bool branch_taken_0x2e23e8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2E23ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E23E8u;
            // 0x2e23ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e23e8) {
            ctx->pc = 0x2E2408u;
            goto label_2e2408;
        }
    }
    ctx->pc = 0x2E23F0u;
    // 0x2e23f0: 0x28c10080  slti        $at, $a2, 0x80
    ctx->pc = 0x2e23f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2e23f4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E23F4u;
    {
        const bool branch_taken_0x2e23f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E23F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E23F4u;
            // 0x2e23f8: 0x28e20008  slti        $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e23f4) {
            ctx->pc = 0x2E2404u;
            goto label_2e2404;
        }
    }
    ctx->pc = 0x2E23FCu;
    // 0x2e23fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E23FCu;
    {
        const bool branch_taken_0x2e23fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E23FCu;
            // 0x2e2400: 0x61940  sll         $v1, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e23fc) {
            ctx->pc = 0x2E2410u;
            goto label_2e2410;
        }
    }
    ctx->pc = 0x2E2404u;
label_2e2404:
    // 0x2e2404: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e2404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2408:
    // 0x2e2408: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E2408u;
    {
        const bool branch_taken_0x2e2408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2408) {
            ctx->pc = 0x2E2460u;
            goto label_2e2460;
        }
    }
    ctx->pc = 0x2E2410u;
label_2e2410:
    // 0x2e2410: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2e2410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2e2414: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2418: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e241c: 0x8c420184  lw          $v0, 0x184($v0)
    ctx->pc = 0x2e241cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x2e2420: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2420u;
    {
        const bool branch_taken_0x2e2420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2420) {
            ctx->pc = 0x2E2430u;
            goto label_2e2430;
        }
    }
    ctx->pc = 0x2E2428u;
    // 0x2e2428: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E2428u;
    {
        const bool branch_taken_0x2e2428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E242Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2428u;
            // 0x2e242c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2428) {
            ctx->pc = 0x2E2460u;
            goto label_2e2460;
        }
    }
    ctx->pc = 0x2E2430u;
label_2e2430:
    // 0x2e2430: 0x78430100  lq          $v1, 0x100($v0)
    ctx->pc = 0x2e2430u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x2e2434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e2434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2438: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E2438u;
    {
        const bool branch_taken_0x2e2438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E243Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2438u;
            // 0x2e243c: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2438) {
            ctx->pc = 0x2E2460u;
            goto label_2e2460;
        }
    }
    ctx->pc = 0x2E2440u;
label_2e2440:
    // 0x2e2440: 0x8c821184  lw          $v0, 0x1184($a0)
    ctx->pc = 0x2e2440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4484)));
    // 0x2e2444: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2444u;
    {
        const bool branch_taken_0x2e2444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2444) {
            ctx->pc = 0x2E245Cu;
            goto label_2e245c;
        }
    }
    ctx->pc = 0x2E244Cu;
    // 0x2e244c: 0x78430100  lq          $v1, 0x100($v0)
    ctx->pc = 0x2e244cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x2e2450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e2450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2454: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E2454u;
    {
        const bool branch_taken_0x2e2454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2454u;
            // 0x2e2458: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2454) {
            ctx->pc = 0x2E2460u;
            goto label_2e2460;
        }
    }
    ctx->pc = 0x2E245Cu;
label_2e245c:
    // 0x2e245c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e245cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2460:
    // 0x2e2460: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E2468u;
}
