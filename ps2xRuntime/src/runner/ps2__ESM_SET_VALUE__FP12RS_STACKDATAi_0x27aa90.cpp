#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_SET_VALUE__FP12RS_STACKDATAi
// Address: 0x27aa90 - 0x27ac1c
void ps2__ESM_SET_VALUE__FP12RS_STACKDATAi_0x27aa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_SET_VALUE__FP12RS_STACKDATAi_0x27aa90");
#endif

    switch (ctx->pc) {
        case 0x27aae0u: goto label_27aae0;
        case 0x27ab0cu: goto label_27ab0c;
        case 0x27ab24u: goto label_27ab24;
        case 0x27ab34u: goto label_27ab34;
        case 0x27ab4cu: goto label_27ab4c;
        case 0x27ab64u: goto label_27ab64;
        case 0x27ab74u: goto label_27ab74;
        case 0x27ab84u: goto label_27ab84;
        case 0x27abb0u: goto label_27abb0;
        case 0x27abc8u: goto label_27abc8;
        case 0x27abd8u: goto label_27abd8;
        case 0x27abf0u: goto label_27abf0;
        default: break;
    }

    ctx->pc = 0x27aa90u;

    // 0x27aa90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27aa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27aa94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27aa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27aa98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27aa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27aa9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27aa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27aaa0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27aaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27aaa4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27aaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27aaa8: 0x8f8297ec  lw          $v0, -0x6814($gp)
    ctx->pc = 0x27aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27aaac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27AAACu;
    {
        const bool branch_taken_0x27aaac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AAACu;
            // 0x27aab0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aaac) {
            ctx->pc = 0x27AABCu;
            goto label_27aabc;
        }
    }
    ctx->pc = 0x27AAB4u;
    // 0x27aab4: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x27AAB4u;
    {
        const bool branch_taken_0x27aab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AAB4u;
            // 0x27aab8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aab4) {
            ctx->pc = 0x27AC00u;
            goto label_27ac00;
        }
    }
    ctx->pc = 0x27AABCu;
label_27aabc:
    // 0x27aabc: 0x10a20027  beq         $a1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x27AABCu;
    {
        const bool branch_taken_0x27aabc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27AAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AABCu;
            // 0x27aac0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aabc) {
            ctx->pc = 0x27AB5Cu;
            goto label_27ab5c;
        }
    }
    ctx->pc = 0x27AAC4u;
    // 0x27aac4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27aac8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27AAC8u;
    {
        const bool branch_taken_0x27aac8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27AACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AAC8u;
            // 0x27aacc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aac8) {
            ctx->pc = 0x27AAD8u;
            goto label_27aad8;
        }
    }
    ctx->pc = 0x27AAD0u;
    // 0x27aad0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x27AAD0u;
    {
        const bool branch_taken_0x27aad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AAD0u;
            // 0x27aad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aad0) {
            ctx->pc = 0x27AC00u;
            goto label_27ac00;
        }
    }
    ctx->pc = 0x27AAD8u;
label_27aad8:
    // 0x27aad8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27AAD8u;
    SET_GPR_U32(ctx, 31, 0x27AAE0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AAE0u; }
        if (ctx->pc != 0x27AAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AAE0u; }
        if (ctx->pc != 0x27AAE0u) { return; }
    }
    ctx->pc = 0x27AAE0u;
label_27aae0:
    // 0x27aae0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27aae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27aae4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27aae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27aaec: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27AAECu;
    {
        const bool branch_taken_0x27aaec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27AAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AAECu;
            // 0x27aaf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aaec) {
            ctx->pc = 0x27AB2Cu;
            goto label_27ab2c;
        }
    }
    ctx->pc = 0x27AAF4u;
    // 0x27aaf4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27AAF4u;
    {
        const bool branch_taken_0x27aaf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AAF4u;
            // 0x27aaf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aaf4) {
            ctx->pc = 0x27AB04u;
            goto label_27ab04;
        }
    }
    ctx->pc = 0x27AAFCu;
    // 0x27aafc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x27AAFCu;
    {
        const bool branch_taken_0x27aafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AAFCu;
            // 0x27ab00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aafc) {
            ctx->pc = 0x27AB54u;
            goto label_27ab54;
        }
    }
    ctx->pc = 0x27AB04u;
label_27ab04:
    // 0x27ab04: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27AB04u;
    SET_GPR_U32(ctx, 31, 0x27AB0Cu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AB0Cu; }
        if (ctx->pc != 0x27AB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AB0Cu; }
        if (ctx->pc != 0x27AB0Cu) { return; }
    }
    ctx->pc = 0x27AB0Cu;
label_27ab0c:
    // 0x27ab0c: 0x8f8497ec  lw          $a0, -0x6814($gp)
    ctx->pc = 0x27ab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27ab10: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27ab10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27ab14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27ab14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab18: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27ab18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab1c: 0xc0b89c4  jal         func_2E2710
    ctx->pc = 0x27AB1Cu;
    SET_GPR_U32(ctx, 31, 0x27AB24u);
    ctx->pc = 0x27AB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AB1Cu;
            // 0x27ab20: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2710u;
    if (runtime->hasFunction(0x2E2710u)) {
        auto targetFn = runtime->lookupFunction(0x2E2710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AB24u; }
        if (ctx->pc != 0x27AB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFiiii_0x2e2710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AB24u; }
        if (ctx->pc != 0x27AB24u) { return; }
    }
    ctx->pc = 0x27AB24u;
label_27ab24:
    // 0x27ab24: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x27AB24u;
    {
        const bool branch_taken_0x27ab24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ab24) {
            ctx->pc = 0x27AC00u;
            goto label_27ac00;
        }
    }
    ctx->pc = 0x27AB2Cu;
label_27ab2c:
    // 0x27ab2c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x27AB2Cu;
    SET_GPR_U32(ctx, 31, 0x27AB34u);
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AB34u; }
        if (ctx->pc != 0x27AB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AB34u; }
        if (ctx->pc != 0x27AB34u) { return; }
    }
    ctx->pc = 0x27AB34u;
label_27ab34:
    // 0x27ab34: 0x8f8497ec  lw          $a0, -0x6814($gp)
    ctx->pc = 0x27ab34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27ab38: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27ab38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27ab3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27ab3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab40: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x27ab40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab44: 0xc0b89f0  jal         func_2E27C0
    ctx->pc = 0x27AB44u;
    SET_GPR_U32(ctx, 31, 0x27AB4Cu);
    ctx->pc = 0x27AB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AB44u;
            // 0x27ab48: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E27C0u;
    if (runtime->hasFunction(0x2E27C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AB4Cu; }
        if (ctx->pc != 0x27AB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFifii_0x2e27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AB4Cu; }
        if (ctx->pc != 0x27AB4Cu) { return; }
    }
    ctx->pc = 0x27AB4Cu;
label_27ab4c:
    // 0x27ab4c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x27AB4Cu;
    {
        const bool branch_taken_0x27ab4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ab4c) {
            ctx->pc = 0x27AC00u;
            goto label_27ac00;
        }
    }
    ctx->pc = 0x27AB54u;
label_27ab54:
    // 0x27ab54: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x27AB54u;
    {
        const bool branch_taken_0x27ab54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AB54u;
            // 0x27ab58: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ab54) {
            ctx->pc = 0x27AC04u;
            goto label_27ac04;
        }
    }
    ctx->pc = 0x27AB5Cu;
label_27ab5c:
    // 0x27ab5c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27AB5Cu;
    SET_GPR_U32(ctx, 31, 0x27AB64u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AB64u; }
        if (ctx->pc != 0x27AB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AB64u; }
        if (ctx->pc != 0x27AB64u) { return; }
    }
    ctx->pc = 0x27AB64u;
label_27ab64:
    // 0x27ab64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ab64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27ab68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab6c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27AB6Cu;
    SET_GPR_U32(ctx, 31, 0x27AB74u);
    ctx->pc = 0x27AB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AB6Cu;
            // 0x27ab70: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AB74u; }
        if (ctx->pc != 0x27AB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AB74u; }
        if (ctx->pc != 0x27AB74u) { return; }
    }
    ctx->pc = 0x27AB74u;
label_27ab74:
    // 0x27ab74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ab74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27ab78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab7c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27AB7Cu;
    SET_GPR_U32(ctx, 31, 0x27AB84u);
    ctx->pc = 0x27AB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AB7Cu;
            // 0x27ab80: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AB84u; }
        if (ctx->pc != 0x27AB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AB84u; }
        if (ctx->pc != 0x27AB84u) { return; }
    }
    ctx->pc = 0x27AB84u;
label_27ab84:
    // 0x27ab84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27ab84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27ab88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27ab88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ab90: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27AB90u;
    {
        const bool branch_taken_0x27ab90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27AB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AB90u;
            // 0x27ab94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ab90) {
            ctx->pc = 0x27ABD0u;
            goto label_27abd0;
        }
    }
    ctx->pc = 0x27AB98u;
    // 0x27ab98: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27AB98u;
    {
        const bool branch_taken_0x27ab98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AB98u;
            // 0x27ab9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ab98) {
            ctx->pc = 0x27ABA8u;
            goto label_27aba8;
        }
    }
    ctx->pc = 0x27ABA0u;
    // 0x27aba0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x27ABA0u;
    {
        const bool branch_taken_0x27aba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ABA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ABA0u;
            // 0x27aba4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aba0) {
            ctx->pc = 0x27ABF8u;
            goto label_27abf8;
        }
    }
    ctx->pc = 0x27ABA8u;
label_27aba8:
    // 0x27aba8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27ABA8u;
    SET_GPR_U32(ctx, 31, 0x27ABB0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ABB0u; }
        if (ctx->pc != 0x27ABB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ABB0u; }
        if (ctx->pc != 0x27ABB0u) { return; }
    }
    ctx->pc = 0x27ABB0u;
label_27abb0:
    // 0x27abb0: 0x8f8497ec  lw          $a0, -0x6814($gp)
    ctx->pc = 0x27abb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27abb4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27abb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27abb8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x27abb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27abbc: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x27abbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27abc0: 0xc0b89c4  jal         func_2E2710
    ctx->pc = 0x27ABC0u;
    SET_GPR_U32(ctx, 31, 0x27ABC8u);
    ctx->pc = 0x27ABC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ABC0u;
            // 0x27abc4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2710u;
    if (runtime->hasFunction(0x2E2710u)) {
        auto targetFn = runtime->lookupFunction(0x2E2710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ABC8u; }
        if (ctx->pc != 0x27ABC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFiiii_0x2e2710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ABC8u; }
        if (ctx->pc != 0x27ABC8u) { return; }
    }
    ctx->pc = 0x27ABC8u;
label_27abc8:
    // 0x27abc8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x27ABC8u;
    {
        const bool branch_taken_0x27abc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27abc8) {
            ctx->pc = 0x27AC00u;
            goto label_27ac00;
        }
    }
    ctx->pc = 0x27ABD0u;
label_27abd0:
    // 0x27abd0: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x27ABD0u;
    SET_GPR_U32(ctx, 31, 0x27ABD8u);
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ABD8u; }
        if (ctx->pc != 0x27ABD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ABD8u; }
        if (ctx->pc != 0x27ABD8u) { return; }
    }
    ctx->pc = 0x27ABD8u;
label_27abd8:
    // 0x27abd8: 0x8f8497ec  lw          $a0, -0x6814($gp)
    ctx->pc = 0x27abd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27abdc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27abdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27abe0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x27abe0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x27abe4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27abe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27abe8: 0xc0b89f0  jal         func_2E27C0
    ctx->pc = 0x27ABE8u;
    SET_GPR_U32(ctx, 31, 0x27ABF0u);
    ctx->pc = 0x27ABECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ABE8u;
            // 0x27abec: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E27C0u;
    if (runtime->hasFunction(0x2E27C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ABF0u; }
        if (ctx->pc != 0x27ABF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFifii_0x2e27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ABF0u; }
        if (ctx->pc != 0x27ABF0u) { return; }
    }
    ctx->pc = 0x27ABF0u;
label_27abf0:
    // 0x27abf0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27ABF0u;
    {
        const bool branch_taken_0x27abf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27abf0) {
            ctx->pc = 0x27AC00u;
            goto label_27ac00;
        }
    }
    ctx->pc = 0x27ABF8u;
label_27abf8:
    // 0x27abf8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x27ABF8u;
    {
        const bool branch_taken_0x27abf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27abf8) {
            ctx->pc = 0x27AC00u;
            goto label_27ac00;
        }
    }
    ctx->pc = 0x27AC00u;
label_27ac00:
    // 0x27ac00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27ac00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_27ac04:
    // 0x27ac04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27ac04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27ac08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27ac08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ac0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27ac0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ac10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ac10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ac14: 0x3e00008  jr          $ra
    ctx->pc = 0x27AC14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AC14u;
            // 0x27ac18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27AC1Cu;
}
