#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_WAKU_CIRCLE__FP9SPI_STACKi
// Address: 0x253c20 - 0x253cf8
void ps2__MENU_WAKU_CIRCLE__FP9SPI_STACKi_0x253c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_WAKU_CIRCLE__FP9SPI_STACKi_0x253c20");
#endif

    switch (ctx->pc) {
        case 0x253c3cu: goto label_253c3c;
        case 0x253c50u: goto label_253c50;
        case 0x253c5cu: goto label_253c5c;
        case 0x253c70u: goto label_253c70;
        case 0x253c84u: goto label_253c84;
        case 0x253c9cu: goto label_253c9c;
        case 0x253cb4u: goto label_253cb4;
        case 0x253cc8u: goto label_253cc8;
        default: break;
    }

    ctx->pc = 0x253c20u;

    // 0x253c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x253c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x253c24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x253c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x253c28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x253c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x253c2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x253c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x253c30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x253c30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c34: 0xc089828  jal         func_2260A0
    ctx->pc = 0x253C34u;
    SET_GPR_U32(ctx, 31, 0x253C3Cu);
    ctx->pc = 0x253C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253C34u;
            // 0x253c38: 0x8f8497bc  lw          $a0, -0x6844($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2260A0u;
    if (runtime->hasFunction(0x2260A0u)) {
        auto targetFn = runtime->lookupFunction(0x2260A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253C3Cu; }
        if (ctx->pc != 0x253C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnableEnterPart__16CMenuPosDataFormFv_0x2260a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253C3Cu; }
        if (ctx->pc != 0x253C3Cu) { return; }
    }
    ctx->pc = 0x253C3Cu;
label_253c3c:
    // 0x253c3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x253c40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c44: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x253c44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253c48: 0xc05191c  jal         func_146470
    ctx->pc = 0x253C48u;
    SET_GPR_U32(ctx, 31, 0x253C50u);
    ctx->pc = 0x253C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253C48u;
            // 0x253c4c: 0xaf9097c0  sw          $s0, -0x6840($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940608), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253C50u; }
        if (ctx->pc != 0x253C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253C50u; }
        if (ctx->pc != 0x253C50u) { return; }
    }
    ctx->pc = 0x253C50u;
label_253c50:
    // 0x253c50: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x253c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x253c54: 0xc08aa10  jal         func_22A840
    ctx->pc = 0x253C54u;
    SET_GPR_U32(ctx, 31, 0x253C5Cu);
    ctx->pc = 0x253C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253C54u;
            // 0x253c58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A840u;
    if (runtime->hasFunction(0x22A840u)) {
        auto targetFn = runtime->lookupFunction(0x22A840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253C5Cu; }
        if (ctx->pc != 0x253C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexGetInfoTblNo__14CPosDataManageFPc_0x22a840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253C5Cu; }
        if (ctx->pc != 0x253C5Cu) { return; }
    }
    ctx->pc = 0x253C5Cu;
label_253c5c:
    // 0x253c5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c60: 0xa2020018  sb          $v0, 0x18($s0)
    ctx->pc = 0x253c60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x253c64: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x253c64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253c68: 0xc094bcc  jal         func_252F30
    ctx->pc = 0x253C68u;
    SET_GPR_U32(ctx, 31, 0x253C70u);
    ctx->pc = 0x253C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253C68u;
            // 0x253c6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252F30u;
    if (runtime->hasFunction(0x252F30u)) {
        auto targetFn = runtime->lookupFunction(0x252F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253C70u; }
        if (ctx->pc != 0x253C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakePartsName__FP9SPI_STACKP18MENUFORMPARTS_TYPE_0x252f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253C70u; }
        if (ctx->pc != 0x253C70u) { return; }
    }
    ctx->pc = 0x253C70u;
label_253c70:
    // 0x253c70: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x253c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x253c74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c78: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x253c78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x253c7c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253C7Cu;
    SET_GPR_U32(ctx, 31, 0x253C84u);
    ctx->pc = 0x253C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253C7Cu;
            // 0x253c80: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253C84u; }
        if (ctx->pc != 0x253C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253C84u; }
        if (ctx->pc != 0x253C84u) { return; }
    }
    ctx->pc = 0x253C84u;
label_253c84:
    // 0x253c84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253c88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c8c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x253c8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253c90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253c90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253c94: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253C94u;
    SET_GPR_U32(ctx, 31, 0x253C9Cu);
    ctx->pc = 0x253C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253C94u;
            // 0x253c98: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253C9Cu; }
        if (ctx->pc != 0x253C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253C9Cu; }
        if (ctx->pc != 0x253C9Cu) { return; }
    }
    ctx->pc = 0x253C9Cu;
label_253c9c:
    // 0x253c9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253ca0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ca4: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x253ca4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253ca8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253ca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253cac: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253CACu;
    SET_GPR_U32(ctx, 31, 0x253CB4u);
    ctx->pc = 0x253CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253CACu;
            // 0x253cb0: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253CB4u; }
        if (ctx->pc != 0x253CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253CB4u; }
        if (ctx->pc != 0x253CB4u) { return; }
    }
    ctx->pc = 0x253CB4u;
label_253cb4:
    // 0x253cb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253cb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253cbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253cbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253cc0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253CC0u;
    SET_GPR_U32(ctx, 31, 0x253CC8u);
    ctx->pc = 0x253CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253CC0u;
            // 0x253cc4: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253CC8u; }
        if (ctx->pc != 0x253CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253CC8u; }
        if (ctx->pc != 0x253CC8u) { return; }
    }
    ctx->pc = 0x253CC8u;
label_253cc8:
    // 0x253cc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253ccc: 0x0  nop
    ctx->pc = 0x253cccu;
    // NOP
    // 0x253cd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253cd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253cd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253cd8: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x253cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x253cdc: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x253cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x253ce0: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x253ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x253ce4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x253ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253ce8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x253ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253cec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x253cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x253CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253CF0u;
            // 0x253cf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x253CF8u;
}
