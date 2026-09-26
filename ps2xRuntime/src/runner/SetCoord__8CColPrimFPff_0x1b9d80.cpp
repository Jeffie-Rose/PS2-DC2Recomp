#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCoord__8CColPrimFPff
// Address: 0x1b9d80 - 0x1b9e14
void SetCoord__8CColPrimFPff_0x1b9d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCoord__8CColPrimFPff_0x1b9d80");
#endif

    switch (ctx->pc) {
        case 0x1b9db8u: goto label_1b9db8;
        case 0x1b9dc4u: goto label_1b9dc4;
        case 0x1b9dd0u: goto label_1b9dd0;
        case 0x1b9de4u: goto label_1b9de4;
        case 0x1b9df0u: goto label_1b9df0;
        default: break;
    }

    ctx->pc = 0x1b9d80u;

    // 0x1b9d80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b9d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b9d84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b9d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9d88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b9d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b9d8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b9d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b9d90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b9d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b9d94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b9d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d98: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b9d98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b9d9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b9d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9da0: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1b9da0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x1b9da4: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1b9da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b9da8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B9DA8u;
    {
        const bool branch_taken_0x1b9da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9DA8u;
            // 0x1b9dac: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9da8) {
            ctx->pc = 0x1B9DD8u;
            goto label_1b9dd8;
        }
    }
    ctx->pc = 0x1B9DB0u;
    // 0x1b9db0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B9DB0u;
    SET_GPR_U32(ctx, 31, 0x1B9DB8u);
    ctx->pc = 0x1B9DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9DB0u;
            // 0x1b9db4: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9DB8u; }
        if (ctx->pc != 0x1B9DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9DB8u; }
        if (ctx->pc != 0x1B9DB8u) { return; }
    }
    ctx->pc = 0x1B9DB8u;
label_1b9db8:
    // 0x1b9db8: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x1b9db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1b9dbc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B9DBCu;
    SET_GPR_U32(ctx, 31, 0x1B9DC4u);
    ctx->pc = 0x1B9DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9DBCu;
            // 0x1b9dc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9DC4u; }
        if (ctx->pc != 0x1B9DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9DC4u; }
        if (ctx->pc != 0x1B9DC4u) { return; }
    }
    ctx->pc = 0x1B9DC4u;
label_1b9dc4:
    // 0x1b9dc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b9dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9dc8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B9DC8u;
    SET_GPR_U32(ctx, 31, 0x1B9DD0u);
    ctx->pc = 0x1B9DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9DC8u;
            // 0x1b9dcc: 0x262400b0  addiu       $a0, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9DD0u; }
        if (ctx->pc != 0x1B9DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9DD0u; }
        if (ctx->pc != 0x1B9DD0u) { return; }
    }
    ctx->pc = 0x1B9DD0u;
label_1b9dd0:
    // 0x1b9dd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B9DD0u;
    {
        const bool branch_taken_0x1b9dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9DD0u;
            // 0x1b9dd4: 0xe6340084  swc1        $f20, 0x84($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9dd0) {
            ctx->pc = 0x1B9DF4u;
            goto label_1b9df4;
        }
    }
    ctx->pc = 0x1B9DD8u;
label_1b9dd8:
    // 0x1b9dd8: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x1b9dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1b9ddc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B9DDCu;
    SET_GPR_U32(ctx, 31, 0x1B9DE4u);
    ctx->pc = 0x1B9DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9DDCu;
            // 0x1b9de0: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9DE4u; }
        if (ctx->pc != 0x1B9DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9DE4u; }
        if (ctx->pc != 0x1B9DE4u) { return; }
    }
    ctx->pc = 0x1B9DE4u;
label_1b9de4:
    // 0x1b9de4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b9de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9de8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B9DE8u;
    SET_GPR_U32(ctx, 31, 0x1B9DF0u);
    ctx->pc = 0x1B9DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9DE8u;
            // 0x1b9dec: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9DF0u; }
        if (ctx->pc != 0x1B9DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9DF0u; }
        if (ctx->pc != 0x1B9DF0u) { return; }
    }
    ctx->pc = 0x1B9DF0u;
label_1b9df0:
    // 0x1b9df0: 0xe6340084  swc1        $f20, 0x84($s1)
    ctx->pc = 0x1b9df0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
label_1b9df4:
    // 0x1b9df4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b9df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9df8: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x1b9df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x1b9dfc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b9dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b9e00: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b9e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b9e04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b9e04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9e08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b9e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E0Cu;
            // 0x1b9e10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9E14u;
}
