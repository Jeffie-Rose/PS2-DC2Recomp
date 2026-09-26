#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cfgFUNC_DATA_END__FP9SPI_STACKi
// Address: 0x164810 - 0x16481c
void cfgFUNC_DATA_END__FP9SPI_STACKi_0x164810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cfgFUNC_DATA_END__FP9SPI_STACKi_0x164810");
#endif

    ctx->pc = 0x164810u;

    // 0x164810: 0xaf808940  sw          $zero, -0x76C0($gp)
    ctx->pc = 0x164810u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936896), GPR_U32(ctx, 0));
    // 0x164814: 0x3e00008  jr          $ra
    ctx->pc = 0x164814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164814u;
            // 0x164818: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16481Cu;
}
