#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchActiveMonsterBlock__11CMonsterManFv
// Address: 0x1db7c0 - 0x1db810
void SearchActiveMonsterBlock__11CMonsterManFv_0x1db7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchActiveMonsterBlock__11CMonsterManFv_0x1db7c0");
#endif

    switch (ctx->pc) {
        case 0x1db7c8u: goto label_1db7c8;
        default: break;
    }

    ctx->pc = 0x1db7c0u;

    // 0x1db7c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1db7c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db7c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db7c8:
    // 0x1db7c8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1db7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1db7cc: 0x8c630484  lw          $v1, 0x484($v1)
    ctx->pc = 0x1db7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
    // 0x1db7d0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB7D0u;
    {
        const bool branch_taken_0x1db7d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db7d0) {
            ctx->pc = 0x1DB7E0u;
            goto label_1db7e0;
        }
    }
    ctx->pc = 0x1DB7D8u;
    // 0x1db7d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DB7D8u;
    {
        const bool branch_taken_0x1db7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db7d8) {
            ctx->pc = 0x1DB808u;
            goto label_1db808;
        }
    }
    ctx->pc = 0x1DB7E0u;
label_1db7e0:
    // 0x1db7e0: 0x8c631330  lw          $v1, 0x1330($v1)
    ctx->pc = 0x1db7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4912)));
    // 0x1db7e4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB7E4u;
    {
        const bool branch_taken_0x1db7e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db7e4) {
            ctx->pc = 0x1DB7F4u;
            goto label_1db7f4;
        }
    }
    ctx->pc = 0x1DB7ECu;
    // 0x1db7ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DB7ECu;
    {
        const bool branch_taken_0x1db7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db7ec) {
            ctx->pc = 0x1DB808u;
            goto label_1db808;
        }
    }
    ctx->pc = 0x1DB7F4u;
label_1db7f4:
    // 0x1db7f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1db7f8: 0x28430018  slti        $v1, $v0, 0x18
    ctx->pc = 0x1db7f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1db7fc: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1DB7FCu;
    {
        const bool branch_taken_0x1db7fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB7FCu;
            // 0x1db800: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db7fc) {
            ctx->pc = 0x1DB7C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1db7c8;
        }
    }
    ctx->pc = 0x1DB804u;
    // 0x1db804: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1db804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1db808:
    // 0x1db808: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DB810u;
}
