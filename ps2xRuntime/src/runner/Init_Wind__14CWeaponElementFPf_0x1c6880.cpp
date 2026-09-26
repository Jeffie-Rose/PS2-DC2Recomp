#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init_Wind__14CWeaponElementFPf
// Address: 0x1c6880 - 0x1c6cfc
void Init_Wind__14CWeaponElementFPf_0x1c6880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init_Wind__14CWeaponElementFPf_0x1c6880");
#endif

    switch (ctx->pc) {
        case 0x1c68c8u: goto label_1c68c8;
        case 0x1c68e4u: goto label_1c68e4;
        case 0x1c6900u: goto label_1c6900;
        case 0x1c6930u: goto label_1c6930;
        case 0x1c6954u: goto label_1c6954;
        case 0x1c695cu: goto label_1c695c;
        case 0x1c69a8u: goto label_1c69a8;
        case 0x1c6a10u: goto label_1c6a10;
        case 0x1c6a18u: goto label_1c6a18;
        case 0x1c6a5cu: goto label_1c6a5c;
        case 0x1c6aa4u: goto label_1c6aa4;
        case 0x1c6ae4u: goto label_1c6ae4;
        case 0x1c6b24u: goto label_1c6b24;
        case 0x1c6b70u: goto label_1c6b70;
        case 0x1c6b7cu: goto label_1c6b7c;
        case 0x1c6b84u: goto label_1c6b84;
        case 0x1c6bc4u: goto label_1c6bc4;
        case 0x1c6bccu: goto label_1c6bcc;
        case 0x1c6c14u: goto label_1c6c14;
        case 0x1c6c58u: goto label_1c6c58;
        case 0x1c6c94u: goto label_1c6c94;
        default: break;
    }

    ctx->pc = 0x1c6880u;

    // 0x1c6880: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c6880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c6884: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1c6884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1c6888: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1c6888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1c688c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c688cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6890: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1c6890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1c6894: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1c6894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1c6898: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1c6898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1c689c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1c689cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1c68a0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1c68a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c68a4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1c68a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1c68a8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c68a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c68ac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c68acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c68b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c68b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c68b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c68b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c68b8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c68b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c68bc: 0xc48005a8  lwc1        $f0, 0x5A8($a0)
    ctx->pc = 0x1c68bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c68c0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C68C0u;
    SET_GPR_U32(ctx, 31, 0x1C68C8u);
    ctx->pc = 0x1C68C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C68C0u;
            // 0x1c68c4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C68C8u; }
        if (ctx->pc != 0x1C68C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C68C8u; }
        if (ctx->pc != 0x1C68C8u) { return; }
    }
    ctx->pc = 0x1C68C8u;
label_1c68c8:
    // 0x1c68c8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1c68c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c68cc: 0xa6c305ae  sh          $v1, 0x5AE($s6)
    ctx->pc = 0x1c68ccu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1454), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c68d0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1c68d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1c68d4: 0xc6c005a8  lwc1        $f0, 0x5A8($s6)
    ctx->pc = 0x1c68d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c68d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c68d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c68dc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C68DCu;
    SET_GPR_U32(ctx, 31, 0x1C68E4u);
    ctx->pc = 0x1C68E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C68DCu;
            // 0x1c68e0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C68E4u; }
        if (ctx->pc != 0x1C68E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C68E4u; }
        if (ctx->pc != 0x1C68E4u) { return; }
    }
    ctx->pc = 0x1C68E4u;
label_1c68e4:
    // 0x1c68e4: 0x2443000a  addiu       $v1, $v0, 0xA
    ctx->pc = 0x1c68e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1c68e8: 0xa6c306b8  sh          $v1, 0x6B8($s6)
    ctx->pc = 0x1c68e8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1720), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c68ec: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1c68ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1c68f0: 0xc6c005a8  lwc1        $f0, 0x5A8($s6)
    ctx->pc = 0x1c68f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c68f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c68f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c68f8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C68F8u;
    SET_GPR_U32(ctx, 31, 0x1C6900u);
    ctx->pc = 0x1C68FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C68F8u;
            // 0x1c68fc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6900u; }
        if (ctx->pc != 0x1C6900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6900u; }
        if (ctx->pc != 0x1C6900u) { return; }
    }
    ctx->pc = 0x1C6900u;
label_1c6900:
    // 0x1c6900: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1c6900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c6904: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1c6904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c6908: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x1c6908u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1c690c: 0xa6c606b4  sh          $a2, 0x6B4($s6)
    ctx->pc = 0x1c690cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1716), (uint16_t)GPR_U32(ctx, 6));
    // 0x1c6910: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1c6910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1c6914: 0xa6c006b6  sh          $zero, 0x6B6($s6)
    ctx->pc = 0x1c6914u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1718), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c6918: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c6918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c691c: 0xa6c3073a  sh          $v1, 0x73A($s6)
    ctx->pc = 0x1c691cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1850), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c6920: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6924: 0xc6c005a8  lwc1        $f0, 0x5A8($s6)
    ctx->pc = 0x1c6924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6928: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1C6928u;
    SET_GPR_U32(ctx, 31, 0x1C6930u);
    ctx->pc = 0x1C692Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6928u;
            // 0x1c692c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6930u; }
        if (ctx->pc != 0x1C6930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6930u; }
        if (ctx->pc != 0x1C6930u) { return; }
    }
    ctx->pc = 0x1C6930u;
label_1c6930:
    // 0x1c6930: 0x3c043fe9  lui         $a0, 0x3FE9
    ctx->pc = 0x1c6930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16361 << 16));
    // 0x1c6934: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1c6934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39321);
    // 0x1c6938: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1c6938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39321);
    // 0x1c693c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1c693cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1c6940: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c6940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c6944: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1c6944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1c6948: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1c6948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c694c: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x1C694Cu;
    SET_GPR_U32(ctx, 31, 0x1C6954u);
    ctx->pc = 0x1C6950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C694Cu;
            // 0x1c6950: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6954u; }
        if (ctx->pc != 0x1C6954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6954u; }
        if (ctx->pc != 0x1C6954u) { return; }
    }
    ctx->pc = 0x1C6954u;
label_1c6954:
    // 0x1c6954: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x1C6954u;
    SET_GPR_U32(ctx, 31, 0x1C695Cu);
    ctx->pc = 0x1C6958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6954u;
            // 0x1c6958: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C695Cu; }
        if (ctx->pc != 0x1C695Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C695Cu; }
        if (ctx->pc != 0x1C695Cu) { return; }
    }
    ctx->pc = 0x1C695Cu;
label_1c695c:
    // 0x1c695c: 0xc6c405a0  lwc1        $f4, 0x5A0($s6)
    ctx->pc = 0x1c695cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c6960: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1c6960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x1c6964: 0x34643333  ori         $a0, $v1, 0x3333
    ctx->pc = 0x1c6964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1c6968: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c696c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1c696cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c6970: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1c6970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
    // 0x1c6974: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1c6974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1c6978: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c6978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c697c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c697cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6980: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1c6980u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1c6984: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1c6984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1c6988: 0xe6c005a0  swc1        $f0, 0x5A0($s6)
    ctx->pc = 0x1c6988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 1440), bits); }
    // 0x1c698c: 0xc6c005a8  lwc1        $f0, 0x5A8($s6)
    ctx->pc = 0x1c698cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6990: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c6990u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6994: 0x0  nop
    ctx->pc = 0x1c6994u;
    // NOP
    // 0x1c6998: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1c6998u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1c699c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c699cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c69a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c69a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c69a4: 0xe6c005b0  swc1        $f0, 0x5B0($s6)
    ctx->pc = 0x1c69a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 1456), bits); }
label_1c69a8:
    // 0x1c69a8: 0x2c53021  addu        $a2, $s6, $a1
    ctx->pc = 0x1c69a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x1c69ac: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1c69acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1c69b0: 0xacc004a0  sw          $zero, 0x4A0($a2)
    ctx->pc = 0x1c69b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1184), GPR_U32(ctx, 0));
    // 0x1c69b4: 0x28830020  slti        $v1, $a0, 0x20
    ctx->pc = 0x1c69b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1c69b8: 0xacc00520  sw          $zero, 0x520($a2)
    ctx->pc = 0x1c69b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1312), GPR_U32(ctx, 0));
    // 0x1c69bc: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1c69bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1c69c0: 0xacc004a4  sw          $zero, 0x4A4($a2)
    ctx->pc = 0x1c69c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1188), GPR_U32(ctx, 0));
    // 0x1c69c4: 0xacc00524  sw          $zero, 0x524($a2)
    ctx->pc = 0x1c69c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1316), GPR_U32(ctx, 0));
    // 0x1c69c8: 0xacc004a8  sw          $zero, 0x4A8($a2)
    ctx->pc = 0x1c69c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1192), GPR_U32(ctx, 0));
    // 0x1c69cc: 0xacc00528  sw          $zero, 0x528($a2)
    ctx->pc = 0x1c69ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1320), GPR_U32(ctx, 0));
    // 0x1c69d0: 0xacc004ac  sw          $zero, 0x4AC($a2)
    ctx->pc = 0x1c69d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1196), GPR_U32(ctx, 0));
    // 0x1c69d4: 0xacc0052c  sw          $zero, 0x52C($a2)
    ctx->pc = 0x1c69d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1324), GPR_U32(ctx, 0));
    // 0x1c69d8: 0xacc004b0  sw          $zero, 0x4B0($a2)
    ctx->pc = 0x1c69d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1200), GPR_U32(ctx, 0));
    // 0x1c69dc: 0xacc00530  sw          $zero, 0x530($a2)
    ctx->pc = 0x1c69dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1328), GPR_U32(ctx, 0));
    // 0x1c69e0: 0xacc004b4  sw          $zero, 0x4B4($a2)
    ctx->pc = 0x1c69e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1204), GPR_U32(ctx, 0));
    // 0x1c69e4: 0xacc00534  sw          $zero, 0x534($a2)
    ctx->pc = 0x1c69e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1332), GPR_U32(ctx, 0));
    // 0x1c69e8: 0xacc004b8  sw          $zero, 0x4B8($a2)
    ctx->pc = 0x1c69e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1208), GPR_U32(ctx, 0));
    // 0x1c69ec: 0xacc00538  sw          $zero, 0x538($a2)
    ctx->pc = 0x1c69ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1336), GPR_U32(ctx, 0));
    // 0x1c69f0: 0xacc004bc  sw          $zero, 0x4BC($a2)
    ctx->pc = 0x1c69f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1212), GPR_U32(ctx, 0));
    // 0x1c69f4: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1C69F4u;
    {
        const bool branch_taken_0x1c69f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C69F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C69F4u;
            // 0x1c69f8: 0xacc0053c  sw          $zero, 0x53C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1340), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c69f4) {
            ctx->pc = 0x1C69A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c69a8;
        }
    }
    ctx->pc = 0x1C69FCu;
    // 0x1c69fc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1c69fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c6a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c6a04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a08: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x1C6A08u;
    {
        const bool branch_taken_0x1c6a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6A08u;
            // 0x1c6a0c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a08) {
            ctx->pc = 0x1C6CB4u;
            goto label_1c6cb4;
        }
    }
    ctx->pc = 0x1C6A10u;
label_1c6a10:
    // 0x1c6a10: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C6A10u;
    SET_GPR_U32(ctx, 31, 0x1C6A18u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6A18u; }
        if (ctx->pc != 0x1C6A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6A18u; }
        if (ctx->pc != 0x1C6A18u) { return; }
    }
    ctx->pc = 0x1C6A18u;
label_1c6a18:
    // 0x1c6a18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6a1c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c6a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c6a20: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x1c6a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x1c6a24: 0x2d09821  addu        $s3, $s6, $s0
    ctx->pc = 0x1c6a24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x1c6a28: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c6a28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c6a2c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1c6a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1c6a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6a34: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c6a34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c6a38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c6a38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c6a3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c6a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c6a40: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1c6a40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6a44: 0x0  nop
    ctx->pc = 0x1c6a44u;
    // NOP
    // 0x1c6a48: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c6a48u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1c6a4c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1c6a4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1c6a50: 0xe6600420  swc1        $f0, 0x420($s3)
    ctx->pc = 0x1c6a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1056), bits); }
    // 0x1c6a54: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C6A54u;
    SET_GPR_U32(ctx, 31, 0x1C6A5Cu);
    ctx->pc = 0x1C6A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6A54u;
            // 0x1c6a58: 0xae6204a0  sw          $v0, 0x4A0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6A5Cu; }
        if (ctx->pc != 0x1C6A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6A5Cu; }
        if (ctx->pc != 0x1C6A5Cu) { return; }
    }
    ctx->pc = 0x1C6A5Cu;
label_1c6a5c:
    // 0x1c6a5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6a60: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c6a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c6a64: 0x2d1f021  addu        $fp, $s6, $s1
    ctx->pc = 0x1c6a64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x1c6a68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c6a68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c6a6c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1c6a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1c6a70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6a74: 0x0  nop
    ctx->pc = 0x1c6a74u;
    // NOP
    // 0x1c6a78: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x1c6a78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c6a7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c6a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c6a80: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c6a80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6a84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6a88: 0x0  nop
    ctx->pc = 0x1c6a88u;
    // NOP
    // 0x1c6a8c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1c6a8cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1c6a90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c6a90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c6a94: 0xe6600520  swc1        $f0, 0x520($s3)
    ctx->pc = 0x1c6a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1312), bits); }
    // 0x1c6a98: 0xa7c006ba  sh          $zero, 0x6BA($fp)
    ctx->pc = 0x1c6a98u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 1722), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c6a9c: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C6A9Cu;
    SET_GPR_U32(ctx, 31, 0x1C6AA4u);
    ctx->pc = 0x1C6AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6A9Cu;
            // 0x1c6aa0: 0xc6d405a0  lwc1        $f20, 0x5A0($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6AA4u; }
        if (ctx->pc != 0x1C6AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6AA4u; }
        if (ctx->pc != 0x1C6AA4u) { return; }
    }
    ctx->pc = 0x1C6AA4u;
label_1c6aa4:
    // 0x1c6aa4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6aa8: 0x2d2a021  addu        $s4, $s6, $s2
    ctx->pc = 0x1c6aa8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x1c6aac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c6aacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c6ab0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c6ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c6ab4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c6ab4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c6ab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6abc: 0x0  nop
    ctx->pc = 0x1c6abcu;
    // NOP
    // 0x1c6ac0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c6ac0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c6ac4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c6ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c6ac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6acc: 0x0  nop
    ctx->pc = 0x1c6accu;
    // NOP
    // 0x1c6ad0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c6ad0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c6ad4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c6ad4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c6ad8: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x1c6ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
    // 0x1c6adc: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C6ADCu;
    SET_GPR_U32(ctx, 31, 0x1C6AE4u);
    ctx->pc = 0x1C6AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6ADCu;
            // 0x1c6ae0: 0xc6d405a0  lwc1        $f20, 0x5A0($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6AE4u; }
        if (ctx->pc != 0x1C6AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6AE4u; }
        if (ctx->pc != 0x1C6AE4u) { return; }
    }
    ctx->pc = 0x1C6AE4u;
label_1c6ae4:
    // 0x1c6ae4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6ae8: 0x0  nop
    ctx->pc = 0x1c6ae8u;
    // NOP
    // 0x1c6aec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c6aecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c6af0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c6af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c6af4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c6af4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c6af8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6afc: 0x0  nop
    ctx->pc = 0x1c6afcu;
    // NOP
    // 0x1c6b00: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c6b00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c6b04: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c6b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c6b08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6b0c: 0x0  nop
    ctx->pc = 0x1c6b0cu;
    // NOP
    // 0x1c6b10: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c6b10u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c6b14: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c6b14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c6b18: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x1c6b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
    // 0x1c6b1c: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C6B1Cu;
    SET_GPR_U32(ctx, 31, 0x1C6B24u);
    ctx->pc = 0x1C6B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6B1Cu;
            // 0x1c6b20: 0xc6d405a0  lwc1        $f20, 0x5A0($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6B24u; }
        if (ctx->pc != 0x1C6B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6B24u; }
        if (ctx->pc != 0x1C6B24u) { return; }
    }
    ctx->pc = 0x1C6B24u;
label_1c6b24:
    // 0x1c6b24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6b28: 0x26950220  addiu       $s5, $s4, 0x220
    ctx->pc = 0x1c6b28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 544));
    // 0x1c6b2c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c6b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c6b30: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x1c6b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1c6b34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c6b34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c6b38: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c6b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c6b3c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c6b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b40: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c6b40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c6b44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6b48: 0x0  nop
    ctx->pc = 0x1c6b48u;
    // NOP
    // 0x1c6b4c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c6b4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c6b50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c6b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c6b54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c6b54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6b58: 0x0  nop
    ctx->pc = 0x1c6b58u;
    // NOP
    // 0x1c6b5c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c6b5cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c6b60: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c6b60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c6b64: 0xe6800028  swc1        $f0, 0x28($s4)
    ctx->pc = 0x1c6b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
    // 0x1c6b68: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1C6B68u;
    SET_GPR_U32(ctx, 31, 0x1C6B70u);
    ctx->pc = 0x1C6B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6B68u;
            // 0x1c6b6c: 0xae82002c  sw          $v0, 0x2C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6B70u; }
        if (ctx->pc != 0x1C6B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6B70u; }
        if (ctx->pc != 0x1C6B70u) { return; }
    }
    ctx->pc = 0x1C6B70u;
label_1c6b70:
    // 0x1c6b70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c6b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b74: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1C6B74u;
    SET_GPR_U32(ctx, 31, 0x1C6B7Cu);
    ctx->pc = 0x1C6B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6B74u;
            // 0x1c6b78: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6B7Cu; }
        if (ctx->pc != 0x1C6B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6B7Cu; }
        if (ctx->pc != 0x1C6B7Cu) { return; }
    }
    ctx->pc = 0x1C6B7Cu;
label_1c6b7c:
    // 0x1c6b7c: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C6B7Cu;
    SET_GPR_U32(ctx, 31, 0x1C6B84u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6B84u; }
        if (ctx->pc != 0x1C6B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6B84u; }
        if (ctx->pc != 0x1C6B84u) { return; }
    }
    ctx->pc = 0x1C6B84u;
label_1c6b84:
    // 0x1c6b84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6b88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c6b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b8c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c6b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b90: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1c6b90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c6b94: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1c6b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1c6b98: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1c6b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1c6b9c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c6b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c6ba0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c6ba0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6ba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6ba8: 0x0  nop
    ctx->pc = 0x1c6ba8u;
    // NOP
    // 0x1c6bac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c6bacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c6bb0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c6bb0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c6bb4: 0x0  nop
    ctx->pc = 0x1c6bb4u;
    // NOP
    // 0x1c6bb8: 0x0  nop
    ctx->pc = 0x1c6bb8u;
    // NOP
    // 0x1c6bbc: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1C6BBCu;
    SET_GPR_U32(ctx, 31, 0x1C6BC4u);
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6BC4u; }
        if (ctx->pc != 0x1C6BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6BC4u; }
        if (ctx->pc != 0x1C6BC4u) { return; }
    }
    ctx->pc = 0x1C6BC4u;
label_1c6bc4:
    // 0x1c6bc4: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C6BC4u;
    SET_GPR_U32(ctx, 31, 0x1C6BCCu);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6BCCu; }
        if (ctx->pc != 0x1C6BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6BCCu; }
        if (ctx->pc != 0x1C6BCCu) { return; }
    }
    ctx->pc = 0x1C6BCCu;
label_1c6bcc:
    // 0x1c6bcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6bd0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c6bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c6bd4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c6bd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c6bd8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1c6bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1c6bdc: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x1c6bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1c6be0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c6be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c6be4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c6be4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c6be8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c6be8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6bec: 0x0  nop
    ctx->pc = 0x1c6becu;
    // NOP
    // 0x1c6bf0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1c6bf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c6bf4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c6bf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c6bf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6bfc: 0x0  nop
    ctx->pc = 0x1c6bfcu;
    // NOP
    // 0x1c6c00: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c6c00u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c6c04: 0x0  nop
    ctx->pc = 0x1c6c04u;
    // NOP
    // 0x1c6c08: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c6c08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c6c0c: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C6C0Cu;
    SET_GPR_U32(ctx, 31, 0x1C6C14u);
    ctx->pc = 0x1C6C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6C0Cu;
            // 0x1c6c10: 0xe66005b4  swc1        $f0, 0x5B4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1460), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6C14u; }
        if (ctx->pc != 0x1C6C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6C14u; }
        if (ctx->pc != 0x1C6C14u) { return; }
    }
    ctx->pc = 0x1C6C14u;
label_1c6c14:
    // 0x1c6c14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6c18: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c6c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c6c1c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1c6c1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c6c20: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1c6c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x1c6c24: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x1c6c24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1c6c28: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x1c6c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x1c6c2c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c6c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1c6c30: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1c6c30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6c34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c6c34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6c38: 0x0  nop
    ctx->pc = 0x1c6c38u;
    // NOP
    // 0x1c6c3c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c6c3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c6c40: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1c6c40u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c6c44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6c48: 0x0  nop
    ctx->pc = 0x1c6c48u;
    // NOP
    // 0x1c6c4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c6c4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c6c50: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C6C50u;
    SET_GPR_U32(ctx, 31, 0x1C6C58u);
    ctx->pc = 0x1C6C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6C50u;
            // 0x1c6c54: 0xe6600634  swc1        $f0, 0x634($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1588), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6C58u; }
        if (ctx->pc != 0x1C6C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6C58u; }
        if (ctx->pc != 0x1C6C58u) { return; }
    }
    ctx->pc = 0x1C6C58u;
label_1c6c58:
    // 0x1c6c58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6c5c: 0x0  nop
    ctx->pc = 0x1c6c5cu;
    // NOP
    // 0x1c6c60: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c6c60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c6c64: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1c6c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1c6c68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6c6c: 0x0  nop
    ctx->pc = 0x1c6c6cu;
    // NOP
    // 0x1c6c70: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c6c70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c6c74: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c6c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c6c78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6c7c: 0x0  nop
    ctx->pc = 0x1c6c7cu;
    // NOP
    // 0x1c6c80: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c6c80u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c6c84: 0x0  nop
    ctx->pc = 0x1c6c84u;
    // NOP
    // 0x1c6c88: 0x0  nop
    ctx->pc = 0x1c6c88u;
    // NOP
    // 0x1c6c8c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C6C8Cu;
    SET_GPR_U32(ctx, 31, 0x1C6C94u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6C94u; }
        if (ctx->pc != 0x1C6C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6C94u; }
        if (ctx->pc != 0x1C6C94u) { return; }
    }
    ctx->pc = 0x1C6C94u;
label_1c6c94:
    // 0x1c6c94: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1c6c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1c6c98: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1c6c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1c6c9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c6c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c6ca0: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1c6ca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1c6ca4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1c6ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c6ca8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1c6ca8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1c6cac: 0xa7c306fa  sh          $v1, 0x6FA($fp)
    ctx->pc = 0x1c6cacu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 1786), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c6cb0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1c6cb0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1c6cb4:
    // 0x1c6cb4: 0x0  nop
    ctx->pc = 0x1c6cb4u;
    // NOP
    // 0x1c6cb8: 0x86c305ae  lh          $v1, 0x5AE($s6)
    ctx->pc = 0x1c6cb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 1454)));
    // 0x1c6cbc: 0x2e3182a  slt         $v1, $s7, $v1
    ctx->pc = 0x1c6cbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c6cc0: 0x1460ff53  bnez        $v1, . + 4 + (-0xAD << 2)
    ctx->pc = 0x1C6CC0u;
    {
        const bool branch_taken_0x1c6cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6cc0) {
            ctx->pc = 0x1C6A10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c6a10;
        }
    }
    ctx->pc = 0x1C6CC8u;
    // 0x1c6cc8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1c6cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c6ccc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c6cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c6cd0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1c6cd0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c6cd4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1c6cd4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c6cd8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1c6cd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c6cdc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1c6cdcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c6ce0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1c6ce0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c6ce4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c6ce4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c6ce8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c6ce8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6cec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c6cecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6cf0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c6cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6CF4u;
            // 0x1c6cf8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6CFCu;
}
