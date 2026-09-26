#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapBGCOLOR2__FP9SPI_STACKi
// Address: 0x165380 - 0x165444
void mapBGCOLOR2__FP9SPI_STACKi_0x165380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapBGCOLOR2__FP9SPI_STACKi_0x165380");
#endif

    switch (ctx->pc) {
        case 0x1653a8u: goto label_1653a8;
        case 0x1653bcu: goto label_1653bc;
        case 0x1653ccu: goto label_1653cc;
        default: break;
    }

    ctx->pc = 0x165380u;

    // 0x165380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x165384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x165384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x165388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16538c: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x16538cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x165390: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165390u;
    {
        const bool branch_taken_0x165390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165390u;
            // 0x165394: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165390) {
            ctx->pc = 0x1653A0u;
            goto label_1653a0;
        }
    }
    ctx->pc = 0x165398u;
    // 0x165398: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x165398u;
    {
        const bool branch_taken_0x165398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16539Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165398u;
            // 0x16539c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165398) {
            ctx->pc = 0x165434u;
            goto label_165434;
        }
    }
    ctx->pc = 0x1653A0u;
label_1653a0:
    // 0x1653a0: 0xc05190c  jal         func_146430
    ctx->pc = 0x1653A0u;
    SET_GPR_U32(ctx, 31, 0x1653A8u);
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1653A8u; }
        if (ctx->pc != 0x1653A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1653A8u; }
        if (ctx->pc != 0x1653A8u) { return; }
    }
    ctx->pc = 0x1653A8u;
label_1653a8:
    // 0x1653a8: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x1653a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x1653ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1653acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1653b0: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1653b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1653b4: 0xc05190c  jal         func_146430
    ctx->pc = 0x1653B4u;
    SET_GPR_U32(ctx, 31, 0x1653BCu);
    ctx->pc = 0x1653B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1653B4u;
            // 0x1653b8: 0xe4400020  swc1        $f0, 0x20($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1653BCu; }
        if (ctx->pc != 0x1653BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1653BCu; }
        if (ctx->pc != 0x1653BCu) { return; }
    }
    ctx->pc = 0x1653BCu;
label_1653bc:
    // 0x1653bc: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x1653bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x1653c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1653c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1653c4: 0xc05190c  jal         func_146430
    ctx->pc = 0x1653C4u;
    SET_GPR_U32(ctx, 31, 0x1653CCu);
    ctx->pc = 0x1653C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1653C4u;
            // 0x1653c8: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1653CCu; }
        if (ctx->pc != 0x1653CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1653CCu; }
        if (ctx->pc != 0x1653CCu) { return; }
    }
    ctx->pc = 0x1653CCu;
label_1653cc:
    // 0x1653cc: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x1653ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x1653d0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1653d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x1653d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1653d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1653d8: 0x0  nop
    ctx->pc = 0x1653d8u;
    // NOP
    // 0x1653dc: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x1653dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x1653e0: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x1653e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x1653e4: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1653e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x1653e8: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x1653e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x1653ec: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1653ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1653f0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1653f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1653f4: 0x0  nop
    ctx->pc = 0x1653f4u;
    // NOP
    // 0x1653f8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1653F8u;
    {
        const bool branch_taken_0x1653f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1653FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1653F8u;
            // 0x1653fc: 0x24430020  addiu       $v1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1653f8) {
            ctx->pc = 0x165430u;
            goto label_165430;
        }
    }
    ctx->pc = 0x165400u;
    // 0x165400: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x165400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165404: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x165404u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165408: 0x0  nop
    ctx->pc = 0x165408u;
    // NOP
    // 0x16540c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x16540Cu;
    {
        const bool branch_taken_0x16540c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16540c) {
            ctx->pc = 0x165430u;
            goto label_165430;
        }
    }
    ctx->pc = 0x165414u;
    // 0x165414: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x165414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165418: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x165418u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16541c: 0x0  nop
    ctx->pc = 0x16541cu;
    // NOP
    // 0x165420: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x165420u;
    {
        const bool branch_taken_0x165420 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x165420) {
            ctx->pc = 0x165430u;
            goto label_165430;
        }
    }
    ctx->pc = 0x165428u;
    // 0x165428: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x165428u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16542c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x16542cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_165430:
    // 0x165430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165434:
    // 0x165434: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x165434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16543c: 0x3e00008  jr          $ra
    ctx->pc = 0x16543Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16543Cu;
            // 0x165440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165444u;
}
