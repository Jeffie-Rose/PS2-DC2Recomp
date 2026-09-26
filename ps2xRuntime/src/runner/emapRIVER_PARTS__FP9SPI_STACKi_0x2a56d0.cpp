#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapRIVER_PARTS__FP9SPI_STACKi
// Address: 0x2a56d0 - 0x2a56fc
void emapRIVER_PARTS__FP9SPI_STACKi_0x2a56d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapRIVER_PARTS__FP9SPI_STACKi_0x2a56d0");
#endif

    ctx->pc = 0x2a56d0u;

    // 0x2a56d0: 0x8f849a64  lw          $a0, -0x659C($gp)
    ctx->pc = 0x2a56d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a56d4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A56D4u;
    {
        const bool branch_taken_0x2a56d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A56D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A56D4u;
            // 0x2a56d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a56d4) {
            ctx->pc = 0x2A56E4u;
            goto label_2a56e4;
        }
    }
    ctx->pc = 0x2A56DCu;
    // 0x2a56dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A56DCu;
    {
        const bool branch_taken_0x2a56dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a56dc) {
            ctx->pc = 0x2A56F4u;
            goto label_2a56f4;
        }
    }
    ctx->pc = 0x2A56E4u;
label_2a56e4:
    // 0x2a56e4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2a56e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a56e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a56e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a56ec: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2a56ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2a56f0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2a56f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_2a56f4:
    // 0x2a56f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A56F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A56FCu;
}
