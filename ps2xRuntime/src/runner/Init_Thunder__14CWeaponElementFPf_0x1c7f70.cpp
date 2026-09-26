#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init_Thunder__14CWeaponElementFPf
// Address: 0x1c7f70 - 0x1c8490
void Init_Thunder__14CWeaponElementFPf_0x1c7f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init_Thunder__14CWeaponElementFPf_0x1c7f70");
#endif

    switch (ctx->pc) {
        case 0x1c7fb8u: goto label_1c7fb8;
        case 0x1c7fd4u: goto label_1c7fd4;
        case 0x1c801cu: goto label_1c801c;
        case 0x1c8040u: goto label_1c8040;
        case 0x1c8048u: goto label_1c8048;
        case 0x1c8064u: goto label_1c8064;
        case 0x1c806cu: goto label_1c806c;
        case 0x1c80b4u: goto label_1c80b4;
        case 0x1c80f8u: goto label_1c80f8;
        case 0x1c8148u: goto label_1c8148;
        case 0x1c8158u: goto label_1c8158;
        case 0x1c8160u: goto label_1c8160;
        case 0x1c81a0u: goto label_1c81a0;
        case 0x1c81dcu: goto label_1c81dc;
        case 0x1c821cu: goto label_1c821c;
        case 0x1c825cu: goto label_1c825c;
        case 0x1c8264u: goto label_1c8264;
        case 0x1c82acu: goto label_1c82ac;
        case 0x1c82e8u: goto label_1c82e8;
        case 0x1c832cu: goto label_1c832c;
        case 0x1c8334u: goto label_1c8334;
        case 0x1c8368u: goto label_1c8368;
        case 0x1c8374u: goto label_1c8374;
        case 0x1c83b0u: goto label_1c83b0;
        case 0x1c83b8u: goto label_1c83b8;
        case 0x1c83f4u: goto label_1c83f4;
        case 0x1c8408u: goto label_1c8408;
        case 0x1c8444u: goto label_1c8444;
        default: break;
    }

    ctx->pc = 0x1c7f70u;

    // 0x1c7f70: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1c7f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1c7f74: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x1c7f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x1c7f78: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1c7f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1c7f7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c7f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7f80: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1c7f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1c7f84: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1c7f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1c7f88: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c7f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c7f8c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c7f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c7f90: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c7f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c7f94: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1c7f94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c7f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c7f9c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1c7f9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7fa0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c7fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c7fa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c7fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c7fa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c7fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c7fac: 0xc48005a8  lwc1        $f0, 0x5A8($a0)
    ctx->pc = 0x1c7facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7fb0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C7FB0u;
    SET_GPR_U32(ctx, 31, 0x1C7FB8u);
    ctx->pc = 0x1C7FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7FB0u;
            // 0x1c7fb4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7FB8u; }
        if (ctx->pc != 0x1C7FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7FB8u; }
        if (ctx->pc != 0x1C7FB8u) { return; }
    }
    ctx->pc = 0x1C7FB8u;
label_1c7fb8:
    // 0x1c7fb8: 0x24430006  addiu       $v1, $v0, 0x6
    ctx->pc = 0x1c7fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x1c7fbc: 0xa6a305ae  sh          $v1, 0x5AE($s5)
    ctx->pc = 0x1c7fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1454), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c7fc0: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x1c7fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x1c7fc4: 0xc6a005a8  lwc1        $f0, 0x5A8($s5)
    ctx->pc = 0x1c7fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7fc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c7fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7fcc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C7FCCu;
    SET_GPR_U32(ctx, 31, 0x1C7FD4u);
    ctx->pc = 0x1C7FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7FCCu;
            // 0x1c7fd0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7FD4u; }
        if (ctx->pc != 0x1C7FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7FD4u; }
        if (ctx->pc != 0x1C7FD4u) { return; }
    }
    ctx->pc = 0x1C7FD4u;
label_1c7fd4:
    // 0x1c7fd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c7fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c7fd8: 0xa6a207bc  sh          $v0, 0x7BC($s5)
    ctx->pc = 0x1c7fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1980), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c7fdc: 0x86a205ae  lh          $v0, 0x5AE($s5)
    ctx->pc = 0x1c7fdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1454)));
    // 0x1c7fe0: 0x28410021  slti        $at, $v0, 0x21
    ctx->pc = 0x1c7fe0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x1c7fe4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7FE4u;
    {
        const bool branch_taken_0x1c7fe4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7FE4u;
            // 0x1c7fe8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7fe4) {
            ctx->pc = 0x1C7FF0u;
            goto label_1c7ff0;
        }
    }
    ctx->pc = 0x1C7FECu;
    // 0x1c7fec: 0xa6a205ae  sh          $v0, 0x5AE($s5)
    ctx->pc = 0x1c7fecu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1454), (uint16_t)GPR_U32(ctx, 2));
label_1c7ff0:
    // 0x1c7ff0: 0x86a207bc  lh          $v0, 0x7BC($s5)
    ctx->pc = 0x1c7ff0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1980)));
    // 0x1c7ff4: 0x28410011  slti        $at, $v0, 0x11
    ctx->pc = 0x1c7ff4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1c7ff8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7FF8u;
    {
        const bool branch_taken_0x1c7ff8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7FF8u;
            // 0x1c7ffc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ff8) {
            ctx->pc = 0x1C8004u;
            goto label_1c8004;
        }
    }
    ctx->pc = 0x1C8000u;
    // 0x1c8000: 0xa6a207bc  sh          $v0, 0x7BC($s5)
    ctx->pc = 0x1c8000u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1980), (uint16_t)GPR_U32(ctx, 2));
label_1c8004:
    // 0x1c8004: 0xc6a005a8  lwc1        $f0, 0x5A8($s5)
    ctx->pc = 0x1c8004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8008: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1c8008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1c800c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c800cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c8010: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c8010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8014: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1C8014u;
    SET_GPR_U32(ctx, 31, 0x1C801Cu);
    ctx->pc = 0x1C8018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8014u;
            // 0x1c8018: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C801Cu; }
        if (ctx->pc != 0x1C801Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C801Cu; }
        if (ctx->pc != 0x1C801Cu) { return; }
    }
    ctx->pc = 0x1C801Cu;
label_1c801c:
    // 0x1c801c: 0x3c043fe9  lui         $a0, 0x3FE9
    ctx->pc = 0x1c801cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16361 << 16));
    // 0x1c8020: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1c8020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39321);
    // 0x1c8024: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1c8024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39321);
    // 0x1c8028: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1c8028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1c802c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c802cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c8030: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1c8030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1c8034: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1c8034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c8038: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x1C8038u;
    SET_GPR_U32(ctx, 31, 0x1C8040u);
    ctx->pc = 0x1C803Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8038u;
            // 0x1c803c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8040u; }
        if (ctx->pc != 0x1C8040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8040u; }
        if (ctx->pc != 0x1C8040u) { return; }
    }
    ctx->pc = 0x1C8040u;
label_1c8040:
    // 0x1c8040: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x1C8040u;
    SET_GPR_U32(ctx, 31, 0x1C8048u);
    ctx->pc = 0x1C8044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8040u;
            // 0x1c8044: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8048u; }
        if (ctx->pc != 0x1C8048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8048u; }
        if (ctx->pc != 0x1C8048u) { return; }
    }
    ctx->pc = 0x1C8048u;
label_1c8048:
    // 0x1c8048: 0xc6a105a0  lwc1        $f1, 0x5A0($s5)
    ctx->pc = 0x1c8048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c804c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c804cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8050: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c8050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8054: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c8054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8058: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c8058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c805c: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x1C805Cu;
    {
        const bool branch_taken_0x1c805c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C805Cu;
            // 0x1c8060: 0xe6a005a0  swc1        $f0, 0x5A0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1440), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c805c) {
            ctx->pc = 0x1C830Cu;
            goto label_1c830c;
        }
    }
    ctx->pc = 0x1C8064u;
label_1c8064:
    // 0x1c8064: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C8064u;
    SET_GPR_U32(ctx, 31, 0x1C806Cu);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C806Cu; }
        if (ctx->pc != 0x1C806Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C806Cu; }
        if (ctx->pc != 0x1C806Cu) { return; }
    }
    ctx->pc = 0x1C806Cu;
label_1c806c:
    // 0x1c806c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c806cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8070: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1c8070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1c8074: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x1c8074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x1c8078: 0x2b19821  addu        $s3, $s5, $s1
    ctx->pc = 0x1c8078u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1c807c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c807cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c8080: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1c8080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1c8084: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c8084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8088: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c8088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c808c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c808cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c8090: 0x26620220  addiu       $v0, $s3, 0x220
    ctx->pc = 0x1c8090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 544));
    // 0x1c8094: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1c8094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1c8098: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1c8098u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c809c: 0x0  nop
    ctx->pc = 0x1c809cu;
    // NOP
    // 0x1c80a0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c80a0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1c80a4: 0x0  nop
    ctx->pc = 0x1c80a4u;
    // NOP
    // 0x1c80a8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c80a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c80ac: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C80ACu;
    SET_GPR_U32(ctx, 31, 0x1C80B4u);
    ctx->pc = 0x1C80B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C80ACu;
            // 0x1c80b0: 0xe6600220  swc1        $f0, 0x220($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 544), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C80B4u; }
        if (ctx->pc != 0x1C80B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C80B4u; }
        if (ctx->pc != 0x1C80B4u) { return; }
    }
    ctx->pc = 0x1C80B4u;
label_1c80b4:
    // 0x1c80b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c80b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c80b8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c80b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c80bc: 0x267e0224  addiu       $fp, $s3, 0x224
    ctx->pc = 0x1c80bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 548));
    // 0x1c80c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c80c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c80c4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1c80c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1c80c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c80c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c80cc: 0x0  nop
    ctx->pc = 0x1c80ccu;
    // NOP
    // 0x1c80d0: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x1c80d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c80d4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1c80d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1c80d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c80d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c80dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c80dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c80e0: 0x0  nop
    ctx->pc = 0x1c80e0u;
    // NOP
    // 0x1c80e4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1c80e4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1c80e8: 0x0  nop
    ctx->pc = 0x1c80e8u;
    // NOP
    // 0x1c80ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c80ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c80f0: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C80F0u;
    SET_GPR_U32(ctx, 31, 0x1C80F8u);
    ctx->pc = 0x1C80F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C80F0u;
            // 0x1c80f4: 0xe6600224  swc1        $f0, 0x224($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 548), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C80F8u; }
        if (ctx->pc != 0x1C80F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C80F8u; }
        if (ctx->pc != 0x1C80F8u) { return; }
    }
    ctx->pc = 0x1C80F8u;
label_1c80f8:
    // 0x1c80f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c80f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c80fc: 0x26760220  addiu       $s6, $s3, 0x220
    ctx->pc = 0x1c80fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 544));
    // 0x1c8100: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c8100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c8104: 0x26770228  addiu       $s7, $s3, 0x228
    ctx->pc = 0x1c8104u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 552));
    // 0x1c8108: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c8108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c810c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1c810cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1c8110: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c8110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c8114: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1c8114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c811c: 0x0  nop
    ctx->pc = 0x1c811cu;
    // NOP
    // 0x1c8120: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x1c8120u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c8124: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1c8124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1c8128: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c8128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c812c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c812cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8130: 0x0  nop
    ctx->pc = 0x1c8130u;
    // NOP
    // 0x1c8134: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1c8134u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1c8138: 0x0  nop
    ctx->pc = 0x1c8138u;
    // NOP
    // 0x1c813c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c813cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c8140: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1C8140u;
    SET_GPR_U32(ctx, 31, 0x1C8148u);
    ctx->pc = 0x1C8144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8140u;
            // 0x1c8144: 0xe6600228  swc1        $f0, 0x228($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 552), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8148u; }
        if (ctx->pc != 0x1C8148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8148u; }
        if (ctx->pc != 0x1C8148u) { return; }
    }
    ctx->pc = 0x1C8148u;
label_1c8148:
    // 0x1c8148: 0xc6ac05a0  lwc1        $f12, 0x5A0($s5)
    ctx->pc = 0x1c8148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c814c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c814cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c8150: 0xc041e96  jal         func_107A58
    ctx->pc = 0x1C8150u;
    SET_GPR_U32(ctx, 31, 0x1C8158u);
    ctx->pc = 0x1C8154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8150u;
            // 0x1c8154: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8158u; }
        if (ctx->pc != 0x1C8158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8158u; }
        if (ctx->pc != 0x1C8158u) { return; }
    }
    ctx->pc = 0x1C8158u;
label_1c8158:
    // 0x1c8158: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C8158u;
    SET_GPR_U32(ctx, 31, 0x1C8160u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8160u; }
        if (ctx->pc != 0x1C8160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8160u; }
        if (ctx->pc != 0x1C8160u) { return; }
    }
    ctx->pc = 0x1C8160u;
label_1c8160:
    // 0x1c8160: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c8160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8164: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1c8164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c8168: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x1c8168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c816c: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x1c816cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1c8170: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c8170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c8174: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1c8174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8178: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x1c8178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c817c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1c817cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1c8180: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c8180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c8184: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c8184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8188: 0x0  nop
    ctx->pc = 0x1c8188u;
    // NOP
    // 0x1c818c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1c818cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1c8190: 0x0  nop
    ctx->pc = 0x1c8190u;
    // NOP
    // 0x1c8194: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c8194u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c8198: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C8198u;
    SET_GPR_U32(ctx, 31, 0x1C81A0u);
    ctx->pc = 0x1C819Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8198u;
            // 0x1c819c: 0xe6600020  swc1        $f0, 0x20($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C81A0u; }
        if (ctx->pc != 0x1C81A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C81A0u; }
        if (ctx->pc != 0x1C81A0u) { return; }
    }
    ctx->pc = 0x1C81A0u;
label_1c81a0:
    // 0x1c81a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c81a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c81a4: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x1c81a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c81a8: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x1c81a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1c81ac: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c81acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c81b0: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x1c81b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c81b4: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x1c81b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c81b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c81b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c81bc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1c81bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1c81c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c81c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c81c4: 0x0  nop
    ctx->pc = 0x1c81c4u;
    // NOP
    // 0x1c81c8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1c81c8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1c81cc: 0x0  nop
    ctx->pc = 0x1c81ccu;
    // NOP
    // 0x1c81d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c81d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c81d4: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C81D4u;
    SET_GPR_U32(ctx, 31, 0x1C81DCu);
    ctx->pc = 0x1C81D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C81D4u;
            // 0x1c81d8: 0xe6600024  swc1        $f0, 0x24($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C81DCu; }
        if (ctx->pc != 0x1C81DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C81DCu; }
        if (ctx->pc != 0x1C81DCu) { return; }
    }
    ctx->pc = 0x1C81DCu;
label_1c81dc:
    // 0x1c81dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c81dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c81e0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c81e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c81e4: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x1c81e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c81e8: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x1c81e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1c81ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c81ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c81f0: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x1c81f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c81f4: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x1c81f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c81f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c81f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c81fc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1c81fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1c8200: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c8200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8204: 0x0  nop
    ctx->pc = 0x1c8204u;
    // NOP
    // 0x1c8208: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1c8208u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1c820c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c820cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c8210: 0xe6600028  swc1        $f0, 0x28($s3)
    ctx->pc = 0x1c8210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    // 0x1c8214: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C8214u;
    SET_GPR_U32(ctx, 31, 0x1C821Cu);
    ctx->pc = 0x1C8218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8214u;
            // 0x1c8218: 0xae62002c  sw          $v0, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C821Cu; }
        if (ctx->pc != 0x1C821Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C821Cu; }
        if (ctx->pc != 0x1C821Cu) { return; }
    }
    ctx->pc = 0x1C821Cu;
label_1c821c:
    // 0x1c821c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c821cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8220: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x1c8220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x1c8224: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1c8224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1c8228: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c8228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c822c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1c822cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c8230: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c8230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c8234: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1c8234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c8238: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c8238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c823c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c823cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8240: 0x0  nop
    ctx->pc = 0x1c8240u;
    // NOP
    // 0x1c8244: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c8244u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c8248: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c8248u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c824c: 0x0  nop
    ctx->pc = 0x1c824cu;
    // NOP
    // 0x1c8250: 0x0  nop
    ctx->pc = 0x1c8250u;
    // NOP
    // 0x1c8254: 0xc041e96  jal         func_107A58
    ctx->pc = 0x1C8254u;
    SET_GPR_U32(ctx, 31, 0x1C825Cu);
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C825Cu; }
        if (ctx->pc != 0x1C825Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C825Cu; }
        if (ctx->pc != 0x1C825Cu) { return; }
    }
    ctx->pc = 0x1C825Cu;
label_1c825c:
    // 0x1c825c: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C825Cu;
    SET_GPR_U32(ctx, 31, 0x1C8264u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8264u; }
        if (ctx->pc != 0x1C8264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8264u; }
        if (ctx->pc != 0x1C8264u) { return; }
    }
    ctx->pc = 0x1C8264u;
label_1c8264:
    // 0x1c8264: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c8264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8268: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x1c8268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x1c826c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1c826cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1c8270: 0x2b29821  addu        $s3, $s5, $s2
    ctx->pc = 0x1c8270u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x1c8274: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c8274u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c8278: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1c8278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x1c827c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c827cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8280: 0x0  nop
    ctx->pc = 0x1c8280u;
    // NOP
    // 0x1c8284: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x1c8284u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c8288: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c8288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c828c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1c828cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8290: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c8290u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8294: 0x0  nop
    ctx->pc = 0x1c8294u;
    // NOP
    // 0x1c8298: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1c8298u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1c829c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c829cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c82a0: 0xe6600420  swc1        $f0, 0x420($s3)
    ctx->pc = 0x1c82a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1056), bits); }
    // 0x1c82a4: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C82A4u;
    SET_GPR_U32(ctx, 31, 0x1C82ACu);
    ctx->pc = 0x1C82A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C82A4u;
            // 0x1c82a8: 0xae6204a0  sw          $v0, 0x4A0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C82ACu; }
        if (ctx->pc != 0x1C82ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C82ACu; }
        if (ctx->pc != 0x1C82ACu) { return; }
    }
    ctx->pc = 0x1C82ACu;
label_1c82ac:
    // 0x1c82ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c82acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c82b0: 0x0  nop
    ctx->pc = 0x1c82b0u;
    // NOP
    // 0x1c82b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c82b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c82b8: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1c82b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1c82bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c82bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c82c0: 0x0  nop
    ctx->pc = 0x1c82c0u;
    // NOP
    // 0x1c82c4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c82c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c82c8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c82c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c82cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c82ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c82d0: 0x0  nop
    ctx->pc = 0x1c82d0u;
    // NOP
    // 0x1c82d4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c82d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c82d8: 0x0  nop
    ctx->pc = 0x1c82d8u;
    // NOP
    // 0x1c82dc: 0x0  nop
    ctx->pc = 0x1c82dcu;
    // NOP
    // 0x1c82e0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C82E0u;
    SET_GPR_U32(ctx, 31, 0x1C82E8u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C82E8u; }
        if (ctx->pc != 0x1C82E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C82E8u; }
        if (ctx->pc != 0x1C82E8u) { return; }
    }
    ctx->pc = 0x1C82E8u;
label_1c82e8:
    // 0x1c82e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c82e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c82ec: 0x3c0342c0  lui         $v1, 0x42C0
    ctx->pc = 0x1c82ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17088 << 16));
    // 0x1c82f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c82f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c82f4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1c82f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1c82f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c82f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c82fc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1c82fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1c8300: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c8300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c8304: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c8304u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c8308: 0xe6600520  swc1        $f0, 0x520($s3)
    ctx->pc = 0x1c8308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1312), bits); }
label_1c830c:
    // 0x1c830c: 0x0  nop
    ctx->pc = 0x1c830cu;
    // NOP
    // 0x1c8310: 0x86a305ae  lh          $v1, 0x5AE($s5)
    ctx->pc = 0x1c8310u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1454)));
    // 0x1c8314: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1c8314u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c8318: 0x1460ff52  bnez        $v1, . + 4 + (-0xAE << 2)
    ctx->pc = 0x1C8318u;
    {
        const bool branch_taken_0x1c8318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8318) {
            ctx->pc = 0x1C8064u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8064;
        }
    }
    ctx->pc = 0x1C8320u;
    // 0x1c8320: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c8320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8324: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1C8324u;
    {
        const bool branch_taken_0x1c8324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8324u;
            // 0x1c8328: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8324) {
            ctx->pc = 0x1C8450u;
            goto label_1c8450;
        }
    }
    ctx->pc = 0x1C832Cu;
label_1c832c:
    // 0x1c832c: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C832Cu;
    SET_GPR_U32(ctx, 31, 0x1C8334u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8334u; }
        if (ctx->pc != 0x1C8334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8334u; }
        if (ctx->pc != 0x1C8334u) { return; }
    }
    ctx->pc = 0x1C8334u;
label_1c8334:
    // 0x1c8334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8338: 0x86a305ae  lh          $v1, 0x5AE($s5)
    ctx->pc = 0x1c8338u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1454)));
    // 0x1c833c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c833cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c8340: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c8340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c8344: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c8344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8348: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c8348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c834c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c834cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c8350: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c8350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c8354: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x1c8354u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1c8358: 0x0  nop
    ctx->pc = 0x1c8358u;
    // NOP
    // 0x1c835c: 0x0  nop
    ctx->pc = 0x1c835cu;
    // NOP
    // 0x1c8360: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C8360u;
    SET_GPR_U32(ctx, 31, 0x1C8368u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8368u; }
        if (ctx->pc != 0x1C8368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8368u; }
        if (ctx->pc != 0x1C8368u) { return; }
    }
    ctx->pc = 0x1C8368u;
label_1c8368:
    // 0x1c8368: 0x2b19021  addu        $s2, $s5, $s1
    ctx->pc = 0x1c8368u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1c836c: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C836Cu;
    SET_GPR_U32(ctx, 31, 0x1C8374u);
    ctx->pc = 0x1C8370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C836Cu;
            // 0x1c8370: 0xa642073c  sh          $v0, 0x73C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1852), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8374u; }
        if (ctx->pc != 0x1C8374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8374u; }
        if (ctx->pc != 0x1C8374u) { return; }
    }
    ctx->pc = 0x1C8374u;
label_1c8374:
    // 0x1c8374: 0x86a305ae  lh          $v1, 0x5AE($s5)
    ctx->pc = 0x1c8374u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1454)));
    // 0x1c8378: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c837c: 0x0  nop
    ctx->pc = 0x1c837cu;
    // NOP
    // 0x1c8380: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1c8380u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c8384: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c8384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c8388: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c8388u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c838c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c838cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8390: 0x0  nop
    ctx->pc = 0x1c8390u;
    // NOP
    // 0x1c8394: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c8394u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c8398: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c8398u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c839c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c839cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c83a0: 0x0  nop
    ctx->pc = 0x1c83a0u;
    // NOP
    // 0x1c83a4: 0x0  nop
    ctx->pc = 0x1c83a4u;
    // NOP
    // 0x1c83a8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C83A8u;
    SET_GPR_U32(ctx, 31, 0x1C83B0u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C83B0u; }
        if (ctx->pc != 0x1C83B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C83B0u; }
        if (ctx->pc != 0x1C83B0u) { return; }
    }
    ctx->pc = 0x1C83B0u;
label_1c83b0:
    // 0x1c83b0: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C83B0u;
    SET_GPR_U32(ctx, 31, 0x1C83B8u);
    ctx->pc = 0x1C83B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C83B0u;
            // 0x1c83b4: 0xa642075c  sh          $v0, 0x75C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1884), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C83B8u; }
        if (ctx->pc != 0x1C83B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C83B8u; }
        if (ctx->pc != 0x1C83B8u) { return; }
    }
    ctx->pc = 0x1C83B8u;
label_1c83b8:
    // 0x1c83b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c83b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c83bc: 0x0  nop
    ctx->pc = 0x1c83bcu;
    // NOP
    // 0x1c83c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c83c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c83c4: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1c83c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1c83c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c83c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c83cc: 0x0  nop
    ctx->pc = 0x1c83ccu;
    // NOP
    // 0x1c83d0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c83d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c83d4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c83d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c83d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c83d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c83dc: 0x0  nop
    ctx->pc = 0x1c83dcu;
    // NOP
    // 0x1c83e0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c83e0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c83e4: 0x0  nop
    ctx->pc = 0x1c83e4u;
    // NOP
    // 0x1c83e8: 0x0  nop
    ctx->pc = 0x1c83e8u;
    // NOP
    // 0x1c83ec: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C83ECu;
    SET_GPR_U32(ctx, 31, 0x1C83F4u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C83F4u; }
        if (ctx->pc != 0x1C83F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C83F4u; }
        if (ctx->pc != 0x1C83F4u) { return; }
    }
    ctx->pc = 0x1C83F4u;
label_1c83f4:
    // 0x1c83f4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1c83f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1c83f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c83f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c83fc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1c83fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1c8400: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C8400u;
    SET_GPR_U32(ctx, 31, 0x1C8408u);
    ctx->pc = 0x1C8404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8400u;
            // 0x1c8404: 0xa642077c  sh          $v0, 0x77C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1916), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8408u; }
        if (ctx->pc != 0x1C8408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8408u; }
        if (ctx->pc != 0x1C8408u) { return; }
    }
    ctx->pc = 0x1C8408u;
label_1c8408:
    // 0x1c8408: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c8408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c840c: 0x0  nop
    ctx->pc = 0x1c840cu;
    // NOP
    // 0x1c8410: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c8410u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c8414: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1c8414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1c8418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c841c: 0x0  nop
    ctx->pc = 0x1c841cu;
    // NOP
    // 0x1c8420: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c8420u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c8424: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c8424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c8428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c842c: 0x0  nop
    ctx->pc = 0x1c842cu;
    // NOP
    // 0x1c8430: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c8430u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c8434: 0x0  nop
    ctx->pc = 0x1c8434u;
    // NOP
    // 0x1c8438: 0x0  nop
    ctx->pc = 0x1c8438u;
    // NOP
    // 0x1c843c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C843Cu;
    SET_GPR_U32(ctx, 31, 0x1C8444u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8444u; }
        if (ctx->pc != 0x1C8444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8444u; }
        if (ctx->pc != 0x1C8444u) { return; }
    }
    ctx->pc = 0x1C8444u;
label_1c8444:
    // 0x1c8444: 0xa642079c  sh          $v0, 0x79C($s2)
    ctx->pc = 0x1c8444u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1948), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c8448: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1c8448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1c844c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c844cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c8450:
    // 0x1c8450: 0x86a307bc  lh          $v1, 0x7BC($s5)
    ctx->pc = 0x1c8450u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1980)));
    // 0x1c8454: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1c8454u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c8458: 0x1460ffb4  bnez        $v1, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1C8458u;
    {
        const bool branch_taken_0x1c8458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8458) {
            ctx->pc = 0x1C832Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c832c;
        }
    }
    ctx->pc = 0x1C8460u;
    // 0x1c8460: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c8460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8464: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1c8464u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c8468: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1c8468u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c846c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c846cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c8470: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c8470u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c8474: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c8474u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c8478: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c8478u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c847c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c847cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8480: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c8480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c8484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8488: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C848Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8488u;
            // 0x1c848c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8490u;
}
