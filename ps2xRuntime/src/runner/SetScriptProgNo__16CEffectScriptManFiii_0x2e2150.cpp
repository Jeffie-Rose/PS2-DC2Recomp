#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetScriptProgNo__16CEffectScriptManFiii
// Address: 0x2e2150 - 0x2e21b0
void SetScriptProgNo__16CEffectScriptManFiii_0x2e2150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetScriptProgNo__16CEffectScriptManFiii_0x2e2150");
#endif

    ctx->pc = 0x2e2150u;

    // 0x2e2150: 0x4c00009  bltz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E2150u;
    {
        const bool branch_taken_0x2e2150 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2E2154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2150u;
            // 0x2e2154: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2150) {
            ctx->pc = 0x2E2178u;
            goto label_2e2178;
        }
    }
    ctx->pc = 0x2E2158u;
    // 0x2e2158: 0x28c10080  slti        $at, $a2, 0x80
    ctx->pc = 0x2e2158u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2e215c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E215Cu;
    {
        const bool branch_taken_0x2e215c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e215c) {
            ctx->pc = 0x2E2174u;
            goto label_2e2174;
        }
    }
    ctx->pc = 0x2E2164u;
    // 0x2e2164: 0x4e00003  bltz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2164u;
    {
        const bool branch_taken_0x2e2164 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2E2168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2164u;
            // 0x2e2168: 0x28e20008  slti        $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2164) {
            ctx->pc = 0x2E2174u;
            goto label_2e2174;
        }
    }
    ctx->pc = 0x2E216Cu;
    // 0x2e216c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E216Cu;
    {
        const bool branch_taken_0x2e216c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E216Cu;
            // 0x2e2170: 0x61940  sll         $v1, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e216c) {
            ctx->pc = 0x2E2180u;
            goto label_2e2180;
        }
    }
    ctx->pc = 0x2E2174u;
label_2e2174:
    // 0x2e2174: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e2174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2178:
    // 0x2e2178: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E2178u;
    {
        const bool branch_taken_0x2e2178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2178) {
            ctx->pc = 0x2E21A8u;
            goto label_2e21a8;
        }
    }
    ctx->pc = 0x2E2180u;
label_2e2180:
    // 0x2e2180: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2e2180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2e2184: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2188: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e218c: 0x8c420184  lw          $v0, 0x184($v0)
    ctx->pc = 0x2e218cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x2e2190: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2190u;
    {
        const bool branch_taken_0x2e2190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2190) {
            ctx->pc = 0x2E21A0u;
            goto label_2e21a0;
        }
    }
    ctx->pc = 0x2E2198u;
    // 0x2e2198: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2198u;
    {
        const bool branch_taken_0x2e2198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E219Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2198u;
            // 0x2e219c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2198) {
            ctx->pc = 0x2E21A8u;
            goto label_2e21a8;
        }
    }
    ctx->pc = 0x2E21A0u;
label_2e21a0:
    // 0x2e21a0: 0xac4500a4  sw          $a1, 0xA4($v0)
    ctx->pc = 0x2e21a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 5));
    // 0x2e21a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e21a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e21a8:
    // 0x2e21a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E21A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E21B0u;
}
