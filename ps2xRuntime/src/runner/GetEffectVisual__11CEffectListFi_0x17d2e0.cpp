#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEffectVisual__11CEffectListFi
// Address: 0x17d2e0 - 0x17d320
void GetEffectVisual__11CEffectListFi_0x17d2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEffectVisual__11CEffectListFi_0x17d2e0");
#endif

    ctx->pc = 0x17d2e0u;

    // 0x17d2e0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D2E0u;
    {
        const bool branch_taken_0x17d2e0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x17D2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D2E0u;
            // 0x17d2e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d2e0) {
            ctx->pc = 0x17D2FCu;
            goto label_17d2fc;
        }
    }
    ctx->pc = 0x17D2E8u;
    // 0x17d2e8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x17d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17d2ec: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x17d2ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17d2f0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D2F0u;
    {
        const bool branch_taken_0x17d2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d2f0) {
            ctx->pc = 0x17D304u;
            goto label_17d304;
        }
    }
    ctx->pc = 0x17D2F8u;
    // 0x17d2f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17d2f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d2fc:
    // 0x17d2fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17D2FCu;
    {
        const bool branch_taken_0x17d2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d2fc) {
            ctx->pc = 0x17D318u;
            goto label_17d318;
        }
    }
    ctx->pc = 0x17D304u;
label_17d304:
    // 0x17d304: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x17d304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17d308: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x17d308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17d30c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17d30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17d310: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17d310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17d314: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17d314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17d318:
    // 0x17d318: 0x3e00008  jr          $ra
    ctx->pc = 0x17D318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D320u;
}
