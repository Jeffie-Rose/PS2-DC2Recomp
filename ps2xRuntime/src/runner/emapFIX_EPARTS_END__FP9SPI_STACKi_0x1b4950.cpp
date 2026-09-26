#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapFIX_EPARTS_END__FP9SPI_STACKi
// Address: 0x1b4950 - 0x1b4964
void emapFIX_EPARTS_END__FP9SPI_STACKi_0x1b4950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapFIX_EPARTS_END__FP9SPI_STACKi_0x1b4950");
#endif

    ctx->pc = 0x1b4950u;

    // 0x1b4950: 0xaf808d38  sw          $zero, -0x72C8($gp)
    ctx->pc = 0x1b4950u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937912), GPR_U32(ctx, 0));
    // 0x1b4954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4958: 0xaf808d40  sw          $zero, -0x72C0($gp)
    ctx->pc = 0x1b4958u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937920), GPR_U32(ctx, 0));
    // 0x1b495c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B495Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B495Cu;
            // 0x1b4960: 0xaf808d48  sw          $zero, -0x72B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937928), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4964u;
}
