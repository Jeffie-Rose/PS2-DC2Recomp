#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Flush__11mgCDrawPrimFv
// Address: 0x134660 - 0x13468c
void Flush__11mgCDrawPrimFv_0x134660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Flush__11mgCDrawPrimFv_0x134660");
#endif

    switch (ctx->pc) {
        case 0x134674u: goto label_134674;
        case 0x13467cu: goto label_13467c;
        default: break;
    }

    ctx->pc = 0x134660u;

    // 0x134660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x134660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x134664: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x134664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x134668: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x134668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13466c: 0xc04d170  jal         func_1345C0
    ctx->pc = 0x13466Cu;
    SET_GPR_U32(ctx, 31, 0x134674u);
    ctx->pc = 0x134670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13466Cu;
            // 0x134670: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1345C0u;
    if (runtime->hasFunction(0x1345C0u)) {
        auto targetFn = runtime->lookupFunction(0x1345C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134674u; }
        if (ctx->pc != 0x134674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndDma__11mgCDrawPrimFv_0x1345c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134674u; }
        if (ctx->pc != 0x134674u) { return; }
    }
    ctx->pc = 0x134674u;
label_134674:
    // 0x134674: 0xc04d14c  jal         func_134530
    ctx->pc = 0x134674u;
    SET_GPR_U32(ctx, 31, 0x13467Cu);
    ctx->pc = 0x134678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134674u;
            // 0x134678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134530u;
    if (runtime->hasFunction(0x134530u)) {
        auto targetFn = runtime->lookupFunction(0x134530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13467Cu; }
        if (ctx->pc != 0x13467Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginDma__11mgCDrawPrimFv_0x134530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13467Cu; }
        if (ctx->pc != 0x13467Cu) { return; }
    }
    ctx->pc = 0x13467Cu;
label_13467c:
    // 0x13467c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13467cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134680: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134684: 0x3e00008  jr          $ra
    ctx->pc = 0x134684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134684u;
            // 0x134688: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13468Cu;
}
