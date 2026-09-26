#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsFence__10CEditPartsFv
// Address: 0x1b5ac0 - 0x1b5aec
void IsFence__10CEditPartsFv_0x1b5ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsFence__10CEditPartsFv_0x1b5ac0");
#endif

    ctx->pc = 0x1b5ac0u;

    // 0x1b5ac0: 0x8c820324  lw          $v0, 0x324($a0)
    ctx->pc = 0x1b5ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 804)));
    // 0x1b5ac4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5AC4u;
    {
        const bool branch_taken_0x1b5ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5ac4) {
            ctx->pc = 0x1B5AD4u;
            goto label_1b5ad4;
        }
    }
    ctx->pc = 0x1B5ACCu;
    // 0x1b5acc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5ACCu;
    {
        const bool branch_taken_0x1b5acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5ACCu;
            // 0x1b5ad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5acc) {
            ctx->pc = 0x1B5AE4u;
            goto label_1b5ae4;
        }
    }
    ctx->pc = 0x1B5AD4u;
label_1b5ad4:
    // 0x1b5ad4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1b5ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b5ad8: 0x30420130  andi        $v0, $v0, 0x130
    ctx->pc = 0x1b5ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)304);
    // 0x1b5adc: 0x38420130  xori        $v0, $v0, 0x130
    ctx->pc = 0x1b5adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)304);
    // 0x1b5ae0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b5ae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b5ae4:
    // 0x1b5ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5AECu;
}
