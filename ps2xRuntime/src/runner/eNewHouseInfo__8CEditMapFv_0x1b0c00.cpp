#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: eNewHouseInfo__8CEditMapFv
// Address: 0x1b0c00 - 0x1b0c40
void eNewHouseInfo__8CEditMapFv_0x1b0c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eNewHouseInfo__8CEditMapFv_0x1b0c00");
#endif

    switch (ctx->pc) {
        case 0x1b0c08u: goto label_1b0c08;
        default: break;
    }

    ctx->pc = 0x1b0c00u;

    // 0x1b0c00: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b0c00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0c08:
    // 0x1b0c08: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1b0c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1b0c0c: 0x8c420d48  lw          $v0, 0xD48($v0)
    ctx->pc = 0x1b0c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3400)));
    // 0x1b0c10: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0C10u;
    {
        const bool branch_taken_0x1b0c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0C10u;
            // 0x1b0c14: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c10) {
            ctx->pc = 0x1B0C24u;
            goto label_1b0c24;
        }
    }
    ctx->pc = 0x1B0C18u;
    // 0x1b0c18: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b0c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b0c1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0C1Cu;
    {
        const bool branch_taken_0x1b0c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0C1Cu;
            // 0x1b0c20: 0x24420d48  addiu       $v0, $v0, 0xD48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c1c) {
            ctx->pc = 0x1B0C38u;
            goto label_1b0c38;
        }
    }
    ctx->pc = 0x1B0C24u;
label_1b0c24:
    // 0x1b0c24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b0c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b0c28: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x1b0c28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1b0c2c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B0C2Cu;
    {
        const bool branch_taken_0x1b0c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0C2Cu;
            // 0x1b0c30: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c2c) {
            ctx->pc = 0x1B0C08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b0c08;
        }
    }
    ctx->pc = 0x1B0C34u;
    // 0x1b0c34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b0c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0c38:
    // 0x1b0c38: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0C40u;
}
