#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_SET_PAS_FRM__FP12RS_STACKDATAi
// Address: 0x26f9b0 - 0x26f9e0
void ps2__CMRS_SET_PAS_FRM__FP12RS_STACKDATAi_0x26f9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_SET_PAS_FRM__FP12RS_STACKDATAi_0x26f9b0");
#endif

    switch (ctx->pc) {
        case 0x26f9c0u: goto label_26f9c0;
        case 0x26f9d0u: goto label_26f9d0;
        default: break;
    }

    ctx->pc = 0x26f9b0u;

    // 0x26f9b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26f9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26f9b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26f9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26f9b8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26F9B8u;
    SET_GPR_U32(ctx, 31, 0x26F9C0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F9C0u; }
        if (ctx->pc != 0x26F9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F9C0u; }
        if (ctx->pc != 0x26F9C0u) { return; }
    }
    ctx->pc = 0x26F9C0u;
label_26f9c0:
    // 0x26f9c0: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x26f9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x26f9c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26f9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f9c8: 0xc0967d4  jal         func_259F50
    ctx->pc = 0x26F9C8u;
    SET_GPR_U32(ctx, 31, 0x26F9D0u);
    ctx->pc = 0x26F9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F9C8u;
            // 0x26f9cc: 0x2484f920  addiu       $a0, $a0, -0x6E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259F50u;
    if (runtime->hasFunction(0x259F50u)) {
        auto targetFn = runtime->lookupFunction(0x259F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F9D0u; }
        if (ctx->pc != 0x26F9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPasFrm__12CSceneCmrSeqFi_0x259f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F9D0u; }
        if (ctx->pc != 0x26F9D0u) { return; }
    }
    ctx->pc = 0x26F9D0u;
label_26f9d0:
    // 0x26f9d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26f9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f9d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x26F9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F9D8u;
            // 0x26f9dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26F9E0u;
}
