#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_TALK_CAMERA__FP12RS_STACKDATAi
// Address: 0x266a40 - 0x266bb4
void ps2__SET_TALK_CAMERA__FP12RS_STACKDATAi_0x266a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_TALK_CAMERA__FP12RS_STACKDATAi_0x266a40");
#endif

    switch (ctx->pc) {
        case 0x266a5cu: goto label_266a5c;
        case 0x266a6cu: goto label_266a6c;
        case 0x266a7cu: goto label_266a7c;
        case 0x266a8cu: goto label_266a8c;
        case 0x266a9cu: goto label_266a9c;
        case 0x266aacu: goto label_266aac;
        case 0x266abcu: goto label_266abc;
        case 0x266ad0u: goto label_266ad0;
        case 0x266ae4u: goto label_266ae4;
        case 0x266b08u: goto label_266b08;
        case 0x266b18u: goto label_266b18;
        case 0x266b2cu: goto label_266b2c;
        case 0x266b3cu: goto label_266b3c;
        case 0x266b4cu: goto label_266b4c;
        case 0x266b5cu: goto label_266b5c;
        case 0x266b6cu: goto label_266b6c;
        case 0x266b7cu: goto label_266b7c;
        case 0x266b8cu: goto label_266b8c;
        case 0x266b98u: goto label_266b98;
        default: break;
    }

    ctx->pc = 0x266a40u;

    // 0x266a40: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x266a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x266a44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x266a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x266a48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x266a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x266a4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x266a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x266a50: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x266a50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x266a54: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x266A54u;
    SET_GPR_U32(ctx, 31, 0x266A5Cu);
    ctx->pc = 0x266A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266A54u;
            // 0x266a58: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266A5Cu; }
        if (ctx->pc != 0x266A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266A5Cu; }
        if (ctx->pc != 0x266A5Cu) { return; }
    }
    ctx->pc = 0x266A5Cu;
label_266a5c:
    // 0x266a5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266a60: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x266a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x266a64: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x266A64u;
    SET_GPR_U32(ctx, 31, 0x266A6Cu);
    ctx->pc = 0x266A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266A64u;
            // 0x266a68: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266A6Cu; }
        if (ctx->pc != 0x266A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266A6Cu; }
        if (ctx->pc != 0x266A6Cu) { return; }
    }
    ctx->pc = 0x266A6Cu;
label_266a6c:
    // 0x266a6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266a70: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x266a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x266a74: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x266A74u;
    SET_GPR_U32(ctx, 31, 0x266A7Cu);
    ctx->pc = 0x266A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266A74u;
            // 0x266a78: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266A7Cu; }
        if (ctx->pc != 0x266A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266A7Cu; }
        if (ctx->pc != 0x266A7Cu) { return; }
    }
    ctx->pc = 0x266A7Cu;
label_266a7c:
    // 0x266a7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266a80: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x266a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x266a84: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x266A84u;
    SET_GPR_U32(ctx, 31, 0x266A8Cu);
    ctx->pc = 0x266A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266A84u;
            // 0x266a88: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266A8Cu; }
        if (ctx->pc != 0x266A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266A8Cu; }
        if (ctx->pc != 0x266A8Cu) { return; }
    }
    ctx->pc = 0x266A8Cu;
label_266a8c:
    // 0x266a8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266a90: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x266a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x266a94: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x266A94u;
    SET_GPR_U32(ctx, 31, 0x266A9Cu);
    ctx->pc = 0x266A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266A94u;
            // 0x266a98: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266A9Cu; }
        if (ctx->pc != 0x266A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266A9Cu; }
        if (ctx->pc != 0x266A9Cu) { return; }
    }
    ctx->pc = 0x266A9Cu;
label_266a9c:
    // 0x266a9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266aa0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x266aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x266aa4: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x266AA4u;
    SET_GPR_U32(ctx, 31, 0x266AACu);
    ctx->pc = 0x266AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266AA4u;
            // 0x266aa8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266AACu; }
        if (ctx->pc != 0x266AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266AACu; }
        if (ctx->pc != 0x266AACu) { return; }
    }
    ctx->pc = 0x266AACu;
label_266aac:
    // 0x266aac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266ab0: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x266ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x266ab4: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x266AB4u;
    SET_GPR_U32(ctx, 31, 0x266ABCu);
    ctx->pc = 0x266AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266AB4u;
            // 0x266ab8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266ABCu; }
        if (ctx->pc != 0x266ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266ABCu; }
        if (ctx->pc != 0x266ABCu) { return; }
    }
    ctx->pc = 0x266ABCu;
label_266abc:
    // 0x266abc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x266abcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x266ac0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x266ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x266ac4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x266ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x266ac8: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x266AC8u;
    SET_GPR_U32(ctx, 31, 0x266AD0u);
    ctx->pc = 0x266ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266AC8u;
            // 0x266acc: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266AD0u; }
        if (ctx->pc != 0x266AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266AD0u; }
        if (ctx->pc != 0x266AD0u) { return; }
    }
    ctx->pc = 0x266AD0u;
label_266ad0:
    // 0x266ad0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x266ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x266ad4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x266ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x266ad8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x266ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x266adc: 0xc041c4a  jal         func_107128
    ctx->pc = 0x266ADCu;
    SET_GPR_U32(ctx, 31, 0x266AE4u);
    ctx->pc = 0x266AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266ADCu;
            // 0x266ae0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266AE4u; }
        if (ctx->pc != 0x266AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266AE4u; }
        if (ctx->pc != 0x266AE4u) { return; }
    }
    ctx->pc = 0x266AE4u;
label_266ae4:
    // 0x266ae4: 0x27b00044  addiu       $s0, $sp, 0x44
    ctx->pc = 0x266ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x266ae8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x266ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x266aec: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x266aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x266af0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x266af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x266af4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x266af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x266af8: 0x0  nop
    ctx->pc = 0x266af8u;
    // NOP
    // 0x266afc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x266afcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x266b00: 0xc041c7a  jal         func_1071E8
    ctx->pc = 0x266B00u;
    SET_GPR_U32(ctx, 31, 0x266B08u);
    ctx->pc = 0x266B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266B00u;
            // 0x266b04: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266B08u; }
        if (ctx->pc != 0x266B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266B08u; }
        if (ctx->pc != 0x266B08u) { return; }
    }
    ctx->pc = 0x266B08u;
label_266b08:
    // 0x266b08: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x266b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x266b0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x266b0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x266b10: 0xc041cf6  jal         func_1073D8
    ctx->pc = 0x266B10u;
    SET_GPR_U32(ctx, 31, 0x266B18u);
    ctx->pc = 0x266B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266B10u;
            // 0x266b14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266B18u; }
        if (ctx->pc != 0x266B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266B18u; }
        if (ctx->pc != 0x266B18u) { return; }
    }
    ctx->pc = 0x266B18u;
label_266b18:
    // 0x266b18: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x266b18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x266b1c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x266b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x266b20: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x266b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x266b24: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x266B24u;
    SET_GPR_U32(ctx, 31, 0x266B2Cu);
    ctx->pc = 0x266B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266B24u;
            // 0x266b28: 0x24c61cc0  addiu       $a2, $a2, 0x1CC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266B2Cu; }
        if (ctx->pc != 0x266B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266B2Cu; }
        if (ctx->pc != 0x266B2Cu) { return; }
    }
    ctx->pc = 0x266B2Cu;
label_266b2c:
    // 0x266b2c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x266b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x266b30: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x266b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x266b34: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x266B34u;
    SET_GPR_U32(ctx, 31, 0x266B3Cu);
    ctx->pc = 0x266B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266B34u;
            // 0x266b38: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266B3Cu; }
        if (ctx->pc != 0x266B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266B3Cu; }
        if (ctx->pc != 0x266B3Cu) { return; }
    }
    ctx->pc = 0x266B3Cu;
label_266b3c:
    // 0x266b3c: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x266b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x266b40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266b44: 0xc097e54  jal         func_25F950
    ctx->pc = 0x266B44u;
    SET_GPR_U32(ctx, 31, 0x266B4Cu);
    ctx->pc = 0x266B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266B44u;
            // 0x266b48: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266B4Cu; }
        if (ctx->pc != 0x266B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266B4Cu; }
        if (ctx->pc != 0x266B4Cu) { return; }
    }
    ctx->pc = 0x266B4Cu;
label_266b4c:
    // 0x266b4c: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x266b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x266b50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266b54: 0xc097e54  jal         func_25F950
    ctx->pc = 0x266B54u;
    SET_GPR_U32(ctx, 31, 0x266B5Cu);
    ctx->pc = 0x266B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266B54u;
            // 0x266b58: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266B5Cu; }
        if (ctx->pc != 0x266B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266B5Cu; }
        if (ctx->pc != 0x266B5Cu) { return; }
    }
    ctx->pc = 0x266B5Cu;
label_266b5c:
    // 0x266b5c: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x266b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x266b60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266b64: 0xc097e54  jal         func_25F950
    ctx->pc = 0x266B64u;
    SET_GPR_U32(ctx, 31, 0x266B6Cu);
    ctx->pc = 0x266B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266B64u;
            // 0x266b68: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266B6Cu; }
        if (ctx->pc != 0x266B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266B6Cu; }
        if (ctx->pc != 0x266B6Cu) { return; }
    }
    ctx->pc = 0x266B6Cu;
label_266b6c:
    // 0x266b6c: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x266b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x266b70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266b74: 0xc097e54  jal         func_25F950
    ctx->pc = 0x266B74u;
    SET_GPR_U32(ctx, 31, 0x266B7Cu);
    ctx->pc = 0x266B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266B74u;
            // 0x266b78: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266B7Cu; }
        if (ctx->pc != 0x266B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266B7Cu; }
        if (ctx->pc != 0x266B7Cu) { return; }
    }
    ctx->pc = 0x266B7Cu;
label_266b7c:
    // 0x266b7c: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x266b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x266b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266b84: 0xc097e54  jal         func_25F950
    ctx->pc = 0x266B84u;
    SET_GPR_U32(ctx, 31, 0x266B8Cu);
    ctx->pc = 0x266B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266B84u;
            // 0x266b88: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266B8Cu; }
        if (ctx->pc != 0x266B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266B8Cu; }
        if (ctx->pc != 0x266B8Cu) { return; }
    }
    ctx->pc = 0x266B8Cu;
label_266b8c:
    // 0x266b8c: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x266b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x266b90: 0xc097e54  jal         func_25F950
    ctx->pc = 0x266B90u;
    SET_GPR_U32(ctx, 31, 0x266B98u);
    ctx->pc = 0x266B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266B90u;
            // 0x266b94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266B98u; }
        if (ctx->pc != 0x266B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266B98u; }
        if (ctx->pc != 0x266B98u) { return; }
    }
    ctx->pc = 0x266B98u;
label_266b98:
    // 0x266b98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x266b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266b9c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x266b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x266ba0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x266ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266ba8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x266ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266bac: 0x3e00008  jr          $ra
    ctx->pc = 0x266BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266BACu;
            // 0x266bb0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x266BB4u;
}
