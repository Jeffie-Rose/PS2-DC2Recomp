#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__8CAquaMesFv
// Address: 0x20fae0 - 0x20fb0c
void ps2___ct__8CAquaMesFv_0x20fae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__8CAquaMesFv_0x20fae0");
#endif

    switch (ctx->pc) {
        case 0x20faf8u: goto label_20faf8;
        default: break;
    }

    ctx->pc = 0x20fae0u;

    // 0x20fae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20fae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20fae4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20fae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fae8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20fae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20faec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20faecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20faf0: 0xc083ec4  jal         func_20FB10
    ctx->pc = 0x20FAF0u;
    SET_GPR_U32(ctx, 31, 0x20FAF8u);
    ctx->pc = 0x20FAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FAF0u;
            // 0x20faf4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FB10u;
    if (runtime->hasFunction(0x20FB10u)) {
        auto targetFn = runtime->lookupFunction(0x20FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FAF8u; }
        if (ctx->pc != 0x20FAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__8CAquaMesFP9mgCMemory_0x20fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FAF8u; }
        if (ctx->pc != 0x20FAF8u) { return; }
    }
    ctx->pc = 0x20FAF8u;
label_20faf8:
    // 0x20faf8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20faf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fafc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20fafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20fb00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20fb00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fb04: 0x3e00008  jr          $ra
    ctx->pc = 0x20FB04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FB04u;
            // 0x20fb08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20FB0Cu;
}
