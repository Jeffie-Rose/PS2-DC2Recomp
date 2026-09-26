#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_INIT__FP12RS_STACKDATAi
// Address: 0x275990 - 0x2759b0
void ps2__SPHIDA_INIT__FP12RS_STACKDATAi_0x275990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_INIT__FP12RS_STACKDATAi_0x275990");
#endif

    switch (ctx->pc) {
        case 0x2759a0u: goto label_2759a0;
        default: break;
    }

    ctx->pc = 0x275990u;

    // 0x275990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x275994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275998: 0xc0ba558  jal         func_2E9560
    ctx->pc = 0x275998u;
    SET_GPR_U32(ctx, 31, 0x2759A0u);
    ctx->pc = 0x2E9560u;
    if (runtime->hasFunction(0x2E9560u)) {
        auto targetFn = runtime->lookupFunction(0x2E9560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2759A0u; }
        if (ctx->pc != 0x2759A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSphida__Fv_0x2e9560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2759A0u; }
        if (ctx->pc != 0x2759A0u) { return; }
    }
    ctx->pc = 0x2759A0u;
label_2759a0:
    // 0x2759a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2759a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2759a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2759a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2759a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2759A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2759ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2759A8u;
            // 0x2759ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2759B0u;
}
