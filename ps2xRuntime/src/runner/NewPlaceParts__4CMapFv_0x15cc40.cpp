#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NewPlaceParts__4CMapFv
// Address: 0x15cc40 - 0x15cca4
void NewPlaceParts__4CMapFv_0x15cc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NewPlaceParts__4CMapFv_0x15cc40");
#endif

    switch (ctx->pc) {
        case 0x15cc50u: goto label_15cc50;
        default: break;
    }

    ctx->pc = 0x15cc40u;

    // 0x15cc40: 0x8c830328  lw          $v1, 0x328($a0)
    ctx->pc = 0x15cc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 808)));
    // 0x15cc44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15cc44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cc48: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15CC48u;
    {
        const bool branch_taken_0x15cc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CC48u;
            // 0x15cc4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc48) {
            ctx->pc = 0x15CC8Cu;
            goto label_15cc8c;
        }
    }
    ctx->pc = 0x15CC50u;
label_15cc50:
    // 0x15cc50: 0x8c87032c  lw          $a3, 0x32C($a0)
    ctx->pc = 0x15cc50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 812)));
    // 0x15cc54: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x15cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15cc58: 0x80420070  lb          $v0, 0x70($v0)
    ctx->pc = 0x15cc58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x15cc5c: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x15cc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x15cc60: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x15cc60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x15cc64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15CC64u;
    {
        const bool branch_taken_0x15cc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CC64u;
            // 0x15cc68: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc64) {
            ctx->pc = 0x15CC84u;
            goto label_15cc84;
        }
    }
    ctx->pc = 0x15CC6Cu;
    // 0x15cc6c: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x15cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15cc70: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x15cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x15cc74: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15cc78: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15cc7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15CC7Cu;
    {
        const bool branch_taken_0x15cc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CC7Cu;
            // 0x15cc80: 0xe21021  addu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc7c) {
            ctx->pc = 0x15CC9Cu;
            goto label_15cc9c;
        }
    }
    ctx->pc = 0x15CC84u;
label_15cc84:
    // 0x15cc84: 0x24c60310  addiu       $a2, $a2, 0x310
    ctx->pc = 0x15cc84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 784));
    // 0x15cc88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15cc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15cc8c:
    // 0x15cc8c: 0x0  nop
    ctx->pc = 0x15cc8cu;
    // NOP
    // 0x15cc90: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x15cc90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15cc94: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x15CC94u;
    {
        const bool branch_taken_0x15cc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CC94u;
            // 0x15cc98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc94) {
            ctx->pc = 0x15CC50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15cc50;
        }
    }
    ctx->pc = 0x15CC9Cu;
label_15cc9c:
    // 0x15cc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x15CC9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15CCA4u;
}
