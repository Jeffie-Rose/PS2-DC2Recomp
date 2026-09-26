#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RePaintNum__8CEditMapFi
// Address: 0x2eeaf0 - 0x2eeb08
void RePaintNum__8CEditMapFi_0x2eeaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RePaintNum__8CEditMapFi_0x2eeaf0");
#endif

    ctx->pc = 0x2eeaf0u;

    // 0x2eeaf0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEAF0u;
    {
        const bool branch_taken_0x2eeaf0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2EEAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEAF0u;
            // 0x2eeaf4: 0x51043  sra         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeaf0) {
            ctx->pc = 0x2EEB00u;
            goto label_2eeb00;
        }
    }
    ctx->pc = 0x2EEAF8u;
    // 0x2eeaf8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2eeaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2eeafc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2eeafcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2eeb00:
    // 0x2eeb00: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEB00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EEB08u;
}
