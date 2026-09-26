#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _markOutput
// Address: 0x10c228 - 0x10c250
void _markOutput_0x10c228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_markOutput_0x10c228");
#endif

    ctx->pc = 0x10c228u;

    // 0x10c228: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x10c228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10c22c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10c22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c230: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C230u;
    {
        const bool branch_taken_0x10c230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10C234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C230u;
            // 0x10c234: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c230) {
            ctx->pc = 0x10C248u;
            goto label_10c248;
        }
    }
    ctx->pc = 0x10C238u;
    // 0x10c238: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x10c238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x10c23c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x10c23cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x10c240: 0xac8200ac  sw          $v0, 0xAC($a0)
    ctx->pc = 0x10c240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 2));
    // 0x10c244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10c248:
    // 0x10c248: 0x3e00008  jr          $ra
    ctx->pc = 0x10C248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C248u;
            // 0x10c24c: 0xac820820  sw          $v0, 0x820($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C250u;
}
