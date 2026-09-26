#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetStack__18CScriptInterpreterFP9SPI_STACKi
// Address: 0x1466f0 - 0x146700
void SetStack__18CScriptInterpreterFP9SPI_STACKi_0x1466f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetStack__18CScriptInterpreterFP9SPI_STACKi_0x1466f0");
#endif

    ctx->pc = 0x1466f0u;

    // 0x1466f0: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x1466f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x1466f4: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x1466f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x1466f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1466F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1466FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1466F8u;
            // 0x1466fc: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x146700u;
}
