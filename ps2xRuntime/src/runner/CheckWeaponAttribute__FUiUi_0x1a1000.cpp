#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckWeaponAttribute__FUiUi
// Address: 0x1a1000 - 0x1a1064
void CheckWeaponAttribute__FUiUi_0x1a1000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckWeaponAttribute__FUiUi_0x1a1000");
#endif

    switch (ctx->pc) {
        case 0x1a1014u: goto label_1a1014;
        default: break;
    }

    ctx->pc = 0x1a1000u;

    // 0x1a1000: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a1000u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1004: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a1004u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1008: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1a1008u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1a100c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a100cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1010: 0x24e76360  addiu       $a3, $a3, 0x6360
    ctx->pc = 0x1a1010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25440));
label_1a1014:
    // 0x1a1014: 0xe91021  addu        $v0, $a3, $t1
    ctx->pc = 0x1a1014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1a1018: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x1a1018u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a101c: 0x1140000a  beqz        $t2, . + 4 + (0xA << 2)
    ctx->pc = 0x1A101Cu;
    {
        const bool branch_taken_0x1a101c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A101Cu;
            // 0x1a1020: 0x1061804  sllv        $v1, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a101c) {
            ctx->pc = 0x1A1048u;
            goto label_1a1048;
        }
    }
    ctx->pc = 0x1A1024u;
    // 0x1a1024: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1a1024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a1028: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1028u;
    {
        const bool branch_taken_0x1a1028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A102Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1028u;
            // 0x1a102c: 0xaa1024  and         $v0, $a1, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1028) {
            ctx->pc = 0x1A1048u;
            goto label_1a1048;
        }
    }
    ctx->pc = 0x1A1030u;
    // 0x1a1030: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1030u;
    {
        const bool branch_taken_0x1a1030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1030) {
            ctx->pc = 0x1A1048u;
            goto label_1a1048;
        }
    }
    ctx->pc = 0x1A1038u;
    // 0x1a1038: 0x601827  not         $v1, $v1
    ctx->pc = 0x1a1038u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x1a103c: 0x1401027  not         $v0, $t2
    ctx->pc = 0x1a103cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 10) | GPR_U64(ctx, 0)));
    // 0x1a1040: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1a1040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a1044: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1a1044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1a1048:
    // 0x1a1048: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1a1048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a104c: 0x2902000c  slti        $v0, $t0, 0xC
    ctx->pc = 0x1a104cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1a1050: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1A1050u;
    {
        const bool branch_taken_0x1a1050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1050u;
            // 0x1a1054: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1050) {
            ctx->pc = 0x1A1014u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a1014;
        }
    }
    ctx->pc = 0x1A1058u;
    // 0x1a1058: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1a1058u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1a105c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A105Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A105Cu;
            // 0x1a1060: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1064u;
}
