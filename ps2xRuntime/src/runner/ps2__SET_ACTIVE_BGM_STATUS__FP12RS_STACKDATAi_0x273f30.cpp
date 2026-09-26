#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_ACTIVE_BGM_STATUS__FP12RS_STACKDATAi
// Address: 0x273f30 - 0x273f58
void ps2__SET_ACTIVE_BGM_STATUS__FP12RS_STACKDATAi_0x273f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_ACTIVE_BGM_STATUS__FP12RS_STACKDATAi_0x273f30");
#endif

    switch (ctx->pc) {
        case 0x273f48u: goto label_273f48;
        default: break;
    }

    ctx->pc = 0x273f30u;

    // 0x273f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x273f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x273f34: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x273f34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x273f38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x273f3c: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x273f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x273f40: 0xc0a9960  jal         func_2A6580
    ctx->pc = 0x273F40u;
    SET_GPR_U32(ctx, 31, 0x273F48u);
    ctx->pc = 0x273F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273F40u;
            // 0x273f44: 0x24a5e860  addiu       $a1, $a1, -0x17A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6580u;
    if (runtime->hasFunction(0x2A6580u)) {
        auto targetFn = runtime->lookupFunction(0x2A6580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273F48u; }
        if (ctx->pc != 0x273F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveBgmStatus__6CSceneFPQ26CScene10BGM_STATUS_0x2a6580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273F48u; }
        if (ctx->pc != 0x273F48u) { return; }
    }
    ctx->pc = 0x273F48u;
label_273f48:
    // 0x273f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273f4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273f50: 0x3e00008  jr          $ra
    ctx->pc = 0x273F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273F50u;
            // 0x273f54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273F58u;
}
