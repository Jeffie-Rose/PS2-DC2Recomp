#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_SET_TEXNAME__FP12RS_STACKDATAi
// Address: 0x2e55c0 - 0x2e55f0
void ps2__SPT_SET_TEXNAME__FP12RS_STACKDATAi_0x2e55c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_SET_TEXNAME__FP12RS_STACKDATAi_0x2e55c0");
#endif

    switch (ctx->pc) {
        case 0x2e55d0u: goto label_2e55d0;
        case 0x2e55e0u: goto label_2e55e0;
        default: break;
    }

    ctx->pc = 0x2e55c0u;

    // 0x2e55c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e55c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e55c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e55c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e55c8: 0xc0b8cd0  jal         func_2E3340
    ctx->pc = 0x2E55C8u;
    SET_GPR_U32(ctx, 31, 0x2E55D0u);
    ctx->pc = 0x2E3340u;
    if (runtime->hasFunction(0x2E3340u)) {
        auto targetFn = runtime->lookupFunction(0x2E3340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E55D0u; }
        if (ctx->pc != 0x2E55D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2e3340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E55D0u; }
        if (ctx->pc != 0x2E55D0u) { return; }
    }
    ctx->pc = 0x2E55D0u;
label_2e55d0:
    // 0x2e55d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e55d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e55d4: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e55d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e55d8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2E55D8u;
    SET_GPR_U32(ctx, 31, 0x2E55E0u);
    ctx->pc = 0x2E55DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E55D8u;
            // 0x2e55dc: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E55E0u; }
        if (ctx->pc != 0x2E55E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E55E0u; }
        if (ctx->pc != 0x2E55E0u) { return; }
    }
    ctx->pc = 0x2E55E0u;
label_2e55e0:
    // 0x2e55e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e55e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e55e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e55e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e55e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E55E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E55ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E55E8u;
            // 0x2e55ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E55F0u;
}
