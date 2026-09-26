#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsBgmPort__Fi
// Address: 0x18d8c0 - 0x18d8e0
void IsBgmPort__Fi_0x18d8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsBgmPort__Fi_0x18d8c0");
#endif

    ctx->pc = 0x18d8c0u;

    // 0x18d8c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D8C0u;
    {
        const bool branch_taken_0x18d8c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D8C0u;
            // 0x18d8c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d8c0) {
            ctx->pc = 0x18D8D8u;
            goto label_18d8d8;
        }
    }
    ctx->pc = 0x18D8C8u;
    // 0x18d8c8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x18d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x18d8cc: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18D8CCu;
    {
        const bool branch_taken_0x18d8cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D8CCu;
            // 0x18d8d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d8cc) {
            ctx->pc = 0x18D8D8u;
            goto label_18d8d8;
        }
    }
    ctx->pc = 0x18D8D4u;
    // 0x18d8d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d8d8:
    // 0x18d8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x18D8D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D8E0u;
}
