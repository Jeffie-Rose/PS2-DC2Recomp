#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchBaseIndex__11CMonsterManFi
// Address: 0x1db6c0 - 0x1db6fc
void SearchBaseIndex__11CMonsterManFi_0x1db6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchBaseIndex__11CMonsterManFi_0x1db6c0");
#endif

    switch (ctx->pc) {
        case 0x1db6c8u: goto label_1db6c8;
        default: break;
    }

    ctx->pc = 0x1db6c0u;

    // 0x1db6c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1db6c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db6c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1db6c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db6c8:
    // 0x1db6c8: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1db6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1db6cc: 0x8c6304f0  lw          $v1, 0x4F0($v1)
    ctx->pc = 0x1db6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1264)));
    // 0x1db6d0: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB6D0u;
    {
        const bool branch_taken_0x1db6d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1db6d0) {
            ctx->pc = 0x1DB6E0u;
            goto label_1db6e0;
        }
    }
    ctx->pc = 0x1DB6D8u;
    // 0x1db6d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DB6D8u;
    {
        const bool branch_taken_0x1db6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db6d8) {
            ctx->pc = 0x1DB6F4u;
            goto label_1db6f4;
        }
    }
    ctx->pc = 0x1DB6E0u;
label_1db6e0:
    // 0x1db6e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1db6e4: 0x2843000c  slti        $v1, $v0, 0xC
    ctx->pc = 0x1db6e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1db6e8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DB6E8u;
    {
        const bool branch_taken_0x1db6e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB6E8u;
            // 0x1db6ec: 0x24c614c0  addiu       $a2, $a2, 0x14C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db6e8) {
            ctx->pc = 0x1DB6C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1db6c8;
        }
    }
    ctx->pc = 0x1DB6F0u;
    // 0x1db6f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1db6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1db6f4:
    // 0x1db6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB6F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DB6FCu;
}
