#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SW_EFFECT__FP12RS_STACKDATAi
// Address: 0x1e6d60 - 0x1e6ee4
void ps2__SW_EFFECT__FP12RS_STACKDATAi_0x1e6d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SW_EFFECT__FP12RS_STACKDATAi_0x1e6d60");
#endif

    switch (ctx->pc) {
        case 0x1e6da8u: goto label_1e6da8;
        case 0x1e6dc4u: goto label_1e6dc4;
        case 0x1e6e0cu: goto label_1e6e0c;
        case 0x1e6e1cu: goto label_1e6e1c;
        case 0x1e6e2cu: goto label_1e6e2c;
        case 0x1e6e3cu: goto label_1e6e3c;
        case 0x1e6e4cu: goto label_1e6e4c;
        case 0x1e6e5cu: goto label_1e6e5c;
        case 0x1e6e6cu: goto label_1e6e6c;
        case 0x1e6e78u: goto label_1e6e78;
        default: break;
    }

    ctx->pc = 0x1e6d60u;

    // 0x1e6d60: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e6d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e6d64: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1e6d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1e6d68: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1e6d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1e6d6c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1e6d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1e6d70: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1e6d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1e6d74: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e6d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e6d78: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e6d78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d7c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e6d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e6d80: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e6d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e6d84: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e6d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e6d88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e6d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e6d8c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1e6d8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e6d90: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6D90u;
    {
        const bool branch_taken_0x1e6d90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6D90u;
            // 0x1e6d94: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d90) {
            ctx->pc = 0x1E6DA0u;
            goto label_1e6da0;
        }
    }
    ctx->pc = 0x1E6D98u;
    // 0x1e6d98: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1E6D98u;
    {
        const bool branch_taken_0x1e6d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6D98u;
            // 0x1e6d9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d98) {
            ctx->pc = 0x1E6EB4u;
            goto label_1e6eb4;
        }
    }
    ctx->pc = 0x1E6DA0u;
label_1e6da0:
    // 0x1e6da0: 0xc05aa8c  jal         func_16AA30
    ctx->pc = 0x1E6DA0u;
    SET_GPR_U32(ctx, 31, 0x1E6DA8u);
    ctx->pc = 0x1E6DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DA0u;
            // 0x1e6da4: 0x8f848e70  lw          $a0, -0x7190($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AA30u;
    if (runtime->hasFunction(0x16AA30u)) {
        auto targetFn = runtime->lookupFunction(0x16AA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6DA8u; }
        if (ctx->pc != 0x1E6DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSwEffectPtr__12CActionCharaFv_0x16aa30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6DA8u; }
        if (ctx->pc != 0x1E6DA8u) { return; }
    }
    ctx->pc = 0x1E6DA8u;
label_1e6da8:
    // 0x1e6da8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e6da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6dac: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6DACu;
    {
        const bool branch_taken_0x1e6dac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DACu;
            // 0x1e6db0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6dac) {
            ctx->pc = 0x1E6DBCu;
            goto label_1e6dbc;
        }
    }
    ctx->pc = 0x1E6DB4u;
    // 0x1e6db4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1E6DB4u;
    {
        const bool branch_taken_0x1e6db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DB4u;
            // 0x1e6db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6db4) {
            ctx->pc = 0x1E6EB4u;
            goto label_1e6eb4;
        }
    }
    ctx->pc = 0x1E6DBCu;
label_1e6dbc:
    // 0x1e6dbc: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E6DBCu;
    SET_GPR_U32(ctx, 31, 0x1E6DC4u);
    ctx->pc = 0x1E6DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DBCu;
            // 0x1e6dc0: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6DC4u; }
        if (ctx->pc != 0x1E6DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6DC4u; }
        if (ctx->pc != 0x1E6DC4u) { return; }
    }
    ctx->pc = 0x1E6DC4u;
label_1e6dc4:
    // 0x1e6dc4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e6dc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6dc8: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6DC8u;
    {
        const bool branch_taken_0x1e6dc8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1E6DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DC8u;
            // 0x1e6dcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6dc8) {
            ctx->pc = 0x1E6DDCu;
            goto label_1e6ddc;
        }
    }
    ctx->pc = 0x1E6DD0u;
    // 0x1e6dd0: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x1e6dd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e6dd4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6DD4u;
    {
        const bool branch_taken_0x1e6dd4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6dd4) {
            ctx->pc = 0x1E6DE4u;
            goto label_1e6de4;
        }
    }
    ctx->pc = 0x1E6DDCu;
label_1e6ddc:
    // 0x1e6ddc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1E6DDCu;
    {
        const bool branch_taken_0x1e6ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DDCu;
            // 0x1e6de0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6ddc) {
            ctx->pc = 0x1E6EB8u;
            goto label_1e6eb8;
        }
    }
    ctx->pc = 0x1E6DE4u;
label_1e6de4:
    // 0x1e6de4: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e6de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e6de8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1e6de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e6dec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e6decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e6df0: 0x8c420570  lw          $v0, 0x570($v0)
    ctx->pc = 0x1e6df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1392)));
    // 0x1e6df4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6DF4u;
    {
        const bool branch_taken_0x1e6df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DF4u;
            // 0x1e6df8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6df4) {
            ctx->pc = 0x1E6E04u;
            goto label_1e6e04;
        }
    }
    ctx->pc = 0x1E6DFCu;
    // 0x1e6dfc: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1E6DFCu;
    {
        const bool branch_taken_0x1e6dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DFCu;
            // 0x1e6e00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6dfc) {
            ctx->pc = 0x1E6EB4u;
            goto label_1e6eb4;
        }
    }
    ctx->pc = 0x1E6E04u;
label_1e6e04:
    // 0x1e6e04: 0xc0781b8  jal         func_1E06E0
    ctx->pc = 0x1E6E04u;
    SET_GPR_U32(ctx, 31, 0x1E6E0Cu);
    ctx->pc = 0x1E6E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E04u;
            // 0x1e6e08: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06E0u;
    if (runtime->hasFunction(0x1E06E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E0Cu; }
        if (ctx->pc != 0x1E6E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x1e06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E0Cu; }
        if (ctx->pc != 0x1E6E0Cu) { return; }
    }
    ctx->pc = 0x1E6E0Cu;
label_1e6e0c:
    // 0x1e6e0c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e6e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6e10: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1e6e10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6e14: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E6E14u;
    SET_GPR_U32(ctx, 31, 0x1E6E1Cu);
    ctx->pc = 0x1E6E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E14u;
            // 0x1e6e18: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E1Cu; }
        if (ctx->pc != 0x1E6E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E1Cu; }
        if (ctx->pc != 0x1E6E1Cu) { return; }
    }
    ctx->pc = 0x1E6E1Cu;
label_1e6e1c:
    // 0x1e6e1c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e6e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6e20: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e6e20u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1e6e24: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E6E24u;
    SET_GPR_U32(ctx, 31, 0x1E6E2Cu);
    ctx->pc = 0x1E6E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E24u;
            // 0x1e6e28: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E2Cu; }
        if (ctx->pc != 0x1E6E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E2Cu; }
        if (ctx->pc != 0x1E6E2Cu) { return; }
    }
    ctx->pc = 0x1E6E2Cu;
label_1e6e2c:
    // 0x1e6e2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e6e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6e30: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1e6e30u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1e6e34: 0xc0781b8  jal         func_1E06E0
    ctx->pc = 0x1E6E34u;
    SET_GPR_U32(ctx, 31, 0x1E6E3Cu);
    ctx->pc = 0x1E6E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E34u;
            // 0x1e6e38: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06E0u;
    if (runtime->hasFunction(0x1E06E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E3Cu; }
        if (ctx->pc != 0x1E6E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x1e06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E3Cu; }
        if (ctx->pc != 0x1E6E3Cu) { return; }
    }
    ctx->pc = 0x1E6E3Cu;
label_1e6e3c:
    // 0x1e6e3c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e6e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6e40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e6e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6e44: 0xc0781b8  jal         func_1E06E0
    ctx->pc = 0x1E6E44u;
    SET_GPR_U32(ctx, 31, 0x1E6E4Cu);
    ctx->pc = 0x1E6E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E44u;
            // 0x1e6e48: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06E0u;
    if (runtime->hasFunction(0x1E06E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E4Cu; }
        if (ctx->pc != 0x1E6E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x1e06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E4Cu; }
        if (ctx->pc != 0x1E6E4Cu) { return; }
    }
    ctx->pc = 0x1E6E4Cu;
label_1e6e4c:
    // 0x1e6e4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e6e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6e50: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1e6e50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6e54: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E6E54u;
    SET_GPR_U32(ctx, 31, 0x1E6E5Cu);
    ctx->pc = 0x1E6E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E54u;
            // 0x1e6e58: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E5Cu; }
        if (ctx->pc != 0x1E6E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E5Cu; }
        if (ctx->pc != 0x1E6E5Cu) { return; }
    }
    ctx->pc = 0x1E6E5Cu;
label_1e6e5c:
    // 0x1e6e5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e6e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6e60: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1e6e60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6e64: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E6E64u;
    SET_GPR_U32(ctx, 31, 0x1E6E6Cu);
    ctx->pc = 0x1E6E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E64u;
            // 0x1e6e68: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E6Cu; }
        if (ctx->pc != 0x1E6E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E6Cu; }
        if (ctx->pc != 0x1E6E6Cu) { return; }
    }
    ctx->pc = 0x1E6E6Cu;
label_1e6e6c:
    // 0x1e6e6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e6e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6e70: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E6E70u;
    SET_GPR_U32(ctx, 31, 0x1E6E78u);
    ctx->pc = 0x1E6E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E70u;
            // 0x1e6e74: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E78u; }
        if (ctx->pc != 0x1E6E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E78u; }
        if (ctx->pc != 0x1E6E78u) { return; }
    }
    ctx->pc = 0x1E6E78u;
label_1e6e78:
    // 0x1e6e78: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x1e6e78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x1e6e7c: 0xae160008  sw          $s6, 0x8($s0)
    ctx->pc = 0x1e6e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 22));
    // 0x1e6e80: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1e6e80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1e6e84: 0xe6150010  swc1        $f21, 0x10($s0)
    ctx->pc = 0x1e6e84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1e6e88: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x1e6e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x1e6e8c: 0xae130018  sw          $s3, 0x18($s0)
    ctx->pc = 0x1e6e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
    // 0x1e6e90: 0xa214001c  sb          $s4, 0x1C($s0)
    ctx->pc = 0x1e6e90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 20));
    // 0x1e6e94: 0xa215001d  sb          $s5, 0x1D($s0)
    ctx->pc = 0x1e6e94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 21));
    // 0x1e6e98: 0xa202001e  sb          $v0, 0x1E($s0)
    ctx->pc = 0x1e6e98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 30), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e6e9c: 0xa200001f  sb          $zero, 0x1F($s0)
    ctx->pc = 0x1e6e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e6ea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6ea4: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e6ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e6ea8: 0x80830904  lb          $v1, 0x904($a0)
    ctx->pc = 0x1e6ea8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2308)));
    // 0x1e6eac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e6eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e6eb0: 0xa0830904  sb          $v1, 0x904($a0)
    ctx->pc = 0x1e6eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2308), (uint8_t)GPR_U32(ctx, 3));
label_1e6eb4:
    // 0x1e6eb4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1e6eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1e6eb8:
    // 0x1e6eb8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1e6eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e6ebc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1e6ebcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e6ec0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e6ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e6ec4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1e6ec4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e6ec8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e6ec8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e6ecc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e6eccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e6ed0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e6ed0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e6ed4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e6ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6ed8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e6ed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6edc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6EDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6EDCu;
            // 0x1e6ee0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6EE4u;
}
