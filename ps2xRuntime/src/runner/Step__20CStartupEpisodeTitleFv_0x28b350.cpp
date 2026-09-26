#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__20CStartupEpisodeTitleFv
// Address: 0x28b350 - 0x28b5ec
void Step__20CStartupEpisodeTitleFv_0x28b350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__20CStartupEpisodeTitleFv_0x28b350");
#endif

    switch (ctx->pc) {
        case 0x28b55cu: goto label_28b55c;
        case 0x28b594u: goto label_28b594;
        case 0x28b5d8u: goto label_28b5d8;
        default: break;
    }

    ctx->pc = 0x28b350u;

    // 0x28b350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28b350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28b354: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28b354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28b358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28b358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28b35c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28b35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28b360: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x28b360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x28b364: 0x1060009c  beqz        $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x28B364u;
    {
        const bool branch_taken_0x28b364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B364u;
            // 0x28b368: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b364) {
            ctx->pc = 0x28B5D8u;
            goto label_28b5d8;
        }
    }
    ctx->pc = 0x28B36Cu;
    // 0x28b36c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x28b36cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28b370: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B370u;
    {
        const bool branch_taken_0x28b370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b370) {
            ctx->pc = 0x28B380u;
            goto label_28b380;
        }
    }
    ctx->pc = 0x28B378u;
    // 0x28b378: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x28B378u;
    {
        const bool branch_taken_0x28b378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B378u;
            // 0x28b37c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b378) {
            ctx->pc = 0x28B5DCu;
            goto label_28b5dc;
        }
    }
    ctx->pc = 0x28B380u;
label_28b380:
    // 0x28b380: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x28b380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x28b384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28b384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b388: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x28b388u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x28b38c: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x28B38Cu;
    {
        const bool branch_taken_0x28b38c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28b38c) {
            ctx->pc = 0x28B464u;
            goto label_28b464;
        }
    }
    ctx->pc = 0x28B394u;
    // 0x28b394: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x28b394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b398: 0x3c023d08  lui         $v0, 0x3D08
    ctx->pc = 0x28b398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15624 << 16));
    // 0x28b39c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x28b39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x28b3a0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28b3a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28b3a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28b3a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28b3a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28b3ac: 0x0  nop
    ctx->pc = 0x28b3acu;
    // NOP
    // 0x28b3b0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28b3b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x28b3b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28b3b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28b3b8: 0x0  nop
    ctx->pc = 0x28b3b8u;
    // NOP
    // 0x28b3bc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28B3BCu;
    {
        const bool branch_taken_0x28b3bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28B3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B3BCu;
            // 0x28b3c0: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3bc) {
            ctx->pc = 0x28B3C8u;
            goto label_28b3c8;
        }
    }
    ctx->pc = 0x28B3C4u;
    // 0x28b3c4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x28b3c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_28b3c8:
    // 0x28b3c8: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x28b3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28b3cc: 0x3c023d08  lui         $v0, 0x3D08
    ctx->pc = 0x28b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15624 << 16));
    // 0x28b3d0: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x28b3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x28b3d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28b3d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28b3d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28b3dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28b3dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b3e0: 0x0  nop
    ctx->pc = 0x28b3e0u;
    // NOP
    // 0x28b3e4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x28b3e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x28b3e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28b3e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28b3ec: 0x0  nop
    ctx->pc = 0x28b3ecu;
    // NOP
    // 0x28b3f0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28B3F0u;
    {
        const bool branch_taken_0x28b3f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28B3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B3F0u;
            // 0x28b3f4: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3f0) {
            ctx->pc = 0x28B3FCu;
            goto label_28b3fc;
        }
    }
    ctx->pc = 0x28B3F8u;
    // 0x28b3f8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x28b3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_28b3fc:
    // 0x28b3fc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x28b3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28b400: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x28b400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x28b404: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x28b404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x28b408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28b408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b40c: 0x0  nop
    ctx->pc = 0x28b40cu;
    // NOP
    // 0x28b410: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28b410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28b414: 0x0  nop
    ctx->pc = 0x28b414u;
    // NOP
    // 0x28b418: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x28B418u;
    {
        const bool branch_taken_0x28b418 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b418) {
            ctx->pc = 0x28B464u;
            goto label_28b464;
        }
    }
    ctx->pc = 0x28B420u;
    // 0x28b420: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x28b420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28b424: 0x3c023ccc  lui         $v0, 0x3CCC
    ctx->pc = 0x28b424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15564 << 16));
    // 0x28b428: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x28b428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x28b42c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28b42cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28b430: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28b430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28b434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28b434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b438: 0x0  nop
    ctx->pc = 0x28b438u;
    // NOP
    // 0x28b43c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x28b43cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x28b440: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28b440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28b444: 0x0  nop
    ctx->pc = 0x28b444u;
    // NOP
    // 0x28b448: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x28B448u;
    {
        const bool branch_taken_0x28b448 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28B44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B448u;
            // 0x28b44c: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b448) {
            ctx->pc = 0x28B464u;
            goto label_28b464;
        }
    }
    ctx->pc = 0x28B450u;
    // 0x28b450: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x28b450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x28b454: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x28b454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x28b458: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x28b458u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x28b45c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28b45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28b460: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x28b460u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_28b464:
    // 0x28b464: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x28b464u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28b468: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28b468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28b46c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28B46Cu;
    {
        const bool branch_taken_0x28b46c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28b46c) {
            ctx->pc = 0x28B494u;
            goto label_28b494;
        }
    }
    ctx->pc = 0x28B474u;
    // 0x28b474: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x28b474u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x28b478: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28b478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28b47c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x28b47cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x28b480: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x28b480u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x28b484: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B484u;
    {
        const bool branch_taken_0x28b484 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x28b484) {
            ctx->pc = 0x28B494u;
            goto label_28b494;
        }
    }
    ctx->pc = 0x28B48Cu;
    // 0x28b48c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28b490: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x28b490u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_28b494:
    // 0x28b494: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x28b494u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28b498: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28b498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28b49c: 0x14620038  bne         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x28B49Cu;
    {
        const bool branch_taken_0x28b49c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28b49c) {
            ctx->pc = 0x28B580u;
            goto label_28b580;
        }
    }
    ctx->pc = 0x28B4A4u;
    // 0x28b4a4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x28b4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b4a8: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x28b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x28b4ac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x28b4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x28b4b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x28b4b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28b4b4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x28b4b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28b4b8: 0x0  nop
    ctx->pc = 0x28b4b8u;
    // NOP
    // 0x28b4bc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x28b4bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x28b4c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28b4c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28b4c4: 0x0  nop
    ctx->pc = 0x28b4c4u;
    // NOP
    // 0x28b4c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28B4C8u;
    {
        const bool branch_taken_0x28b4c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28B4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B4C8u;
            // 0x28b4cc: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4c8) {
            ctx->pc = 0x28B4D4u;
            goto label_28b4d4;
        }
    }
    ctx->pc = 0x28B4D0u;
    // 0x28b4d0: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x28b4d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_28b4d4:
    // 0x28b4d4: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x28b4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28b4d8: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x28b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x28b4dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x28b4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x28b4e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28b4e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28b4e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28b4e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b4e8: 0x0  nop
    ctx->pc = 0x28b4e8u;
    // NOP
    // 0x28b4ec: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x28b4ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x28b4f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28b4f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28b4f4: 0x0  nop
    ctx->pc = 0x28b4f4u;
    // NOP
    // 0x28b4f8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28B4F8u;
    {
        const bool branch_taken_0x28b4f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28B4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B4F8u;
            // 0x28b4fc: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4f8) {
            ctx->pc = 0x28B504u;
            goto label_28b504;
        }
    }
    ctx->pc = 0x28B500u;
    // 0x28b500: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x28b500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_28b504:
    // 0x28b504: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x28b504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28b508: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28b508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x28b50c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28b50cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b510: 0x0  nop
    ctx->pc = 0x28b510u;
    // NOP
    // 0x28b514: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28b514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28b518: 0x0  nop
    ctx->pc = 0x28b518u;
    // NOP
    // 0x28b51c: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x28B51Cu;
    {
        const bool branch_taken_0x28b51c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b51c) {
            ctx->pc = 0x28B580u;
            goto label_28b580;
        }
    }
    ctx->pc = 0x28B524u;
    // 0x28b524: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x28b524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28b528: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x28b528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x28b52c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x28b52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x28b530: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28b530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28b534: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28b534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b538: 0x0  nop
    ctx->pc = 0x28b538u;
    // NOP
    // 0x28b53c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x28b53cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x28b540: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28b540u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28b544: 0x0  nop
    ctx->pc = 0x28b544u;
    // NOP
    // 0x28b548: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x28B548u;
    {
        const bool branch_taken_0x28b548 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28B54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B548u;
            // 0x28b54c: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b548) {
            ctx->pc = 0x28B580u;
            goto label_28b580;
        }
    }
    ctx->pc = 0x28B550u;
    // 0x28b550: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x28b550u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x28b554: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x28B554u;
    SET_GPR_U32(ctx, 31, 0x28B55Cu);
    ctx->pc = 0x28B558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B554u;
            // 0x28b558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B55Cu; }
        if (ctx->pc != 0x28B55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B55Cu; }
        if (ctx->pc != 0x28B55Cu) { return; }
    }
    ctx->pc = 0x28B55Cu;
label_28b55c:
    // 0x28b55c: 0xe62001b8  swc1        $f0, 0x1B8($s1)
    ctx->pc = 0x28b55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 440), bits); }
    // 0x28b560: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28b560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28b564: 0xae2217e4  sw          $v0, 0x17E4($s1)
    ctx->pc = 0x28b564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6116), GPR_U32(ctx, 2));
    // 0x28b568: 0xae2017e8  sw          $zero, 0x17E8($s1)
    ctx->pc = 0x28b568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6120), GPR_U32(ctx, 0));
    // 0x28b56c: 0xae20018c  sw          $zero, 0x18C($s1)
    ctx->pc = 0x28b56cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 0));
    // 0x28b570: 0xae200188  sw          $zero, 0x188($s1)
    ctx->pc = 0x28b570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 0));
    // 0x28b574: 0xae220134  sw          $v0, 0x134($s1)
    ctx->pc = 0x28b574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 2));
    // 0x28b578: 0xae220138  sw          $v0, 0x138($s1)
    ctx->pc = 0x28b578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
    // 0x28b57c: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x28b57cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_28b580:
    // 0x28b580: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x28b580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b584: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x28b584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x28b588: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28b588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28b58c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x28B58Cu;
    SET_GPR_U32(ctx, 31, 0x28B594u);
    ctx->pc = 0x28B590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B58Cu;
            // 0x28b590: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B594u; }
        if (ctx->pc != 0x28B594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B594u; }
        if (ctx->pc != 0x28B594u) { return; }
    }
    ctx->pc = 0x28B594u;
label_28b594:
    // 0x28b594: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x28b594u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x28b598: 0x24030169  addiu       $v1, $zero, 0x169
    ctx->pc = 0x28b598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 361));
    // 0x28b59c: 0x624023  subu        $t0, $v1, $v0
    ctx->pc = 0x28b59cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28b5a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x28b5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28b5a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28b5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b5a8: 0x24040152  addiu       $a0, $zero, 0x152
    ctx->pc = 0x28b5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
    // 0x28b5ac: 0x240301a0  addiu       $v1, $zero, 0x1A0
    ctx->pc = 0x28b5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x28b5b0: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x28b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x28b5b4: 0xace80194  sw          $t0, 0x194($a3)
    ctx->pc = 0x28b5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 404), GPR_U32(ctx, 8));
    // 0x28b5b8: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x28b5b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x28b5bc: 0xace61b30  sw          $a2, 0x1B30($a3)
    ctx->pc = 0x28b5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6960), GPR_U32(ctx, 6));
    // 0x28b5c0: 0xace51b34  sw          $a1, 0x1B34($a3)
    ctx->pc = 0x28b5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6964), GPR_U32(ctx, 5));
    // 0x28b5c4: 0xace41b38  sw          $a0, 0x1B38($a3)
    ctx->pc = 0x28b5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6968), GPR_U32(ctx, 4));
    // 0x28b5c8: 0xace31b3c  sw          $v1, 0x1B3C($a3)
    ctx->pc = 0x28b5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6972), GPR_U32(ctx, 3));
    // 0x28b5cc: 0xace21b40  sw          $v0, 0x1B40($a3)
    ctx->pc = 0x28b5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6976), GPR_U32(ctx, 2));
    // 0x28b5d0: 0xc054ee8  jal         func_153BA0
    ctx->pc = 0x28B5D0u;
    SET_GPR_U32(ctx, 31, 0x28B5D8u);
    ctx->pc = 0x28B5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B5D0u;
            // 0x28b5d4: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B5D8u; }
        if (ctx->pc != 0x28B5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B5D8u; }
        if (ctx->pc != 0x28B5D8u) { return; }
    }
    ctx->pc = 0x28B5D8u;
label_28b5d8:
    // 0x28b5d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28b5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28b5dc:
    // 0x28b5dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28b5dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b5e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28b5e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x28B5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B5E4u;
            // 0x28b5e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B5ECu;
}
