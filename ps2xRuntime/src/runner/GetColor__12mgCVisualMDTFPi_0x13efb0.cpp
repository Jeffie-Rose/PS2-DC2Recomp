#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetColor__12mgCVisualMDTFPi
// Address: 0x13efb0 - 0x13efc0
void GetColor__12mgCVisualMDTFPi_0x13efb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetColor__12mgCVisualMDTFPi_0x13efb0");
#endif

    ctx->pc = 0x13efb0u;

    // 0x13efb0: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x13efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x13efb4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x13efb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x13efb8: 0x3e00008  jr          $ra
    ctx->pc = 0x13EFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EFB8u;
            // 0x13efbc: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13EFC0u;
}
