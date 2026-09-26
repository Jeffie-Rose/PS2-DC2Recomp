#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _KEY_START__FP9SPI_STACKi
// Address: 0x1769e0 - 0x176a2c
void ps2__KEY_START__FP9SPI_STACKi_0x1769e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__KEY_START__FP9SPI_STACKi_0x1769e0");
#endif

    ctx->pc = 0x1769e0u;

    // 0x1769e0: 0x8f8589e8  lw          $a1, -0x7618($gp)
    ctx->pc = 0x1769e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937064)));
    // 0x1769e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1769e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1769e8: 0x8f8389b4  lw          $v1, -0x764C($gp)
    ctx->pc = 0x1769e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937012)));
    // 0x1769ec: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x1769ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x1769f0: 0x8ca60024  lw          $a2, 0x24($a1)
    ctx->pc = 0x1769f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1769f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1769f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1769f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1769f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1769fc: 0x8ca50020  lw          $a1, 0x20($a1)
    ctx->pc = 0x1769fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x176a00: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x176a00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x176a04: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x176a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x176a08: 0xaf8489b8  sw          $a0, -0x7648($gp)
    ctx->pc = 0x176a08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937016), GPR_U32(ctx, 4));
    // 0x176a0c: 0x8f8489b8  lw          $a0, -0x7648($gp)
    ctx->pc = 0x176a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937016)));
    // 0x176a10: 0xac640510  sw          $a0, 0x510($v1)
    ctx->pc = 0x176a10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1296), GPR_U32(ctx, 4));
    // 0x176a14: 0x8f8389b4  lw          $v1, -0x764C($gp)
    ctx->pc = 0x176a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937012)));
    // 0x176a18: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x176a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x176a1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x176a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x176a20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176a24: 0x3e00008  jr          $ra
    ctx->pc = 0x176A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176A24u;
            // 0x176a28: 0xac600530  sw          $zero, 0x530($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1328), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176A2Cu;
}
