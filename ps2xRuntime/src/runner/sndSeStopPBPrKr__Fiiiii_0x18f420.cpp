#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSeStopPBPrKr__Fiiiii
// Address: 0x18f420 - 0x18f498
void sndSeStopPBPrKr__Fiiiii_0x18f420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSeStopPBPrKr__Fiiiii_0x18f420");
#endif

    switch (ctx->pc) {
        case 0x18f454u: goto label_18f454;
        case 0x18f470u: goto label_18f470;
        case 0x18f478u: goto label_18f478;
        default: break;
    }

    ctx->pc = 0x18f420u;

    // 0x18f420: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18f420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18f424: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18f424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18f428: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18f428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18f42c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18f42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18f430: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x18f430u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f434: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18f434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18f438: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18f438u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f43c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18f440: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x18f440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f444: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18f448: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x18f448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f44c: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x18F44Cu;
    SET_GPR_U32(ctx, 31, 0x18F454u);
    ctx->pc = 0x18F450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F44Cu;
            // 0x18f450: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F454u; }
        if (ctx->pc != 0x18F454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F454u; }
        if (ctx->pc != 0x18F454u) { return; }
    }
    ctx->pc = 0x18F454u;
label_18f454:
    // 0x18f454: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x18f454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f458: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x18f458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f45c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x18f45cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f460: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x18f460u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f464: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x18f464u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f468: 0xc062800  jal         func_18A000
    ctx->pc = 0x18F468u;
    SET_GPR_U32(ctx, 31, 0x18F470u);
    ctx->pc = 0x18F46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F468u;
            // 0x18f46c: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A000u;
    if (runtime->hasFunction(0x18A000u)) {
        auto targetFn = runtime->lookupFunction(0x18A000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F470u; }
        if (ctx->pc != 0x18F470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SE_Stop__6CSoundFiiiii_0x18a000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F470u; }
        if (ctx->pc != 0x18F470u) { return; }
    }
    ctx->pc = 0x18F470u;
label_18f470:
    // 0x18f470: 0xc063340  jal         func_18CD00
    ctx->pc = 0x18F470u;
    SET_GPR_U32(ctx, 31, 0x18F478u);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F478u; }
        if (ctx->pc != 0x18F478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F478u; }
        if (ctx->pc != 0x18F478u) { return; }
    }
    ctx->pc = 0x18F478u;
label_18f478:
    // 0x18f478: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18f478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18f47c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18f47cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18f480: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18f480u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f484: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18f484u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f488: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f48c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f48cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f490: 0x3e00008  jr          $ra
    ctx->pc = 0x18F490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F490u;
            // 0x18f494: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F498u;
}
