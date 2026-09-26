#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetIRect__10CPreSpriteFiiiiii
// Address: 0x1e7df0 - 0x1e7e9c
void SetIRect__10CPreSpriteFiiiiii_0x1e7df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetIRect__10CPreSpriteFiiiiii_0x1e7df0");
#endif

    switch (ctx->pc) {
        case 0x1e7e3cu: goto label_1e7e3c;
        case 0x1e7e50u: goto label_1e7e50;
        case 0x1e7e60u: goto label_1e7e60;
        case 0x1e7e74u: goto label_1e7e74;
        default: break;
    }

    ctx->pc = 0x1e7df0u;

    // 0x1e7df0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e7df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e7df4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1e7df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1e7df8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e7df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e7dfc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e7dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e7e00: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1e7e00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e04: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e7e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e7e08: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1e7e08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e7e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e7e10: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1e7e10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e7e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e7e18: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1e7e18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7e20: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1e7e20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7e28: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x1e7e28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e2c: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x1e7e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e7e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e34: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1E7E34u;
    SET_GPR_U32(ctx, 31, 0x1E7E3Cu);
    ctx->pc = 0x1E7E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7E34u;
            // 0x1e7e38: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E3Cu; }
        if (ctx->pc != 0x1E7E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E3Cu; }
        if (ctx->pc != 0x1E7E3Cu) { return; }
    }
    ctx->pc = 0x1E7E3Cu;
label_1e7e3c:
    // 0x1e7e3c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1e7e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e40: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e7e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e44: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1e7e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e48: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1E7E48u;
    SET_GPR_U32(ctx, 31, 0x1E7E50u);
    ctx->pc = 0x1E7E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7E48u;
            // 0x1e7e4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E50u; }
        if (ctx->pc != 0x1E7E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E50u; }
        if (ctx->pc != 0x1E7E50u) { return; }
    }
    ctx->pc = 0x1E7E50u;
label_1e7e50:
    // 0x1e7e50: 0x2332821  addu        $a1, $s1, $s3
    ctx->pc = 0x1e7e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1e7e54: 0x2123021  addu        $a2, $s0, $s2
    ctx->pc = 0x1e7e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1e7e58: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1E7E58u;
    SET_GPR_U32(ctx, 31, 0x1E7E60u);
    ctx->pc = 0x1E7E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7E58u;
            // 0x1e7e5c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E60u; }
        if (ctx->pc != 0x1E7E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E60u; }
        if (ctx->pc != 0x1E7E60u) { return; }
    }
    ctx->pc = 0x1E7E60u;
label_1e7e60:
    // 0x1e7e60: 0x2b32821  addu        $a1, $s5, $s3
    ctx->pc = 0x1e7e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x1e7e64: 0x2923021  addu        $a2, $s4, $s2
    ctx->pc = 0x1e7e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1e7e68: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1e7e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e6c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1E7E6Cu;
    SET_GPR_U32(ctx, 31, 0x1E7E74u);
    ctx->pc = 0x1E7E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7E6Cu;
            // 0x1e7e70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E74u; }
        if (ctx->pc != 0x1E7E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E74u; }
        if (ctx->pc != 0x1E7E74u) { return; }
    }
    ctx->pc = 0x1E7E74u;
label_1e7e74:
    // 0x1e7e74: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1e7e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e7e78: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e7e78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7e7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e7e7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7e80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e7e80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7e84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e7e84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7e88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e7e88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7e8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7e90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7e94: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7E94u;
            // 0x1e7e98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7E9Cu;
}
