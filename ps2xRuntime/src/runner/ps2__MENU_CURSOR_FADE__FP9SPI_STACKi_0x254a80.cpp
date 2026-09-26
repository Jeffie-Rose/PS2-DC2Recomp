#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_CURSOR_FADE__FP9SPI_STACKi
// Address: 0x254a80 - 0x254bcc
void ps2__MENU_CURSOR_FADE__FP9SPI_STACKi_0x254a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_CURSOR_FADE__FP9SPI_STACKi_0x254a80");
#endif

    switch (ctx->pc) {
        case 0x254ab8u: goto label_254ab8;
        case 0x254ad4u: goto label_254ad4;
        case 0x254aecu: goto label_254aec;
        case 0x254b14u: goto label_254b14;
        case 0x254b24u: goto label_254b24;
        case 0x254b3cu: goto label_254b3c;
        case 0x254b4cu: goto label_254b4c;
        case 0x254b70u: goto label_254b70;
        case 0x254b80u: goto label_254b80;
        case 0x254b98u: goto label_254b98;
        case 0x254ba8u: goto label_254ba8;
        default: break;
    }

    ctx->pc = 0x254a80u;

    // 0x254a80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x254a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x254a84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x254a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x254a88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x254a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x254a8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x254a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x254a90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x254a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x254a94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x254a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x254a98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254a9c: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x254a9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x254aa0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254AA0u;
    {
        const bool branch_taken_0x254aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254AA0u;
            // 0x254aa4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254aa0) {
            ctx->pc = 0x254AB0u;
            goto label_254ab0;
        }
    }
    ctx->pc = 0x254AA8u;
    // 0x254aa8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x254AA8u;
    {
        const bool branch_taken_0x254aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254AA8u;
            // 0x254aac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254aa8) {
            ctx->pc = 0x254BACu;
            goto label_254bac;
        }
    }
    ctx->pc = 0x254AB0u;
label_254ab0:
    // 0x254ab0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x254AB0u;
    SET_GPR_U32(ctx, 31, 0x254AB8u);
    ctx->pc = 0x254AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254AB0u;
            // 0x254ab4: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254AB8u; }
        if (ctx->pc != 0x254AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254AB8u; }
        if (ctx->pc != 0x254AB8u) { return; }
    }
    ctx->pc = 0x254AB8u;
label_254ab8:
    // 0x254ab8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x254ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254abc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x254abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x254ac0: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x254AC0u;
    {
        const bool branch_taken_0x254ac0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x254AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254AC0u;
            // 0x254ac4: 0x2411000a  addiu       $s1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ac0) {
            ctx->pc = 0x254AD8u;
            goto label_254ad8;
        }
    }
    ctx->pc = 0x254AC8u;
    // 0x254ac8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x254ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254acc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x254ACCu;
    SET_GPR_U32(ctx, 31, 0x254AD4u);
    ctx->pc = 0x254AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254ACCu;
            // 0x254ad0: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254AD4u; }
        if (ctx->pc != 0x254AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254AD4u; }
        if (ctx->pc != 0x254AD4u) { return; }
    }
    ctx->pc = 0x254AD4u;
label_254ad4:
    // 0x254ad4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x254ad4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_254ad8:
    // 0x254ad8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x254ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x254adc: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x254ADCu;
    {
        const bool branch_taken_0x254adc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x254AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254ADCu;
            // 0x254ae0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254adc) {
            ctx->pc = 0x254AF0u;
            goto label_254af0;
        }
    }
    ctx->pc = 0x254AE4u;
    // 0x254ae4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x254AE4u;
    SET_GPR_U32(ctx, 31, 0x254AECu);
    ctx->pc = 0x254AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254AE4u;
            // 0x254ae8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254AECu; }
        if (ctx->pc != 0x254AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254AECu; }
        if (ctx->pc != 0x254AECu) { return; }
    }
    ctx->pc = 0x254AECu;
label_254aec:
    // 0x254aec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x254aecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_254af0:
    // 0x254af0: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x254AF0u;
    {
        const bool branch_taken_0x254af0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x254af0) {
            ctx->pc = 0x254B54u;
            goto label_254b54;
        }
    }
    ctx->pc = 0x254AF8u;
    // 0x254af8: 0x8f9094f8  lw          $s0, -0x6B08($gp)
    ctx->pc = 0x254af8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x254afc: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x254afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x254b00: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x254B00u;
    {
        const bool branch_taken_0x254b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254b00) {
            ctx->pc = 0x254B24u;
            goto label_254b24;
        }
    }
    ctx->pc = 0x254B08u;
    // 0x254b08: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x254b08u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254b0c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x254B0Cu;
    SET_GPR_U32(ctx, 31, 0x254B14u);
    ctx->pc = 0x254B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254B0Cu;
            // 0x254b10: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254B14u; }
        if (ctx->pc != 0x254B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254B14u; }
        if (ctx->pc != 0x254B14u) { return; }
    }
    ctx->pc = 0x254B14u;
label_254b14:
    // 0x254b14: 0x8e040138  lw          $a0, 0x138($s0)
    ctx->pc = 0x254b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x254b18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x254b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b1c: 0xc0896d8  jal         func_225B60
    ctx->pc = 0x254B1Cu;
    SET_GPR_U32(ctx, 31, 0x254B24u);
    ctx->pc = 0x254B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254B1Cu;
            // 0x254b20: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B60u;
    if (runtime->hasFunction(0x225B60u)) {
        auto targetFn = runtime->lookupFunction(0x225B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254B24u; }
        if (ctx->pc != 0x254B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormFadeIn__16CMenuPosDataFormFii_0x225b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254B24u; }
        if (ctx->pc != 0x254B24u) { return; }
    }
    ctx->pc = 0x254B24u;
label_254b24:
    // 0x254b24: 0x8e10013c  lw          $s0, 0x13C($s0)
    ctx->pc = 0x254b24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x254b28: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x254B28u;
    {
        const bool branch_taken_0x254b28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x254B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254B28u;
            // 0x254b2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b28) {
            ctx->pc = 0x254BACu;
            goto label_254bac;
        }
    }
    ctx->pc = 0x254B30u;
    // 0x254b30: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x254b30u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254b34: 0xc0a248c  jal         func_289230
    ctx->pc = 0x254B34u;
    SET_GPR_U32(ctx, 31, 0x254B3Cu);
    ctx->pc = 0x254B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254B34u;
            // 0x254b38: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254B3Cu; }
        if (ctx->pc != 0x254B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254B3Cu; }
        if (ctx->pc != 0x254B3Cu) { return; }
    }
    ctx->pc = 0x254B3Cu;
label_254b3c:
    // 0x254b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x254b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b44: 0xc0896d8  jal         func_225B60
    ctx->pc = 0x254B44u;
    SET_GPR_U32(ctx, 31, 0x254B4Cu);
    ctx->pc = 0x254B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254B44u;
            // 0x254b48: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B60u;
    if (runtime->hasFunction(0x225B60u)) {
        auto targetFn = runtime->lookupFunction(0x225B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254B4Cu; }
        if (ctx->pc != 0x254B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormFadeIn__16CMenuPosDataFormFii_0x225b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254B4Cu; }
        if (ctx->pc != 0x254B4Cu) { return; }
    }
    ctx->pc = 0x254B4Cu;
label_254b4c:
    // 0x254b4c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x254B4Cu;
    {
        const bool branch_taken_0x254b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254b4c) {
            ctx->pc = 0x254BA8u;
            goto label_254ba8;
        }
    }
    ctx->pc = 0x254B54u;
label_254b54:
    // 0x254b54: 0x8f9094f8  lw          $s0, -0x6B08($gp)
    ctx->pc = 0x254b54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x254b58: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x254b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x254b5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x254B5Cu;
    {
        const bool branch_taken_0x254b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254b5c) {
            ctx->pc = 0x254B80u;
            goto label_254b80;
        }
    }
    ctx->pc = 0x254B64u;
    // 0x254b64: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x254b64u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254b68: 0xc0a248c  jal         func_289230
    ctx->pc = 0x254B68u;
    SET_GPR_U32(ctx, 31, 0x254B70u);
    ctx->pc = 0x254B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254B68u;
            // 0x254b6c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254B70u; }
        if (ctx->pc != 0x254B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254B70u; }
        if (ctx->pc != 0x254B70u) { return; }
    }
    ctx->pc = 0x254B70u;
label_254b70:
    // 0x254b70: 0x8e040138  lw          $a0, 0x138($s0)
    ctx->pc = 0x254b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x254b74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x254b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b78: 0xc089700  jal         func_225C00
    ctx->pc = 0x254B78u;
    SET_GPR_U32(ctx, 31, 0x254B80u);
    ctx->pc = 0x254B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254B78u;
            // 0x254b7c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225C00u;
    if (runtime->hasFunction(0x225C00u)) {
        auto targetFn = runtime->lookupFunction(0x225C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254B80u; }
        if (ctx->pc != 0x254B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormFadeOut__16CMenuPosDataFormFii_0x225c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254B80u; }
        if (ctx->pc != 0x254B80u) { return; }
    }
    ctx->pc = 0x254B80u;
label_254b80:
    // 0x254b80: 0x8e10013c  lw          $s0, 0x13C($s0)
    ctx->pc = 0x254b80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x254b84: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x254B84u;
    {
        const bool branch_taken_0x254b84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x254b84) {
            ctx->pc = 0x254BA8u;
            goto label_254ba8;
        }
    }
    ctx->pc = 0x254B8Cu;
    // 0x254b8c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x254b8cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254b90: 0xc0a248c  jal         func_289230
    ctx->pc = 0x254B90u;
    SET_GPR_U32(ctx, 31, 0x254B98u);
    ctx->pc = 0x254B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254B90u;
            // 0x254b94: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254B98u; }
        if (ctx->pc != 0x254B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254B98u; }
        if (ctx->pc != 0x254B98u) { return; }
    }
    ctx->pc = 0x254B98u;
label_254b98:
    // 0x254b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x254b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ba0: 0xc089700  jal         func_225C00
    ctx->pc = 0x254BA0u;
    SET_GPR_U32(ctx, 31, 0x254BA8u);
    ctx->pc = 0x254BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254BA0u;
            // 0x254ba4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225C00u;
    if (runtime->hasFunction(0x225C00u)) {
        auto targetFn = runtime->lookupFunction(0x225C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254BA8u; }
        if (ctx->pc != 0x254BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormFadeOut__16CMenuPosDataFormFii_0x225c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254BA8u; }
        if (ctx->pc != 0x254BA8u) { return; }
    }
    ctx->pc = 0x254BA8u;
label_254ba8:
    // 0x254ba8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_254bac:
    // 0x254bac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x254bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x254bb0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x254bb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254bb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x254bb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254bb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x254bb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254bbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x254bbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254bc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x254BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254BC4u;
            // 0x254bc8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254BCCu;
}
