#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: eNewPlaceParts__8CEditMapFv
// Address: 0x1b0ba0 - 0x1b0bf8
void eNewPlaceParts__8CEditMapFv_0x1b0ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eNewPlaceParts__8CEditMapFv_0x1b0ba0");
#endif

    switch (ctx->pc) {
        case 0x1b0bb0u: goto label_1b0bb0;
        default: break;
    }

    ctx->pc = 0x1b0ba0u;

    // 0x1b0ba0: 0x8c850d40  lw          $a1, 0xD40($a0)
    ctx->pc = 0x1b0ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3392)));
    // 0x1b0ba4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b0ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ba8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B0BA8u;
    {
        const bool branch_taken_0x1b0ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0BA8u;
            // 0x1b0bac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ba8) {
            ctx->pc = 0x1B0BDCu;
            goto label_1b0bdc;
        }
    }
    ctx->pc = 0x1B0BB0u;
label_1b0bb0:
    // 0x1b0bb0: 0x8c830d44  lw          $v1, 0xD44($a0)
    ctx->pc = 0x1b0bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3396)));
    // 0x1b0bb4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1b0bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1b0bb8: 0x80630070  lb          $v1, 0x70($v1)
    ctx->pc = 0x1b0bb8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1b0bbc: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x1b0bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x1b0bc0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1b0bc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b0bc4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0BC4u;
    {
        const bool branch_taken_0x1b0bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0bc4) {
            ctx->pc = 0x1B0BD4u;
            goto label_1b0bd4;
        }
    }
    ctx->pc = 0x1B0BCCu;
    // 0x1b0bcc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0BCCu;
    {
        const bool branch_taken_0x1b0bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0bcc) {
            ctx->pc = 0x1B0BF0u;
            goto label_1b0bf0;
        }
    }
    ctx->pc = 0x1B0BD4u;
label_1b0bd4:
    // 0x1b0bd4: 0x24c60330  addiu       $a2, $a2, 0x330
    ctx->pc = 0x1b0bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 816));
    // 0x1b0bd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b0bdc:
    // 0x1b0bdc: 0x0  nop
    ctx->pc = 0x1b0bdcu;
    // NOP
    // 0x1b0be0: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x1b0be0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1b0be4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1B0BE4u;
    {
        const bool branch_taken_0x1b0be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0be4) {
            ctx->pc = 0x1B0BB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b0bb0;
        }
    }
    ctx->pc = 0x1B0BECu;
    // 0x1b0bec: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1b0becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1b0bf0:
    // 0x1b0bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0BF8u;
}
