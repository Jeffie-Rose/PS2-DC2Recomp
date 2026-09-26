#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapFAR_CLIP__FP9SPI_STACKi
// Address: 0x161e50 - 0x161ebc
void mapFAR_CLIP__FP9SPI_STACKi_0x161e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapFAR_CLIP__FP9SPI_STACKi_0x161e50");
#endif

    switch (ctx->pc) {
        case 0x161e7cu: goto label_161e7c;
        case 0x161e88u: goto label_161e88;
        case 0x161e94u: goto label_161e94;
        case 0x161ea0u: goto label_161ea0;
        default: break;
    }

    ctx->pc = 0x161e50u;

    // 0x161e50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x161e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x161e54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x161e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x161e58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x161e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x161e5c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x161e5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x161e60: 0x8f828918  lw          $v0, -0x76E8($gp)
    ctx->pc = 0x161e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
    // 0x161e64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x161E64u;
    {
        const bool branch_taken_0x161e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161E64u;
            // 0x161e68: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e64) {
            ctx->pc = 0x161E74u;
            goto label_161e74;
        }
    }
    ctx->pc = 0x161E6Cu;
    // 0x161e6c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x161E6Cu;
    {
        const bool branch_taken_0x161e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161E6Cu;
            // 0x161e70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e6c) {
            ctx->pc = 0x161EA8u;
            goto label_161ea8;
        }
    }
    ctx->pc = 0x161E74u;
label_161e74:
    // 0x161e74: 0xc05190c  jal         func_146430
    ctx->pc = 0x161E74u;
    SET_GPR_U32(ctx, 31, 0x161E7Cu);
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E7Cu; }
        if (ctx->pc != 0x161E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E7Cu; }
        if (ctx->pc != 0x161E7Cu) { return; }
    }
    ctx->pc = 0x161E7Cu;
label_161e7c:
    // 0x161e7c: 0x8f848918  lw          $a0, -0x76E8($gp)
    ctx->pc = 0x161e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
    // 0x161e80: 0xc05874c  jal         func_161D30
    ctx->pc = 0x161E80u;
    SET_GPR_U32(ctx, 31, 0x161E88u);
    ctx->pc = 0x161E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161E80u;
            // 0x161e84: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x161D30u;
    if (runtime->hasFunction(0x161D30u)) {
        auto targetFn = runtime->lookupFunction(0x161D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E88u; }
        if (ctx->pc != 0x161E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetData__17CList_9CMapParts_Fv_0x161d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E88u; }
        if (ctx->pc != 0x161E88u) { return; }
    }
    ctx->pc = 0x161E88u;
label_161e88:
    // 0x161e88: 0xe4540050  swc1        $f20, 0x50($v0)
    ctx->pc = 0x161e88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x161e8c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x161E8Cu;
    SET_GPR_U32(ctx, 31, 0x161E94u);
    ctx->pc = 0x161E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161E8Cu;
            // 0x161e90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E94u; }
        if (ctx->pc != 0x161E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E94u; }
        if (ctx->pc != 0x161E94u) { return; }
    }
    ctx->pc = 0x161E94u;
label_161e94:
    // 0x161e94: 0x8f848918  lw          $a0, -0x76E8($gp)
    ctx->pc = 0x161e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
    // 0x161e98: 0xc05874c  jal         func_161D30
    ctx->pc = 0x161E98u;
    SET_GPR_U32(ctx, 31, 0x161EA0u);
    ctx->pc = 0x161E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161E98u;
            // 0x161e9c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161D30u;
    if (runtime->hasFunction(0x161D30u)) {
        auto targetFn = runtime->lookupFunction(0x161D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161EA0u; }
        if (ctx->pc != 0x161EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetData__17CList_9CMapParts_Fv_0x161d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161EA0u; }
        if (ctx->pc != 0x161EA0u) { return; }
    }
    ctx->pc = 0x161EA0u;
label_161ea0:
    // 0x161ea0: 0xac500054  sw          $s0, 0x54($v0)
    ctx->pc = 0x161ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 16));
    // 0x161ea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161ea8:
    // 0x161ea8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x161ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161eac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x161eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x161eb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x161eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x161EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161EB4u;
            // 0x161eb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161EBCu;
}
