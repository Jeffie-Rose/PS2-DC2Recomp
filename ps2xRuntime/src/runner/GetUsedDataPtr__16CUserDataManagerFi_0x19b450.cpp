#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetUsedDataPtr__16CUserDataManagerFi
// Address: 0x19b450 - 0x19b48c
void GetUsedDataPtr__16CUserDataManagerFi_0x19b450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetUsedDataPtr__16CUserDataManagerFi_0x19b450");
#endif

    ctx->pc = 0x19b450u;

    // 0x19b450: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B450u;
    {
        const bool branch_taken_0x19b450 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x19B454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B450u;
            // 0x19b454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b450) {
            ctx->pc = 0x19B468u;
            goto label_19b468;
        }
    }
    ctx->pc = 0x19B458u;
    // 0x19b458: 0x28a20096  slti        $v0, $a1, 0x96
    ctx->pc = 0x19b458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x19b45c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B45Cu;
    {
        const bool branch_taken_0x19b45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B45Cu;
            // 0x19b460: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b45c) {
            ctx->pc = 0x19B470u;
            goto label_19b470;
        }
    }
    ctx->pc = 0x19B464u;
    // 0x19b464: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19b464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b468:
    // 0x19b468: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19B468u;
    {
        const bool branch_taken_0x19b468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b468) {
            ctx->pc = 0x19B484u;
            goto label_19b484;
        }
    }
    ctx->pc = 0x19B470u;
label_19b470:
    // 0x19b470: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x19b470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19b474: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19b474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19b478: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19b478u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19b47c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19b47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19b480: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19b480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_19b484:
    // 0x19b484: 0x3e00008  jr          $ra
    ctx->pc = 0x19B484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B48Cu;
}
