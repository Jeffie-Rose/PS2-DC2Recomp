#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SelDataInit__12CMenuKeyFuncFv
// Address: 0x23e010 - 0x23e030
void SelDataInit__12CMenuKeyFuncFv_0x23e010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SelDataInit__12CMenuKeyFuncFv_0x23e010");
#endif

    ctx->pc = 0x23e010u;

    // 0x23e010: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x23e010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x23e014: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x23e014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x23e018: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x23e018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x23e01c: 0xac830078  sw          $v1, 0x78($a0)
    ctx->pc = 0x23e01cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 3));
    // 0x23e020: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x23e020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x23e024: 0xac83007c  sw          $v1, 0x7C($a0)
    ctx->pc = 0x23e024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
    // 0x23e028: 0x3e00008  jr          $ra
    ctx->pc = 0x23E028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E028u;
            // 0x23e02c: 0xa0800002  sb          $zero, 0x2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E030u;
}
