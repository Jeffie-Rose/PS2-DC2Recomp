#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ROTATION__FP9SPI_STACKi
// Address: 0x1770f0 - 0x177160
void ps2__ROTATION__FP9SPI_STACKi_0x1770f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ROTATION__FP9SPI_STACKi_0x1770f0");
#endif

    switch (ctx->pc) {
        case 0x1770f0u: goto label_1770f0;
        case 0x1770f4u: goto label_1770f4;
        case 0x1770f8u: goto label_1770f8;
        case 0x1770fcu: goto label_1770fc;
        case 0x177100u: goto label_177100;
        case 0x177104u: goto label_177104;
        case 0x177108u: goto label_177108;
        case 0x17710cu: goto label_17710c;
        case 0x177110u: goto label_177110;
        case 0x177114u: goto label_177114;
        case 0x177118u: goto label_177118;
        case 0x17711cu: goto label_17711c;
        case 0x177120u: goto label_177120;
        case 0x177124u: goto label_177124;
        case 0x177128u: goto label_177128;
        case 0x17712cu: goto label_17712c;
        case 0x177130u: goto label_177130;
        case 0x177134u: goto label_177134;
        case 0x177138u: goto label_177138;
        case 0x17713cu: goto label_17713c;
        case 0x177140u: goto label_177140;
        case 0x177144u: goto label_177144;
        case 0x177148u: goto label_177148;
        case 0x17714cu: goto label_17714c;
        case 0x177150u: goto label_177150;
        case 0x177154u: goto label_177154;
        case 0x177158u: goto label_177158;
        case 0x17715cu: goto label_17715c;
        default: break;
    }

    ctx->pc = 0x1770f0u;

label_1770f0:
    // 0x1770f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1770f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1770f4:
    // 0x1770f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1770f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1770f8:
    // 0x1770f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1770f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1770fc:
    // 0x1770fc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1770fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_177100:
    // 0x177100: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x177100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_177104:
    // 0x177104: 0xc05190c  jal         func_146430
label_177108:
    if (ctx->pc == 0x177108u) {
        ctx->pc = 0x177108u;
            // 0x177108: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x17710Cu;
        goto label_17710c;
    }
    ctx->pc = 0x177104u;
    SET_GPR_U32(ctx, 31, 0x17710Cu);
    ctx->pc = 0x177108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177104u;
            // 0x177108: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17710Cu; }
        if (ctx->pc != 0x17710Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17710Cu; }
        if (ctx->pc != 0x17710Cu) { return; }
    }
    ctx->pc = 0x17710Cu;
label_17710c:
    // 0x17710c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17710cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_177110:
    // 0x177110: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x177110u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_177114:
    // 0x177114: 0xc05190c  jal         func_146430
label_177118:
    if (ctx->pc == 0x177118u) {
        ctx->pc = 0x177118u;
            // 0x177118: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x17711Cu;
        goto label_17711c;
    }
    ctx->pc = 0x177114u;
    SET_GPR_U32(ctx, 31, 0x17711Cu);
    ctx->pc = 0x177118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177114u;
            // 0x177118: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17711Cu; }
        if (ctx->pc != 0x17711Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17711Cu; }
        if (ctx->pc != 0x17711Cu) { return; }
    }
    ctx->pc = 0x17711Cu;
label_17711c:
    // 0x17711c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17711cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_177120:
    // 0x177120: 0xc05190c  jal         func_146430
label_177124:
    if (ctx->pc == 0x177124u) {
        ctx->pc = 0x177124u;
            // 0x177124: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x177128u;
        goto label_177128;
    }
    ctx->pc = 0x177120u;
    SET_GPR_U32(ctx, 31, 0x177128u);
    ctx->pc = 0x177124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177120u;
            // 0x177124: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177128u; }
        if (ctx->pc != 0x177128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177128u; }
        if (ctx->pc != 0x177128u) { return; }
    }
    ctx->pc = 0x177128u;
label_177128:
    // 0x177128: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x177128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
label_17712c:
    // 0x17712c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x17712cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_177130:
    // 0x177130: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x177130u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_177134:
    // 0x177134: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x177134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_177138:
    // 0x177138: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x177138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_17713c:
    // 0x17713c: 0x320f809  jalr        $t9
label_177140:
    if (ctx->pc == 0x177140u) {
        ctx->pc = 0x177140u;
            // 0x177140: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x177144u;
        goto label_177144;
    }
    ctx->pc = 0x17713Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x177144u);
        ctx->pc = 0x177140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17713Cu;
            // 0x177140: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x177144u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x177144u; }
            if (ctx->pc != 0x177144u) { return; }
        }
        }
    }
    ctx->pc = 0x177144u;
label_177144:
    // 0x177144: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x177144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_177148:
    // 0x177148: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x177148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_17714c:
    // 0x17714c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17714cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_177150:
    // 0x177150: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x177150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_177154:
    // 0x177154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_177158:
    // 0x177158: 0x3e00008  jr          $ra
label_17715c:
    if (ctx->pc == 0x17715Cu) {
        ctx->pc = 0x17715Cu;
            // 0x17715c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x177160u;
        goto label_fallthrough_0x177158;
    }
    ctx->pc = 0x177158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17715Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177158u;
            // 0x17715c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x177158:
    ctx->pc = 0x177160u;
}
