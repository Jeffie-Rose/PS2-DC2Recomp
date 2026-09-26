#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: fpFISH_MAP_END__FP9SPI_STACKi
// Address: 0x303dd0 - 0x303dfc
void fpFISH_MAP_END__FP9SPI_STACKi_0x303dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpFISH_MAP_END__FP9SPI_STACKi_0x303dd0");
#endif

    ctx->pc = 0x303dd0u;

    // 0x303dd0: 0x8f82a0fc  lw          $v0, -0x5F04($gp)
    ctx->pc = 0x303dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942972)));
    // 0x303dd4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x303DD4u;
    {
        const bool branch_taken_0x303dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303DD4u;
            // 0x303dd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303dd4) {
            ctx->pc = 0x303DE4u;
            goto label_303de4;
        }
    }
    ctx->pc = 0x303DDCu;
    // 0x303ddc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x303DDCu;
    {
        const bool branch_taken_0x303ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303ddc) {
            ctx->pc = 0x303DF4u;
            goto label_303df4;
        }
    }
    ctx->pc = 0x303DE4u;
label_303de4:
    // 0x303de4: 0x8f83a100  lw          $v1, -0x5F00($gp)
    ctx->pc = 0x303de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942976)));
    // 0x303de8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303dec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x303decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x303df0: 0xaf83a100  sw          $v1, -0x5F00($gp)
    ctx->pc = 0x303df0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942976), GPR_U32(ctx, 3));
label_303df4:
    // 0x303df4: 0x3e00008  jr          $ra
    ctx->pc = 0x303DF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303DFCu;
}
