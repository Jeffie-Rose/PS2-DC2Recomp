#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapFOG__FP9SPI_STACKi
// Address: 0x1656e0 - 0x1657e0
void mapFOG__FP9SPI_STACKi_0x1656e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapFOG__FP9SPI_STACKi_0x1656e0");
#endif

    switch (ctx->pc) {
        case 0x165738u: goto label_165738;
        case 0x16574cu: goto label_16574c;
        case 0x165768u: goto label_165768;
        case 0x16577cu: goto label_16577c;
        case 0x165790u: goto label_165790;
        case 0x1657b0u: goto label_1657b0;
        case 0x1657c0u: goto label_1657c0;
        default: break;
    }

    ctx->pc = 0x1656e0u;

    // 0x1656e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1656e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1656e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1656e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1656e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1656e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1656ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1656ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1656f0: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x1656f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x1656f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1656F4u;
    {
        const bool branch_taken_0x1656f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1656F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1656F4u;
            // 0x1656f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1656f4) {
            ctx->pc = 0x165704u;
            goto label_165704;
        }
    }
    ctx->pc = 0x1656FCu;
    // 0x1656fc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1656FCu;
    {
        const bool branch_taken_0x1656fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1656FCu;
            // 0x165700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1656fc) {
            ctx->pc = 0x1657CCu;
            goto label_1657cc;
        }
    }
    ctx->pc = 0x165704u;
label_165704:
    // 0x165704: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x165704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x165708: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x165708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x16570c: 0xa04501a8  sb          $a1, 0x1A8($v0)
    ctx->pc = 0x16570cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 424), (uint8_t)GPR_U32(ctx, 5));
    // 0x165710: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x165710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x165714: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x165714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x165718: 0xa04501a9  sb          $a1, 0x1A9($v0)
    ctx->pc = 0x165718u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 425), (uint8_t)GPR_U32(ctx, 5));
    // 0x16571c: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x16571cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x165720: 0xa04501aa  sb          $a1, 0x1AA($v0)
    ctx->pc = 0x165720u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 426), (uint8_t)GPR_U32(ctx, 5));
    // 0x165724: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x165724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x165728: 0xac4001b0  sw          $zero, 0x1B0($v0)
    ctx->pc = 0x165728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 432), GPR_U32(ctx, 0));
    // 0x16572c: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x16572cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x165730: 0xc05190c  jal         func_146430
    ctx->pc = 0x165730u;
    SET_GPR_U32(ctx, 31, 0x165738u);
    ctx->pc = 0x165734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165730u;
            // 0x165734: 0xac4301b4  sw          $v1, 0x1B4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165738u; }
        if (ctx->pc != 0x165738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165738u; }
        if (ctx->pc != 0x165738u) { return; }
    }
    ctx->pc = 0x165738u;
label_165738:
    // 0x165738: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x165738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x16573c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16573cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165740: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x165740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x165744: 0xc05190c  jal         func_146430
    ctx->pc = 0x165744u;
    SET_GPR_U32(ctx, 31, 0x16574Cu);
    ctx->pc = 0x165748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165744u;
            // 0x165748: 0xe44001a0  swc1        $f0, 0x1A0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16574Cu; }
        if (ctx->pc != 0x16574Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16574Cu; }
        if (ctx->pc != 0x16574Cu) { return; }
    }
    ctx->pc = 0x16574Cu;
label_16574c:
    // 0x16574c: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x16574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x165750: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x165750u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x165754: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x165754u;
    {
        const bool branch_taken_0x165754 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x165758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165754u;
            // 0x165758: 0xe44001a4  swc1        $f0, 0x1A4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x165754) {
            ctx->pc = 0x165798u;
            goto label_165798;
        }
    }
    ctx->pc = 0x16575Cu;
    // 0x16575c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16575cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165760: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x165760u;
    SET_GPR_U32(ctx, 31, 0x165768u);
    ctx->pc = 0x165764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165760u;
            // 0x165764: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165768u; }
        if (ctx->pc != 0x165768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165768u; }
        if (ctx->pc != 0x165768u) { return; }
    }
    ctx->pc = 0x165768u;
label_165768:
    // 0x165768: 0x8f83896c  lw          $v1, -0x7694($gp)
    ctx->pc = 0x165768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x16576c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16576cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165770: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x165770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x165774: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x165774u;
    SET_GPR_U32(ctx, 31, 0x16577Cu);
    ctx->pc = 0x165778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165774u;
            // 0x165778: 0xa06201a8  sb          $v0, 0x1A8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 424), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16577Cu; }
        if (ctx->pc != 0x16577Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16577Cu; }
        if (ctx->pc != 0x16577Cu) { return; }
    }
    ctx->pc = 0x16577Cu;
label_16577c:
    // 0x16577c: 0x8f83896c  lw          $v1, -0x7694($gp)
    ctx->pc = 0x16577cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x165780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165784: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x165784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x165788: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x165788u;
    SET_GPR_U32(ctx, 31, 0x165790u);
    ctx->pc = 0x16578Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165788u;
            // 0x16578c: 0xa06201a9  sb          $v0, 0x1A9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 425), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165790u; }
        if (ctx->pc != 0x165790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165790u; }
        if (ctx->pc != 0x165790u) { return; }
    }
    ctx->pc = 0x165790u;
label_165790:
    // 0x165790: 0x8f83896c  lw          $v1, -0x7694($gp)
    ctx->pc = 0x165790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x165794: 0xa06201aa  sb          $v0, 0x1AA($v1)
    ctx->pc = 0x165794u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 426), (uint8_t)GPR_U32(ctx, 2));
label_165798:
    // 0x165798: 0x2a010006  slti        $at, $s0, 0x6
    ctx->pc = 0x165798u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x16579c: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x16579Cu;
    {
        const bool branch_taken_0x16579c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1657A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16579Cu;
            // 0x1657a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16579c) {
            ctx->pc = 0x1657CCu;
            goto label_1657cc;
        }
    }
    ctx->pc = 0x1657A4u;
    // 0x1657a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1657a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1657a8: 0xc05190c  jal         func_146430
    ctx->pc = 0x1657A8u;
    SET_GPR_U32(ctx, 31, 0x1657B0u);
    ctx->pc = 0x1657ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1657A8u;
            // 0x1657ac: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1657B0u; }
        if (ctx->pc != 0x1657B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1657B0u; }
        if (ctx->pc != 0x1657B0u) { return; }
    }
    ctx->pc = 0x1657B0u;
label_1657b0:
    // 0x1657b0: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x1657b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x1657b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1657b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1657b8: 0xc05190c  jal         func_146430
    ctx->pc = 0x1657B8u;
    SET_GPR_U32(ctx, 31, 0x1657C0u);
    ctx->pc = 0x1657BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1657B8u;
            // 0x1657bc: 0xe44001b0  swc1        $f0, 0x1B0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 432), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1657C0u; }
        if (ctx->pc != 0x1657C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1657C0u; }
        if (ctx->pc != 0x1657C0u) { return; }
    }
    ctx->pc = 0x1657C0u;
label_1657c0:
    // 0x1657c0: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x1657c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x1657c4: 0xe44001b4  swc1        $f0, 0x1B4($v0)
    ctx->pc = 0x1657c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 436), bits); }
    // 0x1657c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1657c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1657cc:
    // 0x1657cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1657ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1657d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1657d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1657d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1657d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1657d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1657D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1657DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1657D8u;
            // 0x1657dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1657E0u;
}
