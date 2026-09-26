#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init_Fire__14CWeaponElementFPf
// Address: 0x1c7500 - 0x1c7884
void Init_Fire__14CWeaponElementFPf_0x1c7500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init_Fire__14CWeaponElementFPf_0x1c7500");
#endif

    switch (ctx->pc) {
        case 0x1c7544u: goto label_1c7544;
        case 0x1c7574u: goto label_1c7574;
        case 0x1c7590u: goto label_1c7590;
        case 0x1c75c0u: goto label_1c75c0;
        case 0x1c75e4u: goto label_1c75e4;
        case 0x1c75ecu: goto label_1c75ec;
        case 0x1c7628u: goto label_1c7628;
        case 0x1c7630u: goto label_1c7630;
        case 0x1c7698u: goto label_1c7698;
        case 0x1c76a0u: goto label_1c76a0;
        case 0x1c76e4u: goto label_1c76e4;
        case 0x1c772cu: goto label_1c772c;
        case 0x1c776cu: goto label_1c776c;
        case 0x1c77acu: goto label_1c77ac;
        case 0x1c77ecu: goto label_1c77ec;
        case 0x1c7828u: goto label_1c7828;
        default: break;
    }

    ctx->pc = 0x1c7500u;

    // 0x1c7500: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c7500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1c7504: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x1c7504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x1c7508: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1c7508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1c750c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c750cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7510: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1c7510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1c7514: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1c7514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1c7518: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1c7518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1c751c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c751cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c7520: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c7520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c7524: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c7524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c7528: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c7528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c752c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c752cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7530: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c7530u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c7534: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c7534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7538: 0xc48005a8  lwc1        $f0, 0x5A8($a0)
    ctx->pc = 0x1c7538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c753c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C753Cu;
    SET_GPR_U32(ctx, 31, 0x1C7544u);
    ctx->pc = 0x1C7540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C753Cu;
            // 0x1c7540: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7544u; }
        if (ctx->pc != 0x1C7544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7544u; }
        if (ctx->pc != 0x1C7544u) { return; }
    }
    ctx->pc = 0x1C7544u;
label_1c7544:
    // 0x1c7544: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1c7544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1c7548: 0xa62205ae  sh          $v0, 0x5AE($s1)
    ctx->pc = 0x1c7548u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1454), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c754c: 0x862205ae  lh          $v0, 0x5AE($s1)
    ctx->pc = 0x1c754cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1454)));
    // 0x1c7550: 0x28410021  slti        $at, $v0, 0x21
    ctx->pc = 0x1c7550u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x1c7554: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7554u;
    {
        const bool branch_taken_0x1c7554 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7554u;
            // 0x1c7558: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7554) {
            ctx->pc = 0x1C7560u;
            goto label_1c7560;
        }
    }
    ctx->pc = 0x1C755Cu;
    // 0x1c755c: 0xa62205ae  sh          $v0, 0x5AE($s1)
    ctx->pc = 0x1c755cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1454), (uint16_t)GPR_U32(ctx, 2));
label_1c7560:
    // 0x1c7560: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x1c7560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7564: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1c7564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1c7568: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c7568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c756c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C756Cu;
    SET_GPR_U32(ctx, 31, 0x1C7574u);
    ctx->pc = 0x1C7570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C756Cu;
            // 0x1c7570: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7574u; }
        if (ctx->pc != 0x1C7574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7574u; }
        if (ctx->pc != 0x1C7574u) { return; }
    }
    ctx->pc = 0x1C7574u;
label_1c7574:
    // 0x1c7574: 0x24430005  addiu       $v1, $v0, 0x5
    ctx->pc = 0x1c7574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x1c7578: 0xa62306b8  sh          $v1, 0x6B8($s1)
    ctx->pc = 0x1c7578u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1720), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c757c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c757cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c7580: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x1c7580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7584: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c7584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7588: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C7588u;
    SET_GPR_U32(ctx, 31, 0x1C7590u);
    ctx->pc = 0x1C758Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7588u;
            // 0x1c758c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7590u; }
        if (ctx->pc != 0x1C7590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7590u; }
        if (ctx->pc != 0x1C7590u) { return; }
    }
    ctx->pc = 0x1C7590u;
label_1c7590:
    // 0x1c7590: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1c7590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c7594: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1c7594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c7598: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x1c7598u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1c759c: 0xa62606b4  sh          $a2, 0x6B4($s1)
    ctx->pc = 0x1c759cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1716), (uint16_t)GPR_U32(ctx, 6));
    // 0x1c75a0: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1c75a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1c75a4: 0xa62006b6  sh          $zero, 0x6B6($s1)
    ctx->pc = 0x1c75a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1718), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c75a8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c75a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c75ac: 0xa623073a  sh          $v1, 0x73A($s1)
    ctx->pc = 0x1c75acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1850), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c75b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c75b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c75b4: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x1c75b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c75b8: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1C75B8u;
    SET_GPR_U32(ctx, 31, 0x1C75C0u);
    ctx->pc = 0x1C75BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C75B8u;
            // 0x1c75bc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C75C0u; }
        if (ctx->pc != 0x1C75C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C75C0u; }
        if (ctx->pc != 0x1C75C0u) { return; }
    }
    ctx->pc = 0x1C75C0u;
label_1c75c0:
    // 0x1c75c0: 0x3c043fe9  lui         $a0, 0x3FE9
    ctx->pc = 0x1c75c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16361 << 16));
    // 0x1c75c4: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1c75c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39321);
    // 0x1c75c8: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1c75c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39321);
    // 0x1c75cc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1c75ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1c75d0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c75d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c75d4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1c75d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1c75d8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1c75d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c75dc: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x1C75DCu;
    SET_GPR_U32(ctx, 31, 0x1C75E4u);
    ctx->pc = 0x1C75E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C75DCu;
            // 0x1c75e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C75E4u; }
        if (ctx->pc != 0x1C75E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C75E4u; }
        if (ctx->pc != 0x1C75E4u) { return; }
    }
    ctx->pc = 0x1C75E4u;
label_1c75e4:
    // 0x1c75e4: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x1C75E4u;
    SET_GPR_U32(ctx, 31, 0x1C75ECu);
    ctx->pc = 0x1C75E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C75E4u;
            // 0x1c75e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C75ECu; }
        if (ctx->pc != 0x1C75ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C75ECu; }
        if (ctx->pc != 0x1C75ECu) { return; }
    }
    ctx->pc = 0x1C75ECu;
label_1c75ec:
    // 0x1c75ec: 0xc62305a0  lwc1        $f3, 0x5A0($s1)
    ctx->pc = 0x1c75ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c75f0: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1c75f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x1c75f4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1c75f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1c75f8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c75f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c75fc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c75fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c7600: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c7600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7604: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c7604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7608: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1c7608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1c760c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1c760cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1c7610: 0xe62005a0  swc1        $f0, 0x5A0($s1)
    ctx->pc = 0x1c7610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1440), bits); }
    // 0x1c7614: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x1c7614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7618: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c7618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c761c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c761cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c7620: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1C7620u;
    SET_GPR_U32(ctx, 31, 0x1C7628u);
    ctx->pc = 0x1C7624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7620u;
            // 0x1c7624: 0xe62005b0  swc1        $f0, 0x5B0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1456), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7628u; }
        if (ctx->pc != 0x1C7628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7628u; }
        if (ctx->pc != 0x1C7628u) { return; }
    }
    ctx->pc = 0x1C7628u;
label_1c7628:
    // 0x1c7628: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c7628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c762c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c762cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7630:
    // 0x1c7630: 0x2253021  addu        $a2, $s1, $a1
    ctx->pc = 0x1c7630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1c7634: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1c7634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1c7638: 0xacc004a0  sw          $zero, 0x4A0($a2)
    ctx->pc = 0x1c7638u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1184), GPR_U32(ctx, 0));
    // 0x1c763c: 0x28830020  slti        $v1, $a0, 0x20
    ctx->pc = 0x1c763cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1c7640: 0xacc00520  sw          $zero, 0x520($a2)
    ctx->pc = 0x1c7640u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1312), GPR_U32(ctx, 0));
    // 0x1c7644: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1c7644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1c7648: 0xacc004a4  sw          $zero, 0x4A4($a2)
    ctx->pc = 0x1c7648u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1188), GPR_U32(ctx, 0));
    // 0x1c764c: 0xacc00524  sw          $zero, 0x524($a2)
    ctx->pc = 0x1c764cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1316), GPR_U32(ctx, 0));
    // 0x1c7650: 0xacc004a8  sw          $zero, 0x4A8($a2)
    ctx->pc = 0x1c7650u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1192), GPR_U32(ctx, 0));
    // 0x1c7654: 0xacc00528  sw          $zero, 0x528($a2)
    ctx->pc = 0x1c7654u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1320), GPR_U32(ctx, 0));
    // 0x1c7658: 0xacc004ac  sw          $zero, 0x4AC($a2)
    ctx->pc = 0x1c7658u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1196), GPR_U32(ctx, 0));
    // 0x1c765c: 0xacc0052c  sw          $zero, 0x52C($a2)
    ctx->pc = 0x1c765cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1324), GPR_U32(ctx, 0));
    // 0x1c7660: 0xacc004b0  sw          $zero, 0x4B0($a2)
    ctx->pc = 0x1c7660u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1200), GPR_U32(ctx, 0));
    // 0x1c7664: 0xacc00530  sw          $zero, 0x530($a2)
    ctx->pc = 0x1c7664u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1328), GPR_U32(ctx, 0));
    // 0x1c7668: 0xacc004b4  sw          $zero, 0x4B4($a2)
    ctx->pc = 0x1c7668u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1204), GPR_U32(ctx, 0));
    // 0x1c766c: 0xacc00534  sw          $zero, 0x534($a2)
    ctx->pc = 0x1c766cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1332), GPR_U32(ctx, 0));
    // 0x1c7670: 0xacc004b8  sw          $zero, 0x4B8($a2)
    ctx->pc = 0x1c7670u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1208), GPR_U32(ctx, 0));
    // 0x1c7674: 0xacc00538  sw          $zero, 0x538($a2)
    ctx->pc = 0x1c7674u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1336), GPR_U32(ctx, 0));
    // 0x1c7678: 0xacc004bc  sw          $zero, 0x4BC($a2)
    ctx->pc = 0x1c7678u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1212), GPR_U32(ctx, 0));
    // 0x1c767c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1C767Cu;
    {
        const bool branch_taken_0x1c767c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C767Cu;
            // 0x1c7680: 0xacc0053c  sw          $zero, 0x53C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1340), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c767c) {
            ctx->pc = 0x1C7630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c7630;
        }
    }
    ctx->pc = 0x1C7684u;
    // 0x1c7684: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c7684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7688: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c7688u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c768c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c768cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7690: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1C7690u;
    {
        const bool branch_taken_0x1c7690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7690u;
            // 0x1c7694: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7690) {
            ctx->pc = 0x1C7848u;
            goto label_1c7848;
        }
    }
    ctx->pc = 0x1C7698u;
label_1c7698:
    // 0x1c7698: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C7698u;
    SET_GPR_U32(ctx, 31, 0x1C76A0u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C76A0u; }
        if (ctx->pc != 0x1C76A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C76A0u; }
        if (ctx->pc != 0x1C76A0u) { return; }
    }
    ctx->pc = 0x1C76A0u;
label_1c76a0:
    // 0x1c76a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c76a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c76a4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c76a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c76a8: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x1c76a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x1c76ac: 0x233b021  addu        $s6, $s1, $s3
    ctx->pc = 0x1c76acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1c76b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c76b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c76b4: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1c76b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1c76b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c76b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c76bc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c76bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c76c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c76c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c76c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c76c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c76c8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1c76c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c76cc: 0x0  nop
    ctx->pc = 0x1c76ccu;
    // NOP
    // 0x1c76d0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c76d0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1c76d4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1c76d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1c76d8: 0xe6c00420  swc1        $f0, 0x420($s6)
    ctx->pc = 0x1c76d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 1056), bits); }
    // 0x1c76dc: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C76DCu;
    SET_GPR_U32(ctx, 31, 0x1C76E4u);
    ctx->pc = 0x1C76E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C76DCu;
            // 0x1c76e0: 0xaec204a0  sw          $v0, 0x4A0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 1184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C76E4u; }
        if (ctx->pc != 0x1C76E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C76E4u; }
        if (ctx->pc != 0x1C76E4u) { return; }
    }
    ctx->pc = 0x1C76E4u;
label_1c76e4:
    // 0x1c76e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c76e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c76e8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c76e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c76ec: 0x2348021  addu        $s0, $s1, $s4
    ctx->pc = 0x1c76ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1c76f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c76f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c76f4: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1c76f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1c76f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c76f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c76fc: 0x0  nop
    ctx->pc = 0x1c76fcu;
    // NOP
    // 0x1c7700: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x1c7700u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c7704: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c7704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c7708: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c7708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c770c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c770cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7710: 0x0  nop
    ctx->pc = 0x1c7710u;
    // NOP
    // 0x1c7714: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1c7714u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1c7718: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c7718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c771c: 0xe6c00520  swc1        $f0, 0x520($s6)
    ctx->pc = 0x1c771cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 1312), bits); }
    // 0x1c7720: 0xa60006ba  sh          $zero, 0x6BA($s0)
    ctx->pc = 0x1c7720u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1722), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c7724: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C7724u;
    SET_GPR_U32(ctx, 31, 0x1C772Cu);
    ctx->pc = 0x1C7728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7724u;
            // 0x1c7728: 0xc63405a0  lwc1        $f20, 0x5A0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C772Cu; }
        if (ctx->pc != 0x1C772Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C772Cu; }
        if (ctx->pc != 0x1C772Cu) { return; }
    }
    ctx->pc = 0x1C772Cu;
label_1c772c:
    // 0x1c772c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c772cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7730: 0x235b021  addu        $s6, $s1, $s5
    ctx->pc = 0x1c7730u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x1c7734: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c7734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c7738: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c7738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c773c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c773cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c7740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7744: 0x0  nop
    ctx->pc = 0x1c7744u;
    // NOP
    // 0x1c7748: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c7748u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c774c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c774cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c7750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7754: 0x0  nop
    ctx->pc = 0x1c7754u;
    // NOP
    // 0x1c7758: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c7758u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c775c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c775cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c7760: 0xe6c00020  swc1        $f0, 0x20($s6)
    ctx->pc = 0x1c7760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 32), bits); }
    // 0x1c7764: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C7764u;
    SET_GPR_U32(ctx, 31, 0x1C776Cu);
    ctx->pc = 0x1C7768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7764u;
            // 0x1c7768: 0xc63405a0  lwc1        $f20, 0x5A0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C776Cu; }
        if (ctx->pc != 0x1C776Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C776Cu; }
        if (ctx->pc != 0x1C776Cu) { return; }
    }
    ctx->pc = 0x1C776Cu;
label_1c776c:
    // 0x1c776c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c776cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7770: 0x0  nop
    ctx->pc = 0x1c7770u;
    // NOP
    // 0x1c7774: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c7774u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c7778: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c7778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c777c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c777cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c7780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7784: 0x0  nop
    ctx->pc = 0x1c7784u;
    // NOP
    // 0x1c7788: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c7788u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c778c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c778cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c7790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7794: 0x0  nop
    ctx->pc = 0x1c7794u;
    // NOP
    // 0x1c7798: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c7798u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c779c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c779cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c77a0: 0xe6c00024  swc1        $f0, 0x24($s6)
    ctx->pc = 0x1c77a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 36), bits); }
    // 0x1c77a4: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C77A4u;
    SET_GPR_U32(ctx, 31, 0x1C77ACu);
    ctx->pc = 0x1C77A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C77A4u;
            // 0x1c77a8: 0xc63405a0  lwc1        $f20, 0x5A0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C77ACu; }
        if (ctx->pc != 0x1C77ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C77ACu; }
        if (ctx->pc != 0x1C77ACu) { return; }
    }
    ctx->pc = 0x1C77ACu;
label_1c77ac:
    // 0x1c77ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c77acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c77b0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c77b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c77b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c77b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c77b8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c77b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c77bc: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c77bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c77c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c77c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c77c4: 0x0  nop
    ctx->pc = 0x1c77c4u;
    // NOP
    // 0x1c77c8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c77c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c77cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c77ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c77d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c77d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c77d4: 0x0  nop
    ctx->pc = 0x1c77d4u;
    // NOP
    // 0x1c77d8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c77d8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c77dc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c77dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c77e0: 0xe6c00028  swc1        $f0, 0x28($s6)
    ctx->pc = 0x1c77e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 40), bits); }
    // 0x1c77e4: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C77E4u;
    SET_GPR_U32(ctx, 31, 0x1C77ECu);
    ctx->pc = 0x1C77E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C77E4u;
            // 0x1c77e8: 0xaec2002c  sw          $v0, 0x2C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C77ECu; }
        if (ctx->pc != 0x1C77ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C77ECu; }
        if (ctx->pc != 0x1C77ECu) { return; }
    }
    ctx->pc = 0x1C77ECu;
label_1c77ec:
    // 0x1c77ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c77ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c77f0: 0x0  nop
    ctx->pc = 0x1c77f0u;
    // NOP
    // 0x1c77f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c77f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c77f8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1c77f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1c77fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c77fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7800: 0x0  nop
    ctx->pc = 0x1c7800u;
    // NOP
    // 0x1c7804: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c7804u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c7808: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c7808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c780c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c780cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7810: 0x0  nop
    ctx->pc = 0x1c7810u;
    // NOP
    // 0x1c7814: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c7814u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c7818: 0x0  nop
    ctx->pc = 0x1c7818u;
    // NOP
    // 0x1c781c: 0x0  nop
    ctx->pc = 0x1c781cu;
    // NOP
    // 0x1c7820: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C7820u;
    SET_GPR_U32(ctx, 31, 0x1C7828u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7828u; }
        if (ctx->pc != 0x1C7828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7828u; }
        if (ctx->pc != 0x1C7828u) { return; }
    }
    ctx->pc = 0x1C7828u;
label_1c7828:
    // 0x1c7828: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1c7828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1c782c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1c782cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1c7830: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c7830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c7834: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x1c7834u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x1c7838: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1c7838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c783c: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1c783cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1c7840: 0xa60306fa  sh          $v1, 0x6FA($s0)
    ctx->pc = 0x1c7840u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1786), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c7844: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c7844u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c7848:
    // 0x1c7848: 0x862305ae  lh          $v1, 0x5AE($s1)
    ctx->pc = 0x1c7848u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1454)));
    // 0x1c784c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x1c784cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c7850: 0x1460ff91  bnez        $v1, . + 4 + (-0x6F << 2)
    ctx->pc = 0x1C7850u;
    {
        const bool branch_taken_0x1c7850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7850) {
            ctx->pc = 0x1C7698u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c7698;
        }
    }
    ctx->pc = 0x1C7858u;
    // 0x1c7858: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1c7858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c785c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c785cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c7860: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1c7860u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c7864: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1c7864u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c7868: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1c7868u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c786c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c786cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c7870: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c7870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7874: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c7874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7878: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c7878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c787c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C787Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C787Cu;
            // 0x1c7880: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7884u;
}
