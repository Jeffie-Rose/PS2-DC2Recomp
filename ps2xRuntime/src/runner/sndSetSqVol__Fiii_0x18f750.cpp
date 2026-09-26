#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSetSqVol__Fiii
// Address: 0x18f750 - 0x18f798
void sndSetSqVol__Fiii_0x18f750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSetSqVol__Fiii_0x18f750");
#endif

    switch (ctx->pc) {
        case 0x18f76cu: goto label_18f76c;
        case 0x18f77cu: goto label_18f77c;
        case 0x18f784u: goto label_18f784;
        default: break;
    }

    ctx->pc = 0x18f750u;

    // 0x18f750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18f750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18f754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18f754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18f758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18f75c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18f760: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18f760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f764: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x18F764u;
    SET_GPR_U32(ctx, 31, 0x18F76Cu);
    ctx->pc = 0x18F768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F764u;
            // 0x18f768: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F76Cu; }
        if (ctx->pc != 0x18F76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F76Cu; }
        if (ctx->pc != 0x18F76Cu) { return; }
    }
    ctx->pc = 0x18F76Cu;
label_18f76c:
    // 0x18f76c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18f76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f770: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18f770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f774: 0xc0628b0  jal         func_18A2C0
    ctx->pc = 0x18F774u;
    SET_GPR_U32(ctx, 31, 0x18F77Cu);
    ctx->pc = 0x18F778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F774u;
            // 0x18f778: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A2C0u;
    if (runtime->hasFunction(0x18A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x18A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F77Cu; }
        if (ctx->pc != 0x18F77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVol__6CSoundFii_0x18a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F77Cu; }
        if (ctx->pc != 0x18F77Cu) { return; }
    }
    ctx->pc = 0x18F77Cu;
label_18f77c:
    // 0x18f77c: 0xc063340  jal         func_18CD00
    ctx->pc = 0x18F77Cu;
    SET_GPR_U32(ctx, 31, 0x18F784u);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F784u; }
        if (ctx->pc != 0x18F784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F784u; }
        if (ctx->pc != 0x18F784u) { return; }
    }
    ctx->pc = 0x18F784u;
label_18f784:
    // 0x18f784: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18f784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f788: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f78c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f78cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f790: 0x3e00008  jr          $ra
    ctx->pc = 0x18F790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F790u;
            // 0x18f794: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F798u;
}
