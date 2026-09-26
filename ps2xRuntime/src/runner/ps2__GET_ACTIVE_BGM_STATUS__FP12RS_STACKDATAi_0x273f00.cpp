#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ACTIVE_BGM_STATUS__FP12RS_STACKDATAi
// Address: 0x273f00 - 0x273f28
void ps2__GET_ACTIVE_BGM_STATUS__FP12RS_STACKDATAi_0x273f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ACTIVE_BGM_STATUS__FP12RS_STACKDATAi_0x273f00");
#endif

    switch (ctx->pc) {
        case 0x273f18u: goto label_273f18;
        default: break;
    }

    ctx->pc = 0x273f00u;

    // 0x273f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x273f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x273f04: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x273f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x273f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x273f0c: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x273f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x273f10: 0xc0a9944  jal         func_2A6510
    ctx->pc = 0x273F10u;
    SET_GPR_U32(ctx, 31, 0x273F18u);
    ctx->pc = 0x273F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273F10u;
            // 0x273f14: 0x24a5e860  addiu       $a1, $a1, -0x17A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6510u;
    if (runtime->hasFunction(0x2A6510u)) {
        auto targetFn = runtime->lookupFunction(0x2A6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273F18u; }
        if (ctx->pc != 0x273F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmStatus__6CSceneFPQ26CScene10BGM_STATUS_0x2a6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273F18u; }
        if (ctx->pc != 0x273F18u) { return; }
    }
    ctx->pc = 0x273F18u;
label_273f18:
    // 0x273f18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273f1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273f20: 0x3e00008  jr          $ra
    ctx->pc = 0x273F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273F20u;
            // 0x273f24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273F28u;
}
