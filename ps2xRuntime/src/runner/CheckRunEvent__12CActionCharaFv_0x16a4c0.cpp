#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckRunEvent__12CActionCharaFv
// Address: 0x16a4c0 - 0x16a4d8
void CheckRunEvent__12CActionCharaFv_0x16a4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckRunEvent__12CActionCharaFv_0x16a4c0");
#endif

    ctx->pc = 0x16a4c0u;

    // 0x16a4c0: 0x8483071c  lh          $v1, 0x71C($a0)
    ctx->pc = 0x16a4c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1820)));
    // 0x16a4c4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16A4C4u;
    {
        const bool branch_taken_0x16a4c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A4C4u;
            // 0x16a4c8: 0x8082076c  lb          $v0, 0x76C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4c4) {
            ctx->pc = 0x16A4D0u;
            goto label_16a4d0;
        }
    }
    ctx->pc = 0x16A4CCu;
    // 0x16a4cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16a4ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a4d0:
    // 0x16a4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x16A4D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A4D8u;
}
