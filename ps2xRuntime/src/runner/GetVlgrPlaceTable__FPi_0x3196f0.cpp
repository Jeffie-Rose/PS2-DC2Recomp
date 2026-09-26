#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetVlgrPlaceTable__FPi
// Address: 0x3196f0 - 0x319704
void GetVlgrPlaceTable__FPi_0x3196f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetVlgrPlaceTable__FPi_0x3196f0");
#endif

    ctx->pc = 0x3196f0u;

    // 0x3196f0: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x3196f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3196f4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3196f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3196f8: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3196f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3196fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3196FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3196FCu;
            // 0x319700: 0x24422bd0  addiu       $v0, $v0, 0x2BD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x319704u;
}
