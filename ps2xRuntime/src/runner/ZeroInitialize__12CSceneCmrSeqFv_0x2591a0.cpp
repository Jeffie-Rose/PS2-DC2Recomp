#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ZeroInitialize__12CSceneCmrSeqFv
// Address: 0x2591a0 - 0x2591e0
void ZeroInitialize__12CSceneCmrSeqFv_0x2591a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ZeroInitialize__12CSceneCmrSeqFv_0x2591a0");
#endif

    switch (ctx->pc) {
        case 0x2591c0u: goto label_2591c0;
        case 0x2591c8u: goto label_2591c8;
        case 0x2591d0u: goto label_2591d0;
        default: break;
    }

    ctx->pc = 0x2591a0u;

    // 0x2591a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2591a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2591a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2591a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2591a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2591a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2591ac: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2591acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2591b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2591b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2591b4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2591b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2591b8: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2591B8u;
    SET_GPR_U32(ctx, 31, 0x2591C0u);
    ctx->pc = 0x2591BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2591B8u;
            // 0x2591bc: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2591C0u; }
        if (ctx->pc != 0x2591C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2591C0u; }
        if (ctx->pc != 0x2591C0u) { return; }
    }
    ctx->pc = 0x2591C0u;
label_2591c0:
    // 0x2591c0: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2591C0u;
    SET_GPR_U32(ctx, 31, 0x2591C8u);
    ctx->pc = 0x2591C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2591C0u;
            // 0x2591c4: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2591C8u; }
        if (ctx->pc != 0x2591C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2591C8u; }
        if (ctx->pc != 0x2591C8u) { return; }
    }
    ctx->pc = 0x2591C8u;
label_2591c8:
    // 0x2591c8: 0xc09648c  jal         func_259230
    ctx->pc = 0x2591C8u;
    SET_GPR_U32(ctx, 31, 0x2591D0u);
    ctx->pc = 0x2591CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2591C8u;
            // 0x2591cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259230u;
    if (runtime->hasFunction(0x259230u)) {
        auto targetFn = runtime->lookupFunction(0x259230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2591D0u; }
        if (ctx->pc != 0x2591D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__12CSceneCmrSeqFv_0x259230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2591D0u; }
        if (ctx->pc != 0x2591D0u) { return; }
    }
    ctx->pc = 0x2591D0u;
label_2591d0:
    // 0x2591d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2591d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2591d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2591d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2591d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2591D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2591DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2591D8u;
            // 0x2591dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2591E0u;
}
