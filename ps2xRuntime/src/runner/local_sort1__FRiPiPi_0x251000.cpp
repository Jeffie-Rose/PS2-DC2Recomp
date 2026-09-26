#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: local_sort1__FRiPiPi
// Address: 0x251000 - 0x251050
void local_sort1__FRiPiPi_0x251000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("local_sort1__FRiPiPi_0x251000");
#endif

    switch (ctx->pc) {
        case 0x25100cu: goto label_25100c;
        default: break;
    }

    ctx->pc = 0x251000u;

    // 0x251000: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x251000u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x251004: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x251004u;
    {
        const bool branch_taken_0x251004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251004u;
            // 0x251008: 0x84880  sll         $t1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251004) {
            ctx->pc = 0x251020u;
            goto label_251020;
        }
    }
    ctx->pc = 0x25100Cu;
label_25100c:
    // 0x25100c: 0xc93821  addu        $a3, $a2, $t1
    ctx->pc = 0x25100cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x251010: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x251010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x251014: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x251014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x251018: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x251018u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x25101c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x25101cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_251020:
    // 0x251020: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x251020u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x251024: 0x107182a  slt         $v1, $t0, $a3
    ctx->pc = 0x251024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x251028: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x251028u;
    {
        const bool branch_taken_0x251028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25102Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251028u;
            // 0x25102c: 0x24e3ffff  addiu       $v1, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251028) {
            ctx->pc = 0x25100Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25100c;
        }
    }
    ctx->pc = 0x251030u;
    // 0x251030: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x251030u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x251034: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x251034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x251038: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x251038u;
    {
        const bool branch_taken_0x251038 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x251038) {
            ctx->pc = 0x251048u;
            goto label_251048;
        }
    }
    ctx->pc = 0x251040u;
    // 0x251040: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x251040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x251044: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x251044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_251048:
    // 0x251048: 0x3e00008  jr          $ra
    ctx->pc = 0x251048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251050u;
}
