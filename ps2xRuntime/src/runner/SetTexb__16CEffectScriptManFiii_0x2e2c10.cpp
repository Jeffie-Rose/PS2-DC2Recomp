#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetTexb__16CEffectScriptManFiii
// Address: 0x2e2c10 - 0x2e2c90
void SetTexb__16CEffectScriptManFiii_0x2e2c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTexb__16CEffectScriptManFiii_0x2e2c10");
#endif

    ctx->pc = 0x2e2c10u;

    // 0x2e2c10: 0x4e00016  bltz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E2C10u;
    {
        const bool branch_taken_0x2e2c10 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x2e2c10) {
            ctx->pc = 0x2E2C6Cu;
            goto label_2e2c6c;
        }
    }
    ctx->pc = 0x2E2C18u;
    // 0x2e2c18: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2C18u;
    {
        const bool branch_taken_0x2e2c18 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2E2C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2C18u;
            // 0x2e2c1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c18) {
            ctx->pc = 0x2E2C38u;
            goto label_2e2c38;
        }
    }
    ctx->pc = 0x2E2C20u;
    // 0x2e2c20: 0x28c10080  slti        $at, $a2, 0x80
    ctx->pc = 0x2e2c20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2e2c24: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2C24u;
    {
        const bool branch_taken_0x2e2c24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2C24u;
            // 0x2e2c28: 0x28e20008  slti        $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c24) {
            ctx->pc = 0x2E2C34u;
            goto label_2e2c34;
        }
    }
    ctx->pc = 0x2E2C2Cu;
    // 0x2e2c2c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2C2Cu;
    {
        const bool branch_taken_0x2e2c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2C2Cu;
            // 0x2e2c30: 0x61940  sll         $v1, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c2c) {
            ctx->pc = 0x2E2C40u;
            goto label_2e2c40;
        }
    }
    ctx->pc = 0x2E2C34u;
label_2e2c34:
    // 0x2e2c34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e2c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2c38:
    // 0x2e2c38: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E2C38u;
    {
        const bool branch_taken_0x2e2c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2c38) {
            ctx->pc = 0x2E2C88u;
            goto label_2e2c88;
        }
    }
    ctx->pc = 0x2E2C40u;
label_2e2c40:
    // 0x2e2c40: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2e2c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2e2c44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2c48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e2c4c: 0x8c420184  lw          $v0, 0x184($v0)
    ctx->pc = 0x2e2c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x2e2c50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2C50u;
    {
        const bool branch_taken_0x2e2c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2c50) {
            ctx->pc = 0x2E2C60u;
            goto label_2e2c60;
        }
    }
    ctx->pc = 0x2E2C58u;
    // 0x2e2c58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E2C58u;
    {
        const bool branch_taken_0x2e2c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2C58u;
            // 0x2e2c5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c58) {
            ctx->pc = 0x2E2C88u;
            goto label_2e2c88;
        }
    }
    ctx->pc = 0x2E2C60u;
label_2e2c60:
    // 0x2e2c60: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x2e2c60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
    // 0x2e2c64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E2C64u;
    {
        const bool branch_taken_0x2e2c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2C64u;
            // 0x2e2c68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c64) {
            ctx->pc = 0x2E2C88u;
            goto label_2e2c88;
        }
    }
    ctx->pc = 0x2E2C6Cu;
label_2e2c6c:
    // 0x2e2c6c: 0x8c821184  lw          $v0, 0x1184($a0)
    ctx->pc = 0x2e2c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4484)));
    // 0x2e2c70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2C70u;
    {
        const bool branch_taken_0x2e2c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2c70) {
            ctx->pc = 0x2E2C84u;
            goto label_2e2c84;
        }
    }
    ctx->pc = 0x2E2C78u;
    // 0x2e2c78: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x2e2c78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
    // 0x2e2c7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E2C7Cu;
    {
        const bool branch_taken_0x2e2c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2C7Cu;
            // 0x2e2c80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c7c) {
            ctx->pc = 0x2E2C88u;
            goto label_2e2c88;
        }
    }
    ctx->pc = 0x2E2C84u;
label_2e2c84:
    // 0x2e2c84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e2c84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2c88:
    // 0x2e2c88: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E2C90u;
}
