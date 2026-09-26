#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__16CEffectScriptManFP9mgCMemoryii
// Address: 0x2dfde0 - 0x2dff08
void Initialize__16CEffectScriptManFP9mgCMemoryii_0x2dfde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__16CEffectScriptManFP9mgCMemoryii_0x2dfde0");
#endif

    switch (ctx->pc) {
        case 0x2dfe10u: goto label_2dfe10;
        case 0x2dfe50u: goto label_2dfe50;
        case 0x2dfea0u: goto label_2dfea0;
        case 0x2dfea8u: goto label_2dfea8;
        case 0x2dfec8u: goto label_2dfec8;
        case 0x2dfed0u: goto label_2dfed0;
        default: break;
    }

    ctx->pc = 0x2dfde0u;

    // 0x2dfde0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dfde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dfde4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2dfde4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfde8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2dfde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2dfdec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dfdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dfdf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dfdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dfdf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dfdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dfdf8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2dfdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2dfdfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dfdfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfe00: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2dfe00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2dfe04: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2dfe04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2dfe08: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2dfe08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2dfe0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2dfe0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dfe10:
    // 0x2dfe10: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x2dfe10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2dfe14: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2dfe14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2dfe18: 0xaca00080  sw          $zero, 0x80($a1)
    ctx->pc = 0x2dfe18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 0));
    // 0x2dfe1c: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x2dfe1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2dfe20: 0xaca00084  sw          $zero, 0x84($a1)
    ctx->pc = 0x2dfe20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 0));
    // 0x2dfe24: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2dfe24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2dfe28: 0xaca00088  sw          $zero, 0x88($a1)
    ctx->pc = 0x2dfe28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 0));
    // 0x2dfe2c: 0xaca0008c  sw          $zero, 0x8C($a1)
    ctx->pc = 0x2dfe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 0));
    // 0x2dfe30: 0xaca00090  sw          $zero, 0x90($a1)
    ctx->pc = 0x2dfe30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 0));
    // 0x2dfe34: 0xaca00094  sw          $zero, 0x94($a1)
    ctx->pc = 0x2dfe34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 0));
    // 0x2dfe38: 0xaca00098  sw          $zero, 0x98($a1)
    ctx->pc = 0x2dfe38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 152), GPR_U32(ctx, 0));
    // 0x2dfe3c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2DFE3Cu;
    {
        const bool branch_taken_0x2dfe3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFE3Cu;
            // 0x2dfe40: 0xaca0009c  sw          $zero, 0x9C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfe3c) {
            ctx->pc = 0x2DFE10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dfe10;
        }
    }
    ctx->pc = 0x2DFE44u;
    // 0x2dfe44: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x2dfe44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
    // 0x2dfe48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfe48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfe4c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2dfe4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dfe50:
    // 0x2dfe50: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x2dfe50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2dfe54: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2dfe54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2dfe58: 0xac800184  sw          $zero, 0x184($a0)
    ctx->pc = 0x2dfe58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 388), GPR_U32(ctx, 0));
    // 0x2dfe5c: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x2dfe5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2dfe60: 0xac800188  sw          $zero, 0x188($a0)
    ctx->pc = 0x2dfe60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 392), GPR_U32(ctx, 0));
    // 0x2dfe64: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2dfe64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2dfe68: 0xac80018c  sw          $zero, 0x18C($a0)
    ctx->pc = 0x2dfe68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 396), GPR_U32(ctx, 0));
    // 0x2dfe6c: 0xac800190  sw          $zero, 0x190($a0)
    ctx->pc = 0x2dfe6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 0));
    // 0x2dfe70: 0xac800194  sw          $zero, 0x194($a0)
    ctx->pc = 0x2dfe70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 404), GPR_U32(ctx, 0));
    // 0x2dfe74: 0xac800198  sw          $zero, 0x198($a0)
    ctx->pc = 0x2dfe74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 0));
    // 0x2dfe78: 0xac80019c  sw          $zero, 0x19C($a0)
    ctx->pc = 0x2dfe78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 412), GPR_U32(ctx, 0));
    // 0x2dfe7c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2DFE7Cu;
    {
        const bool branch_taken_0x2dfe7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFE7Cu;
            // 0x2dfe80: 0xac8001a0  sw          $zero, 0x1A0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfe7c) {
            ctx->pc = 0x2DFE50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dfe50;
        }
    }
    ctx->pc = 0x2DFE84u;
    // 0x2dfe84: 0xae001184  sw          $zero, 0x1184($s0)
    ctx->pc = 0x2dfe84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4484), GPR_U32(ctx, 0));
    // 0x2dfe88: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x2dfe88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x2dfe8c: 0xae070014  sw          $a3, 0x14($s0)
    ctx->pc = 0x2dfe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
    // 0x2dfe90: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2dfe90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2dfe94: 0xae00118c  sw          $zero, 0x118C($s0)
    ctx->pc = 0x2dfe94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4492), GPR_U32(ctx, 0));
    // 0x2dfe98: 0xc06421c  jal         func_190870
    ctx->pc = 0x2DFE98u;
    SET_GPR_U32(ctx, 31, 0x2DFEA0u);
    ctx->pc = 0x2DFE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFE98u;
            // 0x2dfe9c: 0xae001188  sw          $zero, 0x1188($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFEA0u; }
        if (ctx->pc != 0x2DFEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFEA0u; }
        if (ctx->pc != 0x2DFEA0u) { return; }
    }
    ctx->pc = 0x2DFEA0u;
label_2dfea0:
    // 0x2dfea0: 0xc0ba324  jal         func_2E8C90
    ctx->pc = 0x2DFEA0u;
    SET_GPR_U32(ctx, 31, 0x2DFEA8u);
    ctx->pc = 0x2DFEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFEA0u;
            // 0x2dfea4: 0xaf829ec8  sw          $v0, -0x6138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8C90u;
    if (runtime->hasFunction(0x2E8C90u)) {
        auto targetFn = runtime->lookupFunction(0x2E8C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFEA8u; }
        if (ctx->pc != 0x2DFEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEffectScriptFunc__Fv_0x2e8c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFEA8u; }
        if (ctx->pc != 0x2DFEA8u) { return; }
    }
    ctx->pc = 0x2DFEA8u;
label_2dfea8:
    // 0x2dfea8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2dfea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2dfeac: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x2dfeacu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x2dfeb0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2dfeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2dfeb4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2dfeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2dfeb8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2dfeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x2dfebc: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x2dfebcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2dfec0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DFEC0u;
    {
        const bool branch_taken_0x2dfec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFEC0u;
            // 0x2dfec4: 0x26311ef0  addiu       $s1, $s1, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfec0) {
            ctx->pc = 0x2DFED4u;
            goto label_2dfed4;
        }
    }
    ctx->pc = 0x2DFEC8u;
label_2dfec8:
    // 0x2dfec8: 0xc04b950  jal         func_12E540
    ctx->pc = 0x2DFEC8u;
    SET_GPR_U32(ctx, 31, 0x2DFED0u);
    ctx->pc = 0x2DFECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFEC8u;
            // 0x2dfecc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFED0u; }
        if (ctx->pc != 0x2DFED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFED0u; }
        if (ctx->pc != 0x2DFED0u) { return; }
    }
    ctx->pc = 0x2DFED0u;
label_2dfed0:
    // 0x2dfed0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2dfed0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2dfed4:
    // 0x2dfed4: 0x0  nop
    ctx->pc = 0x2dfed4u;
    // NOP
    // 0x2dfed8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2dfed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2dfedc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2dfedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2dfee0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2dfee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2dfee4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x2dfee4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2dfee8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2DFEE8u;
    {
        const bool branch_taken_0x2dfee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFEE8u;
            // 0x2dfeec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfee8) {
            ctx->pc = 0x2DFEC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dfec8;
        }
    }
    ctx->pc = 0x2DFEF0u;
    // 0x2dfef0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2dfef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dfef4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dfef4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfef8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dfef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfefc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dfefcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dff00: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFF00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFF00u;
            // 0x2dff04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DFF08u;
}
