#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetColPrim__16CEffectScriptManFP8CColPrimii
// Address: 0x2e2690 - 0x2e2710
void SetColPrim__16CEffectScriptManFP8CColPrimii_0x2e2690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetColPrim__16CEffectScriptManFP8CColPrimii_0x2e2690");
#endif

    ctx->pc = 0x2e2690u;

    // 0x2e2690: 0x4e00016  bltz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E2690u;
    {
        const bool branch_taken_0x2e2690 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x2e2690) {
            ctx->pc = 0x2E26ECu;
            goto label_2e26ec;
        }
    }
    ctx->pc = 0x2E2698u;
    // 0x2e2698: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2698u;
    {
        const bool branch_taken_0x2e2698 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2E269Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2698u;
            // 0x2e269c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2698) {
            ctx->pc = 0x2E26B8u;
            goto label_2e26b8;
        }
    }
    ctx->pc = 0x2E26A0u;
    // 0x2e26a0: 0x28c10080  slti        $at, $a2, 0x80
    ctx->pc = 0x2e26a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2e26a4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E26A4u;
    {
        const bool branch_taken_0x2e26a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E26A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E26A4u;
            // 0x2e26a8: 0x28e20008  slti        $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26a4) {
            ctx->pc = 0x2E26B4u;
            goto label_2e26b4;
        }
    }
    ctx->pc = 0x2E26ACu;
    // 0x2e26ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E26ACu;
    {
        const bool branch_taken_0x2e26ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E26B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E26ACu;
            // 0x2e26b0: 0x61940  sll         $v1, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26ac) {
            ctx->pc = 0x2E26C0u;
            goto label_2e26c0;
        }
    }
    ctx->pc = 0x2E26B4u;
label_2e26b4:
    // 0x2e26b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e26b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e26b8:
    // 0x2e26b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E26B8u;
    {
        const bool branch_taken_0x2e26b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e26b8) {
            ctx->pc = 0x2E2708u;
            goto label_2e2708;
        }
    }
    ctx->pc = 0x2E26C0u;
label_2e26c0:
    // 0x2e26c0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2e26c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2e26c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e26c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e26c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e26c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e26cc: 0x8c420184  lw          $v0, 0x184($v0)
    ctx->pc = 0x2e26ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x2e26d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E26D0u;
    {
        const bool branch_taken_0x2e26d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e26d0) {
            ctx->pc = 0x2E26E0u;
            goto label_2e26e0;
        }
    }
    ctx->pc = 0x2E26D8u;
    // 0x2e26d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E26D8u;
    {
        const bool branch_taken_0x2e26d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E26DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E26D8u;
            // 0x2e26dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26d8) {
            ctx->pc = 0x2E2708u;
            goto label_2e2708;
        }
    }
    ctx->pc = 0x2E26E0u;
label_2e26e0:
    // 0x2e26e0: 0xac450134  sw          $a1, 0x134($v0)
    ctx->pc = 0x2e26e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 5));
    // 0x2e26e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E26E4u;
    {
        const bool branch_taken_0x2e26e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E26E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E26E4u;
            // 0x2e26e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26e4) {
            ctx->pc = 0x2E2708u;
            goto label_2e2708;
        }
    }
    ctx->pc = 0x2E26ECu;
label_2e26ec:
    // 0x2e26ec: 0x8c821184  lw          $v0, 0x1184($a0)
    ctx->pc = 0x2e26ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4484)));
    // 0x2e26f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E26F0u;
    {
        const bool branch_taken_0x2e26f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e26f0) {
            ctx->pc = 0x2E2704u;
            goto label_2e2704;
        }
    }
    ctx->pc = 0x2E26F8u;
    // 0x2e26f8: 0xac450134  sw          $a1, 0x134($v0)
    ctx->pc = 0x2e26f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 5));
    // 0x2e26fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E26FCu;
    {
        const bool branch_taken_0x2e26fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E26FCu;
            // 0x2e2700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26fc) {
            ctx->pc = 0x2E2708u;
            goto label_2e2708;
        }
    }
    ctx->pc = 0x2E2704u;
label_2e2704:
    // 0x2e2704: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e2704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2708:
    // 0x2e2708: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E2710u;
}
