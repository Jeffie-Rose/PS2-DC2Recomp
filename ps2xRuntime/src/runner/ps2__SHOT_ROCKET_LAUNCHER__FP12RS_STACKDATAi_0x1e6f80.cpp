#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SHOT_ROCKET_LAUNCHER__FP12RS_STACKDATAi
// Address: 0x1e6f80 - 0x1e7150
void ps2__SHOT_ROCKET_LAUNCHER__FP12RS_STACKDATAi_0x1e6f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SHOT_ROCKET_LAUNCHER__FP12RS_STACKDATAi_0x1e6f80");
#endif

    switch (ctx->pc) {
        case 0x1e6fccu: goto label_1e6fcc;
        case 0x1e6fd4u: goto label_1e6fd4;
        case 0x1e6ff0u: goto label_1e6ff0;
        case 0x1e7004u: goto label_1e7004;
        case 0x1e7018u: goto label_1e7018;
        case 0x1e702cu: goto label_1e702c;
        case 0x1e7058u: goto label_1e7058;
        case 0x1e706cu: goto label_1e706c;
        case 0x1e707cu: goto label_1e707c;
        case 0x1e70a0u: goto label_1e70a0;
        case 0x1e70c0u: goto label_1e70c0;
        case 0x1e70dcu: goto label_1e70dc;
        case 0x1e70fcu: goto label_1e70fc;
        case 0x1e7110u: goto label_1e7110;
        default: break;
    }

    ctx->pc = 0x1e6f80u;

    // 0x1e6f80: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e6f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e6f84: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1e6f84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6f88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e6f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1e6f8c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1e6f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e6f90: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e6f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e6f94: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e6f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e6f98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e6f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e6f9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e6f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e6fa0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e6fa0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e6fa4: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6FA4u;
    {
        const bool branch_taken_0x1e6fa4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6FA4u;
            // 0x1e6fa8: 0xafa4006c  sw          $a0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6fa4) {
            ctx->pc = 0x1E6FC0u;
            goto label_1e6fc0;
        }
    }
    ctx->pc = 0x1E6FACu;
    // 0x1e6fac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1e6facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e6fb0: 0x10e20004  beq         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6FB0u;
    {
        const bool branch_taken_0x1e6fb0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6FB0u;
            // 0x1e6fb4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6fb0) {
            ctx->pc = 0x1E6FC4u;
            goto label_1e6fc4;
        }
    }
    ctx->pc = 0x1E6FB8u;
    // 0x1e6fb8: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x1E6FB8u;
    {
        const bool branch_taken_0x1e6fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6FB8u;
            // 0x1e6fbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6fb8) {
            ctx->pc = 0x1E7130u;
            goto label_1e7130;
        }
    }
    ctx->pc = 0x1E6FC0u;
label_1e6fc0:
    // 0x1e6fc0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1e6fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e6fc4:
    // 0x1e6fc4: 0xc0781cc  jal         func_1E0730
    ctx->pc = 0x1E6FC4u;
    SET_GPR_U32(ctx, 31, 0x1E6FCCu);
    ctx->pc = 0x1E6FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6FC4u;
            // 0x1e6fc8: 0x27a5006c  addiu       $a1, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0730u;
    if (runtime->hasFunction(0x1E0730u)) {
        auto targetFn = runtime->lookupFunction(0x1E0730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6FCCu; }
        if (ctx->pc != 0x1E6FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfPP12RS_STACKDATA_0x1e0730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6FCCu; }
        if (ctx->pc != 0x1E6FCCu) { return; }
    }
    ctx->pc = 0x1E6FCCu;
label_1e6fcc:
    // 0x1e6fcc: 0xc0781cc  jal         func_1E0730
    ctx->pc = 0x1E6FCCu;
    SET_GPR_U32(ctx, 31, 0x1E6FD4u);
    ctx->pc = 0x1E6FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6FCCu;
            // 0x1e6fd0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0730u;
    if (runtime->hasFunction(0x1E0730u)) {
        auto targetFn = runtime->lookupFunction(0x1E0730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6FD4u; }
        if (ctx->pc != 0x1E6FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfPP12RS_STACKDATA_0x1e0730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6FD4u; }
        if (ctx->pc != 0x1E6FD4u) { return; }
    }
    ctx->pc = 0x1E6FD4u;
label_1e6fd4:
    // 0x1e6fd4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1e6fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e6fd8: 0x14e20016  bne         $a3, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E6FD8u;
    {
        const bool branch_taken_0x1e6fd8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E6FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6FD8u;
            // 0x1e6fdc: 0x3c024140  lui         $v0, 0x4140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6fd8) {
            ctx->pc = 0x1E7034u;
            goto label_1e7034;
        }
    }
    ctx->pc = 0x1E6FE0u;
    // 0x1e6fe0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1e6fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1e6fe4: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x1e6fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e6fe8: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E6FE8u;
    SET_GPR_U32(ctx, 31, 0x1E6FF0u);
    ctx->pc = 0x1E6FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6FE8u;
            // 0x1e6fec: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6FF0u; }
        if (ctx->pc != 0x1E6FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6FF0u; }
        if (ctx->pc != 0x1E6FF0u) { return; }
    }
    ctx->pc = 0x1E6FF0u;
label_1e6ff0:
    // 0x1e6ff0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1e6ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1e6ff4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e6ff4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1e6ff8: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x1e6ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e6ffc: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E6FFCu;
    SET_GPR_U32(ctx, 31, 0x1E7004u);
    ctx->pc = 0x1E7000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6FFCu;
            // 0x1e7000: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7004u; }
        if (ctx->pc != 0x1E7004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7004u; }
        if (ctx->pc != 0x1E7004u) { return; }
    }
    ctx->pc = 0x1E7004u;
label_1e7004:
    // 0x1e7004: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1e7004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1e7008: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e7008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e700c: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x1e700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e7010: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E7010u;
    SET_GPR_U32(ctx, 31, 0x1E7018u);
    ctx->pc = 0x1E7014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7010u;
            // 0x1e7014: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7018u; }
        if (ctx->pc != 0x1E7018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7018u; }
        if (ctx->pc != 0x1E7018u) { return; }
    }
    ctx->pc = 0x1E7018u;
label_1e7018:
    // 0x1e7018: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1e7018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1e701c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e701cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7020: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x1e7020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e7024: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E7024u;
    SET_GPR_U32(ctx, 31, 0x1E702Cu);
    ctx->pc = 0x1E7028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7024u;
            // 0x1e7028: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E702Cu; }
        if (ctx->pc != 0x1E702Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E702Cu; }
        if (ctx->pc != 0x1E702Cu) { return; }
    }
    ctx->pc = 0x1E702Cu;
label_1e702c:
    // 0x1e702c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E702Cu;
    {
        const bool branch_taken_0x1e702c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E702Cu;
            // 0x1e7030: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e702c) {
            ctx->pc = 0x1E704Cu;
            goto label_1e704c;
        }
    }
    ctx->pc = 0x1E7034u;
label_1e7034:
    // 0x1e7034: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x1e7034u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e7038: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1e7038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1e703c: 0x2412002d  addiu       $s2, $zero, 0x2D
    ctx->pc = 0x1e703cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1e7040: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e7040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e7044: 0x94501318  lhu         $s0, 0x1318($v0)
    ctx->pc = 0x1e7044u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4888)));
    // 0x1e7048: 0x0  nop
    ctx->pc = 0x1e7048u;
    // NOP
label_1e704c:
    // 0x1e704c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1e704cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e7050: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1E7050u;
    SET_GPR_U32(ctx, 31, 0x1E7058u);
    ctx->pc = 0x1E7054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7050u;
            // 0x1e7054: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7058u; }
        if (ctx->pc != 0x1E7058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7058u; }
        if (ctx->pc != 0x1E7058u) { return; }
    }
    ctx->pc = 0x1E7058u;
label_1e7058:
    // 0x1e7058: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1e7058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1e705c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e705cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e7060: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e7060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e7064: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1E7064u;
    SET_GPR_U32(ctx, 31, 0x1E706Cu);
    ctx->pc = 0x1E7068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7064u;
            // 0x1e7068: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E706Cu; }
        if (ctx->pc != 0x1E706Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E706Cu; }
        if (ctx->pc != 0x1E706Cu) { return; }
    }
    ctx->pc = 0x1E706Cu;
label_1e706c:
    // 0x1e706c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e706cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e7070: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1e7070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e7074: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1E7074u;
    SET_GPR_U32(ctx, 31, 0x1E707Cu);
    ctx->pc = 0x1E7078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7074u;
            // 0x1e7078: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E707Cu; }
        if (ctx->pc != 0x1E707Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E707Cu; }
        if (ctx->pc != 0x1E707Cu) { return; }
    }
    ctx->pc = 0x1E707Cu;
label_1e707c:
    // 0x1e707c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1e707cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7080: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1e7080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1e7084: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e7084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1e7088: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1e7088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
    // 0x1e708c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e708cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e7090: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x1e7090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x1e7094: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e7094u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e7098: 0xc06da08  jal         func_1B6820
    ctx->pc = 0x1E7098u;
    SET_GPR_U32(ctx, 31, 0x1E70A0u);
    ctx->pc = 0x1E709Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7098u;
            // 0x1e709c: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6820u;
    if (runtime->hasFunction(0x1B6820u)) {
        auto targetFn = runtime->lookupFunction(0x1B6820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E70A0u; }
        if (ctx->pc != 0x1E70A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__18CRocketLauncherManFv_0x1b6820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E70A0u; }
        if (ctx->pc != 0x1E70A0u) { return; }
    }
    ctx->pc = 0x1E70A0u;
label_1e70a0:
    // 0x1e70a0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1e70a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e70a4: 0x1260001f  beqz        $s3, . + 4 + (0x1F << 2)
    ctx->pc = 0x1E70A4u;
    {
        const bool branch_taken_0x1e70a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E70A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E70A4u;
            // 0x1e70a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e70a4) {
            ctx->pc = 0x1E7124u;
            goto label_1e7124;
        }
    }
    ctx->pc = 0x1E70ACu;
    // 0x1e70ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e70acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e70b0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1e70b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e70b4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1e70b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e70b8: 0xc06d7f4  jal         func_1B5FD0
    ctx->pc = 0x1E70B8u;
    SET_GPR_U32(ctx, 31, 0x1E70C0u);
    ctx->pc = 0x1E70BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E70B8u;
            // 0x1e70bc: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5FD0u;
    if (runtime->hasFunction(0x1B5FD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E70C0u; }
        if (ctx->pc != 0x1E70C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__15CRocketLauncherFPfPfPf_0x1b5fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E70C0u; }
        if (ctx->pc != 0x1E70C0u) { return; }
    }
    ctx->pc = 0x1E70C0u;
label_1e70c0:
    // 0x1e70c0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1e70c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1e70c4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1e70c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1e70c8: 0xe674015c  swc1        $f20, 0x15C($s3)
    ctx->pc = 0x1e70c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 348), bits); }
    // 0x1e70cc: 0x24840710  addiu       $a0, $a0, 0x710
    ctx->pc = 0x1e70ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
    // 0x1e70d0: 0xae710168  sw          $s1, 0x168($s3)
    ctx->pc = 0x1e70d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 360), GPR_U32(ctx, 17));
    // 0x1e70d4: 0xc06e9c0  jal         func_1BA700
    ctx->pc = 0x1E70D4u;
    SET_GPR_U32(ctx, 31, 0x1E70DCu);
    ctx->pc = 0x1E70D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E70D4u;
            // 0x1e70d8: 0xae72016c  sw          $s2, 0x16C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 364), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA700u;
    if (runtime->hasFunction(0x1BA700u)) {
        auto targetFn = runtime->lookupFunction(0x1BA700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E70DCu; }
        if (ctx->pc != 0x1E70DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPrim__11CColPrimManFv_0x1ba700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E70DCu; }
        if (ctx->pc != 0x1E70DCu) { return; }
    }
    ctx->pc = 0x1E70DCu;
label_1e70dc:
    // 0x1e70dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e70dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e70e0: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E70E0u;
    {
        const bool branch_taken_0x1e70e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E70E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E70E0u;
            // 0x1e70e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e70e0) {
            ctx->pc = 0x1E711Cu;
            goto label_1e711c;
        }
    }
    ctx->pc = 0x1E70E8u;
    // 0x1e70e8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e70e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e70ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e70ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e70f0: 0x24a58088  addiu       $a1, $a1, -0x7F78
    ctx->pc = 0x1e70f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934664));
    // 0x1e70f4: 0xc06e718  jal         func_1B9C60
    ctx->pc = 0x1E70F4u;
    SET_GPR_U32(ctx, 31, 0x1E70FCu);
    ctx->pc = 0x1E70F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E70F4u;
            // 0x1e70f8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9C60u;
    if (runtime->hasFunction(0x1B9C60u)) {
        auto targetFn = runtime->lookupFunction(0x1B9C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E70FCu; }
        if (ctx->pc != 0x1E70FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamage__8CColPrimFPci_0x1b9c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E70FCu; }
        if (ctx->pc != 0x1E70FCu) { return; }
    }
    ctx->pc = 0x1E70FCu;
label_1e70fc:
    // 0x1e70fc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1e70fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1e7100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7104: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e7104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e7108: 0xc06e760  jal         func_1B9D80
    ctx->pc = 0x1E7108u;
    SET_GPR_U32(ctx, 31, 0x1E7110u);
    ctx->pc = 0x1E710Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7108u;
            // 0x1e710c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D80u;
    if (runtime->hasFunction(0x1B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x1B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7110u; }
        if (ctx->pc != 0x1E7110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCoord__8CColPrimFPff_0x1b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7110u; }
        if (ctx->pc != 0x1E7110u) { return; }
    }
    ctx->pc = 0x1E7110u;
label_1e7110:
    // 0x1e7110: 0xae300088  sw          $s0, 0x88($s1)
    ctx->pc = 0x1e7110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 16));
    // 0x1e7114: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e7114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e7118: 0x0  nop
    ctx->pc = 0x1e7118u;
    // NOP
label_1e711c:
    // 0x1e711c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E711Cu;
    {
        const bool branch_taken_0x1e711c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E711Cu;
            // 0x1e7120: 0xae620160  sw          $v0, 0x160($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e711c) {
            ctx->pc = 0x1E712Cu;
            goto label_1e712c;
        }
    }
    ctx->pc = 0x1E7124u;
label_1e7124:
    // 0x1e7124: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7124u;
    {
        const bool branch_taken_0x1e7124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7124u;
            // 0x1e7128: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7124) {
            ctx->pc = 0x1E7134u;
            goto label_1e7134;
        }
    }
    ctx->pc = 0x1E712Cu;
label_1e712c:
    // 0x1e712c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e712cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7130:
    // 0x1e7130: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e7130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e7134:
    // 0x1e7134: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e7134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e7138: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e7138u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e713c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e713cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7140: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e7140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7144: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e7144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7148: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E714Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7148u;
            // 0x1e714c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7150u;
}
