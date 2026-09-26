#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSetSePanPBPrKr__Fiiiiii
// Address: 0x18f540 - 0x18f5c8
void sndSetSePanPBPrKr__Fiiiiii_0x18f540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSetSePanPBPrKr__Fiiiiii_0x18f540");
#endif

    switch (ctx->pc) {
        case 0x18f57cu: goto label_18f57c;
        case 0x18f59cu: goto label_18f59c;
        case 0x18f5a4u: goto label_18f5a4;
        default: break;
    }

    ctx->pc = 0x18f540u;

    // 0x18f540: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18f540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18f544: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x18f544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x18f548: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18f548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18f54c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18f54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18f550: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x18f550u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f554: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18f554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18f558: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x18f558u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f55c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18f55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18f560: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x18f560u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f564: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18f568: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x18f568u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f56c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18f570: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x18f570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f574: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x18F574u;
    SET_GPR_U32(ctx, 31, 0x18F57Cu);
    ctx->pc = 0x18F578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F574u;
            // 0x18f578: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F57Cu; }
        if (ctx->pc != 0x18F57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F57Cu; }
        if (ctx->pc != 0x18F57Cu) { return; }
    }
    ctx->pc = 0x18F57Cu;
label_18f57c:
    // 0x18f57c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x18f57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f580: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x18f580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f584: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x18f584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f588: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x18f588u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f58c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x18f58cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f590: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x18f590u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f594: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x18F594u;
    SET_GPR_U32(ctx, 31, 0x18F59Cu);
    ctx->pc = 0x18F598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F594u;
            // 0x18f598: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (runtime->hasFunction(0x189EF0u)) {
        auto targetFn = runtime->lookupFunction(0x189EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F59Cu; }
        if (ctx->pc != 0x18F59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SE_SetPan__6CSoundFiiiiii_0x189ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F59Cu; }
        if (ctx->pc != 0x18F59Cu) { return; }
    }
    ctx->pc = 0x18F59Cu;
label_18f59c:
    // 0x18f59c: 0xc063340  jal         func_18CD00
    ctx->pc = 0x18F59Cu;
    SET_GPR_U32(ctx, 31, 0x18F5A4u);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F5A4u; }
        if (ctx->pc != 0x18F5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F5A4u; }
        if (ctx->pc != 0x18F5A4u) { return; }
    }
    ctx->pc = 0x18F5A4u;
label_18f5a4:
    // 0x18f5a4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x18f5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f5a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18f5a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18f5ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18f5acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18f5b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18f5b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f5b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18f5b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f5b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f5b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f5bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f5bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x18F5C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F5C0u;
            // 0x18f5c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F5C8u;
}
