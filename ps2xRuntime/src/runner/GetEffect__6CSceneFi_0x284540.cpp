#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEffect__6CSceneFi
// Address: 0x284540 - 0x284570
void GetEffect__6CSceneFi_0x284540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEffect__6CSceneFi_0x284540");
#endif

    switch (ctx->pc) {
        case 0x284550u: goto label_284550;
        default: break;
    }

    ctx->pc = 0x284540u;

    // 0x284540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x284540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x284544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x284548: 0xc0a0d30  jal         func_2834C0
    ctx->pc = 0x284548u;
    SET_GPR_U32(ctx, 31, 0x284550u);
    ctx->pc = 0x2834C0u;
    if (runtime->hasFunction(0x2834C0u)) {
        auto targetFn = runtime->lookupFunction(0x2834C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284550u; }
        if (ctx->pc != 0x284550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneEffect__6CSceneFi_0x2834c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284550u; }
        if (ctx->pc != 0x284550u) { return; }
    }
    ctx->pc = 0x284550u;
label_284550:
    // 0x284550: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284550u;
    {
        const bool branch_taken_0x284550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284550) {
            ctx->pc = 0x284560u;
            goto label_284560;
        }
    }
    ctx->pc = 0x284558u;
    // 0x284558: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x284558u;
    {
        const bool branch_taken_0x284558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28455Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284558u;
            // 0x28455c: 0x8c420034  lw          $v0, 0x34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284558) {
            ctx->pc = 0x284564u;
            goto label_284564;
        }
    }
    ctx->pc = 0x284560u;
label_284560:
    // 0x284560: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x284560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284564:
    // 0x284564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284568: 0x3e00008  jr          $ra
    ctx->pc = 0x284568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28456Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284568u;
            // 0x28456c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284570u;
}
