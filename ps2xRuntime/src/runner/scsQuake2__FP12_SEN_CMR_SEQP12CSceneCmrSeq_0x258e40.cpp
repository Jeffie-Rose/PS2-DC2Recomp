#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsQuake2__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x258e40 - 0x258fe0
void scsQuake2__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x258e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsQuake2__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x258e40");
#endif

    switch (ctx->pc) {
        case 0x258e78u: goto label_258e78;
        case 0x258e84u: goto label_258e84;
        case 0x258e90u: goto label_258e90;
        case 0x258ec0u: goto label_258ec0;
        case 0x258ed4u: goto label_258ed4;
        case 0x258f18u: goto label_258f18;
        case 0x258f2cu: goto label_258f2c;
        case 0x258f38u: goto label_258f38;
        case 0x258f44u: goto label_258f44;
        case 0x258f74u: goto label_258f74;
        case 0x258f90u: goto label_258f90;
        case 0x258fa0u: goto label_258fa0;
        default: break;
    }

    ctx->pc = 0x258e40u;

    // 0x258e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258e44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x258e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x258e48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x258e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x258e4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258e50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x258e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e54: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x258e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x258e58: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x258e58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x258e5c: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x258E5Cu;
    {
        const bool branch_taken_0x258e5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x258E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258E5Cu;
            // 0x258e60: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e5c) {
            ctx->pc = 0x258EF8u;
            goto label_258ef8;
        }
    }
    ctx->pc = 0x258E64u;
    // 0x258e64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258e68: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x258e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x258e6c: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x258e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x258e70: 0xc041c5c  jal         func_107170
    ctx->pc = 0x258E70u;
    SET_GPR_U32(ctx, 31, 0x258E78u);
    ctx->pc = 0x258E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258E70u;
            // 0x258e74: 0x26040190  addiu       $a0, $s0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258E78u; }
        if (ctx->pc != 0x258E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258E78u; }
        if (ctx->pc != 0x258E78u) { return; }
    }
    ctx->pc = 0x258E78u;
label_258e78:
    // 0x258e78: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x258e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x258e7c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x258E7Cu;
    SET_GPR_U32(ctx, 31, 0x258E84u);
    ctx->pc = 0x258E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258E7Cu;
            // 0x258e80: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258E84u; }
        if (ctx->pc != 0x258E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258E84u; }
        if (ctx->pc != 0x258E84u) { return; }
    }
    ctx->pc = 0x258E84u;
label_258e84:
    // 0x258e84: 0x260401b0  addiu       $a0, $s0, 0x1B0
    ctx->pc = 0x258e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x258e88: 0xc041c5c  jal         func_107170
    ctx->pc = 0x258E88u;
    SET_GPR_U32(ctx, 31, 0x258E90u);
    ctx->pc = 0x258E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258E88u;
            // 0x258e8c: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258E90u; }
        if (ctx->pc != 0x258E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258E90u; }
        if (ctx->pc != 0x258E90u) { return; }
    }
    ctx->pc = 0x258E90u;
label_258e90:
    // 0x258e90: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x258e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x258e94: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x258E94u;
    {
        const bool branch_taken_0x258e94 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x258E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258E94u;
            // 0x258e98: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e94) {
            ctx->pc = 0x258EA8u;
            goto label_258ea8;
        }
    }
    ctx->pc = 0x258E9Cu;
    // 0x258e9c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x258E9Cu;
    {
        const bool branch_taken_0x258e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258e9c) {
            ctx->pc = 0x258EA8u;
            goto label_258ea8;
        }
    }
    ctx->pc = 0x258EA4u;
    // 0x258ea4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x258ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_258ea8:
    // 0x258ea8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x258EA8u;
    {
        const bool branch_taken_0x258ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258EA8u;
            // 0x258eac: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ea8) {
            ctx->pc = 0x258EC8u;
            goto label_258ec8;
        }
    }
    ctx->pc = 0x258EB0u;
    // 0x258eb0: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x258eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x258eb4: 0x260501b0  addiu       $a1, $s0, 0x1B0
    ctx->pc = 0x258eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x258eb8: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x258EB8u;
    SET_GPR_U32(ctx, 31, 0x258EC0u);
    ctx->pc = 0x258EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258EB8u;
            // 0x258ebc: 0x26060190  addiu       $a2, $s0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258EC0u; }
        if (ctx->pc != 0x258EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258EC0u; }
        if (ctx->pc != 0x258EC0u) { return; }
    }
    ctx->pc = 0x258EC0u;
label_258ec0:
    // 0x258ec0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x258EC0u;
    {
        const bool branch_taken_0x258ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258EC0u;
            // 0x258ec4: 0x8e020044  lw          $v0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ec0) {
            ctx->pc = 0x258ED8u;
            goto label_258ed8;
        }
    }
    ctx->pc = 0x258EC8u;
label_258ec8:
    // 0x258ec8: 0x260501b0  addiu       $a1, $s0, 0x1B0
    ctx->pc = 0x258ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x258ecc: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x258ECCu;
    SET_GPR_U32(ctx, 31, 0x258ED4u);
    ctx->pc = 0x258ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258ECCu;
            // 0x258ed0: 0x26060190  addiu       $a2, $s0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258ED4u; }
        if (ctx->pc != 0x258ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258ED4u; }
        if (ctx->pc != 0x258ED4u) { return; }
    }
    ctx->pc = 0x258ED4u;
label_258ed4:
    // 0x258ed4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x258ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_258ed8:
    // 0x258ed8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258edc: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x258edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x258ee0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x258ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x258ee4: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x258ee4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x258ee8: 0x14200038  bnez        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x258EE8u;
    {
        const bool branch_taken_0x258ee8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x258EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258EE8u;
            // 0x258eec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ee8) {
            ctx->pc = 0x258FCCu;
            goto label_258fcc;
        }
    }
    ctx->pc = 0x258EF0u;
    // 0x258ef0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x258EF0u;
    {
        const bool branch_taken_0x258ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258EF0u;
            // 0x258ef4: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ef0) {
            ctx->pc = 0x258FC8u;
            goto label_258fc8;
        }
    }
    ctx->pc = 0x258EF8u;
label_258ef8:
    // 0x258ef8: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x258ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x258efc: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x258EFCu;
    {
        const bool branch_taken_0x258efc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x258F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258EFCu;
            // 0x258f00: 0x260401a0  addiu       $a0, $s0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258efc) {
            ctx->pc = 0x258F30u;
            goto label_258f30;
        }
    }
    ctx->pc = 0x258F04u;
    // 0x258f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258f08: 0x26040190  addiu       $a0, $s0, 0x190
    ctx->pc = 0x258f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x258f0c: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x258f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x258f10: 0xc041c5c  jal         func_107170
    ctx->pc = 0x258F10u;
    SET_GPR_U32(ctx, 31, 0x258F18u);
    ctx->pc = 0x258F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258F10u;
            // 0x258f14: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258F18u; }
        if (ctx->pc != 0x258F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258F18u; }
        if (ctx->pc != 0x258F18u) { return; }
    }
    ctx->pc = 0x258F18u;
label_258f18:
    // 0x258f18: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x258f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258f1c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x258f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x258f20: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x258f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258f24: 0xc041c1e  jal         func_107078
    ctx->pc = 0x258F24u;
    SET_GPR_U32(ctx, 31, 0x258F2Cu);
    ctx->pc = 0x258F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258F24u;
            // 0x258f28: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107078u;
    if (runtime->hasFunction(0x107078u)) {
        auto targetFn = runtime->lookupFunction(0x107078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258F2Cu; }
        if (ctx->pc != 0x258F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0DivVector_0x107078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258F2Cu; }
        if (ctx->pc != 0x258F2Cu) { return; }
    }
    ctx->pc = 0x258F2Cu;
label_258f2c:
    // 0x258f2c: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x258f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
label_258f30:
    // 0x258f30: 0xc041c5c  jal         func_107170
    ctx->pc = 0x258F30u;
    SET_GPR_U32(ctx, 31, 0x258F38u);
    ctx->pc = 0x258F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258F30u;
            // 0x258f34: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258F38u; }
        if (ctx->pc != 0x258F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258F38u; }
        if (ctx->pc != 0x258F38u) { return; }
    }
    ctx->pc = 0x258F38u;
label_258f38:
    // 0x258f38: 0x260401b0  addiu       $a0, $s0, 0x1B0
    ctx->pc = 0x258f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x258f3c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x258F3Cu;
    SET_GPR_U32(ctx, 31, 0x258F44u);
    ctx->pc = 0x258F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258F3Cu;
            // 0x258f40: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258F44u; }
        if (ctx->pc != 0x258F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258F44u; }
        if (ctx->pc != 0x258F44u) { return; }
    }
    ctx->pc = 0x258F44u;
label_258f44:
    // 0x258f44: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x258f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x258f48: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258F48u;
    {
        const bool branch_taken_0x258f48 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x258F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258F48u;
            // 0x258f4c: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f48) {
            ctx->pc = 0x258F5Cu;
            goto label_258f5c;
        }
    }
    ctx->pc = 0x258F50u;
    // 0x258f50: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x258F50u;
    {
        const bool branch_taken_0x258f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x258f50) {
            ctx->pc = 0x258F5Cu;
            goto label_258f5c;
        }
    }
    ctx->pc = 0x258F58u;
    // 0x258f58: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x258f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_258f5c:
    // 0x258f5c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x258F5Cu;
    {
        const bool branch_taken_0x258f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x258F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258F5Cu;
            // 0x258f60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f5c) {
            ctx->pc = 0x258F7Cu;
            goto label_258f7c;
        }
    }
    ctx->pc = 0x258F64u;
    // 0x258f64: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x258f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x258f68: 0x260501b0  addiu       $a1, $s0, 0x1B0
    ctx->pc = 0x258f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x258f6c: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x258F6Cu;
    SET_GPR_U32(ctx, 31, 0x258F74u);
    ctx->pc = 0x258F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258F6Cu;
            // 0x258f70: 0x26060190  addiu       $a2, $s0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258F74u; }
        if (ctx->pc != 0x258F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258F74u; }
        if (ctx->pc != 0x258F74u) { return; }
    }
    ctx->pc = 0x258F74u;
label_258f74:
    // 0x258f74: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x258F74u;
    {
        const bool branch_taken_0x258f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258F74u;
            // 0x258f78: 0x26040190  addiu       $a0, $s0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f74) {
            ctx->pc = 0x258F94u;
            goto label_258f94;
        }
    }
    ctx->pc = 0x258F7Cu;
label_258f7c:
    // 0x258f7c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258F7Cu;
    {
        const bool branch_taken_0x258f7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x258F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258F7Cu;
            // 0x258f80: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f7c) {
            ctx->pc = 0x258F90u;
            goto label_258f90;
        }
    }
    ctx->pc = 0x258F84u;
    // 0x258f84: 0x260501b0  addiu       $a1, $s0, 0x1B0
    ctx->pc = 0x258f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x258f88: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x258F88u;
    SET_GPR_U32(ctx, 31, 0x258F90u);
    ctx->pc = 0x258F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258F88u;
            // 0x258f8c: 0x26060190  addiu       $a2, $s0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258F90u; }
        if (ctx->pc != 0x258F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258F90u; }
        if (ctx->pc != 0x258F90u) { return; }
    }
    ctx->pc = 0x258F90u;
label_258f90:
    // 0x258f90: 0x26040190  addiu       $a0, $s0, 0x190
    ctx->pc = 0x258f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_258f94:
    // 0x258f94: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x258f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x258f98: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x258F98u;
    SET_GPR_U32(ctx, 31, 0x258FA0u);
    ctx->pc = 0x258F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258F98u;
            // 0x258f9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258FA0u; }
        if (ctx->pc != 0x258FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258FA0u; }
        if (ctx->pc != 0x258FA0u) { return; }
    }
    ctx->pc = 0x258FA0u;
label_258fa0:
    // 0x258fa0: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x258fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x258fa4: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x258fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x258fa8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x258fa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x258fac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x258FACu;
    {
        const bool branch_taken_0x258fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258FACu;
            // 0x258fb0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fac) {
            ctx->pc = 0x258FC4u;
            goto label_258fc4;
        }
    }
    ctx->pc = 0x258FB4u;
    // 0x258fb4: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x258fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x258fb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x258fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258fbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x258FBCu;
    {
        const bool branch_taken_0x258fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258FBCu;
            // 0x258fc0: 0xae000180  sw          $zero, 0x180($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fbc) {
            ctx->pc = 0x258FCCu;
            goto label_258fcc;
        }
    }
    ctx->pc = 0x258FC4u;
label_258fc4:
    // 0x258fc4: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x258fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_258fc8:
    // 0x258fc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_258fcc:
    // 0x258fcc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x258fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258fd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x258fd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258fd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x258FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258FD8u;
            // 0x258fdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x258FE0u;
}
