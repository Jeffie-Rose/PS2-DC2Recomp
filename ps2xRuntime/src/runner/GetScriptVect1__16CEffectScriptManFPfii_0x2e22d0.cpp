#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetScriptVect1__16CEffectScriptManFPfii
// Address: 0x2e22d0 - 0x2e2358
void GetScriptVect1__16CEffectScriptManFPfii_0x2e22d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetScriptVect1__16CEffectScriptManFPfii_0x2e22d0");
#endif

    ctx->pc = 0x2e22d0u;

    // 0x2e22d0: 0x4e00017  bltz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E22D0u;
    {
        const bool branch_taken_0x2e22d0 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x2e22d0) {
            ctx->pc = 0x2E2330u;
            goto label_2e2330;
        }
    }
    ctx->pc = 0x2E22D8u;
    // 0x2e22d8: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E22D8u;
    {
        const bool branch_taken_0x2e22d8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2E22DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E22D8u;
            // 0x2e22dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e22d8) {
            ctx->pc = 0x2E22F8u;
            goto label_2e22f8;
        }
    }
    ctx->pc = 0x2E22E0u;
    // 0x2e22e0: 0x28c10080  slti        $at, $a2, 0x80
    ctx->pc = 0x2e22e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2e22e4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E22E4u;
    {
        const bool branch_taken_0x2e22e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E22E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E22E4u;
            // 0x2e22e8: 0x28e20008  slti        $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e22e4) {
            ctx->pc = 0x2E22F4u;
            goto label_2e22f4;
        }
    }
    ctx->pc = 0x2E22ECu;
    // 0x2e22ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E22ECu;
    {
        const bool branch_taken_0x2e22ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E22F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E22ECu;
            // 0x2e22f0: 0x61940  sll         $v1, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e22ec) {
            ctx->pc = 0x2E2300u;
            goto label_2e2300;
        }
    }
    ctx->pc = 0x2E22F4u;
label_2e22f4:
    // 0x2e22f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e22f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e22f8:
    // 0x2e22f8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E22F8u;
    {
        const bool branch_taken_0x2e22f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e22f8) {
            ctx->pc = 0x2E2350u;
            goto label_2e2350;
        }
    }
    ctx->pc = 0x2E2300u;
label_2e2300:
    // 0x2e2300: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2e2300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2e2304: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e230c: 0x8c420184  lw          $v0, 0x184($v0)
    ctx->pc = 0x2e230cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x2e2310: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2310u;
    {
        const bool branch_taken_0x2e2310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2310) {
            ctx->pc = 0x2E2320u;
            goto label_2e2320;
        }
    }
    ctx->pc = 0x2E2318u;
    // 0x2e2318: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E2318u;
    {
        const bool branch_taken_0x2e2318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E231Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2318u;
            // 0x2e231c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2318) {
            ctx->pc = 0x2E2350u;
            goto label_2e2350;
        }
    }
    ctx->pc = 0x2E2320u;
label_2e2320:
    // 0x2e2320: 0x784300f0  lq          $v1, 0xF0($v0)
    ctx->pc = 0x2e2320u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2e2324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e2324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2328: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E2328u;
    {
        const bool branch_taken_0x2e2328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E232Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2328u;
            // 0x2e232c: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2328) {
            ctx->pc = 0x2E2350u;
            goto label_2e2350;
        }
    }
    ctx->pc = 0x2E2330u;
label_2e2330:
    // 0x2e2330: 0x8c821184  lw          $v0, 0x1184($a0)
    ctx->pc = 0x2e2330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4484)));
    // 0x2e2334: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2334u;
    {
        const bool branch_taken_0x2e2334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2334) {
            ctx->pc = 0x2E234Cu;
            goto label_2e234c;
        }
    }
    ctx->pc = 0x2E233Cu;
    // 0x2e233c: 0x784300f0  lq          $v1, 0xF0($v0)
    ctx->pc = 0x2e233cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2e2340: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e2340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2344: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E2344u;
    {
        const bool branch_taken_0x2e2344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2344u;
            // 0x2e2348: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2344) {
            ctx->pc = 0x2E2350u;
            goto label_2e2350;
        }
    }
    ctx->pc = 0x2E234Cu;
label_2e234c:
    // 0x2e234c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e234cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2350:
    // 0x2e2350: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E2358u;
}
