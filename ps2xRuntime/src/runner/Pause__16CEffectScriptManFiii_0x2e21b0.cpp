#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Pause__16CEffectScriptManFiii
// Address: 0x2e21b0 - 0x2e2210
void Pause__16CEffectScriptManFiii_0x2e21b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pause__16CEffectScriptManFiii_0x2e21b0");
#endif

    ctx->pc = 0x2e21b0u;

    // 0x2e21b0: 0x4c00009  bltz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E21B0u;
    {
        const bool branch_taken_0x2e21b0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2E21B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E21B0u;
            // 0x2e21b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e21b0) {
            ctx->pc = 0x2E21D8u;
            goto label_2e21d8;
        }
    }
    ctx->pc = 0x2E21B8u;
    // 0x2e21b8: 0x28c10080  slti        $at, $a2, 0x80
    ctx->pc = 0x2e21b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2e21bc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E21BCu;
    {
        const bool branch_taken_0x2e21bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e21bc) {
            ctx->pc = 0x2E21D4u;
            goto label_2e21d4;
        }
    }
    ctx->pc = 0x2E21C4u;
    // 0x2e21c4: 0x4e00003  bltz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E21C4u;
    {
        const bool branch_taken_0x2e21c4 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2E21C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E21C4u;
            // 0x2e21c8: 0x28e20008  slti        $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e21c4) {
            ctx->pc = 0x2E21D4u;
            goto label_2e21d4;
        }
    }
    ctx->pc = 0x2E21CCu;
    // 0x2e21cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E21CCu;
    {
        const bool branch_taken_0x2e21cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E21D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E21CCu;
            // 0x2e21d0: 0x61940  sll         $v1, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e21cc) {
            ctx->pc = 0x2E21E0u;
            goto label_2e21e0;
        }
    }
    ctx->pc = 0x2E21D4u;
label_2e21d4:
    // 0x2e21d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e21d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e21d8:
    // 0x2e21d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E21D8u;
    {
        const bool branch_taken_0x2e21d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e21d8) {
            ctx->pc = 0x2E2208u;
            goto label_2e2208;
        }
    }
    ctx->pc = 0x2E21E0u;
label_2e21e0:
    // 0x2e21e0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2e21e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2e21e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e21e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e21e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e21e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e21ec: 0x8c420184  lw          $v0, 0x184($v0)
    ctx->pc = 0x2e21ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x2e21f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E21F0u;
    {
        const bool branch_taken_0x2e21f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e21f0) {
            ctx->pc = 0x2E2200u;
            goto label_2e2200;
        }
    }
    ctx->pc = 0x2E21F8u;
    // 0x2e21f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E21F8u;
    {
        const bool branch_taken_0x2e21f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E21FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E21F8u;
            // 0x2e21fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e21f8) {
            ctx->pc = 0x2E2208u;
            goto label_2e2208;
        }
    }
    ctx->pc = 0x2E2200u;
label_2e2200:
    // 0x2e2200: 0xac45013c  sw          $a1, 0x13C($v0)
    ctx->pc = 0x2e2200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 5));
    // 0x2e2204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e2204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e2208:
    // 0x2e2208: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E2210u;
}
