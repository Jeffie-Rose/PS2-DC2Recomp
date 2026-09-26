#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetList__8CMdsListFi
// Address: 0x169150 - 0x169188
void GetList__8CMdsListFi_0x169150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetList__8CMdsListFi_0x169150");
#endif

    ctx->pc = 0x169150u;

    // 0x169150: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x169150u;
    {
        const bool branch_taken_0x169150 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x169154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169150u;
            // 0x169154: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169150) {
            ctx->pc = 0x16916Cu;
            goto label_16916c;
        }
    }
    ctx->pc = 0x169158u;
    // 0x169158: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x169158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16915c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x16915cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x169160: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169160u;
    {
        const bool branch_taken_0x169160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169160) {
            ctx->pc = 0x169174u;
            goto label_169174;
        }
    }
    ctx->pc = 0x169168u;
    // 0x169168: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x169168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16916c:
    // 0x16916c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16916Cu;
    {
        const bool branch_taken_0x16916c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16916c) {
            ctx->pc = 0x169180u;
            goto label_169180;
        }
    }
    ctx->pc = 0x169174u;
label_169174:
    // 0x169174: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x169174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x169178: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x169178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x16917c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16917cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_169180:
    // 0x169180: 0x3e00008  jr          $ra
    ctx->pc = 0x169180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169188u;
}
