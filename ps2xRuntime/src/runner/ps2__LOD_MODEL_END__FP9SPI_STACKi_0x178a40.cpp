#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOD_MODEL_END__FP9SPI_STACKi
// Address: 0x178a40 - 0x178a54
void ps2__LOD_MODEL_END__FP9SPI_STACKi_0x178a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOD_MODEL_END__FP9SPI_STACKi_0x178a40");
#endif

    ctx->pc = 0x178a40u;

    // 0x178a40: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x178a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x178a44: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x178a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x178a48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x178A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178A4Cu;
            // 0x178a50: 0xac640354  sw          $a0, 0x354($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 852), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178A54u;
}
