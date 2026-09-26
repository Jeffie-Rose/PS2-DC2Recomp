#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cfgWATER_PARAM__FP9SPI_STACKi
// Address: 0x1649d0 - 0x164a54
void cfgWATER_PARAM__FP9SPI_STACKi_0x1649d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cfgWATER_PARAM__FP9SPI_STACKi_0x1649d0");
#endif

    switch (ctx->pc) {
        case 0x1649f0u: goto label_1649f0;
        case 0x164a00u: goto label_164a00;
        case 0x164a10u: goto label_164a10;
        case 0x164a1cu: goto label_164a1c;
        case 0x164a34u: goto label_164a34;
        default: break;
    }

    ctx->pc = 0x1649d0u;

    // 0x1649d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1649d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1649d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1649d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1649d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1649d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1649dc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1649dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1649e0: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1649e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1649e4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1649e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1649e8: 0xc05190c  jal         func_146430
    ctx->pc = 0x1649E8u;
    SET_GPR_U32(ctx, 31, 0x1649F0u);
    ctx->pc = 0x1649ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1649E8u;
            // 0x1649ec: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1649F0u; }
        if (ctx->pc != 0x1649F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1649F0u; }
        if (ctx->pc != 0x1649F0u) { return; }
    }
    ctx->pc = 0x1649F0u;
label_1649f0:
    // 0x1649f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1649f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1649f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1649f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1649f8: 0xc05190c  jal         func_146430
    ctx->pc = 0x1649F8u;
    SET_GPR_U32(ctx, 31, 0x164A00u);
    ctx->pc = 0x1649FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1649F8u;
            // 0x1649fc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A00u; }
        if (ctx->pc != 0x164A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A00u; }
        if (ctx->pc != 0x164A00u) { return; }
    }
    ctx->pc = 0x164A00u;
label_164a00:
    // 0x164a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164a04: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x164a04u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x164a08: 0xc05190c  jal         func_146430
    ctx->pc = 0x164A08u;
    SET_GPR_U32(ctx, 31, 0x164A10u);
    ctx->pc = 0x164A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164A08u;
            // 0x164a0c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A10u; }
        if (ctx->pc != 0x164A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A10u; }
        if (ctx->pc != 0x164A10u) { return; }
    }
    ctx->pc = 0x164A10u;
label_164a10:
    // 0x164a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164a14: 0xc05190c  jal         func_146430
    ctx->pc = 0x164A14u;
    SET_GPR_U32(ctx, 31, 0x164A1Cu);
    ctx->pc = 0x164A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164A14u;
            // 0x164a18: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A1Cu; }
        if (ctx->pc != 0x164A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A1Cu; }
        if (ctx->pc != 0x164A1Cu) { return; }
    }
    ctx->pc = 0x164A1Cu;
label_164a1c:
    // 0x164a1c: 0x8f848958  lw          $a0, -0x76A8($gp)
    ctx->pc = 0x164a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936920)));
    // 0x164a20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x164a20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x164a24: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x164a24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x164a28: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x164a28u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x164a2c: 0xc0616f0  jal         func_185BC0
    ctx->pc = 0x164A2Cu;
    SET_GPR_U32(ctx, 31, 0x164A34u);
    ctx->pc = 0x164A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164A2Cu;
            // 0x164a30: 0x460003c6  mov.s       $f15, $f0 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x185BC0u;
    if (runtime->hasFunction(0x185BC0u)) {
        auto targetFn = runtime->lookupFunction(0x185BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A34u; }
        if (ctx->pc != 0x164A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetParam__11CWaterFrameFffff_0x185bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A34u; }
        if (ctx->pc != 0x164A34u) { return; }
    }
    ctx->pc = 0x164A34u;
label_164a34:
    // 0x164a34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x164a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164a38: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x164a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x164a3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x164a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164a40: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x164a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x164a44: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x164a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x164a48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x164A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164A4Cu;
            // 0x164a50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164A54u;
}
