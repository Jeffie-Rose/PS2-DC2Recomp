#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: niNPC_END__FP9SPI_STACKi
// Address: 0x319890 - 0x31989c
void niNPC_END__FP9SPI_STACKi_0x319890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("niNPC_END__FP9SPI_STACKi_0x319890");
#endif

    ctx->pc = 0x319890u;

    // 0x319890: 0xaf80a348  sw          $zero, -0x5CB8($gp)
    ctx->pc = 0x319890u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943560), GPR_U32(ctx, 0));
    // 0x319894: 0x3e00008  jr          $ra
    ctx->pc = 0x319894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319894u;
            // 0x319898: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31989Cu;
}
