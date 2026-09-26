#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSqRePlay__Fii
// Address: 0x18f7a0 - 0x18f7d8
void sndSqRePlay__Fii_0x18f7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSqRePlay__Fii_0x18f7a0");
#endif

    switch (ctx->pc) {
        case 0x18f7b4u: goto label_18f7b4;
        case 0x18f7c0u: goto label_18f7c0;
        case 0x18f7c8u: goto label_18f7c8;
        default: break;
    }

    ctx->pc = 0x18f7a0u;

    // 0x18f7a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18f7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18f7a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18f7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18f7a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18f7ac: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x18F7ACu;
    SET_GPR_U32(ctx, 31, 0x18F7B4u);
    ctx->pc = 0x18F7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F7ACu;
            // 0x18f7b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7B4u; }
        if (ctx->pc != 0x18F7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7B4u; }
        if (ctx->pc != 0x18F7B4u) { return; }
    }
    ctx->pc = 0x18F7B4u;
label_18f7b4:
    // 0x18f7b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18f7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f7b8: 0xc0626ec  jal         func_189BB0
    ctx->pc = 0x18F7B8u;
    SET_GPR_U32(ctx, 31, 0x18F7C0u);
    ctx->pc = 0x18F7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F7B8u;
            // 0x18f7bc: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189BB0u;
    if (runtime->hasFunction(0x189BB0u)) {
        auto targetFn = runtime->lookupFunction(0x189BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7C0u; }
        if (ctx->pc != 0x18F7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SQ_RePlay__6CSoundFi_0x189bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7C0u; }
        if (ctx->pc != 0x18F7C0u) { return; }
    }
    ctx->pc = 0x18F7C0u;
label_18f7c0:
    // 0x18f7c0: 0xc063340  jal         func_18CD00
    ctx->pc = 0x18F7C0u;
    SET_GPR_U32(ctx, 31, 0x18F7C8u);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7C8u; }
        if (ctx->pc != 0x18F7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7C8u; }
        if (ctx->pc != 0x18F7C8u) { return; }
    }
    ctx->pc = 0x18F7C8u;
label_18f7c8:
    // 0x18f7c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18f7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f7cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f7ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x18F7D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F7D0u;
            // 0x18f7d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F7D8u;
}
