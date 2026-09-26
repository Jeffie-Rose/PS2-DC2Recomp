#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndStreamGetState__Fv
// Address: 0x190590 - 0x1905c8
void sndStreamGetState__Fv_0x190590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndStreamGetState__Fv_0x190590");
#endif

    switch (ctx->pc) {
        case 0x1905a0u: goto label_1905a0;
        case 0x1905acu: goto label_1905ac;
        case 0x1905b4u: goto label_1905b4;
        default: break;
    }

    ctx->pc = 0x190590u;

    // 0x190590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x190590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x190594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x190594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x190598: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x190598u;
    SET_GPR_U32(ctx, 31, 0x1905A0u);
    ctx->pc = 0x19059Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190598u;
            // 0x19059c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1905A0u; }
        if (ctx->pc != 0x1905A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1905A0u; }
        if (ctx->pc != 0x1905A0u) { return; }
    }
    ctx->pc = 0x1905A0u;
label_1905a0:
    // 0x1905a0: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x1905a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x1905a4: 0xc062c2c  jal         func_18B0B0
    ctx->pc = 0x1905A4u;
    SET_GPR_U32(ctx, 31, 0x1905ACu);
    ctx->pc = 0x1905A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1905A4u;
            // 0x1905a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B0B0u;
    if (runtime->hasFunction(0x18B0B0u)) {
        auto targetFn = runtime->lookupFunction(0x18B0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1905ACu; }
        if (ctx->pc != 0x1905ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamGetState__6CSoundFi_0x18b0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1905ACu; }
        if (ctx->pc != 0x1905ACu) { return; }
    }
    ctx->pc = 0x1905ACu;
label_1905ac:
    // 0x1905ac: 0xc063340  jal         func_18CD00
    ctx->pc = 0x1905ACu;
    SET_GPR_U32(ctx, 31, 0x1905B4u);
    ctx->pc = 0x1905B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1905ACu;
            // 0x1905b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1905B4u; }
        if (ctx->pc != 0x1905B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1905B4u; }
        if (ctx->pc != 0x1905B4u) { return; }
    }
    ctx->pc = 0x1905B4u;
label_1905b4:
    // 0x1905b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1905b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1905b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1905b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1905bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1905bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1905c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1905C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1905C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1905C0u;
            // 0x1905c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1905C8u;
}
