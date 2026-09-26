#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndStreamStandBy__Fv
// Address: 0x1903e0 - 0x190410
void sndStreamStandBy__Fv_0x1903e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndStreamStandBy__Fv_0x1903e0");
#endif

    switch (ctx->pc) {
        case 0x1903f0u: goto label_1903f0;
        case 0x1903fcu: goto label_1903fc;
        case 0x190404u: goto label_190404;
        default: break;
    }

    ctx->pc = 0x1903e0u;

    // 0x1903e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1903e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1903e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1903e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1903e8: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x1903E8u;
    SET_GPR_U32(ctx, 31, 0x1903F0u);
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1903F0u; }
        if (ctx->pc != 0x1903F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1903F0u; }
        if (ctx->pc != 0x1903F0u) { return; }
    }
    ctx->pc = 0x1903F0u;
label_1903f0:
    // 0x1903f0: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x1903f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x1903f4: 0xc062c3c  jal         func_18B0F0
    ctx->pc = 0x1903F4u;
    SET_GPR_U32(ctx, 31, 0x1903FCu);
    ctx->pc = 0x1903F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1903F4u;
            // 0x1903f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B0F0u;
    if (runtime->hasFunction(0x18B0F0u)) {
        auto targetFn = runtime->lookupFunction(0x18B0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1903FCu; }
        if (ctx->pc != 0x1903FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamStandBy__6CSoundFi_0x18b0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1903FCu; }
        if (ctx->pc != 0x1903FCu) { return; }
    }
    ctx->pc = 0x1903FCu;
label_1903fc:
    // 0x1903fc: 0xc063340  jal         func_18CD00
    ctx->pc = 0x1903FCu;
    SET_GPR_U32(ctx, 31, 0x190404u);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190404u; }
        if (ctx->pc != 0x190404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190404u; }
        if (ctx->pc != 0x190404u) { return; }
    }
    ctx->pc = 0x190404u;
label_190404:
    // 0x190404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190408: 0x3e00008  jr          $ra
    ctx->pc = 0x190408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19040Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190408u;
            // 0x19040c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190410u;
}
