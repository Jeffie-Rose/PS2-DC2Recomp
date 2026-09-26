#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_SET_HEIGHT__FP12RS_STACKDATAi
// Address: 0x26f4c0 - 0x26f4f0
void ps2__CMRS_SET_HEIGHT__FP12RS_STACKDATAi_0x26f4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_SET_HEIGHT__FP12RS_STACKDATAi_0x26f4c0");
#endif

    switch (ctx->pc) {
        case 0x26f4d0u: goto label_26f4d0;
        case 0x26f4e0u: goto label_26f4e0;
        default: break;
    }

    ctx->pc = 0x26f4c0u;

    // 0x26f4c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26f4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26f4c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26f4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26f4c8: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26F4C8u;
    SET_GPR_U32(ctx, 31, 0x26F4D0u);
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F4D0u; }
        if (ctx->pc != 0x26F4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F4D0u; }
        if (ctx->pc != 0x26F4D0u) { return; }
    }
    ctx->pc = 0x26F4D0u;
label_26f4d0:
    // 0x26f4d0: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x26f4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x26f4d4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26f4d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x26f4d8: 0xc096858  jal         func_25A160
    ctx->pc = 0x26F4D8u;
    SET_GPR_U32(ctx, 31, 0x26F4E0u);
    ctx->pc = 0x26F4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F4D8u;
            // 0x26f4dc: 0x2484f920  addiu       $a0, $a0, -0x6E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A160u;
    if (runtime->hasFunction(0x25A160u)) {
        auto targetFn = runtime->lookupFunction(0x25A160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F4E0u; }
        if (ctx->pc != 0x26F4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__12CSceneCmrSeqFf_0x25a160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F4E0u; }
        if (ctx->pc != 0x26F4E0u) { return; }
    }
    ctx->pc = 0x26F4E0u;
label_26f4e0:
    // 0x26f4e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26f4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f4e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x26F4E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F4E8u;
            // 0x26f4ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26F4F0u;
}
