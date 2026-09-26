#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndStreamOpenFast__FPc
// Address: 0x190360 - 0x19039c
void sndStreamOpenFast__FPc_0x190360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndStreamOpenFast__FPc_0x190360");
#endif

    switch (ctx->pc) {
        case 0x190374u: goto label_190374;
        case 0x190384u: goto label_190384;
        case 0x19038cu: goto label_19038c;
        default: break;
    }

    ctx->pc = 0x190360u;

    // 0x190360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x190360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x190364: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x190364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x190368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x190368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19036c: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x19036Cu;
    SET_GPR_U32(ctx, 31, 0x190374u);
    ctx->pc = 0x190370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19036Cu;
            // 0x190370: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190374u; }
        if (ctx->pc != 0x190374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190374u; }
        if (ctx->pc != 0x190374u) { return; }
    }
    ctx->pc = 0x190374u;
label_190374:
    // 0x190374: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x190374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190378: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x190378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x19037c: 0xc062bbc  jal         func_18AEF0
    ctx->pc = 0x19037Cu;
    SET_GPR_U32(ctx, 31, 0x190384u);
    ctx->pc = 0x190380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19037Cu;
            // 0x190380: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AEF0u;
    if (runtime->hasFunction(0x18AEF0u)) {
        auto targetFn = runtime->lookupFunction(0x18AEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190384u; }
        if (ctx->pc != 0x190384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamOpenFast__6CSoundFiPc_0x18aef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190384u; }
        if (ctx->pc != 0x190384u) { return; }
    }
    ctx->pc = 0x190384u;
label_190384:
    // 0x190384: 0xc063340  jal         func_18CD00
    ctx->pc = 0x190384u;
    SET_GPR_U32(ctx, 31, 0x19038Cu);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19038Cu; }
        if (ctx->pc != 0x19038Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19038Cu; }
        if (ctx->pc != 0x19038Cu) { return; }
    }
    ctx->pc = 0x19038Cu;
label_19038c:
    // 0x19038c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19038cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190390: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x190390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190394: 0x3e00008  jr          $ra
    ctx->pc = 0x190394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190394u;
            // 0x190398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19039Cu;
}
