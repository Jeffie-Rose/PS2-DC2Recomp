#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckReleaseTimming__12CActionCharaFi
// Address: 0x1719c0 - 0x1719f0
void CheckReleaseTimming__12CActionCharaFi_0x1719c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckReleaseTimming__12CActionCharaFi_0x1719c0");
#endif

    ctx->pc = 0x1719c0u;

    // 0x1719c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1719c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1719c4: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1719C4u;
    {
        const bool branch_taken_0x1719c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1719c4) {
            ctx->pc = 0x1719D4u;
            goto label_1719d4;
        }
    }
    ctx->pc = 0x1719CCu;
    // 0x1719cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1719CCu;
    {
        const bool branch_taken_0x1719cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1719D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1719CCu;
            // 0x1719d0: 0x84820728  lh          $v0, 0x728($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1719cc) {
            ctx->pc = 0x1719E8u;
            goto label_1719e8;
        }
    }
    ctx->pc = 0x1719D4u;
label_1719d4:
    // 0x1719d4: 0x8482071c  lh          $v0, 0x71C($a0)
    ctx->pc = 0x1719d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1820)));
    // 0x1719d8: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1719D8u;
    {
        const bool branch_taken_0x1719d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1719DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1719D8u;
            // 0x1719dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1719d8) {
            ctx->pc = 0x1719E8u;
            goto label_1719e8;
        }
    }
    ctx->pc = 0x1719E0u;
    // 0x1719e0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1719E0u;
    {
        const bool branch_taken_0x1719e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1719E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1719E0u;
            // 0x1719e4: 0x84820728  lh          $v0, 0x728($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1719e0) {
            ctx->pc = 0x1719E8u;
            goto label_1719e8;
        }
    }
    ctx->pc = 0x1719E8u;
label_1719e8:
    // 0x1719e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1719E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1719F0u;
}
