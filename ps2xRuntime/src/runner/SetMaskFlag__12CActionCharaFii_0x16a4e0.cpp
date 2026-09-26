#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMaskFlag__12CActionCharaFii
// Address: 0x16a4e0 - 0x16a510
void SetMaskFlag__12CActionCharaFii_0x16a4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMaskFlag__12CActionCharaFii_0x16a4e0");
#endif

    ctx->pc = 0x16a4e0u;

    // 0x16a4e0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A4E0u;
    {
        const bool branch_taken_0x16a4e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a4e0) {
            ctx->pc = 0x16A4F8u;
            goto label_16a4f8;
        }
    }
    ctx->pc = 0x16A4E8u;
    // 0x16a4e8: 0x8c8306a0  lw          $v1, 0x6A0($a0)
    ctx->pc = 0x16a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1696)));
    // 0x16a4ec: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x16a4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x16a4f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16A4F0u;
    {
        const bool branch_taken_0x16a4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A4F0u;
            // 0x16a4f4: 0xac8306a0  sw          $v1, 0x6A0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1696), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4f0) {
            ctx->pc = 0x16A508u;
            goto label_16a508;
        }
    }
    ctx->pc = 0x16A4F8u;
label_16a4f8:
    // 0x16a4f8: 0x8c8306a0  lw          $v1, 0x6A0($a0)
    ctx->pc = 0x16a4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1696)));
    // 0x16a4fc: 0xa02827  not         $a1, $a1
    ctx->pc = 0x16a4fcu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x16a500: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x16a500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x16a504: 0xac8306a0  sw          $v1, 0x6A0($a0)
    ctx->pc = 0x16a504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1696), GPR_U32(ctx, 3));
label_16a508:
    // 0x16a508: 0x3e00008  jr          $ra
    ctx->pc = 0x16A508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A510u;
}
