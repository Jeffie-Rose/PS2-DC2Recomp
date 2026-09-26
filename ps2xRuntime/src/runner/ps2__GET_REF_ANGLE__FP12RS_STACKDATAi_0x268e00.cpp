#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_REF_ANGLE__FP12RS_STACKDATAi
// Address: 0x268e00 - 0x268f14
void ps2__GET_REF_ANGLE__FP12RS_STACKDATAi_0x268e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_REF_ANGLE__FP12RS_STACKDATAi_0x268e00");
#endif

    switch (ctx->pc) {
        case 0x268e2cu: goto label_268e2c;
        case 0x268e38u: goto label_268e38;
        case 0x268e4cu: goto label_268e4c;
        case 0x268e58u: goto label_268e58;
        case 0x268e68u: goto label_268e68;
        case 0x268e80u: goto label_268e80;
        case 0x268e8cu: goto label_268e8c;
        case 0x268eb4u: goto label_268eb4;
        case 0x268ec8u: goto label_268ec8;
        case 0x268ed8u: goto label_268ed8;
        case 0x268ee4u: goto label_268ee4;
        default: break;
    }

    ctx->pc = 0x268e00u;

    // 0x268e00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x268e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x268e04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x268e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x268e08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x268e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x268e0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x268e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x268e10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x268e10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x268e14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x268e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x268e1c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x268e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x268e20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x268e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e24: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x268E24u;
    SET_GPR_U32(ctx, 31, 0x268E2Cu);
    ctx->pc = 0x268E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268E24u;
            // 0x268e28: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268E2Cu; }
        if (ctx->pc != 0x268E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268E2Cu; }
        if (ctx->pc != 0x268E2Cu) { return; }
    }
    ctx->pc = 0x268E2Cu;
label_268e2c:
    // 0x268e2c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x268e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x268e30: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x268E30u;
    SET_GPR_U32(ctx, 31, 0x268E38u);
    ctx->pc = 0x268E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268E30u;
            // 0x268e34: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268E38u; }
        if (ctx->pc != 0x268E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268E38u; }
        if (ctx->pc != 0x268E38u) { return; }
    }
    ctx->pc = 0x268E38u;
label_268e38:
    // 0x268e38: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x268e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x268e3c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x268e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x268e40: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x268e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e44: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x268E44u;
    SET_GPR_U32(ctx, 31, 0x268E4Cu);
    ctx->pc = 0x268E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268E44u;
            // 0x268e48: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268E4Cu; }
        if (ctx->pc != 0x268E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268E4Cu; }
        if (ctx->pc != 0x268E4Cu) { return; }
    }
    ctx->pc = 0x268E4Cu;
label_268e4c:
    // 0x268e4c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x268e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x268e50: 0xc041be0  jal         func_106F80
    ctx->pc = 0x268E50u;
    SET_GPR_U32(ctx, 31, 0x268E58u);
    ctx->pc = 0x268E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268E50u;
            // 0x268e54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268E58u; }
        if (ctx->pc != 0x268E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268E58u; }
        if (ctx->pc != 0x268E58u) { return; }
    }
    ctx->pc = 0x268E58u;
label_268e58:
    // 0x268e58: 0x27b00068  addiu       $s0, $sp, 0x68
    ctx->pc = 0x268e58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x268e5c: 0xc60d0000  lwc1        $f13, 0x0($s0)
    ctx->pc = 0x268e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x268e60: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x268E60u;
    SET_GPR_U32(ctx, 31, 0x268E68u);
    ctx->pc = 0x268E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268E60u;
            // 0x268e64: 0xc7ac0060  lwc1        $f12, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268E68u; }
        if (ctx->pc != 0x268E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268E68u; }
        if (ctx->pc != 0x268E68u) { return; }
    }
    ctx->pc = 0x268E68u;
label_268e68:
    // 0x268e68: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x268e68u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x268e6c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x268e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268e70: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x268e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268e74: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x268e74u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x268e78: 0xc047cc0  jal         func_11F300
    ctx->pc = 0x268E78u;
    SET_GPR_U32(ctx, 31, 0x268E80u);
    ctx->pc = 0x268E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268E78u;
            // 0x268e7c: 0x46010b1c  madd.s      $f12, $f1, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F300u;
    if (runtime->hasFunction(0x11F300u)) {
        auto targetFn = runtime->lookupFunction(0x11F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268E80u; }
        if (ctx->pc != 0x268E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x11f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268E80u; }
        if (ctx->pc != 0x268E80u) { return; }
    }
    ctx->pc = 0x268E80u;
label_268e80:
    // 0x268e80: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x268e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x268e84: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x268E84u;
    SET_GPR_U32(ctx, 31, 0x268E8Cu);
    ctx->pc = 0x268E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268E84u;
            // 0x268e88: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268E8Cu; }
        if (ctx->pc != 0x268E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268E8Cu; }
        if (ctx->pc != 0x268E8Cu) { return; }
    }
    ctx->pc = 0x268E8Cu;
label_268e8c:
    // 0x268e8c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x268e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x268e90: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x268E90u;
    {
        const bool branch_taken_0x268e90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x268E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268E90u;
            // 0x268e94: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e90) {
            ctx->pc = 0x268EBCu;
            goto label_268ebc;
        }
    }
    ctx->pc = 0x268E98u;
    // 0x268e98: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x268e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x268e9c: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x268E9Cu;
    {
        const bool branch_taken_0x268e9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x268EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268E9Cu;
            // 0x268ea0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e9c) {
            ctx->pc = 0x268EACu;
            goto label_268eac;
        }
    }
    ctx->pc = 0x268EA4u;
    // 0x268ea4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x268EA4u;
    {
        const bool branch_taken_0x268ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268EA4u;
            // 0x268ea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ea4) {
            ctx->pc = 0x268EECu;
            goto label_268eec;
        }
    }
    ctx->pc = 0x268EACu;
label_268eac:
    // 0x268eac: 0xc097e54  jal         func_25F950
    ctx->pc = 0x268EACu;
    SET_GPR_U32(ctx, 31, 0x268EB4u);
    ctx->pc = 0x268EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268EACu;
            // 0x268eb0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268EB4u; }
        if (ctx->pc != 0x268EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268EB4u; }
        if (ctx->pc != 0x268EB4u) { return; }
    }
    ctx->pc = 0x268EB4u;
label_268eb4:
    // 0x268eb4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x268EB4u;
    {
        const bool branch_taken_0x268eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268EB4u;
            // 0x268eb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268eb4) {
            ctx->pc = 0x268EF8u;
            goto label_268ef8;
        }
    }
    ctx->pc = 0x268EBCu;
label_268ebc:
    // 0x268ebc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x268ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268ec0: 0xc097e54  jal         func_25F950
    ctx->pc = 0x268EC0u;
    SET_GPR_U32(ctx, 31, 0x268EC8u);
    ctx->pc = 0x268EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268EC0u;
            // 0x268ec4: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268EC8u; }
        if (ctx->pc != 0x268EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268EC8u; }
        if (ctx->pc != 0x268EC8u) { return; }
    }
    ctx->pc = 0x268EC8u;
label_268ec8:
    // 0x268ec8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x268ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268ecc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x268eccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x268ed0: 0xc097e54  jal         func_25F950
    ctx->pc = 0x268ED0u;
    SET_GPR_U32(ctx, 31, 0x268ED8u);
    ctx->pc = 0x268ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268ED0u;
            // 0x268ed4: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268ED8u; }
        if (ctx->pc != 0x268ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268ED8u; }
        if (ctx->pc != 0x268ED8u) { return; }
    }
    ctx->pc = 0x268ED8u;
label_268ed8:
    // 0x268ed8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x268ed8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x268edc: 0xc097e54  jal         func_25F950
    ctx->pc = 0x268EDCu;
    SET_GPR_U32(ctx, 31, 0x268EE4u);
    ctx->pc = 0x268EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268EDCu;
            // 0x268ee0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268EE4u; }
        if (ctx->pc != 0x268EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268EE4u; }
        if (ctx->pc != 0x268EE4u) { return; }
    }
    ctx->pc = 0x268EE4u;
label_268ee4:
    // 0x268ee4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x268EE4u;
    {
        const bool branch_taken_0x268ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268ee4) {
            ctx->pc = 0x268EF4u;
            goto label_268ef4;
        }
    }
    ctx->pc = 0x268EECu;
label_268eec:
    // 0x268eec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x268EECu;
    {
        const bool branch_taken_0x268eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268EECu;
            // 0x268ef0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268eec) {
            ctx->pc = 0x268EFCu;
            goto label_268efc;
        }
    }
    ctx->pc = 0x268EF4u;
label_268ef4:
    // 0x268ef4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268ef8:
    // 0x268ef8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x268ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_268efc:
    // 0x268efc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x268efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x268f00: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x268f00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x268f04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x268f04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268f08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x268f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x268F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268F0Cu;
            // 0x268f10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x268F14u;
}
