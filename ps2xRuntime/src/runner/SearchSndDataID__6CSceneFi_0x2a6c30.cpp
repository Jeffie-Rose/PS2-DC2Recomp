#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchSndDataID__6CSceneFi
// Address: 0x2a6c30 - 0x2a6cc0
void SearchSndDataID__6CSceneFi_0x2a6c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchSndDataID__6CSceneFi_0x2a6c30");
#endif

    switch (ctx->pc) {
        case 0x2a6c48u: goto label_2a6c48;
        default: break;
    }

    ctx->pc = 0x2a6c30u;

    // 0x2a6c30: 0x8c824060  lw          $v0, 0x4060($a0)
    ctx->pc = 0x2a6c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16480)));
    // 0x2a6c34: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x2a6c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a6c38: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x2a6c38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2a6c3c: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A6C3Cu;
    {
        const bool branch_taken_0x2a6c3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6C3Cu;
            // 0x2a6c40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6c3c) {
            ctx->pc = 0x2A6C94u;
            goto label_2a6c94;
        }
    }
    ctx->pc = 0x2A6C44u;
    // 0x2a6c44: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x2a6c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2a6c48:
    // 0x2a6c48: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6C48u;
    {
        const bool branch_taken_0x2a6c48 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2A6C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6C48u;
            // 0x2a6c4c: 0x23843  sra         $a3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6c48) {
            ctx->pc = 0x2A6C58u;
            goto label_2a6c58;
        }
    }
    ctx->pc = 0x2A6C50u;
    // 0x2a6c50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a6c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a6c54: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x2a6c54u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
label_2a6c58:
    // 0x2a6c58: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2a6c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2a6c5c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2a6c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a6c60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a6c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a6c64: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a6c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a6c68: 0x84424064  lh          $v0, 0x4064($v0)
    ctx->pc = 0x2a6c68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16484)));
    // 0x2a6c6c: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x2a6c6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2a6c70: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6C70u;
    {
        const bool branch_taken_0x2a6c70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6c70) {
            ctx->pc = 0x2A6C80u;
            goto label_2a6c80;
        }
    }
    ctx->pc = 0x2A6C78u;
    // 0x2a6c78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A6C78u;
    {
        const bool branch_taken_0x2a6c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6C78u;
            // 0x2a6c7c: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6c78) {
            ctx->pc = 0x2A6C84u;
            goto label_2a6c84;
        }
    }
    ctx->pc = 0x2A6C80u;
label_2a6c80:
    // 0x2a6c80: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2a6c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a6c84:
    // 0x2a6c84: 0x0  nop
    ctx->pc = 0x2a6c84u;
    // NOP
    // 0x2a6c88: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x2a6c88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2a6c8c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2A6C8Cu;
    {
        const bool branch_taken_0x2a6c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6C8Cu;
            // 0x2a6c90: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6c8c) {
            ctx->pc = 0x2A6C48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a6c48;
        }
    }
    ctx->pc = 0x2A6C94u;
label_2a6c94:
    // 0x2a6c94: 0x0  nop
    ctx->pc = 0x2a6c94u;
    // NOP
    // 0x2a6c98: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a6c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a6c9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a6c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6ca0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a6ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a6ca4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2a6ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a6ca8: 0x84624064  lh          $v0, 0x4064($v1)
    ctx->pc = 0x2a6ca8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16484)));
    // 0x2a6cac: 0x10450002  beq         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A6CACu;
    {
        const bool branch_taken_0x2a6cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2A6CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6CACu;
            // 0x2a6cb0: 0x24624064  addiu       $v0, $v1, 0x4064 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16484));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6cac) {
            ctx->pc = 0x2A6CB8u;
            goto label_2a6cb8;
        }
    }
    ctx->pc = 0x2A6CB4u;
    // 0x2a6cb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a6cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a6cb8:
    // 0x2a6cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6CC0u;
}
