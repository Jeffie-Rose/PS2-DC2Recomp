#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _decodeOrSkip
// Address: 0x10e988 - 0x10e9cc
void _decodeOrSkip_0x10e988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_decodeOrSkip_0x10e988");
#endif

    switch (ctx->pc) {
        case 0x10e9b0u: goto label_10e9b0;
        case 0x10e9c0u: goto label_10e9c0;
        default: break;
    }

    ctx->pc = 0x10e988u;

    // 0x10e988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10e98c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x10e98cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e994: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10e994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10e998: 0x8ce40040  lw          $a0, 0x40($a3)
    ctx->pc = 0x10e998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x10e99c: 0x8c820174  lw          $v0, 0x174($a0)
    ctx->pc = 0x10e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x10e9a0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10E9A0u;
    {
        const bool branch_taken_0x10e9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10e9a0) {
            ctx->pc = 0x10E9B8u;
            goto label_10e9b8;
        }
    }
    ctx->pc = 0x10E9A8u;
    // 0x10e9a8: 0xc043a74  jal         func_10E9D0
    ctx->pc = 0x10E9A8u;
    SET_GPR_U32(ctx, 31, 0x10E9B0u);
    ctx->pc = 0x10E9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E9A8u;
            // 0x10e9ac: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E9D0u;
    if (runtime->hasFunction(0x10E9D0u)) {
        auto targetFn = runtime->lookupFunction(0x10E9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E9B0u; }
        if (ctx->pc != 0x10E9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkipField_0x10e9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E9B0u; }
        if (ctx->pc != 0x10E9B0u) { return; }
    }
    ctx->pc = 0x10E9B0u;
label_10e9b0:
    // 0x10e9b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10E9B0u;
    {
        const bool branch_taken_0x10e9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E9B0u;
            // 0x10e9b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e9b0) {
            ctx->pc = 0x10E9C4u;
            goto label_10e9c4;
        }
    }
    ctx->pc = 0x10E9B8u;
label_10e9b8:
    // 0x10e9b8: 0xc043a1c  jal         func_10E870
    ctx->pc = 0x10E9B8u;
    SET_GPR_U32(ctx, 31, 0x10E9C0u);
    ctx->pc = 0x10E9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E9B8u;
            // 0x10e9bc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E870u;
    if (runtime->hasFunction(0x10E870u)) {
        auto targetFn = runtime->lookupFunction(0x10E870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E9C0u; }
        if (ctx->pc != 0x10E9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkipFrame_0x10e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E9C0u; }
        if (ctx->pc != 0x10E9C0u) { return; }
    }
    ctx->pc = 0x10E9C0u;
label_10e9c0:
    // 0x10e9c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e9c4:
    // 0x10e9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x10E9C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E9C4u;
            // 0x10e9c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E9CCu;
}
