#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapFENCE_PARTS__FP9SPI_STACKi
// Address: 0x2a5700 - 0x2a572c
void emapFENCE_PARTS__FP9SPI_STACKi_0x2a5700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapFENCE_PARTS__FP9SPI_STACKi_0x2a5700");
#endif

    ctx->pc = 0x2a5700u;

    // 0x2a5700: 0x8f849a64  lw          $a0, -0x659C($gp)
    ctx->pc = 0x2a5700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a5704: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5704u;
    {
        const bool branch_taken_0x2a5704 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5704u;
            // 0x2a5708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5704) {
            ctx->pc = 0x2A5714u;
            goto label_2a5714;
        }
    }
    ctx->pc = 0x2A570Cu;
    // 0x2a570c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A570Cu;
    {
        const bool branch_taken_0x2a570c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a570c) {
            ctx->pc = 0x2A5724u;
            goto label_2a5724;
        }
    }
    ctx->pc = 0x2A5714u;
label_2a5714:
    // 0x2a5714: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2a5714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a5718: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a5718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a571c: 0x34630130  ori         $v1, $v1, 0x130
    ctx->pc = 0x2a571cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)304);
    // 0x2a5720: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2a5720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_2a5724:
    // 0x2a5724: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A572Cu;
}
