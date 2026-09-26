#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapFUNC_DATA_END__FP9SPI_STACKi
// Address: 0x164400 - 0x164418
void mapFUNC_DATA_END__FP9SPI_STACKi_0x164400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapFUNC_DATA_END__FP9SPI_STACKi_0x164400");
#endif

    ctx->pc = 0x164400u;

    // 0x164400: 0x8f83893c  lw          $v1, -0x76C4($gp)
    ctx->pc = 0x164400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936892)));
    // 0x164404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164408: 0xaf808940  sw          $zero, -0x76C0($gp)
    ctx->pc = 0x164408u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936896), GPR_U32(ctx, 0));
    // 0x16440c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16440cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x164410: 0x3e00008  jr          $ra
    ctx->pc = 0x164410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164410u;
            // 0x164414: 0xaf83893c  sw          $v1, -0x76C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936892), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164418u;
}
