#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetePlaceIDList__8CEditMapFPii
// Address: 0x1b0d60 - 0x1b0dc8
void GetePlaceIDList__8CEditMapFPii_0x1b0d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetePlaceIDList__8CEditMapFPii_0x1b0d60");
#endif

    switch (ctx->pc) {
        case 0x1b0d74u: goto label_1b0d74;
        default: break;
    }

    ctx->pc = 0x1b0d60u;

    // 0x1b0d60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b0d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b0d64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b0d68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d6c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B0D6Cu;
    {
        const bool branch_taken_0x1b0d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0D6Cu;
            // 0x1b0d70: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d6c) {
            ctx->pc = 0x1B0DB0u;
            goto label_1b0db0;
        }
    }
    ctx->pc = 0x1B0D74u;
label_1b0d74:
    // 0x1b0d74: 0x8c830d44  lw          $v1, 0xD44($a0)
    ctx->pc = 0x1b0d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3396)));
    // 0x1b0d78: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1b0d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1b0d7c: 0x80630070  lb          $v1, 0x70($v1)
    ctx->pc = 0x1b0d7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1b0d80: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x1b0d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x1b0d84: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1b0d84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b0d88: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0D88u;
    {
        const bool branch_taken_0x1b0d88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0D88u;
            // 0x1b0d8c: 0x46082a  slt         $at, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d88) {
            ctx->pc = 0x1B0DA4u;
            goto label_1b0da4;
        }
    }
    ctx->pc = 0x1B0D90u;
    // 0x1b0d90: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1B0D90u;
    {
        const bool branch_taken_0x1b0d90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0D90u;
            // 0x1b0d94: 0xa91821  addu        $v1, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d90) {
            ctx->pc = 0x1B0DC0u;
            goto label_1b0dc0;
        }
    }
    ctx->pc = 0x1B0D98u;
    // 0x1b0d98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b0d9c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1b0d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1b0da0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1b0da0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_1b0da4:
    // 0x1b0da4: 0x0  nop
    ctx->pc = 0x1b0da4u;
    // NOP
    // 0x1b0da8: 0x25080330  addiu       $t0, $t0, 0x330
    ctx->pc = 0x1b0da8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 816));
    // 0x1b0dac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1b0dacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1b0db0:
    // 0x1b0db0: 0x8c830d40  lw          $v1, 0xD40($a0)
    ctx->pc = 0x1b0db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3392)));
    // 0x1b0db4: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x1b0db4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b0db8: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1B0DB8u;
    {
        const bool branch_taken_0x1b0db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0db8) {
            ctx->pc = 0x1B0D74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b0d74;
        }
    }
    ctx->pc = 0x1B0DC0u;
label_1b0dc0:
    // 0x1b0dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0DC8u;
}
