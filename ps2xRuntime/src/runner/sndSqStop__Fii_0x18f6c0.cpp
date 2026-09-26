#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSqStop__Fii
// Address: 0x18f6c0 - 0x18f744
void sndSqStop__Fii_0x18f6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSqStop__Fii_0x18f6c0");
#endif

    switch (ctx->pc) {
        case 0x18f6d4u: goto label_18f6d4;
        case 0x18f6e4u: goto label_18f6e4;
        case 0x18f6ecu: goto label_18f6ec;
        case 0x18f700u: goto label_18f700;
        case 0x18f70cu: goto label_18f70c;
        case 0x18f714u: goto label_18f714;
        case 0x18f724u: goto label_18f724;
        case 0x18f72cu: goto label_18f72c;
        case 0x18f734u: goto label_18f734;
        default: break;
    }

    ctx->pc = 0x18f6c0u;

    // 0x18f6c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18f6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18f6c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18f6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18f6c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18f6cc: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x18F6CCu;
    SET_GPR_U32(ctx, 31, 0x18F6D4u);
    ctx->pc = 0x18F6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F6CCu;
            // 0x18f6d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F6D4u; }
        if (ctx->pc != 0x18F6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F6D4u; }
        if (ctx->pc != 0x18F6D4u) { return; }
    }
    ctx->pc = 0x18F6D4u;
label_18f6d4:
    // 0x18f6d4: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x18f6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x18f6d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18f6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f6dc: 0xc0628b0  jal         func_18A2C0
    ctx->pc = 0x18F6DCu;
    SET_GPR_U32(ctx, 31, 0x18F6E4u);
    ctx->pc = 0x18F6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F6DCu;
            // 0x18f6e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A2C0u;
    if (runtime->hasFunction(0x18A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x18A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F6E4u; }
        if (ctx->pc != 0x18F6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVol__6CSoundFii_0x18a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F6E4u; }
        if (ctx->pc != 0x18F6E4u) { return; }
    }
    ctx->pc = 0x18F6E4u;
label_18f6e4:
    // 0x18f6e4: 0xc063630  jal         func_18D8C0
    ctx->pc = 0x18F6E4u;
    SET_GPR_U32(ctx, 31, 0x18F6ECu);
    ctx->pc = 0x18F6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F6E4u;
            // 0x18f6e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D8C0u;
    if (runtime->hasFunction(0x18D8C0u)) {
        auto targetFn = runtime->lookupFunction(0x18D8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F6ECu; }
        if (ctx->pc != 0x18F6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsBgmPort__Fi_0x18d8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F6ECu; }
        if (ctx->pc != 0x18F6ECu) { return; }
    }
    ctx->pc = 0x18F6ECu;
label_18f6ec:
    // 0x18f6ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F6ECu;
    {
        const bool branch_taken_0x18f6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F6ECu;
            // 0x18f6f0: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f6ec) {
            ctx->pc = 0x18F704u;
            goto label_18f704;
        }
    }
    ctx->pc = 0x18F6F4u;
    // 0x18f6f4: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x18f6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x18f6f8: 0xc062220  jal         func_188880
    ctx->pc = 0x18F6F8u;
    SET_GPR_U32(ctx, 31, 0x18F700u);
    ctx->pc = 0x18F6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F6F8u;
            // 0x18f6fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188880u;
    if (runtime->hasFunction(0x188880u)) {
        auto targetFn = runtime->lookupFunction(0x188880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F700u; }
        if (ctx->pc != 0x18F700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopVoice__6CSoundFi_0x188880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F700u; }
        if (ctx->pc != 0x18F700u) { return; }
    }
    ctx->pc = 0x18F700u;
label_18f700:
    // 0x18f700: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x18f700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
label_18f704:
    // 0x18f704: 0xc0628a0  jal         func_18A280
    ctx->pc = 0x18F704u;
    SET_GPR_U32(ctx, 31, 0x18F70Cu);
    ctx->pc = 0x18F708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F704u;
            // 0x18f708: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A280u;
    if (runtime->hasFunction(0x18A280u)) {
        auto targetFn = runtime->lookupFunction(0x18A280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F70Cu; }
        if (ctx->pc != 0x18F70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stop__6CSoundFi_0x18a280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F70Cu; }
        if (ctx->pc != 0x18F70Cu) { return; }
    }
    ctx->pc = 0x18F70Cu;
label_18f70c:
    // 0x18f70c: 0xc063630  jal         func_18D8C0
    ctx->pc = 0x18F70Cu;
    SET_GPR_U32(ctx, 31, 0x18F714u);
    ctx->pc = 0x18F710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F70Cu;
            // 0x18f710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D8C0u;
    if (runtime->hasFunction(0x18D8C0u)) {
        auto targetFn = runtime->lookupFunction(0x18D8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F714u; }
        if (ctx->pc != 0x18F714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsBgmPort__Fi_0x18d8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F714u; }
        if (ctx->pc != 0x18F714u) { return; }
    }
    ctx->pc = 0x18F714u;
label_18f714:
    // 0x18f714: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F714u;
    {
        const bool branch_taken_0x18f714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F714u;
            // 0x18f718: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f714) {
            ctx->pc = 0x18F724u;
            goto label_18f724;
        }
    }
    ctx->pc = 0x18F71Cu;
    // 0x18f71c: 0xc062220  jal         func_188880
    ctx->pc = 0x18F71Cu;
    SET_GPR_U32(ctx, 31, 0x18F724u);
    ctx->pc = 0x18F720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F71Cu;
            // 0x18f720: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188880u;
    if (runtime->hasFunction(0x188880u)) {
        auto targetFn = runtime->lookupFunction(0x188880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F724u; }
        if (ctx->pc != 0x18F724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopVoice__6CSoundFi_0x188880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F724u; }
        if (ctx->pc != 0x18F724u) { return; }
    }
    ctx->pc = 0x18F724u;
label_18f724:
    // 0x18f724: 0xc063578  jal         func_18D5E0
    ctx->pc = 0x18F724u;
    SET_GPR_U32(ctx, 31, 0x18F72Cu);
    ctx->pc = 0x18D5E0u;
    if (runtime->hasFunction(0x18D5E0u)) {
        auto targetFn = runtime->lookupFunction(0x18D5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F72Cu; }
        if (ctx->pc != 0x18F72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CSndStep__Fv_0x18d5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F72Cu; }
        if (ctx->pc != 0x18F72Cu) { return; }
    }
    ctx->pc = 0x18F72Cu;
label_18f72c:
    // 0x18f72c: 0xc063340  jal         func_18CD00
    ctx->pc = 0x18F72Cu;
    SET_GPR_U32(ctx, 31, 0x18F734u);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F734u; }
        if (ctx->pc != 0x18F734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F734u; }
        if (ctx->pc != 0x18F734u) { return; }
    }
    ctx->pc = 0x18F734u;
label_18f734:
    // 0x18f734: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18f734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f73c: 0x3e00008  jr          $ra
    ctx->pc = 0x18F73Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F73Cu;
            // 0x18f740: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F744u;
}
