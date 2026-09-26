#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndWaitTransBd__Fv
// Address: 0x18d580 - 0x18d5d4
void sndWaitTransBd__Fv_0x18d580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndWaitTransBd__Fv_0x18d580");
#endif

    switch (ctx->pc) {
        case 0x18d594u: goto label_18d594;
        case 0x18d59cu: goto label_18d59c;
        case 0x18d5b0u: goto label_18d5b0;
        default: break;
    }

    ctx->pc = 0x18d580u;

    // 0x18d580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18d580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18d584: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18d584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18d588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18d588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18d58c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18d58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18d590: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x18d590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18d594:
    // 0x18d594: 0xc0504c4  jal         func_141310
    ctx->pc = 0x18D594u;
    SET_GPR_U32(ctx, 31, 0x18D59Cu);
    ctx->pc = 0x141310u;
    if (runtime->hasFunction(0x141310u)) {
        auto targetFn = runtime->lookupFunction(0x141310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D59Cu; }
        if (ctx->pc != 0x18D59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetVSyncCount__Fv_0x141310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D59Cu; }
        if (ctx->pc != 0x18D59Cu) { return; }
    }
    ctx->pc = 0x18D59Cu;
label_18d59c:
    // 0x18d59c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18d59cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d5a0: 0x12300005  beq         $s1, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D5A0u;
    {
        const bool branch_taken_0x18d5a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x18d5a0) {
            ctx->pc = 0x18D5B8u;
            goto label_18d5b8;
        }
    }
    ctx->pc = 0x18D5A8u;
    // 0x18d5a8: 0xc06355c  jal         func_18D570
    ctx->pc = 0x18D5A8u;
    SET_GPR_U32(ctx, 31, 0x18D5B0u);
    ctx->pc = 0x18D570u;
    if (runtime->hasFunction(0x18D570u)) {
        auto targetFn = runtime->lookupFunction(0x18D570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D5B0u; }
        if (ctx->pc != 0x18D5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndTransBdState__Fv_0x18d570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D5B0u; }
        if (ctx->pc != 0x18D5B0u) { return; }
    }
    ctx->pc = 0x18D5B0u;
label_18d5b0:
    // 0x18d5b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D5B0u;
    {
        const bool branch_taken_0x18d5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d5b0) {
            ctx->pc = 0x18D5C0u;
            goto label_18d5c0;
        }
    }
    ctx->pc = 0x18D5B8u;
label_18d5b8:
    // 0x18d5b8: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x18D5B8u;
    {
        const bool branch_taken_0x18d5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D5B8u;
            // 0x18d5bc: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d5b8) {
            ctx->pc = 0x18D594u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18d594;
        }
    }
    ctx->pc = 0x18D5C0u;
label_18d5c0:
    // 0x18d5c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18d5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d5c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18d5c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d5c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18d5c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x18D5CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D5CCu;
            // 0x18d5d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D5D4u;
}
