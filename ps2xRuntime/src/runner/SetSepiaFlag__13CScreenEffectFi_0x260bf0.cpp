#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetSepiaFlag__13CScreenEffectFi
// Address: 0x260bf0 - 0x260c10
void SetSepiaFlag__13CScreenEffectFi_0x260bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSepiaFlag__13CScreenEffectFi_0x260bf0");
#endif

    ctx->pc = 0x260bf0u;

    // 0x260bf0: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x260bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x260bf4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x260BF4u;
    {
        const bool branch_taken_0x260bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260bf4) {
            ctx->pc = 0x260C04u;
            goto label_260c04;
        }
    }
    ctx->pc = 0x260BFCu;
    // 0x260bfc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x260BFCu;
    {
        const bool branch_taken_0x260bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260BFCu;
            // 0x260c00: 0xac850030  sw          $a1, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260bfc) {
            ctx->pc = 0x260C08u;
            goto label_260c08;
        }
    }
    ctx->pc = 0x260C04u;
label_260c04:
    // 0x260c04: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x260c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
label_260c08:
    // 0x260c08: 0x3e00008  jr          $ra
    ctx->pc = 0x260C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x260C10u;
}
