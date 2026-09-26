#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Correct__8CFishObjFP6CCPolyif
// Address: 0x313380 - 0x313564
void Correct__8CFishObjFP6CCPolyif_0x313380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Correct__8CFishObjFP6CCPolyif_0x313380");
#endif

    switch (ctx->pc) {
        case 0x3133d4u: goto label_3133d4;
        case 0x31342cu: goto label_31342c;
        case 0x31347cu: goto label_31347c;
        case 0x3134f4u: goto label_3134f4;
        case 0x313504u: goto label_313504;
        case 0x313510u: goto label_313510;
        default: break;
    }

    ctx->pc = 0x313380u;

    // 0x313380: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x313380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x313384: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x313384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x313388: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x313388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x31338c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x31338cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x313390: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x313390u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313394: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x313394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x313398: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x313398u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31339c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x31339cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3133a0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3133a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3133a4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3133a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3133a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3133a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3133ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3133acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3133b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3133b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3133b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3133b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3133b8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3133b8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3133bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3133bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3133c0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3133c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3133c4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3133c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3133c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3133c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3133cc: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x3133CCu;
    {
        const bool branch_taken_0x3133cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3133D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3133CCu;
            // 0x3133d0: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3133cc) {
            ctx->pc = 0x313518u;
            goto label_313518;
        }
    }
    ctx->pc = 0x3133D4u;
label_3133d4:
    // 0x3133d4: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x3133d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x3133d8: 0xc6570014  lwc1        $f23, 0x14($s2)
    ctx->pc = 0x3133d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3133dc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x3133dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x3133e0: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x3133e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3133e4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3133e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3133e8: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x3133e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3133ec: 0x0  nop
    ctx->pc = 0x3133ecu;
    // NOP
    // 0x3133f0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3133F0u;
    {
        const bool branch_taken_0x3133f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3133F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3133F0u;
            // 0x3133f4: 0x26530014  addiu       $s3, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3133f0) {
            ctx->pc = 0x313400u;
            goto label_313400;
        }
    }
    ctx->pc = 0x3133F8u;
    // 0x3133f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3133F8u;
    {
        const bool branch_taken_0x3133f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3133FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3133F8u;
            // 0x3133fc: 0x4600bd86  mov.s       $f22, $f23 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3133f8) {
            ctx->pc = 0x313404u;
            goto label_313404;
        }
    }
    ctx->pc = 0x313400u;
label_313400:
    // 0x313400: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x313400u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_313404:
    // 0x313404: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x313404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x313408: 0x0  nop
    ctx->pc = 0x313408u;
    // NOP
    // 0x31340c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x31340Cu;
    {
        const bool branch_taken_0x31340c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31340c) {
            ctx->pc = 0x31341Cu;
            goto label_31341c;
        }
    }
    ctx->pc = 0x313414u;
    // 0x313414: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x313414u;
    {
        const bool branch_taken_0x313414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313414u;
            // 0x313418: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313414) {
            ctx->pc = 0x313424u;
            goto label_313424;
        }
    }
    ctx->pc = 0x31341Cu;
label_31341c:
    // 0x31341c: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x31341cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x313420: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x313420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_313424:
    // 0x313424: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x313424u;
    SET_GPR_U32(ctx, 31, 0x31342Cu);
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31342Cu; }
        if (ctx->pc != 0x31342Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31342Cu; }
        if (ctx->pc != 0x31342Cu) { return; }
    }
    ctx->pc = 0x31342Cu;
label_31342c:
    // 0x31342c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x31342cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x313430: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x313430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x313434: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x313434u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313438: 0x7a4a0010  lq          $t2, 0x10($s2)
    ctx->pc = 0x313438u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x31343c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x31343cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x313440: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x313440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x313444: 0x46160040  add.s       $f1, $f0, $f22
    ctx->pc = 0x313444u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x313448: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x313448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31344c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x31344cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313450: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x313450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x313454: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x313454u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313458: 0x26540010  addiu       $s4, $s2, 0x10
    ctx->pc = 0x313458u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x31345c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x31345cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x313460: 0x7cca0000  sq          $t2, 0x0($a2)
    ctx->pc = 0x313460u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 10));
    // 0x313464: 0x7cea0000  sq          $t2, 0x0($a3)
    ctx->pc = 0x313464u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 10));
    // 0x313468: 0x4602b801  sub.s       $f0, $f23, $f2
    ctx->pc = 0x313468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[2]);
    // 0x31346c: 0x240a0009  addiu       $t2, $zero, 0x9
    ctx->pc = 0x31346cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x313470: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x313470u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x313474: 0xc053794  jal         func_14DE50
    ctx->pc = 0x313474u;
    SET_GPR_U32(ctx, 31, 0x31347Cu);
    ctx->pc = 0x313478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313474u;
            // 0x313478: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31347Cu; }
        if (ctx->pc != 0x31347Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31347Cu; }
        if (ctx->pc != 0x31347Cu) { return; }
    }
    ctx->pc = 0x31347Cu;
label_31347c:
    // 0x31347c: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x31347Cu;
    {
        const bool branch_taken_0x31347c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x31347c) {
            ctx->pc = 0x3134E0u;
            goto label_3134e0;
        }
    }
    ctx->pc = 0x313484u;
    // 0x313484: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x313484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x313488: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x313488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31348c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x31348cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x313490: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x313490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313494: 0x460110c0  add.s       $f3, $f2, $f1
    ctx->pc = 0x313494u;
    ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x313498: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x313498u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31349c: 0x0  nop
    ctx->pc = 0x31349cu;
    // NOP
    // 0x3134a0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x3134A0u;
    {
        const bool branch_taken_0x3134a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3134A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3134A0u;
            // 0x3134a4: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3134a0) {
            ctx->pc = 0x3134E0u;
            goto label_3134e0;
        }
    }
    ctx->pc = 0x3134A8u;
    // 0x3134a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3134a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3134ac: 0xc6420034  lwc1        $f2, 0x34($s2)
    ctx->pc = 0x3134acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3134b0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x3134b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x3134b4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3134b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3134b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3134b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3134bc: 0x0  nop
    ctx->pc = 0x3134bcu;
    // NOP
    // 0x3134c0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x3134c0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3134c4: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x3134c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x3134c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3134c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3134cc: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x3134ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x3134d0: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x3134d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3134d4: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x3134d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3134d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3134d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3134dc: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x3134dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_3134e0:
    // 0x3134e0: 0x26530030  addiu       $s3, $s2, 0x30
    ctx->pc = 0x3134e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x3134e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3134e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3134e8: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x3134e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3134ec: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x3134ECu;
    SET_GPR_U32(ctx, 31, 0x3134F4u);
    ctx->pc = 0x3134F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3134ECu;
            // 0x3134f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3134F4u; }
        if (ctx->pc != 0x3134F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3134F4u; }
        if (ctx->pc != 0x3134F4u) { return; }
    }
    ctx->pc = 0x3134F4u;
label_3134f4:
    // 0x3134f4: 0x4615a302  mul.s       $f12, $f20, $f21
    ctx->pc = 0x3134f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x3134f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3134f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3134fc: 0xc041c4a  jal         func_107128
    ctx->pc = 0x3134FCu;
    SET_GPR_U32(ctx, 31, 0x313504u);
    ctx->pc = 0x313500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3134FCu;
            // 0x313500: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313504u; }
        if (ctx->pc != 0x313504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313504u; }
        if (ctx->pc != 0x313504u) { return; }
    }
    ctx->pc = 0x313504u;
label_313504:
    // 0x313504: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x313504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313508: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x313508u;
    SET_GPR_U32(ctx, 31, 0x313510u);
    ctx->pc = 0x31350Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313508u;
            // 0x31350c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313510u; }
        if (ctx->pc != 0x313510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313510u; }
        if (ctx->pc != 0x313510u) { return; }
    }
    ctx->pc = 0x313510u;
label_313510:
    // 0x313510: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x313510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x313514: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x313514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_313518:
    // 0x313518: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x313518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x31351c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x31351cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x313520: 0x1460ffac  bnez        $v1, . + 4 + (-0x54 << 2)
    ctx->pc = 0x313520u;
    {
        const bool branch_taken_0x313520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x313524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313520u;
            // 0x313524: 0x2b19021  addu        $s2, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313520) {
            ctx->pc = 0x3133D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3133d4;
        }
    }
    ctx->pc = 0x313528u;
    // 0x313528: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x313528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31352c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x31352cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x313530: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x313530u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x313534: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x313534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x313538: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x313538u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31353c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x31353cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x313540: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x313540u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x313544: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x313544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x313548: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x313548u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31354c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x31354cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x313550: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x313550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x313554: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x313554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x313558: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x313558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31355c: 0x3e00008  jr          $ra
    ctx->pc = 0x31355Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31355Cu;
            // 0x313560: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x313564u;
}
