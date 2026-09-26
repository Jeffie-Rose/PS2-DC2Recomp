#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__13CFireAfterHitFv
// Address: 0x1bf4f0 - 0x1bf540
void Initialize__13CFireAfterHitFv_0x1bf4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__13CFireAfterHitFv_0x1bf4f0");
#endif

    switch (ctx->pc) {
        case 0x1bf520u: goto label_1bf520;
        case 0x1bf530u: goto label_1bf530;
        default: break;
    }

    ctx->pc = 0x1bf4f0u;

    // 0x1bf4f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bf4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bf4f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf4f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bf4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bf4fc: 0x240602a0  addiu       $a2, $zero, 0x2A0
    ctx->pc = 0x1bf4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x1bf500: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bf504: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1bf504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1bf508: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bf508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf50c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1bf50cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1bf510: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1bf510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1bf514: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1bf514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1bf518: 0xc049c86  jal         func_127218
    ctx->pc = 0x1BF518u;
    SET_GPR_U32(ctx, 31, 0x1BF520u);
    ctx->pc = 0x1BF51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF518u;
            // 0x1bf51c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF520u; }
        if (ctx->pc != 0x1BF520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF520u; }
        if (ctx->pc != 0x1BF520u) { return; }
    }
    ctx->pc = 0x1BF520u;
label_1bf520:
    // 0x1bf520: 0x260402b0  addiu       $a0, $s0, 0x2B0
    ctx->pc = 0x1bf520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x1bf524: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf528: 0xc049c86  jal         func_127218
    ctx->pc = 0x1BF528u;
    SET_GPR_U32(ctx, 31, 0x1BF530u);
    ctx->pc = 0x1BF52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF528u;
            // 0x1bf52c: 0x24060690  addiu       $a2, $zero, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF530u; }
        if (ctx->pc != 0x1BF530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF530u; }
        if (ctx->pc != 0x1BF530u) { return; }
    }
    ctx->pc = 0x1BF530u;
label_1bf530:
    // 0x1bf530: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bf530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf538: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF538u;
            // 0x1bf53c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BF540u;
}
