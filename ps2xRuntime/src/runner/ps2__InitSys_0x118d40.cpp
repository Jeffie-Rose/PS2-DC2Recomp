#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _InitSys
// Address: 0x118d40 - 0x118d7c
void ps2__InitSys_0x118d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InitSys_0x118d40");
#endif

    switch (ctx->pc) {
        case 0x118d50u: goto label_118d50;
        case 0x118d58u: goto label_118d58;
        case 0x118d60u: goto label_118d60;
        case 0x118d68u: goto label_118d68;
        case 0x118d70u: goto label_118d70;
        default: break;
    }

    ctx->pc = 0x118d40u;

    // 0x118d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x118d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x118d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x118d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x118d48: 0xc046310  jal         func_118C40
    ctx->pc = 0x118D48u;
    SET_GPR_U32(ctx, 31, 0x118D50u);
    ctx->pc = 0x118C40u;
    if (runtime->hasFunction(0x118C40u)) {
        auto targetFn = runtime->lookupFunction(0x118C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D50u; }
        if (ctx->pc != 0x118D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        supplement_crt0_0x118c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D50u; }
        if (ctx->pc != 0x118D50u) { return; }
    }
    ctx->pc = 0x118D50u;
label_118d50:
    // 0x118d50: 0xc046334  jal         func_118CD0
    ctx->pc = 0x118D50u;
    SET_GPR_U32(ctx, 31, 0x118D58u);
    ctx->pc = 0x118CD0u;
    if (runtime->hasFunction(0x118CD0u)) {
        auto targetFn = runtime->lookupFunction(0x118CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D58u; }
        if (ctx->pc != 0x118D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemCallTableEntry_0x118cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D58u; }
        if (ctx->pc != 0x118D58u) { return; }
    }
    ctx->pc = 0x118D58u;
label_118d58:
    // 0x118d58: 0xc044392  jal         func_110E48
    ctx->pc = 0x118D58u;
    SET_GPR_U32(ctx, 31, 0x118D60u);
    ctx->pc = 0x110E48u;
    if (runtime->hasFunction(0x110E48u)) {
        auto targetFn = runtime->lookupFunction(0x110E48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D60u; }
        if (ctx->pc != 0x118D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitAlarm_0x110e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D60u; }
        if (ctx->pc != 0x118D60u) { return; }
    }
    ctx->pc = 0x118D60u;
label_118d60:
    // 0x118d60: 0xc0443fe  jal         func_110FF8
    ctx->pc = 0x118D60u;
    SET_GPR_U32(ctx, 31, 0x118D68u);
    ctx->pc = 0x110FF8u;
    if (runtime->hasFunction(0x110FF8u)) {
        auto targetFn = runtime->lookupFunction(0x110FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D68u; }
        if (ctx->pc != 0x118D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitThread_0x110ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D68u; }
        if (ctx->pc != 0x118D68u) { return; }
    }
    ctx->pc = 0x118D68u;
label_118d68:
    // 0x118d68: 0xc046394  jal         func_118E50
    ctx->pc = 0x118D68u;
    SET_GPR_U32(ctx, 31, 0x118D70u);
    ctx->pc = 0x118E50u;
    if (runtime->hasFunction(0x118E50u)) {
        auto targetFn = runtime->lookupFunction(0x118E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D70u; }
        if (ctx->pc != 0x118D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitExecPS2_0x118e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D70u; }
        if (ctx->pc != 0x118D70u) { return; }
    }
    ctx->pc = 0x118D70u;
label_118d70:
    // 0x118d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x118d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118d74: 0x8046126  j           func_118498
    ctx->pc = 0x118D74u;
    ctx->pc = 0x118D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118D74u;
            // 0x118d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118498u;
    if (runtime->hasFunction(0x118498u)) {
        auto targetFn = runtime->lookupFunction(0x118498u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        InitTLBFunctions_0x118498(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x118D7Cu;
}
