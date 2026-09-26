#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndStreamOpenState__Fv
// Address: 0x1903a0 - 0x1903d4
void sndStreamOpenState__Fv_0x1903a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndStreamOpenState__Fv_0x1903a0");
#endif

    switch (ctx->pc) {
        case 0x1903b0u: goto label_1903b0;
        case 0x1903b8u: goto label_1903b8;
        case 0x1903c0u: goto label_1903c0;
        default: break;
    }

    ctx->pc = 0x1903a0u;

    // 0x1903a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1903a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1903a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1903a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1903a8: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x1903A8u;
    SET_GPR_U32(ctx, 31, 0x1903B0u);
    ctx->pc = 0x1903ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1903A8u;
            // 0x1903ac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1903B0u; }
        if (ctx->pc != 0x1903B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1903B0u; }
        if (ctx->pc != 0x1903B0u) { return; }
    }
    ctx->pc = 0x1903B0u;
label_1903b0:
    // 0x1903b0: 0xc0a2bec  jal         func_28AFB0
    ctx->pc = 0x1903B0u;
    SET_GPR_U32(ctx, 31, 0x1903B8u);
    ctx->pc = 0x1903B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1903B0u;
            // 0x1903b4: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AFB0u;
    if (runtime->hasFunction(0x28AFB0u)) {
        auto targetFn = runtime->lookupFunction(0x28AFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1903B8u; }
        if (ctx->pc != 0x1903B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamOpenState__6CSoundFv_0x28afb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1903B8u; }
        if (ctx->pc != 0x1903B8u) { return; }
    }
    ctx->pc = 0x1903B8u;
label_1903b8:
    // 0x1903b8: 0xc063340  jal         func_18CD00
    ctx->pc = 0x1903B8u;
    SET_GPR_U32(ctx, 31, 0x1903C0u);
    ctx->pc = 0x1903BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1903B8u;
            // 0x1903bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1903C0u; }
        if (ctx->pc != 0x1903C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1903C0u; }
        if (ctx->pc != 0x1903C0u) { return; }
    }
    ctx->pc = 0x1903C0u;
label_1903c0:
    // 0x1903c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1903c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1903c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1903c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1903c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1903c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1903cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1903CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1903D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1903CCu;
            // 0x1903d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1903D4u;
}
