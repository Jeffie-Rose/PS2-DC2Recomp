#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SelectedNetaPhotoAlready__11CMenuInventFi
// Address: 0x201e00 - 0x201e48
void SelectedNetaPhotoAlready__11CMenuInventFi_0x201e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SelectedNetaPhotoAlready__11CMenuInventFi_0x201e00");
#endif

    switch (ctx->pc) {
        case 0x201e08u: goto label_201e08;
        default: break;
    }

    ctx->pc = 0x201e00u;

    // 0x201e00: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x201e00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x201e04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201e08:
    // 0x201e08: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x201e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x201e0c: 0x8042061c  lb          $v0, 0x61C($v0)
    ctx->pc = 0x201e0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1564)));
    // 0x201e10: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201E10u;
    {
        const bool branch_taken_0x201e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201E10u;
            // 0x201e14: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e10) {
            ctx->pc = 0x201E2Cu;
            goto label_201e2c;
        }
    }
    ctx->pc = 0x201E18u;
    // 0x201e18: 0x8c420610  lw          $v0, 0x610($v0)
    ctx->pc = 0x201e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1552)));
    // 0x201e1c: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x201E1Cu;
    {
        const bool branch_taken_0x201e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x201E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201E1Cu;
            // 0x201e20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e1c) {
            ctx->pc = 0x201E2Cu;
            goto label_201e2c;
        }
    }
    ctx->pc = 0x201E24u;
    // 0x201e24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x201E24u;
    {
        const bool branch_taken_0x201e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201e24) {
            ctx->pc = 0x201E40u;
            goto label_201e40;
        }
    }
    ctx->pc = 0x201E2Cu;
label_201e2c:
    // 0x201e2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x201e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x201e30: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x201e30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x201e34: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x201E34u;
    {
        const bool branch_taken_0x201e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201E34u;
            // 0x201e38: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e34) {
            ctx->pc = 0x201E08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_201e08;
        }
    }
    ctx->pc = 0x201E3Cu;
    // 0x201e3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x201e3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201e40:
    // 0x201e40: 0x3e00008  jr          $ra
    ctx->pc = 0x201E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201E48u;
}
