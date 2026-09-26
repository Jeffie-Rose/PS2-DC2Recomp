#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCameraInfoTable__4CMapFP11CCameraInfoi
// Address: 0x15cbe0 - 0x15cbec
void SetCameraInfoTable__4CMapFP11CCameraInfoi_0x15cbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCameraInfoTable__4CMapFP11CCameraInfoi_0x15cbe0");
#endif

    ctx->pc = 0x15cbe0u;

    // 0x15cbe0: 0xac860c80  sw          $a2, 0xC80($a0)
    ctx->pc = 0x15cbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3200), GPR_U32(ctx, 6));
    // 0x15cbe4: 0x3e00008  jr          $ra
    ctx->pc = 0x15CBE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CBE4u;
            // 0x15cbe8: 0xac850c84  sw          $a1, 0xC84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3204), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15CBECu;
}
