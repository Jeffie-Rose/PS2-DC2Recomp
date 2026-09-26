#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckFishRecordUpdate__16CUserDataManagerFiff
// Address: 0x19d1c0 - 0x19d1f8
void CheckFishRecordUpdate__16CUserDataManagerFiff_0x19d1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckFishRecordUpdate__16CUserDataManagerFiff_0x19d1c0");
#endif

    switch (ctx->pc) {
        case 0x19d1e0u: goto label_19d1e0;
        default: break;
    }

    ctx->pc = 0x19d1c0u;

    // 0x19d1c0: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19d1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19d1c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d1c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d1c8: 0x34215258  ori         $at, $at, 0x5258
    ctx->pc = 0x19d1c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21080);
    // 0x19d1cc: 0x812021  addu        $a0, $a0, $at
    ctx->pc = 0x19d1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19d1d0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19D1D0u;
    {
        const bool branch_taken_0x19d1d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D1D0u;
            // 0x19d1d4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d1d0) {
            ctx->pc = 0x19D1E8u;
            goto label_19d1e8;
        }
    }
    ctx->pc = 0x19D1D8u;
    // 0x19d1d8: 0xc066ba0  jal         func_19AE80
    ctx->pc = 0x19D1D8u;
    SET_GPR_U32(ctx, 31, 0x19D1E0u);
    ctx->pc = 0x19AE80u;
    if (runtime->hasFunction(0x19AE80u)) {
        auto targetFn = runtime->lookupFunction(0x19AE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D1E0u; }
        if (ctx->pc != 0x19D1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckRecordFish__14CFishingRecordFiff_0x19ae80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D1E0u; }
        if (ctx->pc != 0x19D1E0u) { return; }
    }
    ctx->pc = 0x19D1E0u;
label_19d1e0:
    // 0x19d1e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19D1E0u;
    {
        const bool branch_taken_0x19d1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D1E0u;
            // 0x19d1e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d1e0) {
            ctx->pc = 0x19D1F0u;
            goto label_19d1f0;
        }
    }
    ctx->pc = 0x19D1E8u;
label_19d1e8:
    // 0x19d1e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19d1e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d1ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19d1f0:
    // 0x19d1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x19D1F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D1F0u;
            // 0x19d1f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D1F8u;
}
