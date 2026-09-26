#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSetSePitchPBPrKr__Fiiiiii
// Address: 0x18f5d0 - 0x18f658
void sndSetSePitchPBPrKr__Fiiiiii_0x18f5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSetSePitchPBPrKr__Fiiiiii_0x18f5d0");
#endif

    switch (ctx->pc) {
        case 0x18f60cu: goto label_18f60c;
        case 0x18f62cu: goto label_18f62c;
        case 0x18f634u: goto label_18f634;
        default: break;
    }

    ctx->pc = 0x18f5d0u;

    // 0x18f5d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18f5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18f5d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x18f5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x18f5d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18f5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18f5dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18f5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18f5e0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x18f5e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f5e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18f5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18f5e8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x18f5e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f5ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18f5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18f5f0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x18f5f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f5f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18f5f8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x18f5f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f5fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18f600: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x18f600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f604: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x18F604u;
    SET_GPR_U32(ctx, 31, 0x18F60Cu);
    ctx->pc = 0x18F608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F604u;
            // 0x18f608: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F60Cu; }
        if (ctx->pc != 0x18F60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F60Cu; }
        if (ctx->pc != 0x18F60Cu) { return; }
    }
    ctx->pc = 0x18F60Cu;
label_18f60c:
    // 0x18f60c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x18f60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f610: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x18f610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f614: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x18f614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f618: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x18f618u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f61c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x18f61cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f620: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x18f620u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f624: 0xc062b80  jal         func_18AE00
    ctx->pc = 0x18F624u;
    SET_GPR_U32(ctx, 31, 0x18F62Cu);
    ctx->pc = 0x18F628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F624u;
            // 0x18f628: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AE00u;
    if (runtime->hasFunction(0x18AE00u)) {
        auto targetFn = runtime->lookupFunction(0x18AE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F62Cu; }
        if (ctx->pc != 0x18F62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SE_SetPitch__6CSoundFiiiiii_0x18ae00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F62Cu; }
        if (ctx->pc != 0x18F62Cu) { return; }
    }
    ctx->pc = 0x18F62Cu;
label_18f62c:
    // 0x18f62c: 0xc063340  jal         func_18CD00
    ctx->pc = 0x18F62Cu;
    SET_GPR_U32(ctx, 31, 0x18F634u);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F634u; }
        if (ctx->pc != 0x18F634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F634u; }
        if (ctx->pc != 0x18F634u) { return; }
    }
    ctx->pc = 0x18F634u;
label_18f634:
    // 0x18f634: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x18f634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f638: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18f638u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18f63c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18f63cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18f640: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18f640u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f644: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18f644u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f648: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f64c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f64cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f650: 0x3e00008  jr          $ra
    ctx->pc = 0x18F650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F650u;
            // 0x18f654: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F658u;
}
