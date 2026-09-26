#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCharaMemAllocSize__Fv
// Address: 0x1e9b60 - 0x1e9be0
void GetCharaMemAllocSize__Fv_0x1e9b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCharaMemAllocSize__Fv_0x1e9b60");
#endif

    switch (ctx->pc) {
        case 0x1e9b74u: goto label_1e9b74;
        default: break;
    }

    ctx->pc = 0x1e9b60u;

    // 0x1e9b60: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e9b60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b64: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e9b64u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b68: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1e9b68u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b6c: 0x3c090035  lui         $t1, 0x35
    ctx->pc = 0x1e9b6cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)53 << 16));
    // 0x1e9b70: 0x2529d8d0  addiu       $t1, $t1, -0x2730
    ctx->pc = 0x1e9b70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957264));
label_1e9b74:
    // 0x1e9b74: 0x12c6821  addu        $t5, $t1, $t4
    ctx->pc = 0x1e9b74u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x1e9b78: 0x1a01021  addu        $v0, $t5, $zero
    ctx->pc = 0x1e9b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 0)));
    // 0x1e9b7c: 0x8da70004  lw          $a3, 0x4($t5)
    ctx->pc = 0x1e9b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x1e9b80: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1e9b80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9b84: 0x8da60008  lw          $a2, 0x8($t5)
    ctx->pc = 0x1e9b84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x1e9b88: 0x8da5000c  lw          $a1, 0xC($t5)
    ctx->pc = 0x1e9b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x1e9b8c: 0x8da40010  lw          $a0, 0x10($t5)
    ctx->pc = 0x1e9b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x1e9b90: 0x8da30014  lw          $v1, 0x14($t5)
    ctx->pc = 0x1e9b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x1e9b94: 0x84021  addu        $t0, $zero, $t0
    ctx->pc = 0x1e9b94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
    // 0x1e9b98: 0x8da20018  lw          $v0, 0x18($t5)
    ctx->pc = 0x1e9b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
    // 0x1e9b9c: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x1e9b9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1e9ba0: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1e9ba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1e9ba4: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x1e9ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1e9ba8: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x1e9ba8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1e9bac: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x1e9bacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1e9bb0: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x1e9bb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1e9bb4: 0x148082a  slt         $at, $t2, $t0
    ctx->pc = 0x1e9bb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1e9bb8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E9BB8u;
    {
        const bool branch_taken_0x1e9bb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9bb8) {
            ctx->pc = 0x1E9BC4u;
            goto label_1e9bc4;
        }
    }
    ctx->pc = 0x1E9BC0u;
    // 0x1e9bc0: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1e9bc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1e9bc4:
    // 0x1e9bc4: 0x0  nop
    ctx->pc = 0x1e9bc4u;
    // NOP
    // 0x1e9bc8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1e9bc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1e9bcc: 0x29620004  slti        $v0, $t3, 0x4
    ctx->pc = 0x1e9bccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1e9bd0: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1E9BD0u;
    {
        const bool branch_taken_0x1e9bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9BD0u;
            // 0x1e9bd4: 0x258c001c  addiu       $t4, $t4, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9bd0) {
            ctx->pc = 0x1E9B74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e9b74;
        }
    }
    ctx->pc = 0x1E9BD8u;
    // 0x1e9bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9BD8u;
            // 0x1e9bdc: 0x25420010  addiu       $v0, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9BE0u;
}
