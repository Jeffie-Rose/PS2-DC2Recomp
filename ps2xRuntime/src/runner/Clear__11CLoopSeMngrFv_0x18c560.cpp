#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Clear__11CLoopSeMngrFv
// Address: 0x18c560 - 0x18c5b0
void Clear__11CLoopSeMngrFv_0x18c560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__11CLoopSeMngrFv_0x18c560");
#endif

    switch (ctx->pc) {
        case 0x18c57cu: goto label_18c57c;
        default: break;
    }

    ctx->pc = 0x18c560u;

    // 0x18c560: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18c560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18c564: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x18C564u;
    {
        const bool branch_taken_0x18c564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C564u;
            // 0x18c568: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c564) {
            ctx->pc = 0x18C5A8u;
            goto label_18c5a8;
        }
    }
    ctx->pc = 0x18C56Cu;
    // 0x18c56c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18c56cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c570: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x18c570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18c574: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18C574u;
    {
        const bool branch_taken_0x18c574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C574u;
            // 0x18c578: 0x3c05bf80  lui         $a1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c574) {
            ctx->pc = 0x18C598u;
            goto label_18c598;
        }
    }
    ctx->pc = 0x18C57Cu;
label_18c57c:
    // 0x18c57c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18c57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18c580: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18c580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18c584: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x18c584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x18c588: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x18c588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x18c58c: 0x25080014  addiu       $t0, $t0, 0x14
    ctx->pc = 0x18c58cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x18c590: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x18c590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x18c594: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x18c594u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_18c598:
    // 0x18c598: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18c598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18c59c: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x18c59cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18c5a0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x18C5A0u;
    {
        const bool branch_taken_0x18c5a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c5a0) {
            ctx->pc = 0x18C57Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18c57c;
        }
    }
    ctx->pc = 0x18C5A8u;
label_18c5a8:
    // 0x18c5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x18C5A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C5B0u;
}
