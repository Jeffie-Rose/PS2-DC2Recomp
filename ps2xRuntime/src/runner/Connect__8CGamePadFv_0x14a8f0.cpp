#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Connect__8CGamePadFv
// Address: 0x14a8f0 - 0x14a92c
void Connect__8CGamePadFv_0x14a8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Connect__8CGamePadFv_0x14a8f0");
#endif

    switch (ctx->pc) {
        case 0x14a904u: goto label_14a904;
        default: break;
    }

    ctx->pc = 0x14a8f0u;

    // 0x14a8f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14a8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14a8f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14a8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a8f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a8fc: 0xc0485d6  jal         func_121758
    ctx->pc = 0x14A8FCu;
    SET_GPR_U32(ctx, 31, 0x14A904u);
    ctx->pc = 0x14A900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A8FCu;
            // 0x14a900: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121758u;
    if (runtime->hasFunction(0x121758u)) {
        auto targetFn = runtime->lookupFunction(0x121758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A904u; }
        if (ctx->pc != 0x14A904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadGetState_0x121758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A904u; }
        if (ctx->pc != 0x14A904u) { return; }
    }
    ctx->pc = 0x14A904u;
label_14a904:
    // 0x14a904: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x14a904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14a908: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A908u;
    {
        const bool branch_taken_0x14a908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14a908) {
            ctx->pc = 0x14A918u;
            goto label_14a918;
        }
    }
    ctx->pc = 0x14A910u;
    // 0x14a910: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14A910u;
    {
        const bool branch_taken_0x14a910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A910u;
            // 0x14a914: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a910) {
            ctx->pc = 0x14A920u;
            goto label_14a920;
        }
    }
    ctx->pc = 0x14A918u;
label_14a918:
    // 0x14a918: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x14a918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x14a91c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x14a91cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_14a920:
    // 0x14a920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a924: 0x3e00008  jr          $ra
    ctx->pc = 0x14A924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A924u;
            // 0x14a928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14A92Cu;
}
