#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndStreamPause__Fv
// Address: 0x190530 - 0x190560
void sndStreamPause__Fv_0x190530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndStreamPause__Fv_0x190530");
#endif

    switch (ctx->pc) {
        case 0x190540u: goto label_190540;
        case 0x19054cu: goto label_19054c;
        case 0x190554u: goto label_190554;
        default: break;
    }

    ctx->pc = 0x190530u;

    // 0x190530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190538: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x190538u;
    SET_GPR_U32(ctx, 31, 0x190540u);
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190540u; }
        if (ctx->pc != 0x190540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190540u; }
        if (ctx->pc != 0x190540u) { return; }
    }
    ctx->pc = 0x190540u;
label_190540:
    // 0x190540: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x190540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x190544: 0xc062c20  jal         func_18B080
    ctx->pc = 0x190544u;
    SET_GPR_U32(ctx, 31, 0x19054Cu);
    ctx->pc = 0x190548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190544u;
            // 0x190548: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B080u;
    if (runtime->hasFunction(0x18B080u)) {
        auto targetFn = runtime->lookupFunction(0x18B080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19054Cu; }
        if (ctx->pc != 0x19054Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamPause__6CSoundFi_0x18b080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19054Cu; }
        if (ctx->pc != 0x19054Cu) { return; }
    }
    ctx->pc = 0x19054Cu;
label_19054c:
    // 0x19054c: 0xc063340  jal         func_18CD00
    ctx->pc = 0x19054Cu;
    SET_GPR_U32(ctx, 31, 0x190554u);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190554u; }
        if (ctx->pc != 0x190554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190554u; }
        if (ctx->pc != 0x190554u) { return; }
    }
    ctx->pc = 0x190554u;
label_190554:
    // 0x190554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190558: 0x3e00008  jr          $ra
    ctx->pc = 0x190558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19055Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190558u;
            // 0x19055c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190560u;
}
