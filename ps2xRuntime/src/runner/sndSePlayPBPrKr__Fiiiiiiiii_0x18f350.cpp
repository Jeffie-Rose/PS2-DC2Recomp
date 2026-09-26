#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSePlayPBPrKr__Fiiiiiiiii
// Address: 0x18f350 - 0x18f418
void sndSePlayPBPrKr__Fiiiiiiiii_0x18f350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSePlayPBPrKr__Fiiiiiiiii_0x18f350");
#endif

    switch (ctx->pc) {
        case 0x18f3b4u: goto label_18f3b4;
        case 0x18f3e4u: goto label_18f3e4;
        case 0x18f3ecu: goto label_18f3ec;
        default: break;
    }

    ctx->pc = 0x18f350u;

    // 0x18f350: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x18f350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x18f354: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x18f354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x18f358: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x18f358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x18f35c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x18f35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x18f360: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x18f360u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f364: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x18f364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x18f368: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x18f368u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f36c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x18f36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x18f370: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x18f370u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f374: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18f374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x18f378: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x18f378u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f37c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18f37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18f380: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18f380u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f384: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18f384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18f388: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x18f388u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f38c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18f38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18f390: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x18f390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f394: 0x6010002  bgez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F394u;
    {
        const bool branch_taken_0x18f394 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x18F398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F394u;
            // 0x18f398: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f394) {
            ctx->pc = 0x18F3A0u;
            goto label_18f3a0;
        }
    }
    ctx->pc = 0x18F39Cu;
    // 0x18f39c: 0x2410007f  addiu       $s0, $zero, 0x7F
    ctx->pc = 0x18f39cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_18f3a0:
    // 0x18f3a0: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F3A0u;
    {
        const bool branch_taken_0x18f3a0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x18f3a0) {
            ctx->pc = 0x18F3ACu;
            goto label_18f3ac;
        }
    }
    ctx->pc = 0x18F3A8u;
    // 0x18f3a8: 0x2411007f  addiu       $s1, $zero, 0x7F
    ctx->pc = 0x18f3a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_18f3ac:
    // 0x18f3ac: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x18F3ACu;
    SET_GPR_U32(ctx, 31, 0x18F3B4u);
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3B4u; }
        if (ctx->pc != 0x18F3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3B4u; }
        if (ctx->pc != 0x18F3B4u) { return; }
    }
    ctx->pc = 0x18F3B4u;
label_18f3b4:
    // 0x18f3b4: 0xffb70000  sd          $s7, 0x0($sp)
    ctx->pc = 0x18f3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 23));
    // 0x18f3b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x18f3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f3bc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x18f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18f3c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x18f3c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f3c4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x18f3c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f3c8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x18f3c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f3cc: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x18f3ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f3d0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x18f3d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f3d4: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x18f3d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f3d8: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x18f3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x18f3dc: 0xc062704  jal         func_189C10
    ctx->pc = 0x18F3DCu;
    SET_GPR_U32(ctx, 31, 0x18F3E4u);
    ctx->pc = 0x18F3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F3DCu;
            // 0x18f3e0: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189C10u;
    if (runtime->hasFunction(0x189C10u)) {
        auto targetFn = runtime->lookupFunction(0x189C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3E4u; }
        if (ctx->pc != 0x18F3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SE_Play__6CSoundFiiiiiiiii_0x189c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3E4u; }
        if (ctx->pc != 0x18F3E4u) { return; }
    }
    ctx->pc = 0x18F3E4u;
label_18f3e4:
    // 0x18f3e4: 0xc063340  jal         func_18CD00
    ctx->pc = 0x18F3E4u;
    SET_GPR_U32(ctx, 31, 0x18F3ECu);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3ECu; }
        if (ctx->pc != 0x18F3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3ECu; }
        if (ctx->pc != 0x18F3ECu) { return; }
    }
    ctx->pc = 0x18F3ECu;
label_18f3ec:
    // 0x18f3ec: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x18f3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18f3f0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x18f3f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18f3f4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x18f3f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18f3f8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x18f3f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f3fc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x18f3fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18f400: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18f400u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18f404: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18f404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f408: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18f408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f40c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18f40cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f410: 0x3e00008  jr          $ra
    ctx->pc = 0x18F410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F410u;
            // 0x18f414: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F418u;
}
