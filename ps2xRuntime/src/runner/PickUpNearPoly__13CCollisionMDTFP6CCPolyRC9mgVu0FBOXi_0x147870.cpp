#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PickUpNearPoly__13CCollisionMDTFP6CCPolyRC9mgVu0FBOXi
// Address: 0x147870 - 0x147aa8
void PickUpNearPoly__13CCollisionMDTFP6CCPolyRC9mgVu0FBOXi_0x147870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PickUpNearPoly__13CCollisionMDTFP6CCPolyRC9mgVu0FBOXi_0x147870");
#endif

    switch (ctx->pc) {
        case 0x1479ccu: goto label_1479cc;
        case 0x1479e0u: goto label_1479e0;
        case 0x1479f4u: goto label_1479f4;
        default: break;
    }

    ctx->pc = 0x147870u;

    // 0x147870: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x147870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x147874: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x147874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x147878: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x147878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14787c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14787cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x147880: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x147880u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147884: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x147884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x147888: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x147888u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14788c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14788cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x147890: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x147890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x147894: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x147894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x147898: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x147898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x14789c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14789Cu;
    {
        const bool branch_taken_0x14789c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1478A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14789Cu;
            // 0x1478a0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14789c) {
            ctx->pc = 0x1478ACu;
            goto label_1478ac;
        }
    }
    ctx->pc = 0x1478A4u;
    // 0x1478a4: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x1478A4u;
    {
        const bool branch_taken_0x1478a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1478A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1478A4u;
            // 0x1478a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1478a4) {
            ctx->pc = 0x147A84u;
            goto label_147a84;
        }
    }
    ctx->pc = 0x1478ACu;
label_1478ac:
    // 0x1478ac: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x1478acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1478b0: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x1478b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1478b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1478b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1478b8: 0x0  nop
    ctx->pc = 0x1478b8u;
    // NOP
    // 0x1478bc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1478BCu;
    {
        const bool branch_taken_0x1478bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1478bc) {
            ctx->pc = 0x1478CCu;
            goto label_1478cc;
        }
    }
    ctx->pc = 0x1478C4u;
    // 0x1478c4: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1478C4u;
    {
        const bool branch_taken_0x1478c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1478C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1478C4u;
            // 0x1478c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1478c4) {
            ctx->pc = 0x147A84u;
            goto label_147a84;
        }
    }
    ctx->pc = 0x1478CCu;
label_1478cc:
    // 0x1478cc: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x1478ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1478d0: 0xc6a00014  lwc1        $f0, 0x14($s5)
    ctx->pc = 0x1478d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1478d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1478d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1478d8: 0x0  nop
    ctx->pc = 0x1478d8u;
    // NOP
    // 0x1478dc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1478DCu;
    {
        const bool branch_taken_0x1478dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1478dc) {
            ctx->pc = 0x1478ECu;
            goto label_1478ec;
        }
    }
    ctx->pc = 0x1478E4u;
    // 0x1478e4: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1478E4u;
    {
        const bool branch_taken_0x1478e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1478E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1478E4u;
            // 0x1478e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1478e4) {
            ctx->pc = 0x147A84u;
            goto label_147a84;
        }
    }
    ctx->pc = 0x1478ECu;
label_1478ec:
    // 0x1478ec: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x1478ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1478f0: 0xc6a00018  lwc1        $f0, 0x18($s5)
    ctx->pc = 0x1478f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1478f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1478f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1478f8: 0x0  nop
    ctx->pc = 0x1478f8u;
    // NOP
    // 0x1478fc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1478FCu;
    {
        const bool branch_taken_0x1478fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1478fc) {
            ctx->pc = 0x14790Cu;
            goto label_14790c;
        }
    }
    ctx->pc = 0x147904u;
    // 0x147904: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x147904u;
    {
        const bool branch_taken_0x147904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147904u;
            // 0x147908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147904) {
            ctx->pc = 0x147A84u;
            goto label_147a84;
        }
    }
    ctx->pc = 0x14790Cu;
label_14790c:
    // 0x14790c: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x14790cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147910: 0xc6a00020  lwc1        $f0, 0x20($s5)
    ctx->pc = 0x147910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147914: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147914u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147918: 0x0  nop
    ctx->pc = 0x147918u;
    // NOP
    // 0x14791c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x14791Cu;
    {
        const bool branch_taken_0x14791c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14791c) {
            ctx->pc = 0x14792Cu;
            goto label_14792c;
        }
    }
    ctx->pc = 0x147924u;
    // 0x147924: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x147924u;
    {
        const bool branch_taken_0x147924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147924u;
            // 0x147928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147924) {
            ctx->pc = 0x147A84u;
            goto label_147a84;
        }
    }
    ctx->pc = 0x14792Cu;
label_14792c:
    // 0x14792c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x14792cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147930: 0xc6a00024  lwc1        $f0, 0x24($s5)
    ctx->pc = 0x147930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147934: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147938: 0x0  nop
    ctx->pc = 0x147938u;
    // NOP
    // 0x14793c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x14793Cu;
    {
        const bool branch_taken_0x14793c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14793c) {
            ctx->pc = 0x14794Cu;
            goto label_14794c;
        }
    }
    ctx->pc = 0x147944u;
    // 0x147944: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x147944u;
    {
        const bool branch_taken_0x147944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147944u;
            // 0x147948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147944) {
            ctx->pc = 0x147A84u;
            goto label_147a84;
        }
    }
    ctx->pc = 0x14794Cu;
label_14794c:
    // 0x14794c: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x14794cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147950: 0xc6a00028  lwc1        $f0, 0x28($s5)
    ctx->pc = 0x147950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147954: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147958: 0x0  nop
    ctx->pc = 0x147958u;
    // NOP
    // 0x14795c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x14795Cu;
    {
        const bool branch_taken_0x14795c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14795c) {
            ctx->pc = 0x14796Cu;
            goto label_14796c;
        }
    }
    ctx->pc = 0x147964u;
    // 0x147964: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x147964u;
    {
        const bool branch_taken_0x147964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147964u;
            // 0x147968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147964) {
            ctx->pc = 0x147A84u;
            goto label_147a84;
        }
    }
    ctx->pc = 0x14796Cu;
label_14796c:
    // 0x14796c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x14796cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147970: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x147970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x147974: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x147974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x147978: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x147978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14797c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14797cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147980: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x147980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147984: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x147984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x147988: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x147988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14798c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x14798cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x147990: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x147990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147994: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x147994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x147998: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x147998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x14799c: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x14799cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1479a0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1479a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1479a4: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x1479a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1479a8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1479a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1479ac: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x1479acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1479b0: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1479b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1479b4: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x1479b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x1479b8: 0xd88a0000  lqc2        $vf10, 0x0($a0)
    ctx->pc = 0x1479b8u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1479bc: 0xd86b0000  lqc2        $vf11, 0x0($v1)
    ctx->pc = 0x1479bcu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1479c0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1479C0u;
    {
        const bool branch_taken_0x1479c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1479C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1479C0u;
            // 0x1479c4: 0x8eb20040  lw          $s2, 0x40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1479c0) {
            ctx->pc = 0x147A70u;
            goto label_147a70;
        }
    }
    ctx->pc = 0x1479C8u;
    // 0x1479c8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1479c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1479cc:
    // 0x1479cc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1479ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1479d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1479d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1479d4: 0x26470010  addiu       $a3, $s2, 0x10
    ctx->pc = 0x1479d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1479d8: 0xc04bd34  jal         func_12F4D0
    ctx->pc = 0x1479D8u;
    SET_GPR_U32(ctx, 31, 0x1479E0u);
    ctx->pc = 0x1479DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1479D8u;
            // 0x1479dc: 0x26480020  addiu       $t0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4D0u;
    if (runtime->hasFunction(0x12F4D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1479E0u; }
        if (ctx->pc != 0x1479E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPf_0x12f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1479E0u; }
        if (ctx->pc != 0x1479E0u) { return; }
    }
    ctx->pc = 0x1479E0u;
label_1479e0:
    // 0x1479e0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1479e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1479e4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1479e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1479e8: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1479e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1479ec: 0xc04bca4  jal         func_12F290
    ctx->pc = 0x1479ECu;
    SET_GPR_U32(ctx, 31, 0x1479F4u);
    ctx->pc = 0x1479F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1479ECu;
            // 0x1479f0: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F290u;
    if (runtime->hasFunction(0x12F290u)) {
        auto targetFn = runtime->lookupFunction(0x12F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1479F4u; }
        if (ctx->pc != 0x1479F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgClipBox__FPfPfPfPf_0x12f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1479F4u; }
        if (ctx->pc != 0x1479F4u) { return; }
    }
    ctx->pc = 0x1479F4u;
label_1479f4:
    // 0x1479f4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1479F4u;
    {
        const bool branch_taken_0x1479f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1479f4) {
            ctx->pc = 0x147A64u;
            goto label_147a64;
        }
    }
    ctx->pc = 0x1479FCu;
    // 0x1479fc: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x1479fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x147a00: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x147a00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x147a04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x147a04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x147a08: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x147a08u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x147a0c: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x147a0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x147a10: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x147a10u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
    // 0x147a14: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x147a14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x147a18: 0x7e820020  sq          $v0, 0x20($s4)
    ctx->pc = 0x147a18u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 2));
    // 0x147a1c: 0x86420040  lh          $v0, 0x40($s2)
    ctx->pc = 0x147a1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x147a20: 0xa6820040  sh          $v0, 0x40($s4)
    ctx->pc = 0x147a20u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x147a24: 0x86420042  lh          $v0, 0x42($s2)
    ctx->pc = 0x147a24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
    // 0x147a28: 0xa6820042  sh          $v0, 0x42($s4)
    ctx->pc = 0x147a28u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 66), (uint16_t)GPR_U32(ctx, 2));
    // 0x147a2c: 0x86420044  lh          $v0, 0x44($s2)
    ctx->pc = 0x147a2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x147a30: 0xa6820044  sh          $v0, 0x44($s4)
    ctx->pc = 0x147a30u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x147a34: 0x86420046  lh          $v0, 0x46($s2)
    ctx->pc = 0x147a34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x147a38: 0xa6820046  sh          $v0, 0x46($s4)
    ctx->pc = 0x147a38u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x147a3c: 0x96420048  lhu         $v0, 0x48($s2)
    ctx->pc = 0x147a3cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x147a40: 0xa6820048  sh          $v0, 0x48($s4)
    ctx->pc = 0x147a40u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 72), (uint16_t)GPR_U32(ctx, 2));
    // 0x147a44: 0x8642004a  lh          $v0, 0x4A($s2)
    ctx->pc = 0x147a44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 74)));
    // 0x147a48: 0xa682004a  sh          $v0, 0x4A($s4)
    ctx->pc = 0x147a48u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 74), (uint16_t)GPR_U32(ctx, 2));
    // 0x147a4c: 0xc640004c  lwc1        $f0, 0x4C($s2)
    ctx->pc = 0x147a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147a50: 0xe680004c  swc1        $f0, 0x4C($s4)
    ctx->pc = 0x147a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 76), bits); }
    // 0x147a54: 0x7a420030  lq          $v0, 0x30($s2)
    ctx->pc = 0x147a54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x147a58: 0x7e820030  sq          $v0, 0x30($s4)
    ctx->pc = 0x147a58u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), GPR_VEC(ctx, 2));
    // 0x147a5c: 0x1a600008  blez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x147A5Cu;
    {
        const bool branch_taken_0x147a5c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x147A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147A5Cu;
            // 0x147a60: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147a5c) {
            ctx->pc = 0x147A80u;
            goto label_147a80;
        }
    }
    ctx->pc = 0x147A64u;
label_147a64:
    // 0x147a64: 0x0  nop
    ctx->pc = 0x147a64u;
    // NOP
    // 0x147a68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x147a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x147a6c: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x147a6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_147a70:
    // 0x147a70: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x147a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x147a74: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x147a74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x147a78: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x147A78u;
    {
        const bool branch_taken_0x147a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147A78u;
            // 0x147a7c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147a78) {
            ctx->pc = 0x1479CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1479cc;
        }
    }
    ctx->pc = 0x147A80u;
label_147a80:
    // 0x147a80: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x147a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_147a84:
    // 0x147a84: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x147a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x147a88: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x147a88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x147a8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x147a8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x147a90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x147a90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x147a94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x147a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147a98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x147a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147a9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x147a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x147AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147AA0u;
            // 0x147aa4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x147AA8u;
}
