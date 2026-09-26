#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndStreamClose__Fv
// Address: 0x1905d0 - 0x190600
void sndStreamClose__Fv_0x1905d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndStreamClose__Fv_0x1905d0");
#endif

    switch (ctx->pc) {
        case 0x1905e0u: goto label_1905e0;
        case 0x1905ecu: goto label_1905ec;
        case 0x1905f4u: goto label_1905f4;
        default: break;
    }

    ctx->pc = 0x1905d0u;

    // 0x1905d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1905d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1905d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1905d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1905d8: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x1905D8u;
    SET_GPR_U32(ctx, 31, 0x1905E0u);
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1905E0u; }
        if (ctx->pc != 0x1905E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1905E0u; }
        if (ctx->pc != 0x1905E0u) { return; }
    }
    ctx->pc = 0x1905E0u;
label_1905e0:
    // 0x1905e0: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x1905e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x1905e4: 0xc062bf8  jal         func_18AFE0
    ctx->pc = 0x1905E4u;
    SET_GPR_U32(ctx, 31, 0x1905ECu);
    ctx->pc = 0x1905E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1905E4u;
            // 0x1905e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AFE0u;
    if (runtime->hasFunction(0x18AFE0u)) {
        auto targetFn = runtime->lookupFunction(0x18AFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1905ECu; }
        if (ctx->pc != 0x1905ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamClose__6CSoundFi_0x18afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1905ECu; }
        if (ctx->pc != 0x1905ECu) { return; }
    }
    ctx->pc = 0x1905ECu;
label_1905ec:
    // 0x1905ec: 0xc063340  jal         func_18CD00
    ctx->pc = 0x1905ECu;
    SET_GPR_U32(ctx, 31, 0x1905F4u);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1905F4u; }
        if (ctx->pc != 0x1905F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1905F4u; }
        if (ctx->pc != 0x1905F4u) { return; }
    }
    ctx->pc = 0x1905F4u;
label_1905f4:
    // 0x1905f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1905f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1905f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1905F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1905FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1905F8u;
            // 0x1905fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190600u;
}
