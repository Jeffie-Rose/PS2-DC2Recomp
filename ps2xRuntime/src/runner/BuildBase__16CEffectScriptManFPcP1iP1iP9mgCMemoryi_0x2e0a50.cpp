#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BuildBase__16CEffectScriptManFPcP1iP1iP9mgCMemoryi
// Address: 0x2e0a50 - 0x2e0ae0
void BuildBase__16CEffectScriptManFPcP1iP1iP9mgCMemoryi_0x2e0a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BuildBase__16CEffectScriptManFPcP1iP1iP9mgCMemoryi_0x2e0a50");
#endif

    switch (ctx->pc) {
        case 0x2e0a94u: goto label_2e0a94;
        case 0x2e0ab8u: goto label_2e0ab8;
        default: break;
    }

    ctx->pc = 0x2e0a50u;

    // 0x2e0a50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e0a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e0a54: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2e0a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2e0a58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e0a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2e0a5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e0a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e0a60: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2e0a60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a64: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e0a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e0a68: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2e0a68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e0a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e0a70: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2e0a70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e0a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e0a78: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2e0a78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e0a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e0a80: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2e0a80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e0a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e0a88: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x2e0a88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a8c: 0xc0b7fcc  jal         func_2DFF30
    ctx->pc = 0x2E0A8Cu;
    SET_GPR_U32(ctx, 31, 0x2E0A94u);
    ctx->pc = 0x2E0A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0A8Cu;
            // 0x2e0a90: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF30u;
    if (runtime->hasFunction(0x2DFF30u)) {
        auto targetFn = runtime->lookupFunction(0x2DFF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0A94u; }
        if (ctx->pc != 0x2E0A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchBaseNo__16CEffectScriptManFPc_0x2dff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0A94u; }
        if (ctx->pc != 0x2E0A94u) { return; }
    }
    ctx->pc = 0x2E0A94u;
label_2e0a94:
    // 0x2e0a94: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e0a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a98: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e0a98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a9c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2e0a9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0aa0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2e0aa0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0aa4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2e0aa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0aa8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2e0aa8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0aac: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2e0aacu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ab0: 0xc0b8108  jal         func_2E0420
    ctx->pc = 0x2E0AB0u;
    SET_GPR_U32(ctx, 31, 0x2E0AB8u);
    ctx->pc = 0x2E0AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0AB0u;
            // 0x2e0ab4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0420u;
    if (runtime->hasFunction(0x2E0420u)) {
        auto targetFn = runtime->lookupFunction(0x2E0420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0AB8u; }
        if (ctx->pc != 0x2E0AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildBase__16CEffectScriptManFiP1iP1iP9mgCMemoryi_0x2e0420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0AB8u; }
        if (ctx->pc != 0x2E0AB8u) { return; }
    }
    ctx->pc = 0x2E0AB8u;
label_2e0ab8:
    // 0x2e0ab8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2e0ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e0abc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e0abcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e0ac0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e0ac0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e0ac4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e0ac4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0ac8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e0ac8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0acc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e0accu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0ad0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e0ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0ad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e0ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0AD8u;
            // 0x2e0adc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E0AE0u;
}
