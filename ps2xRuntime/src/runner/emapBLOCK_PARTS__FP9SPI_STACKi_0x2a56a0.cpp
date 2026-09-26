#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapBLOCK_PARTS__FP9SPI_STACKi
// Address: 0x2a56a0 - 0x2a56cc
void emapBLOCK_PARTS__FP9SPI_STACKi_0x2a56a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapBLOCK_PARTS__FP9SPI_STACKi_0x2a56a0");
#endif

    ctx->pc = 0x2a56a0u;

    // 0x2a56a0: 0x8f849a64  lw          $a0, -0x659C($gp)
    ctx->pc = 0x2a56a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a56a4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A56A4u;
    {
        const bool branch_taken_0x2a56a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A56A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A56A4u;
            // 0x2a56a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a56a4) {
            ctx->pc = 0x2A56B4u;
            goto label_2a56b4;
        }
    }
    ctx->pc = 0x2A56ACu;
    // 0x2a56ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A56ACu;
    {
        const bool branch_taken_0x2a56ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a56ac) {
            ctx->pc = 0x2A56C4u;
            goto label_2a56c4;
        }
    }
    ctx->pc = 0x2A56B4u;
label_2a56b4:
    // 0x2a56b4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2a56b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a56b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a56b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a56bc: 0x34630030  ori         $v1, $v1, 0x30
    ctx->pc = 0x2a56bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48);
    // 0x2a56c0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2a56c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_2a56c4:
    // 0x2a56c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A56C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A56CCu;
}
