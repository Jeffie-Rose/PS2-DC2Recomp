#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AutoSetSub__6ClsMesFP11CCharacter2P11CCharacter2Pi
// Address: 0x152300 - 0x152344
void AutoSetSub__6ClsMesFP11CCharacter2P11CCharacter2Pi_0x152300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AutoSetSub__6ClsMesFP11CCharacter2P11CCharacter2Pi_0x152300");
#endif

    switch (ctx->pc) {
        case 0x152324u: goto label_152324;
        case 0x152330u: goto label_152330;
        default: break;
    }

    ctx->pc = 0x152300u;

    // 0x152300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x152300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x152304: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x152304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152308: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x152308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15230c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15230cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x152310: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152314: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x152314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152318: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x152318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15231c: 0xc05480c  jal         func_152030
    ctx->pc = 0x15231Cu;
    SET_GPR_U32(ctx, 31, 0x152324u);
    ctx->pc = 0x152320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15231Cu;
            // 0x152320: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152030u;
    if (runtime->hasFunction(0x152030u)) {
        auto targetFn = runtime->lookupFunction(0x152030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152324u; }
        if (ctx->pc != 0x152324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScrPosFromChar__FP11CCharacter2Pi_0x152030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152324u; }
        if (ctx->pc != 0x152324u) { return; }
    }
    ctx->pc = 0x152324u;
label_152324:
    // 0x152324: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x152324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152328: 0xc05480c  jal         func_152030
    ctx->pc = 0x152328u;
    SET_GPR_U32(ctx, 31, 0x152330u);
    ctx->pc = 0x15232Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152328u;
            // 0x15232c: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152030u;
    if (runtime->hasFunction(0x152030u)) {
        auto targetFn = runtime->lookupFunction(0x152030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152330u; }
        if (ctx->pc != 0x152330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScrPosFromChar__FP11CCharacter2Pi_0x152030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152330u; }
        if (ctx->pc != 0x152330u) { return; }
    }
    ctx->pc = 0x152330u;
label_152330:
    // 0x152330: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x152330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152334: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152338: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15233c: 0x3e00008  jr          $ra
    ctx->pc = 0x15233Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15233Cu;
            // 0x152340: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152344u;
}
