#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndStreamPlay__Fv
// Address: 0x190500 - 0x190530
void sndStreamPlay__Fv_0x190500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndStreamPlay__Fv_0x190500");
#endif

    switch (ctx->pc) {
        case 0x190510u: goto label_190510;
        case 0x19051cu: goto label_19051c;
        case 0x190524u: goto label_190524;
        default: break;
    }

    ctx->pc = 0x190500u;

    // 0x190500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190508: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x190508u;
    SET_GPR_U32(ctx, 31, 0x190510u);
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190510u; }
        if (ctx->pc != 0x190510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190510u; }
        if (ctx->pc != 0x190510u) { return; }
    }
    ctx->pc = 0x190510u;
label_190510:
    // 0x190510: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x190510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x190514: 0xc062bf0  jal         func_18AFC0
    ctx->pc = 0x190514u;
    SET_GPR_U32(ctx, 31, 0x19051Cu);
    ctx->pc = 0x190518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190514u;
            // 0x190518: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AFC0u;
    if (runtime->hasFunction(0x18AFC0u)) {
        auto targetFn = runtime->lookupFunction(0x18AFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19051Cu; }
        if (ctx->pc != 0x19051Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamPlay__6CSoundFi_0x18afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19051Cu; }
        if (ctx->pc != 0x19051Cu) { return; }
    }
    ctx->pc = 0x19051Cu;
label_19051c:
    // 0x19051c: 0xc063340  jal         func_18CD00
    ctx->pc = 0x19051Cu;
    SET_GPR_U32(ctx, 31, 0x190524u);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190524u; }
        if (ctx->pc != 0x190524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190524u; }
        if (ctx->pc != 0x190524u) { return; }
    }
    ctx->pc = 0x190524u;
label_190524:
    // 0x190524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190528: 0x3e00008  jr          $ra
    ctx->pc = 0x190528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19052Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190528u;
            // 0x19052c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190530u;
}
