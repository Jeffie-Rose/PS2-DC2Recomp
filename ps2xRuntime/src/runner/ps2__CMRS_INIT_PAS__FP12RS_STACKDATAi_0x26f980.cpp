#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_INIT_PAS__FP12RS_STACKDATAi
// Address: 0x26f980 - 0x26f9a4
void ps2__CMRS_INIT_PAS__FP12RS_STACKDATAi_0x26f980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_INIT_PAS__FP12RS_STACKDATAi_0x26f980");
#endif

    switch (ctx->pc) {
        case 0x26f994u: goto label_26f994;
        default: break;
    }

    ctx->pc = 0x26f980u;

    // 0x26f980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26f980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26f984: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x26f984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x26f988: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26f988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26f98c: 0xc0967c8  jal         func_259F20
    ctx->pc = 0x26F98Cu;
    SET_GPR_U32(ctx, 31, 0x26F994u);
    ctx->pc = 0x26F990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F98Cu;
            // 0x26f990: 0x2484f920  addiu       $a0, $a0, -0x6E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259F20u;
    if (runtime->hasFunction(0x259F20u)) {
        auto targetFn = runtime->lookupFunction(0x259F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F994u; }
        if (ctx->pc != 0x26F994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPas__12CSceneCmrSeqFv_0x259f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F994u; }
        if (ctx->pc != 0x26F994u) { return; }
    }
    ctx->pc = 0x26F994u;
label_26f994:
    // 0x26f994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26f994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f99c: 0x3e00008  jr          $ra
    ctx->pc = 0x26F99Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F99Cu;
            // 0x26f9a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26F9A4u;
}
