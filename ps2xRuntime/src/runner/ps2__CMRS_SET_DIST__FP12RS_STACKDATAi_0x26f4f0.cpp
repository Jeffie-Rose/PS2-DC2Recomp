#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_SET_DIST__FP12RS_STACKDATAi
// Address: 0x26f4f0 - 0x26f520
void ps2__CMRS_SET_DIST__FP12RS_STACKDATAi_0x26f4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_SET_DIST__FP12RS_STACKDATAi_0x26f4f0");
#endif

    switch (ctx->pc) {
        case 0x26f500u: goto label_26f500;
        case 0x26f510u: goto label_26f510;
        default: break;
    }

    ctx->pc = 0x26f4f0u;

    // 0x26f4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26f4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26f4f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26f4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26f4f8: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26F4F8u;
    SET_GPR_U32(ctx, 31, 0x26F500u);
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F500u; }
        if (ctx->pc != 0x26F500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F500u; }
        if (ctx->pc != 0x26F500u) { return; }
    }
    ctx->pc = 0x26F500u;
label_26f500:
    // 0x26f500: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x26f500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x26f504: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26f504u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x26f508: 0xc096868  jal         func_25A1A0
    ctx->pc = 0x26F508u;
    SET_GPR_U32(ctx, 31, 0x26F510u);
    ctx->pc = 0x26F50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F508u;
            // 0x26f50c: 0x2484f920  addiu       $a0, $a0, -0x6E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A1A0u;
    if (runtime->hasFunction(0x25A1A0u)) {
        auto targetFn = runtime->lookupFunction(0x25A1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F510u; }
        if (ctx->pc != 0x26F510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDist__12CSceneCmrSeqFf_0x25a1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F510u; }
        if (ctx->pc != 0x26F510u) { return; }
    }
    ctx->pc = 0x26F510u;
label_26f510:
    // 0x26f510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26f510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f518: 0x3e00008  jr          $ra
    ctx->pc = 0x26F518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F518u;
            // 0x26f51c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26F520u;
}
