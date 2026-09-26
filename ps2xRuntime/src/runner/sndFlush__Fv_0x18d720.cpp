#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndFlush__Fv
// Address: 0x18d720 - 0x18d74c
void sndFlush__Fv_0x18d720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndFlush__Fv_0x18d720");
#endif

    switch (ctx->pc) {
        case 0x18d730u: goto label_18d730;
        case 0x18d738u: goto label_18d738;
        case 0x18d740u: goto label_18d740;
        default: break;
    }

    ctx->pc = 0x18d720u;

    // 0x18d720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18d720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18d724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18d724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18d728: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x18D728u;
    SET_GPR_U32(ctx, 31, 0x18D730u);
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D730u; }
        if (ctx->pc != 0x18D730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D730u; }
        if (ctx->pc != 0x18D730u) { return; }
    }
    ctx->pc = 0x18D730u;
label_18d730:
    // 0x18d730: 0xc063578  jal         func_18D5E0
    ctx->pc = 0x18D730u;
    SET_GPR_U32(ctx, 31, 0x18D738u);
    ctx->pc = 0x18D5E0u;
    if (runtime->hasFunction(0x18D5E0u)) {
        auto targetFn = runtime->lookupFunction(0x18D5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D738u; }
        if (ctx->pc != 0x18D738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CSndStep__Fv_0x18d5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D738u; }
        if (ctx->pc != 0x18D738u) { return; }
    }
    ctx->pc = 0x18D738u;
label_18d738:
    // 0x18d738: 0xc063340  jal         func_18CD00
    ctx->pc = 0x18D738u;
    SET_GPR_U32(ctx, 31, 0x18D740u);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D740u; }
        if (ctx->pc != 0x18D740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D740u; }
        if (ctx->pc != 0x18D740u) { return; }
    }
    ctx->pc = 0x18D740u;
label_18d740:
    // 0x18d740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18d740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d744: 0x3e00008  jr          $ra
    ctx->pc = 0x18D744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D744u;
            // 0x18d748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D74Cu;
}
