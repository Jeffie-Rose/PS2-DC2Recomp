#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuPolygonSetEnv__Fv
// Address: 0x234650 - 0x23467c
void MenuPolygonSetEnv__Fv_0x234650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuPolygonSetEnv__Fv_0x234650");
#endif

    switch (ctx->pc) {
        case 0x234664u: goto label_234664;
        case 0x234670u: goto label_234670;
        default: break;
    }

    ctx->pc = 0x234650u;

    // 0x234650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x234650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x234654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x234658: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x234658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
    // 0x23465c: 0xc050df4  jal         func_1437D0
    ctx->pc = 0x23465Cu;
    SET_GPR_U32(ctx, 31, 0x234664u);
    ctx->pc = 0x234660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23465Cu;
            // 0x234660: 0x244400b0  addiu       $a0, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437D0u;
    if (runtime->hasFunction(0x1437D0u)) {
        auto targetFn = runtime->lookupFunction(0x1437D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234664u; }
        if (ctx->pc != 0x234664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetAmbient__FPf_0x1437d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234664u; }
        if (ctx->pc != 0x234664u) { return; }
    }
    ctx->pc = 0x234664u;
label_234664:
    // 0x234664: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x234664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
    // 0x234668: 0xc050dec  jal         func_1437B0
    ctx->pc = 0x234668u;
    SET_GPR_U32(ctx, 31, 0x234670u);
    ctx->pc = 0x23466Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234668u;
            // 0x23466c: 0x244400c0  addiu       $a0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234670u; }
        if (ctx->pc != 0x234670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234670u; }
        if (ctx->pc != 0x234670u) { return; }
    }
    ctx->pc = 0x234670u;
label_234670:
    // 0x234670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234674: 0x3e00008  jr          $ra
    ctx->pc = 0x234674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234674u;
            // 0x234678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23467Cu;
}
