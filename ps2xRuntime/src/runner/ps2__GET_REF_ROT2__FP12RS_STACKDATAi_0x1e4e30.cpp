#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_REF_ROT2__FP12RS_STACKDATAi
// Address: 0x1e4e30 - 0x1e4f20
void ps2__GET_REF_ROT2__FP12RS_STACKDATAi_0x1e4e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_REF_ROT2__FP12RS_STACKDATAi_0x1e4e30");
#endif

    switch (ctx->pc) {
        case 0x1e4e74u: goto label_1e4e74;
        case 0x1e4e7cu: goto label_1e4e7c;
        case 0x1e4e8cu: goto label_1e4e8c;
        case 0x1e4e98u: goto label_1e4e98;
        case 0x1e4ea8u: goto label_1e4ea8;
        case 0x1e4ec0u: goto label_1e4ec0;
        case 0x1e4eccu: goto label_1e4ecc;
        case 0x1e4eecu: goto label_1e4eec;
        case 0x1e4f04u: goto label_1e4f04;
        default: break;
    }

    ctx->pc = 0x1e4e30u;

    // 0x1e4e30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e4e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e4e34: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1e4e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1e4e38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e4e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e4e3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e4e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e4e40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e4e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e4e44: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e4e44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e4e48: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e4e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4e4c: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E4E4Cu;
    {
        const bool branch_taken_0x1e4e4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E4E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E4Cu;
            // 0x1e4e50: 0xafa4004c  sw          $a0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e4c) {
            ctx->pc = 0x1E4E68u;
            goto label_1e4e68;
        }
    }
    ctx->pc = 0x1E4E54u;
    // 0x1e4e54: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1e4e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1e4e58: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E4E58u;
    {
        const bool branch_taken_0x1e4e58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E4E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E58u;
            // 0x1e4e5c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e58) {
            ctx->pc = 0x1E4E6Cu;
            goto label_1e4e6c;
        }
    }
    ctx->pc = 0x1E4E60u;
    // 0x1e4e60: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1E4E60u;
    {
        const bool branch_taken_0x1e4e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E60u;
            // 0x1e4e64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e60) {
            ctx->pc = 0x1E4F08u;
            goto label_1e4f08;
        }
    }
    ctx->pc = 0x1E4E68u;
label_1e4e68:
    // 0x1e4e68: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e4e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e4e6c:
    // 0x1e4e6c: 0xc0781cc  jal         func_1E0730
    ctx->pc = 0x1E4E6Cu;
    SET_GPR_U32(ctx, 31, 0x1E4E74u);
    ctx->pc = 0x1E4E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E6Cu;
            // 0x1e4e70: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0730u;
    if (runtime->hasFunction(0x1E0730u)) {
        auto targetFn = runtime->lookupFunction(0x1E0730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E74u; }
        if (ctx->pc != 0x1E4E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfPP12RS_STACKDATA_0x1e0730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E74u; }
        if (ctx->pc != 0x1E4E74u) { return; }
    }
    ctx->pc = 0x1E4E74u;
label_1e4e74:
    // 0x1e4e74: 0xc0781cc  jal         func_1E0730
    ctx->pc = 0x1E4E74u;
    SET_GPR_U32(ctx, 31, 0x1E4E7Cu);
    ctx->pc = 0x1E4E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E74u;
            // 0x1e4e78: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0730u;
    if (runtime->hasFunction(0x1E0730u)) {
        auto targetFn = runtime->lookupFunction(0x1E0730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E7Cu; }
        if (ctx->pc != 0x1E4E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfPP12RS_STACKDATA_0x1e0730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E7Cu; }
        if (ctx->pc != 0x1E4E7Cu) { return; }
    }
    ctx->pc = 0x1E4E7Cu;
label_1e4e7c:
    // 0x1e4e7c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e4e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e4e80: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1e4e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e4e84: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x1E4E84u;
    SET_GPR_U32(ctx, 31, 0x1E4E8Cu);
    ctx->pc = 0x1E4E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E84u;
            // 0x1e4e88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E8Cu; }
        if (ctx->pc != 0x1E4E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E8Cu; }
        if (ctx->pc != 0x1E4E8Cu) { return; }
    }
    ctx->pc = 0x1E4E8Cu;
label_1e4e8c:
    // 0x1e4e8c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e4e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e4e90: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1E4E90u;
    SET_GPR_U32(ctx, 31, 0x1E4E98u);
    ctx->pc = 0x1E4E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E90u;
            // 0x1e4e94: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E98u; }
        if (ctx->pc != 0x1E4E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E98u; }
        if (ctx->pc != 0x1E4E98u) { return; }
    }
    ctx->pc = 0x1E4E98u;
label_1e4e98:
    // 0x1e4e98: 0x27b10068  addiu       $s1, $sp, 0x68
    ctx->pc = 0x1e4e98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1e4e9c: 0xc62d0000  lwc1        $f13, 0x0($s1)
    ctx->pc = 0x1e4e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e4ea0: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x1E4EA0u;
    SET_GPR_U32(ctx, 31, 0x1E4EA8u);
    ctx->pc = 0x1E4EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4EA0u;
            // 0x1e4ea4: 0xc7ac0060  lwc1        $f12, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4EA8u; }
        if (ctx->pc != 0x1E4EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4EA8u; }
        if (ctx->pc != 0x1E4EA8u) { return; }
    }
    ctx->pc = 0x1E4EA8u;
label_1e4ea8:
    // 0x1e4ea8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e4ea8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1e4eac: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1e4eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4eb0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1e4eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4eb4: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x1e4eb4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e4eb8: 0xc047cc0  jal         func_11F300
    ctx->pc = 0x1E4EB8u;
    SET_GPR_U32(ctx, 31, 0x1E4EC0u);
    ctx->pc = 0x1E4EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4EB8u;
            // 0x1e4ebc: 0x46010b1c  madd.s      $f12, $f1, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F300u;
    if (runtime->hasFunction(0x11F300u)) {
        auto targetFn = runtime->lookupFunction(0x11F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4EC0u; }
        if (ctx->pc != 0x1E4EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x11f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4EC0u; }
        if (ctx->pc != 0x1E4EC0u) { return; }
    }
    ctx->pc = 0x1E4EC0u;
label_1e4ec0:
    // 0x1e4ec0: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x1e4ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e4ec4: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x1E4EC4u;
    SET_GPR_U32(ctx, 31, 0x1E4ECCu);
    ctx->pc = 0x1E4EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4EC4u;
            // 0x1e4ec8: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4ECCu; }
        if (ctx->pc != 0x1E4ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4ECCu; }
        if (ctx->pc != 0x1E4ECCu) { return; }
    }
    ctx->pc = 0x1E4ECCu;
label_1e4ecc:
    // 0x1e4ecc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1e4eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1e4ed0: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E4ED0u;
    {
        const bool branch_taken_0x1e4ed0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4ED0u;
            // 0x1e4ed4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4ed0) {
            ctx->pc = 0x1E4EF0u;
            goto label_1e4ef0;
        }
    }
    ctx->pc = 0x1E4ED8u;
    // 0x1e4ed8: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1e4ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1e4edc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e4edcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e4ee0: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x1e4ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e4ee4: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E4EE4u;
    SET_GPR_U32(ctx, 31, 0x1E4EECu);
    ctx->pc = 0x1E4EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4EE4u;
            // 0x1e4ee8: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4EECu; }
        if (ctx->pc != 0x1E4EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4EECu; }
        if (ctx->pc != 0x1E4EECu) { return; }
    }
    ctx->pc = 0x1E4EECu;
label_1e4eec:
    // 0x1e4eec: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1e4eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1e4ef0:
    // 0x1e4ef0: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E4EF0u;
    {
        const bool branch_taken_0x1e4ef0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4EF0u;
            // 0x1e4ef4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4ef0) {
            ctx->pc = 0x1E4F08u;
            goto label_1e4f08;
        }
    }
    ctx->pc = 0x1E4EF8u;
    // 0x1e4ef8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e4ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e4efc: 0xc0781e4  jal         func_1E0790
    ctx->pc = 0x1E4EFCu;
    SET_GPR_U32(ctx, 31, 0x1E4F04u);
    ctx->pc = 0x1E4F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4EFCu;
            // 0x1e4f00: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0790u;
    if (runtime->hasFunction(0x1E0790u)) {
        auto targetFn = runtime->lookupFunction(0x1E0790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4F04u; }
        if (ctx->pc != 0x1E4F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStackVector__FPfPP12RS_STACKDATA_0x1e0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4F04u; }
        if (ctx->pc != 0x1E4F04u) { return; }
    }
    ctx->pc = 0x1E4F04u;
label_1e4f04:
    // 0x1e4f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4f08:
    // 0x1e4f08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e4f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e4f0c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e4f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e4f10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e4f10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4f14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e4f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4f18: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4F18u;
            // 0x1e4f1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4F20u;
}
