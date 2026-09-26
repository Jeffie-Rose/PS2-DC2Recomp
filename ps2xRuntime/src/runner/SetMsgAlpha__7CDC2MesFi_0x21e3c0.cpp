#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMsgAlpha__7CDC2MesFi
// Address: 0x21e3c0 - 0x21e3e4
void SetMsgAlpha__7CDC2MesFi_0x21e3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMsgAlpha__7CDC2MesFi_0x21e3c0");
#endif

    ctx->pc = 0x21e3c0u;

    // 0x21e3c0: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x21E3C0u;
    {
        const bool branch_taken_0x21e3c0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x21E3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E3C0u;
            // 0x21e3c4: 0xa0851800  sb          $a1, 0x1800($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 6144), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e3c0) {
            ctx->pc = 0x21E3CCu;
            goto label_21e3cc;
        }
    }
    ctx->pc = 0x21E3C8u;
    // 0x21e3c8: 0xa0801800  sb          $zero, 0x1800($a0)
    ctx->pc = 0x21e3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6144), (uint8_t)GPR_U32(ctx, 0));
label_21e3cc:
    // 0x21e3cc: 0x28a10081  slti        $at, $a1, 0x81
    ctx->pc = 0x21e3ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x21e3d0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x21E3D0u;
    {
        const bool branch_taken_0x21e3d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E3D0u;
            // 0x21e3d4: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e3d0) {
            ctx->pc = 0x21E3DCu;
            goto label_21e3dc;
        }
    }
    ctx->pc = 0x21E3D8u;
    // 0x21e3d8: 0xa0831800  sb          $v1, 0x1800($a0)
    ctx->pc = 0x21e3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6144), (uint8_t)GPR_U32(ctx, 3));
label_21e3dc:
    // 0x21e3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x21E3DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21E3E4u;
}
