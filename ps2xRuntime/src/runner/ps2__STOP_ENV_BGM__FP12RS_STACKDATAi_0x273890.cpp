#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _STOP_ENV_BGM__FP12RS_STACKDATAi
// Address: 0x273890 - 0x2738b0
void ps2__STOP_ENV_BGM__FP12RS_STACKDATAi_0x273890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__STOP_ENV_BGM__FP12RS_STACKDATAi_0x273890");
#endif

    switch (ctx->pc) {
        case 0x2738a0u: goto label_2738a0;
        default: break;
    }

    ctx->pc = 0x273890u;

    // 0x273890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x273890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x273894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x273898: 0xc0a99f0  jal         func_2A67C0
    ctx->pc = 0x273898u;
    SET_GPR_U32(ctx, 31, 0x2738A0u);
    ctx->pc = 0x27389Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273898u;
            // 0x27389c: 0x8f8497dc  lw          $a0, -0x6824($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A67C0u;
    if (runtime->hasFunction(0x2A67C0u)) {
        auto targetFn = runtime->lookupFunction(0x2A67C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2738A0u; }
        if (ctx->pc != 0x2738A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopEnvBGM__6CSceneFv_0x2a67c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2738A0u; }
        if (ctx->pc != 0x2738A0u) { return; }
    }
    ctx->pc = 0x2738A0u;
label_2738a0:
    // 0x2738a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2738a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2738a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2738a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2738a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2738A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2738ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2738A8u;
            // 0x2738ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2738B0u;
}
