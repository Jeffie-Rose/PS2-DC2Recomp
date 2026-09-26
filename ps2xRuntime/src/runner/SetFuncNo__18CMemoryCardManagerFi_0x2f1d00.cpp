#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFuncNo__18CMemoryCardManagerFi
// Address: 0x2f1d00 - 0x2f1d20
void SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFuncNo__18CMemoryCardManagerFi_0x2f1d00");
#endif

    ctx->pc = 0x2f1d00u;

    // 0x2f1d00: 0xac850050  sw          $a1, 0x50($a0)
    ctx->pc = 0x2f1d00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
    // 0x2f1d04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f1d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1d08: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1D08u;
    {
        const bool branch_taken_0x2f1d08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F1D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1D08u;
            // 0x2f1d0c: 0xac800058  sw          $zero, 0x58($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1d08) {
            ctx->pc = 0x2F1D18u;
            goto label_2f1d18;
        }
    }
    ctx->pc = 0x2F1D10u;
    // 0x2f1d10: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2f1d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2f1d14: 0xac83090c  sw          $v1, 0x90C($a0)
    ctx->pc = 0x2f1d14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2316), GPR_U32(ctx, 3));
label_2f1d18:
    // 0x2f1d18: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1D20u;
}
