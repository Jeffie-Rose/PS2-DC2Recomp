#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckBitFlagNo__9CSaveDataFi
// Address: 0x2f63b0 - 0x2f63d0
void CheckBitFlagNo__9CSaveDataFi_0x2f63b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckBitFlagNo__9CSaveDataFi_0x2f63b0");
#endif

    ctx->pc = 0x2f63b0u;

    // 0x2f63b0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F63B0u;
    {
        const bool branch_taken_0x2f63b0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2F63B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F63B0u;
            // 0x2f63b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63b0) {
            ctx->pc = 0x2F63C8u;
            goto label_2f63c8;
        }
    }
    ctx->pc = 0x2F63B8u;
    // 0x2f63b8: 0x28a20800  slti        $v0, $a1, 0x800
    ctx->pc = 0x2f63b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x2f63bc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F63BCu;
    {
        const bool branch_taken_0x2f63bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F63C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F63BCu;
            // 0x2f63c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63bc) {
            ctx->pc = 0x2F63C8u;
            goto label_2f63c8;
        }
    }
    ctx->pc = 0x2F63C4u;
    // 0x2f63c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f63c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f63c8:
    // 0x2f63c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F63C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F63D0u;
}
