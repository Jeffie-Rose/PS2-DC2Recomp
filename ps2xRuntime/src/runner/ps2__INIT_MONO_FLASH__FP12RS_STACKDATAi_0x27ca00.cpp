#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _INIT_MONO_FLASH__FP12RS_STACKDATAi
// Address: 0x27ca00 - 0x27cbf8
void ps2__INIT_MONO_FLASH__FP12RS_STACKDATAi_0x27ca00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__INIT_MONO_FLASH__FP12RS_STACKDATAi_0x27ca00");
#endif

    switch (ctx->pc) {
        case 0x27ca14u: goto label_27ca14;
        case 0x27ca44u: goto label_27ca44;
        case 0x27ca94u: goto label_27ca94;
        case 0x27cae4u: goto label_27cae4;
        case 0x27cb4cu: goto label_27cb4c;
        case 0x27cb5cu: goto label_27cb5c;
        case 0x27cb90u: goto label_27cb90;
        case 0x27cbc8u: goto label_27cbc8;
        case 0x27cbe0u: goto label_27cbe0;
        default: break;
    }

    ctx->pc = 0x27ca00u;

    // 0x27ca00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27ca00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27ca04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27ca04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27ca08: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27ca08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27ca0c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27CA0Cu;
    SET_GPR_U32(ctx, 31, 0x27CA14u);
    ctx->pc = 0x27CA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CA0Cu;
            // 0x27ca10: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CA14u; }
        if (ctx->pc != 0x27CA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CA14u; }
        if (ctx->pc != 0x27CA14u) { return; }
    }
    ctx->pc = 0x27CA14u;
label_27ca14:
    // 0x27ca14: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27ca14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27ca18: 0x8c832e80  lw          $v1, 0x2E80($a0)
    ctx->pc = 0x27ca18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11904)));
    // 0x27ca1c: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CA1Cu;
    {
        const bool branch_taken_0x27ca1c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27CA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CA1Cu;
            // 0x27ca20: 0x8c912e7c  lw          $s1, 0x2E7C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca1c) {
            ctx->pc = 0x27CA2Cu;
            goto label_27ca2c;
        }
    }
    ctx->pc = 0x27CA24u;
    // 0x27ca24: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CA24u;
    {
        const bool branch_taken_0x27ca24 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x27ca24) {
            ctx->pc = 0x27CA34u;
            goto label_27ca34;
        }
    }
    ctx->pc = 0x27CA2Cu;
label_27ca2c:
    // 0x27ca2c: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x27CA2Cu;
    {
        const bool branch_taken_0x27ca2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CA2Cu;
            // 0x27ca30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca2c) {
            ctx->pc = 0x27CBE4u;
            goto label_27cbe4;
        }
    }
    ctx->pc = 0x27CA34u;
label_27ca34:
    // 0x27ca34: 0x440002f  bltz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x27CA34u;
    {
        const bool branch_taken_0x27ca34 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27CA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CA34u;
            // 0x27ca38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca34) {
            ctx->pc = 0x27CAF4u;
            goto label_27caf4;
        }
    }
    ctx->pc = 0x27CA3Cu;
    // 0x27ca3c: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x27CA3Cu;
    SET_GPR_U32(ctx, 31, 0x27CA44u);
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CA44u; }
        if (ctx->pc != 0x27CA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CA44u; }
        if (ctx->pc != 0x27CA44u) { return; }
    }
    ctx->pc = 0x27CA44u;
label_27ca44:
    // 0x27ca44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CA44u;
    {
        const bool branch_taken_0x27ca44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CA44u;
            // 0x27ca48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca44) {
            ctx->pc = 0x27CA54u;
            goto label_27ca54;
        }
    }
    ctx->pc = 0x27CA4Cu;
    // 0x27ca4c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x27CA4Cu;
    {
        const bool branch_taken_0x27ca4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CA4Cu;
            // 0x27ca50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca4c) {
            ctx->pc = 0x27CBE4u;
            goto label_27cbe4;
        }
    }
    ctx->pc = 0x27CA54u;
label_27ca54:
    // 0x27ca54: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x27ca54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x27ca58: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x27ca58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x27ca5c: 0x8f8287a0  lw          $v0, -0x7860($gp)
    ctx->pc = 0x27ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936480)));
    // 0x27ca60: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x27ca60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27ca64: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x27ca64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27ca68: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CA68u;
    {
        const bool branch_taken_0x27ca68 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27CA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CA68u;
            // 0x27ca6c: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca68) {
            ctx->pc = 0x27CA78u;
            goto label_27ca78;
        }
    }
    ctx->pc = 0x27CA70u;
    // 0x27ca70: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x27ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x27ca74: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x27ca74u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_27ca78:
    // 0x27ca78: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CA78u;
    {
        const bool branch_taken_0x27ca78 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x27CA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CA78u;
            // 0x27ca7c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca78) {
            ctx->pc = 0x27CA88u;
            goto label_27ca88;
        }
    }
    ctx->pc = 0x27CA80u;
    // 0x27ca80: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x27ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x27ca84: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x27ca84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_27ca88:
    // 0x27ca88: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x27ca88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27ca8c: 0xc04e704  jal         func_139C10
    ctx->pc = 0x27CA8Cu;
    SET_GPR_U32(ctx, 31, 0x27CA94u);
    ctx->pc = 0x27CA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CA8Cu;
            // 0x27ca90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CA94u; }
        if (ctx->pc != 0x27CA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CA94u; }
        if (ctx->pc != 0x27CA94u) { return; }
    }
    ctx->pc = 0x27CA94u;
label_27ca94:
    // 0x27ca94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CA94u;
    {
        const bool branch_taken_0x27ca94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CA94u;
            // 0x27ca98: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca94) {
            ctx->pc = 0x27CAA4u;
            goto label_27caa4;
        }
    }
    ctx->pc = 0x27CA9Cu;
    // 0x27ca9c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x27CA9Cu;
    {
        const bool branch_taken_0x27ca9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CA9Cu;
            // 0x27caa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca9c) {
            ctx->pc = 0x27CBE4u;
            goto label_27cbe4;
        }
    }
    ctx->pc = 0x27CAA4u;
label_27caa4:
    // 0x27caa4: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x27caa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x27caa8: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x27caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x27caac: 0x8f8287a0  lw          $v0, -0x7860($gp)
    ctx->pc = 0x27caacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936480)));
    // 0x27cab0: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x27cab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27cab4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x27cab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27cab8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CAB8u;
    {
        const bool branch_taken_0x27cab8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27CABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CAB8u;
            // 0x27cabc: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cab8) {
            ctx->pc = 0x27CAC8u;
            goto label_27cac8;
        }
    }
    ctx->pc = 0x27CAC0u;
    // 0x27cac0: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x27cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x27cac4: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x27cac4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_27cac8:
    // 0x27cac8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CAC8u;
    {
        const bool branch_taken_0x27cac8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x27CACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CAC8u;
            // 0x27cacc: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cac8) {
            ctx->pc = 0x27CAD8u;
            goto label_27cad8;
        }
    }
    ctx->pc = 0x27CAD0u;
    // 0x27cad0: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x27cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x27cad4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x27cad4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_27cad8:
    // 0x27cad8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x27cad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27cadc: 0xc04e704  jal         func_139C10
    ctx->pc = 0x27CADCu;
    SET_GPR_U32(ctx, 31, 0x27CAE4u);
    ctx->pc = 0x27CAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CADCu;
            // 0x27cae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CAE4u; }
        if (ctx->pc != 0x27CAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CAE4u; }
        if (ctx->pc != 0x27CAE4u) { return; }
    }
    ctx->pc = 0x27CAE4u;
label_27cae4:
    // 0x27cae4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x27CAE4u;
    {
        const bool branch_taken_0x27cae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CAE4u;
            // 0x27cae8: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cae4) {
            ctx->pc = 0x27CB3Cu;
            goto label_27cb3c;
        }
    }
    ctx->pc = 0x27CAECu;
    // 0x27caec: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x27CAECu;
    {
        const bool branch_taken_0x27caec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CAECu;
            // 0x27caf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27caec) {
            ctx->pc = 0x27CBE4u;
            goto label_27cbe4;
        }
    }
    ctx->pc = 0x27CAF4u;
label_27caf4:
    // 0x27caf4: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x27caf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x27caf8: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x27caf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x27cafc: 0x8f858ac0  lw          $a1, -0x7540($gp)
    ctx->pc = 0x27cafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x27cb00: 0x8f8287a0  lw          $v0, -0x7860($gp)
    ctx->pc = 0x27cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936480)));
    // 0x27cb04: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x27cb04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27cb08: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x27cb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x27cb0c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x27cb0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27cb10: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CB10u;
    {
        const bool branch_taken_0x27cb10 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27CB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CB10u;
            // 0x27cb14: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb10) {
            ctx->pc = 0x27CB20u;
            goto label_27cb20;
        }
    }
    ctx->pc = 0x27CB18u;
    // 0x27cb18: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x27cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x27cb1c: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x27cb1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_27cb20:
    // 0x27cb20: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CB20u;
    {
        const bool branch_taken_0x27cb20 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x27CB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CB20u;
            // 0x27cb24: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb20) {
            ctx->pc = 0x27CB30u;
            goto label_27cb30;
        }
    }
    ctx->pc = 0x27CB28u;
    // 0x27cb28: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x27cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x27cb2c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x27cb2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_27cb30:
    // 0x27cb30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27cb34: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x27cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27cb38: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x27cb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_27cb3c:
    // 0x27cb3c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x27cb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x27cb40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27cb40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cb44: 0xc04b950  jal         func_12E540
    ctx->pc = 0x27CB44u;
    SET_GPR_U32(ctx, 31, 0x27CB4Cu);
    ctx->pc = 0x27CB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CB44u;
            // 0x27cb48: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CB4Cu; }
        if (ctx->pc != 0x27CB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CB4Cu; }
        if (ctx->pc != 0x27CB4Cu) { return; }
    }
    ctx->pc = 0x27CB4Cu;
label_27cb4c:
    // 0x27cb4c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x27cb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x27cb50: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x27cb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27cb54: 0xc04b950  jal         func_12E540
    ctx->pc = 0x27CB54u;
    SET_GPR_U32(ctx, 31, 0x27CB5Cu);
    ctx->pc = 0x27CB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CB54u;
            // 0x27cb58: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CB5Cu; }
        if (ctx->pc != 0x27CB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CB5Cu; }
        if (ctx->pc != 0x27CB5Cu) { return; }
    }
    ctx->pc = 0x27CB5Cu;
label_27cb5c:
    // 0x27cb5c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x27cb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x27cb60: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x27cb60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x27cb64: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x27cb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x27cb68: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x27cb68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x27cb6c: 0x8f888780  lw          $t0, -0x7880($gp)
    ctx->pc = 0x27cb6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x27cb70: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x27cb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x27cb74: 0x8f898784  lw          $t1, -0x787C($gp)
    ctx->pc = 0x27cb74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x27cb78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27cb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cb7c: 0x8f8a87a0  lw          $t2, -0x7860($gp)
    ctx->pc = 0x27cb7cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936480)));
    // 0x27cb80: 0x24c6cc20  addiu       $a2, $a2, -0x33E0
    ctx->pc = 0x27cb80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954016));
    // 0x27cb84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27cb84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cb88: 0xc04b450  jal         func_12D140
    ctx->pc = 0x27CB88u;
    SET_GPR_U32(ctx, 31, 0x27CB90u);
    ctx->pc = 0x27CB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CB88u;
            // 0x27cb8c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CB90u; }
        if (ctx->pc != 0x27CB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CB90u; }
        if (ctx->pc != 0x27CB90u) { return; }
    }
    ctx->pc = 0x27CB90u;
label_27cb90:
    // 0x27cb90: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x27cb90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x27cb94: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x27cb94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x27cb98: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x27cb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x27cb9c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x27cb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x27cba0: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x27cba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x27cba4: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x27cba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27cba8: 0x8f888780  lw          $t0, -0x7880($gp)
    ctx->pc = 0x27cba8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x27cbac: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x27cbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x27cbb0: 0x8f898784  lw          $t1, -0x787C($gp)
    ctx->pc = 0x27cbb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x27cbb4: 0x24c6cc30  addiu       $a2, $a2, -0x33D0
    ctx->pc = 0x27cbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954032));
    // 0x27cbb8: 0x8f8a87a0  lw          $t2, -0x7860($gp)
    ctx->pc = 0x27cbb8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936480)));
    // 0x27cbbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27cbbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cbc0: 0xc04b450  jal         func_12D140
    ctx->pc = 0x27CBC0u;
    SET_GPR_U32(ctx, 31, 0x27CBC8u);
    ctx->pc = 0x27CBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CBC0u;
            // 0x27cbc4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CBC8u; }
        if (ctx->pc != 0x27CBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CBC8u; }
        if (ctx->pc != 0x27CBC8u) { return; }
    }
    ctx->pc = 0x27CBC8u;
label_27cbc8:
    // 0x27cbc8: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27cbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x27cbcc: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x27cbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x27cbd0: 0x24842a40  addiu       $a0, $a0, 0x2A40
    ctx->pc = 0x27cbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
    // 0x27cbd4: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x27cbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x27cbd8: 0xc098304  jal         func_260C10
    ctx->pc = 0x27CBD8u;
    SET_GPR_U32(ctx, 31, 0x27CBE0u);
    ctx->pc = 0x27CBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CBD8u;
            // 0x27cbdc: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260C10u;
    if (runtime->hasFunction(0x260C10u)) {
        auto targetFn = runtime->lookupFunction(0x260C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CBE0u; }
        if (ctx->pc != 0x27CBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMonoFlashTexture__13CScreenEffectFPP10mgCTexturePP1_0x260c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CBE0u; }
        if (ctx->pc != 0x27CBE0u) { return; }
    }
    ctx->pc = 0x27CBE0u;
label_27cbe0:
    // 0x27cbe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27cbe4:
    // 0x27cbe4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27cbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27cbe8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27cbe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27cbec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27cbecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27cbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x27CBF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CBF0u;
            // 0x27cbf4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27CBF8u;
}
