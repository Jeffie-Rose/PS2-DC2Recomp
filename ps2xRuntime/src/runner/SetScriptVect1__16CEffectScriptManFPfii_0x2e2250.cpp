#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetScriptVect1__16CEffectScriptManFPfii
// Address: 0x2e2250 - 0x2e22d0
void SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetScriptVect1__16CEffectScriptManFPfii_0x2e2250");
#endif

    ctx->pc = 0x2e2250u;

    // 0x2e2250: 0x4e00017  bltz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E2250u;
    {
        const bool branch_taken_0x2e2250 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x2e2250) {
            ctx->pc = 0x2E22B0u;
            goto label_2e22b0;
        }
    }
    ctx->pc = 0x2E2258u;
    // 0x2e2258: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2258u;
    {
        const bool branch_taken_0x2e2258 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2E225Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2258u;
            // 0x2e225c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2258) {
            ctx->pc = 0x2E2278u;
            goto label_2e2278;
        }
    }
    ctx->pc = 0x2E2260u;
    // 0x2e2260: 0x28c10080  slti        $at, $a2, 0x80
    ctx->pc = 0x2e2260u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2e2264: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2264u;
    {
        const bool branch_taken_0x2e2264 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2264u;
            // 0x2e2268: 0x28e20008  slti        $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2264) {
            ctx->pc = 0x2E2274u;
            goto label_2e2274;
        }
    }
    ctx->pc = 0x2E226Cu;
    // 0x2e226c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E226Cu;
    {
        const bool branch_taken_0x2e226c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E226Cu;
            // 0x2e2270: 0x61940  sll         $v1, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e226c) {
            ctx->pc = 0x2E2280u;
            goto label_2e2280;
        }
    }
    ctx->pc = 0x2E2274u;
label_2e2274:
    // 0x2e2274: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e2274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2278:
    // 0x2e2278: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E2278u;
    {
        const bool branch_taken_0x2e2278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2278) {
            ctx->pc = 0x2E22C8u;
            goto label_2e22c8;
        }
    }
    ctx->pc = 0x2E2280u;
label_2e2280:
    // 0x2e2280: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2e2280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2e2284: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2288: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e228c: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x2e228cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x2e2290: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2290u;
    {
        const bool branch_taken_0x2e2290 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2290u;
            // 0x2e2294: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2290) {
            ctx->pc = 0x2E22A0u;
            goto label_2e22a0;
        }
    }
    ctx->pc = 0x2E2298u;
    // 0x2e2298: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E2298u;
    {
        const bool branch_taken_0x2e2298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2298) {
            ctx->pc = 0x2E22C8u;
            goto label_2e22c8;
        }
    }
    ctx->pc = 0x2E22A0u;
label_2e22a0:
    // 0x2e22a0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2e22a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e22a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e22a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e22a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E22A8u;
    {
        const bool branch_taken_0x2e22a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E22ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E22A8u;
            // 0x2e22ac: 0x7c8300f0  sq          $v1, 0xF0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 240), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e22a8) {
            ctx->pc = 0x2E22C8u;
            goto label_2e22c8;
        }
    }
    ctx->pc = 0x2E22B0u;
label_2e22b0:
    // 0x2e22b0: 0x8c841184  lw          $a0, 0x1184($a0)
    ctx->pc = 0x2e22b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4484)));
    // 0x2e22b4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E22B4u;
    {
        const bool branch_taken_0x2e22b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E22B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E22B4u;
            // 0x2e22b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e22b4) {
            ctx->pc = 0x2E22C8u;
            goto label_2e22c8;
        }
    }
    ctx->pc = 0x2E22BCu;
    // 0x2e22bc: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2e22bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e22c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e22c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e22c4: 0x7c8300f0  sq          $v1, 0xF0($a0)
    ctx->pc = 0x2e22c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 240), GPR_VEC(ctx, 3));
label_2e22c8:
    // 0x2e22c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E22C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E22D0u;
}
