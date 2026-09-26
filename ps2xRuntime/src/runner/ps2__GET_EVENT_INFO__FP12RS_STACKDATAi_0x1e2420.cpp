#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_EVENT_INFO__FP12RS_STACKDATAi
// Address: 0x1e2420 - 0x1e2468
void ps2__GET_EVENT_INFO__FP12RS_STACKDATAi_0x1e2420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_EVENT_INFO__FP12RS_STACKDATAi_0x1e2420");
#endif

    switch (ctx->pc) {
        case 0x1e2434u: goto label_1e2434;
        case 0x1e2450u: goto label_1e2450;
        default: break;
    }

    ctx->pc = 0x1e2420u;

    // 0x1e2420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2424: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e2428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e242c: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E242Cu;
    SET_GPR_U32(ctx, 31, 0x1E2434u);
    ctx->pc = 0x1E2430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E242Cu;
            // 0x1e2430: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2434u; }
        if (ctx->pc != 0x1E2434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2434u; }
        if (ctx->pc != 0x1E2434u) { return; }
    }
    ctx->pc = 0x1E2434u;
label_1e2434:
    // 0x1e2434: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2434u;
    {
        const bool branch_taken_0x1e2434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2434u;
            // 0x1e2438: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2434) {
            ctx->pc = 0x1E2444u;
            goto label_1e2444;
        }
    }
    ctx->pc = 0x1E243Cu;
    // 0x1e243c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E243Cu;
    {
        const bool branch_taken_0x1e243c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E243Cu;
            // 0x1e2440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e243c) {
            ctx->pc = 0x1E2458u;
            goto label_1e2458;
        }
    }
    ctx->pc = 0x1E2444u;
label_1e2444:
    // 0x1e2444: 0x8c25e608  lw          $a1, -0x19F8($at)
    ctx->pc = 0x1e2444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960648)));
    // 0x1e2448: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E2448u;
    SET_GPR_U32(ctx, 31, 0x1E2450u);
    ctx->pc = 0x1E244Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2448u;
            // 0x1e244c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2450u; }
        if (ctx->pc != 0x1E2450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2450u; }
        if (ctx->pc != 0x1E2450u) { return; }
    }
    ctx->pc = 0x1E2450u;
label_1e2450:
    // 0x1e2450: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1E2450u;
    {
        const bool branch_taken_0x1e2450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2450u;
            // 0x1e2454: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2450) {
            ctx->pc = 0x1E2458u;
            goto label_1e2458;
        }
    }
    ctx->pc = 0x1E2458u;
label_1e2458:
    // 0x1e2458: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e245c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e245cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2460: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2460u;
            // 0x1e2464: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2468u;
}
