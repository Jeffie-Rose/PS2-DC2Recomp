#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_REF_ROT__FP12RS_STACKDATAi
// Address: 0x2e3a70 - 0x2e3ba0
void ps2__GET_REF_ROT__FP12RS_STACKDATAi_0x2e3a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_REF_ROT__FP12RS_STACKDATAi_0x2e3a70");
#endif

    switch (ctx->pc) {
        case 0x2e3ab8u: goto label_2e3ab8;
        case 0x2e3ac4u: goto label_2e3ac4;
        case 0x2e3ad8u: goto label_2e3ad8;
        case 0x2e3ae4u: goto label_2e3ae4;
        case 0x2e3af4u: goto label_2e3af4;
        case 0x2e3b0cu: goto label_2e3b0c;
        case 0x2e3b18u: goto label_2e3b18;
        case 0x2e3b40u: goto label_2e3b40;
        case 0x2e3b54u: goto label_2e3b54;
        case 0x2e3b64u: goto label_2e3b64;
        case 0x2e3b70u: goto label_2e3b70;
        default: break;
    }

    ctx->pc = 0x2e3a70u;

    // 0x2e3a70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e3a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e3a74: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2e3a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e3a78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e3a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e3a7c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e3a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e3a80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e3a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e3a84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e3a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e3a88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e3a88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3a8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e3a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3a90: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E3A90u;
    {
        const bool branch_taken_0x2e3a90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3A90u;
            // 0x2e3a94: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a90) {
            ctx->pc = 0x2E3AACu;
            goto label_2e3aac;
        }
    }
    ctx->pc = 0x2E3A98u;
    // 0x2e3a98: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2e3a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e3a9c: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3A9Cu;
    {
        const bool branch_taken_0x2e3a9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3A9Cu;
            // 0x2e3aa0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a9c) {
            ctx->pc = 0x2E3AB0u;
            goto label_2e3ab0;
        }
    }
    ctx->pc = 0x2E3AA4u;
    // 0x2e3aa4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2E3AA4u;
    {
        const bool branch_taken_0x2e3aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3AA4u;
            // 0x2e3aa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3aa4) {
            ctx->pc = 0x2E3B84u;
            goto label_2e3b84;
        }
    }
    ctx->pc = 0x2E3AACu;
label_2e3aac:
    // 0x2e3aac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e3aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2e3ab0:
    // 0x2e3ab0: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E3AB0u;
    SET_GPR_U32(ctx, 31, 0x2E3AB8u);
    ctx->pc = 0x2E3AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3AB0u;
            // 0x2e3ab4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3AB8u; }
        if (ctx->pc != 0x2E3AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3AB8u; }
        if (ctx->pc != 0x2E3AB8u) { return; }
    }
    ctx->pc = 0x2E3AB8u;
label_2e3ab8:
    // 0x2e3ab8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e3ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e3abc: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E3ABCu;
    SET_GPR_U32(ctx, 31, 0x2E3AC4u);
    ctx->pc = 0x2E3AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3ABCu;
            // 0x2e3ac0: 0x26250018  addiu       $a1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3AC4u; }
        if (ctx->pc != 0x2E3AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3AC4u; }
        if (ctx->pc != 0x2E3AC4u) { return; }
    }
    ctx->pc = 0x2E3AC4u;
label_2e3ac4:
    // 0x2e3ac4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e3ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e3ac8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2e3ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e3acc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e3accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3ad0: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2E3AD0u;
    SET_GPR_U32(ctx, 31, 0x2E3AD8u);
    ctx->pc = 0x2E3AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3AD0u;
            // 0x2e3ad4: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3AD8u; }
        if (ctx->pc != 0x2E3AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3AD8u; }
        if (ctx->pc != 0x2E3AD8u) { return; }
    }
    ctx->pc = 0x2E3AD8u;
label_2e3ad8:
    // 0x2e3ad8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e3ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e3adc: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2E3ADCu;
    SET_GPR_U32(ctx, 31, 0x2E3AE4u);
    ctx->pc = 0x2E3AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3ADCu;
            // 0x2e3ae0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3AE4u; }
        if (ctx->pc != 0x2E3AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3AE4u; }
        if (ctx->pc != 0x2E3AE4u) { return; }
    }
    ctx->pc = 0x2E3AE4u;
label_2e3ae4:
    // 0x2e3ae4: 0x27b20068  addiu       $s2, $sp, 0x68
    ctx->pc = 0x2e3ae4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2e3ae8: 0xc64d0000  lwc1        $f13, 0x0($s2)
    ctx->pc = 0x2e3ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e3aec: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x2E3AECu;
    SET_GPR_U32(ctx, 31, 0x2E3AF4u);
    ctx->pc = 0x2E3AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3AECu;
            // 0x2e3af0: 0xc7ac0060  lwc1        $f12, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3AF4u; }
        if (ctx->pc != 0x2E3AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3AF4u; }
        if (ctx->pc != 0x2E3AF4u) { return; }
    }
    ctx->pc = 0x2E3AF4u;
label_2e3af4:
    // 0x2e3af4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e3af4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2e3af8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2e3af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3afc: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2e3afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3b00: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x2e3b00u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2e3b04: 0xc047cc0  jal         func_11F300
    ctx->pc = 0x2E3B04u;
    SET_GPR_U32(ctx, 31, 0x2E3B0Cu);
    ctx->pc = 0x2E3B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B04u;
            // 0x2e3b08: 0x46010b1c  madd.s      $f12, $f1, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F300u;
    if (runtime->hasFunction(0x11F300u)) {
        auto targetFn = runtime->lookupFunction(0x11F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3B0Cu; }
        if (ctx->pc != 0x2E3B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x11f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3B0Cu; }
        if (ctx->pc != 0x2E3B0Cu) { return; }
    }
    ctx->pc = 0x2E3B0Cu;
label_2e3b0c:
    // 0x2e3b0c: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x2e3b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3b10: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x2E3B10u;
    SET_GPR_U32(ctx, 31, 0x2E3B18u);
    ctx->pc = 0x2E3B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B10u;
            // 0x2e3b14: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3B18u; }
        if (ctx->pc != 0x2E3B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3B18u; }
        if (ctx->pc != 0x2E3B18u) { return; }
    }
    ctx->pc = 0x2E3B18u;
label_2e3b18:
    // 0x2e3b18: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2e3b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e3b1c: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E3B1Cu;
    {
        const bool branch_taken_0x2e3b1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B1Cu;
            // 0x2e3b20: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3b1c) {
            ctx->pc = 0x2E3B48u;
            goto label_2e3b48;
        }
    }
    ctx->pc = 0x2E3B24u;
    // 0x2e3b24: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2e3b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e3b28: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3B28u;
    {
        const bool branch_taken_0x2e3b28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B28u;
            // 0x2e3b2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3b28) {
            ctx->pc = 0x2E3B38u;
            goto label_2e3b38;
        }
    }
    ctx->pc = 0x2E3B30u;
    // 0x2e3b30: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E3B30u;
    {
        const bool branch_taken_0x2e3b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B30u;
            // 0x2e3b34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3b30) {
            ctx->pc = 0x2E3B78u;
            goto label_2e3b78;
        }
    }
    ctx->pc = 0x2E3B38u;
label_2e3b38:
    // 0x2e3b38: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3B38u;
    SET_GPR_U32(ctx, 31, 0x2E3B40u);
    ctx->pc = 0x2E3B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B38u;
            // 0x2e3b3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3B40u; }
        if (ctx->pc != 0x2E3B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3B40u; }
        if (ctx->pc != 0x2E3B40u) { return; }
    }
    ctx->pc = 0x2E3B40u;
label_2e3b40:
    // 0x2e3b40: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E3B40u;
    {
        const bool branch_taken_0x2e3b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B40u;
            // 0x2e3b44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3b40) {
            ctx->pc = 0x2E3B84u;
            goto label_2e3b84;
        }
    }
    ctx->pc = 0x2E3B48u;
label_2e3b48:
    // 0x2e3b48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e3b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3b4c: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3B4Cu;
    SET_GPR_U32(ctx, 31, 0x2E3B54u);
    ctx->pc = 0x2E3B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B4Cu;
            // 0x2e3b50: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3B54u; }
        if (ctx->pc != 0x2E3B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3B54u; }
        if (ctx->pc != 0x2E3B54u) { return; }
    }
    ctx->pc = 0x2E3B54u;
label_2e3b54:
    // 0x2e3b54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e3b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3b58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e3b58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e3b5c: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3B5Cu;
    SET_GPR_U32(ctx, 31, 0x2E3B64u);
    ctx->pc = 0x2E3B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B5Cu;
            // 0x2e3b60: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3B64u; }
        if (ctx->pc != 0x2E3B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3B64u; }
        if (ctx->pc != 0x2E3B64u) { return; }
    }
    ctx->pc = 0x2E3B64u;
label_2e3b64:
    // 0x2e3b64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e3b64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e3b68: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3B68u;
    SET_GPR_U32(ctx, 31, 0x2E3B70u);
    ctx->pc = 0x2E3B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B68u;
            // 0x2e3b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3B70u; }
        if (ctx->pc != 0x2E3B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3B70u; }
        if (ctx->pc != 0x2E3B70u) { return; }
    }
    ctx->pc = 0x2E3B70u;
label_2e3b70:
    // 0x2e3b70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3B70u;
    {
        const bool branch_taken_0x2e3b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3b70) {
            ctx->pc = 0x2E3B80u;
            goto label_2e3b80;
        }
    }
    ctx->pc = 0x2E3B78u;
label_2e3b78:
    // 0x2e3b78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3B78u;
    {
        const bool branch_taken_0x2e3b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B78u;
            // 0x2e3b7c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3b78) {
            ctx->pc = 0x2E3B88u;
            goto label_2e3b88;
        }
    }
    ctx->pc = 0x2E3B80u;
label_2e3b80:
    // 0x2e3b80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3b84:
    // 0x2e3b84: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e3b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e3b88:
    // 0x2e3b88: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e3b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e3b8c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e3b8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e3b90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e3b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3b94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e3b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3b98: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B98u;
            // 0x2e3b9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3BA0u;
}
