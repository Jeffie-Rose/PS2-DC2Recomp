#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init_Cold__14CWeaponElementFPf
// Address: 0x1c5e20 - 0x1c619c
void Init_Cold__14CWeaponElementFPf_0x1c5e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init_Cold__14CWeaponElementFPf_0x1c5e20");
#endif

    switch (ctx->pc) {
        case 0x1c5e60u: goto label_1c5e60;
        case 0x1c5e90u: goto label_1c5e90;
        case 0x1c5eacu: goto label_1c5eac;
        case 0x1c5edcu: goto label_1c5edc;
        case 0x1c5f00u: goto label_1c5f00;
        case 0x1c5f08u: goto label_1c5f08;
        case 0x1c5f40u: goto label_1c5f40;
        case 0x1c5fa8u: goto label_1c5fa8;
        case 0x1c5fb0u: goto label_1c5fb0;
        case 0x1c5ff8u: goto label_1c5ff8;
        case 0x1c6040u: goto label_1c6040;
        case 0x1c6080u: goto label_1c6080;
        case 0x1c60c0u: goto label_1c60c0;
        case 0x1c6100u: goto label_1c6100;
        case 0x1c613cu: goto label_1c613c;
        default: break;
    }

    ctx->pc = 0x1c5e20u;

    // 0x1c5e20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c5e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1c5e24: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x1c5e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x1c5e28: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1c5e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1c5e2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5e30: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1c5e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1c5e34: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1c5e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1c5e38: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1c5e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1c5e3c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c5e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c5e40: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c5e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c5e44: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c5e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c5e48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c5e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c5e4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c5e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5e50: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c5e50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c5e54: 0xc48005a8  lwc1        $f0, 0x5A8($a0)
    ctx->pc = 0x1c5e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5e58: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C5E58u;
    SET_GPR_U32(ctx, 31, 0x1C5E60u);
    ctx->pc = 0x1C5E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5E58u;
            // 0x1c5e5c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5E60u; }
        if (ctx->pc != 0x1C5E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5E60u; }
        if (ctx->pc != 0x1C5E60u) { return; }
    }
    ctx->pc = 0x1C5E60u;
label_1c5e60:
    // 0x1c5e60: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1c5e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1c5e64: 0xa62205ae  sh          $v0, 0x5AE($s1)
    ctx->pc = 0x1c5e64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1454), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c5e68: 0x862205ae  lh          $v0, 0x5AE($s1)
    ctx->pc = 0x1c5e68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1454)));
    // 0x1c5e6c: 0x28410021  slti        $at, $v0, 0x21
    ctx->pc = 0x1c5e6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x1c5e70: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5E70u;
    {
        const bool branch_taken_0x1c5e70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5E70u;
            // 0x1c5e74: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e70) {
            ctx->pc = 0x1C5E7Cu;
            goto label_1c5e7c;
        }
    }
    ctx->pc = 0x1C5E78u;
    // 0x1c5e78: 0xa62205ae  sh          $v0, 0x5AE($s1)
    ctx->pc = 0x1c5e78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1454), (uint16_t)GPR_U32(ctx, 2));
label_1c5e7c:
    // 0x1c5e7c: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x1c5e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5e80: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1c5e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1c5e84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5e88: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C5E88u;
    SET_GPR_U32(ctx, 31, 0x1C5E90u);
    ctx->pc = 0x1C5E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5E88u;
            // 0x1c5e8c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5E90u; }
        if (ctx->pc != 0x1C5E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5E90u; }
        if (ctx->pc != 0x1C5E90u) { return; }
    }
    ctx->pc = 0x1C5E90u;
label_1c5e90:
    // 0x1c5e90: 0x24430005  addiu       $v1, $v0, 0x5
    ctx->pc = 0x1c5e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x1c5e94: 0xa62306b8  sh          $v1, 0x6B8($s1)
    ctx->pc = 0x1c5e94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1720), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c5e98: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1c5e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1c5e9c: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x1c5e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5ea0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5ea4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C5EA4u;
    SET_GPR_U32(ctx, 31, 0x1C5EACu);
    ctx->pc = 0x1C5EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5EA4u;
            // 0x1c5ea8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5EACu; }
        if (ctx->pc != 0x1C5EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5EACu; }
        if (ctx->pc != 0x1C5EACu) { return; }
    }
    ctx->pc = 0x1C5EACu;
label_1c5eac:
    // 0x1c5eac: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1c5eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c5eb0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1c5eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c5eb4: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x1c5eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1c5eb8: 0xa62606b4  sh          $a2, 0x6B4($s1)
    ctx->pc = 0x1c5eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1716), (uint16_t)GPR_U32(ctx, 6));
    // 0x1c5ebc: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1c5ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1c5ec0: 0xa62006b6  sh          $zero, 0x6B6($s1)
    ctx->pc = 0x1c5ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1718), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c5ec4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c5ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c5ec8: 0xa623073a  sh          $v1, 0x73A($s1)
    ctx->pc = 0x1c5ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1850), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c5ecc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5ed0: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x1c5ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5ed4: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1C5ED4u;
    SET_GPR_U32(ctx, 31, 0x1C5EDCu);
    ctx->pc = 0x1C5ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5ED4u;
            // 0x1c5ed8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5EDCu; }
        if (ctx->pc != 0x1C5EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5EDCu; }
        if (ctx->pc != 0x1C5EDCu) { return; }
    }
    ctx->pc = 0x1C5EDCu;
label_1c5edc:
    // 0x1c5edc: 0x3c043fe9  lui         $a0, 0x3FE9
    ctx->pc = 0x1c5edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16361 << 16));
    // 0x1c5ee0: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1c5ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39321);
    // 0x1c5ee4: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1c5ee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39321);
    // 0x1c5ee8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1c5ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1c5eec: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c5eecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c5ef0: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1c5ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1c5ef4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1c5ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c5ef8: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x1C5EF8u;
    SET_GPR_U32(ctx, 31, 0x1C5F00u);
    ctx->pc = 0x1C5EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5EF8u;
            // 0x1c5efc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5F00u; }
        if (ctx->pc != 0x1C5F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5F00u; }
        if (ctx->pc != 0x1C5F00u) { return; }
    }
    ctx->pc = 0x1C5F00u;
label_1c5f00:
    // 0x1c5f00: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x1C5F00u;
    SET_GPR_U32(ctx, 31, 0x1C5F08u);
    ctx->pc = 0x1C5F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5F00u;
            // 0x1c5f04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5F08u; }
        if (ctx->pc != 0x1C5F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5F08u; }
        if (ctx->pc != 0x1C5F08u) { return; }
    }
    ctx->pc = 0x1C5F08u;
label_1c5f08:
    // 0x1c5f08: 0xc62305a0  lwc1        $f3, 0x5A0($s1)
    ctx->pc = 0x1c5f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c5f0c: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1c5f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x1c5f10: 0x34643333  ori         $a0, $v1, 0x3333
    ctx->pc = 0x1c5f10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1c5f14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f18: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c5f18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c5f1c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1c5f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1c5f20: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c5f20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5f24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c5f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f28: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1c5f28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1c5f2c: 0xe62005a0  swc1        $f0, 0x5A0($s1)
    ctx->pc = 0x1c5f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1440), bits); }
    // 0x1c5f30: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x1c5f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5f34: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c5f34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c5f38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c5f38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c5f3c: 0xe62005b0  swc1        $f0, 0x5B0($s1)
    ctx->pc = 0x1c5f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1456), bits); }
label_1c5f40:
    // 0x1c5f40: 0x2253021  addu        $a2, $s1, $a1
    ctx->pc = 0x1c5f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1c5f44: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1c5f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1c5f48: 0xacc004a0  sw          $zero, 0x4A0($a2)
    ctx->pc = 0x1c5f48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1184), GPR_U32(ctx, 0));
    // 0x1c5f4c: 0x28830020  slti        $v1, $a0, 0x20
    ctx->pc = 0x1c5f4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1c5f50: 0xacc00520  sw          $zero, 0x520($a2)
    ctx->pc = 0x1c5f50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1312), GPR_U32(ctx, 0));
    // 0x1c5f54: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1c5f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1c5f58: 0xacc004a4  sw          $zero, 0x4A4($a2)
    ctx->pc = 0x1c5f58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1188), GPR_U32(ctx, 0));
    // 0x1c5f5c: 0xacc00524  sw          $zero, 0x524($a2)
    ctx->pc = 0x1c5f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1316), GPR_U32(ctx, 0));
    // 0x1c5f60: 0xacc004a8  sw          $zero, 0x4A8($a2)
    ctx->pc = 0x1c5f60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1192), GPR_U32(ctx, 0));
    // 0x1c5f64: 0xacc00528  sw          $zero, 0x528($a2)
    ctx->pc = 0x1c5f64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1320), GPR_U32(ctx, 0));
    // 0x1c5f68: 0xacc004ac  sw          $zero, 0x4AC($a2)
    ctx->pc = 0x1c5f68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1196), GPR_U32(ctx, 0));
    // 0x1c5f6c: 0xacc0052c  sw          $zero, 0x52C($a2)
    ctx->pc = 0x1c5f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1324), GPR_U32(ctx, 0));
    // 0x1c5f70: 0xacc004b0  sw          $zero, 0x4B0($a2)
    ctx->pc = 0x1c5f70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1200), GPR_U32(ctx, 0));
    // 0x1c5f74: 0xacc00530  sw          $zero, 0x530($a2)
    ctx->pc = 0x1c5f74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1328), GPR_U32(ctx, 0));
    // 0x1c5f78: 0xacc004b4  sw          $zero, 0x4B4($a2)
    ctx->pc = 0x1c5f78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1204), GPR_U32(ctx, 0));
    // 0x1c5f7c: 0xacc00534  sw          $zero, 0x534($a2)
    ctx->pc = 0x1c5f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1332), GPR_U32(ctx, 0));
    // 0x1c5f80: 0xacc004b8  sw          $zero, 0x4B8($a2)
    ctx->pc = 0x1c5f80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1208), GPR_U32(ctx, 0));
    // 0x1c5f84: 0xacc00538  sw          $zero, 0x538($a2)
    ctx->pc = 0x1c5f84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1336), GPR_U32(ctx, 0));
    // 0x1c5f88: 0xacc004bc  sw          $zero, 0x4BC($a2)
    ctx->pc = 0x1c5f88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1212), GPR_U32(ctx, 0));
    // 0x1c5f8c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1C5F8Cu;
    {
        const bool branch_taken_0x1c5f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5F8Cu;
            // 0x1c5f90: 0xacc0053c  sw          $zero, 0x53C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1340), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f8c) {
            ctx->pc = 0x1C5F40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5f40;
        }
    }
    ctx->pc = 0x1C5F94u;
    // 0x1c5f94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c5f94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f98: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c5f98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f9c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c5f9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fa0: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1C5FA0u;
    {
        const bool branch_taken_0x1c5fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5FA0u;
            // 0x1c5fa4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fa0) {
            ctx->pc = 0x1C615Cu;
            goto label_1c615c;
        }
    }
    ctx->pc = 0x1C5FA8u;
label_1c5fa8:
    // 0x1c5fa8: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C5FA8u;
    SET_GPR_U32(ctx, 31, 0x1C5FB0u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5FB0u; }
        if (ctx->pc != 0x1C5FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5FB0u; }
        if (ctx->pc != 0x1C5FB0u) { return; }
    }
    ctx->pc = 0x1C5FB0u;
label_1c5fb0:
    // 0x1c5fb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5fb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5fb4: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x1c5fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x1c5fb8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c5fb8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c5fbc: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1c5fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x1c5fc0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c5fc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c5fc4: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1c5fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1c5fc8: 0x233b021  addu        $s6, $s1, $s3
    ctx->pc = 0x1c5fc8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1c5fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5fd0: 0x0  nop
    ctx->pc = 0x1c5fd0u;
    // NOP
    // 0x1c5fd4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c5fd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c5fd8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c5fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c5fdc: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1c5fdcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x1c5fe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c5fe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5fe4: 0x0  nop
    ctx->pc = 0x1c5fe4u;
    // NOP
    // 0x1c5fe8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c5fe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c5fec: 0xe6c00420  swc1        $f0, 0x420($s6)
    ctx->pc = 0x1c5fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 1056), bits); }
    // 0x1c5ff0: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C5FF0u;
    SET_GPR_U32(ctx, 31, 0x1C5FF8u);
    ctx->pc = 0x1C5FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5FF0u;
            // 0x1c5ff4: 0xaec204a0  sw          $v0, 0x4A0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 1184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5FF8u; }
        if (ctx->pc != 0x1C5FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5FF8u; }
        if (ctx->pc != 0x1C5FF8u) { return; }
    }
    ctx->pc = 0x1C5FF8u;
label_1c5ff8:
    // 0x1c5ff8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5ffc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c5ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c6000: 0x2348021  addu        $s0, $s1, $s4
    ctx->pc = 0x1c6000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1c6004: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c6004u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c6008: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1c6008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1c600c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c600cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6010: 0x0  nop
    ctx->pc = 0x1c6010u;
    // NOP
    // 0x1c6014: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x1c6014u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c6018: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c6018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c601c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c601cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6024: 0x0  nop
    ctx->pc = 0x1c6024u;
    // NOP
    // 0x1c6028: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1c6028u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1c602c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c602cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c6030: 0xe6c00520  swc1        $f0, 0x520($s6)
    ctx->pc = 0x1c6030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 1312), bits); }
    // 0x1c6034: 0xa60006ba  sh          $zero, 0x6BA($s0)
    ctx->pc = 0x1c6034u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1722), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c6038: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C6038u;
    SET_GPR_U32(ctx, 31, 0x1C6040u);
    ctx->pc = 0x1C603Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6038u;
            // 0x1c603c: 0xc63405a0  lwc1        $f20, 0x5A0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6040u; }
        if (ctx->pc != 0x1C6040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6040u; }
        if (ctx->pc != 0x1C6040u) { return; }
    }
    ctx->pc = 0x1C6040u;
label_1c6040:
    // 0x1c6040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6044: 0x235b021  addu        $s6, $s1, $s5
    ctx->pc = 0x1c6044u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x1c6048: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c6048u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c604c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c604cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c6050: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1c6050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c6054: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6058: 0x0  nop
    ctx->pc = 0x1c6058u;
    // NOP
    // 0x1c605c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1c605cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c6060: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c6060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c6064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6068: 0x0  nop
    ctx->pc = 0x1c6068u;
    // NOP
    // 0x1c606c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c606cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c6070: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c6070u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c6074: 0xe6c00020  swc1        $f0, 0x20($s6)
    ctx->pc = 0x1c6074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 32), bits); }
    // 0x1c6078: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C6078u;
    SET_GPR_U32(ctx, 31, 0x1C6080u);
    ctx->pc = 0x1C607Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6078u;
            // 0x1c607c: 0xc63405a0  lwc1        $f20, 0x5A0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6080u; }
        if (ctx->pc != 0x1C6080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6080u; }
        if (ctx->pc != 0x1C6080u) { return; }
    }
    ctx->pc = 0x1C6080u;
label_1c6080:
    // 0x1c6080: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6084: 0x0  nop
    ctx->pc = 0x1c6084u;
    // NOP
    // 0x1c6088: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c6088u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c608c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c608cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c6090: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c6090u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c6094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6098: 0x0  nop
    ctx->pc = 0x1c6098u;
    // NOP
    // 0x1c609c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1c609cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c60a0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c60a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c60a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c60a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c60a8: 0x0  nop
    ctx->pc = 0x1c60a8u;
    // NOP
    // 0x1c60ac: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x1c60acu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x1c60b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c60b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c60b4: 0xe6c00024  swc1        $f0, 0x24($s6)
    ctx->pc = 0x1c60b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 36), bits); }
    // 0x1c60b8: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C60B8u;
    SET_GPR_U32(ctx, 31, 0x1C60C0u);
    ctx->pc = 0x1C60BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C60B8u;
            // 0x1c60bc: 0xc63405a0  lwc1        $f20, 0x5A0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C60C0u; }
        if (ctx->pc != 0x1C60C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C60C0u; }
        if (ctx->pc != 0x1C60C0u) { return; }
    }
    ctx->pc = 0x1C60C0u;
label_1c60c0:
    // 0x1c60c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c60c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c60c4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c60c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c60c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c60c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c60cc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c60ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c60d0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c60d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c60d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c60d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c60d8: 0x0  nop
    ctx->pc = 0x1c60d8u;
    // NOP
    // 0x1c60dc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c60dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c60e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c60e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c60e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c60e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c60e8: 0x0  nop
    ctx->pc = 0x1c60e8u;
    // NOP
    // 0x1c60ec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c60ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c60f0: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c60f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c60f4: 0xe6c00028  swc1        $f0, 0x28($s6)
    ctx->pc = 0x1c60f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 40), bits); }
    // 0x1c60f8: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C60F8u;
    SET_GPR_U32(ctx, 31, 0x1C6100u);
    ctx->pc = 0x1C60FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C60F8u;
            // 0x1c60fc: 0xaec2002c  sw          $v0, 0x2C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6100u; }
        if (ctx->pc != 0x1C6100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6100u; }
        if (ctx->pc != 0x1C6100u) { return; }
    }
    ctx->pc = 0x1C6100u;
label_1c6100:
    // 0x1c6100: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6104: 0x0  nop
    ctx->pc = 0x1c6104u;
    // NOP
    // 0x1c6108: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c6108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c610c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1c610cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1c6110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6114: 0x0  nop
    ctx->pc = 0x1c6114u;
    // NOP
    // 0x1c6118: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c6118u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c611c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c611cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c6120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6124: 0x0  nop
    ctx->pc = 0x1c6124u;
    // NOP
    // 0x1c6128: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c6128u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c612c: 0x0  nop
    ctx->pc = 0x1c612cu;
    // NOP
    // 0x1c6130: 0x0  nop
    ctx->pc = 0x1c6130u;
    // NOP
    // 0x1c6134: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C6134u;
    SET_GPR_U32(ctx, 31, 0x1C613Cu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C613Cu; }
        if (ctx->pc != 0x1C613Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C613Cu; }
        if (ctx->pc != 0x1C613Cu) { return; }
    }
    ctx->pc = 0x1C613Cu;
label_1c613c:
    // 0x1c613c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1c613cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1c6140: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1c6140u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1c6144: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c6144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c6148: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x1c6148u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x1c614c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1c614cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c6150: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1c6150u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1c6154: 0xa60306fa  sh          $v1, 0x6FA($s0)
    ctx->pc = 0x1c6154u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1786), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c6158: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c6158u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c615c:
    // 0x1c615c: 0x0  nop
    ctx->pc = 0x1c615cu;
    // NOP
    // 0x1c6160: 0x862305ae  lh          $v1, 0x5AE($s1)
    ctx->pc = 0x1c6160u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1454)));
    // 0x1c6164: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x1c6164u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c6168: 0x1460ff8f  bnez        $v1, . + 4 + (-0x71 << 2)
    ctx->pc = 0x1C6168u;
    {
        const bool branch_taken_0x1c6168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6168) {
            ctx->pc = 0x1C5FA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5fa8;
        }
    }
    ctx->pc = 0x1C6170u;
    // 0x1c6170: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1c6170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c6174: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c6174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c6178: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1c6178u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c617c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1c617cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c6180: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1c6180u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c6184: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c6184u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c6188: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c6188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c618c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c618cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6190: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c6190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6194: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6194u;
            // 0x1c6198: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C619Cu;
}
