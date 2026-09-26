#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckEnableCharaChange__16CUserDataManagerFiPi
// Address: 0x19bb40 - 0x19bd14
void CheckEnableCharaChange__16CUserDataManagerFiPi_0x19bb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckEnableCharaChange__16CUserDataManagerFiPi_0x19bb40");
#endif

    switch (ctx->pc) {
        case 0x19bb70u: goto label_19bb70;
        case 0x19bbccu: goto label_19bbcc;
        case 0x19bc60u: goto label_19bc60;
        default: break;
    }

    ctx->pc = 0x19bb40u;

    // 0x19bb40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19bb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19bb44: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x19bb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x19bb48: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19bb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19bb4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19bb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19bb50: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x19bb50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19bb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19bb58: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x19bb58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19bb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19bb60: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19bb60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19bb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19bb68: 0xc066fe0  jal         func_19BF80
    ctx->pc = 0x19BB68u;
    SET_GPR_U32(ctx, 31, 0x19BB70u);
    ctx->pc = 0x19BB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BB68u;
            // 0x19bb6c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BF80u;
    if (runtime->hasFunction(0x19BF80u)) {
        auto targetFn = runtime->lookupFunction(0x19BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB70u; }
        if (ctx->pc != 0x19BB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnableCharaChangeFlag__16CUserDataManagerFv_0x19bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB70u; }
        if (ctx->pc != 0x19BB70u) { return; }
    }
    ctx->pc = 0x19BB70u;
label_19bb70:
    // 0x19bb70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19bb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bb74: 0x2641804  sllv        $v1, $a0, $s3
    ctx->pc = 0x19bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 19) & 0x1F));
    // 0x19bb78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19bb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19bb7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19BB7Cu;
    {
        const bool branch_taken_0x19bb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BB7Cu;
            // 0x19bb80: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb7c) {
            ctx->pc = 0x19BB88u;
            goto label_19bb88;
        }
    }
    ctx->pc = 0x19BB84u;
    // 0x19bb84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19bb84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19bb88:
    // 0x19bb88: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x19bb88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bb8c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BB8Cu;
    {
        const bool branch_taken_0x19bb8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BB8Cu;
            // 0x19bb90: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb8c) {
            ctx->pc = 0x19BB9Cu;
            goto label_19bb9c;
        }
    }
    ctx->pc = 0x19BB94u;
    // 0x19bb94: 0x16710015  bne         $s3, $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x19BB94u;
    {
        const bool branch_taken_0x19bb94 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 17));
        ctx->pc = 0x19BB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BB94u;
            // 0x19bb98: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb94) {
            ctx->pc = 0x19BBECu;
            goto label_19bbec;
        }
    }
    ctx->pc = 0x19BB9Cu;
label_19bb9c:
    // 0x19bb9c: 0x2402038c  addiu       $v0, $zero, 0x38C
    ctx->pc = 0x19bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 908));
    // 0x19bba0: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x19bba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19bba4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19bba4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bba8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x19bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x19bbac: 0xc4413f4c  lwc1        $f1, 0x3F4C($v0)
    ctx->pc = 0x19bbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19bbb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19bbb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19bbb4: 0x0  nop
    ctx->pc = 0x19bbb4u;
    // NOP
    // 0x19bbb8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19BBB8u;
    {
        const bool branch_taken_0x19bbb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19BBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BBB8u;
            // 0x19bbbc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bbb8) {
            ctx->pc = 0x19BBC4u;
            goto label_19bbc4;
        }
    }
    ctx->pc = 0x19BBC0u;
    // 0x19bbc0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19bbc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19bbc4:
    // 0x19bbc4: 0xc0670b0  jal         func_19C2C0
    ctx->pc = 0x19BBC4u;
    SET_GPR_U32(ctx, 31, 0x19BBCCu);
    ctx->pc = 0x19BBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BBC4u;
            // 0x19bbc8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C2C0u;
    if (runtime->hasFunction(0x19C2C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BBCCu; }
        if (ctx->pc != 0x19BBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaStatusAttirbute__16CUserDataManagerFi_0x19c2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BBCCu; }
        if (ctx->pc != 0x19BBCCu) { return; }
    }
    ctx->pc = 0x19BBCCu;
label_19bbcc:
    // 0x19bbcc: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x19bbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x19bbd0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19BBD0u;
    {
        const bool branch_taken_0x19bbd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19bbd0) {
            ctx->pc = 0x19BBE4u;
            goto label_19bbe4;
        }
    }
    ctx->pc = 0x19BBD8u;
    // 0x19bbd8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x19bbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x19bbdc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19BBDCu;
    {
        const bool branch_taken_0x19bbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bbdc) {
            ctx->pc = 0x19BBE8u;
            goto label_19bbe8;
        }
    }
    ctx->pc = 0x19BBE4u;
label_19bbe4:
    // 0x19bbe4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19bbe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19bbe8:
    // 0x19bbe8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19bbec:
    // 0x19bbec: 0x1662000f  bne         $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19BBECu;
    {
        const bool branch_taken_0x19bbec = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x19BBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BBECu;
            // 0x19bbf0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bbec) {
            ctx->pc = 0x19BC2Cu;
            goto label_19bc2c;
        }
    }
    ctx->pc = 0x19BBF4u;
    // 0x19bbf4: 0xc6a04684  lwc1        $f0, 0x4684($s5)
    ctx->pc = 0x19bbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 18052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19bbf8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19bbf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19bbfc: 0x0  nop
    ctx->pc = 0x19bbfcu;
    // NOP
    // 0x19bc00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19bc00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19bc04: 0x0  nop
    ctx->pc = 0x19bc04u;
    // NOP
    // 0x19bc08: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x19BC08u;
    {
        const bool branch_taken_0x19bc08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19bc08) {
            ctx->pc = 0x19BC24u;
            goto label_19bc24;
        }
    }
    ctx->pc = 0x19BC10u;
    // 0x19bc10: 0xc6a03f4c  lwc1        $f0, 0x3F4C($s5)
    ctx->pc = 0x19bc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19bc14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19bc14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19bc18: 0x0  nop
    ctx->pc = 0x19bc18u;
    // NOP
    // 0x19bc1c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19BC1Cu;
    {
        const bool branch_taken_0x19bc1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19bc1c) {
            ctx->pc = 0x19BC28u;
            goto label_19bc28;
        }
    }
    ctx->pc = 0x19BC24u;
label_19bc24:
    // 0x19bc24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19bc24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19bc28:
    // 0x19bc28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19bc2c:
    // 0x19bc2c: 0x1662000a  bne         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19BC2Cu;
    {
        const bool branch_taken_0x19bc2c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x19BC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BC2Cu;
            // 0x19bc30: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc2c) {
            ctx->pc = 0x19BC58u;
            goto label_19bc58;
        }
    }
    ctx->pc = 0x19BC34u;
    // 0x19bc34: 0xc6a142d8  lwc1        $f1, 0x42D8($s5)
    ctx->pc = 0x19bc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 17112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19bc38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19bc38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bc3c: 0x0  nop
    ctx->pc = 0x19bc3cu;
    // NOP
    // 0x19bc40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19bc40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19bc44: 0x0  nop
    ctx->pc = 0x19bc44u;
    // NOP
    // 0x19bc48: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19BC48u;
    {
        const bool branch_taken_0x19bc48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19bc48) {
            ctx->pc = 0x19BC54u;
            goto label_19bc54;
        }
    }
    ctx->pc = 0x19BC50u;
    // 0x19bc50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19bc50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19bc54:
    // 0x19bc54: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19bc54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19bc58:
    // 0x19bc58: 0xc06421c  jal         func_190870
    ctx->pc = 0x19BC58u;
    SET_GPR_U32(ctx, 31, 0x19BC60u);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC60u; }
        if (ctx->pc != 0x19BC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC60u; }
        if (ctx->pc != 0x19BC60u) { return; }
    }
    ctx->pc = 0x19BC60u;
label_19bc60:
    // 0x19bc60: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x19bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x19bc64: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19BC64u;
    {
        const bool branch_taken_0x19bc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bc64) {
            ctx->pc = 0x19BC8Cu;
            goto label_19bc8c;
        }
    }
    ctx->pc = 0x19BC6Cu;
    // 0x19bc6c: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x19bc6cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x19bc70: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x19bc70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19bc74: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19BC74u;
    {
        const bool branch_taken_0x19bc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BC74u;
            // 0x19bc78: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc74) {
            ctx->pc = 0x19BC80u;
            goto label_19bc80;
        }
    }
    ctx->pc = 0x19BC7Cu;
    // 0x19bc7c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x19bc7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19bc80:
    // 0x19bc80: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19BC80u;
    {
        const bool branch_taken_0x19bc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bc80) {
            ctx->pc = 0x19BC8Cu;
            goto label_19bc8c;
        }
    }
    ctx->pc = 0x19BC88u;
    // 0x19bc88: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x19bc88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19bc8c:
    // 0x19bc8c: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x19BC8Cu;
    {
        const bool branch_taken_0x19bc8c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BC8Cu;
            // 0x19bc90: 0x10102b  sltu        $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc8c) {
            ctx->pc = 0x19BCD4u;
            goto label_19bcd4;
        }
    }
    ctx->pc = 0x19BC94u;
    // 0x19bc94: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19BC94u;
    {
        const bool branch_taken_0x19bc94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BC94u;
            // 0x19bc98: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc94) {
            ctx->pc = 0x19BCA8u;
            goto label_19bca8;
        }
    }
    ctx->pc = 0x19BC9Cu;
    // 0x19bc9c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x19bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x19bca0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x19bca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x19bca4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x19bca4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_19bca8:
    // 0x19bca8: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x19BCA8u;
    {
        const bool branch_taken_0x19bca8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bca8) {
            ctx->pc = 0x19BCBCu;
            goto label_19bcbc;
        }
    }
    ctx->pc = 0x19BCB0u;
    // 0x19bcb0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x19bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x19bcb4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x19bcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x19bcb8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x19bcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_19bcbc:
    // 0x19bcbc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x19BCBCu;
    {
        const bool branch_taken_0x19bcbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bcbc) {
            ctx->pc = 0x19BCD0u;
            goto label_19bcd0;
        }
    }
    ctx->pc = 0x19BCC4u;
    // 0x19bcc4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x19bcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x19bcc8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x19bcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x19bccc: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x19bcccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_19bcd0:
    // 0x19bcd0: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x19bcd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_19bcd4:
    // 0x19bcd4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19BCD4u;
    {
        const bool branch_taken_0x19bcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bcd4) {
            ctx->pc = 0x19BCE0u;
            goto label_19bce0;
        }
    }
    ctx->pc = 0x19BCDCu;
    // 0x19bcdc: 0x11102b  sltu        $v0, $zero, $s1
    ctx->pc = 0x19bcdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_19bce0:
    // 0x19bce0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19BCE0u;
    {
        const bool branch_taken_0x19bce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bce0) {
            ctx->pc = 0x19BCECu;
            goto label_19bcec;
        }
    }
    ctx->pc = 0x19BCE8u;
    // 0x19bce8: 0x12102b  sltu        $v0, $zero, $s2
    ctx->pc = 0x19bce8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_19bcec:
    // 0x19bcec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x19bcecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19bcf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19bcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19bcf4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19bcf4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19bcf8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19bcf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bcfc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19bcfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19bd00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19bd00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19bd04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19bd04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bd08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19bd08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bd0c: 0x3e00008  jr          $ra
    ctx->pc = 0x19BD0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD0Cu;
            // 0x19bd10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BD14u;
}
