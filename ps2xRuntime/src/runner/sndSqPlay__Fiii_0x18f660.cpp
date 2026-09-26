#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSqPlay__Fiii
// Address: 0x18f660 - 0x18f6b8
void sndSqPlay__Fiii_0x18f660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSqPlay__Fiii_0x18f660");
#endif

    switch (ctx->pc) {
        case 0x18f684u: goto label_18f684;
        case 0x18f698u: goto label_18f698;
        case 0x18f6a0u: goto label_18f6a0;
        default: break;
    }

    ctx->pc = 0x18f660u;

    // 0x18f660: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18f660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18f664: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18f664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18f668: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18f668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18f66c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18f670: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18f670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f674: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18f678: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18f678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f67c: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x18F67Cu;
    SET_GPR_U32(ctx, 31, 0x18F684u);
    ctx->pc = 0x18F680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F67Cu;
            // 0x18f680: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F684u; }
        if (ctx->pc != 0x18F684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F684u; }
        if (ctx->pc != 0x18F684u) { return; }
    }
    ctx->pc = 0x18F684u;
label_18f684:
    // 0x18f684: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18f684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f688: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18f688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f68c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18f68cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f690: 0xc0626a0  jal         func_189A80
    ctx->pc = 0x18F690u;
    SET_GPR_U32(ctx, 31, 0x18F698u);
    ctx->pc = 0x18F694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F690u;
            // 0x18f694: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189A80u;
    if (runtime->hasFunction(0x189A80u)) {
        auto targetFn = runtime->lookupFunction(0x189A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F698u; }
        if (ctx->pc != 0x18F698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SQ_Play__6CSoundFiii_0x189a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F698u; }
        if (ctx->pc != 0x18F698u) { return; }
    }
    ctx->pc = 0x18F698u;
label_18f698:
    // 0x18f698: 0xc063340  jal         func_18CD00
    ctx->pc = 0x18F698u;
    SET_GPR_U32(ctx, 31, 0x18F6A0u);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F6A0u; }
        if (ctx->pc != 0x18F6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F6A0u; }
        if (ctx->pc != 0x18F6A0u) { return; }
    }
    ctx->pc = 0x18F6A0u;
label_18f6a0:
    // 0x18f6a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18f6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f6a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18f6a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f6a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f6a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f6ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f6acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x18F6B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F6B0u;
            // 0x18f6b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F6B8u;
}
