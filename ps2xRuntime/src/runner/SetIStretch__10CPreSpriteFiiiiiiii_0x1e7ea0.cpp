#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetIStretch__10CPreSpriteFiiiiiiii
// Address: 0x1e7ea0 - 0x1e7f5c
void SetIStretch__10CPreSpriteFiiiiiiii_0x1e7ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetIStretch__10CPreSpriteFiiiiiiii_0x1e7ea0");
#endif

    switch (ctx->pc) {
        case 0x1e7ef4u: goto label_1e7ef4;
        case 0x1e7f08u: goto label_1e7f08;
        case 0x1e7f1cu: goto label_1e7f1c;
        case 0x1e7f30u: goto label_1e7f30;
        default: break;
    }

    ctx->pc = 0x1e7ea0u;

    // 0x1e7ea0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e7ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e7ea4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1e7ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1e7ea8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e7ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1e7eac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e7eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e7eb0: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x1e7eb0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7eb4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e7eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e7eb8: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1e7eb8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ebc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e7ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e7ec0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e7ec0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ec4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e7ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e7ec8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1e7ec8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ecc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e7eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e7ed0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1e7ed0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ed4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7ed8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1e7ed8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7edc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7ee0: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x1e7ee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ee4: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x1e7ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ee8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e7ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7eec: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1E7EECu;
    SET_GPR_U32(ctx, 31, 0x1E7EF4u);
    ctx->pc = 0x1E7EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7EECu;
            // 0x1e7ef0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7EF4u; }
        if (ctx->pc != 0x1E7EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7EF4u; }
        if (ctx->pc != 0x1E7EF4u) { return; }
    }
    ctx->pc = 0x1E7EF4u;
label_1e7ef4:
    // 0x1e7ef4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e7ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ef8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e7ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7efc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e7efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7f00: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1E7F00u;
    SET_GPR_U32(ctx, 31, 0x1E7F08u);
    ctx->pc = 0x1E7F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7F00u;
            // 0x1e7f04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F08u; }
        if (ctx->pc != 0x1E7F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F08u; }
        if (ctx->pc != 0x1E7F08u) { return; }
    }
    ctx->pc = 0x1E7F08u;
label_1e7f08:
    // 0x1e7f08: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1e7f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e7f0c: 0x2372821  addu        $a1, $s1, $s7
    ctx->pc = 0x1e7f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x1e7f10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e7f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7f14: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1E7F14u;
    SET_GPR_U32(ctx, 31, 0x1E7F1Cu);
    ctx->pc = 0x1E7F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7F14u;
            // 0x1e7f18: 0x2023021  addu        $a2, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F1Cu; }
        if (ctx->pc != 0x1E7F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F1Cu; }
        if (ctx->pc != 0x1E7F1Cu) { return; }
    }
    ctx->pc = 0x1E7F1Cu;
label_1e7f1c:
    // 0x1e7f1c: 0x2922821  addu        $a1, $s4, $s2
    ctx->pc = 0x1e7f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1e7f20: 0x2763021  addu        $a2, $s3, $s6
    ctx->pc = 0x1e7f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x1e7f24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e7f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7f28: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1E7F28u;
    SET_GPR_U32(ctx, 31, 0x1E7F30u);
    ctx->pc = 0x1E7F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7F28u;
            // 0x1e7f2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F30u; }
        if (ctx->pc != 0x1E7F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F30u; }
        if (ctx->pc != 0x1E7F30u) { return; }
    }
    ctx->pc = 0x1E7F30u;
label_1e7f30:
    // 0x1e7f30: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1e7f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e7f34: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e7f34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e7f38: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e7f38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7f3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e7f3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7f40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e7f40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7f44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e7f44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7f48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e7f48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7f4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7f4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7f50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7f54: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7F54u;
            // 0x1e7f58: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7F5Cu;
}
