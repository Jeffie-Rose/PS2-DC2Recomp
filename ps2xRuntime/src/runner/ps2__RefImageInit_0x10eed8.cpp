#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _RefImageInit
// Address: 0x10eed8 - 0x10eef8
void ps2__RefImageInit_0x10eed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RefImageInit_0x10eed8");
#endif

    ctx->pc = 0x10eed8u;

    // 0x10eed8: 0x51103  sra         $v0, $a1, 4
    ctx->pc = 0x10eed8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
    // 0x10eedc: 0x61903  sra         $v1, $a2, 4
    ctx->pc = 0x10eedcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 4));
    // 0x10eee0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x10eee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x10eee4: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x10eee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x10eee8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10eeec: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x10eeecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x10eef0: 0x3e00008  jr          $ra
    ctx->pc = 0x10EEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EEF0u;
            // 0x10eef4: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10EEF8u;
}
