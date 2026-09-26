#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SND_SET_ENV_VOL__FP12RS_STACKDATAi
// Address: 0x273960 - 0x27398c
void ps2__SND_SET_ENV_VOL__FP12RS_STACKDATAi_0x273960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SND_SET_ENV_VOL__FP12RS_STACKDATAi_0x273960");
#endif

    switch (ctx->pc) {
        case 0x273970u: goto label_273970;
        case 0x27397cu: goto label_27397c;
        default: break;
    }

    ctx->pc = 0x273960u;

    // 0x273960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x273960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x273964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x273968: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x273968u;
    SET_GPR_U32(ctx, 31, 0x273970u);
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273970u; }
        if (ctx->pc != 0x273970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273970u; }
        if (ctx->pc != 0x273970u) { return; }
    }
    ctx->pc = 0x273970u;
label_273970:
    // 0x273970: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x273970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x273974: 0xc0a99c8  jal         func_2A6720
    ctx->pc = 0x273974u;
    SET_GPR_U32(ctx, 31, 0x27397Cu);
    ctx->pc = 0x273978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273974u;
            // 0x273978: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6720u;
    if (runtime->hasFunction(0x2A6720u)) {
        auto targetFn = runtime->lookupFunction(0x2A6720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27397Cu; }
        if (ctx->pc != 0x27397Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEnvBGMVol__6CSceneFf_0x2a6720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27397Cu; }
        if (ctx->pc != 0x27397Cu) { return; }
    }
    ctx->pc = 0x27397Cu;
label_27397c:
    // 0x27397c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27397cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273980: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273984: 0x3e00008  jr          $ra
    ctx->pc = 0x273984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273984u;
            // 0x273988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27398Cu;
}
