#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckPhotoDataNoNeed__FP17USER_PICTURE_INFOiPi
// Address: 0x1fe690 - 0x1fe6e8
void CheckPhotoDataNoNeed__FP17USER_PICTURE_INFOiPi_0x1fe690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckPhotoDataNoNeed__FP17USER_PICTURE_INFOiPi_0x1fe690");
#endif

    switch (ctx->pc) {
        case 0x1fe6b0u: goto label_1fe6b0;
        default: break;
    }

    ctx->pc = 0x1fe690u;

    // 0x1fe690: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE690u;
    {
        const bool branch_taken_0x1fe690 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE690u;
            // 0x1fe694: 0x5082a  slt         $at, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe690) {
            ctx->pc = 0x1FE6A0u;
            goto label_1fe6a0;
        }
    }
    ctx->pc = 0x1FE698u;
    // 0x1fe698: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1FE698u;
    {
        const bool branch_taken_0x1fe698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE698u;
            // 0x1fe69c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe698) {
            ctx->pc = 0x1FE6E0u;
            goto label_1fe6e0;
        }
    }
    ctx->pc = 0x1FE6A0u;
label_1fe6a0:
    // 0x1fe6a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fe6a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe6a4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1FE6A4u;
    {
        const bool branch_taken_0x1fe6a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE6A4u;
            // 0x1fe6a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe6a4) {
            ctx->pc = 0x1FE6E0u;
            goto label_1fe6e0;
        }
    }
    ctx->pc = 0x1FE6ACu;
    // 0x1fe6ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fe6acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe6b0:
    // 0x1fe6b0: 0x8483000a  lh          $v1, 0xA($a0)
    ctx->pc = 0x1fe6b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1fe6b4: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE6B4u;
    {
        const bool branch_taken_0x1fe6b4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1fe6b4) {
            ctx->pc = 0x1FE6D0u;
            goto label_1fe6d0;
        }
    }
    ctx->pc = 0x1FE6BCu;
    // 0x1fe6bc: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE6BCu;
    {
        const bool branch_taken_0x1fe6bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE6BCu;
            // 0x1fe6c0: 0xc81821  addu        $v1, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe6bc) {
            ctx->pc = 0x1FE6D0u;
            goto label_1fe6d0;
        }
    }
    ctx->pc = 0x1FE6C4u;
    // 0x1fe6c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fe6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fe6c8: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1fe6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1fe6cc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1fe6ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_1fe6d0:
    // 0x1fe6d0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1fe6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1fe6d4: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x1fe6d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fe6d8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1FE6D8u;
    {
        const bool branch_taken_0x1fe6d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE6D8u;
            // 0x1fe6dc: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe6d8) {
            ctx->pc = 0x1FE6B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fe6b0;
        }
    }
    ctx->pc = 0x1FE6E0u;
label_1fe6e0:
    // 0x1fe6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE6E8u;
}
