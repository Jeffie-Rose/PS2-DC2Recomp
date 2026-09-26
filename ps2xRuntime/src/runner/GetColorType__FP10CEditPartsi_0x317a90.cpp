#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetColorType__FP10CEditPartsi
// Address: 0x317a90 - 0x317bb8
void GetColorType__FP10CEditPartsi_0x317a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetColorType__FP10CEditPartsi_0x317a90");
#endif

    switch (ctx->pc) {
        case 0x317ac0u: goto label_317ac0;
        case 0x317aecu: goto label_317aec;
        case 0x317b04u: goto label_317b04;
        case 0x317b24u: goto label_317b24;
        case 0x317b30u: goto label_317b30;
        case 0x317b38u: goto label_317b38;
        case 0x317b44u: goto label_317b44;
        default: break;
    }

    ctx->pc = 0x317a90u;

    // 0x317a90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x317a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x317a94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x317a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x317a98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x317a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x317a9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x317a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x317aa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x317aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317aa4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x317aa4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x317aa8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x317AA8u;
    {
        const bool branch_taken_0x317aa8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x317AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317AA8u;
            // 0x317aac: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317aa8) {
            ctx->pc = 0x317AB8u;
            goto label_317ab8;
        }
    }
    ctx->pc = 0x317AB0u;
    // 0x317ab0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x317AB0u;
    {
        const bool branch_taken_0x317ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317AB0u;
            // 0x317ab4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ab0) {
            ctx->pc = 0x317BA0u;
            goto label_317ba0;
        }
    }
    ctx->pc = 0x317AB8u;
label_317ab8:
    // 0x317ab8: 0xc0599ec  jal         func_1667B0
    ctx->pc = 0x317AB8u;
    SET_GPR_U32(ctx, 31, 0x317AC0u);
    ctx->pc = 0x317ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317AB8u;
            // 0x317abc: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1667B0u;
    if (runtime->hasFunction(0x1667B0u)) {
        auto targetFn = runtime->lookupFunction(0x1667B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317AC0u; }
        if (ctx->pc != 0x317AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColor__9CMapPartsFiPf_0x1667b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317AC0u; }
        if (ctx->pc != 0x317AC0u) { return; }
    }
    ctx->pc = 0x317AC0u;
label_317ac0:
    // 0x317ac0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x317AC0u;
    {
        const bool branch_taken_0x317ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317AC0u;
            // 0x317ac4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ac0) {
            ctx->pc = 0x317AD0u;
            goto label_317ad0;
        }
    }
    ctx->pc = 0x317AC8u;
    // 0x317ac8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x317AC8u;
    {
        const bool branch_taken_0x317ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317AC8u;
            // 0x317acc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ac8) {
            ctx->pc = 0x317BA4u;
            goto label_317ba4;
        }
    }
    ctx->pc = 0x317AD0u;
label_317ad0:
    // 0x317ad0: 0x8e240324  lw          $a0, 0x324($s1)
    ctx->pc = 0x317ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x317ad4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x317AD4u;
    {
        const bool branch_taken_0x317ad4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x317AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317AD4u;
            // 0x317ad8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ad4) {
            ctx->pc = 0x317AE4u;
            goto label_317ae4;
        }
    }
    ctx->pc = 0x317ADCu;
    // 0x317adc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x317ADCu;
    {
        const bool branch_taken_0x317adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317ADCu;
            // 0x317ae0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317adc) {
            ctx->pc = 0x317BA0u;
            goto label_317ba0;
        }
    }
    ctx->pc = 0x317AE4u;
label_317ae4:
    // 0x317ae4: 0xc06d5d8  jal         func_1B5760
    ctx->pc = 0x317AE4u;
    SET_GPR_U32(ctx, 31, 0x317AECu);
    ctx->pc = 0x317AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317AE4u;
            // 0x317ae8: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5760u;
    if (runtime->hasFunction(0x1B5760u)) {
        auto targetFn = runtime->lookupFunction(0x1B5760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317AECu; }
        if (ctx->pc != 0x317AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDefColor__14CEditPartsInfoFiPf_0x1b5760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317AECu; }
        if (ctx->pc != 0x317AECu) { return; }
    }
    ctx->pc = 0x317AECu;
label_317aec:
    // 0x317aec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x317AECu;
    {
        const bool branch_taken_0x317aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317AECu;
            // 0x317af0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317aec) {
            ctx->pc = 0x317AFCu;
            goto label_317afc;
        }
    }
    ctx->pc = 0x317AF4u;
    // 0x317af4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x317AF4u;
    {
        const bool branch_taken_0x317af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317AF4u;
            // 0x317af8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317af4) {
            ctx->pc = 0x317BA0u;
            goto label_317ba0;
        }
    }
    ctx->pc = 0x317AFCu;
label_317afc:
    // 0x317afc: 0xc06d7e4  jal         func_1B5F90
    ctx->pc = 0x317AFCu;
    SET_GPR_U32(ctx, 31, 0x317B04u);
    ctx->pc = 0x317B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317AFCu;
            // 0x317b00: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5F90u;
    if (runtime->hasFunction(0x1B5F90u)) {
        auto targetFn = runtime->lookupFunction(0x1B5F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317B04u; }
        if (ctx->pc != 0x317B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditPartsCmpColor__FPfPf_0x1b5f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317B04u; }
        if (ctx->pc != 0x317B04u) { return; }
    }
    ctx->pc = 0x317B04u;
label_317b04:
    // 0x317b04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x317B04u;
    {
        const bool branch_taken_0x317b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317B04u;
            // 0x317b08: 0x3c024300  lui         $v0, 0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317b04) {
            ctx->pc = 0x317B14u;
            goto label_317b14;
        }
    }
    ctx->pc = 0x317B0Cu;
    // 0x317b0c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x317B0Cu;
    {
        const bool branch_taken_0x317b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317B0Cu;
            // 0x317b10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317b0c) {
            ctx->pc = 0x317BA0u;
            goto label_317ba0;
        }
    }
    ctx->pc = 0x317B14u;
label_317b14:
    // 0x317b14: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x317b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x317b18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x317b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x317b1c: 0xc041c4a  jal         func_107128
    ctx->pc = 0x317B1Cu;
    SET_GPR_U32(ctx, 31, 0x317B24u);
    ctx->pc = 0x317B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317B1Cu;
            // 0x317b20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317B24u; }
        if (ctx->pc != 0x317B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317B24u; }
        if (ctx->pc != 0x317B24u) { return; }
    }
    ctx->pc = 0x317B24u;
label_317b24:
    // 0x317b24: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x317b24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x317b28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x317b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317b2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x317b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_317b30:
    // 0x317b30: 0xc07c944  jal         func_1F2510
    ctx->pc = 0x317B30u;
    SET_GPR_U32(ctx, 31, 0x317B38u);
    ctx->pc = 0x317B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317B30u;
            // 0x317b34: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F2510u;
    if (runtime->hasFunction(0x1F2510u)) {
        auto targetFn = runtime->lookupFunction(0x1F2510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317B38u; }
        if (ctx->pc != 0x317B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPenkiColor__FiPf_0x1f2510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317B38u; }
        if (ctx->pc != 0x317B38u) { return; }
    }
    ctx->pc = 0x317B38u;
label_317b38:
    // 0x317b38: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x317b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x317b3c: 0xc04c018  jal         func_130060
    ctx->pc = 0x317B3Cu;
    SET_GPR_U32(ctx, 31, 0x317B44u);
    ctx->pc = 0x317B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317B3Cu;
            // 0x317b40: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317B44u; }
        if (ctx->pc != 0x317B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317B44u; }
        if (ctx->pc != 0x317B44u) { return; }
    }
    ctx->pc = 0x317B44u;
label_317b44:
    // 0x317b44: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x317b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x317b48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x317b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317b4c: 0x0  nop
    ctx->pc = 0x317b4cu;
    // NOP
    // 0x317b50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x317b50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x317b54: 0x0  nop
    ctx->pc = 0x317b54u;
    // NOP
    // 0x317b58: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x317B58u;
    {
        const bool branch_taken_0x317b58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x317b58) {
            ctx->pc = 0x317B80u;
            goto label_317b80;
        }
    }
    ctx->pc = 0x317B60u;
    // 0x317b60: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x317B60u;
    {
        const bool branch_taken_0x317b60 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x317b60) {
            ctx->pc = 0x317B78u;
            goto label_317b78;
        }
    }
    ctx->pc = 0x317B68u;
    // 0x317b68: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x317b68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x317b6c: 0x0  nop
    ctx->pc = 0x317b6cu;
    // NOP
    // 0x317b70: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x317B70u;
    {
        const bool branch_taken_0x317b70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x317b70) {
            ctx->pc = 0x317B80u;
            goto label_317b80;
        }
    }
    ctx->pc = 0x317B78u;
label_317b78:
    // 0x317b78: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x317b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317b7c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x317b7cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_317b80:
    // 0x317b80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x317b80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x317b84: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x317b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x317b88: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x317B88u;
    {
        const bool branch_taken_0x317b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317B88u;
            // 0x317b8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317b88) {
            ctx->pc = 0x317B30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_317b30;
        }
    }
    ctx->pc = 0x317B90u;
    // 0x317b90: 0x6010002  bgez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x317B90u;
    {
        const bool branch_taken_0x317b90 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x317b90) {
            ctx->pc = 0x317B9Cu;
            goto label_317b9c;
        }
    }
    ctx->pc = 0x317B98u;
    // 0x317b98: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x317b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_317b9c:
    // 0x317b9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x317b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_317ba0:
    // 0x317ba0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x317ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_317ba4:
    // 0x317ba4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x317ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x317ba8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x317ba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x317bac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x317BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317BB0u;
            // 0x317bb4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x317BB8u;
}
