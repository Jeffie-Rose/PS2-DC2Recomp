#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CancelAutoRepeat__8CGamePadFi
// Address: 0x14afd0 - 0x14b034
void CancelAutoRepeat__8CGamePadFi_0x14afd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CancelAutoRepeat__8CGamePadFi_0x14afd0");
#endif

    switch (ctx->pc) {
        case 0x14afe0u: goto label_14afe0;
        default: break;
    }

    ctx->pc = 0x14afd0u;

    // 0x14afd0: 0x24870144  addiu       $a3, $a0, 0x144
    ctx->pc = 0x14afd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 324));
    // 0x14afd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14afd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14afd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14afd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14afdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14afdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14afe0:
    // 0x14afe0: 0xa61824  and         $v1, $a1, $a2
    ctx->pc = 0x14afe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x14afe4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x14AFE4u;
    {
        const bool branch_taken_0x14afe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14afe4) {
            ctx->pc = 0x14B018u;
            goto label_14b018;
        }
    }
    ctx->pc = 0x14AFECu;
    // 0x14afec: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x14afecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14aff0: 0xc04827  not         $t1, $a2
    ctx->pc = 0x14aff0u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
    // 0x14aff4: 0xe85021  addu        $t2, $a3, $t0
    ctx->pc = 0x14aff4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x14aff8: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x14aff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x14affc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x14affcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x14b000: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x14b000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x14b004: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x14b004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x14b008: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x14b008u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x14b00c: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x14b00cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
    // 0x14b010: 0xad400088  sw          $zero, 0x88($t2)
    ctx->pc = 0x14b010u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 136), GPR_U32(ctx, 0));
    // 0x14b014: 0xad400108  sw          $zero, 0x108($t2)
    ctx->pc = 0x14b014u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 264), GPR_U32(ctx, 0));
label_14b018:
    // 0x14b018: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14b018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14b01c: 0x28830020  slti        $v1, $a0, 0x20
    ctx->pc = 0x14b01cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x14b020: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x14b020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x14b024: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x14B024u;
    {
        const bool branch_taken_0x14b024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B024u;
            // 0x14b028: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b024) {
            ctx->pc = 0x14AFE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14afe0;
        }
    }
    ctx->pc = 0x14B02Cu;
    // 0x14b02c: 0x3e00008  jr          $ra
    ctx->pc = 0x14B02Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B034u;
}
