#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_WAKU_RECT__FP9SPI_STACKi
// Address: 0x253b40 - 0x253c18
void ps2__MENU_WAKU_RECT__FP9SPI_STACKi_0x253b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_WAKU_RECT__FP9SPI_STACKi_0x253b40");
#endif

    switch (ctx->pc) {
        case 0x253b5cu: goto label_253b5c;
        case 0x253b70u: goto label_253b70;
        case 0x253b7cu: goto label_253b7c;
        case 0x253b90u: goto label_253b90;
        case 0x253ba4u: goto label_253ba4;
        case 0x253bbcu: goto label_253bbc;
        case 0x253bd4u: goto label_253bd4;
        case 0x253be8u: goto label_253be8;
        default: break;
    }

    ctx->pc = 0x253b40u;

    // 0x253b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x253b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x253b44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x253b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x253b48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x253b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x253b4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x253b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x253b50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x253b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253b54: 0xc089828  jal         func_2260A0
    ctx->pc = 0x253B54u;
    SET_GPR_U32(ctx, 31, 0x253B5Cu);
    ctx->pc = 0x253B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253B54u;
            // 0x253b58: 0x8f8497bc  lw          $a0, -0x6844($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2260A0u;
    if (runtime->hasFunction(0x2260A0u)) {
        auto targetFn = runtime->lookupFunction(0x2260A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253B5Cu; }
        if (ctx->pc != 0x253B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnableEnterPart__16CMenuPosDataFormFv_0x2260a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253B5Cu; }
        if (ctx->pc != 0x253B5Cu) { return; }
    }
    ctx->pc = 0x253B5Cu;
label_253b5c:
    // 0x253b5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253b60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x253b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253b64: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x253b64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253b68: 0xc05191c  jal         func_146470
    ctx->pc = 0x253B68u;
    SET_GPR_U32(ctx, 31, 0x253B70u);
    ctx->pc = 0x253B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253B68u;
            // 0x253b6c: 0xaf9097c0  sw          $s0, -0x6840($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940608), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253B70u; }
        if (ctx->pc != 0x253B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253B70u; }
        if (ctx->pc != 0x253B70u) { return; }
    }
    ctx->pc = 0x253B70u;
label_253b70:
    // 0x253b70: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x253b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x253b74: 0xc08aa10  jal         func_22A840
    ctx->pc = 0x253B74u;
    SET_GPR_U32(ctx, 31, 0x253B7Cu);
    ctx->pc = 0x253B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253B74u;
            // 0x253b78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A840u;
    if (runtime->hasFunction(0x22A840u)) {
        auto targetFn = runtime->lookupFunction(0x22A840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253B7Cu; }
        if (ctx->pc != 0x253B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexGetInfoTblNo__14CPosDataManageFPc_0x22a840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253B7Cu; }
        if (ctx->pc != 0x253B7Cu) { return; }
    }
    ctx->pc = 0x253B7Cu;
label_253b7c:
    // 0x253b7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253b80: 0xa2020018  sb          $v0, 0x18($s0)
    ctx->pc = 0x253b80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x253b84: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x253b84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253b88: 0xc094bcc  jal         func_252F30
    ctx->pc = 0x253B88u;
    SET_GPR_U32(ctx, 31, 0x253B90u);
    ctx->pc = 0x253B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253B88u;
            // 0x253b8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252F30u;
    if (runtime->hasFunction(0x252F30u)) {
        auto targetFn = runtime->lookupFunction(0x252F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253B90u; }
        if (ctx->pc != 0x253B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakePartsName__FP9SPI_STACKP18MENUFORMPARTS_TYPE_0x252f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253B90u; }
        if (ctx->pc != 0x253B90u) { return; }
    }
    ctx->pc = 0x253B90u;
label_253b90:
    // 0x253b90: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x253b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x253b94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253b98: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x253b98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x253b9c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253B9Cu;
    SET_GPR_U32(ctx, 31, 0x253BA4u);
    ctx->pc = 0x253BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253B9Cu;
            // 0x253ba0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253BA4u; }
        if (ctx->pc != 0x253BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253BA4u; }
        if (ctx->pc != 0x253BA4u) { return; }
    }
    ctx->pc = 0x253BA4u;
label_253ba4:
    // 0x253ba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253ba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253bac: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x253bacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253bb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253bb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253bb4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253BB4u;
    SET_GPR_U32(ctx, 31, 0x253BBCu);
    ctx->pc = 0x253BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253BB4u;
            // 0x253bb8: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253BBCu; }
        if (ctx->pc != 0x253BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253BBCu; }
        if (ctx->pc != 0x253BBCu) { return; }
    }
    ctx->pc = 0x253BBCu;
label_253bbc:
    // 0x253bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253bc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253bc4: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x253bc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253bc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253bc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253bcc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253BCCu;
    SET_GPR_U32(ctx, 31, 0x253BD4u);
    ctx->pc = 0x253BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253BCCu;
            // 0x253bd0: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253BD4u; }
        if (ctx->pc != 0x253BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253BD4u; }
        if (ctx->pc != 0x253BD4u) { return; }
    }
    ctx->pc = 0x253BD4u;
label_253bd4:
    // 0x253bd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253bd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253bdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253bdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253be0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253BE0u;
    SET_GPR_U32(ctx, 31, 0x253BE8u);
    ctx->pc = 0x253BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253BE0u;
            // 0x253be4: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253BE8u; }
        if (ctx->pc != 0x253BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253BE8u; }
        if (ctx->pc != 0x253BE8u) { return; }
    }
    ctx->pc = 0x253BE8u;
label_253be8:
    // 0x253be8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253bec: 0x0  nop
    ctx->pc = 0x253becu;
    // NOP
    // 0x253bf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253bf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253bf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253bf8: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x253bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x253bfc: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x253bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x253c00: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x253c00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x253c04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x253c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253c08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x253c08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253c0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x253c0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253c10: 0x3e00008  jr          $ra
    ctx->pc = 0x253C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253C10u;
            // 0x253c14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x253C18u;
}
