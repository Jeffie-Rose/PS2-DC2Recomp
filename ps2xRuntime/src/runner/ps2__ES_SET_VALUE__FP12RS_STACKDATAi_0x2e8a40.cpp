#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ES_SET_VALUE__FP12RS_STACKDATAi
// Address: 0x2e8a40 - 0x2e8b3c
void ps2__ES_SET_VALUE__FP12RS_STACKDATAi_0x2e8a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ES_SET_VALUE__FP12RS_STACKDATAi_0x2e8a40");
#endif

    switch (ctx->pc) {
        case 0x2e8a80u: goto label_2e8a80;
        case 0x2e8a9cu: goto label_2e8a9c;
        case 0x2e8ac8u: goto label_2e8ac8;
        case 0x2e8ae4u: goto label_2e8ae4;
        case 0x2e8af4u: goto label_2e8af4;
        case 0x2e8b10u: goto label_2e8b10;
        default: break;
    }

    ctx->pc = 0x2e8a40u;

    // 0x2e8a40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e8a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e8a44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e8a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e8a48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e8a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e8a4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e8a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e8a50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e8a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e8a54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e8a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e8a58: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2e8a58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e8a5c: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8A5Cu;
    {
        const bool branch_taken_0x2e8a5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8A5Cu;
            // 0x2e8a60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a5c) {
            ctx->pc = 0x2E8A78u;
            goto label_2e8a78;
        }
    }
    ctx->pc = 0x2E8A64u;
    // 0x2e8a64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e8a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e8a68: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E8A68u;
    {
        const bool branch_taken_0x2e8a68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8A68u;
            // 0x2e8a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a68) {
            ctx->pc = 0x2E8A94u;
            goto label_2e8a94;
        }
    }
    ctx->pc = 0x2E8A70u;
    // 0x2e8a70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8A70u;
    {
        const bool branch_taken_0x2e8a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8A70u;
            // 0x2e8a74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a70) {
            ctx->pc = 0x2E8A88u;
            goto label_2e8a88;
        }
    }
    ctx->pc = 0x2E8A78u;
label_2e8a78:
    // 0x2e8a78: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E8A78u;
    SET_GPR_U32(ctx, 31, 0x2E8A80u);
    ctx->pc = 0x2E8A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8A78u;
            // 0x2e8a7c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8A80u; }
        if (ctx->pc != 0x2E8A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8A80u; }
        if (ctx->pc != 0x2E8A80u) { return; }
    }
    ctx->pc = 0x2E8A80u;
label_2e8a80:
    // 0x2e8a80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8A80u;
    {
        const bool branch_taken_0x2e8a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8A80u;
            // 0x2e8a84: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a80) {
            ctx->pc = 0x2E8A90u;
            goto label_2e8a90;
        }
    }
    ctx->pc = 0x2E8A88u;
label_2e8a88:
    // 0x2e8a88: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2E8A88u;
    {
        const bool branch_taken_0x2e8a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8A88u;
            // 0x2e8a8c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a88) {
            ctx->pc = 0x2E8B28u;
            goto label_2e8b28;
        }
    }
    ctx->pc = 0x2E8A90u;
label_2e8a90:
    // 0x2e8a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e8a94:
    // 0x2e8a94: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E8A94u;
    SET_GPR_U32(ctx, 31, 0x2E8A9Cu);
    ctx->pc = 0x2E8A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8A94u;
            // 0x2e8a98: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8A9Cu; }
        if (ctx->pc != 0x2E8A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8A9Cu; }
        if (ctx->pc != 0x2E8A9Cu) { return; }
    }
    ctx->pc = 0x2E8A9Cu;
label_2e8a9c:
    // 0x2e8a9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e8a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e8aa0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e8aa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8aa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8aa8: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E8AA8u;
    {
        const bool branch_taken_0x2e8aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8AA8u;
            // 0x2e8aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8aa8) {
            ctx->pc = 0x2E8AECu;
            goto label_2e8aec;
        }
    }
    ctx->pc = 0x2E8AB0u;
    // 0x2e8ab0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8AB0u;
    {
        const bool branch_taken_0x2e8ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8AB0u;
            // 0x2e8ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ab0) {
            ctx->pc = 0x2E8AC0u;
            goto label_2e8ac0;
        }
    }
    ctx->pc = 0x2E8AB8u;
    // 0x2e8ab8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E8AB8u;
    {
        const bool branch_taken_0x2e8ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8AB8u;
            // 0x2e8abc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ab8) {
            ctx->pc = 0x2E8B18u;
            goto label_2e8b18;
        }
    }
    ctx->pc = 0x2E8AC0u;
label_2e8ac0:
    // 0x2e8ac0: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E8AC0u;
    SET_GPR_U32(ctx, 31, 0x2E8AC8u);
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8AC8u; }
        if (ctx->pc != 0x2E8AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8AC8u; }
        if (ctx->pc != 0x2E8AC8u) { return; }
    }
    ctx->pc = 0x2E8AC8u;
label_2e8ac8:
    // 0x2e8ac8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e8ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8acc: 0x8f849ecc  lw          $a0, -0x6134($gp)
    ctx->pc = 0x2e8accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942412)));
    // 0x2e8ad0: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e8ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e8ad4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e8ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8ad8: 0x8c4700a8  lw          $a3, 0xA8($v0)
    ctx->pc = 0x2e8ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2e8adc: 0xc0b89c4  jal         func_2E2710
    ctx->pc = 0x2E8ADCu;
    SET_GPR_U32(ctx, 31, 0x2E8AE4u);
    ctx->pc = 0x2E8AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8ADCu;
            // 0x2e8ae0: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2710u;
    if (runtime->hasFunction(0x2E2710u)) {
        auto targetFn = runtime->lookupFunction(0x2E2710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8AE4u; }
        if (ctx->pc != 0x2E8AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFiiii_0x2e2710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8AE4u; }
        if (ctx->pc != 0x2E8AE4u) { return; }
    }
    ctx->pc = 0x2E8AE4u;
label_2e8ae4:
    // 0x2e8ae4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E8AE4u;
    {
        const bool branch_taken_0x2e8ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8AE4u;
            // 0x2e8ae8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ae4) {
            ctx->pc = 0x2E8B24u;
            goto label_2e8b24;
        }
    }
    ctx->pc = 0x2E8AECu;
label_2e8aec:
    // 0x2e8aec: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E8AECu;
    SET_GPR_U32(ctx, 31, 0x2E8AF4u);
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8AF4u; }
        if (ctx->pc != 0x2E8AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8AF4u; }
        if (ctx->pc != 0x2E8AF4u) { return; }
    }
    ctx->pc = 0x2E8AF4u;
label_2e8af4:
    // 0x2e8af4: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e8af8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e8af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8afc: 0x8f849ecc  lw          $a0, -0x6134($gp)
    ctx->pc = 0x2e8afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942412)));
    // 0x2e8b00: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e8b00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2e8b04: 0x8c4600a8  lw          $a2, 0xA8($v0)
    ctx->pc = 0x2e8b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2e8b08: 0xc0b89f0  jal         func_2E27C0
    ctx->pc = 0x2E8B08u;
    SET_GPR_U32(ctx, 31, 0x2E8B10u);
    ctx->pc = 0x2E8B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8B08u;
            // 0x2e8b0c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E27C0u;
    if (runtime->hasFunction(0x2E27C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8B10u; }
        if (ctx->pc != 0x2E8B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFifii_0x2e27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8B10u; }
        if (ctx->pc != 0x2E8B10u) { return; }
    }
    ctx->pc = 0x2E8B10u;
label_2e8b10:
    // 0x2e8b10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8B10u;
    {
        const bool branch_taken_0x2e8b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8b10) {
            ctx->pc = 0x2E8B20u;
            goto label_2e8b20;
        }
    }
    ctx->pc = 0x2E8B18u;
label_2e8b18:
    // 0x2e8b18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E8B18u;
    {
        const bool branch_taken_0x2e8b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8b18) {
            ctx->pc = 0x2E8B24u;
            goto label_2e8b24;
        }
    }
    ctx->pc = 0x2E8B20u;
label_2e8b20:
    // 0x2e8b20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8b24:
    // 0x2e8b24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e8b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e8b28:
    // 0x2e8b28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e8b28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8b2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e8b2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8b30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e8b30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8b34: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8B34u;
            // 0x2e8b38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8B3Cu;
}
