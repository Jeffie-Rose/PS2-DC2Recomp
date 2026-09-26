#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSetSeVolPBPrKr__Fiiiiii
// Address: 0x18f4a0 - 0x18f534
void sndSetSeVolPBPrKr__Fiiiiii_0x18f4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSetSeVolPBPrKr__Fiiiiii_0x18f4a0");
#endif

    switch (ctx->pc) {
        case 0x18f4e8u: goto label_18f4e8;
        case 0x18f508u: goto label_18f508;
        case 0x18f510u: goto label_18f510;
        default: break;
    }

    ctx->pc = 0x18f4a0u;

    // 0x18f4a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18f4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18f4a4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x18f4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x18f4a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18f4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18f4ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18f4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18f4b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x18f4b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f4b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18f4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18f4b8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x18f4b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f4bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18f4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18f4c0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x18f4c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f4c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18f4c8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x18f4c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f4cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18f4d0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x18f4d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f4d4: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F4D4u;
    {
        const bool branch_taken_0x18f4d4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x18F4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F4D4u;
            // 0x18f4d8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f4d4) {
            ctx->pc = 0x18F4E0u;
            goto label_18f4e0;
        }
    }
    ctx->pc = 0x18F4DCu;
    // 0x18f4dc: 0x2411007f  addiu       $s1, $zero, 0x7F
    ctx->pc = 0x18f4dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_18f4e0:
    // 0x18f4e0: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x18F4E0u;
    SET_GPR_U32(ctx, 31, 0x18F4E8u);
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F4E8u; }
        if (ctx->pc != 0x18F4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F4E8u; }
        if (ctx->pc != 0x18F4E8u) { return; }
    }
    ctx->pc = 0x18F4E8u;
label_18f4e8:
    // 0x18f4e8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x18f4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f4ec: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x18f4ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f4f0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x18f4f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f4f4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x18f4f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f4f8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x18f4f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f4fc: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x18f4fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f500: 0xc062778  jal         func_189DE0
    ctx->pc = 0x18F500u;
    SET_GPR_U32(ctx, 31, 0x18F508u);
    ctx->pc = 0x18F504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F500u;
            // 0x18f504: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189DE0u;
    if (runtime->hasFunction(0x189DE0u)) {
        auto targetFn = runtime->lookupFunction(0x189DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F508u; }
        if (ctx->pc != 0x18F508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SE_SetVol__6CSoundFiiiiii_0x189de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F508u; }
        if (ctx->pc != 0x18F508u) { return; }
    }
    ctx->pc = 0x18F508u;
label_18f508:
    // 0x18f508: 0xc063340  jal         func_18CD00
    ctx->pc = 0x18F508u;
    SET_GPR_U32(ctx, 31, 0x18F510u);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F510u; }
        if (ctx->pc != 0x18F510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F510u; }
        if (ctx->pc != 0x18F510u) { return; }
    }
    ctx->pc = 0x18F510u;
label_18f510:
    // 0x18f510: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x18f510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f514: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18f514u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18f518: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18f518u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18f51c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18f51cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f520: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18f520u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f524: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f528: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f52c: 0x3e00008  jr          $ra
    ctx->pc = 0x18F52Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F52Cu;
            // 0x18f530: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F534u;
}
