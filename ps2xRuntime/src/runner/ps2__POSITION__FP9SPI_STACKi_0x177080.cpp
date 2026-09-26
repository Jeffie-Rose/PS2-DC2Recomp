#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _POSITION__FP9SPI_STACKi
// Address: 0x177080 - 0x1770f0
void ps2__POSITION__FP9SPI_STACKi_0x177080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__POSITION__FP9SPI_STACKi_0x177080");
#endif

    switch (ctx->pc) {
        case 0x177080u: goto label_177080;
        case 0x177084u: goto label_177084;
        case 0x177088u: goto label_177088;
        case 0x17708cu: goto label_17708c;
        case 0x177090u: goto label_177090;
        case 0x177094u: goto label_177094;
        case 0x177098u: goto label_177098;
        case 0x17709cu: goto label_17709c;
        case 0x1770a0u: goto label_1770a0;
        case 0x1770a4u: goto label_1770a4;
        case 0x1770a8u: goto label_1770a8;
        case 0x1770acu: goto label_1770ac;
        case 0x1770b0u: goto label_1770b0;
        case 0x1770b4u: goto label_1770b4;
        case 0x1770b8u: goto label_1770b8;
        case 0x1770bcu: goto label_1770bc;
        case 0x1770c0u: goto label_1770c0;
        case 0x1770c4u: goto label_1770c4;
        case 0x1770c8u: goto label_1770c8;
        case 0x1770ccu: goto label_1770cc;
        case 0x1770d0u: goto label_1770d0;
        case 0x1770d4u: goto label_1770d4;
        case 0x1770d8u: goto label_1770d8;
        case 0x1770dcu: goto label_1770dc;
        case 0x1770e0u: goto label_1770e0;
        case 0x1770e4u: goto label_1770e4;
        case 0x1770e8u: goto label_1770e8;
        case 0x1770ecu: goto label_1770ec;
        default: break;
    }

    ctx->pc = 0x177080u;

label_177080:
    // 0x177080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x177080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_177084:
    // 0x177084: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x177084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_177088:
    // 0x177088: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x177088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_17708c:
    // 0x17708c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x17708cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_177090:
    // 0x177090: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x177090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_177094:
    // 0x177094: 0xc05190c  jal         func_146430
label_177098:
    if (ctx->pc == 0x177098u) {
        ctx->pc = 0x177098u;
            // 0x177098: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x17709Cu;
        goto label_17709c;
    }
    ctx->pc = 0x177094u;
    SET_GPR_U32(ctx, 31, 0x17709Cu);
    ctx->pc = 0x177098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177094u;
            // 0x177098: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17709Cu; }
        if (ctx->pc != 0x17709Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17709Cu; }
        if (ctx->pc != 0x17709Cu) { return; }
    }
    ctx->pc = 0x17709Cu;
label_17709c:
    // 0x17709c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17709cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1770a0:
    // 0x1770a0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1770a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1770a4:
    // 0x1770a4: 0xc05190c  jal         func_146430
label_1770a8:
    if (ctx->pc == 0x1770A8u) {
        ctx->pc = 0x1770A8u;
            // 0x1770a8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1770ACu;
        goto label_1770ac;
    }
    ctx->pc = 0x1770A4u;
    SET_GPR_U32(ctx, 31, 0x1770ACu);
    ctx->pc = 0x1770A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1770A4u;
            // 0x1770a8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1770ACu; }
        if (ctx->pc != 0x1770ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1770ACu; }
        if (ctx->pc != 0x1770ACu) { return; }
    }
    ctx->pc = 0x1770ACu;
label_1770ac:
    // 0x1770ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1770acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1770b0:
    // 0x1770b0: 0xc05190c  jal         func_146430
label_1770b4:
    if (ctx->pc == 0x1770B4u) {
        ctx->pc = 0x1770B4u;
            // 0x1770b4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1770B8u;
        goto label_1770b8;
    }
    ctx->pc = 0x1770B0u;
    SET_GPR_U32(ctx, 31, 0x1770B8u);
    ctx->pc = 0x1770B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1770B0u;
            // 0x1770b4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1770B8u; }
        if (ctx->pc != 0x1770B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1770B8u; }
        if (ctx->pc != 0x1770B8u) { return; }
    }
    ctx->pc = 0x1770B8u;
label_1770b8:
    // 0x1770b8: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x1770b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
label_1770bc:
    // 0x1770bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1770bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1770c0:
    // 0x1770c0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1770c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_1770c4:
    // 0x1770c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1770c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1770c8:
    // 0x1770c8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1770c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1770cc:
    // 0x1770cc: 0x320f809  jalr        $t9
label_1770d0:
    if (ctx->pc == 0x1770D0u) {
        ctx->pc = 0x1770D0u;
            // 0x1770d0: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1770D4u;
        goto label_1770d4;
    }
    ctx->pc = 0x1770CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1770D4u);
        ctx->pc = 0x1770D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1770CCu;
            // 0x1770d0: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1770D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1770D4u; }
            if (ctx->pc != 0x1770D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1770D4u;
label_1770d4:
    // 0x1770d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1770d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1770d8:
    // 0x1770d8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1770d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1770dc:
    // 0x1770dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1770dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1770e0:
    // 0x1770e0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1770e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1770e4:
    // 0x1770e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1770e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1770e8:
    // 0x1770e8: 0x3e00008  jr          $ra
label_1770ec:
    if (ctx->pc == 0x1770ECu) {
        ctx->pc = 0x1770ECu;
            // 0x1770ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1770F0u;
        goto label_fallthrough_0x1770e8;
    }
    ctx->pc = 0x1770E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1770ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1770E8u;
            // 0x1770ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1770e8:
    ctx->pc = 0x1770F0u;
}
