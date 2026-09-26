#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SelectedNetaMemoListAlready__11CMenuInventFi
// Address: 0x201e50 - 0x201ebc
void SelectedNetaMemoListAlready__11CMenuInventFi_0x201e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SelectedNetaMemoListAlready__11CMenuInventFi_0x201e50");
#endif

    switch (ctx->pc) {
        case 0x201e7cu: goto label_201e7c;
        default: break;
    }

    ctx->pc = 0x201e50u;

    // 0x201e50: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x201e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x201e54: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x201e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x201e58: 0x2442bfd0  addiu       $v0, $v0, -0x4030
    ctx->pc = 0x201e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950864));
    // 0x201e5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201e60: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x201e60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201e64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201E64u;
    {
        const bool branch_taken_0x201e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201E64u;
            // 0x201e68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e64) {
            ctx->pc = 0x201E74u;
            goto label_201e74;
        }
    }
    ctx->pc = 0x201E6Cu;
    // 0x201e6c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x201E6Cu;
    {
        const bool branch_taken_0x201e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201E6Cu;
            // 0x201e70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e6c) {
            ctx->pc = 0x201EB4u;
            goto label_201eb4;
        }
    }
    ctx->pc = 0x201E74u;
label_201e74:
    // 0x201e74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x201e74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201e7c:
    // 0x201e7c: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x201e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x201e80: 0x8063061c  lb          $v1, 0x61C($v1)
    ctx->pc = 0x201e80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1564)));
    // 0x201e84: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201E84u;
    {
        const bool branch_taken_0x201e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x201E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201E84u;
            // 0x201e88: 0x871821  addu        $v1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e84) {
            ctx->pc = 0x201EA0u;
            goto label_201ea0;
        }
    }
    ctx->pc = 0x201E8Cu;
    // 0x201e8c: 0x8c630610  lw          $v1, 0x610($v1)
    ctx->pc = 0x201e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1552)));
    // 0x201e90: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x201E90u;
    {
        const bool branch_taken_0x201e90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x201e90) {
            ctx->pc = 0x201EA0u;
            goto label_201ea0;
        }
    }
    ctx->pc = 0x201E98u;
    // 0x201e98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x201E98u;
    {
        const bool branch_taken_0x201e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201e98) {
            ctx->pc = 0x201EB4u;
            goto label_201eb4;
        }
    }
    ctx->pc = 0x201EA0u;
label_201ea0:
    // 0x201ea0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x201ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x201ea4: 0x28c30003  slti        $v1, $a2, 0x3
    ctx->pc = 0x201ea4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x201ea8: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x201EA8u;
    {
        const bool branch_taken_0x201ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x201EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201EA8u;
            // 0x201eac: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ea8) {
            ctx->pc = 0x201E7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_201e7c;
        }
    }
    ctx->pc = 0x201EB0u;
    // 0x201eb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x201eb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201eb4:
    // 0x201eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x201EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201EBCu;
}
