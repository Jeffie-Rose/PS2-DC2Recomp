#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_FILLBOX__FP9SPI_STACKi
// Address: 0x253980 - 0x253ab0
void ps2__MENU_FILLBOX__FP9SPI_STACKi_0x253980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_FILLBOX__FP9SPI_STACKi_0x253980");
#endif

    switch (ctx->pc) {
        case 0x25399cu: goto label_25399c;
        case 0x2539b0u: goto label_2539b0;
        case 0x2539c0u: goto label_2539c0;
        case 0x2539d4u: goto label_2539d4;
        case 0x2539e0u: goto label_2539e0;
        case 0x2539f8u: goto label_2539f8;
        case 0x253a10u: goto label_253a10;
        case 0x253a28u: goto label_253a28;
        case 0x253a3cu: goto label_253a3c;
        case 0x253a8cu: goto label_253a8c;
        default: break;
    }

    ctx->pc = 0x253980u;

    // 0x253980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x253980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x253984: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x253984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x253988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x253988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25398c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25398cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x253990: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x253990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253994: 0xc089828  jal         func_2260A0
    ctx->pc = 0x253994u;
    SET_GPR_U32(ctx, 31, 0x25399Cu);
    ctx->pc = 0x253998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253994u;
            // 0x253998: 0x8f8497bc  lw          $a0, -0x6844($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2260A0u;
    if (runtime->hasFunction(0x2260A0u)) {
        auto targetFn = runtime->lookupFunction(0x2260A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25399Cu; }
        if (ctx->pc != 0x25399Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnableEnterPart__16CMenuPosDataFormFv_0x2260a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25399Cu; }
        if (ctx->pc != 0x25399Cu) { return; }
    }
    ctx->pc = 0x25399Cu;
label_25399c:
    // 0x25399c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25399cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2539a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539a4: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2539a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2539a8: 0xc05191c  jal         func_146470
    ctx->pc = 0x2539A8u;
    SET_GPR_U32(ctx, 31, 0x2539B0u);
    ctx->pc = 0x2539ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2539A8u;
            // 0x2539ac: 0xaf9097c0  sw          $s0, -0x6840($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940608), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2539B0u; }
        if (ctx->pc != 0x2539B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2539B0u; }
        if (ctx->pc != 0x2539B0u) { return; }
    }
    ctx->pc = 0x2539B0u;
label_2539b0:
    // 0x2539b0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x2539b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x2539b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2539b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539b8: 0xc0948d4  jal         func_252350
    ctx->pc = 0x2539B8u;
    SET_GPR_U32(ctx, 31, 0x2539C0u);
    ctx->pc = 0x2539BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2539B8u;
            // 0x2539bc: 0x24841640  addiu       $a0, $a0, 0x1640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252350u;
    if (runtime->hasFunction(0x252350u)) {
        auto targetFn = runtime->lookupFunction(0x252350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2539C0u; }
        if (ctx->pc != 0x2539C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_spi_analyze_func_strcut1__FP24MENU_SPI_ANALYZE_STRUCT1Pc_0x252350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2539C0u; }
        if (ctx->pc != 0x2539C0u) { return; }
    }
    ctx->pc = 0x2539C0u;
label_2539c0:
    // 0x2539c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2539c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539c4: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x2539c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x2539c8: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2539c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2539cc: 0xc094bcc  jal         func_252F30
    ctx->pc = 0x2539CCu;
    SET_GPR_U32(ctx, 31, 0x2539D4u);
    ctx->pc = 0x2539D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2539CCu;
            // 0x2539d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252F30u;
    if (runtime->hasFunction(0x252F30u)) {
        auto targetFn = runtime->lookupFunction(0x252F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2539D4u; }
        if (ctx->pc != 0x2539D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakePartsName__FP9SPI_STACKP18MENUFORMPARTS_TYPE_0x252f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2539D4u; }
        if (ctx->pc != 0x2539D4u) { return; }
    }
    ctx->pc = 0x2539D4u;
label_2539d4:
    // 0x2539d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2539d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539d8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2539D8u;
    SET_GPR_U32(ctx, 31, 0x2539E0u);
    ctx->pc = 0x2539DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2539D8u;
            // 0x2539dc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2539E0u; }
        if (ctx->pc != 0x2539E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2539E0u; }
        if (ctx->pc != 0x2539E0u) { return; }
    }
    ctx->pc = 0x2539E0u;
label_2539e0:
    // 0x2539e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2539e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2539e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2539e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539e8: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2539e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2539ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2539ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2539f0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2539F0u;
    SET_GPR_U32(ctx, 31, 0x2539F8u);
    ctx->pc = 0x2539F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2539F0u;
            // 0x2539f4: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2539F8u; }
        if (ctx->pc != 0x2539F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2539F8u; }
        if (ctx->pc != 0x2539F8u) { return; }
    }
    ctx->pc = 0x2539F8u;
label_2539f8:
    // 0x2539f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2539f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2539fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2539fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a00: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x253a00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253a04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253a04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253a08: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253A08u;
    SET_GPR_U32(ctx, 31, 0x253A10u);
    ctx->pc = 0x253A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253A08u;
            // 0x253a0c: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253A10u; }
        if (ctx->pc != 0x253A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253A10u; }
        if (ctx->pc != 0x253A10u) { return; }
    }
    ctx->pc = 0x253A10u;
label_253a10:
    // 0x253a10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253a14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a18: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x253a18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253a1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253a1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253a20: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253A20u;
    SET_GPR_U32(ctx, 31, 0x253A28u);
    ctx->pc = 0x253A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253A20u;
            // 0x253a24: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253A28u; }
        if (ctx->pc != 0x253A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253A28u; }
        if (ctx->pc != 0x253A28u) { return; }
    }
    ctx->pc = 0x253A28u;
label_253a28:
    // 0x253a28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253a28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253a2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253a30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253a34: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253A34u;
    SET_GPR_U32(ctx, 31, 0x253A3Cu);
    ctx->pc = 0x253A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253A34u;
            // 0x253a38: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253A3Cu; }
        if (ctx->pc != 0x253A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253A3Cu; }
        if (ctx->pc != 0x253A3Cu) { return; }
    }
    ctx->pc = 0x253A3Cu;
label_253a3c:
    // 0x253a3c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x253a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x253a40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x253a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253a44: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x253a44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x253a48: 0x27a2003c  addiu       $v0, $sp, 0x3C
    ctx->pc = 0x253a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x253a4c: 0xa2030005  sb          $v1, 0x5($s0)
    ctx->pc = 0x253a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x253a50: 0xc78083f4  lwc1        $f0, -0x7C0C($gp)
    ctx->pc = 0x253a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253a54: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x253a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x253a58: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x253a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x253a5c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x253a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x253a60: 0x9043003c  lbu         $v1, 0x3C($v0)
    ctx->pc = 0x253a60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x253a64: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x253a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x253a68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x253a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x253a6c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x253a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x253a70: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x253a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x253a74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x253A74u;
    {
        const bool branch_taken_0x253a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253A74u;
            // 0x253a78: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253a74) {
            ctx->pc = 0x253A84u;
            goto label_253a84;
        }
    }
    ctx->pc = 0x253A7Cu;
    // 0x253a7c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x253a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x253a80: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x253a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_253a84:
    // 0x253a84: 0xc04e748  jal         func_139D20
    ctx->pc = 0x253A84u;
    SET_GPR_U32(ctx, 31, 0x253A8Cu);
    ctx->pc = 0x253A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253A84u;
            // 0x253a88: 0x8f8497b0  lw          $a0, -0x6850($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940592)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253A8Cu; }
        if (ctx->pc != 0x253A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253A8Cu; }
        if (ctx->pc != 0x253A8Cu) { return; }
    }
    ctx->pc = 0x253A8Cu;
label_253a8c:
    // 0x253a8c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x253a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x253a90: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x253a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x253a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253a98: 0xaf8397c4  sw          $v1, -0x683C($gp)
    ctx->pc = 0x253a98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940612), GPR_U32(ctx, 3));
    // 0x253a9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x253a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253aa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x253aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253aa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x253aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x253AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253AA8u;
            // 0x253aac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x253AB0u;
}
