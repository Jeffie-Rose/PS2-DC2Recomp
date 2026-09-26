#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SoundAllStop__6CSceneFv
// Address: 0x2a6020 - 0x2a6058
void SoundAllStop__6CSceneFv_0x2a6020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SoundAllStop__6CSceneFv_0x2a6020");
#endif

    switch (ctx->pc) {
        case 0x2a6038u: goto label_2a6038;
        case 0x2a6040u: goto label_2a6040;
        case 0x2a6048u: goto label_2a6048;
        default: break;
    }

    ctx->pc = 0x2a6020u;

    // 0x2a6020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a6020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a6024: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a6024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6028: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a6028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a602c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a602cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a6030: 0xc0a98a0  jal         func_2A6280
    ctx->pc = 0x2A6030u;
    SET_GPR_U32(ctx, 31, 0x2A6038u);
    ctx->pc = 0x2A6034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6030u;
            // 0x2a6034: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6038u; }
        if (ctx->pc != 0x2A6038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6038u; }
        if (ctx->pc != 0x2A6038u) { return; }
    }
    ctx->pc = 0x2A6038u;
label_2a6038:
    // 0x2a6038: 0xc0a9700  jal         func_2A5C00
    ctx->pc = 0x2A6038u;
    SET_GPR_U32(ctx, 31, 0x2A6040u);
    ctx->pc = 0x2A603Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6038u;
            // 0x2a603c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5C00u;
    if (runtime->hasFunction(0x2A5C00u)) {
        auto targetFn = runtime->lookupFunction(0x2A5C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6040u; }
        if (ctx->pc != 0x2A6040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitBGM__6CSceneFv_0x2a5c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6040u; }
        if (ctx->pc != 0x2A6040u) { return; }
    }
    ctx->pc = 0x2A6040u;
label_2a6040:
    // 0x2a6040: 0xc0a97f8  jal         func_2A5FE0
    ctx->pc = 0x2A6040u;
    SET_GPR_U32(ctx, 31, 0x2A6048u);
    ctx->pc = 0x2A6044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6040u;
            // 0x2a6044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5FE0u;
    if (runtime->hasFunction(0x2A5FE0u)) {
        auto targetFn = runtime->lookupFunction(0x2A5FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6048u; }
        if (ctx->pc != 0x2A6048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SeAllStop__6CSceneFv_0x2a5fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6048u; }
        if (ctx->pc != 0x2A6048u) { return; }
    }
    ctx->pc = 0x2A6048u;
label_2a6048:
    // 0x2a6048: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a604c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a604cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6050: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6050u;
            // 0x2a6054: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6058u;
}
