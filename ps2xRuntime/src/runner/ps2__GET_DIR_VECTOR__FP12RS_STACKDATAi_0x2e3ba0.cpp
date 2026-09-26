#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_DIR_VECTOR__FP12RS_STACKDATAi
// Address: 0x2e3ba0 - 0x2e3c98
void ps2__GET_DIR_VECTOR__FP12RS_STACKDATAi_0x2e3ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_DIR_VECTOR__FP12RS_STACKDATAi_0x2e3ba0");
#endif

    switch (ctx->pc) {
        case 0x2e3be8u: goto label_2e3be8;
        case 0x2e3bf4u: goto label_2e3bf4;
        case 0x2e3c04u: goto label_2e3c04;
        case 0x2e3c14u: goto label_2e3c14;
        case 0x2e3c20u: goto label_2e3c20;
        case 0x2e3c30u: goto label_2e3c30;
        case 0x2e3c40u: goto label_2e3c40;
        case 0x2e3c50u: goto label_2e3c50;
        case 0x2e3c60u: goto label_2e3c60;
        case 0x2e3c70u: goto label_2e3c70;
        case 0x2e3c7cu: goto label_2e3c7c;
        default: break;
    }

    ctx->pc = 0x2e3ba0u;

    // 0x2e3ba0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e3ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e3ba4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2e3ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e3ba8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e3ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e3bac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e3bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e3bb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e3bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e3bb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e3bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e3bb8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3BB8u;
    {
        const bool branch_taken_0x2e3bb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3BB8u;
            // 0x2e3bbc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3bb8) {
            ctx->pc = 0x2E3BC8u;
            goto label_2e3bc8;
        }
    }
    ctx->pc = 0x2E3BC0u;
    // 0x2e3bc0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2E3BC0u;
    {
        const bool branch_taken_0x2e3bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3BC0u;
            // 0x2e3bc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3bc0) {
            ctx->pc = 0x2E3C80u;
            goto label_2e3c80;
        }
    }
    ctx->pc = 0x2E3BC8u;
label_2e3bc8:
    // 0x2e3bc8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2e3bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2e3bcc: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x2e3bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e3bd0: 0x2442c770  addiu       $v0, $v0, -0x3890
    ctx->pc = 0x2e3bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952816));
    // 0x2e3bd4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2e3bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e3bd8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2e3bd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3bdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e3bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3be0: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E3BE0u;
    SET_GPR_U32(ctx, 31, 0x2E3BE8u);
    ctx->pc = 0x2E3BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3BE0u;
            // 0x2e3be4: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3BE8u; }
        if (ctx->pc != 0x2E3BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3BE8u; }
        if (ctx->pc != 0x2E3BE8u) { return; }
    }
    ctx->pc = 0x2E3BE8u;
label_2e3be8:
    // 0x2e3be8: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x2e3be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3bec: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x2E3BECu;
    SET_GPR_U32(ctx, 31, 0x2E3BF4u);
    ctx->pc = 0x2E3BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3BECu;
            // 0x2e3bf0: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3BF4u; }
        if (ctx->pc != 0x2E3BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3BF4u; }
        if (ctx->pc != 0x2E3BF4u) { return; }
    }
    ctx->pc = 0x2E3BF4u;
label_2e3bf4:
    // 0x2e3bf4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2e3bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2e3bf8: 0x27b10084  addiu       $s1, $sp, 0x84
    ctx->pc = 0x2e3bf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x2e3bfc: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x2E3BFCu;
    SET_GPR_U32(ctx, 31, 0x2E3C04u);
    ctx->pc = 0x2E3C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3BFCu;
            // 0x2e3c00: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3C04u; }
        if (ctx->pc != 0x2E3C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3C04u; }
        if (ctx->pc != 0x2E3C04u) { return; }
    }
    ctx->pc = 0x2E3C04u;
label_2e3c04:
    // 0x2e3c04: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2e3c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2e3c08: 0x27b20088  addiu       $s2, $sp, 0x88
    ctx->pc = 0x2e3c08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2e3c0c: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x2E3C0Cu;
    SET_GPR_U32(ctx, 31, 0x2E3C14u);
    ctx->pc = 0x2E3C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C0Cu;
            // 0x2e3c10: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3C14u; }
        if (ctx->pc != 0x2E3C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3C14u; }
        if (ctx->pc != 0x2E3C14u) { return; }
    }
    ctx->pc = 0x2E3C14u;
label_2e3c14:
    // 0x2e3c14: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2e3c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2e3c18: 0xc041c7a  jal         func_1071E8
    ctx->pc = 0x2E3C18u;
    SET_GPR_U32(ctx, 31, 0x2E3C20u);
    ctx->pc = 0x2E3C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C18u;
            // 0x2e3c1c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3C20u; }
        if (ctx->pc != 0x2E3C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3C20u; }
        if (ctx->pc != 0x2E3C20u) { return; }
    }
    ctx->pc = 0x2E3C20u;
label_2e3c20:
    // 0x2e3c20: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x2e3c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3c24: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2e3c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e3c28: 0xc041ccc  jal         func_107330
    ctx->pc = 0x2E3C28u;
    SET_GPR_U32(ctx, 31, 0x2E3C30u);
    ctx->pc = 0x2E3C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C28u;
            // 0x2e3c2c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107330u;
    if (runtime->hasFunction(0x107330u)) {
        auto targetFn = runtime->lookupFunction(0x107330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3C30u; }
        if (ctx->pc != 0x2E3C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x107330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3C30u; }
        if (ctx->pc != 0x2E3C30u) { return; }
    }
    ctx->pc = 0x2E3C30u;
label_2e3c30:
    // 0x2e3c30: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2e3c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3c34: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2e3c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e3c38: 0xc041cf6  jal         func_1073D8
    ctx->pc = 0x2E3C38u;
    SET_GPR_U32(ctx, 31, 0x2E3C40u);
    ctx->pc = 0x2E3C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C38u;
            // 0x2e3c3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3C40u; }
        if (ctx->pc != 0x2E3C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3C40u; }
        if (ctx->pc != 0x2E3C40u) { return; }
    }
    ctx->pc = 0x2E3C40u;
label_2e3c40:
    // 0x2e3c40: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2e3c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e3c44: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2e3c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e3c48: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x2E3C48u;
    SET_GPR_U32(ctx, 31, 0x2E3C50u);
    ctx->pc = 0x2E3C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C48u;
            // 0x2e3c4c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3C50u; }
        if (ctx->pc != 0x2E3C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3C50u; }
        if (ctx->pc != 0x2E3C50u) { return; }
    }
    ctx->pc = 0x2E3C50u;
label_2e3c50:
    // 0x2e3c50: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x2e3c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e3c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c58: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3C58u;
    SET_GPR_U32(ctx, 31, 0x2E3C60u);
    ctx->pc = 0x2E3C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C58u;
            // 0x2e3c5c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3C60u; }
        if (ctx->pc != 0x2E3C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3C60u; }
        if (ctx->pc != 0x2E3C60u) { return; }
    }
    ctx->pc = 0x2E3C60u;
label_2e3c60:
    // 0x2e3c60: 0xc7ac0094  lwc1        $f12, 0x94($sp)
    ctx->pc = 0x2e3c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e3c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c68: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3C68u;
    SET_GPR_U32(ctx, 31, 0x2E3C70u);
    ctx->pc = 0x2E3C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C68u;
            // 0x2e3c6c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3C70u; }
        if (ctx->pc != 0x2E3C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3C70u; }
        if (ctx->pc != 0x2E3C70u) { return; }
    }
    ctx->pc = 0x2E3C70u;
label_2e3c70:
    // 0x2e3c70: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x2e3c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3c74: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3C74u;
    SET_GPR_U32(ctx, 31, 0x2E3C7Cu);
    ctx->pc = 0x2E3C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C74u;
            // 0x2e3c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3C7Cu; }
        if (ctx->pc != 0x2E3C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3C7Cu; }
        if (ctx->pc != 0x2E3C7Cu) { return; }
    }
    ctx->pc = 0x2E3C7Cu;
label_2e3c7c:
    // 0x2e3c7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3c80:
    // 0x2e3c80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e3c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e3c84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e3c84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3c88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e3c88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3c8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e3c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3c90: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C90u;
            // 0x2e3c94: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3C98u;
}
