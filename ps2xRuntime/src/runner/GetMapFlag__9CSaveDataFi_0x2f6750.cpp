#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMapFlag__9CSaveDataFi
// Address: 0x2f6750 - 0x2f6780
void GetMapFlag__9CSaveDataFi_0x2f6750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMapFlag__9CSaveDataFi_0x2f6750");
#endif

    ctx->pc = 0x2f6750u;

    // 0x2f6750: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6750u;
    {
        const bool branch_taken_0x2f6750 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2F6754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6750u;
            // 0x2f6754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6750) {
            ctx->pc = 0x2F6768u;
            goto label_2f6768;
        }
    }
    ctx->pc = 0x2F6758u;
    // 0x2f6758: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x2f6758u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2f675c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F675Cu;
    {
        const bool branch_taken_0x2f675c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F675Cu;
            // 0x2f6760: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f675c) {
            ctx->pc = 0x2F6770u;
            goto label_2f6770;
        }
    }
    ctx->pc = 0x2F6764u;
    // 0x2f6764: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f6764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6768:
    // 0x2f6768: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6768u;
    {
        const bool branch_taken_0x2f6768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6768) {
            ctx->pc = 0x2F6778u;
            goto label_2f6778;
        }
    }
    ctx->pc = 0x2F6770u;
label_2f6770:
    // 0x2f6770: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f6770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f6774: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x2f6774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
label_2f6778:
    // 0x2f6778: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6780u;
}
