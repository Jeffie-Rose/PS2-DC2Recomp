#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Get__12CLaserGunManFv
// Address: 0x1b7d40 - 0x1b7d8c
void Get__12CLaserGunManFv_0x1b7d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get__12CLaserGunManFv_0x1b7d40");
#endif

    switch (ctx->pc) {
        case 0x1b7d48u: goto label_1b7d48;
        default: break;
    }

    ctx->pc = 0x1b7d40u;

    // 0x1b7d40: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b7d40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7d44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b7d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7d48:
    // 0x1b7d48: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1b7d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1b7d4c: 0x8c420120  lw          $v0, 0x120($v0)
    ctx->pc = 0x1b7d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x1b7d50: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7D50u;
    {
        const bool branch_taken_0x1b7d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7D50u;
            // 0x1b7d54: 0x310c0  sll         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d50) {
            ctx->pc = 0x1B7D70u;
            goto label_1b7d70;
        }
    }
    ctx->pc = 0x1B7D58u;
    // 0x1b7d58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7d5c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1b7d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1b7d60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7d64: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b7d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b7d68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7D68u;
    {
        const bool branch_taken_0x1b7d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7D68u;
            // 0x1b7d6c: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d68) {
            ctx->pc = 0x1B7D84u;
            goto label_1b7d84;
        }
    }
    ctx->pc = 0x1B7D70u;
label_1b7d70:
    // 0x1b7d70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b7d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b7d74: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x1b7d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b7d78: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1B7D78u;
    {
        const bool branch_taken_0x1b7d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7D78u;
            // 0x1b7d7c: 0x24a50130  addiu       $a1, $a1, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d78) {
            ctx->pc = 0x1B7D48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b7d48;
        }
    }
    ctx->pc = 0x1B7D80u;
    // 0x1b7d80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7d80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7d84:
    // 0x1b7d84: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7D8Cu;
}
