#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndStopVoice__Fi
// Address: 0x18cfe0 - 0x18d038
void sndStopVoice__Fi_0x18cfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndStopVoice__Fi_0x18cfe0");
#endif

    switch (ctx->pc) {
        case 0x18d014u: goto label_18d014;
        case 0x18d020u: goto label_18d020;
        case 0x18d028u: goto label_18d028;
        default: break;
    }

    ctx->pc = 0x18cfe0u;

    // 0x18cfe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18cfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18cfe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18cfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18cfe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18cfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18cfec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18cfecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cff0: 0x600000d  bltz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x18CFF0u;
    {
        const bool branch_taken_0x18cff0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x18cff0) {
            ctx->pc = 0x18D028u;
            goto label_18d028;
        }
    }
    ctx->pc = 0x18CFF8u;
    // 0x18cff8: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x18cff8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18cffc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CFFCu;
    {
        const bool branch_taken_0x18cffc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cffc) {
            ctx->pc = 0x18D00Cu;
            goto label_18d00c;
        }
    }
    ctx->pc = 0x18D004u;
    // 0x18d004: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18D004u;
    {
        const bool branch_taken_0x18d004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D004u;
            // 0x18d008: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d004) {
            ctx->pc = 0x18D02Cu;
            goto label_18d02c;
        }
    }
    ctx->pc = 0x18D00Cu;
label_18d00c:
    // 0x18d00c: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x18D00Cu;
    SET_GPR_U32(ctx, 31, 0x18D014u);
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D014u; }
        if (ctx->pc != 0x18D014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D014u; }
        if (ctx->pc != 0x18D014u) { return; }
    }
    ctx->pc = 0x18D014u;
label_18d014:
    // 0x18d014: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18d014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d018: 0xc062220  jal         func_188880
    ctx->pc = 0x18D018u;
    SET_GPR_U32(ctx, 31, 0x18D020u);
    ctx->pc = 0x18D01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D018u;
            // 0x18d01c: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188880u;
    if (runtime->hasFunction(0x188880u)) {
        auto targetFn = runtime->lookupFunction(0x188880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D020u; }
        if (ctx->pc != 0x18D020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopVoice__6CSoundFi_0x188880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D020u; }
        if (ctx->pc != 0x18D020u) { return; }
    }
    ctx->pc = 0x18D020u;
label_18d020:
    // 0x18d020: 0xc063340  jal         func_18CD00
    ctx->pc = 0x18D020u;
    SET_GPR_U32(ctx, 31, 0x18D028u);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D028u; }
        if (ctx->pc != 0x18D028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D028u; }
        if (ctx->pc != 0x18D028u) { return; }
    }
    ctx->pc = 0x18D028u;
label_18d028:
    // 0x18d028: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18d028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18d02c:
    // 0x18d02c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18d02cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d030: 0x3e00008  jr          $ra
    ctx->pc = 0x18D030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D030u;
            // 0x18d034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D038u;
}
