#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCulturePoint__FP10CEditPartsi
// Address: 0x2a97f0 - 0x2a9820
void GetCulturePoint__FP10CEditPartsi_0x2a97f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCulturePoint__FP10CEditPartsi_0x2a97f0");
#endif

    ctx->pc = 0x2a97f0u;

    // 0x2a97f0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A97F0u;
    {
        const bool branch_taken_0x2a97f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A97F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A97F0u;
            // 0x2a97f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a97f0) {
            ctx->pc = 0x2A9808u;
            goto label_2a9808;
        }
    }
    ctx->pc = 0x2A97F8u;
    // 0x2a97f8: 0x8c820324  lw          $v0, 0x324($a0)
    ctx->pc = 0x2a97f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 804)));
    // 0x2a97fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A97FCu;
    {
        const bool branch_taken_0x2a97fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a97fc) {
            ctx->pc = 0x2A9810u;
            goto label_2a9810;
        }
    }
    ctx->pc = 0x2A9804u;
    // 0x2a9804: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a9804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9808:
    // 0x2a9808: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9808u;
    {
        const bool branch_taken_0x2a9808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9808) {
            ctx->pc = 0x2A9818u;
            goto label_2a9818;
        }
    }
    ctx->pc = 0x2A9810u;
label_2a9810:
    // 0x2a9810: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2a9810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a9814: 0x0  nop
    ctx->pc = 0x2a9814u;
    // NOP
label_2a9818:
    // 0x2a9818: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A9820u;
}
