#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndStreamRePlay__Fv
// Address: 0x190560 - 0x190590
void sndStreamRePlay__Fv_0x190560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndStreamRePlay__Fv_0x190560");
#endif

    switch (ctx->pc) {
        case 0x190570u: goto label_190570;
        case 0x19057cu: goto label_19057c;
        case 0x190584u: goto label_190584;
        default: break;
    }

    ctx->pc = 0x190560u;

    // 0x190560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190568: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x190568u;
    SET_GPR_U32(ctx, 31, 0x190570u);
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190570u; }
        if (ctx->pc != 0x190570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190570u; }
        if (ctx->pc != 0x190570u) { return; }
    }
    ctx->pc = 0x190570u;
label_190570:
    // 0x190570: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x190570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x190574: 0xc062c24  jal         func_18B090
    ctx->pc = 0x190574u;
    SET_GPR_U32(ctx, 31, 0x19057Cu);
    ctx->pc = 0x190578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190574u;
            // 0x190578: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B090u;
    if (runtime->hasFunction(0x18B090u)) {
        auto targetFn = runtime->lookupFunction(0x18B090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19057Cu; }
        if (ctx->pc != 0x19057Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamRePlay__6CSoundFi_0x18b090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19057Cu; }
        if (ctx->pc != 0x19057Cu) { return; }
    }
    ctx->pc = 0x19057Cu;
label_19057c:
    // 0x19057c: 0xc063340  jal         func_18CD00
    ctx->pc = 0x19057Cu;
    SET_GPR_U32(ctx, 31, 0x190584u);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190584u; }
        if (ctx->pc != 0x190584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190584u; }
        if (ctx->pc != 0x190584u) { return; }
    }
    ctx->pc = 0x190584u;
label_190584:
    // 0x190584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190588: 0x3e00008  jr          $ra
    ctx->pc = 0x190588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19058Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190588u;
            // 0x19058c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190590u;
}
