#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SaerchVoice__8sndTrackFii
// Address: 0x18c290 - 0x18c2f0
void SaerchVoice__8sndTrackFii_0x18c290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SaerchVoice__8sndTrackFii_0x18c290");
#endif

    switch (ctx->pc) {
        case 0x18c2a0u: goto label_18c2a0;
        default: break;
    }

    ctx->pc = 0x18c290u;

    // 0x18c290: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x18c290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x18c294: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x18c294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18c298: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18C298u;
    {
        const bool branch_taken_0x18c298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C298u;
            // 0x18c29c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c298) {
            ctx->pc = 0x18C2D4u;
            goto label_18c2d4;
        }
    }
    ctx->pc = 0x18C2A0u;
label_18c2a0:
    // 0x18c2a0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x18c2a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c2a4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18C2A4u;
    {
        const bool branch_taken_0x18c2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c2a4) {
            ctx->pc = 0x18C2CCu;
            goto label_18c2cc;
        }
    }
    ctx->pc = 0x18C2ACu;
    // 0x18c2ac: 0x80430001  lb          $v1, 0x1($v0)
    ctx->pc = 0x18c2acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x18c2b0: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18C2B0u;
    {
        const bool branch_taken_0x18c2b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x18c2b0) {
            ctx->pc = 0x18C2CCu;
            goto label_18c2cc;
        }
    }
    ctx->pc = 0x18C2B8u;
    // 0x18c2b8: 0x80430002  lb          $v1, 0x2($v0)
    ctx->pc = 0x18c2b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x18c2bc: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C2BCu;
    {
        const bool branch_taken_0x18c2bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x18c2bc) {
            ctx->pc = 0x18C2CCu;
            goto label_18c2cc;
        }
    }
    ctx->pc = 0x18C2C4u;
    // 0x18c2c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18C2C4u;
    {
        const bool branch_taken_0x18c2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c2c4) {
            ctx->pc = 0x18C2E8u;
            goto label_18c2e8;
        }
    }
    ctx->pc = 0x18C2CCu;
label_18c2cc:
    // 0x18c2cc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18c2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18c2d0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x18c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_18c2d4:
    // 0x18c2d4: 0x0  nop
    ctx->pc = 0x18c2d4u;
    // NOP
    // 0x18c2d8: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x18c2d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18c2dc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x18C2DCu;
    {
        const bool branch_taken_0x18c2dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c2dc) {
            ctx->pc = 0x18C2A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18c2a0;
        }
    }
    ctx->pc = 0x18C2E4u;
    // 0x18c2e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18c2e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c2e8:
    // 0x18c2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x18C2E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C2F0u;
}
