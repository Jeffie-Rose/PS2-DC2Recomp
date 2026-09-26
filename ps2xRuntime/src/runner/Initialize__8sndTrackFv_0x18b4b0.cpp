#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__8sndTrackFv
// Address: 0x18b4b0 - 0x18b510
void Initialize__8sndTrackFv_0x18b4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__8sndTrackFv_0x18b4b0");
#endif

    switch (ctx->pc) {
        case 0x18b4e8u: goto label_18b4e8;
        default: break;
    }

    ctx->pc = 0x18b4b0u;

    // 0x18b4b0: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x18b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x18b4b4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18b4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18b4b8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x18b4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b4bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18b4bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b4c0: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x18b4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b4c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18b4c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b4c8: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x18b4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x18b4cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18b4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b4d0: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x18b4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x18b4d4: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x18b4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x18b4d8: 0xa0850005  sb          $a1, 0x5($a0)
    ctx->pc = 0x18b4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 5));
    // 0x18b4dc: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x18b4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x18b4e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B4E0u;
    {
        const bool branch_taken_0x18b4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B4E0u;
            // 0x18b4e4: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4e0) {
            ctx->pc = 0x18B4F4u;
            goto label_18b4f4;
        }
    }
    ctx->pc = 0x18B4E8u;
label_18b4e8:
    // 0x18b4e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18b4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x18b4ec: 0xa060000c  sb          $zero, 0xC($v1)
    ctx->pc = 0x18b4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x18b4f0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x18b4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_18b4f4:
    // 0x18b4f4: 0x0  nop
    ctx->pc = 0x18b4f4u;
    // NOP
    // 0x18b4f8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18b4fc: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x18b4fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18b500: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18B500u;
    {
        const bool branch_taken_0x18b500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B500u;
            // 0x18b504: 0x871821  addu        $v1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b500) {
            ctx->pc = 0x18B4E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18b4e8;
        }
    }
    ctx->pc = 0x18B508u;
    // 0x18b508: 0x3e00008  jr          $ra
    ctx->pc = 0x18B508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B510u;
}
