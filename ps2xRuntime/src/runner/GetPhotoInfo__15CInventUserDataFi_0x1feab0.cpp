#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPhotoInfo__15CInventUserDataFi
// Address: 0x1feab0 - 0x1feae8
void GetPhotoInfo__15CInventUserDataFi_0x1feab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPhotoInfo__15CInventUserDataFi_0x1feab0");
#endif

    ctx->pc = 0x1feab0u;

    // 0x1feab0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FEAB0u;
    {
        const bool branch_taken_0x1feab0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1FEAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEAB0u;
            // 0x1feab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feab0) {
            ctx->pc = 0x1FEAC8u;
            goto label_1feac8;
        }
    }
    ctx->pc = 0x1FEAB8u;
    // 0x1feab8: 0x28a2001e  slti        $v0, $a1, 0x1E
    ctx->pc = 0x1feab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1feabc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEABCu;
    {
        const bool branch_taken_0x1feabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEABCu;
            // 0x1feac0: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feabc) {
            ctx->pc = 0x1FEAD0u;
            goto label_1fead0;
        }
    }
    ctx->pc = 0x1FEAC4u;
    // 0x1feac4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1feac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1feac8:
    // 0x1feac8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FEAC8u;
    {
        const bool branch_taken_0x1feac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feac8) {
            ctx->pc = 0x1FEAE0u;
            goto label_1feae0;
        }
    }
    ctx->pc = 0x1FEAD0u;
label_1fead0:
    // 0x1fead0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fead0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fead4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1fead4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1fead8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1fead8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1feadc: 0x24420408  addiu       $v0, $v0, 0x408
    ctx->pc = 0x1feadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1032));
label_1feae0:
    // 0x1feae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEAE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEAE8u;
}
