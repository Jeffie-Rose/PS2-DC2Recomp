#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetView__14CEnemyLifeGageFi
// Address: 0x1ca0b0 - 0x1ca0e4
void SetView__14CEnemyLifeGageFi_0x1ca0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetView__14CEnemyLifeGageFi_0x1ca0b0");
#endif

    ctx->pc = 0x1ca0b0u;

    // 0x1ca0b0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA0B0u;
    {
        const bool branch_taken_0x1ca0b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca0b0) {
            ctx->pc = 0x1CA0CCu;
            goto label_1ca0cc;
        }
    }
    ctx->pc = 0x1CA0B8u;
    // 0x1ca0b8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1ca0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1ca0bc: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA0BCu;
    {
        const bool branch_taken_0x1ca0bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA0BCu;
            // 0x1ca0c0: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca0bc) {
            ctx->pc = 0x1CA0DCu;
            goto label_1ca0dc;
        }
    }
    ctx->pc = 0x1CA0C4u;
    // 0x1ca0c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA0C4u;
    {
        const bool branch_taken_0x1ca0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA0C4u;
            // 0x1ca0c8: 0xac830020  sw          $v1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca0c4) {
            ctx->pc = 0x1CA0DCu;
            goto label_1ca0dc;
        }
    }
    ctx->pc = 0x1CA0CCu;
label_1ca0cc:
    // 0x1ca0cc: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1ca0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1ca0d0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CA0D0u;
    {
        const bool branch_taken_0x1ca0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA0D0u;
            // 0x1ca0d4: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca0d0) {
            ctx->pc = 0x1CA0DCu;
            goto label_1ca0dc;
        }
    }
    ctx->pc = 0x1CA0D8u;
    // 0x1ca0d8: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x1ca0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_1ca0dc:
    // 0x1ca0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA0DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA0DCu;
            // 0x1ca0e0: 0xac85001c  sw          $a1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA0E4u;
}
