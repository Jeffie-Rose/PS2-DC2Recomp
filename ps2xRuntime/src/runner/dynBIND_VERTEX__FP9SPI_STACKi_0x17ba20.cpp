#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dynBIND_VERTEX__FP9SPI_STACKi
// Address: 0x17ba20 - 0x17bb78
void dynBIND_VERTEX__FP9SPI_STACKi_0x17ba20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dynBIND_VERTEX__FP9SPI_STACKi_0x17ba20");
#endif

    switch (ctx->pc) {
        case 0x17ba58u: goto label_17ba58;
        case 0x17ba74u: goto label_17ba74;
        case 0x17ba84u: goto label_17ba84;
        case 0x17ba94u: goto label_17ba94;
        case 0x17baa8u: goto label_17baa8;
        case 0x17bac4u: goto label_17bac4;
        case 0x17bae0u: goto label_17bae0;
        case 0x17bb34u: goto label_17bb34;
        case 0x17bb44u: goto label_17bb44;
        case 0x17bb50u: goto label_17bb50;
        default: break;
    }

    ctx->pc = 0x17ba20u;

    // 0x17ba20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x17ba20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17ba24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17ba24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17ba28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17ba28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17ba2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17ba2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17ba30: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17ba30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17ba34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17ba38: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17ba38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ba3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17ba40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ba40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17ba44: 0x8f858a28  lw          $a1, -0x75D8($gp)
    ctx->pc = 0x17ba44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937128)));
    // 0x17ba48: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17ba48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17ba4c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x17ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17ba50: 0xc05eafc  jal         func_17ABF0
    ctx->pc = 0x17BA50u;
    SET_GPR_U32(ctx, 31, 0x17BA58u);
    ctx->pc = 0x17BA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BA50u;
            // 0x17ba54: 0xaf828a28  sw          $v0, -0x75D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17ABF0u;
    if (runtime->hasFunction(0x17ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x17ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BA58u; }
        if (ctx->pc != 0x17BA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetBindVertex__13CDynamicAnimeFi_0x17abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BA58u; }
        if (ctx->pc != 0x17BA58u) { return; }
    }
    ctx->pc = 0x17BA58u;
label_17ba58:
    // 0x17ba58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17ba58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba5c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BA5Cu;
    {
        const bool branch_taken_0x17ba5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BA5Cu;
            // 0x17ba60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba5c) {
            ctx->pc = 0x17BA6Cu;
            goto label_17ba6c;
        }
    }
    ctx->pc = 0x17BA64u;
    // 0x17ba64: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x17BA64u;
    {
        const bool branch_taken_0x17ba64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BA64u;
            // 0x17ba68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba64) {
            ctx->pc = 0x17BB58u;
            goto label_17bb58;
        }
    }
    ctx->pc = 0x17BA6Cu;
label_17ba6c:
    // 0x17ba6c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x17BA6Cu;
    SET_GPR_U32(ctx, 31, 0x17BA74u);
    ctx->pc = 0x17BA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BA6Cu;
            // 0x17ba70: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BA74u; }
        if (ctx->pc != 0x17BA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BA74u; }
        if (ctx->pc != 0x17BA74u) { return; }
    }
    ctx->pc = 0x17BA74u;
label_17ba74:
    // 0x17ba74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17ba74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17ba78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba7c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x17BA7Cu;
    SET_GPR_U32(ctx, 31, 0x17BA84u);
    ctx->pc = 0x17BA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BA7Cu;
            // 0x17ba80: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BA84u; }
        if (ctx->pc != 0x17BA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BA84u; }
        if (ctx->pc != 0x17BA84u) { return; }
    }
    ctx->pc = 0x17BA84u;
label_17ba84:
    // 0x17ba84: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17ba84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17ba88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17ba88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba8c: 0xc05ea5c  jal         func_17A970
    ctx->pc = 0x17BA8Cu;
    SET_GPR_U32(ctx, 31, 0x17BA94u);
    ctx->pc = 0x17BA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BA8Cu;
            // 0x17ba90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A970u;
    if (runtime->hasFunction(0x17A970u)) {
        auto targetFn = runtime->lookupFunction(0x17A970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BA94u; }
        if (ctx->pc != 0x17BA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckVertexID__13CDynamicAnimeFi_0x17a970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BA94u; }
        if (ctx->pc != 0x17BA94u) { return; }
    }
    ctx->pc = 0x17BA94u;
label_17ba94:
    // 0x17ba94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17BA94u;
    {
        const bool branch_taken_0x17ba94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ba94) {
            ctx->pc = 0x17BAB0u;
            goto label_17bab0;
        }
    }
    ctx->pc = 0x17BA9Cu;
    // 0x17ba9c: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17ba9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17baa0: 0xc05ea5c  jal         func_17A970
    ctx->pc = 0x17BAA0u;
    SET_GPR_U32(ctx, 31, 0x17BAA8u);
    ctx->pc = 0x17BAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BAA0u;
            // 0x17baa4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A970u;
    if (runtime->hasFunction(0x17A970u)) {
        auto targetFn = runtime->lookupFunction(0x17A970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BAA8u; }
        if (ctx->pc != 0x17BAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckVertexID__13CDynamicAnimeFi_0x17a970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BAA8u; }
        if (ctx->pc != 0x17BAA8u) { return; }
    }
    ctx->pc = 0x17BAA8u;
label_17baa8:
    // 0x17baa8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17BAA8u;
    {
        const bool branch_taken_0x17baa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BAA8u;
            // 0x17baac: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17baa8) {
            ctx->pc = 0x17BACCu;
            goto label_17bacc;
        }
    }
    ctx->pc = 0x17BAB0u;
label_17bab0:
    // 0x17bab0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17bab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17bab4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17bab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bab8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17bab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17babc: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x17BABCu;
    SET_GPR_U32(ctx, 31, 0x17BAC4u);
    ctx->pc = 0x17BAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BABCu;
            // 0x17bac0: 0x24843ba0  addiu       $a0, $a0, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BAC4u; }
        if (ctx->pc != 0x17BAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BAC4u; }
        if (ctx->pc != 0x17BAC4u) { return; }
    }
    ctx->pc = 0x17BAC4u;
label_17bac4:
    // 0x17bac4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x17BAC4u;
    {
        const bool branch_taken_0x17bac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BAC4u;
            // 0x17bac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bac4) {
            ctx->pc = 0x17BB58u;
            goto label_17bb58;
        }
    }
    ctx->pc = 0x17BACCu;
label_17bacc:
    // 0x17bacc: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x17baccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17bad0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17BAD0u;
    {
        const bool branch_taken_0x17bad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BAD0u;
            // 0x17bad4: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bad0) {
            ctx->pc = 0x17BB1Cu;
            goto label_17bb1c;
        }
    }
    ctx->pc = 0x17BAD8u;
    // 0x17bad8: 0xc05190c  jal         func_146430
    ctx->pc = 0x17BAD8u;
    SET_GPR_U32(ctx, 31, 0x17BAE0u);
    ctx->pc = 0x17BADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BAD8u;
            // 0x17badc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BAE0u; }
        if (ctx->pc != 0x17BAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BAE0u; }
        if (ctx->pc != 0x17BAE0u) { return; }
    }
    ctx->pc = 0x17BAE0u;
label_17bae0:
    // 0x17bae0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17bae4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17bae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17bae8: 0x0  nop
    ctx->pc = 0x17bae8u;
    // NOP
    // 0x17baec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17baecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17baf0: 0x0  nop
    ctx->pc = 0x17baf0u;
    // NOP
    // 0x17baf4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x17BAF4u;
    {
        const bool branch_taken_0x17baf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17BAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BAF4u;
            // 0x17baf8: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17baf4) {
            ctx->pc = 0x17BB14u;
            goto label_17bb14;
        }
    }
    ctx->pc = 0x17BAFCu;
    // 0x17bafc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17bafcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17bb00: 0x0  nop
    ctx->pc = 0x17bb00u;
    // NOP
    // 0x17bb04: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17bb04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17bb08: 0x0  nop
    ctx->pc = 0x17bb08u;
    // NOP
    // 0x17bb0c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x17BB0Cu;
    {
        const bool branch_taken_0x17bb0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17bb0c) {
            ctx->pc = 0x17BB1Cu;
            goto label_17bb1c;
        }
    }
    ctx->pc = 0x17BB14u;
label_17bb14:
    // 0x17bb14: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x17bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x17bb18: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x17bb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_17bb1c:
    // 0x17bb1c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x17bb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x17bb20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17bb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb24: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x17bb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x17bb28: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17bb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17bb2c: 0xc05ea80  jal         func_17AA00
    ctx->pc = 0x17BB2Cu;
    SET_GPR_U32(ctx, 31, 0x17BB34u);
    ctx->pc = 0x17BB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BB2Cu;
            // 0x17bb30: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AA00u;
    if (runtime->hasFunction(0x17AA00u)) {
        auto targetFn = runtime->lookupFunction(0x17AA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BB34u; }
        if (ctx->pc != 0x17BB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInitVertex__13CDynamicAnimeFiPf_0x17aa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BB34u; }
        if (ctx->pc != 0x17BB34u) { return; }
    }
    ctx->pc = 0x17BB34u;
label_17bb34:
    // 0x17bb34: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17bb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17bb38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17bb38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb3c: 0xc05ea80  jal         func_17AA00
    ctx->pc = 0x17BB3Cu;
    SET_GPR_U32(ctx, 31, 0x17BB44u);
    ctx->pc = 0x17BB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BB3Cu;
            // 0x17bb40: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AA00u;
    if (runtime->hasFunction(0x17AA00u)) {
        auto targetFn = runtime->lookupFunction(0x17AA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BB44u; }
        if (ctx->pc != 0x17BB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInitVertex__13CDynamicAnimeFiPf_0x17aa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BB44u; }
        if (ctx->pc != 0x17BB44u) { return; }
    }
    ctx->pc = 0x17BB44u;
label_17bb44:
    // 0x17bb44: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x17bb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17bb48: 0xc04c018  jal         func_130060
    ctx->pc = 0x17BB48u;
    SET_GPR_U32(ctx, 31, 0x17BB50u);
    ctx->pc = 0x17BB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BB48u;
            // 0x17bb4c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BB50u; }
        if (ctx->pc != 0x17BB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BB50u; }
        if (ctx->pc != 0x17BB50u) { return; }
    }
    ctx->pc = 0x17BB50u;
label_17bb50:
    // 0x17bb50: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x17bb50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x17bb54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17bb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17bb58:
    // 0x17bb58: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17bb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17bb5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17bb5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17bb60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17bb60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17bb64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17bb64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bb68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17bb68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bb6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17bb6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bb70: 0x3e00008  jr          $ra
    ctx->pc = 0x17BB70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BB70u;
            // 0x17bb74: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BB78u;
}
